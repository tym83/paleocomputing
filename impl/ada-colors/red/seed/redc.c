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
 P513 t_593;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_596;
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
 rstr letters_597;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_598;
 rstr r_599;
 rt_int i_600;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_604;
 rstr kw_605;
 rstr w_606;
 rt_int i_607;
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
 P534 b_611;
};
struct f_put_27fr { int dummy;
 P534 b_25;
 rstr *s_26;
 P532 l_613;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P534 b_30;
 P532 l_615;
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
 P514 t_617;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_619;
 rt_int j_620;
 rt_int n_621;
 int c_622;
 rstr w_623;
 rt_int k_624;
 rstr w_628;
 rt_int k_629;
 rstr two_633;
};
struct f_read_source_45fr { int dummy;
 rstr line_634;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P518 result_;
 P518 x_635;
};
struct f_append_52fr { int dummy;
 P518 *head_49;
 P518 *tail_50;
 P518 x_51;
};
struct f_list_len_54fr { int dummy;
 P518 l_53;
 rt_int result_;
 rt_int n_637;
 P518 p_638;
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
 P518 x_639;
};
struct f_id_list_78fr { int dummy;
 P518 result_;
 P518 head_640;
 P518 tail_641;
};
struct f_p_subtype_79fr { int dummy;
 P518 result_;
 rt_int line_642;
 P518 x_643;
 rstr w_644;
 P518 head_645;
 P518 tail_646;
 P518 head_647;
 P518 tail_648;
 int more_649;
 P518 names_650;
 P518 st_651;
 P518 cmp_652;
 P518 head_653;
 P518 tail_654;
 int more_655;
 P518 lit_656;
};
struct f_actual_params_80fr { int dummy;
 P518 result_;
 P518 head_657;
 P518 tail_658;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P518 result_;
 P518 head_659;
 P518 tail_660;
 int more_661;
};
struct f_binop_88fr { int dummy;
 P513 op_84;
 P518 l_85;
 P518 r_86;
 rt_int line_87;
 P518 result_;
 P518 x_662;
};
struct f_expr_89fr { int dummy;
 P518 result_;
 P518 l_663;
 P513 op_664;
 rt_int line_665;
};
struct f_expr_and_90fr { int dummy;
 P518 result_;
 P518 l_666;
 rt_int line_667;
};
struct f_expr_not_91fr { int dummy;
 P518 result_;
 P518 x_668;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P518 result_;
 P518 l_669;
 P513 op_670;
 rt_int line_671;
};
struct f_expr_add_95fr { int dummy;
 P518 result_;
 P518 l_672;
 P513 op_673;
 rt_int line_674;
};
struct f_expr_mul_96fr { int dummy;
 P518 result_;
 P518 l_675;
 P513 op_676;
 rt_int line_677;
};
struct f_expr_pow_97fr { int dummy;
 P518 result_;
 P518 l_678;
 rt_int line_679;
};
struct f_expr_prefix_98fr { int dummy;
 P518 result_;
 P518 x_680;
};
struct f_postfix_99fr { int dummy;
 P518 result_;
 P518 p_681;
 rt_int line_682;
 P518 x_683;
 P518 head_684;
 P518 tail_685;
 int more_686;
 P518 lo_687;
 P518 r_688;
 P518 x_689;
 P518 x_690;
 P518 x_691;
};
struct f_primary_100fr { int dummy;
 P518 result_;
 rt_int line_692;
 P518 x_693;
 rt_int k_694;
 rstr w_695;
 P518 head_696;
 P518 tail_697;
 int more_698;
};
struct f_constructor_item_101fr { int dummy;
 P518 result_;
 rt_int line_699;
 P518 it_700;
 P518 first_701;
 P518 keys_702;
 P518 ktail_703;
 P518 lab_704;
 rt_int save_705;
 P518 more_706;
 P518 tail2_707;
 int ok_708;
 int go_709;
 P518 l2_710;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P518 result_;
 P518 head_711;
 P518 tail_712;
};
struct f_body_element_104fr { int dummy;
 P518 result_;
 P518 x_713;
};
struct f_declaration_105fr { int dummy;
 P518 result_;
 rt_int line_714;
 P518 head_715;
 P518 tail_716;
 P518 names_717;
 P518 x_718;
};
struct f_object_decl_106fr { int dummy;
 P518 result_;
 rt_int line_719;
 int is_var_720;
 P518 names_721;
 P518 st_722;
 P518 init_723;
 P518 loc_724;
 rt_int loc_kind_725;
 P518 head_726;
 P518 tail_727;
 P518 x_728;
};
struct f_abbrev_decl_107fr { int dummy;
 P518 result_;
 P518 x_729;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_730;
};
struct f_type_decl_109fr { int dummy;
 P518 result_;
 rt_int line_731;
 P513 name_732;
 P518 params_733;
 P518 x_734;
 P518 tts_735;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P518 result_;
 P518 head_736;
 P518 tail_737;
 int more_738;
 rt_int mode_739;
 P518 names_740;
 P518 ntail_741;
 P518 st_742;
 P518 p_743;
};
struct f_imports_list_114fr { int dummy;
 P518 owner_113;
 int result_;
 P518 head_744;
 P518 tail_745;
 int more_746;
 int ro_747;
 P518 x_748;
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
 rt_int line_749;
 P518 x_750;
 int is_abn_751;
 int is_func_752;
 int dummy_753;
};
struct f_capsule_decl_119fr { int dummy;
 P518 result_;
 P518 x_754;
 int dummy_755;
 P518 head_756;
 P518 tail_757;
 int more_758;
 P518 n_759;
};
struct f_formal_tt_120fr { int dummy;
 P518 result_;
 P518 head_760;
 P518 tail_761;
 int more_762;
};
struct f_generic_decl_121fr { int dummy;
 P518 result_;
 P518 x_763;
 P518 head_764;
 P518 tail_765;
 int more_766;
 P518 names_767;
 rt_int kind_768;
 P518 st_769;
 P518 p_770;
 P513 nm_771;
 P518 st_772;
};
struct f_task_decl_122fr { int dummy;
 P518 result_;
 P518 x_773;
 int dummy_774;
};
struct f_expose_decl_123fr { int dummy;
 P518 result_;
 P518 x_775;
 P518 head_776;
 P518 tail_777;
 int more_778;
 P518 n_779;
 P518 head_780;
 P518 tail_781;
 int more_782;
 P518 n_783;
 P518 tgt_784;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P518 result_;
 P518 labels_785;
 P518 ltail_786;
 P513 match_787;
 P518 s_788;
};
struct f_unlabeled_statement_127fr { int dummy;
 P518 result_;
 rt_int line_789;
 P518 x_790;
 P518 head_791;
 P518 tail_792;
 P518 invs_793;
 P518 itail_794;
 int more_795;
 P518 target_796;
};
struct f_arm_131fr { int dummy;
 P518 cond_128;
 P518 b_129;
 rt_int line_130;
 P518 result_;
 P518 x_797;
};
struct f_if_stmt_132fr { int dummy;
 P518 result_;
 P518 x_798;
 P518 head_799;
 P518 tail_800;
 P518 cond_801;
 int go_802;
};
struct f_case_stmt_133fr { int dummy;
 P518 result_;
 P518 x_803;
 P518 head_804;
 P518 tail_805;
 P518 labs_806;
 P518 ltail_807;
 int more_808;
 P518 l_809;
};
struct f_repeat_stmt_134fr { int dummy;
 P518 result_;
 P518 x_810;
};
struct f_guard_stmt_135fr { int dummy;
 P518 result_;
 P518 x_811;
 P518 head_812;
 P518 tail_813;
 P518 h_814;
};
struct f_program_136fr { int dummy;
 P518 result_;
 P518 head_815;
 P518 tail_816;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_817;
 rt_int i_818;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P526 result_;
 P526 y_822;
};
struct f_lookup_decl_142fr { int dummy;
 P518 d_141;
 P526 result_;
 P526 y_823;
};
struct f_define_145fr { int dummy;
 P526 y_143;
 rt_int line_144;
 rt_int h_824;
 P526 z_825;
};
struct f_overloadable_147fr { int dummy;
 P526 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P528 a_148;
 P528 b_149;
 int result_;
 P528 x_826;
 P528 y_827;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P513 name_154;
 P526 result_;
 P526 y_828;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P522 result_;
 P522 t_830;
};
struct f_new_cons_158fr { int dummy;
 P520 result_;
 P520 c_832;
};
struct f_same_lits_161fr { int dummy;
 P518 a_159;
 P518 b_160;
 int result_;
 P518 x_834;
 P518 y_835;
};
struct f_same_164fr { int dummy;
 P522 a_162;
 P522 b_163;
 int result_;
 P524 f_836;
 P524 g_837;
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
 P524 f_840;
 P513 s_841;
};
struct f_declare_ctype_181fr { int dummy;
 P522 t_180;
 P522 u_842;
 P522 target_843;
 P518 p_844;
 P513 fs_845;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_846;
 P518 head_847;
 P518 tail_848;
 rt_int start_849;
 rt_int i_850;
 P518 lit_854;
};
struct f_lit_index_185fr { int dummy;
 P518 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_855;
 P518 l_856;
};
struct f_resolve_subtype_188fr { int dummy;
 P518 st_186;
 P520 *c_187;
 P520 c_187v;
 P522 result_;
 P522 t_857;
 int ok_858;
 P522 dummy_859;
 P520 ic_861;
 P520 ic2_862;
 P520 ec_863;
 P522 it_864;
 P522 et_865;
 P520 ec_866;
 P518 comp_867;
 P524 tail_868;
 P520 cc_869;
 P524 f_870;
 P518 gt_872;
 P520 ec_873;
 P526 y_874;
};
struct f_opened_190fr { int dummy;
 P522 t_189;
 int result_;
 P538 c_875;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_876;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P532 l_877;
 P513 r_878;
};
struct f_new_type_200fr { int dummy;
 P526 y_197;
 P518 st_198;
 P520 *c_199;
 P520 c_199v;
 P522 result_;
 P518 d_879;
 P518 p_880;
 P520 uc_881;
 P526 z_882;
 P520 zc_883;
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
 P513 link_884;
 rt_int i_885;
};
struct f_tparam_type_210fr { int dummy;
 P522 t_208;
 rstr *name_209;
 P522 result_;
 P526 z_889;
};
struct f_make_storage_214fr { int dummy;
 rstr *lval_211;
 P522 t_212;
 P520 c_213;
 P518 p_890;
 P518 a_891;
 P520 uc_892;
 P522 ut_893;
 P522 at_894;
 P522 pt_895;
 rstr v_896;
 P532 saved_897;
 P532 l1_898;
 P532 l2_899;
 rstr i_902;
 P524 f_903;
};
struct f_manifest_217fr { int dummy;
 P518 e_215;
 int *ok_216;
 int ok_216v;
 rt_int result_;
 rt_int a_904;
 rt_int b_905;
 int ok2_906;
 P526 y_907;
};
struct f_mcopy_219fr { int dummy;
 P522 t_218;
 rstr result_;
 rstr ct_908;
 rstr name_909;
 P532 l_910;
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
 P532 p_912;
};
struct f_emit_helpers_241fr { int dummy;
 P522 order_913;
 P522 t_914;
 P532 done_915;
 P532 l_916;
 rstr c_917;
};
struct f_helper_bodies_243fr { int dummy;
 P522 t_242;
 rstr c_919;
 P534 b_920;
 P522 e_921;
 P518 p_922;
 P513 pc_923;
 P524 f_924;
 P513 conds_925;
 rstr fn_926;
 rstr fn_927;
};
struct f_declare_body_245fr { int dummy;
 P518 elems_244;
 P518 e_928;
 P526 y_929;
 P526 y_930;
 P526 y_931;
 P522 t_932;
 P526 y_933;
 P526 g_934;
 P530 snap_935;
 rt_int i_939;
 P526 g_943;
 P526 y_944;
};
struct f_manifest_const_247fr { int dummy;
 P518 d_246;
 int ok_945;
 rt_int v_946;
 P526 y_947;
 P520 c_948;
};
struct f_exported_251fr { int dummy;
 P518 d_248;
 rstr *name_249;
 int *ro_250;
 int ro_250v;
 int result_;
 P518 p_949;
};
struct f_copy_sym_253fr { int dummy;
 P526 y_252;
 P526 result_;
 P526 z_950;
};
struct f_gen_capsule_255fr { int dummy;
 P518 d_254;
 P526 y_952;
};
struct f_capsule_params_259fr { int dummy;
 P518 d_256;
 P518 args_257;
 rt_int line_258;
 P518 p_953;
 P518 a_954;
 P522 t_955;
 P522 vt_956;
 P520 c_957;
 P513 lv_958;
 P520 lc_959;
 int ro_960;
 P526 y_961;
 rstr f_962;
 rstr g_963;
 P526 y_964;
 rstr v_965;
 rstr access_966;
};
struct f_elaborate_capsule_264fr { int dummy;
 P518 d_260;
 P526 y_261;
 P518 args_262;
 P518 owner_263;
 P538 cr_967;
 P542 ctx_968;
 P526 m_969;
 P518 p_970;
 int ro_971;
 P540 w_974;
 P526 z_976;
};
struct f_exports_op_267fr { int dummy;
 P518 d_265;
 rstr *op_266;
 int result_;
 P518 p_977;
};
struct f_renamed_270fr { int dummy;
 P518 d_268;
 P526 z_269;
 P513 result_;
 P518 r_978;
};
struct f_gen_expose_272fr { int dummy;
 P518 d_271;
 P526 y_979;
 P526 m_980;
 P518 p_981;
 P518 r_982;
 P526 inst_983;
 int found_984;
 P526 z_985;
 int found_986;
 P526 z_987;
};
struct f_finish_ptr_274fr { int dummy;
 P522 t_273;
 P518 d_988;
 P518 p_989;
 P520 c_990;
 rstr dummy_991;
 P526 y_992;
};
struct f_declare_subprogram_276fr { int dummy;
 P518 d_275;
};
struct f_build_subprogram_278fr { int dummy;
 P518 d_277;
 P526 result_;
 P526 y_993;
 P518 p_994;
 P528 tail_995;
 P528 pm_996;
 P520 rc_998;
};
struct f_element_280fr { int dummy;
 P518 e_279;
 rt_int k_999;
 P522 t_1000;
 rstr c_1001;
};
struct f_storage_283fr { int dummy;
 rstr *name_281;
 P522 t_282;
 rstr result_;
 rstr g_1002;
 rstr f_1003;
};
struct f_bind_286fr { int dummy;
 P526 y_284;
 rstr *access_285;
};
struct f_var_decl_288fr { int dummy;
 P518 d_287;
 P520 c_1004;
 P522 t_1005;
 P526 y_1006;
 rstr access_1007;
 P522 it_1008;
 rstr n_1009;
 P522 vt_1010;
 rstr v_1011;
};
struct f_const_decl_290fr { int dummy;
 P518 d_289;
 P520 c_1012;
 P522 t_1013;
 P522 vt_1014;
 P526 y_1015;
 int ok_1016;
 rstr v_1017;
 rstr access_1018;
};
struct f_subprogram_292fr { int dummy;
 P518 d_291;
};
struct f_gen_subprogram_295fr { int dummy;
 P518 d_293;
 P526 y_294;
 P534 saved_code_1019;
 P534 saved_fields_1020;
 int saved_in_1021;
 P526 saved_sym_1022;
 P536 saved_exits_1023;
 rt_int saved_frames_1024;
 P513 args_1025;
 P528 pm_1026;
 P532 saved_handlers_1027;
 P532 saved_cleanups_1028;
 P542 ctx_1029;
 P513 head_1030;
 P513 frame_1031;
 P513 parent_1032;
 P513 copy_back_1033;
 rstr ct_1035;
 rstr f_1036;
 P526 p_1037;
};
struct f_waits_of_297fr { int dummy;
 P518 d_296;
 rstr result_;
 P540 w_1038;
};
struct f_task_waits_299fr { int dummy;
 P518 elems_298;
 rstr result_;
 P518 e_1039;
 P513 r_1040;
};
struct f_await_tasks_301fr { int dummy;
 P518 elems_300;
 rstr w_1041;
};
struct f_capsule_elements_303fr { int dummy;
 P518 elems_302;
 P518 e_1042;
};
struct f_body_elements_305fr { int dummy;
 P518 elems_304;
};
struct f_gen_body_307fr { int dummy;
 P518 elems_306;
};
struct f_pop_frames_309fr { int dummy;
 rt_int upto_308;
 rt_int i_1043;
 P532 c_1044;
};
struct f_push_cleanup_311fr { int dummy;
 rstr *s_310;
 P532 c_1045;
};
struct f_pop_cleanup_312fr { int dummy;
};
struct f_gen_statement_314fr { int dummy;
 P518 s_313;
 P513 label_1047;
 P536 x_1048;
};
struct f_st_assign_316fr { int dummy;
 P518 s_315;
 P513 lv_1051;
 P522 t_1052;
 P522 vt_1053;
 P520 c_1054;
 int ro_1055;
 rstr lo_1056;
 rstr hi_1057;
 rstr v_1058;
 rstr v_1059;
};
struct f_st_call_318fr { int dummy;
 P518 s_317;
 P518 c_1060;
 P522 t_1061;
 P518 x_1062;
};
struct f_st_if_320fr { int dummy;
 P518 s_319;
 P518 a_1063;
 int first_1064;
 P522 t_1065;
 rstr c_1066;
};
struct f_st_case_322fr { int dummy;
 P518 s_321;
 P522 st_1067;
 P522 vt_1068;
 int first_1069;
 P518 a_1070;
 rstr sel_1071;
 rstr tmp_1072;
 P518 lab_1073;
 P513 conds_1074;
 rstr v_1075;
 rstr lo_1076;
 rstr hi_1077;
};
struct f_st_repeat_324fr { int dummy;
 P518 s_323;
 P522 t_1078;
 P520 c_1079;
 rstr cond_1080;
 rstr access_1081;
 rstr lov_1082;
 rstr hiv_1083;
 rstr it_1084;
 P526 y_1085;
};
struct f_st_exit_326fr { int dummy;
 P518 s_325;
 P536 x_1086;
};
struct f_st_return_328fr { int dummy;
 P518 s_327;
 P522 vt_1087;
 rstr v_1088;
};
struct f_exc_id_331fr { int dummy;
 rstr *name_329;
 rt_int line_330;
 rstr result_;
 P526 y_1089;
};
struct f_st_guard_333fr { int dummy;
 P518 s_332;
 P518 h_1090;
 int first_1091;
 P532 hv_1092;
 rstr f_1093;
 rstr x_1094;
 P518 n_1096;
 P513 conds_1097;
};
struct f_st_alloc_335fr { int dummy;
 P518 s_334;
 P513 lv_1098;
 P522 t_1099;
 P522 target_1100;
 P522 vt_1101;
 P520 c_1102;
 P520 tc_1103;
 int ro_1104;
 P518 d_1105;
 P518 p_1106;
 P518 a_1107;
 rstr tcn_1108;
 rstr cell_1109;
 rstr v_1110;
 rstr pv_1111;
 P526 y_1112;
 rstr v_1113;
};
struct f_act_ref_337fr { int dummy;
 P518 e_336;
 rstr result_;
 P513 lv_1114;
 P522 t_1115;
 P520 c_1116;
 int ro_1117;
 rstr v_1118;
};
struct f_st_create_339fr { int dummy;
 P518 s_338;
 P526 y_1119;
 P528 pm_1120;
 P518 a_1121;
 P513 lv_1122;
 P522 lt_1123;
 P522 vt_1124;
 P520 lc_1125;
 int ro_1126;
 P522 at_1127;
 P520 ac_1128;
 int aro_1129;
 P513 act_1130;
 rstr nf_1131;
 P513 link_1132;
 rt_int i_1133;
 rstr v_1137;
};
struct f_hidden_var_343fr { int dummy;
 rstr *name_340;
 P522 t_341;
 rstr *place_342;
 P526 y_1138;
};
struct f_user_create_349fr { int dummy;
 P518 s_344;
 P526 y_345;
 rstr *uv_346;
 P522 ut_347;
 rstr *nf_348;
 P522 t_1139;
 P534 saved_1140;
 P534 hook_1141;
 P518 un_1142;
 rstr hn_1143;
 rstr aa_1144;
 rstr uname_1145;
 rstr aname_1146;
 P518 start_1147;
 P518 an_1148;
};
struct f_wait_alt_354fr { int dummy;
 P518 inv_350;
 rstr *arr_351;
 rt_int i_352;
 int mixed_353;
 rstr result_;
 P513 lv_1149;
 P522 t_1150;
 P522 vt_1151;
 P520 c_1152;
 int ro_1153;
 P518 fn_1154;
 P518 args_1155;
 rstr slot_1156;
 P513 dv_1157;
 P522 dt_1158;
 rstr tmp_1159;
 rstr v_1160;
 rstr v_1161;
};
struct f_builtin_wait_356fr { int dummy;
 P518 inv_355;
 int result_;
 P513 lv_1162;
 P522 t_1163;
 P520 c_1164;
 int ro_1165;
 P534 saved_1166;
 int ok_1167;
};
struct f_wait_op_361fr { int dummy;
 P518 inv_357;
 rstr *op_358;
 rstr *q_359;
 int is_stmt_360;
 rstr result_;
 P518 x_1170;
 P518 f_1171;
 P518 qn_1172;
 P522 t_1173;
 rstr r_1174;
};
struct f_user_wait_366fr { int dummy;
 P518 s_362;
 rstr *arr_363;
 rstr *w_364;
 rt_int n_365;
 P518 a_1175;
 rt_int i_1176;
 P513 tests_1177;
 P513 revokes_1178;
 P518 inv_1179;
 P518 st_1180;
 P520 c_1181;
 P522 qt_1182;
 rstr qname_1183;
 P526 y_1184;
 rstr access_1185;
};
struct f_st_wait_368fr { int dummy;
 P518 s_367;
 P518 a_1186;
 rt_int n_1187;
 int first_1188;
 P534 inits_1189;
 int user_1190;
 rstr arr_1191;
 rstr w_1192;
 P518 inv_1193;
 P518 inv_1194;
 P513 conds_1195;
 rt_int i_1196;
};
struct f_call_node_372fr { int dummy;
 rstr *name_369;
 P518 arg_370;
 rt_int line_371;
 P518 result_;
 P518 x_1200;
 P518 f_1201;
};
struct f_user_region_374fr { int dummy;
 P518 s_373;
 P522 t_1202;
 rstr f_1203;
 rstr lock_1204;
 rstr unlock_1205;
};
struct f_st_region_376fr { int dummy;
 P518 s_375;
 P513 lv_1206;
 P522 t_1207;
 P520 c_1208;
 int ro_1209;
 rstr lk_1210;
 rstr f_1211;
};
struct f_gparam_379fr { int dummy;
 P518 g_377;
 rstr *name_378;
 P518 result_;
 P518 p_1212;
};
struct f_bind_sym_381fr { int dummy;
 P518 p_380;
 P526 result_;
 P526 y_1213;
};
struct f_same_binds_384fr { int dummy;
 P526 a_382;
 P526 b_383;
 int result_;
 P526 x_1214;
 P526 y_1215;
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
 P518 f_1216;
 P518 a_1217;
 P526 binds_1218;
 P520 c_1219;
 P522 at_1220;
 P518 p_1221;
 P526 b_1222;
 P518 st_1223;
 int ok_1224;
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
 P526 binds_1225;
 P518 e_1226;
 P518 tp_1227;
 P513 nm_1228;
 P526 q_1229;
 int have_1230;
 P526 g_1231;
 P526 b_1232;
};
struct f_instantiate_type_405fr { int dummy;
 P526 g_400;
 P518 tt_401;
 P518 args_402;
 P520 *c_403;
 P520 c_403v;
 rt_int line_404;
 P522 result_;
 P518 gd_1233;
 P518 pat_1234;
 P526 binds_1235;
 P526 inst_1236;
 P522 t_1237;
 P538 saved_caps_1238;
 P530 saved_env_1239;
 P526 b_1240;
 P526 y_1241;
 P520 yc_1242;
};
struct f_instantiate_410fr { int dummy;
 P526 g_406;
 P518 tt_407;
 P518 args_408;
 rt_int line_409;
 P526 result_;
 P518 gd_1244;
 P518 pat_1245;
 P526 binds_1246;
 P518 f_1247;
 P518 a_1248;
 P518 fp_1249;
 P526 inst_1250;
 P522 at_1251;
 P520 c_1252;
 P542 saved_fctx_1253;
 int saved_in_1254;
 rt_int saved_level_1255;
 P526 saved_sym_1256;
 P534 saved_code_1257;
 P530 saved_env_1258;
 rstr v_1259;
 int known_1260;
 P526 q_1261;
 P526 b_1262;
 rstr v_1263;
 P526 b_1264;
};
struct f_access_of_412fr { int dummy;
 P526 y_411;
 rstr result_;
 P513 p_1265;
 rt_int i_1266;
};
struct f_import_of_415fr { int dummy;
 P518 l_413;
 rstr *name_414;
 P518 result_;
 P518 p_1270;
};
struct f_check_import_418fr { int dummy;
 P526 y_416;
 rt_int line_417;
 int result_;
 P542 c_1271;
 int ro_1272;
 P518 imp_1273;
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
 P526 y_1274;
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
 P513 base_1275;
 P522 bt_1276;
 P520 bc_1277;
 P526 y_1278;
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
 P518 p_1279;
 P524 f_1280;
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
 P518 a_1281;
 P522 it_1282;
 rstr i_1283;
 rstr j_1284;
 rstr lo_1285;
 rstr hi_1286;
 rstr i_1287;
 rstr i_1288;
};
struct f_own_attribute_450fr { int dummy;
 P518 e_449;
 int result_;
 P534 saved_1289;
 P522 bt_1290;
 int ok_1291;
 rstr base_1294;
 P518 p_1295;
};
struct f_gexpr_454fr { int dummy;
 P518 e_451;
 P522 want_452;
 P522 *t_453;
 P522 t_453v;
 rstr result_;
 rt_int k_1296;
 P513 code_1297;
 P520 c_1298;
 int ro_1299;
 P522 bt_1300;
 rt_int i_1301;
 P526 y_1302;
 int ro_1303;
 P518 call_1304;
 P518 fname_1305;
 rstr a_1306;
 rstr a_1307;
 rstr a_1308;
 P518 nm_1309;
 P526 y_1310;
 rstr base_1311;
 rstr base_1312;
};
struct f_copy_node_456fr { int dummy;
 P518 e_455;
 P518 result_;
 P518 x_1313;
};
struct f_wrap_apply_458fr { int dummy;
 P518 e_457;
 P518 result_;
 P518 x_1315;
};
struct f_c_string_460fr { int dummy;
 rstr *s_459;
 rstr result_;
 rt_int n_1316;
 rt_int i_1317;
 rstr r_1321;
 rt_int j_1322;
 rt_int i_1323;
};
struct f_enum_type_of_463fr { int dummy;
 rstr *lit_461;
 rt_int line_462;
 P522 result_;
 P526 y_1327;
 P520 c_1328;
 P518 st_1329;
};
struct f_attribute_466fr { int dummy;
 P518 e_464;
 P522 *t_465;
 P522 t_465v;
 rstr result_;
 P522 bt_1330;
 P520 c_1331;
 P513 base_1332;
 P526 y_1333;
 P518 st_1334;
};
struct f_gbinop_470fr { int dummy;
 P518 e_467;
 P522 want_468;
 P522 *t_469;
 P522 t_469v;
 rstr result_;
 P513 op_1335;
 P522 ta_1336;
 P522 tb_1337;
 P522 hint_1338;
 P526 uy_1339;
 P518 l_1340;
 P518 r_1341;
 P518 call_1342;
 P518 fname_1343;
 rstr s_1344;
 rstr a_1345;
 rstr a_1346;
 rstr b_1347;
 rstr a_1348;
 rstr b_1349;
 P522 wa_1350;
 P522 wb_1351;
 rstr a_1352;
 rstr b_1353;
 rstr dummy_1354;
 rstr a_1355;
 rstr b_1356;
 P522 ct_1357;
 rstr a_1358;
 rstr b_1359;
};
struct f_constructor_474fr { int dummy;
 P518 e_471;
 P522 want_472;
 P522 *t_473;
 P522 t_473v;
 rstr result_;
 P518 it_1360;
 P524 f_1361;
 P522 vt_1362;
 P513 s_1363;
 rstr v_1364;
 rstr tmp_1365;
 rstr ct_1366;
 rstr et_1367;
 P513 parts_1368;
 rstr lo_1369;
 rstr hi_1370;
 rstr v_1371;
 rt_int i_1372;
 rstr v_1376;
 rstr tmp_1377;
 P513 parts_1378;
 rstr v_1379;
};
struct f_fits_477fr { int dummy;
 P526 y_475;
 P518 args_476;
 int result_;
 P518 a_1380;
 P528 pm_1381;
 P522 t_1382;
 P534 saved_1383;
 int ok_1384;
 P513 lv_1385;
 P520 lc_1386;
 int ro_1387;
 rstr v_1390;
};
struct f_resolve_overload_482fr { int dummy;
 rstr *name_478;
 P518 args_479;
 int is_stmt_480;
 rt_int line_481;
 P526 result_;
 P526 y_1391;
 P526 first_1392;
 rt_int n_1393;
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
 P520 c_1394;
};
struct f_type_tag_492fr { int dummy;
 P522 t_491;
 rstr result_;
};
struct f_lock_ref_495fr { int dummy;
 P518 e_493;
 rstr *name_494;
 rstr result_;
 P513 lv_1395;
 P522 t_1396;
 P520 c_1397;
 int ro_1398;
};
struct f_user_op_498fr { int dummy;
 rstr *op_496;
 P518 args_497;
 P526 result_;
 P526 y_1399;
};
struct f_gcall_502fr { int dummy;
 P518 e_499;
 int is_stmt_500;
 P522 *t_501;
 P522 t_501v;
 rstr result_;
 P518 fn_1400;
 P518 tt_1401;
 P526 y_1402;
 P513 args_1403;
 P518 a_1404;
 P528 pm_1405;
 P522 lt_1406;
 P522 vt_1407;
 P513 lv_1408;
 P520 lc_1409;
 int ro_1410;
 P526 alt_1411;
 rt_int i_1412;
 rstr v_1416;
 rstr ct_1417;
 rstr v_1418;
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
 P522 at_1419;
 rt_int n_1420;
 rstr a_1421;
 rstr a_1422;
 rstr a_1423;
 rstr a_1424;
 rstr a_1425;
 rstr n1_1426;
 rstr m1_1427;
 rstr a_1428;
 rstr a_1429;
 P518 last_1430;
 rstr a_1431;
 rstr a_1432;
 P513 lv_1433;
 P520 lc_1434;
 int ro_1435;
 P518 last_1436;
 P513 lv_1437;
 P513 dv_1438;
 P520 lc_1439;
 int ro_1440;
 P522 mt_1441;
 P522 dt_1442;
 rstr v_1443;
 P513 lv_1444;
 P520 lc_1445;
 int ro_1446;
 P522 mt_1447;
 P513 lv_1448;
 P513 dv_1449;
 P513 bv_1450;
 P520 lc_1451;
 int ro_1452;
 P522 mt_1453;
 P522 dt_1454;
 P522 bt_1455;
 rstr v_1456;
 rstr v_1457;
 rstr v_1458;
 rstr v_1459;
 rstr a_1460;
 P513 bv_1461;
 P520 bc_1462;
 int ro_1463;
 P522 bt_1464;
 rstr l_1465;
 P513 pv_1466;
 P520 pc_1467;
 int ro_1468;
 P522 pt_1469;
 rstr dev_1470;
 rstr cmd_1471;
 P513 dv_1472;
 P520 dc_1473;
 int ro_1474;
 P522 dt_1475;
};
struct f_translate_511fr { int dummy;
 P518 units_510;
 P518 u_1476;
 P518 l_1478;
 rstr w_1479;
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
static P534 g_out_roots_572;
static int g_uses_free_573;
static P526 g_func_sym_574;
static P536 g_exits_575;
static rt_int g_frames_576;
static P532 g_handlers_577;
static P532 g_cleanups_578;
static rt_int g_trial_579;
static P532 g_mcopies_580;
static P522 g_ty_int_581;
static P522 g_ty_bool_582;
static P522 g_ty_float_583;
static P522 g_ty_ascii_584;
static P522 g_ty_string_585;
static P522 g_ty_void_586;
static P522 g_ty_file_587;
static P522 g_ty_nil_588;
static P522 g_ty_lock_589;
static P522 g_ty_latch_590;
static P522 g_ty_act_591;
static P520 g_no_cons_592;
static P513 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_593 = NULL;
{ rstr *cell594 = rt_alloc(sizeof(rstr));
rt_int pv595 = ((*F->s_2)).len;
(*cell594) = rt_str_new(pv595);
rt_str_assign(&(*cell594), (*F->s_2));
F->t_593 = cell594;
}
F->result_ = F->t_593;
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
F->r_596 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_596, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_596;
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
F->letters_597 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_597, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_598 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_599 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_599, (*F->s_14));
{ rt_int lo601 = ((rt_int)1LL), hi602 = ((*F->s_14)).len;
for (rt_int it603 = lo601; it603 <= hi602; it603++) {
F->i_600 = it603;
if (((65 <= rt_str_get(F->r_599, F->i_600)) && (rt_str_get(F->r_599, F->i_600) <= 90))) {
(*rt_str_at(&F->r_599, F->i_600)) = rt_str_get(F->letters_598, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_599, F->i_600)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_599;
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
F->l_604 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_605 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_606 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_604), rt_str(" ", 1)));
{ rt_int lo608 = ((rt_int)1LL), hi609 = rt_add(rt_sub((F->kw_605).len, (F->w_606).len), ((rt_int)1LL));
for (rt_int it610 = lo608; it610 <= hi609; it610++) {
F->i_607 = it610;
if (rt_str_eq(rt_str_slice(F->kw_605, F->i_607, rt_sub(rt_add(F->i_607, (F->w_606).len), ((rt_int)1LL))), F->w_606)) {
F->result_ = rt_str_cat(F->l_604, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_604;
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
g_serial_554 = rt_add(g_serial_554, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_554));
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
if ((g_trial_579 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P534 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_611 = NULL;
{ R535 *cell612 = rt_alloc(sizeof(R535));
(*cell612).head = NULL;
(*cell612).tail = NULL;
F->b_611 = cell612;
}
F->result_ = F->b_611;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P534 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_613 = NULL;
{ R533 *cell614 = rt_alloc(sizeof(R533));
(*cell614).s = NULL;
(*cell614).next = NULL;
F->l_613 = cell614;
}
(*(P532)rt_nil_check(F->l_613)).s = f_mk_3(&(*F->s_26));
if (((*(P534)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P534)rt_nil_check(F->b_25)).head = F->l_613;
} else {
(*(P532)rt_nil_check((*(P534)rt_nil_check(F->b_25)).tail)).next = F->l_613;
}
(*(P534)rt_nil_check(F->b_25)).tail = F->l_613;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_562, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P534 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_615 = NULL;
F->l_615 = (*(P534)rt_nil_check(F->b_30)).head;
while ((F->l_615 != NULL)) {
rt_putln((*(P513)rt_nil_check((*(P532)rt_nil_check(F->l_615)).s)));
F->l_615 = (*(P532)rt_nil_check(F->l_615)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P534 a_32, P534 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel616 = (*F->w_35);
if (0 || rt_str_eq(sel616, rt_str("ABBREV", 6)) || rt_str_eq(sel616, rt_str("ABNORMAL", 8)) || rt_str_eq(sel616, rt_str("ALL", 3)) || rt_str_eq(sel616, rt_str("ALLOC", 5)) || rt_str_eq(sel616, rt_str("ASSERT", 6)) || rt_str_eq(sel616, rt_str("BEGIN", 5)) || rt_str_eq(sel616, rt_str("BY", 2)) || rt_str_eq(sel616, rt_str("CAPSULE", 7)) || rt_str_eq(sel616, rt_str("CASE", 4)) || rt_str_eq(sel616, rt_str("CONST", 5)) || rt_str_eq(sel616, rt_str("CREATE", 6)) || rt_str_eq(sel616, rt_str("DO", 2)) || rt_str_eq(sel616, rt_str("ELSE", 4)) || rt_str_eq(sel616, rt_str("ELSEIF", 6)) || rt_str_eq(sel616, rt_str("END", 3)) || rt_str_eq(sel616, rt_str("EXCEPTION", 9)) || rt_str_eq(sel616, rt_str("EXIT", 4)) || rt_str_eq(sel616, rt_str("EXPORTS", 7)) || rt_str_eq(sel616, rt_str("EXPOSE", 6)) || rt_str_eq(sel616, rt_str("EXTERNAL", 8)) || rt_str_eq(sel616, rt_str("FOR", 3)) || rt_str_eq(sel616, rt_str("FROM", 4)) || rt_str_eq(sel616, rt_str("FUNC", 4)) || rt_str_eq(sel616, rt_str("GENERIC", 7)) || rt_str_eq(sel616, rt_str("GOTO", 4)) || rt_str_eq(sel616, rt_str("GUARD", 5)) || rt_str_eq(sel616, rt_str("IF", 2)) || rt_str_eq(sel616, rt_str("IMPORTS", 7)) || rt_str_eq(sel616, rt_str("LOCATION", 8)) || rt_str_eq(sel616, rt_str("NAMED", 5)) || rt_str_eq(sel616, rt_str("NEEDS", 5)) || rt_str_eq(sel616, rt_str("NEW", 3)) || rt_str_eq(sel616, rt_str("NONE", 4)) || rt_str_eq(sel616, rt_str("OUT", 3)) || rt_str_eq(sel616, rt_str("OF", 2)) || rt_str_eq(sel616, rt_str("PRAG", 4)) || rt_str_eq(sel616, rt_str("PROC", 4)) || rt_str_eq(sel616, rt_str("RAISE", 5)) || rt_str_eq(sel616, rt_str("READONLY", 8)) || rt_str_eq(sel616, rt_str("REVERSE", 7)) || rt_str_eq(sel616, rt_str("REGION", 6)) || rt_str_eq(sel616, rt_str("RENAMING", 8)) || rt_str_eq(sel616, rt_str("REP", 3)) || rt_str_eq(sel616, rt_str("REPEAT", 6)) || rt_str_eq(sel616, rt_str("RERAISE", 7)) || rt_str_eq(sel616, rt_str("RETURN", 6)) || rt_str_eq(sel616, rt_str("SUBTYPE", 7)) || rt_str_eq(sel616, rt_str("TASK", 4)) || rt_str_eq(sel616, rt_str("THEN", 4)) || rt_str_eq(sel616, rt_str("TO", 2)) || rt_str_eq(sel616, rt_str("TYPE", 4)) || rt_str_eq(sel616, rt_str("VAR", 3)) || rt_str_eq(sel616, rt_str("WAIT", 4)) || rt_str_eq(sel616, rt_str("WHEN", 4)) || rt_str_eq(sel616, rt_str("WHILE", 5))) {
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
F->t_617 = NULL;
{ R515 *cell618 = rt_alloc(sizeof(R515));
(*cell618).s = NULL;
F->t_617 = cell618;
}
(*(P514)rt_nil_check(F->t_617)).kind = F->kind_39;
(*(P514)rt_nil_check(F->t_617)).line = g_src_line_547;
(*(P514)rt_nil_check(F->t_617)).ival = F->ival_41;
(*(P514)rt_nil_check(F->t_617)).s = f_mk_3(&(*F->s_40));
g_ntoks_545 = rt_add(g_ntoks_545, ((rt_int)1LL));
(*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_ntoks_545, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo] = F->t_617;
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_619 = ((rt_int)1LL);
F->j_620 = ((rt_int)0LL);
F->n_621 = ((*F->line_43)).len;
while ((F->i_619 <= F->n_621)) {
F->c_622 = rt_str_get((*F->line_43), F->i_619);
if (((((F->c_622 == 32) || (F->c_622 == 9)) || (F->c_622 == 13)) || (F->c_622 == 12))) {
F->i_619 = rt_add(F->i_619, ((rt_int)1LL));
} else if ((F->c_622 == 37)) {
F->i_619 = rt_add(F->n_621, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_622)) {
F->j_620 = F->i_619;
while (((F->j_620 <= F->n_621) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_620)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_620))) || (rt_str_get((*F->line_43), F->j_620) == 95)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
{
F->w_623 = rt_str_new(rt_sub(F->j_620, F->i_619));
rt_str_assign(&F->w_623, rt_str_slice((*F->line_43), F->i_619, rt_sub(F->j_620, ((rt_int)1LL))));
{ rt_int lo625 = ((rt_int)1LL), hi626 = (F->w_623).len;
for (rt_int it627 = lo625; it627 <= hi626; it627++) {
F->k_624 = it627;
(*rt_str_at(&F->w_623, F->k_624)) = f_upper_13(rt_str_get(F->w_623, F->k_624));
}
}
if (rt_str_eq(F->w_623, rt_str("PRAGMAT", 7))) {
while (((F->j_620 <= F->n_621) && (rt_str_get((*F->line_43), F->j_620) != 59))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_623)) {
f_add_token_42(((rt_int)2LL), &F->w_623, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_623)) {
f_add_token_42(((rt_int)3LL), &F->w_623, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_623, ((rt_int)0LL));
}
}
F->i_619 = F->j_620;
} else if (f_is_digit_11(F->c_622)) {
F->j_620 = F->i_619;
while (((F->j_620 <= F->n_621) && f_is_digit_11(rt_str_get((*F->line_43), F->j_620)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
if ((((F->j_620 < F->n_621) && (rt_str_get((*F->line_43), F->j_620) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_620, ((rt_int)1LL)))))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
while (((F->j_620 <= F->n_621) && f_is_digit_11(rt_str_get((*F->line_43), F->j_620)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
if (((F->j_620 <= F->n_621) && ((rt_str_get((*F->line_43), F->j_620) == 69) || (rt_str_get((*F->line_43), F->j_620) == 101)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
if (((F->j_620 <= F->n_621) && ((rt_str_get((*F->line_43), F->j_620) == 43) || (rt_str_get((*F->line_43), F->j_620) == 45)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
while (((F->j_620 <= F->n_621) && f_is_digit_11(rt_str_get((*F->line_43), F->j_620)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_619, rt_sub(F->j_620, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_619, rt_sub(F->j_620, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_619, rt_sub(F->j_620, ((rt_int)1LL)))));
}
F->i_619 = F->j_620;
} else if ((F->c_622 == 39)) {
F->j_620 = rt_add(F->i_619, ((rt_int)1LL));
if (((F->j_620 > F->n_621) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_620))))) {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_620 <= F->n_621) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_620)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_620))) || (rt_str_get((*F->line_43), F->j_620) == 95)))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
{
F->w_628 = rt_str_new(rt_sub(rt_sub(F->j_620, F->i_619), ((rt_int)1LL)));
rt_str_assign(&F->w_628, rt_str_slice((*F->line_43), rt_add(F->i_619, ((rt_int)1LL)), rt_sub(F->j_620, ((rt_int)1LL))));
{ rt_int lo630 = ((rt_int)1LL), hi631 = (F->w_628).len;
for (rt_int it632 = lo630; it632 <= hi631; it632++) {
F->k_629 = it632;
(*rt_str_at(&F->w_628, F->k_629)) = f_upper_13(rt_str_get(F->w_628, F->k_629));
}
}
f_add_token_42(((rt_int)6LL), &F->w_628, ((rt_int)0LL));
}
F->i_619 = F->j_620;
} else if ((F->c_622 == 34)) {
F->j_620 = rt_add(F->i_619, ((rt_int)1LL));
while (((F->j_620 <= F->n_621) && (rt_str_get((*F->line_43), F->j_620) != 34))) {
F->j_620 = rt_add(F->j_620, ((rt_int)1LL));
}
if ((F->j_620 > F->n_621)) {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_619, ((rt_int)1LL)), rt_sub(F->j_620, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_619 = rt_add(F->j_620, ((rt_int)1LL));
} else {
{
F->two_633 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_633, rt_str("  ", 2));
(*rt_str_at(&F->two_633, ((rt_int)1LL))) = F->c_622;
if ((F->i_619 < F->n_621)) {
(*rt_str_at(&F->two_633, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_619, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_633, rt_str(":=", 2)) || rt_str_eq(F->two_633, rt_str("=>", 2))) || rt_str_eq(F->two_633, rt_str("..", 2))) || rt_str_eq(F->two_633, rt_str("**", 2))) || rt_str_eq(F->two_633, rt_str("/=", 2))) || rt_str_eq(F->two_633, rt_str("<=", 2))) || rt_str_eq(F->two_633, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_633, ((rt_int)0LL));
F->i_619 = rt_add(F->i_619, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_622 == 40) || (F->c_622 == 41)) || (F->c_622 == 91)) || (F->c_622 == 93)) || (F->c_622 == 44)) || (F->c_622 == 58)) || (F->c_622 == 59)) || (F->c_622 == 46)) || (F->c_622 == 35)) || (F->c_622 == 43)) || (F->c_622 == 45)) || (F->c_622 == 42)) || (F->c_622 == 47)) || (F->c_622 == 38)) || (F->c_622 == 61)) || (F->c_622 == 60)) || (F->c_622 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_622); b_; }), ((rt_int)0LL));
F->i_619 = rt_add(F->i_619, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_634 = rt_str_new(rt_sizeln());
rt_readln(&F->line_634);
g_src_line_547 = rt_add(g_src_line_547, ((rt_int)1LL));
f_lex_line_44(&F->line_634);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P518 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_635 = NULL;
{ R519 *cell636 = rt_alloc(sizeof(R519));
(*cell636).name = NULL;
(*cell636).tag = NULL;
(*cell636).a = NULL;
(*cell636).b = NULL;
(*cell636).c = NULL;
(*cell636).d = NULL;
(*cell636).e = NULL;
(*cell636).next = NULL;
F->x_635 = cell636;
}
(*(P518)rt_nil_check(F->x_635)).kind = F->kind_46;
(*(P518)rt_nil_check(F->x_635)).line = F->line_47;
F->result_ = F->x_635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_52(P518 *head_49, P518 *tail_50, P518 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return;
}

static rt_int f_list_len_54(P518 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_53 = l_53;
F->n_637 = ((rt_int)0LL);
F->p_638 = NULL;
F->p_638 = F->l_53;
while ((F->p_638 != NULL)) {
F->n_637 = rt_add(F->n_637, ((rt_int)1LL));
F->p_638 = (*(P518)rt_nil_check(F->p_638)).next;
}
F->result_ = F->n_637;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).line;
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
F->result_ = (((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), (*F->w_56)));
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
F->result_ = (((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), (*F->w_58)));
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
F->result_ = ((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind == F->k_60);
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
if ((rt_add(g_tpos_546, F->k_62) > g_ntoks_545)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_add(g_tpos_546, F->k_62), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P513 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_64 = k_64;
if ((rt_add(g_tpos_546, F->k_64) > g_ntoks_545)) {
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_ntoks_545, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
}
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_add(g_tpos_546, F->k_64), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
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
f_fail_23((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static int f_accept_op_71(rstr *w_70) {
  struct f_accept_op_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
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
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P513 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(rt_sub(g_tpos_546, ((rt_int)1LL)), (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_639 = NULL;
F->x_639 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P518)rt_nil_check(F->x_639)).name = f_expect_id_76();
F->result_ = F->x_639;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_640 = NULL;
F->tail_641 = NULL;
f_append_52(&F->head_640, &F->tail_641, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_640, &F->tail_641, f_name_node_77());
}
F->result_ = F->head_640;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_642 = f_cur_line_55();
F->x_643 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->x_643 = f_nn_48(((rt_int)81LL), F->line_642);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P518)rt_nil_check(F->x_643)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_643;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_644 = rt_str_copy((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (rt_str_eq(F->w_644, rt_str("ARRAY", 5))) {
F->x_643 = f_nn_48(((rt_int)74LL), F->line_642);
{
F->head_645 = NULL;
F->tail_646 = NULL;
f_append_52(&F->head_645, &F->tail_646, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_645, &F->tail_646, f_p_subtype_79());
}
(*(P518)rt_nil_check(F->x_643)).a = F->head_645;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P518)rt_nil_check(F->x_643)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_644, rt_str("RECORD", 6)) || rt_str_eq(F->w_644, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_644, rt_str("RECORD", 6))) {
F->x_643 = f_nn_48(((rt_int)75LL), F->line_642);
} else {
F->x_643 = f_nn_48(((rt_int)76LL), F->line_642);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_647 = NULL;
F->tail_648 = NULL;
F->more_649 = 1;
while (F->more_649) {
F->names_650 = NULL;
F->names_650 = f_id_list_78();
F->st_651 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_651 = f_p_subtype_79();
while ((F->names_650 != NULL)) {
F->cmp_652 = NULL;
F->cmp_652 = f_nn_48(((rt_int)63LL), (*(P518)rt_nil_check(F->names_650)).line);
(*(P518)rt_nil_check(F->cmp_652)).name = (*(P518)rt_nil_check(F->names_650)).name;
(*(P518)rt_nil_check(F->cmp_652)).a = F->st_651;
f_append_52(&F->head_647, &F->tail_648, F->cmp_652);
F->names_650 = (*(P518)rt_nil_check(F->names_650)).next;
}
F->more_649 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_643)).a = F->head_647;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_644, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_643)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_644, rt_str("ENUM", 4))) {
F->x_643 = f_nn_48(((rt_int)72LL), F->line_642);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_653 = NULL;
F->tail_654 = NULL;
F->more_655 = 1;
while (F->more_655) {
F->lit_656 = NULL;
F->lit_656 = f_nn_48(((rt_int)4LL), F->line_642);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P518)rt_nil_check(F->lit_656)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
f_append_52(&F->head_653, &F->tail_654, F->lit_656);
F->more_655 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_643)).a = F->head_653;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_643)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_643)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_644, rt_str("STRING", 6)) || rt_str_eq(F->w_644, rt_str("SET", 3))) || rt_str_eq(F->w_644, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_644, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_644, rt_str("STRING", 6))) {
F->x_643 = f_nn_48(((rt_int)73LL), F->line_642);
} else if (rt_str_eq(F->w_644, rt_str("SET", 3))) {
F->x_643 = f_nn_48(((rt_int)77LL), F->line_642);
} else if (rt_str_eq(F->w_644, rt_str("MAILBOX", 7))) {
F->x_643 = f_nn_48(((rt_int)78LL), F->line_642);
} else {
F->x_643 = f_nn_48(((rt_int)79LL), F->line_642);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P518)rt_nil_check(F->x_643)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_643)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_644, rt_str("INT", 3))) {
F->x_643 = f_nn_48(((rt_int)70LL), F->line_642);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_643)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_643)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_644, rt_str("FLOAT", 5))) {
F->x_643 = f_nn_48(((rt_int)71LL), F->line_642);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_643)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_643)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P518)rt_nil_check(F->x_643)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_643 = f_nn_48(((rt_int)80LL), F->line_642);
(*(P518)rt_nil_check(F->x_643)).name = f_mk_3(&F->w_644);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_643)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_643)).b = f_actual_params_80();
(*(P518)rt_nil_check(F->x_643)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_643;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_657 = NULL;
F->tail_658 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_657, &F->tail_658, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_657, &F->tail_658, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_657;
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

static P518 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_659 = NULL;
F->tail_660 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_661 = 1;
while (F->more_661) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))))) {
f_append_52(&F->head_659, &F->tail_660, f_p_subtype_79());
} else {
f_append_52(&F->head_659, &F->tail_660, f_expr_89());
}
F->more_661 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_659;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_binop_88(P513 op_84, P518 l_85, P518 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_662 = NULL;
F->x_662 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P518)rt_nil_check(F->x_662)).name = F->op_84;
(*(P518)rt_nil_check(F->x_662)).a = F->l_85;
(*(P518)rt_nil_check(F->x_662)).b = F->r_86;
F->result_ = F->x_662;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_663 = NULL;
F->l_663 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_664 = NULL;
F->op_664 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_665 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_663 = f_binop_88(F->op_664, F->l_663, f_expr_and_90(), F->line_665);
}
F->result_ = F->l_663;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_666 = NULL;
F->l_666 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_667 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_666 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_666, f_expr_not_91(), F->line_667);
}
F->result_ = F->l_666;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_668 = NULL;
F->x_668 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_668)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P518)rt_nil_check(F->x_668)).a = f_expr_not_91();
F->result_ = F->x_668;
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

static P518 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_669 = NULL;
F->l_669 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s))))) {
F->op_670 = NULL;
F->op_670 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_671 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_669 = f_binop_88(F->op_670, F->l_669, f_expr_add_95(), F->line_671);
}
F->result_ = F->l_669;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_672 = NULL;
F->l_672 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_673 = NULL;
F->op_673 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_674 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_672 = f_binop_88(F->op_673, F->l_672, f_expr_mul_96(), F->line_674);
}
F->result_ = F->l_672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_675 = NULL;
F->l_675 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_676 = NULL;
F->op_676 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
F->line_677 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_675 = f_binop_88(F->op_676, F->l_675, f_expr_pow_97(), F->line_677);
}
F->result_ = F->l_675;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_678 = NULL;
F->l_678 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_679 = f_cur_line_55();
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->l_678 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_678, f_expr_prefix_98(), F->line_679);
}
F->result_ = F->l_678;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_680 = NULL;
F->x_680 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P518)rt_nil_check(F->x_680)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_680)).a = f_expr_prefix_98();
F->result_ = F->x_680;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_681 = NULL;
F->p_681 = f_primary_100();
while (1) {
F->line_682 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_683 = NULL;
F->x_683 = f_nn_48(((rt_int)10LL), F->line_682);
F->head_684 = NULL;
F->tail_685 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_686 = 1;
while (F->more_686) {
F->lo_687 = NULL;
F->lo_687 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_688 = NULL;
F->r_688 = f_nn_48(((rt_int)16LL), F->line_682);
(*(P518)rt_nil_check(F->r_688)).a = F->lo_687;
(*(P518)rt_nil_check(F->r_688)).b = f_expr_89();
f_append_52(&F->head_684, &F->tail_685, F->r_688);
} else {
f_append_52(&F->head_684, &F->tail_685, F->lo_687);
}
F->more_686 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P518)rt_nil_check(F->x_683)).a = F->p_681;
(*(P518)rt_nil_check(F->x_683)).b = F->head_684;
F->p_681 = F->x_683;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_689 = NULL;
F->x_689 = f_nn_48(((rt_int)11LL), F->line_682);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_689)).a = F->p_681;
(*(P518)rt_nil_check(F->x_689)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->p_681 = F->x_689;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P518)rt_nil_check(F->p_681)).kind == ((rt_int)7LL)))) {
F->x_690 = NULL;
F->x_690 = f_nn_48(((rt_int)12LL), F->line_682);
(*(P518)rt_nil_check(F->x_690)).a = F->p_681;
(*(P518)rt_nil_check(F->x_690)).b = f_actual_tt_83();
F->p_681 = F->x_690;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_691 = NULL;
F->x_691 = f_nn_48(((rt_int)13LL), F->line_682);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_691)).a = F->p_681;
(*(P518)rt_nil_check(F->x_691)).b = f_p_subtype_79();
F->p_681 = F->x_691;
} else {
F->result_ = F->p_681;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_692 = f_cur_line_55();
F->x_693 = NULL;
F->k_694 = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).kind;
if ((F->k_694 == ((rt_int)4LL))) {
F->x_693 = f_nn_48(((rt_int)1LL), F->line_692);
(*(P518)rt_nil_check(F->x_693)).ival = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).ival;
(*(P518)rt_nil_check(F->x_693)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_693;
goto ret_;
}
if ((((F->k_694 == ((rt_int)5LL)) || (F->k_694 == ((rt_int)7LL))) || (F->k_694 == ((rt_int)6LL)))) {
if ((F->k_694 == ((rt_int)5LL))) {
F->x_693 = f_nn_48(((rt_int)2LL), F->line_692);
} else if ((F->k_694 == ((rt_int)7LL))) {
F->x_693 = f_nn_48(((rt_int)3LL), F->line_692);
} else {
F->x_693 = f_nn_48(((rt_int)4LL), F->line_692);
}
(*(P518)rt_nil_check(F->x_693)).name = (*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_693;
goto ret_;
}
if ((F->k_694 == ((rt_int)1LL))) {
F->w_695 = rt_str_copy((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
if ((rt_str_eq(F->w_695, rt_str("TRUE", 4)) || rt_str_eq(F->w_695, rt_str("FALSE", 5)))) {
F->x_693 = f_nn_48(((rt_int)5LL), F->line_692);
if (rt_str_eq(F->w_695, rt_str("TRUE", 4))) {
(*(P518)rt_nil_check(F->x_693)).ival = ((rt_int)1LL);
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = F->x_693;
goto ret_;
}
if (rt_str_eq(F->w_695, rt_str("NIL", 3))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_692);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_693 = f_nn_48(((rt_int)17LL), F->line_692);
(*(P518)rt_nil_check(F->x_693)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_693;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_696 = NULL;
F->tail_697 = NULL;
F->x_693 = f_nn_48(((rt_int)14LL), F->line_692);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_698 = 1;
while (F->more_698) {
f_append_52(&F->head_696, &F->tail_697, f_constructor_item_101());
F->more_698 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P518)rt_nil_check(F->x_693)).a = F->head_696;
F->result_ = F->x_693;
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

static P518 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_699 = f_cur_line_55();
F->it_700 = NULL;
F->it_700 = f_nn_48(((rt_int)15LL), F->line_699);
F->first_701 = NULL;
F->first_701 = f_expr_89();
F->keys_702 = NULL;
F->ktail_703 = NULL;
F->lab_704 = NULL;
F->lab_704 = f_nn_48(((rt_int)61LL), F->line_699);
(*(P518)rt_nil_check(F->lab_704)).a = F->first_701;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->lab_704)).b = f_expr_89();
f_append_52(&F->keys_702, &F->ktail_703, F->lab_704);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_702, &F->ktail_703, F->lab_704);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_705 = g_tpos_546;
F->more_706 = NULL;
F->tail2_707 = NULL;
F->ok_708 = 0;
F->go_709 = 1;
while ((F->go_709 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_710 = NULL;
F->l2_710 = f_nn_48(((rt_int)61LL), F->line_699);
(*(P518)rt_nil_check(F->l2_710)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->l2_710)).b = f_expr_89();
}
f_append_52(&F->more_706, &F->tail2_707, F->l2_710);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_708 = 1;
F->go_709 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_709 = 0;
}
}
if (F->ok_708) {
f_append_52(&F->keys_702, &F->ktail_703, F->lab_704);
f_append_52(&F->keys_702, &F->ktail_703, F->more_706);
} else {
g_tpos_546 = F->save_705;
}
}
if ((F->keys_702 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P518)rt_nil_check(F->it_700)).a = F->keys_702;
(*(P518)rt_nil_check(F->it_700)).b = f_expr_89();
} else {
(*(P518)rt_nil_check(F->it_700)).b = F->first_701;
}
F->result_ = F->it_700;
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

static P518 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_711 = NULL;
F->tail_712 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_711, &F->tail_712, f_body_element_104());
}
F->result_ = F->head_711;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_713 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_713 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_713 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_713)).a = f_expr_89();
} else {
F->x_713 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_713;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_714 = f_cur_line_55();
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
F->head_715 = NULL;
F->tail_716 = NULL;
F->names_717 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->names_717 = f_id_list_78();
while ((F->names_717 != NULL)) {
F->x_718 = NULL;
F->x_718 = f_nn_48(((rt_int)49LL), F->line_714);
(*(P518)rt_nil_check(F->x_718)).name = (*(P518)rt_nil_check(F->names_717)).name;
f_append_52(&F->head_715, &F->tail_716, F->x_718);
F->names_717 = (*(P518)rt_nil_check(F->names_717)).next;
}
F->result_ = F->head_715;
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

static P518 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_719 = f_cur_line_55();
F->is_var_720 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_721 = NULL;
F->st_722 = NULL;
F->init_723 = NULL;
F->loc_724 = NULL;
F->loc_kind_725 = ((rt_int)0LL);
F->head_726 = NULL;
F->tail_727 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->names_721 = f_id_list_78();
if (F->is_var_720) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_722 = f_p_subtype_79();
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("INTERRUPT", 9)))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->loc_kind_725 = ((rt_int)1LL);
} else {
F->loc_kind_725 = ((rt_int)2LL);
}
F->loc_724 = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_723 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_722 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_723 = f_expr_89();
}
while ((F->names_721 != NULL)) {
F->x_728 = NULL;
if (F->is_var_720) {
F->x_728 = f_nn_48(((rt_int)40LL), F->line_719);
} else {
F->x_728 = f_nn_48(((rt_int)41LL), F->line_719);
}
(*(P518)rt_nil_check(F->x_728)).name = (*(P518)rt_nil_check(F->names_721)).name;
(*(P518)rt_nil_check(F->x_728)).a = F->st_722;
(*(P518)rt_nil_check(F->x_728)).b = F->init_723;
(*(P518)rt_nil_check(F->x_728)).c = F->loc_724;
(*(P518)rt_nil_check(F->x_728)).ival = F->loc_kind_725;
f_append_52(&F->head_726, &F->tail_727, F->x_728);
F->names_721 = (*(P518)rt_nil_check(F->names_721)).next;
}
F->result_ = F->head_726;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_729 = NULL;
F->x_729 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_729)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_729)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P518)rt_nil_check(F->x_729)).a = f_p_subtype_79();
F->result_ = F->x_729;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_730 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_730 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_730 = rt_add(F->depth_730, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_730 = rt_sub(F->depth_730, ((rt_int)1LL));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P518 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_731 = f_cur_line_55();
F->name_732 = NULL;
F->params_733 = NULL;
F->x_734 = NULL;
F->tts_735 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->name_732 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_735 = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_733 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->x_734 = f_nn_48(((rt_int)44LL), F->line_731);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_734)).b = f_formal_params_112();
}
} else {
F->x_734 = f_nn_48(((rt_int)43LL), F->line_731);
(*(P518)rt_nil_check(F->x_734)).b = F->params_733;
}
(*(P518)rt_nil_check(F->x_734)).name = F->name_732;
(*(P518)rt_nil_check(F->x_734)).e = F->tts_735;
(*(P518)rt_nil_check(F->x_734)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_734;
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

static P518 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_736 = NULL;
F->tail_737 = NULL;
F->more_738 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_738) {
F->mode_739 = ((rt_int)1LL);
F->names_740 = NULL;
F->ntail_741 = NULL;
F->st_742 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_739 = f_mode_of_111(&(*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)));
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
f_append_52(&F->names_740, &F->ntail_741, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
f_append_52(&F->names_740, &F->ntail_741, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_742 = f_p_subtype_79();
while ((F->names_740 != NULL)) {
F->p_743 = NULL;
F->p_743 = f_nn_48(((rt_int)52LL), (*(P518)rt_nil_check(F->names_740)).line);
(*(P518)rt_nil_check(F->p_743)).name = (*(P518)rt_nil_check(F->names_740)).name;
(*(P518)rt_nil_check(F->p_743)).ival = F->mode_739;
(*(P518)rt_nil_check(F->p_743)).a = F->st_742;
f_append_52(&F->head_736, &F->tail_737, F->p_743);
F->names_740 = (*(P518)rt_nil_check(F->names_740)).next;
}
F->more_738 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_736;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_114(P518 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_113 = owner_113;
F->head_744 = NULL;
F->tail_745 = NULL;
F->more_746 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->owner_113)).flag = rt_add((*(P518)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_746) {
F->ro_747 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_748 = NULL;
F->x_748 = f_name_node_77();
if (F->ro_747) {
(*(P518)rt_nil_check(F->x_748)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_744, &F->tail_745, F->x_748);
F->more_746 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->owner_113)).d = F->head_744;
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

static P513 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static P518 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_749 = f_cur_line_55();
F->x_750 = NULL;
F->is_abn_751 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_752 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_752) {
F->x_750 = f_nn_48(((rt_int)46LL), F->line_749);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_750 = f_nn_48(((rt_int)45LL), F->line_749);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (F->is_abn_751) {
(*(P518)rt_nil_check(F->x_750)).flag = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->x_750)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_750)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_750)).a = f_formal_params_112();
}
if (F->is_func_752) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_750)).b = f_p_subtype_79();
}
F->dummy_753 = f_imports_list_114(F->x_750);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_750)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_752) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P513)rt_nil_check(f_definable_name_117())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_750)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_750)).name))); b_; }));
}
F->result_ = F->x_750;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_754 = NULL;
F->x_754 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_754)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_754)).b = f_formal_params_112();
}
F->dummy_755 = f_imports_list_114(F->x_754);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_754)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P518)rt_nil_check(F->x_754)).ival = ((rt_int)0LL);
} else {
F->head_756 = NULL;
F->tail_757 = NULL;
F->more_758 = 1;
while (F->more_758) {
F->n_759 = NULL;
F->n_759 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P518)rt_nil_check(F->n_759)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->n_759)).name = f_definable_name_117();
f_append_52(&F->head_756, &F->tail_757, F->n_759);
F->more_758 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_754)).a = F->head_756;
(*(P518)rt_nil_check(F->x_754)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_754)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_754)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_754;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_760 = NULL;
F->tail_761 = NULL;
F->more_762 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_762) {
f_append_52(&F->head_760, &F->tail_761, f_name_node_77());
F->more_762 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_760;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_763 = NULL;
F->x_763 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_764 = NULL;
F->tail_765 = NULL;
F->more_766 = 1;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while (F->more_766) {
F->names_767 = NULL;
F->names_767 = f_id_list_78();
F->kind_768 = ((rt_int)6LL);
F->st_769 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_768 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_768 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_768 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_768 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_768 = ((rt_int)5LL);
} else {
F->st_769 = f_p_subtype_79();
}
if (((F->kind_768 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P518)rt_nil_check(F->x_763)).e = f_actual_params_80();
} else if (((F->kind_768 >= ((rt_int)3LL)) && (F->kind_768 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_769 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (((F->kind_768 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_769 = f_p_subtype_79();
}
}
while ((F->names_767 != NULL)) {
F->p_770 = NULL;
F->p_770 = f_nn_48(((rt_int)52LL), (*(P518)rt_nil_check(F->names_767)).line);
(*(P518)rt_nil_check(F->p_770)).name = (*(P518)rt_nil_check(F->names_767)).name;
(*(P518)rt_nil_check(F->p_770)).ival = F->kind_768;
(*(P518)rt_nil_check(F->p_770)).a = F->st_769;
f_append_52(&F->head_764, &F->tail_765, F->p_770);
F->names_767 = (*(P518)rt_nil_check(F->names_767)).next;
}
F->more_766 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_766 = 1;
while (F->more_766) {
F->nm_771 = NULL;
F->nm_771 = f_definable_name_117();
F->st_772 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_772 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_772 = f_p_subtype_79();
}
F->more_766 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P518)rt_nil_check(F->x_763)).a = F->head_764;
(*(P518)rt_nil_check(F->x_763)).b = f_declaration_105();
(*(P518)rt_nil_check(F->x_763)).name = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->x_763)).b)).name;
F->result_ = F->x_763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_773 = NULL;
F->x_773 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_773)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_773)).a = f_formal_params_112();
}
F->dummy_774 = f_imports_list_114(F->x_773);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P518)rt_nil_check(F->x_773)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_773)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_773)).name))); b_; }));
}
F->result_ = F->x_773;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_775 = NULL;
F->x_775 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_775)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_776 = NULL;
F->tail_777 = NULL;
F->more_778 = 1;
while (F->more_778) {
F->n_779 = NULL;
F->n_779 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P518)rt_nil_check(F->n_779)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->n_779)).name = f_definable_name_117();
f_append_52(&F->head_776, &F->tail_777, F->n_779);
F->more_778 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_775)).a = F->head_776;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_775)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P518)rt_nil_check(F->x_775)).flag = rt_add((*(P518)rt_nil_check(F->x_775)).flag, ((rt_int)2LL));
}
(*(P518)rt_nil_check(F->x_775)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_775)).b = f_actual_params_80();
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_780 = NULL;
F->tail_781 = NULL;
F->more_782 = 1;
while (F->more_782) {
F->n_783 = NULL;
F->n_783 = f_nn_48(((rt_int)7LL), f_cur_line_55());
F->tgt_784 = NULL;
F->tgt_784 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P518)rt_nil_check(F->n_783)).name = f_definable_name_117();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P518)rt_nil_check(F->tgt_784)).name = f_definable_name_117();
(*(P518)rt_nil_check(F->n_783)).a = F->tgt_784;
f_append_52(&F->head_780, &F->tail_781, F->n_783);
F->more_782 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P518)rt_nil_check(F->x_775)).c = F->head_780;
}
F->result_ = F->x_775;
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

static P518 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_785 = NULL;
F->ltail_786 = NULL;
F->match_787 = NULL;
F->s_788 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P513)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_785, &F->ltail_786, f_name_node_77());
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P513)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_787 = f_expect_id_76();
}
F->s_788 = f_unlabeled_statement_127();
if ((F->match_787 != NULL)) {
if (((((((((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)22LL)) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)23LL))) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)24LL))) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)25LL))) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)26LL))) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)35LL))) && ((*(P518)rt_nil_check(F->s_788)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P513)rt_nil_check(f_expect_id_76())), (*(P513)rt_nil_check(F->match_787))))) {
f_fail_23((*(P518)rt_nil_check(F->s_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P513)rt_nil_check(F->match_787))); b_; }));
}
(*(P518)rt_nil_check(F->s_788)).tag = F->match_787;
}
if ((F->labels_785 != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_788;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_789 = f_cur_line_55();
F->x_790 = NULL;
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
F->x_790 = f_nn_48(((rt_int)25LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_790 = f_nn_48(((rt_int)27LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).name = f_expect_id_76();
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_790 = f_nn_48(((rt_int)28LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P518)rt_nil_check(F->x_790)).a = f_expr_89();
}
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_790 = f_nn_48(((rt_int)30LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).name = f_expect_id_76();
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_789);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_790 = f_nn_48(((rt_int)34LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_790)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_790)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P518)rt_nil_check(F->x_790)).a = f_postfix_99();
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_791 = NULL;
F->tail_792 = NULL;
F->x_790 = f_nn_48(((rt_int)35LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_793 = NULL;
F->itail_794 = NULL;
F->more_795 = 1;
while (F->more_795) {
f_append_52(&F->invs_793, &F->itail_794, f_postfix_99());
F->more_795 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_791, &F->tail_792, f_arm_131(F->invs_793, f_body_103(), F->line_789));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P518)rt_nil_check(F->x_790)).a = F->head_791;
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_790 = f_nn_48(((rt_int)36LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P518)rt_nil_check(F->x_790)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_790;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_790 = f_nn_48(((rt_int)32LL), F->line_789);
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_790)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P513)rt_nil_check((*(P514)rt_nil_check((*(P516)rt_nil_check(g_toks_544)).p[rt_index(g_tpos_546, (*(P516)rt_nil_check(g_toks_544)).lo, (*(P516)rt_nil_check(g_toks_544)).hi) - (*(P516)rt_nil_check(g_toks_544)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P518)rt_nil_check(F->x_790)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P518)rt_nil_check(F->x_790)).c = f_expr_89();
}
F->result_ = F->x_790;
goto ret_;
}
{
F->target_796 = NULL;
F->target_796 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_790 = f_nn_48(((rt_int)20LL), F->line_789);
(*(P518)rt_nil_check(F->x_790)).a = F->target_796;
(*(P518)rt_nil_check(F->x_790)).b = f_expr_89();
} else {
F->x_790 = f_nn_48(((rt_int)21LL), F->line_789);
(*(P518)rt_nil_check(F->x_790)).a = F->target_796;
}
}
F->result_ = F->x_790;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_arm_131(P518 cond_128, P518 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_797 = NULL;
F->x_797 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P518)rt_nil_check(F->x_797)).a = F->cond_128;
(*(P518)rt_nil_check(F->x_797)).b = F->b_129;
F->result_ = F->x_797;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_798 = NULL;
F->x_798 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_799 = NULL;
F->tail_800 = NULL;
F->cond_801 = NULL;
F->go_802 = 1;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
F->cond_801 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_799, &F->tail_800, f_arm_131(F->cond_801, f_body_103(), (*(P518)rt_nil_check(F->x_798)).line));
while (F->go_802) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_801 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_799, &F->tail_800, f_arm_131(F->cond_801, f_body_103(), (*(P518)rt_nil_check(F->x_798)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P518)rt_nil_check(F->x_798)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_798)).b = f_body_103();
} else {
F->go_802 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P518)rt_nil_check(F->x_798)).a = F->head_799;
F->result_ = F->x_798;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_803 = NULL;
F->x_803 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_804 = NULL;
F->tail_805 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_803)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_806 = NULL;
F->ltail_807 = NULL;
F->more_808 = 1;
while (F->more_808) {
F->l_809 = NULL;
F->l_809 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P518)rt_nil_check(F->l_809)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P518)rt_nil_check(F->l_809)).b = f_expr_89();
}
f_append_52(&F->labs_806, &F->ltail_807, F->l_809);
F->more_808 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_804, &F->tail_805, f_arm_131(F->labs_806, f_body_103(), (*(P518)rt_nil_check(F->x_803)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_803)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_803)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P518)rt_nil_check(F->x_803)).b = F->head_804;
F->result_ = F->x_803;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_810 = NULL;
F->x_810 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P518)rt_nil_check(F->x_810)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_810)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P518)rt_nil_check(F->x_810)).ival = ((rt_int)1LL);
}
(*(P518)rt_nil_check(F->x_810)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P518)rt_nil_check(F->x_810)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P518)rt_nil_check(F->x_810)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_810;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_811 = NULL;
F->x_811 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_812 = NULL;
F->tail_813 = NULL;
g_tpos_546 = rt_add(g_tpos_546, ((rt_int)1LL));
(*(P518)rt_nil_check(F->x_811)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_814 = NULL;
F->h_814 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P518)rt_nil_check(F->h_814)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->h_814)).b = f_body_103();
f_append_52(&F->head_812, &F->tail_813, F->h_814);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P518)rt_nil_check(F->x_811)).flag = ((rt_int)1LL);
(*(P518)rt_nil_check(F->x_811)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P518)rt_nil_check(F->x_811)).b = F->head_812;
F->result_ = F->x_811;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_815 = NULL;
F->tail_816 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_815, &F->tail_816, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_815;
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
F->h_817 = ((rt_int)0LL);
{ rt_int lo819 = ((rt_int)1LL), hi820 = ((*F->s_137)).len;
for (rt_int it821 = lo819; it821 <= hi820; it821++) {
F->i_818 = it821;
F->h_817 = rt_mod(rt_add(rt_mul(F->h_817, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_818)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_817;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_139 = name_139;
F->y_822 = NULL;
F->y_822 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_822 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_822)).name)), (*F->name_139))) {
F->result_ = F->y_822;
goto ret_;
}
F->y_822 = (*(P526)rt_nil_check(F->y_822)).chain;
}
if ((g_genv_549 != NULL)) {
F->y_822 = (*(P530)rt_nil_check(g_genv_549)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P530)rt_nil_check(g_genv_549)).lo, (*(P530)rt_nil_check(g_genv_549)).hi) - (*(P530)rt_nil_check(g_genv_549)).lo];
while ((F->y_822 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_822)).name)), (*F->name_139))) {
F->result_ = F->y_822;
goto ret_;
}
F->y_822 = (*(P526)rt_nil_check(F->y_822)).chain;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_lookup_decl_142(P518 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_141 = d_141;
F->y_823 = NULL;
F->y_823 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_141)).name))), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_823 != NULL)) {
if (((*(P526)rt_nil_check(F->y_823)).decl == F->d_141)) {
F->result_ = F->y_823;
goto ret_;
}
F->y_823 = (*(P526)rt_nil_check(F->y_823)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_145(P526 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_824 = f_hash_138(&(*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)));
F->z_825 = NULL;
F->z_825 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_824, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->z_825 != NULL)) {
if (((((*(P526)rt_nil_check(F->z_825)).depth == g_depth_551) && rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_825)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_825)) && ((*(P526)rt_nil_check(F->z_825)).kind == (*(P526)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P526)rt_nil_check(F->y_143)).params, (*(P526)rt_nil_check(F->z_825)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_825 = (*(P526)rt_nil_check(F->z_825)).chain;
}
(*(P526)rt_nil_check(F->y_143)).depth = g_depth_551;
(*(P526)rt_nil_check(F->y_143)).chain = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_824, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
(*(P530)rt_nil_check(g_table_548)).p[rt_index(F->h_824, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo] = F->y_143;
(*(P526)rt_nil_check(F->y_143)).stack = g_scope_stack_552;
g_scope_stack_552 = F->y_143;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_147(P526 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_146 = y_146;
F->result_ = ((((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P526)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_150(P528 a_148, P528 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_826 = NULL;
F->x_826 = F->a_148;
F->y_827 = NULL;
F->y_827 = F->b_149;
while (((F->x_826 != NULL) && (F->y_827 != NULL))) {
if ((!f_same_164((*(P528)rt_nil_check(F->x_826)).t, (*(P528)rt_nil_check(F->y_827)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_826 = (*(P528)rt_nil_check(F->x_826)).next;
F->y_827 = (*(P528)rt_nil_check(F->y_827)).next;
}
F->result_ = ((F->x_826 == NULL) && (F->y_827 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_551 = rt_add(g_depth_551, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_552 != NULL) && ((*(P526)rt_nil_check(g_scope_stack_552)).depth == g_depth_551))) {
(*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*(P513)rt_nil_check((*(P526)rt_nil_check(g_scope_stack_552)).name))), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo] = (*(P526)rt_nil_check(g_scope_stack_552)).chain;
g_scope_stack_552 = (*(P526)rt_nil_check(g_scope_stack_552)).stack;
}
g_depth_551 = rt_sub(g_depth_551, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P526 f_new_sym_155(rt_int kind_153, P513 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_828 = NULL;
{ R527 *cell829 = rt_alloc(sizeof(R527));
(*cell829).name = NULL;
(*cell829).t = NULL;
(*cell829).c = NULL;
(*cell829).access = NULL;
(*cell829).cname = NULL;
(*cell829).st = NULL;
(*cell829).decl = NULL;
(*cell829).params = NULL;
(*cell829).result = NULL;
(*cell829).members = NULL;
(*cell829).mnext = NULL;
(*cell829).binds = NULL;
(*cell829).insts = NULL;
(*cell829).env = NULL;
(*cell829).chain = NULL;
(*cell829).stack = NULL;
F->y_828 = cell829;
}
(*(P526)rt_nil_check(F->y_828)).kind = F->kind_153;
(*(P526)rt_nil_check(F->y_828)).name = F->name_154;
F->result_ = F->y_828;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_156 = kind_156;
F->t_830 = NULL;
{ R523 *cell831 = rt_alloc(sizeof(R523));
(*cell831).name = NULL;
(*cell831).lits = NULL;
(*cell831).elem = NULL;
(*cell831).idx = NULL;
(*cell831).idx2 = NULL;
(*cell831).elemcons = NULL;
(*cell831).elemst = NULL;
(*cell831).under = NULL;
(*cell831).tparams = NULL;
(*cell831).ocap = NULL;
(*cell831).fields = NULL;
(*cell831).target = NULL;
(*cell831).decl = NULL;
(*cell831).cname = NULL;
(*cell831).initp = NULL;
(*cell831).tpsyms = NULL;
(*cell831).gen = NULL;
(*cell831).gbinds = NULL;
(*cell831).next = NULL;
F->t_830 = cell831;
}
(*(P522)rt_nil_check(F->t_830)).kind = F->kind_156;
F->result_ = F->t_830;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P520 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_832 = NULL;
{ R521 *cell833 = rt_alloc(sizeof(R521));
(*cell833).lo = NULL;
(*cell833).hi = NULL;
(*cell833).lo2 = NULL;
(*cell833).hi2 = NULL;
(*cell833).slen = NULL;
(*cell833).args = NULL;
F->c_832 = cell833;
}
F->result_ = F->c_832;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_161(P518 a_159, P518 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_834 = NULL;
F->x_834 = F->a_159;
F->y_835 = NULL;
F->y_835 = F->b_160;
while (((F->x_834 != NULL) && (F->y_835 != NULL))) {
if ((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->x_834)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->y_835)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_834 = (*(P518)rt_nil_check(F->x_834)).next;
F->y_835 = (*(P518)rt_nil_check(F->y_835)).next;
}
F->result_ = ((F->x_834 == NULL) && (F->y_835 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_164(P522 a_162, P522 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
F->f_836 = NULL;
F->f_836 = (*(P522)rt_nil_check(F->a_162)).fields;
F->g_837 = NULL;
F->g_837 = (*(P522)rt_nil_check(F->b_163)).fields;
while (((F->f_836 != NULL) && (F->g_837 != NULL))) {
if (((!rt_str_eq((*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_836)).name)), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->g_837)).name)))) || (!f_same_164((*(P524)rt_nil_check(F->f_836)).t, (*(P524)rt_nil_check(F->g_837)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_836 = (*(P524)rt_nil_check(F->f_836)).next;
F->g_837 = (*(P524)rt_nil_check(F->g_837)).next;
}
F->result_ = ((F->f_836 == NULL) && (F->g_837 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_base_of_166(P522 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P522)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P522)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P522)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P520 f_base_cons_169(P522 t_167, P520 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_171(P522 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_170 = t_170;
{ rt_int sel838 = (*(P522)rt_nil_check(F->t_170)).kind;
if (0 || (sel838 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel838 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel838 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel838 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel838 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel838 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel838 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel838 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel838 == ((rt_int)11LL))) {
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

static void f_check_type_175(P522 got_172, P522 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return;
}

static rstr f_ctype_177(P522 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_176 = t_176;
{ rt_int sel839 = (*(P522)rt_nil_check(F->t_176)).kind;
if (0 || (sel839 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel839 == ((rt_int)2LL)) || (sel839 == ((rt_int)4LL)) || (sel839 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel839 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel839 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel839 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel839 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel839 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel839 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel839 == ((rt_int)16LL))) {
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
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_179(P522 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_178 = t_178;
F->f_840 = NULL;
F->f_840 = (*(P522)rt_nil_check(F->t_178)).fields;
F->s_841 = NULL;
F->s_841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_840 != NULL)) {
F->s_841 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->s_841)), f_ctype_177((*(P524)rt_nil_check(F->f_840)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_840)).name)))), rt_str("; ", 2)); b_; }));
F->f_840 = (*(P524)rt_nil_check(F->f_840)).next;
}
F->result_ = (*(P513)rt_nil_check(F->s_841));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_181(P522 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_180 = t_180;
F->u_842 = NULL;
F->u_842 = g_all_types_553;
if ((((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P522)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_274(F->t_180);
if (((*(P522)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P522)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_842 != NULL)) {
if ((((*(P522)rt_nil_check(F->u_842)).kind == (*(P522)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_842, F->t_180))) {
(*(P522)rt_nil_check(F->t_180)).cname = (*(P522)rt_nil_check(F->u_842)).cname;
goto ret_;
}
F->u_842 = (*(P522)rt_nil_check(F->u_842)).next;
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
F->target_843 = NULL;
F->target_843 = (*(P522)rt_nil_check(F->t_180)).target;
if (((*(P522)rt_nil_check(F->target_843)).kind == ((rt_int)7LL))) {
if (((*(P522)rt_nil_check(F->target_843)).cname == NULL)) {
(*(P522)rt_nil_check(F->target_843)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P522)rt_nil_check(F->target_843)).next = g_all_types_553;
g_all_types_553 = F->target_843;
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_843)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_843)).cname))), rt_str(";", 1)); b_; }));
(*(P522)rt_nil_check(F->target_843)).forward = 1;
}
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->target_843)).cname))), rt_str(" *", 2)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_843)), rt_str(" *", 2)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P522)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P522)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_844 = NULL;
F->p_844 = (*(P522)rt_nil_check(F->t_180)).tparams;
F->fs_845 = NULL;
F->fs_845 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_844 != NULL)) {
F->fs_845 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->fs_845)), f_ctype_177(f_tparam_type_210(F->t_180, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_844)).name))))), rt_str(" p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_844)).name)))), rt_str("; ", 2)); b_; }));
F->p_844 = (*(P518)rt_nil_check(F->p_844)).next;
}
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P513)rt_nil_check(F->fs_845))), f_ctype_177((*(P522)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P522)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_555, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->names_846 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_847 = NULL;
F->tail_848 = NULL;
F->start_849 = ((rt_int)1LL);
{ rt_int lo851 = ((rt_int)1LL), hi852 = (F->names_846).len;
for (rt_int it853 = lo851; it853 <= hi852; it853++) {
F->i_850 = it853;
if ((rt_str_get(F->names_846, F->i_850) == 32)) {
F->lit_854 = NULL;
F->lit_854 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P518)rt_nil_check(F->lit_854)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_846, F->start_849, rt_sub(F->i_850, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_847, &F->tail_848, F->lit_854);
F->start_849 = rt_add(F->i_850, ((rt_int)1LL));
}
}
}
g_ty_ascii_584 = f_new_typ_157(((rt_int)4LL));
(*(P522)rt_nil_check(g_ty_ascii_584)).lits = F->head_847;
(*(P522)rt_nil_check(g_ty_ascii_584)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rt_int f_lit_index_185(P518 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_855 = ((rt_int)0LL);
F->l_856 = NULL;
F->l_856 = F->lits_183;
while ((F->l_856 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->l_856)).name)), (*F->name_184))) {
F->result_ = F->i_855;
goto ret_;
}
F->i_855 = rt_add(F->i_855, ((rt_int)1LL));
F->l_856 = (*(P518)rt_nil_check(F->l_856)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_resolve_subtype_188(P518 st_186, P520 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_857 = NULL;
F->dummy_859 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel860 = (*(P518)rt_nil_check(F->st_186)).kind;
if (0 || (sel860 == ((rt_int)70LL))) {
if (((*(P518)rt_nil_check(F->st_186)).a != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).a, g_ty_int_581, &F->dummy_859); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_581, &F->dummy_859); b_; }));
(*(P520)rt_nil_check(F->c_187v)).mlo = f_manifest_217((*(P518)rt_nil_check(F->st_186)).a, &F->ok_858);
(*(P520)rt_nil_check(F->c_187v)).hasm = F->ok_858;
(*(P520)rt_nil_check(F->c_187v)).mhi = f_manifest_217((*(P518)rt_nil_check(F->st_186)).b, &F->ok_858);
(*(P520)rt_nil_check(F->c_187v)).hasm = ((*(P520)rt_nil_check(F->c_187v)).hasm && F->ok_858);
}
F->result_ = g_ty_int_581;
goto ret_;
} else if (0 || (sel860 == ((rt_int)71LL))) {
F->result_ = g_ty_float_583;
goto ret_;
} else if (0 || (sel860 == ((rt_int)72LL))) {
F->t_857 = f_new_typ_157(((rt_int)4LL));
(*(P522)rt_nil_check(F->t_857)).lits = (*(P518)rt_nil_check(F->st_186)).a;
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, F->t_857, &F->dummy_859); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).c, F->t_857, &F->dummy_859); b_; }));
}
F->result_ = F->t_857;
goto ret_;
} else if (0 || (sel860 == ((rt_int)73LL))) {
F->t_857 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_857, g_ty_ascii_584))) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_581, &F->dummy_859); b_; }));
}
F->result_ = g_ty_string_585;
goto ret_;
} else if (0 || (sel860 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P518)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_861 = NULL;
F->ic2_862 = NULL;
F->ec_863 = NULL;
F->it_864 = NULL;
F->it_864 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ic_861);
F->et_865 = NULL;
F->et_865 = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).b, &F->ec_863);
F->ic_861 = f_base_cons_169(F->it_864, F->ic_861);
F->t_857 = f_new_typ_157(((rt_int)6LL));
(*(P522)rt_nil_check(F->t_857)).idx = F->it_864;
(*(P522)rt_nil_check(F->t_857)).elem = F->et_865;
(*(P522)rt_nil_check(F->t_857)).elemcons = F->ec_863;
(*(P522)rt_nil_check(F->t_857)).elemst = (*(P518)rt_nil_check(F->st_186)).b;
if (((*(P520)rt_nil_check(F->ic_861)).lo != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = (*(P520)rt_nil_check(F->ic_861)).lo;
(*(P520)rt_nil_check(F->c_187v)).hi = (*(P520)rt_nil_check(F->ic_861)).hi;
} else if (((*(P522)rt_nil_check(f_base_of_166(F->it_864))).kind == ((rt_int)4LL))) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->it_864))).lits), ((rt_int)1LL))); b_; }));
}
(*(P520)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P522)rt_nil_check(F->t_857)).idx2 = f_resolve_subtype_188((*(P518)rt_nil_check((*(P518)rt_nil_check(F->st_186)).a)).next, &F->ic2_862);
if (((*(P520)rt_nil_check(F->ic2_862)).lo != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo2 = (*(P520)rt_nil_check(F->ic2_862)).lo;
(*(P520)rt_nil_check(F->c_187v)).hi2 = (*(P520)rt_nil_check(F->ic2_862)).hi;
} else if (((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_857)).idx2)).kind == ((rt_int)4LL))) {
(*(P520)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check((*(P522)rt_nil_check(F->t_857)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_857;
goto ret_;
} else if (0 || (sel860 == ((rt_int)77LL))) {
F->t_857 = f_new_typ_157(((rt_int)16LL));
{
F->ec_866 = NULL;
(*(P522)rt_nil_check(F->t_857)).elem = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ec_866);
(*(P522)rt_nil_check(F->t_857)).elemcons = F->ec_866;
}
F->result_ = F->t_857;
goto ret_;
} else if (0 || (sel860 == ((rt_int)75LL))) {
F->t_857 = f_new_typ_157(((rt_int)7LL));
{
F->comp_867 = NULL;
F->comp_867 = (*(P518)rt_nil_check(F->st_186)).a;
F->tail_868 = NULL;
while ((F->comp_867 != NULL)) {
F->cc_869 = NULL;
F->f_870 = NULL;
{ R525 *cell871 = rt_alloc(sizeof(R525));
(*cell871).name = NULL;
(*cell871).t = NULL;
(*cell871).c = NULL;
(*cell871).st = NULL;
(*cell871).next = NULL;
F->f_870 = cell871;
}
(*(P524)rt_nil_check(F->f_870)).name = (*(P518)rt_nil_check(F->comp_867)).name;
(*(P524)rt_nil_check(F->f_870)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->comp_867)).a, &F->cc_869);
(*(P524)rt_nil_check(F->f_870)).c = F->cc_869;
(*(P524)rt_nil_check(F->f_870)).st = (*(P518)rt_nil_check(F->comp_867)).a;
if ((F->tail_868 == NULL)) {
(*(P522)rt_nil_check(F->t_857)).fields = F->f_870;
} else {
(*(P524)rt_nil_check(F->tail_868)).next = F->f_870;
}
F->tail_868 = F->f_870;
F->comp_867 = (*(P518)rt_nil_check(F->comp_867)).next;
}
}
F->result_ = F->t_857;
goto ret_;
} else if (0 || (sel860 == ((rt_int)79LL))) {
F->result_ = g_ty_file_587;
goto ret_;
} else if (0 || (sel860 == ((rt_int)78LL))) {
if (((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P526)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)))) {
F->gt_872 = NULL;
F->gt_872 = f_copy_node_456((*(P518)rt_nil_check(F->st_186)).a);
(*(P518)rt_nil_check(F->gt_872)).next = NULL;
F->result_ = f_instantiate_type_405(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_872, (*(P518)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P518)rt_nil_check(F->st_186)).line);
goto ret_;
}
{
F->ec_873 = NULL;
F->t_857 = f_new_typ_157(((rt_int)12LL));
(*(P522)rt_nil_check(F->t_857)).elem = f_resolve_subtype_188((*(P518)rt_nil_check(F->st_186)).a, &F->ec_873);
(*(P522)rt_nil_check(F->t_857)).elemcons = F->ec_873;
if (((*(P518)rt_nil_check(F->st_186)).b != NULL)) {
(*(P520)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->st_186)).b, g_ty_int_581, &F->dummy_859); b_; }));
}
}
F->result_ = F->t_857;
goto ret_;
} else if (0 || (sel860 == ((rt_int)80LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_582;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_584;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_589;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_590;
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_591;
goto ret_;
}
{
F->y_874 = NULL;
F->y_874 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name)));
if ((F->y_874 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_186)).name))); b_; }));
}
if ((((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)10LL)) && (((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_874)).decl)).b)).kind == ((rt_int)43LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_874)).decl)).b)).kind == ((rt_int)44LL))))) {
F->result_ = f_instantiate_type_405(F->y_874, (*(P518)rt_nil_check(F->st_186)).a, (*(P518)rt_nil_check(F->st_186)).b, &F->c_187v, (*(P518)rt_nil_check(F->st_186)).line);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->y_874)).t != NULL)) && ((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_874)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_874, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)5LL))) && ((*(P526)rt_nil_check(F->y_874)).t != NULL))) {
if (((*(P526)rt_nil_check(F->y_874)).c != NULL)) {
F->c_187v = (*(P526)rt_nil_check(F->y_874)).c;
}
F->result_ = (*(P526)rt_nil_check(F->y_874)).t;
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->y_874)).decl != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_874)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_874, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_874)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P526)rt_nil_check(F->y_874)).st, &F->c_187v);
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
  RT_FPOP();
  return F->result_;
}

static int f_opened_190(P522 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_189 = t_189;
F->c_875 = NULL;
F->c_875 = g_caps_567;
if (((((*(P522)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P522)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P518)rt_nil_check((*(P522)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_875 != NULL)) {
if (((*(P538)rt_nil_check(F->c_875)).d == (*(P522)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_875 = (*(P538)rt_nil_check(F->c_875)).next;
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
F->i_876 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_876, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_876, rt_sub(rt_add(F->i_876, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_876, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_876, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_876 = rt_add(F->i_876, ((rt_int)1LL));
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
F->l_877 = NULL;
F->l_877 = g_psub_569;
F->r_878 = NULL;
F->r_878 = f_mk_3(&(*F->s_195));
while ((F->l_877 != NULL)) {
F->r_878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P513)rt_nil_check(F->r_878)), &(*(P513)rt_nil_check((*(P532)rt_nil_check(F->l_877)).s)), &(*(P513)rt_nil_check((*(P532)rt_nil_check((*(P532)rt_nil_check(F->l_877)).next)).s))); b_; }));
F->l_877 = (*(P532)rt_nil_check((*(P532)rt_nil_check(F->l_877)).next)).next;
}
F->result_ = (*(P513)rt_nil_check(F->r_878));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_new_type_200(P526 y_197, P518 st_198, P520 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_879 = NULL;
F->d_879 = (*(P526)rt_nil_check(F->y_197)).decl;
F->p_880 = NULL;
F->uc_881 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P526)rt_nil_check(F->y_197)).t == NULL)) {
(*(P526)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).name = (*(P526)rt_nil_check(F->y_197)).name;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).decl = F->d_879;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tparams = (*(P518)rt_nil_check(F->d_879)).b;
if ((g_caps_567 != NULL)) {
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).ocap = (*(P538)rt_nil_check(g_caps_567)).d;
}
f_open_scope_151();
F->p_880 = (*(P518)rt_nil_check(F->d_879)).b;
while ((F->p_880 != NULL)) {
F->z_882 = NULL;
F->z_882 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_880)).name);
F->zc_883 = NULL;
(*(P526)rt_nil_check(F->z_882)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_880)).a, &F->zc_883);
(*(P526)rt_nil_check(F->z_882)).mnext = (*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tpsyms;
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).tpsyms = F->z_882;
(*(P526)rt_nil_check(F->z_882)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_880)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_882, (*(P518)rt_nil_check(F->d_879)).line);
F->p_880 = (*(P518)rt_nil_check(F->p_880)).next;
}
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_879)).a, &F->uc_881);
(*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_197)).t)).elemcons = F->uc_881;
f_close_scope_152();
}
(*(P520)rt_nil_check(F->c_199v)).args = (*(P518)rt_nil_check(F->st_198)).b;
F->result_ = (*(P526)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P522 t_202, P520 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
f_make_storage_214(&(*F->lval_201), F->t_202, F->c_203);
if (((*(P522)rt_nil_check(F->t_202)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_207((*(P522)rt_nil_check(F->t_202)).initp, &(*F->lval_201)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_207(P526 y_205, rstr *lval_206) {
  struct f_init_call_207fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_205 = y_205;
F->lval_206 = lval_206;
F->link_884 = NULL;
F->link_884 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P526)rt_nil_check(F->y_205)).level > ((rt_int)0LL))) {
F->link_884 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo886 = ((rt_int)1LL), hi887 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_205)).level);
for (rt_int it888 = lo886; it888 <= hi887; it888++) {
F->i_885 = it888;
F->link_884 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_884)), rt_str("->up", 4)); b_; }));
}
}
F->link_884 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_884)), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_205)).cname)), rt_str("(", 1)), (*(P513)rt_nil_check(F->link_884))), rt_str("&", 1)), (*F->lval_206)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_tparam_type_210(P522 t_208, rstr *name_209) {
  struct f_tparam_type_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_208 = t_208;
F->name_209 = name_209;
F->z_889 = NULL;
F->z_889 = (*(P522)rt_nil_check(F->t_208)).tpsyms;
while ((F->z_889 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_889)).name)), (*F->name_209))) {
F->result_ = (*(P526)rt_nil_check(F->z_889)).t;
goto ret_;
}
F->z_889 = (*(P526)rt_nil_check(F->z_889)).mnext;
}
F->result_ = g_ty_int_581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_214(rstr *lval_211, P522 t_212, P520 c_213) {
  struct f_make_storage_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_211 = lval_211;
F->t_212 = t_212;
F->c_213 = c_213;
if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)15LL))) {
F->p_890 = NULL;
F->p_890 = (*(P522)rt_nil_check(F->t_212)).tparams;
F->a_891 = NULL;
F->a_891 = (*(P520)rt_nil_check(F->c_213)).args;
F->uc_892 = NULL;
F->ut_893 = NULL;
F->at_894 = NULL;
if ((f_list_len_54(F->a_891) != f_list_len_54(F->p_890))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_212)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_890))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_890 != NULL)) {
F->pt_895 = f_tparam_type_210(F->t_212, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_890)).name)));
F->v_896 = rt_str_copy(f_gexpr_454(F->a_891, F->pt_895, &F->at_894));
f_check_type_175(F->at_894, F->pt_895, (*(P518)rt_nil_check(F->a_891)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_890)).name)))), rt_str(" = ", 3)), F->v_896), rt_str(";", 1)); b_; }));
F->p_890 = (*(P518)rt_nil_check(F->p_890)).next;
F->a_891 = (*(P518)rt_nil_check(F->a_891)).next;
}
{
F->saved_897 = NULL;
F->saved_897 = g_psub_569;
F->p_890 = (*(P522)rt_nil_check(F->t_212)).tparams;
while ((F->p_890 != NULL)) {
F->l1_898 = NULL;
F->l2_899 = NULL;
{ R533 *cell900 = rt_alloc(sizeof(R533));
(*cell900).s = NULL;
(*cell900).next = NULL;
F->l1_898 = cell900;
}
{ R533 *cell901 = rt_alloc(sizeof(R533));
(*cell901).s = NULL;
(*cell901).next = NULL;
F->l2_899 = cell901;
}
(*(P532)rt_nil_check(F->l1_898)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_890)).name)))), rt_str("@", 1)); b_; }));
(*(P532)rt_nil_check(F->l2_899)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_890)).name)))); b_; }));
(*(P532)rt_nil_check(F->l1_898)).next = F->l2_899;
(*(P532)rt_nil_check(F->l2_899)).next = g_psub_569;
g_psub_569 = F->l1_898;
F->p_890 = (*(P518)rt_nil_check(F->p_890)).next;
}
if (((*(P522)rt_nil_check(F->t_212)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_211), (*(P522)rt_nil_check(F->t_212)).under, (*(P522)rt_nil_check(F->t_212)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_211), rt_str(".all", 4)); b_; }), (*(P522)rt_nil_check(F->t_212)).under, (*(P522)rt_nil_check(F->t_212)).elemcons);
}
g_psub_569 = F->saved_897;
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
F->i_902 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_902), rt_str(" = 0; ", 6)), F->i_902), rt_str(" < RT_CNT(", 10)), (*F->lval_211)), rt_str("); ", 3)), F->i_902), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".p[", 3)), F->i_902), rt_str("]", 1)); b_; }), (*(P522)rt_nil_check(F->t_212)).elem, (*(P522)rt_nil_check(F->t_212)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P522)rt_nil_check(F->t_212)).kind == ((rt_int)7LL))) {
F->f_903 = NULL;
F->f_903 = (*(P522)rt_nil_check(F->t_212)).fields;
while ((F->f_903 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_211), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_903)).name)))); b_; }), (*(P524)rt_nil_check(F->f_903)).t, (*(P524)rt_nil_check(F->f_903)).c);
F->f_903 = (*(P524)rt_nil_check(F->f_903)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_manifest_217(P518 e_215, int *ok_216) {
  struct f_manifest_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
F->a_904 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->result_ = rt_neg(F->a_904);
goto ret_;
} else if ((((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("+", 1)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("*", 1))))) {
F->a_904 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).a, &F->ok_216v);
F->b_905 = f_manifest_217((*(P518)rt_nil_check(F->e_215)).b, &F->ok2_906);
F->ok_216v = (F->ok_216v && F->ok2_906);
if ((!F->ok_216v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_904, F->b_905);
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_904, F->b_905);
goto ret_;
}
F->result_ = rt_mul(F->a_904, F->b_905);
goto ret_;
} else if (((*(P518)rt_nil_check(F->e_215)).kind == ((rt_int)7LL))) {
F->y_907 = NULL;
F->y_907 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_215)).name)));
if ((((F->y_907 != NULL) && ((*(P526)rt_nil_check(F->y_907)).kind == ((rt_int)2LL))) && (*(P526)rt_nil_check(F->y_907)).hasmv)) {
F->ok_216v = 1;
F->result_ = (*(P526)rt_nil_check(F->y_907)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_216) = F->ok_216v;
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_219(P522 t_218) {
  struct f_mcopy_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
F->ct_908 = rt_str_copy(f_ctype_177(F->t_218));
F->name_909 = rt_str_new(rt_add((F->ct_908).len, ((rt_int)3LL)));
rt_str_assign(&F->name_909, rt_str_cat(rt_str("mc_", 3), F->ct_908));
F->l_910 = NULL;
if ((!f_seen_name_240(g_mcopies_580, &F->name_909))) {
{ R533 *cell911 = rt_alloc(sizeof(R533));
(*cell911).s = NULL;
(*cell911).next = NULL;
F->l_910 = cell911;
}
(*(P532)rt_nil_check(F->l_910)).s = f_mk_3(&F->name_909);
(*(P532)rt_nil_check(F->l_910)).next = g_mcopies_580;
g_mcopies_580 = F->l_910;
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_909), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_909), rt_str("(void *d, const void *s) { *(", 29)), F->ct_908), rt_str(" *)d = ", 7)), f_copy_code_229(F->t_218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_908), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_909;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_221(P522 t_220) {
  struct f_composite_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_220 = t_220;
F->result_ = ((((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)7LL))) || (((*(P522)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P522)rt_nil_check(F->t_220)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_226(rstr *lval_222, P522 t_223, rstr *v_224, P520 c_225) {
  struct f_assign_code_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_229(P522 t_227, rstr *v_228) {
  struct f_copy_code_229fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_233(P522 t_230, rstr *a_231, rstr *b_232) {
  struct f_eq_code_233fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_237(rstr *lval_234, P522 t_235, rstr *v_236) {
  struct f_elem_assign_237fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_234 = lval_234;
F->t_235 = t_235;
F->v_236 = v_236;
F->result_ = f_assign_code_226(&(*F->lval_234), F->t_235, &(*F->v_236), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_240(P532 l_238, rstr *s_239) {
  struct f_seen_name_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_238 = l_238;
F->s_239 = s_239;
F->p_912 = NULL;
F->p_912 = F->l_238;
while ((F->p_912 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P532)rt_nil_check(F->p_912)).s)), (*F->s_239))) {
F->result_ = 1;
goto ret_;
}
F->p_912 = (*(P532)rt_nil_check(F->p_912)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_241(void) {
  struct f_emit_helpers_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_913 = NULL;
F->t_914 = NULL;
F->t_914 = g_all_types_553;
F->done_915 = NULL;
while ((F->t_914 != NULL)) {
if ((f_composite_221(F->t_914) && (!f_seen_name_240(F->done_915, &(*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_914)).cname)))))) {
F->l_916 = NULL;
F->c_917 = rt_str_new(((*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_914)).cname))).len);
rt_str_assign(&F->c_917, (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_914)).cname)));
{ R533 *cell918 = rt_alloc(sizeof(R533));
(*cell918).s = NULL;
(*cell918).next = NULL;
F->l_916 = cell918;
}
(*(P532)rt_nil_check(F->l_916)).s = (*(P522)rt_nil_check(F->t_914)).cname;
(*(P532)rt_nil_check(F->l_916)).next = F->done_915;
F->done_915 = F->l_916;
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" *d, ", 5)), F->c_917), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_917), rt_str(" cp_", 4)), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_556, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_917), rt_str("(", 1)), F->c_917), rt_str(" a, ", 4)), F->c_917), rt_str(" b);", 4)); b_; }));
f_helper_bodies_243(F->t_914);
}
F->t_914 = (*(P522)rt_nil_check(F->t_914)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_243(P522 t_242) {
  struct f_helper_bodies_243fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_242 = t_242;
F->c_919 = rt_str_new(((*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_242)).cname))).len);
rt_str_assign(&F->c_919, (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_242)).cname)));
F->b_920 = NULL;
F->b_920 = g_out_funcs_559;
if (((*(P522)rt_nil_check(F->t_242)).kind == ((rt_int)6LL))) {
F->e_921 = NULL;
F->e_921 = (*(P522)rt_nil_check(F->t_242)).elem;
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" *d, ", 5)), F->c_919), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_921, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_919), rt_str(" cp_", 4)), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_919), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_921)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_229(F->e_921, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" a, ", 4)), F->c_919), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_233(F->e_921, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P522)rt_nil_check(F->t_242)).kind == ((rt_int)15LL))) {
F->p_922 = NULL;
F->p_922 = (*(P522)rt_nil_check(F->t_242)).tparams;
F->pc_923 = NULL;
F->pc_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_922 != NULL)) {
F->pc_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->pc_923)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_922)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_922)).name)))); b_; }));
F->p_922 = (*(P518)rt_nil_check(F->p_922)).next;
}
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" *d, ", 5)), F->c_919), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P513)rt_nil_check(F->pc_923))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_919), rt_str(" cp_", 4)), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" s) { s.all = ", 14)), f_copy_code_229((*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" a, ", 4)), F->c_919), rt_str(" b) { return ", 13)), f_eq_code_233((*(P522)rt_nil_check(F->t_242)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_924 = NULL;
F->f_924 = (*(P522)rt_nil_check(F->t_242)).fields;
F->conds_925 = NULL;
F->conds_925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" *d, ", 5)), F->c_919), rt_str(" s) {", 5)); b_; }));
while ((F->f_924 != NULL)) {
F->fn_926 = rt_str_copy(f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_924)).name))));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_237(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_926); b_; }), (*(P524)rt_nil_check(F->f_924)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_926); b_; }))); b_; }));
F->f_924 = (*(P524)rt_nil_check(F->f_924)).next;
}
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_919), rt_str(" cp_", 4)), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_919), rt_str(" d = s;", 7)); b_; }));
F->f_924 = (*(P522)rt_nil_check(F->t_242)).fields;
while ((F->f_924 != NULL)) {
F->fn_927 = rt_str_copy(f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_924)).name))));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_927), rt_str(" = ", 3)), f_copy_code_229((*(P524)rt_nil_check(F->f_924)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_927); b_; }))), rt_str(";", 1)); b_; }));
F->conds_925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_925)), rt_str(" && ", 4)), f_eq_code_233((*(P524)rt_nil_check(F->f_924)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_927); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_927); b_; }))); b_; }));
F->f_924 = (*(P524)rt_nil_check(F->f_924)).next;
}
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_919), rt_str("(", 1)), F->c_919), rt_str(" a, ", 4)), F->c_919), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P513)rt_nil_check(F->conds_925))), rt_str(";", 1)); b_; }));
f_put_27(F->b_920, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_245(P518 elems_244) {
  struct f_declare_body_245fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_244 = elems_244;
F->e_928 = NULL;
F->e_928 = F->elems_244;
while ((F->e_928 != NULL)) {
if ((((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)41LL)) && ((*(P518)rt_nil_check(F->e_928)).flag == ((rt_int)0LL)))) {
f_manifest_const_247(F->e_928);
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)47LL))) {
f_gen_capsule_255(F->e_928);
} else if (((((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)48LL)) && ((*(P518)rt_nil_check(F->e_928)).flag != ((rt_int)1LL))) && ((*(P518)rt_nil_check(F->e_928)).flag != ((rt_int)3LL)))) {
f_gen_expose_272(F->e_928);
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)49LL))) {
F->y_929 = NULL;
F->y_929 = f_new_sym_155(((rt_int)7LL), (*(P518)rt_nil_check(F->e_928)).name);
(*(P526)rt_nil_check(F->y_929)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_928)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_929, (*(P518)rt_nil_check(F->e_928)).line);
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_929)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_561, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_929)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_928)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)42LL))) {
F->y_930 = NULL;
F->y_930 = f_new_sym_155(((rt_int)6LL), (*(P518)rt_nil_check(F->e_928)).name);
(*(P526)rt_nil_check(F->y_930)).st = (*(P518)rt_nil_check(F->e_928)).a;
f_define_145(F->y_930, (*(P518)rt_nil_check(F->e_928)).line);
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)44LL))) {
F->y_931 = NULL;
F->y_931 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->e_928)).name);
F->t_932 = NULL;
F->t_932 = f_new_typ_157(((rt_int)8LL));
(*(P522)rt_nil_check(F->t_932)).name = (*(P518)rt_nil_check(F->e_928)).name;
(*(P522)rt_nil_check(F->t_932)).decl = F->e_928;
(*(P526)rt_nil_check(F->y_931)).t = F->t_932;
f_define_145(F->y_931, (*(P518)rt_nil_check(F->e_928)).line);
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)43LL))) {
F->y_933 = NULL;
F->y_933 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->e_928)).name);
(*(P526)rt_nil_check(F->y_933)).st = (*(P518)rt_nil_check(F->e_928)).a;
(*(P526)rt_nil_check(F->y_933)).decl = F->e_928;
f_define_145(F->y_933, (*(P518)rt_nil_check(F->e_928)).line);
}
F->e_928 = (*(P518)rt_nil_check(F->e_928)).next;
}
F->e_928 = F->elems_244;
while ((F->e_928 != NULL)) {
if (((((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)45LL)) || ((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)46LL))) || ((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_276(F->e_928);
} else if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)51LL))) {
F->g_934 = NULL;
F->g_934 = f_new_sym_155(((rt_int)10LL), (*(P518)rt_nil_check(F->e_928)).name);
(*(P526)rt_nil_check(F->g_934)).decl = F->e_928;
(*(P526)rt_nil_check(F->g_934)).level = g_cur_level_565;
f_define_145(F->g_934, (*(P518)rt_nil_check(F->e_928)).line);
}
F->e_928 = (*(P518)rt_nil_check(F->e_928)).next;
}
F->e_928 = F->elems_244;
{
F->snap_935 = NULL;
while ((F->e_928 != NULL)) {
if (((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)51LL))) {
if ((F->snap_935 == NULL)) {
{ A531 *cell936 = rt_alloc(sizeof(A531));
rt_int pv937 = ((rt_int)4093LL);
(*cell936).lo = ((rt_int)0LL); (*cell936).hi = pv937; (*cell936).lo2 = 1; (*cell936).hi2 = 1;
(*cell936).p = rt_alloc(sizeof(P526) * (size_t)RT_CNT((*cell936)));
for (rt_int i938 = 0; i938 < RT_CNT((*cell936)); i938++) {
(*cell936).p[i938] = NULL;
}
F->snap_935 = cell936;
}
{ rt_int lo940 = ((rt_int)0LL), hi941 = ((rt_int)4093LL);
for (rt_int it942 = lo940; it942 <= hi941; it942++) {
F->i_939 = it942;
(*(P530)rt_nil_check(F->snap_935)).p[rt_index(F->i_939, (*(P530)rt_nil_check(F->snap_935)).lo, (*(P530)rt_nil_check(F->snap_935)).hi) - (*(P530)rt_nil_check(F->snap_935)).lo] = (*(P530)rt_nil_check(g_table_548)).p[rt_index(F->i_939, (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
}
}
}
{
F->g_943 = NULL;
F->g_943 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_928)).name)));
(*(P526)rt_nil_check(F->g_943)).env = F->snap_935;
}
}
F->e_928 = (*(P518)rt_nil_check(F->e_928)).next;
}
}
F->e_928 = F->elems_244;
while ((F->e_928 != NULL)) {
if ((((*(P518)rt_nil_check(F->e_928)).kind == ((rt_int)45LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_928)).name)), rt_str("INITIALIZE", 10)))) {
F->y_944 = NULL;
F->y_944 = f_lookup_decl_142(F->e_928);
if (((((F->y_944 != NULL) && ((*(P526)rt_nil_check(F->y_944)).params != NULL)) && ((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_944)).params)).next == NULL)) && (((*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_944)).params)).t)).kind == ((rt_int)15LL)) || ((*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_944)).params)).t)).kind == ((rt_int)8LL))))) {
(*(P522)rt_nil_check((*(P528)rt_nil_check((*(P526)rt_nil_check(F->y_944)).params)).t)).initp = F->y_944;
}
}
F->e_928 = (*(P518)rt_nil_check(F->e_928)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_247(P518 d_246) {
  struct f_manifest_const_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_246 = d_246;
F->y_947 = NULL;
F->c_948 = NULL;
if (((*(P518)rt_nil_check(F->d_246)).a != NULL)) {
if ((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->d_246)).a)).kind != ((rt_int)70LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->d_246)).a)).a != NULL))) {
goto ret_;
}
}
F->v_946 = f_manifest_217((*(P518)rt_nil_check(F->d_246)).b, &F->ok_945);
if ((!F->ok_945)) {
goto ret_;
}
(*(P518)rt_nil_check(F->d_246)).flag = ((rt_int)1LL);
F->y_947 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->d_246)).name);
(*(P526)rt_nil_check(F->y_947)).t = g_ty_int_581;
(*(P526)rt_nil_check(F->y_947)).c = f_new_cons_158();
(*(P526)rt_nil_check(F->y_947)).mvalue = F->v_946;
(*(P526)rt_nil_check(F->y_947)).hasmv = 1;
(*(P526)rt_nil_check(F->y_947)).ro_flag = 1;
(*(P526)rt_nil_check(F->y_947)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_946)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_947, (*(P518)rt_nil_check(F->d_246)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_251(P518 d_248, rstr *name_249, int *ro_250) {
  struct f_exported_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_248 = d_248;
F->name_249 = name_249;
F->ro_250 = ro_250;
F->ro_250v = *F->ro_250;
F->p_949 = NULL;
F->p_949 = (*(P518)rt_nil_check(F->d_248)).a;
F->ro_250v = 0;
if (((*(P518)rt_nil_check(F->d_248)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_949 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_949)).name)), (*F->name_249))) {
F->ro_250v = ((*(P518)rt_nil_check(F->p_949)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_949 = (*(P518)rt_nil_check(F->p_949)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_250) = F->ro_250v;
  RT_FPOP();
  return F->result_;
}

static P526 f_copy_sym_253(P526 y_252) {
  struct f_copy_sym_253fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_252 = y_252;
F->z_950 = NULL;
{ R527 *cell951 = rt_alloc(sizeof(R527));
(*cell951).name = NULL;
(*cell951).t = NULL;
(*cell951).c = NULL;
(*cell951).access = NULL;
(*cell951).cname = NULL;
(*cell951).st = NULL;
(*cell951).decl = NULL;
(*cell951).params = NULL;
(*cell951).result = NULL;
(*cell951).members = NULL;
(*cell951).mnext = NULL;
(*cell951).binds = NULL;
(*cell951).insts = NULL;
(*cell951).env = NULL;
(*cell951).chain = NULL;
(*cell951).stack = NULL;
F->z_950 = cell951;
}
(*(P526)rt_nil_check(F->z_950)).kind = (*(P526)rt_nil_check(F->y_252)).kind;
(*(P526)rt_nil_check(F->z_950)).name = (*(P526)rt_nil_check(F->y_252)).name;
(*(P526)rt_nil_check(F->z_950)).t = (*(P526)rt_nil_check(F->y_252)).t;
(*(P526)rt_nil_check(F->z_950)).c = (*(P526)rt_nil_check(F->y_252)).c;
(*(P526)rt_nil_check(F->z_950)).access = (*(P526)rt_nil_check(F->y_252)).access;
(*(P526)rt_nil_check(F->z_950)).cname = (*(P526)rt_nil_check(F->y_252)).cname;
(*(P526)rt_nil_check(F->z_950)).ro_flag = (*(P526)rt_nil_check(F->y_252)).ro_flag;
(*(P526)rt_nil_check(F->z_950)).mvalue = (*(P526)rt_nil_check(F->y_252)).mvalue;
(*(P526)rt_nil_check(F->z_950)).hasmv = (*(P526)rt_nil_check(F->y_252)).hasmv;
(*(P526)rt_nil_check(F->z_950)).st = (*(P526)rt_nil_check(F->y_252)).st;
(*(P526)rt_nil_check(F->z_950)).decl = (*(P526)rt_nil_check(F->y_252)).decl;
(*(P526)rt_nil_check(F->z_950)).params = (*(P526)rt_nil_check(F->y_252)).params;
(*(P526)rt_nil_check(F->z_950)).result = (*(P526)rt_nil_check(F->y_252)).result;
(*(P526)rt_nil_check(F->z_950)).level = (*(P526)rt_nil_check(F->y_252)).level;
(*(P526)rt_nil_check(F->z_950)).byref = (*(P526)rt_nil_check(F->y_252)).byref;
(*(P526)rt_nil_check(F->z_950)).members = (*(P526)rt_nil_check(F->y_252)).members;
(*(P526)rt_nil_check(F->z_950)).env = (*(P526)rt_nil_check(F->y_252)).env;
F->result_ = F->z_950;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_255(P518 d_254) {
  struct f_gen_capsule_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_254 = d_254;
F->y_952 = NULL;
F->y_952 = f_new_sym_155(((rt_int)8LL), (*(P518)rt_nil_check(F->d_254)).name);
(*(P526)rt_nil_check(F->y_952)).decl = F->d_254;
if (((*(P518)rt_nil_check(F->d_254)).b == NULL)) {
f_elaborate_capsule_264(F->d_254, F->y_952, NULL, F->d_254);
}
f_define_145(F->y_952, (*(P518)rt_nil_check(F->d_254)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_259(P518 d_256, P518 args_257, rt_int line_258) {
  struct f_capsule_params_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_256 = d_256;
F->args_257 = args_257;
F->line_258 = line_258;
F->p_953 = NULL;
F->p_953 = (*(P518)rt_nil_check(F->d_256)).b;
F->a_954 = NULL;
F->a_954 = F->args_257;
F->t_955 = NULL;
F->vt_956 = NULL;
F->c_957 = NULL;
while (((F->p_953 != NULL) && (F->a_954 != NULL))) {
F->t_955 = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_953)).a, &F->c_957);
if (((*(P518)rt_nil_check(F->p_953)).ival == ((rt_int)3LL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P518)rt_nil_check(F->p_953)).ival == ((rt_int)2LL)) || ((*(P518)rt_nil_check(F->p_953)).ival == ((rt_int)4LL)))) {
F->lv_958 = NULL;
F->lc_959 = NULL;
F->y_961 = NULL;
F->y_961 = f_new_sym_155(((rt_int)1LL), (*(P518)rt_nil_check(F->p_953)).name);
f_lvalue_431(F->a_954, &F->lv_958, &F->vt_956, &F->lc_959, &F->ro_960);
f_check_type_175(F->vt_956, F->t_955, F->line_258);
if ((F->ro_960 && ((*(P518)rt_nil_check(F->p_953)).ival == ((rt_int)2LL)))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_953)).name)), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_564) {
F->f_962 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_953)).name))), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_955)), rt_str(" *", 2)), F->f_962), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_962), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_958))), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_961)).level = g_cur_level_565;
(*(P526)rt_nil_check(F->y_961)).access = f_mk_3(&F->f_962);
(*(P526)rt_nil_check(F->y_961)).byref = 1;
} else {
F->g_963 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_953)).name)))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_955)), rt_str(" *", 2)), F->g_963), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_963), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_963, rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_958))), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_961)).level = ((rt_int)0LL);
(*(P526)rt_nil_check(F->y_961)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_963), rt_str(")", 1)); b_; }));
}
(*(P526)rt_nil_check(F->y_961)).t = F->t_955;
(*(P526)rt_nil_check(F->y_961)).c = F->lc_959;
(*(P526)rt_nil_check(F->y_961)).ro_flag = ((*(P518)rt_nil_check(F->p_953)).ival == ((rt_int)4LL));
f_define_145(F->y_961, F->line_258);
} else {
F->y_964 = NULL;
F->y_964 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_953)).name);
F->v_965 = rt_str_copy(f_gexpr_454(F->a_954, F->t_955, &F->vt_956));
f_check_type_175(F->vt_956, F->t_955, F->line_258);
{
F->access_966 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_953)).name)), F->t_955));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_966, rt_str(" = ", 3)), f_copy_code_229(F->t_955, &F->v_965)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_964, &F->access_966);
}
(*(P526)rt_nil_check(F->y_964)).t = F->t_955;
(*(P526)rt_nil_check(F->y_964)).c = F->c_957;
(*(P526)rt_nil_check(F->y_964)).ro_flag = 1;
f_define_145(F->y_964, F->line_258);
}
F->p_953 = (*(P518)rt_nil_check(F->p_953)).next;
F->a_954 = (*(P518)rt_nil_check(F->a_954)).next;
}
if (((F->p_953 != NULL) || (F->a_954 != NULL))) {
f_fail_23(F->line_258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_256)).name))); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_264(P518 d_260, P526 y_261, P518 args_262, P518 owner_263) {
  struct f_elaborate_capsule_264fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_260 = d_260;
F->y_261 = y_261;
F->args_262 = args_262;
F->owner_263 = owner_263;
F->cr_967 = NULL;
F->ctx_968 = NULL;
F->m_969 = NULL;
F->p_970 = NULL;
F->p_970 = (*(P518)rt_nil_check(F->d_260)).a;
{ R539 *cell972 = rt_alloc(sizeof(R539));
(*cell972).d = NULL;
(*cell972).next = NULL;
F->cr_967 = cell972;
}
(*(P538)rt_nil_check(F->cr_967)).d = F->d_260;
(*(P538)rt_nil_check(F->cr_967)).next = g_caps_567;
g_caps_567 = F->cr_967;
f_open_scope_151();
if (((*(P518)rt_nil_check(F->d_260)).b != NULL)) {
f_capsule_params_259(F->d_260, F->args_262, (*(P518)rt_nil_check(F->owner_263)).line);
}
{ R543 *cell973 = rt_alloc(sizeof(R543));
(*cell973).imps = NULL;
(*cell973).next = NULL;
F->ctx_968 = cell973;
}
(*(P542)rt_nil_check(F->ctx_968)).depth = g_depth_551;
(*(P542)rt_nil_check(F->ctx_968)).imps = (*(P518)rt_nil_check(F->d_260)).d;
(*(P542)rt_nil_check(F->ctx_968)).all_imp = ((*(P518)rt_nil_check(F->d_260)).flag >= ((rt_int)2LL));
(*(P542)rt_nil_check(F->ctx_968)).next = g_fctx_566;
g_fctx_566 = F->ctx_968;
f_declare_body_245((*(P518)rt_nil_check(F->d_260)).c);
f_capsule_elements_303((*(P518)rt_nil_check(F->d_260)).c);
{
F->w_974 = NULL;
{ R541 *cell975 = rt_alloc(sizeof(R541));
(*cell975).d = NULL;
(*cell975).w = NULL;
(*cell975).next = NULL;
F->w_974 = cell975;
}
(*(P540)rt_nil_check(F->w_974)).d = F->owner_263;
(*(P540)rt_nil_check(F->w_974)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_299((*(P518)rt_nil_check(F->d_260)).c); b_; }));
(*(P540)rt_nil_check(F->w_974)).next = g_cap_waits_568;
g_cap_waits_568 = F->w_974;
}
g_fctx_566 = (*(P542)rt_nil_check(g_fctx_566)).next;
F->m_969 = g_scope_stack_552;
while (((F->m_969 != NULL) && ((*(P526)rt_nil_check(F->m_969)).depth == g_depth_551))) {
if ((((((*(P526)rt_nil_check(F->m_969)).kind == ((rt_int)5LL)) && ((*(P526)rt_nil_check(F->m_969)).t == NULL)) && ((*(P526)rt_nil_check(F->m_969)).decl != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->m_969)).decl)).kind == ((rt_int)43LL)))) {
(*(P526)rt_nil_check(F->m_969)).t = f_new_type_200(F->m_969, f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->d_260)).line), &(*(P526)rt_nil_check(F->m_969)).c);
} else if (((((*(P526)rt_nil_check(F->m_969)).kind == ((rt_int)5LL)) || ((*(P526)rt_nil_check(F->m_969)).kind == ((rt_int)6LL))) && ((*(P526)rt_nil_check(F->m_969)).t == NULL))) {
(*(P526)rt_nil_check(F->m_969)).t = f_resolve_subtype_188((*(P526)rt_nil_check(F->m_969)).st, &(*(P526)rt_nil_check(F->m_969)).c);
} else if ((((*(P526)rt_nil_check(F->m_969)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check((*(P526)rt_nil_check(F->m_969)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_274((*(P526)rt_nil_check(F->m_969)).t);
}
F->m_969 = (*(P526)rt_nil_check(F->m_969)).stack;
}
F->m_969 = g_scope_stack_552;
while (((F->m_969 != NULL) && ((*(P526)rt_nil_check(F->m_969)).depth == g_depth_551))) {
if (f_exported_251(F->d_260, &(*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_969)).name)), &F->ro_971)) {
F->z_976 = NULL;
F->z_976 = f_copy_sym_253(F->m_969);
if (F->ro_971) {
(*(P526)rt_nil_check(F->z_976)).ro_flag = 1;
}
(*(P526)rt_nil_check(F->z_976)).mnext = (*(P526)rt_nil_check(F->y_261)).members;
(*(P526)rt_nil_check(F->y_261)).members = F->z_976;
}
F->m_969 = (*(P526)rt_nil_check(F->m_969)).stack;
}
while ((F->p_970 != NULL)) {
if ((((!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_970)).name)), rt_str(":=", 2))) && (!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_970)).name)), rt_str("=", 1)))) && ((f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_970)).name))) == NULL) || ((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_970)).name))))).depth != g_depth_551)))) {
f_fail_23((*(P518)rt_nil_check(F->d_260)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_970)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_260)).name))); b_; }));
}
F->p_970 = (*(P518)rt_nil_check(F->p_970)).next;
}
f_close_scope_152();
g_caps_567 = (*(P538)rt_nil_check(g_caps_567)).next;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_267(P518 d_265, rstr *op_266) {
  struct f_exports_op_267fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_265 = d_265;
F->op_266 = op_266;
F->p_977 = NULL;
if ((F->d_265 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_977 = (*(P518)rt_nil_check(F->d_265)).a;
while ((F->p_977 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_977)).name)), (*F->op_266))) {
F->result_ = 1;
goto ret_;
}
F->p_977 = (*(P518)rt_nil_check(F->p_977)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P513 f_renamed_270(P518 d_268, P526 z_269) {
  struct f_renamed_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_268 = d_268;
F->z_269 = z_269;
F->r_978 = NULL;
F->r_978 = (*(P518)rt_nil_check(F->d_268)).c;
while ((F->r_978 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_978)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->z_269)).name)))) {
F->result_ = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->r_978)).a)).name;
goto ret_;
}
F->r_978 = (*(P518)rt_nil_check(F->r_978)).next;
}
F->result_ = (*(P526)rt_nil_check(F->z_269)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_272(P518 d_271) {
  struct f_gen_expose_272fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_271 = d_271;
F->y_979 = NULL;
F->y_979 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name)));
F->m_980 = NULL;
F->p_981 = NULL;
F->p_981 = (*(P518)rt_nil_check(F->d_271)).a;
F->r_982 = NULL;
F->r_982 = (*(P518)rt_nil_check(F->d_271)).c;
if (((F->y_979 == NULL) || ((*(P526)rt_nil_check(F->y_979)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P518)rt_nil_check(F->d_271)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->d_271)).flag == ((rt_int)3LL)))) {
F->inst_983 = NULL;
F->inst_983 = f_new_sym_155(((rt_int)8LL), (*(P526)rt_nil_check(F->y_979)).name);
(*(P526)rt_nil_check(F->inst_983)).decl = (*(P526)rt_nil_check(F->y_979)).decl;
f_elaborate_capsule_264((*(P526)rt_nil_check(F->y_979)).decl, F->inst_983, (*(P518)rt_nil_check(F->d_271)).b, F->d_271);
F->y_979 = F->inst_983;
} else if ((((*(P526)rt_nil_check(F->y_979)).decl != NULL) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_979)).decl)).b != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P518)rt_nil_check(F->d_271)).b != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_982 != NULL)) {
F->found_984 = 0;
F->m_980 = (*(P526)rt_nil_check(F->y_979)).members;
while ((F->m_980 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_980)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_982)).name)))) {
F->found_984 = 1;
}
F->m_980 = (*(P526)rt_nil_check(F->m_980)).mnext;
}
if ((!F->found_984)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->r_982)).name)), rt_str(" is renamed but not made known by ", 34)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))); b_; }));
}
F->r_982 = (*(P518)rt_nil_check(F->r_982)).next;
}
if (((*(P518)rt_nil_check(F->d_271)).ival == ((rt_int)1LL))) {
F->m_980 = (*(P526)rt_nil_check(F->y_979)).members;
while ((F->m_980 != NULL)) {
F->z_985 = NULL;
F->z_985 = f_copy_sym_253(F->m_980);
(*(P526)rt_nil_check(F->z_985)).name = f_renamed_270(F->d_271, F->m_980);
f_define_145(F->z_985, (*(P518)rt_nil_check(F->d_271)).line);
F->m_980 = (*(P526)rt_nil_check(F->m_980)).mnext;
}
goto ret_;
}
while ((F->p_981 != NULL)) {
F->found_986 = 0;
F->m_980 = (*(P526)rt_nil_check(F->y_979)).members;
while ((F->m_980 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->m_980)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_981)).name)))) {
F->z_987 = NULL;
F->z_987 = f_copy_sym_253(F->m_980);
if (((*(P518)rt_nil_check(F->p_981)).ival == ((rt_int)1LL))) {
(*(P526)rt_nil_check(F->z_987)).ro_flag = 1;
}
(*(P526)rt_nil_check(F->z_987)).name = f_renamed_270(F->d_271, F->m_980);
f_define_145(F->z_987, (*(P518)rt_nil_check(F->d_271)).line);
F->found_986 = 1;
}
F->m_980 = (*(P526)rt_nil_check(F->m_980)).mnext;
}
if ((!F->found_986)) {
f_fail_23((*(P518)rt_nil_check(F->d_271)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_981)).name)), rt_str(" is not exported by ", 20)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_271)).name))); b_; }));
}
F->p_981 = (*(P518)rt_nil_check(F->p_981)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_274(P522 t_273) {
  struct f_finish_ptr_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_273 = t_273;
F->d_988 = NULL;
F->d_988 = (*(P522)rt_nil_check(F->t_273)).decl;
F->p_989 = NULL;
F->c_990 = NULL;
F->dummy_991 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_991, rt_str(" ", 1));
if (((*(P522)rt_nil_check(F->t_273)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_989 = (*(P518)rt_nil_check(F->d_988)).b;
while ((F->p_989 != NULL)) {
F->y_992 = NULL;
F->y_992 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_989)).name);
(*(P526)rt_nil_check(F->y_992)).t = g_ty_int_581;
(*(P526)rt_nil_check(F->y_992)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_992, (*(P518)rt_nil_check(F->d_988)).line);
F->p_989 = (*(P518)rt_nil_check(F->p_989)).next;
}
(*(P522)rt_nil_check(F->t_273)).target = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_988)).a, &F->c_990);
f_close_scope_152();
(*rt_str_at(&F->dummy_991, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_273), ((rt_int)1LL));
(*rt_str_at(&F->dummy_991, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P522)rt_nil_check(F->t_273)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_276(P518 d_275) {
  struct f_declare_subprogram_276fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_275 = d_275;
f_define_145(f_build_subprogram_278(F->d_275), (*(P518)rt_nil_check(F->d_275)).line);
ret_:
  RT_FPOP();
  return;
}

static P526 f_build_subprogram_278(P518 d_277) {
  struct f_build_subprogram_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_277 = d_277;
F->y_993 = NULL;
F->p_994 = NULL;
F->p_994 = (*(P518)rt_nil_check(F->d_277)).a;
F->tail_995 = NULL;
if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)46LL))) {
F->y_993 = f_new_sym_155(((rt_int)3LL), (*(P518)rt_nil_check(F->d_277)).name);
} else if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
F->y_993 = f_new_sym_155(((rt_int)9LL), (*(P518)rt_nil_check(F->d_277)).name);
} else {
F->y_993 = f_new_sym_155(((rt_int)4LL), (*(P518)rt_nil_check(F->d_277)).name);
}
while ((F->p_994 != NULL)) {
F->pm_996 = NULL;
{ R529 *cell997 = rt_alloc(sizeof(R529));
(*cell997).name = NULL;
(*cell997).t = NULL;
(*cell997).c = NULL;
(*cell997).cfield = NULL;
(*cell997).next = NULL;
F->pm_996 = cell997;
}
(*(P528)rt_nil_check(F->pm_996)).name = (*(P518)rt_nil_check(F->p_994)).name;
(*(P528)rt_nil_check(F->pm_996)).mode = (*(P518)rt_nil_check(F->p_994)).ival;
(*(P528)rt_nil_check(F->pm_996)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_994)).a, &(*(P528)rt_nil_check(F->pm_996)).c);
(*(P528)rt_nil_check(F->pm_996)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_994)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_995 == NULL)) {
(*(P526)rt_nil_check(F->y_993)).params = F->pm_996;
} else {
(*(P528)rt_nil_check(F->tail_995)).next = F->pm_996;
}
F->tail_995 = F->pm_996;
F->p_994 = (*(P518)rt_nil_check(F->p_994)).next;
}
(*(P526)rt_nil_check(F->y_993)).result = g_ty_void_586;
if (((*(P518)rt_nil_check(F->d_277)).b != NULL)) {
F->rc_998 = NULL;
(*(P526)rt_nil_check(F->y_993)).result = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_277)).b, &F->rc_998);
}
(*(P526)rt_nil_check(F->y_993)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_420(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_277)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P526)rt_nil_check(F->y_993)).decl = F->d_277;
(*(P526)rt_nil_check(F->y_993)).level = g_cur_level_565;
if (((*(P518)rt_nil_check(F->d_277)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_993)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_993;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_element_280(P518 e_279) {
  struct f_element_280fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_279 = e_279;
F->k_999 = (*(P518)rt_nil_check(F->e_279)).kind;
if (((F->k_999 == ((rt_int)48LL)) && (((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)3LL))))) {
f_gen_expose_272(F->e_279);
} else if ((((F->k_999 == ((rt_int)45LL)) || (F->k_999 == ((rt_int)46LL))) || (F->k_999 == ((rt_int)50LL)))) {
f_subprogram_292(F->e_279);
} else if (((((((F->k_999 == ((rt_int)49LL)) || (F->k_999 == ((rt_int)42LL))) || (F->k_999 == ((rt_int)43LL))) || (F->k_999 == ((rt_int)47LL))) || (F->k_999 == ((rt_int)48LL))) || (F->k_999 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_999 == ((rt_int)44LL))) {
f_finish_ptr_274((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_279)).name))))).t);
} else if ((F->k_999 == ((rt_int)40LL))) {
f_var_decl_288(F->e_279);
} else if (((F->k_999 == ((rt_int)41LL)) && ((*(P518)rt_nil_check(F->e_279)).flag == ((rt_int)0LL)))) {
f_const_decl_290(F->e_279);
} else if ((F->k_999 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_999 == ((rt_int)33LL))) {
F->t_1000 = NULL;
F->c_1001 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_279)).a, g_ty_bool_582, &F->t_1000));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1001), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_314(F->e_279);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_283(rstr *name_281, P522 t_282) {
  struct f_storage_283fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_281 = name_281;
F->t_282 = t_282;
if ((!g_in_func_564)) {
F->g_1002 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_281))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->g_1002), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_572, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1002), rt_str(");", 2)); b_; }));
g_st_field_570 = f_mk_3(&F->g_1002);
F->result_ = F->g_1002;
goto ret_;
}
{
F->f_1003 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_281)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_282)), rt_str(" ", 1)), F->f_1003), rt_str(";", 1)); b_; }));
g_st_field_570 = f_mk_3(&F->f_1003);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1003);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_286(P526 y_284, rstr *access_285) {
  struct f_bind_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return;
}

static void f_var_decl_288(P518 d_287) {
  struct f_var_decl_288fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_287 = d_287;
F->c_1004 = NULL;
F->t_1005 = NULL;
F->t_1005 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_287)).a, &F->c_1004);
F->y_1006 = NULL;
F->y_1006 = f_new_sym_155(((rt_int)1LL), (*(P518)rt_nil_check(F->d_287)).name);
F->access_1007 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_287)).name)), F->t_1005));
f_init_storage_204(&F->access_1007, F->t_1005, F->c_1004);
if (((*(P518)rt_nil_check(F->d_287)).ival == ((rt_int)1LL))) {
F->it_1008 = NULL;
F->n_1009 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_287)).c, g_ty_int_581, &F->it_1008));
if (((*(P522)rt_nil_check(F->t_1005)).kind != ((rt_int)12LL))) {
f_fail_23((*(P518)rt_nil_check(F->d_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_164((*(P522)rt_nil_check(F->t_1005)).elem, g_ty_ascii_584)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1007), rt_str(", ", 2)), F->n_1009), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1007), rt_str(", ", 2)), F->n_1009), rt_str(", 0);", 5)); b_; }));
}
} else if (((*(P518)rt_nil_check(F->d_287)).ival == ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->d_287)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P518)rt_nil_check(F->d_287)).b != NULL)) {
F->vt_1010 = NULL;
F->v_1011 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_287)).b, F->t_1005, &F->vt_1010));
f_check_type_175(F->vt_1010, F->t_1005, (*(P518)rt_nil_check(F->d_287)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&F->access_1007, F->t_1005, &F->v_1011, F->c_1004); b_; }));
}
(*(P526)rt_nil_check(F->y_1006)).t = F->t_1005;
(*(P526)rt_nil_check(F->y_1006)).c = F->c_1004;
f_bind_286(F->y_1006, &F->access_1007);
f_define_145(F->y_1006, (*(P518)rt_nil_check(F->d_287)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_290(P518 d_289) {
  struct f_const_decl_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_289 = d_289;
F->c_1012 = NULL;
F->c_1012 = f_new_cons_158();
F->t_1013 = NULL;
F->vt_1014 = NULL;
F->y_1015 = NULL;
F->y_1015 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->d_289)).name);
if (((*(P518)rt_nil_check(F->d_289)).a != NULL)) {
F->t_1013 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_289)).a, &F->c_1012);
}
{
F->v_1017 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->d_289)).b, F->t_1013, &F->vt_1014));
if ((F->t_1013 != NULL)) {
f_check_type_175(F->vt_1014, F->t_1013, (*(P518)rt_nil_check(F->d_289)).line);
} else {
F->t_1013 = F->vt_1014;
}
if (((*(P522)rt_nil_check(F->t_1013)).kind == ((rt_int)1LL))) {
(*(P526)rt_nil_check(F->y_1015)).mvalue = f_manifest_217((*(P518)rt_nil_check(F->d_289)).b, &F->ok_1016);
(*(P526)rt_nil_check(F->y_1015)).hasmv = F->ok_1016;
}
{
F->access_1018 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->d_289)).name)), F->t_1013));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1018, rt_str(" = ", 3)), f_copy_code_229(F->t_1013, &F->v_1017)), rt_str(";", 1)); b_; }));
f_bind_286(F->y_1015, &F->access_1018);
}
}
(*(P526)rt_nil_check(F->y_1015)).t = F->t_1013;
(*(P526)rt_nil_check(F->y_1015)).c = F->c_1012;
(*(P526)rt_nil_check(F->y_1015)).ro_flag = 1;
f_define_145(F->y_1015, (*(P518)rt_nil_check(F->d_289)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_292(P518 d_291) {
  struct f_subprogram_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_291 = d_291;
f_gen_subprogram_295(F->d_291, f_lookup_decl_142(F->d_291));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_295(P518 d_293, P526 y_294) {
  struct f_gen_subprogram_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_293 = d_293;
F->y_294 = y_294;
F->saved_code_1019 = NULL;
F->saved_code_1019 = g_code_562;
F->saved_fields_1020 = NULL;
F->saved_fields_1020 = g_fields_buf_563;
F->saved_in_1021 = g_in_func_564;
F->saved_sym_1022 = NULL;
F->saved_sym_1022 = g_func_sym_574;
F->saved_exits_1023 = NULL;
F->saved_exits_1023 = g_exits_575;
F->saved_frames_1024 = g_frames_576;
F->args_1025 = NULL;
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1026 = NULL;
F->pm_1026 = (*(P526)rt_nil_check(F->y_294)).params;
F->saved_handlers_1027 = NULL;
F->saved_handlers_1027 = g_handlers_577;
F->saved_cleanups_1028 = NULL;
F->saved_cleanups_1028 = g_cleanups_578;
F->ctx_1029 = NULL;
F->head_1030 = NULL;
F->frame_1031 = NULL;
F->frame_1031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_294)).cname)), rt_str("fr", 2)); b_; }));
F->parent_1032 = NULL;
F->copy_back_1033 = NULL;
F->copy_back_1033 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_564) {
F->parent_1032 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(g_func_sym_574)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_562 = f_new_buffer_24();
g_fields_buf_563 = f_new_buffer_24();
g_in_func_564 = 1;
g_func_sym_574 = F->y_294;
g_exits_575 = NULL;
g_frames_576 = ((rt_int)0LL);
g_handlers_577 = NULL;
g_cleanups_578 = NULL;
g_cur_level_565 = rt_add(g_cur_level_565, ((rt_int)1LL));
f_open_scope_151();
{ R543 *cell1034 = rt_alloc(sizeof(R543));
(*cell1034).imps = NULL;
(*cell1034).next = NULL;
F->ctx_1029 = cell1034;
}
(*(P542)rt_nil_check(F->ctx_1029)).depth = g_depth_551;
(*(P542)rt_nil_check(F->ctx_1029)).imps = (*(P518)rt_nil_check(F->d_293)).d;
(*(P542)rt_nil_check(F->ctx_1029)).all_imp = ((*(P518)rt_nil_check(F->d_293)).flag >= ((rt_int)2LL));
(*(P542)rt_nil_check(F->ctx_1029)).next = g_fctx_566;
g_fctx_566 = F->ctx_1029;
if ((F->parent_1032 != NULL)) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P513)rt_nil_check(F->parent_1032))), rt_str(" *up;", 5)); b_; }));
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check(F->parent_1032))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1026 != NULL)) {
F->ct_1035 = rt_str_copy(f_ctype_177((*(P528)rt_nil_check(F->pm_1026)).t));
F->f_1036 = rt_str_copy((*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1026)).cfield)));
F->p_1037 = NULL;
if ((((*(P513)rt_nil_check(F->args_1025))).len > ((rt_int)0LL))) {
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1025)), rt_str(", ", 2)); b_; }));
}
if (((*(P528)rt_nil_check(F->pm_1026)).mode == ((rt_int)1LL))) {
F->p_1037 = f_new_sym_155(((rt_int)2LL), (*(P528)rt_nil_check(F->pm_1026)).name);
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1035), rt_str(" ", 1)), F->f_1036), rt_str(";", 1)); b_; }));
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1025)), F->ct_1035), rt_str(" ", 1)), F->f_1036); b_; }));
(*(P526)rt_nil_check(F->p_1037)).access = f_mk_3(&F->f_1036);
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1036), rt_str(" = ", 3)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1026)).t, &F->f_1036)), rt_str(";", 1)); b_; }));
}
} else {
F->p_1037 = f_new_sym_155(((rt_int)1LL), (*(P528)rt_nil_check(F->pm_1026)).name);
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1035), rt_str(" *", 2)), F->f_1036), rt_str(";", 1)); b_; }));
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1025)), F->ct_1035), rt_str(" *", 2)), F->f_1036); b_; }));
(*(P526)rt_nil_check(F->p_1037)).access = f_mk_3(&F->f_1036);
(*(P526)rt_nil_check(F->p_1037)).byref = 1;
if (((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1036), rt_str(" = ", 3)), F->f_1036), rt_str(";", 1)); b_; }));
}
if ((((*(P528)rt_nil_check(F->pm_1026)).mode == ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_294)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1035), rt_str(" ", 1)), F->f_1036), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1036), rt_str("v = ", 4)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1026)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1036); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_1033 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->copy_back_1033)), rt_str("  ", 2)), f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1036), rt_str(")", 1)); b_; }), (*(P528)rt_nil_check(F->pm_1026)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1036), rt_str("v", 1)); b_; }), (*(P528)rt_nil_check(F->pm_1026)).c)); b_; }));
(*(P526)rt_nil_check(F->p_1037)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1036, rt_str("v", 1)); b_; }));
(*(P526)rt_nil_check(F->p_1037)).byref = 0;
}
}
(*(P526)rt_nil_check(F->p_1037)).t = (*(P528)rt_nil_check(F->pm_1026)).t;
(*(P526)rt_nil_check(F->p_1037)).c = (*(P528)rt_nil_check(F->pm_1026)).c;
(*(P526)rt_nil_check(F->p_1037)).level = g_cur_level_565;
(*(P526)rt_nil_check(F->p_1037)).ro_flag = (((*(P528)rt_nil_check(F->pm_1026)).mode == ((rt_int)1LL)) || ((*(P528)rt_nil_check(F->pm_1026)).mode == ((rt_int)4LL)));
f_define_145(F->p_1037, (*(P518)rt_nil_check(F->d_293)).line);
F->pm_1026 = (*(P528)rt_nil_check(F->pm_1026)).next;
}
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_563, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P526)rt_nil_check(F->y_294)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_245((*(P518)rt_nil_check(F->d_293)).c);
f_body_elements_305((*(P518)rt_nil_check(F->d_293)).c);
f_close_scope_152();
g_fctx_566 = (*(P542)rt_nil_check(g_fctx_566)).next;
g_cur_level_565 = rt_sub(g_cur_level_565, ((rt_int)1LL));
if (((((*(P513)rt_nil_check(F->args_1025))).len == ((rt_int)0LL)) || ((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL)))) {
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
F->args_1025 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1030 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P526)rt_nil_check(F->y_294)).result)), rt_str(" ", 1)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_294)).cname))), rt_str("(", 1)), (*(P513)rt_nil_check(F->args_1025))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->head_1030)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->head_1030)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_571, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P513)rt_nil_check(F->frame_1031))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_571, g_fields_buf_563);
f_put_27(g_out_frames_571, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P526)rt_nil_check(F->y_294)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check(F->frame_1031))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check(F->frame_1031))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_559, g_code_562);
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(F->y_294)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P513)rt_nil_check(F->copy_back_1033))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_559, &(*(P513)rt_nil_check(F->copy_back_1033)));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P513)rt_nil_check(F->copy_back_1033))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_559, &(*(P513)rt_nil_check(F->copy_back_1033)));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_562 = F->saved_code_1019;
g_fields_buf_563 = F->saved_fields_1020;
g_in_func_564 = F->saved_in_1021;
g_func_sym_574 = F->saved_sym_1022;
g_exits_575 = F->saved_exits_1023;
g_frames_576 = F->saved_frames_1024;
g_handlers_577 = F->saved_handlers_1027;
g_cleanups_578 = F->saved_cleanups_1028;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_297(P518 d_296) {
  struct f_waits_of_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_296 = d_296;
F->w_1038 = NULL;
F->w_1038 = g_cap_waits_568;
while ((F->w_1038 != NULL)) {
if (((*(P540)rt_nil_check(F->w_1038)).d == F->d_296)) {
F->result_ = (*(P513)rt_nil_check((*(P540)rt_nil_check(F->w_1038)).w));
goto ret_;
}
F->w_1038 = (*(P540)rt_nil_check(F->w_1038)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_299(P518 elems_298) {
  struct f_task_waits_299fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_298 = elems_298;
F->e_1039 = NULL;
F->e_1039 = F->elems_298;
F->r_1040 = NULL;
F->r_1040 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1039 != NULL)) {
if (((*(P518)rt_nil_check(F->e_1039)).kind == ((rt_int)50LL))) {
F->r_1040 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->r_1040)), rt_str(" rt_await_decl(&", 16)), (*(P513)rt_nil_check((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_1039)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if ((((*(P518)rt_nil_check(F->e_1039)).kind == ((rt_int)47LL)) || (((*(P518)rt_nil_check(F->e_1039)).kind == ((rt_int)48LL)) && (((*(P518)rt_nil_check(F->e_1039)).flag == ((rt_int)1LL)) || ((*(P518)rt_nil_check(F->e_1039)).flag == ((rt_int)3LL)))))) {
F->r_1040 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->r_1040)), f_waits_of_297(F->e_1039)); b_; }));
}
F->e_1039 = (*(P518)rt_nil_check(F->e_1039)).next;
}
F->result_ = (*(P513)rt_nil_check(F->r_1040));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_301(P518 elems_300) {
  struct f_await_tasks_301fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_300 = elems_300;
F->w_1041 = rt_str_copy(f_task_waits_299(F->elems_300));
if (((F->w_1041).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1041);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_303(P518 elems_302) {
  struct f_capsule_elements_303fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_302 = elems_302;
F->e_1042 = NULL;
F->e_1042 = F->elems_302;
while ((F->e_1042 != NULL)) {
f_element_280(F->e_1042);
F->e_1042 = (*(P518)rt_nil_check(F->e_1042)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_305(P518 elems_304) {
  struct f_body_elements_305fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_304 = elems_304;
f_capsule_elements_303(F->elems_304);
f_await_tasks_301(F->elems_304);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_307(P518 elems_306) {
  struct f_gen_body_307fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_306 = elems_306;
f_open_scope_151();
f_declare_body_245(F->elems_306);
f_body_elements_305(F->elems_306);
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_309(rt_int upto_308) {
  struct f_pop_frames_309fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_308 = upto_308;
F->i_1043 = g_frames_576;
F->c_1044 = NULL;
F->c_1044 = g_cleanups_578;
while ((F->i_1043 > F->upto_308)) {
f_emit_29(&(*(P513)rt_nil_check((*(P532)rt_nil_check(F->c_1044)).s)));
F->c_1044 = (*(P532)rt_nil_check(F->c_1044)).next;
F->i_1043 = rt_sub(F->i_1043, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_311(rstr *s_310) {
  struct f_push_cleanup_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_310 = s_310;
F->c_1045 = NULL;
{ R533 *cell1046 = rt_alloc(sizeof(R533));
(*cell1046).s = NULL;
(*cell1046).next = NULL;
F->c_1045 = cell1046;
}
(*(P532)rt_nil_check(F->c_1045)).s = f_mk_3(&(*F->s_310));
(*(P532)rt_nil_check(F->c_1045)).next = g_cleanups_578;
g_cleanups_578 = F->c_1045;
g_frames_576 = rt_add(g_frames_576, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_312(void) {
  struct f_pop_cleanup_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_578 = (*(P532)rt_nil_check(g_cleanups_578)).next;
g_frames_576 = rt_sub(g_frames_576, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_314(P518 s_313) {
  struct f_gen_statement_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_313 = s_313;
F->label_1047 = NULL;
if (((*(P518)rt_nil_check(F->s_313)).tag != NULL)) {
F->x_1048 = NULL;
{ R537 *cell1049 = rt_alloc(sizeof(R537));
(*cell1049).match = NULL;
(*cell1049).label = NULL;
(*cell1049).next = NULL;
F->x_1048 = cell1049;
}
F->label_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P536)rt_nil_check(F->x_1048)).match = (*(P518)rt_nil_check(F->s_313)).tag;
(*(P536)rt_nil_check(F->x_1048)).label = F->label_1047;
(*(P536)rt_nil_check(F->x_1048)).depth = g_frames_576;
(*(P536)rt_nil_check(F->x_1048)).next = g_exits_575;
g_exits_575 = F->x_1048;
}
{ rt_int sel1050 = (*(P518)rt_nil_check(F->s_313)).kind;
if (0 || (sel1050 == ((rt_int)20LL))) {
f_st_assign_316(F->s_313);
} else if (0 || (sel1050 == ((rt_int)21LL))) {
f_st_call_318(F->s_313);
} else if (0 || (sel1050 == ((rt_int)22LL))) {
f_st_if_320(F->s_313);
} else if (0 || (sel1050 == ((rt_int)23LL))) {
f_st_case_322(F->s_313);
} else if (0 || (sel1050 == ((rt_int)24LL))) {
f_st_repeat_324(F->s_313);
} else if (0 || (sel1050 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_313)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1050 == ((rt_int)27LL))) {
f_st_exit_326(F->s_313);
} else if (0 || (sel1050 == ((rt_int)28LL))) {
f_st_return_328(F->s_313);
} else if (0 || (sel1050 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_331(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_313)).name)), (*(P518)rt_nil_check(F->s_313)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1050 == ((rt_int)31LL))) {
if ((g_handlers_577 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P513)rt_nil_check((*(P532)rt_nil_check(g_handlers_577)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1050 == ((rt_int)26LL))) {
f_st_guard_333(F->s_313);
} else if (0 || (sel1050 == ((rt_int)32LL))) {
f_st_alloc_335(F->s_313);
} else if (0 || (sel1050 == ((rt_int)34LL))) {
f_st_create_339(F->s_313);
} else if (0 || (sel1050 == ((rt_int)35LL))) {
f_st_wait_368(F->s_313);
} else if (0 || (sel1050 == ((rt_int)36LL))) {
f_st_region_376(F->s_313);
} else {
f_fail_23((*(P518)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P518)rt_nil_check(F->s_313)).tag != NULL)) {
g_exits_575 = (*(P536)rt_nil_check(g_exits_575)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->label_1047)), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_316(P518 s_315) {
  struct f_st_assign_316fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_315 = s_315;
F->lv_1051 = NULL;
F->t_1052 = NULL;
F->vt_1053 = NULL;
F->c_1054 = NULL;
if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).kind == ((rt_int)10LL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b != NULL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).a, &F->lv_1051, &F->t_1052, &F->c_1054, &F->ro_1055);
if ((F->ro_1055 || ((*(P522)rt_nil_check(F->t_1052)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_1056 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).a, g_ty_int_581, &F->vt_1053));
F->hi_1057 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->s_315)).a)).b)).b, g_ty_int_581, &F->vt_1053));
F->v_1058 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_315)).b, g_ty_string_585, &F->vt_1053));
f_check_type_175(F->vt_1053, g_ty_string_585, (*(P518)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P513)rt_nil_check(F->lv_1051))), rt_str(", ", 2)), F->lo_1056), rt_str(", ", 2)), F->hi_1057), rt_str(", ", 2)), F->v_1058), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_431((*(P518)rt_nil_check(F->s_315)).a, &F->lv_1051, &F->t_1052, &F->c_1054, &F->ro_1055);
if (F->ro_1055) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_190(F->t_1052)) && (!f_exports_op_267((*(P522)rt_nil_check(F->t_1052)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P518)rt_nil_check(F->s_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_1052)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1059 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_315)).b, F->t_1052, &F->vt_1053));
f_check_type_175(F->vt_1053, F->t_1052, (*(P518)rt_nil_check(F->s_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(&(*(P513)rt_nil_check(F->lv_1051)), F->t_1052, &F->v_1059, F->c_1054); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_318(P518 s_317) {
  struct f_st_call_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_317 = s_317;
F->c_1060 = NULL;
F->c_1060 = (*(P518)rt_nil_check(F->s_317)).a;
F->t_1061 = NULL;
if ((((*(P518)rt_nil_check(F->c_1060)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check(F->c_1060)).kind == ((rt_int)12LL)))) {
F->x_1062 = NULL;
F->x_1062 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->c_1060)).line);
(*(P518)rt_nil_check(F->x_1062)).a = F->c_1060;
F->c_1060 = F->x_1062;
}
if (((*(P518)rt_nil_check(F->c_1060)).kind != ((rt_int)10LL))) {
f_fail_23((*(P518)rt_nil_check(F->s_317)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_502(F->c_1060, 1, &F->t_1061), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_320(P518 s_319) {
  struct f_st_if_320fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_319 = s_319;
F->a_1063 = NULL;
F->a_1063 = (*(P518)rt_nil_check(F->s_319)).a;
F->first_1064 = 1;
F->t_1065 = NULL;
while ((F->a_1063 != NULL)) {
F->c_1066 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1063)).a, g_ty_bool_582, &F->t_1065));
f_check_type_175(F->t_1065, g_ty_bool_582, (*(P518)rt_nil_check(F->s_319)).line);
if (F->first_1064) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1066), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1066), rt_str(") {", 3)); b_; }));
}
F->first_1064 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1063)).b);
F->a_1063 = (*(P518)rt_nil_check(F->a_1063)).next;
}
if (((*(P518)rt_nil_check(F->s_319)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_319)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_case_322(P518 s_321) {
  struct f_st_case_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_321 = s_321;
F->st_1067 = NULL;
F->vt_1068 = NULL;
F->first_1069 = 1;
F->a_1070 = NULL;
F->a_1070 = (*(P518)rt_nil_check(F->s_321)).b;
F->sel_1071 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_321)).a, NULL, &F->st_1067));
F->tmp_1072 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_1067)), rt_str(" ", 1)), F->tmp_1072), rt_str(" = ", 3)), F->sel_1071), rt_str(";", 1)); b_; }));
while ((F->a_1070 != NULL)) {
F->lab_1073 = NULL;
F->lab_1073 = (*(P518)rt_nil_check(F->a_1070)).a;
F->conds_1074 = NULL;
F->conds_1074 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1073 != NULL)) {
if (((*(P518)rt_nil_check(F->lab_1073)).b == NULL)) {
F->v_1075 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1073)).a, F->st_1067, &F->vt_1068));
f_check_type_175(F->vt_1068, F->st_1067, (*(P518)rt_nil_check(F->s_321)).line);
F->conds_1074 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1074)), rt_str(" || ", 4)), f_eq_code_233(F->st_1067, &F->tmp_1072, &F->v_1075)); b_; }));
} else {
F->lo_1076 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1073)).a, F->st_1067, &F->vt_1068));
F->hi_1077 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->lab_1073)).b, F->st_1067, &F->vt_1068));
F->conds_1074 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1074)), rt_str(" || (", 5)), F->tmp_1072), rt_str(" >= ", 4)), F->lo_1076), rt_str(" && ", 4)), F->tmp_1072), rt_str(" <= ", 4)), F->hi_1077), rt_str(")", 1)); b_; }));
}
F->lab_1073 = (*(P518)rt_nil_check(F->lab_1073)).next;
}
if (F->first_1069) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1074))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1074))), rt_str(") {", 3)); b_; }));
}
F->first_1069 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1070)).b);
F->a_1070 = (*(P518)rt_nil_check(F->a_1070)).next;
}
if (F->first_1069) {
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
  RT_FPOP();
  return;
}

static void f_st_repeat_324(P518 s_323) {
  struct f_st_repeat_324fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_323 = s_323;
F->t_1078 = NULL;
F->c_1079 = NULL;
if (((*(P518)rt_nil_check(F->s_323)).flag == ((rt_int)0LL))) {
F->cond_1080 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_323)).a, g_ty_bool_582, &F->t_1078));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1080), rt_str(") {", 3)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_323)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1078 = f_resolve_subtype_188((*(P518)rt_nil_check(F->s_323)).a, &F->c_1079);
F->c_1079 = f_base_cons_169(F->t_1078, F->c_1079);
if ((((*(P522)rt_nil_check(f_base_of_166(F->t_1078))).kind == ((rt_int)4LL)) && ((*(P520)rt_nil_check(F->c_1079)).lo == NULL))) {
F->c_1079 = f_new_cons_158();
(*(P520)rt_nil_check(F->c_1079)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P520)rt_nil_check(F->c_1079)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->t_1078))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P520)rt_nil_check(F->c_1079)).lo == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->s_323)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1081 = rt_str_copy(f_storage_283(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_323)).name)), F->t_1078));
F->lov_1082 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1083 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1084 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1085 = NULL;
F->y_1085 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->s_323)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1082), rt_str(" = ", 3)), (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1079)).lo))), rt_str(", ", 2)), F->hiv_1083), rt_str(" = ", 3)), (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1079)).hi))), rt_str(";", 1)); b_; }));
if (((*(P518)rt_nil_check(F->s_323)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1084), rt_str(" = ", 3)), F->hiv_1083), rt_str("; ", 2)), F->it_1084), rt_str(" >= ", 4)), F->lov_1082), rt_str("; ", 2)), F->it_1084), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1084), rt_str(" = ", 3)), F->lov_1082), rt_str("; ", 2)), F->it_1084), rt_str(" <= ", 4)), F->hiv_1083), rt_str("; ", 2)), F->it_1084), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1081, rt_str(" = ", 3)), F->it_1084), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P526)rt_nil_check(F->y_1085)).t = F->t_1078;
(*(P526)rt_nil_check(F->y_1085)).c = F->c_1079;
f_bind_286(F->y_1085, &F->access_1081);
(*(P526)rt_nil_check(F->y_1085)).ro_flag = 1;
f_define_145(F->y_1085, (*(P518)rt_nil_check(F->s_323)).line);
f_gen_body_307((*(P518)rt_nil_check(F->s_323)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_326(P518 s_325) {
  struct f_st_exit_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_325 = s_325;
F->x_1086 = NULL;
F->x_1086 = g_exits_575;
while ((F->x_1086 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P536)rt_nil_check(F->x_1086)).match)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_325)).name)))) {
f_pop_frames_309((*(P536)rt_nil_check(F->x_1086)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P513)rt_nil_check((*(P536)rt_nil_check(F->x_1086)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1086 = (*(P536)rt_nil_check(F->x_1086)).next;
}
f_fail_23((*(P518)rt_nil_check(F->s_325)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_325)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_328(P518 s_327) {
  struct f_st_return_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_327 = s_327;
F->vt_1087 = NULL;
if ((!g_in_func_564)) {
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P522)rt_nil_check((*(P526)rt_nil_check(g_func_sym_574)).result)).kind == ((rt_int)9LL))) {
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
F->v_1088 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_327)).a, (*(P526)rt_nil_check(g_func_sym_574)).result, &F->vt_1087));
f_check_type_175(F->vt_1087, (*(P526)rt_nil_check(g_func_sym_574)).result, (*(P518)rt_nil_check(F->s_327)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_1088), rt_str(";", 1)); b_; }));
f_pop_frames_309(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_exc_id_331(rstr *name_329, rt_int line_330) {
  struct f_exc_id_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_329 = name_329;
F->line_330 = line_330;
F->y_1089 = NULL;
F->y_1089 = f_lookup_140(&(*F->name_329));
if (((F->y_1089 != NULL) && ((*(P526)rt_nil_check(F->y_1089)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1089)).cname));
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
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_333(P518 s_332) {
  struct f_st_guard_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_332 = s_332;
F->h_1090 = NULL;
F->h_1090 = (*(P518)rt_nil_check(F->s_332)).b;
F->first_1091 = 1;
F->hv_1092 = NULL;
{
F->f_1093 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1094 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1093), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1093), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1093), rt_str(")) {", 4)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_332)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1093), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1093), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1094), rt_str(" = rt_xcur;", 11)); b_; }));
{ R533 *cell1095 = rt_alloc(sizeof(R533));
(*cell1095).s = NULL;
(*cell1095).next = NULL;
F->hv_1092 = cell1095;
}
(*(P532)rt_nil_check(F->hv_1092)).s = f_mk_3(&F->x_1094);
(*(P532)rt_nil_check(F->hv_1092)).next = g_handlers_577;
g_handlers_577 = F->hv_1092;
while ((F->h_1090 != NULL)) {
F->n_1096 = NULL;
F->n_1096 = (*(P518)rt_nil_check(F->h_1090)).a;
F->conds_1097 = NULL;
F->conds_1097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1096 != NULL)) {
F->conds_1097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1097)), rt_str(" || ", 4)), F->x_1094), rt_str(" == ", 4)), f_exc_id_331(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->n_1096)).name)), (*(P518)rt_nil_check(F->s_332)).line)); b_; }));
F->n_1096 = (*(P518)rt_nil_check(F->n_1096)).next;
}
if (F->first_1091) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1097))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1097))), rt_str(") {", 3)); b_; }));
}
F->first_1091 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->h_1090)).b);
F->h_1090 = (*(P518)rt_nil_check(F->h_1090)).next;
}
if (F->first_1091) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P518)rt_nil_check(F->s_332)).flag == ((rt_int)1LL))) {
f_gen_body_307((*(P518)rt_nil_check(F->s_332)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1094), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_577 = (*(P532)rt_nil_check(g_handlers_577)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_335(P518 s_334) {
  struct f_st_alloc_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_334 = s_334;
F->lv_1098 = NULL;
F->t_1099 = NULL;
F->target_1100 = NULL;
F->vt_1101 = NULL;
F->c_1102 = NULL;
F->tc_1103 = NULL;
F->d_1105 = NULL;
F->p_1106 = NULL;
F->a_1107 = NULL;
f_lvalue_431((*(P518)rt_nil_check(F->s_334)).a, &F->lv_1098, &F->t_1099, &F->c_1102, &F->ro_1104);
if (((*(P522)rt_nil_check(F->t_1099)).kind != ((rt_int)8LL))) {
f_fail_23((*(P518)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_274(F->t_1099);
F->d_1105 = (*(P522)rt_nil_check(F->t_1099)).decl;
F->target_1100 = (*(P522)rt_nil_check(F->t_1099)).target;
if ((f_list_len_54((*(P518)rt_nil_check(F->s_334)).b) != f_list_len_54((*(P518)rt_nil_check(F->d_1105)).b))) {
f_fail_23((*(P518)rt_nil_check(F->s_334)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P518)rt_nil_check(F->d_1105)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1108 = rt_str_copy(f_ctype_177(F->target_1100));
F->cell_1109 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1108), rt_str(" *", 2)), F->cell_1109), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1108), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_1106 = (*(P518)rt_nil_check(F->d_1105)).b;
F->a_1107 = (*(P518)rt_nil_check(F->s_334)).b;
while ((F->p_1106 != NULL)) {
F->v_1110 = rt_str_copy(f_gexpr_454(F->a_1107, g_ty_int_581, &F->vt_1101));
F->pv_1111 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1112 = NULL;
F->y_1112 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_1106)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1111), rt_str(" = ", 3)), F->v_1110), rt_str(";", 1)); b_; }));
(*(P526)rt_nil_check(F->y_1112)).t = g_ty_int_581;
(*(P526)rt_nil_check(F->y_1112)).access = f_mk_3(&F->pv_1111);
f_define_145(F->y_1112, (*(P518)rt_nil_check(F->s_334)).line);
F->p_1106 = (*(P518)rt_nil_check(F->p_1106)).next;
F->a_1107 = (*(P518)rt_nil_check(F->a_1107)).next;
}
F->vt_1101 = f_resolve_subtype_188((*(P518)rt_nil_check(F->d_1105)).a, &F->tc_1103);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1109), rt_str(")", 1)); b_; }), F->target_1100, F->tc_1103);
f_close_scope_152();
if (((*(P518)rt_nil_check(F->s_334)).c != NULL)) {
F->v_1113 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->s_334)).c, F->target_1100, &F->vt_1101));
f_check_type_175(F->vt_1101, F->target_1100, (*(P518)rt_nil_check(F->s_334)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_226(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1109), rt_str(")", 1)); b_; }), F->target_1100, &F->v_1113, F->tc_1103); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->lv_1098)), rt_str(" = ", 3)), F->cell_1109), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_337(P518 e_336) {
  struct f_act_ref_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_336 = e_336;
F->lv_1114 = NULL;
F->t_1115 = NULL;
F->c_1116 = NULL;
if (((((*(P518)rt_nil_check(F->e_336)).kind == ((rt_int)7LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_336)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_425(F->e_336))) {
F->v_1118 = rt_str_copy(f_gexpr_454(F->e_336, g_ty_act_591, &F->t_1115));
if (((*(P522)rt_nil_check(F->t_1115)).kind != ((rt_int)14LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1118;
goto ret_;
}
f_lvalue_431(F->e_336, &F->lv_1114, &F->t_1115, &F->c_1116, &F->ro_1117);
if (((*(P522)rt_nil_check(F->t_1115)).kind != ((rt_int)14LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P513)rt_nil_check(F->lv_1114));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_339(P518 s_338) {
  struct f_st_create_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_338 = s_338;
F->y_1119 = NULL;
F->y_1119 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name)));
F->pm_1120 = NULL;
F->a_1121 = NULL;
F->a_1121 = (*(P518)rt_nil_check(F->s_338)).b;
F->lv_1122 = NULL;
F->lt_1123 = NULL;
F->vt_1124 = NULL;
F->lc_1125 = NULL;
if (((F->y_1119 != NULL) && ((*(P526)rt_nil_check(F->y_1119)).kind == ((rt_int)10LL)))) {
F->y_1119 = f_instantiate_410(F->y_1119, (*(P518)rt_nil_check(F->s_338)).e, (*(P518)rt_nil_check(F->s_338)).b, (*(P518)rt_nil_check(F->s_338)).line);
}
if (((F->y_1119 == NULL) || ((*(P526)rt_nil_check(F->y_1119)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P518)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1120 = (*(P526)rt_nil_check(F->y_1119)).params;
{
F->at_1127 = NULL;
F->ac_1128 = NULL;
F->act_1130 = NULL;
F->nf_1131 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_431((*(P518)rt_nil_check(F->s_338)).a, &F->lv_1122, &F->at_1127, &F->ac_1128, &F->aro_1129);
if (((*(P522)rt_nil_check(F->at_1127)).kind == ((rt_int)14LL))) {
F->act_1130 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_337((*(P518)rt_nil_check(F->s_338)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1119)).cname))), rt_str("fr *", 4)), F->nf_1131), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1131), rt_str(");", 2)); b_; }));
if (((*(P526)rt_nil_check(F->y_1119)).level > ((rt_int)0LL))) {
F->link_1132 = NULL;
F->link_1132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1134 = ((rt_int)1LL), hi1135 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_1119)).level);
for (rt_int it1136 = lo1134; it1136 <= hi1135; it1136++) {
F->i_1133 = it1136;
F->link_1132 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->link_1132)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1131, rt_str("->up = ", 7)), (*(P513)rt_nil_check(F->link_1132))), rt_str(";", 1)); b_; }));
}
while (((F->a_1121 != NULL) && (F->pm_1120 != NULL))) {
if (((*(P528)rt_nil_check(F->pm_1120)).mode == ((rt_int)1LL))) {
F->v_1137 = rt_str_copy(f_gexpr_454(F->a_1121, (*(P528)rt_nil_check(F->pm_1120)).t, &F->vt_1124));
f_check_type_175(F->vt_1124, (*(P528)rt_nil_check(F->pm_1120)).t, (*(P518)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1131, rt_str("->", 2)), (*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1120)).cfield))), rt_str(" = ", 3)), f_copy_code_229((*(P528)rt_nil_check(F->pm_1120)).t, &F->v_1137)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_431(F->a_1121, &F->lv_1122, &F->lt_1123, &F->lc_1125, &F->ro_1126);
f_check_type_175(F->lt_1123, (*(P528)rt_nil_check(F->pm_1120)).t, (*(P518)rt_nil_check(F->s_338)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1131, rt_str("->", 2)), (*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1120)).cfield))), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_1122))), rt_str(";", 1)); b_; }));
}
F->a_1121 = (*(P518)rt_nil_check(F->a_1121)).next;
F->pm_1120 = (*(P528)rt_nil_check(F->pm_1120)).next;
}
if (((F->a_1121 != NULL) || (F->pm_1120 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->s_338)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->s_338)).name))); b_; }));
}
if ((F->act_1130 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (*(P513)rt_nil_check(F->act_1130))), rt_str(", &", 3)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1119)).cname))), rt_str("decl, ", 6)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1119)).cname))), rt_str(", ", 2)), F->nf_1131), rt_str("); }", 4)); b_; }));
} else {
f_user_create_349(F->s_338, F->y_1119, &(*(P513)rt_nil_check(F->lv_1122)), F->at_1127, &F->nf_1131);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_343(rstr *name_340, P522 t_341, rstr *place_342) {
  struct f_hidden_var_343fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_340 = name_340;
F->t_341 = t_341;
F->place_342 = place_342;
F->y_1138 = NULL;
F->y_1138 = f_new_sym_155(((rt_int)1LL), f_mk_3(&(*F->name_340)));
(*(P526)rt_nil_check(F->y_1138)).t = F->t_341;
(*(P526)rt_nil_check(F->y_1138)).level = ((rt_int)0LL);
(*(P526)rt_nil_check(F->y_1138)).access = f_mk_3(&(*F->place_342));
f_define_145(F->y_1138, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_349(P518 s_344, P526 y_345, rstr *uv_346, P522 ut_347, rstr *nf_348) {
  struct f_user_create_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_344 = s_344;
F->y_345 = y_345;
F->uv_346 = uv_346;
F->ut_347 = ut_347;
F->nf_348 = nf_348;
F->t_1139 = NULL;
F->saved_1140 = NULL;
F->saved_1140 = g_code_562;
F->hook_1141 = NULL;
F->hook_1141 = f_new_buffer_24();
F->un_1142 = NULL;
F->un_1142 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->s_344)).line);
F->hn_1143 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1144 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1145 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1146 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_151();
f_hidden_var_343(&F->uname_1145, F->ut_347, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->ut_347)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P518)rt_nil_check(F->un_1142)).name = f_mk_3(&F->uname_1145);
g_code_562 = F->hook_1141;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1142, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1139)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1142, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1139)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1142, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1139)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1142, (*(P518)rt_nil_check(F->s_344)).line), 1, &F->t_1139)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_562 = F->saved_1140;
f_put_27(g_out_protos_557, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1143), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1143), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_564) {
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P513)rt_nil_check((*(P526)rt_nil_check(g_func_sym_574)).cname))), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_559, F->hook_1141);
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1144), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1144, rt_str("->hook = ", 9)), F->hn_1143), rt_str("; ", 2)), F->aa_1144), rt_str("->ua = &", 8)), (*F->uv_346)), rt_str("; ", 2)), F->aa_1144), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_492(F->ut_347)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_564) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1144, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1144), rt_str(", &", 3)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_345)).cname))), rt_str("decl, ", 6)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_345)).cname))), rt_str(", ", 2)), (*F->nf_348)), rt_str(");", 2)); b_; }));
f_hidden_var_343(&F->aname_1146, g_ty_act_591, &F->aa_1144);
{
F->start_1147 = NULL;
F->start_1147 = f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P518)rt_nil_check(F->s_344)).a, (*(P518)rt_nil_check(F->s_344)).line);
F->an_1148 = NULL;
F->an_1148 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->s_344)).line);
(*(P518)rt_nil_check(F->an_1148)).name = f_mk_3(&F->aname_1146);
(*(P518)rt_nil_check((*(P518)rt_nil_check(F->start_1147)).b)).next = F->an_1148;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_502(F->start_1147, 1, &F->t_1139), rt_str(";", 1)); b_; }));
}
f_close_scope_152();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_354(P518 inv_350, rstr *arr_351, rt_int i_352, int mixed_353) {
  struct f_wait_alt_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_350 = inv_350;
F->arr_351 = arr_351;
F->i_352 = i_352;
F->mixed_353 = mixed_353;
F->lv_1149 = NULL;
F->t_1150 = NULL;
F->vt_1151 = NULL;
F->c_1152 = NULL;
F->fn_1154 = NULL;
F->args_1155 = NULL;
F->slot_1156 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_351), rt_str("[", 1)), f_itos_7(F->i_352)), rt_str("]", 1)));
if ((((*(P518)rt_nil_check(F->inv_350)).kind != ((rt_int)10LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_350)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1154 = (*(P518)rt_nil_check(F->inv_350)).a;
F->args_1155 = (*(P518)rt_nil_check(F->inv_350)).b;
if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_431(F->args_1155, &F->lv_1149, &F->t_1150, &F->c_1152, &F->ro_1153);
if (((*(P522)rt_nil_check(F->t_1150)).kind != ((rt_int)12LL))) {
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("RECEIVE", 7))) {
F->dv_1157 = NULL;
F->dt_1158 = NULL;
f_lvalue_431((*(P518)rt_nil_check(F->args_1155)).next, &F->dv_1157, &F->dt_1158, &F->c_1152, &F->ro_1153);
f_check_type_175(F->dt_1158, (*(P522)rt_nil_check(F->t_1150)).elem, (*(P518)rt_nil_check(F->inv_350)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P513)rt_nil_check(F->lv_1149))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1157))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1159 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1160 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_1155)).next, (*(P522)rt_nil_check(F->t_1150)).elem, &F->vt_1151));
f_check_type_175(F->vt_1151, (*(P522)rt_nil_check(F->t_1150)).elem, (*(P518)rt_nil_check(F->inv_350)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P522)rt_nil_check(F->t_1150)).elem), rt_str(" ", 1)), F->tmp_1159), rt_str(" = ", 3)), F->v_1160), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P513)rt_nil_check(F->lv_1149))), rt_str(", &", 3)), F->tmp_1159), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1161 = rt_str_copy(f_gexpr_454(F->args_1155, g_ty_int_581, &F->vt_1151));
if ((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("DELAY", 5)) && F->mixed_353)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1161), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1161), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1161), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1156, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_337(F->args_1155)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->inv_350)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1154)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_356(P518 inv_355) {
  struct f_builtin_wait_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_355 = inv_355;
F->lv_1162 = NULL;
F->t_1163 = NULL;
F->c_1164 = NULL;
F->saved_1166 = NULL;
F->saved_1166 = g_code_562;
F->ok_1167 = 0;
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
g_trial_579 = rt_add(g_trial_579, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1168;
if (RT_TRY(xf1168)) {
f_lvalue_431((*(P518)rt_nil_check(F->inv_355)).b, &F->lv_1162, &F->t_1163, &F->c_1164, &F->ro_1165);
F->ok_1167 = ((*(P522)rt_nil_check(F->t_1163)).kind == ((rt_int)12LL));
RT_POP(xf1168);
} else {
RT_POP(xf1168);
int x1169 = rt_xcur;
if (0 || x1169 == ex_compile_error_1) {
F->ok_1167 = 0;
} else {
rt_raise(x1169);
}
}
}
g_trial_579 = rt_sub(g_trial_579, ((rt_int)1LL));
g_code_562 = F->saved_1166;
F->result_ = F->ok_1167;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_361(P518 inv_357, rstr *op_358, rstr *q_359, int is_stmt_360) {
  struct f_wait_op_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_357 = inv_357;
F->op_358 = op_358;
F->q_359 = q_359;
F->is_stmt_360 = is_stmt_360;
F->x_1170 = NULL;
F->x_1170 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->f_1171 = NULL;
F->f_1171 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->qn_1172 = NULL;
F->qn_1172 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->inv_357)).line);
F->t_1173 = NULL;
(*(P518)rt_nil_check(F->f_1171)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_357)).a)).name)), rt_str("_", 1)), (*F->op_358)); b_; }));
(*(P518)rt_nil_check(F->qn_1172)).name = f_mk_3(&(*F->q_359));
(*(P518)rt_nil_check(F->qn_1172)).next = (*(P518)rt_nil_check(F->inv_357)).b;
(*(P518)rt_nil_check(F->x_1170)).a = F->f_1171;
(*(P518)rt_nil_check(F->x_1170)).b = F->qn_1172;
{
F->r_1174 = rt_str_copy(f_gcall_502(F->x_1170, F->is_stmt_360, &F->t_1173));
if ((!F->is_stmt_360)) {
f_check_type_175(F->t_1173, g_ty_bool_582, (*(P518)rt_nil_check(F->inv_357)).line);
}
F->result_ = F->r_1174;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_366(P518 s_362, rstr *arr_363, rstr *w_364, rt_int n_365) {
  struct f_user_wait_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_362 = s_362;
F->arr_363 = arr_363;
F->w_364 = w_364;
F->n_365 = n_365;
F->a_1175 = NULL;
F->a_1175 = (*(P518)rt_nil_check(F->s_362)).a;
F->i_1176 = ((rt_int)0LL);
F->tests_1177 = NULL;
F->tests_1177 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1178 = NULL;
F->revokes_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1175 != NULL)) {
F->inv_1179 = NULL;
F->inv_1179 = (*(P518)rt_nil_check(F->a_1175)).a;
while ((F->inv_1179 != NULL)) {
if (f_builtin_wait_356(F->inv_1179)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1179, &(*F->arr_363), F->i_1176, 1); b_; }));
} else {
F->st_1180 = NULL;
F->st_1180 = f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->inv_1179)).line);
F->c_1181 = NULL;
F->qt_1182 = NULL;
F->qname_1183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1184 = NULL;
F->y_1184 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1183));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_363), rt_str("[", 1)), f_itos_7(F->i_1176)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P518)rt_nil_check(F->st_1180)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->inv_1179)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1182 = f_resolve_subtype_188(F->st_1180, &F->c_1181);
{
F->access_1185 = rt_str_copy(f_storage_283(&F->qname_1183, F->qt_1182));
f_init_storage_204(&F->access_1185, F->qt_1182, F->c_1181);
(*(P526)rt_nil_check(F->y_1184)).t = F->qt_1182;
(*(P526)rt_nil_check(F->y_1184)).c = F->c_1181;
f_bind_286(F->y_1184, &F->access_1185);
f_define_145(F->y_1184, (*(P518)rt_nil_check(F->inv_1179)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_361(F->inv_1179, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1183, 1), rt_str(";", 1)); b_; }));
F->tests_1177 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->tests_1177)), rt_str("if (", 4)), f_wait_op_361(F->inv_1179, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1183, 0)), rt_str(") { ", 4)), f_wait_op_361(F->inv_1179, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1183, 1)), rt_str("; ", 2)), (*F->w_364)), rt_str(" = ", 3)), f_itos_7(F->i_1176)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1178 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->revokes_1178)), f_wait_op_361(F->inv_1179, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1183, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1176 = rt_add(F->i_1176, ((rt_int)1LL));
F->inv_1179 = (*(P518)rt_nil_check(F->inv_1179)).next;
}
F->a_1175 = (*(P518)rt_nil_check(F->a_1175)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_364)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P513)rt_nil_check(F->tests_1177))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_364), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); if (", 7)), (*F->w_364)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_365)), rt_str(", ", 2)), (*F->arr_363)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_364)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_364)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P513)rt_nil_check(F->revokes_1178)));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_368(P518 s_367) {
  struct f_st_wait_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_367 = s_367;
F->a_1186 = NULL;
F->a_1186 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1187 = ((rt_int)0LL);
F->first_1188 = 1;
F->inits_1189 = NULL;
F->inits_1189 = f_new_buffer_24();
F->user_1190 = 0;
F->arr_1191 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1192 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1186 != NULL)) {
F->inv_1193 = NULL;
F->inv_1193 = (*(P518)rt_nil_check(F->a_1186)).a;
F->n_1187 = rt_add(F->n_1187, f_list_len_54((*(P518)rt_nil_check(F->a_1186)).a));
while ((F->inv_1193 != NULL)) {
if ((!f_builtin_wait_356(F->inv_1193))) {
F->user_1190 = 1;
}
F->inv_1193 = (*(P518)rt_nil_check(F->inv_1193)).next;
}
F->a_1186 = (*(P518)rt_nil_check(F->a_1186)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1191), rt_str("[", 1)), f_itos_7(F->n_1187)), rt_str("];", 2)); b_; }));
if (F->user_1190) {
f_user_wait_366(F->s_367, &F->arr_1191, &F->w_1192, F->n_1187);
} else {
F->a_1186 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1187 = ((rt_int)0LL);
while ((F->a_1186 != NULL)) {
F->inv_1194 = NULL;
F->inv_1194 = (*(P518)rt_nil_check(F->a_1186)).a;
while ((F->inv_1194 != NULL)) {
f_put_27(F->inits_1189, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_354(F->inv_1194, &F->arr_1191, F->n_1187, 0); b_; }));
F->n_1187 = rt_add(F->n_1187, ((rt_int)1LL));
F->inv_1194 = (*(P518)rt_nil_check(F->inv_1194)).next;
}
F->a_1186 = (*(P518)rt_nil_check(F->a_1186)).next;
}
f_splice_34(g_code_562, F->inits_1189);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1192), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1187)), rt_str(", ", 2)), F->arr_1191), rt_str(");", 2)); b_; }));
}
F->a_1186 = (*(P518)rt_nil_check(F->s_367)).a;
F->n_1187 = ((rt_int)0LL);
while ((F->a_1186 != NULL)) {
F->conds_1195 = NULL;
F->conds_1195 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1197 = ((rt_int)1LL), hi1198 = f_list_len_54((*(P518)rt_nil_check(F->a_1186)).a);
for (rt_int it1199 = lo1197; it1199 <= hi1198; it1199++) {
F->i_1196 = it1199;
F->conds_1195 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->conds_1195)), rt_str(" || ", 4)), F->w_1192), rt_str(" == ", 4)), f_itos_7(F->n_1187)); b_; }));
F->n_1187 = rt_add(F->n_1187, ((rt_int)1LL));
}
}
if (F->first_1188) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P513)rt_nil_check(F->conds_1195))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P513)rt_nil_check(F->conds_1195))), rt_str(") {", 3)); b_; }));
}
F->first_1188 = 0;
f_gen_body_307((*(P518)rt_nil_check(F->a_1186)).b);
F->a_1186 = (*(P518)rt_nil_check(F->a_1186)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P518 f_call_node_372(rstr *name_369, P518 arg_370, rt_int line_371) {
  struct f_call_node_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_369 = name_369;
F->arg_370 = arg_370;
F->line_371 = line_371;
F->x_1200 = NULL;
F->x_1200 = f_nn_48(((rt_int)10LL), F->line_371);
F->f_1201 = NULL;
F->f_1201 = f_nn_48(((rt_int)7LL), F->line_371);
(*(P518)rt_nil_check(F->f_1201)).name = f_mk_3(&(*F->name_369));
(*(P518)rt_nil_check(F->x_1200)).a = F->f_1201;
(*(P518)rt_nil_check(F->x_1200)).b = f_copy_node_456(F->arg_370);
(*(P518)rt_nil_check((*(P518)rt_nil_check(F->x_1200)).b)).next = NULL;
F->result_ = F->x_1200;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_374(P518 s_373) {
  struct f_user_region_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_373 = s_373;
F->t_1202 = NULL;
F->f_1203 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1204 = rt_str_copy(f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P518)rt_nil_check(F->s_373)).a, (*(P518)rt_nil_check(F->s_373)).line), 1, &F->t_1202));
F->unlock_1205 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_502(f_call_node_372(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P518)rt_nil_check(F->s_373)).a, (*(P518)rt_nil_check(F->s_373)).line), 1, &F->t_1202)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1204), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1203), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1203), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1203), rt_str("); ", 3)), F->unlock_1205); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_373)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1203), rt_str("); ", 3)), F->unlock_1205); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1203), rt_str("); ", 3)), F->unlock_1205), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_376(P518 s_375) {
  struct f_st_region_376fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_375 = s_375;
F->lv_1206 = NULL;
F->t_1207 = NULL;
F->c_1208 = NULL;
F->lk_1210 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1211 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_431((*(P518)rt_nil_check(F->s_375)).a, &F->lv_1206, &F->t_1207, &F->c_1208, &F->ro_1209);
if (((*(P522)rt_nil_check(F->t_1207)).kind != ((rt_int)13LL))) {
f_user_region_374(F->s_375);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1210), rt_str(" = &", 4)), (*(P513)rt_nil_check(F->lv_1206))), rt_str("; rt_region_enter(", 18)), F->lk_1210), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1211), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1211), rt_str(")) {", 4)); b_; }));
f_push_cleanup_311(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1211), rt_str("); rt_region_leave(", 19)), F->lk_1210), rt_str(");", 2)); b_; }));
f_gen_body_307((*(P518)rt_nil_check(F->s_375)).b);
f_pop_cleanup_312();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1211), rt_str("); rt_region_leave(", 19)), F->lk_1210), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1211), rt_str("); rt_region_leave(", 19)), F->lk_1210), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P518 f_gparam_379(P518 g_377, rstr *name_378) {
  struct f_gparam_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_377 = g_377;
F->name_378 = name_378;
F->p_1212 = NULL;
F->p_1212 = (*(P518)rt_nil_check(F->g_377)).a;
while ((F->p_1212 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1212)).name)), (*F->name_378))) {
F->result_ = F->p_1212;
goto ret_;
}
F->p_1212 = (*(P518)rt_nil_check(F->p_1212)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_bind_sym_381(P518 p_380) {
  struct f_bind_sym_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_380 = p_380;
F->y_1213 = NULL;
if (((*(P518)rt_nil_check(F->p_380)).ival <= ((rt_int)2LL))) {
F->y_1213 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->p_380)).name);
} else {
F->y_1213 = f_new_sym_155(((rt_int)2LL), (*(P518)rt_nil_check(F->p_380)).name);
}
F->result_ = F->y_1213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_384(P526 a_382, P526 b_383) {
  struct f_same_binds_384fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_382 = a_382;
F->b_383 = b_383;
F->x_1214 = NULL;
F->x_1214 = F->a_382;
F->y_1215 = NULL;
F->y_1215 = F->b_383;
while (((F->x_1214 != NULL) && (F->y_1215 != NULL))) {
if (((!rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->x_1214)).name)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1215)).name)))) || (!f_same_binding_387(F->x_1214, F->y_1215)))) {
F->result_ = 0;
goto ret_;
}
F->x_1214 = (*(P526)rt_nil_check(F->x_1214)).mnext;
F->y_1215 = (*(P526)rt_nil_check(F->y_1215)).mnext;
}
F->result_ = ((F->x_1214 == NULL) && (F->y_1215 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_387(P526 a_385, P526 b_386) {
  struct f_same_binding_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static P526 f_tt_binds_392(P518 gd_388, P518 formals_389, P518 actuals_390, rt_int line_391) {
  struct f_tt_binds_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_388 = gd_388;
F->formals_389 = formals_389;
F->actuals_390 = actuals_390;
F->line_391 = line_391;
F->f_1216 = NULL;
F->f_1216 = F->formals_389;
F->a_1217 = NULL;
F->a_1217 = F->actuals_390;
F->binds_1218 = NULL;
F->c_1219 = NULL;
F->at_1220 = NULL;
while (((F->f_1216 != NULL) && (F->a_1217 != NULL))) {
F->p_1221 = NULL;
F->p_1221 = f_gparam_379(F->gd_388, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->f_1216)).name)));
F->b_1222 = NULL;
if ((F->p_1221 == NULL)) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->f_1216)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1222 = f_bind_sym_381(F->p_1221);
if (((*(P518)rt_nil_check(F->p_1221)).ival <= ((rt_int)2LL))) {
if (((*(P518)rt_nil_check(F->a_1217)).kind >= ((rt_int)70LL))) {
(*(P526)rt_nil_check(F->b_1222)).t = f_resolve_subtype_188(F->a_1217, &F->c_1219);
} else {
F->st_1223 = NULL;
F->st_1223 = f_nn_48(((rt_int)80LL), F->line_391);
(*(P518)rt_nil_check(F->st_1223)).name = (*(P518)rt_nil_check(F->a_1217)).name;
(*(P526)rt_nil_check(F->b_1222)).t = f_resolve_subtype_188(F->st_1223, &F->c_1219);
}
(*(P526)rt_nil_check(F->b_1222)).c = F->c_1219;
} else if (((*(P518)rt_nil_check(F->p_1221)).ival <= ((rt_int)5LL))) {
if ((((*(P518)rt_nil_check(F->a_1217)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->a_1217)).name))) == NULL))) {
f_fail_23(F->line_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1221)).name))); b_; }));
}
F->b_1222 = f_copy_sym_253(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->a_1217)).name))));
(*(P526)rt_nil_check(F->b_1222)).name = (*(P518)rt_nil_check(F->p_1221)).name;
} else {
(*(P526)rt_nil_check(F->b_1222)).t = f_resolve_subtype_188((*(P518)rt_nil_check(F->p_1221)).a, &F->c_1219);
(*(P526)rt_nil_check(F->b_1222)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454(F->a_1217, (*(P526)rt_nil_check(F->b_1222)).t, &F->at_1220); b_; }));
(*(P526)rt_nil_check(F->b_1222)).mvalue = f_manifest_217(F->a_1217, &F->ok_1224);
(*(P526)rt_nil_check(F->b_1222)).hasmv = F->ok_1224;
}
(*(P526)rt_nil_check(F->b_1222)).mnext = F->binds_1218;
F->binds_1218 = F->b_1222;
F->f_1216 = (*(P518)rt_nil_check(F->f_1216)).next;
F->a_1217 = (*(P518)rt_nil_check(F->a_1217)).next;
}
F->result_ = F->binds_1218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_394(P518 st_393) {
  struct f_generic_use_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_393 = st_393;
if (((*(P518)rt_nil_check(F->st_393)).kind == ((rt_int)78LL))) {
F->result_ = ((f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P526)rt_nil_check(f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == ((rt_int)10LL)));
goto ret_;
}
F->result_ = (((((*(P518)rt_nil_check(F->st_393)).kind == ((rt_int)80LL)) && ((*(P518)rt_nil_check(F->st_393)).a != NULL)) && (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_393)).name))) != NULL)) && ((*(P526)rt_nil_check(f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->st_393)).name))))).kind == ((rt_int)10LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_infer_from_399(P518 gd_395, P518 pat_396, P522 t_397, P526 known_398) {
  struct f_infer_from_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_395 = gd_395;
F->pat_396 = pat_396;
F->t_397 = t_397;
F->known_398 = known_398;
F->binds_1225 = NULL;
F->binds_1225 = F->known_398;
F->e_1226 = NULL;
F->e_1226 = (*(P518)rt_nil_check(F->pat_396)).a;
F->tp_1227 = NULL;
if (((F->t_397 == NULL) || ((*(P522)rt_nil_check(F->t_397)).gen == NULL))) {
F->result_ = F->binds_1225;
goto ret_;
}
F->tp_1227 = (*(P518)rt_nil_check((*(P526)rt_nil_check((*(P522)rt_nil_check(F->t_397)).gen)).decl)).a;
if (((*(P518)rt_nil_check(F->pat_396)).kind == ((rt_int)78LL))) {
F->e_1226 = f_copy_node_456((*(P518)rt_nil_check(F->pat_396)).a);
(*(P518)rt_nil_check(F->e_1226)).next = NULL;
}
while (((F->e_1226 != NULL) && (F->tp_1227 != NULL))) {
F->nm_1228 = NULL;
if ((((*(P518)rt_nil_check(F->e_1226)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check(F->e_1226)).kind == ((rt_int)80LL)))) {
F->nm_1228 = (*(P518)rt_nil_check(F->e_1226)).name;
}
if ((((F->nm_1228 != NULL) && (f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1228))) != NULL)) && ((*(P518)rt_nil_check(f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1228))))).ival <= ((rt_int)2LL)))) {
F->q_1229 = NULL;
F->q_1229 = F->binds_1225;
F->have_1230 = 0;
while ((F->q_1229 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->q_1229)).name)), (*(P513)rt_nil_check(F->nm_1228)))) {
F->have_1230 = 1;
}
F->q_1229 = (*(P526)rt_nil_check(F->q_1229)).mnext;
}
if ((!F->have_1230)) {
F->g_1231 = NULL;
F->g_1231 = (*(P522)rt_nil_check(F->t_397)).gbinds;
while ((F->g_1231 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->g_1231)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->tp_1227)).name)))) {
F->b_1232 = NULL;
F->b_1232 = f_bind_sym_381(f_gparam_379(F->gd_395, &(*(P513)rt_nil_check(F->nm_1228))));
(*(P526)rt_nil_check(F->b_1232)).t = (*(P526)rt_nil_check(F->g_1231)).t;
(*(P526)rt_nil_check(F->b_1232)).c = (*(P526)rt_nil_check(F->g_1231)).c;
(*(P526)rt_nil_check(F->b_1232)).mnext = F->binds_1225;
F->binds_1225 = F->b_1232;
}
F->g_1231 = (*(P526)rt_nil_check(F->g_1231)).mnext;
}
}
}
F->e_1226 = (*(P518)rt_nil_check(F->e_1226)).next;
F->tp_1227 = (*(P518)rt_nil_check(F->tp_1227)).next;
}
F->result_ = F->binds_1225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_instantiate_type_405(P526 g_400, P518 tt_401, P518 args_402, P520 *c_403, rt_int line_404) {
  struct f_instantiate_type_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_400 = g_400;
F->tt_401 = tt_401;
F->args_402 = args_402;
F->c_403 = c_403;
F->c_403v = *F->c_403;
F->line_404 = line_404;
F->gd_1233 = NULL;
F->gd_1233 = (*(P526)rt_nil_check(F->g_400)).decl;
F->pat_1234 = NULL;
F->pat_1234 = (*(P518)rt_nil_check(F->gd_1233)).b;
F->binds_1235 = NULL;
F->binds_1235 = f_tt_binds_392(F->gd_1233, (*(P518)rt_nil_check(F->pat_1234)).e, F->tt_401, F->line_404);
F->inst_1236 = NULL;
F->inst_1236 = g_all_insts_550;
F->t_1237 = NULL;
F->saved_caps_1238 = NULL;
F->saved_caps_1238 = g_caps_567;
F->saved_env_1239 = NULL;
F->saved_env_1239 = g_genv_549;
F->c_403v = f_new_cons_158();
(*(P520)rt_nil_check(F->c_403v)).args = F->args_402;
while ((F->inst_1236 != NULL)) {
if ((((*(P526)rt_nil_check(F->inst_1236)).decl == F->pat_1234) && f_same_binds_384((*(P526)rt_nil_check(F->inst_1236)).members, F->binds_1235))) {
F->result_ = (*(P526)rt_nil_check(F->inst_1236)).t;
goto ret_;
}
F->inst_1236 = (*(P526)rt_nil_check(F->inst_1236)).insts;
}
f_open_scope_151();
{
F->b_1240 = NULL;
F->b_1240 = F->binds_1235;
while ((F->b_1240 != NULL)) {
f_define_145(F->b_1240, F->line_404);
F->b_1240 = (*(P526)rt_nil_check(F->b_1240)).mnext;
}
}
g_caps_567 = NULL;
g_genv_549 = (*(P526)rt_nil_check(F->g_400)).env;
{
F->y_1241 = NULL;
F->y_1241 = f_new_sym_155(((rt_int)5LL), (*(P518)rt_nil_check(F->pat_1234)).name);
F->yc_1242 = NULL;
(*(P526)rt_nil_check(F->y_1241)).decl = F->pat_1234;
if (((*(P518)rt_nil_check(F->pat_1234)).kind == ((rt_int)44LL))) {
F->t_1237 = f_new_typ_157(((rt_int)8LL));
(*(P522)rt_nil_check(F->t_1237)).name = (*(P518)rt_nil_check(F->pat_1234)).name;
(*(P522)rt_nil_check(F->t_1237)).decl = F->pat_1234;
(*(P526)rt_nil_check(F->y_1241)).t = F->t_1237;
f_define_145(F->y_1241, F->line_404);
f_finish_ptr_274(F->t_1237);
} else {
f_define_145(F->y_1241, F->line_404);
F->t_1237 = f_new_type_200(F->y_1241, f_nn_48(((rt_int)80LL), F->line_404), &F->yc_1242);
}
}
g_caps_567 = F->saved_caps_1238;
g_genv_549 = F->saved_env_1239;
(*(P522)rt_nil_check(F->t_1237)).gen = F->g_400;
(*(P522)rt_nil_check(F->t_1237)).gbinds = F->binds_1235;
f_close_scope_152();
{ R527 *cell1243 = rt_alloc(sizeof(R527));
(*cell1243).name = NULL;
(*cell1243).t = NULL;
(*cell1243).c = NULL;
(*cell1243).access = NULL;
(*cell1243).cname = NULL;
(*cell1243).st = NULL;
(*cell1243).decl = NULL;
(*cell1243).params = NULL;
(*cell1243).result = NULL;
(*cell1243).members = NULL;
(*cell1243).mnext = NULL;
(*cell1243).binds = NULL;
(*cell1243).insts = NULL;
(*cell1243).env = NULL;
(*cell1243).chain = NULL;
(*cell1243).stack = NULL;
F->inst_1236 = cell1243;
}
(*(P526)rt_nil_check(F->inst_1236)).kind = ((rt_int)5LL);
(*(P526)rt_nil_check(F->inst_1236)).name = (*(P526)rt_nil_check(F->g_400)).name;
(*(P526)rt_nil_check(F->inst_1236)).decl = F->pat_1234;
(*(P526)rt_nil_check(F->inst_1236)).t = F->t_1237;
(*(P526)rt_nil_check(F->inst_1236)).members = F->binds_1235;
(*(P526)rt_nil_check(F->inst_1236)).insts = g_all_insts_550;
g_all_insts_550 = F->inst_1236;
F->result_ = F->t_1237;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_403) = F->c_403v;
  RT_FPOP();
  return F->result_;
}

static P526 f_instantiate_410(P526 g_406, P518 tt_407, P518 args_408, rt_int line_409) {
  struct f_instantiate_410fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_406 = g_406;
F->tt_407 = tt_407;
F->args_408 = args_408;
F->line_409 = line_409;
F->gd_1244 = NULL;
F->gd_1244 = (*(P526)rt_nil_check(F->g_406)).decl;
F->pat_1245 = NULL;
F->pat_1245 = (*(P518)rt_nil_check(F->gd_1244)).b;
F->binds_1246 = NULL;
F->f_1247 = NULL;
F->f_1247 = (*(P518)rt_nil_check(F->pat_1245)).e;
F->a_1248 = NULL;
F->a_1248 = F->tt_407;
F->fp_1249 = NULL;
F->fp_1249 = (*(P518)rt_nil_check(F->pat_1245)).a;
F->inst_1250 = NULL;
F->at_1251 = NULL;
F->c_1252 = NULL;
F->saved_fctx_1253 = NULL;
F->saved_fctx_1253 = g_fctx_566;
F->saved_in_1254 = g_in_func_564;
F->saved_level_1255 = g_cur_level_565;
F->saved_sym_1256 = NULL;
F->saved_sym_1256 = g_func_sym_574;
F->saved_code_1257 = NULL;
F->saved_code_1257 = g_code_562;
F->saved_env_1258 = NULL;
F->saved_env_1258 = g_genv_549;
F->binds_1246 = f_tt_binds_392(F->gd_1244, F->f_1247, F->a_1248, F->line_409);
F->a_1248 = F->args_408;
while (((F->fp_1249 != NULL) && (F->a_1248 != NULL))) {
if (f_generic_use_394((*(P518)rt_nil_check(F->fp_1249)).a)) {
F->v_1259 = rt_str_copy(f_gexpr_454(F->a_1248, NULL, &F->at_1251));
F->binds_1246 = f_infer_from_399(F->gd_1244, (*(P518)rt_nil_check(F->fp_1249)).a, F->at_1251, F->binds_1246);
} else if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1249)).a)).kind == ((rt_int)80LL)) && (f_gparam_379(F->gd_1244, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1249)).a)).name))) != NULL)) && ((*(P518)rt_nil_check(f_gparam_379(F->gd_1244, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1249)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1260 = 0;
F->q_1261 = NULL;
F->q_1261 = F->binds_1246;
while ((F->q_1261 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->q_1261)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1249)).a)).name)))) {
F->known_1260 = 1;
}
F->q_1261 = (*(P526)rt_nil_check(F->q_1261)).mnext;
}
if ((!F->known_1260)) {
F->b_1262 = NULL;
F->b_1262 = f_bind_sym_381(f_gparam_379(F->gd_1244, &(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->fp_1249)).a)).name))));
F->v_1263 = rt_str_copy(f_gexpr_454(F->a_1248, NULL, &F->at_1251));
(*(P526)rt_nil_check(F->b_1262)).t = F->at_1251;
(*(P526)rt_nil_check(F->b_1262)).c = g_no_cons_592;
(*(P526)rt_nil_check(F->b_1262)).mnext = F->binds_1246;
F->binds_1246 = F->b_1262;
}
}
F->fp_1249 = (*(P518)rt_nil_check(F->fp_1249)).next;
F->a_1248 = (*(P518)rt_nil_check(F->a_1248)).next;
}
F->inst_1250 = g_all_insts_550;
while ((F->inst_1250 != NULL)) {
if ((((*(P526)rt_nil_check(F->inst_1250)).decl == F->pat_1245) && f_same_binds_384((*(P526)rt_nil_check(F->inst_1250)).members, F->binds_1246))) {
F->result_ = F->inst_1250;
goto ret_;
}
F->inst_1250 = (*(P526)rt_nil_check(F->inst_1250)).insts;
}
g_fctx_566 = NULL;
g_in_func_564 = 0;
g_cur_level_565 = ((rt_int)0LL);
g_func_sym_574 = NULL;
g_code_562 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1264 = NULL;
F->b_1264 = F->binds_1246;
while ((F->b_1264 != NULL)) {
f_define_145(F->b_1264, F->line_409);
F->b_1264 = (*(P526)rt_nil_check(F->b_1264)).mnext;
}
}
g_genv_549 = (*(P526)rt_nil_check(F->g_406)).env;
F->inst_1250 = f_build_subprogram_278(F->pat_1245);
(*(P526)rt_nil_check(F->inst_1250)).members = F->binds_1246;
(*(P526)rt_nil_check(F->inst_1250)).insts = g_all_insts_550;
g_all_insts_550 = F->inst_1250;
f_define_145(F->inst_1250, F->line_409);
f_gen_subprogram_295(F->pat_1245, F->inst_1250);
f_close_scope_152();
g_fctx_566 = F->saved_fctx_1253;
g_in_func_564 = F->saved_in_1254;
g_cur_level_565 = F->saved_level_1255;
g_func_sym_574 = F->saved_sym_1256;
g_code_562 = F->saved_code_1257;
g_genv_549 = F->saved_env_1258;
F->result_ = F->inst_1250;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_412(P526 y_411) {
  struct f_access_of_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_411 = y_411;
F->p_1265 = NULL;
F->p_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P526)rt_nil_check(F->y_411)).level <= ((rt_int)0LL))) {
F->result_ = (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access));
goto ret_;
}
{ rt_int lo1267 = ((rt_int)1LL), hi1268 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_411)).level);
for (rt_int it1269 = lo1267; it1269 <= hi1268; it1269++) {
F->i_1266 = it1269;
F->p_1265 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->p_1265)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P526)rt_nil_check(F->y_411)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P513)rt_nil_check(F->p_1265))), rt_str("->", 2)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->p_1265)), rt_str("->", 2)), (*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_411)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_import_of_415(P518 l_413, rstr *name_414) {
  struct f_import_of_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_413 = l_413;
F->name_414 = name_414;
F->p_1270 = NULL;
F->p_1270 = F->l_413;
while ((F->p_1270 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1270)).name)), (*F->name_414))) {
F->result_ = F->p_1270;
goto ret_;
}
F->p_1270 = (*(P518)rt_nil_check(F->p_1270)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_418(P526 y_416, rt_int line_417) {
  struct f_check_import_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_416 = y_416;
F->line_417 = line_417;
F->c_1271 = NULL;
F->c_1271 = g_fctx_566;
F->ro_1272 = 0;
while (((F->c_1271 != NULL) && ((*(P526)rt_nil_check(F->y_416)).depth < (*(P542)rt_nil_check(F->c_1271)).depth))) {
if ((!(*(P542)rt_nil_check(F->c_1271)).all_imp)) {
F->imp_1273 = NULL;
F->imp_1273 = f_import_of_415((*(P542)rt_nil_check(F->c_1271)).imps, &(*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_416)).name)));
if ((F->imp_1273 == NULL)) {
f_fail_23(F->line_417, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_416)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P518)rt_nil_check(F->imp_1273)).ival == ((rt_int)1LL))) {
F->ro_1272 = 1;
}
}
F->c_1271 = (*(P542)rt_nil_check(F->c_1271)).next;
}
F->result_ = F->ro_1272;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_420(rstr *s_419) {
  struct f_c_ident_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_423(rstr *base_421, P522 t_422) {
  struct f_deref_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_421 = base_421;
F->t_422 = t_422;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_422)), rt_str(")rt_nil_check(", 14)), (*F->base_421)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_425(P518 e_424) {
  struct f_is_lvalue_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_424 = e_424;
if (((*(P518)rt_nil_check(F->e_424)).kind == ((rt_int)7LL))) {
F->y_1274 = NULL;
F->y_1274 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_424)).name)));
F->result_ = ((F->y_1274 != NULL) && (((*(P526)rt_nil_check(F->y_1274)).kind == ((rt_int)1LL)) || ((*(P526)rt_nil_check(F->y_1274)).kind == ((rt_int)2LL))));
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
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_431(P518 e_426, P513 *code_427, P522 *t_428, P520 *c_429, int *ro_430) {
  struct f_lvalue_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_426 = e_426;
F->code_427 = code_427;
F->code_427v = *F->code_427;
F->t_428 = t_428;
F->t_428v = *F->t_428;
F->c_429 = c_429;
F->c_429v = *F->c_429;
F->ro_430 = ro_430;
F->ro_430v = *F->ro_430;
F->base_1275 = NULL;
F->bt_1276 = NULL;
F->bc_1277 = NULL;
if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)7LL))) {
F->y_1278 = NULL;
F->y_1278 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)));
if ((F->y_1278 == NULL)) {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P526)rt_nil_check(F->y_1278)).kind != ((rt_int)1LL)) && ((*(P526)rt_nil_check(F->y_1278)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_426)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_412(F->y_1278); b_; }));
F->t_428v = (*(P526)rt_nil_check(F->y_1278)).t;
F->c_429v = (*(P526)rt_nil_check(F->y_1278)).c;
F->ro_430v = (*(P526)rt_nil_check(F->y_1278)).ro_flag;
if ((((*(P526)rt_nil_check(F->y_1278)).kind == ((rt_int)1LL)) && f_check_import_418(F->y_1278, (*(P518)rt_nil_check(F->e_426)).line))) {
F->ro_430v = 1;
}
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)17LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->code_427v, &F->t_428v, &F->c_429v, &F->ro_430v);
} else if ((((((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)12LL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_426)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_426)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_427v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_490((*(P518)rt_nil_check(F->e_426)).b, (*(P518)rt_nil_check(F->e_426)).line, &F->t_428v); b_; }));
F->c_429v = g_no_cons_592;
F->ro_430v = 0;
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)11LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->base_1275, &F->bt_1276, &F->bc_1277, &F->ro_430v);
f_select_on_439(&(*(P513)rt_nil_check(F->base_1275)), F->bt_1276, F->e_426, &F->ro_430v, &F->code_427v, &F->t_428v, &F->c_429v);
} else if (((*(P518)rt_nil_check(F->e_426)).kind == ((rt_int)10LL))) {
f_lvalue_431((*(P518)rt_nil_check(F->e_426)).a, &F->base_1275, &F->bt_1276, &F->bc_1277, &F->ro_430v);
f_index_on_448(&(*(P513)rt_nil_check(F->base_1275)), F->bt_1276, F->e_426, &F->ro_430v, 1, &F->code_427v, &F->t_428v, &F->c_429v);
} else {
f_fail_23((*(P518)rt_nil_check(F->e_426)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_427) = F->code_427v;  (*F->t_428) = F->t_428v;  (*F->c_429) = F->c_429v;  (*F->ro_430) = F->ro_430v;
  RT_FPOP();
  return;
}

static void f_select_on_439(rstr *base_432, P522 bt_433, P518 e_434, int *ro_435, P513 *code_436, P522 *t_437, P520 *c_438) {
  struct f_select_on_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
F->c_438v = g_no_cons_592;
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
F->p_1279 = NULL;
F->p_1279 = (*(P522)rt_nil_check(F->bt_433)).tparams;
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
while ((F->p_1279 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1279)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))) {
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_432), rt_str(".p_", 3)), f_lower_s_15(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1279)).name)))); b_; }));
F->t_437v = f_tparam_type_210(F->bt_433, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1279)).name)));
(*F->ro_435) = 1;
goto ret_;
}
F->p_1279 = (*(P518)rt_nil_check(F->p_1279)).next;
}
f_select_on_439(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_432), rt_str(".all", 4)); b_; }), (*(P522)rt_nil_check(F->bt_433)).under, F->e_434, &(*F->ro_435), &F->code_436v, &F->t_437v, &F->c_438v);
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_433)).kind == ((rt_int)7LL))) {
F->f_1280 = NULL;
F->f_1280 = (*(P522)rt_nil_check(F->bt_433)).fields;
while ((F->f_1280 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1280)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))) {
F->c_438v = (*(P524)rt_nil_check(F->f_1280)).c;
F->code_436v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_432), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name)))); b_; }));
F->t_437v = (*(P524)rt_nil_check(F->f_1280)).t;
goto ret_;
}
F->f_1280 = (*(P524)rt_nil_check(F->f_1280)).next;
}
f_fail_23((*(P518)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name))); b_; }));
}
f_fail_23((*(P518)rt_nil_check(F->e_434)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_434)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_436) = F->code_436v;  (*F->t_437) = F->t_437v;  (*F->c_438) = F->c_438v;
  RT_FPOP();
  return;
}

static void f_index_on_448(rstr *base_440, P522 bt_441, P518 e_442, int *ro_443, int lv_444, P513 *code_445, P522 *t_446, P520 *c_447) {
  struct f_index_on_448fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
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
F->a_1281 = NULL;
F->a_1281 = (*(P518)rt_nil_check(F->e_442)).b;
F->it_1282 = NULL;
F->c_447v = g_no_cons_592;
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
if ((f_list_len_54(F->a_1281) != ((rt_int)2LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1283 = rt_str_copy(f_gexpr_454(F->a_1281, (*(P522)rt_nil_check(F->bt_441)).idx, &F->it_1282));
F->j_1284 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1281)).next, (*(P522)rt_nil_check(F->bt_441)).idx2, &F->it_1282));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_440), rt_str(".p[(rt_index(", 13)), F->i_1283), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo, ", 5)), (*F->base_440)), rt_str(".hi) - ", 7)), (*F->base_440)), rt_str(".lo) * (", 8)), (*F->base_440)), rt_str(".hi2 - ", 7)), (*F->base_440)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1284), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo2, ", 6)), (*F->base_440)), rt_str(".hi2) - ", 8)), (*F->base_440)), rt_str(".lo2]", 5)); b_; }));
F->t_446v = (*(P522)rt_nil_check(F->bt_441)).elem;
F->c_447v = (*(P522)rt_nil_check(F->bt_441)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1281) != ((rt_int)1LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)5LL))) {
if (((*(P518)rt_nil_check(F->a_1281)).kind == ((rt_int)16LL))) {
F->lo_1285 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1281)).a, g_ty_int_581, &F->it_1282));
F->hi_1286 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->a_1281)).b, g_ty_int_581, &F->it_1282));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_440)), rt_str(", ", 2)), F->lo_1285), rt_str(", ", 2)), F->hi_1286), rt_str(")", 1)); b_; }));
F->t_446v = g_ty_string_585;
(*F->ro_443) = 1;
goto ret_;
}
{
F->i_1287 = rt_str_copy(f_gexpr_454(F->a_1281, g_ty_int_581, &F->it_1282));
F->t_446v = g_ty_ascii_584;
if (F->lv_444) {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_440)), rt_str(", ", 2)), F->i_1287), rt_str("))", 2)); b_; }));
} else {
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_440)), rt_str(", ", 2)), F->i_1287), rt_str(")", 1)); b_; }));
(*F->ro_443) = 1;
}
}
goto ret_;
}
if (((*(P522)rt_nil_check(F->bt_441)).kind == ((rt_int)6LL))) {
F->i_1288 = rt_str_copy(f_gexpr_454(F->a_1281, (*(P522)rt_nil_check(F->bt_441)).idx, &F->it_1282));
F->code_445v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_440), rt_str(".p[rt_index(", 12)), F->i_1288), rt_str(", ", 2)), (*F->base_440)), rt_str(".lo, ", 5)), (*F->base_440)), rt_str(".hi) - ", 7)), (*F->base_440)), rt_str(".lo]", 4)); b_; }));
F->t_446v = (*(P522)rt_nil_check(F->bt_441)).elem;
F->c_447v = (*(P522)rt_nil_check(F->bt_441)).elemcons;
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_442)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_445) = F->code_445v;  (*F->t_446) = F->t_446v;  (*F->c_447) = F->c_447v;
  RT_FPOP();
  return;
}

static int f_own_attribute_450(P518 e_449) {
  struct f_own_attribute_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_449 = e_449;
F->saved_1289 = NULL;
F->saved_1289 = g_code_562;
F->bt_1290 = NULL;
F->ok_1291 = 0;
g_trial_579 = rt_add(g_trial_579, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1292;
if (RT_TRY(xf1292)) {
F->base_1294 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_449)).a, NULL, &F->bt_1290));
while (((F->bt_1290 != NULL) && ((*(P522)rt_nil_check(F->bt_1290)).kind == ((rt_int)8LL)))) {
f_finish_ptr_274(F->bt_1290);
F->bt_1290 = (*(P522)rt_nil_check(F->bt_1290)).target;
}
if (((F->bt_1290 != NULL) && ((*(P522)rt_nil_check(F->bt_1290)).kind == ((rt_int)15LL)))) {
F->p_1295 = NULL;
F->p_1295 = (*(P522)rt_nil_check(F->bt_1290)).tparams;
while ((F->p_1295 != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->p_1295)).name)), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_449)).name)))) {
F->ok_1291 = 1;
}
F->p_1295 = (*(P518)rt_nil_check(F->p_1295)).next;
}
}
RT_POP(xf1292);
} else {
RT_POP(xf1292);
int x1293 = rt_xcur;
if (0 || x1293 == ex_compile_error_1) {
F->ok_1291 = 0;
} else {
rt_raise(x1293);
}
}
}
g_trial_579 = rt_sub(g_trial_579, ((rt_int)1LL));
g_code_562 = F->saved_1289;
F->result_ = F->ok_1291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_454(P518 e_451, P522 want_452, P522 *t_453) {
  struct f_gexpr_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_451 = e_451;
F->want_452 = want_452;
F->t_453 = t_453;
F->t_453v = *F->t_453;
F->k_1296 = (*(P518)rt_nil_check(F->e_451)).kind;
F->code_1297 = NULL;
F->c_1298 = NULL;
F->bt_1300 = NULL;
F->t_453v = g_ty_int_581;
if ((F->k_1296 == ((rt_int)1LL))) {
if (((F->want_452 != NULL) && ((*(P522)rt_nil_check(F->want_452)).kind == ((rt_int)3LL)))) {
F->t_453v = g_ty_float_583;
F->result_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1296 == ((rt_int)2LL))) {
F->t_453v = g_ty_float_583;
F->result_ = (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name));
goto ret_;
} else if ((F->k_1296 == ((rt_int)5LL))) {
F->t_453v = g_ty_bool_582;
F->result_ = f_itos_7((*(P518)rt_nil_check(F->e_451)).ival);
goto ret_;
} else if ((F->k_1296 == ((rt_int)3LL))) {
F->t_453v = g_ty_string_585;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_460(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)))), rt_str(", ", 2)), f_itos_7(((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1296 == ((rt_int)6LL))) {
F->t_453v = g_ty_nil_588;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1296 == ((rt_int)4LL))) {
if (((F->want_452 != NULL) && ((*(P522)rt_nil_check(f_base_of_166(F->want_452))).kind == ((rt_int)4LL)))) {
F->t_453v = F->want_452;
} else {
F->t_453v = f_enum_type_of_463(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), (*(P518)rt_nil_check(F->e_451)).line);
}
{
F->i_1301 = f_lit_index_185((*(P522)rt_nil_check(f_base_of_166(F->t_453v))).lits, &(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)));
if ((F->i_1301 < ((rt_int)0LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1301);
goto ret_;
}
} else if ((F->k_1296 == ((rt_int)17LL))) {
F->result_ = f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v);
goto ret_;
} else if ((F->k_1296 == ((rt_int)7LL))) {
F->y_1302 = NULL;
F->y_1302 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)));
if ((F->y_1302 == NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("ME", 2))) {
F->t_453v = g_ty_act_591;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NIL_ACT", 7))) {
F->t_453v = g_ty_act_591;
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
if ((((*(P526)rt_nil_check(F->y_1302)).kind == ((rt_int)1LL)) || ((*(P526)rt_nil_check(F->y_1302)).kind == ((rt_int)2LL)))) {
F->t_453v = (*(P526)rt_nil_check(F->y_1302)).t;
if (((*(P526)rt_nil_check(F->y_1302)).kind == ((rt_int)1LL))) {
F->ro_1303 = f_check_import_418(F->y_1302, (*(P518)rt_nil_check(F->e_451)).line);
}
F->result_ = f_access_of_412(F->y_1302);
goto ret_;
}
if (((*(P526)rt_nil_check(F->y_1302)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1296 == ((rt_int)8LL)) && (f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name))) != NULL)) && (f_user_op_498(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), f_copy_node_456((*(P518)rt_nil_check(F->e_451)).a)) != NULL))) {
F->call_1304 = NULL;
F->call_1304 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_451)).line);
F->fname_1305 = NULL;
F->fname_1305 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->e_451)).line);
(*(P518)rt_nil_check(F->fname_1305)).name = (*(P518)rt_nil_check(F->e_451)).name;
(*(P518)rt_nil_check(F->call_1304)).a = F->fname_1305;
(*(P518)rt_nil_check(F->call_1304)).b = f_copy_node_456((*(P518)rt_nil_check(F->e_451)).a);
F->result_ = f_gcall_502(F->call_1304, 0, &F->t_453v);
goto ret_;
} else if (((((F->k_1296 == ((rt_int)8LL)) && rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NOT", 3))) && (F->want_452 != NULL)) && ((*(P522)rt_nil_check(F->want_452)).kind == ((rt_int)16LL)))) {
F->a_1306 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1306), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check((*(P522)rt_nil_check(F->want_452)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1296 == ((rt_int)8LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("NOT", 3))) {
F->a_1307 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, g_ty_bool_582, &F->t_453v));
f_check_type_175(F->t_453v, g_ty_bool_582, (*(P518)rt_nil_check(F->e_451)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1307), rt_str(")", 1));
goto ret_;
}
{
F->a_1308 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, F->want_452, &F->t_453v));
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("+", 1))) {
F->result_ = F->a_1308;
goto ret_;
} else if (((*(P522)rt_nil_check(F->t_453v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1308), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_453v, g_ty_int_581, (*(P518)rt_nil_check(F->e_451)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1308), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1296 == ((rt_int)9LL))) {
F->result_ = f_gbinop_470(F->e_451, F->want_452, &F->t_453v);
goto ret_;
} else if ((F->k_1296 == ((rt_int)10LL))) {
if ((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_451)).a)).kind == ((rt_int)7LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_451)).a)).kind == ((rt_int)12LL)))) {
F->nm_1309 = NULL;
F->nm_1309 = (*(P518)rt_nil_check(F->e_451)).a;
F->y_1310 = NULL;
if (((*(P518)rt_nil_check(F->nm_1309)).kind == ((rt_int)12LL))) {
F->nm_1309 = (*(P518)rt_nil_check(F->nm_1309)).a;
}
F->y_1310 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->nm_1309)).name)));
if (((((F->y_1310 == NULL) || ((*(P526)rt_nil_check(F->y_1310)).kind == ((rt_int)3LL))) || ((*(P526)rt_nil_check(F->y_1310)).kind == ((rt_int)4LL))) || ((*(P526)rt_nil_check(F->y_1310)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_502(F->e_451, 0, &F->t_453v);
goto ret_;
}
}
{
F->base_1311 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, NULL, &F->bt_1300));
F->ro_1299 = 1;
f_index_on_448(&F->base_1311, F->bt_1300, F->e_451, &F->ro_1299, 0, &F->code_1297, &F->t_453v, &F->c_1298);
F->result_ = (*(P513)rt_nil_check(F->code_1297));
goto ret_;
}
} else if ((F->k_1296 == ((rt_int)11LL))) {
if ((((rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_451)).name)), rt_str("MAX", 3))) && (!f_own_attribute_450(F->e_451)))) {
F->result_ = f_attribute_466(F->e_451, &F->t_453v);
goto ret_;
}
{
F->base_1312 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_451)).a, NULL, &F->bt_1300));
F->ro_1299 = 1;
f_select_on_439(&F->base_1312, F->bt_1300, F->e_451, &F->ro_1299, &F->code_1297, &F->t_453v, &F->c_1298);
F->result_ = (*(P513)rt_nil_check(F->code_1297));
goto ret_;
}
} else if ((F->k_1296 == ((rt_int)12LL))) {
F->result_ = f_gcall_502(f_wrap_apply_458(F->e_451), 0, &F->t_453v);
goto ret_;
} else if ((F->k_1296 == ((rt_int)14LL))) {
F->result_ = f_constructor_474(F->e_451, F->want_452, &F->t_453v);
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_453) = F->t_453v;
  RT_FPOP();
  return F->result_;
}

static P518 f_copy_node_456(P518 e_455) {
  struct f_copy_node_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_455 = e_455;
F->x_1313 = NULL;
{ R519 *cell1314 = rt_alloc(sizeof(R519));
(*cell1314).name = NULL;
(*cell1314).tag = NULL;
(*cell1314).a = NULL;
(*cell1314).b = NULL;
(*cell1314).c = NULL;
(*cell1314).d = NULL;
(*cell1314).e = NULL;
(*cell1314).next = NULL;
F->x_1313 = cell1314;
}
(*(P518)rt_nil_check(F->x_1313)).kind = (*(P518)rt_nil_check(F->e_455)).kind;
(*(P518)rt_nil_check(F->x_1313)).line = (*(P518)rt_nil_check(F->e_455)).line;
(*(P518)rt_nil_check(F->x_1313)).ival = (*(P518)rt_nil_check(F->e_455)).ival;
(*(P518)rt_nil_check(F->x_1313)).flag = (*(P518)rt_nil_check(F->e_455)).flag;
(*(P518)rt_nil_check(F->x_1313)).name = (*(P518)rt_nil_check(F->e_455)).name;
(*(P518)rt_nil_check(F->x_1313)).tag = (*(P518)rt_nil_check(F->e_455)).tag;
(*(P518)rt_nil_check(F->x_1313)).a = (*(P518)rt_nil_check(F->e_455)).a;
(*(P518)rt_nil_check(F->x_1313)).b = (*(P518)rt_nil_check(F->e_455)).b;
(*(P518)rt_nil_check(F->x_1313)).c = (*(P518)rt_nil_check(F->e_455)).c;
(*(P518)rt_nil_check(F->x_1313)).d = (*(P518)rt_nil_check(F->e_455)).d;
F->result_ = F->x_1313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P518 f_wrap_apply_458(P518 e_457) {
  struct f_wrap_apply_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_457 = e_457;
F->x_1315 = NULL;
F->x_1315 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_457)).line);
(*(P518)rt_nil_check(F->x_1315)).a = F->e_457;
F->result_ = F->x_1315;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_460(rstr *s_459) {
  struct f_c_string_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_459 = s_459;
F->n_1316 = ((rt_int)0LL);
{ rt_int lo1318 = ((rt_int)1LL), hi1319 = ((*F->s_459)).len;
for (rt_int it1320 = lo1318; it1320 <= hi1319; it1320++) {
F->i_1317 = it1320;
if (((rt_str_get((*F->s_459), F->i_1317) == 92) || (rt_str_get((*F->s_459), F->i_1317) == 63))) {
F->n_1316 = rt_add(F->n_1316, ((rt_int)1LL));
}
}
}
{
F->r_1321 = rt_str_new(rt_add(rt_add(((*F->s_459)).len, F->n_1316), ((rt_int)2LL)));
F->j_1322 = ((rt_int)1LL);
(*rt_str_at(&F->r_1321, ((rt_int)1LL))) = 34;
{ rt_int lo1324 = ((rt_int)1LL), hi1325 = ((*F->s_459)).len;
for (rt_int it1326 = lo1324; it1326 <= hi1325; it1326++) {
F->i_1323 = it1326;
F->j_1322 = rt_add(F->j_1322, ((rt_int)1LL));
if (((rt_str_get((*F->s_459), F->i_1323) == 92) || (rt_str_get((*F->s_459), F->i_1323) == 63))) {
(*rt_str_at(&F->r_1321, F->j_1322)) = 92;
F->j_1322 = rt_add(F->j_1322, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1321, F->j_1322)) = rt_str_get((*F->s_459), F->i_1323);
}
}
(*rt_str_at(&F->r_1321, rt_add(F->j_1322, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1321;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P522 f_enum_type_of_463(rstr *lit_461, rt_int line_462) {
  struct f_enum_type_of_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_461 = lit_461;
F->line_462 = line_462;
F->y_1327 = NULL;
F->y_1327 = g_scope_stack_552;
F->c_1328 = NULL;
if ((f_lit_index_185((*(P522)rt_nil_check(g_ty_ascii_584)).lits, &(*F->lit_461)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_584;
goto ret_;
}
while ((F->y_1327 != NULL)) {
if ((((((*(P526)rt_nil_check(F->y_1327)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_1327)).kind == ((rt_int)5LL))) && ((*(P526)rt_nil_check(F->y_1327)).st != NULL)) && ((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_1327)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P518)rt_nil_check((*(P526)rt_nil_check(F->y_1327)).st)).a, &(*F->lit_461)) >= ((rt_int)0LL))) {
if (((*(P526)rt_nil_check(F->y_1327)).kind == ((rt_int)5LL))) {
F->st_1329 = NULL;
F->st_1329 = f_nn_48(((rt_int)80LL), F->line_462);
(*(P518)rt_nil_check(F->st_1329)).name = (*(P526)rt_nil_check(F->y_1327)).name;
F->result_ = f_resolve_subtype_188(F->st_1329, &F->c_1328);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P526)rt_nil_check(F->y_1327)).st, &F->c_1328);
goto ret_;
}
}
F->y_1327 = (*(P526)rt_nil_check(F->y_1327)).stack;
}
f_fail_23(F->line_462, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_461)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_466(P518 e_464, P522 *t_465) {
  struct f_attribute_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_464 = e_464;
F->t_465 = t_465;
F->t_465v = *F->t_465;
F->bt_1330 = NULL;
F->c_1331 = NULL;
F->t_465v = g_ty_int_581;
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("LEN", 3))) {
F->base_1332 = NULL;
F->base_1332 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_454((*(P518)rt_nil_check(F->e_464)).a, NULL, &F->bt_1330); b_; }));
if (((*(P522)rt_nil_check(F->bt_1330)).kind == ((rt_int)8LL))) {
f_finish_ptr_274(F->bt_1330);
F->base_1332 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_423(&(*(P513)rt_nil_check(F->base_1332)), F->bt_1330); b_; }));
F->bt_1330 = (*(P522)rt_nil_check(F->bt_1330)).target;
}
if (((*(P522)rt_nil_check(F->bt_1330)).kind != ((rt_int)5LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_464)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P513)rt_nil_check(F->base_1332))), rt_str(").len", 5));
goto ret_;
}
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).kind == ((rt_int)7LL))) {
F->y_1333 = NULL;
F->y_1333 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).name)));
if (((F->y_1333 != NULL) && (((*(P526)rt_nil_check(F->y_1333)).kind == ((rt_int)6LL)) || ((*(P526)rt_nil_check(F->y_1333)).kind == ((rt_int)5LL))))) {
F->st_1334 = NULL;
F->st_1334 = f_nn_48(((rt_int)80LL), (*(P518)rt_nil_check(F->e_464)).line);
(*(P518)rt_nil_check(F->st_1334)).name = (*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_464)).a)).name;
F->t_465v = f_resolve_subtype_188(F->st_1334, &F->c_1331);
if (((*(P522)rt_nil_check(F->t_465v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(F->t_465v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P520)rt_nil_check(F->c_1331)).lo != NULL)) {
if (rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check(F->e_464)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1331)).lo));
goto ret_;
}
F->result_ = (*(P513)rt_nil_check((*(P520)rt_nil_check(F->c_1331)).hi));
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
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_470(P518 e_467, P522 want_468, P522 *t_469) {
  struct f_gbinop_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_467 = e_467;
F->want_468 = want_468;
F->t_469 = t_469;
F->t_469v = *F->t_469;
F->op_1335 = NULL;
F->op_1335 = (*(P518)rt_nil_check(F->e_467)).name;
F->ta_1336 = NULL;
F->tb_1337 = NULL;
F->hint_1338 = NULL;
F->uy_1339 = NULL;
F->t_469v = g_ty_bool_582;
if ((f_lookup_140(&(*(P513)rt_nil_check(F->op_1335))) != NULL)) {
F->l_1340 = NULL;
F->r_1341 = NULL;
F->l_1340 = f_copy_node_456((*(P518)rt_nil_check(F->e_467)).a);
F->r_1341 = f_copy_node_456((*(P518)rt_nil_check(F->e_467)).b);
(*(P518)rt_nil_check(F->l_1340)).next = F->r_1341;
F->uy_1339 = f_user_op_498(&(*(P513)rt_nil_check(F->op_1335)), F->l_1340);
if ((F->uy_1339 != NULL)) {
F->call_1342 = NULL;
F->call_1342 = f_nn_48(((rt_int)10LL), (*(P518)rt_nil_check(F->e_467)).line);
F->fname_1343 = NULL;
F->fname_1343 = f_nn_48(((rt_int)7LL), (*(P518)rt_nil_check(F->e_467)).line);
(*(P518)rt_nil_check(F->fname_1343)).name = F->op_1335;
(*(P518)rt_nil_check(F->call_1342)).a = F->fname_1343;
(*(P518)rt_nil_check(F->call_1342)).b = F->l_1340;
F->result_ = f_gcall_502(F->call_1342, 0, &F->t_469v);
goto ret_;
}
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("IN", 2))) {
F->s_1344 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, NULL, &F->tb_1337));
if (((*(P522)rt_nil_check(F->tb_1337)).kind != ((rt_int)16LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1345 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, (*(P522)rt_nil_check(F->tb_1337)).elem, &F->ta_1336));
f_check_type_175(F->ta_1336, (*(P522)rt_nil_check(F->tb_1337)).elem, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = g_ty_bool_582;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1345), rt_str(", ", 2)), F->s_1344), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("AND", 3)) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("OR", 2))) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("XOR", 3))) && (F->want_468 != NULL)) && ((*(P522)rt_nil_check(F->want_468)).kind == ((rt_int)16LL)))) {
F->a_1346 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->want_468, &F->ta_1336));
F->b_1347 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->want_468, &F->tb_1337));
f_check_type_175(F->tb_1337, F->ta_1336, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = F->ta_1336;
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1346), rt_str(", ", 2)), F->b_1347), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1346), rt_str(", ", 2)), F->b_1347), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1346), rt_str(", ", 2)), F->b_1347), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("AND", 3)) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("OR", 2))) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("XOR", 3)))) {
F->a_1348 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, g_ty_bool_582, &F->ta_1336));
F->b_1349 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, g_ty_bool_582, &F->tb_1337));
f_check_type_175(F->ta_1336, g_ty_bool_582, (*(P518)rt_nil_check(F->e_467)).line);
f_check_type_175(F->tb_1337, g_ty_bool_582, (*(P518)rt_nil_check(F->e_467)).line);
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1348), rt_str(" && ", 4)), F->b_1349), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1348), rt_str(" || ", 4)), F->b_1349), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1348), rt_str(" != ", 4)), F->b_1349), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("&", 1))) {
F->wa_1350 = NULL;
F->wb_1351 = NULL;
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)4LL))) {
F->wa_1350 = g_ty_ascii_584;
}
if (((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).b)).kind == ((rt_int)4LL))) {
F->wb_1351 = g_ty_ascii_584;
}
{
F->a_1352 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->wa_1350, &F->ta_1336));
F->b_1353 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->wb_1351, &F->tb_1337));
F->t_469v = g_ty_string_585;
if ((((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check(F->tb_1337)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1352), rt_str(", ", 2)), F->b_1353), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)5LL)) && ((*(P522)rt_nil_check(F->tb_1337)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1352), rt_str(", ", 2)), F->b_1353), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)4LL)) && ((*(P522)rt_nil_check(F->tb_1337)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1352), rt_str(", ", 2)), F->b_1353), rt_str(")", 1));
goto ret_;
} else if ((((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)4LL)) && ((*(P522)rt_nil_check(F->tb_1337)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1352), rt_str(", ", 2)), F->b_1353), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P513)rt_nil_check(F->op_1335))) && (!rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("IN", 2))))) {
if (((((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)4LL)) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)6LL))) || ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->e_467)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1354 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, NULL, &F->hint_1338));
}
{
F->a_1355 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->hint_1338, &F->ta_1336));
F->b_1356 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->ta_1336, &F->tb_1337));
F->ct_1357 = NULL;
F->ct_1357 = f_base_of_166(F->ta_1336);
F->t_469v = g_ty_bool_582;
if ((((*(P522)rt_nil_check(F->ta_1336)).kind != ((rt_int)11LL)) && ((*(P522)rt_nil_check(F->tb_1337)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1337, F->ta_1336, (*(P518)rt_nil_check(F->e_467)).line);
}
if (((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)11LL))) {
F->ct_1357 = f_base_of_166(F->tb_1337);
}
if (((*(P522)rt_nil_check(F->ct_1357)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1356), rt_str(", ", 2)), F->a_1355), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1356), rt_str(", ", 2)), F->a_1355), rt_str(")", 1));
goto ret_;
}
if (((*(P522)rt_nil_check(F->ct_1357)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1355), rt_str(", ", 2)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1356), rt_str(", ", 2)), F->a_1355), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_221(F->ct_1357)) {
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("=", 1))) {
F->result_ = f_eq_code_233(F->ct_1357, &F->a_1355, &F->b_1356);
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_233(F->ct_1357, &F->a_1355, &F->b_1356)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1355), rt_str(" == ", 4)), F->b_1356), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1355), rt_str(" != ", 4)), F->b_1356), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1355), rt_str(" ", 1)), (*(P513)rt_nil_check(F->op_1335))), rt_str(" ", 1)), F->b_1356), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1358 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).a, F->want_468, &F->ta_1336));
F->b_1359 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->e_467)).b, F->ta_1336, &F->tb_1337));
if ((((*(P522)rt_nil_check(F->ta_1336)).kind == ((rt_int)3LL)) || ((*(P522)rt_nil_check(F->tb_1337)).kind == ((rt_int)3LL)))) {
F->t_469v = g_ty_float_583;
if (((rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("+", 1)) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("-", 1))) || rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1358), rt_str(" ", 1)), (*(P513)rt_nil_check(F->op_1335))), rt_str(" ", 1)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1336, g_ty_int_581, (*(P518)rt_nil_check(F->e_467)).line);
f_check_type_175(F->tb_1337, g_ty_int_581, (*(P518)rt_nil_check(F->e_467)).line);
F->t_469v = g_ty_int_581;
if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P513)rt_nil_check(F->op_1335)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1358), rt_str(", ", 2)), F->b_1359), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P518)rt_nil_check(F->e_467)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P513)rt_nil_check(F->op_1335))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_469) = F->t_469v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_474(P518 e_471, P522 want_472, P522 *t_473) {
  struct f_constructor_474fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_471 = e_471;
F->want_472 = want_472;
F->t_473 = t_473;
F->t_473v = *F->t_473;
F->it_1360 = NULL;
F->it_1360 = (*(P518)rt_nil_check(F->e_471)).a;
F->f_1361 = NULL;
F->vt_1362 = NULL;
if (((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)16LL)))) {
F->s_1363 = NULL;
F->s_1363 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_473v = F->want_472;
while ((F->it_1360 != NULL)) {
F->v_1364 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1360)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1362));
f_check_type_175(F->vt_1362, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->s_1363 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P513)rt_nil_check(F->s_1363))), rt_str(", ", 2)), F->v_1364), rt_str(")", 1)); b_; }));
F->it_1360 = (*(P518)rt_nil_check(F->it_1360)).next;
}
F->result_ = (*(P513)rt_nil_check(F->s_1363));
goto ret_;
}
if (((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P513)rt_nil_check((*(P522)rt_nil_check(F->want_472)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_472 != NULL) && ((*(P522)rt_nil_check(F->want_472)).kind == ((rt_int)6LL))) && ((*(P522)rt_nil_check(F->want_472)).idx2 == NULL))) {
F->tmp_1365 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1366 = rt_str_copy(f_ctype_177(F->want_472));
F->et_1367 = rt_str_copy(f_ctype_177((*(P522)rt_nil_check(F->want_472)).elem));
F->parts_1368 = NULL;
F->t_473v = F->want_472;
if (((((F->it_1360 != NULL) && ((*(P518)rt_nil_check(F->it_1360)).a != NULL)) && ((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1360)).a)).b != NULL)) && ((*(P518)rt_nil_check(F->it_1360)).next == NULL))) {
F->lo_1369 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1360)).a)).a, (*(P522)rt_nil_check(F->want_472)).idx, &F->vt_1362));
F->hi_1370 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1360)).a)).b, (*(P522)rt_nil_check(F->want_472)).idx, &F->vt_1362));
F->v_1371 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1360)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1362));
f_check_type_175(F->vt_1362, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1366), rt_str(" ", 1)), F->tmp_1365), rt_str("; ", 2)), F->tmp_1365), rt_str(".lo = ", 6)), F->lo_1369), rt_str("; ", 2)), F->tmp_1365), rt_str(".hi = ", 6)), F->hi_1370), rt_str("; ", 2)), F->tmp_1365), rt_str(".lo2 = ", 7)), F->tmp_1365), rt_str(".hi2 = 1; ", 10)), F->tmp_1365), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1367), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1365), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1365), rt_str("); i_++) ", 9)), F->tmp_1365), rt_str(".p[i_] = ", 9)), f_copy_code_229((*(P522)rt_nil_check(F->want_472)).elem, &F->v_1371)), rt_str("; ", 2)), F->tmp_1365), rt_str("; })", 4));
goto ret_;
}
F->parts_1368 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1366), rt_str(" ", 1)), F->tmp_1365), rt_str("; ", 2)), F->tmp_1365), rt_str(".lo = 1; ", 9)), F->tmp_1365), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1360))), rt_str("; ", 2)), F->tmp_1365), rt_str(".lo2 = ", 7)), F->tmp_1365), rt_str(".hi2 = 1; ", 10)), F->tmp_1365), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1367), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1360), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1373 = ((rt_int)0LL), hi1374 = rt_sub(f_list_len_54((*(P518)rt_nil_check(F->e_471)).a), ((rt_int)1LL));
for (rt_int it1375 = lo1373; it1375 <= hi1374; it1375++) {
F->i_1372 = it1375;
if (((*(P518)rt_nil_check(F->it_1360)).a != NULL)) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1376 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1360)).b, (*(P522)rt_nil_check(F->want_472)).elem, &F->vt_1362));
f_check_type_175(F->vt_1362, (*(P522)rt_nil_check(F->want_472)).elem, (*(P518)rt_nil_check(F->e_471)).line);
F->parts_1368 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1368)), rt_str(" ", 1)), F->tmp_1365), rt_str(".p[", 3)), f_itos_7(F->i_1372)), rt_str("] = ", 4)), f_copy_code_229((*(P522)rt_nil_check(F->want_472)).elem, &F->v_1376)), rt_str(";", 1)); b_; }));
}
F->it_1360 = (*(P518)rt_nil_check(F->it_1360)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1368)), rt_str(" ", 1)), F->tmp_1365), rt_str("; })", 4));
goto ret_;
}
if (((F->want_472 == NULL) || ((*(P522)rt_nil_check(F->want_472)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_473v = F->want_472;
F->f_1361 = (*(P522)rt_nil_check(F->want_472)).fields;
{
F->tmp_1377 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1378 = NULL;
F->parts_1378 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_472)), rt_str(" ", 1)), F->tmp_1377), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1360) != ((rt_int)0LL)) && (f_list_len_54(F->it_1360) != ((rt_int)0LL)))) {
while (((F->it_1360 != NULL) && (F->f_1361 != NULL))) {
if (((((*(P518)rt_nil_check(F->it_1360)).a == NULL) || ((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1360)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P513)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check((*(P518)rt_nil_check(F->it_1360)).a)).a)).name)), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1361)).name)))))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1361)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1379 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->it_1360)).b, (*(P524)rt_nil_check(F->f_1361)).t, &F->vt_1362));
f_check_type_175(F->vt_1362, (*(P524)rt_nil_check(F->f_1361)).t, (*(P518)rt_nil_check(F->e_471)).line);
F->parts_1378 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1378)), rt_str(" ", 1)), F->tmp_1377), rt_str(".", 1)), f_field_c_17(&(*(P513)rt_nil_check((*(P524)rt_nil_check(F->f_1361)).name)))), rt_str(" = ", 3)), f_copy_code_229((*(P524)rt_nil_check(F->f_1361)).t, &F->v_1379)), rt_str(";", 1)); b_; }));
}
F->it_1360 = (*(P518)rt_nil_check(F->it_1360)).next;
F->f_1361 = (*(P524)rt_nil_check(F->f_1361)).next;
}
}
if (((F->it_1360 != NULL) || (F->f_1361 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->e_471)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->parts_1378)), rt_str(" ", 1)), F->tmp_1377), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_473) = F->t_473v;
  RT_FPOP();
  return F->result_;
}

static int f_fits_477(P526 y_475, P518 args_476) {
  struct f_fits_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_475 = y_475;
F->args_476 = args_476;
F->a_1380 = NULL;
F->a_1380 = F->args_476;
F->pm_1381 = NULL;
F->pm_1381 = (*(P526)rt_nil_check(F->y_475)).params;
F->t_1382 = NULL;
F->saved_1383 = NULL;
F->saved_1383 = g_code_562;
F->ok_1384 = 1;
F->lv_1385 = NULL;
F->lc_1386 = NULL;
g_trial_579 = rt_add(g_trial_579, ((rt_int)1LL));
g_code_562 = f_new_buffer_24();
{ rt_frame xf1388;
if (RT_TRY(xf1388)) {
while (((F->ok_1384 && (F->a_1380 != NULL)) && (F->pm_1381 != NULL))) {
if ((((*(P528)rt_nil_check(F->pm_1381)).mode == ((rt_int)2LL)) || ((*(P528)rt_nil_check(F->pm_1381)).mode == ((rt_int)3LL)))) {
f_lvalue_431(F->a_1380, &F->lv_1385, &F->t_1382, &F->lc_1386, &F->ro_1387);
} else {
F->v_1390 = rt_str_copy(f_gexpr_454(F->a_1380, (*(P528)rt_nil_check(F->pm_1381)).t, &F->t_1382));
}
if ((!(f_same_164(F->t_1382, (*(P528)rt_nil_check(F->pm_1381)).t) || (((*(P522)rt_nil_check(F->t_1382)).kind == ((rt_int)11LL)) && ((*(P522)rt_nil_check((*(P528)rt_nil_check(F->pm_1381)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1384 = 0;
}
F->a_1380 = (*(P518)rt_nil_check(F->a_1380)).next;
F->pm_1381 = (*(P528)rt_nil_check(F->pm_1381)).next;
}
if (((F->a_1380 != NULL) || (F->pm_1381 != NULL))) {
F->ok_1384 = 0;
}
RT_POP(xf1388);
} else {
RT_POP(xf1388);
int x1389 = rt_xcur;
if (0 || x1389 == ex_compile_error_1) {
F->ok_1384 = 0;
} else {
rt_raise(x1389);
}
}
}
g_trial_579 = rt_sub(g_trial_579, ((rt_int)1LL));
g_code_562 = F->saved_1383;
F->result_ = F->ok_1384;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_resolve_overload_482(rstr *name_478, P518 args_479, int is_stmt_480, rt_int line_481) {
  struct f_resolve_overload_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_478 = name_478;
F->args_479 = args_479;
F->is_stmt_480 = is_stmt_480;
F->line_481 = line_481;
F->y_1391 = NULL;
F->y_1391 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->name_478)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
F->first_1392 = NULL;
F->n_1393 = ((rt_int)0LL);
while ((F->y_1391 != NULL)) {
if ((rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1391)).name)), (*F->name_478)) && (((*(P526)rt_nil_check(F->y_1391)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_1391)).kind == ((rt_int)4LL))))) {
F->n_1393 = rt_add(F->n_1393, ((rt_int)1LL));
if ((F->first_1392 == NULL)) {
F->first_1392 = F->y_1391;
}
if (((((*(P526)rt_nil_check(F->y_1391)).kind == ((rt_int)4LL)) == F->is_stmt_480) && f_fits_477(F->y_1391, F->args_479))) {
F->result_ = F->y_1391;
goto ret_;
}
}
F->y_1391 = (*(P526)rt_nil_check(F->y_1391)).chain;
}
if (f_is_builtin_484(&(*F->name_478))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1393 > ((rt_int)1LL))) {
f_fail_23(F->line_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_478)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1392;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_484(rstr *n_483) {
  struct f_is_builtin_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_483 = n_483;
F->result_ = (((((((((((((((rt_str_eq((*F->n_483), rt_str("ABS", 3)) || rt_str_eq((*F->n_483), rt_str("POS", 3))) || rt_str_eq((*F->n_483), rt_str("SUCC", 4))) || rt_str_eq((*F->n_483), rt_str("PRED", 4))) || rt_str_eq((*F->n_483), rt_str("SQRT", 4))) || rt_str_eq((*F->n_483), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_483), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_483), rt_str("WRITE", 5))) || rt_str_eq((*F->n_483), rt_str("READLN", 6))) || rt_str_eq((*F->n_483), rt_str("SEND", 4))) || rt_str_eq((*F->n_483), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_483), rt_str("DELAY", 5))) || rt_str_eq((*F->n_483), rt_str("TIME", 4))) || rt_str_eq((*F->n_483), rt_str("CNVT", 4))) || rt_str_eq((*F->n_483), rt_str("FORMAT", 6))) || f_is_low_level_486(&(*F->n_483)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_486(rstr *n_485) {
  struct f_is_low_level_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_485 = n_485;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_485), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_485), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_485), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_485), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_485), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_485), rt_str("LOCK", 4))) || rt_str_eq((*F->n_485), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_485), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_485), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_485), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_485), rt_str("WAITING", 7))) || rt_str_eq((*F->n_485), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_485), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_485), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_485), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_485), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_485), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_485), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_485), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_490(P518 tt_487, rt_int line_488, P522 *t_489) {
  struct f_me_high_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_487 = tt_487;
F->line_488 = line_488;
F->t_489 = t_489;
F->t_489v = *F->t_489;
F->c_1394 = NULL;
if ((F->tt_487 == NULL)) {
f_fail_23(F->line_488, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_489v = f_resolve_subtype_188(F->tt_487, &F->c_1394);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_489v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_492(F->t_489v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_489) = F->t_489v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_492(P522 t_491) {
  struct f_type_tag_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_491 = t_491;
if (((*(P522)rt_nil_check(F->t_491)).name != NULL)) {
F->result_ = (*(P513)rt_nil_check((*(P522)rt_nil_check(F->t_491)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_495(P518 e_493, rstr *name_494) {
  struct f_lock_ref_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_493 = e_493;
F->name_494 = name_494;
F->lv_1395 = NULL;
F->t_1396 = NULL;
F->c_1397 = NULL;
f_lvalue_431(F->e_493, &F->lv_1395, &F->t_1396, &F->c_1397, &F->ro_1398);
if (((*(P522)rt_nil_check(F->t_1396)).kind != ((rt_int)13LL))) {
f_fail_23((*(P518)rt_nil_check(F->e_493)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_494), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P513)rt_nil_check(F->lv_1395)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P526 f_user_op_498(rstr *op_496, P518 args_497) {
  struct f_user_op_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_496 = op_496;
F->args_497 = args_497;
F->y_1399 = NULL;
F->y_1399 = (*(P530)rt_nil_check(g_table_548)).p[rt_index(f_hash_138(&(*F->op_496)), (*(P530)rt_nil_check(g_table_548)).lo, (*(P530)rt_nil_check(g_table_548)).hi) - (*(P530)rt_nil_check(g_table_548)).lo];
while ((F->y_1399 != NULL)) {
if (((rt_str_eq((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1399)).name)), (*F->op_496)) && ((*(P526)rt_nil_check(F->y_1399)).kind == ((rt_int)3LL))) && f_fits_477(F->y_1399, F->args_497))) {
F->result_ = F->y_1399;
goto ret_;
}
F->y_1399 = (*(P526)rt_nil_check(F->y_1399)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gcall_502(P518 e_499, int is_stmt_500, P522 *t_501) {
  struct f_gcall_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_499 = e_499;
F->is_stmt_500 = is_stmt_500;
F->t_501 = t_501;
F->t_501v = *F->t_501;
F->fn_1400 = NULL;
F->fn_1400 = (*(P518)rt_nil_check(F->e_499)).a;
F->tt_1401 = NULL;
F->y_1402 = NULL;
F->args_1403 = NULL;
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1404 = NULL;
F->a_1404 = (*(P518)rt_nil_check(F->e_499)).b;
F->pm_1405 = NULL;
F->lt_1406 = NULL;
F->vt_1407 = NULL;
F->lv_1408 = NULL;
F->lc_1409 = NULL;
if (((*(P518)rt_nil_check(F->fn_1400)).kind == ((rt_int)12LL))) {
F->tt_1401 = (*(P518)rt_nil_check(F->fn_1400)).b;
F->fn_1400 = (*(P518)rt_nil_check(F->fn_1400)).a;
}
F->y_1402 = f_lookup_140(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)));
if ((F->y_1402 == NULL)) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), F->tt_1401, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
if (((((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)4LL))) && ((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)10LL)))) {
F->alt_1411 = NULL;
F->alt_1411 = f_resolve_overload_482(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), (*(P518)rt_nil_check(F->e_499)).b, F->is_stmt_500, (*(P518)rt_nil_check(F->e_499)).line);
if ((F->alt_1411 != NULL)) {
F->y_1402 = F->alt_1411;
} else if (f_is_builtin_484(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)))) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), F->tt_1401, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
}
if (((*(P526)rt_nil_check(F->y_1402)).kind == ((rt_int)10LL))) {
F->y_1402 = f_instantiate_410(F->y_1402, F->tt_1401, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line);
} else if ((((*(P526)rt_nil_check(F->y_1402)).kind == ((rt_int)3LL)) || ((*(P526)rt_nil_check(F->y_1402)).kind == ((rt_int)4LL)))) {
F->y_1402 = f_resolve_overload_482(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), (*(P518)rt_nil_check(F->e_499)).b, F->is_stmt_500, (*(P518)rt_nil_check(F->e_499)).line);
if ((F->y_1402 == NULL)) {
F->result_ = f_builtin_509(&(*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), F->tt_1401, (*(P518)rt_nil_check(F->e_499)).b, (*(P518)rt_nil_check(F->e_499)).line, F->is_stmt_500, &F->t_501v);
goto ret_;
}
}
if ((((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)3LL)) && ((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_500 && ((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_500) && ((*(P526)rt_nil_check(F->y_1402)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1405 = (*(P526)rt_nil_check(F->y_1402)).params;
if (((*(P526)rt_nil_check(F->y_1402)).level > ((rt_int)0LL))) {
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1413 = ((rt_int)1LL), hi1414 = rt_sub(g_cur_level_565, (*(P526)rt_nil_check(F->y_1402)).level);
for (rt_int it1415 = lo1413; it1415 <= hi1414; it1415++) {
F->i_1412 = it1415;
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1404 != NULL) && (F->pm_1405 != NULL))) {
if ((((*(P513)rt_nil_check(F->args_1403))).len > ((rt_int)0LL))) {
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str(", ", 2)); b_; }));
}
if ((((*(P528)rt_nil_check(F->pm_1405)).mode == ((rt_int)2LL)) || ((*(P528)rt_nil_check(F->pm_1405)).mode == ((rt_int)3LL)))) {
f_lvalue_431(F->a_1404, &F->lv_1408, &F->lt_1406, &F->lc_1409, &F->ro_1410);
if (F->ro_1410) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check((*(P528)rt_nil_check(F->pm_1405)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1406, (*(P528)rt_nil_check(F->pm_1405)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str("&", 1)), (*(P513)rt_nil_check(F->lv_1408))); b_; }));
} else if ((((*(P528)rt_nil_check(F->pm_1405)).mode == ((rt_int)4LL)) && f_is_lvalue_425(F->a_1404))) {
f_lvalue_431(F->a_1404, &F->lv_1408, &F->lt_1406, &F->lc_1409, &F->ro_1410);
f_check_type_175(F->lt_1406, (*(P528)rt_nil_check(F->pm_1405)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str("&", 1)), (*(P513)rt_nil_check(F->lv_1408))); b_; }));
} else if (((*(P528)rt_nil_check(F->pm_1405)).mode == ((rt_int)4LL))) {
F->v_1416 = rt_str_copy(f_gexpr_454(F->a_1404, (*(P528)rt_nil_check(F->pm_1405)).t, &F->vt_1407));
F->ct_1417 = rt_str_copy(f_ctype_177((*(P528)rt_nil_check(F->pm_1405)).t));
f_check_type_175(F->vt_1407, (*(P528)rt_nil_check(F->pm_1405)).t, (*(P518)rt_nil_check(F->e_499)).line);
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str("({ ", 3)), F->ct_1417), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1417), rt_str(")); *b_ = ", 10)), F->v_1416), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1418 = rt_str_copy(f_gexpr_454(F->a_1404, (*(P528)rt_nil_check(F->pm_1405)).t, &F->vt_1407));
f_check_type_175(F->vt_1407, (*(P528)rt_nil_check(F->pm_1405)).t, (*(P518)rt_nil_check(F->e_499)).line);
if (((((*(P522)rt_nil_check((*(P528)rt_nil_check(F->pm_1405)).t)).kind == ((rt_int)1LL)) && ((*(P528)rt_nil_check(F->pm_1405)).c != NULL)) && (*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1405)).c)).hasm)) {
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->args_1403)), rt_str("rt_range(", 9)), F->v_1418), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1405)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P520)rt_nil_check((*(P528)rt_nil_check(F->pm_1405)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1403 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P513)rt_nil_check(F->args_1403)), F->v_1418); b_; }));
}
}
F->a_1404 = (*(P518)rt_nil_check(F->a_1404)).next;
F->pm_1405 = (*(P528)rt_nil_check(F->pm_1405)).next;
}
if (((F->a_1404 != NULL) || (F->pm_1405 != NULL))) {
f_fail_23((*(P518)rt_nil_check(F->e_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P518)rt_nil_check(F->fn_1400)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P518)rt_nil_check(F->e_499)).b), f_list_len_54(F->a_1404)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_501v = (*(P526)rt_nil_check(F->y_1402)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check((*(P526)rt_nil_check(F->y_1402)).cname)), rt_str("(", 1)), (*(P513)rt_nil_check(F->args_1403))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_501) = F->t_501v;
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_509(rstr *name_503, P518 tt_504, P518 args_505, rt_int line_506, int is_stmt_507, P522 *t_508) {
  struct f_builtin_509fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_503 = name_503;
F->tt_504 = tt_504;
F->args_505 = args_505;
F->line_506 = line_506;
F->is_stmt_507 = is_stmt_507;
F->t_508 = t_508;
F->t_508v = *F->t_508;
F->at_1419 = NULL;
F->n_1420 = f_list_len_54(F->args_505);
F->t_508v = g_ty_void_586;
if (((rt_str_eq((*F->name_503), rt_str("POS", 3)) || rt_str_eq((*F->name_503), rt_str("SUCC", 4))) || rt_str_eq((*F->name_503), rt_str("PRED", 4)))) {
F->a_1421 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1419));
if (rt_str_eq((*F->name_503), rt_str("POS", 3))) {
if (((*(P522)rt_nil_check(f_base_of_166(F->at_1419))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1421), rt_str(") + 1)", 6));
goto ret_;
}
F->t_508v = F->at_1419;
if (((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_503), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1421), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1421), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_503), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1421), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->at_1419))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1421), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P522)rt_nil_check(f_base_of_166(F->at_1419))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("SQRT", 4)) || rt_str_eq((*F->name_503), rt_str("SIN", 3))) || rt_str_eq((*F->name_503), rt_str("COS", 3))) || rt_str_eq((*F->name_503), rt_str("EXP", 3))) || rt_str_eq((*F->name_503), rt_str("LN", 2))) || rt_str_eq((*F->name_503), rt_str("FLOOR", 5)))) {
F->a_1422 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_583, &F->at_1419));
F->t_508v = g_ty_float_583;
if (rt_str_eq((*F->name_503), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1422), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_503)), rt_str("(", 1)), F->a_1422), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("IFLOAT", 6))) {
F->a_1423 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_581, &F->at_1419));
F->t_508v = g_ty_float_583;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1423), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("IFIX", 4))) {
F->a_1424 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_583, &F->at_1419));
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1424), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("FORMAT", 6))) {
F->a_1425 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_float_583, &F->at_1419));
F->n1_1426 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_581, &F->at_1419));
F->m1_1427 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, g_ty_int_581, &F->at_1419));
F->t_508v = g_ty_string_585;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1425), rt_str(", ", 2)), F->n1_1426), rt_str(", ", 2)), F->m1_1427), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("ABS", 3))) {
F->a_1428 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1419));
F->t_508v = F->at_1419;
if (((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1428), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1428), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("CNVT", 4))) {
if ((F->tt_504 == NULL)) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1429 = rt_str_copy(f_gexpr_454(F->args_505, NULL, &F->at_1419));
if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)1LL)))) {
F->t_508v = g_ty_string_585;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1429), rt_str(")", 1));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)3LL)))) {
F->t_508v = g_ty_string_585;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1429), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)73LL)) && ((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)2LL)))) {
F->t_508v = g_ty_string_585;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1429), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P518)rt_nil_check(F->tt_504)).kind == ((rt_int)70LL)) && ((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)5LL)))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1429), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_503), rt_str("WRITELN", 7))) {
if ((F->n_1420 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1430 = NULL;
F->last_1430 = F->args_505;
while (((*(P518)rt_nil_check(F->last_1430)).next != NULL)) {
F->last_1430 = (*(P518)rt_nil_check(F->last_1430)).next;
}
{
F->a_1431 = rt_str_copy(f_gexpr_454(F->last_1430, g_ty_string_585, &F->at_1419));
f_check_type_175(F->at_1419, g_ty_string_585, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1431), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_503), rt_str("WRITE", 5))) {
F->a_1432 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, NULL, &F->at_1419));
if (((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1432), rt_str(")", 1));
goto ret_;
} else if (((*(P522)rt_nil_check(F->at_1419)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1432), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_503), rt_str("READLN", 6))) {
F->lv_1433 = NULL;
F->lc_1434 = NULL;
F->last_1436 = NULL;
F->last_1436 = F->args_505;
while (((*(P518)rt_nil_check(F->last_1436)).next != NULL)) {
F->last_1436 = (*(P518)rt_nil_check(F->last_1436)).next;
}
f_lvalue_431(F->last_1436, &F->lv_1433, &F->at_1419, &F->lc_1434, &F->ro_1435);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P513)rt_nil_check(F->lv_1433))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("SIZELN", 6))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EOF", 3))) {
F->t_508v = g_ty_bool_582;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_503), rt_str("SYS_OUT", 7)))) {
F->t_508v = g_ty_file_587;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("OPEN", 4)) || rt_str_eq((*F->name_503), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("SEND", 4)) || rt_str_eq((*F->name_503), rt_str("RECEIVE", 7)))) {
F->lv_1437 = NULL;
F->dv_1438 = NULL;
F->lc_1439 = NULL;
F->mt_1441 = NULL;
F->dt_1442 = NULL;
f_lvalue_431(F->args_505, &F->lv_1437, &F->mt_1441, &F->lc_1439, &F->ro_1440);
if (((*(P522)rt_nil_check(F->mt_1441)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_503), rt_str("RECEIVE", 7))) {
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->dv_1438, &F->dt_1442, &F->lc_1439, &F->ro_1440);
f_check_type_175(F->dt_1442, (*(P522)rt_nil_check(F->mt_1441)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P513)rt_nil_check(F->lv_1437))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1438))), rt_str(")", 1));
goto ret_;
}
{
F->v_1443 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, (*(P522)rt_nil_check(F->mt_1441)).elem, &F->at_1419));
f_check_type_175(F->at_1419, (*(P522)rt_nil_check(F->mt_1441)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P522)rt_nil_check(F->mt_1441)).elem)), rt_str(" m_ = ", 6)), F->v_1443), rt_str("; rt_send(", 10)), (*(P513)rt_nil_check(F->lv_1437))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_503), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_503), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1444 = NULL;
F->lc_1445 = NULL;
F->mt_1447 = NULL;
f_lvalue_431(F->args_505, &F->lv_1444, &F->mt_1447, &F->lc_1445, &F->ro_1446);
if (((*(P522)rt_nil_check(F->mt_1447)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), (*(P513)rt_nil_check(F->lv_1444))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_503), rt_str("COND_RECEIVE", 12)))) {
F->lv_1448 = NULL;
F->dv_1449 = NULL;
F->bv_1450 = NULL;
F->lc_1451 = NULL;
F->mt_1453 = NULL;
F->dt_1454 = NULL;
F->bt_1455 = NULL;
f_lvalue_431(F->args_505, &F->lv_1448, &F->mt_1453, &F->lc_1451, &F->ro_1452);
if (((*(P522)rt_nil_check(F->mt_1453)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, &F->bv_1450, &F->bt_1455, &F->lc_1451, &F->ro_1452);
f_check_type_175(F->bt_1455, g_ty_bool_582, F->line_506);
if (rt_str_eq((*F->name_503), rt_str("COND_RECEIVE", 12))) {
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->dv_1449, &F->dt_1454, &F->lc_1451, &F->ro_1452);
f_check_type_175(F->dt_1454, (*(P522)rt_nil_check(F->mt_1453)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->bv_1450)), rt_str(" = rt_cond_receive(", 19)), (*(P513)rt_nil_check(F->lv_1448))), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1449))), rt_str(")", 1));
goto ret_;
}
{
F->v_1456 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, (*(P522)rt_nil_check(F->mt_1453)).elem, &F->at_1419));
f_check_type_175(F->at_1419, (*(P522)rt_nil_check(F->mt_1453)).elem, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P522)rt_nil_check(F->mt_1453)).elem)), rt_str(" m_ = ", 6)), F->v_1456), rt_str("; ", 2)), (*(P513)rt_nil_check(F->bv_1450))), rt_str(" = rt_cond_send(", 16)), (*(P513)rt_nil_check(F->lv_1448))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_503), rt_str("PRIORITY", 8))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("SET_PRIORITY", 12))) {
F->v_1457 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_581, &F->at_1419));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_337(F->args_505)), rt_str(", ", 2)), F->v_1457), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("ACTIVE", 6))) {
F->t_508v = g_ty_bool_582;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY", 5))) {
F->v_1458 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_581, &F->at_1419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1458), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY_UNTIL", 11))) {
F->v_1459 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_581, &F->at_1419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1459), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("TIME", 4))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_503), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_503), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_503), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_503), rt_str("HOURS", 5)))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_503));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("HALT", 4))) {
F->a_1460 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_581, &F->at_1419));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1460), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("ME", 2)) && (F->tt_504 != NULL))) {
F->result_ = f_me_high_490(F->tt_504, F->line_506, &F->t_508v);
goto ret_;
} else if ((rt_str_eq((*F->name_503), rt_str("WAITING", 7)) || rt_str_eq((*F->name_503), rt_str("SUSPENDED", 9)))) {
F->t_508v = g_ty_bool_582;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_503), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_503), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_503), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_503), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_503))), rt_str("(", 1)), f_act_ref_337(F->args_505)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("TASK_START", 10))) {
if ((F->n_1420 != ((rt_int)2LL))) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_337(F->args_505)), rt_str(", ", 2)), f_act_ref_337((*(P518)rt_nil_check(F->args_505)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_503), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_503), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_503), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_503), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_503), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1420 != ((rt_int)0LL))) {
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
F->bv_1461 = NULL;
F->bc_1462 = NULL;
F->bt_1464 = NULL;
F->l_1465 = rt_str_copy(f_lock_ref_495(F->args_505, &(*F->name_503)));
f_lvalue_431((*(P518)rt_nil_check(F->args_505)).next, &F->bv_1461, &F->bt_1464, &F->bc_1462, &F->ro_1463);
f_check_type_175(F->bt_1464, g_ty_bool_582, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P513)rt_nil_check(F->bv_1461)), rt_str(" = rt_cond_lock(", 16)), F->l_1465), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("EXCESS_LOCKS", 12))) {
F->t_508v = g_ty_int_581;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("OWNER", 5))) {
F->t_508v = g_ty_act_591;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_495(F->args_505, &(*F->name_503))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("FREE", 4))) {
F->pv_1466 = NULL;
F->pc_1467 = NULL;
F->pt_1469 = NULL;
f_lvalue_431(F->args_505, &F->pv_1466, &F->pt_1469, &F->pc_1467, &F->ro_1468);
if ((((*(P522)rt_nil_check(F->pt_1469)).kind != ((rt_int)8LL)) || F->ro_1468)) {
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_573 = 1;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (*(P513)rt_nil_check(F->pv_1466))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_503), rt_str("LOW_IO", 6))) {
F->dev_1470 = rt_str_copy(f_gexpr_454(F->args_505, g_ty_int_581, &F->at_1419));
F->cmd_1471 = rt_str_copy(f_gexpr_454((*(P518)rt_nil_check(F->args_505)).next, g_ty_int_581, &F->at_1419));
if ((F->n_1420 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1470), rt_str(", ", 2)), F->cmd_1471), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1472 = NULL;
F->dc_1473 = NULL;
F->dt_1475 = NULL;
f_lvalue_431((*(P518)rt_nil_check((*(P518)rt_nil_check(F->args_505)).next)).next, &F->dv_1472, &F->dt_1475, &F->dc_1473, &F->ro_1474);
f_check_type_175(F->dt_1475, g_ty_int_581, F->line_506);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1470), rt_str(", ", 2)), F->cmd_1471), rt_str(", &", 3)), (*(P513)rt_nil_check(F->dv_1472))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_503), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_508) = F->t_508v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_511(P518 units_510) {
  struct f_translate_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_510 = units_510;
F->u_1476 = NULL;
F->u_1476 = F->units_510;
while ((F->u_1476 != NULL)) {
if (((*(P518)rt_nil_check(F->u_1476)).next == NULL)) {
{ R539 *cell1477 = rt_alloc(sizeof(R539));
(*cell1477).d = NULL;
(*cell1477).next = NULL;
g_caps_567 = cell1477;
}
(*(P538)rt_nil_check(g_caps_567)).d = F->u_1476;
f_declare_body_245((*(P518)rt_nil_check(F->u_1476)).c);
f_body_elements_305((*(P518)rt_nil_check(F->u_1476)).c);
{
F->l_1478 = NULL;
F->l_1478 = F->units_510;
while ((F->l_1478 != F->u_1476)) {
{
F->w_1479 = rt_str_copy(f_waits_of_297(F->l_1478));
if (((F->w_1479).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1479);
}
}
F->l_1478 = (*(P518)rt_nil_check(F->l_1478)).next;
}
}
} else {
f_gen_capsule_255(F->u_1476);
}
F->u_1476 = (*(P518)rt_nil_check(F->u_1476)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_512(void) {
  struct f_print_program_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_241();
if (g_uses_free_573) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
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
f_print_buffer_31(g_out_roots_572);
f_print_buffer_31(g_out_excs_561);
f_print_buffer_31(g_out_init_560);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
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
  RT_ROOT(g_toks_544);
  RT_ROOT(g_ntoks_545);
  RT_ROOT(g_tpos_546);
  RT_ROOT(g_src_line_547);
  RT_ROOT(g_table_548);
  RT_ROOT(g_genv_549);
  RT_ROOT(g_all_insts_550);
  RT_ROOT(g_depth_551);
  RT_ROOT(g_scope_stack_552);
  RT_ROOT(g_all_types_553);
  RT_ROOT(g_serial_554);
  RT_ROOT(g_out_types_555);
  RT_ROOT(g_out_helpers_556);
  RT_ROOT(g_out_protos_557);
  RT_ROOT(g_out_globals_558);
  RT_ROOT(g_out_funcs_559);
  RT_ROOT(g_out_init_560);
  RT_ROOT(g_out_excs_561);
  RT_ROOT(g_code_562);
  RT_ROOT(g_fields_buf_563);
  RT_ROOT(g_in_func_564);
  RT_ROOT(g_cur_level_565);
  RT_ROOT(g_fctx_566);
  RT_ROOT(g_caps_567);
  RT_ROOT(g_cap_waits_568);
  RT_ROOT(g_psub_569);
  RT_ROOT(g_st_field_570);
  RT_ROOT(g_out_frames_571);
  RT_ROOT(g_out_roots_572);
  RT_ROOT(g_uses_free_573);
  RT_ROOT(g_func_sym_574);
  RT_ROOT(g_exits_575);
  RT_ROOT(g_frames_576);
  RT_ROOT(g_handlers_577);
  RT_ROOT(g_cleanups_578);
  RT_ROOT(g_trial_579);
  RT_ROOT(g_mcopies_580);
  RT_ROOT(g_ty_int_581);
  RT_ROOT(g_ty_bool_582);
  RT_ROOT(g_ty_float_583);
  RT_ROOT(g_ty_ascii_584);
  RT_ROOT(g_ty_string_585);
  RT_ROOT(g_ty_void_586);
  RT_ROOT(g_ty_file_587);
  RT_ROOT(g_ty_nil_588);
  RT_ROOT(g_ty_lock_589);
  RT_ROOT(g_ty_latch_590);
  RT_ROOT(g_ty_act_591);
  RT_ROOT(g_no_cons_592);
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
g_out_roots_572 = NULL;
g_uses_free_573 = 0;
g_func_sym_574 = NULL;
g_exits_575 = NULL;
g_frames_576 = ((rt_int)0LL);
g_handlers_577 = NULL;
g_cleanups_578 = NULL;
g_trial_579 = ((rt_int)0LL);
g_mcopies_580 = NULL;
g_ty_int_581 = NULL;
g_ty_bool_582 = NULL;
g_ty_float_583 = NULL;
g_ty_ascii_584 = NULL;
g_ty_string_585 = NULL;
g_ty_void_586 = NULL;
g_ty_file_587 = NULL;
g_ty_nil_588 = NULL;
g_ty_lock_589 = NULL;
g_ty_latch_590 = NULL;
g_ty_act_591 = NULL;
g_no_cons_592 = NULL;
{ A517 *cell1480 = rt_alloc(sizeof(A517));
rt_int pv1481 = ((rt_int)1000000LL);
(*cell1480).lo = ((rt_int)1LL); (*cell1480).hi = pv1481; (*cell1480).lo2 = 1; (*cell1480).hi2 = 1;
(*cell1480).p = rt_alloc(sizeof(P514) * (size_t)RT_CNT((*cell1480)));
for (rt_int i1482 = 0; i1482 < RT_CNT((*cell1480)); i1482++) {
(*cell1480).p[i1482] = NULL;
}
g_toks_544 = cell1480;
}
{ A531 *cell1483 = rt_alloc(sizeof(A531));
rt_int pv1484 = ((rt_int)4093LL);
(*cell1483).lo = ((rt_int)0LL); (*cell1483).hi = pv1484; (*cell1483).lo2 = 1; (*cell1483).hi2 = 1;
(*cell1483).p = rt_alloc(sizeof(P526) * (size_t)RT_CNT((*cell1483)));
for (rt_int i1485 = 0; i1485 < RT_CNT((*cell1483)); i1485++) {
(*cell1483).p[i1485] = NULL;
}
g_table_548 = cell1483;
}
g_out_types_555 = f_new_buffer_24();
g_out_helpers_556 = f_new_buffer_24();
g_out_protos_557 = f_new_buffer_24();
g_out_globals_558 = f_new_buffer_24();
g_out_funcs_559 = f_new_buffer_24();
g_out_init_560 = f_new_buffer_24();
g_out_excs_561 = f_new_buffer_24();
g_out_frames_571 = f_new_buffer_24();
g_out_roots_572 = f_new_buffer_24();
g_code_562 = g_out_init_560;
g_no_cons_592 = f_new_cons_158();
g_ty_int_581 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_582 = f_new_typ_157(((rt_int)2LL));
g_ty_float_583 = f_new_typ_157(((rt_int)3LL));
g_ty_string_585 = f_new_typ_157(((rt_int)5LL));
g_ty_void_586 = f_new_typ_157(((rt_int)9LL));
g_ty_file_587 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_588 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_589 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_590 = f_new_typ_157(((rt_int)13LL));
g_ty_act_591 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1486;
if (RT_TRY(xf1486)) {
f_init_ascii_182();
f_read_source_45();
f_translate_511(f_program_136());
f_print_program_512();
RT_POP(xf1486);
} else {
RT_POP(xf1486);
int x1487 = rt_xcur;
if (0 || x1487 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1487);
}
}
}
  rt_main_done();
  return 0;
}
