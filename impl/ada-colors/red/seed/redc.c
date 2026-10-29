#include "paleo.h"
#include <math.h>
typedef rstr *P522;
typedef struct R524 R524;
typedef struct R524 *P523;
struct R524 {  rt_int kind; rt_int line; rt_int ival; P522 s;  };
typedef struct A526 A526;
struct A526 { rt_int lo, hi, lo2, hi2; P523 *p; };
typedef A526 *P525;
typedef struct R528 R528;
typedef struct R528 *P527;
struct R528 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P522 name; P522 tag; P527 a; P527 b; P527 c; P527 d; P527 e; P527 next;  };
typedef struct R530 R530;
typedef struct R530 *P529;
struct R530 {  P522 lo; P522 hi; P522 lo2; P522 hi2; P522 slen; rt_int mlo; rt_int mhi; int hasm; P527 args;  };
typedef struct R532 R532;
typedef struct R532 *P531;
typedef struct R534 R534;
typedef struct R534 *P533;
struct R534 {  P522 name; P531 t; P529 c; P527 st; P533 next;  };
typedef struct R536 R536;
typedef struct R536 *P535;
typedef struct R538 R538;
typedef struct R538 *P537;
struct R538 {  P522 name; rt_int mode; P531 t; P529 c; P522 cfield; P537 next;  };
typedef struct A540 A540;
struct A540 { rt_int lo, hi, lo2, hi2; P535 *p; };
typedef A540 *P539;
struct R536 {  rt_int kind; P522 name; P531 t; P529 c; P522 access; P522 cname; int ro_flag; rt_int mvalue; int hasmv; P527 st; P527 decl; P537 params; P531 result; rt_int depth; rt_int level; int byref; P535 members; P535 mnext; P527 binds; P535 insts; P539 env; P535 chain; P535 stack;  };
struct R532 {  rt_int kind; P522 name; P527 lits; P531 elem; P531 idx; P531 idx2; P529 elemcons; P527 elemst; P531 under; P527 tparams; P527 ocap; P533 fields; P531 target; P527 decl; P522 cname; int forward; int defined; int helpers; P535 initp; P535 finalp; P535 tpsyms; P535 gen; P535 gbinds; P531 next;  };
typedef struct R542 R542;
typedef struct R542 *P541;
struct R542 {  P522 s; P541 next;  };
typedef struct R544 R544;
typedef struct R544 *P543;
struct R544 {  P541 head; P541 tail;  };
typedef struct R546 R546;
typedef struct R546 *P545;
struct R546 {  P522 match; P522 label; rt_int depth; P545 next;  };
typedef struct R548 R548;
typedef struct R548 *P547;
struct R548 {  P527 d; P547 next;  };
typedef struct R550 R550;
typedef struct R550 *P549;
struct R550 {  P527 d; P522 w; P549 next;  };
typedef struct R552 R552;
typedef struct R552 *P551;
struct R552 {  rt_int depth; P527 imps; int all_imp; P551 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P522 result_;
 P522 t_604;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_607;
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
 rstr letters_608;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_609;
 rstr r_610;
 rt_int i_611;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_615;
 rstr kw_616;
 rstr w_617;
 rt_int i_618;
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
 P543 result_;
 P543 b_622;
};
struct f_put_27fr { int dummy;
 P543 b_25;
 rstr *s_26;
 P541 l_624;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P543 b_30;
 P541 l_626;
};
struct f_splice_34fr { int dummy;
 P543 a_32;
 P543 b_33;
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
 P523 t_628;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_630;
 rt_int j_631;
 rt_int n_632;
 int c_633;
 rstr w_634;
 rt_int k_635;
 rstr w_639;
 rt_int k_640;
 rstr two_644;
};
struct f_read_source_45fr { int dummy;
 rstr line_645;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P527 result_;
 P527 x_646;
};
struct f_append_52fr { int dummy;
 P527 *head_49;
 P527 *tail_50;
 P527 x_51;
};
struct f_list_len_54fr { int dummy;
 P527 l_53;
 rt_int result_;
 rt_int n_648;
 P527 p_649;
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
 P522 result_;
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
 P522 result_;
};
struct f_name_node_77fr { int dummy;
 P527 result_;
 P527 x_650;
};
struct f_id_list_78fr { int dummy;
 P527 result_;
 P527 head_651;
 P527 tail_652;
};
struct f_p_subtype_79fr { int dummy;
 P527 result_;
 rt_int line_653;
 P527 x_654;
 rstr w_655;
 P527 head_656;
 P527 tail_657;
 P527 head_658;
 P527 tail_659;
 int more_660;
 P527 names_661;
 P527 st_662;
 P527 cmp_663;
 P527 head_664;
 P527 tail_665;
 int more_666;
 P527 lit_667;
};
struct f_actual_params_80fr { int dummy;
 P527 result_;
 P527 head_668;
 P527 tail_669;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P527 result_;
 P527 head_670;
 P527 tail_671;
 int more_672;
};
struct f_binop_88fr { int dummy;
 P522 op_84;
 P527 l_85;
 P527 r_86;
 rt_int line_87;
 P527 result_;
 P527 x_673;
};
struct f_expr_89fr { int dummy;
 P527 result_;
 P527 l_674;
 P522 op_675;
 rt_int line_676;
};
struct f_expr_and_90fr { int dummy;
 P527 result_;
 P527 l_677;
 rt_int line_678;
};
struct f_expr_not_91fr { int dummy;
 P527 result_;
 P527 x_679;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P527 result_;
 P527 l_680;
 P522 op_681;
 rt_int line_682;
};
struct f_expr_add_95fr { int dummy;
 P527 result_;
 P527 l_683;
 P522 op_684;
 rt_int line_685;
};
struct f_expr_mul_96fr { int dummy;
 P527 result_;
 P527 l_686;
 P522 op_687;
 rt_int line_688;
};
struct f_expr_pow_97fr { int dummy;
 P527 result_;
 P527 l_689;
 rt_int line_690;
};
struct f_expr_prefix_98fr { int dummy;
 P527 result_;
 P527 x_691;
};
struct f_postfix_99fr { int dummy;
 P527 result_;
 P527 p_692;
 rt_int line_693;
 P527 x_694;
 P527 head_695;
 P527 tail_696;
 int more_697;
 P527 lo_698;
 P527 r_699;
 P527 x_700;
 P527 x_701;
 P527 x_702;
};
struct f_primary_100fr { int dummy;
 P527 result_;
 rt_int line_703;
 P527 x_704;
 rt_int k_705;
 rstr w_706;
 P527 head_707;
 P527 tail_708;
 int more_709;
};
struct f_constructor_item_101fr { int dummy;
 P527 result_;
 rt_int line_710;
 P527 it_711;
 P527 first_712;
 P527 keys_713;
 P527 ktail_714;
 P527 lab_715;
 rt_int save_716;
 P527 more_717;
 P527 tail2_718;
 int ok_719;
 int go_720;
 P527 l2_721;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P527 result_;
 P527 head_722;
 P527 tail_723;
};
struct f_body_element_104fr { int dummy;
 P527 result_;
 P527 x_724;
};
struct f_declaration_105fr { int dummy;
 P527 result_;
 rt_int line_725;
 P527 head_726;
 P527 tail_727;
 P527 names_728;
 P527 x_729;
};
struct f_object_decl_106fr { int dummy;
 P527 result_;
 rt_int line_730;
 int is_var_731;
 P527 names_732;
 P527 st_733;
 P527 init_734;
 P527 loc_735;
 rt_int loc_kind_736;
 P527 head_737;
 P527 tail_738;
 P527 x_739;
};
struct f_abbrev_decl_107fr { int dummy;
 P527 result_;
 P527 x_740;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_741;
};
struct f_type_decl_109fr { int dummy;
 P527 result_;
 rt_int line_742;
 P522 name_743;
 P527 params_744;
 P527 x_745;
 P527 tts_746;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P527 result_;
 P527 head_747;
 P527 tail_748;
 int more_749;
 rt_int mode_750;
 P527 names_751;
 P527 ntail_752;
 P527 st_753;
 P527 p_754;
};
struct f_imports_list_114fr { int dummy;
 P527 owner_113;
 int result_;
 P527 head_755;
 P527 tail_756;
 int more_757;
 int ro_758;
 P527 x_759;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P522 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P527 result_;
 rt_int line_760;
 P527 x_761;
 int is_abn_762;
 int is_func_763;
 int dummy_764;
};
struct f_capsule_decl_119fr { int dummy;
 P527 result_;
 P527 x_765;
 int dummy_766;
 P527 head_767;
 P527 tail_768;
 int more_769;
 P527 n_770;
};
struct f_formal_tt_120fr { int dummy;
 P527 result_;
 P527 head_771;
 P527 tail_772;
 int more_773;
};
struct f_generic_decl_121fr { int dummy;
 P527 result_;
 P527 x_774;
 P527 head_775;
 P527 tail_776;
 int more_777;
 P527 names_778;
 rt_int kind_779;
 P527 st_780;
 P527 p_781;
 P522 nm_782;
 P527 st_783;
};
struct f_task_decl_122fr { int dummy;
 P527 result_;
 P527 x_784;
 int dummy_785;
};
struct f_expose_decl_123fr { int dummy;
 P527 result_;
 P527 x_786;
 P527 head_787;
 P527 tail_788;
 int more_789;
 P527 n_790;
 P527 head_791;
 P527 tail_792;
 int more_793;
 P527 n_794;
 P527 tgt_795;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P527 result_;
 P527 labels_796;
 P527 ltail_797;
 P522 match_798;
 P527 s_799;
};
struct f_unlabeled_statement_127fr { int dummy;
 P527 result_;
 rt_int line_800;
 P527 x_801;
 P527 head_802;
 P527 tail_803;
 P527 invs_804;
 P527 itail_805;
 int more_806;
 P527 target_807;
};
struct f_arm_131fr { int dummy;
 P527 cond_128;
 P527 b_129;
 rt_int line_130;
 P527 result_;
 P527 x_808;
};
struct f_if_stmt_132fr { int dummy;
 P527 result_;
 P527 x_809;
 P527 head_810;
 P527 tail_811;
 P527 cond_812;
 int go_813;
};
struct f_case_stmt_133fr { int dummy;
 P527 result_;
 P527 x_814;
 P527 head_815;
 P527 tail_816;
 P527 labs_817;
 P527 ltail_818;
 int more_819;
 P527 l_820;
};
struct f_repeat_stmt_134fr { int dummy;
 P527 result_;
 P527 x_821;
};
struct f_guard_stmt_135fr { int dummy;
 P527 result_;
 P527 x_822;
 P527 head_823;
 P527 tail_824;
 P527 h_825;
};
struct f_program_136fr { int dummy;
 P527 result_;
 P527 head_826;
 P527 tail_827;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_828;
 rt_int i_829;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P535 result_;
 P535 y_833;
};
struct f_lookup_decl_142fr { int dummy;
 P527 d_141;
 P535 result_;
 P535 y_834;
};
struct f_define_145fr { int dummy;
 P535 y_143;
 rt_int line_144;
 rt_int h_835;
 P535 z_836;
};
struct f_overloadable_147fr { int dummy;
 P535 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P537 a_148;
 P537 b_149;
 int result_;
 P537 x_837;
 P537 y_838;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P522 name_154;
 P535 result_;
 P535 y_839;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P531 result_;
 P531 t_841;
};
struct f_new_cons_158fr { int dummy;
 P529 result_;
 P529 c_843;
};
struct f_same_lits_161fr { int dummy;
 P527 a_159;
 P527 b_160;
 int result_;
 P527 x_845;
 P527 y_846;
};
struct f_same_164fr { int dummy;
 P531 a_162;
 P531 b_163;
 int result_;
 P533 f_847;
 P533 g_848;
};
struct f_base_of_166fr { int dummy;
 P531 t_165;
 P531 result_;
};
struct f_base_cons_169fr { int dummy;
 P531 t_167;
 P529 c_168;
 P529 result_;
};
struct f_kind_name_171fr { int dummy;
 P531 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P531 got_172;
 P531 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P531 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P531 t_178;
 rstr result_;
 P533 f_851;
 P522 s_852;
};
struct f_declare_ctype_181fr { int dummy;
 P531 t_180;
 P531 u_853;
 P531 target_854;
 P527 p_855;
 P522 fs_856;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_857;
 P527 head_858;
 P527 tail_859;
 rt_int start_860;
 rt_int i_861;
 P527 lit_865;
};
struct f_lit_index_185fr { int dummy;
 P527 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_866;
 P527 l_867;
};
struct f_resolve_subtype_188fr { int dummy;
 P527 st_186;
 P529 *c_187;
 P529 c_187v;
 P531 result_;
 P531 t_868;
 int ok_869;
 P531 dummy_870;
 P529 ic_872;
 P529 ic2_873;
 P529 ec_874;
 P531 it_875;
 P531 et_876;
 P529 ec_877;
 P527 comp_878;
 P533 tail_879;
 P529 cc_880;
 P533 f_881;
 P527 gt_883;
 P529 ec_884;
 P535 y_885;
};
struct f_opened_190fr { int dummy;
 P531 t_189;
 int result_;
 P547 c_886;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_887;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P541 l_888;
 P522 r_889;
};
struct f_new_type_200fr { int dummy;
 P535 y_197;
 P527 st_198;
 P529 *c_199;
 P529 c_199v;
 P531 result_;
 P527 d_890;
 P527 p_891;
 P529 uc_892;
 P535 z_893;
 P529 zc_894;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P531 t_202;
 P529 c_203;
};
struct f_init_call_207fr { int dummy;
 P535 y_205;
 rstr *lval_206;
 rstr result_;
 P522 link_895;
 rt_int i_896;
};
struct f_needs_fin_209fr { int dummy;
 P531 t_208;
 int result_;
 P533 f_900;
};
struct f_fin_code_212fr { int dummy;
 rstr *lval_210;
 P531 t_211;
 rstr result_;
 P522 r_901;
 rstr i_902;
 P533 f_903;
};
struct f_tparam_type_215fr { int dummy;
 P531 t_213;
 rstr *name_214;
 P531 result_;
 P535 z_904;
};
struct f_make_storage_219fr { int dummy;
 rstr *lval_216;
 P531 t_217;
 P529 c_218;
 P527 p_905;
 P527 a_906;
 P529 uc_907;
 P531 ut_908;
 P531 at_909;
 P531 pt_910;
 rstr v_911;
 P541 saved_912;
 P541 l1_913;
 P541 l2_914;
 rstr i_917;
 P533 f_918;
};
struct f_manifest_222fr { int dummy;
 P527 e_220;
 int *ok_221;
 int ok_221v;
 rt_int result_;
 rt_int a_919;
 rt_int b_920;
 int ok2_921;
 P535 y_922;
};
struct f_mcopy_224fr { int dummy;
 P531 t_223;
 rstr result_;
 rstr ct_923;
 rstr name_924;
 P541 l_925;
};
struct f_composite_226fr { int dummy;
 P531 t_225;
 int result_;
};
struct f_assign_code_231fr { int dummy;
 rstr *lval_227;
 P531 t_228;
 rstr *v_229;
 P529 c_230;
 rstr result_;
};
struct f_copy_code_234fr { int dummy;
 P531 t_232;
 rstr *v_233;
 rstr result_;
};
struct f_eq_code_238fr { int dummy;
 P531 t_235;
 rstr *a_236;
 rstr *b_237;
 rstr result_;
};
struct f_elem_assign_242fr { int dummy;
 rstr *lval_239;
 P531 t_240;
 rstr *v_241;
 rstr result_;
};
struct f_seen_name_245fr { int dummy;
 P541 l_243;
 rstr *s_244;
 int result_;
 P541 p_927;
};
struct f_emit_helpers_246fr { int dummy;
 P531 order_928;
 P531 t_929;
 P541 done_930;
 P541 l_931;
 rstr c_932;
};
struct f_helper_bodies_248fr { int dummy;
 P531 t_247;
 rstr c_934;
 P543 b_935;
 P531 e_936;
 P527 p_937;
 P522 pc_938;
 P533 f_939;
 P522 conds_940;
 rstr fn_941;
 rstr fn_942;
};
struct f_declare_body_250fr { int dummy;
 P527 elems_249;
 P527 e_943;
 P535 y_944;
 P535 y_945;
 P535 y_946;
 P531 t_947;
 P535 y_948;
 P535 g_949;
 P539 snap_950;
 rt_int i_954;
 P535 g_958;
 P535 y_959;
};
struct f_manifest_const_252fr { int dummy;
 P527 d_251;
 int ok_960;
 rt_int v_961;
 P535 y_962;
 P529 c_963;
};
struct f_exported_256fr { int dummy;
 P527 d_253;
 rstr *name_254;
 int *ro_255;
 int ro_255v;
 int result_;
 P527 p_964;
};
struct f_copy_sym_258fr { int dummy;
 P535 y_257;
 P535 result_;
 P535 z_965;
};
struct f_gen_capsule_260fr { int dummy;
 P527 d_259;
 P535 y_967;
};
struct f_capsule_params_264fr { int dummy;
 P527 d_261;
 P527 args_262;
 rt_int line_263;
 P527 p_968;
 P527 a_969;
 P531 t_970;
 P531 vt_971;
 P529 c_972;
 P522 lv_973;
 P529 lc_974;
 int ro_975;
 P535 y_976;
 rstr f_977;
 rstr g_978;
 P535 y_979;
 rstr v_980;
 rstr access_981;
};
struct f_elaborate_capsule_269fr { int dummy;
 P527 d_265;
 P535 y_266;
 P527 args_267;
 P527 owner_268;
 P547 cr_982;
 P551 ctx_983;
 P535 m_984;
 P527 p_985;
 int ro_986;
 P549 w_989;
 P535 z_991;
};
struct f_exports_op_272fr { int dummy;
 P527 d_270;
 rstr *op_271;
 int result_;
 P527 p_992;
};
struct f_renamed_275fr { int dummy;
 P527 d_273;
 P535 z_274;
 P522 result_;
 P527 r_993;
};
struct f_gen_expose_277fr { int dummy;
 P527 d_276;
 P535 y_994;
 P535 m_995;
 P527 p_996;
 P527 r_997;
 P535 inst_998;
 int found_999;
 P535 z_1000;
 int found_1001;
 P535 z_1002;
};
struct f_finish_ptr_279fr { int dummy;
 P531 t_278;
 P527 d_1003;
 P527 p_1004;
 P529 c_1005;
 rstr dummy_1006;
 P535 y_1007;
};
struct f_declare_subprogram_281fr { int dummy;
 P527 d_280;
};
struct f_build_subprogram_283fr { int dummy;
 P527 d_282;
 P535 result_;
 P535 y_1008;
 P527 p_1009;
 P537 tail_1010;
 P537 pm_1011;
 P529 rc_1013;
};
struct f_element_285fr { int dummy;
 P527 e_284;
 rt_int k_1014;
 P531 t_1015;
 rstr c_1016;
};
struct f_storage_288fr { int dummy;
 rstr *name_286;
 P531 t_287;
 rstr result_;
 rstr g_1017;
 rstr f_1018;
};
struct f_bind_291fr { int dummy;
 P535 y_289;
 rstr *access_290;
};
struct f_var_decl_293fr { int dummy;
 P527 d_292;
 P529 c_1019;
 P531 t_1020;
 P535 y_1021;
 rstr access_1022;
 P531 it_1023;
 rstr n_1024;
 P531 vt_1025;
 rstr v_1026;
};
struct f_open_fin_295fr { int dummy;
 rstr *fc_294;
 rstr f_1027;
 P541 l_1028;
};
struct f_close_fins_297fr { int dummy;
 P541 saved_296;
};
struct f_const_decl_299fr { int dummy;
 P527 d_298;
 P529 c_1030;
 P531 t_1031;
 P531 vt_1032;
 P535 y_1033;
 int ok_1034;
 rstr v_1035;
 rstr access_1036;
};
struct f_subprogram_301fr { int dummy;
 P527 d_300;
};
struct f_gen_subprogram_304fr { int dummy;
 P527 d_302;
 P535 y_303;
 P543 saved_code_1037;
 P543 saved_fields_1038;
 int saved_in_1039;
 P535 saved_sym_1040;
 P545 saved_exits_1041;
 rt_int saved_frames_1042;
 P522 args_1043;
 P537 pm_1044;
 P541 saved_handlers_1045;
 P541 saved_cleanups_1046;
 P551 ctx_1047;
 P522 head_1048;
 P522 frame_1049;
 P522 parent_1050;
 P522 copy_back_1051;
 P522 pfin_1052;
 P541 saved_fins_1053;
 rstr ct_1055;
 rstr f_1056;
 P535 p_1057;
};
struct f_waits_of_306fr { int dummy;
 P527 d_305;
 rstr result_;
 P549 w_1058;
};
struct f_task_waits_308fr { int dummy;
 P527 elems_307;
 rstr result_;
 P527 e_1059;
 P522 r_1060;
};
struct f_await_tasks_310fr { int dummy;
 P527 elems_309;
 rstr w_1061;
};
struct f_capsule_elements_312fr { int dummy;
 P527 elems_311;
 P527 e_1062;
};
struct f_body_elements_314fr { int dummy;
 P527 elems_313;
};
struct f_gen_body_316fr { int dummy;
 P527 elems_315;
 P541 saved_1063;
};
struct f_pop_frames_318fr { int dummy;
 rt_int upto_317;
 rt_int i_1064;
 P541 c_1065;
};
struct f_push_cleanup_320fr { int dummy;
 rstr *s_319;
 P541 c_1066;
};
struct f_pop_cleanup_321fr { int dummy;
};
struct f_gen_statement_323fr { int dummy;
 P527 s_322;
 P522 label_1068;
 P545 x_1069;
};
struct f_st_assign_325fr { int dummy;
 P527 s_324;
 P522 lv_1072;
 P531 t_1073;
 P531 vt_1074;
 P529 c_1075;
 int ro_1076;
 rstr lo_1077;
 rstr hi_1078;
 rstr v_1079;
 rstr v_1080;
};
struct f_st_call_327fr { int dummy;
 P527 s_326;
 P527 c_1081;
 P531 t_1082;
 P527 x_1083;
};
struct f_st_if_329fr { int dummy;
 P527 s_328;
 P527 a_1084;
 int first_1085;
 P531 t_1086;
 rstr c_1087;
};
struct f_st_case_331fr { int dummy;
 P527 s_330;
 P531 st_1088;
 P531 vt_1089;
 int first_1090;
 P527 a_1091;
 rstr sel_1092;
 rstr tmp_1093;
 P527 lab_1094;
 P522 conds_1095;
 rstr v_1096;
 rstr lo_1097;
 rstr hi_1098;
};
struct f_st_repeat_333fr { int dummy;
 P527 s_332;
 P531 t_1099;
 P529 c_1100;
 rstr cond_1101;
 rstr access_1102;
 rstr lov_1103;
 rstr hiv_1104;
 rstr it_1105;
 P535 y_1106;
};
struct f_st_exit_335fr { int dummy;
 P527 s_334;
 P545 x_1107;
};
struct f_st_return_337fr { int dummy;
 P527 s_336;
 P531 vt_1108;
 rstr v_1109;
};
struct f_exc_id_340fr { int dummy;
 rstr *name_338;
 rt_int line_339;
 rstr result_;
 P535 y_1110;
};
struct f_st_guard_342fr { int dummy;
 P527 s_341;
 P527 h_1111;
 int first_1112;
 P541 hv_1113;
 rstr f_1114;
 rstr x_1115;
 P527 n_1117;
 P522 conds_1118;
};
struct f_st_alloc_344fr { int dummy;
 P527 s_343;
 P522 lv_1119;
 P531 t_1120;
 P531 target_1121;
 P531 vt_1122;
 P529 c_1123;
 P529 tc_1124;
 int ro_1125;
 P527 d_1126;
 P527 p_1127;
 P527 a_1128;
 rstr tcn_1129;
 rstr cell_1130;
 rstr fn_1131;
 rstr v_1132;
 rstr pv_1133;
 P535 y_1134;
 rstr v_1135;
};
struct f_act_ref_346fr { int dummy;
 P527 e_345;
 rstr result_;
 P522 lv_1136;
 P531 t_1137;
 P529 c_1138;
 int ro_1139;
 rstr v_1140;
};
struct f_st_create_348fr { int dummy;
 P527 s_347;
 P535 y_1141;
 P537 pm_1142;
 P527 a_1143;
 P522 lv_1144;
 P531 lt_1145;
 P531 vt_1146;
 P529 lc_1147;
 int ro_1148;
 P531 at_1149;
 P529 ac_1150;
 int aro_1151;
 P522 act_1152;
 rstr nf_1153;
 P522 link_1154;
 rt_int i_1155;
 rstr v_1159;
};
struct f_hidden_var_352fr { int dummy;
 rstr *name_349;
 P531 t_350;
 rstr *place_351;
 P535 y_1160;
};
struct f_user_create_358fr { int dummy;
 P527 s_353;
 P535 y_354;
 rstr *uv_355;
 P531 ut_356;
 rstr *nf_357;
 P531 t_1161;
 P543 saved_1162;
 P543 hook_1163;
 P527 un_1164;
 rstr hn_1165;
 rstr aa_1166;
 rstr uname_1167;
 rstr aname_1168;
 P527 start_1169;
 P527 an_1170;
};
struct f_wait_alt_363fr { int dummy;
 P527 inv_359;
 rstr *arr_360;
 rt_int i_361;
 int mixed_362;
 rstr result_;
 P522 lv_1171;
 P531 t_1172;
 P531 vt_1173;
 P529 c_1174;
 int ro_1175;
 P527 fn_1176;
 P527 args_1177;
 rstr slot_1178;
 P522 dv_1179;
 P531 dt_1180;
 rstr tmp_1181;
 rstr v_1182;
 rstr v_1183;
};
struct f_builtin_wait_365fr { int dummy;
 P527 inv_364;
 int result_;
 P522 lv_1184;
 P531 t_1185;
 P529 c_1186;
 int ro_1187;
 P543 saved_1188;
 int ok_1189;
};
struct f_wait_op_370fr { int dummy;
 P527 inv_366;
 rstr *op_367;
 rstr *q_368;
 int is_stmt_369;
 rstr result_;
 P527 x_1192;
 P527 f_1193;
 P527 qn_1194;
 P531 t_1195;
 rstr r_1196;
};
struct f_user_wait_375fr { int dummy;
 P527 s_371;
 rstr *arr_372;
 rstr *w_373;
 rt_int n_374;
 P527 a_1197;
 rt_int i_1198;
 P522 tests_1199;
 P522 revokes_1200;
 P527 inv_1201;
 P527 st_1202;
 P529 c_1203;
 P531 qt_1204;
 rstr qname_1205;
 P535 y_1206;
 rstr access_1207;
};
struct f_st_wait_377fr { int dummy;
 P527 s_376;
 P527 a_1208;
 rt_int n_1209;
 int first_1210;
 P543 inits_1211;
 int user_1212;
 rstr arr_1213;
 rstr w_1214;
 P527 inv_1215;
 P527 inv_1216;
 P522 conds_1217;
 rt_int i_1218;
};
struct f_call_node_381fr { int dummy;
 rstr *name_378;
 P527 arg_379;
 rt_int line_380;
 P527 result_;
 P527 x_1222;
 P527 f_1223;
};
struct f_user_region_383fr { int dummy;
 P527 s_382;
 P531 t_1224;
 rstr f_1225;
 rstr lock_1226;
 rstr unlock_1227;
};
struct f_st_region_385fr { int dummy;
 P527 s_384;
 P522 lv_1228;
 P531 t_1229;
 P529 c_1230;
 int ro_1231;
 rstr lk_1232;
 rstr f_1233;
};
struct f_gparam_388fr { int dummy;
 P527 g_386;
 rstr *name_387;
 P527 result_;
 P527 p_1234;
};
struct f_bind_sym_390fr { int dummy;
 P527 p_389;
 P535 result_;
 P535 y_1235;
};
struct f_same_binds_393fr { int dummy;
 P535 a_391;
 P535 b_392;
 int result_;
 P535 x_1236;
 P535 y_1237;
};
struct f_same_binding_396fr { int dummy;
 P535 a_394;
 P535 b_395;
 int result_;
};
struct f_tt_binds_401fr { int dummy;
 P527 gd_397;
 P527 formals_398;
 P527 actuals_399;
 rt_int line_400;
 P535 result_;
 P527 f_1238;
 P527 a_1239;
 P535 binds_1240;
 P529 c_1241;
 P531 at_1242;
 P527 p_1243;
 P535 b_1244;
 P527 st_1245;
 int ok_1246;
};
struct f_generic_use_403fr { int dummy;
 P527 st_402;
 int result_;
};
struct f_infer_from_408fr { int dummy;
 P527 gd_404;
 P527 pat_405;
 P531 t_406;
 P535 known_407;
 P535 result_;
 P535 binds_1247;
 P527 e_1248;
 P527 tp_1249;
 P522 nm_1250;
 P535 q_1251;
 int have_1252;
 P535 g_1253;
 P535 b_1254;
};
struct f_instantiate_type_414fr { int dummy;
 P535 g_409;
 P527 tt_410;
 P527 args_411;
 P529 *c_412;
 P529 c_412v;
 rt_int line_413;
 P531 result_;
 P527 gd_1255;
 P527 pat_1256;
 P535 binds_1257;
 P535 inst_1258;
 P531 t_1259;
 P547 saved_caps_1260;
 P539 saved_env_1261;
 P535 b_1262;
 P535 y_1263;
 P529 yc_1264;
};
struct f_instantiate_419fr { int dummy;
 P535 g_415;
 P527 tt_416;
 P527 args_417;
 rt_int line_418;
 P535 result_;
 P527 gd_1266;
 P527 pat_1267;
 P535 binds_1268;
 P527 f_1269;
 P527 a_1270;
 P527 fp_1271;
 P535 inst_1272;
 P531 at_1273;
 P529 c_1274;
 P551 saved_fctx_1275;
 int saved_in_1276;
 rt_int saved_level_1277;
 P535 saved_sym_1278;
 P543 saved_code_1279;
 P539 saved_env_1280;
 rstr v_1281;
 int known_1282;
 P535 q_1283;
 P535 b_1284;
 rstr v_1285;
 P535 b_1286;
};
struct f_access_of_421fr { int dummy;
 P535 y_420;
 rstr result_;
 P522 p_1287;
 rt_int i_1288;
};
struct f_import_of_424fr { int dummy;
 P527 l_422;
 rstr *name_423;
 P527 result_;
 P527 p_1292;
};
struct f_check_import_427fr { int dummy;
 P535 y_425;
 rt_int line_426;
 int result_;
 P551 c_1293;
 int ro_1294;
 P527 imp_1295;
};
struct f_c_ident_429fr { int dummy;
 rstr *s_428;
 rstr result_;
};
struct f_deref_432fr { int dummy;
 rstr *base_430;
 P531 t_431;
 rstr result_;
};
struct f_is_lvalue_434fr { int dummy;
 P527 e_433;
 int result_;
 P535 y_1296;
};
struct f_lvalue_440fr { int dummy;
 P527 e_435;
 P522 *code_436;
 P522 code_436v;
 P531 *t_437;
 P531 t_437v;
 P529 *c_438;
 P529 c_438v;
 int *ro_439;
 int ro_439v;
 P522 base_1297;
 P531 bt_1298;
 P529 bc_1299;
 P535 y_1300;
};
struct f_select_on_448fr { int dummy;
 rstr *base_441;
 P531 bt_442;
 P527 e_443;
 int *ro_444;
 P522 *code_445;
 P522 code_445v;
 P531 *t_446;
 P531 t_446v;
 P529 *c_447;
 P529 c_447v;
 P527 p_1301;
 P533 f_1302;
};
struct f_index_on_457fr { int dummy;
 rstr *base_449;
 P531 bt_450;
 P527 e_451;
 int *ro_452;
 int lv_453;
 P522 *code_454;
 P522 code_454v;
 P531 *t_455;
 P531 t_455v;
 P529 *c_456;
 P529 c_456v;
 P527 a_1303;
 P531 it_1304;
 rstr i_1305;
 rstr j_1306;
 rstr lo_1307;
 rstr hi_1308;
 rstr i_1309;
 rstr i_1310;
};
struct f_own_attribute_459fr { int dummy;
 P527 e_458;
 int result_;
 P543 saved_1311;
 P531 bt_1312;
 int ok_1313;
 rstr base_1316;
 P527 p_1317;
};
struct f_gexpr_463fr { int dummy;
 P527 e_460;
 P531 want_461;
 P531 *t_462;
 P531 t_462v;
 rstr result_;
 rt_int k_1318;
 P522 code_1319;
 P529 c_1320;
 int ro_1321;
 P531 bt_1322;
 rt_int i_1323;
 P535 y_1324;
 int ro_1325;
 P527 call_1326;
 P527 fname_1327;
 rstr a_1328;
 rstr a_1329;
 rstr a_1330;
 P527 nm_1331;
 P535 y_1332;
 rstr base_1333;
 rstr base_1334;
};
struct f_copy_node_465fr { int dummy;
 P527 e_464;
 P527 result_;
 P527 x_1335;
};
struct f_wrap_apply_467fr { int dummy;
 P527 e_466;
 P527 result_;
 P527 x_1337;
};
struct f_c_string_469fr { int dummy;
 rstr *s_468;
 rstr result_;
 rt_int n_1338;
 rt_int i_1339;
 rstr r_1343;
 rt_int j_1344;
 rt_int i_1345;
};
struct f_enum_type_of_472fr { int dummy;
 rstr *lit_470;
 rt_int line_471;
 P531 result_;
 P535 y_1349;
 P529 c_1350;
 P527 st_1351;
};
struct f_attribute_475fr { int dummy;
 P527 e_473;
 P531 *t_474;
 P531 t_474v;
 rstr result_;
 P531 bt_1352;
 P529 c_1353;
 P522 base_1354;
 P535 y_1355;
 P527 st_1356;
};
struct f_gbinop_479fr { int dummy;
 P527 e_476;
 P531 want_477;
 P531 *t_478;
 P531 t_478v;
 rstr result_;
 P522 op_1357;
 P531 ta_1358;
 P531 tb_1359;
 P531 hint_1360;
 P535 uy_1361;
 P527 l_1362;
 P527 r_1363;
 P527 call_1364;
 P527 fname_1365;
 rstr s_1366;
 rstr a_1367;
 rstr a_1368;
 rstr b_1369;
 rstr a_1370;
 rstr b_1371;
 P531 wa_1372;
 P531 wb_1373;
 rstr a_1374;
 rstr b_1375;
 rstr dummy_1376;
 rstr a_1377;
 rstr b_1378;
 P531 ct_1379;
 rstr a_1380;
 rstr b_1381;
};
struct f_constructor_483fr { int dummy;
 P527 e_480;
 P531 want_481;
 P531 *t_482;
 P531 t_482v;
 rstr result_;
 P527 it_1382;
 P533 f_1383;
 P531 vt_1384;
 P522 s_1385;
 rstr v_1386;
 rstr tmp_1387;
 rstr ct_1388;
 rstr et_1389;
 P522 parts_1390;
 rstr lo_1391;
 rstr hi_1392;
 rstr v_1393;
 rt_int i_1394;
 rstr v_1398;
 rstr tmp_1399;
 P522 parts_1400;
 rstr v_1401;
};
struct f_fits_486fr { int dummy;
 P535 y_484;
 P527 args_485;
 int result_;
 P527 a_1402;
 P537 pm_1403;
 P531 t_1404;
 P543 saved_1405;
 int ok_1406;
 P522 lv_1407;
 P529 lc_1408;
 int ro_1409;
 rstr v_1412;
};
struct f_resolve_overload_491fr { int dummy;
 rstr *name_487;
 P527 args_488;
 int is_stmt_489;
 rt_int line_490;
 P535 result_;
 P535 y_1413;
 P535 first_1414;
 rt_int n_1415;
};
struct f_is_builtin_493fr { int dummy;
 rstr *n_492;
 int result_;
};
struct f_is_low_level_495fr { int dummy;
 rstr *n_494;
 int result_;
};
struct f_me_high_499fr { int dummy;
 P527 tt_496;
 rt_int line_497;
 P531 *t_498;
 P531 t_498v;
 rstr result_;
 P529 c_1416;
};
struct f_type_tag_501fr { int dummy;
 P531 t_500;
 rstr result_;
};
struct f_lock_ref_504fr { int dummy;
 P527 e_502;
 rstr *name_503;
 rstr result_;
 P522 lv_1417;
 P531 t_1418;
 P529 c_1419;
 int ro_1420;
};
struct f_user_op_507fr { int dummy;
 rstr *op_505;
 P527 args_506;
 P535 result_;
 P535 y_1421;
};
struct f_gcall_511fr { int dummy;
 P527 e_508;
 int is_stmt_509;
 P531 *t_510;
 P531 t_510v;
 rstr result_;
 P527 fn_1422;
 P527 tt_1423;
 P535 y_1424;
 P522 args_1425;
 P527 a_1426;
 P537 pm_1427;
 P531 lt_1428;
 P531 vt_1429;
 P522 lv_1430;
 P529 lc_1431;
 int ro_1432;
 P535 alt_1433;
 rt_int i_1434;
 rstr v_1438;
 rstr ct_1439;
 rstr v_1440;
};
struct f_builtin_518fr { int dummy;
 rstr *name_512;
 P527 tt_513;
 P527 args_514;
 rt_int line_515;
 int is_stmt_516;
 P531 *t_517;
 P531 t_517v;
 rstr result_;
 P531 at_1441;
 rt_int n_1442;
 rstr a_1443;
 rstr a_1444;
 rstr a_1445;
 rstr a_1446;
 rstr a_1447;
 rstr n1_1448;
 rstr m1_1449;
 rstr a_1450;
 rstr a_1451;
 P527 last_1452;
 rstr a_1453;
 rstr a_1454;
 P522 lv_1455;
 P529 lc_1456;
 int ro_1457;
 P527 last_1458;
 P522 lv_1459;
 P522 dv_1460;
 P529 lc_1461;
 int ro_1462;
 P531 mt_1463;
 P531 dt_1464;
 rstr v_1465;
 P522 lv_1466;
 P529 lc_1467;
 int ro_1468;
 P531 mt_1469;
 P522 lv_1470;
 P522 dv_1471;
 P522 bv_1472;
 P529 lc_1473;
 int ro_1474;
 P531 mt_1475;
 P531 dt_1476;
 P531 bt_1477;
 rstr v_1478;
 rstr v_1479;
 rstr v_1480;
 rstr v_1481;
 rstr a_1482;
 P522 bv_1483;
 P529 bc_1484;
 int ro_1485;
 P531 bt_1486;
 rstr l_1487;
 P522 pv_1488;
 P529 pc_1489;
 int ro_1490;
 P531 pt_1491;
 rstr dev_1492;
 rstr cmd_1493;
 P522 dv_1494;
 P529 dc_1495;
 int ro_1496;
 P531 dt_1497;
};
struct f_translate_520fr { int dummy;
 P527 units_519;
 P527 u_1498;
 P527 l_1500;
 rstr w_1501;
};
struct f_print_program_521fr { int dummy;
};
static void as_R552(R552 *d, R552 s);
static R552 cp_R552(R552 s);
static int eq_R552(R552 a, R552 b);
static void as_R550(R550 *d, R550 s);
static R550 cp_R550(R550 s);
static int eq_R550(R550 a, R550 b);
static void as_R548(R548 *d, R548 s);
static R548 cp_R548(R548 s);
static int eq_R548(R548 a, R548 b);
static void as_R546(R546 *d, R546 s);
static R546 cp_R546(R546 s);
static int eq_R546(R546 a, R546 b);
static void as_R544(R544 *d, R544 s);
static R544 cp_R544(R544 s);
static int eq_R544(R544 a, R544 b);
static void as_R542(R542 *d, R542 s);
static R542 cp_R542(R542 s);
static int eq_R542(R542 a, R542 b);
static void as_A540(A540 *d, A540 s);
static A540 cp_A540(A540 s);
static int eq_A540(A540 a, A540 b);
static void as_R538(R538 *d, R538 s);
static R538 cp_R538(R538 s);
static int eq_R538(R538 a, R538 b);
static void as_R536(R536 *d, R536 s);
static R536 cp_R536(R536 s);
static int eq_R536(R536 a, R536 b);
static void as_R534(R534 *d, R534 s);
static R534 cp_R534(R534 s);
static int eq_R534(R534 a, R534 b);
static void as_R532(R532 *d, R532 s);
static R532 cp_R532(R532 s);
static int eq_R532(R532 a, R532 b);
static void as_R530(R530 *d, R530 s);
static R530 cp_R530(R530 s);
static int eq_R530(R530 a, R530 b);
static void as_R528(R528 *d, R528 s);
static R528 cp_R528(R528 s);
static int eq_R528(R528 a, R528 b);
static void as_A526(A526 *d, A526 s);
static A526 cp_A526(A526 s);
static int eq_A526(A526 a, A526 b);
static void as_R524(R524 *d, R524 s);
static R524 cp_R524(R524 s);
static int eq_R524(R524 a, R524 b);
static P522 f_mk_3(rstr *s_2);
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
static P543 f_new_buffer_24(void);
static void f_put_27(P543 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P543 b_30);
static void f_splice_34(P543 a_32, P543 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P527 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P527 *head_49, P527 *tail_50, P527 x_51);
static rt_int f_list_len_54(P527 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P522 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P522 f_expect_id_76(void);
static P527 f_name_node_77(void);
static P527 f_id_list_78(void);
static P527 f_p_subtype_79(void);
static P527 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P527 f_actual_tt_83(void);
static P527 f_binop_88(P522 op_84, P527 l_85, P527 r_86, rt_int line_87);
static P527 f_expr_89(void);
static P527 f_expr_and_90(void);
static P527 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P527 f_expr_rel_94(void);
static P527 f_expr_add_95(void);
static P527 f_expr_mul_96(void);
static P527 f_expr_pow_97(void);
static P527 f_expr_prefix_98(void);
static P527 f_postfix_99(void);
static P527 f_primary_100(void);
static P527 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P527 f_body_103(void);
static P527 f_body_element_104(void);
static P527 f_declaration_105(void);
static P527 f_object_decl_106(void);
static P527 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P527 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P527 f_formal_params_112(void);
static int f_imports_list_114(P527 owner_113);
static int f_is_definable_116(rstr *w_115);
static P522 f_definable_name_117(void);
static P527 f_subprogram_decl_118(void);
static P527 f_capsule_decl_119(void);
static P527 f_formal_tt_120(void);
static P527 f_generic_decl_121(void);
static P527 f_task_decl_122(void);
static P527 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P527 f_statement_126(void);
static P527 f_unlabeled_statement_127(void);
static P527 f_arm_131(P527 cond_128, P527 b_129, rt_int line_130);
static P527 f_if_stmt_132(void);
static P527 f_case_stmt_133(void);
static P527 f_repeat_stmt_134(void);
static P527 f_guard_stmt_135(void);
static P527 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P535 f_lookup_140(rstr *name_139);
static P535 f_lookup_decl_142(P527 d_141);
static void f_define_145(P535 y_143, rt_int line_144);
static int f_overloadable_147(P535 y_146);
static int f_same_signature_150(P537 a_148, P537 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P535 f_new_sym_155(rt_int kind_153, P522 name_154);
static P531 f_new_typ_157(rt_int kind_156);
static P529 f_new_cons_158(void);
static int f_same_lits_161(P527 a_159, P527 b_160);
static int f_same_164(P531 a_162, P531 b_163);
static P531 f_base_of_166(P531 t_165);
static P529 f_base_cons_169(P531 t_167, P529 c_168);
static rstr f_kind_name_171(P531 t_170);
static void f_check_type_175(P531 got_172, P531 want_173, rt_int line_174);
static rstr f_ctype_177(P531 t_176);
static rstr f_field_decls_179(P531 t_178);
static void f_declare_ctype_181(P531 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P527 lits_183, rstr *name_184);
static P531 f_resolve_subtype_188(P527 st_186, P529 *c_187);
static int f_opened_190(P531 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P531 f_new_type_200(P535 y_197, P527 st_198, P529 *c_199);
static void f_init_storage_204(rstr *lval_201, P531 t_202, P529 c_203);
static rstr f_init_call_207(P535 y_205, rstr *lval_206);
static int f_needs_fin_209(P531 t_208);
static rstr f_fin_code_212(rstr *lval_210, P531 t_211);
static P531 f_tparam_type_215(P531 t_213, rstr *name_214);
static void f_make_storage_219(rstr *lval_216, P531 t_217, P529 c_218);
static rt_int f_manifest_222(P527 e_220, int *ok_221);
static rstr f_mcopy_224(P531 t_223);
static int f_composite_226(P531 t_225);
static rstr f_assign_code_231(rstr *lval_227, P531 t_228, rstr *v_229, P529 c_230);
static rstr f_copy_code_234(P531 t_232, rstr *v_233);
static rstr f_eq_code_238(P531 t_235, rstr *a_236, rstr *b_237);
static rstr f_elem_assign_242(rstr *lval_239, P531 t_240, rstr *v_241);
static int f_seen_name_245(P541 l_243, rstr *s_244);
static void f_emit_helpers_246(void);
static void f_helper_bodies_248(P531 t_247);
static void f_declare_body_250(P527 elems_249);
static void f_manifest_const_252(P527 d_251);
static int f_exported_256(P527 d_253, rstr *name_254, int *ro_255);
static P535 f_copy_sym_258(P535 y_257);
static void f_gen_capsule_260(P527 d_259);
static void f_capsule_params_264(P527 d_261, P527 args_262, rt_int line_263);
static void f_elaborate_capsule_269(P527 d_265, P535 y_266, P527 args_267, P527 owner_268);
static int f_exports_op_272(P527 d_270, rstr *op_271);
static P522 f_renamed_275(P527 d_273, P535 z_274);
static void f_gen_expose_277(P527 d_276);
static void f_finish_ptr_279(P531 t_278);
static void f_declare_subprogram_281(P527 d_280);
static P535 f_build_subprogram_283(P527 d_282);
static void f_element_285(P527 e_284);
static rstr f_storage_288(rstr *name_286, P531 t_287);
static void f_bind_291(P535 y_289, rstr *access_290);
static void f_var_decl_293(P527 d_292);
static void f_open_fin_295(rstr *fc_294);
static void f_close_fins_297(P541 saved_296);
static void f_const_decl_299(P527 d_298);
static void f_subprogram_301(P527 d_300);
static void f_gen_subprogram_304(P527 d_302, P535 y_303);
static rstr f_waits_of_306(P527 d_305);
static rstr f_task_waits_308(P527 elems_307);
static void f_await_tasks_310(P527 elems_309);
static void f_capsule_elements_312(P527 elems_311);
static void f_body_elements_314(P527 elems_313);
static void f_gen_body_316(P527 elems_315);
static void f_pop_frames_318(rt_int upto_317);
static void f_push_cleanup_320(rstr *s_319);
static void f_pop_cleanup_321(void);
static void f_gen_statement_323(P527 s_322);
static void f_st_assign_325(P527 s_324);
static void f_st_call_327(P527 s_326);
static void f_st_if_329(P527 s_328);
static void f_st_case_331(P527 s_330);
static void f_st_repeat_333(P527 s_332);
static void f_st_exit_335(P527 s_334);
static void f_st_return_337(P527 s_336);
static rstr f_exc_id_340(rstr *name_338, rt_int line_339);
static void f_st_guard_342(P527 s_341);
static void f_st_alloc_344(P527 s_343);
static rstr f_act_ref_346(P527 e_345);
static void f_st_create_348(P527 s_347);
static void f_hidden_var_352(rstr *name_349, P531 t_350, rstr *place_351);
static void f_user_create_358(P527 s_353, P535 y_354, rstr *uv_355, P531 ut_356, rstr *nf_357);
static rstr f_wait_alt_363(P527 inv_359, rstr *arr_360, rt_int i_361, int mixed_362);
static int f_builtin_wait_365(P527 inv_364);
static rstr f_wait_op_370(P527 inv_366, rstr *op_367, rstr *q_368, int is_stmt_369);
static void f_user_wait_375(P527 s_371, rstr *arr_372, rstr *w_373, rt_int n_374);
static void f_st_wait_377(P527 s_376);
static P527 f_call_node_381(rstr *name_378, P527 arg_379, rt_int line_380);
static void f_user_region_383(P527 s_382);
static void f_st_region_385(P527 s_384);
static P527 f_gparam_388(P527 g_386, rstr *name_387);
static P535 f_bind_sym_390(P527 p_389);
static int f_same_binds_393(P535 a_391, P535 b_392);
static int f_same_binding_396(P535 a_394, P535 b_395);
static P535 f_tt_binds_401(P527 gd_397, P527 formals_398, P527 actuals_399, rt_int line_400);
static int f_generic_use_403(P527 st_402);
static P535 f_infer_from_408(P527 gd_404, P527 pat_405, P531 t_406, P535 known_407);
static P531 f_instantiate_type_414(P535 g_409, P527 tt_410, P527 args_411, P529 *c_412, rt_int line_413);
static P535 f_instantiate_419(P535 g_415, P527 tt_416, P527 args_417, rt_int line_418);
static rstr f_access_of_421(P535 y_420);
static P527 f_import_of_424(P527 l_422, rstr *name_423);
static int f_check_import_427(P535 y_425, rt_int line_426);
static rstr f_c_ident_429(rstr *s_428);
static rstr f_deref_432(rstr *base_430, P531 t_431);
static int f_is_lvalue_434(P527 e_433);
static void f_lvalue_440(P527 e_435, P522 *code_436, P531 *t_437, P529 *c_438, int *ro_439);
static void f_select_on_448(rstr *base_441, P531 bt_442, P527 e_443, int *ro_444, P522 *code_445, P531 *t_446, P529 *c_447);
static void f_index_on_457(rstr *base_449, P531 bt_450, P527 e_451, int *ro_452, int lv_453, P522 *code_454, P531 *t_455, P529 *c_456);
static int f_own_attribute_459(P527 e_458);
static rstr f_gexpr_463(P527 e_460, P531 want_461, P531 *t_462);
static P527 f_copy_node_465(P527 e_464);
static P527 f_wrap_apply_467(P527 e_466);
static rstr f_c_string_469(rstr *s_468);
static P531 f_enum_type_of_472(rstr *lit_470, rt_int line_471);
static rstr f_attribute_475(P527 e_473, P531 *t_474);
static rstr f_gbinop_479(P527 e_476, P531 want_477, P531 *t_478);
static rstr f_constructor_483(P527 e_480, P531 want_481, P531 *t_482);
static int f_fits_486(P535 y_484, P527 args_485);
static P535 f_resolve_overload_491(rstr *name_487, P527 args_488, int is_stmt_489, rt_int line_490);
static int f_is_builtin_493(rstr *n_492);
static int f_is_low_level_495(rstr *n_494);
static rstr f_me_high_499(P527 tt_496, rt_int line_497, P531 *t_498);
static rstr f_type_tag_501(P531 t_500);
static rstr f_lock_ref_504(P527 e_502, rstr *name_503);
static P535 f_user_op_507(rstr *op_505, P527 args_506);
static rstr f_gcall_511(P527 e_508, int is_stmt_509, P531 *t_510);
static rstr f_builtin_518(rstr *name_512, P527 tt_513, P527 args_514, rt_int line_515, int is_stmt_516, P531 *t_517);
static void f_translate_520(P527 units_519);
static void f_print_program_521(void);
static int ex_compile_error_1;
static P525 g_toks_553;
static rt_int g_ntoks_554;
static rt_int g_tpos_555;
static rt_int g_src_line_556;
static P539 g_table_557;
static P539 g_genv_558;
static P535 g_all_insts_559;
static rt_int g_depth_560;
static P535 g_scope_stack_561;
static P531 g_all_types_562;
static rt_int g_serial_563;
static P543 g_out_types_564;
static P543 g_out_helpers_565;
static P543 g_out_protos_566;
static P543 g_out_globals_567;
static P543 g_out_funcs_568;
static P543 g_out_init_569;
static P543 g_out_excs_570;
static P543 g_code_571;
static P543 g_fields_buf_572;
static int g_in_func_573;
static rt_int g_cur_level_574;
static P551 g_fctx_575;
static P547 g_caps_576;
static P549 g_cap_waits_577;
static P541 g_psub_578;
static P522 g_st_field_579;
static P543 g_out_frames_580;
static P543 g_out_roots_581;
static int g_uses_free_582;
static P541 g_fins_583;
static int g_uses_findyn_584;
static P535 g_func_sym_585;
static P545 g_exits_586;
static rt_int g_frames_587;
static P541 g_handlers_588;
static P541 g_cleanups_589;
static rt_int g_trial_590;
static P541 g_mcopies_591;
static P531 g_ty_int_592;
static P531 g_ty_bool_593;
static P531 g_ty_float_594;
static P531 g_ty_ascii_595;
static P531 g_ty_string_596;
static P531 g_ty_void_597;
static P531 g_ty_file_598;
static P531 g_ty_nil_599;
static P531 g_ty_lock_600;
static P531 g_ty_latch_601;
static P531 g_ty_act_602;
static P529 g_no_cons_603;
static P522 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_604 = NULL;
{ rstr *cell605 = rt_alloc(sizeof(rstr));
rt_int pv606 = ((*F->s_2)).len;
(*cell605) = rt_str_new(pv606);
rt_str_assign(&(*cell605), (*F->s_2));
F->t_604 = cell605;
}
F->result_ = F->t_604;
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
F->r_607 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_607, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_607;
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
F->letters_608 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_608, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_609 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_610 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_610, (*F->s_14));
{ rt_int lo612 = ((rt_int)1LL), hi613 = ((*F->s_14)).len;
for (rt_int it614 = lo612; it614 <= hi613; it614++) {
F->i_611 = it614;
if (((65 <= rt_str_get(F->r_610, F->i_611)) && (rt_str_get(F->r_610, F->i_611) <= 90))) {
(*rt_str_at(&F->r_610, F->i_611)) = rt_str_get(F->letters_609, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_610, F->i_611)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_610;
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
F->l_615 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_616 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_617 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_615), rt_str(" ", 1)));
{ rt_int lo619 = ((rt_int)1LL), hi620 = rt_add(rt_sub((F->kw_616).len, (F->w_617).len), ((rt_int)1LL));
for (rt_int it621 = lo619; it621 <= hi620; it621++) {
F->i_618 = it621;
if (rt_str_eq(rt_str_slice(F->kw_616, F->i_618, rt_sub(rt_add(F->i_618, (F->w_617).len), ((rt_int)1LL))), F->w_617)) {
F->result_ = rt_str_cat(F->l_615, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_615;
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
g_serial_563 = rt_add(g_serial_563, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_563));
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
if ((g_trial_590 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P543 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_622 = NULL;
{ R544 *cell623 = rt_alloc(sizeof(R544));
(*cell623).head = NULL;
(*cell623).tail = NULL;
F->b_622 = cell623;
}
F->result_ = F->b_622;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P543 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_624 = NULL;
{ R542 *cell625 = rt_alloc(sizeof(R542));
(*cell625).s = NULL;
(*cell625).next = NULL;
F->l_624 = cell625;
}
(*(P541)rt_nil_check(F->l_624)).s = f_mk_3(&(*F->s_26));
if (((*(P543)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P543)rt_nil_check(F->b_25)).head = F->l_624;
} else {
(*(P541)rt_nil_check((*(P543)rt_nil_check(F->b_25)).tail)).next = F->l_624;
}
(*(P543)rt_nil_check(F->b_25)).tail = F->l_624;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_571, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P543 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_626 = NULL;
F->l_626 = (*(P543)rt_nil_check(F->b_30)).head;
while ((F->l_626 != NULL)) {
rt_putln((*(P522)rt_nil_check((*(P541)rt_nil_check(F->l_626)).s)));
F->l_626 = (*(P541)rt_nil_check(F->l_626)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P543 a_32, P543 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P543)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P543)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P543)rt_nil_check(F->a_32)).head = (*(P543)rt_nil_check(F->b_33)).head;
} else {
(*(P541)rt_nil_check((*(P543)rt_nil_check(F->a_32)).tail)).next = (*(P543)rt_nil_check(F->b_33)).head;
}
(*(P543)rt_nil_check(F->a_32)).tail = (*(P543)rt_nil_check(F->b_33)).tail;
(*(P543)rt_nil_check(F->b_33)).head = NULL;
(*(P543)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel627 = (*F->w_35);
if (0 || rt_str_eq(sel627, rt_str("ABBREV", 6)) || rt_str_eq(sel627, rt_str("ABNORMAL", 8)) || rt_str_eq(sel627, rt_str("ALL", 3)) || rt_str_eq(sel627, rt_str("ALLOC", 5)) || rt_str_eq(sel627, rt_str("ASSERT", 6)) || rt_str_eq(sel627, rt_str("BEGIN", 5)) || rt_str_eq(sel627, rt_str("BY", 2)) || rt_str_eq(sel627, rt_str("CAPSULE", 7)) || rt_str_eq(sel627, rt_str("CASE", 4)) || rt_str_eq(sel627, rt_str("CONST", 5)) || rt_str_eq(sel627, rt_str("CREATE", 6)) || rt_str_eq(sel627, rt_str("DO", 2)) || rt_str_eq(sel627, rt_str("ELSE", 4)) || rt_str_eq(sel627, rt_str("ELSEIF", 6)) || rt_str_eq(sel627, rt_str("END", 3)) || rt_str_eq(sel627, rt_str("EXCEPTION", 9)) || rt_str_eq(sel627, rt_str("EXIT", 4)) || rt_str_eq(sel627, rt_str("EXPORTS", 7)) || rt_str_eq(sel627, rt_str("EXPOSE", 6)) || rt_str_eq(sel627, rt_str("EXTERNAL", 8)) || rt_str_eq(sel627, rt_str("FOR", 3)) || rt_str_eq(sel627, rt_str("FROM", 4)) || rt_str_eq(sel627, rt_str("FUNC", 4)) || rt_str_eq(sel627, rt_str("GENERIC", 7)) || rt_str_eq(sel627, rt_str("GOTO", 4)) || rt_str_eq(sel627, rt_str("GUARD", 5)) || rt_str_eq(sel627, rt_str("IF", 2)) || rt_str_eq(sel627, rt_str("IMPORTS", 7)) || rt_str_eq(sel627, rt_str("LOCATION", 8)) || rt_str_eq(sel627, rt_str("NAMED", 5)) || rt_str_eq(sel627, rt_str("NEEDS", 5)) || rt_str_eq(sel627, rt_str("NEW", 3)) || rt_str_eq(sel627, rt_str("NONE", 4)) || rt_str_eq(sel627, rt_str("OUT", 3)) || rt_str_eq(sel627, rt_str("OF", 2)) || rt_str_eq(sel627, rt_str("PRAG", 4)) || rt_str_eq(sel627, rt_str("PROC", 4)) || rt_str_eq(sel627, rt_str("RAISE", 5)) || rt_str_eq(sel627, rt_str("READONLY", 8)) || rt_str_eq(sel627, rt_str("REVERSE", 7)) || rt_str_eq(sel627, rt_str("REGION", 6)) || rt_str_eq(sel627, rt_str("RENAMING", 8)) || rt_str_eq(sel627, rt_str("REP", 3)) || rt_str_eq(sel627, rt_str("REPEAT", 6)) || rt_str_eq(sel627, rt_str("RERAISE", 7)) || rt_str_eq(sel627, rt_str("RETURN", 6)) || rt_str_eq(sel627, rt_str("SUBTYPE", 7)) || rt_str_eq(sel627, rt_str("TASK", 4)) || rt_str_eq(sel627, rt_str("THEN", 4)) || rt_str_eq(sel627, rt_str("TO", 2)) || rt_str_eq(sel627, rt_str("TYPE", 4)) || rt_str_eq(sel627, rt_str("VAR", 3)) || rt_str_eq(sel627, rt_str("WAIT", 4)) || rt_str_eq(sel627, rt_str("WHEN", 4)) || rt_str_eq(sel627, rt_str("WHILE", 5))) {
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
F->t_628 = NULL;
{ R524 *cell629 = rt_alloc(sizeof(R524));
(*cell629).s = NULL;
F->t_628 = cell629;
}
(*(P523)rt_nil_check(F->t_628)).kind = F->kind_39;
(*(P523)rt_nil_check(F->t_628)).line = g_src_line_556;
(*(P523)rt_nil_check(F->t_628)).ival = F->ival_41;
(*(P523)rt_nil_check(F->t_628)).s = f_mk_3(&(*F->s_40));
g_ntoks_554 = rt_add(g_ntoks_554, ((rt_int)1LL));
(*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_ntoks_554, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo] = F->t_628;
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_630 = ((rt_int)1LL);
F->j_631 = ((rt_int)0LL);
F->n_632 = ((*F->line_43)).len;
while ((F->i_630 <= F->n_632)) {
F->c_633 = rt_str_get((*F->line_43), F->i_630);
if (((((F->c_633 == 32) || (F->c_633 == 9)) || (F->c_633 == 13)) || (F->c_633 == 12))) {
F->i_630 = rt_add(F->i_630, ((rt_int)1LL));
} else if ((F->c_633 == 37)) {
F->i_630 = rt_add(F->n_632, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_633)) {
F->j_631 = F->i_630;
while (((F->j_631 <= F->n_632) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_631)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_631))) || (rt_str_get((*F->line_43), F->j_631) == 95)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
{
F->w_634 = rt_str_new(rt_sub(F->j_631, F->i_630));
rt_str_assign(&F->w_634, rt_str_slice((*F->line_43), F->i_630, rt_sub(F->j_631, ((rt_int)1LL))));
{ rt_int lo636 = ((rt_int)1LL), hi637 = (F->w_634).len;
for (rt_int it638 = lo636; it638 <= hi637; it638++) {
F->k_635 = it638;
(*rt_str_at(&F->w_634, F->k_635)) = f_upper_13(rt_str_get(F->w_634, F->k_635));
}
}
if (rt_str_eq(F->w_634, rt_str("PRAGMAT", 7))) {
while (((F->j_631 <= F->n_632) && (rt_str_get((*F->line_43), F->j_631) != 59))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_634)) {
f_add_token_42(((rt_int)2LL), &F->w_634, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_634)) {
f_add_token_42(((rt_int)3LL), &F->w_634, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_634, ((rt_int)0LL));
}
}
F->i_630 = F->j_631;
} else if (f_is_digit_11(F->c_633)) {
F->j_631 = F->i_630;
while (((F->j_631 <= F->n_632) && f_is_digit_11(rt_str_get((*F->line_43), F->j_631)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
if ((((F->j_631 < F->n_632) && (rt_str_get((*F->line_43), F->j_631) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_631, ((rt_int)1LL)))))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
while (((F->j_631 <= F->n_632) && f_is_digit_11(rt_str_get((*F->line_43), F->j_631)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
if (((F->j_631 <= F->n_632) && ((rt_str_get((*F->line_43), F->j_631) == 69) || (rt_str_get((*F->line_43), F->j_631) == 101)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
if (((F->j_631 <= F->n_632) && ((rt_str_get((*F->line_43), F->j_631) == 43) || (rt_str_get((*F->line_43), F->j_631) == 45)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
while (((F->j_631 <= F->n_632) && f_is_digit_11(rt_str_get((*F->line_43), F->j_631)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_630, rt_sub(F->j_631, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_630, rt_sub(F->j_631, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_630, rt_sub(F->j_631, ((rt_int)1LL)))));
}
F->i_630 = F->j_631;
} else if ((F->c_633 == 39)) {
F->j_631 = rt_add(F->i_630, ((rt_int)1LL));
if (((F->j_631 > F->n_632) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_631))))) {
f_fail_23(g_src_line_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_631 <= F->n_632) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_631)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_631))) || (rt_str_get((*F->line_43), F->j_631) == 95)))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
{
F->w_639 = rt_str_new(rt_sub(rt_sub(F->j_631, F->i_630), ((rt_int)1LL)));
rt_str_assign(&F->w_639, rt_str_slice((*F->line_43), rt_add(F->i_630, ((rt_int)1LL)), rt_sub(F->j_631, ((rt_int)1LL))));
{ rt_int lo641 = ((rt_int)1LL), hi642 = (F->w_639).len;
for (rt_int it643 = lo641; it643 <= hi642; it643++) {
F->k_640 = it643;
(*rt_str_at(&F->w_639, F->k_640)) = f_upper_13(rt_str_get(F->w_639, F->k_640));
}
}
f_add_token_42(((rt_int)6LL), &F->w_639, ((rt_int)0LL));
}
F->i_630 = F->j_631;
} else if ((F->c_633 == 34)) {
F->j_631 = rt_add(F->i_630, ((rt_int)1LL));
while (((F->j_631 <= F->n_632) && (rt_str_get((*F->line_43), F->j_631) != 34))) {
F->j_631 = rt_add(F->j_631, ((rt_int)1LL));
}
if ((F->j_631 > F->n_632)) {
f_fail_23(g_src_line_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_630, ((rt_int)1LL)), rt_sub(F->j_631, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_630 = rt_add(F->j_631, ((rt_int)1LL));
} else {
{
F->two_644 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_644, rt_str("  ", 2));
(*rt_str_at(&F->two_644, ((rt_int)1LL))) = F->c_633;
if ((F->i_630 < F->n_632)) {
(*rt_str_at(&F->two_644, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_630, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_644, rt_str(":=", 2)) || rt_str_eq(F->two_644, rt_str("=>", 2))) || rt_str_eq(F->two_644, rt_str("..", 2))) || rt_str_eq(F->two_644, rt_str("**", 2))) || rt_str_eq(F->two_644, rt_str("/=", 2))) || rt_str_eq(F->two_644, rt_str("<=", 2))) || rt_str_eq(F->two_644, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_644, ((rt_int)0LL));
F->i_630 = rt_add(F->i_630, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_633 == 40) || (F->c_633 == 41)) || (F->c_633 == 91)) || (F->c_633 == 93)) || (F->c_633 == 44)) || (F->c_633 == 58)) || (F->c_633 == 59)) || (F->c_633 == 46)) || (F->c_633 == 35)) || (F->c_633 == 43)) || (F->c_633 == 45)) || (F->c_633 == 42)) || (F->c_633 == 47)) || (F->c_633 == 38)) || (F->c_633 == 61)) || (F->c_633 == 60)) || (F->c_633 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_633); b_; }), ((rt_int)0LL));
F->i_630 = rt_add(F->i_630, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_645 = rt_str_new(rt_sizeln());
rt_readln(&F->line_645);
g_src_line_556 = rt_add(g_src_line_556, ((rt_int)1LL));
f_lex_line_44(&F->line_645);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P527 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_646 = NULL;
{ R528 *cell647 = rt_alloc(sizeof(R528));
(*cell647).name = NULL;
(*cell647).tag = NULL;
(*cell647).a = NULL;
(*cell647).b = NULL;
(*cell647).c = NULL;
(*cell647).d = NULL;
(*cell647).e = NULL;
(*cell647).next = NULL;
F->x_646 = cell647;
}
(*(P527)rt_nil_check(F->x_646)).kind = F->kind_46;
(*(P527)rt_nil_check(F->x_646)).line = F->line_47;
F->result_ = F->x_646;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_52(P527 *head_49, P527 *tail_50, P527 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P527)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P527)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P527)rt_nil_check((*F->tail_50))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_54(P527 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_53 = l_53;
F->n_648 = ((rt_int)0LL);
F->p_649 = NULL;
F->p_649 = F->l_53;
while ((F->p_649 != NULL)) {
F->n_648 = rt_add(F->n_648, ((rt_int)1LL));
F->p_649 = (*(P527)rt_nil_check(F->p_649)).next;
}
F->result_ = F->n_648;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).line;
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
F->result_ = (((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)), (*F->w_56)));
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
F->result_ = (((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)), (*F->w_58)));
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
F->result_ = ((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).kind == F->k_60);
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
if ((rt_add(g_tpos_555, F->k_62) > g_ntoks_554)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(rt_add(g_tpos_555, F->k_62), (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_64 = k_64;
if ((rt_add(g_tpos_555, F->k_64) > g_ntoks_554)) {
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_ntoks_554, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
goto ret_;
}
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(rt_add(g_tpos_555, F->k_64), (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
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
f_fail_23((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
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
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
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
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
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
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P522 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(rt_sub(g_tpos_555, ((rt_int)1LL)), (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_650 = NULL;
F->x_650 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P527)rt_nil_check(F->x_650)).name = f_expect_id_76();
F->result_ = F->x_650;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_651 = NULL;
F->tail_652 = NULL;
f_append_52(&F->head_651, &F->tail_652, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_651, &F->tail_652, f_name_node_77());
}
F->result_ = F->head_651;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_653 = f_cur_line_55();
F->x_654 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->x_654 = f_nn_48(((rt_int)81LL), F->line_653);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P527)rt_nil_check(F->x_654)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_654;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_655 = rt_str_copy((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)));
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if (rt_str_eq(F->w_655, rt_str("ARRAY", 5))) {
F->x_654 = f_nn_48(((rt_int)74LL), F->line_653);
{
F->head_656 = NULL;
F->tail_657 = NULL;
f_append_52(&F->head_656, &F->tail_657, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_656, &F->tail_657, f_p_subtype_79());
}
(*(P527)rt_nil_check(F->x_654)).a = F->head_656;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P527)rt_nil_check(F->x_654)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_655, rt_str("RECORD", 6)) || rt_str_eq(F->w_655, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_655, rt_str("RECORD", 6))) {
F->x_654 = f_nn_48(((rt_int)75LL), F->line_653);
} else {
F->x_654 = f_nn_48(((rt_int)76LL), F->line_653);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_658 = NULL;
F->tail_659 = NULL;
F->more_660 = 1;
while (F->more_660) {
F->names_661 = NULL;
F->names_661 = f_id_list_78();
F->st_662 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_662 = f_p_subtype_79();
while ((F->names_661 != NULL)) {
F->cmp_663 = NULL;
F->cmp_663 = f_nn_48(((rt_int)63LL), (*(P527)rt_nil_check(F->names_661)).line);
(*(P527)rt_nil_check(F->cmp_663)).name = (*(P527)rt_nil_check(F->names_661)).name;
(*(P527)rt_nil_check(F->cmp_663)).a = F->st_662;
f_append_52(&F->head_658, &F->tail_659, F->cmp_663);
F->names_661 = (*(P527)rt_nil_check(F->names_661)).next;
}
F->more_660 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->x_654)).a = F->head_658;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_655, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_654)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_655, rt_str("ENUM", 4))) {
F->x_654 = f_nn_48(((rt_int)72LL), F->line_653);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_664 = NULL;
F->tail_665 = NULL;
F->more_666 = 1;
while (F->more_666) {
F->lit_667 = NULL;
F->lit_667 = f_nn_48(((rt_int)4LL), F->line_653);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P527)rt_nil_check(F->lit_667)).name = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
f_append_52(&F->head_664, &F->tail_665, F->lit_667);
F->more_666 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->x_654)).a = F->head_664;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_654)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P527)rt_nil_check(F->x_654)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_655, rt_str("STRING", 6)) || rt_str_eq(F->w_655, rt_str("SET", 3))) || rt_str_eq(F->w_655, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_655, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_655, rt_str("STRING", 6))) {
F->x_654 = f_nn_48(((rt_int)73LL), F->line_653);
} else if (rt_str_eq(F->w_655, rt_str("SET", 3))) {
F->x_654 = f_nn_48(((rt_int)77LL), F->line_653);
} else if (rt_str_eq(F->w_655, rt_str("MAILBOX", 7))) {
F->x_654 = f_nn_48(((rt_int)78LL), F->line_653);
} else {
F->x_654 = f_nn_48(((rt_int)79LL), F->line_653);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P527)rt_nil_check(F->x_654)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_654)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_655, rt_str("INT", 3))) {
F->x_654 = f_nn_48(((rt_int)70LL), F->line_653);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_654)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P527)rt_nil_check(F->x_654)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_655, rt_str("FLOAT", 5))) {
F->x_654 = f_nn_48(((rt_int)71LL), F->line_653);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_654)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_654)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P527)rt_nil_check(F->x_654)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_654 = f_nn_48(((rt_int)80LL), F->line_653);
(*(P527)rt_nil_check(F->x_654)).name = f_mk_3(&F->w_655);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_654)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_654)).b = f_actual_params_80();
(*(P527)rt_nil_check(F->x_654)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_654;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_668 = NULL;
F->tail_669 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_668, &F->tail_669, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_668, &F->tail_669, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_668;
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

static P527 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_670 = NULL;
F->tail_671 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_672 = 1;
while (F->more_672) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s))))) {
f_append_52(&F->head_670, &F->tail_671, f_p_subtype_79());
} else {
f_append_52(&F->head_670, &F->tail_671, f_expr_89());
}
F->more_672 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_670;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_binop_88(P522 op_84, P527 l_85, P527 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_673 = NULL;
F->x_673 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P527)rt_nil_check(F->x_673)).name = F->op_84;
(*(P527)rt_nil_check(F->x_673)).a = F->l_85;
(*(P527)rt_nil_check(F->x_673)).b = F->r_86;
F->result_ = F->x_673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_674 = NULL;
F->l_674 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_675 = NULL;
F->op_675 = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
F->line_676 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_674 = f_binop_88(F->op_675, F->l_674, f_expr_and_90(), F->line_676);
}
F->result_ = F->l_674;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_677 = NULL;
F->l_677 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_678 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_677 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_677, f_expr_not_91(), F->line_678);
}
F->result_ = F->l_677;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_679 = NULL;
F->x_679 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_679)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P527)rt_nil_check(F->x_679)).a = f_expr_not_91();
F->result_ = F->x_679;
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

static P527 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_680 = NULL;
F->l_680 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s))))) {
F->op_681 = NULL;
F->op_681 = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
F->line_682 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_680 = f_binop_88(F->op_681, F->l_680, f_expr_add_95(), F->line_682);
}
F->result_ = F->l_680;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_683 = NULL;
F->l_683 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_684 = NULL;
F->op_684 = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
F->line_685 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_683 = f_binop_88(F->op_684, F->l_683, f_expr_mul_96(), F->line_685);
}
F->result_ = F->l_683;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_686 = NULL;
F->l_686 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_687 = NULL;
F->op_687 = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
F->line_688 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_686 = f_binop_88(F->op_687, F->l_686, f_expr_pow_97(), F->line_688);
}
F->result_ = F->l_686;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_689 = NULL;
F->l_689 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_690 = f_cur_line_55();
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->l_689 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_689, f_expr_prefix_98(), F->line_690);
}
F->result_ = F->l_689;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_691 = NULL;
F->x_691 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P527)rt_nil_check(F->x_691)).name = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_691)).a = f_expr_prefix_98();
F->result_ = F->x_691;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_692 = NULL;
F->p_692 = f_primary_100();
while (1) {
F->line_693 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_694 = NULL;
F->x_694 = f_nn_48(((rt_int)10LL), F->line_693);
F->head_695 = NULL;
F->tail_696 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_697 = 1;
while (F->more_697) {
F->lo_698 = NULL;
F->lo_698 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_699 = NULL;
F->r_699 = f_nn_48(((rt_int)16LL), F->line_693);
(*(P527)rt_nil_check(F->r_699)).a = F->lo_698;
(*(P527)rt_nil_check(F->r_699)).b = f_expr_89();
f_append_52(&F->head_695, &F->tail_696, F->r_699);
} else {
f_append_52(&F->head_695, &F->tail_696, F->lo_698);
}
F->more_697 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P527)rt_nil_check(F->x_694)).a = F->p_692;
(*(P527)rt_nil_check(F->x_694)).b = F->head_695;
F->p_692 = F->x_694;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_700 = NULL;
F->x_700 = f_nn_48(((rt_int)11LL), F->line_693);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_700)).a = F->p_692;
(*(P527)rt_nil_check(F->x_700)).name = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->p_692 = F->x_700;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P527)rt_nil_check(F->p_692)).kind == ((rt_int)7LL)))) {
F->x_701 = NULL;
F->x_701 = f_nn_48(((rt_int)12LL), F->line_693);
(*(P527)rt_nil_check(F->x_701)).a = F->p_692;
(*(P527)rt_nil_check(F->x_701)).b = f_actual_tt_83();
F->p_692 = F->x_701;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_702 = NULL;
F->x_702 = f_nn_48(((rt_int)13LL), F->line_693);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_702)).a = F->p_692;
(*(P527)rt_nil_check(F->x_702)).b = f_p_subtype_79();
F->p_692 = F->x_702;
} else {
F->result_ = F->p_692;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_703 = f_cur_line_55();
F->x_704 = NULL;
F->k_705 = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).kind;
if ((F->k_705 == ((rt_int)4LL))) {
F->x_704 = f_nn_48(((rt_int)1LL), F->line_703);
(*(P527)rt_nil_check(F->x_704)).ival = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).ival;
(*(P527)rt_nil_check(F->x_704)).name = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = F->x_704;
goto ret_;
}
if ((((F->k_705 == ((rt_int)5LL)) || (F->k_705 == ((rt_int)7LL))) || (F->k_705 == ((rt_int)6LL)))) {
if ((F->k_705 == ((rt_int)5LL))) {
F->x_704 = f_nn_48(((rt_int)2LL), F->line_703);
} else if ((F->k_705 == ((rt_int)7LL))) {
F->x_704 = f_nn_48(((rt_int)3LL), F->line_703);
} else {
F->x_704 = f_nn_48(((rt_int)4LL), F->line_703);
}
(*(P527)rt_nil_check(F->x_704)).name = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = F->x_704;
goto ret_;
}
if ((F->k_705 == ((rt_int)1LL))) {
F->w_706 = rt_str_copy((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)));
if ((rt_str_eq(F->w_706, rt_str("TRUE", 4)) || rt_str_eq(F->w_706, rt_str("FALSE", 5)))) {
F->x_704 = f_nn_48(((rt_int)5LL), F->line_703);
if (rt_str_eq(F->w_706, rt_str("TRUE", 4))) {
(*(P527)rt_nil_check(F->x_704)).ival = ((rt_int)1LL);
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = F->x_704;
goto ret_;
}
if (rt_str_eq(F->w_706, rt_str("NIL", 3))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_703);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_704 = f_nn_48(((rt_int)17LL), F->line_703);
(*(P527)rt_nil_check(F->x_704)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_704;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_707 = NULL;
F->tail_708 = NULL;
F->x_704 = f_nn_48(((rt_int)14LL), F->line_703);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_709 = 1;
while (F->more_709) {
f_append_52(&F->head_707, &F->tail_708, f_constructor_item_101());
F->more_709 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P527)rt_nil_check(F->x_704)).a = F->head_707;
F->result_ = F->x_704;
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

static P527 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_710 = f_cur_line_55();
F->it_711 = NULL;
F->it_711 = f_nn_48(((rt_int)15LL), F->line_710);
F->first_712 = NULL;
F->first_712 = f_expr_89();
F->keys_713 = NULL;
F->ktail_714 = NULL;
F->lab_715 = NULL;
F->lab_715 = f_nn_48(((rt_int)61LL), F->line_710);
(*(P527)rt_nil_check(F->lab_715)).a = F->first_712;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P527)rt_nil_check(F->lab_715)).b = f_expr_89();
f_append_52(&F->keys_713, &F->ktail_714, F->lab_715);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_713, &F->ktail_714, F->lab_715);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_716 = g_tpos_555;
F->more_717 = NULL;
F->tail2_718 = NULL;
F->ok_719 = 0;
F->go_720 = 1;
while ((F->go_720 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_721 = NULL;
F->l2_721 = f_nn_48(((rt_int)61LL), F->line_710);
(*(P527)rt_nil_check(F->l2_721)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P527)rt_nil_check(F->l2_721)).b = f_expr_89();
}
f_append_52(&F->more_717, &F->tail2_718, F->l2_721);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_719 = 1;
F->go_720 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_720 = 0;
}
}
if (F->ok_719) {
f_append_52(&F->keys_713, &F->ktail_714, F->lab_715);
f_append_52(&F->keys_713, &F->ktail_714, F->more_717);
} else {
g_tpos_555 = F->save_716;
}
}
if ((F->keys_713 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P527)rt_nil_check(F->it_711)).a = F->keys_713;
(*(P527)rt_nil_check(F->it_711)).b = f_expr_89();
} else {
(*(P527)rt_nil_check(F->it_711)).b = F->first_712;
}
F->result_ = F->it_711;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_body_end_102(void) {
  struct f_at_body_end_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_61(((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_722 = NULL;
F->tail_723 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_722, &F->tail_723, f_body_element_104());
}
F->result_ = F->head_722;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_724 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_724 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_724 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_724)).a = f_expr_89();
} else {
F->x_724 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_724;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_725 = f_cur_line_55();
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
F->head_726 = NULL;
F->tail_727 = NULL;
F->names_728 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->names_728 = f_id_list_78();
while ((F->names_728 != NULL)) {
F->x_729 = NULL;
F->x_729 = f_nn_48(((rt_int)49LL), F->line_725);
(*(P527)rt_nil_check(F->x_729)).name = (*(P527)rt_nil_check(F->names_728)).name;
f_append_52(&F->head_726, &F->tail_727, F->x_729);
F->names_728 = (*(P527)rt_nil_check(F->names_728)).next;
}
F->result_ = F->head_726;
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

static P527 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_730 = f_cur_line_55();
F->is_var_731 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_732 = NULL;
F->st_733 = NULL;
F->init_734 = NULL;
F->loc_735 = NULL;
F->loc_kind_736 = ((rt_int)0LL);
F->head_737 = NULL;
F->tail_738 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->names_732 = f_id_list_78();
if (F->is_var_731) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_733 = f_p_subtype_79();
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->loc_kind_736 = ((rt_int)1LL);
} else {
F->loc_kind_736 = ((rt_int)2LL);
}
F->loc_735 = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_734 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_733 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_734 = f_expr_89();
}
while ((F->names_732 != NULL)) {
F->x_739 = NULL;
if (F->is_var_731) {
F->x_739 = f_nn_48(((rt_int)40LL), F->line_730);
} else {
F->x_739 = f_nn_48(((rt_int)41LL), F->line_730);
}
(*(P527)rt_nil_check(F->x_739)).name = (*(P527)rt_nil_check(F->names_732)).name;
(*(P527)rt_nil_check(F->x_739)).a = F->st_733;
(*(P527)rt_nil_check(F->x_739)).b = F->init_734;
(*(P527)rt_nil_check(F->x_739)).c = F->loc_735;
(*(P527)rt_nil_check(F->x_739)).ival = F->loc_kind_736;
f_append_52(&F->head_737, &F->tail_738, F->x_739);
F->names_732 = (*(P527)rt_nil_check(F->names_732)).next;
}
F->result_ = F->head_737;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_740 = NULL;
F->x_740 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_740)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_740)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P527)rt_nil_check(F->x_740)).a = f_p_subtype_79();
F->result_ = F->x_740;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_741 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_741 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_741 = rt_add(F->depth_741, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_741 = rt_sub(F->depth_741, ((rt_int)1LL));
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P527 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_742 = f_cur_line_55();
F->name_743 = NULL;
F->params_744 = NULL;
F->x_745 = NULL;
F->tts_746 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->name_743 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_746 = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_744 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->x_745 = f_nn_48(((rt_int)44LL), F->line_742);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_745)).b = f_formal_params_112();
}
} else {
F->x_745 = f_nn_48(((rt_int)43LL), F->line_742);
(*(P527)rt_nil_check(F->x_745)).b = F->params_744;
}
(*(P527)rt_nil_check(F->x_745)).name = F->name_743;
(*(P527)rt_nil_check(F->x_745)).e = F->tts_746;
(*(P527)rt_nil_check(F->x_745)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_745;
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
F->result_ = ((rt_int)2LL);
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("OUT", 3))) {
F->result_ = ((rt_int)3LL);
goto ret_;
} else if (rt_str_eq((*F->w_110), rt_str("READONLY", 8))) {
F->result_ = ((rt_int)4LL);
goto ret_;
}
F->result_ = ((rt_int)1LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_747 = NULL;
F->tail_748 = NULL;
F->more_749 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_749) {
F->mode_750 = ((rt_int)1LL);
F->names_751 = NULL;
F->ntail_752 = NULL;
F->st_753 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_750 = f_mode_of_111(&(*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)));
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
}
f_append_52(&F->names_751, &F->ntail_752, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P522)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P522)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
f_append_52(&F->names_751, &F->ntail_752, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_753 = f_p_subtype_79();
while ((F->names_751 != NULL)) {
F->p_754 = NULL;
F->p_754 = f_nn_48(((rt_int)52LL), (*(P527)rt_nil_check(F->names_751)).line);
(*(P527)rt_nil_check(F->p_754)).name = (*(P527)rt_nil_check(F->names_751)).name;
(*(P527)rt_nil_check(F->p_754)).ival = F->mode_750;
(*(P527)rt_nil_check(F->p_754)).a = F->st_753;
f_append_52(&F->head_747, &F->tail_748, F->p_754);
F->names_751 = (*(P527)rt_nil_check(F->names_751)).next;
}
F->more_749 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_747;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_114(P527 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_113 = owner_113;
F->head_755 = NULL;
F->tail_756 = NULL;
F->more_757 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P527)rt_nil_check(F->owner_113)).flag = rt_add((*(P527)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_757) {
F->ro_758 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_759 = NULL;
F->x_759 = f_name_node_77();
if (F->ro_758) {
(*(P527)rt_nil_check(F->x_759)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_755, &F->tail_756, F->x_759);
F->more_757 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->owner_113)).d = F->head_755;
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

static P522 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)))))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = (*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(rt_sub(g_tpos_555, ((rt_int)1LL)), (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s;
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

static P527 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_760 = f_cur_line_55();
F->x_761 = NULL;
F->is_abn_762 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_763 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_763) {
F->x_761 = f_nn_48(((rt_int)46LL), F->line_760);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_761 = f_nn_48(((rt_int)45LL), F->line_760);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if (F->is_abn_762) {
(*(P527)rt_nil_check(F->x_761)).flag = ((rt_int)1LL);
}
(*(P527)rt_nil_check(F->x_761)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_761)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_761)).a = f_formal_params_112();
}
if (F->is_func_763) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P527)rt_nil_check(F->x_761)).b = f_p_subtype_79();
}
F->dummy_764 = f_imports_list_114(F->x_761);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P527)rt_nil_check(F->x_761)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_763) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P522)rt_nil_check(f_definable_name_117())), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_761)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_761)).name))); b_; }));
}
F->result_ = F->x_761;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_765 = NULL;
F->x_765 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_765)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_765)).b = f_formal_params_112();
}
F->dummy_766 = f_imports_list_114(F->x_765);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P527)rt_nil_check(F->x_765)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P527)rt_nil_check(F->x_765)).ival = ((rt_int)0LL);
} else {
F->head_767 = NULL;
F->tail_768 = NULL;
F->more_769 = 1;
while (F->more_769) {
F->n_770 = NULL;
F->n_770 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P527)rt_nil_check(F->n_770)).ival = ((rt_int)1LL);
}
(*(P527)rt_nil_check(F->n_770)).name = f_definable_name_117();
f_append_52(&F->head_767, &F->tail_768, F->n_770);
F->more_769 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->x_765)).a = F->head_767;
(*(P527)rt_nil_check(F->x_765)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P527)rt_nil_check(F->x_765)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P522)rt_nil_check(f_expect_id_76())), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_765)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_765;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_771 = NULL;
F->tail_772 = NULL;
F->more_773 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_773) {
f_append_52(&F->head_771, &F->tail_772, f_name_node_77());
F->more_773 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_771;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_774 = NULL;
F->x_774 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_775 = NULL;
F->tail_776 = NULL;
F->more_777 = 1;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
while (F->more_777) {
F->names_778 = NULL;
F->names_778 = f_id_list_78();
F->kind_779 = ((rt_int)6LL);
F->st_780 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_779 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_779 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_779 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_779 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_779 = ((rt_int)5LL);
} else {
F->st_780 = f_p_subtype_79();
}
if (((F->kind_779 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P527)rt_nil_check(F->x_774)).e = f_actual_params_80();
} else if (((F->kind_779 >= ((rt_int)3LL)) && (F->kind_779 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_780 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
}
if (((F->kind_779 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_780 = f_p_subtype_79();
}
}
while ((F->names_778 != NULL)) {
F->p_781 = NULL;
F->p_781 = f_nn_48(((rt_int)52LL), (*(P527)rt_nil_check(F->names_778)).line);
(*(P527)rt_nil_check(F->p_781)).name = (*(P527)rt_nil_check(F->names_778)).name;
(*(P527)rt_nil_check(F->p_781)).ival = F->kind_779;
(*(P527)rt_nil_check(F->p_781)).a = F->st_780;
f_append_52(&F->head_775, &F->tail_776, F->p_781);
F->names_778 = (*(P527)rt_nil_check(F->names_778)).next;
}
F->more_777 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_777 = 1;
while (F->more_777) {
F->nm_782 = NULL;
F->nm_782 = f_definable_name_117();
F->st_783 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_783 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_783 = f_p_subtype_79();
}
F->more_777 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P527)rt_nil_check(F->x_774)).a = F->head_775;
(*(P527)rt_nil_check(F->x_774)).b = f_declaration_105();
(*(P527)rt_nil_check(F->x_774)).name = (*(P527)rt_nil_check((*(P527)rt_nil_check(F->x_774)).b)).name;
F->result_ = F->x_774;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_784 = NULL;
F->x_784 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_784)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_784)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_784)).a = f_formal_params_112();
}
F->dummy_785 = f_imports_list_114(F->x_784);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P527)rt_nil_check(F->x_784)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P522)rt_nil_check(f_expect_id_76())), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_784)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_784)).name))); b_; }));
}
F->result_ = F->x_784;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_786 = NULL;
F->x_786 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P527)rt_nil_check(F->x_786)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_787 = NULL;
F->tail_788 = NULL;
F->more_789 = 1;
while (F->more_789) {
F->n_790 = NULL;
F->n_790 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P527)rt_nil_check(F->n_790)).ival = ((rt_int)1LL);
}
(*(P527)rt_nil_check(F->n_790)).name = f_definable_name_117();
f_append_52(&F->head_787, &F->tail_788, F->n_790);
F->more_789 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->x_786)).a = F->head_787;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P527)rt_nil_check(F->x_786)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P527)rt_nil_check(F->x_786)).flag = rt_add((*(P527)rt_nil_check(F->x_786)).flag, ((rt_int)2LL));
}
(*(P527)rt_nil_check(F->x_786)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_786)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_791 = NULL;
F->tail_792 = NULL;
F->more_793 = 1;
while (F->more_793) {
F->n_794 = NULL;
F->n_794 = f_nn_48(((rt_int)7LL), f_cur_line_55());
F->tgt_795 = NULL;
F->tgt_795 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P527)rt_nil_check(F->n_794)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P527)rt_nil_check(F->tgt_795)).name = f_definable_name_117();
(*(P527)rt_nil_check(F->n_794)).a = F->tgt_795;
f_append_52(&F->head_791, &F->tail_792, F->n_794);
F->more_793 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P527)rt_nil_check(F->x_786)).c = F->head_791;
}
F->result_ = F->x_786;
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

static P527 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_796 = NULL;
F->ltail_797 = NULL;
F->match_798 = NULL;
F->s_799 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P522)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_796, &F->ltail_797, f_name_node_77());
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P522)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_798 = f_expect_id_76();
}
F->s_799 = f_unlabeled_statement_127();
if ((F->match_798 != NULL)) {
if (((((((((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)22LL)) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)23LL))) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)24LL))) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)25LL))) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)26LL))) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)35LL))) && ((*(P527)rt_nil_check(F->s_799)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P527)rt_nil_check(F->s_799)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P522)rt_nil_check(f_expect_id_76())), (*(P522)rt_nil_check(F->match_798))))) {
f_fail_23((*(P527)rt_nil_check(F->s_799)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P522)rt_nil_check(F->match_798))); b_; }));
}
(*(P527)rt_nil_check(F->s_799)).tag = F->match_798;
}
if ((F->labels_796 != NULL)) {
f_fail_23((*(P527)rt_nil_check(F->s_799)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_799;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_800 = f_cur_line_55();
F->x_801 = NULL;
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
F->x_801 = f_nn_48(((rt_int)25LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_801 = f_nn_48(((rt_int)27LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).name = f_expect_id_76();
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_801 = f_nn_48(((rt_int)28LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P527)rt_nil_check(F->x_801)).a = f_expr_89();
}
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_801 = f_nn_48(((rt_int)30LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).name = f_expect_id_76();
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_800);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_801 = f_nn_48(((rt_int)34LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_801)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_801)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P527)rt_nil_check(F->x_801)).a = f_postfix_99();
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_802 = NULL;
F->tail_803 = NULL;
F->x_801 = f_nn_48(((rt_int)35LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_804 = NULL;
F->itail_805 = NULL;
F->more_806 = 1;
while (F->more_806) {
f_append_52(&F->invs_804, &F->itail_805, f_postfix_99());
F->more_806 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_802, &F->tail_803, f_arm_131(F->invs_804, f_body_103(), F->line_800));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P527)rt_nil_check(F->x_801)).a = F->head_802;
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_801 = f_nn_48(((rt_int)36LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P527)rt_nil_check(F->x_801)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_801;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_801 = f_nn_48(((rt_int)32LL), F->line_800);
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_801)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P522)rt_nil_check((*(P523)rt_nil_check((*(P525)rt_nil_check(g_toks_553)).p[rt_index(g_tpos_555, (*(P525)rt_nil_check(g_toks_553)).lo, (*(P525)rt_nil_check(g_toks_553)).hi) - (*(P525)rt_nil_check(g_toks_553)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P527)rt_nil_check(F->x_801)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P527)rt_nil_check(F->x_801)).c = f_expr_89();
}
F->result_ = F->x_801;
goto ret_;
}
{
F->target_807 = NULL;
F->target_807 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_801 = f_nn_48(((rt_int)20LL), F->line_800);
(*(P527)rt_nil_check(F->x_801)).a = F->target_807;
(*(P527)rt_nil_check(F->x_801)).b = f_expr_89();
} else {
F->x_801 = f_nn_48(((rt_int)21LL), F->line_800);
(*(P527)rt_nil_check(F->x_801)).a = F->target_807;
}
}
F->result_ = F->x_801;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_arm_131(P527 cond_128, P527 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_808 = NULL;
F->x_808 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P527)rt_nil_check(F->x_808)).a = F->cond_128;
(*(P527)rt_nil_check(F->x_808)).b = F->b_129;
F->result_ = F->x_808;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_809 = NULL;
F->x_809 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_810 = NULL;
F->tail_811 = NULL;
F->cond_812 = NULL;
F->go_813 = 1;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
F->cond_812 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_810, &F->tail_811, f_arm_131(F->cond_812, f_body_103(), (*(P527)rt_nil_check(F->x_809)).line));
while (F->go_813) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_812 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_810, &F->tail_811, f_arm_131(F->cond_812, f_body_103(), (*(P527)rt_nil_check(F->x_809)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P527)rt_nil_check(F->x_809)).flag = ((rt_int)1LL);
(*(P527)rt_nil_check(F->x_809)).b = f_body_103();
} else {
F->go_813 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P527)rt_nil_check(F->x_809)).a = F->head_810;
F->result_ = F->x_809;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_814 = NULL;
F->x_814 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_815 = NULL;
F->tail_816 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_814)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_817 = NULL;
F->ltail_818 = NULL;
F->more_819 = 1;
while (F->more_819) {
F->l_820 = NULL;
F->l_820 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P527)rt_nil_check(F->l_820)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P527)rt_nil_check(F->l_820)).b = f_expr_89();
}
f_append_52(&F->labs_817, &F->ltail_818, F->l_820);
F->more_819 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_815, &F->tail_816, f_arm_131(F->labs_817, f_body_103(), (*(P527)rt_nil_check(F->x_814)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P527)rt_nil_check(F->x_814)).flag = ((rt_int)1LL);
(*(P527)rt_nil_check(F->x_814)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P527)rt_nil_check(F->x_814)).b = F->head_815;
F->result_ = F->x_814;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_821 = NULL;
F->x_821 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P527)rt_nil_check(F->x_821)).flag = ((rt_int)1LL);
(*(P527)rt_nil_check(F->x_821)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P527)rt_nil_check(F->x_821)).ival = ((rt_int)1LL);
}
(*(P527)rt_nil_check(F->x_821)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P527)rt_nil_check(F->x_821)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P527)rt_nil_check(F->x_821)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_821;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_822 = NULL;
F->x_822 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_823 = NULL;
F->tail_824 = NULL;
g_tpos_555 = rt_add(g_tpos_555, ((rt_int)1LL));
(*(P527)rt_nil_check(F->x_822)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_825 = NULL;
F->h_825 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P527)rt_nil_check(F->h_825)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P527)rt_nil_check(F->h_825)).b = f_body_103();
f_append_52(&F->head_823, &F->tail_824, F->h_825);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P527)rt_nil_check(F->x_822)).flag = ((rt_int)1LL);
(*(P527)rt_nil_check(F->x_822)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P527)rt_nil_check(F->x_822)).b = F->head_823;
F->result_ = F->x_822;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_826 = NULL;
F->tail_827 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_826, &F->tail_827, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_826;
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
F->h_828 = ((rt_int)0LL);
{ rt_int lo830 = ((rt_int)1LL), hi831 = ((*F->s_137)).len;
for (rt_int it832 = lo830; it832 <= hi831; it832++) {
F->i_829 = it832;
F->h_828 = rt_mod(rt_add(rt_mul(F->h_828, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_829)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_828;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_139 = name_139;
F->y_833 = NULL;
F->y_833 = (*(P539)rt_nil_check(g_table_557)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
while ((F->y_833 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_833)).name)), (*F->name_139))) {
F->result_ = F->y_833;
goto ret_;
}
F->y_833 = (*(P535)rt_nil_check(F->y_833)).chain;
}
if ((g_genv_558 != NULL)) {
F->y_833 = (*(P539)rt_nil_check(g_genv_558)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P539)rt_nil_check(g_genv_558)).lo, (*(P539)rt_nil_check(g_genv_558)).hi) - (*(P539)rt_nil_check(g_genv_558)).lo];
while ((F->y_833 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_833)).name)), (*F->name_139))) {
F->result_ = F->y_833;
goto ret_;
}
F->y_833 = (*(P535)rt_nil_check(F->y_833)).chain;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_lookup_decl_142(P527 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_141 = d_141;
F->y_834 = NULL;
F->y_834 = (*(P539)rt_nil_check(g_table_557)).p[rt_index(f_hash_138(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_141)).name))), (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
while ((F->y_834 != NULL)) {
if (((*(P535)rt_nil_check(F->y_834)).decl == F->d_141)) {
F->result_ = F->y_834;
goto ret_;
}
F->y_834 = (*(P535)rt_nil_check(F->y_834)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_145(P535 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_835 = f_hash_138(&(*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_143)).name)));
F->z_836 = NULL;
F->z_836 = (*(P539)rt_nil_check(g_table_557)).p[rt_index(F->h_835, (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
while ((F->z_836 != NULL)) {
if (((((*(P535)rt_nil_check(F->z_836)).depth == g_depth_560) && rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->z_836)).name)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_836)) && ((*(P535)rt_nil_check(F->z_836)).kind == (*(P535)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P535)rt_nil_check(F->y_143)).params, (*(P535)rt_nil_check(F->z_836)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_836 = (*(P535)rt_nil_check(F->z_836)).chain;
}
(*(P535)rt_nil_check(F->y_143)).depth = g_depth_560;
(*(P535)rt_nil_check(F->y_143)).chain = (*(P539)rt_nil_check(g_table_557)).p[rt_index(F->h_835, (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
(*(P539)rt_nil_check(g_table_557)).p[rt_index(F->h_835, (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo] = F->y_143;
(*(P535)rt_nil_check(F->y_143)).stack = g_scope_stack_561;
g_scope_stack_561 = F->y_143;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_147(P535 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_146 = y_146;
F->result_ = ((((*(P535)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P535)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P535)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_150(P537 a_148, P537 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_837 = NULL;
F->x_837 = F->a_148;
F->y_838 = NULL;
F->y_838 = F->b_149;
while (((F->x_837 != NULL) && (F->y_838 != NULL))) {
if ((!f_same_164((*(P537)rt_nil_check(F->x_837)).t, (*(P537)rt_nil_check(F->y_838)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_837 = (*(P537)rt_nil_check(F->x_837)).next;
F->y_838 = (*(P537)rt_nil_check(F->y_838)).next;
}
F->result_ = ((F->x_837 == NULL) && (F->y_838 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_560 = rt_add(g_depth_560, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_561 != NULL) && ((*(P535)rt_nil_check(g_scope_stack_561)).depth == g_depth_560))) {
(*(P539)rt_nil_check(g_table_557)).p[rt_index(f_hash_138(&(*(P522)rt_nil_check((*(P535)rt_nil_check(g_scope_stack_561)).name))), (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo] = (*(P535)rt_nil_check(g_scope_stack_561)).chain;
g_scope_stack_561 = (*(P535)rt_nil_check(g_scope_stack_561)).stack;
}
g_depth_560 = rt_sub(g_depth_560, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P535 f_new_sym_155(rt_int kind_153, P522 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_839 = NULL;
{ R536 *cell840 = rt_alloc(sizeof(R536));
(*cell840).name = NULL;
(*cell840).t = NULL;
(*cell840).c = NULL;
(*cell840).access = NULL;
(*cell840).cname = NULL;
(*cell840).st = NULL;
(*cell840).decl = NULL;
(*cell840).params = NULL;
(*cell840).result = NULL;
(*cell840).members = NULL;
(*cell840).mnext = NULL;
(*cell840).binds = NULL;
(*cell840).insts = NULL;
(*cell840).env = NULL;
(*cell840).chain = NULL;
(*cell840).stack = NULL;
F->y_839 = cell840;
}
(*(P535)rt_nil_check(F->y_839)).kind = F->kind_153;
(*(P535)rt_nil_check(F->y_839)).name = F->name_154;
F->result_ = F->y_839;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_156 = kind_156;
F->t_841 = NULL;
{ R532 *cell842 = rt_alloc(sizeof(R532));
(*cell842).name = NULL;
(*cell842).lits = NULL;
(*cell842).elem = NULL;
(*cell842).idx = NULL;
(*cell842).idx2 = NULL;
(*cell842).elemcons = NULL;
(*cell842).elemst = NULL;
(*cell842).under = NULL;
(*cell842).tparams = NULL;
(*cell842).ocap = NULL;
(*cell842).fields = NULL;
(*cell842).target = NULL;
(*cell842).decl = NULL;
(*cell842).cname = NULL;
(*cell842).initp = NULL;
(*cell842).finalp = NULL;
(*cell842).tpsyms = NULL;
(*cell842).gen = NULL;
(*cell842).gbinds = NULL;
(*cell842).next = NULL;
F->t_841 = cell842;
}
(*(P531)rt_nil_check(F->t_841)).kind = F->kind_156;
F->result_ = F->t_841;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P529 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_843 = NULL;
{ R530 *cell844 = rt_alloc(sizeof(R530));
(*cell844).lo = NULL;
(*cell844).hi = NULL;
(*cell844).lo2 = NULL;
(*cell844).hi2 = NULL;
(*cell844).slen = NULL;
(*cell844).args = NULL;
F->c_843 = cell844;
}
F->result_ = F->c_843;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_161(P527 a_159, P527 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_845 = NULL;
F->x_845 = F->a_159;
F->y_846 = NULL;
F->y_846 = F->b_160;
while (((F->x_845 != NULL) && (F->y_846 != NULL))) {
if ((!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->x_845)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->y_846)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_845 = (*(P527)rt_nil_check(F->x_845)).next;
F->y_846 = (*(P527)rt_nil_check(F->y_846)).next;
}
F->result_ = ((F->x_845 == NULL) && (F->y_846 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_164(P531 a_162, P531 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P531)rt_nil_check(F->a_162)).kind != (*(P531)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P531)rt_nil_check(F->a_162)).lits, (*(P531)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P531)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P531)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P531)rt_nil_check(F->a_162)).elem, (*(P531)rt_nil_check(F->b_163)).elem) && f_same_164((*(P531)rt_nil_check(F->a_162)).idx, (*(P531)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P531)rt_nil_check(F->a_162)).elem, (*(P531)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P531)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_847 = NULL;
F->f_847 = (*(P531)rt_nil_check(F->a_162)).fields;
F->g_848 = NULL;
F->g_848 = (*(P531)rt_nil_check(F->b_163)).fields;
while (((F->f_847 != NULL) && (F->g_848 != NULL))) {
if (((!rt_str_eq((*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_847)).name)), (*(P522)rt_nil_check((*(P533)rt_nil_check(F->g_848)).name)))) || (!f_same_164((*(P533)rt_nil_check(F->f_847)).t, (*(P533)rt_nil_check(F->g_848)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_847 = (*(P533)rt_nil_check(F->f_847)).next;
F->g_848 = (*(P533)rt_nil_check(F->g_848)).next;
}
F->result_ = ((F->f_847 == NULL) && (F->g_848 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_base_of_166(P531 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P531)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P531)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P531)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P529 f_base_cons_169(P531 t_167, P529 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P531)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P531)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P531)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P531)rt_nil_check(F->t_167)).under, (*(P531)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_171(P531 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_170 = t_170;
{ rt_int sel849 = (*(P531)rt_nil_check(F->t_170)).kind;
if (0 || (sel849 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel849 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel849 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel849 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel849 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel849 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel849 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel849 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel849 == ((rt_int)11LL))) {
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

static void f_check_type_175(P531 got_172, P531 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P531)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P531)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_177(P531 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
{ rt_int sel850 = (*(P531)rt_nil_check(F->t_176)).kind;
if (0 || (sel850 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel850 == ((rt_int)2LL)) || (sel850 == ((rt_int)4LL)) || (sel850 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel850 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel850 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel850 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel850 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel850 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel850 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel850 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P531)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P531)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P531)rt_nil_check(F->t_176)).forward) && (!(*(P531)rt_nil_check(F->t_176)).defined))) {
(*(P531)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_179(P531 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
F->f_851 = NULL;
F->f_851 = (*(P531)rt_nil_check(F->t_178)).fields;
F->s_852 = NULL;
F->s_852 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_851 != NULL)) {
F->s_852 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->s_852)), f_ctype_177((*(P533)rt_nil_check(F->f_851)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_851)).name)))), rt_str("; ", 2)); b_; }));
F->f_851 = (*(P533)rt_nil_check(F->f_851)).next;
}
F->result_ = (*(P522)rt_nil_check(F->s_852));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_181(P531 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_180 = t_180;
F->u_853 = NULL;
F->u_853 = g_all_types_562;
if ((((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P531)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_279(F->t_180);
if (((*(P531)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P531)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_853 != NULL)) {
if ((((*(P531)rt_nil_check(F->u_853)).kind == (*(P531)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_853, F->t_180))) {
(*(P531)rt_nil_check(F->t_180)).cname = (*(P531)rt_nil_check(F->u_853)).cname;
goto ret_;
}
F->u_853 = (*(P531)rt_nil_check(F->u_853)).next;
}
}
if ((((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P531)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P531)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P531)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P531)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P531)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P531)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P531)rt_nil_check(F->t_180)).next = g_all_types_562;
g_all_types_562 = F->t_180;
if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_854 = NULL;
F->target_854 = (*(P531)rt_nil_check(F->t_180)).target;
if (((*(P531)rt_nil_check(F->target_854)).kind == ((rt_int)7LL))) {
if (((*(P531)rt_nil_check(F->target_854)).cname == NULL)) {
(*(P531)rt_nil_check(F->target_854)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P531)rt_nil_check(F->target_854)).next = g_all_types_562;
g_all_types_562 = F->target_854;
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->target_854)).cname))), rt_str(" ", 1)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->target_854)).cname))), rt_str(";", 1)); b_; }));
(*(P531)rt_nil_check(F->target_854)).forward = 1;
}
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->target_854)).cname))), rt_str(" *", 2)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_854)), rt_str(" *", 2)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P531)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_855 = NULL;
F->p_855 = (*(P531)rt_nil_check(F->t_180)).tparams;
F->fs_856 = NULL;
F->fs_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_855 != NULL)) {
F->fs_856 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->fs_856)), f_ctype_177(f_tparam_type_215(F->t_180, &(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_855)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_855)).name)))), rt_str("; ", 2)); b_; }));
F->p_855 = (*(P527)rt_nil_check(F->p_855)).next;
}
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P522)rt_nil_check(F->fs_856))), f_ctype_177((*(P531)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P531)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_564, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->names_857 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_858 = NULL;
F->tail_859 = NULL;
F->start_860 = ((rt_int)1LL);
{ rt_int lo862 = ((rt_int)1LL), hi863 = (F->names_857).len;
for (rt_int it864 = lo862; it864 <= hi863; it864++) {
F->i_861 = it864;
if ((rt_str_get(F->names_857, F->i_861) == 32)) {
F->lit_865 = NULL;
F->lit_865 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P527)rt_nil_check(F->lit_865)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_857, F->start_860, rt_sub(F->i_861, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_858, &F->tail_859, F->lit_865);
F->start_860 = rt_add(F->i_861, ((rt_int)1LL));
}
}
}
g_ty_ascii_595 = f_new_typ_157(((rt_int)4LL));
(*(P531)rt_nil_check(g_ty_ascii_595)).lits = F->head_858;
(*(P531)rt_nil_check(g_ty_ascii_595)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_185(P527 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_866 = ((rt_int)0LL);
F->l_867 = NULL;
F->l_867 = F->lits_183;
while ((F->l_867 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->l_867)).name)), (*F->name_184))) {
F->result_ = F->i_866;
goto ret_;
}
F->i_866 = rt_add(F->i_866, ((rt_int)1LL));
F->l_867 = (*(P527)rt_nil_check(F->l_867)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_resolve_subtype_188(P527 st_186, P529 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_868 = NULL;
F->dummy_870 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel871 = (*(P527)rt_nil_check(F->st_186)).kind;
if (0 || (sel871 == ((rt_int)70LL))) {
if (((*(P527)rt_nil_check(F->st_186)).a != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).a, g_ty_int_592, &F->dummy_870); b_; }));
(*(P529)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).b, g_ty_int_592, &F->dummy_870); b_; }));
(*(P529)rt_nil_check(F->c_187v)).mlo = f_manifest_222((*(P527)rt_nil_check(F->st_186)).a, &F->ok_869);
(*(P529)rt_nil_check(F->c_187v)).hasm = F->ok_869;
(*(P529)rt_nil_check(F->c_187v)).mhi = f_manifest_222((*(P527)rt_nil_check(F->st_186)).b, &F->ok_869);
(*(P529)rt_nil_check(F->c_187v)).hasm = ((*(P529)rt_nil_check(F->c_187v)).hasm && F->ok_869);
}
F->result_ = g_ty_int_592;
goto ret_;
} else if (0 || (sel871 == ((rt_int)71LL))) {
F->result_ = g_ty_float_594;
goto ret_;
} else if (0 || (sel871 == ((rt_int)72LL))) {
F->t_868 = f_new_typ_157(((rt_int)4LL));
(*(P531)rt_nil_check(F->t_868)).lits = (*(P527)rt_nil_check(F->st_186)).a;
if (((*(P527)rt_nil_check(F->st_186)).b != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).b, F->t_868, &F->dummy_870); b_; }));
(*(P529)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).c, F->t_868, &F->dummy_870); b_; }));
}
F->result_ = F->t_868;
goto ret_;
} else if (0 || (sel871 == ((rt_int)73LL))) {
F->t_868 = f_resolve_subtype_188((*(P527)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_868, g_ty_ascii_595))) {
f_fail_23((*(P527)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P527)rt_nil_check(F->st_186)).b != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).b, g_ty_int_592, &F->dummy_870); b_; }));
}
F->result_ = g_ty_string_596;
goto ret_;
} else if (0 || (sel871 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P527)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P527)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_872 = NULL;
F->ic2_873 = NULL;
F->ec_874 = NULL;
F->it_875 = NULL;
F->it_875 = f_resolve_subtype_188((*(P527)rt_nil_check(F->st_186)).a, &F->ic_872);
F->et_876 = NULL;
F->et_876 = f_resolve_subtype_188((*(P527)rt_nil_check(F->st_186)).b, &F->ec_874);
F->ic_872 = f_base_cons_169(F->it_875, F->ic_872);
F->t_868 = f_new_typ_157(((rt_int)6LL));
(*(P531)rt_nil_check(F->t_868)).idx = F->it_875;
(*(P531)rt_nil_check(F->t_868)).elem = F->et_876;
(*(P531)rt_nil_check(F->t_868)).elemcons = F->ec_874;
(*(P531)rt_nil_check(F->t_868)).elemst = (*(P527)rt_nil_check(F->st_186)).b;
if (((*(P529)rt_nil_check(F->ic_872)).lo != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).lo = (*(P529)rt_nil_check(F->ic_872)).lo;
(*(P529)rt_nil_check(F->c_187v)).hi = (*(P529)rt_nil_check(F->ic_872)).hi;
} else if (((*(P531)rt_nil_check(f_base_of_166(F->it_875))).kind == ((rt_int)4LL))) {
(*(P529)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P529)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check(f_base_of_166(F->it_875))).lits), ((rt_int)1LL))); b_; }));
}
(*(P529)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P529)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P527)rt_nil_check((*(P527)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P531)rt_nil_check(F->t_868)).idx2 = f_resolve_subtype_188((*(P527)rt_nil_check((*(P527)rt_nil_check(F->st_186)).a)).next, &F->ic2_873);
if (((*(P529)rt_nil_check(F->ic2_873)).lo != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).lo2 = (*(P529)rt_nil_check(F->ic2_873)).lo;
(*(P529)rt_nil_check(F->c_187v)).hi2 = (*(P529)rt_nil_check(F->ic2_873)).hi;
} else if (((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_868)).idx2)).kind == ((rt_int)4LL))) {
(*(P529)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P529)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_868)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_868;
goto ret_;
} else if (0 || (sel871 == ((rt_int)77LL))) {
F->t_868 = f_new_typ_157(((rt_int)16LL));
{
F->ec_877 = NULL;
(*(P531)rt_nil_check(F->t_868)).elem = f_resolve_subtype_188((*(P527)rt_nil_check(F->st_186)).a, &F->ec_877);
(*(P531)rt_nil_check(F->t_868)).elemcons = F->ec_877;
}
F->result_ = F->t_868;
goto ret_;
} else if (0 || (sel871 == ((rt_int)75LL))) {
F->t_868 = f_new_typ_157(((rt_int)7LL));
{
F->comp_878 = NULL;
F->comp_878 = (*(P527)rt_nil_check(F->st_186)).a;
F->tail_879 = NULL;
while ((F->comp_878 != NULL)) {
F->cc_880 = NULL;
F->f_881 = NULL;
{ R534 *cell882 = rt_alloc(sizeof(R534));
(*cell882).name = NULL;
(*cell882).t = NULL;
(*cell882).c = NULL;
(*cell882).st = NULL;
(*cell882).next = NULL;
F->f_881 = cell882;
}
(*(P533)rt_nil_check(F->f_881)).name = (*(P527)rt_nil_check(F->comp_878)).name;
(*(P533)rt_nil_check(F->f_881)).t = f_resolve_subtype_188((*(P527)rt_nil_check(F->comp_878)).a, &F->cc_880);
(*(P533)rt_nil_check(F->f_881)).c = F->cc_880;
(*(P533)rt_nil_check(F->f_881)).st = (*(P527)rt_nil_check(F->comp_878)).a;
if ((F->tail_879 == NULL)) {
(*(P531)rt_nil_check(F->t_868)).fields = F->f_881;
} else {
(*(P533)rt_nil_check(F->tail_879)).next = F->f_881;
}
F->tail_879 = F->f_881;
F->comp_878 = (*(P527)rt_nil_check(F->comp_878)).next;
}
}
F->result_ = F->t_868;
goto ret_;
} else if (0 || (sel871 == ((rt_int)79LL))) {
F->result_ = g_ty_file_598;
goto ret_;
} else if (0 || (sel871 == ((rt_int)78LL))) {
if (((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P535)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)))) {
F->gt_883 = NULL;
F->gt_883 = f_copy_node_465((*(P527)rt_nil_check(F->st_186)).a);
(*(P527)rt_nil_check(F->gt_883)).next = NULL;
F->result_ = f_instantiate_type_414(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_883, (*(P527)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P527)rt_nil_check(F->st_186)).line);
goto ret_;
}
{
F->ec_884 = NULL;
F->t_868 = f_new_typ_157(((rt_int)12LL));
(*(P531)rt_nil_check(F->t_868)).elem = f_resolve_subtype_188((*(P527)rt_nil_check(F->st_186)).a, &F->ec_884);
(*(P531)rt_nil_check(F->t_868)).elemcons = F->ec_884;
if (((*(P527)rt_nil_check(F->st_186)).b != NULL)) {
(*(P529)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->st_186)).b, g_ty_int_592, &F->dummy_870); b_; }));
}
}
F->result_ = F->t_868;
goto ret_;
} else if (0 || (sel871 == ((rt_int)80LL))) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_593;
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_595;
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_600;
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_601;
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_602;
goto ret_;
}
{
F->y_885 = NULL;
F->y_885 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)));
if ((F->y_885 == NULL)) {
f_fail_23((*(P527)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name))); b_; }));
}
if ((((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)10LL)) && (((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_885)).decl)).b)).kind == ((rt_int)43LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_885)).decl)).b)).kind == ((rt_int)44LL))))) {
F->result_ = f_instantiate_type_414(F->y_885, (*(P527)rt_nil_check(F->st_186)).a, (*(P527)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P527)rt_nil_check(F->st_186)).line);
goto ret_;
}
if (((((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)5LL)) && ((*(P535)rt_nil_check(F->y_885)).t != NULL)) && ((*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_885)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_885, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)6LL)) || ((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)5LL))) && ((*(P535)rt_nil_check(F->y_885)).t != NULL))) {
if (((*(P535)rt_nil_check(F->y_885)).c != NULL)) {
F->c_187v = (*(P535)rt_nil_check(F->y_885)).c;
}
F->result_ = (*(P535)rt_nil_check(F->y_885)).t;
goto ret_;
}
if (((((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)5LL)) && ((*(P535)rt_nil_check(F->y_885)).decl != NULL)) && ((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_885)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_885, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)6LL)) || ((*(P535)rt_nil_check(F->y_885)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P535)rt_nil_check(F->y_885)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P527)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  RT_FPOP();
  return F->result_;
}

static int f_opened_190(P531 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_189 = t_189;
F->c_886 = NULL;
F->c_886 = g_caps_576;
if (((((*(P531)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P531)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P527)rt_nil_check((*(P531)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_886 != NULL)) {
if (((*(P547)rt_nil_check(F->c_886)).d == (*(P531)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_886 = (*(P547)rt_nil_check(F->c_886)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193) {
  struct f_replace_all_194fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_191 = s_191;
F->pat_192 = pat_192;
F->r_193 = r_193;
F->i_887 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_887, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_887, rt_sub(rt_add(F->i_887, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_887, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_887, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_887 = rt_add(F->i_887, ((rt_int)1LL));
}
F->result_ = (*F->s_191);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_196(rstr *s_195) {
  struct f_subst_196fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_195 = s_195;
F->l_888 = NULL;
F->l_888 = g_psub_578;
F->r_889 = NULL;
F->r_889 = f_mk_3(&(*F->s_195));
while ((F->l_888 != NULL)) {
F->r_889 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P522)rt_nil_check(F->r_889)), &(*(P522)rt_nil_check((*(P541)rt_nil_check(F->l_888)).s)), &(*(P522)rt_nil_check((*(P541)rt_nil_check((*(P541)rt_nil_check(F->l_888)).next)).s))); b_; }));
F->l_888 = (*(P541)rt_nil_check((*(P541)rt_nil_check(F->l_888)).next)).next;
}
F->result_ = (*(P522)rt_nil_check(F->r_889));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_new_type_200(P535 y_197, P527 st_198, P529 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_890 = NULL;
F->d_890 = (*(P535)rt_nil_check(F->y_197)).decl;
F->p_891 = NULL;
F->uc_892 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P535)rt_nil_check(F->y_197)).t == NULL)) {
(*(P535)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).name = (*(P535)rt_nil_check(F->y_197)).name;
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).decl = F->d_890;
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).tparams = (*(P527)rt_nil_check(F->d_890)).b;
if ((g_caps_576 != NULL)) {
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).ocap = (*(P547)rt_nil_check(g_caps_576)).d;
}
f_open_scope_151();
F->p_891 = (*(P527)rt_nil_check(F->d_890)).b;
while ((F->p_891 != NULL)) {
F->z_893 = NULL;
F->z_893 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->p_891)).name);
F->zc_894 = NULL;
(*(P535)rt_nil_check(F->z_893)).t = f_resolve_subtype_188((*(P527)rt_nil_check(F->p_891)).a, &F->zc_894);
(*(P535)rt_nil_check(F->z_893)).mnext = (*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).tpsyms;
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).tpsyms = F->z_893;
(*(P535)rt_nil_check(F->z_893)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_891)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_893, (*(P527)rt_nil_check(F->d_890)).line);
F->p_891 = (*(P527)rt_nil_check(F->p_891)).next;
}
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_890)).a, &F->uc_892);
(*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_197)).t)).elemcons = F->uc_892;
f_close_scope_152();
}
(*(P529)rt_nil_check(F->c_199v)).args = (*(P527)rt_nil_check(F->st_198)).b;
F->result_ = (*(P535)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P531 t_202, P529 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
f_make_storage_219(&(*F->lval_201), F->t_202, F->c_203);
if (((*(P531)rt_nil_check(F->t_202)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P531)rt_nil_check(F->t_202)).initp, &(*F->lval_201)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_207(P535 y_205, rstr *lval_206) {
  struct f_init_call_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_205 = y_205;
F->lval_206 = lval_206;
F->link_895 = NULL;
F->link_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P535)rt_nil_check(F->y_205)).level > ((rt_int)0LL))) {
F->link_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo897 = ((rt_int)1LL), hi898 = rt_sub(g_cur_level_574, (*(P535)rt_nil_check(F->y_205)).level);
for (rt_int it899 = lo897; it899 <= hi898; it899++) {
F->i_896 = it899;
F->link_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->link_895)), rt_str("->up", 4)); b_; }));
}
}
F->link_895 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->link_895)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_205)).cname)), rt_str("(", 1)), (*(P522)rt_nil_check(F->link_895))), rt_str("&", 1)), (*F->lval_206)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_209(P531 t_208) {
  struct f_needs_fin_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
if ((F->t_208 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_208)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_208)).kind == ((rt_int)15LL))) {
F->result_ = f_needs_fin_209((*(P531)rt_nil_check(F->t_208)).under);
goto ret_;
} else if (((*(P531)rt_nil_check(F->t_208)).kind == ((rt_int)6LL))) {
F->result_ = f_needs_fin_209((*(P531)rt_nil_check(F->t_208)).elem);
goto ret_;
} else if (((*(P531)rt_nil_check(F->t_208)).kind == ((rt_int)7LL))) {
F->f_900 = NULL;
F->f_900 = (*(P531)rt_nil_check(F->t_208)).fields;
while ((F->f_900 != NULL)) {
if (f_needs_fin_209((*(P533)rt_nil_check(F->f_900)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_900 = (*(P533)rt_nil_check(F->f_900)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_212(rstr *lval_210, P531 t_211) {
  struct f_fin_code_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_210 = lval_210;
F->t_211 = t_211;
F->r_901 = NULL;
F->r_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P531)rt_nil_check(F->t_211)).finalp != NULL)) {
F->r_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_207((*(P531)rt_nil_check(F->t_211)).finalp, &(*F->lval_210)), rt_str(" ", 1)); b_; }));
}
if ((((*(P531)rt_nil_check(F->t_211)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_211)).tparams == NULL))) {
F->result_ = rt_str_cat((*(P522)rt_nil_check(F->r_901)), f_fin_code_212(&(*F->lval_210), (*(P531)rt_nil_check(F->t_211)).under));
goto ret_;
} else if (((*(P531)rt_nil_check(F->t_211)).kind == ((rt_int)15LL))) {
F->result_ = rt_str_cat((*(P522)rt_nil_check(F->r_901)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_210), rt_str(".all", 4)); b_; }), (*(P531)rt_nil_check(F->t_211)).under));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->t_211)).kind == ((rt_int)6LL)) && f_needs_fin_209((*(P531)rt_nil_check(F->t_211)).elem))) {
F->i_902 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->r_901)), rt_str("for (rt_int ", 12)), F->i_902), rt_str(" = 0; ", 6)), F->i_902), rt_str(" < RT_CNT(", 10)), (*F->lval_210)), rt_str("); ", 3)), F->i_902), rt_str("++) { ", 6)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_210), rt_str(".p[", 3)), F->i_902), rt_str("]", 1)); b_; }), (*(P531)rt_nil_check(F->t_211)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P531)rt_nil_check(F->t_211)).kind == ((rt_int)7LL))) {
F->f_903 = NULL;
F->f_903 = (*(P531)rt_nil_check(F->t_211)).fields;
while ((F->f_903 != NULL)) {
if (f_needs_fin_209((*(P533)rt_nil_check(F->f_903)).t)) {
F->r_901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->r_901)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_210), rt_str(".", 1)), f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_903)).name)))); b_; }), (*(P533)rt_nil_check(F->f_903)).t)), rt_str(" ", 1)); b_; }));
}
F->f_903 = (*(P533)rt_nil_check(F->f_903)).next;
}
}
F->result_ = (*(P522)rt_nil_check(F->r_901));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_tparam_type_215(P531 t_213, rstr *name_214) {
  struct f_tparam_type_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
F->name_214 = name_214;
F->z_904 = NULL;
F->z_904 = (*(P531)rt_nil_check(F->t_213)).tpsyms;
while ((F->z_904 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->z_904)).name)), (*F->name_214))) {
F->result_ = (*(P535)rt_nil_check(F->z_904)).t;
goto ret_;
}
F->z_904 = (*(P535)rt_nil_check(F->z_904)).mnext;
}
F->result_ = g_ty_int_592;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_219(rstr *lval_216, P531 t_217, P529 c_218) {
  struct f_make_storage_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_216 = lval_216;
F->t_217 = t_217;
F->c_218 = c_218;
if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)15LL))) {
F->p_905 = NULL;
F->p_905 = (*(P531)rt_nil_check(F->t_217)).tparams;
F->a_906 = NULL;
F->a_906 = (*(P529)rt_nil_check(F->c_218)).args;
F->uc_907 = NULL;
F->ut_908 = NULL;
F->at_909 = NULL;
if ((f_list_len_54(F->a_906) != f_list_len_54(F->p_905))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_217)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_905))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_905 != NULL)) {
F->pt_910 = f_tparam_type_215(F->t_217, &(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_905)).name)));
F->v_911 = rt_str_copy(f_gexpr_463(F->a_906, F->pt_910, &F->at_909));
f_check_type_175(F->at_909, F->pt_910, (*(P527)rt_nil_check(F->a_906)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".p_", 3)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_905)).name)))), rt_str(" = ", 3)), F->v_911), rt_str(";", 1)); b_; }));
F->p_905 = (*(P527)rt_nil_check(F->p_905)).next;
F->a_906 = (*(P527)rt_nil_check(F->a_906)).next;
}
{
F->saved_912 = NULL;
F->saved_912 = g_psub_578;
F->p_905 = (*(P531)rt_nil_check(F->t_217)).tparams;
while ((F->p_905 != NULL)) {
F->l1_913 = NULL;
F->l2_914 = NULL;
{ R542 *cell915 = rt_alloc(sizeof(R542));
(*cell915).s = NULL;
(*cell915).next = NULL;
F->l1_913 = cell915;
}
{ R542 *cell916 = rt_alloc(sizeof(R542));
(*cell916).s = NULL;
(*cell916).next = NULL;
F->l2_914 = cell916;
}
(*(P541)rt_nil_check(F->l1_913)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_905)).name)))), rt_str("@", 1)); b_; }));
(*(P541)rt_nil_check(F->l2_914)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".p_", 3)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_905)).name)))); b_; }));
(*(P541)rt_nil_check(F->l1_913)).next = F->l2_914;
(*(P541)rt_nil_check(F->l2_914)).next = g_psub_578;
g_psub_578 = F->l1_913;
F->p_905 = (*(P527)rt_nil_check(F->p_905)).next;
}
if (((*(P531)rt_nil_check(F->t_217)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_216), (*(P531)rt_nil_check(F->t_217)).under, (*(P531)rt_nil_check(F->t_217)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_216), rt_str(".all", 4)); b_; }), (*(P531)rt_nil_check(F->t_217)).under, (*(P531)rt_nil_check(F->t_217)).elemcons);
}
g_psub_578 = F->saved_912;
}
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)12LL))) {
if (((*(P529)rt_nil_check(F->c_218)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_216), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_216)), rt_str(", ", 2)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P531)rt_nil_check(F->t_217)).elem)), rt_str("), ", 3)), f_mcopy_224((*(P531)rt_nil_check(F->t_217)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_216)), rt_str(");", 2)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_216), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_216), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
if (((*(P529)rt_nil_check(F->c_218)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_216), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)6LL))) {
if (((*(P529)rt_nil_check(F->c_218)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".lo = ", 6)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).lo)))), rt_str("; ", 2)), (*F->lval_216)), rt_str(".hi = ", 6)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).hi)))), rt_str("; ", 2)), (*F->lval_216)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).lo2)))), rt_str("; ", 2)), (*F->lval_216)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_218)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P531)rt_nil_check(F->t_217)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_216)), rt_str("));", 3)); b_; }));
if ((((((((((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)5LL)) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)6LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)7LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)15LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)8LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)12LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)13LL))) || ((*(P531)rt_nil_check((*(P531)rt_nil_check(F->t_217)).elem)).kind == ((rt_int)14LL)))) {
F->i_917 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_917), rt_str(" = 0; ", 6)), F->i_917), rt_str(" < RT_CNT(", 10)), (*F->lval_216)), rt_str("); ", 3)), F->i_917), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".p[", 3)), F->i_917), rt_str("]", 1)); b_; }), (*(P531)rt_nil_check(F->t_217)).elem, (*(P531)rt_nil_check(F->t_217)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P531)rt_nil_check(F->t_217)).kind == ((rt_int)7LL))) {
F->f_918 = NULL;
F->f_918 = (*(P531)rt_nil_check(F->t_217)).fields;
while ((F->f_918 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_216), rt_str(".", 1)), f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_918)).name)))); b_; }), (*(P533)rt_nil_check(F->f_918)).t, (*(P533)rt_nil_check(F->f_918)).c);
F->f_918 = (*(P533)rt_nil_check(F->f_918)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_222(P527 e_220, int *ok_221) {
  struct f_manifest_222fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_220 = e_220;
F->ok_221 = ok_221;
F->ok_221v = *F->ok_221;
F->ok_221v = 0;
if (((*(P527)rt_nil_check(F->e_220)).kind == ((rt_int)1LL))) {
F->ok_221v = 1;
F->result_ = (*(P527)rt_nil_check(F->e_220)).ival;
goto ret_;
} else if (((*(P527)rt_nil_check(F->e_220)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_222((*(P527)rt_nil_check(F->e_220)).a, &F->ok_221v);
goto ret_;
} else if ((((*(P527)rt_nil_check(F->e_220)).kind == ((rt_int)8LL)) && rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("-", 1)))) {
F->a_919 = f_manifest_222((*(P527)rt_nil_check(F->e_220)).a, &F->ok_221v);
F->result_ = rt_neg(F->a_919);
goto ret_;
} else if ((((*(P527)rt_nil_check(F->e_220)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("+", 1)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("-", 1))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("*", 1))))) {
F->a_919 = f_manifest_222((*(P527)rt_nil_check(F->e_220)).a, &F->ok_221v);
F->b_920 = f_manifest_222((*(P527)rt_nil_check(F->e_220)).b, &F->ok2_921);
F->ok_221v = (F->ok_221v && F->ok2_921);
if ((!F->ok_221v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_919, F->b_920);
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_919, F->b_920);
goto ret_;
}
F->result_ = rt_mul(F->a_919, F->b_920);
goto ret_;
} else if (((*(P527)rt_nil_check(F->e_220)).kind == ((rt_int)7LL))) {
F->y_922 = NULL;
F->y_922 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_220)).name)));
if ((((F->y_922 != NULL) && ((*(P535)rt_nil_check(F->y_922)).kind == ((rt_int)2LL))) && (*(P535)rt_nil_check(F->y_922)).hasmv)) {
F->ok_221v = 1;
F->result_ = (*(P535)rt_nil_check(F->y_922)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_221) = F->ok_221v;
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_224(P531 t_223) {
  struct f_mcopy_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_223 = t_223;
F->ct_923 = rt_str_copy(f_ctype_177(F->t_223));
F->name_924 = rt_str_new(rt_add((F->ct_923).len, ((rt_int)3LL)));
rt_str_assign(&F->name_924, rt_str_cat(rt_str("mc_", 3), F->ct_923));
F->l_925 = NULL;
if ((!f_seen_name_245(g_mcopies_591, &F->name_924))) {
{ R542 *cell926 = rt_alloc(sizeof(R542));
(*cell926).s = NULL;
(*cell926).next = NULL;
F->l_925 = cell926;
}
(*(P541)rt_nil_check(F->l_925)).s = f_mk_3(&F->name_924);
(*(P541)rt_nil_check(F->l_925)).next = g_mcopies_591;
g_mcopies_591 = F->l_925;
f_put_27(g_out_protos_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_924), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_924), rt_str("(void *d, const void *s) { *(", 29)), F->ct_923), rt_str(" *)d = ", 7)), f_copy_code_234(F->t_223, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_923), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_924;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_226(P531 t_225) {
  struct f_composite_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
F->result_ = ((((*(P531)rt_nil_check(F->t_225)).kind == ((rt_int)6LL)) || ((*(P531)rt_nil_check(F->t_225)).kind == ((rt_int)7LL))) || (((*(P531)rt_nil_check(F->t_225)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_225)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_231(rstr *lval_227, P531 t_228, rstr *v_229, P529 c_230) {
  struct f_assign_code_231fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_227 = lval_227;
F->t_228 = t_228;
F->v_229 = v_229;
F->c_230 = c_230;
if ((((*(P531)rt_nil_check(F->t_228)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_228)).tparams == NULL))) {
F->result_ = f_assign_code_231(&(*F->lval_227), (*(P531)rt_nil_check(F->t_228)).under, &(*F->v_229), F->c_230);
goto ret_;
}
if (f_composite_226(F->t_228)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_228)), rt_str("(&", 2)), (*F->lval_227)), rt_str(", ", 2)), (*F->v_229)), rt_str(");", 2));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_228)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_227)), rt_str(", ", 2)), (*F->v_229)), rt_str(");", 2));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->t_228)).kind == ((rt_int)6LL)) || ((*(P531)rt_nil_check(F->t_228)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_228)), rt_str("(&", 2)), (*F->lval_227)), rt_str(", ", 2)), (*F->v_229)), rt_str(");", 2));
goto ret_;
} else if (((((*(P531)rt_nil_check(F->t_228)).kind == ((rt_int)1LL)) && (F->c_230 != NULL)) && (*(P529)rt_nil_check(F->c_230)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_227), rt_str(" = rt_range(", 12)), (*F->v_229)), rt_str(", ", 2)), f_itos_7((*(P529)rt_nil_check(F->c_230)).mlo)), rt_str(", ", 2)), f_itos_7((*(P529)rt_nil_check(F->c_230)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_227), rt_str(" = ", 3)), (*F->v_229)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_234(P531 t_232, rstr *v_233) {
  struct f_copy_code_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_232 = t_232;
F->v_233 = v_233;
if ((((*(P531)rt_nil_check(F->t_232)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_232)).tparams == NULL))) {
F->result_ = f_copy_code_234((*(P531)rt_nil_check(F->t_232)).under, &(*F->v_233));
goto ret_;
}
if (f_composite_226(F->t_232)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_232)), rt_str("(", 1)), (*F->v_233)), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_232)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_233)), rt_str(")", 1));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->t_232)).kind == ((rt_int)6LL)) || ((*(P531)rt_nil_check(F->t_232)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_232)), rt_str("(", 1)), (*F->v_233)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_233);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_238(P531 t_235, rstr *a_236, rstr *b_237) {
  struct f_eq_code_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
F->a_236 = a_236;
F->b_237 = b_237;
if ((((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)15LL)) && ((*(P531)rt_nil_check(F->t_235)).tparams == NULL))) {
F->result_ = f_eq_code_238((*(P531)rt_nil_check(F->t_235)).under, &(*F->a_236), &(*F->b_237));
goto ret_;
}
if (f_composite_226(F->t_235)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_235)), rt_str("(", 1)), (*F->a_236)), rt_str(", ", 2)), (*F->b_237)), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_236)), rt_str(", ", 2)), (*F->b_237)), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_236)), rt_str(" == ", 4)), (*F->b_237)), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_236)), rt_str(" == ", 4)), (*F->b_237)), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_236)), rt_str(", ", 2)), (*F->b_237)), rt_str(")", 1));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)6LL)) || ((*(P531)rt_nil_check(F->t_235)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_235)), rt_str("(", 1)), (*F->a_236)), rt_str(", ", 2)), (*F->b_237)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_236)), rt_str(" == ", 4)), (*F->b_237)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_242(rstr *lval_239, P531 t_240, rstr *v_241) {
  struct f_elem_assign_242fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_239 = lval_239;
F->t_240 = t_240;
F->v_241 = v_241;
F->result_ = f_assign_code_231(&(*F->lval_239), F->t_240, &(*F->v_241), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_245(P541 l_243, rstr *s_244) {
  struct f_seen_name_245fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_243 = l_243;
F->s_244 = s_244;
F->p_927 = NULL;
F->p_927 = F->l_243;
while ((F->p_927 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P541)rt_nil_check(F->p_927)).s)), (*F->s_244))) {
F->result_ = 1;
goto ret_;
}
F->p_927 = (*(P541)rt_nil_check(F->p_927)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_246(void) {
  struct f_emit_helpers_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_928 = NULL;
F->t_929 = NULL;
F->t_929 = g_all_types_562;
F->done_930 = NULL;
while ((F->t_929 != NULL)) {
if ((f_composite_226(F->t_929) && (!f_seen_name_245(F->done_930, &(*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_929)).cname)))))) {
F->l_931 = NULL;
F->c_932 = rt_str_new(((*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_929)).cname))).len);
rt_str_assign(&F->c_932, (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_929)).cname)));
{ R542 *cell933 = rt_alloc(sizeof(R542));
(*cell933).s = NULL;
(*cell933).next = NULL;
F->l_931 = cell933;
}
(*(P541)rt_nil_check(F->l_931)).s = (*(P531)rt_nil_check(F->t_929)).cname;
(*(P541)rt_nil_check(F->l_931)).next = F->done_930;
F->done_930 = F->l_931;
f_put_27(g_out_helpers_565, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_932), rt_str("(", 1)), F->c_932), rt_str(" *d, ", 5)), F->c_932), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_565, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_932), rt_str(" cp_", 4)), F->c_932), rt_str("(", 1)), F->c_932), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_565, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_932), rt_str("(", 1)), F->c_932), rt_str(" a, ", 4)), F->c_932), rt_str(" b);", 4)); b_; }));
f_helper_bodies_248(F->t_929);
}
F->t_929 = (*(P531)rt_nil_check(F->t_929)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_248(P531 t_247) {
  struct f_helper_bodies_248fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->c_934 = rt_str_new(((*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_247)).cname))).len);
rt_str_assign(&F->c_934, (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_247)).cname)));
F->b_935 = NULL;
F->b_935 = g_out_funcs_568;
if (((*(P531)rt_nil_check(F->t_247)).kind == ((rt_int)6LL))) {
F->e_936 = NULL;
F->e_936 = (*(P531)rt_nil_check(F->t_247)).elem;
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" *d, ", 5)), F->c_934), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_242(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_934), rt_str(" cp_", 4)), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_934), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_936)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_234(F->e_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" a, ", 4)), F->c_934), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_238(F->e_936, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P531)rt_nil_check(F->t_247)).kind == ((rt_int)15LL))) {
F->p_937 = NULL;
F->p_937 = (*(P531)rt_nil_check(F->t_247)).tparams;
F->pc_938 = NULL;
F->pc_938 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_937 != NULL)) {
F->pc_938 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->pc_938)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_937)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_937)).name)))); b_; }));
F->p_937 = (*(P527)rt_nil_check(F->p_937)).next;
}
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" *d, ", 5)), F->c_934), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P522)rt_nil_check(F->pc_938))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_242(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P531)rt_nil_check(F->t_247)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_934), rt_str(" cp_", 4)), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" s) { s.all = ", 14)), f_copy_code_234((*(P531)rt_nil_check(F->t_247)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" a, ", 4)), F->c_934), rt_str(" b) { return ", 13)), f_eq_code_238((*(P531)rt_nil_check(F->t_247)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_939 = NULL;
F->f_939 = (*(P531)rt_nil_check(F->t_247)).fields;
F->conds_940 = NULL;
F->conds_940 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" *d, ", 5)), F->c_934), rt_str(" s) {", 5)); b_; }));
while ((F->f_939 != NULL)) {
F->fn_941 = rt_str_copy(f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_939)).name))));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_242(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_941); b_; }), (*(P533)rt_nil_check(F->f_939)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_941); b_; }))); b_; }));
F->f_939 = (*(P533)rt_nil_check(F->f_939)).next;
}
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_934), rt_str(" cp_", 4)), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_934), rt_str(" d = s;", 7)); b_; }));
F->f_939 = (*(P531)rt_nil_check(F->t_247)).fields;
while ((F->f_939 != NULL)) {
F->fn_942 = rt_str_copy(f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_939)).name))));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_942), rt_str(" = ", 3)), f_copy_code_234((*(P533)rt_nil_check(F->f_939)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_942); b_; }))), rt_str(";", 1)); b_; }));
F->conds_940 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->conds_940)), rt_str(" && ", 4)), f_eq_code_238((*(P533)rt_nil_check(F->f_939)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_942); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_942); b_; }))); b_; }));
F->f_939 = (*(P533)rt_nil_check(F->f_939)).next;
}
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_934), rt_str("(", 1)), F->c_934), rt_str(" a, ", 4)), F->c_934), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P522)rt_nil_check(F->conds_940))), rt_str(";", 1)); b_; }));
f_put_27(F->b_935, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_250(P527 elems_249) {
  struct f_declare_body_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_249 = elems_249;
F->e_943 = NULL;
F->e_943 = F->elems_249;
while ((F->e_943 != NULL)) {
if ((((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)41LL)) && ((*(P527)rt_nil_check(F->e_943)).flag == ((rt_int)0LL)))) {
f_manifest_const_252(F->e_943);
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)47LL))) {
f_gen_capsule_260(F->e_943);
} else if (((((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)48LL)) && ((*(P527)rt_nil_check(F->e_943)).flag != ((rt_int)1LL))) && ((*(P527)rt_nil_check(F->e_943)).flag != ((rt_int)3LL)))) {
f_gen_expose_277(F->e_943);
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)49LL))) {
F->y_944 = NULL;
F->y_944 = f_new_sym_155(((rt_int)7LL), (*(P527)rt_nil_check(F->e_943)).name);
(*(P535)rt_nil_check(F->y_944)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_944, (*(P527)rt_nil_check(F->e_943)).line);
f_put_27(g_out_globals_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_944)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_570, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_944)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)42LL))) {
F->y_945 = NULL;
F->y_945 = f_new_sym_155(((rt_int)6LL), (*(P527)rt_nil_check(F->e_943)).name);
(*(P535)rt_nil_check(F->y_945)).st = (*(P527)rt_nil_check(F->e_943)).a;
f_define_145(F->y_945, (*(P527)rt_nil_check(F->e_943)).line);
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)44LL))) {
F->y_946 = NULL;
F->y_946 = f_new_sym_155(((rt_int)5LL), (*(P527)rt_nil_check(F->e_943)).name);
F->t_947 = NULL;
F->t_947 = f_new_typ_157(((rt_int)8LL));
(*(P531)rt_nil_check(F->t_947)).name = (*(P527)rt_nil_check(F->e_943)).name;
(*(P531)rt_nil_check(F->t_947)).decl = F->e_943;
(*(P535)rt_nil_check(F->y_946)).t = F->t_947;
f_define_145(F->y_946, (*(P527)rt_nil_check(F->e_943)).line);
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)43LL))) {
F->y_948 = NULL;
F->y_948 = f_new_sym_155(((rt_int)5LL), (*(P527)rt_nil_check(F->e_943)).name);
(*(P535)rt_nil_check(F->y_948)).st = (*(P527)rt_nil_check(F->e_943)).a;
(*(P535)rt_nil_check(F->y_948)).decl = F->e_943;
f_define_145(F->y_948, (*(P527)rt_nil_check(F->e_943)).line);
}
F->e_943 = (*(P527)rt_nil_check(F->e_943)).next;
}
F->e_943 = F->elems_249;
while ((F->e_943 != NULL)) {
if (((((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)45LL)) || ((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)46LL))) || ((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_281(F->e_943);
} else if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)51LL))) {
F->g_949 = NULL;
F->g_949 = f_new_sym_155(((rt_int)10LL), (*(P527)rt_nil_check(F->e_943)).name);
(*(P535)rt_nil_check(F->g_949)).decl = F->e_943;
(*(P535)rt_nil_check(F->g_949)).level = g_cur_level_574;
f_define_145(F->g_949, (*(P527)rt_nil_check(F->e_943)).line);
}
F->e_943 = (*(P527)rt_nil_check(F->e_943)).next;
}
F->e_943 = F->elems_249;
{
F->snap_950 = NULL;
while ((F->e_943 != NULL)) {
if (((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)51LL))) {
if ((F->snap_950 == NULL)) {
{ A540 *cell951 = rt_alloc(sizeof(A540));
rt_int pv952 = ((rt_int)4093LL);
(*cell951).lo = ((rt_int)0LL); (*cell951).hi = pv952; (*cell951).lo2 = 1; (*cell951).hi2 = 1;
(*cell951).p = rt_alloc(sizeof(P535) * (size_t)RT_CNT((*cell951)));
for (rt_int i953 = 0; i953 < RT_CNT((*cell951)); i953++) {
(*cell951).p[i953] = NULL;
}
F->snap_950 = cell951;
}
{ rt_int lo955 = ((rt_int)0LL), hi956 = ((rt_int)4093LL);
for (rt_int it957 = lo955; it957 <= hi956; it957++) {
F->i_954 = it957;
(*(P539)rt_nil_check(F->snap_950)).p[rt_index(F->i_954, (*(P539)rt_nil_check(F->snap_950)).lo, (*(P539)rt_nil_check(F->snap_950)).hi) - (*(P539)rt_nil_check(F->snap_950)).lo] = (*(P539)rt_nil_check(g_table_557)).p[rt_index(F->i_954, (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
}
}
}
{
F->g_958 = NULL;
F->g_958 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name)));
(*(P535)rt_nil_check(F->g_958)).env = F->snap_950;
}
}
F->e_943 = (*(P527)rt_nil_check(F->e_943)).next;
}
}
F->e_943 = F->elems_249;
while ((F->e_943 != NULL)) {
if ((((*(P527)rt_nil_check(F->e_943)).kind == ((rt_int)45LL)) && (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name)), rt_str("INITIALIZE", 10)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name)), rt_str("FINALIZE", 8))))) {
F->y_959 = NULL;
F->y_959 = f_lookup_decl_142(F->e_943);
if (((((F->y_959 != NULL) && ((*(P535)rt_nil_check(F->y_959)).params != NULL)) && ((*(P537)rt_nil_check((*(P535)rt_nil_check(F->y_959)).params)).next == NULL)) && (((*(P531)rt_nil_check((*(P537)rt_nil_check((*(P535)rt_nil_check(F->y_959)).params)).t)).kind == ((rt_int)15LL)) || ((*(P531)rt_nil_check((*(P537)rt_nil_check((*(P535)rt_nil_check(F->y_959)).params)).t)).kind == ((rt_int)8LL))))) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_943)).name)), rt_str("INITIALIZE", 10))) {
(*(P531)rt_nil_check((*(P537)rt_nil_check((*(P535)rt_nil_check(F->y_959)).params)).t)).initp = F->y_959;
} else {
(*(P531)rt_nil_check((*(P537)rt_nil_check((*(P535)rt_nil_check(F->y_959)).params)).t)).finalp = F->y_959;
}
}
}
F->e_943 = (*(P527)rt_nil_check(F->e_943)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_252(P527 d_251) {
  struct f_manifest_const_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_251 = d_251;
F->y_962 = NULL;
F->c_963 = NULL;
if (((*(P527)rt_nil_check(F->d_251)).a != NULL)) {
if ((((*(P527)rt_nil_check((*(P527)rt_nil_check(F->d_251)).a)).kind != ((rt_int)70LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->d_251)).a)).a != NULL))) {
goto ret_;
}
}
F->v_961 = f_manifest_222((*(P527)rt_nil_check(F->d_251)).b, &F->ok_960);
if ((!F->ok_960)) {
goto ret_;
}
(*(P527)rt_nil_check(F->d_251)).flag = ((rt_int)1LL);
F->y_962 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->d_251)).name);
(*(P535)rt_nil_check(F->y_962)).t = g_ty_int_592;
(*(P535)rt_nil_check(F->y_962)).c = f_new_cons_158();
(*(P535)rt_nil_check(F->y_962)).mvalue = F->v_961;
(*(P535)rt_nil_check(F->y_962)).hasmv = 1;
(*(P535)rt_nil_check(F->y_962)).ro_flag = 1;
(*(P535)rt_nil_check(F->y_962)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_961)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_962, (*(P527)rt_nil_check(F->d_251)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_256(P527 d_253, rstr *name_254, int *ro_255) {
  struct f_exported_256fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_253 = d_253;
F->name_254 = name_254;
F->ro_255 = ro_255;
F->ro_255v = *F->ro_255;
F->p_964 = NULL;
F->p_964 = (*(P527)rt_nil_check(F->d_253)).a;
F->ro_255v = 0;
if (((*(P527)rt_nil_check(F->d_253)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_964 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_964)).name)), (*F->name_254))) {
F->ro_255v = ((*(P527)rt_nil_check(F->p_964)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_964 = (*(P527)rt_nil_check(F->p_964)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_255) = F->ro_255v;
  RT_FPOP();
  return F->result_;
}

static P535 f_copy_sym_258(P535 y_257) {
  struct f_copy_sym_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_257 = y_257;
F->z_965 = NULL;
{ R536 *cell966 = rt_alloc(sizeof(R536));
(*cell966).name = NULL;
(*cell966).t = NULL;
(*cell966).c = NULL;
(*cell966).access = NULL;
(*cell966).cname = NULL;
(*cell966).st = NULL;
(*cell966).decl = NULL;
(*cell966).params = NULL;
(*cell966).result = NULL;
(*cell966).members = NULL;
(*cell966).mnext = NULL;
(*cell966).binds = NULL;
(*cell966).insts = NULL;
(*cell966).env = NULL;
(*cell966).chain = NULL;
(*cell966).stack = NULL;
F->z_965 = cell966;
}
(*(P535)rt_nil_check(F->z_965)).kind = (*(P535)rt_nil_check(F->y_257)).kind;
(*(P535)rt_nil_check(F->z_965)).name = (*(P535)rt_nil_check(F->y_257)).name;
(*(P535)rt_nil_check(F->z_965)).t = (*(P535)rt_nil_check(F->y_257)).t;
(*(P535)rt_nil_check(F->z_965)).c = (*(P535)rt_nil_check(F->y_257)).c;
(*(P535)rt_nil_check(F->z_965)).access = (*(P535)rt_nil_check(F->y_257)).access;
(*(P535)rt_nil_check(F->z_965)).cname = (*(P535)rt_nil_check(F->y_257)).cname;
(*(P535)rt_nil_check(F->z_965)).ro_flag = (*(P535)rt_nil_check(F->y_257)).ro_flag;
(*(P535)rt_nil_check(F->z_965)).mvalue = (*(P535)rt_nil_check(F->y_257)).mvalue;
(*(P535)rt_nil_check(F->z_965)).hasmv = (*(P535)rt_nil_check(F->y_257)).hasmv;
(*(P535)rt_nil_check(F->z_965)).st = (*(P535)rt_nil_check(F->y_257)).st;
(*(P535)rt_nil_check(F->z_965)).decl = (*(P535)rt_nil_check(F->y_257)).decl;
(*(P535)rt_nil_check(F->z_965)).params = (*(P535)rt_nil_check(F->y_257)).params;
(*(P535)rt_nil_check(F->z_965)).result = (*(P535)rt_nil_check(F->y_257)).result;
(*(P535)rt_nil_check(F->z_965)).level = (*(P535)rt_nil_check(F->y_257)).level;
(*(P535)rt_nil_check(F->z_965)).byref = (*(P535)rt_nil_check(F->y_257)).byref;
(*(P535)rt_nil_check(F->z_965)).members = (*(P535)rt_nil_check(F->y_257)).members;
(*(P535)rt_nil_check(F->z_965)).env = (*(P535)rt_nil_check(F->y_257)).env;
F->result_ = F->z_965;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_260(P527 d_259) {
  struct f_gen_capsule_260fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_259 = d_259;
F->y_967 = NULL;
F->y_967 = f_new_sym_155(((rt_int)8LL), (*(P527)rt_nil_check(F->d_259)).name);
(*(P535)rt_nil_check(F->y_967)).decl = F->d_259;
if (((*(P527)rt_nil_check(F->d_259)).b == NULL)) {
f_elaborate_capsule_269(F->d_259, F->y_967, NULL, F->d_259);
}
f_define_145(F->y_967, (*(P527)rt_nil_check(F->d_259)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_264(P527 d_261, P527 args_262, rt_int line_263) {
  struct f_capsule_params_264fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_261 = d_261;
F->args_262 = args_262;
F->line_263 = line_263;
F->p_968 = NULL;
F->p_968 = (*(P527)rt_nil_check(F->d_261)).b;
F->a_969 = NULL;
F->a_969 = F->args_262;
F->t_970 = NULL;
F->vt_971 = NULL;
F->c_972 = NULL;
while (((F->p_968 != NULL) && (F->a_969 != NULL))) {
F->t_970 = f_resolve_subtype_188((*(P527)rt_nil_check(F->p_968)).a, &F->c_972);
if (((*(P527)rt_nil_check(F->p_968)).ival == ((rt_int)3LL))) {
f_fail_23(F->line_263, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P527)rt_nil_check(F->p_968)).ival == ((rt_int)2LL)) || ((*(P527)rt_nil_check(F->p_968)).ival == ((rt_int)4LL)))) {
F->lv_973 = NULL;
F->lc_974 = NULL;
F->y_976 = NULL;
F->y_976 = f_new_sym_155(((rt_int)1LL), (*(P527)rt_nil_check(F->p_968)).name);
f_lvalue_440(F->a_969, &F->lv_973, &F->vt_971, &F->lc_974, &F->ro_975);
f_check_type_175(F->vt_971, F->t_970, F->line_263);
if ((F->ro_975 && ((*(P527)rt_nil_check(F->p_968)).ival == ((rt_int)2LL)))) {
f_fail_23(F->line_263, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_968)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_573) {
F->f_977 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_968)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_970)), rt_str(" *", 2)), F->f_977), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_977), rt_str(" = &", 4)), (*(P522)rt_nil_check(F->lv_973))), rt_str(";", 1)); b_; }));
(*(P535)rt_nil_check(F->y_976)).level = g_cur_level_574;
(*(P535)rt_nil_check(F->y_976)).access = f_mk_3(&F->f_977);
(*(P535)rt_nil_check(F->y_976)).byref = 1;
} else {
F->g_978 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_968)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_970)), rt_str(" *", 2)), F->g_978), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_581, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_978), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_978, rt_str(" = &", 4)), (*(P522)rt_nil_check(F->lv_973))), rt_str(";", 1)); b_; }));
(*(P535)rt_nil_check(F->y_976)).level = ((rt_int)0LL);
(*(P535)rt_nil_check(F->y_976)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_978), rt_str(")", 1)); b_; }));
}
(*(P535)rt_nil_check(F->y_976)).t = F->t_970;
(*(P535)rt_nil_check(F->y_976)).c = F->lc_974;
(*(P535)rt_nil_check(F->y_976)).ro_flag = ((*(P527)rt_nil_check(F->p_968)).ival == ((rt_int)4LL));
f_define_145(F->y_976, F->line_263);
} else {
F->y_979 = NULL;
F->y_979 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->p_968)).name);
F->v_980 = rt_str_copy(f_gexpr_463(F->a_969, F->t_970, &F->vt_971));
f_check_type_175(F->vt_971, F->t_970, F->line_263);
{
F->access_981 = rt_str_copy(f_storage_288(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_968)).name)), F->t_970));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_981, rt_str(" = ", 3)), f_copy_code_234(F->t_970, &F->v_980)), rt_str(";", 1)); b_; }));
f_bind_291(F->y_979, &F->access_981);
}
(*(P535)rt_nil_check(F->y_979)).t = F->t_970;
(*(P535)rt_nil_check(F->y_979)).c = F->c_972;
(*(P535)rt_nil_check(F->y_979)).ro_flag = 1;
f_define_145(F->y_979, F->line_263);
}
F->p_968 = (*(P527)rt_nil_check(F->p_968)).next;
F->a_969 = (*(P527)rt_nil_check(F->a_969)).next;
}
if (((F->p_968 != NULL) || (F->a_969 != NULL))) {
f_fail_23(F->line_263, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_261)).name))); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_269(P527 d_265, P535 y_266, P527 args_267, P527 owner_268) {
  struct f_elaborate_capsule_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_265 = d_265;
F->y_266 = y_266;
F->args_267 = args_267;
F->owner_268 = owner_268;
F->cr_982 = NULL;
F->ctx_983 = NULL;
F->m_984 = NULL;
F->p_985 = NULL;
F->p_985 = (*(P527)rt_nil_check(F->d_265)).a;
{ R548 *cell987 = rt_alloc(sizeof(R548));
(*cell987).d = NULL;
(*cell987).next = NULL;
F->cr_982 = cell987;
}
(*(P547)rt_nil_check(F->cr_982)).d = F->d_265;
(*(P547)rt_nil_check(F->cr_982)).next = g_caps_576;
g_caps_576 = F->cr_982;
f_open_scope_151();
if (((*(P527)rt_nil_check(F->d_265)).b != NULL)) {
f_capsule_params_264(F->d_265, F->args_267, (*(P527)rt_nil_check(F->owner_268)).line);
}
{ R552 *cell988 = rt_alloc(sizeof(R552));
(*cell988).imps = NULL;
(*cell988).next = NULL;
F->ctx_983 = cell988;
}
(*(P551)rt_nil_check(F->ctx_983)).depth = g_depth_560;
(*(P551)rt_nil_check(F->ctx_983)).imps = (*(P527)rt_nil_check(F->d_265)).d;
(*(P551)rt_nil_check(F->ctx_983)).all_imp = ((*(P527)rt_nil_check(F->d_265)).flag >= ((rt_int)2LL));
(*(P551)rt_nil_check(F->ctx_983)).next = g_fctx_575;
g_fctx_575 = F->ctx_983;
f_declare_body_250((*(P527)rt_nil_check(F->d_265)).c);
f_capsule_elements_312((*(P527)rt_nil_check(F->d_265)).c);
{
F->w_989 = NULL;
{ R550 *cell990 = rt_alloc(sizeof(R550));
(*cell990).d = NULL;
(*cell990).w = NULL;
(*cell990).next = NULL;
F->w_989 = cell990;
}
(*(P549)rt_nil_check(F->w_989)).d = F->owner_268;
(*(P549)rt_nil_check(F->w_989)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_308((*(P527)rt_nil_check(F->d_265)).c); b_; }));
(*(P549)rt_nil_check(F->w_989)).next = g_cap_waits_577;
g_cap_waits_577 = F->w_989;
}
g_fctx_575 = (*(P551)rt_nil_check(g_fctx_575)).next;
F->m_984 = g_scope_stack_561;
while (((F->m_984 != NULL) && ((*(P535)rt_nil_check(F->m_984)).depth == g_depth_560))) {
if ((((((*(P535)rt_nil_check(F->m_984)).kind == ((rt_int)5LL)) && ((*(P535)rt_nil_check(F->m_984)).t == NULL)) && ((*(P535)rt_nil_check(F->m_984)).decl != NULL)) && ((*(P527)rt_nil_check((*(P535)rt_nil_check(F->m_984)).decl)).kind == ((rt_int)43LL)))) {
(*(P535)rt_nil_check(F->m_984)).t = f_new_type_200(F->m_984, f_nn_48(((rt_int)80LL), (*(P527)rt_nil_check(F->d_265)).line), &(*(P535)rt_nil_check(F->m_984)).c);
} else if (((((*(P535)rt_nil_check(F->m_984)).kind == ((rt_int)5LL)) || ((*(P535)rt_nil_check(F->m_984)).kind == ((rt_int)6LL))) && ((*(P535)rt_nil_check(F->m_984)).t == NULL))) {
(*(P535)rt_nil_check(F->m_984)).t = f_resolve_subtype_188((*(P535)rt_nil_check(F->m_984)).st, &(*(P535)rt_nil_check(F->m_984)).c);
} else if ((((*(P535)rt_nil_check(F->m_984)).kind == ((rt_int)5LL)) && ((*(P531)rt_nil_check((*(P535)rt_nil_check(F->m_984)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_279((*(P535)rt_nil_check(F->m_984)).t);
}
F->m_984 = (*(P535)rt_nil_check(F->m_984)).stack;
}
F->m_984 = g_scope_stack_561;
while (((F->m_984 != NULL) && ((*(P535)rt_nil_check(F->m_984)).depth == g_depth_560))) {
if (f_exported_256(F->d_265, &(*(P522)rt_nil_check((*(P535)rt_nil_check(F->m_984)).name)), &F->ro_986)) {
F->z_991 = NULL;
F->z_991 = f_copy_sym_258(F->m_984);
if (F->ro_986) {
(*(P535)rt_nil_check(F->z_991)).ro_flag = 1;
}
(*(P535)rt_nil_check(F->z_991)).mnext = (*(P535)rt_nil_check(F->y_266)).members;
(*(P535)rt_nil_check(F->y_266)).members = F->z_991;
}
F->m_984 = (*(P535)rt_nil_check(F->m_984)).stack;
}
while ((F->p_985 != NULL)) {
if ((((!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_985)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_985)).name)), rt_str("=", 1)))) && ((f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_985)).name))) == NULL) || ((*(P535)rt_nil_check(f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_985)).name))))).depth != g_depth_560)))) {
f_fail_23((*(P527)rt_nil_check(F->d_265)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_985)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_265)).name))); b_; }));
}
F->p_985 = (*(P527)rt_nil_check(F->p_985)).next;
}
f_close_scope_152();
g_caps_576 = (*(P547)rt_nil_check(g_caps_576)).next;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_272(P527 d_270, rstr *op_271) {
  struct f_exports_op_272fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_270 = d_270;
F->op_271 = op_271;
F->p_992 = NULL;
if ((F->d_270 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_992 = (*(P527)rt_nil_check(F->d_270)).a;
while ((F->p_992 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_992)).name)), (*F->op_271))) {
F->result_ = 1;
goto ret_;
}
F->p_992 = (*(P527)rt_nil_check(F->p_992)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_renamed_275(P527 d_273, P535 z_274) {
  struct f_renamed_275fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_273 = d_273;
F->z_274 = z_274;
F->r_993 = NULL;
F->r_993 = (*(P527)rt_nil_check(F->d_273)).c;
while ((F->r_993 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->r_993)).name)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->z_274)).name)))) {
F->result_ = (*(P527)rt_nil_check((*(P527)rt_nil_check(F->r_993)).a)).name;
goto ret_;
}
F->r_993 = (*(P527)rt_nil_check(F->r_993)).next;
}
F->result_ = (*(P535)rt_nil_check(F->z_274)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_277(P527 d_276) {
  struct f_gen_expose_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_276 = d_276;
F->y_994 = NULL;
F->y_994 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_276)).name)));
F->m_995 = NULL;
F->p_996 = NULL;
F->p_996 = (*(P527)rt_nil_check(F->d_276)).a;
F->r_997 = NULL;
F->r_997 = (*(P527)rt_nil_check(F->d_276)).c;
if (((F->y_994 == NULL) || ((*(P535)rt_nil_check(F->y_994)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P527)rt_nil_check(F->d_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_276)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P527)rt_nil_check(F->d_276)).flag == ((rt_int)1LL)) || ((*(P527)rt_nil_check(F->d_276)).flag == ((rt_int)3LL)))) {
F->inst_998 = NULL;
F->inst_998 = f_new_sym_155(((rt_int)8LL), (*(P535)rt_nil_check(F->y_994)).name);
(*(P535)rt_nil_check(F->inst_998)).decl = (*(P535)rt_nil_check(F->y_994)).decl;
f_elaborate_capsule_269((*(P535)rt_nil_check(F->y_994)).decl, F->inst_998, (*(P527)rt_nil_check(F->d_276)).b, F->d_276);
F->y_994 = F->inst_998;
} else if ((((*(P535)rt_nil_check(F->y_994)).decl != NULL) && ((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_994)).decl)).b != NULL))) {
f_fail_23((*(P527)rt_nil_check(F->d_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_276)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P527)rt_nil_check(F->d_276)).b != NULL)) {
f_fail_23((*(P527)rt_nil_check(F->d_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_997 != NULL)) {
F->found_999 = 0;
F->m_995 = (*(P535)rt_nil_check(F->y_994)).members;
while ((F->m_995 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->m_995)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->r_997)).name)))) {
F->found_999 = 1;
}
F->m_995 = (*(P535)rt_nil_check(F->m_995)).mnext;
}
if ((!F->found_999)) {
f_fail_23((*(P527)rt_nil_check(F->d_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->r_997)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_276)).name))); b_; }));
}
F->r_997 = (*(P527)rt_nil_check(F->r_997)).next;
}
if (((*(P527)rt_nil_check(F->d_276)).ival == ((rt_int)1LL))) {
F->m_995 = (*(P535)rt_nil_check(F->y_994)).members;
while ((F->m_995 != NULL)) {
F->z_1000 = NULL;
F->z_1000 = f_copy_sym_258(F->m_995);
(*(P535)rt_nil_check(F->z_1000)).name = f_renamed_275(F->d_276, F->m_995);
f_define_145(F->z_1000, (*(P527)rt_nil_check(F->d_276)).line);
F->m_995 = (*(P535)rt_nil_check(F->m_995)).mnext;
}
goto ret_;
}
while ((F->p_996 != NULL)) {
F->found_1001 = 0;
F->m_995 = (*(P535)rt_nil_check(F->y_994)).members;
while ((F->m_995 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->m_995)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_996)).name)))) {
F->z_1002 = NULL;
F->z_1002 = f_copy_sym_258(F->m_995);
if (((*(P527)rt_nil_check(F->p_996)).ival == ((rt_int)1LL))) {
(*(P535)rt_nil_check(F->z_1002)).ro_flag = 1;
}
(*(P535)rt_nil_check(F->z_1002)).name = f_renamed_275(F->d_276, F->m_995);
f_define_145(F->z_1002, (*(P527)rt_nil_check(F->d_276)).line);
F->found_1001 = 1;
}
F->m_995 = (*(P535)rt_nil_check(F->m_995)).mnext;
}
if ((!F->found_1001)) {
f_fail_23((*(P527)rt_nil_check(F->d_276)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_996)).name)), rt_str(" is not exported by ", 20)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_276)).name))); b_; }));
}
F->p_996 = (*(P527)rt_nil_check(F->p_996)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_279(P531 t_278) {
  struct f_finish_ptr_279fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_278 = t_278;
F->d_1003 = NULL;
F->d_1003 = (*(P531)rt_nil_check(F->t_278)).decl;
F->p_1004 = NULL;
F->c_1005 = NULL;
F->dummy_1006 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1006, rt_str(" ", 1));
if (((*(P531)rt_nil_check(F->t_278)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_1004 = (*(P527)rt_nil_check(F->d_1003)).b;
while ((F->p_1004 != NULL)) {
F->y_1007 = NULL;
F->y_1007 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->p_1004)).name);
(*(P535)rt_nil_check(F->y_1007)).t = g_ty_int_592;
(*(P535)rt_nil_check(F->y_1007)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_1007, (*(P527)rt_nil_check(F->d_1003)).line);
F->p_1004 = (*(P527)rt_nil_check(F->p_1004)).next;
}
(*(P531)rt_nil_check(F->t_278)).target = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_1003)).a, &F->c_1005);
f_close_scope_152();
(*rt_str_at(&F->dummy_1006, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_278), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1006, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P531)rt_nil_check(F->t_278)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_281(P527 d_280) {
  struct f_declare_subprogram_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_280 = d_280;
f_define_145(f_build_subprogram_283(F->d_280), (*(P527)rt_nil_check(F->d_280)).line);
ret_:
  RT_FPOP();
  return;
}

static P535 f_build_subprogram_283(P527 d_282) {
  struct f_build_subprogram_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_282 = d_282;
F->y_1008 = NULL;
F->p_1009 = NULL;
F->p_1009 = (*(P527)rt_nil_check(F->d_282)).a;
F->tail_1010 = NULL;
if (((*(P527)rt_nil_check(F->d_282)).kind == ((rt_int)46LL))) {
F->y_1008 = f_new_sym_155(((rt_int)3LL), (*(P527)rt_nil_check(F->d_282)).name);
} else if (((*(P527)rt_nil_check(F->d_282)).kind == ((rt_int)50LL))) {
F->y_1008 = f_new_sym_155(((rt_int)9LL), (*(P527)rt_nil_check(F->d_282)).name);
} else {
F->y_1008 = f_new_sym_155(((rt_int)4LL), (*(P527)rt_nil_check(F->d_282)).name);
}
while ((F->p_1009 != NULL)) {
F->pm_1011 = NULL;
{ R538 *cell1012 = rt_alloc(sizeof(R538));
(*cell1012).name = NULL;
(*cell1012).t = NULL;
(*cell1012).c = NULL;
(*cell1012).cfield = NULL;
(*cell1012).next = NULL;
F->pm_1011 = cell1012;
}
(*(P537)rt_nil_check(F->pm_1011)).name = (*(P527)rt_nil_check(F->p_1009)).name;
(*(P537)rt_nil_check(F->pm_1011)).mode = (*(P527)rt_nil_check(F->p_1009)).ival;
(*(P537)rt_nil_check(F->pm_1011)).t = f_resolve_subtype_188((*(P527)rt_nil_check(F->p_1009)).a, &(*(P537)rt_nil_check(F->pm_1011)).c);
(*(P537)rt_nil_check(F->pm_1011)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1009)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1010 == NULL)) {
(*(P535)rt_nil_check(F->y_1008)).params = F->pm_1011;
} else {
(*(P537)rt_nil_check(F->tail_1010)).next = F->pm_1011;
}
F->tail_1010 = F->pm_1011;
F->p_1009 = (*(P527)rt_nil_check(F->p_1009)).next;
}
(*(P535)rt_nil_check(F->y_1008)).result = g_ty_void_597;
if (((*(P527)rt_nil_check(F->d_282)).b != NULL)) {
F->rc_1013 = NULL;
(*(P535)rt_nil_check(F->y_1008)).result = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_282)).b, &F->rc_1013);
}
(*(P535)rt_nil_check(F->y_1008)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_429(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_282)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P535)rt_nil_check(F->y_1008)).decl = F->d_282;
(*(P535)rt_nil_check(F->y_1008)).level = g_cur_level_574;
if (((*(P527)rt_nil_check(F->d_282)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1008)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1008;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_element_285(P527 e_284) {
  struct f_element_285fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_284 = e_284;
F->k_1014 = (*(P527)rt_nil_check(F->e_284)).kind;
if (((F->k_1014 == ((rt_int)48LL)) && (((*(P527)rt_nil_check(F->e_284)).flag == ((rt_int)1LL)) || ((*(P527)rt_nil_check(F->e_284)).flag == ((rt_int)3LL))))) {
f_gen_expose_277(F->e_284);
} else if ((((F->k_1014 == ((rt_int)45LL)) || (F->k_1014 == ((rt_int)46LL))) || (F->k_1014 == ((rt_int)50LL)))) {
f_subprogram_301(F->e_284);
} else if (((((((F->k_1014 == ((rt_int)49LL)) || (F->k_1014 == ((rt_int)42LL))) || (F->k_1014 == ((rt_int)43LL))) || (F->k_1014 == ((rt_int)47LL))) || (F->k_1014 == ((rt_int)48LL))) || (F->k_1014 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_1014 == ((rt_int)44LL))) {
f_finish_ptr_279((*(P535)rt_nil_check(f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_284)).name))))).t);
} else if ((F->k_1014 == ((rt_int)40LL))) {
f_var_decl_293(F->e_284);
} else if (((F->k_1014 == ((rt_int)41LL)) && ((*(P527)rt_nil_check(F->e_284)).flag == ((rt_int)0LL)))) {
f_const_decl_299(F->e_284);
} else if ((F->k_1014 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_1014 == ((rt_int)33LL))) {
F->t_1015 = NULL;
F->c_1016 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_284)).a, g_ty_bool_593, &F->t_1015));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1016), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_323(F->e_284);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_288(rstr *name_286, P531 t_287) {
  struct f_storage_288fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_286 = name_286;
F->t_287 = t_287;
if ((!g_in_func_573)) {
F->g_1017 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_286))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_567, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_287)), rt_str(" ", 1)), F->g_1017), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_581, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1017), rt_str(");", 2)); b_; }));
g_st_field_579 = f_mk_3(&F->g_1017);
F->result_ = F->g_1017;
goto ret_;
}
{
F->f_1018 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_286)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_287)), rt_str(" ", 1)), F->f_1018), rt_str(";", 1)); b_; }));
g_st_field_579 = f_mk_3(&F->f_1018);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1018);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_291(P535 y_289, rstr *access_290) {
  struct f_bind_291fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_289 = y_289;
F->access_290 = access_290;
if (g_in_func_573) {
(*(P535)rt_nil_check(F->y_289)).level = g_cur_level_574;
(*(P535)rt_nil_check(F->y_289)).access = g_st_field_579;
} else {
(*(P535)rt_nil_check(F->y_289)).level = ((rt_int)0LL);
(*(P535)rt_nil_check(F->y_289)).access = f_mk_3(&(*F->access_290));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_293(P527 d_292) {
  struct f_var_decl_293fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_292 = d_292;
F->c_1019 = NULL;
F->t_1020 = NULL;
F->t_1020 = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_292)).a, &F->c_1019);
F->y_1021 = NULL;
F->y_1021 = f_new_sym_155(((rt_int)1LL), (*(P527)rt_nil_check(F->d_292)).name);
F->access_1022 = rt_str_copy(f_storage_288(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_292)).name)), F->t_1020));
f_init_storage_204(&F->access_1022, F->t_1020, F->c_1019);
if (((*(P527)rt_nil_check(F->d_292)).ival == ((rt_int)1LL))) {
F->it_1023 = NULL;
F->n_1024 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->d_292)).c, g_ty_int_592, &F->it_1023));
if (((*(P531)rt_nil_check(F->t_1020)).kind != ((rt_int)12LL))) {
f_fail_23((*(P527)rt_nil_check(F->d_292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_164((*(P531)rt_nil_check(F->t_1020)).elem, g_ty_ascii_595)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1022), rt_str(", ", 2)), F->n_1024), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1022), rt_str(", ", 2)), F->n_1024), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P527)rt_nil_check(F->d_292)).ival == ((rt_int)2LL))) {
f_fail_23((*(P527)rt_nil_check(F->d_292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P527)rt_nil_check(F->d_292)).b != NULL)) {
F->vt_1025 = NULL;
F->v_1026 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->d_292)).b, F->t_1020, &F->vt_1025));
f_check_type_175(F->vt_1025, F->t_1020, (*(P527)rt_nil_check(F->d_292)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_231(&F->access_1022, F->t_1020, &F->v_1026, F->c_1019); b_; }));
}
(*(P535)rt_nil_check(F->y_1021)).t = F->t_1020;
(*(P535)rt_nil_check(F->y_1021)).c = F->c_1019;
f_bind_291(F->y_1021, &F->access_1022);
f_define_145(F->y_1021, (*(P527)rt_nil_check(F->d_292)).line);
if (f_needs_fin_209(F->t_1020)) {
f_open_fin_295(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_212(&F->access_1022, F->t_1020); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_295(rstr *fc_294) {
  struct f_open_fin_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_294 = fc_294;
F->f_1027 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1028 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1027), rt_str("; if (RT_TRY(", 13)), F->f_1027), rt_str(")) {", 4)); b_; }));
f_push_cleanup_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1027), rt_str("); ", 3)), (*F->fc_294)); b_; }));
{ R542 *cell1029 = rt_alloc(sizeof(R542));
(*cell1029).s = NULL;
(*cell1029).next = NULL;
F->l_1028 = cell1029;
}
(*(P541)rt_nil_check(F->l_1028)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1027), rt_str("); ", 3)), (*F->fc_294)), rt_str(" } else { RT_POP(", 17)), F->f_1027), rt_str("); ", 3)), (*F->fc_294)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P541)rt_nil_check(F->l_1028)).next = g_fins_583;
g_fins_583 = F->l_1028;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_297(P541 saved_296) {
  struct f_close_fins_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_296 = saved_296;
while (((g_fins_583 != F->saved_296) && (g_fins_583 != NULL))) {
f_emit_29(&(*(P522)rt_nil_check((*(P541)rt_nil_check(g_fins_583)).s)));
f_pop_cleanup_321();
g_fins_583 = (*(P541)rt_nil_check(g_fins_583)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_299(P527 d_298) {
  struct f_const_decl_299fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_298 = d_298;
F->c_1030 = NULL;
F->c_1030 = f_new_cons_158();
F->t_1031 = NULL;
F->vt_1032 = NULL;
F->y_1033 = NULL;
F->y_1033 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->d_298)).name);
if (((*(P527)rt_nil_check(F->d_298)).a != NULL)) {
F->t_1031 = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_298)).a, &F->c_1030);
}
{
F->v_1035 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->d_298)).b, F->t_1031, &F->vt_1032));
if ((F->t_1031 != NULL)) {
f_check_type_175(F->vt_1032, F->t_1031, (*(P527)rt_nil_check(F->d_298)).line);
} else {
F->t_1031 = F->vt_1032;
}
if (((*(P531)rt_nil_check(F->t_1031)).kind == ((rt_int)1LL))) {
(*(P535)rt_nil_check(F->y_1033)).mvalue = f_manifest_222((*(P527)rt_nil_check(F->d_298)).b, &F->ok_1034);
(*(P535)rt_nil_check(F->y_1033)).hasmv = F->ok_1034;
}
{
F->access_1036 = rt_str_copy(f_storage_288(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->d_298)).name)), F->t_1031));
if (((*(P531)rt_nil_check(F->t_1031)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P531)rt_nil_check(F->t_1031)).initp, &F->access_1036); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1036, rt_str(" = ", 3)), f_copy_code_234(F->t_1031, &F->v_1035)), rt_str(";", 1)); b_; }));
f_bind_291(F->y_1033, &F->access_1036);
if (f_needs_fin_209(F->t_1031)) {
f_open_fin_295(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_212(&F->access_1036, F->t_1031); b_; }));
}
}
}
(*(P535)rt_nil_check(F->y_1033)).t = F->t_1031;
(*(P535)rt_nil_check(F->y_1033)).c = F->c_1030;
(*(P535)rt_nil_check(F->y_1033)).ro_flag = 1;
f_define_145(F->y_1033, (*(P527)rt_nil_check(F->d_298)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_301(P527 d_300) {
  struct f_subprogram_301fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_300 = d_300;
f_gen_subprogram_304(F->d_300, f_lookup_decl_142(F->d_300));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_304(P527 d_302, P535 y_303) {
  struct f_gen_subprogram_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_302 = d_302;
F->y_303 = y_303;
F->saved_code_1037 = NULL;
F->saved_code_1037 = g_code_571;
F->saved_fields_1038 = NULL;
F->saved_fields_1038 = g_fields_buf_572;
F->saved_in_1039 = g_in_func_573;
F->saved_sym_1040 = NULL;
F->saved_sym_1040 = g_func_sym_585;
F->saved_exits_1041 = NULL;
F->saved_exits_1041 = g_exits_586;
F->saved_frames_1042 = g_frames_587;
F->args_1043 = NULL;
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1044 = NULL;
F->pm_1044 = (*(P535)rt_nil_check(F->y_303)).params;
F->saved_handlers_1045 = NULL;
F->saved_handlers_1045 = g_handlers_588;
F->saved_cleanups_1046 = NULL;
F->saved_cleanups_1046 = g_cleanups_589;
F->ctx_1047 = NULL;
F->head_1048 = NULL;
F->frame_1049 = NULL;
F->frame_1049 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_303)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1050 = NULL;
F->copy_back_1051 = NULL;
F->copy_back_1051 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1052 = NULL;
F->pfin_1052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1053 = NULL;
F->saved_fins_1053 = g_fins_583;
if (g_in_func_573) {
F->parent_1050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(g_func_sym_585)).cname)), rt_str("fr", 2)); b_; }));
}
g_fins_583 = NULL;
g_code_571 = f_new_buffer_24();
g_fields_buf_572 = f_new_buffer_24();
g_in_func_573 = 1;
g_func_sym_585 = F->y_303;
g_exits_586 = NULL;
g_frames_587 = ((rt_int)0LL);
g_handlers_588 = NULL;
g_cleanups_589 = NULL;
g_cur_level_574 = rt_add(g_cur_level_574, ((rt_int)1LL));
f_open_scope_151();
{ R552 *cell1054 = rt_alloc(sizeof(R552));
(*cell1054).imps = NULL;
(*cell1054).next = NULL;
F->ctx_1047 = cell1054;
}
(*(P551)rt_nil_check(F->ctx_1047)).depth = g_depth_560;
(*(P551)rt_nil_check(F->ctx_1047)).imps = (*(P527)rt_nil_check(F->d_302)).d;
(*(P551)rt_nil_check(F->ctx_1047)).all_imp = ((*(P527)rt_nil_check(F->d_302)).flag >= ((rt_int)2LL));
(*(P551)rt_nil_check(F->ctx_1047)).next = g_fctx_575;
g_fctx_575 = F->ctx_1047;
if ((F->parent_1050 != NULL)) {
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P522)rt_nil_check(F->parent_1050))), rt_str(" *up;", 5)); b_; }));
if (((*(P535)rt_nil_check(F->y_303)).kind != ((rt_int)9LL))) {
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check(F->parent_1050))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1044 != NULL)) {
F->ct_1055 = rt_str_copy(f_ctype_177((*(P537)rt_nil_check(F->pm_1044)).t));
F->f_1056 = rt_str_copy((*(P522)rt_nil_check((*(P537)rt_nil_check(F->pm_1044)).cfield)));
F->p_1057 = NULL;
if ((((*(P522)rt_nil_check(F->args_1043))).len > ((rt_int)0LL))) {
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->args_1043)), rt_str(", ", 2)); b_; }));
}
if (((*(P537)rt_nil_check(F->pm_1044)).mode == ((rt_int)1LL))) {
F->p_1057 = f_new_sym_155(((rt_int)2LL), (*(P537)rt_nil_check(F->pm_1044)).name);
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1055), rt_str(" ", 1)), F->f_1056), rt_str(";", 1)); b_; }));
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1043)), F->ct_1055), rt_str(" ", 1)), F->f_1056); b_; }));
(*(P535)rt_nil_check(F->p_1057)).access = f_mk_3(&F->f_1056);
if (((*(P535)rt_nil_check(F->y_303)).kind != ((rt_int)9LL))) {
if (((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1044)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1044)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1056); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str(" = ", 3)), f_copy_code_234((*(P537)rt_nil_check(F->pm_1044)).t, &F->f_1056)), rt_str(";", 1)); b_; }));
if (f_needs_fin_209((*(P537)rt_nil_check(F->pm_1044)).t)) {
F->pfin_1052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->pfin_1052)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1056); b_; }), (*(P537)rt_nil_check(F->pm_1044)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1057 = f_new_sym_155(((rt_int)1LL), (*(P537)rt_nil_check(F->pm_1044)).name);
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1055), rt_str(" *", 2)), F->f_1056), rt_str(";", 1)); b_; }));
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1043)), F->ct_1055), rt_str(" *", 2)), F->f_1056); b_; }));
(*(P535)rt_nil_check(F->p_1057)).access = f_mk_3(&F->f_1056);
(*(P535)rt_nil_check(F->p_1057)).byref = 1;
if (((*(P535)rt_nil_check(F->y_303)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str(" = ", 3)), F->f_1056), rt_str(";", 1)); b_; }));
}
if ((((*(P537)rt_nil_check(F->pm_1044)).mode == ((rt_int)3LL)) && ((*(P535)rt_nil_check(F->y_303)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1055), rt_str(" ", 1)), F->f_1056), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str("v = ", 4)), f_copy_code_234((*(P537)rt_nil_check(F->pm_1044)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1056); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1044)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1044)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str("v", 1)); b_; })); b_; }));
}
F->copy_back_1051 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->copy_back_1051)), rt_str("  ", 2)), f_assign_code_231(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1056), rt_str(")", 1)); b_; }), (*(P537)rt_nil_check(F->pm_1044)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str("v", 1)); b_; }), (*(P537)rt_nil_check(F->pm_1044)).c)); b_; }));
if (f_needs_fin_209((*(P537)rt_nil_check(F->pm_1044)).t)) {
F->pfin_1052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->pfin_1052)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1056), rt_str("v", 1)); b_; }), (*(P537)rt_nil_check(F->pm_1044)).t)), rt_str(" ", 1)); b_; }));
}
(*(P535)rt_nil_check(F->p_1057)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1056, rt_str("v", 1)); b_; }));
(*(P535)rt_nil_check(F->p_1057)).byref = 0;
}
}
(*(P535)rt_nil_check(F->p_1057)).t = (*(P537)rt_nil_check(F->pm_1044)).t;
(*(P535)rt_nil_check(F->p_1057)).c = (*(P537)rt_nil_check(F->pm_1044)).c;
(*(P535)rt_nil_check(F->p_1057)).level = g_cur_level_574;
(*(P535)rt_nil_check(F->p_1057)).ro_flag = (((*(P537)rt_nil_check(F->pm_1044)).mode == ((rt_int)1LL)) || ((*(P537)rt_nil_check(F->pm_1044)).mode == ((rt_int)4LL)));
f_define_145(F->p_1057, (*(P527)rt_nil_check(F->d_302)).line);
F->pm_1044 = (*(P537)rt_nil_check(F->pm_1044)).next;
}
if (((*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_303)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P535)rt_nil_check(F->y_303)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_303)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_303)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
if ((((*(P522)rt_nil_check(F->pfin_1052))).len > ((rt_int)0LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
f_declare_body_250((*(P527)rt_nil_check(F->d_302)).c);
f_body_elements_314((*(P527)rt_nil_check(F->d_302)).c);
f_close_fins_297(NULL);
if ((((*(P522)rt_nil_check(F->pfin_1052))).len > ((rt_int)0LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (*(P522)rt_nil_check(F->pfin_1052))), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_321();
F->copy_back_1051 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->copy_back_1051)), rt_str("  ", 2)), (*(P522)rt_nil_check(F->pfin_1052))); b_; }));
}
f_close_scope_152();
g_fctx_575 = (*(P551)rt_nil_check(g_fctx_575)).next;
g_cur_level_574 = rt_sub(g_cur_level_574, ((rt_int)1LL));
if (((((*(P522)rt_nil_check(F->args_1043))).len == ((rt_int)0LL)) || ((*(P535)rt_nil_check(F->y_303)).kind == ((rt_int)9LL)))) {
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P535)rt_nil_check(F->y_303)).kind == ((rt_int)9LL))) {
F->args_1043 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P535)rt_nil_check(F->y_303)).result)), rt_str(" ", 1)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_303)).cname))), rt_str("(", 1)), (*(P522)rt_nil_check(F->args_1043))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->head_1048)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->head_1048)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_580, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P522)rt_nil_check(F->frame_1049))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_580, g_fields_buf_572);
f_put_27(g_out_frames_580, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P535)rt_nil_check(F->y_303)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P522)rt_nil_check(F->frame_1049))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P522)rt_nil_check(F->frame_1049))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_568, g_code_571);
if (((*(P531)rt_nil_check((*(P535)rt_nil_check(F->y_303)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P522)rt_nil_check(F->copy_back_1051))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_568, &(*(P522)rt_nil_check(F->copy_back_1051)));
}
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P522)rt_nil_check(F->copy_back_1051))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_568, &(*(P522)rt_nil_check(F->copy_back_1051)));
}
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_571 = F->saved_code_1037;
g_fields_buf_572 = F->saved_fields_1038;
g_in_func_573 = F->saved_in_1039;
g_func_sym_585 = F->saved_sym_1040;
g_exits_586 = F->saved_exits_1041;
g_frames_587 = F->saved_frames_1042;
g_handlers_588 = F->saved_handlers_1045;
g_cleanups_589 = F->saved_cleanups_1046;
g_fins_583 = F->saved_fins_1053;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_306(P527 d_305) {
  struct f_waits_of_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_305 = d_305;
F->w_1058 = NULL;
F->w_1058 = g_cap_waits_577;
while ((F->w_1058 != NULL)) {
if (((*(P549)rt_nil_check(F->w_1058)).d == F->d_305)) {
F->result_ = (*(P522)rt_nil_check((*(P549)rt_nil_check(F->w_1058)).w));
goto ret_;
}
F->w_1058 = (*(P549)rt_nil_check(F->w_1058)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_308(P527 elems_307) {
  struct f_task_waits_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_307 = elems_307;
F->e_1059 = NULL;
F->e_1059 = F->elems_307;
F->r_1060 = NULL;
F->r_1060 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1059 != NULL)) {
if (((*(P527)rt_nil_check(F->e_1059)).kind == ((rt_int)50LL))) {
F->r_1060 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->r_1060)), rt_str(" rt_await_decl(&", 16)), (*(P522)rt_nil_check((*(P535)rt_nil_check(f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_1059)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P527)rt_nil_check(F->e_1059)).kind == ((rt_int)47LL)) || (((*(P527)rt_nil_check(F->e_1059)).kind == ((rt_int)48LL)) && (((*(P527)rt_nil_check(F->e_1059)).flag == ((rt_int)1LL)) || ((*(P527)rt_nil_check(F->e_1059)).flag == ((rt_int)3LL)))))) {
F->r_1060 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->r_1060)), f_waits_of_306(F->e_1059)); b_; }));
}
F->e_1059 = (*(P527)rt_nil_check(F->e_1059)).next;
}
F->result_ = (*(P522)rt_nil_check(F->r_1060));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_310(P527 elems_309) {
  struct f_await_tasks_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_309 = elems_309;
F->w_1061 = rt_str_copy(f_task_waits_308(F->elems_309));
if (((F->w_1061).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1061);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_312(P527 elems_311) {
  struct f_capsule_elements_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_311 = elems_311;
F->e_1062 = NULL;
F->e_1062 = F->elems_311;
while ((F->e_1062 != NULL)) {
f_element_285(F->e_1062);
F->e_1062 = (*(P527)rt_nil_check(F->e_1062)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_314(P527 elems_313) {
  struct f_body_elements_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_313 = elems_313;
f_capsule_elements_312(F->elems_313);
f_await_tasks_310(F->elems_313);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_316(P527 elems_315) {
  struct f_gen_body_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_315 = elems_315;
F->saved_1063 = NULL;
F->saved_1063 = g_fins_583;
f_open_scope_151();
f_declare_body_250(F->elems_315);
f_body_elements_314(F->elems_315);
f_close_fins_297(F->saved_1063);
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_318(rt_int upto_317) {
  struct f_pop_frames_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_317 = upto_317;
F->i_1064 = g_frames_587;
F->c_1065 = NULL;
F->c_1065 = g_cleanups_589;
while ((F->i_1064 > F->upto_317)) {
f_emit_29(&(*(P522)rt_nil_check((*(P541)rt_nil_check(F->c_1065)).s)));
F->c_1065 = (*(P541)rt_nil_check(F->c_1065)).next;
F->i_1064 = rt_sub(F->i_1064, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_320(rstr *s_319) {
  struct f_push_cleanup_320fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_319 = s_319;
F->c_1066 = NULL;
{ R542 *cell1067 = rt_alloc(sizeof(R542));
(*cell1067).s = NULL;
(*cell1067).next = NULL;
F->c_1066 = cell1067;
}
(*(P541)rt_nil_check(F->c_1066)).s = f_mk_3(&(*F->s_319));
(*(P541)rt_nil_check(F->c_1066)).next = g_cleanups_589;
g_cleanups_589 = F->c_1066;
g_frames_587 = rt_add(g_frames_587, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_321(void) {
  struct f_pop_cleanup_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_589 = (*(P541)rt_nil_check(g_cleanups_589)).next;
g_frames_587 = rt_sub(g_frames_587, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_323(P527 s_322) {
  struct f_gen_statement_323fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_322 = s_322;
F->label_1068 = NULL;
if (((*(P527)rt_nil_check(F->s_322)).tag != NULL)) {
F->x_1069 = NULL;
{ R546 *cell1070 = rt_alloc(sizeof(R546));
(*cell1070).match = NULL;
(*cell1070).label = NULL;
(*cell1070).next = NULL;
F->x_1069 = cell1070;
}
F->label_1068 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P545)rt_nil_check(F->x_1069)).match = (*(P527)rt_nil_check(F->s_322)).tag;
(*(P545)rt_nil_check(F->x_1069)).label = F->label_1068;
(*(P545)rt_nil_check(F->x_1069)).depth = g_frames_587;
(*(P545)rt_nil_check(F->x_1069)).next = g_exits_586;
g_exits_586 = F->x_1069;
}
{ rt_int sel1071 = (*(P527)rt_nil_check(F->s_322)).kind;
if (0 || (sel1071 == ((rt_int)20LL))) {
f_st_assign_325(F->s_322);
} else if (0 || (sel1071 == ((rt_int)21LL))) {
f_st_call_327(F->s_322);
} else if (0 || (sel1071 == ((rt_int)22LL))) {
f_st_if_329(F->s_322);
} else if (0 || (sel1071 == ((rt_int)23LL))) {
f_st_case_331(F->s_322);
} else if (0 || (sel1071 == ((rt_int)24LL))) {
f_st_repeat_333(F->s_322);
} else if (0 || (sel1071 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_322)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1071 == ((rt_int)27LL))) {
f_st_exit_335(F->s_322);
} else if (0 || (sel1071 == ((rt_int)28LL))) {
f_st_return_337(F->s_322);
} else if (0 || (sel1071 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_340(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_322)).name)), (*(P527)rt_nil_check(F->s_322)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1071 == ((rt_int)31LL))) {
if ((g_handlers_588 == NULL)) {
f_fail_23((*(P527)rt_nil_check(F->s_322)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P522)rt_nil_check((*(P541)rt_nil_check(g_handlers_588)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1071 == ((rt_int)26LL))) {
f_st_guard_342(F->s_322);
} else if (0 || (sel1071 == ((rt_int)32LL))) {
f_st_alloc_344(F->s_322);
} else if (0 || (sel1071 == ((rt_int)34LL))) {
f_st_create_348(F->s_322);
} else if (0 || (sel1071 == ((rt_int)35LL))) {
f_st_wait_377(F->s_322);
} else if (0 || (sel1071 == ((rt_int)36LL))) {
f_st_region_385(F->s_322);
} else {
f_fail_23((*(P527)rt_nil_check(F->s_322)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P527)rt_nil_check(F->s_322)).tag != NULL)) {
g_exits_586 = (*(P545)rt_nil_check(g_exits_586)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->label_1068)), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_325(P527 s_324) {
  struct f_st_assign_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_324 = s_324;
F->lv_1072 = NULL;
F->t_1073 = NULL;
F->vt_1074 = NULL;
F->c_1075 = NULL;
if (((((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).kind == ((rt_int)10LL)) && ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).b != NULL)) && ((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_440((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).a, &F->lv_1072, &F->t_1073, &F->c_1075, &F->ro_1076);
if ((F->ro_1076 || ((*(P531)rt_nil_check(F->t_1073)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P527)rt_nil_check(F->s_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1077 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).b)).a, g_ty_int_592, &F->vt_1074));
F->hi_1078 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->s_324)).a)).b)).b, g_ty_int_592, &F->vt_1074));
F->v_1079 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_324)).b, g_ty_string_596, &F->vt_1074));
f_check_type_175(F->vt_1074, g_ty_string_596, (*(P527)rt_nil_check(F->s_324)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P522)rt_nil_check(F->lv_1072))), rt_str(", ", 2)), F->lo_1077), rt_str(", ", 2)), F->hi_1078), rt_str(", ", 2)), F->v_1079), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_440((*(P527)rt_nil_check(F->s_324)).a, &F->lv_1072, &F->t_1073, &F->c_1075, &F->ro_1076);
if (F->ro_1076) {
f_fail_23((*(P527)rt_nil_check(F->s_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_190(F->t_1073)) && (!f_exports_op_272((*(P531)rt_nil_check(F->t_1073)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P527)rt_nil_check(F->s_324)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_1073)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1080 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_324)).b, F->t_1073, &F->vt_1074));
f_check_type_175(F->vt_1074, F->t_1073, (*(P527)rt_nil_check(F->s_324)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_231(&(*(P522)rt_nil_check(F->lv_1072)), F->t_1073, &F->v_1080, F->c_1075); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_327(P527 s_326) {
  struct f_st_call_327fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_326 = s_326;
F->c_1081 = NULL;
F->c_1081 = (*(P527)rt_nil_check(F->s_326)).a;
F->t_1082 = NULL;
if ((((*(P527)rt_nil_check(F->c_1081)).kind == ((rt_int)7LL)) || ((*(P527)rt_nil_check(F->c_1081)).kind == ((rt_int)12LL)))) {
F->x_1083 = NULL;
F->x_1083 = f_nn_48(((rt_int)10LL), (*(P527)rt_nil_check(F->c_1081)).line);
(*(P527)rt_nil_check(F->x_1083)).a = F->c_1081;
F->c_1081 = F->x_1083;
}
if (((*(P527)rt_nil_check(F->c_1081)).kind != ((rt_int)10LL))) {
f_fail_23((*(P527)rt_nil_check(F->s_326)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_511(F->c_1081, 1, &F->t_1082), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_329(P527 s_328) {
  struct f_st_if_329fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_328 = s_328;
F->a_1084 = NULL;
F->a_1084 = (*(P527)rt_nil_check(F->s_328)).a;
F->first_1085 = 1;
F->t_1086 = NULL;
while ((F->a_1084 != NULL)) {
F->c_1087 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->a_1084)).a, g_ty_bool_593, &F->t_1086));
f_check_type_175(F->t_1086, g_ty_bool_593, (*(P527)rt_nil_check(F->s_328)).line);
if (F->first_1085) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1087), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1087), rt_str(") {", 3)); b_; }));
}
F->first_1085 = 0;
f_gen_body_316((*(P527)rt_nil_check(F->a_1084)).b);
F->a_1084 = (*(P527)rt_nil_check(F->a_1084)).next;
}
if (((*(P527)rt_nil_check(F->s_328)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_328)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_331(P527 s_330) {
  struct f_st_case_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_330 = s_330;
F->st_1088 = NULL;
F->vt_1089 = NULL;
F->first_1090 = 1;
F->a_1091 = NULL;
F->a_1091 = (*(P527)rt_nil_check(F->s_330)).b;
F->sel_1092 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_330)).a, NULL, &F->st_1088));
F->tmp_1093 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_1088)), rt_str(" ", 1)), F->tmp_1093), rt_str(" = ", 3)), F->sel_1092), rt_str(";", 1)); b_; }));
while ((F->a_1091 != NULL)) {
F->lab_1094 = NULL;
F->lab_1094 = (*(P527)rt_nil_check(F->a_1091)).a;
F->conds_1095 = NULL;
F->conds_1095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1094 != NULL)) {
if (((*(P527)rt_nil_check(F->lab_1094)).b == NULL)) {
F->v_1096 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->lab_1094)).a, F->st_1088, &F->vt_1089));
f_check_type_175(F->vt_1089, F->st_1088, (*(P527)rt_nil_check(F->s_330)).line);
F->conds_1095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->conds_1095)), rt_str(" || ", 4)), f_eq_code_238(F->st_1088, &F->tmp_1093, &F->v_1096)); b_; }));
} else {
F->lo_1097 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->lab_1094)).a, F->st_1088, &F->vt_1089));
F->hi_1098 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->lab_1094)).b, F->st_1088, &F->vt_1089));
F->conds_1095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->conds_1095)), rt_str(" || (", 5)), F->tmp_1093), rt_str(" >= ", 4)), F->lo_1097), rt_str(" && ", 4)), F->tmp_1093), rt_str(" <= ", 4)), F->hi_1098), rt_str(")", 1)); b_; }));
}
F->lab_1094 = (*(P527)rt_nil_check(F->lab_1094)).next;
}
if (F->first_1090) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P522)rt_nil_check(F->conds_1095))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P522)rt_nil_check(F->conds_1095))), rt_str(") {", 3)); b_; }));
}
F->first_1090 = 0;
f_gen_body_316((*(P527)rt_nil_check(F->a_1091)).b);
F->a_1091 = (*(P527)rt_nil_check(F->a_1091)).next;
}
if (F->first_1090) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P527)rt_nil_check(F->s_330)).flag == ((rt_int)1LL))) {
f_gen_body_316((*(P527)rt_nil_check(F->s_330)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_333(P527 s_332) {
  struct f_st_repeat_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_332 = s_332;
F->t_1099 = NULL;
F->c_1100 = NULL;
if (((*(P527)rt_nil_check(F->s_332)).flag == ((rt_int)0LL))) {
F->cond_1101 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_332)).a, g_ty_bool_593, &F->t_1099));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1101), rt_str(") {", 3)); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_332)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1099 = f_resolve_subtype_188((*(P527)rt_nil_check(F->s_332)).a, &F->c_1100);
F->c_1100 = f_base_cons_169(F->t_1099, F->c_1100);
if ((((*(P531)rt_nil_check(f_base_of_166(F->t_1099))).kind == ((rt_int)4LL)) && ((*(P529)rt_nil_check(F->c_1100)).lo == NULL))) {
F->c_1100 = f_new_cons_158();
(*(P529)rt_nil_check(F->c_1100)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P529)rt_nil_check(F->c_1100)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check(f_base_of_166(F->t_1099))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P529)rt_nil_check(F->c_1100)).lo == NULL)) {
f_fail_23((*(P527)rt_nil_check(F->s_332)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1102 = rt_str_copy(f_storage_288(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_332)).name)), F->t_1099));
F->lov_1103 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1104 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1105 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1106 = NULL;
F->y_1106 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->s_332)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1103), rt_str(" = ", 3)), (*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_1100)).lo))), rt_str(", ", 2)), F->hiv_1104), rt_str(" = ", 3)), (*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_1100)).hi))), rt_str(";", 1)); b_; }));
if (((*(P527)rt_nil_check(F->s_332)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1105), rt_str(" = ", 3)), F->hiv_1104), rt_str("; ", 2)), F->it_1105), rt_str(" >= ", 4)), F->lov_1103), rt_str("; ", 2)), F->it_1105), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1105), rt_str(" = ", 3)), F->lov_1103), rt_str("; ", 2)), F->it_1105), rt_str(" <= ", 4)), F->hiv_1104), rt_str("; ", 2)), F->it_1105), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1102, rt_str(" = ", 3)), F->it_1105), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P535)rt_nil_check(F->y_1106)).t = F->t_1099;
(*(P535)rt_nil_check(F->y_1106)).c = F->c_1100;
f_bind_291(F->y_1106, &F->access_1102);
(*(P535)rt_nil_check(F->y_1106)).ro_flag = 1;
f_define_145(F->y_1106, (*(P527)rt_nil_check(F->s_332)).line);
f_gen_body_316((*(P527)rt_nil_check(F->s_332)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_335(P527 s_334) {
  struct f_st_exit_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_334 = s_334;
F->x_1107 = NULL;
F->x_1107 = g_exits_586;
while ((F->x_1107 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P545)rt_nil_check(F->x_1107)).match)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_334)).name)))) {
f_pop_frames_318((*(P545)rt_nil_check(F->x_1107)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P522)rt_nil_check((*(P545)rt_nil_check(F->x_1107)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1107 = (*(P545)rt_nil_check(F->x_1107)).next;
}
f_fail_23((*(P527)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_334)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_337(P527 s_336) {
  struct f_st_return_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_336 = s_336;
F->vt_1108 = NULL;
if ((!g_in_func_573)) {
f_pop_frames_318(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P531)rt_nil_check((*(P535)rt_nil_check(g_func_sym_585)).result)).kind == ((rt_int)9LL))) {
if (((*(P527)rt_nil_check(F->s_336)).a != NULL)) {
f_fail_23((*(P527)rt_nil_check(F->s_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_318(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P527)rt_nil_check(F->s_336)).a == NULL)) {
f_fail_23((*(P527)rt_nil_check(F->s_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1109 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_336)).a, (*(P535)rt_nil_check(g_func_sym_585)).result, &F->vt_1108));
f_check_type_175(F->vt_1108, (*(P535)rt_nil_check(g_func_sym_585)).result, (*(P527)rt_nil_check(F->s_336)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_1109), rt_str(";", 1)); b_; }));
f_pop_frames_318(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_exc_id_340(rstr *name_338, rt_int line_339) {
  struct f_exc_id_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_338 = name_338;
F->line_339 = line_339;
F->y_1110 = NULL;
F->y_1110 = f_lookup_140(&(*F->name_338));
if (((F->y_1110 != NULL) && ((*(P535)rt_nil_check(F->y_1110)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1110)).cname));
goto ret_;
}
if (((((*F->name_338)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_338), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_338)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_339, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_338), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_342(P527 s_341) {
  struct f_st_guard_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_341 = s_341;
F->h_1111 = NULL;
F->h_1111 = (*(P527)rt_nil_check(F->s_341)).b;
F->first_1112 = 1;
F->hv_1113 = NULL;
{
F->f_1114 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1115 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1114), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1114), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1114), rt_str(")) {", 4)); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_341)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1114), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_321();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1114), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1115), rt_str(" = rt_xcur;", 11)); b_; }));
{ R542 *cell1116 = rt_alloc(sizeof(R542));
(*cell1116).s = NULL;
(*cell1116).next = NULL;
F->hv_1113 = cell1116;
}
(*(P541)rt_nil_check(F->hv_1113)).s = f_mk_3(&F->x_1115);
(*(P541)rt_nil_check(F->hv_1113)).next = g_handlers_588;
g_handlers_588 = F->hv_1113;
while ((F->h_1111 != NULL)) {
F->n_1117 = NULL;
F->n_1117 = (*(P527)rt_nil_check(F->h_1111)).a;
F->conds_1118 = NULL;
F->conds_1118 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1117 != NULL)) {
F->conds_1118 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->conds_1118)), rt_str(" || ", 4)), F->x_1115), rt_str(" == ", 4)), f_exc_id_340(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->n_1117)).name)), (*(P527)rt_nil_check(F->s_341)).line)); b_; }));
F->n_1117 = (*(P527)rt_nil_check(F->n_1117)).next;
}
if (F->first_1112) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P522)rt_nil_check(F->conds_1118))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P522)rt_nil_check(F->conds_1118))), rt_str(") {", 3)); b_; }));
}
F->first_1112 = 0;
f_gen_body_316((*(P527)rt_nil_check(F->h_1111)).b);
F->h_1111 = (*(P527)rt_nil_check(F->h_1111)).next;
}
if (F->first_1112) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P527)rt_nil_check(F->s_341)).flag == ((rt_int)1LL))) {
f_gen_body_316((*(P527)rt_nil_check(F->s_341)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1115), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_588 = (*(P541)rt_nil_check(g_handlers_588)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_344(P527 s_343) {
  struct f_st_alloc_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_343 = s_343;
F->lv_1119 = NULL;
F->t_1120 = NULL;
F->target_1121 = NULL;
F->vt_1122 = NULL;
F->c_1123 = NULL;
F->tc_1124 = NULL;
F->d_1126 = NULL;
F->p_1127 = NULL;
F->a_1128 = NULL;
f_lvalue_440((*(P527)rt_nil_check(F->s_343)).a, &F->lv_1119, &F->t_1120, &F->c_1123, &F->ro_1125);
if (((*(P531)rt_nil_check(F->t_1120)).kind != ((rt_int)8LL))) {
f_fail_23((*(P527)rt_nil_check(F->s_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_279(F->t_1120);
F->d_1126 = (*(P531)rt_nil_check(F->t_1120)).decl;
F->target_1121 = (*(P531)rt_nil_check(F->t_1120)).target;
if ((f_list_len_54((*(P527)rt_nil_check(F->s_343)).b) != f_list_len_54((*(P527)rt_nil_check(F->d_1126)).b))) {
f_fail_23((*(P527)rt_nil_check(F->s_343)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P527)rt_nil_check(F->d_1126)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1129 = rt_str_copy(f_ctype_177(F->target_1121));
F->cell_1130 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_209(F->target_1121)) {
F->fn_1131 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_582 = 1;
g_uses_findyn_584 = 1;
f_put_27(g_out_protos_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1131), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1131), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_573) {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P522)rt_nil_check((*(P535)rt_nil_check(g_func_sym_585)).cname))), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1129), rt_str(" *)cell_)", 9)); b_; }), F->target_1121)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_573) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1129), rt_str(" *", 2)), F->cell_1130), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1129), rt_str("), ", 3)), F->fn_1131), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1129), rt_str(" *", 2)), F->cell_1130), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1129), rt_str("), ", 3)), F->fn_1131), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1129), rt_str(" *", 2)), F->cell_1130), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1129), rt_str("));", 3)); b_; }));
}
f_open_scope_151();
F->p_1127 = (*(P527)rt_nil_check(F->d_1126)).b;
F->a_1128 = (*(P527)rt_nil_check(F->s_343)).b;
while ((F->p_1127 != NULL)) {
F->v_1132 = rt_str_copy(f_gexpr_463(F->a_1128, g_ty_int_592, &F->vt_1122));
F->pv_1133 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1134 = NULL;
F->y_1134 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->p_1127)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1133), rt_str(" = ", 3)), F->v_1132), rt_str(";", 1)); b_; }));
(*(P535)rt_nil_check(F->y_1134)).t = g_ty_int_592;
(*(P535)rt_nil_check(F->y_1134)).access = f_mk_3(&F->pv_1133);
f_define_145(F->y_1134, (*(P527)rt_nil_check(F->s_343)).line);
F->p_1127 = (*(P527)rt_nil_check(F->p_1127)).next;
F->a_1128 = (*(P527)rt_nil_check(F->a_1128)).next;
}
F->vt_1122 = f_resolve_subtype_188((*(P527)rt_nil_check(F->d_1126)).a, &F->tc_1124);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1130), rt_str(")", 1)); b_; }), F->target_1121, F->tc_1124);
f_close_scope_152();
if (((*(P527)rt_nil_check(F->s_343)).c != NULL)) {
F->v_1135 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->s_343)).c, F->target_1121, &F->vt_1122));
f_check_type_175(F->vt_1122, F->target_1121, (*(P527)rt_nil_check(F->s_343)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_231(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1130), rt_str(")", 1)); b_; }), F->target_1121, &F->v_1135, F->tc_1124); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->lv_1119)), rt_str(" = ", 3)), F->cell_1130), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_346(P527 e_345) {
  struct f_act_ref_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_345 = e_345;
F->lv_1136 = NULL;
F->t_1137 = NULL;
F->c_1138 = NULL;
if (((((*(P527)rt_nil_check(F->e_345)).kind == ((rt_int)7LL)) && rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_345)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_434(F->e_345))) {
F->v_1140 = rt_str_copy(f_gexpr_463(F->e_345, g_ty_act_602, &F->t_1137));
if (((*(P531)rt_nil_check(F->t_1137)).kind != ((rt_int)14LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_345)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1140;
goto ret_;
}
f_lvalue_440(F->e_345, &F->lv_1136, &F->t_1137, &F->c_1138, &F->ro_1139);
if (((*(P531)rt_nil_check(F->t_1137)).kind != ((rt_int)14LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_345)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P522)rt_nil_check(F->lv_1136));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_348(P527 s_347) {
  struct f_st_create_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_347 = s_347;
F->y_1141 = NULL;
F->y_1141 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_347)).name)));
F->pm_1142 = NULL;
F->a_1143 = NULL;
F->a_1143 = (*(P527)rt_nil_check(F->s_347)).b;
F->lv_1144 = NULL;
F->lt_1145 = NULL;
F->vt_1146 = NULL;
F->lc_1147 = NULL;
if (((F->y_1141 != NULL) && ((*(P535)rt_nil_check(F->y_1141)).kind == ((rt_int)10LL)))) {
F->y_1141 = f_instantiate_419(F->y_1141, (*(P527)rt_nil_check(F->s_347)).e, (*(P527)rt_nil_check(F->s_347)).b, (*(P527)rt_nil_check(F->s_347)).line);
}
if (((F->y_1141 == NULL) || ((*(P535)rt_nil_check(F->y_1141)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P527)rt_nil_check(F->s_347)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_347)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1142 = (*(P535)rt_nil_check(F->y_1141)).params;
{
F->at_1149 = NULL;
F->ac_1150 = NULL;
F->act_1152 = NULL;
F->nf_1153 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_440((*(P527)rt_nil_check(F->s_347)).a, &F->lv_1144, &F->at_1149, &F->ac_1150, &F->aro_1151);
if (((*(P531)rt_nil_check(F->at_1149)).kind == ((rt_int)14LL))) {
F->act_1152 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_346((*(P527)rt_nil_check(F->s_347)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1141)).cname))), rt_str("fr *", 4)), F->nf_1153), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1153), rt_str(");", 2)); b_; }));
if (((*(P535)rt_nil_check(F->y_1141)).level > ((rt_int)0LL))) {
F->link_1154 = NULL;
F->link_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1156 = ((rt_int)1LL), hi1157 = rt_sub(g_cur_level_574, (*(P535)rt_nil_check(F->y_1141)).level);
for (rt_int it1158 = lo1156; it1158 <= hi1157; it1158++) {
F->i_1155 = it1158;
F->link_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->link_1154)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1153, rt_str("->up = ", 7)), (*(P522)rt_nil_check(F->link_1154))), rt_str(";", 1)); b_; }));
}
while (((F->a_1143 != NULL) && (F->pm_1142 != NULL))) {
if (((*(P537)rt_nil_check(F->pm_1142)).mode == ((rt_int)1LL))) {
F->v_1159 = rt_str_copy(f_gexpr_463(F->a_1143, (*(P537)rt_nil_check(F->pm_1142)).t, &F->vt_1146));
f_check_type_175(F->vt_1146, (*(P537)rt_nil_check(F->pm_1142)).t, (*(P527)rt_nil_check(F->s_347)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1153, rt_str("->", 2)), (*(P522)rt_nil_check((*(P537)rt_nil_check(F->pm_1142)).cfield))), rt_str(" = ", 3)), f_copy_code_234((*(P537)rt_nil_check(F->pm_1142)).t, &F->v_1159)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_440(F->a_1143, &F->lv_1144, &F->lt_1145, &F->lc_1147, &F->ro_1148);
f_check_type_175(F->lt_1145, (*(P537)rt_nil_check(F->pm_1142)).t, (*(P527)rt_nil_check(F->s_347)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1153, rt_str("->", 2)), (*(P522)rt_nil_check((*(P537)rt_nil_check(F->pm_1142)).cfield))), rt_str(" = &", 4)), (*(P522)rt_nil_check(F->lv_1144))), rt_str(";", 1)); b_; }));
}
F->a_1143 = (*(P527)rt_nil_check(F->a_1143)).next;
F->pm_1142 = (*(P537)rt_nil_check(F->pm_1142)).next;
}
if (((F->a_1143 != NULL) || (F->pm_1142 != NULL))) {
f_fail_23((*(P527)rt_nil_check(F->s_347)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->s_347)).name))); b_; }));
}
if ((F->act_1152 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P522)rt_nil_check(F->act_1152))), rt_str(", &", 3)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1141)).cname))), rt_str("decl, ", 6)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1141)).cname))), rt_str(", ", 2)), F->nf_1153), rt_str("); }", 4)); b_; }));
} else {
f_user_create_358(F->s_347, F->y_1141, &(*(P522)rt_nil_check(F->lv_1144)), F->at_1149, &F->nf_1153);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_352(rstr *name_349, P531 t_350, rstr *place_351) {
  struct f_hidden_var_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_349 = name_349;
F->t_350 = t_350;
F->place_351 = place_351;
F->y_1160 = NULL;
F->y_1160 = f_new_sym_155(((rt_int)1LL), f_mk_3(&(*F->name_349)));
(*(P535)rt_nil_check(F->y_1160)).t = F->t_350;
(*(P535)rt_nil_check(F->y_1160)).level = ((rt_int)0LL);
(*(P535)rt_nil_check(F->y_1160)).access = f_mk_3(&(*F->place_351));
f_define_145(F->y_1160, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_358(P527 s_353, P535 y_354, rstr *uv_355, P531 ut_356, rstr *nf_357) {
  struct f_user_create_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_353 = s_353;
F->y_354 = y_354;
F->uv_355 = uv_355;
F->ut_356 = ut_356;
F->nf_357 = nf_357;
F->t_1161 = NULL;
F->saved_1162 = NULL;
F->saved_1162 = g_code_571;
F->hook_1163 = NULL;
F->hook_1163 = f_new_buffer_24();
F->un_1164 = NULL;
F->un_1164 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->s_353)).line);
F->hn_1165 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1166 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1167 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1168 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_352(&F->uname_1167, F->ut_356, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->ut_356)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P527)rt_nil_check(F->un_1164)).name = f_mk_3(&F->uname_1167);
g_code_571 = F->hook_1163;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1164, (*(P527)rt_nil_check(F->s_353)).line), 1, &F->t_1161)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1164, (*(P527)rt_nil_check(F->s_353)).line), 1, &F->t_1161)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1164, (*(P527)rt_nil_check(F->s_353)).line), 1, &F->t_1161)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1164, (*(P527)rt_nil_check(F->s_353)).line), 1, &F->t_1161)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_571 = F->saved_1162;
f_put_27(g_out_protos_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1165), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1165), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_573) {
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P522)rt_nil_check((*(P535)rt_nil_check(g_func_sym_585)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_568, F->hook_1163);
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_568, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1166), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1166, rt_str("->hook = ", 9)), F->hn_1165), rt_str("; ", 2)), F->aa_1166), rt_str("->ua = &", 8)), (*F->uv_355)), rt_str("; ", 2)), F->aa_1166), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_501(F->ut_356)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_573) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1166, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1166), rt_str(", &", 3)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_354)).cname))), rt_str("decl, ", 6)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_354)).cname))), rt_str(", ", 2)), (*F->nf_357)), rt_str(");", 2)); b_; }));
f_hidden_var_352(&F->aname_1168, g_ty_act_602, &F->aa_1166);
{
F->start_1169 = NULL;
F->start_1169 = f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P527)rt_nil_check(F->s_353)).a, (*(P527)rt_nil_check(F->s_353)).line);
F->an_1170 = NULL;
F->an_1170 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->s_353)).line);
(*(P527)rt_nil_check(F->an_1170)).name = f_mk_3(&F->aname_1168);
(*(P527)rt_nil_check((*(P527)rt_nil_check(F->start_1169)).b)).next = F->an_1170;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_511(F->start_1169, 1, &F->t_1161), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_363(P527 inv_359, rstr *arr_360, rt_int i_361, int mixed_362) {
  struct f_wait_alt_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_359 = inv_359;
F->arr_360 = arr_360;
F->i_361 = i_361;
F->mixed_362 = mixed_362;
F->lv_1171 = NULL;
F->t_1172 = NULL;
F->vt_1173 = NULL;
F->c_1174 = NULL;
F->fn_1176 = NULL;
F->args_1177 = NULL;
F->slot_1178 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_360), rt_str("[", 1)), f_itos_7(F->i_361)), rt_str("]", 1)));
if ((((*(P527)rt_nil_check(F->inv_359)).kind != ((rt_int)10LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_359)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P527)rt_nil_check(F->inv_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1176 = (*(P527)rt_nil_check(F->inv_359)).a;
F->args_1177 = (*(P527)rt_nil_check(F->inv_359)).b;
if ((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_440(F->args_1177, &F->lv_1171, &F->t_1172, &F->c_1174, &F->ro_1175);
if (((*(P531)rt_nil_check(F->t_1172)).kind != ((rt_int)12LL))) {
f_fail_23((*(P527)rt_nil_check(F->inv_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("RECEIVE", 7))) {
F->dv_1179 = NULL;
F->dt_1180 = NULL;
f_lvalue_440((*(P527)rt_nil_check(F->args_1177)).next, &F->dv_1179, &F->dt_1180, &F->c_1174, &F->ro_1175);
f_check_type_175(F->dt_1180, (*(P531)rt_nil_check(F->t_1172)).elem, (*(P527)rt_nil_check(F->inv_359)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P522)rt_nil_check(F->lv_1171))), rt_str(", &", 3)), (*(P522)rt_nil_check(F->dv_1179))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1181 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1182 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_1177)).next, (*(P531)rt_nil_check(F->t_1172)).elem, &F->vt_1173));
f_check_type_175(F->vt_1173, (*(P531)rt_nil_check(F->t_1172)).elem, (*(P527)rt_nil_check(F->inv_359)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P531)rt_nil_check(F->t_1172)).elem), rt_str(" ", 1)), F->tmp_1181), rt_str(" = ", 3)), F->v_1182), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P522)rt_nil_check(F->lv_1171))), rt_str(", &", 3)), F->tmp_1181), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1183 = rt_str_copy(f_gexpr_463(F->args_1177, g_ty_int_592, &F->vt_1173));
if ((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("DELAY", 5)) && F->mixed_362)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1183), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1183), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1183), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1178, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_346(F->args_1177)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->inv_359)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1176)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_365(P527 inv_364) {
  struct f_builtin_wait_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_364 = inv_364;
F->lv_1184 = NULL;
F->t_1185 = NULL;
F->c_1186 = NULL;
F->saved_1188 = NULL;
F->saved_1188 = g_code_571;
F->ok_1189 = 0;
if ((((*(P527)rt_nil_check(F->inv_364)).kind != ((rt_int)10LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).kind != ((rt_int)7LL)))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_364)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_590 = rt_add(g_trial_590, ((rt_int)1LL));
g_code_571 = f_new_buffer_24();
{ rt_frame xf1190;
if (RT_TRY(xf1190)) {
f_lvalue_440((*(P527)rt_nil_check(F->inv_364)).b, &F->lv_1184, &F->t_1185, &F->c_1186, &F->ro_1187);
F->ok_1189 = ((*(P531)rt_nil_check(F->t_1185)).kind == ((rt_int)12LL));
RT_POP(xf1190);
} else {
RT_POP(xf1190);
int x1191 = rt_xcur;
if (0 || x1191 == ex_compile_error_1) {
F->ok_1189 = 0;
} else {
rt_raise(x1191);
}
}
}
g_trial_590 = rt_sub(g_trial_590, ((rt_int)1LL));
g_code_571 = F->saved_1188;
F->result_ = F->ok_1189;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_370(P527 inv_366, rstr *op_367, rstr *q_368, int is_stmt_369) {
  struct f_wait_op_370fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_366 = inv_366;
F->op_367 = op_367;
F->q_368 = q_368;
F->is_stmt_369 = is_stmt_369;
F->x_1192 = NULL;
F->x_1192 = f_nn_48(((rt_int)10LL), (*(P527)rt_nil_check(F->inv_366)).line);
F->f_1193 = NULL;
F->f_1193 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->inv_366)).line);
F->qn_1194 = NULL;
F->qn_1194 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->inv_366)).line);
F->t_1195 = NULL;
(*(P527)rt_nil_check(F->f_1193)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_366)).a)).name)), rt_str("_", 1)), (*F->op_367)); b_; }));
(*(P527)rt_nil_check(F->qn_1194)).name = f_mk_3(&(*F->q_368));
(*(P527)rt_nil_check(F->qn_1194)).next = (*(P527)rt_nil_check(F->inv_366)).b;
(*(P527)rt_nil_check(F->x_1192)).a = F->f_1193;
(*(P527)rt_nil_check(F->x_1192)).b = F->qn_1194;
{
F->r_1196 = rt_str_copy(f_gcall_511(F->x_1192, F->is_stmt_369, &F->t_1195));
if ((!F->is_stmt_369)) {
f_check_type_175(F->t_1195, g_ty_bool_593, (*(P527)rt_nil_check(F->inv_366)).line);
}
F->result_ = F->r_1196;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_375(P527 s_371, rstr *arr_372, rstr *w_373, rt_int n_374) {
  struct f_user_wait_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_371 = s_371;
F->arr_372 = arr_372;
F->w_373 = w_373;
F->n_374 = n_374;
F->a_1197 = NULL;
F->a_1197 = (*(P527)rt_nil_check(F->s_371)).a;
F->i_1198 = ((rt_int)0LL);
F->tests_1199 = NULL;
F->tests_1199 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1200 = NULL;
F->revokes_1200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1197 != NULL)) {
F->inv_1201 = NULL;
F->inv_1201 = (*(P527)rt_nil_check(F->a_1197)).a;
while ((F->inv_1201 != NULL)) {
if (f_builtin_wait_365(F->inv_1201)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_363(F->inv_1201, &(*F->arr_372), F->i_1198, 1); b_; }));
} else {
F->st_1202 = NULL;
F->st_1202 = f_nn_48(((rt_int)80LL), (*(P527)rt_nil_check(F->inv_1201)).line);
F->c_1203 = NULL;
F->qt_1204 = NULL;
F->qname_1205 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1206 = NULL;
F->y_1206 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1205));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_372), rt_str("[", 1)), f_itos_7(F->i_1198)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P527)rt_nil_check(F->st_1202)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->inv_1201)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1204 = f_resolve_subtype_188(F->st_1202, &F->c_1203);
{
F->access_1207 = rt_str_copy(f_storage_288(&F->qname_1205, F->qt_1204));
f_init_storage_204(&F->access_1207, F->qt_1204, F->c_1203);
(*(P535)rt_nil_check(F->y_1206)).t = F->qt_1204;
(*(P535)rt_nil_check(F->y_1206)).c = F->c_1203;
f_bind_291(F->y_1206, &F->access_1207);
f_define_145(F->y_1206, (*(P527)rt_nil_check(F->inv_1201)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_370(F->inv_1201, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1205, 1), rt_str(";", 1)); b_; }));
F->tests_1199 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->tests_1199)), rt_str("if (", 4)), f_wait_op_370(F->inv_1201, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1205, 0)), rt_str(") { ", 4)), f_wait_op_370(F->inv_1201, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1205, 1)), rt_str("; ", 2)), (*F->w_373)), rt_str(" = ", 3)), f_itos_7(F->i_1198)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->revokes_1200)), f_wait_op_370(F->inv_1201, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1205, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1198 = rt_add(F->i_1198, ((rt_int)1LL));
F->inv_1201 = (*(P527)rt_nil_check(F->inv_1201)).next;
}
F->a_1197 = (*(P527)rt_nil_check(F->a_1197)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_373)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P522)rt_nil_check(F->tests_1199))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_373), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_374)), rt_str(", ", 2)), (*F->arr_372)), rt_str("); if (", 7)), (*F->w_373)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_374)), rt_str(", ", 2)), (*F->arr_372)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_373)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_373)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P522)rt_nil_check(F->revokes_1200)));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_377(P527 s_376) {
  struct f_st_wait_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_376 = s_376;
F->a_1208 = NULL;
F->a_1208 = (*(P527)rt_nil_check(F->s_376)).a;
F->n_1209 = ((rt_int)0LL);
F->first_1210 = 1;
F->inits_1211 = NULL;
F->inits_1211 = f_new_buffer_24();
F->user_1212 = 0;
F->arr_1213 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1214 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1208 != NULL)) {
F->inv_1215 = NULL;
F->inv_1215 = (*(P527)rt_nil_check(F->a_1208)).a;
F->n_1209 = rt_add(F->n_1209, f_list_len_54((*(P527)rt_nil_check(F->a_1208)).a));
while ((F->inv_1215 != NULL)) {
if ((!f_builtin_wait_365(F->inv_1215))) {
F->user_1212 = 1;
}
F->inv_1215 = (*(P527)rt_nil_check(F->inv_1215)).next;
}
F->a_1208 = (*(P527)rt_nil_check(F->a_1208)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1213), rt_str("[", 1)), f_itos_7(F->n_1209)), rt_str("];", 2)); b_; }));
if (F->user_1212) {
f_user_wait_375(F->s_376, &F->arr_1213, &F->w_1214, F->n_1209);
} else {
F->a_1208 = (*(P527)rt_nil_check(F->s_376)).a;
F->n_1209 = ((rt_int)0LL);
while ((F->a_1208 != NULL)) {
F->inv_1216 = NULL;
F->inv_1216 = (*(P527)rt_nil_check(F->a_1208)).a;
while ((F->inv_1216 != NULL)) {
f_put_27(F->inits_1211, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_363(F->inv_1216, &F->arr_1213, F->n_1209, 0); b_; }));
F->n_1209 = rt_add(F->n_1209, ((rt_int)1LL));
F->inv_1216 = (*(P527)rt_nil_check(F->inv_1216)).next;
}
F->a_1208 = (*(P527)rt_nil_check(F->a_1208)).next;
}
f_splice_34(g_code_571, F->inits_1211);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1214), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1209)), rt_str(", ", 2)), F->arr_1213), rt_str(");", 2)); b_; }));
}
F->a_1208 = (*(P527)rt_nil_check(F->s_376)).a;
F->n_1209 = ((rt_int)0LL);
while ((F->a_1208 != NULL)) {
F->conds_1217 = NULL;
F->conds_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1219 = ((rt_int)1LL), hi1220 = f_list_len_54((*(P527)rt_nil_check(F->a_1208)).a);
for (rt_int it1221 = lo1219; it1221 <= hi1220; it1221++) {
F->i_1218 = it1221;
F->conds_1217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->conds_1217)), rt_str(" || ", 4)), F->w_1214), rt_str(" == ", 4)), f_itos_7(F->n_1209)); b_; }));
F->n_1209 = rt_add(F->n_1209, ((rt_int)1LL));
}
}
if (F->first_1210) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P522)rt_nil_check(F->conds_1217))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P522)rt_nil_check(F->conds_1217))), rt_str(") {", 3)); b_; }));
}
F->first_1210 = 0;
f_gen_body_316((*(P527)rt_nil_check(F->a_1208)).b);
F->a_1208 = (*(P527)rt_nil_check(F->a_1208)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P527 f_call_node_381(rstr *name_378, P527 arg_379, rt_int line_380) {
  struct f_call_node_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_378 = name_378;
F->arg_379 = arg_379;
F->line_380 = line_380;
F->x_1222 = NULL;
F->x_1222 = f_nn_48(((rt_int)10LL), F->line_380);
F->f_1223 = NULL;
F->f_1223 = f_nn_48(((rt_int)7LL), F->line_380);
(*(P527)rt_nil_check(F->f_1223)).name = f_mk_3(&(*F->name_378));
(*(P527)rt_nil_check(F->x_1222)).a = F->f_1223;
(*(P527)rt_nil_check(F->x_1222)).b = f_copy_node_465(F->arg_379);
(*(P527)rt_nil_check((*(P527)rt_nil_check(F->x_1222)).b)).next = NULL;
F->result_ = F->x_1222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_383(P527 s_382) {
  struct f_user_region_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_382 = s_382;
F->t_1224 = NULL;
F->f_1225 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1226 = rt_str_copy(f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P527)rt_nil_check(F->s_382)).a, (*(P527)rt_nil_check(F->s_382)).line), 1, &F->t_1224));
F->unlock_1227 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_511(f_call_node_381(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P527)rt_nil_check(F->s_382)).a, (*(P527)rt_nil_check(F->s_382)).line), 1, &F->t_1224)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1226), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1225), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1225), rt_str(")) {", 4)); b_; }));
f_push_cleanup_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1225), rt_str("); ", 3)), F->unlock_1227); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_382)).b);
f_pop_cleanup_321();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1225), rt_str("); ", 3)), F->unlock_1227); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1225), rt_str("); ", 3)), F->unlock_1227), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_385(P527 s_384) {
  struct f_st_region_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_384 = s_384;
F->lv_1228 = NULL;
F->t_1229 = NULL;
F->c_1230 = NULL;
F->lk_1232 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1233 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_440((*(P527)rt_nil_check(F->s_384)).a, &F->lv_1228, &F->t_1229, &F->c_1230, &F->ro_1231);
if (((*(P531)rt_nil_check(F->t_1229)).kind != ((rt_int)13LL))) {
f_user_region_383(F->s_384);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1232), rt_str(" = &", 4)), (*(P522)rt_nil_check(F->lv_1228))), rt_str("; rt_region_enter(", 18)), F->lk_1232), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1233), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1233), rt_str(")) {", 4)); b_; }));
f_push_cleanup_320(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1233), rt_str("); rt_region_leave(", 19)), F->lk_1232), rt_str(");", 2)); b_; }));
f_gen_body_316((*(P527)rt_nil_check(F->s_384)).b);
f_pop_cleanup_321();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1233), rt_str("); rt_region_leave(", 19)), F->lk_1232), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1233), rt_str("); rt_region_leave(", 19)), F->lk_1232), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P527 f_gparam_388(P527 g_386, rstr *name_387) {
  struct f_gparam_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_386 = g_386;
F->name_387 = name_387;
F->p_1234 = NULL;
F->p_1234 = (*(P527)rt_nil_check(F->g_386)).a;
while ((F->p_1234 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1234)).name)), (*F->name_387))) {
F->result_ = F->p_1234;
goto ret_;
}
F->p_1234 = (*(P527)rt_nil_check(F->p_1234)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_bind_sym_390(P527 p_389) {
  struct f_bind_sym_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_389 = p_389;
F->y_1235 = NULL;
if (((*(P527)rt_nil_check(F->p_389)).ival <= ((rt_int)2LL))) {
F->y_1235 = f_new_sym_155(((rt_int)5LL), (*(P527)rt_nil_check(F->p_389)).name);
} else {
F->y_1235 = f_new_sym_155(((rt_int)2LL), (*(P527)rt_nil_check(F->p_389)).name);
}
F->result_ = F->y_1235;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_393(P535 a_391, P535 b_392) {
  struct f_same_binds_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_391 = a_391;
F->b_392 = b_392;
F->x_1236 = NULL;
F->x_1236 = F->a_391;
F->y_1237 = NULL;
F->y_1237 = F->b_392;
while (((F->x_1236 != NULL) && (F->y_1237 != NULL))) {
if (((!rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->x_1236)).name)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1237)).name)))) || (!f_same_binding_396(F->x_1236, F->y_1237)))) {
F->result_ = 0;
goto ret_;
}
F->x_1236 = (*(P535)rt_nil_check(F->x_1236)).mnext;
F->y_1237 = (*(P535)rt_nil_check(F->y_1237)).mnext;
}
F->result_ = ((F->x_1236 == NULL) && (F->y_1237 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_396(P535 a_394, P535 b_395) {
  struct f_same_binding_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_394 = a_394;
F->b_395 = b_395;
if (((*(P535)rt_nil_check(F->a_394)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P535)rt_nil_check(F->b_395)).kind == ((rt_int)5LL)) && f_same_164((*(P535)rt_nil_check(F->a_394)).t, (*(P535)rt_nil_check(F->b_395)).t));
goto ret_;
}
if ((((*(P535)rt_nil_check(F->a_394)).kind == ((rt_int)2LL)) && (*(P535)rt_nil_check(F->a_394)).hasmv)) {
F->result_ = ((*(P535)rt_nil_check(F->b_395)).hasmv && ((*(P535)rt_nil_check(F->a_394)).mvalue == (*(P535)rt_nil_check(F->b_395)).mvalue));
goto ret_;
}
F->result_ = ((((*(P535)rt_nil_check(F->a_394)).cname != NULL) && ((*(P535)rt_nil_check(F->b_395)).cname != NULL)) && rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->a_394)).cname)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->b_395)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_tt_binds_401(P527 gd_397, P527 formals_398, P527 actuals_399, rt_int line_400) {
  struct f_tt_binds_401fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_397 = gd_397;
F->formals_398 = formals_398;
F->actuals_399 = actuals_399;
F->line_400 = line_400;
F->f_1238 = NULL;
F->f_1238 = F->formals_398;
F->a_1239 = NULL;
F->a_1239 = F->actuals_399;
F->binds_1240 = NULL;
F->c_1241 = NULL;
F->at_1242 = NULL;
while (((F->f_1238 != NULL) && (F->a_1239 != NULL))) {
F->p_1243 = NULL;
F->p_1243 = f_gparam_388(F->gd_397, &(*(P522)rt_nil_check((*(P527)rt_nil_check(F->f_1238)).name)));
F->b_1244 = NULL;
if ((F->p_1243 == NULL)) {
f_fail_23(F->line_400, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->f_1238)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1244 = f_bind_sym_390(F->p_1243);
if (((*(P527)rt_nil_check(F->p_1243)).ival <= ((rt_int)2LL))) {
if (((*(P527)rt_nil_check(F->a_1239)).kind >= ((rt_int)70LL))) {
(*(P535)rt_nil_check(F->b_1244)).t = f_resolve_subtype_188(F->a_1239, &F->c_1241);
} else {
F->st_1245 = NULL;
F->st_1245 = f_nn_48(((rt_int)80LL), F->line_400);
(*(P527)rt_nil_check(F->st_1245)).name = (*(P527)rt_nil_check(F->a_1239)).name;
(*(P535)rt_nil_check(F->b_1244)).t = f_resolve_subtype_188(F->st_1245, &F->c_1241);
}
(*(P535)rt_nil_check(F->b_1244)).c = F->c_1241;
} else if (((*(P527)rt_nil_check(F->p_1243)).ival <= ((rt_int)5LL))) {
if ((((*(P527)rt_nil_check(F->a_1239)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->a_1239)).name))) == NULL))) {
f_fail_23(F->line_400, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1243)).name))); b_; }));
}
F->b_1244 = f_copy_sym_258(f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->a_1239)).name))));
(*(P535)rt_nil_check(F->b_1244)).name = (*(P527)rt_nil_check(F->p_1243)).name;
} else {
(*(P535)rt_nil_check(F->b_1244)).t = f_resolve_subtype_188((*(P527)rt_nil_check(F->p_1243)).a, &F->c_1241);
(*(P535)rt_nil_check(F->b_1244)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463(F->a_1239, (*(P535)rt_nil_check(F->b_1244)).t, &F->at_1242); b_; }));
(*(P535)rt_nil_check(F->b_1244)).mvalue = f_manifest_222(F->a_1239, &F->ok_1246);
(*(P535)rt_nil_check(F->b_1244)).hasmv = F->ok_1246;
}
(*(P535)rt_nil_check(F->b_1244)).mnext = F->binds_1240;
F->binds_1240 = F->b_1244;
F->f_1238 = (*(P527)rt_nil_check(F->f_1238)).next;
F->a_1239 = (*(P527)rt_nil_check(F->a_1239)).next;
}
F->result_ = F->binds_1240;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_403(P527 st_402) {
  struct f_generic_use_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_402 = st_402;
if (((*(P527)rt_nil_check(F->st_402)).kind == ((rt_int)78LL))) {
F->result_ = ((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P535)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)));
goto ret_;
}
F->result_ = (((((*(P527)rt_nil_check(F->st_402)).kind == ((rt_int)80LL)) && ((*(P527)rt_nil_check(F->st_402)).a != NULL)) && (f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_402)).name))) != NULL)) && ((*(P535)rt_nil_check(f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->st_402)).name))))).kind == ((rt_int)10LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_infer_from_408(P527 gd_404, P527 pat_405, P531 t_406, P535 known_407) {
  struct f_infer_from_408fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_404 = gd_404;
F->pat_405 = pat_405;
F->t_406 = t_406;
F->known_407 = known_407;
F->binds_1247 = NULL;
F->binds_1247 = F->known_407;
F->e_1248 = NULL;
F->e_1248 = (*(P527)rt_nil_check(F->pat_405)).a;
F->tp_1249 = NULL;
if (((F->t_406 == NULL) || ((*(P531)rt_nil_check(F->t_406)).gen == NULL))) {
F->result_ = F->binds_1247;
goto ret_;
}
F->tp_1249 = (*(P527)rt_nil_check((*(P535)rt_nil_check((*(P531)rt_nil_check(F->t_406)).gen)).decl)).a;
if (((*(P527)rt_nil_check(F->pat_405)).kind == ((rt_int)78LL))) {
F->e_1248 = f_copy_node_465((*(P527)rt_nil_check(F->pat_405)).a);
(*(P527)rt_nil_check(F->e_1248)).next = NULL;
}
while (((F->e_1248 != NULL) && (F->tp_1249 != NULL))) {
F->nm_1250 = NULL;
if ((((*(P527)rt_nil_check(F->e_1248)).kind == ((rt_int)7LL)) || ((*(P527)rt_nil_check(F->e_1248)).kind == ((rt_int)80LL)))) {
F->nm_1250 = (*(P527)rt_nil_check(F->e_1248)).name;
}
if ((((F->nm_1250 != NULL) && (f_gparam_388(F->gd_404, &(*(P522)rt_nil_check(F->nm_1250))) != NULL)) && ((*(P527)rt_nil_check(f_gparam_388(F->gd_404, &(*(P522)rt_nil_check(F->nm_1250))))).ival <= ((rt_int)2LL)))) {
F->q_1251 = NULL;
F->q_1251 = F->binds_1247;
F->have_1252 = 0;
while ((F->q_1251 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->q_1251)).name)), (*(P522)rt_nil_check(F->nm_1250)))) {
F->have_1252 = 1;
}
F->q_1251 = (*(P535)rt_nil_check(F->q_1251)).mnext;
}
if ((!F->have_1252)) {
F->g_1253 = NULL;
F->g_1253 = (*(P531)rt_nil_check(F->t_406)).gbinds;
while ((F->g_1253 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->g_1253)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->tp_1249)).name)))) {
F->b_1254 = NULL;
F->b_1254 = f_bind_sym_390(f_gparam_388(F->gd_404, &(*(P522)rt_nil_check(F->nm_1250))));
(*(P535)rt_nil_check(F->b_1254)).t = (*(P535)rt_nil_check(F->g_1253)).t;
(*(P535)rt_nil_check(F->b_1254)).c = (*(P535)rt_nil_check(F->g_1253)).c;
(*(P535)rt_nil_check(F->b_1254)).mnext = F->binds_1247;
F->binds_1247 = F->b_1254;
}
F->g_1253 = (*(P535)rt_nil_check(F->g_1253)).mnext;
}
}
}
F->e_1248 = (*(P527)rt_nil_check(F->e_1248)).next;
F->tp_1249 = (*(P527)rt_nil_check(F->tp_1249)).next;
}
F->result_ = F->binds_1247;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_instantiate_type_414(P535 g_409, P527 tt_410, P527 args_411, P529 *c_412, rt_int line_413) {
  struct f_instantiate_type_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_409 = g_409;
F->tt_410 = tt_410;
F->args_411 = args_411;
F->c_412 = c_412;
F->c_412v = *F->c_412;
F->line_413 = line_413;
F->gd_1255 = NULL;
F->gd_1255 = (*(P535)rt_nil_check(F->g_409)).decl;
F->pat_1256 = NULL;
F->pat_1256 = (*(P527)rt_nil_check(F->gd_1255)).b;
F->binds_1257 = NULL;
F->binds_1257 = f_tt_binds_401(F->gd_1255, (*(P527)rt_nil_check(F->pat_1256)).e, F->tt_410, F->line_413);
F->inst_1258 = NULL;
F->inst_1258 = g_all_insts_559;
F->t_1259 = NULL;
F->saved_caps_1260 = NULL;
F->saved_caps_1260 = g_caps_576;
F->saved_env_1261 = NULL;
F->saved_env_1261 = g_genv_558;
F->c_412v = f_new_cons_158();
(*(P529)rt_nil_check(F->c_412v)).args = F->args_411;
while ((F->inst_1258 != NULL)) {
if ((((*(P535)rt_nil_check(F->inst_1258)).decl == F->pat_1256) && f_same_binds_393((*(P535)rt_nil_check(F->inst_1258)).members, F->binds_1257))) {
F->result_ = (*(P535)rt_nil_check(F->inst_1258)).t;
goto ret_;
}
F->inst_1258 = (*(P535)rt_nil_check(F->inst_1258)).insts;
}
f_open_scope_151();
{
F->b_1262 = NULL;
F->b_1262 = F->binds_1257;
while ((F->b_1262 != NULL)) {
f_define_145(F->b_1262, F->line_413);
F->b_1262 = (*(P535)rt_nil_check(F->b_1262)).mnext;
}
}
g_caps_576 = NULL;
g_genv_558 = (*(P535)rt_nil_check(F->g_409)).env;
{
F->y_1263 = NULL;
F->y_1263 = f_new_sym_155(((rt_int)5LL), (*(P527)rt_nil_check(F->pat_1256)).name);
F->yc_1264 = NULL;
(*(P535)rt_nil_check(F->y_1263)).decl = F->pat_1256;
if (((*(P527)rt_nil_check(F->pat_1256)).kind == ((rt_int)44LL))) {
F->t_1259 = f_new_typ_157(((rt_int)8LL));
(*(P531)rt_nil_check(F->t_1259)).name = (*(P527)rt_nil_check(F->pat_1256)).name;
(*(P531)rt_nil_check(F->t_1259)).decl = F->pat_1256;
(*(P535)rt_nil_check(F->y_1263)).t = F->t_1259;
f_define_145(F->y_1263, F->line_413);
f_finish_ptr_279(F->t_1259);
} else {
f_define_145(F->y_1263, F->line_413);
F->t_1259 = f_new_type_200(F->y_1263, f_nn_48(((rt_int)80LL), F->line_413), &F->yc_1264);
}
}
g_caps_576 = F->saved_caps_1260;
g_genv_558 = F->saved_env_1261;
(*(P531)rt_nil_check(F->t_1259)).gen = F->g_409;
(*(P531)rt_nil_check(F->t_1259)).gbinds = F->binds_1257;
f_close_scope_152();
{ R536 *cell1265 = rt_alloc(sizeof(R536));
(*cell1265).name = NULL;
(*cell1265).t = NULL;
(*cell1265).c = NULL;
(*cell1265).access = NULL;
(*cell1265).cname = NULL;
(*cell1265).st = NULL;
(*cell1265).decl = NULL;
(*cell1265).params = NULL;
(*cell1265).result = NULL;
(*cell1265).members = NULL;
(*cell1265).mnext = NULL;
(*cell1265).binds = NULL;
(*cell1265).insts = NULL;
(*cell1265).env = NULL;
(*cell1265).chain = NULL;
(*cell1265).stack = NULL;
F->inst_1258 = cell1265;
}
(*(P535)rt_nil_check(F->inst_1258)).kind = ((rt_int)5LL);
(*(P535)rt_nil_check(F->inst_1258)).name = (*(P535)rt_nil_check(F->g_409)).name;
(*(P535)rt_nil_check(F->inst_1258)).decl = F->pat_1256;
(*(P535)rt_nil_check(F->inst_1258)).t = F->t_1259;
(*(P535)rt_nil_check(F->inst_1258)).members = F->binds_1257;
(*(P535)rt_nil_check(F->inst_1258)).insts = g_all_insts_559;
g_all_insts_559 = F->inst_1258;
F->result_ = F->t_1259;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_412) = F->c_412v;
  RT_FPOP();
  return F->result_;
}

static P535 f_instantiate_419(P535 g_415, P527 tt_416, P527 args_417, rt_int line_418) {
  struct f_instantiate_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_415 = g_415;
F->tt_416 = tt_416;
F->args_417 = args_417;
F->line_418 = line_418;
F->gd_1266 = NULL;
F->gd_1266 = (*(P535)rt_nil_check(F->g_415)).decl;
F->pat_1267 = NULL;
F->pat_1267 = (*(P527)rt_nil_check(F->gd_1266)).b;
F->binds_1268 = NULL;
F->f_1269 = NULL;
F->f_1269 = (*(P527)rt_nil_check(F->pat_1267)).e;
F->a_1270 = NULL;
F->a_1270 = F->tt_416;
F->fp_1271 = NULL;
F->fp_1271 = (*(P527)rt_nil_check(F->pat_1267)).a;
F->inst_1272 = NULL;
F->at_1273 = NULL;
F->c_1274 = NULL;
F->saved_fctx_1275 = NULL;
F->saved_fctx_1275 = g_fctx_575;
F->saved_in_1276 = g_in_func_573;
F->saved_level_1277 = g_cur_level_574;
F->saved_sym_1278 = NULL;
F->saved_sym_1278 = g_func_sym_585;
F->saved_code_1279 = NULL;
F->saved_code_1279 = g_code_571;
F->saved_env_1280 = NULL;
F->saved_env_1280 = g_genv_558;
F->binds_1268 = f_tt_binds_401(F->gd_1266, F->f_1269, F->a_1270, F->line_418);
F->a_1270 = F->args_417;
while (((F->fp_1271 != NULL) && (F->a_1270 != NULL))) {
if (f_generic_use_403((*(P527)rt_nil_check(F->fp_1271)).a)) {
F->v_1281 = rt_str_copy(f_gexpr_463(F->a_1270, NULL, &F->at_1273));
F->binds_1268 = f_infer_from_408(F->gd_1266, (*(P527)rt_nil_check(F->fp_1271)).a, F->at_1273, F->binds_1268);
} else if (((((*(P527)rt_nil_check((*(P527)rt_nil_check(F->fp_1271)).a)).kind == ((rt_int)80LL)) && (f_gparam_388(F->gd_1266, &(*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->fp_1271)).a)).name))) != NULL)) && ((*(P527)rt_nil_check(f_gparam_388(F->gd_1266, &(*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->fp_1271)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1282 = 0;
F->q_1283 = NULL;
F->q_1283 = F->binds_1268;
while ((F->q_1283 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->q_1283)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->fp_1271)).a)).name)))) {
F->known_1282 = 1;
}
F->q_1283 = (*(P535)rt_nil_check(F->q_1283)).mnext;
}
if ((!F->known_1282)) {
F->b_1284 = NULL;
F->b_1284 = f_bind_sym_390(f_gparam_388(F->gd_1266, &(*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->fp_1271)).a)).name))));
F->v_1285 = rt_str_copy(f_gexpr_463(F->a_1270, NULL, &F->at_1273));
(*(P535)rt_nil_check(F->b_1284)).t = F->at_1273;
(*(P535)rt_nil_check(F->b_1284)).c = g_no_cons_603;
(*(P535)rt_nil_check(F->b_1284)).mnext = F->binds_1268;
F->binds_1268 = F->b_1284;
}
}
F->fp_1271 = (*(P527)rt_nil_check(F->fp_1271)).next;
F->a_1270 = (*(P527)rt_nil_check(F->a_1270)).next;
}
F->inst_1272 = g_all_insts_559;
while ((F->inst_1272 != NULL)) {
if ((((*(P535)rt_nil_check(F->inst_1272)).decl == F->pat_1267) && f_same_binds_393((*(P535)rt_nil_check(F->inst_1272)).members, F->binds_1268))) {
F->result_ = F->inst_1272;
goto ret_;
}
F->inst_1272 = (*(P535)rt_nil_check(F->inst_1272)).insts;
}
g_fctx_575 = NULL;
g_in_func_573 = 0;
g_cur_level_574 = ((rt_int)0LL);
g_func_sym_585 = NULL;
g_code_571 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1286 = NULL;
F->b_1286 = F->binds_1268;
while ((F->b_1286 != NULL)) {
f_define_145(F->b_1286, F->line_418);
F->b_1286 = (*(P535)rt_nil_check(F->b_1286)).mnext;
}
}
g_genv_558 = (*(P535)rt_nil_check(F->g_415)).env;
F->inst_1272 = f_build_subprogram_283(F->pat_1267);
(*(P535)rt_nil_check(F->inst_1272)).members = F->binds_1268;
(*(P535)rt_nil_check(F->inst_1272)).insts = g_all_insts_559;
g_all_insts_559 = F->inst_1272;
f_define_145(F->inst_1272, F->line_418);
f_gen_subprogram_304(F->pat_1267, F->inst_1272);
f_close_scope_152();
g_fctx_575 = F->saved_fctx_1275;
g_in_func_573 = F->saved_in_1276;
g_cur_level_574 = F->saved_level_1277;
g_func_sym_585 = F->saved_sym_1278;
g_code_571 = F->saved_code_1279;
g_genv_558 = F->saved_env_1280;
F->result_ = F->inst_1272;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_421(P535 y_420) {
  struct f_access_of_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_420 = y_420;
F->p_1287 = NULL;
F->p_1287 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P535)rt_nil_check(F->y_420)).level <= ((rt_int)0LL))) {
F->result_ = (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_420)).access));
goto ret_;
}
{ rt_int lo1289 = ((rt_int)1LL), hi1290 = rt_sub(g_cur_level_574, (*(P535)rt_nil_check(F->y_420)).level);
for (rt_int it1291 = lo1289; it1291 <= hi1290; it1291++) {
F->i_1288 = it1291;
F->p_1287 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->p_1287)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P535)rt_nil_check(F->y_420)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P522)rt_nil_check(F->p_1287))), rt_str("->", 2)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_420)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->p_1287)), rt_str("->", 2)), (*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_420)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_import_of_424(P527 l_422, rstr *name_423) {
  struct f_import_of_424fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_422 = l_422;
F->name_423 = name_423;
F->p_1292 = NULL;
F->p_1292 = F->l_422;
while ((F->p_1292 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1292)).name)), (*F->name_423))) {
F->result_ = F->p_1292;
goto ret_;
}
F->p_1292 = (*(P527)rt_nil_check(F->p_1292)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_427(P535 y_425, rt_int line_426) {
  struct f_check_import_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_425 = y_425;
F->line_426 = line_426;
F->c_1293 = NULL;
F->c_1293 = g_fctx_575;
F->ro_1294 = 0;
while (((F->c_1293 != NULL) && ((*(P535)rt_nil_check(F->y_425)).depth < (*(P551)rt_nil_check(F->c_1293)).depth))) {
if ((!(*(P551)rt_nil_check(F->c_1293)).all_imp)) {
F->imp_1295 = NULL;
F->imp_1295 = f_import_of_424((*(P551)rt_nil_check(F->c_1293)).imps, &(*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_425)).name)));
if ((F->imp_1295 == NULL)) {
f_fail_23(F->line_426, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_425)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P527)rt_nil_check(F->imp_1295)).ival == ((rt_int)1LL))) {
F->ro_1294 = 1;
}
}
F->c_1293 = (*(P551)rt_nil_check(F->c_1293)).next;
}
F->result_ = F->ro_1294;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_429(rstr *s_428) {
  struct f_c_ident_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_428 = s_428;
if (rt_str_eq((*F->s_428), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_428), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_428));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_432(rstr *base_430, P531 t_431) {
  struct f_deref_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_430 = base_430;
F->t_431 = t_431;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_431)), rt_str(")rt_nil_check(", 14)), (*F->base_430)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_434(P527 e_433) {
  struct f_is_lvalue_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_433 = e_433;
if (((*(P527)rt_nil_check(F->e_433)).kind == ((rt_int)7LL))) {
F->y_1296 = NULL;
F->y_1296 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_433)).name)));
F->result_ = ((F->y_1296 != NULL) && (((*(P535)rt_nil_check(F->y_1296)).kind == ((rt_int)1LL)) || ((*(P535)rt_nil_check(F->y_1296)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P527)rt_nil_check(F->e_433)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_434((*(P527)rt_nil_check(F->e_433)).a);
goto ret_;
} else if (((*(P527)rt_nil_check(F->e_433)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_433)).name)), rt_str("LEN", 3))) && f_is_lvalue_434((*(P527)rt_nil_check(F->e_433)).a));
goto ret_;
} else if (((*(P527)rt_nil_check(F->e_433)).kind == ((rt_int)10LL))) {
if ((((*(P527)rt_nil_check(F->e_433)).b != NULL) && ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_433)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_434((*(P527)rt_nil_check(F->e_433)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_440(P527 e_435, P522 *code_436, P531 *t_437, P529 *c_438, int *ro_439) {
  struct f_lvalue_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_435 = e_435;
F->code_436 = code_436;
F->code_436v = *F->code_436;
F->t_437 = t_437;
F->t_437v = *F->t_437;
F->c_438 = c_438;
F->c_438v = *F->c_438;
F->ro_439 = ro_439;
F->ro_439v = *F->ro_439;
F->base_1297 = NULL;
F->bt_1298 = NULL;
F->bc_1299 = NULL;
if (((*(P527)rt_nil_check(F->e_435)).kind == ((rt_int)7LL))) {
F->y_1300 = NULL;
F->y_1300 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_435)).name)));
if ((F->y_1300 == NULL)) {
f_fail_23((*(P527)rt_nil_check(F->e_435)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_435)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P535)rt_nil_check(F->y_1300)).kind != ((rt_int)1LL)) && ((*(P535)rt_nil_check(F->y_1300)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_435)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_435)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_421(F->y_1300); b_; }));
F->t_437v = (*(P535)rt_nil_check(F->y_1300)).t;
F->c_438v = (*(P535)rt_nil_check(F->y_1300)).c;
F->ro_439v = (*(P535)rt_nil_check(F->y_1300)).ro_flag;
if ((((*(P535)rt_nil_check(F->y_1300)).kind == ((rt_int)1LL)) && f_check_import_427(F->y_1300, (*(P527)rt_nil_check(F->e_435)).line))) {
F->ro_439v = 1;
}
} else if (((*(P527)rt_nil_check(F->e_435)).kind == ((rt_int)17LL))) {
f_lvalue_440((*(P527)rt_nil_check(F->e_435)).a, &F->code_436v, &F->t_437v, &F->c_438v, &F->ro_439v);
} else if ((((((*(P527)rt_nil_check(F->e_435)).kind == ((rt_int)12LL)) && ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_435)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_435)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_499((*(P527)rt_nil_check(F->e_435)).b, (*(P527)rt_nil_check(F->e_435)).line, &F->t_437v); b_; }));
F->c_438v = g_no_cons_603;
F->ro_439v = 0;
} else if (((*(P527)rt_nil_check(F->e_435)).kind == ((rt_int)11LL))) {
f_lvalue_440((*(P527)rt_nil_check(F->e_435)).a, &F->base_1297, &F->bt_1298, &F->bc_1299, &F->ro_439v);
f_select_on_448(&(*(P522)rt_nil_check(F->base_1297)), F->bt_1298, F->e_435, &F->ro_439v, &F->code_436v, &F->t_437v, &F->c_438v);
} else if (((*(P527)rt_nil_check(F->e_435)).kind == ((rt_int)10LL))) {
f_lvalue_440((*(P527)rt_nil_check(F->e_435)).a, &F->base_1297, &F->bt_1298, &F->bc_1299, &F->ro_439v);
f_index_on_457(&(*(P522)rt_nil_check(F->base_1297)), F->bt_1298, F->e_435, &F->ro_439v, 1, &F->code_436v, &F->t_437v, &F->c_438v);
} else {
f_fail_23((*(P527)rt_nil_check(F->e_435)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_436) = F->code_436v;  (*F->t_437) = F->t_437v;  (*F->c_438) = F->c_438v;  (*F->ro_439) = F->ro_439v;
  RT_FPOP();
  return;
}

static void f_select_on_448(rstr *base_441, P531 bt_442, P527 e_443, int *ro_444, P522 *code_445, P531 *t_446, P529 *c_447) {
  struct f_select_on_448fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_441 = base_441;
F->bt_442 = bt_442;
F->e_443 = e_443;
F->ro_444 = ro_444;
F->code_445 = code_445;
F->code_445v = *F->code_445;
F->t_446 = t_446;
F->t_446v = *F->t_446;
F->c_447 = c_447;
F->c_447v = *F->c_447;
F->c_447v = g_no_cons_603;
if (((*(P531)rt_nil_check(F->bt_442)).kind == ((rt_int)8LL))) {
f_finish_ptr_279(F->bt_442);
(*F->ro_444) = 0;
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)), rt_str("ALL", 3))) {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_432(&(*F->base_441), F->bt_442); b_; }));
F->t_446v = (*(P531)rt_nil_check(F->bt_442)).target;
goto ret_;
}
f_select_on_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_432(&(*F->base_441), F->bt_442); b_; }), (*(P531)rt_nil_check(F->bt_442)).target, F->e_443, &(*F->ro_444), &F->code_445v, &F->t_446v, &F->c_447v);
goto ret_;
}
if (((*(P531)rt_nil_check(F->bt_442)).kind == ((rt_int)15LL))) {
F->p_1301 = NULL;
F->p_1301 = (*(P531)rt_nil_check(F->bt_442)).tparams;
if ((!f_opened_190(F->bt_442))) {
f_fail_23((*(P527)rt_nil_check(F->e_443)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->bt_442)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P531)rt_nil_check(F->bt_442)).tparams == NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)), rt_str("ALL", 3))) {
F->code_445v = f_mk_3(&(*F->base_441));
F->t_446v = (*(P531)rt_nil_check(F->bt_442)).under;
goto ret_;
}
f_select_on_448(&(*F->base_441), (*(P531)rt_nil_check(F->bt_442)).under, F->e_443, &(*F->ro_444), &F->code_445v, &F->t_446v, &F->c_447v);
goto ret_;
}
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)), rt_str("ALL", 3))) {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_441), rt_str(".all", 4)); b_; }));
F->t_446v = (*(P531)rt_nil_check(F->bt_442)).under;
goto ret_;
}
while ((F->p_1301 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1301)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)))) {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_441), rt_str(".p_", 3)), f_lower_s_15(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1301)).name)))); b_; }));
F->t_446v = f_tparam_type_215(F->bt_442, &(*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1301)).name)));
(*F->ro_444) = 1;
goto ret_;
}
F->p_1301 = (*(P527)rt_nil_check(F->p_1301)).next;
}
f_select_on_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_441), rt_str(".all", 4)); b_; }), (*(P531)rt_nil_check(F->bt_442)).under, F->e_443, &(*F->ro_444), &F->code_445v, &F->t_446v, &F->c_447v);
goto ret_;
}
if (((*(P531)rt_nil_check(F->bt_442)).kind == ((rt_int)7LL))) {
F->f_1302 = NULL;
F->f_1302 = (*(P531)rt_nil_check(F->bt_442)).fields;
while ((F->f_1302 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_1302)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)))) {
F->c_447v = (*(P533)rt_nil_check(F->f_1302)).c;
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_441), rt_str(".", 1)), f_field_c_17(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name)))); b_; }));
F->t_446v = (*(P533)rt_nil_check(F->f_1302)).t;
goto ret_;
}
F->f_1302 = (*(P533)rt_nil_check(F->f_1302)).next;
}
f_fail_23((*(P527)rt_nil_check(F->e_443)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name))); b_; }));
}
f_fail_23((*(P527)rt_nil_check(F->e_443)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_443)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_445) = F->code_445v;  (*F->t_446) = F->t_446v;  (*F->c_447) = F->c_447v;
  RT_FPOP();
  return;
}

static void f_index_on_457(rstr *base_449, P531 bt_450, P527 e_451, int *ro_452, int lv_453, P522 *code_454, P531 *t_455, P529 *c_456) {
  struct f_index_on_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_449 = base_449;
F->bt_450 = bt_450;
F->e_451 = e_451;
F->ro_452 = ro_452;
F->lv_453 = lv_453;
F->code_454 = code_454;
F->code_454v = *F->code_454;
F->t_455 = t_455;
F->t_455v = *F->t_455;
F->c_456 = c_456;
F->c_456v = *F->c_456;
F->a_1303 = NULL;
F->a_1303 = (*(P527)rt_nil_check(F->e_451)).b;
F->it_1304 = NULL;
F->c_456v = g_no_cons_603;
if (((*(P531)rt_nil_check(F->bt_450)).kind == ((rt_int)8LL))) {
f_finish_ptr_279(F->bt_450);
(*F->ro_452) = 0;
f_index_on_457(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_432(&(*F->base_449), F->bt_450); b_; }), (*(P531)rt_nil_check(F->bt_450)).target, F->e_451, &(*F->ro_452), F->lv_453, &F->code_454v, &F->t_455v, &F->c_456v);
goto ret_;
}
if (((*(P531)rt_nil_check(F->bt_450)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_450))) {
f_fail_23((*(P527)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->bt_450)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P531)rt_nil_check(F->bt_450)).tparams == NULL)) {
f_index_on_457(&(*F->base_449), (*(P531)rt_nil_check(F->bt_450)).under, F->e_451, &(*F->ro_452), F->lv_453, &F->code_454v, &F->t_455v, &F->c_456v);
} else {
f_index_on_457(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_449), rt_str(".all", 4)); b_; }), (*(P531)rt_nil_check(F->bt_450)).under, F->e_451, &(*F->ro_452), F->lv_453, &F->code_454v, &F->t_455v, &F->c_456v);
}
goto ret_;
}
if ((((*(P531)rt_nil_check(F->bt_450)).kind == ((rt_int)6LL)) && ((*(P531)rt_nil_check(F->bt_450)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1303) != ((rt_int)2LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1305 = rt_str_copy(f_gexpr_463(F->a_1303, (*(P531)rt_nil_check(F->bt_450)).idx, &F->it_1304));
F->j_1306 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->a_1303)).next, (*(P531)rt_nil_check(F->bt_450)).idx2, &F->it_1304));
F->code_454v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_449), rt_str(".p[(rt_index(", 13)), F->i_1305), rt_str(", ", 2)), (*F->base_449)), rt_str(".lo, ", 5)), (*F->base_449)), rt_str(".hi) - ", 7)), (*F->base_449)), rt_str(".lo) * (", 8)), (*F->base_449)), rt_str(".hi2 - ", 7)), (*F->base_449)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1306), rt_str(", ", 2)), (*F->base_449)), rt_str(".lo2, ", 6)), (*F->base_449)), rt_str(".hi2) - ", 8)), (*F->base_449)), rt_str(".lo2]", 5)); b_; }));
F->t_455v = (*(P531)rt_nil_check(F->bt_450)).elem;
F->c_456v = (*(P531)rt_nil_check(F->bt_450)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1303) != ((rt_int)1LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P531)rt_nil_check(F->bt_450)).kind == ((rt_int)5LL))) {
if (((*(P527)rt_nil_check(F->a_1303)).kind == ((rt_int)16LL))) {
F->lo_1307 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->a_1303)).a, g_ty_int_592, &F->it_1304));
F->hi_1308 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->a_1303)).b, g_ty_int_592, &F->it_1304));
F->code_454v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_449)), rt_str(", ", 2)), F->lo_1307), rt_str(", ", 2)), F->hi_1308), rt_str(")", 1)); b_; }));
F->t_455v = g_ty_string_596;
(*F->ro_452) = 1;
goto ret_;
}
{
F->i_1309 = rt_str_copy(f_gexpr_463(F->a_1303, g_ty_int_592, &F->it_1304));
F->t_455v = g_ty_ascii_595;
if (F->lv_453) {
F->code_454v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_449)), rt_str(", ", 2)), F->i_1309), rt_str("))", 2)); b_; }));
} else {
F->code_454v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_449)), rt_str(", ", 2)), F->i_1309), rt_str(")", 1)); b_; }));
(*F->ro_452) = 1;
}
}
goto ret_;
}
if (((*(P531)rt_nil_check(F->bt_450)).kind == ((rt_int)6LL))) {
F->i_1310 = rt_str_copy(f_gexpr_463(F->a_1303, (*(P531)rt_nil_check(F->bt_450)).idx, &F->it_1304));
F->code_454v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_449), rt_str(".p[rt_index(", 12)), F->i_1310), rt_str(", ", 2)), (*F->base_449)), rt_str(".lo, ", 5)), (*F->base_449)), rt_str(".hi) - ", 7)), (*F->base_449)), rt_str(".lo]", 4)); b_; }));
F->t_455v = (*(P531)rt_nil_check(F->bt_450)).elem;
F->c_456v = (*(P531)rt_nil_check(F->bt_450)).elemcons;
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_454) = F->code_454v;  (*F->t_455) = F->t_455v;  (*F->c_456) = F->c_456v;
  RT_FPOP();
  return;
}

static int f_own_attribute_459(P527 e_458) {
  struct f_own_attribute_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_458 = e_458;
F->saved_1311 = NULL;
F->saved_1311 = g_code_571;
F->bt_1312 = NULL;
F->ok_1313 = 0;
g_trial_590 = rt_add(g_trial_590, ((rt_int)1LL));
g_code_571 = f_new_buffer_24();
{ rt_frame xf1314;
if (RT_TRY(xf1314)) {
F->base_1316 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_458)).a, NULL, &F->bt_1312));
while (((F->bt_1312 != NULL) && ((*(P531)rt_nil_check(F->bt_1312)).kind == ((rt_int)8LL)))) {
f_finish_ptr_279(F->bt_1312);
F->bt_1312 = (*(P531)rt_nil_check(F->bt_1312)).target;
}
if (((F->bt_1312 != NULL) && ((*(P531)rt_nil_check(F->bt_1312)).kind == ((rt_int)15LL)))) {
F->p_1317 = NULL;
F->p_1317 = (*(P531)rt_nil_check(F->bt_1312)).tparams;
while ((F->p_1317 != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->p_1317)).name)), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_458)).name)))) {
F->ok_1313 = 1;
}
F->p_1317 = (*(P527)rt_nil_check(F->p_1317)).next;
}
}
RT_POP(xf1314);
} else {
RT_POP(xf1314);
int x1315 = rt_xcur;
if (0 || x1315 == ex_compile_error_1) {
F->ok_1313 = 0;
} else {
rt_raise(x1315);
}
}
}
g_trial_590 = rt_sub(g_trial_590, ((rt_int)1LL));
g_code_571 = F->saved_1311;
F->result_ = F->ok_1313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_463(P527 e_460, P531 want_461, P531 *t_462) {
  struct f_gexpr_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_460 = e_460;
F->want_461 = want_461;
F->t_462 = t_462;
F->t_462v = *F->t_462;
F->k_1318 = (*(P527)rt_nil_check(F->e_460)).kind;
F->code_1319 = NULL;
F->c_1320 = NULL;
F->bt_1322 = NULL;
F->t_462v = g_ty_int_592;
if ((F->k_1318 == ((rt_int)1LL))) {
if (((F->want_461 != NULL) && ((*(P531)rt_nil_check(F->want_461)).kind == ((rt_int)3LL)))) {
F->t_462v = g_ty_float_594;
F->result_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1318 == ((rt_int)2LL))) {
F->t_462v = g_ty_float_594;
F->result_ = (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name));
goto ret_;
} else if ((F->k_1318 == ((rt_int)5LL))) {
F->t_462v = g_ty_bool_593;
F->result_ = f_itos_7((*(P527)rt_nil_check(F->e_460)).ival);
goto ret_;
} else if ((F->k_1318 == ((rt_int)3LL))) {
F->t_462v = g_ty_string_596;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_469(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)))), rt_str(", ", 2)), f_itos_7(((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1318 == ((rt_int)6LL))) {
F->t_462v = g_ty_nil_599;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1318 == ((rt_int)4LL))) {
if (((F->want_461 != NULL) && ((*(P531)rt_nil_check(f_base_of_166(F->want_461))).kind == ((rt_int)4LL)))) {
F->t_462v = F->want_461;
} else {
F->t_462v = f_enum_type_of_472(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), (*(P527)rt_nil_check(F->e_460)).line);
}
{
F->i_1323 = f_lit_index_185((*(P531)rt_nil_check(f_base_of_166(F->t_462v))).lits, &(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)));
if ((F->i_1323 < ((rt_int)0LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_460)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1323);
goto ret_;
}
} else if ((F->k_1318 == ((rt_int)17LL))) {
F->result_ = f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, F->want_461, &F->t_462v);
goto ret_;
} else if ((F->k_1318 == ((rt_int)7LL))) {
F->y_1324 = NULL;
F->y_1324 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)));
if ((F->y_1324 == NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("ME", 2))) {
F->t_462v = g_ty_act_602;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("NIL_ACT", 7))) {
F->t_462v = g_ty_act_602;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_511(f_wrap_apply_467(F->e_460), 0, &F->t_462v);
goto ret_;
}
if (((((((((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_511(f_wrap_apply_467(F->e_460), 0, &F->t_462v);
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_460)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P535)rt_nil_check(F->y_1324)).kind == ((rt_int)1LL)) || ((*(P535)rt_nil_check(F->y_1324)).kind == ((rt_int)2LL)))) {
F->t_462v = (*(P535)rt_nil_check(F->y_1324)).t;
if (((*(P535)rt_nil_check(F->y_1324)).kind == ((rt_int)1LL))) {
F->ro_1325 = f_check_import_427(F->y_1324, (*(P527)rt_nil_check(F->e_460)).line);
}
F->result_ = f_access_of_421(F->y_1324);
goto ret_;
}
if (((*(P535)rt_nil_check(F->y_1324)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_511(f_wrap_apply_467(F->e_460), 0, &F->t_462v);
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_460)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1318 == ((rt_int)8LL)) && (f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name))) != NULL)) && (f_user_op_507(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), f_copy_node_465((*(P527)rt_nil_check(F->e_460)).a)) != NULL))) {
F->call_1326 = NULL;
F->call_1326 = f_nn_48(((rt_int)10LL), (*(P527)rt_nil_check(F->e_460)).line);
F->fname_1327 = NULL;
F->fname_1327 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->e_460)).line);
(*(P527)rt_nil_check(F->fname_1327)).name = (*(P527)rt_nil_check(F->e_460)).name;
(*(P527)rt_nil_check(F->call_1326)).a = F->fname_1327;
(*(P527)rt_nil_check(F->call_1326)).b = f_copy_node_465((*(P527)rt_nil_check(F->e_460)).a);
F->result_ = f_gcall_511(F->call_1326, 0, &F->t_462v);
goto ret_;
} else if (((((F->k_1318 == ((rt_int)8LL)) && rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("NOT", 3))) && (F->want_461 != NULL)) && ((*(P531)rt_nil_check(F->want_461)).kind == ((rt_int)16LL)))) {
F->a_1328 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, F->want_461, &F->t_462v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1328), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check((*(P531)rt_nil_check(F->want_461)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1318 == ((rt_int)8LL))) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("NOT", 3))) {
F->a_1329 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, g_ty_bool_593, &F->t_462v));
f_check_type_175(F->t_462v, g_ty_bool_593, (*(P527)rt_nil_check(F->e_460)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1329), rt_str(")", 1));
goto ret_;
}
{
F->a_1330 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, F->want_461, &F->t_462v));
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("+", 1))) {
F->result_ = F->a_1330;
goto ret_;
} else if (((*(P531)rt_nil_check(F->t_462v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1330), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_462v, g_ty_int_592, (*(P527)rt_nil_check(F->e_460)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1330), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1318 == ((rt_int)9LL))) {
F->result_ = f_gbinop_479(F->e_460, F->want_461, &F->t_462v);
goto ret_;
} else if ((F->k_1318 == ((rt_int)10LL))) {
if ((((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_460)).a)).kind == ((rt_int)7LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_460)).a)).kind == ((rt_int)12LL)))) {
F->nm_1331 = NULL;
F->nm_1331 = (*(P527)rt_nil_check(F->e_460)).a;
F->y_1332 = NULL;
if (((*(P527)rt_nil_check(F->nm_1331)).kind == ((rt_int)12LL))) {
F->nm_1331 = (*(P527)rt_nil_check(F->nm_1331)).a;
}
F->y_1332 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->nm_1331)).name)));
if (((((F->y_1332 == NULL) || ((*(P535)rt_nil_check(F->y_1332)).kind == ((rt_int)3LL))) || ((*(P535)rt_nil_check(F->y_1332)).kind == ((rt_int)4LL))) || ((*(P535)rt_nil_check(F->y_1332)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_511(F->e_460, 0, &F->t_462v);
goto ret_;
}
}
{
F->base_1333 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, NULL, &F->bt_1322));
F->ro_1321 = 1;
f_index_on_457(&F->base_1333, F->bt_1322, F->e_460, &F->ro_1321, 0, &F->code_1319, &F->t_462v, &F->c_1320);
F->result_ = (*(P522)rt_nil_check(F->code_1319));
goto ret_;
}
} else if ((F->k_1318 == ((rt_int)11LL))) {
if ((((rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_460)).name)), rt_str("MAX", 3))) && (!f_own_attribute_459(F->e_460)))) {
F->result_ = f_attribute_475(F->e_460, &F->t_462v);
goto ret_;
}
{
F->base_1334 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_460)).a, NULL, &F->bt_1322));
F->ro_1321 = 1;
f_select_on_448(&F->base_1334, F->bt_1322, F->e_460, &F->ro_1321, &F->code_1319, &F->t_462v, &F->c_1320);
F->result_ = (*(P522)rt_nil_check(F->code_1319));
goto ret_;
}
} else if ((F->k_1318 == ((rt_int)12LL))) {
F->result_ = f_gcall_511(f_wrap_apply_467(F->e_460), 0, &F->t_462v);
goto ret_;
} else if ((F->k_1318 == ((rt_int)14LL))) {
F->result_ = f_constructor_483(F->e_460, F->want_461, &F->t_462v);
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_460)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_462) = F->t_462v;
  RT_FPOP();
  return F->result_;
}

static P527 f_copy_node_465(P527 e_464) {
  struct f_copy_node_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_464 = e_464;
F->x_1335 = NULL;
{ R528 *cell1336 = rt_alloc(sizeof(R528));
(*cell1336).name = NULL;
(*cell1336).tag = NULL;
(*cell1336).a = NULL;
(*cell1336).b = NULL;
(*cell1336).c = NULL;
(*cell1336).d = NULL;
(*cell1336).e = NULL;
(*cell1336).next = NULL;
F->x_1335 = cell1336;
}
(*(P527)rt_nil_check(F->x_1335)).kind = (*(P527)rt_nil_check(F->e_464)).kind;
(*(P527)rt_nil_check(F->x_1335)).line = (*(P527)rt_nil_check(F->e_464)).line;
(*(P527)rt_nil_check(F->x_1335)).ival = (*(P527)rt_nil_check(F->e_464)).ival;
(*(P527)rt_nil_check(F->x_1335)).flag = (*(P527)rt_nil_check(F->e_464)).flag;
(*(P527)rt_nil_check(F->x_1335)).name = (*(P527)rt_nil_check(F->e_464)).name;
(*(P527)rt_nil_check(F->x_1335)).tag = (*(P527)rt_nil_check(F->e_464)).tag;
(*(P527)rt_nil_check(F->x_1335)).a = (*(P527)rt_nil_check(F->e_464)).a;
(*(P527)rt_nil_check(F->x_1335)).b = (*(P527)rt_nil_check(F->e_464)).b;
(*(P527)rt_nil_check(F->x_1335)).c = (*(P527)rt_nil_check(F->e_464)).c;
(*(P527)rt_nil_check(F->x_1335)).d = (*(P527)rt_nil_check(F->e_464)).d;
F->result_ = F->x_1335;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P527 f_wrap_apply_467(P527 e_466) {
  struct f_wrap_apply_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_466 = e_466;
F->x_1337 = NULL;
F->x_1337 = f_nn_48(((rt_int)10LL), (*(P527)rt_nil_check(F->e_466)).line);
(*(P527)rt_nil_check(F->x_1337)).a = F->e_466;
F->result_ = F->x_1337;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_469(rstr *s_468) {
  struct f_c_string_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_468 = s_468;
F->n_1338 = ((rt_int)0LL);
{ rt_int lo1340 = ((rt_int)1LL), hi1341 = ((*F->s_468)).len;
for (rt_int it1342 = lo1340; it1342 <= hi1341; it1342++) {
F->i_1339 = it1342;
if (((rt_str_get((*F->s_468), F->i_1339) == 92) || (rt_str_get((*F->s_468), F->i_1339) == 63))) {
F->n_1338 = rt_add(F->n_1338, ((rt_int)1LL));
}
}
}
{
F->r_1343 = rt_str_new(rt_add(rt_add(((*F->s_468)).len, F->n_1338), ((rt_int)2LL)));
F->j_1344 = ((rt_int)1LL);
(*rt_str_at(&F->r_1343, ((rt_int)1LL))) = 34;
{ rt_int lo1346 = ((rt_int)1LL), hi1347 = ((*F->s_468)).len;
for (rt_int it1348 = lo1346; it1348 <= hi1347; it1348++) {
F->i_1345 = it1348;
F->j_1344 = rt_add(F->j_1344, ((rt_int)1LL));
if (((rt_str_get((*F->s_468), F->i_1345) == 92) || (rt_str_get((*F->s_468), F->i_1345) == 63))) {
(*rt_str_at(&F->r_1343, F->j_1344)) = 92;
F->j_1344 = rt_add(F->j_1344, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1343, F->j_1344)) = rt_str_get((*F->s_468), F->i_1345);
}
}
(*rt_str_at(&F->r_1343, rt_add(F->j_1344, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1343;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P531 f_enum_type_of_472(rstr *lit_470, rt_int line_471) {
  struct f_enum_type_of_472fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_470 = lit_470;
F->line_471 = line_471;
F->y_1349 = NULL;
F->y_1349 = g_scope_stack_561;
F->c_1350 = NULL;
if ((f_lit_index_185((*(P531)rt_nil_check(g_ty_ascii_595)).lits, &(*F->lit_470)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_595;
goto ret_;
}
while ((F->y_1349 != NULL)) {
if ((((((*(P535)rt_nil_check(F->y_1349)).kind == ((rt_int)6LL)) || ((*(P535)rt_nil_check(F->y_1349)).kind == ((rt_int)5LL))) && ((*(P535)rt_nil_check(F->y_1349)).st != NULL)) && ((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_1349)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P527)rt_nil_check((*(P535)rt_nil_check(F->y_1349)).st)).a, &(*F->lit_470)) >= ((rt_int)0LL))) {
if (((*(P535)rt_nil_check(F->y_1349)).kind == ((rt_int)5LL))) {
F->st_1351 = NULL;
F->st_1351 = f_nn_48(((rt_int)80LL), F->line_471);
(*(P527)rt_nil_check(F->st_1351)).name = (*(P535)rt_nil_check(F->y_1349)).name;
F->result_ = f_resolve_subtype_188(F->st_1351, &F->c_1350);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P535)rt_nil_check(F->y_1349)).st, &F->c_1350);
goto ret_;
}
}
F->y_1349 = (*(P535)rt_nil_check(F->y_1349)).stack;
}
f_fail_23(F->line_471, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_470)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_475(P527 e_473, P531 *t_474) {
  struct f_attribute_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_473 = e_473;
F->t_474 = t_474;
F->t_474v = *F->t_474;
F->bt_1352 = NULL;
F->c_1353 = NULL;
F->t_474v = g_ty_int_592;
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_473)).name)), rt_str("LEN", 3))) {
F->base_1354 = NULL;
F->base_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_463((*(P527)rt_nil_check(F->e_473)).a, NULL, &F->bt_1352); b_; }));
if (((*(P531)rt_nil_check(F->bt_1352)).kind == ((rt_int)8LL))) {
f_finish_ptr_279(F->bt_1352);
F->base_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_432(&(*(P522)rt_nil_check(F->base_1354)), F->bt_1352); b_; }));
F->bt_1352 = (*(P531)rt_nil_check(F->bt_1352)).target;
}
if (((*(P531)rt_nil_check(F->bt_1352)).kind != ((rt_int)5LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_473)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P522)rt_nil_check(F->base_1354))), rt_str(").len", 5));
goto ret_;
}
if (((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_473)).a)).kind == ((rt_int)7LL))) {
F->y_1355 = NULL;
F->y_1355 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_473)).a)).name)));
if (((F->y_1355 != NULL) && (((*(P535)rt_nil_check(F->y_1355)).kind == ((rt_int)6LL)) || ((*(P535)rt_nil_check(F->y_1355)).kind == ((rt_int)5LL))))) {
F->st_1356 = NULL;
F->st_1356 = f_nn_48(((rt_int)80LL), (*(P527)rt_nil_check(F->e_473)).line);
(*(P527)rt_nil_check(F->st_1356)).name = (*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_473)).a)).name;
F->t_474v = f_resolve_subtype_188(F->st_1356, &F->c_1353);
if (((*(P531)rt_nil_check(F->t_474v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_473)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check(F->t_474v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P529)rt_nil_check(F->c_1353)).lo != NULL)) {
if (rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_473)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_1353)).lo));
goto ret_;
}
F->result_ = (*(P522)rt_nil_check((*(P529)rt_nil_check(F->c_1353)).hi));
goto ret_;
}
}
}
f_fail_23((*(P527)rt_nil_check(F->e_473)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P522)rt_nil_check((*(P527)rt_nil_check(F->e_473)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_474) = F->t_474v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_479(P527 e_476, P531 want_477, P531 *t_478) {
  struct f_gbinop_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_476 = e_476;
F->want_477 = want_477;
F->t_478 = t_478;
F->t_478v = *F->t_478;
F->op_1357 = NULL;
F->op_1357 = (*(P527)rt_nil_check(F->e_476)).name;
F->ta_1358 = NULL;
F->tb_1359 = NULL;
F->hint_1360 = NULL;
F->uy_1361 = NULL;
F->t_478v = g_ty_bool_593;
if ((f_lookup_140(&(*(P522)rt_nil_check(F->op_1357))) != NULL)) {
F->l_1362 = NULL;
F->r_1363 = NULL;
F->l_1362 = f_copy_node_465((*(P527)rt_nil_check(F->e_476)).a);
F->r_1363 = f_copy_node_465((*(P527)rt_nil_check(F->e_476)).b);
(*(P527)rt_nil_check(F->l_1362)).next = F->r_1363;
F->uy_1361 = f_user_op_507(&(*(P522)rt_nil_check(F->op_1357)), F->l_1362);
if ((F->uy_1361 != NULL)) {
F->call_1364 = NULL;
F->call_1364 = f_nn_48(((rt_int)10LL), (*(P527)rt_nil_check(F->e_476)).line);
F->fname_1365 = NULL;
F->fname_1365 = f_nn_48(((rt_int)7LL), (*(P527)rt_nil_check(F->e_476)).line);
(*(P527)rt_nil_check(F->fname_1365)).name = F->op_1357;
(*(P527)rt_nil_check(F->call_1364)).a = F->fname_1365;
(*(P527)rt_nil_check(F->call_1364)).b = F->l_1362;
F->result_ = f_gcall_511(F->call_1364, 0, &F->t_478v);
goto ret_;
}
}
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("IN", 2))) {
F->s_1366 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, NULL, &F->tb_1359));
if (((*(P531)rt_nil_check(F->tb_1359)).kind != ((rt_int)16LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_476)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1367 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, (*(P531)rt_nil_check(F->tb_1359)).elem, &F->ta_1358));
f_check_type_175(F->ta_1358, (*(P531)rt_nil_check(F->tb_1359)).elem, (*(P527)rt_nil_check(F->e_476)).line);
F->t_478v = g_ty_bool_593;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1367), rt_str(", ", 2)), F->s_1366), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("AND", 3)) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("OR", 2))) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("XOR", 3))) && (F->want_477 != NULL)) && ((*(P531)rt_nil_check(F->want_477)).kind == ((rt_int)16LL)))) {
F->a_1368 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, F->want_477, &F->ta_1358));
F->b_1369 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, F->want_477, &F->tb_1359));
f_check_type_175(F->tb_1359, F->ta_1358, (*(P527)rt_nil_check(F->e_476)).line);
F->t_478v = F->ta_1358;
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1368), rt_str(", ", 2)), F->b_1369), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1368), rt_str(", ", 2)), F->b_1369), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1368), rt_str(", ", 2)), F->b_1369), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("AND", 3)) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("OR", 2))) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("XOR", 3)))) {
F->a_1370 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, g_ty_bool_593, &F->ta_1358));
F->b_1371 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, g_ty_bool_593, &F->tb_1359));
f_check_type_175(F->ta_1358, g_ty_bool_593, (*(P527)rt_nil_check(F->e_476)).line);
f_check_type_175(F->tb_1359, g_ty_bool_593, (*(P527)rt_nil_check(F->e_476)).line);
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1370), rt_str(" && ", 4)), F->b_1371), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1370), rt_str(" || ", 4)), F->b_1371), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1370), rt_str(" != ", 4)), F->b_1371), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("&", 1))) {
F->wa_1372 = NULL;
F->wb_1373 = NULL;
if (((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_476)).a)).kind == ((rt_int)4LL))) {
F->wa_1372 = g_ty_ascii_595;
}
if (((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_476)).b)).kind == ((rt_int)4LL))) {
F->wb_1373 = g_ty_ascii_595;
}
{
F->a_1374 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, F->wa_1372, &F->ta_1358));
F->b_1375 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, F->wb_1373, &F->tb_1359));
F->t_478v = g_ty_string_596;
if ((((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)5LL)) && ((*(P531)rt_nil_check(F->tb_1359)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1374), rt_str(", ", 2)), F->b_1375), rt_str(")", 1));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)5LL)) && ((*(P531)rt_nil_check(F->tb_1359)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1374), rt_str(", ", 2)), F->b_1375), rt_str(")", 1));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)4LL)) && ((*(P531)rt_nil_check(F->tb_1359)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1374), rt_str(", ", 2)), F->b_1375), rt_str(")", 1));
goto ret_;
} else if ((((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)4LL)) && ((*(P531)rt_nil_check(F->tb_1359)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1374), rt_str(", ", 2)), F->b_1375), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_476)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P522)rt_nil_check(F->op_1357))) && (!rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("IN", 2))))) {
if (((((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_476)).a)).kind == ((rt_int)4LL)) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_476)).a)).kind == ((rt_int)6LL))) || ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->e_476)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1376 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, NULL, &F->hint_1360));
}
{
F->a_1377 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, F->hint_1360, &F->ta_1358));
F->b_1378 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, F->ta_1358, &F->tb_1359));
F->ct_1379 = NULL;
F->ct_1379 = f_base_of_166(F->ta_1358);
F->t_478v = g_ty_bool_593;
if ((((*(P531)rt_nil_check(F->ta_1358)).kind != ((rt_int)11LL)) && ((*(P531)rt_nil_check(F->tb_1359)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1359, F->ta_1358, (*(P527)rt_nil_check(F->e_476)).line);
}
if (((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)11LL))) {
F->ct_1379 = f_base_of_166(F->tb_1359);
}
if (((*(P531)rt_nil_check(F->ct_1379)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1378), rt_str(", ", 2)), F->a_1377), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1378), rt_str(", ", 2)), F->a_1377), rt_str(")", 1));
goto ret_;
}
if (((*(P531)rt_nil_check(F->ct_1379)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1377), rt_str(", ", 2)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1378), rt_str(", ", 2)), F->a_1377), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_476)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_226(F->ct_1379)) {
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("=", 1))) {
F->result_ = f_eq_code_238(F->ct_1379, &F->a_1377, &F->b_1378);
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_238(F->ct_1379, &F->a_1377, &F->b_1378)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_476)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1377), rt_str(" == ", 4)), F->b_1378), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1377), rt_str(" != ", 4)), F->b_1378), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1377), rt_str(" ", 1)), (*(P522)rt_nil_check(F->op_1357))), rt_str(" ", 1)), F->b_1378), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1380 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).a, F->want_477, &F->ta_1358));
F->b_1381 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->e_476)).b, F->ta_1358, &F->tb_1359));
if ((((*(P531)rt_nil_check(F->ta_1358)).kind == ((rt_int)3LL)) || ((*(P531)rt_nil_check(F->tb_1359)).kind == ((rt_int)3LL)))) {
F->t_478v = g_ty_float_594;
if (((rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("+", 1)) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("-", 1))) || rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1380), rt_str(" ", 1)), (*(P522)rt_nil_check(F->op_1357))), rt_str(" ", 1)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1358, g_ty_int_592, (*(P527)rt_nil_check(F->e_476)).line);
f_check_type_175(F->tb_1359, g_ty_int_592, (*(P527)rt_nil_check(F->e_476)).line);
F->t_478v = g_ty_int_592;
if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P522)rt_nil_check(F->op_1357)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1380), rt_str(", ", 2)), F->b_1381), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P527)rt_nil_check(F->e_476)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P522)rt_nil_check(F->op_1357))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_478) = F->t_478v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_483(P527 e_480, P531 want_481, P531 *t_482) {
  struct f_constructor_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_480 = e_480;
F->want_481 = want_481;
F->t_482 = t_482;
F->t_482v = *F->t_482;
F->it_1382 = NULL;
F->it_1382 = (*(P527)rt_nil_check(F->e_480)).a;
F->f_1383 = NULL;
F->vt_1384 = NULL;
if (((F->want_481 != NULL) && ((*(P531)rt_nil_check(F->want_481)).kind == ((rt_int)16LL)))) {
F->s_1385 = NULL;
F->s_1385 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_482v = F->want_481;
while ((F->it_1382 != NULL)) {
F->v_1386 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->it_1382)).b, (*(P531)rt_nil_check(F->want_481)).elem, &F->vt_1384));
f_check_type_175(F->vt_1384, (*(P531)rt_nil_check(F->want_481)).elem, (*(P527)rt_nil_check(F->e_480)).line);
F->s_1385 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P522)rt_nil_check(F->s_1385))), rt_str(", ", 2)), F->v_1386), rt_str(")", 1)); b_; }));
F->it_1382 = (*(P527)rt_nil_check(F->it_1382)).next;
}
F->result_ = (*(P522)rt_nil_check(F->s_1385));
goto ret_;
}
if (((F->want_481 != NULL) && ((*(P531)rt_nil_check(F->want_481)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P522)rt_nil_check((*(P531)rt_nil_check(F->want_481)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_481 != NULL) && ((*(P531)rt_nil_check(F->want_481)).kind == ((rt_int)6LL))) && ((*(P531)rt_nil_check(F->want_481)).idx2 == NULL))) {
F->tmp_1387 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1388 = rt_str_copy(f_ctype_177(F->want_481));
F->et_1389 = rt_str_copy(f_ctype_177((*(P531)rt_nil_check(F->want_481)).elem));
F->parts_1390 = NULL;
F->t_482v = F->want_481;
if (((((F->it_1382 != NULL) && ((*(P527)rt_nil_check(F->it_1382)).a != NULL)) && ((*(P527)rt_nil_check((*(P527)rt_nil_check(F->it_1382)).a)).b != NULL)) && ((*(P527)rt_nil_check(F->it_1382)).next == NULL))) {
F->lo_1391 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check((*(P527)rt_nil_check(F->it_1382)).a)).a, (*(P531)rt_nil_check(F->want_481)).idx, &F->vt_1384));
F->hi_1392 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check((*(P527)rt_nil_check(F->it_1382)).a)).b, (*(P531)rt_nil_check(F->want_481)).idx, &F->vt_1384));
F->v_1393 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->it_1382)).b, (*(P531)rt_nil_check(F->want_481)).elem, &F->vt_1384));
f_check_type_175(F->vt_1384, (*(P531)rt_nil_check(F->want_481)).elem, (*(P527)rt_nil_check(F->e_480)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1388), rt_str(" ", 1)), F->tmp_1387), rt_str("; ", 2)), F->tmp_1387), rt_str(".lo = ", 6)), F->lo_1391), rt_str("; ", 2)), F->tmp_1387), rt_str(".hi = ", 6)), F->hi_1392), rt_str("; ", 2)), F->tmp_1387), rt_str(".lo2 = ", 7)), F->tmp_1387), rt_str(".hi2 = 1; ", 10)), F->tmp_1387), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1389), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1387), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1387), rt_str("); i_++) ", 9)), F->tmp_1387), rt_str(".p[i_] = ", 9)), f_copy_code_234((*(P531)rt_nil_check(F->want_481)).elem, &F->v_1393)), rt_str("; ", 2)), F->tmp_1387), rt_str("; })", 4));
goto ret_;
}
F->parts_1390 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1388), rt_str(" ", 1)), F->tmp_1387), rt_str("; ", 2)), F->tmp_1387), rt_str(".lo = 1; ", 9)), F->tmp_1387), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1382))), rt_str("; ", 2)), F->tmp_1387), rt_str(".lo2 = ", 7)), F->tmp_1387), rt_str(".hi2 = 1; ", 10)), F->tmp_1387), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1389), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1382), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1395 = ((rt_int)0LL), hi1396 = rt_sub(f_list_len_54((*(P527)rt_nil_check(F->e_480)).a), ((rt_int)1LL));
for (rt_int it1397 = lo1395; it1397 <= hi1396; it1397++) {
F->i_1394 = it1397;
if (((*(P527)rt_nil_check(F->it_1382)).a != NULL)) {
f_fail_23((*(P527)rt_nil_check(F->e_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1398 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->it_1382)).b, (*(P531)rt_nil_check(F->want_481)).elem, &F->vt_1384));
f_check_type_175(F->vt_1384, (*(P531)rt_nil_check(F->want_481)).elem, (*(P527)rt_nil_check(F->e_480)).line);
F->parts_1390 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->parts_1390)), rt_str(" ", 1)), F->tmp_1387), rt_str(".p[", 3)), f_itos_7(F->i_1394)), rt_str("] = ", 4)), f_copy_code_234((*(P531)rt_nil_check(F->want_481)).elem, &F->v_1398)), rt_str(";", 1)); b_; }));
}
F->it_1382 = (*(P527)rt_nil_check(F->it_1382)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->parts_1390)), rt_str(" ", 1)), F->tmp_1387), rt_str("; })", 4));
goto ret_;
}
if (((F->want_481 == NULL) || ((*(P531)rt_nil_check(F->want_481)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_482v = F->want_481;
F->f_1383 = (*(P531)rt_nil_check(F->want_481)).fields;
{
F->tmp_1399 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1400 = NULL;
F->parts_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_481)), rt_str(" ", 1)), F->tmp_1399), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1382) != ((rt_int)0LL)) && (f_list_len_54(F->it_1382) != ((rt_int)0LL)))) {
while (((F->it_1382 != NULL) && (F->f_1383 != NULL))) {
if (((((*(P527)rt_nil_check(F->it_1382)).a == NULL) || ((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->it_1382)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P522)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check((*(P527)rt_nil_check(F->it_1382)).a)).a)).name)), (*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_1383)).name)))))) {
f_fail_23((*(P527)rt_nil_check(F->e_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_1383)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1401 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->it_1382)).b, (*(P533)rt_nil_check(F->f_1383)).t, &F->vt_1384));
f_check_type_175(F->vt_1384, (*(P533)rt_nil_check(F->f_1383)).t, (*(P527)rt_nil_check(F->e_480)).line);
F->parts_1400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->parts_1400)), rt_str(" ", 1)), F->tmp_1399), rt_str(".", 1)), f_field_c_17(&(*(P522)rt_nil_check((*(P533)rt_nil_check(F->f_1383)).name)))), rt_str(" = ", 3)), f_copy_code_234((*(P533)rt_nil_check(F->f_1383)).t, &F->v_1401)), rt_str(";", 1)); b_; }));
}
F->it_1382 = (*(P527)rt_nil_check(F->it_1382)).next;
F->f_1383 = (*(P533)rt_nil_check(F->f_1383)).next;
}
}
if (((F->it_1382 != NULL) || (F->f_1383 != NULL))) {
f_fail_23((*(P527)rt_nil_check(F->e_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->parts_1400)), rt_str(" ", 1)), F->tmp_1399), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_482) = F->t_482v;
  RT_FPOP();
  return F->result_;
}

static int f_fits_486(P535 y_484, P527 args_485) {
  struct f_fits_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_484 = y_484;
F->args_485 = args_485;
F->a_1402 = NULL;
F->a_1402 = F->args_485;
F->pm_1403 = NULL;
F->pm_1403 = (*(P535)rt_nil_check(F->y_484)).params;
F->t_1404 = NULL;
F->saved_1405 = NULL;
F->saved_1405 = g_code_571;
F->ok_1406 = 1;
F->lv_1407 = NULL;
F->lc_1408 = NULL;
g_trial_590 = rt_add(g_trial_590, ((rt_int)1LL));
g_code_571 = f_new_buffer_24();
{ rt_frame xf1410;
if (RT_TRY(xf1410)) {
while (((F->ok_1406 && (F->a_1402 != NULL)) && (F->pm_1403 != NULL))) {
if ((((*(P537)rt_nil_check(F->pm_1403)).mode == ((rt_int)2LL)) || ((*(P537)rt_nil_check(F->pm_1403)).mode == ((rt_int)3LL)))) {
f_lvalue_440(F->a_1402, &F->lv_1407, &F->t_1404, &F->lc_1408, &F->ro_1409);
} else {
F->v_1412 = rt_str_copy(f_gexpr_463(F->a_1402, (*(P537)rt_nil_check(F->pm_1403)).t, &F->t_1404));
}
if ((!(f_same_164(F->t_1404, (*(P537)rt_nil_check(F->pm_1403)).t) || (((*(P531)rt_nil_check(F->t_1404)).kind == ((rt_int)11LL)) && ((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1403)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1406 = 0;
}
F->a_1402 = (*(P527)rt_nil_check(F->a_1402)).next;
F->pm_1403 = (*(P537)rt_nil_check(F->pm_1403)).next;
}
if (((F->a_1402 != NULL) || (F->pm_1403 != NULL))) {
F->ok_1406 = 0;
}
RT_POP(xf1410);
} else {
RT_POP(xf1410);
int x1411 = rt_xcur;
if (0 || x1411 == ex_compile_error_1) {
F->ok_1406 = 0;
} else {
rt_raise(x1411);
}
}
}
g_trial_590 = rt_sub(g_trial_590, ((rt_int)1LL));
g_code_571 = F->saved_1405;
F->result_ = F->ok_1406;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_resolve_overload_491(rstr *name_487, P527 args_488, int is_stmt_489, rt_int line_490) {
  struct f_resolve_overload_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_487 = name_487;
F->args_488 = args_488;
F->is_stmt_489 = is_stmt_489;
F->line_490 = line_490;
F->y_1413 = NULL;
F->y_1413 = (*(P539)rt_nil_check(g_table_557)).p[rt_index(f_hash_138(&(*F->name_487)), (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
F->first_1414 = NULL;
F->n_1415 = ((rt_int)0LL);
while ((F->y_1413 != NULL)) {
if ((rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1413)).name)), (*F->name_487)) && (((*(P535)rt_nil_check(F->y_1413)).kind == ((rt_int)3LL)) || ((*(P535)rt_nil_check(F->y_1413)).kind == ((rt_int)4LL))))) {
F->n_1415 = rt_add(F->n_1415, ((rt_int)1LL));
if ((F->first_1414 == NULL)) {
F->first_1414 = F->y_1413;
}
if (((((*(P535)rt_nil_check(F->y_1413)).kind == ((rt_int)4LL)) == F->is_stmt_489) && f_fits_486(F->y_1413, F->args_488))) {
F->result_ = F->y_1413;
goto ret_;
}
}
F->y_1413 = (*(P535)rt_nil_check(F->y_1413)).chain;
}
if (f_is_builtin_493(&(*F->name_487))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1415 > ((rt_int)1LL))) {
f_fail_23(F->line_490, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_487)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1414;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_493(rstr *n_492) {
  struct f_is_builtin_493fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_492 = n_492;
F->result_ = (((((((((((((((rt_str_eq((*F->n_492), rt_str("ABS", 3)) || rt_str_eq((*F->n_492), rt_str("POS", 3))) || rt_str_eq((*F->n_492), rt_str("SUCC", 4))) || rt_str_eq((*F->n_492), rt_str("PRED", 4))) || rt_str_eq((*F->n_492), rt_str("SQRT", 4))) || rt_str_eq((*F->n_492), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_492), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_492), rt_str("WRITE", 5))) || rt_str_eq((*F->n_492), rt_str("READLN", 6))) || rt_str_eq((*F->n_492), rt_str("SEND", 4))) || rt_str_eq((*F->n_492), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_492), rt_str("DELAY", 5))) || rt_str_eq((*F->n_492), rt_str("TIME", 4))) || rt_str_eq((*F->n_492), rt_str("CNVT", 4))) || rt_str_eq((*F->n_492), rt_str("FORMAT", 6))) || f_is_low_level_495(&(*F->n_492)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_495(rstr *n_494) {
  struct f_is_low_level_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_494 = n_494;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_494), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_494), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_494), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_494), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_494), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_494), rt_str("LOCK", 4))) || rt_str_eq((*F->n_494), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_494), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_494), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_494), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_494), rt_str("WAITING", 7))) || rt_str_eq((*F->n_494), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_494), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_494), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_494), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_494), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_494), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_494), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_494), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_499(P527 tt_496, rt_int line_497, P531 *t_498) {
  struct f_me_high_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_496 = tt_496;
F->line_497 = line_497;
F->t_498 = t_498;
F->t_498v = *F->t_498;
F->c_1416 = NULL;
if ((F->tt_496 == NULL)) {
f_fail_23(F->line_497, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_498v = f_resolve_subtype_188(F->tt_496, &F->c_1416);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_498v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_501(F->t_498v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_498) = F->t_498v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_501(P531 t_500) {
  struct f_type_tag_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_500 = t_500;
if (((*(P531)rt_nil_check(F->t_500)).name != NULL)) {
F->result_ = (*(P522)rt_nil_check((*(P531)rt_nil_check(F->t_500)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_504(P527 e_502, rstr *name_503) {
  struct f_lock_ref_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_502 = e_502;
F->name_503 = name_503;
F->lv_1417 = NULL;
F->t_1418 = NULL;
F->c_1419 = NULL;
f_lvalue_440(F->e_502, &F->lv_1417, &F->t_1418, &F->c_1419, &F->ro_1420);
if (((*(P531)rt_nil_check(F->t_1418)).kind != ((rt_int)13LL))) {
f_fail_23((*(P527)rt_nil_check(F->e_502)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P522)rt_nil_check(F->lv_1417)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P535 f_user_op_507(rstr *op_505, P527 args_506) {
  struct f_user_op_507fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_505 = op_505;
F->args_506 = args_506;
F->y_1421 = NULL;
F->y_1421 = (*(P539)rt_nil_check(g_table_557)).p[rt_index(f_hash_138(&(*F->op_505)), (*(P539)rt_nil_check(g_table_557)).lo, (*(P539)rt_nil_check(g_table_557)).hi) - (*(P539)rt_nil_check(g_table_557)).lo];
while ((F->y_1421 != NULL)) {
if (((rt_str_eq((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1421)).name)), (*F->op_505)) && ((*(P535)rt_nil_check(F->y_1421)).kind == ((rt_int)3LL))) && f_fits_486(F->y_1421, F->args_506))) {
F->result_ = F->y_1421;
goto ret_;
}
F->y_1421 = (*(P535)rt_nil_check(F->y_1421)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gcall_511(P527 e_508, int is_stmt_509, P531 *t_510) {
  struct f_gcall_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_508 = e_508;
F->is_stmt_509 = is_stmt_509;
F->t_510 = t_510;
F->t_510v = *F->t_510;
F->fn_1422 = NULL;
F->fn_1422 = (*(P527)rt_nil_check(F->e_508)).a;
F->tt_1423 = NULL;
F->y_1424 = NULL;
F->args_1425 = NULL;
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1426 = NULL;
F->a_1426 = (*(P527)rt_nil_check(F->e_508)).b;
F->pm_1427 = NULL;
F->lt_1428 = NULL;
F->vt_1429 = NULL;
F->lv_1430 = NULL;
F->lc_1431 = NULL;
if (((*(P527)rt_nil_check(F->fn_1422)).kind == ((rt_int)12LL))) {
F->tt_1423 = (*(P527)rt_nil_check(F->fn_1422)).b;
F->fn_1422 = (*(P527)rt_nil_check(F->fn_1422)).a;
}
F->y_1424 = f_lookup_140(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)));
if ((F->y_1424 == NULL)) {
F->result_ = f_builtin_518(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), F->tt_1423, (*(P527)rt_nil_check(F->e_508)).b, (*(P527)rt_nil_check(F->e_508)).line, F->is_stmt_509, &F->t_510v);
goto ret_;
}
if (((((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)3LL)) && ((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)4LL))) && ((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)10LL)))) {
F->alt_1433 = NULL;
F->alt_1433 = f_resolve_overload_491(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), (*(P527)rt_nil_check(F->e_508)).b, F->is_stmt_509, (*(P527)rt_nil_check(F->e_508)).line);
if ((F->alt_1433 != NULL)) {
F->y_1424 = F->alt_1433;
} else if (f_is_builtin_493(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)))) {
F->result_ = f_builtin_518(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), F->tt_1423, (*(P527)rt_nil_check(F->e_508)).b, (*(P527)rt_nil_check(F->e_508)).line, F->is_stmt_509, &F->t_510v);
goto ret_;
}
}
if (((*(P535)rt_nil_check(F->y_1424)).kind == ((rt_int)10LL))) {
F->y_1424 = f_instantiate_419(F->y_1424, F->tt_1423, (*(P527)rt_nil_check(F->e_508)).b, (*(P527)rt_nil_check(F->e_508)).line);
} else if ((((*(P535)rt_nil_check(F->y_1424)).kind == ((rt_int)3LL)) || ((*(P535)rt_nil_check(F->y_1424)).kind == ((rt_int)4LL)))) {
F->y_1424 = f_resolve_overload_491(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), (*(P527)rt_nil_check(F->e_508)).b, F->is_stmt_509, (*(P527)rt_nil_check(F->e_508)).line);
if ((F->y_1424 == NULL)) {
F->result_ = f_builtin_518(&(*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), F->tt_1423, (*(P527)rt_nil_check(F->e_508)).b, (*(P527)rt_nil_check(F->e_508)).line, F->is_stmt_509, &F->t_510v);
goto ret_;
}
}
if ((((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)3LL)) && ((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_509 && ((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_509) && ((*(P535)rt_nil_check(F->y_1424)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P527)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1427 = (*(P535)rt_nil_check(F->y_1424)).params;
if (((*(P535)rt_nil_check(F->y_1424)).level > ((rt_int)0LL))) {
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1435 = ((rt_int)1LL), hi1436 = rt_sub(g_cur_level_574, (*(P535)rt_nil_check(F->y_1424)).level);
for (rt_int it1437 = lo1435; it1437 <= hi1436; it1437++) {
F->i_1434 = it1437;
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1426 != NULL) && (F->pm_1427 != NULL))) {
if ((((*(P522)rt_nil_check(F->args_1425))).len > ((rt_int)0LL))) {
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str(", ", 2)); b_; }));
}
if ((((*(P537)rt_nil_check(F->pm_1427)).mode == ((rt_int)2LL)) || ((*(P537)rt_nil_check(F->pm_1427)).mode == ((rt_int)3LL)))) {
f_lvalue_440(F->a_1426, &F->lv_1430, &F->lt_1428, &F->lc_1431, &F->ro_1432);
if (F->ro_1432) {
f_fail_23((*(P527)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check((*(P537)rt_nil_check(F->pm_1427)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1428, (*(P537)rt_nil_check(F->pm_1427)).t, (*(P527)rt_nil_check(F->e_508)).line);
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str("&", 1)), (*(P522)rt_nil_check(F->lv_1430))); b_; }));
} else if ((((*(P537)rt_nil_check(F->pm_1427)).mode == ((rt_int)4LL)) && f_is_lvalue_434(F->a_1426))) {
f_lvalue_440(F->a_1426, &F->lv_1430, &F->lt_1428, &F->lc_1431, &F->ro_1432);
f_check_type_175(F->lt_1428, (*(P537)rt_nil_check(F->pm_1427)).t, (*(P527)rt_nil_check(F->e_508)).line);
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str("&", 1)), (*(P522)rt_nil_check(F->lv_1430))); b_; }));
} else if (((*(P537)rt_nil_check(F->pm_1427)).mode == ((rt_int)4LL))) {
F->v_1438 = rt_str_copy(f_gexpr_463(F->a_1426, (*(P537)rt_nil_check(F->pm_1427)).t, &F->vt_1429));
F->ct_1439 = rt_str_copy(f_ctype_177((*(P537)rt_nil_check(F->pm_1427)).t));
f_check_type_175(F->vt_1429, (*(P537)rt_nil_check(F->pm_1427)).t, (*(P527)rt_nil_check(F->e_508)).line);
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str("({ ", 3)), F->ct_1439), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1439), rt_str(")); *b_ = ", 10)), F->v_1438), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1440 = rt_str_copy(f_gexpr_463(F->a_1426, (*(P537)rt_nil_check(F->pm_1427)).t, &F->vt_1429));
f_check_type_175(F->vt_1429, (*(P537)rt_nil_check(F->pm_1427)).t, (*(P527)rt_nil_check(F->e_508)).line);
if (((((*(P531)rt_nil_check((*(P537)rt_nil_check(F->pm_1427)).t)).kind == ((rt_int)1LL)) && ((*(P537)rt_nil_check(F->pm_1427)).c != NULL)) && (*(P529)rt_nil_check((*(P537)rt_nil_check(F->pm_1427)).c)).hasm)) {
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->args_1425)), rt_str("rt_range(", 9)), F->v_1440), rt_str(", ", 2)), f_itos_7((*(P529)rt_nil_check((*(P537)rt_nil_check(F->pm_1427)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P529)rt_nil_check((*(P537)rt_nil_check(F->pm_1427)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P522)rt_nil_check(F->args_1425)), F->v_1440); b_; }));
}
}
F->a_1426 = (*(P527)rt_nil_check(F->a_1426)).next;
F->pm_1427 = (*(P537)rt_nil_check(F->pm_1427)).next;
}
if (((F->a_1426 != NULL) || (F->pm_1427 != NULL))) {
f_fail_23((*(P527)rt_nil_check(F->e_508)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P527)rt_nil_check(F->fn_1422)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P527)rt_nil_check(F->e_508)).b), f_list_len_54(F->a_1426)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_510v = (*(P535)rt_nil_check(F->y_1424)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check((*(P535)rt_nil_check(F->y_1424)).cname)), rt_str("(", 1)), (*(P522)rt_nil_check(F->args_1425))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_510) = F->t_510v;
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_518(rstr *name_512, P527 tt_513, P527 args_514, rt_int line_515, int is_stmt_516, P531 *t_517) {
  struct f_builtin_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_512 = name_512;
F->tt_513 = tt_513;
F->args_514 = args_514;
F->line_515 = line_515;
F->is_stmt_516 = is_stmt_516;
F->t_517 = t_517;
F->t_517v = *F->t_517;
F->at_1441 = NULL;
F->n_1442 = f_list_len_54(F->args_514);
F->t_517v = g_ty_void_597;
if (((rt_str_eq((*F->name_512), rt_str("POS", 3)) || rt_str_eq((*F->name_512), rt_str("SUCC", 4))) || rt_str_eq((*F->name_512), rt_str("PRED", 4)))) {
F->a_1443 = rt_str_copy(f_gexpr_463(F->args_514, NULL, &F->at_1441));
if (rt_str_eq((*F->name_512), rt_str("POS", 3))) {
if (((*(P531)rt_nil_check(f_base_of_166(F->at_1441))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1443), rt_str(") + 1)", 6));
goto ret_;
}
F->t_517v = F->at_1441;
if (((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_512), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1443), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1443), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_512), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1443), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check(f_base_of_166(F->at_1441))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1443), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P531)rt_nil_check(f_base_of_166(F->at_1441))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_512), rt_str("SQRT", 4)) || rt_str_eq((*F->name_512), rt_str("SIN", 3))) || rt_str_eq((*F->name_512), rt_str("COS", 3))) || rt_str_eq((*F->name_512), rt_str("EXP", 3))) || rt_str_eq((*F->name_512), rt_str("LN", 2))) || rt_str_eq((*F->name_512), rt_str("FLOOR", 5)))) {
F->a_1444 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_float_594, &F->at_1441));
F->t_517v = g_ty_float_594;
if (rt_str_eq((*F->name_512), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1444), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_512)), rt_str("(", 1)), F->a_1444), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("IFLOAT", 6))) {
F->a_1445 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, g_ty_int_592, &F->at_1441));
F->t_517v = g_ty_float_594;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1445), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("IFIX", 4))) {
F->a_1446 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_float_594, &F->at_1441));
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1446), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("FORMAT", 6))) {
F->a_1447 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_float_594, &F->at_1441));
F->n1_1448 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, g_ty_int_592, &F->at_1441));
F->m1_1449 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check((*(P527)rt_nil_check(F->args_514)).next)).next, g_ty_int_592, &F->at_1441));
F->t_517v = g_ty_string_596;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1447), rt_str(", ", 2)), F->n1_1448), rt_str(", ", 2)), F->m1_1449), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("ABS", 3))) {
F->a_1450 = rt_str_copy(f_gexpr_463(F->args_514, NULL, &F->at_1441));
F->t_517v = F->at_1441;
if (((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1450), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1450), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("CNVT", 4))) {
if ((F->tt_513 == NULL)) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1451 = rt_str_copy(f_gexpr_463(F->args_514, NULL, &F->at_1441));
if ((((*(P527)rt_nil_check(F->tt_513)).kind == ((rt_int)73LL)) && ((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)1LL)))) {
F->t_517v = g_ty_string_596;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1451), rt_str(")", 1));
goto ret_;
} else if ((((*(P527)rt_nil_check(F->tt_513)).kind == ((rt_int)73LL)) && ((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)3LL)))) {
F->t_517v = g_ty_string_596;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1451), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P527)rt_nil_check(F->tt_513)).kind == ((rt_int)73LL)) && ((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)2LL)))) {
F->t_517v = g_ty_string_596;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1451), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P527)rt_nil_check(F->tt_513)).kind == ((rt_int)70LL)) && ((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)5LL)))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1451), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_512), rt_str("WRITELN", 7))) {
if ((F->n_1442 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1452 = NULL;
F->last_1452 = F->args_514;
while (((*(P527)rt_nil_check(F->last_1452)).next != NULL)) {
F->last_1452 = (*(P527)rt_nil_check(F->last_1452)).next;
}
{
F->a_1453 = rt_str_copy(f_gexpr_463(F->last_1452, g_ty_string_596, &F->at_1441));
f_check_type_175(F->at_1441, g_ty_string_596, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1453), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_512), rt_str("WRITE", 5))) {
F->a_1454 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, NULL, &F->at_1441));
if (((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1454), rt_str(")", 1));
goto ret_;
} else if (((*(P531)rt_nil_check(F->at_1441)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1454), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_512), rt_str("READLN", 6))) {
F->lv_1455 = NULL;
F->lc_1456 = NULL;
F->last_1458 = NULL;
F->last_1458 = F->args_514;
while (((*(P527)rt_nil_check(F->last_1458)).next != NULL)) {
F->last_1458 = (*(P527)rt_nil_check(F->last_1458)).next;
}
f_lvalue_440(F->last_1458, &F->lv_1455, &F->at_1441, &F->lc_1456, &F->ro_1457);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P522)rt_nil_check(F->lv_1455))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("SIZELN", 6))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("EOF", 3))) {
F->t_517v = g_ty_bool_593;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_512), rt_str("SYS_OUT", 7)))) {
F->t_517v = g_ty_file_598;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("OPEN", 4)) || rt_str_eq((*F->name_512), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("SEND", 4)) || rt_str_eq((*F->name_512), rt_str("RECEIVE", 7)))) {
F->lv_1459 = NULL;
F->dv_1460 = NULL;
F->lc_1461 = NULL;
F->mt_1463 = NULL;
F->dt_1464 = NULL;
f_lvalue_440(F->args_514, &F->lv_1459, &F->mt_1463, &F->lc_1461, &F->ro_1462);
if (((*(P531)rt_nil_check(F->mt_1463)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_512), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_512), rt_str("RECEIVE", 7))) {
f_lvalue_440((*(P527)rt_nil_check(F->args_514)).next, &F->dv_1460, &F->dt_1464, &F->lc_1461, &F->ro_1462);
f_check_type_175(F->dt_1464, (*(P531)rt_nil_check(F->mt_1463)).elem, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P522)rt_nil_check(F->lv_1459))), rt_str(", &", 3)), (*(P522)rt_nil_check(F->dv_1460))), rt_str(")", 1));
goto ret_;
}
{
F->v_1465 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, (*(P531)rt_nil_check(F->mt_1463)).elem, &F->at_1441));
f_check_type_175(F->at_1441, (*(P531)rt_nil_check(F->mt_1463)).elem, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P531)rt_nil_check(F->mt_1463)).elem)), rt_str(" m_ = ", 6)), F->v_1465), rt_str("; rt_send(", 10)), (*(P522)rt_nil_check(F->lv_1459))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_512), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_512), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1466 = NULL;
F->lc_1467 = NULL;
F->mt_1469 = NULL;
f_lvalue_440(F->args_514, &F->lv_1466, &F->mt_1469, &F->lc_1467, &F->ro_1468);
if (((*(P531)rt_nil_check(F->mt_1469)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_512), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_512))), rt_str("(", 1)), (*(P522)rt_nil_check(F->lv_1466))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_512), rt_str("COND_RECEIVE", 12)))) {
F->lv_1470 = NULL;
F->dv_1471 = NULL;
F->bv_1472 = NULL;
F->lc_1473 = NULL;
F->mt_1475 = NULL;
F->dt_1476 = NULL;
F->bt_1477 = NULL;
f_lvalue_440(F->args_514, &F->lv_1470, &F->mt_1475, &F->lc_1473, &F->ro_1474);
if (((*(P531)rt_nil_check(F->mt_1475)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_512), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_440((*(P527)rt_nil_check((*(P527)rt_nil_check(F->args_514)).next)).next, &F->bv_1472, &F->bt_1477, &F->lc_1473, &F->ro_1474);
f_check_type_175(F->bt_1477, g_ty_bool_593, F->line_515);
if (rt_str_eq((*F->name_512), rt_str("COND_RECEIVE", 12))) {
f_lvalue_440((*(P527)rt_nil_check(F->args_514)).next, &F->dv_1471, &F->dt_1476, &F->lc_1473, &F->ro_1474);
f_check_type_175(F->dt_1476, (*(P531)rt_nil_check(F->mt_1475)).elem, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->bv_1472)), rt_str(" = rt_cond_receive(", 19)), (*(P522)rt_nil_check(F->lv_1470))), rt_str(", &", 3)), (*(P522)rt_nil_check(F->dv_1471))), rt_str(")", 1));
goto ret_;
}
{
F->v_1478 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, (*(P531)rt_nil_check(F->mt_1475)).elem, &F->at_1441));
f_check_type_175(F->at_1441, (*(P531)rt_nil_check(F->mt_1475)).elem, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P531)rt_nil_check(F->mt_1475)).elem)), rt_str(" m_ = ", 6)), F->v_1478), rt_str("; ", 2)), (*(P522)rt_nil_check(F->bv_1472))), rt_str(" = rt_cond_send(", 16)), (*(P522)rt_nil_check(F->lv_1470))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_512), rt_str("PRIORITY", 8))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("SET_PRIORITY", 12))) {
F->v_1479 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, g_ty_int_592, &F->at_1441));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_346(F->args_514)), rt_str(", ", 2)), F->v_1479), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("ACTIVE", 6))) {
F->t_517v = g_ty_bool_593;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("DELAY", 5))) {
F->v_1480 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_int_592, &F->at_1441));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1480), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("DELAY_UNTIL", 11))) {
F->v_1481 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_int_592, &F->at_1441));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1481), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("TIME", 4))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_512), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_512), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_512), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_512), rt_str("HOURS", 5)))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_512));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("HALT", 4))) {
F->a_1482 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_int_592, &F->at_1441));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1482), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("ME", 2)) && (F->tt_513 != NULL))) {
F->result_ = f_me_high_499(F->tt_513, F->line_515, &F->t_517v);
goto ret_;
} else if ((rt_str_eq((*F->name_512), rt_str("WAITING", 7)) || rt_str_eq((*F->name_512), rt_str("SUSPENDED", 9)))) {
F->t_517v = g_ty_bool_593;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_512))), rt_str("(", 1)), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_512), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_512), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_512), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_512), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_512), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_512), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_512))), rt_str("(", 1)), f_act_ref_346(F->args_514)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("TASK_START", 10))) {
if ((F->n_1442 != ((rt_int)2LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_346(F->args_514)), rt_str(", ", 2)), f_act_ref_346((*(P527)rt_nil_check(F->args_514)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_512), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_512), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_512), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_512), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_512), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_512), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1442 != ((rt_int)0LL))) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_512), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_512))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_504(F->args_514, &(*F->name_512))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_504(F->args_514, &(*F->name_512))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("COND_LOCK", 9))) {
F->bv_1483 = NULL;
F->bc_1484 = NULL;
F->bt_1486 = NULL;
F->l_1487 = rt_str_copy(f_lock_ref_504(F->args_514, &(*F->name_512)));
f_lvalue_440((*(P527)rt_nil_check(F->args_514)).next, &F->bv_1483, &F->bt_1486, &F->bc_1484, &F->ro_1485);
f_check_type_175(F->bt_1486, g_ty_bool_593, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P522)rt_nil_check(F->bv_1483)), rt_str(" = rt_cond_lock(", 16)), F->l_1487), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("EXCESS_LOCKS", 12))) {
F->t_517v = g_ty_int_592;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_504(F->args_514, &(*F->name_512))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("OWNER", 5))) {
F->t_517v = g_ty_act_602;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_504(F->args_514, &(*F->name_512))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("FREE", 4))) {
F->pv_1488 = NULL;
F->pc_1489 = NULL;
F->pt_1491 = NULL;
f_lvalue_440(F->args_514, &F->pv_1488, &F->pt_1491, &F->pc_1489, &F->ro_1490);
if ((((*(P531)rt_nil_check(F->pt_1491)).kind != ((rt_int)8LL)) || F->ro_1490)) {
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_582 = 1;
f_finish_ptr_279(F->pt_1491);
if (f_needs_fin_209((*(P531)rt_nil_check(F->pt_1491)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (*(P522)rt_nil_check(F->pv_1488))), rt_str("); if (", 7)), (*(P522)rt_nil_check(F->pv_1488))), rt_str(") { ", 4)), f_fin_code_212(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P522)rt_nil_check(F->pv_1488))), rt_str(")", 1)); b_; }), (*(P531)rt_nil_check(F->pt_1491)).target)), rt_str(" } rt_free((void **)&", 21)), (*(P522)rt_nil_check(F->pv_1488))), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (*(P522)rt_nil_check(F->pv_1488))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_512), rt_str("LOW_IO", 6))) {
F->dev_1492 = rt_str_copy(f_gexpr_463(F->args_514, g_ty_int_592, &F->at_1441));
F->cmd_1493 = rt_str_copy(f_gexpr_463((*(P527)rt_nil_check(F->args_514)).next, g_ty_int_592, &F->at_1441));
if ((F->n_1442 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1492), rt_str(", ", 2)), F->cmd_1493), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1494 = NULL;
F->dc_1495 = NULL;
F->dt_1497 = NULL;
f_lvalue_440((*(P527)rt_nil_check((*(P527)rt_nil_check(F->args_514)).next)).next, &F->dv_1494, &F->dt_1497, &F->dc_1495, &F->ro_1496);
f_check_type_175(F->dt_1497, g_ty_int_592, F->line_515);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1492), rt_str(", ", 2)), F->cmd_1493), rt_str(", &", 3)), (*(P522)rt_nil_check(F->dv_1494))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_515, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_512), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_517) = F->t_517v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_520(P527 units_519) {
  struct f_translate_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_519 = units_519;
F->u_1498 = NULL;
F->u_1498 = F->units_519;
while ((F->u_1498 != NULL)) {
if (((*(P527)rt_nil_check(F->u_1498)).next == NULL)) {
{ R548 *cell1499 = rt_alloc(sizeof(R548));
(*cell1499).d = NULL;
(*cell1499).next = NULL;
g_caps_576 = cell1499;
}
(*(P547)rt_nil_check(g_caps_576)).d = F->u_1498;
f_declare_body_250((*(P527)rt_nil_check(F->u_1498)).c);
f_body_elements_314((*(P527)rt_nil_check(F->u_1498)).c);
{
F->l_1500 = NULL;
F->l_1500 = F->units_519;
while ((F->l_1500 != F->u_1498)) {
{
F->w_1501 = rt_str_copy(f_waits_of_306(F->l_1500));
if (((F->w_1501).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1501);
}
}
F->l_1500 = (*(P527)rt_nil_check(F->l_1500)).next;
}
}
f_close_fins_297(NULL);
if (g_uses_findyn_584) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_260(F->u_1498);
}
F->u_1498 = (*(P527)rt_nil_check(F->u_1498)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_521(void) {
  struct f_print_program_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_246();
if (g_uses_free_582) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_564);
f_print_buffer_31(g_out_frames_580);
f_print_buffer_31(g_out_helpers_565);
f_print_buffer_31(g_out_protos_566);
f_print_buffer_31(g_out_globals_567);
f_print_buffer_31(g_out_funcs_568);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_581);
f_print_buffer_31(g_out_excs_570);
f_print_buffer_31(g_out_init_569);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R552(R552 *d, R552 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R552 cp_R552(R552 s) {
  R552 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R552(R552 a, R552 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R550(R550 *d, R550 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R550 cp_R550(R550 s) {
  R550 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R550(R550 a, R550 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R548(R548 *d, R548 s) {
  d->d = s.d;
  d->next = s.next;
}
static R548 cp_R548(R548 s) {
  R548 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R548(R548 a, R548 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R546(R546 *d, R546 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R546 cp_R546(R546 s) {
  R546 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R546(R546 a, R546 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R544(R544 *d, R544 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R544 cp_R544(R544 s) {
  R544 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R544(R544 a, R544 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R542(R542 *d, R542 s) {
  d->s = s.s;
  d->next = s.next;
}
static R542 cp_R542(R542 s) {
  R542 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R542(R542 a, R542 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_A540(A540 *d, A540 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A540 cp_A540(A540 s) {
  A540 d = s; d.p = rt_alloc(sizeof(P535) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A540(A540 a, A540 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R538(R538 *d, R538 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R538 cp_R538(R538 s) {
  R538 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R538(R538 a, R538 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R536(R536 *d, R536 s) {
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
}
static R536 cp_R536(R536 s) {
  R536 d = s;
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
  return d;
}
static int eq_R536(R536 a, R536 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R534(R534 *d, R534 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R534 cp_R534(R534 s) {
  R534 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R534(R534 a, R534 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R532(R532 *d, R532 s) {
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
static R532 cp_R532(R532 s) {
  R532 d = s;
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
static int eq_R532(R532 a, R532 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next);
}
static void as_R530(R530 *d, R530 s) {
  d->lo = s.lo;
  d->hi = s.hi;
  d->lo2 = s.lo2;
  d->hi2 = s.hi2;
  d->slen = s.slen;
  d->mlo = s.mlo;
  d->mhi = s.mhi;
  d->hasm = s.hasm;
  d->args = s.args;
}
static R530 cp_R530(R530 s) {
  R530 d = s;
  d.lo = s.lo;
  d.hi = s.hi;
  d.lo2 = s.lo2;
  d.hi2 = s.hi2;
  d.slen = s.slen;
  d.mlo = s.mlo;
  d.mhi = s.mhi;
  d.hasm = s.hasm;
  d.args = s.args;
  return d;
}
static int eq_R530(R530 a, R530 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R528(R528 *d, R528 s) {
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
static R528 cp_R528(R528 s) {
  R528 d = s;
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
static int eq_R528(R528 a, R528 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A526(A526 *d, A526 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A526 cp_A526(A526 s) {
  A526 d = s; d.p = rt_alloc(sizeof(P523) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A526(A526 a, A526 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R524(R524 *d, R524 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R524 cp_R524(R524 s) {
  R524 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R524(R524 a, R524 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_553);
  RT_ROOT(g_ntoks_554);
  RT_ROOT(g_tpos_555);
  RT_ROOT(g_src_line_556);
  RT_ROOT(g_table_557);
  RT_ROOT(g_genv_558);
  RT_ROOT(g_all_insts_559);
  RT_ROOT(g_depth_560);
  RT_ROOT(g_scope_stack_561);
  RT_ROOT(g_all_types_562);
  RT_ROOT(g_serial_563);
  RT_ROOT(g_out_types_564);
  RT_ROOT(g_out_helpers_565);
  RT_ROOT(g_out_protos_566);
  RT_ROOT(g_out_globals_567);
  RT_ROOT(g_out_funcs_568);
  RT_ROOT(g_out_init_569);
  RT_ROOT(g_out_excs_570);
  RT_ROOT(g_code_571);
  RT_ROOT(g_fields_buf_572);
  RT_ROOT(g_in_func_573);
  RT_ROOT(g_cur_level_574);
  RT_ROOT(g_fctx_575);
  RT_ROOT(g_caps_576);
  RT_ROOT(g_cap_waits_577);
  RT_ROOT(g_psub_578);
  RT_ROOT(g_st_field_579);
  RT_ROOT(g_out_frames_580);
  RT_ROOT(g_out_roots_581);
  RT_ROOT(g_uses_free_582);
  RT_ROOT(g_fins_583);
  RT_ROOT(g_uses_findyn_584);
  RT_ROOT(g_func_sym_585);
  RT_ROOT(g_exits_586);
  RT_ROOT(g_frames_587);
  RT_ROOT(g_handlers_588);
  RT_ROOT(g_cleanups_589);
  RT_ROOT(g_trial_590);
  RT_ROOT(g_mcopies_591);
  RT_ROOT(g_ty_int_592);
  RT_ROOT(g_ty_bool_593);
  RT_ROOT(g_ty_float_594);
  RT_ROOT(g_ty_ascii_595);
  RT_ROOT(g_ty_string_596);
  RT_ROOT(g_ty_void_597);
  RT_ROOT(g_ty_file_598);
  RT_ROOT(g_ty_nil_599);
  RT_ROOT(g_ty_lock_600);
  RT_ROOT(g_ty_latch_601);
  RT_ROOT(g_ty_act_602);
  RT_ROOT(g_no_cons_603);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_553 = NULL;
g_ntoks_554 = ((rt_int)0LL);
g_tpos_555 = ((rt_int)1LL);
g_src_line_556 = ((rt_int)0LL);
g_table_557 = NULL;
g_genv_558 = NULL;
g_all_insts_559 = NULL;
g_depth_560 = ((rt_int)0LL);
g_scope_stack_561 = NULL;
g_all_types_562 = NULL;
g_serial_563 = ((rt_int)0LL);
g_out_types_564 = NULL;
g_out_helpers_565 = NULL;
g_out_protos_566 = NULL;
g_out_globals_567 = NULL;
g_out_funcs_568 = NULL;
g_out_init_569 = NULL;
g_out_excs_570 = NULL;
g_code_571 = NULL;
g_fields_buf_572 = NULL;
g_in_func_573 = 0;
g_cur_level_574 = ((rt_int)0LL);
g_fctx_575 = NULL;
g_caps_576 = NULL;
g_cap_waits_577 = NULL;
g_psub_578 = NULL;
g_st_field_579 = NULL;
g_out_frames_580 = NULL;
g_out_roots_581 = NULL;
g_uses_free_582 = 0;
g_fins_583 = NULL;
g_uses_findyn_584 = 0;
g_func_sym_585 = NULL;
g_exits_586 = NULL;
g_frames_587 = ((rt_int)0LL);
g_handlers_588 = NULL;
g_cleanups_589 = NULL;
g_trial_590 = ((rt_int)0LL);
g_mcopies_591 = NULL;
g_ty_int_592 = NULL;
g_ty_bool_593 = NULL;
g_ty_float_594 = NULL;
g_ty_ascii_595 = NULL;
g_ty_string_596 = NULL;
g_ty_void_597 = NULL;
g_ty_file_598 = NULL;
g_ty_nil_599 = NULL;
g_ty_lock_600 = NULL;
g_ty_latch_601 = NULL;
g_ty_act_602 = NULL;
g_no_cons_603 = NULL;
{ A526 *cell1502 = rt_alloc(sizeof(A526));
rt_int pv1503 = ((rt_int)1000000LL);
(*cell1502).lo = ((rt_int)1LL); (*cell1502).hi = pv1503; (*cell1502).lo2 = 1; (*cell1502).hi2 = 1;
(*cell1502).p = rt_alloc(sizeof(P523) * (size_t)RT_CNT((*cell1502)));
for (rt_int i1504 = 0; i1504 < RT_CNT((*cell1502)); i1504++) {
(*cell1502).p[i1504] = NULL;
}
g_toks_553 = cell1502;
}
{ A540 *cell1505 = rt_alloc(sizeof(A540));
rt_int pv1506 = ((rt_int)4093LL);
(*cell1505).lo = ((rt_int)0LL); (*cell1505).hi = pv1506; (*cell1505).lo2 = 1; (*cell1505).hi2 = 1;
(*cell1505).p = rt_alloc(sizeof(P535) * (size_t)RT_CNT((*cell1505)));
for (rt_int i1507 = 0; i1507 < RT_CNT((*cell1505)); i1507++) {
(*cell1505).p[i1507] = NULL;
}
g_table_557 = cell1505;
}
g_out_types_564 = f_new_buffer_24();
g_out_helpers_565 = f_new_buffer_24();
g_out_protos_566 = f_new_buffer_24();
g_out_globals_567 = f_new_buffer_24();
g_out_funcs_568 = f_new_buffer_24();
g_out_init_569 = f_new_buffer_24();
g_out_excs_570 = f_new_buffer_24();
g_out_frames_580 = f_new_buffer_24();
g_out_roots_581 = f_new_buffer_24();
g_code_571 = g_out_init_569;
g_no_cons_603 = f_new_cons_158();
g_ty_int_592 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_593 = f_new_typ_157(((rt_int)2LL));
g_ty_float_594 = f_new_typ_157(((rt_int)3LL));
g_ty_string_596 = f_new_typ_157(((rt_int)5LL));
g_ty_void_597 = f_new_typ_157(((rt_int)9LL));
g_ty_file_598 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_599 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_600 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_601 = f_new_typ_157(((rt_int)13LL));
g_ty_act_602 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1508;
if (RT_TRY(xf1508)) {
f_init_ascii_182();
f_read_source_45();
f_translate_520(f_program_136());
f_print_program_521();
RT_POP(xf1508);
} else {
RT_POP(xf1508);
int x1509 = rt_xcur;
if (0 || x1509 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1509);
}
}
}
  rt_main_done();
  return 0;
}
