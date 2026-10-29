#include "paleo.h"
#include <math.h>
typedef rstr *P513;
typedef struct R515 R515;
typedef struct R515 *P514;
struct R515 {  rt_int kind; rt_int line; rt_int ival; P513 s;  };
typedef struct A517 A517;
struct A517 { rt_int lo, hi, lo2, hi2; P514 *p; };
typedef A517 *P516;
typedef struct R519 R519;
typedef struct R519 *P518;
struct R519 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P513 name; P513 tag; P518 a; P518 b; P518 c; P518 d; P518 e; P518 next;  };
typedef struct R521 R521;
typedef struct R521 *P520;
struct R521 {  P513 lo; P513 hi; P513 lo2; P513 hi2; P513 slen; rt_int mlo; rt_int mhi; int hasm; P518 args;  };
typedef struct R523 R523;
typedef struct R523 *P522;
typedef struct R525 R525;
typedef struct R525 *P524;
struct R525 {  P513 name; P522 t; P520 c; P518 st; P524 next;  };
typedef struct R527 R527;
typedef struct R527 *P526;
typedef struct R529 R529;
typedef struct R529 *P528;
struct R529 {  P513 name; rt_int mode; P522 t; P520 c; P513 cfield; P528 next;  };
typedef struct A531 A531;
struct A531 { rt_int lo, hi, lo2, hi2; P526 *p; };
typedef A531 *P530;
struct R527 {  rt_int kind; P513 name; P522 t; P520 c; P513 access; P513 cname; int ro_flag; rt_int mvalue; int hasmv; P518 st; P518 decl; P528 params; P522 result; rt_int depth; rt_int level; int byref; P526 members; P526 mnext; P518 binds; P526 insts; P530 env; P526 chain; P526 stack;  };
struct R523 {  rt_int kind; P513 name; P518 lits; P522 elem; P522 idx; P522 idx2; P520 elemcons; P518 elemst; P522 under; P518 tparams; P518 ocap; P524 fields; P522 target; P518 decl; P513 cname; int forward; int defined; int helpers; P526 initp; P526 tpsyms; P526 gen; P526 gbinds; P522 next;  };
typedef struct R533 R533;
typedef struct R533 *P532;
struct R533 {  P513 s; P532 next;  };
typedef struct R535 R535;
typedef struct R535 *P534;
struct R535 {  P532 head; P532 tail;  };
typedef struct R537 R537;
typedef struct R537 *P536;
struct R537 {  P513 match; P513 label; rt_int depth; P536 next;  };
typedef struct R539 R539;
typedef struct R539 *P538;
struct R539 {  P518 d; P538 next;  };
typedef struct R541 R541;
typedef struct R541 *P540;
struct R541 {  P518 d; P513 w; P540 next;  };
typedef struct R543 R543;
typedef struct R543 *P542;
struct R543 {  rt_int depth; P518 imps; int all_imp; P542 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P513 result_;
 P513 t_591;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_594;
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
 rstr letters_595;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_596;
 rstr r_597;
 rt_int i_598;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_602;
 rstr kw_603;
 rstr w_604;
 rt_int i_605;
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
 P534 result_;
 P534 b_609;
};
struct f_put_27fr { int dummy;
 P534 b_25;
 rstr *s_26;
 P532 l_611;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P534 b_30;
 P532 l_613;
};
struct f_splice_34fr { int dummy;
 P534 a_32;
 P534 b_33;
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
 P514 t_615;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_617;
 rt_int j_618;
 rt_int n_619;
 int c_620;
 rstr w_621;
 rt_int k_622;
 rstr w_626;
 rt_int k_627;
 rstr two_631;
};
struct f_read_source_45fr { int dummy;
 rstr line_632;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P518 result_;
 P518 x_633;
};
struct f_append_52fr { int dummy;
 P518 *head_49;
 P518 *tail_50;
 P518 x_51;
};
struct f_list_len_54fr { int dummy;
 P518 l_53;
 rt_int result_;
 rt_int n_635;
 P518 p_636;
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
 P513 result_;
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
 P513 result_;
};
struct f_name_node_77fr { int dummy;
 P518 result_;
 P518 x_637;
};
struct f_id_list_78fr { int dummy;
 P518 result_;
 P518 head_638;
 P518 tail_639;
};
struct f_p_subtype_79fr { int dummy;
 P518 result_;
 rt_int line_640;
 P518 x_641;
 rstr w_642;
 P518 head_643;
 P518 tail_644;
 P518 head_645;
 P518 tail_646;
 int more_647;
 P518 names_648;
 P518 st_649;
 P518 cmp_650;
 P518 head_651;
 P518 tail_652;
 int more_653;
 P518 lit_654;
};
struct f_actual_params_80fr { int dummy;
 P518 result_;
 P518 head_655;
 P518 tail_656;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P518 result_;
 P518 head_657;
 P518 tail_658;
 int more_659;
};
struct f_binop_88fr { int dummy;
 P513 op_84;
 P518 l_85;
 P518 r_86;
 rt_int line_87;
 P518 result_;
 P518 x_660;
};
struct f_expr_89fr { int dummy;
 P518 result_;
 P518 l_661;
 P513 op_662;
 rt_int line_663;
};
struct f_expr_and_90fr { int dummy;
 P518 result_;
 P518 l_664;
 rt_int line_665;
};
struct f_expr_not_91fr { int dummy;
 P518 result_;
 P518 x_666;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P518 result_;
 P518 l_667;
 P513 op_668;
 rt_int line_669;
};
struct f_expr_add_95fr { int dummy;
 P518 result_;
 P518 l_670;
 P513 op_671;
 rt_int line_672;
};
struct f_expr_mul_96fr { int dummy;
 P518 result_;
 P518 l_673;
 P513 op_674;
 rt_int line_675;
};
struct f_expr_pow_97fr { int dummy;
 P518 result_;
 P518 l_676;
 rt_int line_677;
};
struct f_expr_prefix_98fr { int dummy;
 P518 result_;
 P518 x_678;
};
struct f_postfix_99fr { int dummy;
 P518 result_;
 P518 p_679;
 rt_int line_680;
 P518 x_681;
 P518 head_682;
 P518 tail_683;
 int more_684;
 P518 lo_685;
 P518 r_686;
 P518 x_687;
 P518 x_688;
 P518 x_689;
};
struct f_primary_100fr { int dummy;
 P518 result_;
 rt_int line_690;
 P518 x_691;
 rt_int k_692;
 rstr w_693;
 P518 head_694;
 P518 tail_695;
 int more_696;
};
struct f_constructor_item_101fr { int dummy;
 P518 result_;
 rt_int line_697;
 P518 it_698;
 P518 first_699;
 P518 keys_700;
 P518 ktail_701;
 P518 lab_702;
 rt_int save_703;
 P518 more_704;
 P518 tail2_705;
 int ok_706;
 int go_707;
 P518 l2_708;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P518 result_;
 P518 head_709;
 P518 tail_710;
};
struct f_body_element_104fr { int dummy;
 P518 result_;
 P518 x_711;
};
struct f_declaration_105fr { int dummy;
 P518 result_;
 rt_int line_712;
 P518 head_713;
 P518 tail_714;
 P518 names_715;
 P518 x_716;
};
struct f_object_decl_106fr { int dummy;
 P518 result_;
 rt_int line_717;
 int is_var_718;
 P518 names_719;
 P518 st_720;
 P518 init_721;
 P518 loc_722;
 rt_int loc_kind_723;
 P518 head_724;
 P518 tail_725;
 P518 x_726;
};
struct f_abbrev_decl_107fr { int dummy;
 P518 result_;
 P518 x_727;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_728;
};
struct f_type_decl_109fr { int dummy;
 P518 result_;
 rt_int line_729;
 P513 name_730;
 P518 params_731;
 P518 x_732;
 P518 tts_733;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P518 result_;
 P518 head_734;
 P518 tail_735;
 int more_736;
 rt_int mode_737;
 P518 names_738;
 P518 ntail_739;
 P518 st_740;
 P518 p_741;
};
struct f_imports_list_114fr { int dummy;
 P518 owner_113;
 int result_;
 P518 head_742;
 P518 tail_743;
 int more_744;
 int ro_745;
 P518 x_746;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P513 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P518 result_;
 rt_int line_747;
 P518 x_748;
 int is_abn_749;
 int is_func_750;
 int dummy_751;
};
struct f_capsule_decl_119fr { int dummy;
 P518 result_;
 P518 x_752;
 int dummy_753;
 P518 head_754;
 P518 tail_755;
 int more_756;
 P518 n_757;
};
struct f_formal_tt_120fr { int dummy;
 P518 result_;
 P518 head_758;
 P518 tail_759;
 int more_760;
};
struct f_generic_decl_121fr { int dummy;
 P518 result_;
 P518 x_761;
 P518 head_762;
 P518 tail_763;
 int more_764;
 P518 names_765;
 rt_int kind_766;
 P518 st_767;
 P518 p_768;
 P513 nm_769;
 P518 st_770;
};
struct f_task_decl_122fr { int dummy;
 P518 result_;
 P518 x_771;
 int dummy_772;
};
struct f_expose_decl_123fr { int dummy;
 P518 result_;
 P518 x_773;
 P518 head_774;
 P518 tail_775;
 int more_776;
 P518 n_777;
 P518 head_778;
 P518 tail_779;
 int more_780;
 P518 n_781;
 P518 tgt_782;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P518 result_;
 P518 labels_783;
 P518 ltail_784;
 P513 match_785;
 P518 s_786;
};
struct f_unlabeled_statement_127fr { int dummy;
 P518 result_;
 rt_int line_787;
 P518 x_788;
 P518 head_789;
 P518 tail_790;
 P518 invs_791;
 P518 itail_792;
 int more_793;
 P518 target_794;
};
struct f_arm_131fr { int dummy;
 P518 cond_128;
 P518 b_129;
 rt_int line_130;
 P518 result_;
 P518 x_795;
};
struct f_if_stmt_132fr { int dummy;
 P518 result_;
 P518 x_796;
 P518 head_797;
 P518 tail_798;
 P518 cond_799;
 int go_800;
};
struct f_case_stmt_133fr { int dummy;
 P518 result_;
 P518 x_801;
 P518 head_802;
 P518 tail_803;
 P518 labs_804;
 P518 ltail_805;
 int more_806;
 P518 l_807;
};
struct f_repeat_stmt_134fr { int dummy;
 P518 result_;
 P518 x_808;
};
struct f_guard_stmt_135fr { int dummy;
 P518 result_;
 P518 x_809;
 P518 head_810;
 P518 tail_811;
 P518 h_812;
};
struct f_program_136fr { int dummy;
 P518 result_;
 P518 head_813;
 P518 tail_814;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_815;
 rt_int i_816;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P526 result_;
 P526 y_820;
};
struct f_lookup_decl_142fr { int dummy;
 P518 d_141;
 P526 result_;
 P526 y_821;
};
struct f_define_145fr { int dummy;
 P526 y_143;
 rt_int line_144;
 rt_int h_822;
 P526 z_823;
};
struct f_overloadable_147fr { int dummy;
 P526 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P528 a_148;
 P528 b_149;
 int result_;
 P528 x_824;
 P528 y_825;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P513 name_154;
 P526 result_;
 P526 y_826;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P522 result_;
 P522 t_828;
};
struct f_new_cons_158fr { int dummy;
 P520 result_;
 P520 c_830;
};
struct f_same_lits_161fr { int dummy;
 P518 a_159;
 P518 b_160;
 int result_;
 P518 x_832;
 P518 y_833;
};
struct f_same_164fr { int dummy;
 P522 a_162;
 P522 b_163;
 int result_;
 P524 f_834;
 P524 g_835;
};
struct f_base_of_166fr { int dummy;
 P522 t_165;
 P522 result_;
};
struct f_base_cons_169fr { int dummy;
 P522 t_167;
 P520 c_168;
 P520 result_;
};
struct f_kind_name_171fr { int dummy;
 P522 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P522 got_172;
 P522 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P522 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P522 t_178;
 rstr result_;
 P524 f_838;
 P513 s_839;
};
struct f_declare_ctype_181fr { int dummy;
 P522 t_180;
 P522 u_840;
 P522 target_841;
 P518 p_842;
 P513 fs_843;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_844;
 P518 head_845;
 P518 tail_846;
 rt_int start_847;
 rt_int i_848;
 P518 lit_852;
};
struct f_lit_index_185fr { int dummy;
 P518 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_853;
 P518 l_854;
};
struct f_resolve_subtype_188fr { int dummy;
 P518 st_186;
 P520 *c_187;
 P520 c_187v;
 P522 result_;
 P522 t_855;
 int ok_856;
 P522 dummy_857;
 P520 ic_859;
 P520 ic2_860;
 P520 ec_861;
 P522 it_862;
 P522 et_863;
 P520 ec_864;
 P518 comp_865;
 P524 tail_866;
 P520 cc_867;
 P524 f_868;
 P518 gt_870;
 P520 ec_871;
 P526 y_872;
};
struct f_opened_190fr { int dummy;
 P522 t_189;
 int result_;
 P538 c_873;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_874;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P532 l_875;
 P513 r_876;
};
struct f_new_type_200fr { int dummy;
 P526 y_197;
 P518 st_198;
 P520 *c_199;
 P520 c_199v;
 P522 result_;
 P518 d_877;
 P518 p_878;
 P520 uc_879;
 P526 z_880;
 P520 zc_881;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P522 t_202;
 P520 c_203;
};
struct f_init_call_207fr { int dummy;
 P526 y_205;
 rstr *lval_206;
 rstr result_;
 P513 link_882;
 rt_int i_883;
};
struct f_tparam_type_210fr { int dummy;
 P522 t_208;
 rstr *name_209;
 P522 result_;
 P526 z_887;
};
struct f_make_storage_214fr { int dummy;
 rstr *lval_211;
 P522 t_212;
 P520 c_213;
 P518 p_888;
 P518 a_889;
 P520 uc_890;
 P522 ut_891;
 P522 at_892;
 P522 pt_893;
 rstr v_894;
 P532 saved_895;
 P532 l1_896;
 P532 l2_897;
 rstr i_900;
 P524 f_901;
};
struct f_manifest_217fr { int dummy;
 P518 e_215;
 int *ok_216;
 int ok_216v;
 rt_int result_;
 rt_int a_902;
 rt_int b_903;
 int ok2_904;
 P526 y_905;
};
struct f_mcopy_219fr { int dummy;
 P522 t_218;
 rstr result_;
 rstr ct_906;
 rstr name_907;
 P532 l_908;
};
struct f_composite_221fr { int dummy;
 P522 t_220;
 int result_;
};
struct f_assign_code_226fr { int dummy;
 rstr *lval_222;
 P522 t_223;
 rstr *v_224;
 P520 c_225;
 rstr result_;
};
struct f_copy_code_229fr { int dummy;
 P522 t_227;
 rstr *v_228;
 rstr result_;
};
struct f_eq_code_233fr { int dummy;
 P522 t_230;
 rstr *a_231;
 rstr *b_232;
 rstr result_;
};
struct f_elem_assign_237fr { int dummy;
 rstr *lval_234;
 P522 t_235;
 rstr *v_236;
 rstr result_;
};
struct f_seen_name_240fr { int dummy;
 P532 l_238;
 rstr *s_239;
 int result_;
 P532 p_910;
};
struct f_emit_helpers_241fr { int dummy;
 P522 order_911;
 P522 t_912;
 P532 done_913;
 P532 l_914;
 rstr c_915;
};
struct f_helper_bodies_243fr { int dummy;
 P522 t_242;
 rstr c_917;
 P534 b_918;
 P522 e_919;
 P518 p_920;
 P513 pc_921;
 P524 f_922;
 P513 conds_923;
 rstr fn_924;
 rstr fn_925;
};
struct f_declare_body_245fr { int dummy;
 P518 elems_244;
 P518 e_926;
 P526 y_927;
 P526 y_928;
 P526 y_929;
 P522 t_930;
 P526 y_931;
 P526 g_932;
 P530 snap_933;
 rt_int i_937;
 P526 g_941;
 P526 y_942;
};
struct f_manifest_const_247fr { int dummy;
 P518 d_246;
 int ok_943;
 rt_int v_944;
 P526 y_945;
 P520 c_946;
};
struct f_exported_251fr { int dummy;
 P518 d_248;
 rstr *name_249;
 int *ro_250;
 int ro_250v;
 int result_;
 P518 p_947;
};
struct f_copy_sym_253fr { int dummy;
 P526 y_252;
 P526 result_;
 P526 z_948;
};
struct f_gen_capsule_255fr { int dummy;
 P518 d_254;
 P526 y_950;
};
struct f_capsule_params_259fr { int dummy;
 P518 d_256;
 P518 args_257;
 rt_int line_258;
 P518 p_951;
 P518 a_952;
 P522 t_953;
 P522 vt_954;
 P520 c_955;
 P513 lv_956;
 P520 lc_957;
 int ro_958;
 P526 y_959;
 rstr f_960;
 rstr g_961;
 P526 y_962;
 rstr v_963;
 rstr access_964;
};
struct f_elaborate_capsule_264fr { int dummy;
 P518 d_260;
 P526 y_261;
 P518 args_262;
 P518 owner_263;
 P538 cr_965;
 P542 ctx_966;
 P526 m_967;
 P518 p_968;
 int ro_969;
 P540 w_972;
 P526 z_974;
};
struct f_exports_op_267fr { int dummy;
 P518 d_265;
 rstr *op_266;
 int result_;
 P518 p_975;
};
struct f_renamed_270fr { int dummy;
 P518 d_268;
 P526 z_269;
 P513 result_;
 P518 r_976;
};
struct f_gen_expose_272fr { int dummy;
 P518 d_271;
 P526 y_977;
 P526 m_978;
 P518 p_979;
 P518 r_980;
 P526 inst_981;
 int found_982;
 P526 z_983;
 int found_984;
 P526 z_985;
};
struct f_finish_ptr_274fr { int dummy;
 P522 t_273;
 P518 d_986;
 P518 p_987;
 P520 c_988;
 rstr dummy_989;
 P526 y_990;
};
struct f_declare_subprogram_276fr { int dummy;
 P518 d_275;
};
struct f_build_subprogram_278fr { int dummy;
 P518 d_277;
 P526 result_;
 P526 y_991;
 P518 p_992;
 P528 tail_993;
 P528 pm_994;
 P520 rc_996;
};
struct f_element_280fr { int dummy;
 P518 e_279;
 rt_int k_997;
 P522 t_998;
 rstr c_999;
};
struct f_storage_283fr { int dummy;
 rstr *name_281;
 P522 t_282;
 rstr result_;
 rstr g_1000;
 rstr f_1001;
};
struct f_bind_286fr { int dummy;
 P526 y_284;
 rstr *access_285;
};
struct f_var_decl_288fr { int dummy;
 P518 d_287;
 P520 c_1002;
 P522 t_1003;
 P526 y_1004;
 rstr access_1005;
 P522 it_1006;
 rstr n_1007;
 P522 vt_1008;
 rstr v_1009;
};
struct f_const_decl_290fr { int dummy;
 P518 d_289;
 P520 c_1010;
 P522 t_1011;
 P522 vt_1012;
 P526 y_1013;
 int ok_1014;
 rstr v_1015;
 rstr access_1016;
};
struct f_subprogram_292fr { int dummy;
 P518 d_291;
};
struct f_gen_subprogram_295fr { int dummy;
 P518 d_293;
 P526 y_294;
 P534 saved_code_1017;
 P534 saved_fields_1018;
 int saved_in_1019;
 P526 saved_sym_1020;
 P536 saved_exits_1021;
 rt_int saved_frames_1022;
 P513 args_1023;
 P528 pm_1024;
 P532 saved_handlers_1025;
 P532 saved_cleanups_1026;
 P542 ctx_1027;
 P513 head_1028;
 P513 frame_1029;
 P513 parent_1030;
 P513 copy_back_1031;
 rstr ct_1033;
 rstr f_1034;
 P526 p_1035;
};
struct f_waits_of_297fr { int dummy;
 P518 d_296;
 rstr result_;
 P540 w_1036;
};
struct f_task_waits_299fr { int dummy;
 P518 elems_298;
 rstr result_;
 P518 e_1037;
 P513 r_1038;
};
struct f_await_tasks_301fr { int dummy;
 P518 elems_300;
 rstr w_1039;
};
struct f_capsule_elements_303fr { int dummy;
 P518 elems_302;
 P518 e_1040;
};
struct f_body_elements_305fr { int dummy;
 P518 elems_304;
};
struct f_gen_body_307fr { int dummy;
 P518 elems_306;
};
struct f_pop_frames_309fr { int dummy;
 rt_int upto_308;
 rt_int i_1041;
 P532 c_1042;
};
struct f_push_cleanup_311fr { int dummy;
 rstr *s_310;
 P532 c_1043;
};
struct f_pop_cleanup_312fr { int dummy;
};
struct f_gen_statement_314fr { int dummy;
 P518 s_313;
 P513 label_1045;
 P536 x_1046;
};
struct f_st_assign_316fr { int dummy;
 P518 s_315;
 P513 lv_1049;
 P522 t_1050;
 P522 vt_1051;
 P520 c_1052;
 int ro_1053;
 rstr lo_1054;
 rstr hi_1055;
 rstr v_1056;
 rstr v_1057;
};
struct f_st_call_318fr { int dummy;
 P518 s_317;
 P518 c_1058;
 P522 t_1059;
 P518 x_1060;
};
struct f_st_if_320fr { int dummy;
 P518 s_319;
 P518 a_1061;
 int first_1062;
 P522 t_1063;
 rstr c_1064;
};
struct f_st_case_322fr { int dummy;
 P518 s_321;
 P522 st_1065;
 P522 vt_1066;
 int first_1067;
 P518 a_1068;
 rstr sel_1069;
 rstr tmp_1070;
 P518 lab_1071;
 P513 conds_1072;
 rstr v_1073;
 rstr lo_1074;
 rstr hi_1075;
};
struct f_st_repeat_324fr { int dummy;
 P518 s_323;
 P522 t_1076;
 P520 c_1077;
 rstr cond_1078;
 rstr access_1079;
 rstr lov_1080;
 rstr hiv_1081;
 rstr it_1082;
 P526 y_1083;
};
struct f_st_exit_326fr { int dummy;
 P518 s_325;
 P536 x_1084;
};
struct f_st_return_328fr { int dummy;
 P518 s_327;
 P522 vt_1085;
 rstr v_1086;
};
struct f_exc_id_331fr { int dummy;
 rstr *name_329;
 rt_int line_330;
 rstr result_;
 P526 y_1087;
};
struct f_st_guard_333fr { int dummy;
 P518 s_332;
 P518 h_1088;
 int first_1089;
 P532 hv_1090;
 rstr f_1091;
 rstr x_1092;
 P518 n_1094;
 P513 conds_1095;
};
struct f_st_alloc_335fr { int dummy;
 P518 s_334;
 P513 lv_1096;
 P522 t_1097;
 P522 target_1098;
 P522 vt_1099;
 P520 c_1100;
 P520 tc_1101;
 int ro_1102;
 P518 d_1103;
 P518 p_1104;
 P518 a_1105;
 rstr tcn_1106;
 rstr cell_1107;
 rstr v_1108;
 rstr pv_1109;
 P526 y_1110;
 rstr v_1111;
};
struct f_act_ref_337fr { int dummy;
 P518 e_336;
 rstr result_;
 P513 lv_1112;
 P522 t_1113;
 P520 c_1114;
 int ro_1115;
 rstr v_1116;
};
struct f_st_create_339fr { int dummy;
 P518 s_338;
 P526 y_1117;
 P528 pm_1118;
 P518 a_1119;
 P513 lv_1120;
 P522 lt_1121;
 P522 vt_1122;
 P520 lc_1123;
 int ro_1124;
 P522 at_1125;
 P520 ac_1126;
 int aro_1127;
 P513 act_1128;
 rstr nf_1129;
 P513 link_1130;
 rt_int i_1131;
 rstr v_1135;
};
struct f_hidden_var_343fr { int dummy;
 rstr *name_340;
 P522 t_341;
 rstr *place_342;
 P526 y_1136;
};
struct f_user_create_349fr { int dummy;
 P518 s_344;
 P526 y_345;
 rstr *uv_346;
 P522 ut_347;
 rstr *nf_348;
 P522 t_1137;
 P534 saved_1138;
 P534 hook_1139;
 P518 un_1140;
 rstr hn_1141;
 rstr aa_1142;
 rstr uname_1143;
 rstr aname_1144;
 P518 start_1145;
 P518 an_1146;
};
struct f_wait_alt_354fr { int dummy;
 P518 inv_350;
 rstr *arr_351;
 rt_int i_352;
 int mixed_353;
 rstr result_;
 P513 lv_1147;
 P522 t_1148;
 P522 vt_1149;
 P520 c_1150;
 int ro_1151;
 P518 fn_1152;
 P518 args_1153;
 rstr slot_1154;
 P513 dv_1155;
 P522 dt_1156;
 rstr tmp_1157;
 rstr v_1158;
 rstr v_1159;
};
struct f_builtin_wait_356fr { int dummy;
 P518 inv_355;
 int result_;
 P513 lv_1160;
 P522 t_1161;
 P520 c_1162;
 int ro_1163;
 P534 saved_1164;
 int ok_1165;
};
struct f_wait_op_361fr { int dummy;
 P518 inv_357;
 rstr *op_358;
 rstr *q_359;
 int is_stmt_360;
 rstr result_;
 P518 x_1168;
 P518 f_1169;
 P518 qn_1170;
 P522 t_1171;
 rstr r_1172;
};
struct f_user_wait_366fr { int dummy;
 P518 s_362;
 rstr *arr_363;
 rstr *w_364;
 rt_int n_365;
 P518 a_1173;
 rt_int i_1174;
 P513 tests_1175;
 P513 revokes_1176;
 P518 inv_1177;
 P518 st_1178;
 P520 c_1179;
 P522 qt_1180;
 rstr qname_1181;
 P526 y_1182;
 rstr access_1183;
};
struct f_st_wait_368fr { int dummy;
 P518 s_367;
 P518 a_1184;
 rt_int n_1185;
 int first_1186;
 P534 inits_1187;
 int user_1188;
 rstr arr_1189;
 rstr w_1190;
 P518 inv_1191;
 P518 inv_1192;
 P513 conds_1193;
 rt_int i_1194;
};
struct f_call_node_372fr { int dummy;
 rstr *name_369;
 P518 arg_370;
 rt_int line_371;
 P518 result_;
 P518 x_1198;
 P518 f_1199;
};
struct f_user_region_374fr { int dummy;
 P518 s_373;
 P522 t_1200;
 rstr f_1201;
 rstr lock_1202;
 rstr unlock_1203;
};
struct f_st_region_376fr { int dummy;
 P518 s_375;
 P513 lv_1204;
 P522 t_1205;
 P520 c_1206;
 int ro_1207;
 rstr lk_1208;
 rstr f_1209;
};
struct f_gparam_379fr { int dummy;
 P518 g_377;
 rstr *name_378;
 P518 result_;
 P518 p_1210;
};
struct f_bind_sym_381fr { int dummy;
 P518 p_380;
 P526 result_;
 P526 y_1211;
};
struct f_same_binds_384fr { int dummy;
 P526 a_382;
 P526 b_383;
 int result_;
 P526 x_1212;
 P526 y_1213;
};
struct f_same_binding_387fr { int dummy;
 P526 a_385;
 P526 b_386;
 int result_;
};
struct f_tt_binds_392fr { int dummy;
 P518 gd_388;
 P518 formals_389;
 P518 actuals_390;
 rt_int line_391;
 P526 result_;
 P518 f_1214;
 P518 a_1215;
 P526 binds_1216;
 P520 c_1217;
 P522 at_1218;
 P518 p_1219;
 P526 b_1220;
 P518 st_1221;
 int ok_1222;
};
struct f_generic_use_394fr { int dummy;
 P518 st_393;
 int result_;
};
struct f_infer_from_399fr { int dummy;
 P518 gd_395;
 P518 pat_396;
 P522 t_397;
 P526 known_398;
 P526 result_;
 P526 binds_1223;
 P518 e_1224;
 P518 tp_1225;
 P513 nm_1226;
 P526 q_1227;
 int have_1228;
 P526 g_1229;
 P526 b_1230;
};
struct f_instantiate_type_405fr { int dummy;
 P526 g_400;
 P518 tt_401;
 P518 args_402;
 P520 *c_403;
 P520 c_403v;
 rt_int line_404;
 P522 result_;
 P518 gd_1231;
 P518 pat_1232;
 P526 binds_1233;
 P526 inst_1234;
 P522 t_1235;
 P538 saved_caps_1236;
 P530 saved_env_1237;
 P526 b_1238;
 P526 y_1239;
 P520 yc_1240;
};
struct f_instantiate_410fr { int dummy;
 P526 g_406;
 P518 tt_407;
 P518 args_408;
 rt_int line_409;
 P526 result_;
 P518 gd_1242;
 P518 pat_1243;
 P526 binds_1244;
 P518 f_1245;
 P518 a_1246;
 P518 fp_1247;
 P526 inst_1248;
 P522 at_1249;
 P520 c_1250;
 P542 saved_fctx_1251;
 int saved_in_1252;
 rt_int saved_level_1253;
 P526 saved_sym_1254;
 P534 saved_code_1255;
 P530 saved_env_1256;
 rstr v_1257;
 int known_1258;
 P526 q_1259;
 P526 b_1260;
 rstr v_1261;
 P526 b_1262;
};
struct f_access_of_412fr { int dummy;
 P526 y_411;
 rstr result_;
 P513 p_1263;
 rt_int i_1264;
};
struct f_import_of_415fr { int dummy;
 P518 l_413;
 rstr *name_414;
 P518 result_;
 P518 p_1268;
};
struct f_check_import_418fr { int dummy;
 P526 y_416;
 rt_int line_417;
 int result_;
 P542 c_1269;
 int ro_1270;
 P518 imp_1271;
};
struct f_c_ident_420fr { int dummy;
 rstr *s_419;
 rstr result_;
};
struct f_deref_423fr { int dummy;
 rstr *base_421;
 P522 t_422;
 rstr result_;
};
struct f_is_lvalue_425fr { int dummy;
 P518 e_424;
 int result_;
 P526 y_1272;
};
struct f_lvalue_431fr { int dummy;
 P518 e_426;
 P513 *code_427;
 P513 code_427v;
 P522 *t_428;
 P522 t_428v;
 P520 *c_429;
 P520 c_429v;
 int *ro_430;
 int ro_430v;
 P513 base_1273;
 P522 bt_1274;
 P520 bc_1275;
 P526 y_1276;
};
struct f_select_on_439fr { int dummy;
 rstr *base_432;
 P522 bt_433;
 P518 e_434;
 int *ro_435;
 P513 *code_436;
 P513 code_436v;
 P522 *t_437;
 P522 t_437v;
 P520 *c_438;
 P520 c_438v;
 P518 p_1277;
 P524 f_1278;
};
struct f_index_on_448fr { int dummy;
 rstr *base_440;
 P522 bt_441;
 P518 e_442;
 int *ro_443;
 int lv_444;
 P513 *code_445;
 P513 code_445v;
 P522 *t_446;
 P522 t_446v;
 P520 *c_447;
 P520 c_447v;
 P518 a_1279;
 P522 it_1280;
 rstr i_1281;
 rstr j_1282;
 rstr lo_1283;
 rstr hi_1284;
 rstr i_1285;
 rstr i_1286;
};
struct f_own_attribute_450fr { int dummy;
 P518 e_449;
 int result_;
 P534 saved_1287;
 P522 bt_1288;
 int ok_1289;
 rstr base_1292;
 P518 p_1293;
};
struct f_gexpr_454fr { int dummy;
 P518 e_451;
 P522 want_452;
 P522 *t_453;
 P522 t_453v;
 rstr result_;
 rt_int k_1294;
 P513 code_1295;
 P520 c_1296;
 int ro_1297;
 P522 bt_1298;
 rt_int i_1299;
 P526 y_1300;
 int ro_1301;
 P518 call_1302;
 P518 fname_1303;
 rstr a_1304;
 rstr a_1305;
 rstr a_1306;
 P518 nm_1307;
 P526 y_1308;
 rstr base_1309;
 rstr base_1310;
};
struct f_copy_node_456fr { int dummy;
 P518 e_455;
 P518 result_;
 P518 x_1311;
};
struct f_wrap_apply_458fr { int dummy;
 P518 e_457;
 P518 result_;
 P518 x_1313;
};
struct f_c_string_460fr { int dummy;
 rstr *s_459;
 rstr result_;
 rt_int n_1314;
 rt_int i_1315;
 rstr r_1319;
 rt_int j_1320;
 rt_int i_1321;
};
struct f_enum_type_of_463fr { int dummy;
 rstr *lit_461;
 rt_int line_462;
 P522 result_;
 P526 y_1325;
 P520 c_1326;
 P518 st_1327;
};
struct f_attribute_466fr { int dummy;
 P518 e_464;
 P522 *t_465;
 P522 t_465v;
 rstr result_;
 P522 bt_1328;
 P520 c_1329;
 P513 base_1330;
 P526 y_1331;
 P518 st_1332;
};
struct f_gbinop_470fr { int dummy;
 P518 e_467;
 P522 want_468;
 P522 *t_469;
 P522 t_469v;
 rstr result_;
 P513 op_1333;
 P522 ta_1334;
 P522 tb_1335;
 P522 hint_1336;
 P526 uy_1337;
 P518 l_1338;
 P518 r_1339;
 P518 call_1340;
 P518 fname_1341;
 rstr s_1342;
 rstr a_1343;
 rstr a_1344;
 rstr b_1345;
 rstr a_1346;
 rstr b_1347;
 P522 wa_1348;
 P522 wb_1349;
 rstr a_1350;
 rstr b_1351;
 rstr dummy_1352;
 rstr a_1353;
 rstr b_1354;
 P522 ct_1355;
 rstr a_1356;
 rstr b_1357;
};
struct f_constructor_474fr { int dummy;
 P518 e_471;
 P522 want_472;
 P522 *t_473;
 P522 t_473v;
 rstr result_;
 P518 it_1358;
 P524 f_1359;
 P522 vt_1360;
 P513 s_1361;
 rstr v_1362;
 rstr tmp_1363;
 rstr ct_1364;
 rstr et_1365;
 P513 parts_1366;
 rstr lo_1367;
 rstr hi_1368;
 rstr v_1369;
 rt_int i_1370;
 rstr v_1374;
 rstr tmp_1375;
 P513 parts_1376;
 rstr v_1377;
};
struct f_fits_477fr { int dummy;
 P526 y_475;
 P518 args_476;
 int result_;
 P518 a_1378;
 P528 pm_1379;
 P522 t_1380;
 P534 saved_1381;
 int ok_1382;
 P513 lv_1383;
 P520 lc_1384;
 int ro_1385;
 rstr v_1388;
};
struct f_resolve_overload_482fr { int dummy;
 rstr *name_478;
 P518 args_479;
 int is_stmt_480;
 rt_int line_481;
 P526 result_;
 P526 y_1389;
 P526 first_1390;
 rt_int n_1391;
};
struct f_is_builtin_484fr { int dummy;
 rstr *n_483;
 int result_;
};
struct f_is_low_level_486fr { int dummy;
 rstr *n_485;
 int result_;
};
struct f_me_high_490fr { int dummy;
 P518 tt_487;
 rt_int line_488;
 P522 *t_489;
 P522 t_489v;
 rstr result_;
 P520 c_1392;
};
struct f_type_tag_492fr { int dummy;
 P522 t_491;
 rstr result_;
};
struct f_lock_ref_495fr { int dummy;
 P518 e_493;
 rstr *name_494;
 rstr result_;
 P513 lv_1393;
 P522 t_1394;
 P520 c_1395;
 int ro_1396;
};
struct f_user_op_498fr { int dummy;
 rstr *op_496;
 P518 args_497;
 P526 result_;
 P526 y_1397;
};
struct f_gcall_502fr { int dummy;
 P518 e_499;
 int is_stmt_500;
 P522 *t_501;
 P522 t_501v;
 rstr result_;
 P518 fn_1398;
 P518 tt_1399;
 P526 y_1400;
 P513 args_1401;
 P518 a_1402;
 P528 pm_1403;
 P522 lt_1404;
 P522 vt_1405;
 P513 lv_1406;
 P520 lc_1407;
 int ro_1408;
 P526 alt_1409;
 rt_int i_1410;
 rstr v_1414;
 rstr ct_1415;
 rstr v_1416;
};
struct f_builtin_509fr { int dummy;
 rstr *name_503;
 P518 tt_504;
 P518 args_505;
 rt_int line_506;
 int is_stmt_507;
 P522 *t_508;
 P522 t_508v;
 rstr result_;
 P522 at_1417;
 rt_int n_1418;
 rstr a_1419;
 rstr a_1420;
 rstr a_1421;
 rstr a_1422;
 rstr a_1423;
 rstr n1_1424;
 rstr m1_1425;
 rstr a_1426;
 rstr a_1427;
 P518 last_1428;
 rstr a_1429;
 rstr a_1430;
 P513 lv_1431;
 P520 lc_1432;
 int ro_1433;
 P518 last_1434;
 P513 lv_1435;
 P513 dv_1436;
 P520 lc_1437;
 int ro_1438;
 P522 mt_1439;
 P522 dt_1440;
 rstr v_1441;
 P513 lv_1442;
 P520 lc_1443;
 int ro_1444;
 P522 mt_1445;
 P513 lv_1446;
 P513 dv_1447;
 P513 bv_1448;
 P520 lc_1449;
 int ro_1450;
 P522 mt_1451;
 P522 dt_1452;
 P522 bt_1453;
 rstr v_1454;
 rstr v_1455;
 rstr v_1456;
 rstr v_1457;
 rstr a_1458;
 P513 bv_1459;
 P520 bc_1460;
 int ro_1461;
 P522 bt_1462;
 rstr l_1463;
 rstr dev_1464;
 rstr cmd_1465;
 P513 dv_1466;
 P520 dc_1467;
 int ro_1468;
 P522 dt_1469;
};
struct f_translate_511fr { int dummy;
 P518 units_510;
 P518 u_1470;
 P518 l_1472;
 rstr w_1473;
};
struct f_print_program_512fr { int dummy;
};
static void as_R543(R543 *d, R543 s);
static R543 cp_R543(R543 s);
static int eq_R543(R543 a, R543 b);
static void as_R541(R541 *d, R541 s);
static R541 cp_R541(R541 s);
static int eq_R541(R541 a, R541 b);
static void as_R539(R539 *d, R539 s);
static R539 cp_R539(R539 s);
static int eq_R539(R539 a, R539 b);
static void as_R537(R537 *d, R537 s);
static R537 cp_R537(R537 s);
static int eq_R537(R537 a, R537 b);
static void as_R535(R535 *d, R535 s);
static R535 cp_R535(R535 s);
static int eq_R535(R535 a, R535 b);
static void as_R533(R533 *d, R533 s);
static R533 cp_R533(R533 s);
static int eq_R533(R533 a, R533 b);
static void as_A531(A531 *d, A531 s);
static A531 cp_A531(A531 s);
static int eq_A531(A531 a, A531 b);
static void as_R529(R529 *d, R529 s);
static R529 cp_R529(R529 s);
static int eq_R529(R529 a, R529 b);
static void as_R527(R527 *d, R527 s);
static R527 cp_R527(R527 s);
static int eq_R527(R527 a, R527 b);
static void as_R525(R525 *d, R525 s);
static R525 cp_R525(R525 s);
static int eq_R525(R525 a, R525 b);
static void as_R523(R523 *d, R523 s);
static R523 cp_R523(R523 s);
static int eq_R523(R523 a, R523 b);
static void as_R521(R521 *d, R521 s);
static R521 cp_R521(R521 s);
static int eq_R521(R521 a, R521 b);
static void as_R519(R519 *d, R519 s);
static R519 cp_R519(R519 s);
static int eq_R519(R519 a, R519 b);
static void as_A517(A517 *d, A517 s);
static A517 cp_A517(A517 s);
static int eq_A517(A517 a, A517 b);
static void as_R515(R515 *d, R515 s);
static R515 cp_R515(R515 s);
static int eq_R515(R515 a, R515 b);
static P513 f_mk_3(rstr *s_2);
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
static P534 f_new_buffer_24(void);
static void f_put_27(P534 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P534 b_30);
static void f_splice_34(P534 a_32, P534 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P518 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P518 *head_49, P518 *tail_50, P518 x_51);
static rt_int f_list_len_54(P518 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P513 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P513 f_expect_id_76(void);
static P518 f_name_node_77(void);
static P518 f_id_list_78(void);
static P518 f_p_subtype_79(void);
static P518 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P518 f_actual_tt_83(void);
static P518 f_binop_88(P513 op_84, P518 l_85, P518 r_86, rt_int line_87);
static P518 f_expr_89(void);
static P518 f_expr_and_90(void);
static P518 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P518 f_expr_rel_94(void);
static P518 f_expr_add_95(void);
static P518 f_expr_mul_96(void);
static P518 f_expr_pow_97(void);
static P518 f_expr_prefix_98(void);
static P518 f_postfix_99(void);
static P518 f_primary_100(void);
static P518 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P518 f_body_103(void);
static P518 f_body_element_104(void);
static P518 f_declaration_105(void);
static P518 f_object_decl_106(void);
static P518 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P518 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P518 f_formal_params_112(void);
static int f_imports_list_114(P518 owner_113);
static int f_is_definable_116(rstr *w_115);
static P513 f_definable_name_117(void);
static P518 f_subprogram_decl_118(void);
static P518 f_capsule_decl_119(void);
static P518 f_formal_tt_120(void);
static P518 f_generic_decl_121(void);
static P518 f_task_decl_122(void);
static P518 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P518 f_statement_126(void);
static P518 f_unlabeled_statement_127(void);
static P518 f_arm_131(P518 cond_128, P518 b_129, rt_int line_130);
static P518 f_if_stmt_132(void);
static P518 f_case_stmt_133(void);
static P518 f_repeat_stmt_134(void);
static P518 f_guard_stmt_135(void);
static P518 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P526 f_lookup_140(rstr *name_139);
static P526 f_lookup_decl_142(P518 d_141);
static void f_define_145(P526 y_143, rt_int line_144);
static int f_overloadable_147(P526 y_146);
static int f_same_signature_150(P528 a_148, P528 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P526 f_new_sym_155(rt_int kind_153, P513 name_154);
static P522 f_new_typ_157(rt_int kind_156);
static P520 f_new_cons_158(void);
static int f_same_lits_161(P518 a_159, P518 b_160);
static int f_same_164(P522 a_162, P522 b_163);
static P522 f_base_of_166(P522 t_165);
static P520 f_base_cons_169(P522 t_167, P520 c_168);
static rstr f_kind_name_171(P522 t_170);
static void f_check_type_175(P522 got_172, P522 want_173, rt_int line_174);
static rstr f_ctype_177(P522 t_176);
static rstr f_field_decls_179(P522 t_178);
static void f_declare_ctype_181(P522 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P518 lits_183, rstr *name_184);
static P522 f_resolve_subtype_188(P518 st_186, P520 *c_187);
static int f_opened_190(P522 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P522 f_new_type_200(P526 y_197, P518 st_198, P520 *c_199);
static void f_init_storage_204(rstr *lval_201, P522 t_202, P520 c_203);
static rstr f_init_call_207(P526 y_205, rstr *lval_206);
static P522 f_tparam_type_210(P522 t_208, rstr *name_209);
static void f_make_storage_214(rstr *lval_211, P522 t_212, P520 c_213);
static rt_int f_manifest_217(P518 e_215, int *ok_216);
static rstr f_mcopy_219(P522 t_218);
static int f_composite_221(P522 t_220);
static rstr f_assign_code_226(rstr *lval_222, P522 t_223, rstr *v_224, P520 c_225);
static rstr f_copy_code_229(P522 t_227, rstr *v_228);
static rstr f_eq_code_233(P522 t_230, rstr *a_231, rstr *b_232);
static rstr f_elem_assign_237(rstr *lval_234, P522 t_235, rstr *v_236);
static int f_seen_name_240(P532 l_238, rstr *s_239);
static void f_emit_helpers_241(void);
static void f_helper_bodies_243(P522 t_242);
static void f_declare_body_245(P518 elems_244);
static void f_manifest_const_247(P518 d_246);
static int f_exported_251(P518 d_248, rstr *name_249, int *ro_250);
static P526 f_copy_sym_253(P526 y_252);
static void f_gen_capsule_255(P518 d_254);
static void f_capsule_params_259(P518 d_256, P518 args_257, rt_int line_258);
static void f_elaborate_capsule_264(P518 d_260, P526 y_261, P518 args_262, P518 owner_263);
static int f_exports_op_267(P518 d_265, rstr *op_266);
static P513 f_renamed_270(P518 d_268, P526 z_269);
static void f_gen_expose_272(P518 d_271);
static void f_finish_ptr_274(P522 t_273);
static void f_declare_subprogram_276(P518 d_275);
static P526 f_build_subprogram_278(P518 d_277);
static void f_element_280(P518 e_279);
static rstr f_storage_283(rstr *name_281, P522 t_282);
static void f_bind_286(P526 y_284, rstr *access_285);
static void f_var_decl_288(P518 d_287);
static void f_const_decl_290(P518 d_289);
static void f_subprogram_292(P518 d_291);
static void f_gen_subprogram_295(P518 d_293, P526 y_294);
static rstr f_waits_of_297(P518 d_296);
static rstr f_task_waits_299(P518 elems_298);
static void f_await_tasks_301(P518 elems_300);
static void f_capsule_elements_303(P518 elems_302);
static void f_body_elements_305(P518 elems_304);
static void f_gen_body_307(P518 elems_306);
static void f_pop_frames_309(rt_int upto_308);
static void f_push_cleanup_311(rstr *s_310);
static void f_pop_cleanup_312(void);
static void f_gen_statement_314(P518 s_313);
static void f_st_assign_316(P518 s_315);
static void f_st_call_318(P518 s_317);
static void f_st_if_320(P518 s_319);
static void f_st_case_322(P518 s_321);
static void f_st_repeat_324(P518 s_323);
static void f_st_exit_326(P518 s_325);
static void f_st_return_328(P518 s_327);
static rstr f_exc_id_331(rstr *name_329, rt_int line_330);
static void f_st_guard_333(P518 s_332);
static void f_st_alloc_335(P518 s_334);
static rstr f_act_ref_337(P518 e_336);
static void f_st_create_339(P518 s_338);
static void f_hidden_var_343(rstr *name_340, P522 t_341, rstr *place_342);
static void f_user_create_349(P518 s_344, P526 y_345, rstr *uv_346, P522 ut_347, rstr *nf_348);
static rstr f_wait_alt_354(P518 inv_350, rstr *arr_351, rt_int i_352, int mixed_353);
static int f_builtin_wait_356(P518 inv_355);
static rstr f_wait_op_361(P518 inv_357, rstr *op_358, rstr *q_359, int is_stmt_360);
static void f_user_wait_366(P518 s_362, rstr *arr_363, rstr *w_364, rt_int n_365);
static void f_st_wait_368(P518 s_367);
static P518 f_call_node_372(rstr *name_369, P518 arg_370, rt_int line_371);
static void f_user_region_374(P518 s_373);
static void f_st_region_376(P518 s_375);
static P518 f_gparam_379(P518 g_377, rstr *name_378);
static P526 f_bind_sym_381(P518 p_380);
static int f_same_binds_384(P526 a_382, P526 b_383);
static int f_same_binding_387(P526 a_385, P526 b_386);
static P526 f_tt_binds_392(P518 gd_388, P518 formals_389, P518 actuals_390, rt_int line_391);
static int f_generic_use_394(P518 st_393);
static P526 f_infer_from_399(P518 gd_395, P518 pat_396, P522 t_397, P526 known_398);
static P522 f_instantiate_type_405(P526 g_400, P518 tt_401, P518 args_402, P520 *c_403, rt_int line_404);
static P526 f_instantiate_410(P526 g_406, P518 tt_407, P518 args_408, rt_int line_409);
static rstr f_access_of_412(P526 y_411);
static P518 f_import_of_415(P518 l_413, rstr *name_414);
static int f_check_import_418(P526 y_416, rt_int line_417);
static rstr f_c_ident_420(rstr *s_419);
static rstr f_deref_423(rstr *base_421, P522 t_422);
static int f_is_lvalue_425(P518 e_424);
static void f_lvalue_431(P518 e_426, P513 *code_427, P522 *t_428, P520 *c_429, int *ro_430);
static void f_select_on_439(rstr *base_432, P522 bt_433, P518 e_434, int *ro_435, P513 *code_436, P522 *t_437, P520 *c_438);
static void f_index_on_448(rstr *base_440, P522 bt_441, P518 e_442, int *ro_443, int lv_444, P513 *code_445, P522 *t_446, P520 *c_447);
static int f_own_attribute_450(P518 e_449);
static rstr f_gexpr_454(P518 e_451, P522 want_452, P522 *t_453);
static P518 f_copy_node_456(P518 e_455);
static P518 f_wrap_apply_458(P518 e_457);
static rstr f_c_string_460(rstr *s_459);
static P522 f_enum_type_of_463(rstr *lit_461, rt_int line_462);
static rstr f_attribute_466(P518 e_464, P522 *t_465);
static rstr f_gbinop_470(P518 e_467, P522 want_468, P522 *t_469);
static rstr f_constructor_474(P518 e_471, P522 want_472, P522 *t_473);
static int f_fits_477(P526 y_475, P518 args_476);
static P526 f_resolve_overload_482(rstr *name_478, P518 args_479, int is_stmt_480, rt_int line_481);
static int f_is_builtin_484(rstr *n_483);
static int f_is_low_level_486(rstr *n_485);
static rstr f_me_high_490(P518 tt_487, rt_int line_488, P522 *t_489);
static rstr f_type_tag_492(P522 t_491);
static rstr f_lock_ref_495(P518 e_493, rstr *name_494);
static P526 f_user_op_498(rstr *op_496, P518 args_497);
static rstr f_gcall_502(P518 e_499, int is_stmt_500, P522 *t_501);
static rstr f_builtin_509(rstr *name_503, P518 tt_504, P518 args_505, rt_int line_506, int is_stmt_507, P522 *t_508);
static void f_translate_511(P518 units_510);
static void f_print_program_512(void);
static int ex_compile_error_1;
static P516 g_toks_544;
static rt_int g_ntoks_545;
static rt_int g_tpos_546;
static rt_int g_src_line_547;
static P530 g_table_548;
static P530 g_genv_549;
static P526 g_all_insts_550;
static rt_int g_depth_551;
static P526 g_scope_stack_552;
static P522 g_all_types_553;
static rt_int g_serial_554;
static P534 g_out_types_555;
static P534 g_out_helpers_556;
static P534 g_out_protos_557;
static P534 g_out_globals_558;
static P534 g_out_funcs_559;
static P534 g_out_init_560;
static P534 g_out_excs_561;
static P534 g_code_562;
static P534 g_fields_buf_563;
static int g_in_func_564;
static rt_int g_cur_level_565;
static P542 g_fctx_566;
static P538 g_caps_567;
static P540 g_cap_waits_568;
static P532 g_psub_569;
static P513 g_st_field_570;
static P534 g_out_frames_571;
static P526 g_func_sym_572;
static P536 g_exits_573;
static rt_int g_frames_574;
static P532 g_handlers_575;
static P532 g_cleanups_576;
static rt_int g_trial_577;
static P532 g_mcopies_578;
static P522 g_ty_int_579;
static P522 g_ty_bool_580;
static P522 g_ty_float_581;
static P522 g_ty_ascii_582;
static P522 g_ty_string_583;
static P522 g_ty_void_584;
static P522 g_ty_file_585;
static P522 g_ty_nil_586;
static P522 g_ty_lock_587;
static P522 g_ty_latch_588;
static P522 g_ty_act_589;
static P520 g_no_cons_590;
static P513 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_591 = NULL;
{ rstr *cell592 = rt_alloc(sizeof(rstr));
rt_int pv593 = ((*F->s_2)).len;
(*cell592) = rt_str_new(pv593);
rt_str_assign(&(*cell592), (*F->s_2));
F->t_591 = cell592;
}
F->result_ = F->t_591;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_594 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_594, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_594;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_itos_7(rt_int n_6) {
  struct f_itos_7fr *F = rt_alloc(sizeof *F);
F->n_6 = n_6;
F->result_ = rt_str_of_int(F->n_6);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_letter_9(int c_8) {
  struct f_is_letter_9fr *F = rt_alloc(sizeof *F);
F->c_8 = c_8;
F->result_ = (((65 <= F->c_8) && (F->c_8 <= 90)) || ((97 <= F->c_8) && (F->c_8 <= 122)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_digit_11(int c_10) {
  struct f_is_digit_11fr *F = rt_alloc(sizeof *F);
F->c_10 = c_10;
F->result_ = ((48 <= F->c_10) && (F->c_10 <= 57));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_upper_13(int c_12) {
  struct f_upper_13fr *F = rt_alloc(sizeof *F);
F->c_12 = c_12;
F->letters_595 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_595, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
goto ret_;
}
F->result_ = F->c_12;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lower_s_15(rstr *s_14) {
  struct f_lower_s_15fr *F = rt_alloc(sizeof *F);
F->s_14 = s_14;
F->letters_596 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_597 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_597, (*F->s_14));
{ rt_int lo599 = ((rt_int)1LL), hi600 = ((*F->s_14)).len;
for (rt_int it601 = lo599; it601 <= hi600; it601++) {
F->i_598 = it601;
if (((65 <= rt_str_get(F->r_597, F->i_598)) && (rt_str_get(F->r_597, F->i_598) <= 90))) {
(*rt_str_at(&F->r_597, F->i_598)) = rt_str_get(F->letters_596, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_597, F->i_598)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_597;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_602 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_603 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_604 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_602), rt_str(" ", 1)));
{ rt_int lo606 = ((rt_int)1LL), hi607 = rt_add(rt_sub((F->kw_603).len, (F->w_604).len), ((rt_int)1LL));
for (rt_int it608 = lo606; it608 <= hi607; it608++) {
F->i_605 = it608;
if (rt_str_eq(rt_str_slice(F->kw_603, F->i_605, rt_sub(rt_add(F->i_605, (F->w_604).len), ((rt_int)1LL))), F->w_604)) {
F->result_ = rt_str_cat(F->l_602, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_602;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_q_18(void) {
  struct f_q_18fr *F = rt_alloc(sizeof *F);
F->result_ = f_chs_5(34);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_new_name_20(rstr *base_19) {
  struct f_new_name_20fr *F = rt_alloc(sizeof *F);
F->base_19 = base_19;
g_serial_554 = rt_add(g_serial_554, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_554));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_577 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P534 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_609 = NULL;
{ R535 *cell610 = rt_alloc(sizeof(R535));
(*cell610).head = NULL;
(*cell610).tail = NULL;
F->b_609 = cell610;
}
F->result_ = F->b_609;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P534 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_611 = NULL;
{ R533 *cell612 = rt_alloc(sizeof(R533));
(*cell612).s = NULL;
(*cell612).next = NULL;
F->l_611 = cell612;
}
(*(P532)rt_nil_check(F->l_611)).s = f_mk_3(&(*F->s_26));
if (((*(P534)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P534)rt_nil_check(F->b_25)).head = F->l_611;
} else {
(*(P532)rt_nil_check((*(P534)rt_nil_check(F->b_25)).tail)).next = F->l_611;
}
(*(P534)rt_nil_check(F->b_25)).tail = F->l_611;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_562, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P534 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_613 = NULL;
F->l_613 = (*(P534)rt_nil_check(F->b_30)).head;
while ((F->l_613 != NULL)) {
rt_putln((*(P513)rt_nil_check((*(P532)rt_nil_check(F->l_613)).s)));
F->l_613 = (*(P532)rt_nil_check(F->l_613)).next;
}
ret_:
  return;
}

static void f_splice_34(P534 a_32, P534 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P534)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P534)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P534)rt_nil_check(F->a_32)).head = (*(P534)rt_nil_check(F->b_33)).head;
} else {
(*(P532)rt_nil_check((*(P534)rt_nil_check(F->a_32)).tail)).next = (*(P534)rt_nil_check(F->b_33)).head;
}
(*(P534)rt_nil_check(F->a_32)).tail = (*(P534)rt_nil_check(F->b_33)).tail;
(*(P534)rt_nil_check(F->b_33)).head = NULL;
(*(P534)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel614 = (*F->w_35);
if (0 || rt_str_eq(sel614, rt_str("ABBREV", 6)) || rt_str_eq(sel614, rt_str("ABNORMAL", 8)) || rt_str_eq(sel614, rt_str("ALL", 3)) || rt_str_eq(sel614, rt_str("ALLOC", 5)) || rt_str_eq(sel614, rt_str("ASSERT", 6)) || rt_str_eq(sel614, rt_str("BEGIN", 5)) || rt_str_eq(sel614, rt_str("BY", 2)) || rt_str_eq(sel614, rt_str("CAPSULE", 7)) || rt_str_eq(sel614, rt_str("CASE", 4)) || rt_str_eq(sel614, rt_str("CONST", 5)) || rt_str_eq(sel614, rt_str("CREATE", 6)) || rt_str_eq(sel614, rt_str("DO", 2)) || rt_str_eq(sel614, rt_str("ELSE", 4)) || rt_str_eq(sel614, rt_str("ELSEIF", 6)) || rt_str_eq(sel614, rt_str("END", 3)) || rt_str_eq(sel614, rt_str("EXCEPTION", 9)) || rt_str_eq(sel614, rt_str("EXIT", 4)) || rt_str_eq(sel614, rt_str("EXPORTS", 7)) || rt_str_eq(sel614, rt_str("EXPOSE", 6)) || rt_str_eq(sel614, rt_str("EXTERNAL", 8)) || rt_str_eq(sel614, rt_str("FOR", 3)) || rt_str_eq(sel614, rt_str("FROM", 4)) || rt_str_eq(sel614, rt_str("FUNC", 4)) || rt_str_eq(sel614, rt_str("GENERIC", 7)) || rt_str_eq(sel614, rt_str("GOTO", 4)) || rt_str_eq(sel614, rt_str("GUARD", 5)) || rt_str_eq(sel614, rt_str("IF", 2)) || rt_str_eq(sel614, rt_str("IMPORTS", 7)) || rt_str_eq(sel614, rt_str("LOCATION", 8)) || rt_str_eq(sel614, rt_str("NAMED", 5)) || rt_str_eq(sel614, rt_str("NEEDS", 5)) || rt_str_eq(sel614, rt_str("NEW", 3)) || rt_str_eq(sel614, rt_str("NONE", 4)) || rt_str_eq(sel614, rt_str("OUT", 3)) || rt_str_eq(sel614, rt_str("OF", 2)) || rt_str_eq(sel614, rt_str("PRAG", 4)) || rt_str_eq(sel614, rt_str("PROC", 4)) || rt_str_eq(sel614, rt_str("RAISE", 5)) || rt_str_eq(sel614, rt_str("READONLY", 8)) || rt_str_eq(sel614, rt_str("REVERSE", 7)) || rt_str_eq(sel614, rt_str("REGION", 6)) || rt_str_eq(sel614, rt_str("RENAMING", 8)) || rt_str_eq(sel614, rt_str("REP", 3)) || rt_str_eq(sel614, rt_str("REPEAT", 6)) || rt_str_eq(sel614, rt_str("RERAISE", 7)) || rt_str_eq(sel614, rt_str("RETURN", 6)) || rt_str_eq(sel614, rt_str("SUBTYPE", 7)) || rt_str_eq(sel614, rt_str("TASK", 4)) || rt_str_eq(sel614, rt_str("THEN", 4)) || rt_str_eq(sel614, rt_str("TO", 2)) || rt_str_eq(sel614, rt_str("TYPE", 4)) || rt_str_eq(sel614, rt_str("VAR", 3)) || rt_str_eq(sel614, rt_str("WAIT", 4)) || rt_str_eq(sel614, rt_str("WHEN", 4)) || rt_str_eq(sel614, rt_str("WHILE", 5))) {
F->result_ = 1;
goto ret_;
} else {
F->result_ = 0;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_word_op_38(rstr *w_37) {
  struct f_is_word_op_38fr *F = rt_alloc(sizeof *F);
F->w_37 = w_37;
F->result_ = ((((((rt_str_eq((*F->w_37), rt_str("DIV", 3)) || rt_str_eq((*F->w_37), rt_str("MOD", 3))) || rt_str_eq((*F->w_37), rt_str("IN", 2))) || rt_str_eq((*F->w_37), rt_str("OR", 2))) || rt_str_eq((*F->w_37), rt_str("XOR", 3))) || rt_str_eq((*F->w_37), rt_str("AND", 3))) || rt_str_eq((*F->w_37), rt_str("NOT", 3)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41) {
  struct f_add_token_42fr *F = rt_alloc(sizeof *F);
F->kind_39 = kind_39;
F->s_40 = s_40;
F->ival_41 = ival_41;
F->t_615 = NULL;
{ R515 *cell616 = rt_alloc(sizeof(R515));
(*cell616).s = NULL;
F->t_615 = cell616;
}
(*(P514)rt_nil_check(F->t_615)).kind = F->kind_39;
(*(P514)rt_nil_check(F->t_615)).line = g_src_line_547;
(*(P514)rt_nil_check(F->t_615)).ival = F->ival_41;
(*(P514)rt_nil_check(F->t_615)).s = f_mk_3(&(*F->s_40));
g_ntoks_545 = rt_add(g_ntoks_545, ((rt_int)1LL));
(*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_ntoks_545, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo] = F->t_615;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_617 = ((rt_int)1LL);
F->j_618 = ((rt_int)0LL);
F->n_619 = ((*F->line_43)).len;
while ((F->i_617 <= F->n_619)) {
F->c_620 = rt_str_get((*F->line_43), F->i_617);
if (((((F->c_620 == 32) || (F->c_620 == 9)) || (F->c_620 == 13)) || (F->c_620 == 12))) {
F->i_617 = rt_add(F->i_617, ((rt_int)1LL));
} else if ((F->c_620 == 37)) {
F->i_617 = rt_add(F->n_619, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_620)) {
F->j_618 = F->i_617;
while (((F->j_618 <= F->n_619) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_618)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_618))) || (rt_str_get((*F->line_43), F->j_618) == 95)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
{
F->w_621 = rt_str_new(rt_sub(F->j_618, F->i_617));
rt_str_assign(&F->w_621, rt_str_slice((*F->line_43), F->i_617, rt_sub(F->j_618, ((rt_int)1LL))));
{ rt_int lo623 = ((rt_int)1LL), hi624 = (F->w_621).len;
for (rt_int it625 = lo623; it625 <= hi624; it625++) {
F->k_622 = it625;
(*rt_str_at(&F->w_621, F->k_622)) = f_upper_13(rt_str_get(F->w_621, F->k_622));
}
}
if (rt_str_eq(F->w_621, rt_str("PRAGMAT", 7))) {
while (((F->j_618 <= F->n_619) && (rt_str_get((*F->line_43), F->j_618) != 59))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_621)) {
f_add_token_42(((rt_int)2LL), &F->w_621, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_621)) {
f_add_token_42(((rt_int)3LL), &F->w_621, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_621, ((rt_int)0LL));
}
}
F->i_617 = F->j_618;
} else if (f_is_digit_11(F->c_620)) {
F->j_618 = F->i_617;
while (((F->j_618 <= F->n_619) && f_is_digit_11(rt_str_get((*F->line_43), F->j_618)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
if ((((F->j_618 < F->n_619) && (rt_str_get((*F->line_43), F->j_618) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_618, ((rt_int)1LL)))))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
while (((F->j_618 <= F->n_619) && f_is_digit_11(rt_str_get((*F->line_43), F->j_618)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
if (((F->j_618 <= F->n_619) && ((rt_str_get((*F->line_43), F->j_618) == 69) || (rt_str_get((*F->line_43), F->j_618) == 101)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
if (((F->j_618 <= F->n_619) && ((rt_str_get((*F->line_43), F->j_618) == 43) || (rt_str_get((*F->line_43), F->j_618) == 45)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
while (((F->j_618 <= F->n_619) && f_is_digit_11(rt_str_get((*F->line_43), F->j_618)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_617, rt_sub(F->j_618, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_617, rt_sub(F->j_618, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_617, rt_sub(F->j_618, ((rt_int)1LL)))));
}
F->i_617 = F->j_618;
} else if ((F->c_620 == 39)) {
F->j_618 = rt_add(F->i_617, ((rt_int)1LL));
if (((F->j_618 > F->n_619) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_618))))) {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_618 <= F->n_619) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_618)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_618))) || (rt_str_get((*F->line_43), F->j_618) == 95)))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
{
F->w_626 = rt_str_new(rt_sub(rt_sub(F->j_618, F->i_617), ((rt_int)1LL)));
rt_str_assign(&F->w_626, rt_str_slice((*F->line_43), rt_add(F->i_617, ((rt_int)1LL)), rt_sub(F->j_618, ((rt_int)1LL))));
{ rt_int lo628 = ((rt_int)1LL), hi629 = (F->w_626).len;
for (rt_int it630 = lo628; it630 <= hi629; it630++) {
F->k_627 = it630;
(*rt_str_at(&F->w_626, F->k_627)) = f_upper_13(rt_str_get(F->w_626, F->k_627));
}
}
f_add_token_42(((rt_int)6LL), &F->w_626, ((rt_int)0LL));
}
F->i_617 = F->j_618;
} else if ((F->c_620 == 34)) {
F->j_618 = rt_add(F->i_617, ((rt_int)1LL));
while (((F->j_618 <= F->n_619) && (rt_str_get((*F->line_43), F->j_618) != 34))) {
F->j_618 = rt_add(F->j_618, ((rt_int)1LL));
}
if ((F->j_618 > F->n_619)) {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_617, ((rt_int)1LL)), rt_sub(F->j_618, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_617 = rt_add(F->j_618, ((rt_int)1LL));
} else {
{
F->two_631 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_631, rt_str("  ", 2));
(*rt_str_at(&F->two_631, ((rt_int)1LL))) = F->c_620;
if ((F->i_617 < F->n_619)) {
(*rt_str_at(&F->two_631, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_617, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_631, rt_str(":=", 2)) || rt_str_eq(F->two_631, rt_str("=>", 2))) || rt_str_eq(F->two_631, rt_str("..", 2))) || rt_str_eq(F->two_631, rt_str("**", 2))) || rt_str_eq(F->two_631, rt_str("/=", 2))) || rt_str_eq(F->two_631, rt_str("<=", 2))) || rt_str_eq(F->two_631, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_631, ((rt_int)0LL));
F->i_617 = rt_add(F->i_617, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_620 == 40) || (F->c_620 == 41)) || (F->c_620 == 91)) || (F->c_620 == 93)) || (F->c_620 == 44)) || (F->c_620 == 58)) || (F->c_620 == 59)) || (F->c_620 == 46)) || (F->c_620 == 35)) || (F->c_620 == 43)) || (F->c_620 == 45)) || (F->c_620 == 42)) || (F->c_620 == 47)) || (F->c_620 == 38)) || (F->c_620 == 61)) || (F->c_620 == 60)) || (F->c_620 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_620); b_; }), ((rt_int)0LL));
F->i_617 = rt_add(F->i_617, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
}
}
}
}
ret_:
  return;
}

static void f_read_source_45(void) {
  struct f_read_source_45fr *F = rt_alloc(sizeof *F);
while ((!rt_eof())) {
F->line_632 = rt_str_new(rt_sizeln());
rt_readln(&F->line_632);
g_src_line_547 = rt_add(g_src_line_547, ((rt_int)1LL));
f_lex_line_44(&F->line_632);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P518 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_633 = NULL;
{ R519 *cell634 = rt_alloc(sizeof(R519));
(*cell634).name = NULL;
(*cell634).tag = NULL;
(*cell634).a = NULL;
(*cell634).b = NULL;
(*cell634).c = NULL;
(*cell634).d = NULL;
(*cell634).e = NULL;
(*cell634).next = NULL;
F->x_633 = cell634;
}
(*(P518)rt_nil_check(F->x_633)).kind = F->kind_46;
(*(P518)rt_nil_check(F->x_633)).line = F->line_47;
F->result_ = F->x_633;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P518 *head_49, P518 *tail_50, P518 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P518)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P518)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P518)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P518 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_635 = ((rt_int)0LL);
F->p_636 = NULL;
F->p_636 = F->l_53;
while ((F->p_636 != NULL)) {
F->n_635 = rt_add(F->n_635, ((rt_int)1LL));
F->p_636 = (*(P518)rt_nil_check(F->p_636)).next;
}
F->result_ = F->n_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_546, F->k_62) > g_ntoks_545)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_add(g_tpos_546, F->k_62), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P513 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_546, F->k_64) > g_ntoks_545)) {
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_ntoks_545, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
}
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_add(g_tpos_546, F->k_64), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_accept_op_71(rstr *w_70) {
  struct f_accept_op_71fr *F = rt_alloc(sizeof *F);
F->w_70 = w_70;
if (f_at_op_59(&(*F->w_70))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_expect_kw_73(rstr *w_72) {
  struct f_expect_kw_73fr *F = rt_alloc(sizeof *F);
F->w_72 = w_72;
if ((!f_at_kw_57(&(*F->w_72)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_72)); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
ret_:
  return;
}

static P513 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_sub(g_tpos_546, ((rt_int)1LL)), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_637 = NULL;
F->x_637 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P518)rt_nil_check(F->x_637)).name = f_expect_id_76();
F->result_ = F->x_637;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_638 = NULL;
F->tail_639 = NULL;
f_append_52(&F->head_638, &F->tail_639, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_638, &F->tail_639, f_name_node_77());
}
F->result_ = F->head_638;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_640 = f_cur_line_55();
F->x_641 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->x_641 = f_nn_48(((rt_int)81LL), F->line_640);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P518)rt_nil_check(F->x_641)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_641;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_642 = rt_str_copy((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (rt_str_eq(F->w_642, rt_str("ARRAY", 5))) {
F->x_641 = f_nn_48(((rt_int)74LL), F->line_640);
{
F->head_643 = NULL;
F->tail_644 = NULL;
f_append_52(&F->head_643, &F->tail_644, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_643, &F->tail_644, f_p_subtype_79());
}
(*(P518)rt_nil_check(F->x_641)).a = F->head_643;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P518)rt_nil_check(F->x_641)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_642, rt_str("RECORD", 6)) || rt_str_eq(F->w_642, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_642, rt_str("RECORD", 6))) {
F->x_641 = f_nn_48(((rt_int)75LL), F->line_640);
} else {
F->x_641 = f_nn_48(((rt_int)76LL), F->line_640);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_645 = NULL;
F->tail_646 = NULL;
F->more_647 = 1;
while (F->more_647) {
F->names_648 = NULL;
F->names_648 = f_id_list_78();
F->st_649 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_649 = f_p_subtype_79();
while ((F->names_648 != NULL)) {
F->cmp_650 = NULL;
F->cmp_650 = f_nn_48(((rt_int)63LL), (*(P518)rt_nil_check(F->names_648)).line);
(*(P518)rt_nil_check(F->cmp_650)).name = (*(P518)rt_nil_check(F->names_648)).name;
(*(P518)rt_nil_check(F->cmp_650)).a = F->st_649;
f_append_52(&F->head_645, &F->tail_646, F->cmp_650);
F->names_648 = (*(P518)rt_nil_check(F->names_648)).next;
}
F->more_647 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_641)).a = F->head_645;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_642, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_641)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_642, rt_str("ENUM", 4))) {
F->x_641 = f_nn_48(((rt_int)72LL), F->line_640);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_651 = NULL;
F->tail_652 = NULL;
F->more_653 = 1;
while (F->more_653) {
F->lit_654 = NULL;
F->lit_654 = f_nn_48(((rt_int)4LL), F->line_640);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P518)rt_nil_check(F->lit_654)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
f_append_52(&F->head_651, &F->tail_652, F->lit_654);
F->more_653 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_641)).a = F->head_651;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_641)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_641)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_642, rt_str("STRING", 6)) || rt_str_eq(F->w_642, rt_str("SET", 3))) || rt_str_eq(F->w_642, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_642, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_642, rt_str("STRING", 6))) {
F->x_641 = f_nn_48(((rt_int)73LL), F->line_640);
} else if (rt_str_eq(F->w_642, rt_str("SET", 3))) {
F->x_641 = f_nn_48(((rt_int)77LL), F->line_640);
} else if (rt_str_eq(F->w_642, rt_str("MAILBOX", 7))) {
F->x_641 = f_nn_48(((rt_int)78LL), F->line_640);
} else {
F->x_641 = f_nn_48(((rt_int)79LL), F->line_640);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P518)rt_nil_check(F->x_641)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_641)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_642, rt_str("INT", 3))) {
F->x_641 = f_nn_48(((rt_int)70LL), F->line_640);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_641)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_641)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_642, rt_str("FLOAT", 5))) {
F->x_641 = f_nn_48(((rt_int)71LL), F->line_640);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_641)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_641)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_641)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_641 = f_nn_48(((rt_int)80LL), F->line_640);
(*(P518)rt_nil_check(F->x_641)).name = f_mk_3(&F->w_642);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_641)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_641)).b = f_actual_params_80();
(*(P518)rt_nil_check(F->x_641)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_641;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_655 = NULL;
F->tail_656 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_655, &F->tail_656, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_655, &F->tail_656, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_655;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_type_word_82(rstr *w_81) {
  struct f_is_type_word_82fr *F = rt_alloc(sizeof *F);
F->w_81 = w_81;
F->result_ = ((((((((((((((rt_str_eq((*F->w_81), rt_str("INT", 3)) || rt_str_eq((*F->w_81), rt_str("BOOL", 4))) || rt_str_eq((*F->w_81), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_81), rt_str("ENUM", 4))) || rt_str_eq((*F->w_81), rt_str("RECORD", 6))) || rt_str_eq((*F->w_81), rt_str("UNION", 5))) || rt_str_eq((*F->w_81), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_81), rt_str("STRING", 6))) || rt_str_eq((*F->w_81), rt_str("SET", 3))) || rt_str_eq((*F->w_81), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_81), rt_str("FILE", 4))) || rt_str_eq((*F->w_81), rt_str("ASCII", 5))) || rt_str_eq((*F->w_81), rt_str("ACT", 3))) || rt_str_eq((*F->w_81), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_81), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_657 = NULL;
F->tail_658 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_659 = 1;
while (F->more_659) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))))) {
f_append_52(&F->head_657, &F->tail_658, f_p_subtype_79());
} else {
f_append_52(&F->head_657, &F->tail_658, f_expr_89());
}
F->more_659 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_657;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_binop_88(P513 op_84, P518 l_85, P518 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_660 = NULL;
F->x_660 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P518)rt_nil_check(F->x_660)).name = F->op_84;
(*(P518)rt_nil_check(F->x_660)).a = F->l_85;
(*(P518)rt_nil_check(F->x_660)).b = F->r_86;
F->result_ = F->x_660;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_661 = NULL;
F->l_661 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_662 = NULL;
F->op_662 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_663 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_661 = f_binop_88(F->op_662, F->l_661, f_expr_and_90(), F->line_663);
}
F->result_ = F->l_661;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_664 = NULL;
F->l_664 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_665 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_664 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_664, f_expr_not_91(), F->line_665);
}
F->result_ = F->l_664;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_666 = NULL;
F->x_666 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_666)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P518)rt_nil_check(F->x_666)).a = f_expr_not_91();
F->result_ = F->x_666;
goto ret_;
}
F->result_ = f_expr_rel_94();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_rel_93(rstr *s_92) {
  struct f_is_rel_93fr *F = rt_alloc(sizeof *F);
F->s_92 = s_92;
F->result_ = ((((((rt_str_eq((*F->s_92), rt_str("=", 1)) || rt_str_eq((*F->s_92), rt_str("/=", 2))) || rt_str_eq((*F->s_92), rt_str("<", 1))) || rt_str_eq((*F->s_92), rt_str("<=", 2))) || rt_str_eq((*F->s_92), rt_str(">", 1))) || rt_str_eq((*F->s_92), rt_str(">=", 2))) || rt_str_eq((*F->s_92), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_667 = NULL;
F->l_667 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))))) {
F->op_668 = NULL;
F->op_668 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_669 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_667 = f_binop_88(F->op_668, F->l_667, f_expr_add_95(), F->line_669);
}
F->result_ = F->l_667;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_670 = NULL;
F->l_670 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_671 = NULL;
F->op_671 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_672 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_670 = f_binop_88(F->op_671, F->l_670, f_expr_mul_96(), F->line_672);
}
F->result_ = F->l_670;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_673 = NULL;
F->l_673 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_674 = NULL;
F->op_674 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_675 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_673 = f_binop_88(F->op_674, F->l_673, f_expr_pow_97(), F->line_675);
}
F->result_ = F->l_673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_676 = NULL;
F->l_676 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_677 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_676 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_676, f_expr_prefix_98(), F->line_677);
}
F->result_ = F->l_676;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_678 = NULL;
F->x_678 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P518)rt_nil_check(F->x_678)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_678)).a = f_expr_prefix_98();
F->result_ = F->x_678;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_679 = NULL;
F->p_679 = f_primary_100();
while (1) {
F->line_680 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_681 = NULL;
F->x_681 = f_nn_48(((rt_int)10LL), F->line_680);
F->head_682 = NULL;
F->tail_683 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_684 = 1;
while (F->more_684) {
F->lo_685 = NULL;
F->lo_685 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_686 = NULL;
F->r_686 = f_nn_48(((rt_int)16LL), F->line_680);
(*(P518)rt_nil_check(F->r_686)).a = F->lo_685;
(*(P518)rt_nil_check(F->r_686)).b = f_expr_89();
f_append_52(&F->head_682, &F->tail_683, F->r_686);
} else {
f_append_52(&F->head_682, &F->tail_683, F->lo_685);
}
F->more_684 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P518)rt_nil_check(F->x_681)).a = F->p_679;
(*(P518)rt_nil_check(F->x_681)).b = F->head_682;
F->p_679 = F->x_681;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_687 = NULL;
F->x_687 = f_nn_48(((rt_int)11LL), F->line_680);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_687)).a = F->p_679;
(*(P518)rt_nil_check(F->x_687)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->p_679 = F->x_687;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P518)rt_nil_check(F->p_679)).kind == ((rt_int)7LL)))) {
F->x_688 = NULL;
F->x_688 = f_nn_48(((rt_int)12LL), F->line_680);
(*(P518)rt_nil_check(F->x_688)).a = F->p_679;
(*(P518)rt_nil_check(F->x_688)).b = f_actual_tt_83();
F->p_679 = F->x_688;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_689 = NULL;
F->x_689 = f_nn_48(((rt_int)13LL), F->line_680);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_689)).a = F->p_679;
(*(P518)rt_nil_check(F->x_689)).b = f_p_subtype_79();
F->p_679 = F->x_689;
} else {
F->result_ = F->p_679;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_690 = f_cur_line_55();
F->x_691 = NULL;
F->k_692 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind;
if ((F->k_692 == ((rt_int)4LL))) {
F->x_691 = f_nn_48(((rt_int)1LL), F->line_690);
(*(P518)rt_nil_check(F->x_691)).ival = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).ival;
(*(P518)rt_nil_check(F->x_691)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_691;
goto ret_;
}
if ((((F->k_692 == ((rt_int)5LL)) || (F->k_692 == ((rt_int)7LL))) || (F->k_692 == ((rt_int)6LL)))) {
if ((F->k_692 == ((rt_int)5LL))) {
F->x_691 = f_nn_48(((rt_int)2LL), F->line_690);
} else if ((F->k_692 == ((rt_int)7LL))) {
F->x_691 = f_nn_48(((rt_int)3LL), F->line_690);
} else {
F->x_691 = f_nn_48(((rt_int)4LL), F->line_690);
}
(*(P518)rt_nil_check(F->x_691)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_691;
goto ret_;
}
if ((F->k_692 == ((rt_int)1LL))) {
F->w_693 = rt_str_copy((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
if ((rt_str_eq(F->w_693, rt_str("TRUE", 4)) || rt_str_eq(F->w_693, rt_str("FALSE", 5)))) {
F->x_691 = f_nn_48(((rt_int)5LL), F->line_690);
if (rt_str_eq(F->w_693, rt_str("TRUE", 4))) {
(*(P518)rt_nil_check(F->x_691)).ival = ((rt_int)1LL);
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_691;
goto ret_;
}
if (rt_str_eq(F->w_693, rt_str("NIL", 3))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_690);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_691 = f_nn_48(((rt_int)17LL), F->line_690);
(*(P518)rt_nil_check(F->x_691)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_691;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_694 = NULL;
F->tail_695 = NULL;
F->x_691 = f_nn_48(((rt_int)14LL), F->line_690);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_696 = 1;
while (F->more_696) {
f_append_52(&F->head_694, &F->tail_695, f_constructor_item_101());
F->more_696 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P518)rt_nil_check(F->x_691)).a = F->head_694;
F->result_ = F->x_691;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_697 = f_cur_line_55();
F->it_698 = NULL;
F->it_698 = f_nn_48(((rt_int)15LL), F->line_697);
F->first_699 = NULL;
F->first_699 = f_expr_89();
F->keys_700 = NULL;
F->ktail_701 = NULL;
F->lab_702 = NULL;
F->lab_702 = f_nn_48(((rt_int)61LL), F->line_697);
(*(P518)rt_nil_check(F->lab_702)).a = F->first_699;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->lab_702)).b = f_expr_89();
f_append_52(&F->keys_700, &F->ktail_701, F->lab_702);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_700, &F->ktail_701, F->lab_702);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_703 = g_tpos_546;
F->more_704 = NULL;
F->tail2_705 = NULL;
F->ok_706 = 0;
F->go_707 = 1;
while ((F->go_707 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_708 = NULL;
F->l2_708 = f_nn_48(((rt_int)61LL), F->line_697);
(*(P518)rt_nil_check(F->l2_708)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->l2_708)).b = f_expr_89();
}
f_append_52(&F->more_704, &F->tail2_705, F->l2_708);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_706 = 1;
F->go_707 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_707 = 0;
}
}
if (F->ok_706) {
f_append_52(&F->keys_700, &F->ktail_701, F->lab_702);
f_append_52(&F->keys_700, &F->ktail_701, F->more_704);
} else {
g_tpos_546 = F->save_703;
}
}
if ((F->keys_700 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P518)rt_nil_check(F->it_698)).a = F->keys_700;
(*(P518)rt_nil_check(F->it_698)).b = f_expr_89();
} else {
(*(P518)rt_nil_check(F->it_698)).b = F->first_699;
}
F->result_ = F->it_698;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_body_end_102(void) {
  struct f_at_body_end_102fr *F = rt_alloc(sizeof *F);
F->result_ = (((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_61(((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_709 = NULL;
F->tail_710 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_709, &F->tail_710, f_body_element_104());
}
F->result_ = F->head_709;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_711 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_711 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_711 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_711)).a = f_expr_89();
} else {
F->x_711 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_711;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_712 = f_cur_line_55();
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
F->head_713 = NULL;
F->tail_714 = NULL;
F->names_715 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->names_715 = f_id_list_78();
while ((F->names_715 != NULL)) {
F->x_716 = NULL;
F->x_716 = f_nn_48(((rt_int)49LL), F->line_712);
(*(P518)rt_nil_check(F->x_716)).name = (*(P518)rt_nil_check(F->names_715)).name;
f_append_52(&F->head_713, &F->tail_714, F->x_716);
F->names_715 = (*(P518)rt_nil_check(F->names_715)).next;
}
F->result_ = F->head_713;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_717 = f_cur_line_55();
F->is_var_718 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_719 = NULL;
F->st_720 = NULL;
F->init_721 = NULL;
F->loc_722 = NULL;
F->loc_kind_723 = ((rt_int)0LL);
F->head_724 = NULL;
F->tail_725 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->names_719 = f_id_list_78();
if (F->is_var_718) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_720 = f_p_subtype_79();
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->loc_kind_723 = ((rt_int)1LL);
} else {
F->loc_kind_723 = ((rt_int)2LL);
}
F->loc_722 = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_721 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_720 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_721 = f_expr_89();
}
while ((F->names_719 != NULL)) {
F->x_726 = NULL;
if (F->is_var_718) {
F->x_726 = f_nn_48(((rt_int)40LL), F->line_717);
} else {
F->x_726 = f_nn_48(((rt_int)41LL), F->line_717);
}
(*(P518)rt_nil_check(F->x_726)).name = (*(P518)rt_nil_check(F->names_719)).name;
(*(P518)rt_nil_check(F->x_726)).a = F->st_720;
(*(P518)rt_nil_check(F->x_726)).b = F->init_721;
(*(P518)rt_nil_check(F->x_726)).c = F->loc_722;
(*(P518)rt_nil_check(F->x_726)).ival = F->loc_kind_723;
f_append_52(&F->head_724, &F->tail_725, F->x_726);
F->names_719 = (*(P518)rt_nil_check(F->names_719)).next;
}
F->result_ = F->head_724;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_727 = NULL;
F->x_727 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_727)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_727)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P518)rt_nil_check(F->x_727)).a = f_p_subtype_79();
F->result_ = F->x_727;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_728 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_728 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_728 = rt_add(F->depth_728, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_728 = rt_sub(F->depth_728, ((rt_int)1LL));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P518 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_729 = f_cur_line_55();
F->name_730 = NULL;
F->params_731 = NULL;
F->x_732 = NULL;
F->tts_733 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->name_730 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_733 = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_731 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->x_732 = f_nn_48(((rt_int)44LL), F->line_729);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_732)).b = f_formal_params_112();
}
} else {
F->x_732 = f_nn_48(((rt_int)43LL), F->line_729);
(*(P518)rt_nil_check(F->x_732)).b = F->params_731;
}
(*(P518)rt_nil_check(F->x_732)).name = F->name_730;
(*(P518)rt_nil_check(F->x_732)).e = F->tts_733;
(*(P518)rt_nil_check(F->x_732)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_732;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_mode_of_111(rstr *w_110) {
  struct f_mode_of_111fr *F = rt_alloc(sizeof *F);
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
  return F->result_;
}

static P518 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_734 = NULL;
F->tail_735 = NULL;
F->more_736 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_736) {
F->mode_737 = ((rt_int)1LL);
F->names_738 = NULL;
F->ntail_739 = NULL;
F->st_740 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_737 = f_mode_of_111(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
f_append_52(&F->names_738, &F->ntail_739, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
f_append_52(&F->names_738, &F->ntail_739, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_740 = f_p_subtype_79();
while ((F->names_738 != NULL)) {
F->p_741 = NULL;
F->p_741 = f_nn_48(((rt_int)52LL), (*(P518)rt_nil_check(F->names_738)).line);
(*(P518)rt_nil_check(F->p_741)).name = (*(P518)rt_nil_check(F->names_738)).name;
(*(P518)rt_nil_check(F->p_741)).ival = F->mode_737;
(*(P518)rt_nil_check(F->p_741)).a = F->st_740;
f_append_52(&F->head_734, &F->tail_735, F->p_741);
F->names_738 = (*(P518)rt_nil_check(F->names_738)).next;
}
F->more_736 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_734;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P518 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_742 = NULL;
F->tail_743 = NULL;
F->more_744 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->owner_113)).flag = rt_add((*(P518)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_744) {
F->ro_745 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_746 = NULL;
F->x_746 = f_name_node_77();
if (F->ro_745) {
(*(P518)rt_nil_check(F->x_746)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_742, &F->tail_743, F->x_746);
F->more_744 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->owner_113)).d = F->head_742;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_definable_116(rstr *w_115) {
  struct f_is_definable_116fr *F = rt_alloc(sizeof *F);
F->w_115 = w_115;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_115), rt_str("+", 1)) || rt_str_eq((*F->w_115), rt_str("-", 1))) || rt_str_eq((*F->w_115), rt_str("*", 1))) || rt_str_eq((*F->w_115), rt_str("/", 1))) || rt_str_eq((*F->w_115), rt_str("**", 2))) || rt_str_eq((*F->w_115), rt_str("&", 1))) || rt_str_eq((*F->w_115), rt_str("=", 1))) || rt_str_eq((*F->w_115), rt_str("<", 1))) || rt_str_eq((*F->w_115), rt_str("<=", 2))) || rt_str_eq((*F->w_115), rt_str(">", 1))) || rt_str_eq((*F->w_115), rt_str(">=", 2))) || rt_str_eq((*F->w_115), rt_str("/=", 2))) || rt_str_eq((*F->w_115), rt_str("DIV", 3))) || rt_str_eq((*F->w_115), rt_str("MOD", 3))) || rt_str_eq((*F->w_115), rt_str("AND", 3))) || rt_str_eq((*F->w_115), rt_str("OR", 2))) || rt_str_eq((*F->w_115), rt_str("XOR", 3))) || rt_str_eq((*F->w_115), rt_str("NOT", 3))) || rt_str_eq((*F->w_115), rt_str("IN", 2))) || rt_str_eq((*F->w_115), rt_str(":=", 2))) || rt_str_eq((*F->w_115), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P513 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)))))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_sub(g_tpos_546, ((rt_int)1LL)), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_747 = f_cur_line_55();
F->x_748 = NULL;
F->is_abn_749 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_750 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_750) {
F->x_748 = f_nn_48(((rt_int)46LL), F->line_747);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_748 = f_nn_48(((rt_int)45LL), F->line_747);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (F->is_abn_749) {
(*(P518)rt_nil_check(F->x_748)).flag = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->x_748)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_748)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_748)).a = f_formal_params_112();
}
if (F->is_func_750) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_748)).b = f_p_subtype_79();
}
F->dummy_751 = f_imports_list_114(F->x_748);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_748)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_750) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P513)rt_nil_check(f_definable_name_117())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_748)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_748)).name))); b_; }));
}
F->result_ = F->x_748;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_752 = NULL;
F->x_752 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_752)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_752)).b = f_formal_params_112();
}
F->dummy_753 = f_imports_list_114(F->x_752);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_752)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P518)rt_nil_check(F->x_752)).ival = ((rt_int)0LL);
} else {
F->head_754 = NULL;
F->tail_755 = NULL;
F->more_756 = 1;
while (F->more_756) {
F->n_757 = NULL;
F->n_757 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P518)rt_nil_check(F->n_757)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->n_757)).name = f_definable_name_117();
f_append_52(&F->head_754, &F->tail_755, F->n_757);
F->more_756 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_752)).a = F->head_754;
(*(P518)rt_nil_check(F->x_752)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_752)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_752)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_752;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_758 = NULL;
F->tail_759 = NULL;
F->more_760 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_760) {
f_append_52(&F->head_758, &F->tail_759, f_name_node_77());
F->more_760 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_758;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_761 = NULL;
F->x_761 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_762 = NULL;
F->tail_763 = NULL;
F->more_764 = 1;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while (F->more_764) {
F->names_765 = NULL;
F->names_765 = f_id_list_78();
F->kind_766 = ((rt_int)6LL);
F->st_767 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_766 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_766 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_766 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_766 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_766 = ((rt_int)5LL);
} else {
F->st_767 = f_p_subtype_79();
}
if (((F->kind_766 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P518)rt_nil_check(F->x_761)).e = f_actual_params_80();
} else if (((F->kind_766 >= ((rt_int)3LL)) && (F->kind_766 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_767 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (((F->kind_766 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_767 = f_p_subtype_79();
}
}
while ((F->names_765 != NULL)) {
F->p_768 = NULL;
F->p_768 = f_nn_48(((rt_int)52LL), (*(P518)rt_nil_check(F->names_765)).line);
(*(P518)rt_nil_check(F->p_768)).name = (*(P518)rt_nil_check(F->names_765)).name;
(*(P518)rt_nil_check(F->p_768)).ival = F->kind_766;
(*(P518)rt_nil_check(F->p_768)).a = F->st_767;
f_append_52(&F->head_762, &F->tail_763, F->p_768);
F->names_765 = (*(P518)rt_nil_check(F->names_765)).next;
}
F->more_764 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_764 = 1;
while (F->more_764) {
F->nm_769 = NULL;
F->nm_769 = f_definable_name_117();
F->st_770 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_770 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_770 = f_p_subtype_79();
}
F->more_764 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P518)rt_nil_check(F->x_761)).a = F->head_762;
(*(P518)rt_nil_check(F->x_761)).b = f_declaration_105();
(*(P518)rt_nil_check(F->x_761)).name = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->x_761)).b)).name;
F->result_ = F->x_761;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_771 = NULL;
F->x_771 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_771)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_771)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_771)).a = f_formal_params_112();
}
F->dummy_772 = f_imports_list_114(F->x_771);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_771)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_771)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_771)).name))); b_; }));
}
F->result_ = F->x_771;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_773 = NULL;
F->x_773 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_774 = NULL;
F->tail_775 = NULL;
F->more_776 = 1;
while (F->more_776) {
F->n_777 = NULL;
F->n_777 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P518)rt_nil_check(F->n_777)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->n_777)).name = f_definable_name_117();
f_append_52(&F->head_774, &F->tail_775, F->n_777);
F->more_776 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_773)).a = F->head_774;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).flag = rt_add((*(P518)rt_nil_check(F->x_773)).flag, ((rt_int)2LL));
}
(*(P518)rt_nil_check(F->x_773)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_778 = NULL;
F->tail_779 = NULL;
F->more_780 = 1;
while (F->more_780) {
F->n_781 = NULL;
F->n_781 = f_nn_48(((rt_int)7LL), f_cur_line_55());
F->tgt_782 = NULL;
F->tgt_782 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P518)rt_nil_check(F->n_781)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P518)rt_nil_check(F->tgt_782)).name = f_definable_name_117();
(*(P518)rt_nil_check(F->n_781)).a = F->tgt_782;
f_append_52(&F->head_778, &F->tail_779, F->n_781);
F->more_780 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_773)).c = F->head_778;
}
F->result_ = F->x_773;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_compound_kw_125(rstr *w_124) {
  struct f_is_compound_kw_125fr *F = rt_alloc(sizeof *F);
F->w_124 = w_124;
F->result_ = (((((((rt_str_eq((*F->w_124), rt_str("IF", 2)) || rt_str_eq((*F->w_124), rt_str("CASE", 4))) || rt_str_eq((*F->w_124), rt_str("FOR", 3))) || rt_str_eq((*F->w_124), rt_str("WHILE", 5))) || rt_str_eq((*F->w_124), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_124), rt_str("GUARD", 5))) || rt_str_eq((*F->w_124), rt_str("WAIT", 4))) || rt_str_eq((*F->w_124), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_783 = NULL;
F->ltail_784 = NULL;
F->match_785 = NULL;
F->s_786 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_783, &F->ltail_784, f_name_node_77());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P513)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_785 = f_expect_id_76();
}
F->s_786 = f_unlabeled_statement_127();
if ((F->match_785 != NULL)) {
if (((((((((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)22LL)) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)23LL))) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)24LL))) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)25LL))) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)26LL))) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)35LL))) && ((*(P518)rt_nil_check(F->s_786)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_786)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check(F->match_785))))) {
f_fail_23((*(P518)rt_nil_check(F->s_786)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P513)rt_nil_check(F->match_785))); b_; }));
}
(*(P518)rt_nil_check(F->s_786)).tag = F->match_785;
}
if ((F->labels_783 != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_786)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_786;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_787 = f_cur_line_55();
F->x_788 = NULL;
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
F->x_788 = f_nn_48(((rt_int)25LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_788 = f_nn_48(((rt_int)27LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).name = f_expect_id_76();
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_788 = f_nn_48(((rt_int)28LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P518)rt_nil_check(F->x_788)).a = f_expr_89();
}
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_788 = f_nn_48(((rt_int)30LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).name = f_expect_id_76();
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_787);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_788 = f_nn_48(((rt_int)34LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_788)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_788)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P518)rt_nil_check(F->x_788)).a = f_postfix_99();
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_789 = NULL;
F->tail_790 = NULL;
F->x_788 = f_nn_48(((rt_int)35LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_791 = NULL;
F->itail_792 = NULL;
F->more_793 = 1;
while (F->more_793) {
f_append_52(&F->invs_791, &F->itail_792, f_postfix_99());
F->more_793 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_789, &F->tail_790, f_arm_131(F->invs_791, f_body_103(), F->line_787));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P518)rt_nil_check(F->x_788)).a = F->head_789;
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_788 = f_nn_48(((rt_int)36LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P518)rt_nil_check(F->x_788)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_788;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_788 = f_nn_48(((rt_int)32LL), F->line_787);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_788)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_788)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P518)rt_nil_check(F->x_788)).c = f_expr_89();
}
F->result_ = F->x_788;
goto ret_;
}
{
F->target_794 = NULL;
F->target_794 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_788 = f_nn_48(((rt_int)20LL), F->line_787);
(*(P518)rt_nil_check(F->x_788)).a = F->target_794;
(*(P518)rt_nil_check(F->x_788)).b = f_expr_89();
} else {
F->x_788 = f_nn_48(((rt_int)21LL), F->line_787);
(*(P518)rt_nil_check(F->x_788)).a = F->target_794;
}
}
F->result_ = F->x_788;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_arm_131(P518 cond_128, P518 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_795 = NULL;
F->x_795 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P518)rt_nil_check(F->x_795)).a = F->cond_128;
(*(P518)rt_nil_check(F->x_795)).b = F->b_129;
F->result_ = F->x_795;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_796 = NULL;
F->x_796 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_797 = NULL;
F->tail_798 = NULL;
F->cond_799 = NULL;
F->go_800 = 1;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->cond_799 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_797, &F->tail_798, f_arm_131(F->cond_799, f_body_103(), (*(P518)rt_nil_check(F->x_796)).line));
while (F->go_800) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_799 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_797, &F->tail_798, f_arm_131(F->cond_799, f_body_103(), (*(P518)rt_nil_check(F->x_796)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P518)rt_nil_check(F->x_796)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_796)).b = f_body_103();
} else {
F->go_800 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P518)rt_nil_check(F->x_796)).a = F->head_797;
F->result_ = F->x_796;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_801 = NULL;
F->x_801 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_802 = NULL;
F->tail_803 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_801)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_804 = NULL;
F->ltail_805 = NULL;
F->more_806 = 1;
while (F->more_806) {
F->l_807 = NULL;
F->l_807 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P518)rt_nil_check(F->l_807)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->l_807)).b = f_expr_89();
}
f_append_52(&F->labs_804, &F->ltail_805, F->l_807);
F->more_806 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_802, &F->tail_803, f_arm_131(F->labs_804, f_body_103(), (*(P518)rt_nil_check(F->x_801)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_801)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_801)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P518)rt_nil_check(F->x_801)).b = F->head_802;
F->result_ = F->x_801;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_808 = NULL;
F->x_808 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_808)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_808)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P518)rt_nil_check(F->x_808)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->x_808)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P518)rt_nil_check(F->x_808)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P518)rt_nil_check(F->x_808)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_808;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_809 = NULL;
F->x_809 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_810 = NULL;
F->tail_811 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_809)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_812 = NULL;
F->h_812 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P518)rt_nil_check(F->h_812)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->h_812)).b = f_body_103();
f_append_52(&F->head_810, &F->tail_811, F->h_812);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_809)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_809)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P518)rt_nil_check(F->x_809)).b = F->head_810;
F->result_ = F->x_809;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_813 = NULL;
F->tail_814 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_813, &F->tail_814, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_813;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_815 = ((rt_int)0LL);
{ rt_int lo817 = ((rt_int)1LL), hi818 = ((*F->s_137)).len;
for (rt_int it819 = lo817; it819 <= hi818; it819++) {
F->i_816 = it819;
F->h_815 = rt_mod(rt_add(rt_mul(F->h_815, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_816)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_815;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_820 = NULL;
F->y_820 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_820 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_820)).name)), (*F->name_139))) {
F->result_ = F->y_820;
goto ret_;
}
F->y_820 = (*(P526)rt_nil_check(F->y_820)).chain;
}
if ((g_genv_549 != NULL)) {
F->y_820 = (*(P530)rt_nil_check(g_genv_549)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P530)rt_nil_check(g_genv_549)).lo, (*(P530)rt_nil_check(g_genv_549)).hi) - (*(P530)rt_nil_check(g_genv_549)).lo];
while ((F->y_820 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_820)).name)), (*F->name_139))) {
F->result_ = F->y_820;
goto ret_;
}
F->y_820 = (*(P526)rt_nil_check(F->y_820)).chain;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_lookup_decl_142(P518 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_821 = NULL;
F->y_821 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_141)).name))), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_821 != NULL)) {
if (((*(P526)rt_nil_check(F->y_821)).decl == F->d_141)) {
F->result_ = F->y_821;
goto ret_;
}
F->y_821 = (*(P526)rt_nil_check(F->y_821)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P526 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_822 = f_hash_138(&(*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)));
F->z_823 = NULL;
F->z_823 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_822, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->z_823 != NULL)) {
if (((((*(P526)rt_nil_check(F->z_823)).depth == g_depth_551) && rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_823)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_823)) && ((*(P526)rt_nil_check(F->z_823)).kind == (*(P526)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P526)rt_nil_check(F->y_143)).params, (*(P526)rt_nil_check(F->z_823)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_823 = (*(P526)rt_nil_check(F->z_823)).chain;
}
(*(P526)rt_nil_check(F->y_143)).depth = g_depth_551;
(*(P526)rt_nil_check(F->y_143)).chain = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_822, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
(*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_822, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo] = F->y_143;
(*(P526)rt_nil_check(F->y_143)).stack = g_scope_stack_552;
g_scope_stack_552 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P526 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P528 a_148, P528 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_824 = NULL;
F->x_824 = F->a_148;
F->y_825 = NULL;
F->y_825 = F->b_149;
while (((F->x_824 != NULL) && (F->y_825 != NULL))) {
if ((!f_same_164((*(P528)rt_nil_check(F->x_824)).t, (*(P528)rt_nil_check(F->y_825)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_824 = (*(P528)rt_nil_check(F->x_824)).next;
F->y_825 = (*(P528)rt_nil_check(F->y_825)).next;
}
F->result_ = ((F->x_824 == NULL) && (F->y_825 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_551 = rt_add(g_depth_551, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_552 != NULL) && ((*(P526)rt_nil_check(g_scope_stack_552)).depth == g_depth_551))) {
(*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*(P513)rt_nil_check((*(P526)rt_nil_check(g_scope_stack_552)).name))), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo] = (*(P526)rt_nil_check(g_scope_stack_552)).chain;
g_scope_stack_552 = (*(P526)rt_nil_check(g_scope_stack_552)).stack;
}
g_depth_551 = rt_sub(g_depth_551, ((rt_int)1LL));
ret_:
  return;
}

static P526 f_new_sym_155(rt_int kind_153, P513 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_826 = NULL;
{ R527 *cell827 = rt_alloc(sizeof(R527));
(*cell827).name = NULL;
(*cell827).t = NULL;
(*cell827).c = NULL;
(*cell827).access = NULL;
(*cell827).cname = NULL;
(*cell827).st = NULL;
(*cell827).decl = NULL;
(*cell827).params = NULL;
(*cell827).result = NULL;
(*cell827).members = NULL;
(*cell827).mnext = NULL;
(*cell827).binds = NULL;
(*cell827).insts = NULL;
(*cell827).env = NULL;
(*cell827).chain = NULL;
(*cell827).stack = NULL;
F->y_826 = cell827;
}
(*(P526)rt_nil_check(F->y_826)).kind = F->kind_153;
(*(P526)rt_nil_check(F->y_826)).name = F->name_154;
F->result_ = F->y_826;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_828 = NULL;
{ R523 *cell829 = rt_alloc(sizeof(R523));
(*cell829).name = NULL;
(*cell829).lits = NULL;
(*cell829).elem = NULL;
(*cell829).idx = NULL;
(*cell829).idx2 = NULL;
(*cell829).elemcons = NULL;
(*cell829).elemst = NULL;
(*cell829).under = NULL;
(*cell829).tparams = NULL;
(*cell829).ocap = NULL;
(*cell829).fields = NULL;
(*cell829).target = NULL;
(*cell829).decl = NULL;
(*cell829).cname = NULL;
(*cell829).initp = NULL;
(*cell829).tpsyms = NULL;
(*cell829).gen = NULL;
(*cell829).gbinds = NULL;
(*cell829).next = NULL;
F->t_828 = cell829;
}
(*(P522)rt_nil_check(F->t_828)).kind = F->kind_156;
F->result_ = F->t_828;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P520 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_830 = NULL;
{ R521 *cell831 = rt_alloc(sizeof(R521));
(*cell831).lo = NULL;
(*cell831).hi = NULL;
(*cell831).lo2 = NULL;
(*cell831).hi2 = NULL;
(*cell831).slen = NULL;
(*cell831).args = NULL;
F->c_830 = cell831;
}
F->result_ = F->c_830;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P518 a_159, P518 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_832 = NULL;
F->x_832 = F->a_159;
F->y_833 = NULL;
F->y_833 = F->b_160;
while (((F->x_832 != NULL) && (F->y_833 != NULL))) {
if ((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_832)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->y_833)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_832 = (*(P518)rt_nil_check(F->x_832)).next;
F->y_833 = (*(P518)rt_nil_check(F->y_833)).next;
}
F->result_ = ((F->x_832 == NULL) && (F->y_833 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P522 a_162, P522 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P522)rt_nil_check(F->a_162)).kind != (*(P522)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P522)rt_nil_check(F->a_162)).lits, (*(P522)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P522)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P522)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P522)rt_nil_check(F->a_162)).elem, (*(P522)rt_nil_check(F->b_163)).elem) && f_same_164((*(P522)rt_nil_check(F->a_162)).idx, (*(P522)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P522)rt_nil_check(F->a_162)).elem, (*(P522)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P522)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_834 = NULL;
F->f_834 = (*(P522)rt_nil_check(F->a_162)).fields;
F->g_835 = NULL;
F->g_835 = (*(P522)rt_nil_check(F->b_163)).fields;
while (((F->f_834 != NULL) && (F->g_835 != NULL))) {
if (((!rt_str_eq((*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_834)).name)), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->g_835)).name)))) || (!f_same_164((*(P524)rt_nil_check(F->f_834)).t, (*(P524)rt_nil_check(F->g_835)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_834 = (*(P524)rt_nil_check(F->f_834)).next;
F->g_835 = (*(P524)rt_nil_check(F->g_835)).next;
}
F->result_ = ((F->f_834 == NULL) && (F->g_835 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_base_of_166(P522 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P522)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P522)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P522)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P520 f_base_cons_169(P522 t_167, P520 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P522)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P522)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P522)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P522)rt_nil_check(F->t_167)).under, (*(P522)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P522 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel836 = (*(P522)rt_nil_check(F->t_170)).kind;
if (0 || (sel836 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel836 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel836 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel836 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel836 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel836 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel836 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel836 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel836 == ((rt_int)11LL))) {
F->result_ = rt_str("NIL", 3);
goto ret_;
} else {
F->result_ = rt_str("this type", 9);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_check_type_175(P522 got_172, P522 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P522)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P522)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P522 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel837 = (*(P522)rt_nil_check(F->t_176)).kind;
if (0 || (sel837 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel837 == ((rt_int)2LL)) || (sel837 == ((rt_int)4LL)) || (sel837 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel837 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel837 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel837 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel837 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel837 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel837 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel837 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P522)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P522)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P522)rt_nil_check(F->t_176)).forward) && (!(*(P522)rt_nil_check(F->t_176)).defined))) {
(*(P522)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P522 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_838 = NULL;
F->f_838 = (*(P522)rt_nil_check(F->t_178)).fields;
F->s_839 = NULL;
F->s_839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_838 != NULL)) {
F->s_839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->s_839)), f_ctype_177((*(P524)rt_nil_check(F->f_838)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_838)).name)))), rt_str("; ", 2)); b_; }));
F->f_838 = (*(P524)rt_nil_check(F->f_838)).next;
}
F->result_ = (*(P513)rt_nil_check(F->s_839));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P522 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_840 = NULL;
F->u_840 = g_all_types_553;
if ((((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P522)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_274(F->t_180);
if (((*(P522)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P522)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_840 != NULL)) {
if ((((*(P522)rt_nil_check(F->u_840)).kind == (*(P522)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_840, F->t_180))) {
(*(P522)rt_nil_check(F->t_180)).cname = (*(P522)rt_nil_check(F->u_840)).cname;
goto ret_;
}
F->u_840 = (*(P522)rt_nil_check(F->u_840)).next;
}
}
if ((((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P522)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P522)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P522)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P522)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P522)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P522)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P522)rt_nil_check(F->t_180)).next = g_all_types_553;
g_all_types_553 = F->t_180;
if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_841 = NULL;
F->target_841 = (*(P522)rt_nil_check(F->t_180)).target;
if (((*(P522)rt_nil_check(F->target_841)).kind == ((rt_int)7LL))) {
if (((*(P522)rt_nil_check(F->target_841)).cname == NULL)) {
(*(P522)rt_nil_check(F->target_841)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P522)rt_nil_check(F->target_841)).next = g_all_types_553;
g_all_types_553 = F->target_841;
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_841)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_841)).cname))), rt_str(";", 1)); b_; }));
(*(P522)rt_nil_check(F->target_841)).forward = 1;
}
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_841)).cname))), rt_str(" *", 2)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_841)), rt_str(" *", 2)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P522)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_842 = NULL;
F->p_842 = (*(P522)rt_nil_check(F->t_180)).tparams;
F->fs_843 = NULL;
F->fs_843 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_842 != NULL)) {
F->fs_843 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->fs_843)), f_ctype_177(f_tparam_type_210(F->t_180, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_842)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_842)).name)))), rt_str("; ", 2)); b_; }));
F->p_842 = (*(P518)rt_nil_check(F->p_842)).next;
}
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P513)rt_nil_check(F->fs_843))), f_ctype_177((*(P522)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P522)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_844 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_845 = NULL;
F->tail_846 = NULL;
F->start_847 = ((rt_int)1LL);
{ rt_int lo849 = ((rt_int)1LL), hi850 = (F->names_844).len;
for (rt_int it851 = lo849; it851 <= hi850; it851++) {
F->i_848 = it851;
if ((rt_str_get(F->names_844, F->i_848) == 32)) {
F->lit_852 = NULL;
F->lit_852 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P518)rt_nil_check(F->lit_852)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_844, F->start_847, rt_sub(F->i_848, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_845, &F->tail_846, F->lit_852);
F->start_847 = rt_add(F->i_848, ((rt_int)1LL));
}
}
}
g_ty_ascii_582 = f_new_typ_157(((rt_int)4LL));
(*(P522)rt_nil_check(g_ty_ascii_582)).lits = F->head_845;
(*(P522)rt_nil_check(g_ty_ascii_582)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P518 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_853 = ((rt_int)0LL);
F->l_854 = NULL;
F->l_854 = F->lits_183;
while ((F->l_854 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->l_854)).name)), (*F->name_184))) {
F->result_ = F->i_853;
goto ret_;
}
F->i_853 = rt_add(F->i_853, ((rt_int)1LL));
F->l_854 = (*(P518)rt_nil_check(F->l_854)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_resolve_subtype_188(P518 st_186, P520 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_855 = NULL;
F->dummy_857 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel858 = (*(P518)rt_nil_check(F->st_186)).kind;
if (0 || (sel858 == ((rt_int)70LL))) {
if (((*(P518)rt_nil_check(F->st_186)).a != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).a, g_ty_int_579, &F->dummy_857); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_579, &F->dummy_857); b_; }));
(*(P520)rt_nil_check(F->c_187v)).mlo = f_manifest_217((*(P518)rt_nil_check(F->st_186)).a, &F->ok_856);
(*(P520)rt_nil_check(F->c_187v)).hasm = F->ok_856;
(*(P520)rt_nil_check(F->c_187v)).mhi = f_manifest_217((*(P518)rt_nil_check(F->st_186)).b, &F->ok_856);
(*(P520)rt_nil_check(F->c_187v)).hasm = ((*(P520)rt_nil_check(F->c_187v)).hasm && F->ok_856);
}
F->result_ = g_ty_int_579;
goto ret_;
} else if (0 || (sel858 == ((rt_int)71LL))) {
F->result_ = g_ty_float_581;
goto ret_;
} else if (0 || (sel858 == ((rt_int)72LL))) {
F->t_855 = f_new_typ_157(((rt_int)4LL));
(*(P522)rt_nil_check(F->t_855)).lits = (*(P518)rt_nil_check(F->st_186)).a;
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, F->t_855, &F->dummy_857); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).c, F->t_855, &F->dummy_857); b_; }));
}
F->result_ = F->t_855;
goto ret_;
} else if (0 || (sel858 == ((rt_int)73LL))) {
F->t_855 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_855, g_ty_ascii_582))) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_579, &F->dummy_857); b_; }));
}
F->result_ = g_ty_string_583;
goto ret_;
} else if (0 || (sel858 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P518)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_859 = NULL;
F->ic2_860 = NULL;
F->ec_861 = NULL;
F->it_862 = NULL;
F->it_862 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ic_859);
F->et_863 = NULL;
F->et_863 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).b, &F->ec_861);
F->ic_859 = f_base_cons_169(F->it_862, F->ic_859);
F->t_855 = f_new_typ_157(((rt_int)6LL));
(*(P522)rt_nil_check(F->t_855)).idx = F->it_862;
(*(P522)rt_nil_check(F->t_855)).elem = F->et_863;
(*(P522)rt_nil_check(F->t_855)).elemcons = F->ec_861;
(*(P522)rt_nil_check(F->t_855)).elemst = (*(P518)rt_nil_check(F->st_186)).b;
if (((*(P520)rt_nil_check(F->ic_859)).lo != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = (*(P520)rt_nil_check(F->ic_859)).lo;
(*(P520)rt_nil_check(F->c_187v)).hi = (*(P520)rt_nil_check(F->ic_859)).hi;
} else if (((*(P522)rt_nil_check(f_base_of_166(F->it_862))).kind == ((rt_int)4LL))) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->it_862))).lits), ((rt_int)1LL))); b_; }));
}
(*(P520)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P522)rt_nil_check(F->t_855)).idx2 = f_resolve_subtype_188((*(P518)rt_nil_check((*(P518)rt_nil_check(F->st_186)).a)).next, &F->ic2_860);
if (((*(P520)rt_nil_check(F->ic2_860)).lo != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo2 = (*(P520)rt_nil_check(F->ic2_860)).lo;
(*(P520)rt_nil_check(F->c_187v)).hi2 = (*(P520)rt_nil_check(F->ic2_860)).hi;
} else if (((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_855)).idx2)).kind == ((rt_int)4LL))) {
(*(P520)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_855)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_855;
goto ret_;
} else if (0 || (sel858 == ((rt_int)77LL))) {
F->t_855 = f_new_typ_157(((rt_int)16LL));
{
F->ec_864 = NULL;
(*(P522)rt_nil_check(F->t_855)).elem = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ec_864);
(*(P522)rt_nil_check(F->t_855)).elemcons = F->ec_864;
}
F->result_ = F->t_855;
goto ret_;
} else if (0 || (sel858 == ((rt_int)75LL))) {
F->t_855 = f_new_typ_157(((rt_int)7LL));
{
F->comp_865 = NULL;
F->comp_865 = (*(P518)rt_nil_check(F->st_186)).a;
F->tail_866 = NULL;
while ((F->comp_865 != NULL)) {
F->cc_867 = NULL;
F->f_868 = NULL;
{ R525 *cell869 = rt_alloc(sizeof(R525));
(*cell869).name = NULL;
(*cell869).t = NULL;
(*cell869).c = NULL;
(*cell869).st = NULL;
(*cell869).next = NULL;
F->f_868 = cell869;
}
(*(P524)rt_nil_check(F->f_868)).name = (*(P518)rt_nil_check(F->comp_865)).name;
(*(P524)rt_nil_check(F->f_868)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->comp_865)).a, &F->cc_867);
(*(P524)rt_nil_check(F->f_868)).c = F->cc_867;
(*(P524)rt_nil_check(F->f_868)).st = (*(P518)rt_nil_check(F->comp_865)).a;
if ((F->tail_866 == NULL)) {
(*(P522)rt_nil_check(F->t_855)).fields = F->f_868;
} else {
(*(P524)rt_nil_check(F->tail_866)).next = F->f_868;
}
F->tail_866 = F->f_868;
F->comp_865 = (*(P518)rt_nil_check(F->comp_865)).next;
}
}
F->result_ = F->t_855;
goto ret_;
} else if (0 || (sel858 == ((rt_int)79LL))) {
F->result_ = g_ty_file_585;
goto ret_;
} else if (0 || (sel858 == ((rt_int)78LL))) {
if (((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P526)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)))) {
F->gt_870 = NULL;
F->gt_870 = f_copy_node_456((*(P518)rt_nil_check(F->st_186)).a);
(*(P518)rt_nil_check(F->gt_870)).next = NULL;
F->result_ = f_instantiate_type_405(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_870, (*(P518)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P518)rt_nil_check(F->st_186)).line);
goto ret_;
}
{
F->ec_871 = NULL;
F->t_855 = f_new_typ_157(((rt_int)12LL));
(*(P522)rt_nil_check(F->t_855)).elem = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ec_871);
(*(P522)rt_nil_check(F->t_855)).elemcons = F->ec_871;
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_579, &F->dummy_857); b_; }));
}
}
F->result_ = F->t_855;
goto ret_;
} else if (0 || (sel858 == ((rt_int)80LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_580;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_582;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_587;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_588;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_589;
goto ret_;
}
{
F->y_872 = NULL;
F->y_872 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)));
if ((F->y_872 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name))); b_; }));
}
if ((((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)10LL)) && (((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_872)).decl)).b)).kind == ((rt_int)43LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_872)).decl)).b)).kind == ((rt_int)44LL))))) {
F->result_ = f_instantiate_type_405(F->y_872, (*(P518)rt_nil_check(F->st_186)).a, (*(P518)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P518)rt_nil_check(F->st_186)).line);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->y_872)).t != NULL)) && ((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_872)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_872, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)5LL))) && ((*(P526)rt_nil_check(F->y_872)).t != NULL))) {
if (((*(P526)rt_nil_check(F->y_872)).c != NULL)) {
F->c_187v = (*(P526)rt_nil_check(F->y_872)).c;
}
F->result_ = (*(P526)rt_nil_check(F->y_872)).t;
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->y_872)).decl != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_872)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_872, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_872)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P526)rt_nil_check(F->y_872)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  return F->result_;
}

static int f_opened_190(P522 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_873 = NULL;
F->c_873 = g_caps_567;
if (((((*(P522)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P522)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P518)rt_nil_check((*(P522)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_873 != NULL)) {
if (((*(P538)rt_nil_check(F->c_873)).d == (*(P522)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_873 = (*(P538)rt_nil_check(F->c_873)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193) {
  struct f_replace_all_194fr *F = rt_alloc(sizeof *F);
F->s_191 = s_191;
F->pat_192 = pat_192;
F->r_193 = r_193;
F->i_874 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_874, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_874, rt_sub(rt_add(F->i_874, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_874, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_874, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_874 = rt_add(F->i_874, ((rt_int)1LL));
}
F->result_ = (*F->s_191);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_subst_196(rstr *s_195) {
  struct f_subst_196fr *F = rt_alloc(sizeof *F);
F->s_195 = s_195;
F->l_875 = NULL;
F->l_875 = g_psub_569;
F->r_876 = NULL;
F->r_876 = f_mk_3(&(*F->s_195));
while ((F->l_875 != NULL)) {
F->r_876 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P513)rt_nil_check(F->r_876)), &(*(P513)rt_nil_check((*(P532)rt_nil_check(F->l_875)).s)), &(*(P513)rt_nil_check((*(P532)rt_nil_check((*(P532)rt_nil_check(F->l_875)).next)).s))); b_; }));
F->l_875 = (*(P532)rt_nil_check((*(P532)rt_nil_check(F->l_875)).next)).next;
}
F->result_ = (*(P513)rt_nil_check(F->r_876));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_new_type_200(P526 y_197, P518 st_198, P520 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_877 = NULL;
F->d_877 = (*(P526)rt_nil_check(F->y_197)).decl;
F->p_878 = NULL;
F->uc_879 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P526)rt_nil_check(F->y_197)).t == NULL)) {
(*(P526)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).name = (*(P526)rt_nil_check(F->y_197)).name;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).decl = F->d_877;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tparams = (*(P518)rt_nil_check(F->d_877)).b;
if ((g_caps_567 != NULL)) {
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).ocap = (*(P538)rt_nil_check(g_caps_567)).d;
}
f_open_scope_151();
F->p_878 = (*(P518)rt_nil_check(F->d_877)).b;
while ((F->p_878 != NULL)) {
F->z_880 = NULL;
F->z_880 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_878)).name);
F->zc_881 = NULL;
(*(P526)rt_nil_check(F->z_880)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_878)).a, &F->zc_881);
(*(P526)rt_nil_check(F->z_880)).mnext = (*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tpsyms;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tpsyms = F->z_880;
(*(P526)rt_nil_check(F->z_880)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_878)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_880, (*(P518)rt_nil_check(F->d_877)).line);
F->p_878 = (*(P518)rt_nil_check(F->p_878)).next;
}
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_877)).a, &F->uc_879);
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).elemcons = F->uc_879;
f_close_scope_152();
}
(*(P520)rt_nil_check(F->c_199v)).args = (*(P518)rt_nil_check(F->st_198)).b;
F->result_ = (*(P526)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P522 t_202, P520 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
f_make_storage_214(&(*F->lval_201), F->t_202, F->c_203);
if (((*(P522)rt_nil_check(F->t_202)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P522)rt_nil_check(F->t_202)).initp, &(*F->lval_201)); b_; }));
}
ret_:
  return;
}

static rstr f_init_call_207(P526 y_205, rstr *lval_206) {
  struct f_init_call_207fr *F = rt_alloc(sizeof *F);
F->y_205 = y_205;
F->lval_206 = lval_206;
F->link_882 = NULL;
F->link_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P526)rt_nil_check(F->y_205)).level > ((rt_int)0LL))) {
F->link_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo884 = ((rt_int)1LL), hi885 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_205)).level);
for (rt_int it886 = lo884; it886 <= hi885; it886++) {
F->i_883 = it886;
F->link_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_882)), rt_str("->up", 4)); b_; }));
}
}
F->link_882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_882)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_205)).cname)), rt_str("(", 1)), (*(P513)rt_nil_check(F->link_882))), rt_str("&", 1)), (*F->lval_206)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_tparam_type_210(P522 t_208, rstr *name_209) {
  struct f_tparam_type_210fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->name_209 = name_209;
F->z_887 = NULL;
F->z_887 = (*(P522)rt_nil_check(F->t_208)).tpsyms;
while ((F->z_887 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_887)).name)), (*F->name_209))) {
F->result_ = (*(P526)rt_nil_check(F->z_887)).t;
goto ret_;
}
F->z_887 = (*(P526)rt_nil_check(F->z_887)).mnext;
}
F->result_ = g_ty_int_579;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_make_storage_214(rstr *lval_211, P522 t_212, P520 c_213) {
  struct f_make_storage_214fr *F = rt_alloc(sizeof *F);
F->lval_211 = lval_211;
F->t_212 = t_212;
F->c_213 = c_213;
if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)15LL))) {
F->p_888 = NULL;
F->p_888 = (*(P522)rt_nil_check(F->t_212)).tparams;
F->a_889 = NULL;
F->a_889 = (*(P520)rt_nil_check(F->c_213)).args;
F->uc_890 = NULL;
F->ut_891 = NULL;
F->at_892 = NULL;
if ((f_list_len_54(F->a_889) != f_list_len_54(F->p_888))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_212)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_888))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_888 != NULL)) {
F->pt_893 = f_tparam_type_210(F->t_212, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_888)).name)));
F->v_894 = rt_str_copy(f_gexpr_454(F->a_889, F->pt_893, &F->at_892));
f_check_type_175(F->at_892, F->pt_893, (*(P518)rt_nil_check(F->a_889)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_888)).name)))), rt_str(" = ", 3)), F->v_894), rt_str(";", 1)); b_; }));
F->p_888 = (*(P518)rt_nil_check(F->p_888)).next;
F->a_889 = (*(P518)rt_nil_check(F->a_889)).next;
}
{
F->saved_895 = NULL;
F->saved_895 = g_psub_569;
F->p_888 = (*(P522)rt_nil_check(F->t_212)).tparams;
while ((F->p_888 != NULL)) {
F->l1_896 = NULL;
F->l2_897 = NULL;
{ R533 *cell898 = rt_alloc(sizeof(R533));
(*cell898).s = NULL;
(*cell898).next = NULL;
F->l1_896 = cell898;
}
{ R533 *cell899 = rt_alloc(sizeof(R533));
(*cell899).s = NULL;
(*cell899).next = NULL;
F->l2_897 = cell899;
}
(*(P532)rt_nil_check(F->l1_896)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_888)).name)))), rt_str("@", 1)); b_; }));
(*(P532)rt_nil_check(F->l2_897)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_888)).name)))); b_; }));
(*(P532)rt_nil_check(F->l1_896)).next = F->l2_897;
(*(P532)rt_nil_check(F->l2_897)).next = g_psub_569;
g_psub_569 = F->l1_896;
F->p_888 = (*(P518)rt_nil_check(F->p_888)).next;
}
if (((*(P522)rt_nil_check(F->t_212)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_211), (*(P522)rt_nil_check(F->t_212)).under, (*(P522)rt_nil_check(F->t_212)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(".all", 4)); b_; }), (*(P522)rt_nil_check(F->t_212)).under, (*(P522)rt_nil_check(F->t_212)).elemcons);
}
g_psub_569 = F->saved_895;
}
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)12LL))) {
if (((*(P520)rt_nil_check(F->c_213)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_211)), rt_str(", ", 2)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P522)rt_nil_check(F->t_212)).elem)), rt_str("), ", 3)), f_mcopy_219((*(P522)rt_nil_check(F->t_212)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_211)), rt_str(");", 2)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)5LL))) {
if (((*(P520)rt_nil_check(F->c_213)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)6LL))) {
if (((*(P520)rt_nil_check(F->c_213)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".lo = ", 6)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).lo)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".hi = ", 6)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).hi)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).lo2)))), rt_str("; ", 2)), (*F->lval_211)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_213)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P522)rt_nil_check(F->t_212)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_211)), rt_str("));", 3)); b_; }));
if ((((((((((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)5LL)) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)6LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)7LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)15LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)8LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)12LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)13LL))) || ((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_212)).elem)).kind == ((rt_int)14LL)))) {
F->i_900 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_900), rt_str(" = 0; ", 6)), F->i_900), rt_str(" < RT_CNT(", 10)), (*F->lval_211)), rt_str("); ", 3)), F->i_900), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p[", 3)), F->i_900), rt_str("]", 1)); b_; }), (*(P522)rt_nil_check(F->t_212)).elem, (*(P522)rt_nil_check(F->t_212)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)7LL))) {
F->f_901 = NULL;
F->f_901 = (*(P522)rt_nil_check(F->t_212)).fields;
while ((F->f_901 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_901)).name)))); b_; }), (*(P524)rt_nil_check(F->f_901)).t, (*(P524)rt_nil_check(F->f_901)).c);
F->f_901 = (*(P524)rt_nil_check(F->f_901)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_217(P518 e_215, int *ok_216) {
  struct f_manifest_217fr *F = rt_alloc(sizeof *F);
F->e_215 = e_215;
F->ok_216 = ok_216;
F->ok_216v = *F->ok_216;
F->ok_216v = 0;
if (((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)1LL))) {
F->ok_216v = 1;
F->result_ = (*(P518)rt_nil_check(F->e_215)).ival;
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_217((*(P518)rt_nil_check(F->e_215)).a, &F->ok_216v);
goto ret_;
} else if ((((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)8LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("-", 1)))) {
F->a_902 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->result_ = rt_neg(F->a_902);
goto ret_;
} else if ((((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("+", 1)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("*", 1))))) {
F->a_902 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->b_903 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).b, &F->ok2_904);
F->ok_216v = (F->ok_216v && F->ok2_904);
if ((!F->ok_216v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_902, F->b_903);
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_902, F->b_903);
goto ret_;
}
F->result_ = rt_mul(F->a_902, F->b_903);
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)7LL))) {
F->y_905 = NULL;
F->y_905 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)));
if ((((F->y_905 != NULL) && ((*(P526)rt_nil_check(F->y_905)).kind == ((rt_int)2LL))) && (*(P526)rt_nil_check(F->y_905)).hasmv)) {
F->ok_216v = 1;
F->result_ = (*(P526)rt_nil_check(F->y_905)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_216) = F->ok_216v;
  return F->result_;
}

static rstr f_mcopy_219(P522 t_218) {
  struct f_mcopy_219fr *F = rt_alloc(sizeof *F);
F->t_218 = t_218;
F->ct_906 = rt_str_copy(f_ctype_177(F->t_218));
F->name_907 = rt_str_new(rt_add((F->ct_906).len, ((rt_int)3LL)));
rt_str_assign(&F->name_907, rt_str_cat(rt_str("mc_", 3), F->ct_906));
F->l_908 = NULL;
if ((!f_seen_name_240(g_mcopies_578, &F->name_907))) {
{ R533 *cell909 = rt_alloc(sizeof(R533));
(*cell909).s = NULL;
(*cell909).next = NULL;
F->l_908 = cell909;
}
(*(P532)rt_nil_check(F->l_908)).s = f_mk_3(&F->name_907);
(*(P532)rt_nil_check(F->l_908)).next = g_mcopies_578;
g_mcopies_578 = F->l_908;
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_907), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_907), rt_str("(void *d, const void *s) { *(", 29)), F->ct_906), rt_str(" *)d = ", 7)), f_copy_code_229(F->t_218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_906), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_907;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_221(P522 t_220) {
  struct f_composite_221fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->result_ = ((((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)7LL))) || (((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_220)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_226(rstr *lval_222, P522 t_223, rstr *v_224, P520 c_225) {
  struct f_assign_code_226fr *F = rt_alloc(sizeof *F);
F->lval_222 = lval_222;
F->t_223 = t_223;
F->v_224 = v_224;
F->c_225 = c_225;
if ((((*(P522)rt_nil_check(F->t_223)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_223)).tparams == NULL))) {
F->result_ = f_assign_code_226(&(*F->lval_222), (*(P522)rt_nil_check(F->t_223)).under, &(*F->v_224), F->c_225);
goto ret_;
}
if (f_composite_221(F->t_223)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_223)), rt_str("(&", 2)), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_223)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->t_223)).kind == ((rt_int)6LL)) || ((*(P522)rt_nil_check(F->t_223)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_223)), rt_str("(&", 2)), (*F->lval_222)), rt_str(", ", 2)), (*F->v_224)), rt_str(");", 2));
goto ret_;
} else if (((((*(P522)rt_nil_check(F->t_223)).kind == ((rt_int)1LL)) && (F->c_225 != NULL)) && (*(P520)rt_nil_check(F->c_225)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_222), rt_str(" = rt_range(", 12)), (*F->v_224)), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check(F->c_225)).mlo)), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check(F->c_225)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_222), rt_str(" = ", 3)), (*F->v_224)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_229(P522 t_227, rstr *v_228) {
  struct f_copy_code_229fr *F = rt_alloc(sizeof *F);
F->t_227 = t_227;
F->v_228 = v_228;
if ((((*(P522)rt_nil_check(F->t_227)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_227)).tparams == NULL))) {
F->result_ = f_copy_code_229((*(P522)rt_nil_check(F->t_227)).under, &(*F->v_228));
goto ret_;
}
if (f_composite_221(F->t_227)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_227)), rt_str("(", 1)), (*F->v_228)), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_227)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_228)), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->t_227)).kind == ((rt_int)6LL)) || ((*(P522)rt_nil_check(F->t_227)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_227)), rt_str("(", 1)), (*F->v_228)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_228);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_233(P522 t_230, rstr *a_231, rstr *b_232) {
  struct f_eq_code_233fr *F = rt_alloc(sizeof *F);
F->t_230 = t_230;
F->a_231 = a_231;
F->b_232 = b_232;
if ((((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_230)).tparams == NULL))) {
F->result_ = f_eq_code_233((*(P522)rt_nil_check(F->t_230)).under, &(*F->a_231), &(*F->b_232));
goto ret_;
}
if (f_composite_221(F->t_230)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_230)), rt_str("(", 1)), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)6LL)) || ((*(P522)rt_nil_check(F->t_230)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_230)), rt_str("(", 1)), (*F->a_231)), rt_str(", ", 2)), (*F->b_232)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_231)), rt_str(" == ", 4)), (*F->b_232)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_237(rstr *lval_234, P522 t_235, rstr *v_236) {
  struct f_elem_assign_237fr *F = rt_alloc(sizeof *F);
F->lval_234 = lval_234;
F->t_235 = t_235;
F->v_236 = v_236;
F->result_ = f_assign_code_226(&(*F->lval_234), F->t_235, &(*F->v_236), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_240(P532 l_238, rstr *s_239) {
  struct f_seen_name_240fr *F = rt_alloc(sizeof *F);
F->l_238 = l_238;
F->s_239 = s_239;
F->p_910 = NULL;
F->p_910 = F->l_238;
while ((F->p_910 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P532)rt_nil_check(F->p_910)).s)), (*F->s_239))) {
F->result_ = 1;
goto ret_;
}
F->p_910 = (*(P532)rt_nil_check(F->p_910)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_241(void) {
  struct f_emit_helpers_241fr *F = rt_alloc(sizeof *F);
F->order_911 = NULL;
F->t_912 = NULL;
F->t_912 = g_all_types_553;
F->done_913 = NULL;
while ((F->t_912 != NULL)) {
if ((f_composite_221(F->t_912) && (!f_seen_name_240(F->done_913, &(*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_912)).cname)))))) {
F->l_914 = NULL;
F->c_915 = rt_str_new(((*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_912)).cname))).len);
rt_str_assign(&F->c_915, (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_912)).cname)));
{ R533 *cell916 = rt_alloc(sizeof(R533));
(*cell916).s = NULL;
(*cell916).next = NULL;
F->l_914 = cell916;
}
(*(P532)rt_nil_check(F->l_914)).s = (*(P522)rt_nil_check(F->t_912)).cname;
(*(P532)rt_nil_check(F->l_914)).next = F->done_913;
F->done_913 = F->l_914;
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_915), rt_str("(", 1)), F->c_915), rt_str(" *d, ", 5)), F->c_915), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_915), rt_str(" cp_", 4)), F->c_915), rt_str("(", 1)), F->c_915), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_915), rt_str("(", 1)), F->c_915), rt_str(" a, ", 4)), F->c_915), rt_str(" b);", 4)); b_; }));
f_helper_bodies_243(F->t_912);
}
F->t_912 = (*(P522)rt_nil_check(F->t_912)).next;
}
ret_:
  return;
}

static void f_helper_bodies_243(P522 t_242) {
  struct f_helper_bodies_243fr *F = rt_alloc(sizeof *F);
F->t_242 = t_242;
F->c_917 = rt_str_new(((*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_242)).cname))).len);
rt_str_assign(&F->c_917, (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_242)).cname)));
F->b_918 = NULL;
F->b_918 = g_out_funcs_559;
if (((*(P522)rt_nil_check(F->t_242)).kind == ((rt_int)6LL))) {
F->e_919 = NULL;
F->e_919 = (*(P522)rt_nil_check(F->t_242)).elem;
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" *d, ", 5)), F->c_917), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_919, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_917), rt_str(" cp_", 4)), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_917), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_919)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_229(F->e_919, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" a, ", 4)), F->c_917), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_233(F->e_919, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P522)rt_nil_check(F->t_242)).kind == ((rt_int)15LL))) {
F->p_920 = NULL;
F->p_920 = (*(P522)rt_nil_check(F->t_242)).tparams;
F->pc_921 = NULL;
F->pc_921 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_920 != NULL)) {
F->pc_921 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->pc_921)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_920)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_920)).name)))); b_; }));
F->p_920 = (*(P518)rt_nil_check(F->p_920)).next;
}
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" *d, ", 5)), F->c_917), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P513)rt_nil_check(F->pc_921))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_917), rt_str(" cp_", 4)), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" s) { s.all = ", 14)), f_copy_code_229((*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" a, ", 4)), F->c_917), rt_str(" b) { return ", 13)), f_eq_code_233((*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_922 = NULL;
F->f_922 = (*(P522)rt_nil_check(F->t_242)).fields;
F->conds_923 = NULL;
F->conds_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" *d, ", 5)), F->c_917), rt_str(" s) {", 5)); b_; }));
while ((F->f_922 != NULL)) {
F->fn_924 = rt_str_copy(f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_922)).name))));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_924); b_; }), (*(P524)rt_nil_check(F->f_922)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_924); b_; }))); b_; }));
F->f_922 = (*(P524)rt_nil_check(F->f_922)).next;
}
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_917), rt_str(" cp_", 4)), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_917), rt_str(" d = s;", 7)); b_; }));
F->f_922 = (*(P522)rt_nil_check(F->t_242)).fields;
while ((F->f_922 != NULL)) {
F->fn_925 = rt_str_copy(f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_922)).name))));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_925), rt_str(" = ", 3)), f_copy_code_229((*(P524)rt_nil_check(F->f_922)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_925); b_; }))), rt_str(";", 1)); b_; }));
F->conds_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_923)), rt_str(" && ", 4)), f_eq_code_233((*(P524)rt_nil_check(F->f_922)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_925); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_925); b_; }))); b_; }));
F->f_922 = (*(P524)rt_nil_check(F->f_922)).next;
}
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" a, ", 4)), F->c_917), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P513)rt_nil_check(F->conds_923))), rt_str(";", 1)); b_; }));
f_put_27(F->b_918, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_245(P518 elems_244) {
  struct f_declare_body_245fr *F = rt_alloc(sizeof *F);
F->elems_244 = elems_244;
F->e_926 = NULL;
F->e_926 = F->elems_244;
while ((F->e_926 != NULL)) {
if ((((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)41LL)) && ((*(P518)rt_nil_check(F->e_926)).flag == ((rt_int)0LL)))) {
f_manifest_const_247(F->e_926);
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)47LL))) {
f_gen_capsule_255(F->e_926);
} else if (((((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)48LL)) && ((*(P518)rt_nil_check(F->e_926)).flag != ((rt_int)1LL))) && ((*(P518)rt_nil_check(F->e_926)).flag != ((rt_int)3LL)))) {
f_gen_expose_272(F->e_926);
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)49LL))) {
F->y_927 = NULL;
F->y_927 = f_new_sym_155(((rt_int)7LL), (*(P518)rt_nil_check(F->e_926)).name);
(*(P526)rt_nil_check(F->y_927)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_926)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_927, (*(P518)rt_nil_check(F->e_926)).line);
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_927)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_561, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_927)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_926)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)42LL))) {
F->y_928 = NULL;
F->y_928 = f_new_sym_155(((rt_int)6LL), (*(P518)rt_nil_check(F->e_926)).name);
(*(P526)rt_nil_check(F->y_928)).st = (*(P518)rt_nil_check(F->e_926)).a;
f_define_145(F->y_928, (*(P518)rt_nil_check(F->e_926)).line);
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)44LL))) {
F->y_929 = NULL;
F->y_929 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->e_926)).name);
F->t_930 = NULL;
F->t_930 = f_new_typ_157(((rt_int)8LL));
(*(P522)rt_nil_check(F->t_930)).name = (*(P518)rt_nil_check(F->e_926)).name;
(*(P522)rt_nil_check(F->t_930)).decl = F->e_926;
(*(P526)rt_nil_check(F->y_929)).t = F->t_930;
f_define_145(F->y_929, (*(P518)rt_nil_check(F->e_926)).line);
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)43LL))) {
F->y_931 = NULL;
F->y_931 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->e_926)).name);
(*(P526)rt_nil_check(F->y_931)).st = (*(P518)rt_nil_check(F->e_926)).a;
(*(P526)rt_nil_check(F->y_931)).decl = F->e_926;
f_define_145(F->y_931, (*(P518)rt_nil_check(F->e_926)).line);
}
F->e_926 = (*(P518)rt_nil_check(F->e_926)).next;
}
F->e_926 = F->elems_244;
while ((F->e_926 != NULL)) {
if (((((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)45LL)) || ((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)46LL))) || ((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_276(F->e_926);
} else if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)51LL))) {
F->g_932 = NULL;
F->g_932 = f_new_sym_155(((rt_int)10LL), (*(P518)rt_nil_check(F->e_926)).name);
(*(P526)rt_nil_check(F->g_932)).decl = F->e_926;
(*(P526)rt_nil_check(F->g_932)).level = g_cur_level_565;
f_define_145(F->g_932, (*(P518)rt_nil_check(F->e_926)).line);
}
F->e_926 = (*(P518)rt_nil_check(F->e_926)).next;
}
F->e_926 = F->elems_244;
{
F->snap_933 = NULL;
while ((F->e_926 != NULL)) {
if (((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)51LL))) {
if ((F->snap_933 == NULL)) {
{ A531 *cell934 = rt_alloc(sizeof(A531));
rt_int pv935 = ((rt_int)4093LL);
(*cell934).lo = ((rt_int)0LL); (*cell934).hi = pv935; (*cell934).lo2 = 1; (*cell934).hi2 = 1;
(*cell934).p = rt_alloc(sizeof(P526) * (size_t)RT_CNT((*cell934)));
for (rt_int i936 = 0; i936 < RT_CNT((*cell934)); i936++) {
(*cell934).p[i936] = NULL;
}
F->snap_933 = cell934;
}
{ rt_int lo938 = ((rt_int)0LL), hi939 = ((rt_int)4093LL);
for (rt_int it940 = lo938; it940 <= hi939; it940++) {
F->i_937 = it940;
(*(P530)rt_nil_check(F->snap_933)).p[rt_index(F->i_937, (*(P530)rt_nil_check(F->snap_933)).lo, (*(P530)rt_nil_check(F->snap_933)).hi) - (*(P530)rt_nil_check(F->snap_933)).lo] = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->i_937, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
}
}
}
{
F->g_941 = NULL;
F->g_941 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_926)).name)));
(*(P526)rt_nil_check(F->g_941)).env = F->snap_933;
}
}
F->e_926 = (*(P518)rt_nil_check(F->e_926)).next;
}
}
F->e_926 = F->elems_244;
while ((F->e_926 != NULL)) {
if ((((*(P518)rt_nil_check(F->e_926)).kind == ((rt_int)45LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_926)).name)), rt_str("INITIALIZE", 10)))) {
F->y_942 = NULL;
F->y_942 = f_lookup_decl_142(F->e_926);
if (((((F->y_942 != NULL) && ((*(P526)rt_nil_check(F->y_942)).params != NULL)) && ((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_942)).params)).next == NULL)) && (((*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_942)).params)).t)).kind == ((rt_int)15LL)) || ((*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_942)).params)).t)).kind == ((rt_int)8LL))))) {
(*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_942)).params)).t)).initp = F->y_942;
}
}
F->e_926 = (*(P518)rt_nil_check(F->e_926)).next;
}
ret_:
  return;
}

static void f_manifest_const_247(P518 d_246) {
  struct f_manifest_const_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_945 = NULL;
F->c_946 = NULL;
if (((*(P518)rt_nil_check(F->d_246)).a != NULL)) {
if ((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->d_246)).a)).kind != ((rt_int)70LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->d_246)).a)).a != NULL))) {
goto ret_;
}
}
F->v_944 = f_manifest_217((*(P518)rt_nil_check(F->d_246)).b, &F->ok_943);
if ((!F->ok_943)) {
goto ret_;
}
(*(P518)rt_nil_check(F->d_246)).flag = ((rt_int)1LL);
F->y_945 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->d_246)).name);
(*(P526)rt_nil_check(F->y_945)).t = g_ty_int_579;
(*(P526)rt_nil_check(F->y_945)).c = f_new_cons_158();
(*(P526)rt_nil_check(F->y_945)).mvalue = F->v_944;
(*(P526)rt_nil_check(F->y_945)).hasmv = 1;
(*(P526)rt_nil_check(F->y_945)).ro_flag = 1;
(*(P526)rt_nil_check(F->y_945)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_944)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_945, (*(P518)rt_nil_check(F->d_246)).line);
ret_:
  return;
}

static int f_exported_251(P518 d_248, rstr *name_249, int *ro_250) {
  struct f_exported_251fr *F = rt_alloc(sizeof *F);
F->d_248 = d_248;
F->name_249 = name_249;
F->ro_250 = ro_250;
F->ro_250v = *F->ro_250;
F->p_947 = NULL;
F->p_947 = (*(P518)rt_nil_check(F->d_248)).a;
F->ro_250v = 0;
if (((*(P518)rt_nil_check(F->d_248)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_947 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_947)).name)), (*F->name_249))) {
F->ro_250v = ((*(P518)rt_nil_check(F->p_947)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_947 = (*(P518)rt_nil_check(F->p_947)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_250) = F->ro_250v;
  return F->result_;
}

static P526 f_copy_sym_253(P526 y_252) {
  struct f_copy_sym_253fr *F = rt_alloc(sizeof *F);
F->y_252 = y_252;
F->z_948 = NULL;
{ R527 *cell949 = rt_alloc(sizeof(R527));
(*cell949).name = NULL;
(*cell949).t = NULL;
(*cell949).c = NULL;
(*cell949).access = NULL;
(*cell949).cname = NULL;
(*cell949).st = NULL;
(*cell949).decl = NULL;
(*cell949).params = NULL;
(*cell949).result = NULL;
(*cell949).members = NULL;
(*cell949).mnext = NULL;
(*cell949).binds = NULL;
(*cell949).insts = NULL;
(*cell949).env = NULL;
(*cell949).chain = NULL;
(*cell949).stack = NULL;
F->z_948 = cell949;
}
(*(P526)rt_nil_check(F->z_948)).kind = (*(P526)rt_nil_check(F->y_252)).kind;
(*(P526)rt_nil_check(F->z_948)).name = (*(P526)rt_nil_check(F->y_252)).name;
(*(P526)rt_nil_check(F->z_948)).t = (*(P526)rt_nil_check(F->y_252)).t;
(*(P526)rt_nil_check(F->z_948)).c = (*(P526)rt_nil_check(F->y_252)).c;
(*(P526)rt_nil_check(F->z_948)).access = (*(P526)rt_nil_check(F->y_252)).access;
(*(P526)rt_nil_check(F->z_948)).cname = (*(P526)rt_nil_check(F->y_252)).cname;
(*(P526)rt_nil_check(F->z_948)).ro_flag = (*(P526)rt_nil_check(F->y_252)).ro_flag;
(*(P526)rt_nil_check(F->z_948)).mvalue = (*(P526)rt_nil_check(F->y_252)).mvalue;
(*(P526)rt_nil_check(F->z_948)).hasmv = (*(P526)rt_nil_check(F->y_252)).hasmv;
(*(P526)rt_nil_check(F->z_948)).st = (*(P526)rt_nil_check(F->y_252)).st;
(*(P526)rt_nil_check(F->z_948)).decl = (*(P526)rt_nil_check(F->y_252)).decl;
(*(P526)rt_nil_check(F->z_948)).params = (*(P526)rt_nil_check(F->y_252)).params;
(*(P526)rt_nil_check(F->z_948)).result = (*(P526)rt_nil_check(F->y_252)).result;
(*(P526)rt_nil_check(F->z_948)).level = (*(P526)rt_nil_check(F->y_252)).level;
(*(P526)rt_nil_check(F->z_948)).byref = (*(P526)rt_nil_check(F->y_252)).byref;
(*(P526)rt_nil_check(F->z_948)).members = (*(P526)rt_nil_check(F->y_252)).members;
(*(P526)rt_nil_check(F->z_948)).env = (*(P526)rt_nil_check(F->y_252)).env;
F->result_ = F->z_948;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_255(P518 d_254) {
  struct f_gen_capsule_255fr *F = rt_alloc(sizeof *F);
F->d_254 = d_254;
F->y_950 = NULL;
F->y_950 = f_new_sym_155(((rt_int)8LL), (*(P518)rt_nil_check(F->d_254)).name);
(*(P526)rt_nil_check(F->y_950)).decl = F->d_254;
if (((*(P518)rt_nil_check(F->d_254)).b == NULL)) {
f_elaborate_capsule_264(F->d_254, F->y_950, NULL, F->d_254);
}
f_define_145(F->y_950, (*(P518)rt_nil_check(F->d_254)).line);
ret_:
  return;
}

static void f_capsule_params_259(P518 d_256, P518 args_257, rt_int line_258) {
  struct f_capsule_params_259fr *F = rt_alloc(sizeof *F);
F->d_256 = d_256;
F->args_257 = args_257;
F->line_258 = line_258;
F->p_951 = NULL;
F->p_951 = (*(P518)rt_nil_check(F->d_256)).b;
F->a_952 = NULL;
F->a_952 = F->args_257;
F->t_953 = NULL;
F->vt_954 = NULL;
F->c_955 = NULL;
while (((F->p_951 != NULL) && (F->a_952 != NULL))) {
F->t_953 = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_951)).a, &F->c_955);
if (((*(P518)rt_nil_check(F->p_951)).ival == ((rt_int)3LL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P518)rt_nil_check(F->p_951)).ival == ((rt_int)2LL)) || ((*(P518)rt_nil_check(F->p_951)).ival == ((rt_int)4LL)))) {
F->lv_956 = NULL;
F->lc_957 = NULL;
F->y_959 = NULL;
F->y_959 = f_new_sym_155(((rt_int)1LL), (*(P518)rt_nil_check(F->p_951)).name);
f_lvalue_431(F->a_952, &F->lv_956, &F->vt_954, &F->lc_957, &F->ro_958);
f_check_type_175(F->vt_954, F->t_953, F->line_258);
if ((F->ro_958 && ((*(P518)rt_nil_check(F->p_951)).ival == ((rt_int)2LL)))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_951)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_564) {
F->f_960 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_951)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_953)), rt_str(" *", 2)), F->f_960), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_960), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_956))), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_959)).level = g_cur_level_565;
(*(P526)rt_nil_check(F->y_959)).access = f_mk_3(&F->f_960);
(*(P526)rt_nil_check(F->y_959)).byref = 1;
} else {
F->g_961 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_951)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_953)), rt_str(" *", 2)), F->g_961), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_961, rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_956))), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_959)).level = ((rt_int)0LL);
(*(P526)rt_nil_check(F->y_959)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_961), rt_str(")", 1)); b_; }));
}
(*(P526)rt_nil_check(F->y_959)).t = F->t_953;
(*(P526)rt_nil_check(F->y_959)).c = F->lc_957;
(*(P526)rt_nil_check(F->y_959)).ro_flag = ((*(P518)rt_nil_check(F->p_951)).ival == ((rt_int)4LL));
f_define_145(F->y_959, F->line_258);
} else {
F->y_962 = NULL;
F->y_962 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_951)).name);
F->v_963 = rt_str_copy(f_gexpr_454(F->a_952, F->t_953, &F->vt_954));
f_check_type_175(F->vt_954, F->t_953, F->line_258);
{
F->access_964 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_951)).name)), F->t_953));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_964, rt_str(" = ", 3)), f_copy_code_229(F->t_953, &F->v_963)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_962, &F->access_964);
}
(*(P526)rt_nil_check(F->y_962)).t = F->t_953;
(*(P526)rt_nil_check(F->y_962)).c = F->c_955;
(*(P526)rt_nil_check(F->y_962)).ro_flag = 1;
f_define_145(F->y_962, F->line_258);
}
F->p_951 = (*(P518)rt_nil_check(F->p_951)).next;
F->a_952 = (*(P518)rt_nil_check(F->a_952)).next;
}
if (((F->p_951 != NULL) || (F->a_952 != NULL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_256)).name))); b_; }));
}
ret_:
  return;
}

static void f_elaborate_capsule_264(P518 d_260, P526 y_261, P518 args_262, P518 owner_263) {
  struct f_elaborate_capsule_264fr *F = rt_alloc(sizeof *F);
F->d_260 = d_260;
F->y_261 = y_261;
F->args_262 = args_262;
F->owner_263 = owner_263;
F->cr_965 = NULL;
F->ctx_966 = NULL;
F->m_967 = NULL;
F->p_968 = NULL;
F->p_968 = (*(P518)rt_nil_check(F->d_260)).a;
{ R539 *cell970 = rt_alloc(sizeof(R539));
(*cell970).d = NULL;
(*cell970).next = NULL;
F->cr_965 = cell970;
}
(*(P538)rt_nil_check(F->cr_965)).d = F->d_260;
(*(P538)rt_nil_check(F->cr_965)).next = g_caps_567;
g_caps_567 = F->cr_965;
f_open_scope_151();
if (((*(P518)rt_nil_check(F->d_260)).b != NULL)) {
f_capsule_params_259(F->d_260, F->args_262, (*(P518)rt_nil_check(F->owner_263)).line);
}
{ R543 *cell971 = rt_alloc(sizeof(R543));
(*cell971).imps = NULL;
(*cell971).next = NULL;
F->ctx_966 = cell971;
}
(*(P542)rt_nil_check(F->ctx_966)).depth = g_depth_551;
(*(P542)rt_nil_check(F->ctx_966)).imps = (*(P518)rt_nil_check(F->d_260)).d;
(*(P542)rt_nil_check(F->ctx_966)).all_imp = ((*(P518)rt_nil_check(F->d_260)).flag >= ((rt_int)2LL));
(*(P542)rt_nil_check(F->ctx_966)).next = g_fctx_566;
g_fctx_566 = F->ctx_966;
f_declare_body_245((*(P518)rt_nil_check(F->d_260)).c);
f_capsule_elements_303((*(P518)rt_nil_check(F->d_260)).c);
{
F->w_972 = NULL;
{ R541 *cell973 = rt_alloc(sizeof(R541));
(*cell973).d = NULL;
(*cell973).w = NULL;
(*cell973).next = NULL;
F->w_972 = cell973;
}
(*(P540)rt_nil_check(F->w_972)).d = F->owner_263;
(*(P540)rt_nil_check(F->w_972)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_299((*(P518)rt_nil_check(F->d_260)).c); b_; }));
(*(P540)rt_nil_check(F->w_972)).next = g_cap_waits_568;
g_cap_waits_568 = F->w_972;
}
g_fctx_566 = (*(P542)rt_nil_check(g_fctx_566)).next;
F->m_967 = g_scope_stack_552;
while (((F->m_967 != NULL) && ((*(P526)rt_nil_check(F->m_967)).depth == g_depth_551))) {
if ((((((*(P526)rt_nil_check(F->m_967)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->m_967)).t == NULL)) && ((*(P526)rt_nil_check(F->m_967)).decl != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->m_967)).decl)).kind == ((rt_int)43LL)))) {
(*(P526)rt_nil_check(F->m_967)).t = f_new_type_200(F->m_967, f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->d_260)).line), &(*(P526)rt_nil_check(F->m_967)).c);
} else if (((((*(P526)rt_nil_check(F->m_967)).kind == ((rt_int)5LL)) || ((*(P526)rt_nil_check(F->m_967)).kind == ((rt_int)6LL))) && ((*(P526)rt_nil_check(F->m_967)).t == NULL))) {
(*(P526)rt_nil_check(F->m_967)).t = f_resolve_subtype_188((*(P526)rt_nil_check(F->m_967)).st, &(*(P526)rt_nil_check(F->m_967)).c);
} else if ((((*(P526)rt_nil_check(F->m_967)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check((*(P526)rt_nil_check(F->m_967)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_274((*(P526)rt_nil_check(F->m_967)).t);
}
F->m_967 = (*(P526)rt_nil_check(F->m_967)).stack;
}
F->m_967 = g_scope_stack_552;
while (((F->m_967 != NULL) && ((*(P526)rt_nil_check(F->m_967)).depth == g_depth_551))) {
if (f_exported_251(F->d_260, &(*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_967)).name)), &F->ro_969)) {
F->z_974 = NULL;
F->z_974 = f_copy_sym_253(F->m_967);
if (F->ro_969) {
(*(P526)rt_nil_check(F->z_974)).ro_flag = 1;
}
(*(P526)rt_nil_check(F->z_974)).mnext = (*(P526)rt_nil_check(F->y_261)).members;
(*(P526)rt_nil_check(F->y_261)).members = F->z_974;
}
F->m_967 = (*(P526)rt_nil_check(F->m_967)).stack;
}
while ((F->p_968 != NULL)) {
if ((((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_968)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_968)).name)), rt_str("=", 1)))) && ((f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_968)).name))) == NULL) || ((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_968)).name))))).depth != g_depth_551)))) {
f_fail_23((*(P518)rt_nil_check(F->d_260)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_968)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_260)).name))); b_; }));
}
F->p_968 = (*(P518)rt_nil_check(F->p_968)).next;
}
f_close_scope_152();
g_caps_567 = (*(P538)rt_nil_check(g_caps_567)).next;
ret_:
  return;
}

static int f_exports_op_267(P518 d_265, rstr *op_266) {
  struct f_exports_op_267fr *F = rt_alloc(sizeof *F);
F->d_265 = d_265;
F->op_266 = op_266;
F->p_975 = NULL;
if ((F->d_265 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_975 = (*(P518)rt_nil_check(F->d_265)).a;
while ((F->p_975 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_975)).name)), (*F->op_266))) {
F->result_ = 1;
goto ret_;
}
F->p_975 = (*(P518)rt_nil_check(F->p_975)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P513 f_renamed_270(P518 d_268, P526 z_269) {
  struct f_renamed_270fr *F = rt_alloc(sizeof *F);
F->d_268 = d_268;
F->z_269 = z_269;
F->r_976 = NULL;
F->r_976 = (*(P518)rt_nil_check(F->d_268)).c;
while ((F->r_976 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_976)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_269)).name)))) {
F->result_ = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->r_976)).a)).name;
goto ret_;
}
F->r_976 = (*(P518)rt_nil_check(F->r_976)).next;
}
F->result_ = (*(P526)rt_nil_check(F->z_269)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_expose_272(P518 d_271) {
  struct f_gen_expose_272fr *F = rt_alloc(sizeof *F);
F->d_271 = d_271;
F->y_977 = NULL;
F->y_977 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name)));
F->m_978 = NULL;
F->p_979 = NULL;
F->p_979 = (*(P518)rt_nil_check(F->d_271)).a;
F->r_980 = NULL;
F->r_980 = (*(P518)rt_nil_check(F->d_271)).c;
if (((F->y_977 == NULL) || ((*(P526)rt_nil_check(F->y_977)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P518)rt_nil_check(F->d_271)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->d_271)).flag == ((rt_int)3LL)))) {
F->inst_981 = NULL;
F->inst_981 = f_new_sym_155(((rt_int)8LL), (*(P526)rt_nil_check(F->y_977)).name);
(*(P526)rt_nil_check(F->inst_981)).decl = (*(P526)rt_nil_check(F->y_977)).decl;
f_elaborate_capsule_264((*(P526)rt_nil_check(F->y_977)).decl, F->inst_981, (*(P518)rt_nil_check(F->d_271)).b, F->d_271);
F->y_977 = F->inst_981;
} else if ((((*(P526)rt_nil_check(F->y_977)).decl != NULL) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_977)).decl)).b != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P518)rt_nil_check(F->d_271)).b != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_980 != NULL)) {
F->found_982 = 0;
F->m_978 = (*(P526)rt_nil_check(F->y_977)).members;
while ((F->m_978 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_978)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_980)).name)))) {
F->found_982 = 1;
}
F->m_978 = (*(P526)rt_nil_check(F->m_978)).mnext;
}
if ((!F->found_982)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_980)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))); b_; }));
}
F->r_980 = (*(P518)rt_nil_check(F->r_980)).next;
}
if (((*(P518)rt_nil_check(F->d_271)).ival == ((rt_int)1LL))) {
F->m_978 = (*(P526)rt_nil_check(F->y_977)).members;
while ((F->m_978 != NULL)) {
F->z_983 = NULL;
F->z_983 = f_copy_sym_253(F->m_978);
(*(P526)rt_nil_check(F->z_983)).name = f_renamed_270(F->d_271, F->m_978);
f_define_145(F->z_983, (*(P518)rt_nil_check(F->d_271)).line);
F->m_978 = (*(P526)rt_nil_check(F->m_978)).mnext;
}
goto ret_;
}
while ((F->p_979 != NULL)) {
F->found_984 = 0;
F->m_978 = (*(P526)rt_nil_check(F->y_977)).members;
while ((F->m_978 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_978)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_979)).name)))) {
F->z_985 = NULL;
F->z_985 = f_copy_sym_253(F->m_978);
if (((*(P518)rt_nil_check(F->p_979)).ival == ((rt_int)1LL))) {
(*(P526)rt_nil_check(F->z_985)).ro_flag = 1;
}
(*(P526)rt_nil_check(F->z_985)).name = f_renamed_270(F->d_271, F->m_978);
f_define_145(F->z_985, (*(P518)rt_nil_check(F->d_271)).line);
F->found_984 = 1;
}
F->m_978 = (*(P526)rt_nil_check(F->m_978)).mnext;
}
if ((!F->found_984)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_979)).name)), rt_str(" is not exported by ", 20)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))); b_; }));
}
F->p_979 = (*(P518)rt_nil_check(F->p_979)).next;
}
ret_:
  return;
}

static void f_finish_ptr_274(P522 t_273) {
  struct f_finish_ptr_274fr *F = rt_alloc(sizeof *F);
F->t_273 = t_273;
F->d_986 = NULL;
F->d_986 = (*(P522)rt_nil_check(F->t_273)).decl;
F->p_987 = NULL;
F->c_988 = NULL;
F->dummy_989 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_989, rt_str(" ", 1));
if (((*(P522)rt_nil_check(F->t_273)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_987 = (*(P518)rt_nil_check(F->d_986)).b;
while ((F->p_987 != NULL)) {
F->y_990 = NULL;
F->y_990 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_987)).name);
(*(P526)rt_nil_check(F->y_990)).t = g_ty_int_579;
(*(P526)rt_nil_check(F->y_990)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_990, (*(P518)rt_nil_check(F->d_986)).line);
F->p_987 = (*(P518)rt_nil_check(F->p_987)).next;
}
(*(P522)rt_nil_check(F->t_273)).target = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_986)).a, &F->c_988);
f_close_scope_152();
(*rt_str_at(&F->dummy_989, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_273), ((rt_int)1LL));
(*rt_str_at(&F->dummy_989, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P522)rt_nil_check(F->t_273)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_276(P518 d_275) {
  struct f_declare_subprogram_276fr *F = rt_alloc(sizeof *F);
F->d_275 = d_275;
f_define_145(f_build_subprogram_278(F->d_275), (*(P518)rt_nil_check(F->d_275)).line);
ret_:
  return;
}

static P526 f_build_subprogram_278(P518 d_277) {
  struct f_build_subprogram_278fr *F = rt_alloc(sizeof *F);
F->d_277 = d_277;
F->y_991 = NULL;
F->p_992 = NULL;
F->p_992 = (*(P518)rt_nil_check(F->d_277)).a;
F->tail_993 = NULL;
if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)46LL))) {
F->y_991 = f_new_sym_155(((rt_int)3LL), (*(P518)rt_nil_check(F->d_277)).name);
} else if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
F->y_991 = f_new_sym_155(((rt_int)9LL), (*(P518)rt_nil_check(F->d_277)).name);
} else {
F->y_991 = f_new_sym_155(((rt_int)4LL), (*(P518)rt_nil_check(F->d_277)).name);
}
while ((F->p_992 != NULL)) {
F->pm_994 = NULL;
{ R529 *cell995 = rt_alloc(sizeof(R529));
(*cell995).name = NULL;
(*cell995).t = NULL;
(*cell995).c = NULL;
(*cell995).cfield = NULL;
(*cell995).next = NULL;
F->pm_994 = cell995;
}
(*(P528)rt_nil_check(F->pm_994)).name = (*(P518)rt_nil_check(F->p_992)).name;
(*(P528)rt_nil_check(F->pm_994)).mode = (*(P518)rt_nil_check(F->p_992)).ival;
(*(P528)rt_nil_check(F->pm_994)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_992)).a, &(*(P528)rt_nil_check(F->pm_994)).c);
(*(P528)rt_nil_check(F->pm_994)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_992)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_993 == NULL)) {
(*(P526)rt_nil_check(F->y_991)).params = F->pm_994;
} else {
(*(P528)rt_nil_check(F->tail_993)).next = F->pm_994;
}
F->tail_993 = F->pm_994;
F->p_992 = (*(P518)rt_nil_check(F->p_992)).next;
}
(*(P526)rt_nil_check(F->y_991)).result = g_ty_void_584;
if (((*(P518)rt_nil_check(F->d_277)).b != NULL)) {
F->rc_996 = NULL;
(*(P526)rt_nil_check(F->y_991)).result = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_277)).b, &F->rc_996);
}
(*(P526)rt_nil_check(F->y_991)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_420(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_277)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P526)rt_nil_check(F->y_991)).decl = F->d_277;
(*(P526)rt_nil_check(F->y_991)).level = g_cur_level_565;
if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_991)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_991;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_280(P518 e_279) {
  struct f_element_280fr *F = rt_alloc(sizeof *F);
F->e_279 = e_279;
F->k_997 = (*(P518)rt_nil_check(F->e_279)).kind;
if (((F->k_997 == ((rt_int)48LL)) && (((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)3LL))))) {
f_gen_expose_272(F->e_279);
} else if ((((F->k_997 == ((rt_int)45LL)) || (F->k_997 == ((rt_int)46LL))) || (F->k_997 == ((rt_int)50LL)))) {
f_subprogram_292(F->e_279);
} else if (((((((F->k_997 == ((rt_int)49LL)) || (F->k_997 == ((rt_int)42LL))) || (F->k_997 == ((rt_int)43LL))) || (F->k_997 == ((rt_int)47LL))) || (F->k_997 == ((rt_int)48LL))) || (F->k_997 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_997 == ((rt_int)44LL))) {
f_finish_ptr_274((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_279)).name))))).t);
} else if ((F->k_997 == ((rt_int)40LL))) {
f_var_decl_288(F->e_279);
} else if (((F->k_997 == ((rt_int)41LL)) && ((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)0LL)))) {
f_const_decl_290(F->e_279);
} else if ((F->k_997 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_997 == ((rt_int)33LL))) {
F->t_998 = NULL;
F->c_999 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_279)).a, g_ty_bool_580, &F->t_998));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_999), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_314(F->e_279);
}
ret_:
  return;
}

static rstr f_storage_283(rstr *name_281, P522 t_282) {
  struct f_storage_283fr *F = rt_alloc(sizeof *F);
F->name_281 = name_281;
F->t_282 = t_282;
if ((!g_in_func_564)) {
F->g_1000 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_281))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->g_1000), rt_str(";", 1)); b_; }));
g_st_field_570 = f_mk_3(&F->g_1000);
F->result_ = F->g_1000;
goto ret_;
}
{
F->f_1001 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_281)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->f_1001), rt_str(";", 1)); b_; }));
g_st_field_570 = f_mk_3(&F->f_1001);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1001);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_286(P526 y_284, rstr *access_285) {
  struct f_bind_286fr *F = rt_alloc(sizeof *F);
F->y_284 = y_284;
F->access_285 = access_285;
if (g_in_func_564) {
(*(P526)rt_nil_check(F->y_284)).level = g_cur_level_565;
(*(P526)rt_nil_check(F->y_284)).access = g_st_field_570;
} else {
(*(P526)rt_nil_check(F->y_284)).level = ((rt_int)0LL);
(*(P526)rt_nil_check(F->y_284)).access = f_mk_3(&(*F->access_285));
}
ret_:
  return;
}

static void f_var_decl_288(P518 d_287) {
  struct f_var_decl_288fr *F = rt_alloc(sizeof *F);
F->d_287 = d_287;
F->c_1002 = NULL;
F->t_1003 = NULL;
F->t_1003 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_287)).a, &F->c_1002);
F->y_1004 = NULL;
F->y_1004 = f_new_sym_155(((rt_int)1LL), (*(P518)rt_nil_check(F->d_287)).name);
F->access_1005 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_287)).name)), F->t_1003));
f_init_storage_204(&F->access_1005, F->t_1003, F->c_1002);
if (((*(P518)rt_nil_check(F->d_287)).ival == ((rt_int)1LL))) {
F->it_1006 = NULL;
F->n_1007 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_287)).c, g_ty_int_579, &F->it_1006));
if (((*(P522)rt_nil_check(F->t_1003)).kind != ((rt_int)12LL))) {
f_fail_23((*(P518)rt_nil_check(F->d_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_164((*(P522)rt_nil_check(F->t_1003)).elem, g_ty_ascii_582)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1005), rt_str(", ", 2)), F->n_1007), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1005), rt_str(", ", 2)), F->n_1007), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P518)rt_nil_check(F->d_287)).ival == ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->d_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P518)rt_nil_check(F->d_287)).b != NULL)) {
F->vt_1008 = NULL;
F->v_1009 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_287)).b, F->t_1003, &F->vt_1008));
f_check_type_175(F->vt_1008, F->t_1003, (*(P518)rt_nil_check(F->d_287)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&F->access_1005, F->t_1003, &F->v_1009, F->c_1002); b_; }));
}
(*(P526)rt_nil_check(F->y_1004)).t = F->t_1003;
(*(P526)rt_nil_check(F->y_1004)).c = F->c_1002;
f_bind_286(F->y_1004, &F->access_1005);
f_define_145(F->y_1004, (*(P518)rt_nil_check(F->d_287)).line);
ret_:
  return;
}

static void f_const_decl_290(P518 d_289) {
  struct f_const_decl_290fr *F = rt_alloc(sizeof *F);
F->d_289 = d_289;
F->c_1010 = NULL;
F->c_1010 = f_new_cons_158();
F->t_1011 = NULL;
F->vt_1012 = NULL;
F->y_1013 = NULL;
F->y_1013 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->d_289)).name);
if (((*(P518)rt_nil_check(F->d_289)).a != NULL)) {
F->t_1011 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_289)).a, &F->c_1010);
}
{
F->v_1015 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_289)).b, F->t_1011, &F->vt_1012));
if ((F->t_1011 != NULL)) {
f_check_type_175(F->vt_1012, F->t_1011, (*(P518)rt_nil_check(F->d_289)).line);
} else {
F->t_1011 = F->vt_1012;
}
if (((*(P522)rt_nil_check(F->t_1011)).kind == ((rt_int)1LL))) {
(*(P526)rt_nil_check(F->y_1013)).mvalue = f_manifest_217((*(P518)rt_nil_check(F->d_289)).b, &F->ok_1014);
(*(P526)rt_nil_check(F->y_1013)).hasmv = F->ok_1014;
}
{
F->access_1016 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_289)).name)), F->t_1011));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1016, rt_str(" = ", 3)), f_copy_code_229(F->t_1011, &F->v_1015)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_1013, &F->access_1016);
}
}
(*(P526)rt_nil_check(F->y_1013)).t = F->t_1011;
(*(P526)rt_nil_check(F->y_1013)).c = F->c_1010;
(*(P526)rt_nil_check(F->y_1013)).ro_flag = 1;
f_define_145(F->y_1013, (*(P518)rt_nil_check(F->d_289)).line);
ret_:
  return;
}

static void f_subprogram_292(P518 d_291) {
  struct f_subprogram_292fr *F = rt_alloc(sizeof *F);
F->d_291 = d_291;
f_gen_subprogram_295(F->d_291, f_lookup_decl_142(F->d_291));
ret_:
  return;
}

static void f_gen_subprogram_295(P518 d_293, P526 y_294) {
  struct f_gen_subprogram_295fr *F = rt_alloc(sizeof *F);
F->d_293 = d_293;
F->y_294 = y_294;
F->saved_code_1017 = NULL;
F->saved_code_1017 = g_code_562;
F->saved_fields_1018 = NULL;
F->saved_fields_1018 = g_fields_buf_563;
F->saved_in_1019 = g_in_func_564;
F->saved_sym_1020 = NULL;
F->saved_sym_1020 = g_func_sym_572;
F->saved_exits_1021 = NULL;
F->saved_exits_1021 = g_exits_573;
F->saved_frames_1022 = g_frames_574;
F->args_1023 = NULL;
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1024 = NULL;
F->pm_1024 = (*(P526)rt_nil_check(F->y_294)).params;
F->saved_handlers_1025 = NULL;
F->saved_handlers_1025 = g_handlers_575;
F->saved_cleanups_1026 = NULL;
F->saved_cleanups_1026 = g_cleanups_576;
F->ctx_1027 = NULL;
F->head_1028 = NULL;
F->frame_1029 = NULL;
F->frame_1029 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_294)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1030 = NULL;
F->copy_back_1031 = NULL;
F->copy_back_1031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_564) {
F->parent_1030 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(g_func_sym_572)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_562 = f_new_buffer_24();
g_fields_buf_563 = f_new_buffer_24();
g_in_func_564 = 1;
g_func_sym_572 = F->y_294;
g_exits_573 = NULL;
g_frames_574 = ((rt_int)0LL);
g_handlers_575 = NULL;
g_cleanups_576 = NULL;
g_cur_level_565 = rt_add(g_cur_level_565, ((rt_int)1LL));
f_open_scope_151();
{ R543 *cell1032 = rt_alloc(sizeof(R543));
(*cell1032).imps = NULL;
(*cell1032).next = NULL;
F->ctx_1027 = cell1032;
}
(*(P542)rt_nil_check(F->ctx_1027)).depth = g_depth_551;
(*(P542)rt_nil_check(F->ctx_1027)).imps = (*(P518)rt_nil_check(F->d_293)).d;
(*(P542)rt_nil_check(F->ctx_1027)).all_imp = ((*(P518)rt_nil_check(F->d_293)).flag >= ((rt_int)2LL));
(*(P542)rt_nil_check(F->ctx_1027)).next = g_fctx_566;
g_fctx_566 = F->ctx_1027;
if ((F->parent_1030 != NULL)) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P513)rt_nil_check(F->parent_1030))), rt_str(" *up;", 5)); b_; }));
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check(F->parent_1030))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1024 != NULL)) {
F->ct_1033 = rt_str_copy(f_ctype_177((*(P528)rt_nil_check(F->pm_1024)).t));
F->f_1034 = rt_str_copy((*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1024)).cfield)));
F->p_1035 = NULL;
if ((((*(P513)rt_nil_check(F->args_1023))).len > ((rt_int)0LL))) {
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1023)), rt_str(", ", 2)); b_; }));
}
if (((*(P528)rt_nil_check(F->pm_1024)).mode == ((rt_int)1LL))) {
F->p_1035 = f_new_sym_155(((rt_int)2LL), (*(P528)rt_nil_check(F->pm_1024)).name);
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1033), rt_str(" ", 1)), F->f_1034), rt_str(";", 1)); b_; }));
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1023)), F->ct_1033), rt_str(" ", 1)), F->f_1034); b_; }));
(*(P526)rt_nil_check(F->p_1035)).access = f_mk_3(&F->f_1034);
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1034), rt_str(" = ", 3)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1024)).t, &F->f_1034)), rt_str(";", 1)); b_; }));
}
} else {
F->p_1035 = f_new_sym_155(((rt_int)1LL), (*(P528)rt_nil_check(F->pm_1024)).name);
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1033), rt_str(" *", 2)), F->f_1034), rt_str(";", 1)); b_; }));
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1023)), F->ct_1033), rt_str(" *", 2)), F->f_1034); b_; }));
(*(P526)rt_nil_check(F->p_1035)).access = f_mk_3(&F->f_1034);
(*(P526)rt_nil_check(F->p_1035)).byref = 1;
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1034), rt_str(" = ", 3)), F->f_1034), rt_str(";", 1)); b_; }));
}
if ((((*(P528)rt_nil_check(F->pm_1024)).mode == ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1033), rt_str(" ", 1)), F->f_1034), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1034), rt_str("v = ", 4)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1024)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1034); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_1031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->copy_back_1031)), rt_str("  ", 2)), f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1034), rt_str(")", 1)); b_; }), (*(P528)rt_nil_check(F->pm_1024)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1034), rt_str("v", 1)); b_; }), (*(P528)rt_nil_check(F->pm_1024)).c)); b_; }));
(*(P526)rt_nil_check(F->p_1035)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1034, rt_str("v", 1)); b_; }));
(*(P526)rt_nil_check(F->p_1035)).byref = 0;
}
}
(*(P526)rt_nil_check(F->p_1035)).t = (*(P528)rt_nil_check(F->pm_1024)).t;
(*(P526)rt_nil_check(F->p_1035)).c = (*(P528)rt_nil_check(F->pm_1024)).c;
(*(P526)rt_nil_check(F->p_1035)).level = g_cur_level_565;
(*(P526)rt_nil_check(F->p_1035)).ro_flag = (((*(P528)rt_nil_check(F->pm_1024)).mode == ((rt_int)1LL)) || ((*(P528)rt_nil_check(F->pm_1024)).mode == ((rt_int)4LL)));
f_define_145(F->p_1035, (*(P518)rt_nil_check(F->d_293)).line);
F->pm_1024 = (*(P528)rt_nil_check(F->pm_1024)).next;
}
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P526)rt_nil_check(F->y_294)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_245((*(P518)rt_nil_check(F->d_293)).c);
f_body_elements_305((*(P518)rt_nil_check(F->d_293)).c);
f_close_scope_152();
g_fctx_566 = (*(P542)rt_nil_check(g_fctx_566)).next;
g_cur_level_565 = rt_sub(g_cur_level_565, ((rt_int)1LL));
if (((((*(P513)rt_nil_check(F->args_1023))).len == ((rt_int)0LL)) || ((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL)))) {
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
F->args_1023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1028 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P526)rt_nil_check(F->y_294)).result)), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_294)).cname))), rt_str("(", 1)), (*(P513)rt_nil_check(F->args_1023))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->head_1028)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->head_1028)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_571, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check(F->frame_1029))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_571, g_fields_buf_563);
f_put_27(g_out_frames_571, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check(F->frame_1029))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check(F->frame_1029))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_559, g_code_562);
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P513)rt_nil_check(F->copy_back_1031))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_559, &(*(P513)rt_nil_check(F->copy_back_1031)));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P513)rt_nil_check(F->copy_back_1031))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_559, &(*(P513)rt_nil_check(F->copy_back_1031)));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_562 = F->saved_code_1017;
g_fields_buf_563 = F->saved_fields_1018;
g_in_func_564 = F->saved_in_1019;
g_func_sym_572 = F->saved_sym_1020;
g_exits_573 = F->saved_exits_1021;
g_frames_574 = F->saved_frames_1022;
g_handlers_575 = F->saved_handlers_1025;
g_cleanups_576 = F->saved_cleanups_1026;
ret_:
  return;
}

static rstr f_waits_of_297(P518 d_296) {
  struct f_waits_of_297fr *F = rt_alloc(sizeof *F);
F->d_296 = d_296;
F->w_1036 = NULL;
F->w_1036 = g_cap_waits_568;
while ((F->w_1036 != NULL)) {
if (((*(P540)rt_nil_check(F->w_1036)).d == F->d_296)) {
F->result_ = (*(P513)rt_nil_check((*(P540)rt_nil_check(F->w_1036)).w));
goto ret_;
}
F->w_1036 = (*(P540)rt_nil_check(F->w_1036)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_299(P518 elems_298) {
  struct f_task_waits_299fr *F = rt_alloc(sizeof *F);
F->elems_298 = elems_298;
F->e_1037 = NULL;
F->e_1037 = F->elems_298;
F->r_1038 = NULL;
F->r_1038 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1037 != NULL)) {
if (((*(P518)rt_nil_check(F->e_1037)).kind == ((rt_int)50LL))) {
F->r_1038 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->r_1038)), rt_str(" rt_await_decl(&", 16)), (*(P513)rt_nil_check((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_1037)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P518)rt_nil_check(F->e_1037)).kind == ((rt_int)47LL)) || (((*(P518)rt_nil_check(F->e_1037)).kind == ((rt_int)48LL)) && (((*(P518)rt_nil_check(F->e_1037)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->e_1037)).flag == ((rt_int)3LL)))))) {
F->r_1038 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->r_1038)), f_waits_of_297(F->e_1037)); b_; }));
}
F->e_1037 = (*(P518)rt_nil_check(F->e_1037)).next;
}
F->result_ = (*(P513)rt_nil_check(F->r_1038));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_301(P518 elems_300) {
  struct f_await_tasks_301fr *F = rt_alloc(sizeof *F);
F->elems_300 = elems_300;
F->w_1039 = rt_str_copy(f_task_waits_299(F->elems_300));
if (((F->w_1039).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1039);
}
ret_:
  return;
}

static void f_capsule_elements_303(P518 elems_302) {
  struct f_capsule_elements_303fr *F = rt_alloc(sizeof *F);
F->elems_302 = elems_302;
F->e_1040 = NULL;
F->e_1040 = F->elems_302;
while ((F->e_1040 != NULL)) {
f_element_280(F->e_1040);
F->e_1040 = (*(P518)rt_nil_check(F->e_1040)).next;
}
ret_:
  return;
}

static void f_body_elements_305(P518 elems_304) {
  struct f_body_elements_305fr *F = rt_alloc(sizeof *F);
F->elems_304 = elems_304;
f_capsule_elements_303(F->elems_304);
f_await_tasks_301(F->elems_304);
ret_:
  return;
}

static void f_gen_body_307(P518 elems_306) {
  struct f_gen_body_307fr *F = rt_alloc(sizeof *F);
F->elems_306 = elems_306;
f_open_scope_151();
f_declare_body_245(F->elems_306);
f_body_elements_305(F->elems_306);
f_close_scope_152();
ret_:
  return;
}

static void f_pop_frames_309(rt_int upto_308) {
  struct f_pop_frames_309fr *F = rt_alloc(sizeof *F);
F->upto_308 = upto_308;
F->i_1041 = g_frames_574;
F->c_1042 = NULL;
F->c_1042 = g_cleanups_576;
while ((F->i_1041 > F->upto_308)) {
f_emit_29(&(*(P513)rt_nil_check((*(P532)rt_nil_check(F->c_1042)).s)));
F->c_1042 = (*(P532)rt_nil_check(F->c_1042)).next;
F->i_1041 = rt_sub(F->i_1041, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_311(rstr *s_310) {
  struct f_push_cleanup_311fr *F = rt_alloc(sizeof *F);
F->s_310 = s_310;
F->c_1043 = NULL;
{ R533 *cell1044 = rt_alloc(sizeof(R533));
(*cell1044).s = NULL;
(*cell1044).next = NULL;
F->c_1043 = cell1044;
}
(*(P532)rt_nil_check(F->c_1043)).s = f_mk_3(&(*F->s_310));
(*(P532)rt_nil_check(F->c_1043)).next = g_cleanups_576;
g_cleanups_576 = F->c_1043;
g_frames_574 = rt_add(g_frames_574, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_312(void) {
  struct f_pop_cleanup_312fr *F = rt_alloc(sizeof *F);
g_cleanups_576 = (*(P532)rt_nil_check(g_cleanups_576)).next;
g_frames_574 = rt_sub(g_frames_574, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_314(P518 s_313) {
  struct f_gen_statement_314fr *F = rt_alloc(sizeof *F);
F->s_313 = s_313;
F->label_1045 = NULL;
if (((*(P518)rt_nil_check(F->s_313)).tag != NULL)) {
F->x_1046 = NULL;
{ R537 *cell1047 = rt_alloc(sizeof(R537));
(*cell1047).match = NULL;
(*cell1047).label = NULL;
(*cell1047).next = NULL;
F->x_1046 = cell1047;
}
F->label_1045 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P536)rt_nil_check(F->x_1046)).match = (*(P518)rt_nil_check(F->s_313)).tag;
(*(P536)rt_nil_check(F->x_1046)).label = F->label_1045;
(*(P536)rt_nil_check(F->x_1046)).depth = g_frames_574;
(*(P536)rt_nil_check(F->x_1046)).next = g_exits_573;
g_exits_573 = F->x_1046;
}
{ rt_int sel1048 = (*(P518)rt_nil_check(F->s_313)).kind;
if (0 || (sel1048 == ((rt_int)20LL))) {
f_st_assign_316(F->s_313);
} else if (0 || (sel1048 == ((rt_int)21LL))) {
f_st_call_318(F->s_313);
} else if (0 || (sel1048 == ((rt_int)22LL))) {
f_st_if_320(F->s_313);
} else if (0 || (sel1048 == ((rt_int)23LL))) {
f_st_case_322(F->s_313);
} else if (0 || (sel1048 == ((rt_int)24LL))) {
f_st_repeat_324(F->s_313);
} else if (0 || (sel1048 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_313)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1048 == ((rt_int)27LL))) {
f_st_exit_326(F->s_313);
} else if (0 || (sel1048 == ((rt_int)28LL))) {
f_st_return_328(F->s_313);
} else if (0 || (sel1048 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_331(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_313)).name)), (*(P518)rt_nil_check(F->s_313)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1048 == ((rt_int)31LL))) {
if ((g_handlers_575 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P513)rt_nil_check((*(P532)rt_nil_check(g_handlers_575)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1048 == ((rt_int)26LL))) {
f_st_guard_333(F->s_313);
} else if (0 || (sel1048 == ((rt_int)32LL))) {
f_st_alloc_335(F->s_313);
} else if (0 || (sel1048 == ((rt_int)34LL))) {
f_st_create_339(F->s_313);
} else if (0 || (sel1048 == ((rt_int)35LL))) {
f_st_wait_368(F->s_313);
} else if (0 || (sel1048 == ((rt_int)36LL))) {
f_st_region_376(F->s_313);
} else {
f_fail_23((*(P518)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P518)rt_nil_check(F->s_313)).tag != NULL)) {
g_exits_573 = (*(P536)rt_nil_check(g_exits_573)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->label_1045)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_316(P518 s_315) {
  struct f_st_assign_316fr *F = rt_alloc(sizeof *F);
F->s_315 = s_315;
F->lv_1049 = NULL;
F->t_1050 = NULL;
F->vt_1051 = NULL;
F->c_1052 = NULL;
if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).kind == ((rt_int)10LL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b != NULL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).a, &F->lv_1049, &F->t_1050, &F->c_1052, &F->ro_1053);
if ((F->ro_1053 || ((*(P522)rt_nil_check(F->t_1050)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1054 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).a, g_ty_int_579, &F->vt_1051));
F->hi_1055 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).b, g_ty_int_579, &F->vt_1051));
F->v_1056 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_315)).b, g_ty_string_583, &F->vt_1051));
f_check_type_175(F->vt_1051, g_ty_string_583, (*(P518)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P513)rt_nil_check(F->lv_1049))), rt_str(", ", 2)), F->lo_1054), rt_str(", ", 2)), F->hi_1055), rt_str(", ", 2)), F->v_1056), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_431((*(P518)rt_nil_check(F->s_315)).a, &F->lv_1049, &F->t_1050, &F->c_1052, &F->ro_1053);
if (F->ro_1053) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_190(F->t_1050)) && (!f_exports_op_267((*(P522)rt_nil_check(F->t_1050)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_1050)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1057 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_315)).b, F->t_1050, &F->vt_1051));
f_check_type_175(F->vt_1051, F->t_1050, (*(P518)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&(*(P513)rt_nil_check(F->lv_1049)), F->t_1050, &F->v_1057, F->c_1052); b_; }));
}
ret_:
  return;
}

static void f_st_call_318(P518 s_317) {
  struct f_st_call_318fr *F = rt_alloc(sizeof *F);
F->s_317 = s_317;
F->c_1058 = NULL;
F->c_1058 = (*(P518)rt_nil_check(F->s_317)).a;
F->t_1059 = NULL;
if ((((*(P518)rt_nil_check(F->c_1058)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check(F->c_1058)).kind == ((rt_int)12LL)))) {
F->x_1060 = NULL;
F->x_1060 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->c_1058)).line);
(*(P518)rt_nil_check(F->x_1060)).a = F->c_1058;
F->c_1058 = F->x_1060;
}
if (((*(P518)rt_nil_check(F->c_1058)).kind != ((rt_int)10LL))) {
f_fail_23((*(P518)rt_nil_check(F->s_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_502(F->c_1058, 1, &F->t_1059), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_320(P518 s_319) {
  struct f_st_if_320fr *F = rt_alloc(sizeof *F);
F->s_319 = s_319;
F->a_1061 = NULL;
F->a_1061 = (*(P518)rt_nil_check(F->s_319)).a;
F->first_1062 = 1;
F->t_1063 = NULL;
while ((F->a_1061 != NULL)) {
F->c_1064 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1061)).a, g_ty_bool_580, &F->t_1063));
f_check_type_175(F->t_1063, g_ty_bool_580, (*(P518)rt_nil_check(F->s_319)).line);
if (F->first_1062) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1064), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1064), rt_str(") {", 3)); b_; }));
}
F->first_1062 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1061)).b);
F->a_1061 = (*(P518)rt_nil_check(F->a_1061)).next;
}
if (((*(P518)rt_nil_check(F->s_319)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_319)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_322(P518 s_321) {
  struct f_st_case_322fr *F = rt_alloc(sizeof *F);
F->s_321 = s_321;
F->st_1065 = NULL;
F->vt_1066 = NULL;
F->first_1067 = 1;
F->a_1068 = NULL;
F->a_1068 = (*(P518)rt_nil_check(F->s_321)).b;
F->sel_1069 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_321)).a, NULL, &F->st_1065));
F->tmp_1070 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_1065)), rt_str(" ", 1)), F->tmp_1070), rt_str(" = ", 3)), F->sel_1069), rt_str(";", 1)); b_; }));
while ((F->a_1068 != NULL)) {
F->lab_1071 = NULL;
F->lab_1071 = (*(P518)rt_nil_check(F->a_1068)).a;
F->conds_1072 = NULL;
F->conds_1072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1071 != NULL)) {
if (((*(P518)rt_nil_check(F->lab_1071)).b == NULL)) {
F->v_1073 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1071)).a, F->st_1065, &F->vt_1066));
f_check_type_175(F->vt_1066, F->st_1065, (*(P518)rt_nil_check(F->s_321)).line);
F->conds_1072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1072)), rt_str(" || ", 4)), f_eq_code_233(F->st_1065, &F->tmp_1070, &F->v_1073)); b_; }));
} else {
F->lo_1074 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1071)).a, F->st_1065, &F->vt_1066));
F->hi_1075 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1071)).b, F->st_1065, &F->vt_1066));
F->conds_1072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1072)), rt_str(" || (", 5)), F->tmp_1070), rt_str(" >= ", 4)), F->lo_1074), rt_str(" && ", 4)), F->tmp_1070), rt_str(" <= ", 4)), F->hi_1075), rt_str(")", 1)); b_; }));
}
F->lab_1071 = (*(P518)rt_nil_check(F->lab_1071)).next;
}
if (F->first_1067) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1072))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1072))), rt_str(") {", 3)); b_; }));
}
F->first_1067 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1068)).b);
F->a_1068 = (*(P518)rt_nil_check(F->a_1068)).next;
}
if (F->first_1067) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P518)rt_nil_check(F->s_321)).flag == ((rt_int)1LL))) {
f_gen_body_307((*(P518)rt_nil_check(F->s_321)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_324(P518 s_323) {
  struct f_st_repeat_324fr *F = rt_alloc(sizeof *F);
F->s_323 = s_323;
F->t_1076 = NULL;
F->c_1077 = NULL;
if (((*(P518)rt_nil_check(F->s_323)).flag == ((rt_int)0LL))) {
F->cond_1078 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_323)).a, g_ty_bool_580, &F->t_1076));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1078), rt_str(") {", 3)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_323)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1076 = f_resolve_subtype_188((*(P518)rt_nil_check(F->s_323)).a, &F->c_1077);
F->c_1077 = f_base_cons_169(F->t_1076, F->c_1077);
if ((((*(P522)rt_nil_check(f_base_of_166(F->t_1076))).kind == ((rt_int)4LL)) && ((*(P520)rt_nil_check(F->c_1077)).lo == NULL))) {
F->c_1077 = f_new_cons_158();
(*(P520)rt_nil_check(F->c_1077)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_1077)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->t_1076))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P520)rt_nil_check(F->c_1077)).lo == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1079 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_323)).name)), F->t_1076));
F->lov_1080 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1081 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1082 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1083 = NULL;
F->y_1083 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->s_323)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1080), rt_str(" = ", 3)), (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1077)).lo))), rt_str(", ", 2)), F->hiv_1081), rt_str(" = ", 3)), (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1077)).hi))), rt_str(";", 1)); b_; }));
if (((*(P518)rt_nil_check(F->s_323)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1082), rt_str(" = ", 3)), F->hiv_1081), rt_str("; ", 2)), F->it_1082), rt_str(" >= ", 4)), F->lov_1080), rt_str("; ", 2)), F->it_1082), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1082), rt_str(" = ", 3)), F->lov_1080), rt_str("; ", 2)), F->it_1082), rt_str(" <= ", 4)), F->hiv_1081), rt_str("; ", 2)), F->it_1082), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1079, rt_str(" = ", 3)), F->it_1082), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P526)rt_nil_check(F->y_1083)).t = F->t_1076;
(*(P526)rt_nil_check(F->y_1083)).c = F->c_1077;
f_bind_286(F->y_1083, &F->access_1079);
(*(P526)rt_nil_check(F->y_1083)).ro_flag = 1;
f_define_145(F->y_1083, (*(P518)rt_nil_check(F->s_323)).line);
f_gen_body_307((*(P518)rt_nil_check(F->s_323)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_326(P518 s_325) {
  struct f_st_exit_326fr *F = rt_alloc(sizeof *F);
F->s_325 = s_325;
F->x_1084 = NULL;
F->x_1084 = g_exits_573;
while ((F->x_1084 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P536)rt_nil_check(F->x_1084)).match)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_325)).name)))) {
f_pop_frames_309((*(P536)rt_nil_check(F->x_1084)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P513)rt_nil_check((*(P536)rt_nil_check(F->x_1084)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1084 = (*(P536)rt_nil_check(F->x_1084)).next;
}
f_fail_23((*(P518)rt_nil_check(F->s_325)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_325)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_328(P518 s_327) {
  struct f_st_return_328fr *F = rt_alloc(sizeof *F);
F->s_327 = s_327;
F->vt_1085 = NULL;
if ((!g_in_func_564)) {
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(g_func_sym_572)).result)).kind == ((rt_int)9LL))) {
if (((*(P518)rt_nil_check(F->s_327)).a != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_327)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P518)rt_nil_check(F->s_327)).a == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_327)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1086 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_327)).a, (*(P526)rt_nil_check(g_func_sym_572)).result, &F->vt_1085));
f_check_type_175(F->vt_1085, (*(P526)rt_nil_check(g_func_sym_572)).result, (*(P518)rt_nil_check(F->s_327)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_1086), rt_str(";", 1)); b_; }));
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_331(rstr *name_329, rt_int line_330) {
  struct f_exc_id_331fr *F = rt_alloc(sizeof *F);
F->name_329 = name_329;
F->line_330 = line_330;
F->y_1087 = NULL;
F->y_1087 = f_lookup_140(&(*F->name_329));
if (((F->y_1087 != NULL) && ((*(P526)rt_nil_check(F->y_1087)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1087)).cname));
goto ret_;
}
if (((((*F->name_329)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_329), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_329)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_330, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_329), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_333(P518 s_332) {
  struct f_st_guard_333fr *F = rt_alloc(sizeof *F);
F->s_332 = s_332;
F->h_1088 = NULL;
F->h_1088 = (*(P518)rt_nil_check(F->s_332)).b;
F->first_1089 = 1;
F->hv_1090 = NULL;
{
F->f_1091 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1092 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1091), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1091), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1091), rt_str(")) {", 4)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_332)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1091), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1091), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1092), rt_str(" = rt_xcur;", 11)); b_; }));
{ R533 *cell1093 = rt_alloc(sizeof(R533));
(*cell1093).s = NULL;
(*cell1093).next = NULL;
F->hv_1090 = cell1093;
}
(*(P532)rt_nil_check(F->hv_1090)).s = f_mk_3(&F->x_1092);
(*(P532)rt_nil_check(F->hv_1090)).next = g_handlers_575;
g_handlers_575 = F->hv_1090;
while ((F->h_1088 != NULL)) {
F->n_1094 = NULL;
F->n_1094 = (*(P518)rt_nil_check(F->h_1088)).a;
F->conds_1095 = NULL;
F->conds_1095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1094 != NULL)) {
F->conds_1095 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1095)), rt_str(" || ", 4)), F->x_1092), rt_str(" == ", 4)), f_exc_id_331(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->n_1094)).name)), (*(P518)rt_nil_check(F->s_332)).line)); b_; }));
F->n_1094 = (*(P518)rt_nil_check(F->n_1094)).next;
}
if (F->first_1089) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1095))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1095))), rt_str(") {", 3)); b_; }));
}
F->first_1089 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->h_1088)).b);
F->h_1088 = (*(P518)rt_nil_check(F->h_1088)).next;
}
if (F->first_1089) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P518)rt_nil_check(F->s_332)).flag == ((rt_int)1LL))) {
f_gen_body_307((*(P518)rt_nil_check(F->s_332)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1092), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_575 = (*(P532)rt_nil_check(g_handlers_575)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_335(P518 s_334) {
  struct f_st_alloc_335fr *F = rt_alloc(sizeof *F);
F->s_334 = s_334;
F->lv_1096 = NULL;
F->t_1097 = NULL;
F->target_1098 = NULL;
F->vt_1099 = NULL;
F->c_1100 = NULL;
F->tc_1101 = NULL;
F->d_1103 = NULL;
F->p_1104 = NULL;
F->a_1105 = NULL;
f_lvalue_431((*(P518)rt_nil_check(F->s_334)).a, &F->lv_1096, &F->t_1097, &F->c_1100, &F->ro_1102);
if (((*(P522)rt_nil_check(F->t_1097)).kind != ((rt_int)8LL))) {
f_fail_23((*(P518)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_274(F->t_1097);
F->d_1103 = (*(P522)rt_nil_check(F->t_1097)).decl;
F->target_1098 = (*(P522)rt_nil_check(F->t_1097)).target;
if ((f_list_len_54((*(P518)rt_nil_check(F->s_334)).b) != f_list_len_54((*(P518)rt_nil_check(F->d_1103)).b))) {
f_fail_23((*(P518)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P518)rt_nil_check(F->d_1103)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1106 = rt_str_copy(f_ctype_177(F->target_1098));
F->cell_1107 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1106), rt_str(" *", 2)), F->cell_1107), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1106), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_1104 = (*(P518)rt_nil_check(F->d_1103)).b;
F->a_1105 = (*(P518)rt_nil_check(F->s_334)).b;
while ((F->p_1104 != NULL)) {
F->v_1108 = rt_str_copy(f_gexpr_454(F->a_1105, g_ty_int_579, &F->vt_1099));
F->pv_1109 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1110 = NULL;
F->y_1110 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_1104)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1109), rt_str(" = ", 3)), F->v_1108), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_1110)).t = g_ty_int_579;
(*(P526)rt_nil_check(F->y_1110)).access = f_mk_3(&F->pv_1109);
f_define_145(F->y_1110, (*(P518)rt_nil_check(F->s_334)).line);
F->p_1104 = (*(P518)rt_nil_check(F->p_1104)).next;
F->a_1105 = (*(P518)rt_nil_check(F->a_1105)).next;
}
F->vt_1099 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_1103)).a, &F->tc_1101);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1107), rt_str(")", 1)); b_; }), F->target_1098, F->tc_1101);
f_close_scope_152();
if (((*(P518)rt_nil_check(F->s_334)).c != NULL)) {
F->v_1111 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_334)).c, F->target_1098, &F->vt_1099));
f_check_type_175(F->vt_1099, F->target_1098, (*(P518)rt_nil_check(F->s_334)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1107), rt_str(")", 1)); b_; }), F->target_1098, &F->v_1111, F->tc_1101); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->lv_1096)), rt_str(" = ", 3)), F->cell_1107), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_337(P518 e_336) {
  struct f_act_ref_337fr *F = rt_alloc(sizeof *F);
F->e_336 = e_336;
F->lv_1112 = NULL;
F->t_1113 = NULL;
F->c_1114 = NULL;
if (((((*(P518)rt_nil_check(F->e_336)).kind == ((rt_int)7LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_336)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_425(F->e_336))) {
F->v_1116 = rt_str_copy(f_gexpr_454(F->e_336, g_ty_act_589, &F->t_1113));
if (((*(P522)rt_nil_check(F->t_1113)).kind != ((rt_int)14LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1116;
goto ret_;
}
f_lvalue_431(F->e_336, &F->lv_1112, &F->t_1113, &F->c_1114, &F->ro_1115);
if (((*(P522)rt_nil_check(F->t_1113)).kind != ((rt_int)14LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P513)rt_nil_check(F->lv_1112));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_339(P518 s_338) {
  struct f_st_create_339fr *F = rt_alloc(sizeof *F);
F->s_338 = s_338;
F->y_1117 = NULL;
F->y_1117 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name)));
F->pm_1118 = NULL;
F->a_1119 = NULL;
F->a_1119 = (*(P518)rt_nil_check(F->s_338)).b;
F->lv_1120 = NULL;
F->lt_1121 = NULL;
F->vt_1122 = NULL;
F->lc_1123 = NULL;
if (((F->y_1117 != NULL) && ((*(P526)rt_nil_check(F->y_1117)).kind == ((rt_int)10LL)))) {
F->y_1117 = f_instantiate_410(F->y_1117, (*(P518)rt_nil_check(F->s_338)).e, (*(P518)rt_nil_check(F->s_338)).b, (*(P518)rt_nil_check(F->s_338)).line);
}
if (((F->y_1117 == NULL) || ((*(P526)rt_nil_check(F->y_1117)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1118 = (*(P526)rt_nil_check(F->y_1117)).params;
{
F->at_1125 = NULL;
F->ac_1126 = NULL;
F->act_1128 = NULL;
F->nf_1129 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_431((*(P518)rt_nil_check(F->s_338)).a, &F->lv_1120, &F->at_1125, &F->ac_1126, &F->aro_1127);
if (((*(P522)rt_nil_check(F->at_1125)).kind == ((rt_int)14LL))) {
F->act_1128 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_337((*(P518)rt_nil_check(F->s_338)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1117)).cname))), rt_str("fr *", 4)), F->nf_1129), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1129), rt_str(");", 2)); b_; }));
if (((*(P526)rt_nil_check(F->y_1117)).level > ((rt_int)0LL))) {
F->link_1130 = NULL;
F->link_1130 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1132 = ((rt_int)1LL), hi1133 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_1117)).level);
for (rt_int it1134 = lo1132; it1134 <= hi1133; it1134++) {
F->i_1131 = it1134;
F->link_1130 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_1130)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1129, rt_str("->up = ", 7)), (*(P513)rt_nil_check(F->link_1130))), rt_str(";", 1)); b_; }));
}
while (((F->a_1119 != NULL) && (F->pm_1118 != NULL))) {
if (((*(P528)rt_nil_check(F->pm_1118)).mode == ((rt_int)1LL))) {
F->v_1135 = rt_str_copy(f_gexpr_454(F->a_1119, (*(P528)rt_nil_check(F->pm_1118)).t, &F->vt_1122));
f_check_type_175(F->vt_1122, (*(P528)rt_nil_check(F->pm_1118)).t, (*(P518)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1129, rt_str("->", 2)), (*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1118)).cfield))), rt_str(" = ", 3)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1118)).t, &F->v_1135)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_431(F->a_1119, &F->lv_1120, &F->lt_1121, &F->lc_1123, &F->ro_1124);
f_check_type_175(F->lt_1121, (*(P528)rt_nil_check(F->pm_1118)).t, (*(P518)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1129, rt_str("->", 2)), (*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1118)).cfield))), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_1120))), rt_str(";", 1)); b_; }));
}
F->a_1119 = (*(P518)rt_nil_check(F->a_1119)).next;
F->pm_1118 = (*(P528)rt_nil_check(F->pm_1118)).next;
}
if (((F->a_1119 != NULL) || (F->pm_1118 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name))); b_; }));
}
if ((F->act_1128 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P513)rt_nil_check(F->act_1128))), rt_str(", &", 3)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1117)).cname))), rt_str("decl, ", 6)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1117)).cname))), rt_str(", ", 2)), F->nf_1129), rt_str("); }", 4)); b_; }));
} else {
f_user_create_349(F->s_338, F->y_1117, &(*(P513)rt_nil_check(F->lv_1120)), F->at_1125, &F->nf_1129);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  return;
}

static void f_hidden_var_343(rstr *name_340, P522 t_341, rstr *place_342) {
  struct f_hidden_var_343fr *F = rt_alloc(sizeof *F);
F->name_340 = name_340;
F->t_341 = t_341;
F->place_342 = place_342;
F->y_1136 = NULL;
F->y_1136 = f_new_sym_155(((rt_int)1LL), f_mk_3(&(*F->name_340)));
(*(P526)rt_nil_check(F->y_1136)).t = F->t_341;
(*(P526)rt_nil_check(F->y_1136)).level = ((rt_int)0LL);
(*(P526)rt_nil_check(F->y_1136)).access = f_mk_3(&(*F->place_342));
f_define_145(F->y_1136, ((rt_int)0LL));
ret_:
  return;
}

static void f_user_create_349(P518 s_344, P526 y_345, rstr *uv_346, P522 ut_347, rstr *nf_348) {
  struct f_user_create_349fr *F = rt_alloc(sizeof *F);
F->s_344 = s_344;
F->y_345 = y_345;
F->uv_346 = uv_346;
F->ut_347 = ut_347;
F->nf_348 = nf_348;
F->t_1137 = NULL;
F->saved_1138 = NULL;
F->saved_1138 = g_code_562;
F->hook_1139 = NULL;
F->hook_1139 = f_new_buffer_24();
F->un_1140 = NULL;
F->un_1140 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->s_344)).line);
F->hn_1141 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1142 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1143 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1144 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_343(&F->uname_1143, F->ut_347, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->ut_347)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P518)rt_nil_check(F->un_1140)).name = f_mk_3(&F->uname_1143);
g_code_562 = F->hook_1139;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1140, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1137)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1140, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1137)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1140, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1137)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1140, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1137)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_562 = F->saved_1138;
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1141), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1141), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_564) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check((*(P526)rt_nil_check(g_func_sym_572)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_559, F->hook_1139);
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1142), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1142, rt_str("->hook = ", 9)), F->hn_1141), rt_str("; ", 2)), F->aa_1142), rt_str("->ua = &", 8)), (*F->uv_346)), rt_str("; ", 2)), F->aa_1142), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_492(F->ut_347)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_564) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1142, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1142), rt_str(", &", 3)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_345)).cname))), rt_str("decl, ", 6)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_345)).cname))), rt_str(", ", 2)), (*F->nf_348)), rt_str(");", 2)); b_; }));
f_hidden_var_343(&F->aname_1144, g_ty_act_589, &F->aa_1142);
{
F->start_1145 = NULL;
F->start_1145 = f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P518)rt_nil_check(F->s_344)).a, (*(P518)rt_nil_check(F->s_344)).line);
F->an_1146 = NULL;
F->an_1146 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->s_344)).line);
(*(P518)rt_nil_check(F->an_1146)).name = f_mk_3(&F->aname_1144);
(*(P518)rt_nil_check((*(P518)rt_nil_check(F->start_1145)).b)).next = F->an_1146;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_502(F->start_1145, 1, &F->t_1137), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  return;
}

static rstr f_wait_alt_354(P518 inv_350, rstr *arr_351, rt_int i_352, int mixed_353) {
  struct f_wait_alt_354fr *F = rt_alloc(sizeof *F);
F->inv_350 = inv_350;
F->arr_351 = arr_351;
F->i_352 = i_352;
F->mixed_353 = mixed_353;
F->lv_1147 = NULL;
F->t_1148 = NULL;
F->vt_1149 = NULL;
F->c_1150 = NULL;
F->fn_1152 = NULL;
F->args_1153 = NULL;
F->slot_1154 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_351), rt_str("[", 1)), f_itos_7(F->i_352)), rt_str("]", 1)));
if ((((*(P518)rt_nil_check(F->inv_350)).kind != ((rt_int)10LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_350)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1152 = (*(P518)rt_nil_check(F->inv_350)).a;
F->args_1153 = (*(P518)rt_nil_check(F->inv_350)).b;
if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_431(F->args_1153, &F->lv_1147, &F->t_1148, &F->c_1150, &F->ro_1151);
if (((*(P522)rt_nil_check(F->t_1148)).kind != ((rt_int)12LL))) {
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("RECEIVE", 7))) {
F->dv_1155 = NULL;
F->dt_1156 = NULL;
f_lvalue_431((*(P518)rt_nil_check(F->args_1153)).next, &F->dv_1155, &F->dt_1156, &F->c_1150, &F->ro_1151);
f_check_type_175(F->dt_1156, (*(P522)rt_nil_check(F->t_1148)).elem, (*(P518)rt_nil_check(F->inv_350)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P513)rt_nil_check(F->lv_1147))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1155))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1157 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1158 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_1153)).next, (*(P522)rt_nil_check(F->t_1148)).elem, &F->vt_1149));
f_check_type_175(F->vt_1149, (*(P522)rt_nil_check(F->t_1148)).elem, (*(P518)rt_nil_check(F->inv_350)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P522)rt_nil_check(F->t_1148)).elem), rt_str(" ", 1)), F->tmp_1157), rt_str(" = ", 3)), F->v_1158), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P513)rt_nil_check(F->lv_1147))), rt_str(", &", 3)), F->tmp_1157), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1159 = rt_str_copy(f_gexpr_454(F->args_1153, g_ty_int_579, &F->vt_1149));
if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("DELAY", 5)) && F->mixed_353)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1159), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1159), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1159), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1154, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_337(F->args_1153)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1152)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_builtin_wait_356(P518 inv_355) {
  struct f_builtin_wait_356fr *F = rt_alloc(sizeof *F);
F->inv_355 = inv_355;
F->lv_1160 = NULL;
F->t_1161 = NULL;
F->c_1162 = NULL;
F->saved_1164 = NULL;
F->saved_1164 = g_code_562;
F->ok_1165 = 0;
if ((((*(P518)rt_nil_check(F->inv_355)).kind != ((rt_int)10LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).kind != ((rt_int)7LL)))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_355)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_577 = rt_add(g_trial_577, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1166;
if (RT_TRY(xf1166)) {
f_lvalue_431((*(P518)rt_nil_check(F->inv_355)).b, &F->lv_1160, &F->t_1161, &F->c_1162, &F->ro_1163);
F->ok_1165 = ((*(P522)rt_nil_check(F->t_1161)).kind == ((rt_int)12LL));
RT_POP(xf1166);
} else {
RT_POP(xf1166);
int x1167 = rt_xcur;
if (0 || x1167 == ex_compile_error_1) {
F->ok_1165 = 0;
} else {
rt_raise(x1167);
}
}
}
g_trial_577 = rt_sub(g_trial_577, ((rt_int)1LL));
g_code_562 = F->saved_1164;
F->result_ = F->ok_1165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_wait_op_361(P518 inv_357, rstr *op_358, rstr *q_359, int is_stmt_360) {
  struct f_wait_op_361fr *F = rt_alloc(sizeof *F);
F->inv_357 = inv_357;
F->op_358 = op_358;
F->q_359 = q_359;
F->is_stmt_360 = is_stmt_360;
F->x_1168 = NULL;
F->x_1168 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->f_1169 = NULL;
F->f_1169 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->qn_1170 = NULL;
F->qn_1170 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->t_1171 = NULL;
(*(P518)rt_nil_check(F->f_1169)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_357)).a)).name)), rt_str("_", 1)), (*F->op_358)); b_; }));
(*(P518)rt_nil_check(F->qn_1170)).name = f_mk_3(&(*F->q_359));
(*(P518)rt_nil_check(F->qn_1170)).next = (*(P518)rt_nil_check(F->inv_357)).b;
(*(P518)rt_nil_check(F->x_1168)).a = F->f_1169;
(*(P518)rt_nil_check(F->x_1168)).b = F->qn_1170;
{
F->r_1172 = rt_str_copy(f_gcall_502(F->x_1168, F->is_stmt_360, &F->t_1171));
if ((!F->is_stmt_360)) {
f_check_type_175(F->t_1171, g_ty_bool_580, (*(P518)rt_nil_check(F->inv_357)).line);
}
F->result_ = F->r_1172;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_wait_366(P518 s_362, rstr *arr_363, rstr *w_364, rt_int n_365) {
  struct f_user_wait_366fr *F = rt_alloc(sizeof *F);
F->s_362 = s_362;
F->arr_363 = arr_363;
F->w_364 = w_364;
F->n_365 = n_365;
F->a_1173 = NULL;
F->a_1173 = (*(P518)rt_nil_check(F->s_362)).a;
F->i_1174 = ((rt_int)0LL);
F->tests_1175 = NULL;
F->tests_1175 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1176 = NULL;
F->revokes_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1173 != NULL)) {
F->inv_1177 = NULL;
F->inv_1177 = (*(P518)rt_nil_check(F->a_1173)).a;
while ((F->inv_1177 != NULL)) {
if (f_builtin_wait_356(F->inv_1177)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1177, &(*F->arr_363), F->i_1174, 1); b_; }));
} else {
F->st_1178 = NULL;
F->st_1178 = f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->inv_1177)).line);
F->c_1179 = NULL;
F->qt_1180 = NULL;
F->qname_1181 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1182 = NULL;
F->y_1182 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1181));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_363), rt_str("[", 1)), f_itos_7(F->i_1174)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P518)rt_nil_check(F->st_1178)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_1177)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1180 = f_resolve_subtype_188(F->st_1178, &F->c_1179);
{
F->access_1183 = rt_str_copy(f_storage_283(&F->qname_1181, F->qt_1180));
f_init_storage_204(&F->access_1183, F->qt_1180, F->c_1179);
(*(P526)rt_nil_check(F->y_1182)).t = F->qt_1180;
(*(P526)rt_nil_check(F->y_1182)).c = F->c_1179;
f_bind_286(F->y_1182, &F->access_1183);
f_define_145(F->y_1182, (*(P518)rt_nil_check(F->inv_1177)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_361(F->inv_1177, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1181, 1), rt_str(";", 1)); b_; }));
F->tests_1175 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->tests_1175)), rt_str("if (", 4)), f_wait_op_361(F->inv_1177, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1181, 0)), rt_str(") { ", 4)), f_wait_op_361(F->inv_1177, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1181, 1)), rt_str("; ", 2)), (*F->w_364)), rt_str(" = ", 3)), f_itos_7(F->i_1174)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->revokes_1176)), f_wait_op_361(F->inv_1177, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1181, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1174 = rt_add(F->i_1174, ((rt_int)1LL));
F->inv_1177 = (*(P518)rt_nil_check(F->inv_1177)).next;
}
F->a_1173 = (*(P518)rt_nil_check(F->a_1173)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_364)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P513)rt_nil_check(F->tests_1175))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_364), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); if (", 7)), (*F->w_364)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_364)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_364)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P513)rt_nil_check(F->revokes_1176)));
ret_:
  return;
}

static void f_st_wait_368(P518 s_367) {
  struct f_st_wait_368fr *F = rt_alloc(sizeof *F);
F->s_367 = s_367;
F->a_1184 = NULL;
F->a_1184 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1185 = ((rt_int)0LL);
F->first_1186 = 1;
F->inits_1187 = NULL;
F->inits_1187 = f_new_buffer_24();
F->user_1188 = 0;
F->arr_1189 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1190 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1184 != NULL)) {
F->inv_1191 = NULL;
F->inv_1191 = (*(P518)rt_nil_check(F->a_1184)).a;
F->n_1185 = rt_add(F->n_1185, f_list_len_54((*(P518)rt_nil_check(F->a_1184)).a));
while ((F->inv_1191 != NULL)) {
if ((!f_builtin_wait_356(F->inv_1191))) {
F->user_1188 = 1;
}
F->inv_1191 = (*(P518)rt_nil_check(F->inv_1191)).next;
}
F->a_1184 = (*(P518)rt_nil_check(F->a_1184)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1189), rt_str("[", 1)), f_itos_7(F->n_1185)), rt_str("];", 2)); b_; }));
if (F->user_1188) {
f_user_wait_366(F->s_367, &F->arr_1189, &F->w_1190, F->n_1185);
} else {
F->a_1184 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1185 = ((rt_int)0LL);
while ((F->a_1184 != NULL)) {
F->inv_1192 = NULL;
F->inv_1192 = (*(P518)rt_nil_check(F->a_1184)).a;
while ((F->inv_1192 != NULL)) {
f_put_27(F->inits_1187, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1192, &F->arr_1189, F->n_1185, 0); b_; }));
F->n_1185 = rt_add(F->n_1185, ((rt_int)1LL));
F->inv_1192 = (*(P518)rt_nil_check(F->inv_1192)).next;
}
F->a_1184 = (*(P518)rt_nil_check(F->a_1184)).next;
}
f_splice_34(g_code_562, F->inits_1187);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1190), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1185)), rt_str(", ", 2)), F->arr_1189), rt_str(");", 2)); b_; }));
}
F->a_1184 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1185 = ((rt_int)0LL);
while ((F->a_1184 != NULL)) {
F->conds_1193 = NULL;
F->conds_1193 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1195 = ((rt_int)1LL), hi1196 = f_list_len_54((*(P518)rt_nil_check(F->a_1184)).a);
for (rt_int it1197 = lo1195; it1197 <= hi1196; it1197++) {
F->i_1194 = it1197;
F->conds_1193 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1193)), rt_str(" || ", 4)), F->w_1190), rt_str(" == ", 4)), f_itos_7(F->n_1185)); b_; }));
F->n_1185 = rt_add(F->n_1185, ((rt_int)1LL));
}
}
if (F->first_1186) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1193))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1193))), rt_str(") {", 3)); b_; }));
}
F->first_1186 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1184)).b);
F->a_1184 = (*(P518)rt_nil_check(F->a_1184)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P518 f_call_node_372(rstr *name_369, P518 arg_370, rt_int line_371) {
  struct f_call_node_372fr *F = rt_alloc(sizeof *F);
F->name_369 = name_369;
F->arg_370 = arg_370;
F->line_371 = line_371;
F->x_1198 = NULL;
F->x_1198 = f_nn_48(((rt_int)10LL), F->line_371);
F->f_1199 = NULL;
F->f_1199 = f_nn_48(((rt_int)7LL), F->line_371);
(*(P518)rt_nil_check(F->f_1199)).name = f_mk_3(&(*F->name_369));
(*(P518)rt_nil_check(F->x_1198)).a = F->f_1199;
(*(P518)rt_nil_check(F->x_1198)).b = f_copy_node_456(F->arg_370);
(*(P518)rt_nil_check((*(P518)rt_nil_check(F->x_1198)).b)).next = NULL;
F->result_ = F->x_1198;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_region_374(P518 s_373) {
  struct f_user_region_374fr *F = rt_alloc(sizeof *F);
F->s_373 = s_373;
F->t_1200 = NULL;
F->f_1201 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1202 = rt_str_copy(f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P518)rt_nil_check(F->s_373)).a, (*(P518)rt_nil_check(F->s_373)).line), 1, &F->t_1200));
F->unlock_1203 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P518)rt_nil_check(F->s_373)).a, (*(P518)rt_nil_check(F->s_373)).line), 1, &F->t_1200)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1202), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1201), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1201), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1201), rt_str("); ", 3)), F->unlock_1203); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_373)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1201), rt_str("); ", 3)), F->unlock_1203); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1201), rt_str("); ", 3)), F->unlock_1203), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_376(P518 s_375) {
  struct f_st_region_376fr *F = rt_alloc(sizeof *F);
F->s_375 = s_375;
F->lv_1204 = NULL;
F->t_1205 = NULL;
F->c_1206 = NULL;
F->lk_1208 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1209 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_431((*(P518)rt_nil_check(F->s_375)).a, &F->lv_1204, &F->t_1205, &F->c_1206, &F->ro_1207);
if (((*(P522)rt_nil_check(F->t_1205)).kind != ((rt_int)13LL))) {
f_user_region_374(F->s_375);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1208), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_1204))), rt_str("; rt_region_enter(", 18)), F->lk_1208), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1209), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1209), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1209), rt_str("); rt_region_leave(", 19)), F->lk_1208), rt_str(");", 2)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_375)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1209), rt_str("); rt_region_leave(", 19)), F->lk_1208), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1209), rt_str("); rt_region_leave(", 19)), F->lk_1208), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P518 f_gparam_379(P518 g_377, rstr *name_378) {
  struct f_gparam_379fr *F = rt_alloc(sizeof *F);
F->g_377 = g_377;
F->name_378 = name_378;
F->p_1210 = NULL;
F->p_1210 = (*(P518)rt_nil_check(F->g_377)).a;
while ((F->p_1210 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1210)).name)), (*F->name_378))) {
F->result_ = F->p_1210;
goto ret_;
}
F->p_1210 = (*(P518)rt_nil_check(F->p_1210)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_bind_sym_381(P518 p_380) {
  struct f_bind_sym_381fr *F = rt_alloc(sizeof *F);
F->p_380 = p_380;
F->y_1211 = NULL;
if (((*(P518)rt_nil_check(F->p_380)).ival <= ((rt_int)2LL))) {
F->y_1211 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->p_380)).name);
} else {
F->y_1211 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_380)).name);
}
F->result_ = F->y_1211;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_384(P526 a_382, P526 b_383) {
  struct f_same_binds_384fr *F = rt_alloc(sizeof *F);
F->a_382 = a_382;
F->b_383 = b_383;
F->x_1212 = NULL;
F->x_1212 = F->a_382;
F->y_1213 = NULL;
F->y_1213 = F->b_383;
while (((F->x_1212 != NULL) && (F->y_1213 != NULL))) {
if (((!rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->x_1212)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1213)).name)))) || (!f_same_binding_387(F->x_1212, F->y_1213)))) {
F->result_ = 0;
goto ret_;
}
F->x_1212 = (*(P526)rt_nil_check(F->x_1212)).mnext;
F->y_1213 = (*(P526)rt_nil_check(F->y_1213)).mnext;
}
F->result_ = ((F->x_1212 == NULL) && (F->y_1213 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_387(P526 a_385, P526 b_386) {
  struct f_same_binding_387fr *F = rt_alloc(sizeof *F);
F->a_385 = a_385;
F->b_386 = b_386;
if (((*(P526)rt_nil_check(F->a_385)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P526)rt_nil_check(F->b_386)).kind == ((rt_int)5LL)) && f_same_164((*(P526)rt_nil_check(F->a_385)).t, (*(P526)rt_nil_check(F->b_386)).t));
goto ret_;
}
if ((((*(P526)rt_nil_check(F->a_385)).kind == ((rt_int)2LL)) && (*(P526)rt_nil_check(F->a_385)).hasmv)) {
F->result_ = ((*(P526)rt_nil_check(F->b_386)).hasmv && ((*(P526)rt_nil_check(F->a_385)).mvalue == (*(P526)rt_nil_check(F->b_386)).mvalue));
goto ret_;
}
F->result_ = ((((*(P526)rt_nil_check(F->a_385)).cname != NULL) && ((*(P526)rt_nil_check(F->b_386)).cname != NULL)) && rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->a_385)).cname)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->b_386)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_tt_binds_392(P518 gd_388, P518 formals_389, P518 actuals_390, rt_int line_391) {
  struct f_tt_binds_392fr *F = rt_alloc(sizeof *F);
F->gd_388 = gd_388;
F->formals_389 = formals_389;
F->actuals_390 = actuals_390;
F->line_391 = line_391;
F->f_1214 = NULL;
F->f_1214 = F->formals_389;
F->a_1215 = NULL;
F->a_1215 = F->actuals_390;
F->binds_1216 = NULL;
F->c_1217 = NULL;
F->at_1218 = NULL;
while (((F->f_1214 != NULL) && (F->a_1215 != NULL))) {
F->p_1219 = NULL;
F->p_1219 = f_gparam_379(F->gd_388, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->f_1214)).name)));
F->b_1220 = NULL;
if ((F->p_1219 == NULL)) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->f_1214)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1220 = f_bind_sym_381(F->p_1219);
if (((*(P518)rt_nil_check(F->p_1219)).ival <= ((rt_int)2LL))) {
if (((*(P518)rt_nil_check(F->a_1215)).kind >= ((rt_int)70LL))) {
(*(P526)rt_nil_check(F->b_1220)).t = f_resolve_subtype_188(F->a_1215, &F->c_1217);
} else {
F->st_1221 = NULL;
F->st_1221 = f_nn_48(((rt_int)80LL), F->line_391);
(*(P518)rt_nil_check(F->st_1221)).name = (*(P518)rt_nil_check(F->a_1215)).name;
(*(P526)rt_nil_check(F->b_1220)).t = f_resolve_subtype_188(F->st_1221, &F->c_1217);
}
(*(P526)rt_nil_check(F->b_1220)).c = F->c_1217;
} else if (((*(P518)rt_nil_check(F->p_1219)).ival <= ((rt_int)5LL))) {
if ((((*(P518)rt_nil_check(F->a_1215)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->a_1215)).name))) == NULL))) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1219)).name))); b_; }));
}
F->b_1220 = f_copy_sym_253(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->a_1215)).name))));
(*(P526)rt_nil_check(F->b_1220)).name = (*(P518)rt_nil_check(F->p_1219)).name;
} else {
(*(P526)rt_nil_check(F->b_1220)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_1219)).a, &F->c_1217);
(*(P526)rt_nil_check(F->b_1220)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454(F->a_1215, (*(P526)rt_nil_check(F->b_1220)).t, &F->at_1218); b_; }));
(*(P526)rt_nil_check(F->b_1220)).mvalue = f_manifest_217(F->a_1215, &F->ok_1222);
(*(P526)rt_nil_check(F->b_1220)).hasmv = F->ok_1222;
}
(*(P526)rt_nil_check(F->b_1220)).mnext = F->binds_1216;
F->binds_1216 = F->b_1220;
F->f_1214 = (*(P518)rt_nil_check(F->f_1214)).next;
F->a_1215 = (*(P518)rt_nil_check(F->a_1215)).next;
}
F->result_ = F->binds_1216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_generic_use_394(P518 st_393) {
  struct f_generic_use_394fr *F = rt_alloc(sizeof *F);
F->st_393 = st_393;
if (((*(P518)rt_nil_check(F->st_393)).kind == ((rt_int)78LL))) {
F->result_ = ((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P526)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)));
goto ret_;
}
F->result_ = (((((*(P518)rt_nil_check(F->st_393)).kind == ((rt_int)80LL)) && ((*(P518)rt_nil_check(F->st_393)).a != NULL)) && (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_393)).name))) != NULL)) && ((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_393)).name))))).kind == ((rt_int)10LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_infer_from_399(P518 gd_395, P518 pat_396, P522 t_397, P526 known_398) {
  struct f_infer_from_399fr *F = rt_alloc(sizeof *F);
F->gd_395 = gd_395;
F->pat_396 = pat_396;
F->t_397 = t_397;
F->known_398 = known_398;
F->binds_1223 = NULL;
F->binds_1223 = F->known_398;
F->e_1224 = NULL;
F->e_1224 = (*(P518)rt_nil_check(F->pat_396)).a;
F->tp_1225 = NULL;
if (((F->t_397 == NULL) || ((*(P522)rt_nil_check(F->t_397)).gen == NULL))) {
F->result_ = F->binds_1223;
goto ret_;
}
F->tp_1225 = (*(P518)rt_nil_check((*(P526)rt_nil_check((*(P522)rt_nil_check(F->t_397)).gen)).decl)).a;
if (((*(P518)rt_nil_check(F->pat_396)).kind == ((rt_int)78LL))) {
F->e_1224 = f_copy_node_456((*(P518)rt_nil_check(F->pat_396)).a);
(*(P518)rt_nil_check(F->e_1224)).next = NULL;
}
while (((F->e_1224 != NULL) && (F->tp_1225 != NULL))) {
F->nm_1226 = NULL;
if ((((*(P518)rt_nil_check(F->e_1224)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check(F->e_1224)).kind == ((rt_int)80LL)))) {
F->nm_1226 = (*(P518)rt_nil_check(F->e_1224)).name;
}
if ((((F->nm_1226 != NULL) && (f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1226))) != NULL)) && ((*(P518)rt_nil_check(f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1226))))).ival <= ((rt_int)2LL)))) {
F->q_1227 = NULL;
F->q_1227 = F->binds_1223;
F->have_1228 = 0;
while ((F->q_1227 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->q_1227)).name)), (*(P513)rt_nil_check(F->nm_1226)))) {
F->have_1228 = 1;
}
F->q_1227 = (*(P526)rt_nil_check(F->q_1227)).mnext;
}
if ((!F->have_1228)) {
F->g_1229 = NULL;
F->g_1229 = (*(P522)rt_nil_check(F->t_397)).gbinds;
while ((F->g_1229 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->g_1229)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->tp_1225)).name)))) {
F->b_1230 = NULL;
F->b_1230 = f_bind_sym_381(f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1226))));
(*(P526)rt_nil_check(F->b_1230)).t = (*(P526)rt_nil_check(F->g_1229)).t;
(*(P526)rt_nil_check(F->b_1230)).c = (*(P526)rt_nil_check(F->g_1229)).c;
(*(P526)rt_nil_check(F->b_1230)).mnext = F->binds_1223;
F->binds_1223 = F->b_1230;
}
F->g_1229 = (*(P526)rt_nil_check(F->g_1229)).mnext;
}
}
}
F->e_1224 = (*(P518)rt_nil_check(F->e_1224)).next;
F->tp_1225 = (*(P518)rt_nil_check(F->tp_1225)).next;
}
F->result_ = F->binds_1223;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_instantiate_type_405(P526 g_400, P518 tt_401, P518 args_402, P520 *c_403, rt_int line_404) {
  struct f_instantiate_type_405fr *F = rt_alloc(sizeof *F);
F->g_400 = g_400;
F->tt_401 = tt_401;
F->args_402 = args_402;
F->c_403 = c_403;
F->c_403v = *F->c_403;
F->line_404 = line_404;
F->gd_1231 = NULL;
F->gd_1231 = (*(P526)rt_nil_check(F->g_400)).decl;
F->pat_1232 = NULL;
F->pat_1232 = (*(P518)rt_nil_check(F->gd_1231)).b;
F->binds_1233 = NULL;
F->binds_1233 = f_tt_binds_392(F->gd_1231, (*(P518)rt_nil_check(F->pat_1232)).e, F->tt_401, F->line_404);
F->inst_1234 = NULL;
F->inst_1234 = g_all_insts_550;
F->t_1235 = NULL;
F->saved_caps_1236 = NULL;
F->saved_caps_1236 = g_caps_567;
F->saved_env_1237 = NULL;
F->saved_env_1237 = g_genv_549;
F->c_403v = f_new_cons_158();
(*(P520)rt_nil_check(F->c_403v)).args = F->args_402;
while ((F->inst_1234 != NULL)) {
if ((((*(P526)rt_nil_check(F->inst_1234)).decl == F->pat_1232) && f_same_binds_384((*(P526)rt_nil_check(F->inst_1234)).members, F->binds_1233))) {
F->result_ = (*(P526)rt_nil_check(F->inst_1234)).t;
goto ret_;
}
F->inst_1234 = (*(P526)rt_nil_check(F->inst_1234)).insts;
}
f_open_scope_151();
{
F->b_1238 = NULL;
F->b_1238 = F->binds_1233;
while ((F->b_1238 != NULL)) {
f_define_145(F->b_1238, F->line_404);
F->b_1238 = (*(P526)rt_nil_check(F->b_1238)).mnext;
}
}
g_caps_567 = NULL;
g_genv_549 = (*(P526)rt_nil_check(F->g_400)).env;
{
F->y_1239 = NULL;
F->y_1239 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->pat_1232)).name);
F->yc_1240 = NULL;
(*(P526)rt_nil_check(F->y_1239)).decl = F->pat_1232;
if (((*(P518)rt_nil_check(F->pat_1232)).kind == ((rt_int)44LL))) {
F->t_1235 = f_new_typ_157(((rt_int)8LL));
(*(P522)rt_nil_check(F->t_1235)).name = (*(P518)rt_nil_check(F->pat_1232)).name;
(*(P522)rt_nil_check(F->t_1235)).decl = F->pat_1232;
(*(P526)rt_nil_check(F->y_1239)).t = F->t_1235;
f_define_145(F->y_1239, F->line_404);
f_finish_ptr_274(F->t_1235);
} else {
f_define_145(F->y_1239, F->line_404);
F->t_1235 = f_new_type_200(F->y_1239, f_nn_48(((rt_int)80LL), F->line_404), &F->yc_1240);
}
}
g_caps_567 = F->saved_caps_1236;
g_genv_549 = F->saved_env_1237;
(*(P522)rt_nil_check(F->t_1235)).gen = F->g_400;
(*(P522)rt_nil_check(F->t_1235)).gbinds = F->binds_1233;
f_close_scope_152();
{ R527 *cell1241 = rt_alloc(sizeof(R527));
(*cell1241).name = NULL;
(*cell1241).t = NULL;
(*cell1241).c = NULL;
(*cell1241).access = NULL;
(*cell1241).cname = NULL;
(*cell1241).st = NULL;
(*cell1241).decl = NULL;
(*cell1241).params = NULL;
(*cell1241).result = NULL;
(*cell1241).members = NULL;
(*cell1241).mnext = NULL;
(*cell1241).binds = NULL;
(*cell1241).insts = NULL;
(*cell1241).env = NULL;
(*cell1241).chain = NULL;
(*cell1241).stack = NULL;
F->inst_1234 = cell1241;
}
(*(P526)rt_nil_check(F->inst_1234)).kind = ((rt_int)5LL);
(*(P526)rt_nil_check(F->inst_1234)).name = (*(P526)rt_nil_check(F->g_400)).name;
(*(P526)rt_nil_check(F->inst_1234)).decl = F->pat_1232;
(*(P526)rt_nil_check(F->inst_1234)).t = F->t_1235;
(*(P526)rt_nil_check(F->inst_1234)).members = F->binds_1233;
(*(P526)rt_nil_check(F->inst_1234)).insts = g_all_insts_550;
g_all_insts_550 = F->inst_1234;
F->result_ = F->t_1235;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_403) = F->c_403v;
  return F->result_;
}

static P526 f_instantiate_410(P526 g_406, P518 tt_407, P518 args_408, rt_int line_409) {
  struct f_instantiate_410fr *F = rt_alloc(sizeof *F);
F->g_406 = g_406;
F->tt_407 = tt_407;
F->args_408 = args_408;
F->line_409 = line_409;
F->gd_1242 = NULL;
F->gd_1242 = (*(P526)rt_nil_check(F->g_406)).decl;
F->pat_1243 = NULL;
F->pat_1243 = (*(P518)rt_nil_check(F->gd_1242)).b;
F->binds_1244 = NULL;
F->f_1245 = NULL;
F->f_1245 = (*(P518)rt_nil_check(F->pat_1243)).e;
F->a_1246 = NULL;
F->a_1246 = F->tt_407;
F->fp_1247 = NULL;
F->fp_1247 = (*(P518)rt_nil_check(F->pat_1243)).a;
F->inst_1248 = NULL;
F->at_1249 = NULL;
F->c_1250 = NULL;
F->saved_fctx_1251 = NULL;
F->saved_fctx_1251 = g_fctx_566;
F->saved_in_1252 = g_in_func_564;
F->saved_level_1253 = g_cur_level_565;
F->saved_sym_1254 = NULL;
F->saved_sym_1254 = g_func_sym_572;
F->saved_code_1255 = NULL;
F->saved_code_1255 = g_code_562;
F->saved_env_1256 = NULL;
F->saved_env_1256 = g_genv_549;
F->binds_1244 = f_tt_binds_392(F->gd_1242, F->f_1245, F->a_1246, F->line_409);
F->a_1246 = F->args_408;
while (((F->fp_1247 != NULL) && (F->a_1246 != NULL))) {
if (f_generic_use_394((*(P518)rt_nil_check(F->fp_1247)).a)) {
F->v_1257 = rt_str_copy(f_gexpr_454(F->a_1246, NULL, &F->at_1249));
F->binds_1244 = f_infer_from_399(F->gd_1242, (*(P518)rt_nil_check(F->fp_1247)).a, F->at_1249, F->binds_1244);
} else if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1247)).a)).kind == ((rt_int)80LL)) && (f_gparam_379(F->gd_1242, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1247)).a)).name))) != NULL)) && ((*(P518)rt_nil_check(f_gparam_379(F->gd_1242, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1247)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1258 = 0;
F->q_1259 = NULL;
F->q_1259 = F->binds_1244;
while ((F->q_1259 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->q_1259)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1247)).a)).name)))) {
F->known_1258 = 1;
}
F->q_1259 = (*(P526)rt_nil_check(F->q_1259)).mnext;
}
if ((!F->known_1258)) {
F->b_1260 = NULL;
F->b_1260 = f_bind_sym_381(f_gparam_379(F->gd_1242, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1247)).a)).name))));
F->v_1261 = rt_str_copy(f_gexpr_454(F->a_1246, NULL, &F->at_1249));
(*(P526)rt_nil_check(F->b_1260)).t = F->at_1249;
(*(P526)rt_nil_check(F->b_1260)).c = g_no_cons_590;
(*(P526)rt_nil_check(F->b_1260)).mnext = F->binds_1244;
F->binds_1244 = F->b_1260;
}
}
F->fp_1247 = (*(P518)rt_nil_check(F->fp_1247)).next;
F->a_1246 = (*(P518)rt_nil_check(F->a_1246)).next;
}
F->inst_1248 = g_all_insts_550;
while ((F->inst_1248 != NULL)) {
if ((((*(P526)rt_nil_check(F->inst_1248)).decl == F->pat_1243) && f_same_binds_384((*(P526)rt_nil_check(F->inst_1248)).members, F->binds_1244))) {
F->result_ = F->inst_1248;
goto ret_;
}
F->inst_1248 = (*(P526)rt_nil_check(F->inst_1248)).insts;
}
g_fctx_566 = NULL;
g_in_func_564 = 0;
g_cur_level_565 = ((rt_int)0LL);
g_func_sym_572 = NULL;
g_code_562 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1262 = NULL;
F->b_1262 = F->binds_1244;
while ((F->b_1262 != NULL)) {
f_define_145(F->b_1262, F->line_409);
F->b_1262 = (*(P526)rt_nil_check(F->b_1262)).mnext;
}
}
g_genv_549 = (*(P526)rt_nil_check(F->g_406)).env;
F->inst_1248 = f_build_subprogram_278(F->pat_1243);
(*(P526)rt_nil_check(F->inst_1248)).members = F->binds_1244;
(*(P526)rt_nil_check(F->inst_1248)).insts = g_all_insts_550;
g_all_insts_550 = F->inst_1248;
f_define_145(F->inst_1248, F->line_409);
f_gen_subprogram_295(F->pat_1243, F->inst_1248);
f_close_scope_152();
g_fctx_566 = F->saved_fctx_1251;
g_in_func_564 = F->saved_in_1252;
g_cur_level_565 = F->saved_level_1253;
g_func_sym_572 = F->saved_sym_1254;
g_code_562 = F->saved_code_1255;
g_genv_549 = F->saved_env_1256;
F->result_ = F->inst_1248;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_412(P526 y_411) {
  struct f_access_of_412fr *F = rt_alloc(sizeof *F);
F->y_411 = y_411;
F->p_1263 = NULL;
F->p_1263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P526)rt_nil_check(F->y_411)).level <= ((rt_int)0LL))) {
F->result_ = (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access));
goto ret_;
}
{ rt_int lo1265 = ((rt_int)1LL), hi1266 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_411)).level);
for (rt_int it1267 = lo1265; it1267 <= hi1266; it1267++) {
F->i_1264 = it1267;
F->p_1263 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->p_1263)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P526)rt_nil_check(F->y_411)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P513)rt_nil_check(F->p_1263))), rt_str("->", 2)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->p_1263)), rt_str("->", 2)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_import_of_415(P518 l_413, rstr *name_414) {
  struct f_import_of_415fr *F = rt_alloc(sizeof *F);
F->l_413 = l_413;
F->name_414 = name_414;
F->p_1268 = NULL;
F->p_1268 = F->l_413;
while ((F->p_1268 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1268)).name)), (*F->name_414))) {
F->result_ = F->p_1268;
goto ret_;
}
F->p_1268 = (*(P518)rt_nil_check(F->p_1268)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_418(P526 y_416, rt_int line_417) {
  struct f_check_import_418fr *F = rt_alloc(sizeof *F);
F->y_416 = y_416;
F->line_417 = line_417;
F->c_1269 = NULL;
F->c_1269 = g_fctx_566;
F->ro_1270 = 0;
while (((F->c_1269 != NULL) && ((*(P526)rt_nil_check(F->y_416)).depth < (*(P542)rt_nil_check(F->c_1269)).depth))) {
if ((!(*(P542)rt_nil_check(F->c_1269)).all_imp)) {
F->imp_1271 = NULL;
F->imp_1271 = f_import_of_415((*(P542)rt_nil_check(F->c_1269)).imps, &(*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_416)).name)));
if ((F->imp_1271 == NULL)) {
f_fail_23(F->line_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_416)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P518)rt_nil_check(F->imp_1271)).ival == ((rt_int)1LL))) {
F->ro_1270 = 1;
}
}
F->c_1269 = (*(P542)rt_nil_check(F->c_1269)).next;
}
F->result_ = F->ro_1270;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_420(rstr *s_419) {
  struct f_c_ident_420fr *F = rt_alloc(sizeof *F);
F->s_419 = s_419;
if (rt_str_eq((*F->s_419), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_419), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_419));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_423(rstr *base_421, P522 t_422) {
  struct f_deref_423fr *F = rt_alloc(sizeof *F);
F->base_421 = base_421;
F->t_422 = t_422;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_422)), rt_str(")rt_nil_check(", 14)), (*F->base_421)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_425(P518 e_424) {
  struct f_is_lvalue_425fr *F = rt_alloc(sizeof *F);
F->e_424 = e_424;
if (((*(P518)rt_nil_check(F->e_424)).kind == ((rt_int)7LL))) {
F->y_1272 = NULL;
F->y_1272 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_424)).name)));
F->result_ = ((F->y_1272 != NULL) && (((*(P526)rt_nil_check(F->y_1272)).kind == ((rt_int)1LL)) || ((*(P526)rt_nil_check(F->y_1272)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_424)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_425((*(P518)rt_nil_check(F->e_424)).a);
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_424)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_424)).name)), rt_str("LEN", 3))) && f_is_lvalue_425((*(P518)rt_nil_check(F->e_424)).a));
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_424)).kind == ((rt_int)10LL))) {
if ((((*(P518)rt_nil_check(F->e_424)).b != NULL) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_424)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_425((*(P518)rt_nil_check(F->e_424)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_431(P518 e_426, P513 *code_427, P522 *t_428, P520 *c_429, int *ro_430) {
  struct f_lvalue_431fr *F = rt_alloc(sizeof *F);
F->e_426 = e_426;
F->code_427 = code_427;
F->code_427v = *F->code_427;
F->t_428 = t_428;
F->t_428v = *F->t_428;
F->c_429 = c_429;
F->c_429v = *F->c_429;
F->ro_430 = ro_430;
F->ro_430v = *F->ro_430;
F->base_1273 = NULL;
F->bt_1274 = NULL;
F->bc_1275 = NULL;
if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)7LL))) {
F->y_1276 = NULL;
F->y_1276 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)));
if ((F->y_1276 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P526)rt_nil_check(F->y_1276)).kind != ((rt_int)1LL)) && ((*(P526)rt_nil_check(F->y_1276)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_412(F->y_1276); b_; }));
F->t_428v = (*(P526)rt_nil_check(F->y_1276)).t;
F->c_429v = (*(P526)rt_nil_check(F->y_1276)).c;
F->ro_430v = (*(P526)rt_nil_check(F->y_1276)).ro_flag;
if ((((*(P526)rt_nil_check(F->y_1276)).kind == ((rt_int)1LL)) && f_check_import_418(F->y_1276, (*(P518)rt_nil_check(F->e_426)).line))) {
F->ro_430v = 1;
}
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)17LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->code_427v, &F->t_428v, &F->c_429v, &F->ro_430v);
} else if ((((((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)12LL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_426)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_426)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_490((*(P518)rt_nil_check(F->e_426)).b, (*(P518)rt_nil_check(F->e_426)).line, &F->t_428v); b_; }));
F->c_429v = g_no_cons_590;
F->ro_430v = 0;
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)11LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->base_1273, &F->bt_1274, &F->bc_1275, &F->ro_430v);
f_select_on_439(&(*(P513)rt_nil_check(F->base_1273)), F->bt_1274, F->e_426, &F->ro_430v, &F->code_427v, &F->t_428v, &F->c_429v);
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)10LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->base_1273, &F->bt_1274, &F->bc_1275, &F->ro_430v);
f_index_on_448(&(*(P513)rt_nil_check(F->base_1273)), F->bt_1274, F->e_426, &F->ro_430v, 1, &F->code_427v, &F->t_428v, &F->c_429v);
} else {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_427) = F->code_427v;  (*F->t_428) = F->t_428v;  (*F->c_429) = F->c_429v;  (*F->ro_430) = F->ro_430v;
  return;
}

static void f_select_on_439(rstr *base_432, P522 bt_433, P518 e_434, int *ro_435, P513 *code_436, P522 *t_437, P520 *c_438) {
  struct f_select_on_439fr *F = rt_alloc(sizeof *F);
F->base_432 = base_432;
F->bt_433 = bt_433;
F->e_434 = e_434;
F->ro_435 = ro_435;
F->code_436 = code_436;
F->code_436v = *F->code_436;
F->t_437 = t_437;
F->t_437v = *F->t_437;
F->c_438 = c_438;
F->c_438v = *F->c_438;
F->c_438v = g_no_cons_590;
if (((*(P522)rt_nil_check(F->bt_433)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_433);
(*F->ro_435) = 0;
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)), rt_str("ALL", 3))) {
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_423(&(*F->base_432), F->bt_433); b_; }));
F->t_437v = (*(P522)rt_nil_check(F->bt_433)).target;
goto ret_;
}
f_select_on_439(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_423(&(*F->base_432), F->bt_433); b_; }), (*(P522)rt_nil_check(F->bt_433)).target, F->e_434, &(*F->ro_435), &F->code_436v, &F->t_437v, &F->c_438v);
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_433)).kind == ((rt_int)15LL))) {
F->p_1277 = NULL;
F->p_1277 = (*(P522)rt_nil_check(F->bt_433)).tparams;
if ((!f_opened_190(F->bt_433))) {
f_fail_23((*(P518)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->bt_433)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P522)rt_nil_check(F->bt_433)).tparams == NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)), rt_str("ALL", 3))) {
F->code_436v = f_mk_3(&(*F->base_432));
F->t_437v = (*(P522)rt_nil_check(F->bt_433)).under;
goto ret_;
}
f_select_on_439(&(*F->base_432), (*(P522)rt_nil_check(F->bt_433)).under, F->e_434, &(*F->ro_435), &F->code_436v, &F->t_437v, &F->c_438v);
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)), rt_str("ALL", 3))) {
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_432), rt_str(".all", 4)); b_; }));
F->t_437v = (*(P522)rt_nil_check(F->bt_433)).under;
goto ret_;
}
while ((F->p_1277 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1277)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))) {
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_432), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1277)).name)))); b_; }));
F->t_437v = f_tparam_type_210(F->bt_433, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1277)).name)));
(*F->ro_435) = 1;
goto ret_;
}
F->p_1277 = (*(P518)rt_nil_check(F->p_1277)).next;
}
f_select_on_439(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_432), rt_str(".all", 4)); b_; }), (*(P522)rt_nil_check(F->bt_433)).under, F->e_434, &(*F->ro_435), &F->code_436v, &F->t_437v, &F->c_438v);
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_433)).kind == ((rt_int)7LL))) {
F->f_1278 = NULL;
F->f_1278 = (*(P522)rt_nil_check(F->bt_433)).fields;
while ((F->f_1278 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1278)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))) {
F->c_438v = (*(P524)rt_nil_check(F->f_1278)).c;
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_432), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))); b_; }));
F->t_437v = (*(P524)rt_nil_check(F->f_1278)).t;
goto ret_;
}
F->f_1278 = (*(P524)rt_nil_check(F->f_1278)).next;
}
f_fail_23((*(P518)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name))); b_; }));
}
f_fail_23((*(P518)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_436) = F->code_436v;  (*F->t_437) = F->t_437v;  (*F->c_438) = F->c_438v;
  return;
}

static void f_index_on_448(rstr *base_440, P522 bt_441, P518 e_442, int *ro_443, int lv_444, P513 *code_445, P522 *t_446, P520 *c_447) {
  struct f_index_on_448fr *F = rt_alloc(sizeof *F);
F->base_440 = base_440;
F->bt_441 = bt_441;
F->e_442 = e_442;
F->ro_443 = ro_443;
F->lv_444 = lv_444;
F->code_445 = code_445;
F->code_445v = *F->code_445;
F->t_446 = t_446;
F->t_446v = *F->t_446;
F->c_447 = c_447;
F->c_447v = *F->c_447;
F->a_1279 = NULL;
F->a_1279 = (*(P518)rt_nil_check(F->e_442)).b;
F->it_1280 = NULL;
F->c_447v = g_no_cons_590;
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_441);
(*F->ro_443) = 0;
f_index_on_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_423(&(*F->base_440), F->bt_441); b_; }), (*(P522)rt_nil_check(F->bt_441)).target, F->e_442, &(*F->ro_443), F->lv_444, &F->code_445v, &F->t_446v, &F->c_447v);
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_441))) {
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->bt_441)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P522)rt_nil_check(F->bt_441)).tparams == NULL)) {
f_index_on_448(&(*F->base_440), (*(P522)rt_nil_check(F->bt_441)).under, F->e_442, &(*F->ro_443), F->lv_444, &F->code_445v, &F->t_446v, &F->c_447v);
} else {
f_index_on_448(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_440), rt_str(".all", 4)); b_; }), (*(P522)rt_nil_check(F->bt_441)).under, F->e_442, &(*F->ro_443), F->lv_444, &F->code_445v, &F->t_446v, &F->c_447v);
}
goto ret_;
}
if ((((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)6LL)) && ((*(P522)rt_nil_check(F->bt_441)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1279) != ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1281 = rt_str_copy(f_gexpr_454(F->a_1279, (*(P522)rt_nil_check(F->bt_441)).idx, &F->it_1280));
F->j_1282 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1279)).next, (*(P522)rt_nil_check(F->bt_441)).idx2, &F->it_1280));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_440), rt_str(".p[(rt_index(", 13)), F->i_1281), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo, ", 5)), (*F->base_440)), rt_str(".hi) - ", 7)), (*F->base_440)), rt_str(".lo) * (", 8)), (*F->base_440)), rt_str(".hi2 - ", 7)), (*F->base_440)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1282), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo2, ", 6)), (*F->base_440)), rt_str(".hi2) - ", 8)), (*F->base_440)), rt_str(".lo2]", 5)); b_; }));
F->t_446v = (*(P522)rt_nil_check(F->bt_441)).elem;
F->c_447v = (*(P522)rt_nil_check(F->bt_441)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1279) != ((rt_int)1LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)5LL))) {
if (((*(P518)rt_nil_check(F->a_1279)).kind == ((rt_int)16LL))) {
F->lo_1283 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1279)).a, g_ty_int_579, &F->it_1280));
F->hi_1284 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1279)).b, g_ty_int_579, &F->it_1280));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_440)), rt_str(", ", 2)), F->lo_1283), rt_str(", ", 2)), F->hi_1284), rt_str(")", 1)); b_; }));
F->t_446v = g_ty_string_583;
(*F->ro_443) = 1;
goto ret_;
}
{
F->i_1285 = rt_str_copy(f_gexpr_454(F->a_1279, g_ty_int_579, &F->it_1280));
F->t_446v = g_ty_ascii_582;
if (F->lv_444) {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_440)), rt_str(", ", 2)), F->i_1285), rt_str("))", 2)); b_; }));
} else {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_440)), rt_str(", ", 2)), F->i_1285), rt_str(")", 1)); b_; }));
(*F->ro_443) = 1;
}
}
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)6LL))) {
F->i_1286 = rt_str_copy(f_gexpr_454(F->a_1279, (*(P522)rt_nil_check(F->bt_441)).idx, &F->it_1280));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_440), rt_str(".p[rt_index(", 12)), F->i_1286), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo, ", 5)), (*F->base_440)), rt_str(".hi) - ", 7)), (*F->base_440)), rt_str(".lo]", 4)); b_; }));
F->t_446v = (*(P522)rt_nil_check(F->bt_441)).elem;
F->c_447v = (*(P522)rt_nil_check(F->bt_441)).elemcons;
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_445) = F->code_445v;  (*F->t_446) = F->t_446v;  (*F->c_447) = F->c_447v;
  return;
}

static int f_own_attribute_450(P518 e_449) {
  struct f_own_attribute_450fr *F = rt_alloc(sizeof *F);
F->e_449 = e_449;
F->saved_1287 = NULL;
F->saved_1287 = g_code_562;
F->bt_1288 = NULL;
F->ok_1289 = 0;
g_trial_577 = rt_add(g_trial_577, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1290;
if (RT_TRY(xf1290)) {
F->base_1292 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_449)).a, NULL, &F->bt_1288));
while (((F->bt_1288 != NULL) && ((*(P522)rt_nil_check(F->bt_1288)).kind == ((rt_int)8LL)))) {
f_finish_ptr_274(F->bt_1288);
F->bt_1288 = (*(P522)rt_nil_check(F->bt_1288)).target;
}
if (((F->bt_1288 != NULL) && ((*(P522)rt_nil_check(F->bt_1288)).kind == ((rt_int)15LL)))) {
F->p_1293 = NULL;
F->p_1293 = (*(P522)rt_nil_check(F->bt_1288)).tparams;
while ((F->p_1293 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1293)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_449)).name)))) {
F->ok_1289 = 1;
}
F->p_1293 = (*(P518)rt_nil_check(F->p_1293)).next;
}
}
RT_POP(xf1290);
} else {
RT_POP(xf1290);
int x1291 = rt_xcur;
if (0 || x1291 == ex_compile_error_1) {
F->ok_1289 = 0;
} else {
rt_raise(x1291);
}
}
}
g_trial_577 = rt_sub(g_trial_577, ((rt_int)1LL));
g_code_562 = F->saved_1287;
F->result_ = F->ok_1289;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gexpr_454(P518 e_451, P522 want_452, P522 *t_453) {
  struct f_gexpr_454fr *F = rt_alloc(sizeof *F);
F->e_451 = e_451;
F->want_452 = want_452;
F->t_453 = t_453;
F->t_453v = *F->t_453;
F->k_1294 = (*(P518)rt_nil_check(F->e_451)).kind;
F->code_1295 = NULL;
F->c_1296 = NULL;
F->bt_1298 = NULL;
F->t_453v = g_ty_int_579;
if ((F->k_1294 == ((rt_int)1LL))) {
if (((F->want_452 != NULL) && ((*(P522)rt_nil_check(F->want_452)).kind == ((rt_int)3LL)))) {
F->t_453v = g_ty_float_581;
F->result_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1294 == ((rt_int)2LL))) {
F->t_453v = g_ty_float_581;
F->result_ = (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name));
goto ret_;
} else if ((F->k_1294 == ((rt_int)5LL))) {
F->t_453v = g_ty_bool_580;
F->result_ = f_itos_7((*(P518)rt_nil_check(F->e_451)).ival);
goto ret_;
} else if ((F->k_1294 == ((rt_int)3LL))) {
F->t_453v = g_ty_string_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_460(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)))), rt_str(", ", 2)), f_itos_7(((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1294 == ((rt_int)6LL))) {
F->t_453v = g_ty_nil_586;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1294 == ((rt_int)4LL))) {
if (((F->want_452 != NULL) && ((*(P522)rt_nil_check(f_base_of_166(F->want_452))).kind == ((rt_int)4LL)))) {
F->t_453v = F->want_452;
} else {
F->t_453v = f_enum_type_of_463(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), (*(P518)rt_nil_check(F->e_451)).line);
}
{
F->i_1299 = f_lit_index_185((*(P522)rt_nil_check(f_base_of_166(F->t_453v))).lits, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)));
if ((F->i_1299 < ((rt_int)0LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1299);
goto ret_;
}
} else if ((F->k_1294 == ((rt_int)17LL))) {
F->result_ = f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v);
goto ret_;
} else if ((F->k_1294 == ((rt_int)7LL))) {
F->y_1300 = NULL;
F->y_1300 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)));
if ((F->y_1300 == NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("ME", 2))) {
F->t_453v = g_ty_act_589;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NIL_ACT", 7))) {
F->t_453v = g_ty_act_589;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
}
if (((((((((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P526)rt_nil_check(F->y_1300)).kind == ((rt_int)1LL)) || ((*(P526)rt_nil_check(F->y_1300)).kind == ((rt_int)2LL)))) {
F->t_453v = (*(P526)rt_nil_check(F->y_1300)).t;
if (((*(P526)rt_nil_check(F->y_1300)).kind == ((rt_int)1LL))) {
F->ro_1301 = f_check_import_418(F->y_1300, (*(P518)rt_nil_check(F->e_451)).line);
}
F->result_ = f_access_of_412(F->y_1300);
goto ret_;
}
if (((*(P526)rt_nil_check(F->y_1300)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1294 == ((rt_int)8LL)) && (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))) != NULL)) && (f_user_op_498(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), f_copy_node_456((*(P518)rt_nil_check(F->e_451)).a)) != NULL))) {
F->call_1302 = NULL;
F->call_1302 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_451)).line);
F->fname_1303 = NULL;
F->fname_1303 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->e_451)).line);
(*(P518)rt_nil_check(F->fname_1303)).name = (*(P518)rt_nil_check(F->e_451)).name;
(*(P518)rt_nil_check(F->call_1302)).a = F->fname_1303;
(*(P518)rt_nil_check(F->call_1302)).b = f_copy_node_456((*(P518)rt_nil_check(F->e_451)).a);
F->result_ = f_gcall_502(F->call_1302, 0, &F->t_453v);
goto ret_;
} else if (((((F->k_1294 == ((rt_int)8LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NOT", 3))) && (F->want_452 != NULL)) && ((*(P522)rt_nil_check(F->want_452)).kind == ((rt_int)16LL)))) {
F->a_1304 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1304), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check((*(P522)rt_nil_check(F->want_452)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1294 == ((rt_int)8LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NOT", 3))) {
F->a_1305 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, g_ty_bool_580, &F->t_453v));
f_check_type_175(F->t_453v, g_ty_bool_580, (*(P518)rt_nil_check(F->e_451)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1305), rt_str(")", 1));
goto ret_;
}
{
F->a_1306 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v));
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("+", 1))) {
F->result_ = F->a_1306;
goto ret_;
} else if (((*(P522)rt_nil_check(F->t_453v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1306), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_453v, g_ty_int_579, (*(P518)rt_nil_check(F->e_451)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1306), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1294 == ((rt_int)9LL))) {
F->result_ = f_gbinop_470(F->e_451, F->want_452, &F->t_453v);
goto ret_;
} else if ((F->k_1294 == ((rt_int)10LL))) {
if ((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_451)).a)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_451)).a)).kind == ((rt_int)12LL)))) {
F->nm_1307 = NULL;
F->nm_1307 = (*(P518)rt_nil_check(F->e_451)).a;
F->y_1308 = NULL;
if (((*(P518)rt_nil_check(F->nm_1307)).kind == ((rt_int)12LL))) {
F->nm_1307 = (*(P518)rt_nil_check(F->nm_1307)).a;
}
F->y_1308 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->nm_1307)).name)));
if (((((F->y_1308 == NULL) || ((*(P526)rt_nil_check(F->y_1308)).kind == ((rt_int)3LL))) || ((*(P526)rt_nil_check(F->y_1308)).kind == ((rt_int)4LL))) || ((*(P526)rt_nil_check(F->y_1308)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_502(F->e_451, 0, &F->t_453v);
goto ret_;
}
}
{
F->base_1309 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, NULL, &F->bt_1298));
F->ro_1297 = 1;
f_index_on_448(&F->base_1309, F->bt_1298, F->e_451, &F->ro_1297, 0, &F->code_1295, &F->t_453v, &F->c_1296);
F->result_ = (*(P513)rt_nil_check(F->code_1295));
goto ret_;
}
} else if ((F->k_1294 == ((rt_int)11LL))) {
if ((((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MAX", 3))) && (!f_own_attribute_450(F->e_451)))) {
F->result_ = f_attribute_466(F->e_451, &F->t_453v);
goto ret_;
}
{
F->base_1310 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, NULL, &F->bt_1298));
F->ro_1297 = 1;
f_select_on_439(&F->base_1310, F->bt_1298, F->e_451, &F->ro_1297, &F->code_1295, &F->t_453v, &F->c_1296);
F->result_ = (*(P513)rt_nil_check(F->code_1295));
goto ret_;
}
} else if ((F->k_1294 == ((rt_int)12LL))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
} else if ((F->k_1294 == ((rt_int)14LL))) {
F->result_ = f_constructor_474(F->e_451, F->want_452, &F->t_453v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_453) = F->t_453v;
  return F->result_;
}

static P518 f_copy_node_456(P518 e_455) {
  struct f_copy_node_456fr *F = rt_alloc(sizeof *F);
F->e_455 = e_455;
F->x_1311 = NULL;
{ R519 *cell1312 = rt_alloc(sizeof(R519));
(*cell1312).name = NULL;
(*cell1312).tag = NULL;
(*cell1312).a = NULL;
(*cell1312).b = NULL;
(*cell1312).c = NULL;
(*cell1312).d = NULL;
(*cell1312).e = NULL;
(*cell1312).next = NULL;
F->x_1311 = cell1312;
}
(*(P518)rt_nil_check(F->x_1311)).kind = (*(P518)rt_nil_check(F->e_455)).kind;
(*(P518)rt_nil_check(F->x_1311)).line = (*(P518)rt_nil_check(F->e_455)).line;
(*(P518)rt_nil_check(F->x_1311)).ival = (*(P518)rt_nil_check(F->e_455)).ival;
(*(P518)rt_nil_check(F->x_1311)).flag = (*(P518)rt_nil_check(F->e_455)).flag;
(*(P518)rt_nil_check(F->x_1311)).name = (*(P518)rt_nil_check(F->e_455)).name;
(*(P518)rt_nil_check(F->x_1311)).tag = (*(P518)rt_nil_check(F->e_455)).tag;
(*(P518)rt_nil_check(F->x_1311)).a = (*(P518)rt_nil_check(F->e_455)).a;
(*(P518)rt_nil_check(F->x_1311)).b = (*(P518)rt_nil_check(F->e_455)).b;
(*(P518)rt_nil_check(F->x_1311)).c = (*(P518)rt_nil_check(F->e_455)).c;
(*(P518)rt_nil_check(F->x_1311)).d = (*(P518)rt_nil_check(F->e_455)).d;
F->result_ = F->x_1311;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P518 f_wrap_apply_458(P518 e_457) {
  struct f_wrap_apply_458fr *F = rt_alloc(sizeof *F);
F->e_457 = e_457;
F->x_1313 = NULL;
F->x_1313 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_457)).line);
(*(P518)rt_nil_check(F->x_1313)).a = F->e_457;
F->result_ = F->x_1313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_460(rstr *s_459) {
  struct f_c_string_460fr *F = rt_alloc(sizeof *F);
F->s_459 = s_459;
F->n_1314 = ((rt_int)0LL);
{ rt_int lo1316 = ((rt_int)1LL), hi1317 = ((*F->s_459)).len;
for (rt_int it1318 = lo1316; it1318 <= hi1317; it1318++) {
F->i_1315 = it1318;
if (((rt_str_get((*F->s_459), F->i_1315) == 92) || (rt_str_get((*F->s_459), F->i_1315) == 63))) {
F->n_1314 = rt_add(F->n_1314, ((rt_int)1LL));
}
}
}
{
F->r_1319 = rt_str_new(rt_add(rt_add(((*F->s_459)).len, F->n_1314), ((rt_int)2LL)));
F->j_1320 = ((rt_int)1LL);
(*rt_str_at(&F->r_1319, ((rt_int)1LL))) = 34;
{ rt_int lo1322 = ((rt_int)1LL), hi1323 = ((*F->s_459)).len;
for (rt_int it1324 = lo1322; it1324 <= hi1323; it1324++) {
F->i_1321 = it1324;
F->j_1320 = rt_add(F->j_1320, ((rt_int)1LL));
if (((rt_str_get((*F->s_459), F->i_1321) == 92) || (rt_str_get((*F->s_459), F->i_1321) == 63))) {
(*rt_str_at(&F->r_1319, F->j_1320)) = 92;
F->j_1320 = rt_add(F->j_1320, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1319, F->j_1320)) = rt_str_get((*F->s_459), F->i_1321);
}
}
(*rt_str_at(&F->r_1319, rt_add(F->j_1320, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1319;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P522 f_enum_type_of_463(rstr *lit_461, rt_int line_462) {
  struct f_enum_type_of_463fr *F = rt_alloc(sizeof *F);
F->lit_461 = lit_461;
F->line_462 = line_462;
F->y_1325 = NULL;
F->y_1325 = g_scope_stack_552;
F->c_1326 = NULL;
if ((f_lit_index_185((*(P522)rt_nil_check(g_ty_ascii_582)).lits, &(*F->lit_461)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_582;
goto ret_;
}
while ((F->y_1325 != NULL)) {
if ((((((*(P526)rt_nil_check(F->y_1325)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_1325)).kind == ((rt_int)5LL))) && ((*(P526)rt_nil_check(F->y_1325)).st != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_1325)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_1325)).st)).a, &(*F->lit_461)) >= ((rt_int)0LL))) {
if (((*(P526)rt_nil_check(F->y_1325)).kind == ((rt_int)5LL))) {
F->st_1327 = NULL;
F->st_1327 = f_nn_48(((rt_int)80LL), F->line_462);
(*(P518)rt_nil_check(F->st_1327)).name = (*(P526)rt_nil_check(F->y_1325)).name;
F->result_ = f_resolve_subtype_188(F->st_1327, &F->c_1326);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P526)rt_nil_check(F->y_1325)).st, &F->c_1326);
goto ret_;
}
}
F->y_1325 = (*(P526)rt_nil_check(F->y_1325)).stack;
}
f_fail_23(F->line_462, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_461)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_466(P518 e_464, P522 *t_465) {
  struct f_attribute_466fr *F = rt_alloc(sizeof *F);
F->e_464 = e_464;
F->t_465 = t_465;
F->t_465v = *F->t_465;
F->bt_1328 = NULL;
F->c_1329 = NULL;
F->t_465v = g_ty_int_579;
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("LEN", 3))) {
F->base_1330 = NULL;
F->base_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->e_464)).a, NULL, &F->bt_1328); b_; }));
if (((*(P522)rt_nil_check(F->bt_1328)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_1328);
F->base_1330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_423(&(*(P513)rt_nil_check(F->base_1330)), F->bt_1328); b_; }));
F->bt_1328 = (*(P522)rt_nil_check(F->bt_1328)).target;
}
if (((*(P522)rt_nil_check(F->bt_1328)).kind != ((rt_int)5LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_464)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P513)rt_nil_check(F->base_1330))), rt_str(").len", 5));
goto ret_;
}
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).kind == ((rt_int)7LL))) {
F->y_1331 = NULL;
F->y_1331 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).name)));
if (((F->y_1331 != NULL) && (((*(P526)rt_nil_check(F->y_1331)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_1331)).kind == ((rt_int)5LL))))) {
F->st_1332 = NULL;
F->st_1332 = f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->e_464)).line);
(*(P518)rt_nil_check(F->st_1332)).name = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).name;
F->t_465v = f_resolve_subtype_188(F->st_1332, &F->c_1329);
if (((*(P522)rt_nil_check(F->t_465v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(F->t_465v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P520)rt_nil_check(F->c_1329)).lo != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1329)).lo));
goto ret_;
}
F->result_ = (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1329)).hi));
goto ret_;
}
}
}
f_fail_23((*(P518)rt_nil_check(F->e_464)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_465) = F->t_465v;
  return F->result_;
}

static rstr f_gbinop_470(P518 e_467, P522 want_468, P522 *t_469) {
  struct f_gbinop_470fr *F = rt_alloc(sizeof *F);
F->e_467 = e_467;
F->want_468 = want_468;
F->t_469 = t_469;
F->t_469v = *F->t_469;
F->op_1333 = NULL;
F->op_1333 = (*(P518)rt_nil_check(F->e_467)).name;
F->ta_1334 = NULL;
F->tb_1335 = NULL;
F->hint_1336 = NULL;
F->uy_1337 = NULL;
F->t_469v = g_ty_bool_580;
if ((f_lookup_140(&(*(P513)rt_nil_check(F->op_1333))) != NULL)) {
F->l_1338 = NULL;
F->r_1339 = NULL;
F->l_1338 = f_copy_node_456((*(P518)rt_nil_check(F->e_467)).a);
F->r_1339 = f_copy_node_456((*(P518)rt_nil_check(F->e_467)).b);
(*(P518)rt_nil_check(F->l_1338)).next = F->r_1339;
F->uy_1337 = f_user_op_498(&(*(P513)rt_nil_check(F->op_1333)), F->l_1338);
if ((F->uy_1337 != NULL)) {
F->call_1340 = NULL;
F->call_1340 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_467)).line);
F->fname_1341 = NULL;
F->fname_1341 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->e_467)).line);
(*(P518)rt_nil_check(F->fname_1341)).name = F->op_1333;
(*(P518)rt_nil_check(F->call_1340)).a = F->fname_1341;
(*(P518)rt_nil_check(F->call_1340)).b = F->l_1338;
F->result_ = f_gcall_502(F->call_1340, 0, &F->t_469v);
goto ret_;
}
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("IN", 2))) {
F->s_1342 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, NULL, &F->tb_1335));
if (((*(P522)rt_nil_check(F->tb_1335)).kind != ((rt_int)16LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1343 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, (*(P522)rt_nil_check(F->tb_1335)).elem, &F->ta_1334));
f_check_type_175(F->ta_1334, (*(P522)rt_nil_check(F->tb_1335)).elem, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = g_ty_bool_580;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1343), rt_str(", ", 2)), F->s_1342), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("AND", 3)) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("OR", 2))) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("XOR", 3))) && (F->want_468 != NULL)) && ((*(P522)rt_nil_check(F->want_468)).kind == ((rt_int)16LL)))) {
F->a_1344 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->want_468, &F->ta_1334));
F->b_1345 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->want_468, &F->tb_1335));
f_check_type_175(F->tb_1335, F->ta_1334, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = F->ta_1334;
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1344), rt_str(", ", 2)), F->b_1345), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1344), rt_str(", ", 2)), F->b_1345), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1344), rt_str(", ", 2)), F->b_1345), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("AND", 3)) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("OR", 2))) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("XOR", 3)))) {
F->a_1346 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, g_ty_bool_580, &F->ta_1334));
F->b_1347 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, g_ty_bool_580, &F->tb_1335));
f_check_type_175(F->ta_1334, g_ty_bool_580, (*(P518)rt_nil_check(F->e_467)).line);
f_check_type_175(F->tb_1335, g_ty_bool_580, (*(P518)rt_nil_check(F->e_467)).line);
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1346), rt_str(" && ", 4)), F->b_1347), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1346), rt_str(" || ", 4)), F->b_1347), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1346), rt_str(" != ", 4)), F->b_1347), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("&", 1))) {
F->wa_1348 = NULL;
F->wb_1349 = NULL;
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)4LL))) {
F->wa_1348 = g_ty_ascii_582;
}
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).b)).kind == ((rt_int)4LL))) {
F->wb_1349 = g_ty_ascii_582;
}
{
F->a_1350 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->wa_1348, &F->ta_1334));
F->b_1351 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->wb_1349, &F->tb_1335));
F->t_469v = g_ty_string_583;
if ((((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check(F->tb_1335)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1350), rt_str(", ", 2)), F->b_1351), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check(F->tb_1335)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1350), rt_str(", ", 2)), F->b_1351), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)4LL)) && ((*(P522)rt_nil_check(F->tb_1335)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1350), rt_str(", ", 2)), F->b_1351), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)4LL)) && ((*(P522)rt_nil_check(F->tb_1335)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1350), rt_str(", ", 2)), F->b_1351), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P513)rt_nil_check(F->op_1333))) && (!rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("IN", 2))))) {
if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)4LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)6LL))) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1352 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, NULL, &F->hint_1336));
}
{
F->a_1353 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->hint_1336, &F->ta_1334));
F->b_1354 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->ta_1334, &F->tb_1335));
F->ct_1355 = NULL;
F->ct_1355 = f_base_of_166(F->ta_1334);
F->t_469v = g_ty_bool_580;
if ((((*(P522)rt_nil_check(F->ta_1334)).kind != ((rt_int)11LL)) && ((*(P522)rt_nil_check(F->tb_1335)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1335, F->ta_1334, (*(P518)rt_nil_check(F->e_467)).line);
}
if (((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)11LL))) {
F->ct_1355 = f_base_of_166(F->tb_1335);
}
if (((*(P522)rt_nil_check(F->ct_1355)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1354), rt_str(", ", 2)), F->a_1353), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1354), rt_str(", ", 2)), F->a_1353), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->ct_1355)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1353), rt_str(", ", 2)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1354), rt_str(", ", 2)), F->a_1353), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_221(F->ct_1355)) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("=", 1))) {
F->result_ = f_eq_code_233(F->ct_1355, &F->a_1353, &F->b_1354);
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_233(F->ct_1355, &F->a_1353, &F->b_1354)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1353), rt_str(" == ", 4)), F->b_1354), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1353), rt_str(" != ", 4)), F->b_1354), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1353), rt_str(" ", 1)), (*(P513)rt_nil_check(F->op_1333))), rt_str(" ", 1)), F->b_1354), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1356 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->want_468, &F->ta_1334));
F->b_1357 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->ta_1334, &F->tb_1335));
if ((((*(P522)rt_nil_check(F->ta_1334)).kind == ((rt_int)3LL)) || ((*(P522)rt_nil_check(F->tb_1335)).kind == ((rt_int)3LL)))) {
F->t_469v = g_ty_float_581;
if (((rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("+", 1)) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("-", 1))) || rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1356), rt_str(" ", 1)), (*(P513)rt_nil_check(F->op_1333))), rt_str(" ", 1)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1334, g_ty_int_579, (*(P518)rt_nil_check(F->e_467)).line);
f_check_type_175(F->tb_1335, g_ty_int_579, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = g_ty_int_579;
if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1333)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1356), rt_str(", ", 2)), F->b_1357), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P513)rt_nil_check(F->op_1333))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_469) = F->t_469v;
  return F->result_;
}

static rstr f_constructor_474(P518 e_471, P522 want_472, P522 *t_473) {
  struct f_constructor_474fr *F = rt_alloc(sizeof *F);
F->e_471 = e_471;
F->want_472 = want_472;
F->t_473 = t_473;
F->t_473v = *F->t_473;
F->it_1358 = NULL;
F->it_1358 = (*(P518)rt_nil_check(F->e_471)).a;
F->f_1359 = NULL;
F->vt_1360 = NULL;
if (((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)16LL)))) {
F->s_1361 = NULL;
F->s_1361 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_473v = F->want_472;
while ((F->it_1358 != NULL)) {
F->v_1362 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1358)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1360));
f_check_type_175(F->vt_1360, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->s_1361 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P513)rt_nil_check(F->s_1361))), rt_str(", ", 2)), F->v_1362), rt_str(")", 1)); b_; }));
F->it_1358 = (*(P518)rt_nil_check(F->it_1358)).next;
}
F->result_ = (*(P513)rt_nil_check(F->s_1361));
goto ret_;
}
if (((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->want_472)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)6LL))) && ((*(P522)rt_nil_check(F->want_472)).idx2 == NULL))) {
F->tmp_1363 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1364 = rt_str_copy(f_ctype_177(F->want_472));
F->et_1365 = rt_str_copy(f_ctype_177((*(P522)rt_nil_check(F->want_472)).elem));
F->parts_1366 = NULL;
F->t_473v = F->want_472;
if (((((F->it_1358 != NULL) && ((*(P518)rt_nil_check(F->it_1358)).a != NULL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1358)).a)).b != NULL)) && ((*(P518)rt_nil_check(F->it_1358)).next == NULL))) {
F->lo_1367 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1358)).a)).a, (*(P522)rt_nil_check(F->want_472)).idx, &F->vt_1360));
F->hi_1368 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1358)).a)).b, (*(P522)rt_nil_check(F->want_472)).idx, &F->vt_1360));
F->v_1369 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1358)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1360));
f_check_type_175(F->vt_1360, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1364), rt_str(" ", 1)), F->tmp_1363), rt_str("; ", 2)), F->tmp_1363), rt_str(".lo = ", 6)), F->lo_1367), rt_str("; ", 2)), F->tmp_1363), rt_str(".hi = ", 6)), F->hi_1368), rt_str("; ", 2)), F->tmp_1363), rt_str(".lo2 = ", 7)), F->tmp_1363), rt_str(".hi2 = 1; ", 10)), F->tmp_1363), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1365), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1363), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1363), rt_str("); i_++) ", 9)), F->tmp_1363), rt_str(".p[i_] = ", 9)), f_copy_code_229((*(P522)rt_nil_check(F->want_472)).elem, &F->v_1369)), rt_str("; ", 2)), F->tmp_1363), rt_str("; })", 4));
goto ret_;
}
F->parts_1366 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1364), rt_str(" ", 1)), F->tmp_1363), rt_str("; ", 2)), F->tmp_1363), rt_str(".lo = 1; ", 9)), F->tmp_1363), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1358))), rt_str("; ", 2)), F->tmp_1363), rt_str(".lo2 = ", 7)), F->tmp_1363), rt_str(".hi2 = 1; ", 10)), F->tmp_1363), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1365), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1358), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1371 = ((rt_int)0LL), hi1372 = rt_sub(f_list_len_54((*(P518)rt_nil_check(F->e_471)).a), ((rt_int)1LL));
for (rt_int it1373 = lo1371; it1373 <= hi1372; it1373++) {
F->i_1370 = it1373;
if (((*(P518)rt_nil_check(F->it_1358)).a != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1374 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1358)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1360));
f_check_type_175(F->vt_1360, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->parts_1366 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1366)), rt_str(" ", 1)), F->tmp_1363), rt_str(".p[", 3)), f_itos_7(F->i_1370)), rt_str("] = ", 4)), f_copy_code_229((*(P522)rt_nil_check(F->want_472)).elem, &F->v_1374)), rt_str(";", 1)); b_; }));
}
F->it_1358 = (*(P518)rt_nil_check(F->it_1358)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1366)), rt_str(" ", 1)), F->tmp_1363), rt_str("; })", 4));
goto ret_;
}
if (((F->want_472 == NULL) || ((*(P522)rt_nil_check(F->want_472)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_473v = F->want_472;
F->f_1359 = (*(P522)rt_nil_check(F->want_472)).fields;
{
F->tmp_1375 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1376 = NULL;
F->parts_1376 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_472)), rt_str(" ", 1)), F->tmp_1375), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1358) != ((rt_int)0LL)) && (f_list_len_54(F->it_1358) != ((rt_int)0LL)))) {
while (((F->it_1358 != NULL) && (F->f_1359 != NULL))) {
if (((((*(P518)rt_nil_check(F->it_1358)).a == NULL) || ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1358)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1358)).a)).a)).name)), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1359)).name)))))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1359)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1377 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1358)).b, (*(P524)rt_nil_check(F->f_1359)).t, &F->vt_1360));
f_check_type_175(F->vt_1360, (*(P524)rt_nil_check(F->f_1359)).t, (*(P518)rt_nil_check(F->e_471)).line);
F->parts_1376 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1376)), rt_str(" ", 1)), F->tmp_1375), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1359)).name)))), rt_str(" = ", 3)), f_copy_code_229((*(P524)rt_nil_check(F->f_1359)).t, &F->v_1377)), rt_str(";", 1)); b_; }));
}
F->it_1358 = (*(P518)rt_nil_check(F->it_1358)).next;
F->f_1359 = (*(P524)rt_nil_check(F->f_1359)).next;
}
}
if (((F->it_1358 != NULL) || (F->f_1359 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1376)), rt_str(" ", 1)), F->tmp_1375), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_473) = F->t_473v;
  return F->result_;
}

static int f_fits_477(P526 y_475, P518 args_476) {
  struct f_fits_477fr *F = rt_alloc(sizeof *F);
F->y_475 = y_475;
F->args_476 = args_476;
F->a_1378 = NULL;
F->a_1378 = F->args_476;
F->pm_1379 = NULL;
F->pm_1379 = (*(P526)rt_nil_check(F->y_475)).params;
F->t_1380 = NULL;
F->saved_1381 = NULL;
F->saved_1381 = g_code_562;
F->ok_1382 = 1;
F->lv_1383 = NULL;
F->lc_1384 = NULL;
g_trial_577 = rt_add(g_trial_577, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1386;
if (RT_TRY(xf1386)) {
while (((F->ok_1382 && (F->a_1378 != NULL)) && (F->pm_1379 != NULL))) {
if ((((*(P528)rt_nil_check(F->pm_1379)).mode == ((rt_int)2LL)) || ((*(P528)rt_nil_check(F->pm_1379)).mode == ((rt_int)3LL)))) {
f_lvalue_431(F->a_1378, &F->lv_1383, &F->t_1380, &F->lc_1384, &F->ro_1385);
} else {
F->v_1388 = rt_str_copy(f_gexpr_454(F->a_1378, (*(P528)rt_nil_check(F->pm_1379)).t, &F->t_1380));
}
if ((!(f_same_164(F->t_1380, (*(P528)rt_nil_check(F->pm_1379)).t) || (((*(P522)rt_nil_check(F->t_1380)).kind == ((rt_int)11LL)) && ((*(P522)rt_nil_check((*(P528)rt_nil_check(F->pm_1379)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1382 = 0;
}
F->a_1378 = (*(P518)rt_nil_check(F->a_1378)).next;
F->pm_1379 = (*(P528)rt_nil_check(F->pm_1379)).next;
}
if (((F->a_1378 != NULL) || (F->pm_1379 != NULL))) {
F->ok_1382 = 0;
}
RT_POP(xf1386);
} else {
RT_POP(xf1386);
int x1387 = rt_xcur;
if (0 || x1387 == ex_compile_error_1) {
F->ok_1382 = 0;
} else {
rt_raise(x1387);
}
}
}
g_trial_577 = rt_sub(g_trial_577, ((rt_int)1LL));
g_code_562 = F->saved_1381;
F->result_ = F->ok_1382;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_resolve_overload_482(rstr *name_478, P518 args_479, int is_stmt_480, rt_int line_481) {
  struct f_resolve_overload_482fr *F = rt_alloc(sizeof *F);
F->name_478 = name_478;
F->args_479 = args_479;
F->is_stmt_480 = is_stmt_480;
F->line_481 = line_481;
F->y_1389 = NULL;
F->y_1389 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->name_478)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
F->first_1390 = NULL;
F->n_1391 = ((rt_int)0LL);
while ((F->y_1389 != NULL)) {
if ((rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1389)).name)), (*F->name_478)) && (((*(P526)rt_nil_check(F->y_1389)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_1389)).kind == ((rt_int)4LL))))) {
F->n_1391 = rt_add(F->n_1391, ((rt_int)1LL));
if ((F->first_1390 == NULL)) {
F->first_1390 = F->y_1389;
}
if (((((*(P526)rt_nil_check(F->y_1389)).kind == ((rt_int)4LL)) == F->is_stmt_480) && f_fits_477(F->y_1389, F->args_479))) {
F->result_ = F->y_1389;
goto ret_;
}
}
F->y_1389 = (*(P526)rt_nil_check(F->y_1389)).chain;
}
if (f_is_builtin_484(&(*F->name_478))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1391 > ((rt_int)1LL))) {
f_fail_23(F->line_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_478)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1390;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_484(rstr *n_483) {
  struct f_is_builtin_484fr *F = rt_alloc(sizeof *F);
F->n_483 = n_483;
F->result_ = (((((((((((((((rt_str_eq((*F->n_483), rt_str("ABS", 3)) || rt_str_eq((*F->n_483), rt_str("POS", 3))) || rt_str_eq((*F->n_483), rt_str("SUCC", 4))) || rt_str_eq((*F->n_483), rt_str("PRED", 4))) || rt_str_eq((*F->n_483), rt_str("SQRT", 4))) || rt_str_eq((*F->n_483), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_483), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_483), rt_str("WRITE", 5))) || rt_str_eq((*F->n_483), rt_str("READLN", 6))) || rt_str_eq((*F->n_483), rt_str("SEND", 4))) || rt_str_eq((*F->n_483), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_483), rt_str("DELAY", 5))) || rt_str_eq((*F->n_483), rt_str("TIME", 4))) || rt_str_eq((*F->n_483), rt_str("CNVT", 4))) || rt_str_eq((*F->n_483), rt_str("FORMAT", 6))) || f_is_low_level_486(&(*F->n_483)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_low_level_486(rstr *n_485) {
  struct f_is_low_level_486fr *F = rt_alloc(sizeof *F);
F->n_485 = n_485;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_485), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_485), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_485), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_485), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_485), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_485), rt_str("LOCK", 4))) || rt_str_eq((*F->n_485), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_485), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_485), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_485), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_485), rt_str("WAITING", 7))) || rt_str_eq((*F->n_485), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_485), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_485), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_485), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_485), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_485), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_485), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_485), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_me_high_490(P518 tt_487, rt_int line_488, P522 *t_489) {
  struct f_me_high_490fr *F = rt_alloc(sizeof *F);
F->tt_487 = tt_487;
F->line_488 = line_488;
F->t_489 = t_489;
F->t_489v = *F->t_489;
F->c_1392 = NULL;
if ((F->tt_487 == NULL)) {
f_fail_23(F->line_488, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_489v = f_resolve_subtype_188(F->tt_487, &F->c_1392);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_489v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_492(F->t_489v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_489) = F->t_489v;
  return F->result_;
}

static rstr f_type_tag_492(P522 t_491) {
  struct f_type_tag_492fr *F = rt_alloc(sizeof *F);
F->t_491 = t_491;
if (((*(P522)rt_nil_check(F->t_491)).name != NULL)) {
F->result_ = (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_491)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lock_ref_495(P518 e_493, rstr *name_494) {
  struct f_lock_ref_495fr *F = rt_alloc(sizeof *F);
F->e_493 = e_493;
F->name_494 = name_494;
F->lv_1393 = NULL;
F->t_1394 = NULL;
F->c_1395 = NULL;
f_lvalue_431(F->e_493, &F->lv_1393, &F->t_1394, &F->c_1395, &F->ro_1396);
if (((*(P522)rt_nil_check(F->t_1394)).kind != ((rt_int)13LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_493)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_494), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P513)rt_nil_check(F->lv_1393)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P526 f_user_op_498(rstr *op_496, P518 args_497) {
  struct f_user_op_498fr *F = rt_alloc(sizeof *F);
F->op_496 = op_496;
F->args_497 = args_497;
F->y_1397 = NULL;
F->y_1397 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->op_496)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_1397 != NULL)) {
if (((rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1397)).name)), (*F->op_496)) && ((*(P526)rt_nil_check(F->y_1397)).kind == ((rt_int)3LL))) && f_fits_477(F->y_1397, F->args_497))) {
F->result_ = F->y_1397;
goto ret_;
}
F->y_1397 = (*(P526)rt_nil_check(F->y_1397)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_502(P518 e_499, int is_stmt_500, P522 *t_501) {
  struct f_gcall_502fr *F = rt_alloc(sizeof *F);
F->e_499 = e_499;
F->is_stmt_500 = is_stmt_500;
F->t_501 = t_501;
F->t_501v = *F->t_501;
F->fn_1398 = NULL;
F->fn_1398 = (*(P518)rt_nil_check(F->e_499)).a;
F->tt_1399 = NULL;
F->y_1400 = NULL;
F->args_1401 = NULL;
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1402 = NULL;
F->a_1402 = (*(P518)rt_nil_check(F->e_499)).b;
F->pm_1403 = NULL;
F->lt_1404 = NULL;
F->vt_1405 = NULL;
F->lv_1406 = NULL;
F->lc_1407 = NULL;
if (((*(P518)rt_nil_check(F->fn_1398)).kind == ((rt_int)12LL))) {
F->tt_1399 = (*(P518)rt_nil_check(F->fn_1398)).b;
F->fn_1398 = (*(P518)rt_nil_check(F->fn_1398)).a;
}
F->y_1400 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)));
if ((F->y_1400 == NULL)) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), F->tt_1399, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)4LL))) && ((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)10LL)))) {
F->alt_1409 = NULL;
F->alt_1409 = f_resolve_overload_482(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), (*(P518)rt_nil_check(F->e_499)).b, F->is_stmt_500, (*(P518)rt_nil_check(F->e_499)).line);
if ((F->alt_1409 != NULL)) {
F->y_1400 = F->alt_1409;
} else if (f_is_builtin_484(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)))) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), F->tt_1399, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
}
if (((*(P526)rt_nil_check(F->y_1400)).kind == ((rt_int)10LL))) {
F->y_1400 = f_instantiate_410(F->y_1400, F->tt_1399, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line);
} else if ((((*(P526)rt_nil_check(F->y_1400)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_1400)).kind == ((rt_int)4LL)))) {
F->y_1400 = f_resolve_overload_482(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), (*(P518)rt_nil_check(F->e_499)).b, F->is_stmt_500, (*(P518)rt_nil_check(F->e_499)).line);
if ((F->y_1400 == NULL)) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), F->tt_1399, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
}
if ((((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_500 && ((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_500) && ((*(P526)rt_nil_check(F->y_1400)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1403 = (*(P526)rt_nil_check(F->y_1400)).params;
if (((*(P526)rt_nil_check(F->y_1400)).level > ((rt_int)0LL))) {
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1411 = ((rt_int)1LL), hi1412 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_1400)).level);
for (rt_int it1413 = lo1411; it1413 <= hi1412; it1413++) {
F->i_1410 = it1413;
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1402 != NULL) && (F->pm_1403 != NULL))) {
if ((((*(P513)rt_nil_check(F->args_1401))).len > ((rt_int)0LL))) {
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str(", ", 2)); b_; }));
}
if ((((*(P528)rt_nil_check(F->pm_1403)).mode == ((rt_int)2LL)) || ((*(P528)rt_nil_check(F->pm_1403)).mode == ((rt_int)3LL)))) {
f_lvalue_431(F->a_1402, &F->lv_1406, &F->lt_1404, &F->lc_1407, &F->ro_1408);
if (F->ro_1408) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1403)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1404, (*(P528)rt_nil_check(F->pm_1403)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str("&", 1)), (*(P513)rt_nil_check(F->lv_1406))); b_; }));
} else if ((((*(P528)rt_nil_check(F->pm_1403)).mode == ((rt_int)4LL)) && f_is_lvalue_425(F->a_1402))) {
f_lvalue_431(F->a_1402, &F->lv_1406, &F->lt_1404, &F->lc_1407, &F->ro_1408);
f_check_type_175(F->lt_1404, (*(P528)rt_nil_check(F->pm_1403)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str("&", 1)), (*(P513)rt_nil_check(F->lv_1406))); b_; }));
} else if (((*(P528)rt_nil_check(F->pm_1403)).mode == ((rt_int)4LL))) {
F->v_1414 = rt_str_copy(f_gexpr_454(F->a_1402, (*(P528)rt_nil_check(F->pm_1403)).t, &F->vt_1405));
F->ct_1415 = rt_str_copy(f_ctype_177((*(P528)rt_nil_check(F->pm_1403)).t));
f_check_type_175(F->vt_1405, (*(P528)rt_nil_check(F->pm_1403)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str("({ ", 3)), F->ct_1415), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1415), rt_str(")); *b_ = ", 10)), F->v_1414), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1416 = rt_str_copy(f_gexpr_454(F->a_1402, (*(P528)rt_nil_check(F->pm_1403)).t, &F->vt_1405));
f_check_type_175(F->vt_1405, (*(P528)rt_nil_check(F->pm_1403)).t, (*(P518)rt_nil_check(F->e_499)).line);
if (((((*(P522)rt_nil_check((*(P528)rt_nil_check(F->pm_1403)).t)).kind == ((rt_int)1LL)) && ((*(P528)rt_nil_check(F->pm_1403)).c != NULL)) && (*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1403)).c)).hasm)) {
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1401)), rt_str("rt_range(", 9)), F->v_1416), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1403)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1403)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1401 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1401)), F->v_1416); b_; }));
}
}
F->a_1402 = (*(P518)rt_nil_check(F->a_1402)).next;
F->pm_1403 = (*(P528)rt_nil_check(F->pm_1403)).next;
}
if (((F->a_1402 != NULL) || (F->pm_1403 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1398)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P518)rt_nil_check(F->e_499)).b), f_list_len_54(F->a_1402)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_501v = (*(P526)rt_nil_check(F->y_1400)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1400)).cname)), rt_str("(", 1)), (*(P513)rt_nil_check(F->args_1401))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_501) = F->t_501v;
  return F->result_;
}

static rstr f_builtin_509(rstr *name_503, P518 tt_504, P518 args_505, rt_int line_506, int is_stmt_507, P522 *t_508) {
  struct f_builtin_509fr *F = rt_alloc(sizeof *F);
F->name_503 = name_503;
F->tt_504 = tt_504;
F->args_505 = args_505;
F->line_506 = line_506;
F->is_stmt_507 = is_stmt_507;
F->t_508 = t_508;
F->t_508v = *F->t_508;
F->at_1417 = NULL;
F->n_1418 = f_list_len_54(F->args_505);
F->t_508v = g_ty_void_584;
if (((rt_str_eq((*F->name_503), rt_str("POS", 3)) || rt_str_eq((*F->name_503), rt_str("SUCC", 4))) || rt_str_eq((*F->name_503), rt_str("PRED", 4)))) {
F->a_1419 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1417));
if (rt_str_eq((*F->name_503), rt_str("POS", 3))) {
if (((*(P522)rt_nil_check(f_base_of_166(F->at_1417))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1419), rt_str(") + 1)", 6));
goto ret_;
}
F->t_508v = F->at_1417;
if (((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_503), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1419), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1419), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_503), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1419), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->at_1417))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1419), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->at_1417))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("SQRT", 4)) || rt_str_eq((*F->name_503), rt_str("SIN", 3))) || rt_str_eq((*F->name_503), rt_str("COS", 3))) || rt_str_eq((*F->name_503), rt_str("EXP", 3))) || rt_str_eq((*F->name_503), rt_str("LN", 2))) || rt_str_eq((*F->name_503), rt_str("FLOOR", 5)))) {
F->a_1420 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_581, &F->at_1417));
F->t_508v = g_ty_float_581;
if (rt_str_eq((*F->name_503), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1420), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_503)), rt_str("(", 1)), F->a_1420), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("IFLOAT", 6))) {
F->a_1421 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_579, &F->at_1417));
F->t_508v = g_ty_float_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1421), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("IFIX", 4))) {
F->a_1422 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_581, &F->at_1417));
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1422), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("FORMAT", 6))) {
F->a_1423 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_581, &F->at_1417));
F->n1_1424 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_579, &F->at_1417));
F->m1_1425 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, g_ty_int_579, &F->at_1417));
F->t_508v = g_ty_string_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1423), rt_str(", ", 2)), F->n1_1424), rt_str(", ", 2)), F->m1_1425), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("ABS", 3))) {
F->a_1426 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1417));
F->t_508v = F->at_1417;
if (((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1426), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1426), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("CNVT", 4))) {
if ((F->tt_504 == NULL)) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1427 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1417));
if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)1LL)))) {
F->t_508v = g_ty_string_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1427), rt_str(")", 1));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)3LL)))) {
F->t_508v = g_ty_string_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1427), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)2LL)))) {
F->t_508v = g_ty_string_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1427), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)70LL)) && ((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)5LL)))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1427), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_503), rt_str("WRITELN", 7))) {
if ((F->n_1418 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1428 = NULL;
F->last_1428 = F->args_505;
while (((*(P518)rt_nil_check(F->last_1428)).next != NULL)) {
F->last_1428 = (*(P518)rt_nil_check(F->last_1428)).next;
}
{
F->a_1429 = rt_str_copy(f_gexpr_454(F->last_1428, g_ty_string_583, &F->at_1417));
f_check_type_175(F->at_1417, g_ty_string_583, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1429), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_503), rt_str("WRITE", 5))) {
F->a_1430 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, NULL, &F->at_1417));
if (((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1430), rt_str(")", 1));
goto ret_;
} else if (((*(P522)rt_nil_check(F->at_1417)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1430), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_503), rt_str("READLN", 6))) {
F->lv_1431 = NULL;
F->lc_1432 = NULL;
F->last_1434 = NULL;
F->last_1434 = F->args_505;
while (((*(P518)rt_nil_check(F->last_1434)).next != NULL)) {
F->last_1434 = (*(P518)rt_nil_check(F->last_1434)).next;
}
f_lvalue_431(F->last_1434, &F->lv_1431, &F->at_1417, &F->lc_1432, &F->ro_1433);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P513)rt_nil_check(F->lv_1431))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("SIZELN", 6))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EOF", 3))) {
F->t_508v = g_ty_bool_580;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_503), rt_str("SYS_OUT", 7)))) {
F->t_508v = g_ty_file_585;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("OPEN", 4)) || rt_str_eq((*F->name_503), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("SEND", 4)) || rt_str_eq((*F->name_503), rt_str("RECEIVE", 7)))) {
F->lv_1435 = NULL;
F->dv_1436 = NULL;
F->lc_1437 = NULL;
F->mt_1439 = NULL;
F->dt_1440 = NULL;
f_lvalue_431(F->args_505, &F->lv_1435, &F->mt_1439, &F->lc_1437, &F->ro_1438);
if (((*(P522)rt_nil_check(F->mt_1439)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_503), rt_str("RECEIVE", 7))) {
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->dv_1436, &F->dt_1440, &F->lc_1437, &F->ro_1438);
f_check_type_175(F->dt_1440, (*(P522)rt_nil_check(F->mt_1439)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P513)rt_nil_check(F->lv_1435))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1436))), rt_str(")", 1));
goto ret_;
}
{
F->v_1441 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, (*(P522)rt_nil_check(F->mt_1439)).elem, &F->at_1417));
f_check_type_175(F->at_1417, (*(P522)rt_nil_check(F->mt_1439)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P522)rt_nil_check(F->mt_1439)).elem)), rt_str(" m_ = ", 6)), F->v_1441), rt_str("; rt_send(", 10)), (*(P513)rt_nil_check(F->lv_1435))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_503), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_503), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1442 = NULL;
F->lc_1443 = NULL;
F->mt_1445 = NULL;
f_lvalue_431(F->args_505, &F->lv_1442, &F->mt_1445, &F->lc_1443, &F->ro_1444);
if (((*(P522)rt_nil_check(F->mt_1445)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), (*(P513)rt_nil_check(F->lv_1442))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_503), rt_str("COND_RECEIVE", 12)))) {
F->lv_1446 = NULL;
F->dv_1447 = NULL;
F->bv_1448 = NULL;
F->lc_1449 = NULL;
F->mt_1451 = NULL;
F->dt_1452 = NULL;
F->bt_1453 = NULL;
f_lvalue_431(F->args_505, &F->lv_1446, &F->mt_1451, &F->lc_1449, &F->ro_1450);
if (((*(P522)rt_nil_check(F->mt_1451)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, &F->bv_1448, &F->bt_1453, &F->lc_1449, &F->ro_1450);
f_check_type_175(F->bt_1453, g_ty_bool_580, F->line_506);
if (rt_str_eq((*F->name_503), rt_str("COND_RECEIVE", 12))) {
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->dv_1447, &F->dt_1452, &F->lc_1449, &F->ro_1450);
f_check_type_175(F->dt_1452, (*(P522)rt_nil_check(F->mt_1451)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->bv_1448)), rt_str(" = rt_cond_receive(", 19)), (*(P513)rt_nil_check(F->lv_1446))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1447))), rt_str(")", 1));
goto ret_;
}
{
F->v_1454 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, (*(P522)rt_nil_check(F->mt_1451)).elem, &F->at_1417));
f_check_type_175(F->at_1417, (*(P522)rt_nil_check(F->mt_1451)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P522)rt_nil_check(F->mt_1451)).elem)), rt_str(" m_ = ", 6)), F->v_1454), rt_str("; ", 2)), (*(P513)rt_nil_check(F->bv_1448))), rt_str(" = rt_cond_send(", 16)), (*(P513)rt_nil_check(F->lv_1446))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_503), rt_str("PRIORITY", 8))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("SET_PRIORITY", 12))) {
F->v_1455 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_579, &F->at_1417));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_337(F->args_505)), rt_str(", ", 2)), F->v_1455), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("ACTIVE", 6))) {
F->t_508v = g_ty_bool_580;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY", 5))) {
F->v_1456 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_579, &F->at_1417));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1456), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY_UNTIL", 11))) {
F->v_1457 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_579, &F->at_1417));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1457), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("TIME", 4))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_503), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_503), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_503), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_503), rt_str("HOURS", 5)))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_503));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("HALT", 4))) {
F->a_1458 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_579, &F->at_1417));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1458), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("ME", 2)) && (F->tt_504 != NULL))) {
F->result_ = f_me_high_490(F->tt_504, F->line_506, &F->t_508v);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("WAITING", 7)) || rt_str_eq((*F->name_503), rt_str("SUSPENDED", 9)))) {
F->t_508v = g_ty_bool_580;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_503), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_503), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_503), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_503), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("TASK_START", 10))) {
if ((F->n_1418 != ((rt_int)2LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_337(F->args_505)), rt_str(", ", 2)), f_act_ref_337((*(P518)rt_nil_check(F->args_505)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_503), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_503), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_503), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1418 != ((rt_int)0LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_503))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("COND_LOCK", 9))) {
F->bv_1459 = NULL;
F->bc_1460 = NULL;
F->bt_1462 = NULL;
F->l_1463 = rt_str_copy(f_lock_ref_495(F->args_505, &(*F->name_503)));
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->bv_1459, &F->bt_1462, &F->bc_1460, &F->ro_1461);
f_check_type_175(F->bt_1462, g_ty_bool_580, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->bv_1459)), rt_str(" = rt_cond_lock(", 16)), F->l_1463), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EXCESS_LOCKS", 12))) {
F->t_508v = g_ty_int_579;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("OWNER", 5))) {
F->t_508v = g_ty_act_589;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("LOW_IO", 6))) {
F->dev_1464 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_579, &F->at_1417));
F->cmd_1465 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_579, &F->at_1417));
if ((F->n_1418 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1464), rt_str(", ", 2)), F->cmd_1465), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1466 = NULL;
F->dc_1467 = NULL;
F->dt_1469 = NULL;
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, &F->dv_1466, &F->dt_1469, &F->dc_1467, &F->ro_1468);
f_check_type_175(F->dt_1469, g_ty_int_579, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1464), rt_str(", ", 2)), F->cmd_1465), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1466))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_508) = F->t_508v;
  return F->result_;
}

static void f_translate_511(P518 units_510) {
  struct f_translate_511fr *F = rt_alloc(sizeof *F);
F->units_510 = units_510;
F->u_1470 = NULL;
F->u_1470 = F->units_510;
while ((F->u_1470 != NULL)) {
if (((*(P518)rt_nil_check(F->u_1470)).next == NULL)) {
{ R539 *cell1471 = rt_alloc(sizeof(R539));
(*cell1471).d = NULL;
(*cell1471).next = NULL;
g_caps_567 = cell1471;
}
(*(P538)rt_nil_check(g_caps_567)).d = F->u_1470;
f_declare_body_245((*(P518)rt_nil_check(F->u_1470)).c);
f_body_elements_305((*(P518)rt_nil_check(F->u_1470)).c);
{
F->l_1472 = NULL;
F->l_1472 = F->units_510;
while ((F->l_1472 != F->u_1470)) {
{
F->w_1473 = rt_str_copy(f_waits_of_297(F->l_1472));
if (((F->w_1473).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1473);
}
}
F->l_1472 = (*(P518)rt_nil_check(F->l_1472)).next;
}
}
} else {
f_gen_capsule_255(F->u_1470);
}
F->u_1470 = (*(P518)rt_nil_check(F->u_1470)).next;
}
ret_:
  return;
}

static void f_print_program_512(void) {
  struct f_print_program_512fr *F = rt_alloc(sizeof *F);
f_emit_helpers_241();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_555);
f_print_buffer_31(g_out_frames_571);
f_print_buffer_31(g_out_helpers_556);
f_print_buffer_31(g_out_protos_557);
f_print_buffer_31(g_out_globals_558);
f_print_buffer_31(g_out_funcs_559);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_561);
f_print_buffer_31(g_out_init_560);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R543(R543 *d, R543 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R543 cp_R543(R543 s) {
  R543 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R543(R543 a, R543 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R541(R541 *d, R541 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R541 cp_R541(R541 s) {
  R541 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R541(R541 a, R541 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R539(R539 *d, R539 s) {
  d->d = s.d;
  d->next = s.next;
}
static R539 cp_R539(R539 s) {
  R539 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R539(R539 a, R539 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R537(R537 *d, R537 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R537 cp_R537(R537 s) {
  R537 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R537(R537 a, R537 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R535(R535 *d, R535 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R535 cp_R535(R535 s) {
  R535 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R535(R535 a, R535 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R533(R533 *d, R533 s) {
  d->s = s.s;
  d->next = s.next;
}
static R533 cp_R533(R533 s) {
  R533 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R533(R533 a, R533 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_A531(A531 *d, A531 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A531 cp_A531(A531 s) {
  A531 d = s; d.p = rt_alloc(sizeof(P526) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A531(A531 a, A531 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R529(R529 *d, R529 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R529 cp_R529(R529 s) {
  R529 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R529(R529 a, R529 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R527(R527 *d, R527 s) {
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
static R527 cp_R527(R527 s) {
  R527 d = s;
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
static int eq_R527(R527 a, R527 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R525(R525 *d, R525 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R525 cp_R525(R525 s) {
  R525 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R525(R525 a, R525 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R523(R523 *d, R523 s) {
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
  d->tpsyms = s.tpsyms;
  d->gen = s.gen;
  d->gbinds = s.gbinds;
  d->next = s.next;
}
static R523 cp_R523(R523 s) {
  R523 d = s;
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
  d.tpsyms = s.tpsyms;
  d.gen = s.gen;
  d.gbinds = s.gbinds;
  d.next = s.next;
  return d;
}
static int eq_R523(R523 a, R523 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next);
}
static void as_R521(R521 *d, R521 s) {
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
static R521 cp_R521(R521 s) {
  R521 d = s;
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
static int eq_R521(R521 a, R521 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R519(R519 *d, R519 s) {
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
static R519 cp_R519(R519 s) {
  R519 d = s;
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
static int eq_R519(R519 a, R519 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A517(A517 *d, A517 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A517 cp_A517(A517 s) {
  A517 d = s; d.p = rt_alloc(sizeof(P514) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A517(A517 a, A517 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R515(R515 *d, R515 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R515 cp_R515(R515 s) {
  R515 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R515(R515 a, R515 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_544 = NULL;
g_ntoks_545 = ((rt_int)0LL);
g_tpos_546 = ((rt_int)1LL);
g_src_line_547 = ((rt_int)0LL);
g_table_548 = NULL;
g_genv_549 = NULL;
g_all_insts_550 = NULL;
g_depth_551 = ((rt_int)0LL);
g_scope_stack_552 = NULL;
g_all_types_553 = NULL;
g_serial_554 = ((rt_int)0LL);
g_out_types_555 = NULL;
g_out_helpers_556 = NULL;
g_out_protos_557 = NULL;
g_out_globals_558 = NULL;
g_out_funcs_559 = NULL;
g_out_init_560 = NULL;
g_out_excs_561 = NULL;
g_code_562 = NULL;
g_fields_buf_563 = NULL;
g_in_func_564 = 0;
g_cur_level_565 = ((rt_int)0LL);
g_fctx_566 = NULL;
g_caps_567 = NULL;
g_cap_waits_568 = NULL;
g_psub_569 = NULL;
g_st_field_570 = NULL;
g_out_frames_571 = NULL;
g_func_sym_572 = NULL;
g_exits_573 = NULL;
g_frames_574 = ((rt_int)0LL);
g_handlers_575 = NULL;
g_cleanups_576 = NULL;
g_trial_577 = ((rt_int)0LL);
g_mcopies_578 = NULL;
g_ty_int_579 = NULL;
g_ty_bool_580 = NULL;
g_ty_float_581 = NULL;
g_ty_ascii_582 = NULL;
g_ty_string_583 = NULL;
g_ty_void_584 = NULL;
g_ty_file_585 = NULL;
g_ty_nil_586 = NULL;
g_ty_lock_587 = NULL;
g_ty_latch_588 = NULL;
g_ty_act_589 = NULL;
g_no_cons_590 = NULL;
{ A517 *cell1474 = rt_alloc(sizeof(A517));
rt_int pv1475 = ((rt_int)1000000LL);
(*cell1474).lo = ((rt_int)1LL); (*cell1474).hi = pv1475; (*cell1474).lo2 = 1; (*cell1474).hi2 = 1;
(*cell1474).p = rt_alloc(sizeof(P514) * (size_t)RT_CNT((*cell1474)));
for (rt_int i1476 = 0; i1476 < RT_CNT((*cell1474)); i1476++) {
(*cell1474).p[i1476] = NULL;
}
g_toks_544 = cell1474;
}
{ A531 *cell1477 = rt_alloc(sizeof(A531));
rt_int pv1478 = ((rt_int)4093LL);
(*cell1477).lo = ((rt_int)0LL); (*cell1477).hi = pv1478; (*cell1477).lo2 = 1; (*cell1477).hi2 = 1;
(*cell1477).p = rt_alloc(sizeof(P526) * (size_t)RT_CNT((*cell1477)));
for (rt_int i1479 = 0; i1479 < RT_CNT((*cell1477)); i1479++) {
(*cell1477).p[i1479] = NULL;
}
g_table_548 = cell1477;
}
g_out_types_555 = f_new_buffer_24();
g_out_helpers_556 = f_new_buffer_24();
g_out_protos_557 = f_new_buffer_24();
g_out_globals_558 = f_new_buffer_24();
g_out_funcs_559 = f_new_buffer_24();
g_out_init_560 = f_new_buffer_24();
g_out_excs_561 = f_new_buffer_24();
g_out_frames_571 = f_new_buffer_24();
g_code_562 = g_out_init_560;
g_no_cons_590 = f_new_cons_158();
g_ty_int_579 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_580 = f_new_typ_157(((rt_int)2LL));
g_ty_float_581 = f_new_typ_157(((rt_int)3LL));
g_ty_string_583 = f_new_typ_157(((rt_int)5LL));
g_ty_void_584 = f_new_typ_157(((rt_int)9LL));
g_ty_file_585 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_586 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_587 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_588 = f_new_typ_157(((rt_int)13LL));
g_ty_act_589 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1480;
if (RT_TRY(xf1480)) {
f_init_ascii_182();
f_read_source_45();
f_translate_511(f_program_136());
f_print_program_512();
RT_POP(xf1480);
} else {
RT_POP(xf1480);
int x1481 = rt_xcur;
if (0 || x1481 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1481);
}
}
}
  rt_main_done();
  return 0;
}
