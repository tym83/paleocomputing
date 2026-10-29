#include "paleo.h"
#include <math.h>
typedef rstr *P458;
typedef struct R460 R460;
typedef struct R460 *P459;
struct R460 {  rt_int kind; rt_int line; rt_int ival; P458 s;  };
typedef struct A462 A462;
struct A462 { rt_int lo, hi, lo2, hi2; P459 *p; };
typedef A462 *P461;
typedef struct R464 R464;
typedef struct R464 *P463;
struct R464 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P458 name; P458 tag; P463 a; P463 b; P463 c; P463 d; P463 e; P463 next;  };
typedef struct R466 R466;
typedef struct R466 *P465;
struct R466 {  P458 lo; P458 hi; P458 lo2; P458 hi2; P458 slen; rt_int mlo; rt_int mhi; int hasm; P463 args;  };
typedef struct R468 R468;
typedef struct R468 *P467;
typedef struct R470 R470;
typedef struct R470 *P469;
struct R470 {  P458 name; P467 t; P465 c; P463 st; P469 next;  };
struct R468 {  rt_int kind; P458 name; P463 lits; P467 elem; P467 idx; P467 idx2; P465 elemcons; P463 elemst; P467 under; P463 tparams; P463 ocap; P469 fields; P467 target; P463 decl; P458 cname; int forward; int defined; int helpers; P467 next;  };
typedef struct R472 R472;
typedef struct R472 *P471;
struct R472 {  P458 name; rt_int mode; P467 t; P465 c; P458 cfield; P471 next;  };
typedef struct R474 R474;
typedef struct R474 *P473;
struct R474 {  rt_int kind; P458 name; P467 t; P465 c; P458 access; P458 cname; int ro_flag; rt_int mvalue; int hasmv; P463 st; P463 decl; P471 params; P467 result; rt_int depth; rt_int level; int byref; P473 members; P473 mnext; P463 binds; P473 insts; P473 chain; P473 stack;  };
typedef struct R476 R476;
typedef struct R476 *P475;
struct R476 {  P458 s; P475 next;  };
typedef struct R478 R478;
typedef struct R478 *P477;
struct R478 {  P475 head; P475 tail;  };
typedef struct A480 A480;
struct A480 { rt_int lo, hi, lo2, hi2; P473 *p; };
typedef A480 *P479;
typedef struct R482 R482;
typedef struct R482 *P481;
struct R482 {  P458 match; P458 label; rt_int depth; P481 next;  };
typedef struct R484 R484;
typedef struct R484 *P483;
struct R484 {  P463 d; P483 next;  };
typedef struct R486 R486;
typedef struct R486 *P485;
struct R486 {  P463 d; P458 w; P485 next;  };
typedef struct R488 R488;
typedef struct R488 *P487;
struct R488 {  rt_int depth; P463 imps; int all_imp; P487 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P458 result_;
 P458 t_534;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_537;
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
 rstr letters_538;
};
struct f_lower_s_15fr { int dummy;
 rstr *s_14;
 rstr result_;
 rstr letters_539;
 rstr r_540;
 rt_int i_541;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_545;
 rstr kw_546;
 rstr w_547;
 rt_int i_548;
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
 P477 result_;
 P477 b_552;
};
struct f_put_27fr { int dummy;
 P477 b_25;
 rstr *s_26;
 P475 l_554;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P477 b_30;
 P475 l_556;
};
struct f_splice_34fr { int dummy;
 P477 a_32;
 P477 b_33;
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
 P459 t_558;
};
struct f_lex_line_44fr { int dummy;
 rstr *line_43;
 rt_int i_560;
 rt_int j_561;
 rt_int n_562;
 int c_563;
 rstr w_564;
 rt_int k_565;
 rstr w_569;
 rt_int k_570;
 rstr two_574;
};
struct f_read_source_45fr { int dummy;
 rstr line_575;
};
struct f_nn_48fr { int dummy;
 rt_int kind_46;
 rt_int line_47;
 P463 result_;
 P463 x_576;
};
struct f_append_52fr { int dummy;
 P463 *head_49;
 P463 *tail_50;
 P463 x_51;
};
struct f_list_len_54fr { int dummy;
 P463 l_53;
 rt_int result_;
 rt_int n_578;
 P463 p_579;
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
 P458 result_;
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
 P458 result_;
};
struct f_name_node_77fr { int dummy;
 P463 result_;
 P463 x_580;
};
struct f_id_list_78fr { int dummy;
 P463 result_;
 P463 head_581;
 P463 tail_582;
};
struct f_p_subtype_79fr { int dummy;
 P463 result_;
 rt_int line_583;
 P463 x_584;
 rstr w_585;
 P463 head_586;
 P463 tail_587;
 P463 head_588;
 P463 tail_589;
 int more_590;
 P463 names_591;
 P463 st_592;
 P463 cmp_593;
 P463 head_594;
 P463 tail_595;
 int more_596;
 P463 lit_597;
};
struct f_actual_params_80fr { int dummy;
 P463 result_;
 P463 head_598;
 P463 tail_599;
};
struct f_is_type_word_82fr { int dummy;
 rstr *w_81;
 int result_;
};
struct f_actual_tt_83fr { int dummy;
 P463 result_;
 P463 head_600;
 P463 tail_601;
 int more_602;
};
struct f_binop_88fr { int dummy;
 P458 op_84;
 P463 l_85;
 P463 r_86;
 rt_int line_87;
 P463 result_;
 P463 x_603;
};
struct f_expr_89fr { int dummy;
 P463 result_;
 P463 l_604;
 P458 op_605;
 rt_int line_606;
};
struct f_expr_and_90fr { int dummy;
 P463 result_;
 P463 l_607;
 rt_int line_608;
};
struct f_expr_not_91fr { int dummy;
 P463 result_;
 P463 x_609;
};
struct f_is_rel_93fr { int dummy;
 rstr *s_92;
 int result_;
};
struct f_expr_rel_94fr { int dummy;
 P463 result_;
 P463 l_610;
 P458 op_611;
 rt_int line_612;
};
struct f_expr_add_95fr { int dummy;
 P463 result_;
 P463 l_613;
 P458 op_614;
 rt_int line_615;
};
struct f_expr_mul_96fr { int dummy;
 P463 result_;
 P463 l_616;
 P458 op_617;
 rt_int line_618;
};
struct f_expr_pow_97fr { int dummy;
 P463 result_;
 P463 l_619;
 rt_int line_620;
};
struct f_expr_prefix_98fr { int dummy;
 P463 result_;
 P463 x_621;
};
struct f_postfix_99fr { int dummy;
 P463 result_;
 P463 p_622;
 rt_int line_623;
 P463 x_624;
 P463 head_625;
 P463 tail_626;
 int more_627;
 P463 lo_628;
 P463 r_629;
 P463 x_630;
 P463 x_631;
 P463 x_632;
};
struct f_primary_100fr { int dummy;
 P463 result_;
 rt_int line_633;
 P463 x_634;
 rt_int k_635;
 rstr w_636;
 P463 head_637;
 P463 tail_638;
 int more_639;
};
struct f_constructor_item_101fr { int dummy;
 P463 result_;
 rt_int line_640;
 P463 it_641;
 P463 first_642;
 P463 keys_643;
 P463 ktail_644;
 P463 lab_645;
 rt_int save_646;
 P463 more_647;
 P463 tail2_648;
 int ok_649;
 int go_650;
 P463 l2_651;
};
struct f_at_body_end_102fr { int dummy;
 int result_;
};
struct f_body_103fr { int dummy;
 P463 result_;
 P463 head_652;
 P463 tail_653;
};
struct f_body_element_104fr { int dummy;
 P463 result_;
 P463 x_654;
};
struct f_declaration_105fr { int dummy;
 P463 result_;
 rt_int line_655;
 P463 head_656;
 P463 tail_657;
 P463 names_658;
 P463 x_659;
};
struct f_object_decl_106fr { int dummy;
 P463 result_;
 rt_int line_660;
 int is_var_661;
 P463 names_662;
 P463 st_663;
 P463 init_664;
 P463 head_665;
 P463 tail_666;
 P463 x_667;
};
struct f_abbrev_decl_107fr { int dummy;
 P463 result_;
 P463 x_668;
};
struct f_skip_rep_108fr { int dummy;
 rt_int depth_669;
};
struct f_type_decl_109fr { int dummy;
 P463 result_;
 rt_int line_670;
 P458 name_671;
 P463 params_672;
 P463 x_673;
};
struct f_mode_of_111fr { int dummy;
 rstr *w_110;
 rt_int result_;
};
struct f_formal_params_112fr { int dummy;
 P463 result_;
 P463 head_674;
 P463 tail_675;
 int more_676;
 rt_int mode_677;
 P463 names_678;
 P463 ntail_679;
 P463 st_680;
 P463 p_681;
};
struct f_imports_list_114fr { int dummy;
 P463 owner_113;
 int result_;
 P463 head_682;
 P463 tail_683;
 int more_684;
 int ro_685;
 P463 x_686;
};
struct f_is_definable_116fr { int dummy;
 rstr *w_115;
 int result_;
};
struct f_definable_name_117fr { int dummy;
 P458 result_;
};
struct f_subprogram_decl_118fr { int dummy;
 P463 result_;
 rt_int line_687;
 P463 x_688;
 int is_abn_689;
 int is_func_690;
 int dummy_691;
};
struct f_capsule_decl_119fr { int dummy;
 P463 result_;
 P463 x_692;
 int dummy_693;
 P463 head_694;
 P463 tail_695;
 int more_696;
 P463 n_697;
};
struct f_formal_tt_120fr { int dummy;
 P463 result_;
 P463 head_698;
 P463 tail_699;
 int more_700;
};
struct f_generic_decl_121fr { int dummy;
 P463 result_;
 P463 x_701;
 P463 head_702;
 P463 tail_703;
 int more_704;
 P463 names_705;
 rt_int kind_706;
 P463 st_707;
 P463 p_708;
 P458 nm_709;
 P463 st_710;
};
struct f_task_decl_122fr { int dummy;
 P463 result_;
 P463 x_711;
 int dummy_712;
};
struct f_expose_decl_123fr { int dummy;
 P463 result_;
 P463 x_713;
 P463 head_714;
 P463 tail_715;
 int more_716;
 P463 n_717;
};
struct f_is_compound_kw_125fr { int dummy;
 rstr *w_124;
 int result_;
};
struct f_statement_126fr { int dummy;
 P463 result_;
 P463 labels_718;
 P463 ltail_719;
 P458 match_720;
 P463 s_721;
};
struct f_unlabeled_statement_127fr { int dummy;
 P463 result_;
 rt_int line_722;
 P463 x_723;
 P463 head_724;
 P463 tail_725;
 P463 invs_726;
 P463 itail_727;
 int more_728;
 P463 target_729;
};
struct f_arm_131fr { int dummy;
 P463 cond_128;
 P463 b_129;
 rt_int line_130;
 P463 result_;
 P463 x_730;
};
struct f_if_stmt_132fr { int dummy;
 P463 result_;
 P463 x_731;
 P463 head_732;
 P463 tail_733;
 P463 cond_734;
 int go_735;
};
struct f_case_stmt_133fr { int dummy;
 P463 result_;
 P463 x_736;
 P463 head_737;
 P463 tail_738;
 P463 labs_739;
 P463 ltail_740;
 int more_741;
 P463 l_742;
};
struct f_repeat_stmt_134fr { int dummy;
 P463 result_;
 P463 x_743;
};
struct f_guard_stmt_135fr { int dummy;
 P463 result_;
 P463 x_744;
 P463 head_745;
 P463 tail_746;
 P463 h_747;
};
struct f_program_136fr { int dummy;
 P463 result_;
 P463 head_748;
 P463 tail_749;
};
struct f_hash_138fr { int dummy;
 rstr *s_137;
 rt_int result_;
 rt_int h_750;
 rt_int i_751;
};
struct f_lookup_140fr { int dummy;
 rstr *name_139;
 P473 result_;
 P473 y_755;
};
struct f_lookup_decl_142fr { int dummy;
 P463 d_141;
 P473 result_;
 P473 y_756;
};
struct f_define_145fr { int dummy;
 P473 y_143;
 rt_int line_144;
 rt_int h_757;
 P473 z_758;
};
struct f_overloadable_147fr { int dummy;
 P473 y_146;
 int result_;
};
struct f_same_signature_150fr { int dummy;
 P471 a_148;
 P471 b_149;
 int result_;
 P471 x_759;
 P471 y_760;
};
struct f_open_scope_151fr { int dummy;
};
struct f_close_scope_152fr { int dummy;
};
struct f_new_sym_155fr { int dummy;
 rt_int kind_153;
 P458 name_154;
 P473 result_;
 P473 y_761;
};
struct f_new_typ_157fr { int dummy;
 rt_int kind_156;
 P467 result_;
 P467 t_763;
};
struct f_new_cons_158fr { int dummy;
 P465 result_;
 P465 c_765;
};
struct f_same_lits_161fr { int dummy;
 P463 a_159;
 P463 b_160;
 int result_;
 P463 x_767;
 P463 y_768;
};
struct f_same_164fr { int dummy;
 P467 a_162;
 P467 b_163;
 int result_;
 P469 f_769;
 P469 g_770;
};
struct f_base_of_166fr { int dummy;
 P467 t_165;
 P467 result_;
};
struct f_base_cons_169fr { int dummy;
 P467 t_167;
 P465 c_168;
 P465 result_;
};
struct f_kind_name_171fr { int dummy;
 P467 t_170;
 rstr result_;
};
struct f_check_type_175fr { int dummy;
 P467 got_172;
 P467 want_173;
 rt_int line_174;
};
struct f_ctype_177fr { int dummy;
 P467 t_176;
 rstr result_;
};
struct f_field_decls_179fr { int dummy;
 P467 t_178;
 rstr result_;
 P469 f_773;
 P458 s_774;
};
struct f_declare_ctype_181fr { int dummy;
 P467 t_180;
 P467 u_775;
 P467 target_776;
 P463 p_777;
 P458 fs_778;
};
struct f_init_ascii_182fr { int dummy;
 rstr names_779;
 P463 head_780;
 P463 tail_781;
 rt_int start_782;
 rt_int i_783;
 P463 lit_787;
};
struct f_lit_index_185fr { int dummy;
 P463 lits_183;
 rstr *name_184;
 rt_int result_;
 rt_int i_788;
 P463 l_789;
};
struct f_resolve_subtype_188fr { int dummy;
 P463 st_186;
 P465 *c_187;
 P465 c_187v;
 P467 result_;
 P467 t_790;
 int ok_791;
 P467 dummy_792;
 P465 ic_794;
 P465 ic2_795;
 P465 ec_796;
 P467 it_797;
 P467 et_798;
 P465 ec_799;
 P463 comp_800;
 P469 tail_801;
 P465 cc_802;
 P469 f_803;
 P465 ec_805;
 P473 y_806;
};
struct f_opened_190fr { int dummy;
 P467 t_189;
 int result_;
 P483 c_807;
};
struct f_replace_all_194fr { int dummy;
 rstr *s_191;
 rstr *pat_192;
 rstr *r_193;
 rstr result_;
 rt_int i_808;
};
struct f_subst_196fr { int dummy;
 rstr *s_195;
 rstr result_;
 P475 l_809;
 P458 r_810;
};
struct f_new_type_200fr { int dummy;
 P473 y_197;
 P463 st_198;
 P465 *c_199;
 P465 c_199v;
 P467 result_;
 P463 d_811;
 P463 p_812;
 P465 uc_813;
 P473 z_814;
};
struct f_init_storage_204fr { int dummy;
 rstr *lval_201;
 P467 t_202;
 P465 c_203;
 P463 p_815;
 P463 a_816;
 P465 uc_817;
 P467 ut_818;
 P467 at_819;
 rstr v_820;
 P475 saved_821;
 P475 l1_822;
 P475 l2_823;
 rstr i_826;
 P469 f_827;
};
struct f_manifest_207fr { int dummy;
 P463 e_205;
 int *ok_206;
 int ok_206v;
 rt_int result_;
 rt_int a_828;
 rt_int b_829;
 int ok2_830;
 P473 y_831;
};
struct f_mcopy_209fr { int dummy;
 P467 t_208;
 rstr result_;
 rstr ct_832;
 rstr name_833;
 P475 l_834;
};
struct f_composite_211fr { int dummy;
 P467 t_210;
 int result_;
};
struct f_assign_code_216fr { int dummy;
 rstr *lval_212;
 P467 t_213;
 rstr *v_214;
 P465 c_215;
 rstr result_;
};
struct f_copy_code_219fr { int dummy;
 P467 t_217;
 rstr *v_218;
 rstr result_;
};
struct f_eq_code_223fr { int dummy;
 P467 t_220;
 rstr *a_221;
 rstr *b_222;
 rstr result_;
};
struct f_elem_assign_227fr { int dummy;
 rstr *lval_224;
 P467 t_225;
 rstr *v_226;
 rstr result_;
};
struct f_seen_name_230fr { int dummy;
 P475 l_228;
 rstr *s_229;
 int result_;
 P475 p_836;
};
struct f_emit_helpers_231fr { int dummy;
 P467 order_837;
 P467 t_838;
 P475 done_839;
 P475 l_840;
 rstr c_841;
};
struct f_helper_bodies_233fr { int dummy;
 P467 t_232;
 rstr c_843;
 P477 b_844;
 P467 e_845;
 P463 p_846;
 P458 pc_847;
 P469 f_848;
 P458 conds_849;
 rstr fn_850;
 rstr fn_851;
};
struct f_declare_body_235fr { int dummy;
 P463 elems_234;
 P463 e_852;
 P473 y_853;
 P473 y_854;
 P473 y_855;
 P467 t_856;
 P473 y_857;
 P473 g_858;
};
struct f_manifest_const_237fr { int dummy;
 P463 d_236;
 int ok_859;
 rt_int v_860;
 P473 y_861;
 P465 c_862;
};
struct f_exported_241fr { int dummy;
 P463 d_238;
 rstr *name_239;
 int *ro_240;
 int ro_240v;
 int result_;
 P463 p_863;
};
struct f_copy_sym_243fr { int dummy;
 P473 y_242;
 P473 result_;
 P473 z_864;
};
struct f_gen_capsule_245fr { int dummy;
 P463 d_244;
 P473 y_866;
 P483 cr_867;
 P487 ctx_868;
 P473 m_869;
 P463 p_870;
 int ro_871;
 P485 w_874;
 P473 z_876;
};
struct f_gen_expose_247fr { int dummy;
 P463 d_246;
 P473 y_877;
 P473 m_878;
 P463 p_879;
 int found_880;
 P473 z_881;
};
struct f_finish_ptr_249fr { int dummy;
 P467 t_248;
 P463 d_882;
 P463 p_883;
 P465 c_884;
 rstr dummy_885;
 P473 y_886;
};
struct f_declare_subprogram_251fr { int dummy;
 P463 d_250;
};
struct f_build_subprogram_253fr { int dummy;
 P463 d_252;
 P473 result_;
 P473 y_887;
 P463 p_888;
 P471 tail_889;
 P471 pm_890;
 P465 rc_892;
};
struct f_element_255fr { int dummy;
 P463 e_254;
 rt_int k_893;
 P467 t_894;
 rstr c_895;
};
struct f_storage_258fr { int dummy;
 rstr *name_256;
 P467 t_257;
 rstr result_;
 rstr g_896;
 rstr f_897;
};
struct f_bind_261fr { int dummy;
 P473 y_259;
 rstr *access_260;
};
struct f_var_decl_263fr { int dummy;
 P463 d_262;
 P465 c_898;
 P467 t_899;
 P473 y_900;
 rstr access_901;
 P467 vt_902;
 rstr v_903;
};
struct f_const_decl_265fr { int dummy;
 P463 d_264;
 P465 c_904;
 P467 t_905;
 P467 vt_906;
 P473 y_907;
 int ok_908;
 rstr v_909;
 rstr access_910;
};
struct f_subprogram_267fr { int dummy;
 P463 d_266;
};
struct f_gen_subprogram_270fr { int dummy;
 P463 d_268;
 P473 y_269;
 P477 saved_code_911;
 P477 saved_fields_912;
 int saved_in_913;
 P473 saved_sym_914;
 P481 saved_exits_915;
 rt_int saved_frames_916;
 P458 args_917;
 P471 pm_918;
 P475 saved_handlers_919;
 P475 saved_cleanups_920;
 P487 ctx_921;
 P458 head_922;
 P458 frame_923;
 P458 parent_924;
 P458 copy_back_925;
 rstr ct_927;
 rstr f_928;
 P473 p_929;
};
struct f_waits_of_272fr { int dummy;
 P463 d_271;
 rstr result_;
 P485 w_930;
};
struct f_task_waits_274fr { int dummy;
 P463 elems_273;
 rstr result_;
 P463 e_931;
 P458 r_932;
};
struct f_await_tasks_276fr { int dummy;
 P463 elems_275;
 rstr w_933;
};
struct f_capsule_elements_278fr { int dummy;
 P463 elems_277;
 P463 e_934;
};
struct f_body_elements_280fr { int dummy;
 P463 elems_279;
};
struct f_gen_body_282fr { int dummy;
 P463 elems_281;
};
struct f_pop_frames_284fr { int dummy;
 rt_int upto_283;
 rt_int i_935;
 P475 c_936;
};
struct f_push_cleanup_286fr { int dummy;
 rstr *s_285;
 P475 c_937;
};
struct f_pop_cleanup_287fr { int dummy;
};
struct f_gen_statement_289fr { int dummy;
 P463 s_288;
 P458 label_939;
 P481 x_940;
};
struct f_st_assign_291fr { int dummy;
 P463 s_290;
 P458 lv_943;
 P467 t_944;
 P467 vt_945;
 P465 c_946;
 int ro_947;
 rstr lo_948;
 rstr hi_949;
 rstr v_950;
 rstr v_951;
};
struct f_st_call_293fr { int dummy;
 P463 s_292;
 P463 c_952;
 P467 t_953;
 P463 x_954;
};
struct f_st_if_295fr { int dummy;
 P463 s_294;
 P463 a_955;
 int first_956;
 P467 t_957;
 rstr c_958;
};
struct f_st_case_297fr { int dummy;
 P463 s_296;
 P467 st_959;
 P467 vt_960;
 int first_961;
 P463 a_962;
 rstr sel_963;
 rstr tmp_964;
 P463 lab_965;
 P458 conds_966;
 rstr v_967;
 rstr lo_968;
 rstr hi_969;
};
struct f_st_repeat_299fr { int dummy;
 P463 s_298;
 P467 t_970;
 P465 c_971;
 rstr cond_972;
 rstr access_973;
 rstr lov_974;
 rstr hiv_975;
 rstr it_976;
 P473 y_977;
};
struct f_st_exit_301fr { int dummy;
 P463 s_300;
 P481 x_978;
};
struct f_st_return_303fr { int dummy;
 P463 s_302;
 P467 vt_979;
 rstr v_980;
};
struct f_exc_id_306fr { int dummy;
 rstr *name_304;
 rt_int line_305;
 rstr result_;
 P473 y_981;
};
struct f_st_guard_308fr { int dummy;
 P463 s_307;
 P463 h_982;
 int first_983;
 P475 hv_984;
 rstr f_985;
 rstr x_986;
 P463 n_988;
 P458 conds_989;
};
struct f_st_alloc_310fr { int dummy;
 P463 s_309;
 P458 lv_990;
 P467 t_991;
 P467 target_992;
 P467 vt_993;
 P465 c_994;
 P465 tc_995;
 int ro_996;
 P463 d_997;
 P463 p_998;
 P463 a_999;
 rstr tcn_1000;
 rstr cell_1001;
 rstr v_1002;
 rstr pv_1003;
 P473 y_1004;
 rstr v_1005;
};
struct f_act_ref_312fr { int dummy;
 P463 e_311;
 rstr result_;
 P458 lv_1006;
 P467 t_1007;
 P465 c_1008;
 int ro_1009;
};
struct f_st_create_314fr { int dummy;
 P463 s_313;
 P473 y_1010;
 P471 pm_1011;
 P463 a_1012;
 P458 lv_1013;
 P467 lt_1014;
 P467 vt_1015;
 P465 lc_1016;
 int ro_1017;
 rstr nf_1018;
 rstr act_1019;
 P458 link_1020;
 rt_int i_1021;
 rstr v_1025;
};
struct f_wait_alt_319fr { int dummy;
 P463 inv_315;
 rstr *arr_316;
 rt_int i_317;
 int mixed_318;
 rstr result_;
 P458 lv_1026;
 P467 t_1027;
 P467 vt_1028;
 P465 c_1029;
 int ro_1030;
 P463 fn_1031;
 P463 args_1032;
 rstr slot_1033;
 P458 dv_1034;
 P467 dt_1035;
 rstr tmp_1036;
 rstr v_1037;
 rstr v_1038;
};
struct f_builtin_wait_321fr { int dummy;
 P463 inv_320;
 int result_;
 P458 lv_1039;
 P467 t_1040;
 P465 c_1041;
 int ro_1042;
 P477 saved_1043;
 int ok_1044;
};
struct f_wait_op_326fr { int dummy;
 P463 inv_322;
 rstr *op_323;
 rstr *q_324;
 int is_stmt_325;
 rstr result_;
 P463 x_1047;
 P463 f_1048;
 P463 qn_1049;
 P467 t_1050;
 rstr r_1051;
};
struct f_user_wait_331fr { int dummy;
 P463 s_327;
 rstr *arr_328;
 rstr *w_329;
 rt_int n_330;
 P463 a_1052;
 rt_int i_1053;
 P458 tests_1054;
 P458 revokes_1055;
 P463 inv_1056;
 P463 st_1057;
 P465 c_1058;
 P467 qt_1059;
 rstr qname_1060;
 P473 y_1061;
 rstr access_1062;
};
struct f_st_wait_333fr { int dummy;
 P463 s_332;
 P463 a_1063;
 rt_int n_1064;
 int first_1065;
 P477 inits_1066;
 int user_1067;
 rstr arr_1068;
 rstr w_1069;
 P463 inv_1070;
 P463 inv_1071;
 P458 conds_1072;
 rt_int i_1073;
};
struct f_call_node_337fr { int dummy;
 rstr *name_334;
 P463 arg_335;
 rt_int line_336;
 P463 result_;
 P463 x_1077;
 P463 f_1078;
};
struct f_user_region_339fr { int dummy;
 P463 s_338;
 P467 t_1079;
 rstr f_1080;
 rstr lock_1081;
 rstr unlock_1082;
};
struct f_st_region_341fr { int dummy;
 P463 s_340;
 P458 lv_1083;
 P467 t_1084;
 P465 c_1085;
 int ro_1086;
 rstr lk_1087;
 rstr f_1088;
};
struct f_gparam_344fr { int dummy;
 P463 g_342;
 rstr *name_343;
 P463 result_;
 P463 p_1089;
};
struct f_bind_sym_346fr { int dummy;
 P463 p_345;
 P473 result_;
 P473 y_1090;
};
struct f_same_binds_349fr { int dummy;
 P473 a_347;
 P473 b_348;
 int result_;
 P473 x_1091;
 P473 y_1092;
};
struct f_same_binding_352fr { int dummy;
 P473 a_350;
 P473 b_351;
 int result_;
};
struct f_instantiate_357fr { int dummy;
 P473 g_353;
 P463 tt_354;
 P463 args_355;
 rt_int line_356;
 P473 result_;
 P463 gd_1093;
 P463 pat_1094;
 P473 binds_1095;
 P463 f_1096;
 P463 a_1097;
 P463 fp_1098;
 P473 inst_1099;
 P467 at_1100;
 P465 c_1101;
 P487 saved_fctx_1102;
 int saved_in_1103;
 rt_int saved_level_1104;
 P473 saved_sym_1105;
 P477 saved_code_1106;
 P463 p_1107;
 P473 b_1108;
 P463 st_1109;
 int ok_1110;
 int known_1111;
 P473 q_1112;
 P473 b_1113;
 rstr v_1114;
 P473 b_1115;
};
struct f_access_of_359fr { int dummy;
 P473 y_358;
 rstr result_;
 P458 p_1116;
 rt_int i_1117;
};
struct f_import_of_362fr { int dummy;
 P463 l_360;
 rstr *name_361;
 P463 result_;
 P463 p_1121;
};
struct f_check_import_365fr { int dummy;
 P473 y_363;
 rt_int line_364;
 int result_;
 P487 c_1122;
 int ro_1123;
 P463 imp_1124;
};
struct f_c_ident_367fr { int dummy;
 rstr *s_366;
 rstr result_;
};
struct f_deref_370fr { int dummy;
 rstr *base_368;
 P467 t_369;
 rstr result_;
};
struct f_is_lvalue_372fr { int dummy;
 P463 e_371;
 int result_;
 P473 y_1125;
};
struct f_lvalue_378fr { int dummy;
 P463 e_373;
 P458 *code_374;
 P458 code_374v;
 P467 *t_375;
 P467 t_375v;
 P465 *c_376;
 P465 c_376v;
 int *ro_377;
 int ro_377v;
 P458 base_1126;
 P467 bt_1127;
 P465 bc_1128;
 P473 y_1129;
};
struct f_select_on_386fr { int dummy;
 rstr *base_379;
 P467 bt_380;
 P463 e_381;
 int *ro_382;
 P458 *code_383;
 P458 code_383v;
 P467 *t_384;
 P467 t_384v;
 P465 *c_385;
 P465 c_385v;
 P463 p_1130;
 P469 f_1131;
};
struct f_index_on_395fr { int dummy;
 rstr *base_387;
 P467 bt_388;
 P463 e_389;
 int *ro_390;
 int lv_391;
 P458 *code_392;
 P458 code_392v;
 P467 *t_393;
 P467 t_393v;
 P465 *c_394;
 P465 c_394v;
 P463 a_1132;
 P467 it_1133;
 rstr i_1134;
 rstr j_1135;
 rstr lo_1136;
 rstr hi_1137;
 rstr i_1138;
 rstr i_1139;
};
struct f_gexpr_399fr { int dummy;
 P463 e_396;
 P467 want_397;
 P467 *t_398;
 P467 t_398v;
 rstr result_;
 rt_int k_1140;
 P458 code_1141;
 P465 c_1142;
 int ro_1143;
 P467 bt_1144;
 rt_int i_1145;
 P473 y_1146;
 int ro_1147;
 P463 call_1148;
 P463 fname_1149;
 rstr a_1150;
 rstr a_1151;
 rstr a_1152;
 P463 nm_1153;
 P473 y_1154;
 rstr base_1155;
 rstr base_1156;
};
struct f_copy_node_401fr { int dummy;
 P463 e_400;
 P463 result_;
 P463 x_1157;
};
struct f_wrap_apply_403fr { int dummy;
 P463 e_402;
 P463 result_;
 P463 x_1159;
};
struct f_c_string_405fr { int dummy;
 rstr *s_404;
 rstr result_;
 rt_int n_1160;
 rt_int i_1161;
 rstr r_1165;
 rt_int j_1166;
 rt_int i_1167;
};
struct f_enum_type_of_408fr { int dummy;
 rstr *lit_406;
 rt_int line_407;
 P467 result_;
 P473 y_1171;
 P465 c_1172;
 P463 st_1173;
};
struct f_attribute_411fr { int dummy;
 P463 e_409;
 P467 *t_410;
 P467 t_410v;
 rstr result_;
 P467 bt_1174;
 P465 c_1175;
 P458 base_1176;
 P473 y_1177;
 P463 st_1178;
};
struct f_gbinop_415fr { int dummy;
 P463 e_412;
 P467 want_413;
 P467 *t_414;
 P467 t_414v;
 rstr result_;
 P458 op_1179;
 P467 ta_1180;
 P467 tb_1181;
 P467 hint_1182;
 P473 uy_1183;
 P463 l_1184;
 P463 r_1185;
 P463 call_1186;
 P463 fname_1187;
 rstr s_1188;
 rstr a_1189;
 rstr a_1190;
 rstr b_1191;
 rstr a_1192;
 rstr b_1193;
 P467 wa_1194;
 P467 wb_1195;
 rstr a_1196;
 rstr b_1197;
 rstr dummy_1198;
 rstr a_1199;
 rstr b_1200;
 P467 ct_1201;
 rstr a_1202;
 rstr b_1203;
};
struct f_constructor_419fr { int dummy;
 P463 e_416;
 P467 want_417;
 P467 *t_418;
 P467 t_418v;
 rstr result_;
 P463 it_1204;
 P469 f_1205;
 P467 vt_1206;
 P458 s_1207;
 rstr v_1208;
 rstr tmp_1209;
 rstr ct_1210;
 rstr et_1211;
 P458 parts_1212;
 rstr lo_1213;
 rstr hi_1214;
 rstr v_1215;
 rt_int i_1216;
 rstr v_1220;
 rstr tmp_1221;
 P458 parts_1222;
 rstr v_1223;
};
struct f_fits_422fr { int dummy;
 P473 y_420;
 P463 args_421;
 int result_;
 P463 a_1224;
 P471 pm_1225;
 P467 t_1226;
 P477 saved_1227;
 int ok_1228;
 P458 lv_1229;
 P465 lc_1230;
 int ro_1231;
 rstr v_1234;
};
struct f_resolve_overload_427fr { int dummy;
 rstr *name_423;
 P463 args_424;
 int is_stmt_425;
 rt_int line_426;
 P473 result_;
 P473 y_1235;
 P473 first_1236;
 rt_int n_1237;
};
struct f_is_builtin_429fr { int dummy;
 rstr *n_428;
 int result_;
};
struct f_is_low_level_431fr { int dummy;
 rstr *n_430;
 int result_;
};
struct f_me_high_435fr { int dummy;
 P463 tt_432;
 rt_int line_433;
 P467 *t_434;
 P467 t_434v;
 rstr result_;
 P465 c_1238;
};
struct f_type_tag_437fr { int dummy;
 P467 t_436;
 rstr result_;
};
struct f_lock_ref_440fr { int dummy;
 P463 e_438;
 rstr *name_439;
 rstr result_;
 P458 lv_1239;
 P467 t_1240;
 P465 c_1241;
 int ro_1242;
};
struct f_user_op_443fr { int dummy;
 rstr *op_441;
 P463 args_442;
 P473 result_;
 P473 y_1243;
};
struct f_gcall_447fr { int dummy;
 P463 e_444;
 int is_stmt_445;
 P467 *t_446;
 P467 t_446v;
 rstr result_;
 P463 fn_1244;
 P463 tt_1245;
 P473 y_1246;
 P458 args_1247;
 P463 a_1248;
 P471 pm_1249;
 P467 lt_1250;
 P467 vt_1251;
 P458 lv_1252;
 P465 lc_1253;
 int ro_1254;
 rt_int i_1255;
 rstr v_1259;
 rstr ct_1260;
 rstr v_1261;
};
struct f_builtin_454fr { int dummy;
 rstr *name_448;
 P463 tt_449;
 P463 args_450;
 rt_int line_451;
 int is_stmt_452;
 P467 *t_453;
 P467 t_453v;
 rstr result_;
 P467 at_1262;
 rt_int n_1263;
 rstr a_1264;
 rstr a_1265;
 rstr a_1266;
 rstr a_1267;
 rstr a_1268;
 rstr n1_1269;
 rstr m1_1270;
 rstr a_1271;
 rstr a_1272;
 P463 last_1273;
 rstr a_1274;
 rstr a_1275;
 P458 lv_1276;
 P465 lc_1277;
 int ro_1278;
 P463 last_1279;
 P458 lv_1280;
 P458 dv_1281;
 P465 lc_1282;
 int ro_1283;
 P467 mt_1284;
 P467 dt_1285;
 rstr v_1286;
 P458 lv_1287;
 P465 lc_1288;
 int ro_1289;
 P467 mt_1290;
 P458 lv_1291;
 P458 dv_1292;
 P458 bv_1293;
 P465 lc_1294;
 int ro_1295;
 P467 mt_1296;
 P467 dt_1297;
 P467 bt_1298;
 rstr v_1299;
 rstr v_1300;
 rstr v_1301;
 rstr v_1302;
 rstr a_1303;
 P458 bv_1304;
 P465 bc_1305;
 int ro_1306;
 P467 bt_1307;
 rstr l_1308;
 rstr dev_1309;
 rstr cmd_1310;
 P458 dv_1311;
 P465 dc_1312;
 int ro_1313;
 P467 dt_1314;
};
struct f_translate_456fr { int dummy;
 P463 units_455;
 P463 u_1315;
 P463 l_1317;
 rstr w_1318;
};
struct f_print_program_457fr { int dummy;
};
static void as_R488(R488 *d, R488 s);
static R488 cp_R488(R488 s);
static int eq_R488(R488 a, R488 b);
static void as_R486(R486 *d, R486 s);
static R486 cp_R486(R486 s);
static int eq_R486(R486 a, R486 b);
static void as_R484(R484 *d, R484 s);
static R484 cp_R484(R484 s);
static int eq_R484(R484 a, R484 b);
static void as_R482(R482 *d, R482 s);
static R482 cp_R482(R482 s);
static int eq_R482(R482 a, R482 b);
static void as_A480(A480 *d, A480 s);
static A480 cp_A480(A480 s);
static int eq_A480(A480 a, A480 b);
static void as_R478(R478 *d, R478 s);
static R478 cp_R478(R478 s);
static int eq_R478(R478 a, R478 b);
static void as_R476(R476 *d, R476 s);
static R476 cp_R476(R476 s);
static int eq_R476(R476 a, R476 b);
static void as_R474(R474 *d, R474 s);
static R474 cp_R474(R474 s);
static int eq_R474(R474 a, R474 b);
static void as_R472(R472 *d, R472 s);
static R472 cp_R472(R472 s);
static int eq_R472(R472 a, R472 b);
static void as_R470(R470 *d, R470 s);
static R470 cp_R470(R470 s);
static int eq_R470(R470 a, R470 b);
static void as_R468(R468 *d, R468 s);
static R468 cp_R468(R468 s);
static int eq_R468(R468 a, R468 b);
static void as_R466(R466 *d, R466 s);
static R466 cp_R466(R466 s);
static int eq_R466(R466 a, R466 b);
static void as_R464(R464 *d, R464 s);
static R464 cp_R464(R464 s);
static int eq_R464(R464 a, R464 b);
static void as_A462(A462 *d, A462 s);
static A462 cp_A462(A462 s);
static int eq_A462(A462 a, A462 b);
static void as_R460(R460 *d, R460 s);
static R460 cp_R460(R460 s);
static int eq_R460(R460 a, R460 b);
static P458 f_mk_3(rstr *s_2);
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
static P477 f_new_buffer_24(void);
static void f_put_27(P477 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P477 b_30);
static void f_splice_34(P477 a_32, P477 b_33);
static int f_is_reserved_36(rstr *w_35);
static int f_is_word_op_38(rstr *w_37);
static void f_add_token_42(rt_int kind_39, rstr *s_40, rt_int ival_41);
static void f_lex_line_44(rstr *line_43);
static void f_read_source_45(void);
static P463 f_nn_48(rt_int kind_46, rt_int line_47);
static void f_append_52(P463 *head_49, P463 *tail_50, P463 x_51);
static rt_int f_list_len_54(P463 l_53);
static rt_int f_cur_line_55(void);
static int f_at_kw_57(rstr *w_56);
static int f_at_op_59(rstr *w_58);
static int f_at_kind_61(rt_int k_60);
static rt_int f_kind_at_63(rt_int k_62);
static P458 f_text_at_65(rt_int k_64);
static void f_perror_67(rstr *msg_66);
static int f_accept_kw_69(rstr *w_68);
static int f_accept_op_71(rstr *w_70);
static void f_expect_kw_73(rstr *w_72);
static void f_expect_op_75(rstr *w_74);
static P458 f_expect_id_76(void);
static P463 f_name_node_77(void);
static P463 f_id_list_78(void);
static P463 f_p_subtype_79(void);
static P463 f_actual_params_80(void);
static int f_is_type_word_82(rstr *w_81);
static P463 f_actual_tt_83(void);
static P463 f_binop_88(P458 op_84, P463 l_85, P463 r_86, rt_int line_87);
static P463 f_expr_89(void);
static P463 f_expr_and_90(void);
static P463 f_expr_not_91(void);
static int f_is_rel_93(rstr *s_92);
static P463 f_expr_rel_94(void);
static P463 f_expr_add_95(void);
static P463 f_expr_mul_96(void);
static P463 f_expr_pow_97(void);
static P463 f_expr_prefix_98(void);
static P463 f_postfix_99(void);
static P463 f_primary_100(void);
static P463 f_constructor_item_101(void);
static int f_at_body_end_102(void);
static P463 f_body_103(void);
static P463 f_body_element_104(void);
static P463 f_declaration_105(void);
static P463 f_object_decl_106(void);
static P463 f_abbrev_decl_107(void);
static void f_skip_rep_108(void);
static P463 f_type_decl_109(void);
static rt_int f_mode_of_111(rstr *w_110);
static P463 f_formal_params_112(void);
static int f_imports_list_114(P463 owner_113);
static int f_is_definable_116(rstr *w_115);
static P458 f_definable_name_117(void);
static P463 f_subprogram_decl_118(void);
static P463 f_capsule_decl_119(void);
static P463 f_formal_tt_120(void);
static P463 f_generic_decl_121(void);
static P463 f_task_decl_122(void);
static P463 f_expose_decl_123(void);
static int f_is_compound_kw_125(rstr *w_124);
static P463 f_statement_126(void);
static P463 f_unlabeled_statement_127(void);
static P463 f_arm_131(P463 cond_128, P463 b_129, rt_int line_130);
static P463 f_if_stmt_132(void);
static P463 f_case_stmt_133(void);
static P463 f_repeat_stmt_134(void);
static P463 f_guard_stmt_135(void);
static P463 f_program_136(void);
static rt_int f_hash_138(rstr *s_137);
static P473 f_lookup_140(rstr *name_139);
static P473 f_lookup_decl_142(P463 d_141);
static void f_define_145(P473 y_143, rt_int line_144);
static int f_overloadable_147(P473 y_146);
static int f_same_signature_150(P471 a_148, P471 b_149);
static void f_open_scope_151(void);
static void f_close_scope_152(void);
static P473 f_new_sym_155(rt_int kind_153, P458 name_154);
static P467 f_new_typ_157(rt_int kind_156);
static P465 f_new_cons_158(void);
static int f_same_lits_161(P463 a_159, P463 b_160);
static int f_same_164(P467 a_162, P467 b_163);
static P467 f_base_of_166(P467 t_165);
static P465 f_base_cons_169(P467 t_167, P465 c_168);
static rstr f_kind_name_171(P467 t_170);
static void f_check_type_175(P467 got_172, P467 want_173, rt_int line_174);
static rstr f_ctype_177(P467 t_176);
static rstr f_field_decls_179(P467 t_178);
static void f_declare_ctype_181(P467 t_180);
static void f_init_ascii_182(void);
static rt_int f_lit_index_185(P463 lits_183, rstr *name_184);
static P467 f_resolve_subtype_188(P463 st_186, P465 *c_187);
static int f_opened_190(P467 t_189);
static rstr f_replace_all_194(rstr *s_191, rstr *pat_192, rstr *r_193);
static rstr f_subst_196(rstr *s_195);
static P467 f_new_type_200(P473 y_197, P463 st_198, P465 *c_199);
static void f_init_storage_204(rstr *lval_201, P467 t_202, P465 c_203);
static rt_int f_manifest_207(P463 e_205, int *ok_206);
static rstr f_mcopy_209(P467 t_208);
static int f_composite_211(P467 t_210);
static rstr f_assign_code_216(rstr *lval_212, P467 t_213, rstr *v_214, P465 c_215);
static rstr f_copy_code_219(P467 t_217, rstr *v_218);
static rstr f_eq_code_223(P467 t_220, rstr *a_221, rstr *b_222);
static rstr f_elem_assign_227(rstr *lval_224, P467 t_225, rstr *v_226);
static int f_seen_name_230(P475 l_228, rstr *s_229);
static void f_emit_helpers_231(void);
static void f_helper_bodies_233(P467 t_232);
static void f_declare_body_235(P463 elems_234);
static void f_manifest_const_237(P463 d_236);
static int f_exported_241(P463 d_238, rstr *name_239, int *ro_240);
static P473 f_copy_sym_243(P473 y_242);
static void f_gen_capsule_245(P463 d_244);
static void f_gen_expose_247(P463 d_246);
static void f_finish_ptr_249(P467 t_248);
static void f_declare_subprogram_251(P463 d_250);
static P473 f_build_subprogram_253(P463 d_252);
static void f_element_255(P463 e_254);
static rstr f_storage_258(rstr *name_256, P467 t_257);
static void f_bind_261(P473 y_259, rstr *access_260);
static void f_var_decl_263(P463 d_262);
static void f_const_decl_265(P463 d_264);
static void f_subprogram_267(P463 d_266);
static void f_gen_subprogram_270(P463 d_268, P473 y_269);
static rstr f_waits_of_272(P463 d_271);
static rstr f_task_waits_274(P463 elems_273);
static void f_await_tasks_276(P463 elems_275);
static void f_capsule_elements_278(P463 elems_277);
static void f_body_elements_280(P463 elems_279);
static void f_gen_body_282(P463 elems_281);
static void f_pop_frames_284(rt_int upto_283);
static void f_push_cleanup_286(rstr *s_285);
static void f_pop_cleanup_287(void);
static void f_gen_statement_289(P463 s_288);
static void f_st_assign_291(P463 s_290);
static void f_st_call_293(P463 s_292);
static void f_st_if_295(P463 s_294);
static void f_st_case_297(P463 s_296);
static void f_st_repeat_299(P463 s_298);
static void f_st_exit_301(P463 s_300);
static void f_st_return_303(P463 s_302);
static rstr f_exc_id_306(rstr *name_304, rt_int line_305);
static void f_st_guard_308(P463 s_307);
static void f_st_alloc_310(P463 s_309);
static rstr f_act_ref_312(P463 e_311);
static void f_st_create_314(P463 s_313);
static rstr f_wait_alt_319(P463 inv_315, rstr *arr_316, rt_int i_317, int mixed_318);
static int f_builtin_wait_321(P463 inv_320);
static rstr f_wait_op_326(P463 inv_322, rstr *op_323, rstr *q_324, int is_stmt_325);
static void f_user_wait_331(P463 s_327, rstr *arr_328, rstr *w_329, rt_int n_330);
static void f_st_wait_333(P463 s_332);
static P463 f_call_node_337(rstr *name_334, P463 arg_335, rt_int line_336);
static void f_user_region_339(P463 s_338);
static void f_st_region_341(P463 s_340);
static P463 f_gparam_344(P463 g_342, rstr *name_343);
static P473 f_bind_sym_346(P463 p_345);
static int f_same_binds_349(P473 a_347, P473 b_348);
static int f_same_binding_352(P473 a_350, P473 b_351);
static P473 f_instantiate_357(P473 g_353, P463 tt_354, P463 args_355, rt_int line_356);
static rstr f_access_of_359(P473 y_358);
static P463 f_import_of_362(P463 l_360, rstr *name_361);
static int f_check_import_365(P473 y_363, rt_int line_364);
static rstr f_c_ident_367(rstr *s_366);
static rstr f_deref_370(rstr *base_368, P467 t_369);
static int f_is_lvalue_372(P463 e_371);
static void f_lvalue_378(P463 e_373, P458 *code_374, P467 *t_375, P465 *c_376, int *ro_377);
static void f_select_on_386(rstr *base_379, P467 bt_380, P463 e_381, int *ro_382, P458 *code_383, P467 *t_384, P465 *c_385);
static void f_index_on_395(rstr *base_387, P467 bt_388, P463 e_389, int *ro_390, int lv_391, P458 *code_392, P467 *t_393, P465 *c_394);
static rstr f_gexpr_399(P463 e_396, P467 want_397, P467 *t_398);
static P463 f_copy_node_401(P463 e_400);
static P463 f_wrap_apply_403(P463 e_402);
static rstr f_c_string_405(rstr *s_404);
static P467 f_enum_type_of_408(rstr *lit_406, rt_int line_407);
static rstr f_attribute_411(P463 e_409, P467 *t_410);
static rstr f_gbinop_415(P463 e_412, P467 want_413, P467 *t_414);
static rstr f_constructor_419(P463 e_416, P467 want_417, P467 *t_418);
static int f_fits_422(P473 y_420, P463 args_421);
static P473 f_resolve_overload_427(rstr *name_423, P463 args_424, int is_stmt_425, rt_int line_426);
static int f_is_builtin_429(rstr *n_428);
static int f_is_low_level_431(rstr *n_430);
static rstr f_me_high_435(P463 tt_432, rt_int line_433, P467 *t_434);
static rstr f_type_tag_437(P467 t_436);
static rstr f_lock_ref_440(P463 e_438, rstr *name_439);
static P473 f_user_op_443(rstr *op_441, P463 args_442);
static rstr f_gcall_447(P463 e_444, int is_stmt_445, P467 *t_446);
static rstr f_builtin_454(rstr *name_448, P463 tt_449, P463 args_450, rt_int line_451, int is_stmt_452, P467 *t_453);
static void f_translate_456(P463 units_455);
static void f_print_program_457(void);
static int ex_compile_error_1;
static P461 g_toks_489;
static rt_int g_ntoks_490;
static rt_int g_tpos_491;
static rt_int g_src_line_492;
static P479 g_table_493;
static rt_int g_depth_494;
static P473 g_scope_stack_495;
static P467 g_all_types_496;
static rt_int g_serial_497;
static P477 g_out_types_498;
static P477 g_out_helpers_499;
static P477 g_out_protos_500;
static P477 g_out_globals_501;
static P477 g_out_funcs_502;
static P477 g_out_init_503;
static P477 g_out_excs_504;
static P477 g_code_505;
static P477 g_fields_buf_506;
static int g_in_func_507;
static rt_int g_cur_level_508;
static P487 g_fctx_509;
static P483 g_caps_510;
static P485 g_cap_waits_511;
static P475 g_psub_512;
static P458 g_st_field_513;
static P477 g_out_frames_514;
static P473 g_func_sym_515;
static P481 g_exits_516;
static rt_int g_frames_517;
static P475 g_handlers_518;
static P475 g_cleanups_519;
static rt_int g_trial_520;
static P475 g_mcopies_521;
static P467 g_ty_int_522;
static P467 g_ty_bool_523;
static P467 g_ty_float_524;
static P467 g_ty_ascii_525;
static P467 g_ty_string_526;
static P467 g_ty_void_527;
static P467 g_ty_file_528;
static P467 g_ty_nil_529;
static P467 g_ty_lock_530;
static P467 g_ty_latch_531;
static P467 g_ty_act_532;
static P465 g_no_cons_533;
static P458 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
F->s_2 = s_2;
F->t_534 = NULL;
{ rstr *cell535 = rt_alloc(sizeof(rstr));
rt_int pv536 = ((*F->s_2)).len;
(*cell535) = rt_str_new(pv536);
rt_str_assign(&(*cell535), (*F->s_2));
F->t_534 = cell535;
}
F->result_ = F->t_534;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_chs_5(int c_4) {
  struct f_chs_5fr *F = rt_alloc(sizeof *F);
F->c_4 = c_4;
F->r_537 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_537, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_537;
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
F->letters_538 = rt_str_copy(rt_str("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26));
if (((97 <= F->c_12) && (F->c_12 <= 122))) {
F->result_ = rt_str_get(F->letters_538, rt_add(rt_sub(((rt_int)(F->c_12) + 1), ((rt_int)(97) + 1)), ((rt_int)1LL)));
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
F->letters_539 = rt_str_copy(rt_str("abcdefghijklmnopqrstuvwxyz", 26));
F->r_540 = rt_str_new(((*F->s_14)).len);
rt_str_assign(&F->r_540, (*F->s_14));
{ rt_int lo542 = ((rt_int)1LL), hi543 = ((*F->s_14)).len;
for (rt_int it544 = lo542; it544 <= hi543; it544++) {
F->i_541 = it544;
if (((65 <= rt_str_get(F->r_540, F->i_541)) && (rt_str_get(F->r_540, F->i_541) <= 90))) {
(*rt_str_at(&F->r_540, F->i_541)) = rt_str_get(F->letters_539, rt_add(rt_sub(((rt_int)(rt_str_get(F->r_540, F->i_541)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_540;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_c_17(rstr *s_16) {
  struct f_field_c_17fr *F = rt_alloc(sizeof *F);
F->s_16 = s_16;
F->l_545 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->kw_546 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)));
F->w_547 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_545), rt_str(" ", 1)));
{ rt_int lo549 = ((rt_int)1LL), hi550 = rt_add(rt_sub((F->kw_546).len, (F->w_547).len), ((rt_int)1LL));
for (rt_int it551 = lo549; it551 <= hi550; it551++) {
F->i_548 = it551;
if (rt_str_eq(rt_str_slice(F->kw_546, F->i_548, rt_sub(rt_add(F->i_548, (F->w_547).len), ((rt_int)1LL))), F->w_547)) {
F->result_ = rt_str_cat(F->l_545, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_545;
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
g_serial_497 = rt_add(g_serial_497, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_497));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_fail_23(rt_int line_21, rstr *msg_22) {
  struct f_fail_23fr *F = rt_alloc(sizeof *F);
F->line_21 = line_21;
F->msg_22 = msg_22;
if ((g_trial_520 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  return;
}

static P477 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
F->b_552 = NULL;
{ R478 *cell553 = rt_alloc(sizeof(R478));
(*cell553).head = NULL;
(*cell553).tail = NULL;
F->b_552 = cell553;
}
F->result_ = F->b_552;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_put_27(P477 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_554 = NULL;
{ R476 *cell555 = rt_alloc(sizeof(R476));
(*cell555).s = NULL;
(*cell555).next = NULL;
F->l_554 = cell555;
}
(*(P475)rt_nil_check(F->l_554)).s = f_mk_3(&(*F->s_26));
if (((*(P477)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P477)rt_nil_check(F->b_25)).head = F->l_554;
} else {
(*(P475)rt_nil_check((*(P477)rt_nil_check(F->b_25)).tail)).next = F->l_554;
}
(*(P477)rt_nil_check(F->b_25)).tail = F->l_554;
ret_:
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
F->s_28 = s_28;
f_put_27(g_code_505, &(*F->s_28));
ret_:
  return;
}

static void f_print_buffer_31(P477 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
F->b_30 = b_30;
F->l_556 = NULL;
F->l_556 = (*(P477)rt_nil_check(F->b_30)).head;
while ((F->l_556 != NULL)) {
rt_putln((*(P458)rt_nil_check((*(P475)rt_nil_check(F->l_556)).s)));
F->l_556 = (*(P475)rt_nil_check(F->l_556)).next;
}
ret_:
  return;
}

static void f_splice_34(P477 a_32, P477 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P477)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P477)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P477)rt_nil_check(F->a_32)).head = (*(P477)rt_nil_check(F->b_33)).head;
} else {
(*(P475)rt_nil_check((*(P477)rt_nil_check(F->a_32)).tail)).next = (*(P477)rt_nil_check(F->b_33)).head;
}
(*(P477)rt_nil_check(F->a_32)).tail = (*(P477)rt_nil_check(F->b_33)).tail;
(*(P477)rt_nil_check(F->b_33)).head = NULL;
(*(P477)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
F->w_35 = w_35;
{ rstr sel557 = (*F->w_35);
if (0 || rt_str_eq(sel557, rt_str("ABBREV", 6)) || rt_str_eq(sel557, rt_str("ABNORMAL", 8)) || rt_str_eq(sel557, rt_str("ALL", 3)) || rt_str_eq(sel557, rt_str("ALLOC", 5)) || rt_str_eq(sel557, rt_str("ASSERT", 6)) || rt_str_eq(sel557, rt_str("BEGIN", 5)) || rt_str_eq(sel557, rt_str("BY", 2)) || rt_str_eq(sel557, rt_str("CAPSULE", 7)) || rt_str_eq(sel557, rt_str("CASE", 4)) || rt_str_eq(sel557, rt_str("CONST", 5)) || rt_str_eq(sel557, rt_str("CREATE", 6)) || rt_str_eq(sel557, rt_str("DO", 2)) || rt_str_eq(sel557, rt_str("ELSE", 4)) || rt_str_eq(sel557, rt_str("ELSEIF", 6)) || rt_str_eq(sel557, rt_str("END", 3)) || rt_str_eq(sel557, rt_str("EXCEPTION", 9)) || rt_str_eq(sel557, rt_str("EXIT", 4)) || rt_str_eq(sel557, rt_str("EXPORTS", 7)) || rt_str_eq(sel557, rt_str("EXPOSE", 6)) || rt_str_eq(sel557, rt_str("EXTERNAL", 8)) || rt_str_eq(sel557, rt_str("FOR", 3)) || rt_str_eq(sel557, rt_str("FROM", 4)) || rt_str_eq(sel557, rt_str("FUNC", 4)) || rt_str_eq(sel557, rt_str("GENERIC", 7)) || rt_str_eq(sel557, rt_str("GOTO", 4)) || rt_str_eq(sel557, rt_str("GUARD", 5)) || rt_str_eq(sel557, rt_str("IF", 2)) || rt_str_eq(sel557, rt_str("IMPORTS", 7)) || rt_str_eq(sel557, rt_str("LOCATION", 8)) || rt_str_eq(sel557, rt_str("NAMED", 5)) || rt_str_eq(sel557, rt_str("NEEDS", 5)) || rt_str_eq(sel557, rt_str("NEW", 3)) || rt_str_eq(sel557, rt_str("NONE", 4)) || rt_str_eq(sel557, rt_str("OUT", 3)) || rt_str_eq(sel557, rt_str("OF", 2)) || rt_str_eq(sel557, rt_str("PRAG", 4)) || rt_str_eq(sel557, rt_str("PROC", 4)) || rt_str_eq(sel557, rt_str("RAISE", 5)) || rt_str_eq(sel557, rt_str("READONLY", 8)) || rt_str_eq(sel557, rt_str("REVERSE", 7)) || rt_str_eq(sel557, rt_str("REGION", 6)) || rt_str_eq(sel557, rt_str("RENAMING", 8)) || rt_str_eq(sel557, rt_str("REP", 3)) || rt_str_eq(sel557, rt_str("REPEAT", 6)) || rt_str_eq(sel557, rt_str("RERAISE", 7)) || rt_str_eq(sel557, rt_str("RETURN", 6)) || rt_str_eq(sel557, rt_str("SUBTYPE", 7)) || rt_str_eq(sel557, rt_str("TASK", 4)) || rt_str_eq(sel557, rt_str("THEN", 4)) || rt_str_eq(sel557, rt_str("TO", 2)) || rt_str_eq(sel557, rt_str("TYPE", 4)) || rt_str_eq(sel557, rt_str("VAR", 3)) || rt_str_eq(sel557, rt_str("WAIT", 4)) || rt_str_eq(sel557, rt_str("WHEN", 4)) || rt_str_eq(sel557, rt_str("WHILE", 5))) {
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
F->t_558 = NULL;
{ R460 *cell559 = rt_alloc(sizeof(R460));
(*cell559).s = NULL;
F->t_558 = cell559;
}
(*(P459)rt_nil_check(F->t_558)).kind = F->kind_39;
(*(P459)rt_nil_check(F->t_558)).line = g_src_line_492;
(*(P459)rt_nil_check(F->t_558)).ival = F->ival_41;
(*(P459)rt_nil_check(F->t_558)).s = f_mk_3(&(*F->s_40));
g_ntoks_490 = rt_add(g_ntoks_490, ((rt_int)1LL));
(*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_ntoks_490, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo] = F->t_558;
ret_:
  return;
}

static void f_lex_line_44(rstr *line_43) {
  struct f_lex_line_44fr *F = rt_alloc(sizeof *F);
F->line_43 = line_43;
F->i_560 = ((rt_int)1LL);
F->j_561 = ((rt_int)0LL);
F->n_562 = ((*F->line_43)).len;
while ((F->i_560 <= F->n_562)) {
F->c_563 = rt_str_get((*F->line_43), F->i_560);
if (((((F->c_563 == 32) || (F->c_563 == 9)) || (F->c_563 == 13)) || (F->c_563 == 12))) {
F->i_560 = rt_add(F->i_560, ((rt_int)1LL));
} else if ((F->c_563 == 37)) {
F->i_560 = rt_add(F->n_562, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_563)) {
F->j_561 = F->i_560;
while (((F->j_561 <= F->n_562) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_561)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_561))) || (rt_str_get((*F->line_43), F->j_561) == 95)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
{
F->w_564 = rt_str_new(rt_sub(F->j_561, F->i_560));
rt_str_assign(&F->w_564, rt_str_slice((*F->line_43), F->i_560, rt_sub(F->j_561, ((rt_int)1LL))));
{ rt_int lo566 = ((rt_int)1LL), hi567 = (F->w_564).len;
for (rt_int it568 = lo566; it568 <= hi567; it568++) {
F->k_565 = it568;
(*rt_str_at(&F->w_564, F->k_565)) = f_upper_13(rt_str_get(F->w_564, F->k_565));
}
}
if (rt_str_eq(F->w_564, rt_str("PRAGMAT", 7))) {
while (((F->j_561 <= F->n_562) && (rt_str_get((*F->line_43), F->j_561) != 59))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
} else if (f_is_reserved_36(&F->w_564)) {
f_add_token_42(((rt_int)2LL), &F->w_564, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_564)) {
f_add_token_42(((rt_int)3LL), &F->w_564, ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)1LL), &F->w_564, ((rt_int)0LL));
}
}
F->i_560 = F->j_561;
} else if (f_is_digit_11(F->c_563)) {
F->j_561 = F->i_560;
while (((F->j_561 <= F->n_562) && f_is_digit_11(rt_str_get((*F->line_43), F->j_561)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
if ((((F->j_561 < F->n_562) && (rt_str_get((*F->line_43), F->j_561) == 46)) && f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_561, ((rt_int)1LL)))))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
while (((F->j_561 <= F->n_562) && f_is_digit_11(rt_str_get((*F->line_43), F->j_561)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
if (((F->j_561 <= F->n_562) && ((rt_str_get((*F->line_43), F->j_561) == 69) || (rt_str_get((*F->line_43), F->j_561) == 101)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
if (((F->j_561 <= F->n_562) && ((rt_str_get((*F->line_43), F->j_561) == 43) || (rt_str_get((*F->line_43), F->j_561) == 45)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
while (((F->j_561 <= F->n_562) && f_is_digit_11(rt_str_get((*F->line_43), F->j_561)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
}
f_add_token_42(((rt_int)5LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_560, rt_sub(F->j_561, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42(((rt_int)4LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), F->i_560, rt_sub(F->j_561, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_43), F->i_560, rt_sub(F->j_561, ((rt_int)1LL)))));
}
F->i_560 = F->j_561;
} else if ((F->c_563 == 39)) {
F->j_561 = rt_add(F->i_560, ((rt_int)1LL));
if (((F->j_561 > F->n_562) || (!f_is_letter_9(rt_str_get((*F->line_43), F->j_561))))) {
f_fail_23(g_src_line_492, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
while (((F->j_561 <= F->n_562) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_561)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_561))) || (rt_str_get((*F->line_43), F->j_561) == 95)))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
{
F->w_569 = rt_str_new(rt_sub(rt_sub(F->j_561, F->i_560), ((rt_int)1LL)));
rt_str_assign(&F->w_569, rt_str_slice((*F->line_43), rt_add(F->i_560, ((rt_int)1LL)), rt_sub(F->j_561, ((rt_int)1LL))));
{ rt_int lo571 = ((rt_int)1LL), hi572 = (F->w_569).len;
for (rt_int it573 = lo571; it573 <= hi572; it573++) {
F->k_570 = it573;
(*rt_str_at(&F->w_569, F->k_570)) = f_upper_13(rt_str_get(F->w_569, F->k_570));
}
}
f_add_token_42(((rt_int)6LL), &F->w_569, ((rt_int)0LL));
}
F->i_560 = F->j_561;
} else if ((F->c_563 == 34)) {
F->j_561 = rt_add(F->i_560, ((rt_int)1LL));
while (((F->j_561 <= F->n_562) && (rt_str_get((*F->line_43), F->j_561) != 34))) {
F->j_561 = rt_add(F->j_561, ((rt_int)1LL));
}
if ((F->j_561 > F->n_562)) {
f_fail_23(g_src_line_492, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42(((rt_int)7LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_43), rt_add(F->i_560, ((rt_int)1LL)), rt_sub(F->j_561, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_560 = rt_add(F->j_561, ((rt_int)1LL));
} else {
{
F->two_574 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_574, rt_str("  ", 2));
(*rt_str_at(&F->two_574, ((rt_int)1LL))) = F->c_563;
if ((F->i_560 < F->n_562)) {
(*rt_str_at(&F->two_574, ((rt_int)2LL))) = rt_str_get((*F->line_43), rt_add(F->i_560, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_574, rt_str(":=", 2)) || rt_str_eq(F->two_574, rt_str("=>", 2))) || rt_str_eq(F->two_574, rt_str("..", 2))) || rt_str_eq(F->two_574, rt_str("**", 2))) || rt_str_eq(F->two_574, rt_str("/=", 2))) || rt_str_eq(F->two_574, rt_str("<=", 2))) || rt_str_eq(F->two_574, rt_str(">=", 2)))) {
f_add_token_42(((rt_int)3LL), &F->two_574, ((rt_int)0LL));
F->i_560 = rt_add(F->i_560, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_563 == 40) || (F->c_563 == 41)) || (F->c_563 == 91)) || (F->c_563 == 93)) || (F->c_563 == 44)) || (F->c_563 == 58)) || (F->c_563 == 59)) || (F->c_563 == 46)) || (F->c_563 == 35)) || (F->c_563 == 43)) || (F->c_563 == 45)) || (F->c_563 == 42)) || (F->c_563 == 47)) || (F->c_563 == 38)) || (F->c_563 == 61)) || (F->c_563 == 60)) || (F->c_563 == 62))) {
f_add_token_42(((rt_int)3LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_563); b_; }), ((rt_int)0LL));
F->i_560 = rt_add(F->i_560, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_492, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_575 = rt_str_new(rt_sizeln());
rt_readln(&F->line_575);
g_src_line_492 = rt_add(g_src_line_492, ((rt_int)1LL));
f_lex_line_44(&F->line_575);
}
f_add_token_42(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  return;
}

static P463 f_nn_48(rt_int kind_46, rt_int line_47) {
  struct f_nn_48fr *F = rt_alloc(sizeof *F);
F->kind_46 = kind_46;
F->line_47 = line_47;
F->x_576 = NULL;
{ R464 *cell577 = rt_alloc(sizeof(R464));
(*cell577).name = NULL;
(*cell577).tag = NULL;
(*cell577).a = NULL;
(*cell577).b = NULL;
(*cell577).c = NULL;
(*cell577).d = NULL;
(*cell577).e = NULL;
(*cell577).next = NULL;
F->x_576 = cell577;
}
(*(P463)rt_nil_check(F->x_576)).kind = F->kind_46;
(*(P463)rt_nil_check(F->x_576)).line = F->line_47;
F->result_ = F->x_576;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_append_52(P463 *head_49, P463 *tail_50, P463 x_51) {
  struct f_append_52fr *F = rt_alloc(sizeof *F);
F->head_49 = head_49;
F->tail_50 = tail_50;
F->x_51 = x_51;
if (((*F->head_49) == NULL)) {
(*F->head_49) = F->x_51;
} else {
(*(P463)rt_nil_check((*F->tail_50))).next = F->x_51;
}
(*F->tail_50) = F->x_51;
while (((*(P463)rt_nil_check((*F->tail_50))).next != NULL)) {
(*F->tail_50) = (*(P463)rt_nil_check((*F->tail_50))).next;
}
ret_:
  return;
}

static rt_int f_list_len_54(P463 l_53) {
  struct f_list_len_54fr *F = rt_alloc(sizeof *F);
F->l_53 = l_53;
F->n_578 = ((rt_int)0LL);
F->p_579 = NULL;
F->p_579 = F->l_53;
while ((F->p_579 != NULL)) {
F->n_578 = rt_add(F->n_578, ((rt_int)1LL));
F->p_579 = (*(P463)rt_nil_check(F->p_579)).next;
}
F->result_ = F->n_578;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_cur_line_55(void) {
  struct f_cur_line_55fr *F = rt_alloc(sizeof *F);
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kw_57(rstr *w_56) {
  struct f_at_kw_57fr *F = rt_alloc(sizeof *F);
F->w_56 = w_56;
F->result_ = (((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).kind == ((rt_int)2LL)) && rt_str_eq((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)), (*F->w_56)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_op_59(rstr *w_58) {
  struct f_at_op_59fr *F = rt_alloc(sizeof *F);
F->w_58 = w_58;
F->result_ = (((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).kind == ((rt_int)3LL)) && rt_str_eq((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)), (*F->w_58)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_at_kind_61(rt_int k_60) {
  struct f_at_kind_61fr *F = rt_alloc(sizeof *F);
F->k_60 = k_60;
F->result_ = ((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).kind == F->k_60);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_kind_at_63(rt_int k_62) {
  struct f_kind_at_63fr *F = rt_alloc(sizeof *F);
F->k_62 = k_62;
if ((rt_add(g_tpos_491, F->k_62) > g_ntoks_490)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(rt_add(g_tpos_491, F->k_62), (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P458 f_text_at_65(rt_int k_64) {
  struct f_text_at_65fr *F = rt_alloc(sizeof *F);
F->k_64 = k_64;
if ((rt_add(g_tpos_491, F->k_64) > g_ntoks_490)) {
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_ntoks_490, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
goto ret_;
}
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(rt_add(g_tpos_491, F->k_64), (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_perror_67(rstr *msg_66) {
  struct f_perror_67fr *F = rt_alloc(sizeof *F);
F->msg_66 = msg_66;
f_fail_23((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_66), rt_str(" (at ", 5)), (*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s))), rt_str(")", 1)); b_; }));
ret_:
  return;
}

static int f_accept_kw_69(rstr *w_68) {
  struct f_accept_kw_69fr *F = rt_alloc(sizeof *F);
F->w_68 = w_68;
if (f_at_kw_57(&(*F->w_68))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
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
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
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
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
ret_:
  return;
}

static void f_expect_op_75(rstr *w_74) {
  struct f_expect_op_75fr *F = rt_alloc(sizeof *F);
F->w_74 = w_74;
if ((!f_at_op_59(&(*F->w_74)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_74)); b_; }));
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
ret_:
  return;
}

static P458 f_expect_id_76(void) {
  struct f_expect_id_76fr *F = rt_alloc(sizeof *F);
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(rt_sub(g_tpos_491, ((rt_int)1LL)), (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_name_node_77(void) {
  struct f_name_node_77fr *F = rt_alloc(sizeof *F);
F->x_580 = NULL;
F->x_580 = f_nn_48(((rt_int)7LL), f_cur_line_55());
(*(P463)rt_nil_check(F->x_580)).name = f_expect_id_76();
F->result_ = F->x_580;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_id_list_78(void) {
  struct f_id_list_78fr *F = rt_alloc(sizeof *F);
F->head_581 = NULL;
F->tail_582 = NULL;
f_append_52(&F->head_581, &F->tail_582, f_name_node_77());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_581, &F->tail_582, f_name_node_77());
}
F->result_ = F->head_581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_p_subtype_79(void) {
  struct f_p_subtype_79fr *F = rt_alloc(sizeof *F);
F->line_583 = f_cur_line_55();
F->x_584 = NULL;
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->x_584 = f_nn_48(((rt_int)81LL), F->line_583);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P463)rt_nil_check(F->x_584)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_584;
goto ret_;
}
if ((!f_at_kind_61(((rt_int)1LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_585 = rt_str_copy((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)));
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if (rt_str_eq(F->w_585, rt_str("ARRAY", 5))) {
F->x_584 = f_nn_48(((rt_int)74LL), F->line_583);
{
F->head_586 = NULL;
F->tail_587 = NULL;
f_append_52(&F->head_586, &F->tail_587, f_p_subtype_79());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_586, &F->tail_587, f_p_subtype_79());
}
(*(P463)rt_nil_check(F->x_584)).a = F->head_586;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P463)rt_nil_check(F->x_584)).b = f_p_subtype_79();
} else if ((rt_str_eq(F->w_585, rt_str("RECORD", 6)) || rt_str_eq(F->w_585, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_585, rt_str("RECORD", 6))) {
F->x_584 = f_nn_48(((rt_int)75LL), F->line_583);
} else {
F->x_584 = f_nn_48(((rt_int)76LL), F->line_583);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_588 = NULL;
F->tail_589 = NULL;
F->more_590 = 1;
while (F->more_590) {
F->names_591 = NULL;
F->names_591 = f_id_list_78();
F->st_592 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_592 = f_p_subtype_79();
while ((F->names_591 != NULL)) {
F->cmp_593 = NULL;
F->cmp_593 = f_nn_48(((rt_int)63LL), (*(P463)rt_nil_check(F->names_591)).line);
(*(P463)rt_nil_check(F->cmp_593)).name = (*(P463)rt_nil_check(F->names_591)).name;
(*(P463)rt_nil_check(F->cmp_593)).a = F->st_592;
f_append_52(&F->head_588, &F->tail_589, F->cmp_593);
F->names_591 = (*(P463)rt_nil_check(F->names_591)).next;
}
F->more_590 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P463)rt_nil_check(F->x_584)).a = F->head_588;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_585, rt_str("UNION", 5)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_584)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_585, rt_str("ENUM", 4))) {
F->x_584 = f_nn_48(((rt_int)72LL), F->line_583);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_594 = NULL;
F->tail_595 = NULL;
F->more_596 = 1;
while (F->more_596) {
F->lit_597 = NULL;
F->lit_597 = f_nn_48(((rt_int)4LL), F->line_583);
if ((!f_at_kind_61(((rt_int)6LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P463)rt_nil_check(F->lit_597)).name = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
f_append_52(&F->head_594, &F->tail_595, F->lit_597);
F->more_596 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P463)rt_nil_check(F->x_584)).a = F->head_594;
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_584)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P463)rt_nil_check(F->x_584)).c = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_585, rt_str("STRING", 6)) || rt_str_eq(F->w_585, rt_str("SET", 3))) || rt_str_eq(F->w_585, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_585, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_585, rt_str("STRING", 6))) {
F->x_584 = f_nn_48(((rt_int)73LL), F->line_583);
} else if (rt_str_eq(F->w_585, rt_str("SET", 3))) {
F->x_584 = f_nn_48(((rt_int)77LL), F->line_583);
} else if (rt_str_eq(F->w_585, rt_str("MAILBOX", 7))) {
F->x_584 = f_nn_48(((rt_int)78LL), F->line_583);
} else {
F->x_584 = f_nn_48(((rt_int)79LL), F->line_583);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P463)rt_nil_check(F->x_584)).a = f_p_subtype_79();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_584)).b = f_actual_params_80();
}
} else if (rt_str_eq(F->w_585, rt_str("INT", 3))) {
F->x_584 = f_nn_48(((rt_int)70LL), F->line_583);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_584)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P463)rt_nil_check(F->x_584)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_585, rt_str("FLOAT", 5))) {
F->x_584 = f_nn_48(((rt_int)71LL), F->line_583);
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_584)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_584)).b = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P463)rt_nil_check(F->x_584)).c = f_expr_89();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_584 = f_nn_48(((rt_int)80LL), F->line_583);
(*(P463)rt_nil_check(F->x_584)).name = f_mk_3(&F->w_585);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_584)).a = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_584)).b = f_actual_params_80();
(*(P463)rt_nil_check(F->x_584)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_584;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_actual_params_80(void) {
  struct f_actual_params_80fr *F = rt_alloc(sizeof *F);
F->head_598 = NULL;
F->tail_599 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_52(&F->head_598, &F->tail_599, f_expr_89());
while (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_52(&F->head_598, &F->tail_599, f_expr_89());
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_598;
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

static P463 f_actual_tt_83(void) {
  struct f_actual_tt_83fr *F = rt_alloc(sizeof *F);
F->head_600 = NULL;
F->tail_601 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
F->more_602 = 1;
while (F->more_602) {
if ((f_at_kind_61(((rt_int)1LL)) && f_is_type_word_82(&(*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s))))) {
f_append_52(&F->head_600, &F->tail_601, f_p_subtype_79());
} else {
f_append_52(&F->head_600, &F->tail_601, f_expr_89());
}
F->more_602 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_600;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_binop_88(P458 op_84, P463 l_85, P463 r_86, rt_int line_87) {
  struct f_binop_88fr *F = rt_alloc(sizeof *F);
F->op_84 = op_84;
F->l_85 = l_85;
F->r_86 = r_86;
F->line_87 = line_87;
F->x_603 = NULL;
F->x_603 = f_nn_48(((rt_int)9LL), F->line_87);
(*(P463)rt_nil_check(F->x_603)).name = F->op_84;
(*(P463)rt_nil_check(F->x_603)).a = F->l_85;
(*(P463)rt_nil_check(F->x_603)).b = F->r_86;
F->result_ = F->x_603;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_89(void) {
  struct f_expr_89fr *F = rt_alloc(sizeof *F);
F->l_604 = NULL;
F->l_604 = f_expr_and_90();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_605 = NULL;
F->op_605 = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
F->line_606 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_604 = f_binop_88(F->op_605, F->l_604, f_expr_and_90(), F->line_606);
}
F->result_ = F->l_604;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_and_90(void) {
  struct f_expr_and_90fr *F = rt_alloc(sizeof *F);
F->l_607 = NULL;
F->l_607 = f_expr_not_91();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_608 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_607 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_607, f_expr_not_91(), F->line_608);
}
F->result_ = F->l_607;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_not_91(void) {
  struct f_expr_not_91fr *F = rt_alloc(sizeof *F);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_609 = NULL;
F->x_609 = f_nn_48(((rt_int)8LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_609)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P463)rt_nil_check(F->x_609)).a = f_expr_not_91();
F->result_ = F->x_609;
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

static P463 f_expr_rel_94(void) {
  struct f_expr_rel_94fr *F = rt_alloc(sizeof *F);
F->l_610 = NULL;
F->l_610 = f_expr_add_95();
if ((f_at_kind_61(((rt_int)3LL)) && f_is_rel_93(&(*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s))))) {
F->op_611 = NULL;
F->op_611 = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
F->line_612 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_610 = f_binop_88(F->op_611, F->l_610, f_expr_add_95(), F->line_612);
}
F->result_ = F->l_610;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_add_95(void) {
  struct f_expr_add_95fr *F = rt_alloc(sizeof *F);
F->l_613 = NULL;
F->l_613 = f_expr_mul_96();
while ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_614 = NULL;
F->op_614 = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
F->line_615 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_613 = f_binop_88(F->op_614, F->l_613, f_expr_mul_96(), F->line_615);
}
F->result_ = F->l_613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_mul_96(void) {
  struct f_expr_mul_96fr *F = rt_alloc(sizeof *F);
F->l_616 = NULL;
F->l_616 = f_expr_pow_97();
while (((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_617 = NULL;
F->op_617 = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
F->line_618 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_616 = f_binop_88(F->op_617, F->l_616, f_expr_pow_97(), F->line_618);
}
F->result_ = F->l_616;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_pow_97(void) {
  struct f_expr_pow_97fr *F = rt_alloc(sizeof *F);
F->l_619 = NULL;
F->l_619 = f_expr_prefix_98();
while (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_620 = f_cur_line_55();
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->l_619 = f_binop_88(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_619, f_expr_prefix_98(), F->line_620);
}
F->result_ = F->l_619;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expr_prefix_98(void) {
  struct f_expr_prefix_98fr *F = rt_alloc(sizeof *F);
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_621 = NULL;
F->x_621 = f_nn_48(((rt_int)8LL), f_cur_line_55());
(*(P463)rt_nil_check(F->x_621)).name = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_621)).a = f_expr_prefix_98();
F->result_ = F->x_621;
goto ret_;
}
F->result_ = f_postfix_99();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_postfix_99(void) {
  struct f_postfix_99fr *F = rt_alloc(sizeof *F);
F->p_622 = NULL;
F->p_622 = f_primary_100();
while (1) {
F->line_623 = f_cur_line_55();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_624 = NULL;
F->x_624 = f_nn_48(((rt_int)10LL), F->line_623);
F->head_625 = NULL;
F->tail_626 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_627 = 1;
while (F->more_627) {
F->lo_628 = NULL;
F->lo_628 = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_629 = NULL;
F->r_629 = f_nn_48(((rt_int)16LL), F->line_623);
(*(P463)rt_nil_check(F->r_629)).a = F->lo_628;
(*(P463)rt_nil_check(F->r_629)).b = f_expr_89();
f_append_52(&F->head_625, &F->tail_626, F->r_629);
} else {
f_append_52(&F->head_625, &F->tail_626, F->lo_628);
}
F->more_627 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P463)rt_nil_check(F->x_624)).a = F->p_622;
(*(P463)rt_nil_check(F->x_624)).b = F->head_625;
F->p_622 = F->x_624;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL)) || (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))))) {
F->x_630 = NULL;
F->x_630 = f_nn_48(((rt_int)11LL), F->line_623);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_630)).a = F->p_622;
(*(P463)rt_nil_check(F->x_630)).name = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->p_622 = F->x_630;
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P463)rt_nil_check(F->p_622)).kind == ((rt_int)7LL)))) {
F->x_631 = NULL;
F->x_631 = f_nn_48(((rt_int)12LL), F->line_623);
(*(P463)rt_nil_check(F->x_631)).a = F->p_622;
(*(P463)rt_nil_check(F->x_631)).b = f_actual_tt_83();
F->p_622 = F->x_631;
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_632 = NULL;
F->x_632 = f_nn_48(((rt_int)13LL), F->line_623);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_632)).a = F->p_622;
(*(P463)rt_nil_check(F->x_632)).b = f_p_subtype_79();
F->p_622 = F->x_632;
} else {
F->result_ = F->p_622;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_primary_100(void) {
  struct f_primary_100fr *F = rt_alloc(sizeof *F);
F->line_633 = f_cur_line_55();
F->x_634 = NULL;
F->k_635 = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).kind;
if ((F->k_635 == ((rt_int)4LL))) {
F->x_634 = f_nn_48(((rt_int)1LL), F->line_633);
(*(P463)rt_nil_check(F->x_634)).ival = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).ival;
(*(P463)rt_nil_check(F->x_634)).name = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = F->x_634;
goto ret_;
}
if ((((F->k_635 == ((rt_int)5LL)) || (F->k_635 == ((rt_int)7LL))) || (F->k_635 == ((rt_int)6LL)))) {
if ((F->k_635 == ((rt_int)5LL))) {
F->x_634 = f_nn_48(((rt_int)2LL), F->line_633);
} else if ((F->k_635 == ((rt_int)7LL))) {
F->x_634 = f_nn_48(((rt_int)3LL), F->line_633);
} else {
F->x_634 = f_nn_48(((rt_int)4LL), F->line_633);
}
(*(P463)rt_nil_check(F->x_634)).name = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = F->x_634;
goto ret_;
}
if ((F->k_635 == ((rt_int)1LL))) {
F->w_636 = rt_str_copy((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)));
if ((rt_str_eq(F->w_636, rt_str("TRUE", 4)) || rt_str_eq(F->w_636, rt_str("FALSE", 5)))) {
F->x_634 = f_nn_48(((rt_int)5LL), F->line_633);
if (rt_str_eq(F->w_636, rt_str("TRUE", 4))) {
(*(P463)rt_nil_check(F->x_634)).ival = ((rt_int)1LL);
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = F->x_634;
goto ret_;
}
if (rt_str_eq(F->w_636, rt_str("NIL", 3))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)6LL), F->line_633);
goto ret_;
}
F->result_ = f_name_node_77();
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_634 = f_nn_48(((rt_int)17LL), F->line_633);
(*(P463)rt_nil_check(F->x_634)).a = f_expr_89();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_634;
goto ret_;
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_637 = NULL;
F->tail_638 = NULL;
F->x_634 = f_nn_48(((rt_int)14LL), F->line_633);
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_639 = 1;
while (F->more_639) {
f_append_52(&F->head_637, &F->tail_638, f_constructor_item_101());
F->more_639 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P463)rt_nil_check(F->x_634)).a = F->head_637;
F->result_ = F->x_634;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_constructor_item_101(void) {
  struct f_constructor_item_101fr *F = rt_alloc(sizeof *F);
F->line_640 = f_cur_line_55();
F->it_641 = NULL;
F->it_641 = f_nn_48(((rt_int)15LL), F->line_640);
F->first_642 = NULL;
F->first_642 = f_expr_89();
F->keys_643 = NULL;
F->ktail_644 = NULL;
F->lab_645 = NULL;
F->lab_645 = f_nn_48(((rt_int)61LL), F->line_640);
(*(P463)rt_nil_check(F->lab_645)).a = F->first_642;
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P463)rt_nil_check(F->lab_645)).b = f_expr_89();
f_append_52(&F->keys_643, &F->ktail_644, F->lab_645);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_52(&F->keys_643, &F->ktail_644, F->lab_645);
} else if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_646 = g_tpos_491;
F->more_647 = NULL;
F->tail2_648 = NULL;
F->ok_649 = 0;
F->go_650 = 1;
while ((F->go_650 && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_651 = NULL;
F->l2_651 = f_nn_48(((rt_int)61LL), F->line_640);
(*(P463)rt_nil_check(F->l2_651)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P463)rt_nil_check(F->l2_651)).b = f_expr_89();
}
f_append_52(&F->more_647, &F->tail2_648, F->l2_651);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_649 = 1;
F->go_650 = 0;
} else if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_650 = 0;
}
}
if (F->ok_649) {
f_append_52(&F->keys_643, &F->ktail_644, F->lab_645);
f_append_52(&F->keys_643, &F->ktail_644, F->more_647);
} else {
g_tpos_491 = F->save_646;
}
}
if ((F->keys_643 != NULL)) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P463)rt_nil_check(F->it_641)).a = F->keys_643;
(*(P463)rt_nil_check(F->it_641)).b = f_expr_89();
} else {
(*(P463)rt_nil_check(F->it_641)).b = F->first_642;
}
F->result_ = F->it_641;
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

static P463 f_body_103(void) {
  struct f_body_103fr *F = rt_alloc(sizeof *F);
F->head_652 = NULL;
F->tail_653 = NULL;
while ((!f_at_body_end_102())) {
f_append_52(&F->head_652, &F->tail_653, f_body_element_104());
}
F->result_ = F->head_652;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_body_element_104(void) {
  struct f_body_element_104fr *F = rt_alloc(sizeof *F);
F->x_654 = NULL;
if ((((((((((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_654 = f_declaration_105();
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_654 = f_nn_48(((rt_int)33LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_654)).a = f_expr_89();
} else {
F->x_654 = f_statement_126();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_654;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_declaration_105(void) {
  struct f_declaration_105fr *F = rt_alloc(sizeof *F);
F->line_655 = f_cur_line_55();
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
F->head_656 = NULL;
F->tail_657 = NULL;
F->names_658 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->names_658 = f_id_list_78();
while ((F->names_658 != NULL)) {
F->x_659 = NULL;
F->x_659 = f_nn_48(((rt_int)49LL), F->line_655);
(*(P463)rt_nil_check(F->x_659)).name = (*(P463)rt_nil_check(F->names_658)).name;
f_append_52(&F->head_656, &F->tail_657, F->x_659);
F->names_658 = (*(P463)rt_nil_check(F->names_658)).next;
}
F->result_ = F->head_656;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_object_decl_106(void) {
  struct f_object_decl_106fr *F = rt_alloc(sizeof *F);
F->line_660 = f_cur_line_55();
F->is_var_661 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_662 = NULL;
F->st_663 = NULL;
F->init_664 = NULL;
F->head_665 = NULL;
F->tail_666 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->names_662 = f_id_list_78();
if (F->is_var_661) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_663 = f_p_subtype_79();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_664 = f_expr_89();
}
} else {
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_663 = f_p_subtype_79();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_664 = f_expr_89();
}
while ((F->names_662 != NULL)) {
F->x_667 = NULL;
if (F->is_var_661) {
F->x_667 = f_nn_48(((rt_int)40LL), F->line_660);
} else {
F->x_667 = f_nn_48(((rt_int)41LL), F->line_660);
}
(*(P463)rt_nil_check(F->x_667)).name = (*(P463)rt_nil_check(F->names_662)).name;
(*(P463)rt_nil_check(F->x_667)).a = F->st_663;
(*(P463)rt_nil_check(F->x_667)).b = F->init_664;
f_append_52(&F->head_665, &F->tail_666, F->x_667);
F->names_662 = (*(P463)rt_nil_check(F->names_662)).next;
}
F->result_ = F->head_665;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_abbrev_decl_107(void) {
  struct f_abbrev_decl_107fr *F = rt_alloc(sizeof *F);
F->x_668 = NULL;
F->x_668 = f_nn_48(((rt_int)42LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_668)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_668)).b = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P463)rt_nil_check(F->x_668)).a = f_p_subtype_79();
F->result_ = F->x_668;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_skip_rep_108(void) {
  struct f_skip_rep_108fr *F = rt_alloc(sizeof *F);
F->depth_669 = ((rt_int)0LL);
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((F->depth_669 == ((rt_int)0LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_61(((rt_int)0LL))))) {
if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_669 = rt_add(F->depth_669, ((rt_int)1LL));
} else if ((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_669 = rt_sub(F->depth_669, ((rt_int)1LL));
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
}
}
ret_:
  return;
}

static P463 f_type_decl_109(void) {
  struct f_type_decl_109fr *F = rt_alloc(sizeof *F);
F->line_670 = f_cur_line_55();
F->name_671 = NULL;
F->params_672 = NULL;
F->x_673 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->name_671 = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_672 = f_formal_params_112();
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)), rt_str("PTR", 3)))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->x_673 = f_nn_48(((rt_int)44LL), F->line_670);
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_673)).b = f_formal_params_112();
}
} else {
F->x_673 = f_nn_48(((rt_int)43LL), F->line_670);
(*(P463)rt_nil_check(F->x_673)).b = F->params_672;
}
(*(P463)rt_nil_check(F->x_673)).name = F->name_671;
(*(P463)rt_nil_check(F->x_673)).a = f_p_subtype_79();
f_skip_rep_108();
F->result_ = F->x_673;
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

static P463 f_formal_params_112(void) {
  struct f_formal_params_112fr *F = rt_alloc(sizeof *F);
F->head_674 = NULL;
F->tail_675 = NULL;
F->more_676 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_676) {
F->mode_677 = ((rt_int)1LL);
F->names_678 = NULL;
F->ntail_679 = NULL;
F->st_680 = NULL;
if ((((f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_677 = f_mode_of_111(&(*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)));
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
}
f_append_52(&F->names_678, &F->ntail_679, f_name_node_77());
while ((((f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)1LL))) && (f_kind_at_63(((rt_int)2LL)) == ((rt_int)3LL))) && (rt_str_eq((*(P458)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(",", 1)) || rt_str_eq((*(P458)rt_nil_check(f_text_at_65(((rt_int)2LL)))), rt_str(":", 1))))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
f_append_52(&F->names_678, &F->ntail_679, f_name_node_77());
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_680 = f_p_subtype_79();
while ((F->names_678 != NULL)) {
F->p_681 = NULL;
F->p_681 = f_nn_48(((rt_int)52LL), (*(P463)rt_nil_check(F->names_678)).line);
(*(P463)rt_nil_check(F->p_681)).name = (*(P463)rt_nil_check(F->names_678)).name;
(*(P463)rt_nil_check(F->p_681)).ival = F->mode_677;
(*(P463)rt_nil_check(F->p_681)).a = F->st_680;
f_append_52(&F->head_674, &F->tail_675, F->p_681);
F->names_678 = (*(P463)rt_nil_check(F->names_678)).next;
}
F->more_676 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_674;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_imports_list_114(P463 owner_113) {
  struct f_imports_list_114fr *F = rt_alloc(sizeof *F);
F->owner_113 = owner_113;
F->head_682 = NULL;
F->tail_683 = NULL;
F->more_684 = 1;
if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P463)rt_nil_check(F->owner_113)).flag = rt_add((*(P463)rt_nil_check(F->owner_113)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_684) {
F->ro_685 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_686 = NULL;
F->x_686 = f_name_node_77();
if (F->ro_685) {
(*(P463)rt_nil_check(F->x_686)).ival = ((rt_int)1LL);
}
f_append_52(&F->head_682, &F->tail_683, F->x_686);
F->more_684 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P463)rt_nil_check(F->owner_113)).d = F->head_682;
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

static P458 f_definable_name_117(void) {
  struct f_definable_name_117fr *F = rt_alloc(sizeof *F);
if ((f_at_kind_61(((rt_int)1LL)) || (f_at_kind_61(((rt_int)3LL)) && f_is_definable_116(&(*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)))))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = (*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(rt_sub(g_tpos_491, ((rt_int)1LL)), (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s;
goto ret_;
}
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_subprogram_decl_118(void) {
  struct f_subprogram_decl_118fr *F = rt_alloc(sizeof *F);
F->line_687 = f_cur_line_55();
F->x_688 = NULL;
F->is_abn_689 = f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_690 = f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_690) {
F->x_688 = f_nn_48(((rt_int)46LL), F->line_687);
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_688 = f_nn_48(((rt_int)45LL), F->line_687);
} else {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if (F->is_abn_689) {
(*(P463)rt_nil_check(F->x_688)).flag = ((rt_int)1LL);
}
(*(P463)rt_nil_check(F->x_688)).name = f_definable_name_117();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_688)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_688)).a = f_formal_params_112();
}
if (F->is_func_690) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P463)rt_nil_check(F->x_688)).b = f_p_subtype_79();
}
F->dummy_691 = f_imports_list_114(F->x_688);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P463)rt_nil_check(F->x_688)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_690) {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((*(P458)rt_nil_check(f_definable_name_117())), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_688)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_688)).name))); b_; }));
}
F->result_ = F->x_688;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_capsule_decl_119(void) {
  struct f_capsule_decl_119fr *F = rt_alloc(sizeof *F);
F->x_692 = NULL;
F->x_692 = f_nn_48(((rt_int)47LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_692)).name = f_expect_id_76();
F->dummy_693 = f_imports_list_114(F->x_692);
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P463)rt_nil_check(F->x_692)).ival = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P463)rt_nil_check(F->x_692)).ival = ((rt_int)0LL);
} else {
F->head_694 = NULL;
F->tail_695 = NULL;
F->more_696 = 1;
while (F->more_696) {
F->n_697 = NULL;
F->n_697 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P463)rt_nil_check(F->n_697)).ival = ((rt_int)1LL);
}
(*(P463)rt_nil_check(F->n_697)).name = f_definable_name_117();
f_append_52(&F->head_694, &F->tail_695, F->n_697);
F->more_696 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P463)rt_nil_check(F->x_692)).a = F->head_694;
(*(P463)rt_nil_check(F->x_692)).ival = ((rt_int)2LL);
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P463)rt_nil_check(F->x_692)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((*(P458)rt_nil_check(f_expect_id_76())), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_692)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_692;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_formal_tt_120(void) {
  struct f_formal_tt_120fr *F = rt_alloc(sizeof *F);
F->head_698 = NULL;
F->tail_699 = NULL;
F->more_700 = 1;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_700) {
f_append_52(&F->head_698, &F->tail_699, f_name_node_77());
F->more_700 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_698;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_generic_decl_121(void) {
  struct f_generic_decl_121fr *F = rt_alloc(sizeof *F);
F->x_701 = NULL;
F->x_701 = f_nn_48(((rt_int)51LL), f_cur_line_55());
F->head_702 = NULL;
F->tail_703 = NULL;
F->more_704 = 1;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
while (F->more_704) {
F->names_705 = NULL;
F->names_705 = f_id_list_78();
F->kind_706 = ((rt_int)6LL);
F->st_707 = NULL;
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_706 = ((rt_int)1LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_706 = ((rt_int)2LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_706 = ((rt_int)3LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_706 = ((rt_int)4LL);
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_706 = ((rt_int)5LL);
} else {
F->st_707 = f_p_subtype_79();
}
if (((F->kind_706 <= ((rt_int)2LL)) && f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
(*(P463)rt_nil_check(F->x_701)).e = f_actual_params_80();
} else if (((F->kind_706 >= ((rt_int)3LL)) && (F->kind_706 <= ((rt_int)5LL)))) {
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_707 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
}
if (((F->kind_706 == ((rt_int)4LL)) && f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_707 = f_p_subtype_79();
}
}
while ((F->names_705 != NULL)) {
F->p_708 = NULL;
F->p_708 = f_nn_48(((rt_int)52LL), (*(P463)rt_nil_check(F->names_705)).line);
(*(P463)rt_nil_check(F->p_708)).name = (*(P463)rt_nil_check(F->names_705)).name;
(*(P463)rt_nil_check(F->p_708)).ival = F->kind_706;
(*(P463)rt_nil_check(F->p_708)).a = F->st_707;
f_append_52(&F->head_702, &F->tail_703, F->p_708);
F->names_705 = (*(P463)rt_nil_check(F->names_705)).next;
}
F->more_704 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->more_704 = 1;
while (F->more_704) {
F->nm_709 = NULL;
F->nm_709 = f_definable_name_117();
F->st_710 = NULL;
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
while ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->st_710 = f_p_subtype_79();
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
F->st_710 = f_p_subtype_79();
}
F->more_704 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
(*(P463)rt_nil_check(F->x_701)).a = F->head_702;
(*(P463)rt_nil_check(F->x_701)).b = f_declaration_105();
(*(P463)rt_nil_check(F->x_701)).name = (*(P463)rt_nil_check((*(P463)rt_nil_check(F->x_701)).b)).name;
F->result_ = F->x_701;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_task_decl_122(void) {
  struct f_task_decl_122fr *F = rt_alloc(sizeof *F);
F->x_711 = NULL;
F->x_711 = f_nn_48(((rt_int)50LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_711)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_711)).e = f_formal_tt_120();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_711)).a = f_formal_params_112();
}
F->dummy_712 = f_imports_list_114(F->x_711);
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P463)rt_nil_check(F->x_711)).c = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((*(P458)rt_nil_check(f_expect_id_76())), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_711)).name))))) {
f_fail_23(f_cur_line_55(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_711)).name))); b_; }));
}
F->result_ = F->x_711;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_expose_decl_123(void) {
  struct f_expose_decl_123fr *F = rt_alloc(sizeof *F);
F->x_713 = NULL;
F->x_713 = f_nn_48(((rt_int)48LL), f_cur_line_55());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P463)rt_nil_check(F->x_713)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_714 = NULL;
F->tail_715 = NULL;
F->more_716 = 1;
while (F->more_716) {
F->n_717 = NULL;
F->n_717 = f_nn_48(((rt_int)7LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P463)rt_nil_check(F->n_717)).ival = ((rt_int)1LL);
}
(*(P463)rt_nil_check(F->n_717)).name = f_definable_name_117();
f_append_52(&F->head_714, &F->tail_715, F->n_717);
F->more_716 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P463)rt_nil_check(F->x_713)).a = F->head_714;
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P463)rt_nil_check(F->x_713)).flag = ((rt_int)1LL);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P463)rt_nil_check(F->x_713)).flag = rt_add((*(P463)rt_nil_check(F->x_713)).flag, ((rt_int)2LL));
}
(*(P463)rt_nil_check(F->x_713)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_713)).b = f_actual_params_80();
}
if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING is not handled yet", 27); b_; }));
}
if ((((*(P463)rt_nil_check(F->x_713)).flag == ((rt_int)1LL)) || ((*(P463)rt_nil_check(F->x_713)).flag == ((rt_int)3LL)))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capsules invoked as NEW are not handled yet", 43); b_; }));
}
F->result_ = F->x_713;
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

static P463 f_statement_126(void) {
  struct f_statement_126fr *F = rt_alloc(sizeof *F);
F->labels_718 = NULL;
F->ltail_719 = NULL;
F->match_720 = NULL;
F->s_721 = NULL;
while (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)3LL))) && rt_str_eq((*(P458)rt_nil_check(f_text_at_65(((rt_int)1LL)))), rt_str(":", 1)))) {
f_append_52(&F->labels_718, &F->ltail_719, f_name_node_77());
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
}
if (((f_at_kind_61(((rt_int)1LL)) && (f_kind_at_63(((rt_int)1LL)) == ((rt_int)2LL))) && f_is_compound_kw_125(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (*(P458)rt_nil_check(f_text_at_65(((rt_int)1LL)))); b_; })))) {
F->match_720 = f_expect_id_76();
}
F->s_721 = f_unlabeled_statement_127();
if ((F->match_720 != NULL)) {
if (((((((((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)22LL)) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)23LL))) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)24LL))) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)25LL))) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)26LL))) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)35LL))) && ((*(P463)rt_nil_check(F->s_721)).kind != ((rt_int)36LL)))) {
f_fail_23((*(P463)rt_nil_check(F->s_721)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((*(P458)rt_nil_check(f_expect_id_76())), (*(P458)rt_nil_check(F->match_720))))) {
f_fail_23((*(P463)rt_nil_check(F->s_721)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (*(P458)rt_nil_check(F->match_720))); b_; }));
}
(*(P463)rt_nil_check(F->s_721)).tag = F->match_720;
}
if ((F->labels_718 != NULL)) {
f_fail_23((*(P463)rt_nil_check(F->s_721)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto labels are not handled yet", 31); b_; }));
}
F->result_ = F->s_721;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_unlabeled_statement_127(void) {
  struct f_unlabeled_statement_127fr *F = rt_alloc(sizeof *F);
F->line_722 = f_cur_line_55();
F->x_723 = NULL;
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
F->x_723 = f_nn_48(((rt_int)25LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_135();
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_723 = f_nn_48(((rt_int)27LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).name = f_expect_id_76();
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_723 = f_nn_48(((rt_int)28LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if ((!f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P463)rt_nil_check(F->x_723)).a = f_expr_89();
}
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_723 = f_nn_48(((rt_int)30LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).name = f_expect_id_76();
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->result_ = f_nn_48(((rt_int)31LL), F->line_722);
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_723 = f_nn_48(((rt_int)34LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).name = f_expect_id_76();
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_723)).e = f_actual_tt_83();
}
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_723)).b = f_actual_params_80();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P463)rt_nil_check(F->x_723)).a = f_postfix_99();
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_724 = NULL;
F->tail_725 = NULL;
F->x_723 = f_nn_48(((rt_int)35LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_726 = NULL;
F->itail_727 = NULL;
F->more_728 = 1;
while (F->more_728) {
f_append_52(&F->invs_726, &F->itail_727, f_postfix_99());
F->more_728 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_724, &F->tail_725, f_arm_131(F->invs_726, f_body_103(), F->line_722));
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P463)rt_nil_check(F->x_723)).a = F->head_724;
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_723 = f_nn_48(((rt_int)36LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).a = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P463)rt_nil_check(F->x_723)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_723;
goto ret_;
} else if (f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_723 = f_nn_48(((rt_int)32LL), F->line_722);
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_723)).a = f_postfix_99();
if ((!(f_at_kind_61(((rt_int)1LL)) && rt_str_eq((*(P458)rt_nil_check((*(P459)rt_nil_check((*(P461)rt_nil_check(g_toks_489)).p[rt_index(g_tpos_491, (*(P461)rt_nil_check(g_toks_489)).lo, (*(P461)rt_nil_check(g_toks_489)).hi) - (*(P461)rt_nil_check(g_toks_489)).lo])).s)), rt_str("PTR", 3))))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
if (f_at_op_59(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P463)rt_nil_check(F->x_723)).b = f_actual_params_80();
}
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P463)rt_nil_check(F->x_723)).c = f_expr_89();
}
F->result_ = F->x_723;
goto ret_;
}
{
F->target_729 = NULL;
F->target_729 = f_postfix_99();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_723 = f_nn_48(((rt_int)20LL), F->line_722);
(*(P463)rt_nil_check(F->x_723)).a = F->target_729;
(*(P463)rt_nil_check(F->x_723)).b = f_expr_89();
} else {
F->x_723 = f_nn_48(((rt_int)21LL), F->line_722);
(*(P463)rt_nil_check(F->x_723)).a = F->target_729;
}
}
F->result_ = F->x_723;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_arm_131(P463 cond_128, P463 b_129, rt_int line_130) {
  struct f_arm_131fr *F = rt_alloc(sizeof *F);
F->cond_128 = cond_128;
F->b_129 = b_129;
F->line_130 = line_130;
F->x_730 = NULL;
F->x_730 = f_nn_48(((rt_int)60LL), F->line_130);
(*(P463)rt_nil_check(F->x_730)).a = F->cond_128;
(*(P463)rt_nil_check(F->x_730)).b = F->b_129;
F->result_ = F->x_730;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_if_stmt_132(void) {
  struct f_if_stmt_132fr *F = rt_alloc(sizeof *F);
F->x_731 = NULL;
F->x_731 = f_nn_48(((rt_int)22LL), f_cur_line_55());
F->head_732 = NULL;
F->tail_733 = NULL;
F->cond_734 = NULL;
F->go_735 = 1;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
F->cond_734 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_732, &F->tail_733, f_arm_131(F->cond_734, f_body_103(), (*(P463)rt_nil_check(F->x_731)).line));
while (F->go_735) {
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_734 = f_expr_89();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_52(&F->head_732, &F->tail_733, f_arm_131(F->cond_734, f_body_103(), (*(P463)rt_nil_check(F->x_731)).line));
} else if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P463)rt_nil_check(F->x_731)).flag = ((rt_int)1LL);
(*(P463)rt_nil_check(F->x_731)).b = f_body_103();
} else {
F->go_735 = 0;
}
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P463)rt_nil_check(F->x_731)).a = F->head_732;
F->result_ = F->x_731;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_case_stmt_133(void) {
  struct f_case_stmt_133fr *F = rt_alloc(sizeof *F);
F->x_736 = NULL;
F->x_736 = f_nn_48(((rt_int)23LL), f_cur_line_55());
F->head_737 = NULL;
F->tail_738 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_736)).a = f_expr_89();
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_739 = NULL;
F->ltail_740 = NULL;
F->more_741 = 1;
while (F->more_741) {
F->l_742 = NULL;
F->l_742 = f_nn_48(((rt_int)61LL), f_cur_line_55());
(*(P463)rt_nil_check(F->l_742)).a = f_expr_89();
if (f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P463)rt_nil_check(F->l_742)).b = f_expr_89();
}
f_append_52(&F->labs_739, &F->ltail_740, F->l_742);
F->more_741 = f_accept_op_71(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_52(&F->head_737, &F->tail_738, f_arm_131(F->labs_739, f_body_103(), (*(P463)rt_nil_check(F->x_736)).line));
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P463)rt_nil_check(F->x_736)).flag = ((rt_int)1LL);
(*(P463)rt_nil_check(F->x_736)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P463)rt_nil_check(F->x_736)).b = F->head_737;
F->result_ = F->x_736;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_repeat_stmt_134(void) {
  struct f_repeat_stmt_134fr *F = rt_alloc(sizeof *F);
F->x_743 = NULL;
F->x_743 = f_nn_48(((rt_int)24LL), f_cur_line_55());
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P463)rt_nil_check(F->x_743)).flag = ((rt_int)1LL);
(*(P463)rt_nil_check(F->x_743)).name = f_expect_id_76();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P463)rt_nil_check(F->x_743)).ival = ((rt_int)1LL);
}
(*(P463)rt_nil_check(F->x_743)).a = f_p_subtype_79();
} else {
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P463)rt_nil_check(F->x_743)).a = f_expr_89();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P463)rt_nil_check(F->x_743)).b = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_743;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_guard_stmt_135(void) {
  struct f_guard_stmt_135fr *F = rt_alloc(sizeof *F);
F->x_744 = NULL;
F->x_744 = f_nn_48(((rt_int)26LL), f_cur_line_55());
F->head_745 = NULL;
F->tail_746 = NULL;
g_tpos_491 = rt_add(g_tpos_491, ((rt_int)1LL));
(*(P463)rt_nil_check(F->x_744)).a = f_body_103();
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_747 = NULL;
F->h_747 = f_nn_48(((rt_int)62LL), f_cur_line_55());
(*(P463)rt_nil_check(F->h_747)).a = f_id_list_78();
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P463)rt_nil_check(F->h_747)).b = f_body_103();
f_append_52(&F->head_745, &F->tail_746, F->h_747);
}
if (f_accept_kw_69(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P463)rt_nil_check(F->x_744)).flag = ((rt_int)1LL);
(*(P463)rt_nil_check(F->x_744)).c = f_body_103();
}
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_73(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P463)rt_nil_check(F->x_744)).b = F->head_745;
F->result_ = F->x_744;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_program_136(void) {
  struct f_program_136fr *F = rt_alloc(sizeof *F);
F->head_748 = NULL;
F->tail_749 = NULL;
while ((!f_at_kind_61(((rt_int)0LL)))) {
if ((!f_at_kw_57(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_67(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
f_append_52(&F->head_748, &F->tail_749, f_capsule_decl_119());
f_expect_op_75(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_748;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rt_int f_hash_138(rstr *s_137) {
  struct f_hash_138fr *F = rt_alloc(sizeof *F);
F->s_137 = s_137;
F->h_750 = ((rt_int)0LL);
{ rt_int lo752 = ((rt_int)1LL), hi753 = ((*F->s_137)).len;
for (rt_int it754 = lo752; it754 <= hi753; it754++) {
F->i_751 = it754;
F->h_750 = rt_mod(rt_add(rt_mul(F->h_750, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_137), F->i_751)) + 1)), ((rt_int)4093LL));
}
}
F->result_ = F->h_750;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_lookup_140(rstr *name_139) {
  struct f_lookup_140fr *F = rt_alloc(sizeof *F);
F->name_139 = name_139;
F->y_755 = NULL;
F->y_755 = (*(P479)rt_nil_check(g_table_493)).p[rt_index(f_hash_138(&(*F->name_139)), (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
while ((F->y_755 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_755)).name)), (*F->name_139))) {
F->result_ = F->y_755;
goto ret_;
}
F->y_755 = (*(P473)rt_nil_check(F->y_755)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_lookup_decl_142(P463 d_141) {
  struct f_lookup_decl_142fr *F = rt_alloc(sizeof *F);
F->d_141 = d_141;
F->y_756 = NULL;
F->y_756 = (*(P479)rt_nil_check(g_table_493)).p[rt_index(f_hash_138(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_141)).name))), (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
while ((F->y_756 != NULL)) {
if (((*(P473)rt_nil_check(F->y_756)).decl == F->d_141)) {
F->result_ = F->y_756;
goto ret_;
}
F->y_756 = (*(P473)rt_nil_check(F->y_756)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_define_145(P473 y_143, rt_int line_144) {
  struct f_define_145fr *F = rt_alloc(sizeof *F);
F->y_143 = y_143;
F->line_144 = line_144;
F->h_757 = f_hash_138(&(*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_143)).name)));
F->z_758 = NULL;
F->z_758 = (*(P479)rt_nil_check(g_table_493)).p[rt_index(F->h_757, (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
while ((F->z_758 != NULL)) {
if (((((*(P473)rt_nil_check(F->z_758)).depth == g_depth_494) && rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->z_758)).name)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_143)).name)))) && (!(((f_overloadable_147(F->y_143) && f_overloadable_147(F->z_758)) && ((*(P473)rt_nil_check(F->z_758)).kind == (*(P473)rt_nil_check(F->y_143)).kind)) && (!f_same_signature_150((*(P473)rt_nil_check(F->y_143)).params, (*(P473)rt_nil_check(F->z_758)).params)))))) {
f_fail_23(F->line_144, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_143)).name)), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_758 = (*(P473)rt_nil_check(F->z_758)).chain;
}
(*(P473)rt_nil_check(F->y_143)).depth = g_depth_494;
(*(P473)rt_nil_check(F->y_143)).chain = (*(P479)rt_nil_check(g_table_493)).p[rt_index(F->h_757, (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
(*(P479)rt_nil_check(g_table_493)).p[rt_index(F->h_757, (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo] = F->y_143;
(*(P473)rt_nil_check(F->y_143)).stack = g_scope_stack_495;
g_scope_stack_495 = F->y_143;
ret_:
  return;
}

static int f_overloadable_147(P473 y_146) {
  struct f_overloadable_147fr *F = rt_alloc(sizeof *F);
F->y_146 = y_146;
F->result_ = ((((*(P473)rt_nil_check(F->y_146)).kind == ((rt_int)3LL)) || ((*(P473)rt_nil_check(F->y_146)).kind == ((rt_int)4LL))) || ((*(P473)rt_nil_check(F->y_146)).kind == ((rt_int)9LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_signature_150(P471 a_148, P471 b_149) {
  struct f_same_signature_150fr *F = rt_alloc(sizeof *F);
F->a_148 = a_148;
F->b_149 = b_149;
F->x_759 = NULL;
F->x_759 = F->a_148;
F->y_760 = NULL;
F->y_760 = F->b_149;
while (((F->x_759 != NULL) && (F->y_760 != NULL))) {
if ((!f_same_164((*(P471)rt_nil_check(F->x_759)).t, (*(P471)rt_nil_check(F->y_760)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_759 = (*(P471)rt_nil_check(F->x_759)).next;
F->y_760 = (*(P471)rt_nil_check(F->y_760)).next;
}
F->result_ = ((F->x_759 == NULL) && (F->y_760 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_open_scope_151(void) {
  struct f_open_scope_151fr *F = rt_alloc(sizeof *F);
g_depth_494 = rt_add(g_depth_494, ((rt_int)1LL));
ret_:
  return;
}

static void f_close_scope_152(void) {
  struct f_close_scope_152fr *F = rt_alloc(sizeof *F);
while (((g_scope_stack_495 != NULL) && ((*(P473)rt_nil_check(g_scope_stack_495)).depth == g_depth_494))) {
(*(P479)rt_nil_check(g_table_493)).p[rt_index(f_hash_138(&(*(P458)rt_nil_check((*(P473)rt_nil_check(g_scope_stack_495)).name))), (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo] = (*(P473)rt_nil_check(g_scope_stack_495)).chain;
g_scope_stack_495 = (*(P473)rt_nil_check(g_scope_stack_495)).stack;
}
g_depth_494 = rt_sub(g_depth_494, ((rt_int)1LL));
ret_:
  return;
}

static P473 f_new_sym_155(rt_int kind_153, P458 name_154) {
  struct f_new_sym_155fr *F = rt_alloc(sizeof *F);
F->kind_153 = kind_153;
F->name_154 = name_154;
F->y_761 = NULL;
{ R474 *cell762 = rt_alloc(sizeof(R474));
(*cell762).name = NULL;
(*cell762).t = NULL;
(*cell762).c = NULL;
(*cell762).access = NULL;
(*cell762).cname = NULL;
(*cell762).st = NULL;
(*cell762).decl = NULL;
(*cell762).params = NULL;
(*cell762).result = NULL;
(*cell762).members = NULL;
(*cell762).mnext = NULL;
(*cell762).binds = NULL;
(*cell762).insts = NULL;
(*cell762).chain = NULL;
(*cell762).stack = NULL;
F->y_761 = cell762;
}
(*(P473)rt_nil_check(F->y_761)).kind = F->kind_153;
(*(P473)rt_nil_check(F->y_761)).name = F->name_154;
F->result_ = F->y_761;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P467 f_new_typ_157(rt_int kind_156) {
  struct f_new_typ_157fr *F = rt_alloc(sizeof *F);
F->kind_156 = kind_156;
F->t_763 = NULL;
{ R468 *cell764 = rt_alloc(sizeof(R468));
(*cell764).name = NULL;
(*cell764).lits = NULL;
(*cell764).elem = NULL;
(*cell764).idx = NULL;
(*cell764).idx2 = NULL;
(*cell764).elemcons = NULL;
(*cell764).elemst = NULL;
(*cell764).under = NULL;
(*cell764).tparams = NULL;
(*cell764).ocap = NULL;
(*cell764).fields = NULL;
(*cell764).target = NULL;
(*cell764).decl = NULL;
(*cell764).cname = NULL;
(*cell764).next = NULL;
F->t_763 = cell764;
}
(*(P467)rt_nil_check(F->t_763)).kind = F->kind_156;
F->result_ = F->t_763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P465 f_new_cons_158(void) {
  struct f_new_cons_158fr *F = rt_alloc(sizeof *F);
F->c_765 = NULL;
{ R466 *cell766 = rt_alloc(sizeof(R466));
(*cell766).lo = NULL;
(*cell766).hi = NULL;
(*cell766).lo2 = NULL;
(*cell766).hi2 = NULL;
(*cell766).slen = NULL;
(*cell766).args = NULL;
F->c_765 = cell766;
}
F->result_ = F->c_765;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_lits_161(P463 a_159, P463 b_160) {
  struct f_same_lits_161fr *F = rt_alloc(sizeof *F);
F->a_159 = a_159;
F->b_160 = b_160;
F->x_767 = NULL;
F->x_767 = F->a_159;
F->y_768 = NULL;
F->y_768 = F->b_160;
while (((F->x_767 != NULL) && (F->y_768 != NULL))) {
if ((!rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->x_767)).name)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->y_768)).name))))) {
F->result_ = 0;
goto ret_;
}
F->x_767 = (*(P463)rt_nil_check(F->x_767)).next;
F->y_768 = (*(P463)rt_nil_check(F->y_768)).next;
}
F->result_ = ((F->x_767 == NULL) && (F->y_768 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_164(P467 a_162, P467 b_163) {
  struct f_same_164fr *F = rt_alloc(sizeof *F);
F->a_162 = a_162;
F->b_163 = b_163;
if ((F->a_162 == F->b_163)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_162 == NULL) || (F->b_163 == NULL)) || ((*(P467)rt_nil_check(F->a_162)).kind != (*(P467)rt_nil_check(F->b_163)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((((((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)1LL)) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)2LL))) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)3LL))) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)5LL))) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)9LL))) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)10LL)))) {
F->result_ = 1;
goto ret_;
}
if (((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)4LL))) {
F->result_ = f_same_lits_161((*(P467)rt_nil_check(F->a_162)).lits, (*(P467)rt_nil_check(F->b_163)).lits);
goto ret_;
}
if (((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)6LL))) {
if ((((*(P467)rt_nil_check(F->a_162)).idx2 == NULL) != ((*(P467)rt_nil_check(F->b_163)).idx2 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_164((*(P467)rt_nil_check(F->a_162)).elem, (*(P467)rt_nil_check(F->b_163)).elem) && f_same_164((*(P467)rt_nil_check(F->a_162)).idx, (*(P467)rt_nil_check(F->b_163)).idx));
goto ret_;
}
if ((((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)16LL)) || ((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)12LL)))) {
F->result_ = f_same_164((*(P467)rt_nil_check(F->a_162)).elem, (*(P467)rt_nil_check(F->b_163)).elem);
goto ret_;
}
if (((*(P467)rt_nil_check(F->a_162)).kind == ((rt_int)7LL))) {
F->f_769 = NULL;
F->f_769 = (*(P467)rt_nil_check(F->a_162)).fields;
F->g_770 = NULL;
F->g_770 = (*(P467)rt_nil_check(F->b_163)).fields;
while (((F->f_769 != NULL) && (F->g_770 != NULL))) {
if (((!rt_str_eq((*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_769)).name)), (*(P458)rt_nil_check((*(P469)rt_nil_check(F->g_770)).name)))) || (!f_same_164((*(P469)rt_nil_check(F->f_769)).t, (*(P469)rt_nil_check(F->g_770)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_769 = (*(P469)rt_nil_check(F->f_769)).next;
F->g_770 = (*(P469)rt_nil_check(F->g_770)).next;
}
F->result_ = ((F->f_769 == NULL) && (F->g_770 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P467 f_base_of_166(P467 t_165) {
  struct f_base_of_166fr *F = rt_alloc(sizeof *F);
F->t_165 = t_165;
if ((((F->t_165 != NULL) && ((*(P467)rt_nil_check(F->t_165)).kind == ((rt_int)15LL))) && ((*(P467)rt_nil_check(F->t_165)).tparams == NULL))) {
F->result_ = f_base_of_166((*(P467)rt_nil_check(F->t_165)).under);
goto ret_;
}
F->result_ = F->t_165;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P465 f_base_cons_169(P467 t_167, P465 c_168) {
  struct f_base_cons_169fr *F = rt_alloc(sizeof *F);
F->t_167 = t_167;
F->c_168 = c_168;
if (((((F->t_167 != NULL) && ((*(P467)rt_nil_check(F->t_167)).kind == ((rt_int)15LL))) && ((*(P467)rt_nil_check(F->t_167)).tparams == NULL)) && ((*(P467)rt_nil_check(F->t_167)).elemcons != NULL))) {
F->result_ = f_base_cons_169((*(P467)rt_nil_check(F->t_167)).under, (*(P467)rt_nil_check(F->t_167)).elemcons);
goto ret_;
}
F->result_ = F->c_168;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_kind_name_171(P467 t_170) {
  struct f_kind_name_171fr *F = rt_alloc(sizeof *F);
F->t_170 = t_170;
{ rt_int sel771 = (*(P467)rt_nil_check(F->t_170)).kind;
if (0 || (sel771 == ((rt_int)1LL))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel771 == ((rt_int)2LL))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel771 == ((rt_int)3LL))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel771 == ((rt_int)4LL))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel771 == ((rt_int)5LL))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel771 == ((rt_int)6LL))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel771 == ((rt_int)7LL))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel771 == ((rt_int)8LL))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_170)).name)));
goto ret_;
} else if (0 || (sel771 == ((rt_int)11LL))) {
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

static void f_check_type_175(P467 got_172, P467 want_173, rt_int line_174) {
  struct f_check_type_175fr *F = rt_alloc(sizeof *F);
F->got_172 = got_172;
F->want_173 = want_173;
F->line_174 = line_174;
if ((F->want_173 == NULL)) {
goto ret_;
}
if ((((*(P467)rt_nil_check(F->got_172)).kind == ((rt_int)11LL)) && ((*(P467)rt_nil_check(F->want_173)).kind == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_164(F->got_172, F->want_173))) {
f_fail_23(F->line_174, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_171(F->got_172)), rt_str(" where ", 7)), f_kind_name_171(F->want_173)), rt_str(" is required", 12)); b_; }));
}
ret_:
  return;
}

static rstr f_ctype_177(P467 t_176) {
  struct f_ctype_177fr *F = rt_alloc(sizeof *F);
F->t_176 = t_176;
{ rt_int sel772 = (*(P467)rt_nil_check(F->t_176)).kind;
if (0 || (sel772 == ((rt_int)1LL))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel772 == ((rt_int)2LL)) || (sel772 == ((rt_int)4LL)) || (sel772 == ((rt_int)10LL))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel772 == ((rt_int)3LL))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel772 == ((rt_int)5LL))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel772 == ((rt_int)9LL))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel772 == ((rt_int)12LL))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel772 == ((rt_int)13LL))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel772 == ((rt_int)14LL))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel772 == ((rt_int)16LL))) {
F->result_ = rt_str("rset", 4);
goto ret_;
} else {
if (((*(P467)rt_nil_check(F->t_176)).cname == NULL)) {
f_declare_ctype_181(F->t_176);
} else if (((((*(P467)rt_nil_check(F->t_176)).kind == ((rt_int)7LL)) && (*(P467)rt_nil_check(F->t_176)).forward) && (!(*(P467)rt_nil_check(F->t_176)).defined))) {
(*(P467)rt_nil_check(F->t_176)).defined = 1;
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_176)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_176)), rt_str(" };", 3)); b_; }));
}
F->result_ = (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_176)).cname));
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_field_decls_179(P467 t_178) {
  struct f_field_decls_179fr *F = rt_alloc(sizeof *F);
F->t_178 = t_178;
F->f_773 = NULL;
F->f_773 = (*(P467)rt_nil_check(F->t_178)).fields;
F->s_774 = NULL;
F->s_774 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_773 != NULL)) {
F->s_774 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->s_774)), f_ctype_177((*(P469)rt_nil_check(F->f_773)).t)), rt_str(" ", 1)), f_field_c_17(&(*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_773)).name)))), rt_str("; ", 2)); b_; }));
F->f_773 = (*(P469)rt_nil_check(F->f_773)).next;
}
F->result_ = (*(P458)rt_nil_check(F->s_774));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_declare_ctype_181(P467 t_180) {
  struct f_declare_ctype_181fr *F = rt_alloc(sizeof *F);
F->t_180 = t_180;
F->u_775 = NULL;
F->u_775 = g_all_types_496;
if ((((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)8LL)) && ((*(P467)rt_nil_check(F->t_180)).target == NULL))) {
f_finish_ptr_249(F->t_180);
if (((*(P467)rt_nil_check(F->t_180)).cname != NULL)) {
goto ret_;
}
}
if (((*(P467)rt_nil_check(F->t_180)).kind != ((rt_int)8LL))) {
while ((F->u_775 != NULL)) {
if ((((*(P467)rt_nil_check(F->u_775)).kind == (*(P467)rt_nil_check(F->t_180)).kind) && f_same_164(F->u_775, F->t_180))) {
(*(P467)rt_nil_check(F->t_180)).cname = (*(P467)rt_nil_check(F->u_775)).cname;
goto ret_;
}
F->u_775 = (*(P467)rt_nil_check(F->u_775)).next;
}
}
if ((((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)15LL)) && ((*(P467)rt_nil_check(F->t_180)).tparams == NULL))) {
(*(P467)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_177((*(P467)rt_nil_check(F->t_180)).under); b_; }));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
(*(P467)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
(*(P467)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)7LL))) {
(*(P467)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P467)rt_nil_check(F->t_180)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P467)rt_nil_check(F->t_180)).next = g_all_types_496;
g_all_types_496 = F->t_180;
if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)8LL))) {
F->target_776 = NULL;
F->target_776 = (*(P467)rt_nil_check(F->t_180)).target;
if (((*(P467)rt_nil_check(F->target_776)).kind == ((rt_int)7LL))) {
if (((*(P467)rt_nil_check(F->target_776)).cname == NULL)) {
(*(P467)rt_nil_check(F->target_776)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P467)rt_nil_check(F->target_776)).next = g_all_types_496;
g_all_types_496 = F->target_776;
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->target_776)).cname))), rt_str(" ", 1)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->target_776)).cname))), rt_str(";", 1)); b_; }));
(*(P467)rt_nil_check(F->target_776)).forward = 1;
}
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->target_776)).cname))), rt_str(" *", 2)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_177(F->target_776)), rt_str(" *", 2)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
}
} else if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)6LL))) {
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_177((*(P467)rt_nil_check(F->t_180)).elem)), rt_str(" *p; };", 7)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_180)).kind == ((rt_int)15LL))) {
F->p_777 = NULL;
F->p_777 = (*(P467)rt_nil_check(F->t_180)).tparams;
F->fs_778 = NULL;
F->fs_778 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_777 != NULL)) {
F->fs_778 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->fs_778)), rt_str("rt_int p_", 9)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_777)).name)))), rt_str("; ", 2)); b_; }));
F->p_777 = (*(P463)rt_nil_check(F->p_777)).next;
}
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" {", 2)), (*(P458)rt_nil_check(F->fs_778))), f_ctype_177((*(P467)rt_nil_check(F->t_180)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" ", 1)), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(";", 1)); b_; }));
(*(P467)rt_nil_check(F->t_180)).defined = 1;
f_put_27(g_out_types_498, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_180)).cname))), rt_str(" { ", 3)), f_field_decls_179(F->t_180)), rt_str(" };", 3)); b_; }));
}
ret_:
  return;
}

static void f_init_ascii_182(void) {
  struct f_init_ascii_182fr *F = rt_alloc(sizeof *F);
F->names_779 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)));
F->head_780 = NULL;
F->tail_781 = NULL;
F->start_782 = ((rt_int)1LL);
{ rt_int lo784 = ((rt_int)1LL), hi785 = (F->names_779).len;
for (rt_int it786 = lo784; it786 <= hi785; it786++) {
F->i_783 = it786;
if ((rt_str_get(F->names_779, F->i_783) == 32)) {
F->lit_787 = NULL;
F->lit_787 = f_nn_48(((rt_int)4LL), ((rt_int)0LL));
(*(P463)rt_nil_check(F->lit_787)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice(F->names_779, F->start_782, rt_sub(F->i_783, ((rt_int)1LL))); b_; }));
f_append_52(&F->head_780, &F->tail_781, F->lit_787);
F->start_782 = rt_add(F->i_783, ((rt_int)1LL));
}
}
}
g_ty_ascii_525 = f_new_typ_157(((rt_int)4LL));
(*(P467)rt_nil_check(g_ty_ascii_525)).lits = F->head_780;
(*(P467)rt_nil_check(g_ty_ascii_525)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
ret_:
  return;
}

static rt_int f_lit_index_185(P463 lits_183, rstr *name_184) {
  struct f_lit_index_185fr *F = rt_alloc(sizeof *F);
F->lits_183 = lits_183;
F->name_184 = name_184;
F->i_788 = ((rt_int)0LL);
F->l_789 = NULL;
F->l_789 = F->lits_183;
while ((F->l_789 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->l_789)).name)), (*F->name_184))) {
F->result_ = F->i_788;
goto ret_;
}
F->i_788 = rt_add(F->i_788, ((rt_int)1LL));
F->l_789 = (*(P463)rt_nil_check(F->l_789)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P467 f_resolve_subtype_188(P463 st_186, P465 *c_187) {
  struct f_resolve_subtype_188fr *F = rt_alloc(sizeof *F);
F->st_186 = st_186;
F->c_187 = c_187;
F->c_187v = *F->c_187;
F->t_790 = NULL;
F->dummy_792 = NULL;
F->c_187v = f_new_cons_158();
{ rt_int sel793 = (*(P463)rt_nil_check(F->st_186)).kind;
if (0 || (sel793 == ((rt_int)70LL))) {
if (((*(P463)rt_nil_check(F->st_186)).a != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).a, g_ty_int_522, &F->dummy_792); b_; }));
(*(P465)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).b, g_ty_int_522, &F->dummy_792); b_; }));
(*(P465)rt_nil_check(F->c_187v)).mlo = f_manifest_207((*(P463)rt_nil_check(F->st_186)).a, &F->ok_791);
(*(P465)rt_nil_check(F->c_187v)).hasm = F->ok_791;
(*(P465)rt_nil_check(F->c_187v)).mhi = f_manifest_207((*(P463)rt_nil_check(F->st_186)).b, &F->ok_791);
(*(P465)rt_nil_check(F->c_187v)).hasm = ((*(P465)rt_nil_check(F->c_187v)).hasm && F->ok_791);
}
F->result_ = g_ty_int_522;
goto ret_;
} else if (0 || (sel793 == ((rt_int)71LL))) {
F->result_ = g_ty_float_524;
goto ret_;
} else if (0 || (sel793 == ((rt_int)72LL))) {
F->t_790 = f_new_typ_157(((rt_int)4LL));
(*(P467)rt_nil_check(F->t_790)).lits = (*(P463)rt_nil_check(F->st_186)).a;
if (((*(P463)rt_nil_check(F->st_186)).b != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).b, F->t_790, &F->dummy_792); b_; }));
(*(P465)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).c, F->t_790, &F->dummy_792); b_; }));
}
F->result_ = F->t_790;
goto ret_;
} else if (0 || (sel793 == ((rt_int)73LL))) {
F->t_790 = f_resolve_subtype_188((*(P463)rt_nil_check(F->st_186)).a, &F->c_187v);
if ((!f_same_164(F->t_790, g_ty_ascii_525))) {
f_fail_23((*(P463)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only STRING[ASCII] is supported", 31); b_; }));
}
F->c_187v = f_new_cons_158();
if (((*(P463)rt_nil_check(F->st_186)).b != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).b, g_ty_int_522, &F->dummy_792); b_; }));
}
F->result_ = g_ty_string_526;
goto ret_;
} else if (0 || (sel793 == ((rt_int)74LL))) {
if ((f_list_len_54((*(P463)rt_nil_check(F->st_186)).a) > ((rt_int)2LL))) {
f_fail_23((*(P463)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("arrays of more than two dimensions are not handled", 50); b_; }));
}
{
F->ic_794 = NULL;
F->ic2_795 = NULL;
F->ec_796 = NULL;
F->it_797 = NULL;
F->it_797 = f_resolve_subtype_188((*(P463)rt_nil_check(F->st_186)).a, &F->ic_794);
F->et_798 = NULL;
F->et_798 = f_resolve_subtype_188((*(P463)rt_nil_check(F->st_186)).b, &F->ec_796);
F->ic_794 = f_base_cons_169(F->it_797, F->ic_794);
F->t_790 = f_new_typ_157(((rt_int)6LL));
(*(P467)rt_nil_check(F->t_790)).idx = F->it_797;
(*(P467)rt_nil_check(F->t_790)).elem = F->et_798;
(*(P467)rt_nil_check(F->t_790)).elemcons = F->ec_796;
(*(P467)rt_nil_check(F->t_790)).elemst = (*(P463)rt_nil_check(F->st_186)).b;
if (((*(P465)rt_nil_check(F->ic_794)).lo != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).lo = (*(P465)rt_nil_check(F->ic_794)).lo;
(*(P465)rt_nil_check(F->c_187v)).hi = (*(P465)rt_nil_check(F->ic_794)).hi;
} else if (((*(P467)rt_nil_check(f_base_of_166(F->it_797))).kind == ((rt_int)4LL))) {
(*(P465)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P465)rt_nil_check(F->c_187v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check(f_base_of_166(F->it_797))).lits), ((rt_int)1LL))); b_; }));
}
(*(P465)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P465)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
if (((*(P463)rt_nil_check((*(P463)rt_nil_check(F->st_186)).a)).next != NULL)) {
(*(P467)rt_nil_check(F->t_790)).idx2 = f_resolve_subtype_188((*(P463)rt_nil_check((*(P463)rt_nil_check(F->st_186)).a)).next, &F->ic2_795);
if (((*(P465)rt_nil_check(F->ic2_795)).lo != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).lo2 = (*(P465)rt_nil_check(F->ic2_795)).lo;
(*(P465)rt_nil_check(F->c_187v)).hi2 = (*(P465)rt_nil_check(F->ic2_795)).hi;
} else if (((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_790)).idx2)).kind == ((rt_int)4LL))) {
(*(P465)rt_nil_check(F->c_187v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P465)rt_nil_check(F->c_187v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_790)).idx2)).lits), ((rt_int)1LL))); b_; }));
}
}
}
F->result_ = F->t_790;
goto ret_;
} else if (0 || (sel793 == ((rt_int)77LL))) {
F->t_790 = f_new_typ_157(((rt_int)16LL));
{
F->ec_799 = NULL;
(*(P467)rt_nil_check(F->t_790)).elem = f_resolve_subtype_188((*(P463)rt_nil_check(F->st_186)).a, &F->ec_799);
(*(P467)rt_nil_check(F->t_790)).elemcons = F->ec_799;
}
F->result_ = F->t_790;
goto ret_;
} else if (0 || (sel793 == ((rt_int)75LL))) {
F->t_790 = f_new_typ_157(((rt_int)7LL));
{
F->comp_800 = NULL;
F->comp_800 = (*(P463)rt_nil_check(F->st_186)).a;
F->tail_801 = NULL;
while ((F->comp_800 != NULL)) {
F->cc_802 = NULL;
F->f_803 = NULL;
{ R470 *cell804 = rt_alloc(sizeof(R470));
(*cell804).name = NULL;
(*cell804).t = NULL;
(*cell804).c = NULL;
(*cell804).st = NULL;
(*cell804).next = NULL;
F->f_803 = cell804;
}
(*(P469)rt_nil_check(F->f_803)).name = (*(P463)rt_nil_check(F->comp_800)).name;
(*(P469)rt_nil_check(F->f_803)).t = f_resolve_subtype_188((*(P463)rt_nil_check(F->comp_800)).a, &F->cc_802);
(*(P469)rt_nil_check(F->f_803)).c = F->cc_802;
(*(P469)rt_nil_check(F->f_803)).st = (*(P463)rt_nil_check(F->comp_800)).a;
if ((F->tail_801 == NULL)) {
(*(P467)rt_nil_check(F->t_790)).fields = F->f_803;
} else {
(*(P469)rt_nil_check(F->tail_801)).next = F->f_803;
}
F->tail_801 = F->f_803;
F->comp_800 = (*(P463)rt_nil_check(F->comp_800)).next;
}
}
F->result_ = F->t_790;
goto ret_;
} else if (0 || (sel793 == ((rt_int)79LL))) {
F->result_ = g_ty_file_528;
goto ret_;
} else if (0 || (sel793 == ((rt_int)78LL))) {
{
F->ec_805 = NULL;
F->t_790 = f_new_typ_157(((rt_int)12LL));
(*(P467)rt_nil_check(F->t_790)).elem = f_resolve_subtype_188((*(P463)rt_nil_check(F->st_186)).a, &F->ec_805);
(*(P467)rt_nil_check(F->t_790)).elemcons = F->ec_805;
if (((*(P463)rt_nil_check(F->st_186)).b != NULL)) {
(*(P465)rt_nil_check(F->c_187v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->st_186)).b, g_ty_int_522, &F->dummy_792); b_; }));
}
}
F->result_ = F->t_790;
goto ret_;
} else if (0 || (sel793 == ((rt_int)80LL))) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str("BOOL", 4))) {
F->result_ = g_ty_bool_523;
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str("ASCII", 5))) {
F->result_ = g_ty_ascii_525;
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str("DATA_LOCK", 9))) {
F->result_ = g_ty_lock_530;
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str("LATCH", 5))) {
F->result_ = g_ty_latch_531;
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str("ACT", 3))) {
F->result_ = g_ty_act_532;
goto ret_;
}
{
F->y_806 = NULL;
F->y_806 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)));
if ((F->y_806 == NULL)) {
f_fail_23((*(P463)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name))); b_; }));
}
if (((((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)5LL)) && ((*(P473)rt_nil_check(F->y_806)).t != NULL)) && ((*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_806)).t)).kind == ((rt_int)15LL)))) {
F->result_ = f_new_type_200(F->y_806, F->st_186, &F->c_187v);
goto ret_;
}
if (((((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)6LL)) || ((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)5LL))) && ((*(P473)rt_nil_check(F->y_806)).t != NULL))) {
if (((*(P473)rt_nil_check(F->y_806)).c != NULL)) {
F->c_187v = (*(P473)rt_nil_check(F->y_806)).c;
}
F->result_ = (*(P473)rt_nil_check(F->y_806)).t;
goto ret_;
}
if (((((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)5LL)) && ((*(P473)rt_nil_check(F->y_806)).decl != NULL)) && ((*(P463)rt_nil_check((*(P473)rt_nil_check(F->y_806)).decl)).kind == ((rt_int)43LL)))) {
F->result_ = f_new_type_200(F->y_806, F->st_186, &F->c_187v);
goto ret_;
}
if ((((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)6LL)) || ((*(P473)rt_nil_check(F->y_806)).kind == ((rt_int)5LL)))) {
F->result_ = f_resolve_subtype_188((*(P473)rt_nil_check(F->y_806)).st, &F->c_187v);
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->st_186)).name)), rt_str(" is not a type", 14)); b_; }));
}
} else {
f_fail_23((*(P463)rt_nil_check(F->st_186)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_187) = F->c_187v;
  return F->result_;
}

static int f_opened_190(P467 t_189) {
  struct f_opened_190fr *F = rt_alloc(sizeof *F);
F->t_189 = t_189;
F->c_807 = NULL;
F->c_807 = g_caps_510;
if (((((*(P467)rt_nil_check(F->t_189)).kind != ((rt_int)15LL)) || ((*(P467)rt_nil_check(F->t_189)).ocap == NULL)) || ((*(P463)rt_nil_check((*(P467)rt_nil_check(F->t_189)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_807 != NULL)) {
if (((*(P483)rt_nil_check(F->c_807)).d == (*(P467)rt_nil_check(F->t_189)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_807 = (*(P483)rt_nil_check(F->c_807)).next;
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
F->i_808 = ((rt_int)1LL);
if (((((*F->pat_192)).len == ((rt_int)0LL)) || (((*F->s_191)).len < ((*F->pat_192)).len))) {
F->result_ = (*F->s_191);
goto ret_;
}
while ((rt_sub(rt_add(F->i_808, ((*F->pat_192)).len), ((rt_int)1LL)) <= ((*F->s_191)).len)) {
if (rt_str_eq(rt_str_slice((*F->s_191), F->i_808, rt_sub(rt_add(F->i_808, ((*F->pat_192)).len), ((rt_int)1LL))), (*F->pat_192))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_191), ((rt_int)1LL), rt_sub(F->i_808, ((rt_int)1LL))), (*F->r_193)), f_replace_all_194(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_191), rt_add(F->i_808, ((*F->pat_192)).len), ((*F->s_191)).len); b_; }), &(*F->pat_192), &(*F->r_193)));
goto ret_;
}
F->i_808 = rt_add(F->i_808, ((rt_int)1LL));
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
F->l_809 = NULL;
F->l_809 = g_psub_512;
F->r_810 = NULL;
F->r_810 = f_mk_3(&(*F->s_195));
while ((F->l_809 != NULL)) {
F->r_810 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_194(&(*(P458)rt_nil_check(F->r_810)), &(*(P458)rt_nil_check((*(P475)rt_nil_check(F->l_809)).s)), &(*(P458)rt_nil_check((*(P475)rt_nil_check((*(P475)rt_nil_check(F->l_809)).next)).s))); b_; }));
F->l_809 = (*(P475)rt_nil_check((*(P475)rt_nil_check(F->l_809)).next)).next;
}
F->result_ = (*(P458)rt_nil_check(F->r_810));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P467 f_new_type_200(P473 y_197, P463 st_198, P465 *c_199) {
  struct f_new_type_200fr *F = rt_alloc(sizeof *F);
F->y_197 = y_197;
F->st_198 = st_198;
F->c_199 = c_199;
F->c_199v = *F->c_199;
F->d_811 = NULL;
F->d_811 = (*(P473)rt_nil_check(F->y_197)).decl;
F->p_812 = NULL;
F->uc_813 = NULL;
F->c_199v = f_new_cons_158();
if (((*(P473)rt_nil_check(F->y_197)).t == NULL)) {
(*(P473)rt_nil_check(F->y_197)).t = f_new_typ_157(((rt_int)15LL));
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).name = (*(P473)rt_nil_check(F->y_197)).name;
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).decl = F->d_811;
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).tparams = (*(P463)rt_nil_check(F->d_811)).b;
if ((g_caps_510 != NULL)) {
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).ocap = (*(P483)rt_nil_check(g_caps_510)).d;
}
f_open_scope_151();
F->p_812 = (*(P463)rt_nil_check(F->d_811)).b;
while ((F->p_812 != NULL)) {
F->z_814 = NULL;
F->z_814 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->p_812)).name);
(*(P473)rt_nil_check(F->z_814)).t = g_ty_int_522;
(*(P473)rt_nil_check(F->z_814)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_812)).name)))), rt_str("@", 1)); b_; }));
f_define_145(F->z_814, (*(P463)rt_nil_check(F->d_811)).line);
F->p_812 = (*(P463)rt_nil_check(F->p_812)).next;
}
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).under = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_811)).a, &F->uc_813);
(*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_197)).t)).elemcons = F->uc_813;
f_close_scope_152();
}
(*(P465)rt_nil_check(F->c_199v)).args = (*(P463)rt_nil_check(F->st_198)).b;
F->result_ = (*(P473)rt_nil_check(F->y_197)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_199) = F->c_199v;
  return F->result_;
}

static void f_init_storage_204(rstr *lval_201, P467 t_202, P465 c_203) {
  struct f_init_storage_204fr *F = rt_alloc(sizeof *F);
F->lval_201 = lval_201;
F->t_202 = t_202;
F->c_203 = c_203;
if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)15LL))) {
F->p_815 = NULL;
F->p_815 = (*(P467)rt_nil_check(F->t_202)).tparams;
F->a_816 = NULL;
F->a_816 = (*(P465)rt_nil_check(F->c_203)).args;
F->uc_817 = NULL;
F->ut_818 = NULL;
F->at_819 = NULL;
if ((f_list_len_54(F->a_816) != f_list_len_54(F->p_815))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_202)).name))), rt_str(" needs ", 7)), f_itos_7(f_list_len_54(F->p_815))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_815 != NULL)) {
F->v_820 = rt_str_copy(f_gexpr_399(F->a_816, g_ty_int_522, &F->at_819));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_815)).name)))), rt_str(" = ", 3)), F->v_820), rt_str(";", 1)); b_; }));
F->p_815 = (*(P463)rt_nil_check(F->p_815)).next;
F->a_816 = (*(P463)rt_nil_check(F->a_816)).next;
}
{
F->saved_821 = NULL;
F->saved_821 = g_psub_512;
F->p_815 = (*(P467)rt_nil_check(F->t_202)).tparams;
while ((F->p_815 != NULL)) {
F->l1_822 = NULL;
F->l2_823 = NULL;
{ R476 *cell824 = rt_alloc(sizeof(R476));
(*cell824).s = NULL;
(*cell824).next = NULL;
F->l1_822 = cell824;
}
{ R476 *cell825 = rt_alloc(sizeof(R476));
(*cell825).s = NULL;
(*cell825).next = NULL;
F->l2_823 = cell825;
}
(*(P475)rt_nil_check(F->l1_822)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_815)).name)))), rt_str("@", 1)); b_; }));
(*(P475)rt_nil_check(F->l2_823)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p_", 3)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_815)).name)))); b_; }));
(*(P475)rt_nil_check(F->l1_822)).next = F->l2_823;
(*(P475)rt_nil_check(F->l2_823)).next = g_psub_512;
g_psub_512 = F->l1_822;
F->p_815 = (*(P463)rt_nil_check(F->p_815)).next;
}
if (((*(P467)rt_nil_check(F->t_202)).tparams == NULL)) {
f_init_storage_204(&(*F->lval_201), (*(P467)rt_nil_check(F->t_202)).under, (*(P467)rt_nil_check(F->t_202)).elemcons);
} else {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(".all", 4)); b_; }), (*(P467)rt_nil_check(F->t_202)).under, (*(P467)rt_nil_check(F->t_202)).elemcons);
}
g_psub_512 = F->saved_821;
}
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)12LL))) {
if (((*(P465)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_201)), rt_str(", ", 2)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).lo)))), rt_str(", sizeof(", 9)), f_ctype_177((*(P467)rt_nil_check(F->t_202)).elem)), rt_str("), ", 3)), f_mcopy_209((*(P467)rt_nil_check(F->t_202)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)13LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_201)), rt_str(");", 2)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)14LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)8LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_201), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)5LL))) {
if (((*(P465)rt_nil_check(F->c_203)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(" = rt_str_new(", 14)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).slen)))), rt_str(");", 2)); b_; }));
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)6LL))) {
if (((*(P465)rt_nil_check(F->c_203)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".lo = ", 6)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).lo)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi = ", 6)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).hi)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".lo2 = ", 7)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).lo2)))), rt_str("; ", 2)), (*F->lval_201)), rt_str(".hi2 = ", 7)), f_subst_196(&(*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_203)).hi2)))), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_177((*(P467)rt_nil_check(F->t_202)).elem)), rt_str(") * (size_t)RT_CNT(", 19)), (*F->lval_201)), rt_str("));", 3)); b_; }));
if ((((((((((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)5LL)) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)6LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)7LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)15LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)8LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)12LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)13LL))) || ((*(P467)rt_nil_check((*(P467)rt_nil_check(F->t_202)).elem)).kind == ((rt_int)14LL)))) {
F->i_826 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_826), rt_str(" = 0; ", 6)), F->i_826), rt_str(" < RT_CNT(", 10)), (*F->lval_201)), rt_str("); ", 3)), F->i_826), rt_str("++) {", 5)); b_; }));
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".p[", 3)), F->i_826), rt_str("]", 1)); b_; }), (*(P467)rt_nil_check(F->t_202)).elem, (*(P467)rt_nil_check(F->t_202)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P467)rt_nil_check(F->t_202)).kind == ((rt_int)7LL))) {
F->f_827 = NULL;
F->f_827 = (*(P467)rt_nil_check(F->t_202)).fields;
while ((F->f_827 != NULL)) {
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_201), rt_str(".", 1)), f_field_c_17(&(*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_827)).name)))); b_; }), (*(P469)rt_nil_check(F->f_827)).t, (*(P469)rt_nil_check(F->f_827)).c);
F->f_827 = (*(P469)rt_nil_check(F->f_827)).next;
}
}
ret_:
  return;
}

static rt_int f_manifest_207(P463 e_205, int *ok_206) {
  struct f_manifest_207fr *F = rt_alloc(sizeof *F);
F->e_205 = e_205;
F->ok_206 = ok_206;
F->ok_206v = *F->ok_206;
F->ok_206v = 0;
if (((*(P463)rt_nil_check(F->e_205)).kind == ((rt_int)1LL))) {
F->ok_206v = 1;
F->result_ = (*(P463)rt_nil_check(F->e_205)).ival;
goto ret_;
} else if (((*(P463)rt_nil_check(F->e_205)).kind == ((rt_int)17LL))) {
F->result_ = f_manifest_207((*(P463)rt_nil_check(F->e_205)).a, &F->ok_206v);
goto ret_;
} else if ((((*(P463)rt_nil_check(F->e_205)).kind == ((rt_int)8LL)) && rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("-", 1)))) {
F->a_828 = f_manifest_207((*(P463)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->result_ = rt_neg(F->a_828);
goto ret_;
} else if ((((*(P463)rt_nil_check(F->e_205)).kind == ((rt_int)9LL)) && ((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("+", 1)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("*", 1))))) {
F->a_828 = f_manifest_207((*(P463)rt_nil_check(F->e_205)).a, &F->ok_206v);
F->b_829 = f_manifest_207((*(P463)rt_nil_check(F->e_205)).b, &F->ok2_830);
F->ok_206v = (F->ok_206v && F->ok2_830);
if ((!F->ok_206v)) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("+", 1))) {
F->result_ = rt_add(F->a_828, F->b_829);
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)), rt_str("-", 1))) {
F->result_ = rt_sub(F->a_828, F->b_829);
goto ret_;
}
F->result_ = rt_mul(F->a_828, F->b_829);
goto ret_;
} else if (((*(P463)rt_nil_check(F->e_205)).kind == ((rt_int)7LL))) {
F->y_831 = NULL;
F->y_831 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_205)).name)));
if ((((F->y_831 != NULL) && ((*(P473)rt_nil_check(F->y_831)).kind == ((rt_int)2LL))) && (*(P473)rt_nil_check(F->y_831)).hasmv)) {
F->ok_206v = 1;
F->result_ = (*(P473)rt_nil_check(F->y_831)).mvalue;
goto ret_;
}
}
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ok_206) = F->ok_206v;
  return F->result_;
}

static rstr f_mcopy_209(P467 t_208) {
  struct f_mcopy_209fr *F = rt_alloc(sizeof *F);
F->t_208 = t_208;
F->ct_832 = rt_str_copy(f_ctype_177(F->t_208));
F->name_833 = rt_str_new(rt_add((F->ct_832).len, ((rt_int)3LL)));
rt_str_assign(&F->name_833, rt_str_cat(rt_str("mc_", 3), F->ct_832));
F->l_834 = NULL;
if ((!f_seen_name_230(g_mcopies_521, &F->name_833))) {
{ R476 *cell835 = rt_alloc(sizeof(R476));
(*cell835).s = NULL;
(*cell835).next = NULL;
F->l_834 = cell835;
}
(*(P475)rt_nil_check(F->l_834)).s = f_mk_3(&F->name_833);
(*(P475)rt_nil_check(F->l_834)).next = g_mcopies_521;
g_mcopies_521 = F->l_834;
f_put_27(g_out_protos_500, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_833), rt_str("(void *d, const void *s);", 25)); b_; }));
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_833), rt_str("(void *d, const void *s) { *(", 29)), F->ct_832), rt_str(" *)d = ", 7)), f_copy_code_219(F->t_208, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_832), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
F->result_ = F->name_833;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_composite_211(P467 t_210) {
  struct f_composite_211fr *F = rt_alloc(sizeof *F);
F->t_210 = t_210;
F->result_ = ((((*(P467)rt_nil_check(F->t_210)).kind == ((rt_int)6LL)) || ((*(P467)rt_nil_check(F->t_210)).kind == ((rt_int)7LL))) || (((*(P467)rt_nil_check(F->t_210)).kind == ((rt_int)15LL)) && ((*(P467)rt_nil_check(F->t_210)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_assign_code_216(rstr *lval_212, P467 t_213, rstr *v_214, P465 c_215) {
  struct f_assign_code_216fr *F = rt_alloc(sizeof *F);
F->lval_212 = lval_212;
F->t_213 = t_213;
F->v_214 = v_214;
F->c_215 = c_215;
if ((((*(P467)rt_nil_check(F->t_213)).kind == ((rt_int)15LL)) && ((*(P467)rt_nil_check(F->t_213)).tparams == NULL))) {
F->result_ = f_assign_code_216(&(*F->lval_212), (*(P467)rt_nil_check(F->t_213)).under, &(*F->v_214), F->c_215);
goto ret_;
}
if (f_composite_211(F->t_213)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_213)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->t_213)).kind == ((rt_int)6LL)) || ((*(P467)rt_nil_check(F->t_213)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_177(F->t_213)), rt_str("(&", 2)), (*F->lval_212)), rt_str(", ", 2)), (*F->v_214)), rt_str(");", 2));
goto ret_;
} else if (((((*(P467)rt_nil_check(F->t_213)).kind == ((rt_int)1LL)) && (F->c_215 != NULL)) && (*(P465)rt_nil_check(F->c_215)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = rt_range(", 12)), (*F->v_214)), rt_str(", ", 2)), f_itos_7((*(P465)rt_nil_check(F->c_215)).mlo)), rt_str(", ", 2)), f_itos_7((*(P465)rt_nil_check(F->c_215)).mhi)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_212), rt_str(" = ", 3)), (*F->v_214)), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_copy_code_219(P467 t_217, rstr *v_218) {
  struct f_copy_code_219fr *F = rt_alloc(sizeof *F);
F->t_217 = t_217;
F->v_218 = v_218;
if ((((*(P467)rt_nil_check(F->t_217)).kind == ((rt_int)15LL)) && ((*(P467)rt_nil_check(F->t_217)).tparams == NULL))) {
F->result_ = f_copy_code_219((*(P467)rt_nil_check(F->t_217)).under, &(*F->v_218));
goto ret_;
}
if (f_composite_211(F->t_217)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_217)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_218)), rt_str(")", 1));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->t_217)).kind == ((rt_int)6LL)) || ((*(P467)rt_nil_check(F->t_217)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_177(F->t_217)), rt_str("(", 1)), (*F->v_218)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_218);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_eq_code_223(P467 t_220, rstr *a_221, rstr *b_222) {
  struct f_eq_code_223fr *F = rt_alloc(sizeof *F);
F->t_220 = t_220;
F->a_221 = a_221;
F->b_222 = b_222;
if ((((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)15LL)) && ((*(P467)rt_nil_check(F->t_220)).tparams == NULL))) {
F->result_ = f_eq_code_223((*(P467)rt_nil_check(F->t_220)).under, &(*F->a_221), &(*F->b_222));
goto ret_;
}
if (f_composite_211(F->t_220)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)16LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)14LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)12LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)13LL))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)6LL)) || ((*(P467)rt_nil_check(F->t_220)).kind == ((rt_int)7LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_177(F->t_220)), rt_str("(", 1)), (*F->a_221)), rt_str(", ", 2)), (*F->b_222)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_221)), rt_str(" == ", 4)), (*F->b_222)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_elem_assign_227(rstr *lval_224, P467 t_225, rstr *v_226) {
  struct f_elem_assign_227fr *F = rt_alloc(sizeof *F);
F->lval_224 = lval_224;
F->t_225 = t_225;
F->v_226 = v_226;
F->result_ = f_assign_code_216(&(*F->lval_224), F->t_225, &(*F->v_226), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_seen_name_230(P475 l_228, rstr *s_229) {
  struct f_seen_name_230fr *F = rt_alloc(sizeof *F);
F->l_228 = l_228;
F->s_229 = s_229;
F->p_836 = NULL;
F->p_836 = F->l_228;
while ((F->p_836 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P475)rt_nil_check(F->p_836)).s)), (*F->s_229))) {
F->result_ = 1;
goto ret_;
}
F->p_836 = (*(P475)rt_nil_check(F->p_836)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_emit_helpers_231(void) {
  struct f_emit_helpers_231fr *F = rt_alloc(sizeof *F);
F->order_837 = NULL;
F->t_838 = NULL;
F->t_838 = g_all_types_496;
F->done_839 = NULL;
while ((F->t_838 != NULL)) {
if ((f_composite_211(F->t_838) && (!f_seen_name_230(F->done_839, &(*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_838)).cname)))))) {
F->l_840 = NULL;
F->c_841 = rt_str_new(((*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_838)).cname))).len);
rt_str_assign(&F->c_841, (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_838)).cname)));
{ R476 *cell842 = rt_alloc(sizeof(R476));
(*cell842).s = NULL;
(*cell842).next = NULL;
F->l_840 = cell842;
}
(*(P475)rt_nil_check(F->l_840)).s = (*(P467)rt_nil_check(F->t_838)).cname;
(*(P475)rt_nil_check(F->l_840)).next = F->done_839;
F->done_839 = F->l_840;
f_put_27(g_out_helpers_499, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_841), rt_str("(", 1)), F->c_841), rt_str(" *d, ", 5)), F->c_841), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_499, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_841), rt_str(" cp_", 4)), F->c_841), rt_str("(", 1)), F->c_841), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_499, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_841), rt_str("(", 1)), F->c_841), rt_str(" a, ", 4)), F->c_841), rt_str(" b);", 4)); b_; }));
f_helper_bodies_233(F->t_838);
}
F->t_838 = (*(P467)rt_nil_check(F->t_838)).next;
}
ret_:
  return;
}

static void f_helper_bodies_233(P467 t_232) {
  struct f_helper_bodies_233fr *F = rt_alloc(sizeof *F);
F->t_232 = t_232;
F->c_843 = rt_str_new(((*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_232)).cname))).len);
rt_str_assign(&F->c_843, (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_232)).cname)));
F->b_844 = NULL;
F->b_844 = g_out_funcs_502;
if (((*(P467)rt_nil_check(F->t_232)).kind == ((rt_int)6LL))) {
F->e_845 = NULL;
F->e_845 = (*(P467)rt_nil_check(F->t_232)).elem;
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" *d, ", 5)), F->c_843), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, ", 99), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) { ", 43), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_845, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_843), rt_str(" cp_", 4)), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_843), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_177(F->e_845)), rt_str(") * (size_t)RT_CNT(s));", 23)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = ", 50), f_copy_code_219(F->e_845, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" a, ", 4)), F->c_843), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;", 77); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < RT_CNT(a); i++) if (!(", 47), f_eq_code_223(F->e_845, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P467)rt_nil_check(F->t_232)).kind == ((rt_int)15LL))) {
F->p_846 = NULL;
F->p_846 = (*(P467)rt_nil_check(F->t_232)).tparams;
F->pc_847 = NULL;
F->pc_847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->p_846 != NULL)) {
F->pc_847 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->pc_847)), rt_str(" || d->p_", 9)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_846)).name)))), rt_str(" != s.p_", 8)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_846)).name)))); b_; }));
F->p_846 = (*(P463)rt_nil_check(F->p_846)).next;
}
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" *d, ", 5)), F->c_843), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (*(P458)rt_nil_check(F->pc_847))), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("constraint", 10)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P467)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_843), rt_str(" cp_", 4)), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" s) { s.all = ", 14)), f_copy_code_219((*(P467)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" a, ", 4)), F->c_843), rt_str(" b) { return ", 13)), f_eq_code_223((*(P467)rt_nil_check(F->t_232)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else {
F->f_848 = NULL;
F->f_848 = (*(P467)rt_nil_check(F->t_232)).fields;
F->conds_849 = NULL;
F->conds_849 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" *d, ", 5)), F->c_843), rt_str(" s) {", 5)); b_; }));
while ((F->f_848 != NULL)) {
F->fn_850 = rt_str_copy(f_field_c_17(&(*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_848)).name))));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_227(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_850); b_; }), (*(P469)rt_nil_check(F->f_848)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_850); b_; }))); b_; }));
F->f_848 = (*(P469)rt_nil_check(F->f_848)).next;
}
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_843), rt_str(" cp_", 4)), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_843), rt_str(" d = s;", 7)); b_; }));
F->f_848 = (*(P467)rt_nil_check(F->t_232)).fields;
while ((F->f_848 != NULL)) {
F->fn_851 = rt_str_copy(f_field_c_17(&(*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_848)).name))));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_851), rt_str(" = ", 3)), f_copy_code_219((*(P469)rt_nil_check(F->f_848)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_851); b_; }))), rt_str(";", 1)); b_; }));
F->conds_849 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->conds_849)), rt_str(" && ", 4)), f_eq_code_223((*(P469)rt_nil_check(F->f_848)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_851); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_851); b_; }))); b_; }));
F->f_848 = (*(P469)rt_nil_check(F->f_848)).next;
}
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_843), rt_str("(", 1)), F->c_843), rt_str(" a, ", 4)), F->c_843), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (*(P458)rt_nil_check(F->conds_849))), rt_str(";", 1)); b_; }));
f_put_27(F->b_844, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_declare_body_235(P463 elems_234) {
  struct f_declare_body_235fr *F = rt_alloc(sizeof *F);
F->elems_234 = elems_234;
F->e_852 = NULL;
F->e_852 = F->elems_234;
while ((F->e_852 != NULL)) {
if ((((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)41LL)) && ((*(P463)rt_nil_check(F->e_852)).flag == ((rt_int)0LL)))) {
f_manifest_const_237(F->e_852);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)47LL))) {
f_gen_capsule_245(F->e_852);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)48LL))) {
f_gen_expose_247(F->e_852);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)49LL))) {
F->y_853 = NULL;
F->y_853 = f_new_sym_155(((rt_int)7LL), (*(P463)rt_nil_check(F->e_852)).name);
(*(P473)rt_nil_check(F->y_853)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_852)).name)))), rt_str("_", 1)); b_; })); b_; }));
f_define_145(F->y_853, (*(P463)rt_nil_check(F->e_852)).line);
f_put_27(g_out_globals_501, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_853)).cname))), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_504, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_853)).cname))), rt_str(" = rt_exc(", 10)), f_q_18()), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_852)).name))), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)42LL))) {
F->y_854 = NULL;
F->y_854 = f_new_sym_155(((rt_int)6LL), (*(P463)rt_nil_check(F->e_852)).name);
(*(P473)rt_nil_check(F->y_854)).st = (*(P463)rt_nil_check(F->e_852)).a;
f_define_145(F->y_854, (*(P463)rt_nil_check(F->e_852)).line);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)44LL))) {
F->y_855 = NULL;
F->y_855 = f_new_sym_155(((rt_int)5LL), (*(P463)rt_nil_check(F->e_852)).name);
F->t_856 = NULL;
F->t_856 = f_new_typ_157(((rt_int)8LL));
(*(P467)rt_nil_check(F->t_856)).name = (*(P463)rt_nil_check(F->e_852)).name;
(*(P467)rt_nil_check(F->t_856)).decl = F->e_852;
(*(P473)rt_nil_check(F->y_855)).t = F->t_856;
f_define_145(F->y_855, (*(P463)rt_nil_check(F->e_852)).line);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)43LL))) {
F->y_857 = NULL;
F->y_857 = f_new_sym_155(((rt_int)5LL), (*(P463)rt_nil_check(F->e_852)).name);
(*(P473)rt_nil_check(F->y_857)).st = (*(P463)rt_nil_check(F->e_852)).a;
(*(P473)rt_nil_check(F->y_857)).decl = F->e_852;
f_define_145(F->y_857, (*(P463)rt_nil_check(F->e_852)).line);
}
F->e_852 = (*(P463)rt_nil_check(F->e_852)).next;
}
F->e_852 = F->elems_234;
while ((F->e_852 != NULL)) {
if (((((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)45LL)) || ((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)46LL))) || ((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)50LL)))) {
f_declare_subprogram_251(F->e_852);
} else if (((*(P463)rt_nil_check(F->e_852)).kind == ((rt_int)51LL))) {
F->g_858 = NULL;
F->g_858 = f_new_sym_155(((rt_int)10LL), (*(P463)rt_nil_check(F->e_852)).name);
(*(P473)rt_nil_check(F->g_858)).decl = F->e_852;
(*(P473)rt_nil_check(F->g_858)).level = g_cur_level_508;
f_define_145(F->g_858, (*(P463)rt_nil_check(F->e_852)).line);
}
F->e_852 = (*(P463)rt_nil_check(F->e_852)).next;
}
ret_:
  return;
}

static void f_manifest_const_237(P463 d_236) {
  struct f_manifest_const_237fr *F = rt_alloc(sizeof *F);
F->d_236 = d_236;
F->y_861 = NULL;
F->c_862 = NULL;
if (((*(P463)rt_nil_check(F->d_236)).a != NULL)) {
if ((((*(P463)rt_nil_check((*(P463)rt_nil_check(F->d_236)).a)).kind != ((rt_int)70LL)) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->d_236)).a)).a != NULL))) {
goto ret_;
}
}
F->v_860 = f_manifest_207((*(P463)rt_nil_check(F->d_236)).b, &F->ok_859);
if ((!F->ok_859)) {
goto ret_;
}
(*(P463)rt_nil_check(F->d_236)).flag = ((rt_int)1LL);
F->y_861 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->d_236)).name);
(*(P473)rt_nil_check(F->y_861)).t = g_ty_int_522;
(*(P473)rt_nil_check(F->y_861)).c = f_new_cons_158();
(*(P473)rt_nil_check(F->y_861)).mvalue = F->v_860;
(*(P473)rt_nil_check(F->y_861)).hasmv = 1;
(*(P473)rt_nil_check(F->y_861)).ro_flag = 1;
(*(P473)rt_nil_check(F->y_861)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), f_itos_7(F->v_860)), rt_str("LL)", 3)); b_; }));
f_define_145(F->y_861, (*(P463)rt_nil_check(F->d_236)).line);
ret_:
  return;
}

static int f_exported_241(P463 d_238, rstr *name_239, int *ro_240) {
  struct f_exported_241fr *F = rt_alloc(sizeof *F);
F->d_238 = d_238;
F->name_239 = name_239;
F->ro_240 = ro_240;
F->ro_240v = *F->ro_240;
F->p_863 = NULL;
F->p_863 = (*(P463)rt_nil_check(F->d_238)).a;
F->ro_240v = 0;
if (((*(P463)rt_nil_check(F->d_238)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_863 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_863)).name)), (*F->name_239))) {
F->ro_240v = ((*(P463)rt_nil_check(F->p_863)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_863 = (*(P463)rt_nil_check(F->p_863)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->ro_240) = F->ro_240v;
  return F->result_;
}

static P473 f_copy_sym_243(P473 y_242) {
  struct f_copy_sym_243fr *F = rt_alloc(sizeof *F);
F->y_242 = y_242;
F->z_864 = NULL;
{ R474 *cell865 = rt_alloc(sizeof(R474));
(*cell865).name = NULL;
(*cell865).t = NULL;
(*cell865).c = NULL;
(*cell865).access = NULL;
(*cell865).cname = NULL;
(*cell865).st = NULL;
(*cell865).decl = NULL;
(*cell865).params = NULL;
(*cell865).result = NULL;
(*cell865).members = NULL;
(*cell865).mnext = NULL;
(*cell865).binds = NULL;
(*cell865).insts = NULL;
(*cell865).chain = NULL;
(*cell865).stack = NULL;
F->z_864 = cell865;
}
(*(P473)rt_nil_check(F->z_864)).kind = (*(P473)rt_nil_check(F->y_242)).kind;
(*(P473)rt_nil_check(F->z_864)).name = (*(P473)rt_nil_check(F->y_242)).name;
(*(P473)rt_nil_check(F->z_864)).t = (*(P473)rt_nil_check(F->y_242)).t;
(*(P473)rt_nil_check(F->z_864)).c = (*(P473)rt_nil_check(F->y_242)).c;
(*(P473)rt_nil_check(F->z_864)).access = (*(P473)rt_nil_check(F->y_242)).access;
(*(P473)rt_nil_check(F->z_864)).cname = (*(P473)rt_nil_check(F->y_242)).cname;
(*(P473)rt_nil_check(F->z_864)).ro_flag = (*(P473)rt_nil_check(F->y_242)).ro_flag;
(*(P473)rt_nil_check(F->z_864)).mvalue = (*(P473)rt_nil_check(F->y_242)).mvalue;
(*(P473)rt_nil_check(F->z_864)).hasmv = (*(P473)rt_nil_check(F->y_242)).hasmv;
(*(P473)rt_nil_check(F->z_864)).st = (*(P473)rt_nil_check(F->y_242)).st;
(*(P473)rt_nil_check(F->z_864)).decl = (*(P473)rt_nil_check(F->y_242)).decl;
(*(P473)rt_nil_check(F->z_864)).params = (*(P473)rt_nil_check(F->y_242)).params;
(*(P473)rt_nil_check(F->z_864)).result = (*(P473)rt_nil_check(F->y_242)).result;
(*(P473)rt_nil_check(F->z_864)).level = (*(P473)rt_nil_check(F->y_242)).level;
(*(P473)rt_nil_check(F->z_864)).byref = (*(P473)rt_nil_check(F->y_242)).byref;
(*(P473)rt_nil_check(F->z_864)).members = (*(P473)rt_nil_check(F->y_242)).members;
F->result_ = F->z_864;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_gen_capsule_245(P463 d_244) {
  struct f_gen_capsule_245fr *F = rt_alloc(sizeof *F);
F->d_244 = d_244;
F->y_866 = NULL;
F->y_866 = f_new_sym_155(((rt_int)8LL), (*(P463)rt_nil_check(F->d_244)).name);
F->cr_867 = NULL;
F->ctx_868 = NULL;
F->m_869 = NULL;
F->p_870 = NULL;
F->p_870 = (*(P463)rt_nil_check(F->d_244)).a;
(*(P473)rt_nil_check(F->y_866)).decl = F->d_244;
{ R484 *cell872 = rt_alloc(sizeof(R484));
(*cell872).d = NULL;
(*cell872).next = NULL;
F->cr_867 = cell872;
}
(*(P483)rt_nil_check(F->cr_867)).d = F->d_244;
(*(P483)rt_nil_check(F->cr_867)).next = g_caps_510;
g_caps_510 = F->cr_867;
f_open_scope_151();
{ R488 *cell873 = rt_alloc(sizeof(R488));
(*cell873).imps = NULL;
(*cell873).next = NULL;
F->ctx_868 = cell873;
}
(*(P487)rt_nil_check(F->ctx_868)).depth = g_depth_494;
(*(P487)rt_nil_check(F->ctx_868)).imps = (*(P463)rt_nil_check(F->d_244)).d;
(*(P487)rt_nil_check(F->ctx_868)).all_imp = ((*(P463)rt_nil_check(F->d_244)).flag >= ((rt_int)2LL));
(*(P487)rt_nil_check(F->ctx_868)).next = g_fctx_509;
g_fctx_509 = F->ctx_868;
f_declare_body_235((*(P463)rt_nil_check(F->d_244)).c);
f_capsule_elements_278((*(P463)rt_nil_check(F->d_244)).c);
{
F->w_874 = NULL;
{ R486 *cell875 = rt_alloc(sizeof(R486));
(*cell875).d = NULL;
(*cell875).w = NULL;
(*cell875).next = NULL;
F->w_874 = cell875;
}
(*(P485)rt_nil_check(F->w_874)).d = F->d_244;
(*(P485)rt_nil_check(F->w_874)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_274((*(P463)rt_nil_check(F->d_244)).c); b_; }));
(*(P485)rt_nil_check(F->w_874)).next = g_cap_waits_511;
g_cap_waits_511 = F->w_874;
}
g_fctx_509 = (*(P487)rt_nil_check(g_fctx_509)).next;
F->m_869 = g_scope_stack_495;
while (((F->m_869 != NULL) && ((*(P473)rt_nil_check(F->m_869)).depth == g_depth_494))) {
if ((((((*(P473)rt_nil_check(F->m_869)).kind == ((rt_int)5LL)) && ((*(P473)rt_nil_check(F->m_869)).t == NULL)) && ((*(P473)rt_nil_check(F->m_869)).decl != NULL)) && ((*(P463)rt_nil_check((*(P473)rt_nil_check(F->m_869)).decl)).kind == ((rt_int)43LL)))) {
(*(P473)rt_nil_check(F->m_869)).t = f_new_type_200(F->m_869, f_nn_48(((rt_int)80LL), (*(P463)rt_nil_check(F->d_244)).line), &(*(P473)rt_nil_check(F->m_869)).c);
} else if (((((*(P473)rt_nil_check(F->m_869)).kind == ((rt_int)5LL)) || ((*(P473)rt_nil_check(F->m_869)).kind == ((rt_int)6LL))) && ((*(P473)rt_nil_check(F->m_869)).t == NULL))) {
(*(P473)rt_nil_check(F->m_869)).t = f_resolve_subtype_188((*(P473)rt_nil_check(F->m_869)).st, &(*(P473)rt_nil_check(F->m_869)).c);
} else if ((((*(P473)rt_nil_check(F->m_869)).kind == ((rt_int)5LL)) && ((*(P467)rt_nil_check((*(P473)rt_nil_check(F->m_869)).t)).kind == ((rt_int)8LL)))) {
f_finish_ptr_249((*(P473)rt_nil_check(F->m_869)).t);
}
F->m_869 = (*(P473)rt_nil_check(F->m_869)).stack;
}
F->m_869 = g_scope_stack_495;
while (((F->m_869 != NULL) && ((*(P473)rt_nil_check(F->m_869)).depth == g_depth_494))) {
if (f_exported_241(F->d_244, &(*(P458)rt_nil_check((*(P473)rt_nil_check(F->m_869)).name)), &F->ro_871)) {
F->z_876 = NULL;
F->z_876 = f_copy_sym_243(F->m_869);
if (F->ro_871) {
(*(P473)rt_nil_check(F->z_876)).ro_flag = 1;
}
(*(P473)rt_nil_check(F->z_876)).mnext = (*(P473)rt_nil_check(F->y_866)).members;
(*(P473)rt_nil_check(F->y_866)).members = F->z_876;
}
F->m_869 = (*(P473)rt_nil_check(F->m_869)).stack;
}
while ((F->p_870 != NULL)) {
if (((f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_870)).name))) == NULL) || ((*(P473)rt_nil_check(f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_870)).name))))).depth != g_depth_494))) {
f_fail_23((*(P463)rt_nil_check(F->d_244)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_870)).name)), rt_str(" is exported but not defined in capsule ", 40)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_244)).name))); b_; }));
}
F->p_870 = (*(P463)rt_nil_check(F->p_870)).next;
}
f_close_scope_152();
g_caps_510 = (*(P483)rt_nil_check(g_caps_510)).next;
f_define_145(F->y_866, (*(P463)rt_nil_check(F->d_244)).line);
ret_:
  return;
}

static void f_gen_expose_247(P463 d_246) {
  struct f_gen_expose_247fr *F = rt_alloc(sizeof *F);
F->d_246 = d_246;
F->y_877 = NULL;
F->y_877 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_246)).name)));
F->m_878 = NULL;
F->p_879 = NULL;
F->p_879 = (*(P463)rt_nil_check(F->d_246)).a;
if (((F->y_877 == NULL) || ((*(P473)rt_nil_check(F->y_877)).kind != ((rt_int)8LL)))) {
f_fail_23((*(P463)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_246)).name)), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P463)rt_nil_check(F->d_246)).ival == ((rt_int)1LL))) {
F->m_878 = (*(P473)rt_nil_check(F->y_877)).members;
while ((F->m_878 != NULL)) {
f_define_145(f_copy_sym_243(F->m_878), (*(P463)rt_nil_check(F->d_246)).line);
F->m_878 = (*(P473)rt_nil_check(F->m_878)).mnext;
}
goto ret_;
}
while ((F->p_879 != NULL)) {
F->found_880 = 0;
F->m_878 = (*(P473)rt_nil_check(F->y_877)).members;
while ((F->m_878 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->m_878)).name)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_879)).name)))) {
F->z_881 = NULL;
F->z_881 = f_copy_sym_243(F->m_878);
if (((*(P463)rt_nil_check(F->p_879)).ival == ((rt_int)1LL))) {
(*(P473)rt_nil_check(F->z_881)).ro_flag = 1;
}
f_define_145(F->z_881, (*(P463)rt_nil_check(F->d_246)).line);
F->found_880 = 1;
}
F->m_878 = (*(P473)rt_nil_check(F->m_878)).mnext;
}
if ((!F->found_880)) {
f_fail_23((*(P463)rt_nil_check(F->d_246)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_879)).name)), rt_str(" is not exported by ", 20)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_246)).name))); b_; }));
}
F->p_879 = (*(P463)rt_nil_check(F->p_879)).next;
}
ret_:
  return;
}

static void f_finish_ptr_249(P467 t_248) {
  struct f_finish_ptr_249fr *F = rt_alloc(sizeof *F);
F->t_248 = t_248;
F->d_882 = NULL;
F->d_882 = (*(P467)rt_nil_check(F->t_248)).decl;
F->p_883 = NULL;
F->c_884 = NULL;
F->dummy_885 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_885, rt_str(" ", 1));
if (((*(P467)rt_nil_check(F->t_248)).target != NULL)) {
goto ret_;
}
f_open_scope_151();
F->p_883 = (*(P463)rt_nil_check(F->d_882)).b;
while ((F->p_883 != NULL)) {
F->y_886 = NULL;
F->y_886 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->p_883)).name);
(*(P473)rt_nil_check(F->y_886)).t = g_ty_int_522;
(*(P473)rt_nil_check(F->y_886)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_145(F->y_886, (*(P463)rt_nil_check(F->d_882)).line);
F->p_883 = (*(P463)rt_nil_check(F->p_883)).next;
}
(*(P467)rt_nil_check(F->t_248)).target = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_882)).a, &F->c_884);
f_close_scope_152();
(*rt_str_at(&F->dummy_885, ((rt_int)1LL))) = rt_str_get(f_ctype_177(F->t_248), ((rt_int)1LL));
(*rt_str_at(&F->dummy_885, ((rt_int)1LL))) = rt_str_get(f_ctype_177((*(P467)rt_nil_check(F->t_248)).target), ((rt_int)1LL));
ret_:
  return;
}

static void f_declare_subprogram_251(P463 d_250) {
  struct f_declare_subprogram_251fr *F = rt_alloc(sizeof *F);
F->d_250 = d_250;
f_define_145(f_build_subprogram_253(F->d_250), (*(P463)rt_nil_check(F->d_250)).line);
ret_:
  return;
}

static P473 f_build_subprogram_253(P463 d_252) {
  struct f_build_subprogram_253fr *F = rt_alloc(sizeof *F);
F->d_252 = d_252;
F->y_887 = NULL;
F->p_888 = NULL;
F->p_888 = (*(P463)rt_nil_check(F->d_252)).a;
F->tail_889 = NULL;
if (((*(P463)rt_nil_check(F->d_252)).kind == ((rt_int)46LL))) {
F->y_887 = f_new_sym_155(((rt_int)3LL), (*(P463)rt_nil_check(F->d_252)).name);
} else if (((*(P463)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
F->y_887 = f_new_sym_155(((rt_int)9LL), (*(P463)rt_nil_check(F->d_252)).name);
} else {
F->y_887 = f_new_sym_155(((rt_int)4LL), (*(P463)rt_nil_check(F->d_252)).name);
}
while ((F->p_888 != NULL)) {
F->pm_890 = NULL;
{ R472 *cell891 = rt_alloc(sizeof(R472));
(*cell891).name = NULL;
(*cell891).t = NULL;
(*cell891).c = NULL;
(*cell891).cfield = NULL;
(*cell891).next = NULL;
F->pm_890 = cell891;
}
(*(P471)rt_nil_check(F->pm_890)).name = (*(P463)rt_nil_check(F->p_888)).name;
(*(P471)rt_nil_check(F->pm_890)).mode = (*(P463)rt_nil_check(F->p_888)).ival;
(*(P471)rt_nil_check(F->pm_890)).t = f_resolve_subtype_188((*(P463)rt_nil_check(F->p_888)).a, &(*(P471)rt_nil_check(F->pm_890)).c);
(*(P471)rt_nil_check(F->pm_890)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_888)).name))), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_889 == NULL)) {
(*(P473)rt_nil_check(F->y_887)).params = F->pm_890;
} else {
(*(P471)rt_nil_check(F->tail_889)).next = F->pm_890;
}
F->tail_889 = F->pm_890;
F->p_888 = (*(P463)rt_nil_check(F->p_888)).next;
}
(*(P473)rt_nil_check(F->y_887)).result = g_ty_void_527;
if (((*(P463)rt_nil_check(F->d_252)).b != NULL)) {
F->rc_892 = NULL;
(*(P473)rt_nil_check(F->y_887)).result = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_252)).b, &F->rc_892);
}
(*(P473)rt_nil_check(F->y_887)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_367(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_252)).name)))), rt_str("_", 1)); b_; })); b_; }));
(*(P473)rt_nil_check(F->y_887)).decl = F->d_252;
(*(P473)rt_nil_check(F->y_887)).level = g_cur_level_508;
if (((*(P463)rt_nil_check(F->d_252)).kind == ((rt_int)50LL))) {
f_put_27(g_out_globals_501, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_887)).cname))), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_887;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_element_255(P463 e_254) {
  struct f_element_255fr *F = rt_alloc(sizeof *F);
F->e_254 = e_254;
F->k_893 = (*(P463)rt_nil_check(F->e_254)).kind;
if ((((F->k_893 == ((rt_int)45LL)) || (F->k_893 == ((rt_int)46LL))) || (F->k_893 == ((rt_int)50LL)))) {
f_subprogram_267(F->e_254);
} else if (((((((F->k_893 == ((rt_int)49LL)) || (F->k_893 == ((rt_int)42LL))) || (F->k_893 == ((rt_int)43LL))) || (F->k_893 == ((rt_int)47LL))) || (F->k_893 == ((rt_int)48LL))) || (F->k_893 == ((rt_int)51LL)))) {
goto ret_;
} else if ((F->k_893 == ((rt_int)44LL))) {
f_finish_ptr_249((*(P473)rt_nil_check(f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_254)).name))))).t);
} else if ((F->k_893 == ((rt_int)40LL))) {
f_var_decl_263(F->e_254);
} else if (((F->k_893 == ((rt_int)41LL)) && ((*(P463)rt_nil_check(F->e_254)).flag == ((rt_int)0LL)))) {
f_const_decl_265(F->e_254);
} else if ((F->k_893 == ((rt_int)41LL))) {
goto ret_;
} else if ((F->k_893 == ((rt_int)33LL))) {
F->t_894 = NULL;
F->c_895 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_254)).a, g_ty_bool_523, &F->t_894));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_895), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_289(F->e_254);
}
ret_:
  return;
}

static rstr f_storage_258(rstr *name_256, P467 t_257) {
  struct f_storage_258fr *F = rt_alloc(sizeof *F);
F->name_256 = name_256;
F->t_257 = t_257;
if ((!g_in_func_507)) {
F->g_896 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_256))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_501, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->g_896), rt_str(";", 1)); b_; }));
g_st_field_513 = f_mk_3(&F->g_896);
F->result_ = F->g_896;
goto ret_;
}
{
F->f_897 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_256)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177(F->t_257)), rt_str(" ", 1)), F->f_897), rt_str(";", 1)); b_; }));
g_st_field_513 = f_mk_3(&F->f_897);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_897);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_bind_261(P473 y_259, rstr *access_260) {
  struct f_bind_261fr *F = rt_alloc(sizeof *F);
F->y_259 = y_259;
F->access_260 = access_260;
if (g_in_func_507) {
(*(P473)rt_nil_check(F->y_259)).level = g_cur_level_508;
(*(P473)rt_nil_check(F->y_259)).access = g_st_field_513;
} else {
(*(P473)rt_nil_check(F->y_259)).level = ((rt_int)0LL);
(*(P473)rt_nil_check(F->y_259)).access = f_mk_3(&(*F->access_260));
}
ret_:
  return;
}

static void f_var_decl_263(P463 d_262) {
  struct f_var_decl_263fr *F = rt_alloc(sizeof *F);
F->d_262 = d_262;
F->c_898 = NULL;
F->t_899 = NULL;
F->t_899 = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_262)).a, &F->c_898);
F->y_900 = NULL;
F->y_900 = f_new_sym_155(((rt_int)1LL), (*(P463)rt_nil_check(F->d_262)).name);
F->access_901 = rt_str_copy(f_storage_258(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_262)).name)), F->t_899));
f_init_storage_204(&F->access_901, F->t_899, F->c_898);
if (((*(P463)rt_nil_check(F->d_262)).b != NULL)) {
F->vt_902 = NULL;
F->v_903 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->d_262)).b, F->t_899, &F->vt_902));
f_check_type_175(F->vt_902, F->t_899, (*(P463)rt_nil_check(F->d_262)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&F->access_901, F->t_899, &F->v_903, F->c_898); b_; }));
}
(*(P473)rt_nil_check(F->y_900)).t = F->t_899;
(*(P473)rt_nil_check(F->y_900)).c = F->c_898;
f_bind_261(F->y_900, &F->access_901);
f_define_145(F->y_900, (*(P463)rt_nil_check(F->d_262)).line);
ret_:
  return;
}

static void f_const_decl_265(P463 d_264) {
  struct f_const_decl_265fr *F = rt_alloc(sizeof *F);
F->d_264 = d_264;
F->c_904 = NULL;
F->c_904 = f_new_cons_158();
F->t_905 = NULL;
F->vt_906 = NULL;
F->y_907 = NULL;
F->y_907 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->d_264)).name);
if (((*(P463)rt_nil_check(F->d_264)).a != NULL)) {
F->t_905 = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_264)).a, &F->c_904);
}
{
F->v_909 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->d_264)).b, F->t_905, &F->vt_906));
if ((F->t_905 != NULL)) {
f_check_type_175(F->vt_906, F->t_905, (*(P463)rt_nil_check(F->d_264)).line);
} else {
F->t_905 = F->vt_906;
}
if (((*(P467)rt_nil_check(F->t_905)).kind == ((rt_int)1LL))) {
(*(P473)rt_nil_check(F->y_907)).mvalue = f_manifest_207((*(P463)rt_nil_check(F->d_264)).b, &F->ok_908);
(*(P473)rt_nil_check(F->y_907)).hasmv = F->ok_908;
}
{
F->access_910 = rt_str_copy(f_storage_258(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->d_264)).name)), F->t_905));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_910, rt_str(" = ", 3)), f_copy_code_219(F->t_905, &F->v_909)), rt_str(";", 1)); b_; }));
f_bind_261(F->y_907, &F->access_910);
}
}
(*(P473)rt_nil_check(F->y_907)).t = F->t_905;
(*(P473)rt_nil_check(F->y_907)).c = F->c_904;
(*(P473)rt_nil_check(F->y_907)).ro_flag = 1;
f_define_145(F->y_907, (*(P463)rt_nil_check(F->d_264)).line);
ret_:
  return;
}

static void f_subprogram_267(P463 d_266) {
  struct f_subprogram_267fr *F = rt_alloc(sizeof *F);
F->d_266 = d_266;
f_gen_subprogram_270(F->d_266, f_lookup_decl_142(F->d_266));
ret_:
  return;
}

static void f_gen_subprogram_270(P463 d_268, P473 y_269) {
  struct f_gen_subprogram_270fr *F = rt_alloc(sizeof *F);
F->d_268 = d_268;
F->y_269 = y_269;
F->saved_code_911 = NULL;
F->saved_code_911 = g_code_505;
F->saved_fields_912 = NULL;
F->saved_fields_912 = g_fields_buf_506;
F->saved_in_913 = g_in_func_507;
F->saved_sym_914 = NULL;
F->saved_sym_914 = g_func_sym_515;
F->saved_exits_915 = NULL;
F->saved_exits_915 = g_exits_516;
F->saved_frames_916 = g_frames_517;
F->args_917 = NULL;
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_918 = NULL;
F->pm_918 = (*(P473)rt_nil_check(F->y_269)).params;
F->saved_handlers_919 = NULL;
F->saved_handlers_919 = g_handlers_518;
F->saved_cleanups_920 = NULL;
F->saved_cleanups_920 = g_cleanups_519;
F->ctx_921 = NULL;
F->head_922 = NULL;
F->frame_923 = NULL;
F->frame_923 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_269)).cname)), rt_str("fr", 2)); b_; }));
F->parent_924 = NULL;
F->copy_back_925 = NULL;
F->copy_back_925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (g_in_func_507) {
F->parent_924 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P473)rt_nil_check(g_func_sym_515)).cname)), rt_str("fr", 2)); b_; }));
}
g_code_505 = f_new_buffer_24();
g_fields_buf_506 = f_new_buffer_24();
g_in_func_507 = 1;
g_func_sym_515 = F->y_269;
g_exits_516 = NULL;
g_frames_517 = ((rt_int)0LL);
g_handlers_518 = NULL;
g_cleanups_519 = NULL;
g_cur_level_508 = rt_add(g_cur_level_508, ((rt_int)1LL));
f_open_scope_151();
{ R488 *cell926 = rt_alloc(sizeof(R488));
(*cell926).imps = NULL;
(*cell926).next = NULL;
F->ctx_921 = cell926;
}
(*(P487)rt_nil_check(F->ctx_921)).depth = g_depth_494;
(*(P487)rt_nil_check(F->ctx_921)).imps = (*(P463)rt_nil_check(F->d_268)).d;
(*(P487)rt_nil_check(F->ctx_921)).all_imp = ((*(P463)rt_nil_check(F->d_268)).flag >= ((rt_int)2LL));
(*(P487)rt_nil_check(F->ctx_921)).next = g_fctx_509;
g_fctx_509 = F->ctx_921;
if ((F->parent_924 != NULL)) {
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (*(P458)rt_nil_check(F->parent_924))), rt_str(" *up;", 5)); b_; }));
if (((*(P473)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check(F->parent_924))), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_918 != NULL)) {
F->ct_927 = rt_str_copy(f_ctype_177((*(P471)rt_nil_check(F->pm_918)).t));
F->f_928 = rt_str_copy((*(P458)rt_nil_check((*(P471)rt_nil_check(F->pm_918)).cfield)));
F->p_929 = NULL;
if ((((*(P458)rt_nil_check(F->args_917))).len > ((rt_int)0LL))) {
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->args_917)), rt_str(", ", 2)); b_; }));
}
if (((*(P471)rt_nil_check(F->pm_918)).mode == ((rt_int)1LL))) {
F->p_929 = f_new_sym_155(((rt_int)2LL), (*(P471)rt_nil_check(F->pm_918)).name);
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_927), rt_str(" ", 1)), F->f_928), rt_str(";", 1)); b_; }));
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_917)), F->ct_927), rt_str(" ", 1)), F->f_928); b_; }));
(*(P473)rt_nil_check(F->p_929)).access = f_mk_3(&F->f_928);
if (((*(P473)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_928), rt_str(" = ", 3)), f_copy_code_219((*(P471)rt_nil_check(F->pm_918)).t, &F->f_928)), rt_str(";", 1)); b_; }));
}
} else {
F->p_929 = f_new_sym_155(((rt_int)1LL), (*(P471)rt_nil_check(F->pm_918)).name);
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_927), rt_str(" *", 2)), F->f_928), rt_str(";", 1)); b_; }));
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_917)), F->ct_927), rt_str(" *", 2)), F->f_928); b_; }));
(*(P473)rt_nil_check(F->p_929)).access = f_mk_3(&F->f_928);
(*(P473)rt_nil_check(F->p_929)).byref = 1;
if (((*(P473)rt_nil_check(F->y_269)).kind != ((rt_int)9LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_928), rt_str(" = ", 3)), F->f_928), rt_str(";", 1)); b_; }));
}
if ((((*(P471)rt_nil_check(F->pm_918)).mode == ((rt_int)3LL)) && ((*(P473)rt_nil_check(F->y_269)).kind != ((rt_int)9LL)))) {
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_927), rt_str(" ", 1)), F->f_928), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_928), rt_str("v = ", 4)), f_copy_code_219((*(P471)rt_nil_check(F->pm_918)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_928); b_; }))), rt_str(";", 1)); b_; }));
F->copy_back_925 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->copy_back_925)), rt_str("  ", 2)), f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_928), rt_str(")", 1)); b_; }), (*(P471)rt_nil_check(F->pm_918)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_928), rt_str("v", 1)); b_; }), (*(P471)rt_nil_check(F->pm_918)).c)); b_; }));
(*(P473)rt_nil_check(F->p_929)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_928, rt_str("v", 1)); b_; }));
(*(P473)rt_nil_check(F->p_929)).byref = 0;
}
}
(*(P473)rt_nil_check(F->p_929)).t = (*(P471)rt_nil_check(F->pm_918)).t;
(*(P473)rt_nil_check(F->p_929)).c = (*(P471)rt_nil_check(F->pm_918)).c;
(*(P473)rt_nil_check(F->p_929)).level = g_cur_level_508;
(*(P473)rt_nil_check(F->p_929)).ro_flag = (((*(P471)rt_nil_check(F->pm_918)).mode == ((rt_int)1LL)) || ((*(P471)rt_nil_check(F->pm_918)).mode == ((rt_int)4LL)));
f_define_145(F->p_929, (*(P463)rt_nil_check(F->d_268)).line);
F->pm_918 = (*(P471)rt_nil_check(F->pm_918)).next;
}
if (((*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_fields_buf_506, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_177((*(P473)rt_nil_check(F->y_269)).result)), rt_str(" result_;", 9)); b_; }));
}
f_declare_body_235((*(P463)rt_nil_check(F->d_268)).c);
f_body_elements_280((*(P463)rt_nil_check(F->d_268)).c);
f_close_scope_152();
g_fctx_509 = (*(P487)rt_nil_check(g_fctx_509)).next;
g_cur_level_508 = rt_sub(g_cur_level_508, ((rt_int)1LL));
if (((((*(P458)rt_nil_check(F->args_917))).len == ((rt_int)0LL)) || ((*(P473)rt_nil_check(F->y_269)).kind == ((rt_int)9LL)))) {
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P473)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
F->args_917 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_922 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_177((*(P473)rt_nil_check(F->y_269)).result)), rt_str(" ", 1)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_269)).cname))), rt_str("(", 1)), (*(P458)rt_nil_check(F->args_917))), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_500, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->head_922)), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->head_922)), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (*(P458)rt_nil_check(F->frame_923))), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_514, g_fields_buf_506);
f_put_27(g_out_frames_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P473)rt_nil_check(F->y_269)).kind == ((rt_int)9LL))) {
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P458)rt_nil_check(F->frame_923))), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (*(P458)rt_nil_check(F->frame_923))), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_splice_34(g_out_funcs_502, g_code_505);
if (((*(P467)rt_nil_check((*(P473)rt_nil_check(F->y_269)).result)).kind != ((rt_int)9LL))) {
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P458)rt_nil_check(F->copy_back_925))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_502, &(*(P458)rt_nil_check(F->copy_back_925)));
}
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((*(P458)rt_nil_check(F->copy_back_925))).len > ((rt_int)0LL))) {
f_put_27(g_out_funcs_502, &(*(P458)rt_nil_check(F->copy_back_925)));
}
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_502, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_505 = F->saved_code_911;
g_fields_buf_506 = F->saved_fields_912;
g_in_func_507 = F->saved_in_913;
g_func_sym_515 = F->saved_sym_914;
g_exits_516 = F->saved_exits_915;
g_frames_517 = F->saved_frames_916;
g_handlers_518 = F->saved_handlers_919;
g_cleanups_519 = F->saved_cleanups_920;
ret_:
  return;
}

static rstr f_waits_of_272(P463 d_271) {
  struct f_waits_of_272fr *F = rt_alloc(sizeof *F);
F->d_271 = d_271;
F->w_930 = NULL;
F->w_930 = g_cap_waits_511;
while ((F->w_930 != NULL)) {
if (((*(P485)rt_nil_check(F->w_930)).d == F->d_271)) {
F->result_ = (*(P458)rt_nil_check((*(P485)rt_nil_check(F->w_930)).w));
goto ret_;
}
F->w_930 = (*(P485)rt_nil_check(F->w_930)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_task_waits_274(P463 elems_273) {
  struct f_task_waits_274fr *F = rt_alloc(sizeof *F);
F->elems_273 = elems_273;
F->e_931 = NULL;
F->e_931 = F->elems_273;
F->r_932 = NULL;
F->r_932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_931 != NULL)) {
if (((*(P463)rt_nil_check(F->e_931)).kind == ((rt_int)50LL))) {
F->r_932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->r_932)), rt_str(" rt_await_decl(&", 16)), (*(P458)rt_nil_check((*(P473)rt_nil_check(f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_931)).name))))).cname))), rt_str("decl);", 6)); b_; }));
} else if (((*(P463)rt_nil_check(F->e_931)).kind == ((rt_int)47LL))) {
F->r_932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->r_932)), f_waits_of_272(F->e_931)); b_; }));
}
F->e_931 = (*(P463)rt_nil_check(F->e_931)).next;
}
F->result_ = (*(P458)rt_nil_check(F->r_932));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_await_tasks_276(P463 elems_275) {
  struct f_await_tasks_276fr *F = rt_alloc(sizeof *F);
F->elems_275 = elems_275;
F->w_933 = rt_str_copy(f_task_waits_274(F->elems_275));
if (((F->w_933).len > ((rt_int)0LL))) {
f_emit_29(&F->w_933);
}
ret_:
  return;
}

static void f_capsule_elements_278(P463 elems_277) {
  struct f_capsule_elements_278fr *F = rt_alloc(sizeof *F);
F->elems_277 = elems_277;
F->e_934 = NULL;
F->e_934 = F->elems_277;
while ((F->e_934 != NULL)) {
f_element_255(F->e_934);
F->e_934 = (*(P463)rt_nil_check(F->e_934)).next;
}
ret_:
  return;
}

static void f_body_elements_280(P463 elems_279) {
  struct f_body_elements_280fr *F = rt_alloc(sizeof *F);
F->elems_279 = elems_279;
f_capsule_elements_278(F->elems_279);
f_await_tasks_276(F->elems_279);
ret_:
  return;
}

static void f_gen_body_282(P463 elems_281) {
  struct f_gen_body_282fr *F = rt_alloc(sizeof *F);
F->elems_281 = elems_281;
f_open_scope_151();
f_declare_body_235(F->elems_281);
f_body_elements_280(F->elems_281);
f_close_scope_152();
ret_:
  return;
}

static void f_pop_frames_284(rt_int upto_283) {
  struct f_pop_frames_284fr *F = rt_alloc(sizeof *F);
F->upto_283 = upto_283;
F->i_935 = g_frames_517;
F->c_936 = NULL;
F->c_936 = g_cleanups_519;
while ((F->i_935 > F->upto_283)) {
f_emit_29(&(*(P458)rt_nil_check((*(P475)rt_nil_check(F->c_936)).s)));
F->c_936 = (*(P475)rt_nil_check(F->c_936)).next;
F->i_935 = rt_sub(F->i_935, ((rt_int)1LL));
}
ret_:
  return;
}

static void f_push_cleanup_286(rstr *s_285) {
  struct f_push_cleanup_286fr *F = rt_alloc(sizeof *F);
F->s_285 = s_285;
F->c_937 = NULL;
{ R476 *cell938 = rt_alloc(sizeof(R476));
(*cell938).s = NULL;
(*cell938).next = NULL;
F->c_937 = cell938;
}
(*(P475)rt_nil_check(F->c_937)).s = f_mk_3(&(*F->s_285));
(*(P475)rt_nil_check(F->c_937)).next = g_cleanups_519;
g_cleanups_519 = F->c_937;
g_frames_517 = rt_add(g_frames_517, ((rt_int)1LL));
ret_:
  return;
}

static void f_pop_cleanup_287(void) {
  struct f_pop_cleanup_287fr *F = rt_alloc(sizeof *F);
g_cleanups_519 = (*(P475)rt_nil_check(g_cleanups_519)).next;
g_frames_517 = rt_sub(g_frames_517, ((rt_int)1LL));
ret_:
  return;
}

static void f_gen_statement_289(P463 s_288) {
  struct f_gen_statement_289fr *F = rt_alloc(sizeof *F);
F->s_288 = s_288;
F->label_939 = NULL;
if (((*(P463)rt_nil_check(F->s_288)).tag != NULL)) {
F->x_940 = NULL;
{ R482 *cell941 = rt_alloc(sizeof(R482));
(*cell941).match = NULL;
(*cell941).label = NULL;
(*cell941).next = NULL;
F->x_940 = cell941;
}
F->label_939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P481)rt_nil_check(F->x_940)).match = (*(P463)rt_nil_check(F->s_288)).tag;
(*(P481)rt_nil_check(F->x_940)).label = F->label_939;
(*(P481)rt_nil_check(F->x_940)).depth = g_frames_517;
(*(P481)rt_nil_check(F->x_940)).next = g_exits_516;
g_exits_516 = F->x_940;
}
{ rt_int sel942 = (*(P463)rt_nil_check(F->s_288)).kind;
if (0 || (sel942 == ((rt_int)20LL))) {
f_st_assign_291(F->s_288);
} else if (0 || (sel942 == ((rt_int)21LL))) {
f_st_call_293(F->s_288);
} else if (0 || (sel942 == ((rt_int)22LL))) {
f_st_if_295(F->s_288);
} else if (0 || (sel942 == ((rt_int)23LL))) {
f_st_case_297(F->s_288);
} else if (0 || (sel942 == ((rt_int)24LL))) {
f_st_repeat_299(F->s_288);
} else if (0 || (sel942 == ((rt_int)25LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_288)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel942 == ((rt_int)27LL))) {
f_st_exit_301(F->s_288);
} else if (0 || (sel942 == ((rt_int)28LL))) {
f_st_return_303(F->s_288);
} else if (0 || (sel942 == ((rt_int)30LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_306(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_288)).name)), (*(P463)rt_nil_check(F->s_288)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel942 == ((rt_int)31LL))) {
if ((g_handlers_518 == NULL)) {
f_fail_23((*(P463)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (*(P458)rt_nil_check((*(P475)rt_nil_check(g_handlers_518)).s))), rt_str(");", 2)); b_; }));
} else if (0 || (sel942 == ((rt_int)26LL))) {
f_st_guard_308(F->s_288);
} else if (0 || (sel942 == ((rt_int)32LL))) {
f_st_alloc_310(F->s_288);
} else if (0 || (sel942 == ((rt_int)34LL))) {
f_st_create_314(F->s_288);
} else if (0 || (sel942 == ((rt_int)35LL))) {
f_st_wait_333(F->s_288);
} else if (0 || (sel942 == ((rt_int)36LL))) {
f_st_region_341(F->s_288);
} else {
f_fail_23((*(P463)rt_nil_check(F->s_288)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P463)rt_nil_check(F->s_288)).tag != NULL)) {
g_exits_516 = (*(P481)rt_nil_check(g_exits_516)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->label_939)), rt_str(": ;", 3)); b_; }));
}
ret_:
  return;
}

static void f_st_assign_291(P463 s_290) {
  struct f_st_assign_291fr *F = rt_alloc(sizeof *F);
F->s_290 = s_290;
F->lv_943 = NULL;
F->t_944 = NULL;
F->vt_945 = NULL;
F->c_946 = NULL;
if (((((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).kind == ((rt_int)10LL)) && ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).b != NULL)) && ((*(P463)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).b)).kind == ((rt_int)16LL)))) {
f_lvalue_378((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).a, &F->lv_943, &F->t_944, &F->c_946, &F->ro_947);
if ((F->ro_947 || ((*(P467)rt_nil_check(F->t_944)).kind != ((rt_int)5LL)))) {
f_fail_23((*(P463)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string variable", 40); b_; }));
}
{
F->lo_948 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).b)).a, g_ty_int_522, &F->vt_945));
F->hi_949 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->s_290)).a)).b)).b, g_ty_int_522, &F->vt_945));
F->v_950 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_290)).b, g_ty_string_526, &F->vt_945));
f_check_type_175(F->vt_945, g_ty_string_526, (*(P463)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (*(P458)rt_nil_check(F->lv_943))), rt_str(", ", 2)), F->lo_948), rt_str(", ", 2)), F->hi_949), rt_str(", ", 2)), F->v_950), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_378((*(P463)rt_nil_check(F->s_290)).a, &F->lv_943, &F->t_944, &F->c_946, &F->ro_947);
if (F->ro_947) {
f_fail_23((*(P463)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if ((!f_opened_190(F->t_944))) {
f_fail_23((*(P463)rt_nil_check(F->s_290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_944)).name))), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_951 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_290)).b, F->t_944, &F->vt_945));
f_check_type_175(F->vt_945, F->t_944, (*(P463)rt_nil_check(F->s_290)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(&(*(P458)rt_nil_check(F->lv_943)), F->t_944, &F->v_951, F->c_946); b_; }));
}
ret_:
  return;
}

static void f_st_call_293(P463 s_292) {
  struct f_st_call_293fr *F = rt_alloc(sizeof *F);
F->s_292 = s_292;
F->c_952 = NULL;
F->c_952 = (*(P463)rt_nil_check(F->s_292)).a;
F->t_953 = NULL;
if ((((*(P463)rt_nil_check(F->c_952)).kind == ((rt_int)7LL)) || ((*(P463)rt_nil_check(F->c_952)).kind == ((rt_int)12LL)))) {
F->x_954 = NULL;
F->x_954 = f_nn_48(((rt_int)10LL), (*(P463)rt_nil_check(F->c_952)).line);
(*(P463)rt_nil_check(F->x_954)).a = F->c_952;
F->c_952 = F->x_954;
}
if (((*(P463)rt_nil_check(F->c_952)).kind != ((rt_int)10LL))) {
f_fail_23((*(P463)rt_nil_check(F->s_292)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_447(F->c_952, 1, &F->t_953), rt_str(";", 1)); b_; }));
ret_:
  return;
}

static void f_st_if_295(P463 s_294) {
  struct f_st_if_295fr *F = rt_alloc(sizeof *F);
F->s_294 = s_294;
F->a_955 = NULL;
F->a_955 = (*(P463)rt_nil_check(F->s_294)).a;
F->first_956 = 1;
F->t_957 = NULL;
while ((F->a_955 != NULL)) {
F->c_958 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->a_955)).a, g_ty_bool_523, &F->t_957));
f_check_type_175(F->t_957, g_ty_bool_523, (*(P463)rt_nil_check(F->s_294)).line);
if (F->first_956) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_958), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_958), rt_str(") {", 3)); b_; }));
}
F->first_956 = 0;
f_gen_body_282((*(P463)rt_nil_check(F->a_955)).b);
F->a_955 = (*(P463)rt_nil_check(F->a_955)).next;
}
if (((*(P463)rt_nil_check(F->s_294)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_294)).b);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_case_297(P463 s_296) {
  struct f_st_case_297fr *F = rt_alloc(sizeof *F);
F->s_296 = s_296;
F->st_959 = NULL;
F->vt_960 = NULL;
F->first_961 = 1;
F->a_962 = NULL;
F->a_962 = (*(P463)rt_nil_check(F->s_296)).b;
F->sel_963 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_296)).a, NULL, &F->st_959));
F->tmp_964 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_177(F->st_959)), rt_str(" ", 1)), F->tmp_964), rt_str(" = ", 3)), F->sel_963), rt_str(";", 1)); b_; }));
while ((F->a_962 != NULL)) {
F->lab_965 = NULL;
F->lab_965 = (*(P463)rt_nil_check(F->a_962)).a;
F->conds_966 = NULL;
F->conds_966 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_965 != NULL)) {
if (((*(P463)rt_nil_check(F->lab_965)).b == NULL)) {
F->v_967 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->lab_965)).a, F->st_959, &F->vt_960));
f_check_type_175(F->vt_960, F->st_959, (*(P463)rt_nil_check(F->s_296)).line);
F->conds_966 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->conds_966)), rt_str(" || ", 4)), f_eq_code_223(F->st_959, &F->tmp_964, &F->v_967)); b_; }));
} else {
F->lo_968 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->lab_965)).a, F->st_959, &F->vt_960));
F->hi_969 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->lab_965)).b, F->st_959, &F->vt_960));
F->conds_966 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->conds_966)), rt_str(" || (", 5)), F->tmp_964), rt_str(" >= ", 4)), F->lo_968), rt_str(" && ", 4)), F->tmp_964), rt_str(" <= ", 4)), F->hi_969), rt_str(")", 1)); b_; }));
}
F->lab_965 = (*(P463)rt_nil_check(F->lab_965)).next;
}
if (F->first_961) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P458)rt_nil_check(F->conds_966))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P458)rt_nil_check(F->conds_966))), rt_str(") {", 3)); b_; }));
}
F->first_961 = 0;
f_gen_body_282((*(P463)rt_nil_check(F->a_962)).b);
F->a_962 = (*(P463)rt_nil_check(F->a_962)).next;
}
if (F->first_961) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P463)rt_nil_check(F->s_296)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P463)rt_nil_check(F->s_296)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_repeat_299(P463 s_298) {
  struct f_st_repeat_299fr *F = rt_alloc(sizeof *F);
F->s_298 = s_298;
F->t_970 = NULL;
F->c_971 = NULL;
if (((*(P463)rt_nil_check(F->s_298)).flag == ((rt_int)0LL))) {
F->cond_972 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_298)).a, g_ty_bool_523, &F->t_970));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_972), rt_str(") {", 3)); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_298)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_970 = f_resolve_subtype_188((*(P463)rt_nil_check(F->s_298)).a, &F->c_971);
F->c_971 = f_base_cons_169(F->t_970, F->c_971);
if ((((*(P467)rt_nil_check(f_base_of_166(F->t_970))).kind == ((rt_int)4LL)) && ((*(P465)rt_nil_check(F->c_971)).lo == NULL))) {
F->c_971 = f_new_cons_158();
(*(P465)rt_nil_check(F->c_971)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P465)rt_nil_check(F->c_971)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check(f_base_of_166(F->t_970))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P465)rt_nil_check(F->c_971)).lo == NULL)) {
f_fail_23((*(P463)rt_nil_check(F->s_298)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_973 = rt_str_copy(f_storage_258(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_298)).name)), F->t_970));
F->lov_974 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_975 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_976 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_977 = NULL;
F->y_977 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->s_298)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_974), rt_str(" = ", 3)), (*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_971)).lo))), rt_str(", ", 2)), F->hiv_975), rt_str(" = ", 3)), (*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_971)).hi))), rt_str(";", 1)); b_; }));
if (((*(P463)rt_nil_check(F->s_298)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_976), rt_str(" = ", 3)), F->hiv_975), rt_str("; ", 2)), F->it_976), rt_str(" >= ", 4)), F->lov_974), rt_str("; ", 2)), F->it_976), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_976), rt_str(" = ", 3)), F->lov_974), rt_str("; ", 2)), F->it_976), rt_str(" <= ", 4)), F->hiv_975), rt_str("; ", 2)), F->it_976), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_973, rt_str(" = ", 3)), F->it_976), rt_str(";", 1)); b_; }));
f_open_scope_151();
(*(P473)rt_nil_check(F->y_977)).t = F->t_970;
(*(P473)rt_nil_check(F->y_977)).c = F->c_971;
f_bind_261(F->y_977, &F->access_973);
(*(P473)rt_nil_check(F->y_977)).ro_flag = 1;
f_define_145(F->y_977, (*(P463)rt_nil_check(F->s_298)).line);
f_gen_body_282((*(P463)rt_nil_check(F->s_298)).b);
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_exit_301(P463 s_300) {
  struct f_st_exit_301fr *F = rt_alloc(sizeof *F);
F->s_300 = s_300;
F->x_978 = NULL;
F->x_978 = g_exits_516;
while ((F->x_978 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P481)rt_nil_check(F->x_978)).match)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_300)).name)))) {
f_pop_frames_284((*(P481)rt_nil_check(F->x_978)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (*(P458)rt_nil_check((*(P481)rt_nil_check(F->x_978)).label))), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_978 = (*(P481)rt_nil_check(F->x_978)).next;
}
f_fail_23((*(P463)rt_nil_check(F->s_300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_300)).name))), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  return;
}

static void f_st_return_303(P463 s_302) {
  struct f_st_return_303fr *F = rt_alloc(sizeof *F);
F->s_302 = s_302;
F->vt_979 = NULL;
if ((!g_in_func_507)) {
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P467)rt_nil_check((*(P473)rt_nil_check(g_func_sym_515)).result)).kind == ((rt_int)9LL))) {
if (((*(P463)rt_nil_check(F->s_302)).a != NULL)) {
f_fail_23((*(P463)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P463)rt_nil_check(F->s_302)).a == NULL)) {
f_fail_23((*(P463)rt_nil_check(F->s_302)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_980 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_302)).a, (*(P473)rt_nil_check(g_func_sym_515)).result, &F->vt_979));
f_check_type_175(F->vt_979, (*(P473)rt_nil_check(g_func_sym_515)).result, (*(P463)rt_nil_check(F->s_302)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->v_980), rt_str(";", 1)); b_; }));
f_pop_frames_284(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  return;
}

static rstr f_exc_id_306(rstr *name_304, rt_int line_305) {
  struct f_exc_id_306fr *F = rt_alloc(sizeof *F);
F->name_304 = name_304;
F->line_305 = line_305;
F->y_981 = NULL;
F->y_981 = f_lookup_140(&(*F->name_304));
if (((F->y_981 != NULL) && ((*(P473)rt_nil_check(F->y_981)).kind == ((rt_int)7LL)))) {
F->result_ = (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_981)).cname));
goto ret_;
}
if (((((*F->name_304)).len > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_304), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_304)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_305, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_304), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_guard_308(P463 s_307) {
  struct f_st_guard_308fr *F = rt_alloc(sizeof *F);
F->s_307 = s_307;
F->h_982 = NULL;
F->h_982 = (*(P463)rt_nil_check(F->s_307)).b;
F->first_983 = 1;
F->hv_984 = NULL;
{
F->f_985 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_986 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_985), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_985), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_985), rt_str(")) {", 4)); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_307)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_985), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_985), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_986), rt_str(" = rt_xcur;", 11)); b_; }));
{ R476 *cell987 = rt_alloc(sizeof(R476));
(*cell987).s = NULL;
(*cell987).next = NULL;
F->hv_984 = cell987;
}
(*(P475)rt_nil_check(F->hv_984)).s = f_mk_3(&F->x_986);
(*(P475)rt_nil_check(F->hv_984)).next = g_handlers_518;
g_handlers_518 = F->hv_984;
while ((F->h_982 != NULL)) {
F->n_988 = NULL;
F->n_988 = (*(P463)rt_nil_check(F->h_982)).a;
F->conds_989 = NULL;
F->conds_989 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_988 != NULL)) {
F->conds_989 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->conds_989)), rt_str(" || ", 4)), F->x_986), rt_str(" == ", 4)), f_exc_id_306(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->n_988)).name)), (*(P463)rt_nil_check(F->s_307)).line)); b_; }));
F->n_988 = (*(P463)rt_nil_check(F->n_988)).next;
}
if (F->first_983) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P458)rt_nil_check(F->conds_989))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P458)rt_nil_check(F->conds_989))), rt_str(") {", 3)); b_; }));
}
F->first_983 = 0;
f_gen_body_282((*(P463)rt_nil_check(F->h_982)).b);
F->h_982 = (*(P463)rt_nil_check(F->h_982)).next;
}
if (F->first_983) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P463)rt_nil_check(F->s_307)).flag == ((rt_int)1LL))) {
f_gen_body_282((*(P463)rt_nil_check(F->s_307)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_986), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_518 = (*(P475)rt_nil_check(g_handlers_518)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static void f_st_alloc_310(P463 s_309) {
  struct f_st_alloc_310fr *F = rt_alloc(sizeof *F);
F->s_309 = s_309;
F->lv_990 = NULL;
F->t_991 = NULL;
F->target_992 = NULL;
F->vt_993 = NULL;
F->c_994 = NULL;
F->tc_995 = NULL;
F->d_997 = NULL;
F->p_998 = NULL;
F->a_999 = NULL;
f_lvalue_378((*(P463)rt_nil_check(F->s_309)).a, &F->lv_990, &F->t_991, &F->c_994, &F->ro_996);
if (((*(P467)rt_nil_check(F->t_991)).kind != ((rt_int)8LL))) {
f_fail_23((*(P463)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_249(F->t_991);
F->d_997 = (*(P467)rt_nil_check(F->t_991)).decl;
F->target_992 = (*(P467)rt_nil_check(F->t_991)).target;
if ((f_list_len_54((*(P463)rt_nil_check(F->s_309)).b) != f_list_len_54((*(P463)rt_nil_check(F->d_997)).b))) {
f_fail_23((*(P463)rt_nil_check(F->s_309)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_54((*(P463)rt_nil_check(F->d_997)).b))), rt_str(" actual parameters", 18)); b_; }));
}
{
F->tcn_1000 = rt_str_copy(f_ctype_177(F->target_992));
F->cell_1001 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1000), rt_str(" *", 2)), F->cell_1001), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1000), rt_str("));", 3)); b_; }));
f_open_scope_151();
F->p_998 = (*(P463)rt_nil_check(F->d_997)).b;
F->a_999 = (*(P463)rt_nil_check(F->s_309)).b;
while ((F->p_998 != NULL)) {
F->v_1002 = rt_str_copy(f_gexpr_399(F->a_999, g_ty_int_522, &F->vt_993));
F->pv_1003 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
F->y_1004 = NULL;
F->y_1004 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->p_998)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_int ", 7), F->pv_1003), rt_str(" = ", 3)), F->v_1002), rt_str(";", 1)); b_; }));
(*(P473)rt_nil_check(F->y_1004)).t = g_ty_int_522;
(*(P473)rt_nil_check(F->y_1004)).access = f_mk_3(&F->pv_1003);
f_define_145(F->y_1004, (*(P463)rt_nil_check(F->s_309)).line);
F->p_998 = (*(P463)rt_nil_check(F->p_998)).next;
F->a_999 = (*(P463)rt_nil_check(F->a_999)).next;
}
F->vt_993 = f_resolve_subtype_188((*(P463)rt_nil_check(F->d_997)).a, &F->tc_995);
f_init_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1001), rt_str(")", 1)); b_; }), F->target_992, F->tc_995);
f_close_scope_152();
if (((*(P463)rt_nil_check(F->s_309)).c != NULL)) {
F->v_1005 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->s_309)).c, F->target_992, &F->vt_993));
f_check_type_175(F->vt_993, F->target_992, (*(P463)rt_nil_check(F->s_309)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_216(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1001), rt_str(")", 1)); b_; }), F->target_992, &F->v_1005, F->tc_995); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->lv_990)), rt_str(" = ", 3)), F->cell_1001), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  return;
}

static rstr f_act_ref_312(P463 e_311) {
  struct f_act_ref_312fr *F = rt_alloc(sizeof *F);
F->e_311 = e_311;
F->lv_1006 = NULL;
F->t_1007 = NULL;
F->c_1008 = NULL;
if (((((*(P463)rt_nil_check(F->e_311)).kind == ((rt_int)7LL)) && rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_311)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
f_lvalue_378(F->e_311, &F->lv_1006, &F->t_1007, &F->c_1008, &F->ro_1009);
if (((*(P467)rt_nil_check(F->t_1007)).kind != ((rt_int)14LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_311)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (*(P458)rt_nil_check(F->lv_1006));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_st_create_314(P463 s_313) {
  struct f_st_create_314fr *F = rt_alloc(sizeof *F);
F->s_313 = s_313;
F->y_1010 = NULL;
F->y_1010 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_313)).name)));
F->pm_1011 = NULL;
F->a_1012 = NULL;
F->a_1012 = (*(P463)rt_nil_check(F->s_313)).b;
F->lv_1013 = NULL;
F->lt_1014 = NULL;
F->vt_1015 = NULL;
F->lc_1016 = NULL;
if (((F->y_1010 != NULL) && ((*(P473)rt_nil_check(F->y_1010)).kind == ((rt_int)10LL)))) {
F->y_1010 = f_instantiate_357(F->y_1010, (*(P463)rt_nil_check(F->s_313)).e, (*(P463)rt_nil_check(F->s_313)).b, (*(P463)rt_nil_check(F->s_313)).line);
}
if (((F->y_1010 == NULL) || ((*(P473)rt_nil_check(F->y_1010)).kind != ((rt_int)9LL)))) {
f_fail_23((*(P463)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_313)).name)), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1011 = (*(P473)rt_nil_check(F->y_1010)).params;
{
F->nf_1018 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
F->act_1019 = rt_str_copy(f_act_ref_312((*(P463)rt_nil_check(F->s_313)).a));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1010)).cname))), rt_str("fr *", 4)), F->nf_1018), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1018), rt_str(");", 2)); b_; }));
if (((*(P473)rt_nil_check(F->y_1010)).level > ((rt_int)0LL))) {
F->link_1020 = NULL;
F->link_1020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1022 = ((rt_int)1LL), hi1023 = rt_sub(g_cur_level_508, (*(P473)rt_nil_check(F->y_1010)).level);
for (rt_int it1024 = lo1022; it1024 <= hi1023; it1024++) {
F->i_1021 = it1024;
F->link_1020 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->link_1020)), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1018, rt_str("->up = ", 7)), (*(P458)rt_nil_check(F->link_1020))), rt_str(";", 1)); b_; }));
}
while (((F->a_1012 != NULL) && (F->pm_1011 != NULL))) {
if (((*(P471)rt_nil_check(F->pm_1011)).mode == ((rt_int)1LL))) {
F->v_1025 = rt_str_copy(f_gexpr_399(F->a_1012, (*(P471)rt_nil_check(F->pm_1011)).t, &F->vt_1015));
f_check_type_175(F->vt_1015, (*(P471)rt_nil_check(F->pm_1011)).t, (*(P463)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1018, rt_str("->", 2)), (*(P458)rt_nil_check((*(P471)rt_nil_check(F->pm_1011)).cfield))), rt_str(" = ", 3)), f_copy_code_219((*(P471)rt_nil_check(F->pm_1011)).t, &F->v_1025)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_378(F->a_1012, &F->lv_1013, &F->lt_1014, &F->lc_1016, &F->ro_1017);
f_check_type_175(F->lt_1014, (*(P471)rt_nil_check(F->pm_1011)).t, (*(P463)rt_nil_check(F->s_313)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1018, rt_str("->", 2)), (*(P458)rt_nil_check((*(P471)rt_nil_check(F->pm_1011)).cfield))), rt_str(" = &", 4)), (*(P458)rt_nil_check(F->lv_1013))), rt_str(";", 1)); b_; }));
}
F->a_1012 = (*(P463)rt_nil_check(F->a_1012)).next;
F->pm_1011 = (*(P471)rt_nil_check(F->pm_1011)).next;
}
if (((F->a_1012 != NULL) || (F->pm_1011 != NULL))) {
f_fail_23((*(P463)rt_nil_check(F->s_313)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->s_313)).name))); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), F->act_1019), rt_str(", &", 3)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1010)).cname))), rt_str("decl, ", 6)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1010)).cname))), rt_str(", ", 2)), F->nf_1018), rt_str("); }", 4)); b_; }));
}
ret_:
  return;
}

static rstr f_wait_alt_319(P463 inv_315, rstr *arr_316, rt_int i_317, int mixed_318) {
  struct f_wait_alt_319fr *F = rt_alloc(sizeof *F);
F->inv_315 = inv_315;
F->arr_316 = arr_316;
F->i_317 = i_317;
F->mixed_318 = mixed_318;
F->lv_1026 = NULL;
F->t_1027 = NULL;
F->vt_1028 = NULL;
F->c_1029 = NULL;
F->fn_1031 = NULL;
F->args_1032 = NULL;
F->slot_1033 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_316), rt_str("[", 1)), f_itos_7(F->i_317)), rt_str("]", 1)));
if ((((*(P463)rt_nil_check(F->inv_315)).kind != ((rt_int)10LL)) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_315)).a)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P463)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1031 = (*(P463)rt_nil_check(F->inv_315)).a;
F->args_1032 = (*(P463)rt_nil_check(F->inv_315)).b;
if ((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("SEND", 4)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("RECEIVE", 7)))) {
f_lvalue_378(F->args_1032, &F->lv_1026, &F->t_1027, &F->c_1029, &F->ro_1030);
if (((*(P467)rt_nil_check(F->t_1027)).kind != ((rt_int)12LL))) {
f_fail_23((*(P463)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("RECEIVE", 7))) {
F->dv_1034 = NULL;
F->dt_1035 = NULL;
f_lvalue_378((*(P463)rt_nil_check(F->args_1032)).next, &F->dv_1034, &F->dt_1035, &F->c_1029, &F->ro_1030);
f_check_type_175(F->dt_1035, (*(P467)rt_nil_check(F->t_1027)).elem, (*(P463)rt_nil_check(F->inv_315)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (*(P458)rt_nil_check(F->lv_1026))), rt_str(", &", 3)), (*(P458)rt_nil_check(F->dv_1034))), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1036 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1037 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_1032)).next, (*(P467)rt_nil_check(F->t_1027)).elem, &F->vt_1028));
f_check_type_175(F->vt_1028, (*(P467)rt_nil_check(F->t_1027)).elem, (*(P463)rt_nil_check(F->inv_315)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_177((*(P467)rt_nil_check(F->t_1027)).elem), rt_str(" ", 1)), F->tmp_1036), rt_str(" = ", 3)), F->v_1037), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (*(P458)rt_nil_check(F->lv_1026))), rt_str(", &", 3)), F->tmp_1036), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("DELAY_UNTIL", 11)))) {
F->v_1038 = rt_str_copy(f_gexpr_399(F->args_1032, g_ty_int_522, &F->vt_1028));
if ((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("DELAY", 5)) && F->mixed_318)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1038), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1038), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1038), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1033, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_312(F->args_1032)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->inv_315)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1031)).name)), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_builtin_wait_321(P463 inv_320) {
  struct f_builtin_wait_321fr *F = rt_alloc(sizeof *F);
F->inv_320 = inv_320;
F->lv_1039 = NULL;
F->t_1040 = NULL;
F->c_1041 = NULL;
F->saved_1043 = NULL;
F->saved_1043 = g_code_505;
F->ok_1044 = 0;
if ((((*(P463)rt_nil_check(F->inv_320)).kind != ((rt_int)10LL)) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).kind != ((rt_int)7LL)))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).name)), rt_str("DELAY", 5)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).name)), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).name)), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).name)), rt_str("SEND", 4))) && (!rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_320)).a)).name)), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_520 = rt_add(g_trial_520, ((rt_int)1LL));
g_code_505 = f_new_buffer_24();
{ rt_frame xf1045;
if (RT_TRY(xf1045)) {
f_lvalue_378((*(P463)rt_nil_check(F->inv_320)).b, &F->lv_1039, &F->t_1040, &F->c_1041, &F->ro_1042);
F->ok_1044 = ((*(P467)rt_nil_check(F->t_1040)).kind == ((rt_int)12LL));
RT_POP(xf1045);
} else {
RT_POP(xf1045);
int x1046 = rt_xcur;
if (0 || x1046 == ex_compile_error_1) {
F->ok_1044 = 0;
} else {
rt_raise(x1046);
}
}
}
g_trial_520 = rt_sub(g_trial_520, ((rt_int)1LL));
g_code_505 = F->saved_1043;
F->result_ = F->ok_1044;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_wait_op_326(P463 inv_322, rstr *op_323, rstr *q_324, int is_stmt_325) {
  struct f_wait_op_326fr *F = rt_alloc(sizeof *F);
F->inv_322 = inv_322;
F->op_323 = op_323;
F->q_324 = q_324;
F->is_stmt_325 = is_stmt_325;
F->x_1047 = NULL;
F->x_1047 = f_nn_48(((rt_int)10LL), (*(P463)rt_nil_check(F->inv_322)).line);
F->f_1048 = NULL;
F->f_1048 = f_nn_48(((rt_int)7LL), (*(P463)rt_nil_check(F->inv_322)).line);
F->qn_1049 = NULL;
F->qn_1049 = f_nn_48(((rt_int)7LL), (*(P463)rt_nil_check(F->inv_322)).line);
F->t_1050 = NULL;
(*(P463)rt_nil_check(F->f_1048)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_322)).a)).name)), rt_str("_", 1)), (*F->op_323)); b_; }));
(*(P463)rt_nil_check(F->qn_1049)).name = f_mk_3(&(*F->q_324));
(*(P463)rt_nil_check(F->qn_1049)).next = (*(P463)rt_nil_check(F->inv_322)).b;
(*(P463)rt_nil_check(F->x_1047)).a = F->f_1048;
(*(P463)rt_nil_check(F->x_1047)).b = F->qn_1049;
{
F->r_1051 = rt_str_copy(f_gcall_447(F->x_1047, F->is_stmt_325, &F->t_1050));
if ((!F->is_stmt_325)) {
f_check_type_175(F->t_1050, g_ty_bool_523, (*(P463)rt_nil_check(F->inv_322)).line);
}
F->result_ = F->r_1051;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_wait_331(P463 s_327, rstr *arr_328, rstr *w_329, rt_int n_330) {
  struct f_user_wait_331fr *F = rt_alloc(sizeof *F);
F->s_327 = s_327;
F->arr_328 = arr_328;
F->w_329 = w_329;
F->n_330 = n_330;
F->a_1052 = NULL;
F->a_1052 = (*(P463)rt_nil_check(F->s_327)).a;
F->i_1053 = ((rt_int)0LL);
F->tests_1054 = NULL;
F->tests_1054 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1055 = NULL;
F->revokes_1055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_151();
while ((F->a_1052 != NULL)) {
F->inv_1056 = NULL;
F->inv_1056 = (*(P463)rt_nil_check(F->a_1052)).a;
while ((F->inv_1056 != NULL)) {
if (f_builtin_wait_321(F->inv_1056)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_319(F->inv_1056, &(*F->arr_328), F->i_1053, 1); b_; }));
} else {
F->st_1057 = NULL;
F->st_1057 = f_nn_48(((rt_int)80LL), (*(P463)rt_nil_check(F->inv_1056)).line);
F->c_1058 = NULL;
F->qt_1059 = NULL;
F->qname_1060 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1061 = NULL;
F->y_1061 = f_new_sym_155(((rt_int)1LL), f_mk_3(&F->qname_1060));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_328), rt_str("[", 1)), f_itos_7(F->i_1053)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P463)rt_nil_check(F->st_1057)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->inv_1056)).a)).name)), rt_str("_ST", 3)); b_; }));
F->qt_1059 = f_resolve_subtype_188(F->st_1057, &F->c_1058);
{
F->access_1062 = rt_str_copy(f_storage_258(&F->qname_1060, F->qt_1059));
f_init_storage_204(&F->access_1062, F->qt_1059, F->c_1058);
(*(P473)rt_nil_check(F->y_1061)).t = F->qt_1059;
(*(P473)rt_nil_check(F->y_1061)).c = F->c_1058;
f_bind_261(F->y_1061, &F->access_1062);
f_define_145(F->y_1061, (*(P463)rt_nil_check(F->inv_1056)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_326(F->inv_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1060, 1), rt_str(";", 1)); b_; }));
F->tests_1054 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->tests_1054)), rt_str("if (", 4)), f_wait_op_326(F->inv_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1060, 0)), rt_str(") { ", 4)), f_wait_op_326(F->inv_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1060, 1)), rt_str("; ", 2)), (*F->w_329)), rt_str(" = ", 3)), f_itos_7(F->i_1053)), rt_str("; break; } ", 11)); b_; }));
F->revokes_1055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->revokes_1055)), f_wait_op_326(F->inv_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1060, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1053 = rt_add(F->i_1053, ((rt_int)1LL));
F->inv_1056 = (*(P463)rt_nil_check(F->inv_1056)).next;
}
F->a_1052 = (*(P463)rt_nil_check(F->a_1052)).next;
}
f_close_scope_152();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_329)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (*(P458)rt_nil_check(F->tests_1054))); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_329), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_330)), rt_str(", ", 2)), (*F->arr_328)), rt_str("); if (", 7)), (*F->w_329)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_330)), rt_str(", ", 2)), (*F->arr_328)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_329)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_329)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(*(P458)rt_nil_check(F->revokes_1055)));
ret_:
  return;
}

static void f_st_wait_333(P463 s_332) {
  struct f_st_wait_333fr *F = rt_alloc(sizeof *F);
F->s_332 = s_332;
F->a_1063 = NULL;
F->a_1063 = (*(P463)rt_nil_check(F->s_332)).a;
F->n_1064 = ((rt_int)0LL);
F->first_1065 = 1;
F->inits_1066 = NULL;
F->inits_1066 = f_new_buffer_24();
F->user_1067 = 0;
F->arr_1068 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_1069 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1063 != NULL)) {
F->inv_1070 = NULL;
F->inv_1070 = (*(P463)rt_nil_check(F->a_1063)).a;
F->n_1064 = rt_add(F->n_1064, f_list_len_54((*(P463)rt_nil_check(F->a_1063)).a));
while ((F->inv_1070 != NULL)) {
if ((!f_builtin_wait_321(F->inv_1070))) {
F->user_1067 = 1;
}
F->inv_1070 = (*(P463)rt_nil_check(F->inv_1070)).next;
}
F->a_1063 = (*(P463)rt_nil_check(F->a_1063)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_1068), rt_str("[", 1)), f_itos_7(F->n_1064)), rt_str("];", 2)); b_; }));
if (F->user_1067) {
f_user_wait_331(F->s_332, &F->arr_1068, &F->w_1069, F->n_1064);
} else {
F->a_1063 = (*(P463)rt_nil_check(F->s_332)).a;
F->n_1064 = ((rt_int)0LL);
while ((F->a_1063 != NULL)) {
F->inv_1071 = NULL;
F->inv_1071 = (*(P463)rt_nil_check(F->a_1063)).a;
while ((F->inv_1071 != NULL)) {
f_put_27(F->inits_1066, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_319(F->inv_1071, &F->arr_1068, F->n_1064, 0); b_; }));
F->n_1064 = rt_add(F->n_1064, ((rt_int)1LL));
F->inv_1071 = (*(P463)rt_nil_check(F->inv_1071)).next;
}
F->a_1063 = (*(P463)rt_nil_check(F->a_1063)).next;
}
f_splice_34(g_code_505, F->inits_1066);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_1069), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_1064)), rt_str(", ", 2)), F->arr_1068), rt_str(");", 2)); b_; }));
}
F->a_1063 = (*(P463)rt_nil_check(F->s_332)).a;
F->n_1064 = ((rt_int)0LL);
while ((F->a_1063 != NULL)) {
F->conds_1072 = NULL;
F->conds_1072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1074 = ((rt_int)1LL), hi1075 = f_list_len_54((*(P463)rt_nil_check(F->a_1063)).a);
for (rt_int it1076 = lo1074; it1076 <= hi1075; it1076++) {
F->i_1073 = it1076;
F->conds_1072 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->conds_1072)), rt_str(" || ", 4)), F->w_1069), rt_str(" == ", 4)), f_itos_7(F->n_1064)); b_; }));
F->n_1064 = rt_add(F->n_1064, ((rt_int)1LL));
}
}
if (F->first_1065) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (*(P458)rt_nil_check(F->conds_1072))), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (*(P458)rt_nil_check(F->conds_1072))), rt_str(") {", 3)); b_; }));
}
F->first_1065 = 0;
f_gen_body_282((*(P463)rt_nil_check(F->a_1063)).b);
F->a_1063 = (*(P463)rt_nil_check(F->a_1063)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P463 f_call_node_337(rstr *name_334, P463 arg_335, rt_int line_336) {
  struct f_call_node_337fr *F = rt_alloc(sizeof *F);
F->name_334 = name_334;
F->arg_335 = arg_335;
F->line_336 = line_336;
F->x_1077 = NULL;
F->x_1077 = f_nn_48(((rt_int)10LL), F->line_336);
F->f_1078 = NULL;
F->f_1078 = f_nn_48(((rt_int)7LL), F->line_336);
(*(P463)rt_nil_check(F->f_1078)).name = f_mk_3(&(*F->name_334));
(*(P463)rt_nil_check(F->x_1077)).a = F->f_1078;
(*(P463)rt_nil_check(F->x_1077)).b = f_copy_node_401(F->arg_335);
(*(P463)rt_nil_check((*(P463)rt_nil_check(F->x_1077)).b)).next = NULL;
F->result_ = F->x_1077;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_user_region_339(P463 s_338) {
  struct f_user_region_339fr *F = rt_alloc(sizeof *F);
F->s_338 = s_338;
F->t_1079 = NULL;
F->f_1080 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_1081 = rt_str_copy(f_gcall_447(f_call_node_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P463)rt_nil_check(F->s_338)).a, (*(P463)rt_nil_check(F->s_338)).line), 1, &F->t_1079));
F->unlock_1082 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_447(f_call_node_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P463)rt_nil_check(F->s_338)).a, (*(P463)rt_nil_check(F->s_338)).line), 1, &F->t_1079)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_1081), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1080), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1080), rt_str(")) {", 4)); b_; }));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1080), rt_str("); ", 3)), F->unlock_1082); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_338)).b);
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1080), rt_str("); ", 3)), F->unlock_1082); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1080), rt_str("); ", 3)), F->unlock_1082), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static void f_st_region_341(P463 s_340) {
  struct f_st_region_341fr *F = rt_alloc(sizeof *F);
F->s_340 = s_340;
F->lv_1083 = NULL;
F->t_1084 = NULL;
F->c_1085 = NULL;
F->lk_1087 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_1088 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_378((*(P463)rt_nil_check(F->s_340)).a, &F->lv_1083, &F->t_1084, &F->c_1085, &F->ro_1086);
if (((*(P467)rt_nil_check(F->t_1084)).kind != ((rt_int)13LL))) {
f_user_region_339(F->s_340);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_1087), rt_str(" = &", 4)), (*(P458)rt_nil_check(F->lv_1083))), rt_str("; rt_region_enter(", 18)), F->lk_1087), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1088), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1088), rt_str(")) {", 4)); b_; }));
f_push_cleanup_286(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1088), rt_str("); rt_region_leave(", 19)), F->lk_1087), rt_str(");", 2)); b_; }));
f_gen_body_282((*(P463)rt_nil_check(F->s_340)).b);
f_pop_cleanup_287();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1088), rt_str("); rt_region_leave(", 19)), F->lk_1087), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1088), rt_str("); rt_region_leave(", 19)), F->lk_1087), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  return;
}

static P463 f_gparam_344(P463 g_342, rstr *name_343) {
  struct f_gparam_344fr *F = rt_alloc(sizeof *F);
F->g_342 = g_342;
F->name_343 = name_343;
F->p_1089 = NULL;
F->p_1089 = (*(P463)rt_nil_check(F->g_342)).a;
while ((F->p_1089 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_1089)).name)), (*F->name_343))) {
F->result_ = F->p_1089;
goto ret_;
}
F->p_1089 = (*(P463)rt_nil_check(F->p_1089)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_bind_sym_346(P463 p_345) {
  struct f_bind_sym_346fr *F = rt_alloc(sizeof *F);
F->p_345 = p_345;
F->y_1090 = NULL;
if (((*(P463)rt_nil_check(F->p_345)).ival <= ((rt_int)2LL))) {
F->y_1090 = f_new_sym_155(((rt_int)5LL), (*(P463)rt_nil_check(F->p_345)).name);
} else {
F->y_1090 = f_new_sym_155(((rt_int)2LL), (*(P463)rt_nil_check(F->p_345)).name);
}
F->result_ = F->y_1090;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binds_349(P473 a_347, P473 b_348) {
  struct f_same_binds_349fr *F = rt_alloc(sizeof *F);
F->a_347 = a_347;
F->b_348 = b_348;
F->x_1091 = NULL;
F->x_1091 = F->a_347;
F->y_1092 = NULL;
F->y_1092 = F->b_348;
while (((F->x_1091 != NULL) && (F->y_1092 != NULL))) {
if (((!rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->x_1091)).name)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1092)).name)))) || (!f_same_binding_352(F->x_1091, F->y_1092)))) {
F->result_ = 0;
goto ret_;
}
F->x_1091 = (*(P473)rt_nil_check(F->x_1091)).mnext;
F->y_1092 = (*(P473)rt_nil_check(F->y_1092)).mnext;
}
F->result_ = ((F->x_1091 == NULL) && (F->y_1092 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_same_binding_352(P473 a_350, P473 b_351) {
  struct f_same_binding_352fr *F = rt_alloc(sizeof *F);
F->a_350 = a_350;
F->b_351 = b_351;
if (((*(P473)rt_nil_check(F->a_350)).kind == ((rt_int)5LL))) {
F->result_ = (((*(P473)rt_nil_check(F->b_351)).kind == ((rt_int)5LL)) && f_same_164((*(P473)rt_nil_check(F->a_350)).t, (*(P473)rt_nil_check(F->b_351)).t));
goto ret_;
}
if ((((*(P473)rt_nil_check(F->a_350)).kind == ((rt_int)2LL)) && (*(P473)rt_nil_check(F->a_350)).hasmv)) {
F->result_ = ((*(P473)rt_nil_check(F->b_351)).hasmv && ((*(P473)rt_nil_check(F->a_350)).mvalue == (*(P473)rt_nil_check(F->b_351)).mvalue));
goto ret_;
}
F->result_ = ((((*(P473)rt_nil_check(F->a_350)).cname != NULL) && ((*(P473)rt_nil_check(F->b_351)).cname != NULL)) && rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->a_350)).cname)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->b_351)).cname))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_instantiate_357(P473 g_353, P463 tt_354, P463 args_355, rt_int line_356) {
  struct f_instantiate_357fr *F = rt_alloc(sizeof *F);
F->g_353 = g_353;
F->tt_354 = tt_354;
F->args_355 = args_355;
F->line_356 = line_356;
F->gd_1093 = NULL;
F->gd_1093 = (*(P473)rt_nil_check(F->g_353)).decl;
F->pat_1094 = NULL;
F->pat_1094 = (*(P463)rt_nil_check(F->gd_1093)).b;
F->binds_1095 = NULL;
F->f_1096 = NULL;
F->f_1096 = (*(P463)rt_nil_check(F->pat_1094)).e;
F->a_1097 = NULL;
F->a_1097 = F->tt_354;
F->fp_1098 = NULL;
F->fp_1098 = (*(P463)rt_nil_check(F->pat_1094)).a;
F->inst_1099 = NULL;
F->at_1100 = NULL;
F->c_1101 = NULL;
F->saved_fctx_1102 = NULL;
F->saved_fctx_1102 = g_fctx_509;
F->saved_in_1103 = g_in_func_507;
F->saved_level_1104 = g_cur_level_508;
F->saved_sym_1105 = NULL;
F->saved_sym_1105 = g_func_sym_515;
F->saved_code_1106 = NULL;
F->saved_code_1106 = g_code_505;
while (((F->f_1096 != NULL) && (F->a_1097 != NULL))) {
F->p_1107 = NULL;
F->p_1107 = f_gparam_344(F->gd_1093, &(*(P458)rt_nil_check((*(P463)rt_nil_check(F->f_1096)).name)));
F->b_1108 = NULL;
if ((F->p_1107 == NULL)) {
f_fail_23(F->line_356, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->f_1096)).name)), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_1108 = f_bind_sym_346(F->p_1107);
if (((*(P463)rt_nil_check(F->p_1107)).ival <= ((rt_int)2LL))) {
if (((*(P463)rt_nil_check(F->a_1097)).kind >= ((rt_int)70LL))) {
(*(P473)rt_nil_check(F->b_1108)).t = f_resolve_subtype_188(F->a_1097, &F->c_1101);
} else {
F->st_1109 = NULL;
F->st_1109 = f_nn_48(((rt_int)80LL), F->line_356);
(*(P463)rt_nil_check(F->st_1109)).name = (*(P463)rt_nil_check(F->a_1097)).name;
(*(P473)rt_nil_check(F->b_1108)).t = f_resolve_subtype_188(F->st_1109, &F->c_1101);
}
(*(P473)rt_nil_check(F->b_1108)).c = F->c_1101;
} else if (((*(P463)rt_nil_check(F->p_1107)).ival <= ((rt_int)5LL))) {
if ((((*(P463)rt_nil_check(F->a_1097)).kind != ((rt_int)7LL)) || (f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->a_1097)).name))) == NULL))) {
f_fail_23(F->line_356, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_1107)).name))); b_; }));
}
F->b_1108 = f_copy_sym_243(f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->a_1097)).name))));
(*(P473)rt_nil_check(F->b_1108)).name = (*(P463)rt_nil_check(F->p_1107)).name;
} else {
(*(P473)rt_nil_check(F->b_1108)).t = f_resolve_subtype_188((*(P463)rt_nil_check(F->p_1107)).a, &F->c_1101);
(*(P473)rt_nil_check(F->b_1108)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399(F->a_1097, (*(P473)rt_nil_check(F->b_1108)).t, &F->at_1100); b_; }));
(*(P473)rt_nil_check(F->b_1108)).mvalue = f_manifest_207(F->a_1097, &F->ok_1110);
(*(P473)rt_nil_check(F->b_1108)).hasmv = F->ok_1110;
}
(*(P473)rt_nil_check(F->b_1108)).mnext = F->binds_1095;
F->binds_1095 = F->b_1108;
F->f_1096 = (*(P463)rt_nil_check(F->f_1096)).next;
F->a_1097 = (*(P463)rt_nil_check(F->a_1097)).next;
}
F->a_1097 = F->args_355;
while (((F->fp_1098 != NULL) && (F->a_1097 != NULL))) {
if (((((*(P463)rt_nil_check((*(P463)rt_nil_check(F->fp_1098)).a)).kind == ((rt_int)80LL)) && (f_gparam_344(F->gd_1093, &(*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->fp_1098)).a)).name))) != NULL)) && ((*(P463)rt_nil_check(f_gparam_344(F->gd_1093, &(*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->fp_1098)).a)).name))))).ival <= ((rt_int)2LL)))) {
F->known_1111 = 0;
F->q_1112 = NULL;
F->q_1112 = F->binds_1095;
while ((F->q_1112 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->q_1112)).name)), (*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->fp_1098)).a)).name)))) {
F->known_1111 = 1;
}
F->q_1112 = (*(P473)rt_nil_check(F->q_1112)).mnext;
}
if ((!F->known_1111)) {
F->b_1113 = NULL;
F->b_1113 = f_bind_sym_346(f_gparam_344(F->gd_1093, &(*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->fp_1098)).a)).name))));
F->v_1114 = rt_str_copy(f_gexpr_399(F->a_1097, NULL, &F->at_1100));
(*(P473)rt_nil_check(F->b_1113)).t = F->at_1100;
(*(P473)rt_nil_check(F->b_1113)).c = g_no_cons_533;
(*(P473)rt_nil_check(F->b_1113)).mnext = F->binds_1095;
F->binds_1095 = F->b_1113;
}
}
F->fp_1098 = (*(P463)rt_nil_check(F->fp_1098)).next;
F->a_1097 = (*(P463)rt_nil_check(F->a_1097)).next;
}
F->inst_1099 = (*(P473)rt_nil_check(F->g_353)).insts;
while ((F->inst_1099 != NULL)) {
if (f_same_binds_349((*(P473)rt_nil_check(F->inst_1099)).members, F->binds_1095)) {
F->result_ = F->inst_1099;
goto ret_;
}
F->inst_1099 = (*(P473)rt_nil_check(F->inst_1099)).insts;
}
g_fctx_509 = NULL;
g_in_func_507 = 0;
g_cur_level_508 = ((rt_int)0LL);
g_func_sym_515 = NULL;
g_code_505 = f_new_buffer_24();
f_open_scope_151();
{
F->b_1115 = NULL;
F->b_1115 = F->binds_1095;
while ((F->b_1115 != NULL)) {
f_define_145(F->b_1115, F->line_356);
F->b_1115 = (*(P473)rt_nil_check(F->b_1115)).mnext;
}
}
F->inst_1099 = f_build_subprogram_253(F->pat_1094);
(*(P473)rt_nil_check(F->inst_1099)).members = F->binds_1095;
(*(P473)rt_nil_check(F->inst_1099)).insts = (*(P473)rt_nil_check(F->g_353)).insts;
(*(P473)rt_nil_check(F->g_353)).insts = F->inst_1099;
f_define_145(F->inst_1099, F->line_356);
f_gen_subprogram_270(F->pat_1094, F->inst_1099);
f_close_scope_152();
g_fctx_509 = F->saved_fctx_1102;
g_in_func_507 = F->saved_in_1103;
g_cur_level_508 = F->saved_level_1104;
g_func_sym_515 = F->saved_sym_1105;
g_code_505 = F->saved_code_1106;
F->result_ = F->inst_1099;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_access_of_359(P473 y_358) {
  struct f_access_of_359fr *F = rt_alloc(sizeof *F);
F->y_358 = y_358;
F->p_1116 = NULL;
F->p_1116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P473)rt_nil_check(F->y_358)).level <= ((rt_int)0LL))) {
F->result_ = (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_358)).access));
goto ret_;
}
{ rt_int lo1118 = ((rt_int)1LL), hi1119 = rt_sub(g_cur_level_508, (*(P473)rt_nil_check(F->y_358)).level);
for (rt_int it1120 = lo1118; it1120 <= hi1119; it1120++) {
F->i_1117 = it1120;
F->p_1116 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->p_1116)), rt_str("->up", 4)); b_; }));
}
}
if ((*(P473)rt_nil_check(F->y_358)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (*(P458)rt_nil_check(F->p_1116))), rt_str("->", 2)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_358)).access))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->p_1116)), rt_str("->", 2)), (*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_358)).access)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_import_of_362(P463 l_360, rstr *name_361) {
  struct f_import_of_362fr *F = rt_alloc(sizeof *F);
F->l_360 = l_360;
F->name_361 = name_361;
F->p_1121 = NULL;
F->p_1121 = F->l_360;
while ((F->p_1121 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_1121)).name)), (*F->name_361))) {
F->result_ = F->p_1121;
goto ret_;
}
F->p_1121 = (*(P463)rt_nil_check(F->p_1121)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_check_import_365(P473 y_363, rt_int line_364) {
  struct f_check_import_365fr *F = rt_alloc(sizeof *F);
F->y_363 = y_363;
F->line_364 = line_364;
F->c_1122 = NULL;
F->c_1122 = g_fctx_509;
F->ro_1123 = 0;
while (((F->c_1122 != NULL) && ((*(P473)rt_nil_check(F->y_363)).depth < (*(P487)rt_nil_check(F->c_1122)).depth))) {
if ((!(*(P487)rt_nil_check(F->c_1122)).all_imp)) {
F->imp_1124 = NULL;
F->imp_1124 = f_import_of_362((*(P487)rt_nil_check(F->c_1122)).imps, &(*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_363)).name)));
if ((F->imp_1124 == NULL)) {
f_fail_23(F->line_364, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_363)).name)), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P463)rt_nil_check(F->imp_1124)).ival == ((rt_int)1LL))) {
F->ro_1123 = 1;
}
}
F->c_1122 = (*(P487)rt_nil_check(F->c_1122)).next;
}
F->result_ = F->ro_1123;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_ident_367(rstr *s_366) {
  struct f_c_ident_367fr *F = rt_alloc(sizeof *F);
F->s_366 = s_366;
if (rt_str_eq((*F->s_366), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_366), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_366));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_deref_370(rstr *base_368, P467 t_369) {
  struct f_deref_370fr *F = rt_alloc(sizeof *F);
F->base_368 = base_368;
F->t_369 = t_369;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_369)), rt_str(")rt_nil_check(", 14)), (*F->base_368)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_lvalue_372(P463 e_371) {
  struct f_is_lvalue_372fr *F = rt_alloc(sizeof *F);
F->e_371 = e_371;
if (((*(P463)rt_nil_check(F->e_371)).kind == ((rt_int)7LL))) {
F->y_1125 = NULL;
F->y_1125 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_371)).name)));
F->result_ = ((F->y_1125 != NULL) && (((*(P473)rt_nil_check(F->y_1125)).kind == ((rt_int)1LL)) || ((*(P473)rt_nil_check(F->y_1125)).kind == ((rt_int)2LL))));
goto ret_;
} else if (((*(P463)rt_nil_check(F->e_371)).kind == ((rt_int)17LL))) {
F->result_ = f_is_lvalue_372((*(P463)rt_nil_check(F->e_371)).a);
goto ret_;
} else if (((*(P463)rt_nil_check(F->e_371)).kind == ((rt_int)11LL))) {
F->result_ = ((!rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_371)).name)), rt_str("LEN", 3))) && f_is_lvalue_372((*(P463)rt_nil_check(F->e_371)).a));
goto ret_;
} else if (((*(P463)rt_nil_check(F->e_371)).kind == ((rt_int)10LL))) {
if ((((*(P463)rt_nil_check(F->e_371)).b != NULL) && ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_371)).b)).kind == ((rt_int)16LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_372((*(P463)rt_nil_check(F->e_371)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static void f_lvalue_378(P463 e_373, P458 *code_374, P467 *t_375, P465 *c_376, int *ro_377) {
  struct f_lvalue_378fr *F = rt_alloc(sizeof *F);
F->e_373 = e_373;
F->code_374 = code_374;
F->code_374v = *F->code_374;
F->t_375 = t_375;
F->t_375v = *F->t_375;
F->c_376 = c_376;
F->c_376v = *F->c_376;
F->ro_377 = ro_377;
F->ro_377v = *F->ro_377;
F->base_1126 = NULL;
F->bt_1127 = NULL;
F->bc_1128 = NULL;
if (((*(P463)rt_nil_check(F->e_373)).kind == ((rt_int)7LL))) {
F->y_1129 = NULL;
F->y_1129 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_373)).name)));
if ((F->y_1129 == NULL)) {
f_fail_23((*(P463)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_373)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P473)rt_nil_check(F->y_1129)).kind != ((rt_int)1LL)) && ((*(P473)rt_nil_check(F->y_1129)).kind != ((rt_int)2LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_373)).name)), rt_str(" is not a variable", 18)); b_; }));
}
F->code_374v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_359(F->y_1129); b_; }));
F->t_375v = (*(P473)rt_nil_check(F->y_1129)).t;
F->c_376v = (*(P473)rt_nil_check(F->y_1129)).c;
F->ro_377v = (*(P473)rt_nil_check(F->y_1129)).ro_flag;
if ((((*(P473)rt_nil_check(F->y_1129)).kind == ((rt_int)1LL)) && f_check_import_365(F->y_1129, (*(P463)rt_nil_check(F->e_373)).line))) {
F->ro_377v = 1;
}
} else if (((*(P463)rt_nil_check(F->e_373)).kind == ((rt_int)17LL))) {
f_lvalue_378((*(P463)rt_nil_check(F->e_373)).a, &F->code_374v, &F->t_375v, &F->c_376v, &F->ro_377v);
} else if ((((((*(P463)rt_nil_check(F->e_373)).kind == ((rt_int)12LL)) && ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_373)).a)).kind == ((rt_int)7LL))) && rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_373)).a)).name)), rt_str("ME", 2))) && (f_lookup_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_374v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_435((*(P463)rt_nil_check(F->e_373)).b, (*(P463)rt_nil_check(F->e_373)).line, &F->t_375v); b_; }));
F->c_376v = g_no_cons_533;
F->ro_377v = 0;
} else if (((*(P463)rt_nil_check(F->e_373)).kind == ((rt_int)11LL))) {
f_lvalue_378((*(P463)rt_nil_check(F->e_373)).a, &F->base_1126, &F->bt_1127, &F->bc_1128, &F->ro_377v);
f_select_on_386(&(*(P458)rt_nil_check(F->base_1126)), F->bt_1127, F->e_373, &F->ro_377v, &F->code_374v, &F->t_375v, &F->c_376v);
} else if (((*(P463)rt_nil_check(F->e_373)).kind == ((rt_int)10LL))) {
f_lvalue_378((*(P463)rt_nil_check(F->e_373)).a, &F->base_1126, &F->bt_1127, &F->bc_1128, &F->ro_377v);
f_index_on_395(&(*(P458)rt_nil_check(F->base_1126)), F->bt_1127, F->e_373, &F->ro_377v, 1, &F->code_374v, &F->t_375v, &F->c_376v);
} else {
f_fail_23((*(P463)rt_nil_check(F->e_373)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_374) = F->code_374v;  (*F->t_375) = F->t_375v;  (*F->c_376) = F->c_376v;  (*F->ro_377) = F->ro_377v;
  return;
}

static void f_select_on_386(rstr *base_379, P467 bt_380, P463 e_381, int *ro_382, P458 *code_383, P467 *t_384, P465 *c_385) {
  struct f_select_on_386fr *F = rt_alloc(sizeof *F);
F->base_379 = base_379;
F->bt_380 = bt_380;
F->e_381 = e_381;
F->ro_382 = ro_382;
F->code_383 = code_383;
F->code_383v = *F->code_383;
F->t_384 = t_384;
F->t_384v = *F->t_384;
F->c_385 = c_385;
F->c_385v = *F->c_385;
F->c_385v = g_no_cons_533;
if (((*(P467)rt_nil_check(F->bt_380)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_380);
(*F->ro_382) = 0;
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)), rt_str("ALL", 3))) {
F->code_383v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_370(&(*F->base_379), F->bt_380); b_; }));
F->t_384v = (*(P467)rt_nil_check(F->bt_380)).target;
goto ret_;
}
f_select_on_386(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_370(&(*F->base_379), F->bt_380); b_; }), (*(P467)rt_nil_check(F->bt_380)).target, F->e_381, &(*F->ro_382), &F->code_383v, &F->t_384v, &F->c_385v);
goto ret_;
}
if (((*(P467)rt_nil_check(F->bt_380)).kind == ((rt_int)15LL))) {
F->p_1130 = NULL;
F->p_1130 = (*(P467)rt_nil_check(F->bt_380)).tparams;
if ((!f_opened_190(F->bt_380))) {
f_fail_23((*(P463)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->bt_380)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P467)rt_nil_check(F->bt_380)).tparams == NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)), rt_str("ALL", 3))) {
F->code_383v = f_mk_3(&(*F->base_379));
F->t_384v = (*(P467)rt_nil_check(F->bt_380)).under;
goto ret_;
}
f_select_on_386(&(*F->base_379), (*(P467)rt_nil_check(F->bt_380)).under, F->e_381, &(*F->ro_382), &F->code_383v, &F->t_384v, &F->c_385v);
goto ret_;
}
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)), rt_str("ALL", 3))) {
F->code_383v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_379), rt_str(".all", 4)); b_; }));
F->t_384v = (*(P467)rt_nil_check(F->bt_380)).under;
goto ret_;
}
while ((F->p_1130 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_1130)).name)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)))) {
F->code_383v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_379), rt_str(".p_", 3)), f_lower_s_15(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->p_1130)).name)))); b_; }));
F->t_384v = g_ty_int_522;
(*F->ro_382) = 1;
goto ret_;
}
F->p_1130 = (*(P463)rt_nil_check(F->p_1130)).next;
}
f_select_on_386(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_379), rt_str(".all", 4)); b_; }), (*(P467)rt_nil_check(F->bt_380)).under, F->e_381, &(*F->ro_382), &F->code_383v, &F->t_384v, &F->c_385v);
goto ret_;
}
if (((*(P467)rt_nil_check(F->bt_380)).kind == ((rt_int)7LL))) {
F->f_1131 = NULL;
F->f_1131 = (*(P467)rt_nil_check(F->bt_380)).fields;
while ((F->f_1131 != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_1131)).name)), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)))) {
F->c_385v = (*(P469)rt_nil_check(F->f_1131)).c;
F->code_383v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_379), rt_str(".", 1)), f_field_c_17(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name)))); b_; }));
F->t_384v = (*(P469)rt_nil_check(F->f_1131)).t;
goto ret_;
}
F->f_1131 = (*(P469)rt_nil_check(F->f_1131)).next;
}
f_fail_23((*(P463)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name))); b_; }));
}
f_fail_23((*(P463)rt_nil_check(F->e_381)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_381)).name))), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_383) = F->code_383v;  (*F->t_384) = F->t_384v;  (*F->c_385) = F->c_385v;
  return;
}

static void f_index_on_395(rstr *base_387, P467 bt_388, P463 e_389, int *ro_390, int lv_391, P458 *code_392, P467 *t_393, P465 *c_394) {
  struct f_index_on_395fr *F = rt_alloc(sizeof *F);
F->base_387 = base_387;
F->bt_388 = bt_388;
F->e_389 = e_389;
F->ro_390 = ro_390;
F->lv_391 = lv_391;
F->code_392 = code_392;
F->code_392v = *F->code_392;
F->t_393 = t_393;
F->t_393v = *F->t_393;
F->c_394 = c_394;
F->c_394v = *F->c_394;
F->a_1132 = NULL;
F->a_1132 = (*(P463)rt_nil_check(F->e_389)).b;
F->it_1133 = NULL;
F->c_394v = g_no_cons_533;
if (((*(P467)rt_nil_check(F->bt_388)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_388);
(*F->ro_390) = 0;
f_index_on_395(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_370(&(*F->base_387), F->bt_388); b_; }), (*(P467)rt_nil_check(F->bt_388)).target, F->e_389, &(*F->ro_390), F->lv_391, &F->code_392v, &F->t_393v, &F->c_394v);
goto ret_;
}
if (((*(P467)rt_nil_check(F->bt_388)).kind == ((rt_int)15LL))) {
if ((!f_opened_190(F->bt_388))) {
f_fail_23((*(P463)rt_nil_check(F->e_389)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->bt_388)).name))), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P467)rt_nil_check(F->bt_388)).tparams == NULL)) {
f_index_on_395(&(*F->base_387), (*(P467)rt_nil_check(F->bt_388)).under, F->e_389, &(*F->ro_390), F->lv_391, &F->code_392v, &F->t_393v, &F->c_394v);
} else {
f_index_on_395(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_387), rt_str(".all", 4)); b_; }), (*(P467)rt_nil_check(F->bt_388)).under, F->e_389, &(*F->ro_390), F->lv_391, &F->code_392v, &F->t_393v, &F->c_394v);
}
goto ret_;
}
if ((((*(P467)rt_nil_check(F->bt_388)).kind == ((rt_int)6LL)) && ((*(P467)rt_nil_check(F->bt_388)).idx2 != NULL))) {
if ((f_list_len_54(F->a_1132) != ((rt_int)2LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_389)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("two subscripts expected", 23); b_; }));
}
{
F->i_1134 = rt_str_copy(f_gexpr_399(F->a_1132, (*(P467)rt_nil_check(F->bt_388)).idx, &F->it_1133));
F->j_1135 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->a_1132)).next, (*(P467)rt_nil_check(F->bt_388)).idx2, &F->it_1133));
F->code_392v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_387), rt_str(".p[(rt_index(", 13)), F->i_1134), rt_str(", ", 2)), (*F->base_387)), rt_str(".lo, ", 5)), (*F->base_387)), rt_str(".hi) - ", 7)), (*F->base_387)), rt_str(".lo) * (", 8)), (*F->base_387)), rt_str(".hi2 - ", 7)), (*F->base_387)), rt_str(".lo2 + 1) + rt_index(", 21)), F->j_1135), rt_str(", ", 2)), (*F->base_387)), rt_str(".lo2, ", 6)), (*F->base_387)), rt_str(".hi2) - ", 8)), (*F->base_387)), rt_str(".lo2]", 5)); b_; }));
F->t_393v = (*(P467)rt_nil_check(F->bt_388)).elem;
F->c_394v = (*(P467)rt_nil_check(F->bt_388)).elemcons;
}
goto ret_;
}
if ((f_list_len_54(F->a_1132) != ((rt_int)1LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_389)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P467)rt_nil_check(F->bt_388)).kind == ((rt_int)5LL))) {
if (((*(P463)rt_nil_check(F->a_1132)).kind == ((rt_int)16LL))) {
F->lo_1136 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->a_1132)).a, g_ty_int_522, &F->it_1133));
F->hi_1137 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->a_1132)).b, g_ty_int_522, &F->it_1133));
F->code_392v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_387)), rt_str(", ", 2)), F->lo_1136), rt_str(", ", 2)), F->hi_1137), rt_str(")", 1)); b_; }));
F->t_393v = g_ty_string_526;
(*F->ro_390) = 1;
goto ret_;
}
{
F->i_1138 = rt_str_copy(f_gexpr_399(F->a_1132, g_ty_int_522, &F->it_1133));
F->t_393v = g_ty_ascii_525;
if (F->lv_391) {
F->code_392v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_387)), rt_str(", ", 2)), F->i_1138), rt_str("))", 2)); b_; }));
} else {
F->code_392v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_387)), rt_str(", ", 2)), F->i_1138), rt_str(")", 1)); b_; }));
(*F->ro_390) = 1;
}
}
goto ret_;
}
if (((*(P467)rt_nil_check(F->bt_388)).kind == ((rt_int)6LL))) {
F->i_1139 = rt_str_copy(f_gexpr_399(F->a_1132, (*(P467)rt_nil_check(F->bt_388)).idx, &F->it_1133));
F->code_392v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->base_387), rt_str(".p[rt_index(", 12)), F->i_1139), rt_str(", ", 2)), (*F->base_387)), rt_str(".lo, ", 5)), (*F->base_387)), rt_str(".hi) - ", 7)), (*F->base_387)), rt_str(".lo]", 4)); b_; }));
F->t_393v = (*(P467)rt_nil_check(F->bt_388)).elem;
F->c_394v = (*(P467)rt_nil_check(F->bt_388)).elemcons;
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_389)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_392) = F->code_392v;  (*F->t_393) = F->t_393v;  (*F->c_394) = F->c_394v;
  return;
}

static rstr f_gexpr_399(P463 e_396, P467 want_397, P467 *t_398) {
  struct f_gexpr_399fr *F = rt_alloc(sizeof *F);
F->e_396 = e_396;
F->want_397 = want_397;
F->t_398 = t_398;
F->t_398v = *F->t_398;
F->k_1140 = (*(P463)rt_nil_check(F->e_396)).kind;
F->code_1141 = NULL;
F->c_1142 = NULL;
F->bt_1144 = NULL;
F->t_398v = g_ty_int_522;
if ((F->k_1140 == ((rt_int)1LL))) {
if (((F->want_397 != NULL) && ((*(P467)rt_nil_check(F->want_397)).kind == ((rt_int)3LL)))) {
F->t_398v = g_ty_float_524;
F->result_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name))), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_1140 == ((rt_int)2LL))) {
F->t_398v = g_ty_float_524;
F->result_ = (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name));
goto ret_;
} else if ((F->k_1140 == ((rt_int)5LL))) {
F->t_398v = g_ty_bool_523;
F->result_ = f_itos_7((*(P463)rt_nil_check(F->e_396)).ival);
goto ret_;
} else if ((F->k_1140 == ((rt_int)3LL))) {
F->t_398v = g_ty_string_526;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_405(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)))), rt_str(", ", 2)), f_itos_7(((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name))).len)), rt_str(")", 1));
goto ret_;
} else if ((F->k_1140 == ((rt_int)6LL))) {
F->t_398v = g_ty_nil_529;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_1140 == ((rt_int)4LL))) {
if (((F->want_397 != NULL) && ((*(P467)rt_nil_check(f_base_of_166(F->want_397))).kind == ((rt_int)4LL)))) {
F->t_398v = F->want_397;
} else {
F->t_398v = f_enum_type_of_408(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), (*(P463)rt_nil_check(F->e_396)).line);
}
{
F->i_1145 = f_lit_index_185((*(P467)rt_nil_check(f_base_of_166(F->t_398v))).lits, &(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)));
if ((F->i_1145 < ((rt_int)0LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_396)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("'", 1), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name))), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_1145);
goto ret_;
}
} else if ((F->k_1140 == ((rt_int)17LL))) {
F->result_ = f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, F->want_397, &F->t_398v);
goto ret_;
} else if ((F->k_1140 == ((rt_int)7LL))) {
F->y_1146 = NULL;
F->y_1146 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)));
if ((F->y_1146 == NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("ME", 2))) {
F->t_398v = g_ty_act_532;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("NIL_ACT", 7))) {
F->t_398v = g_ty_act_532;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("CRITICAL", 8)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("NONCRITICAL", 11))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SYNC_RESET", 10))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_447(f_wrap_apply_403(F->e_396), 0, &F->t_398v);
goto ret_;
}
if (((((((((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SIZELN", 6)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("EOF", 3))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SYS_IN", 6))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SYS_OUT", 7))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("TIME", 4))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("MILLISECONDS", 12))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("SECONDS", 7))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("MINUTES", 7))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_447(f_wrap_apply_403(F->e_396), 0, &F->t_398v);
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_396)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P473)rt_nil_check(F->y_1146)).kind == ((rt_int)1LL)) || ((*(P473)rt_nil_check(F->y_1146)).kind == ((rt_int)2LL)))) {
F->t_398v = (*(P473)rt_nil_check(F->y_1146)).t;
if (((*(P473)rt_nil_check(F->y_1146)).kind == ((rt_int)1LL))) {
F->ro_1147 = f_check_import_365(F->y_1146, (*(P463)rt_nil_check(F->e_396)).line);
}
F->result_ = f_access_of_359(F->y_1146);
goto ret_;
}
if (((*(P473)rt_nil_check(F->y_1146)).kind == ((rt_int)3LL))) {
F->result_ = f_gcall_447(f_wrap_apply_403(F->e_396), 0, &F->t_398v);
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_396)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_1140 == ((rt_int)8LL)) && (f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name))) != NULL)) && (f_user_op_443(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), f_copy_node_401((*(P463)rt_nil_check(F->e_396)).a)) != NULL))) {
F->call_1148 = NULL;
F->call_1148 = f_nn_48(((rt_int)10LL), (*(P463)rt_nil_check(F->e_396)).line);
F->fname_1149 = NULL;
F->fname_1149 = f_nn_48(((rt_int)7LL), (*(P463)rt_nil_check(F->e_396)).line);
(*(P463)rt_nil_check(F->fname_1149)).name = (*(P463)rt_nil_check(F->e_396)).name;
(*(P463)rt_nil_check(F->call_1148)).a = F->fname_1149;
(*(P463)rt_nil_check(F->call_1148)).b = f_copy_node_401((*(P463)rt_nil_check(F->e_396)).a);
F->result_ = f_gcall_447(F->call_1148, 0, &F->t_398v);
goto ret_;
} else if (((((F->k_1140 == ((rt_int)8LL)) && rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("NOT", 3))) && (F->want_397 != NULL)) && ((*(P467)rt_nil_check(F->want_397)).kind == ((rt_int)16LL)))) {
F->a_1150 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, F->want_397, &F->t_398v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_not(", 11), F->a_1150), rt_str(", 0, ", 5)), f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check((*(P467)rt_nil_check(F->want_397)).elem)).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_1140 == ((rt_int)8LL))) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("NOT", 3))) {
F->a_1151 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, g_ty_bool_523, &F->t_398v));
f_check_type_175(F->t_398v, g_ty_bool_523, (*(P463)rt_nil_check(F->e_396)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_1151), rt_str(")", 1));
goto ret_;
}
{
F->a_1152 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, F->want_397, &F->t_398v));
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("+", 1))) {
F->result_ = F->a_1152;
goto ret_;
} else if (((*(P467)rt_nil_check(F->t_398v)).kind == ((rt_int)3LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_1152), rt_str(")", 1));
goto ret_;
}
f_check_type_175(F->t_398v, g_ty_int_522, (*(P463)rt_nil_check(F->e_396)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_1152), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_1140 == ((rt_int)9LL))) {
F->result_ = f_gbinop_415(F->e_396, F->want_397, &F->t_398v);
goto ret_;
} else if ((F->k_1140 == ((rt_int)10LL))) {
if ((((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_396)).a)).kind == ((rt_int)7LL)) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_396)).a)).kind == ((rt_int)12LL)))) {
F->nm_1153 = NULL;
F->nm_1153 = (*(P463)rt_nil_check(F->e_396)).a;
F->y_1154 = NULL;
if (((*(P463)rt_nil_check(F->nm_1153)).kind == ((rt_int)12LL))) {
F->nm_1153 = (*(P463)rt_nil_check(F->nm_1153)).a;
}
F->y_1154 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->nm_1153)).name)));
if (((((F->y_1154 == NULL) || ((*(P473)rt_nil_check(F->y_1154)).kind == ((rt_int)3LL))) || ((*(P473)rt_nil_check(F->y_1154)).kind == ((rt_int)4LL))) || ((*(P473)rt_nil_check(F->y_1154)).kind == ((rt_int)10LL)))) {
F->result_ = f_gcall_447(F->e_396, 0, &F->t_398v);
goto ret_;
}
}
{
F->base_1155 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, NULL, &F->bt_1144));
F->ro_1143 = 1;
f_index_on_395(&F->base_1155, F->bt_1144, F->e_396, &F->ro_1143, 0, &F->code_1141, &F->t_398v, &F->c_1142);
F->result_ = (*(P458)rt_nil_check(F->code_1141));
goto ret_;
}
} else if ((F->k_1140 == ((rt_int)11LL))) {
if (((rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("LEN", 3)) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("MIN", 3))) || rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_396)).name)), rt_str("MAX", 3)))) {
F->result_ = f_attribute_411(F->e_396, &F->t_398v);
goto ret_;
}
{
F->base_1156 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_396)).a, NULL, &F->bt_1144));
F->ro_1143 = 1;
f_select_on_386(&F->base_1156, F->bt_1144, F->e_396, &F->ro_1143, &F->code_1141, &F->t_398v, &F->c_1142);
F->result_ = (*(P458)rt_nil_check(F->code_1141));
goto ret_;
}
} else if ((F->k_1140 == ((rt_int)12LL))) {
F->result_ = f_gcall_447(f_wrap_apply_403(F->e_396), 0, &F->t_398v);
goto ret_;
} else if ((F->k_1140 == ((rt_int)14LL))) {
F->result_ = f_constructor_419(F->e_396, F->want_397, &F->t_398v);
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_396)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_398) = F->t_398v;
  return F->result_;
}

static P463 f_copy_node_401(P463 e_400) {
  struct f_copy_node_401fr *F = rt_alloc(sizeof *F);
F->e_400 = e_400;
F->x_1157 = NULL;
{ R464 *cell1158 = rt_alloc(sizeof(R464));
(*cell1158).name = NULL;
(*cell1158).tag = NULL;
(*cell1158).a = NULL;
(*cell1158).b = NULL;
(*cell1158).c = NULL;
(*cell1158).d = NULL;
(*cell1158).e = NULL;
(*cell1158).next = NULL;
F->x_1157 = cell1158;
}
(*(P463)rt_nil_check(F->x_1157)).kind = (*(P463)rt_nil_check(F->e_400)).kind;
(*(P463)rt_nil_check(F->x_1157)).line = (*(P463)rt_nil_check(F->e_400)).line;
(*(P463)rt_nil_check(F->x_1157)).ival = (*(P463)rt_nil_check(F->e_400)).ival;
(*(P463)rt_nil_check(F->x_1157)).flag = (*(P463)rt_nil_check(F->e_400)).flag;
(*(P463)rt_nil_check(F->x_1157)).name = (*(P463)rt_nil_check(F->e_400)).name;
(*(P463)rt_nil_check(F->x_1157)).tag = (*(P463)rt_nil_check(F->e_400)).tag;
(*(P463)rt_nil_check(F->x_1157)).a = (*(P463)rt_nil_check(F->e_400)).a;
(*(P463)rt_nil_check(F->x_1157)).b = (*(P463)rt_nil_check(F->e_400)).b;
(*(P463)rt_nil_check(F->x_1157)).c = (*(P463)rt_nil_check(F->e_400)).c;
(*(P463)rt_nil_check(F->x_1157)).d = (*(P463)rt_nil_check(F->e_400)).d;
F->result_ = F->x_1157;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P463 f_wrap_apply_403(P463 e_402) {
  struct f_wrap_apply_403fr *F = rt_alloc(sizeof *F);
F->e_402 = e_402;
F->x_1159 = NULL;
F->x_1159 = f_nn_48(((rt_int)10LL), (*(P463)rt_nil_check(F->e_402)).line);
(*(P463)rt_nil_check(F->x_1159)).a = F->e_402;
F->result_ = F->x_1159;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_c_string_405(rstr *s_404) {
  struct f_c_string_405fr *F = rt_alloc(sizeof *F);
F->s_404 = s_404;
F->n_1160 = ((rt_int)0LL);
{ rt_int lo1162 = ((rt_int)1LL), hi1163 = ((*F->s_404)).len;
for (rt_int it1164 = lo1162; it1164 <= hi1163; it1164++) {
F->i_1161 = it1164;
if (((rt_str_get((*F->s_404), F->i_1161) == 92) || (rt_str_get((*F->s_404), F->i_1161) == 63))) {
F->n_1160 = rt_add(F->n_1160, ((rt_int)1LL));
}
}
}
{
F->r_1165 = rt_str_new(rt_add(rt_add(((*F->s_404)).len, F->n_1160), ((rt_int)2LL)));
F->j_1166 = ((rt_int)1LL);
(*rt_str_at(&F->r_1165, ((rt_int)1LL))) = 34;
{ rt_int lo1168 = ((rt_int)1LL), hi1169 = ((*F->s_404)).len;
for (rt_int it1170 = lo1168; it1170 <= hi1169; it1170++) {
F->i_1167 = it1170;
F->j_1166 = rt_add(F->j_1166, ((rt_int)1LL));
if (((rt_str_get((*F->s_404), F->i_1167) == 92) || (rt_str_get((*F->s_404), F->i_1167) == 63))) {
(*rt_str_at(&F->r_1165, F->j_1166)) = 92;
F->j_1166 = rt_add(F->j_1166, ((rt_int)1LL));
}
(*rt_str_at(&F->r_1165, F->j_1166)) = rt_str_get((*F->s_404), F->i_1167);
}
}
(*rt_str_at(&F->r_1165, rt_add(F->j_1166, ((rt_int)1LL)))) = 34;
F->result_ = F->r_1165;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P467 f_enum_type_of_408(rstr *lit_406, rt_int line_407) {
  struct f_enum_type_of_408fr *F = rt_alloc(sizeof *F);
F->lit_406 = lit_406;
F->line_407 = line_407;
F->y_1171 = NULL;
F->y_1171 = g_scope_stack_495;
F->c_1172 = NULL;
if ((f_lit_index_185((*(P467)rt_nil_check(g_ty_ascii_525)).lits, &(*F->lit_406)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_525;
goto ret_;
}
while ((F->y_1171 != NULL)) {
if ((((((*(P473)rt_nil_check(F->y_1171)).kind == ((rt_int)6LL)) || ((*(P473)rt_nil_check(F->y_1171)).kind == ((rt_int)5LL))) && ((*(P473)rt_nil_check(F->y_1171)).st != NULL)) && ((*(P463)rt_nil_check((*(P473)rt_nil_check(F->y_1171)).st)).kind == ((rt_int)72LL)))) {
if ((f_lit_index_185((*(P463)rt_nil_check((*(P473)rt_nil_check(F->y_1171)).st)).a, &(*F->lit_406)) >= ((rt_int)0LL))) {
if (((*(P473)rt_nil_check(F->y_1171)).kind == ((rt_int)5LL))) {
F->st_1173 = NULL;
F->st_1173 = f_nn_48(((rt_int)80LL), F->line_407);
(*(P463)rt_nil_check(F->st_1173)).name = (*(P473)rt_nil_check(F->y_1171)).name;
F->result_ = f_resolve_subtype_188(F->st_1173, &F->c_1172);
goto ret_;
}
F->result_ = f_resolve_subtype_188((*(P473)rt_nil_check(F->y_1171)).st, &F->c_1172);
goto ret_;
}
}
F->y_1171 = (*(P473)rt_nil_check(F->y_1171)).stack;
}
f_fail_23(F->line_407, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("cannot tell the type of '", 25), (*F->lit_406)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_attribute_411(P463 e_409, P467 *t_410) {
  struct f_attribute_411fr *F = rt_alloc(sizeof *F);
F->e_409 = e_409;
F->t_410 = t_410;
F->t_410v = *F->t_410;
F->bt_1174 = NULL;
F->c_1175 = NULL;
F->t_410v = g_ty_int_522;
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_409)).name)), rt_str("LEN", 3))) {
F->base_1176 = NULL;
F->base_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_399((*(P463)rt_nil_check(F->e_409)).a, NULL, &F->bt_1174); b_; }));
if (((*(P467)rt_nil_check(F->bt_1174)).kind == ((rt_int)8LL))) {
f_finish_ptr_249(F->bt_1174);
F->base_1176 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_370(&(*(P458)rt_nil_check(F->base_1176)), F->bt_1174); b_; }));
F->bt_1174 = (*(P467)rt_nil_check(F->bt_1174)).target;
}
if (((*(P467)rt_nil_check(F->bt_1174)).kind != ((rt_int)5LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_409)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LEN applies to strings", 22); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*(P458)rt_nil_check(F->base_1176))), rt_str(").len", 5));
goto ret_;
}
if (((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_409)).a)).kind == ((rt_int)7LL))) {
F->y_1177 = NULL;
F->y_1177 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_409)).a)).name)));
if (((F->y_1177 != NULL) && (((*(P473)rt_nil_check(F->y_1177)).kind == ((rt_int)6LL)) || ((*(P473)rt_nil_check(F->y_1177)).kind == ((rt_int)5LL))))) {
F->st_1178 = NULL;
F->st_1178 = f_nn_48(((rt_int)80LL), (*(P463)rt_nil_check(F->e_409)).line);
(*(P463)rt_nil_check(F->st_1178)).name = (*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_409)).a)).name;
F->t_410v = f_resolve_subtype_188(F->st_1178, &F->c_1175);
if (((*(P467)rt_nil_check(F->t_410v)).kind == ((rt_int)4LL))) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_409)).name)), rt_str("MIN", 3))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
F->result_ = f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check(F->t_410v)).lits), ((rt_int)1LL)));
goto ret_;
}
if (((*(P465)rt_nil_check(F->c_1175)).lo != NULL)) {
if (rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_409)).name)), rt_str("MIN", 3))) {
F->result_ = (*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_1175)).lo));
goto ret_;
}
F->result_ = (*(P458)rt_nil_check((*(P465)rt_nil_check(F->c_1175)).hi));
goto ret_;
}
}
}
f_fail_23((*(P463)rt_nil_check(F->e_409)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("attribute ", 10), (*(P458)rt_nil_check((*(P463)rt_nil_check(F->e_409)).name))), rt_str(" is not handled yet", 19)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_410) = F->t_410v;
  return F->result_;
}

static rstr f_gbinop_415(P463 e_412, P467 want_413, P467 *t_414) {
  struct f_gbinop_415fr *F = rt_alloc(sizeof *F);
F->e_412 = e_412;
F->want_413 = want_413;
F->t_414 = t_414;
F->t_414v = *F->t_414;
F->op_1179 = NULL;
F->op_1179 = (*(P463)rt_nil_check(F->e_412)).name;
F->ta_1180 = NULL;
F->tb_1181 = NULL;
F->hint_1182 = NULL;
F->uy_1183 = NULL;
F->t_414v = g_ty_bool_523;
if ((f_lookup_140(&(*(P458)rt_nil_check(F->op_1179))) != NULL)) {
F->l_1184 = NULL;
F->r_1185 = NULL;
F->l_1184 = f_copy_node_401((*(P463)rt_nil_check(F->e_412)).a);
F->r_1185 = f_copy_node_401((*(P463)rt_nil_check(F->e_412)).b);
(*(P463)rt_nil_check(F->l_1184)).next = F->r_1185;
F->uy_1183 = f_user_op_443(&(*(P458)rt_nil_check(F->op_1179)), F->l_1184);
if ((F->uy_1183 != NULL)) {
F->call_1186 = NULL;
F->call_1186 = f_nn_48(((rt_int)10LL), (*(P463)rt_nil_check(F->e_412)).line);
F->fname_1187 = NULL;
F->fname_1187 = f_nn_48(((rt_int)7LL), (*(P463)rt_nil_check(F->e_412)).line);
(*(P463)rt_nil_check(F->fname_1187)).name = F->op_1179;
(*(P463)rt_nil_check(F->call_1186)).a = F->fname_1187;
(*(P463)rt_nil_check(F->call_1186)).b = F->l_1184;
F->result_ = f_gcall_447(F->call_1186, 0, &F->t_414v);
goto ret_;
}
}
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("IN", 2))) {
F->s_1188 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, NULL, &F->tb_1181));
if (((*(P467)rt_nil_check(F->tb_1181)).kind != ((rt_int)16LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_412)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_1189 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, (*(P467)rt_nil_check(F->tb_1181)).elem, &F->ta_1180));
f_check_type_175(F->ta_1180, (*(P467)rt_nil_check(F->tb_1181)).elem, (*(P463)rt_nil_check(F->e_412)).line);
F->t_414v = g_ty_bool_523;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_in(", 10), F->a_1189), rt_str(", ", 2)), F->s_1188), rt_str(")", 1));
goto ret_;
}
}
if (((((rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("AND", 3)) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("OR", 2))) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("XOR", 3))) && (F->want_413 != NULL)) && ((*(P467)rt_nil_check(F->want_413)).kind == ((rt_int)16LL)))) {
F->a_1190 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, F->want_413, &F->ta_1180));
F->b_1191 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, F->want_413, &F->tb_1181));
f_check_type_175(F->tb_1181, F->ta_1180, (*(P463)rt_nil_check(F->e_412)).line);
F->t_414v = F->ta_1180;
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_and(", 11), F->a_1190), rt_str(", ", 2)), F->b_1191), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_or(", 10), F->a_1190), rt_str(", ", 2)), F->b_1191), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_xor(", 11), F->a_1190), rt_str(", ", 2)), F->b_1191), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("AND", 3)) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("OR", 2))) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("XOR", 3)))) {
F->a_1192 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, g_ty_bool_523, &F->ta_1180));
F->b_1193 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, g_ty_bool_523, &F->tb_1181));
f_check_type_175(F->ta_1180, g_ty_bool_523, (*(P463)rt_nil_check(F->e_412)).line);
f_check_type_175(F->tb_1181, g_ty_bool_523, (*(P463)rt_nil_check(F->e_412)).line);
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1192), rt_str(" && ", 4)), F->b_1193), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1192), rt_str(" || ", 4)), F->b_1193), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1192), rt_str(" != ", 4)), F->b_1193), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("&", 1))) {
F->wa_1194 = NULL;
F->wb_1195 = NULL;
if (((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_412)).a)).kind == ((rt_int)4LL))) {
F->wa_1194 = g_ty_ascii_525;
}
if (((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_412)).b)).kind == ((rt_int)4LL))) {
F->wb_1195 = g_ty_ascii_525;
}
{
F->a_1196 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, F->wa_1194, &F->ta_1180));
F->b_1197 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, F->wb_1195, &F->tb_1181));
F->t_414v = g_ty_string_526;
if ((((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)5LL)) && ((*(P467)rt_nil_check(F->tb_1181)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_1196), rt_str(", ", 2)), F->b_1197), rt_str(")", 1));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)5LL)) && ((*(P467)rt_nil_check(F->tb_1181)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_1196), rt_str(", ", 2)), F->b_1197), rt_str(")", 1));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)4LL)) && ((*(P467)rt_nil_check(F->tb_1181)).kind == ((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_1196), rt_str(", ", 2)), F->b_1197), rt_str(")", 1));
goto ret_;
} else if ((((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)4LL)) && ((*(P467)rt_nil_check(F->tb_1181)).kind == ((rt_int)4LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_1196), rt_str(", ", 2)), F->b_1197), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_412)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((f_is_rel_93(&(*(P458)rt_nil_check(F->op_1179))) && (!rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("IN", 2))))) {
if (((((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_412)).a)).kind == ((rt_int)4LL)) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_412)).a)).kind == ((rt_int)6LL))) || ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->e_412)).a)).kind == ((rt_int)1LL)))) {
F->dummy_1198 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, NULL, &F->hint_1182));
}
{
F->a_1199 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, F->hint_1182, &F->ta_1180));
F->b_1200 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, F->ta_1180, &F->tb_1181));
F->ct_1201 = NULL;
F->ct_1201 = f_base_of_166(F->ta_1180);
F->t_414v = g_ty_bool_523;
if ((((*(P467)rt_nil_check(F->ta_1180)).kind != ((rt_int)11LL)) && ((*(P467)rt_nil_check(F->tb_1181)).kind != ((rt_int)11LL)))) {
f_check_type_175(F->tb_1181, F->ta_1180, (*(P463)rt_nil_check(F->e_412)).line);
}
if (((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)11LL))) {
F->ct_1201 = f_base_of_166(F->tb_1181);
}
if (((*(P467)rt_nil_check(F->ct_1201)).kind == ((rt_int)5LL))) {
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_1200), rt_str(", ", 2)), F->a_1199), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_1200), rt_str(", ", 2)), F->a_1199), rt_str(")", 1));
goto ret_;
}
if (((*(P467)rt_nil_check(F->ct_1201)).kind == ((rt_int)16LL))) {
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_eq(", 10), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_set_eq(", 12), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->a_1199), rt_str(", ", 2)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_le(", 10), F->b_1200), rt_str(", ", 2)), F->a_1199), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_412)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sets are ordered by <= and >=", 29); b_; }));
}
if (f_composite_211(F->ct_1201)) {
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("=", 1))) {
F->result_ = f_eq_code_223(F->ct_1201, &F->a_1199, &F->b_1200);
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_223(F->ct_1201, &F->a_1199, &F->b_1200)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_412)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1199), rt_str(" == ", 4)), F->b_1200), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1199), rt_str(" != ", 4)), F->b_1200), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1199), rt_str(" ", 1)), (*(P458)rt_nil_check(F->op_1179))), rt_str(" ", 1)), F->b_1200), rt_str(")", 1));
goto ret_;
}
}
{
F->a_1202 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).a, F->want_413, &F->ta_1180));
F->b_1203 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->e_412)).b, F->ta_1180, &F->tb_1181));
if ((((*(P467)rt_nil_check(F->ta_1180)).kind == ((rt_int)3LL)) || ((*(P467)rt_nil_check(F->tb_1181)).kind == ((rt_int)3LL)))) {
F->t_414v = g_ty_float_524;
if (((rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("+", 1)) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("-", 1))) || rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_1202), rt_str(" ", 1)), (*(P458)rt_nil_check(F->op_1179))), rt_str(" ", 1)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fdiv(", 8), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_fpow(", 8), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
}
}
f_check_type_175(F->ta_1180, g_ty_int_522, (*(P463)rt_nil_check(F->e_412)).line);
f_check_type_175(F->tb_1181, g_ty_int_522, (*(P463)rt_nil_check(F->e_412)).line);
F->t_414v = g_ty_int_522;
if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*(P458)rt_nil_check(F->op_1179)), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_1202), rt_str(", ", 2)), F->b_1203), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P463)rt_nil_check(F->e_412)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (*(P458)rt_nil_check(F->op_1179))), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_414) = F->t_414v;
  return F->result_;
}

static rstr f_constructor_419(P463 e_416, P467 want_417, P467 *t_418) {
  struct f_constructor_419fr *F = rt_alloc(sizeof *F);
F->e_416 = e_416;
F->want_417 = want_417;
F->t_418 = t_418;
F->t_418v = *F->t_418;
F->it_1204 = NULL;
F->it_1204 = (*(P463)rt_nil_check(F->e_416)).a;
F->f_1205 = NULL;
F->vt_1206 = NULL;
if (((F->want_417 != NULL) && ((*(P467)rt_nil_check(F->want_417)).kind == ((rt_int)16LL)))) {
F->s_1207 = NULL;
F->s_1207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_set_empty()", 14); b_; }));
F->t_418v = F->want_417;
while ((F->it_1204 != NULL)) {
F->v_1208 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->it_1204)).b, (*(P467)rt_nil_check(F->want_417)).elem, &F->vt_1206));
f_check_type_175(F->vt_1206, (*(P467)rt_nil_check(F->want_417)).elem, (*(P463)rt_nil_check(F->e_416)).line);
F->s_1207 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_add(", 11), (*(P458)rt_nil_check(F->s_1207))), rt_str(", ", 2)), F->v_1208), rt_str(")", 1)); b_; }));
F->it_1204 = (*(P463)rt_nil_check(F->it_1204)).next;
}
F->result_ = (*(P458)rt_nil_check(F->s_1207));
goto ret_;
}
if (((F->want_417 != NULL) && ((*(P467)rt_nil_check(F->want_417)).kind == ((rt_int)15LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (*(P458)rt_nil_check((*(P467)rt_nil_check(F->want_417)).name))), rt_str(" needs the underlying type", 26)); b_; }));
}
if ((((F->want_417 != NULL) && ((*(P467)rt_nil_check(F->want_417)).kind == ((rt_int)6LL))) && ((*(P467)rt_nil_check(F->want_417)).idx2 == NULL))) {
F->tmp_1209 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->ct_1210 = rt_str_copy(f_ctype_177(F->want_417));
F->et_1211 = rt_str_copy(f_ctype_177((*(P467)rt_nil_check(F->want_417)).elem));
F->parts_1212 = NULL;
F->t_418v = F->want_417;
if (((((F->it_1204 != NULL) && ((*(P463)rt_nil_check(F->it_1204)).a != NULL)) && ((*(P463)rt_nil_check((*(P463)rt_nil_check(F->it_1204)).a)).b != NULL)) && ((*(P463)rt_nil_check(F->it_1204)).next == NULL))) {
F->lo_1213 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check((*(P463)rt_nil_check(F->it_1204)).a)).a, (*(P467)rt_nil_check(F->want_417)).idx, &F->vt_1206));
F->hi_1214 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check((*(P463)rt_nil_check(F->it_1204)).a)).b, (*(P467)rt_nil_check(F->want_417)).idx, &F->vt_1206));
F->v_1215 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->it_1204)).b, (*(P467)rt_nil_check(F->want_417)).elem, &F->vt_1206));
f_check_type_175(F->vt_1206, (*(P467)rt_nil_check(F->want_417)).elem, (*(P463)rt_nil_check(F->e_416)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1210), rt_str(" ", 1)), F->tmp_1209), rt_str("; ", 2)), F->tmp_1209), rt_str(".lo = ", 6)), F->lo_1213), rt_str("; ", 2)), F->tmp_1209), rt_str(".hi = ", 6)), F->hi_1214), rt_str("; ", 2)), F->tmp_1209), rt_str(".lo2 = ", 7)), F->tmp_1209), rt_str(".hi2 = 1; ", 10)), F->tmp_1209), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1211), rt_str(") * (size_t)RT_CNT(", 19)), F->tmp_1209), rt_str(")); for (rt_int i_ = 0; i_ < RT_CNT(", 36)), F->tmp_1209), rt_str("); i_++) ", 9)), F->tmp_1209), rt_str(".p[i_] = ", 9)), f_copy_code_219((*(P467)rt_nil_check(F->want_417)).elem, &F->v_1215)), rt_str("; ", 2)), F->tmp_1209), rt_str("; })", 4));
goto ret_;
}
F->parts_1212 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1210), rt_str(" ", 1)), F->tmp_1209), rt_str("; ", 2)), F->tmp_1209), rt_str(".lo = 1; ", 9)), F->tmp_1209), rt_str(".hi = ", 6)), f_itos_7(f_list_len_54(F->it_1204))), rt_str("; ", 2)), F->tmp_1209), rt_str(".lo2 = ", 7)), F->tmp_1209), rt_str(".hi2 = 1; ", 10)), F->tmp_1209), rt_str(".p = rt_alloc(sizeof(", 21)), F->et_1211), rt_str(") * ", 4)), f_itos_7(rt_add(f_list_len_54(F->it_1204), ((rt_int)1LL)))), rt_str(");", 2)); b_; }));
{ rt_int lo1217 = ((rt_int)0LL), hi1218 = rt_sub(f_list_len_54((*(P463)rt_nil_check(F->e_416)).a), ((rt_int)1LL));
for (rt_int it1219 = lo1217; it1219 <= hi1218; it1219++) {
F->i_1216 = it1219;
if (((*(P463)rt_nil_check(F->it_1204)).a != NULL)) {
f_fail_23((*(P463)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only positional array constructors are handled", 46); b_; }));
}
{
F->v_1220 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->it_1204)).b, (*(P467)rt_nil_check(F->want_417)).elem, &F->vt_1206));
f_check_type_175(F->vt_1206, (*(P467)rt_nil_check(F->want_417)).elem, (*(P463)rt_nil_check(F->e_416)).line);
F->parts_1212 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->parts_1212)), rt_str(" ", 1)), F->tmp_1209), rt_str(".p[", 3)), f_itos_7(F->i_1216)), rt_str("] = ", 4)), f_copy_code_219((*(P467)rt_nil_check(F->want_417)).elem, &F->v_1220)), rt_str(";", 1)); b_; }));
}
F->it_1204 = (*(P463)rt_nil_check(F->it_1204)).next;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->parts_1212)), rt_str(" ", 1)), F->tmp_1209), rt_str("; })", 4));
goto ret_;
}
if (((F->want_417 == NULL) || ((*(P467)rt_nil_check(F->want_417)).kind != ((rt_int)7LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_418v = F->want_417;
F->f_1205 = (*(P467)rt_nil_check(F->want_417)).fields;
{
F->tmp_1221 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_1222 = NULL;
F->parts_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177(F->want_417)), rt_str(" ", 1)), F->tmp_1221), rt_str(";", 1)); b_; }));
if (((f_list_len_54(F->it_1204) != ((rt_int)0LL)) && (f_list_len_54(F->it_1204) != ((rt_int)0LL)))) {
while (((F->it_1204 != NULL) && (F->f_1205 != NULL))) {
if (((((*(P463)rt_nil_check(F->it_1204)).a == NULL) || ((*(P463)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->it_1204)).a)).a)).kind != ((rt_int)7LL))) || (!rt_str_eq((*(P458)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check((*(P463)rt_nil_check(F->it_1204)).a)).a)).name)), (*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_1205)).name)))))) {
f_fail_23((*(P463)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_1205)).name))), rt_str(" expected in the constructor", 28)); b_; }));
}
{
F->v_1223 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->it_1204)).b, (*(P469)rt_nil_check(F->f_1205)).t, &F->vt_1206));
f_check_type_175(F->vt_1206, (*(P469)rt_nil_check(F->f_1205)).t, (*(P463)rt_nil_check(F->e_416)).line);
F->parts_1222 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->parts_1222)), rt_str(" ", 1)), F->tmp_1221), rt_str(".", 1)), f_field_c_17(&(*(P458)rt_nil_check((*(P469)rt_nil_check(F->f_1205)).name)))), rt_str(" = ", 3)), f_copy_code_219((*(P469)rt_nil_check(F->f_1205)).t, &F->v_1223)), rt_str(";", 1)); b_; }));
}
F->it_1204 = (*(P463)rt_nil_check(F->it_1204)).next;
F->f_1205 = (*(P469)rt_nil_check(F->f_1205)).next;
}
}
if (((F->it_1204 != NULL) || (F->f_1205 != NULL))) {
f_fail_23((*(P463)rt_nil_check(F->e_416)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->parts_1222)), rt_str(" ", 1)), F->tmp_1221), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_418) = F->t_418v;
  return F->result_;
}

static int f_fits_422(P473 y_420, P463 args_421) {
  struct f_fits_422fr *F = rt_alloc(sizeof *F);
F->y_420 = y_420;
F->args_421 = args_421;
F->a_1224 = NULL;
F->a_1224 = F->args_421;
F->pm_1225 = NULL;
F->pm_1225 = (*(P473)rt_nil_check(F->y_420)).params;
F->t_1226 = NULL;
F->saved_1227 = NULL;
F->saved_1227 = g_code_505;
F->ok_1228 = 1;
F->lv_1229 = NULL;
F->lc_1230 = NULL;
g_trial_520 = rt_add(g_trial_520, ((rt_int)1LL));
g_code_505 = f_new_buffer_24();
{ rt_frame xf1232;
if (RT_TRY(xf1232)) {
while (((F->ok_1228 && (F->a_1224 != NULL)) && (F->pm_1225 != NULL))) {
if ((((*(P471)rt_nil_check(F->pm_1225)).mode == ((rt_int)2LL)) || ((*(P471)rt_nil_check(F->pm_1225)).mode == ((rt_int)3LL)))) {
f_lvalue_378(F->a_1224, &F->lv_1229, &F->t_1226, &F->lc_1230, &F->ro_1231);
} else {
F->v_1234 = rt_str_copy(f_gexpr_399(F->a_1224, (*(P471)rt_nil_check(F->pm_1225)).t, &F->t_1226));
}
if ((!(f_same_164(F->t_1226, (*(P471)rt_nil_check(F->pm_1225)).t) || (((*(P467)rt_nil_check(F->t_1226)).kind == ((rt_int)11LL)) && ((*(P467)rt_nil_check((*(P471)rt_nil_check(F->pm_1225)).t)).kind == ((rt_int)8LL)))))) {
F->ok_1228 = 0;
}
F->a_1224 = (*(P463)rt_nil_check(F->a_1224)).next;
F->pm_1225 = (*(P471)rt_nil_check(F->pm_1225)).next;
}
if (((F->a_1224 != NULL) || (F->pm_1225 != NULL))) {
F->ok_1228 = 0;
}
RT_POP(xf1232);
} else {
RT_POP(xf1232);
int x1233 = rt_xcur;
if (0 || x1233 == ex_compile_error_1) {
F->ok_1228 = 0;
} else {
rt_raise(x1233);
}
}
}
g_trial_520 = rt_sub(g_trial_520, ((rt_int)1LL));
g_code_505 = F->saved_1227;
F->result_ = F->ok_1228;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_resolve_overload_427(rstr *name_423, P463 args_424, int is_stmt_425, rt_int line_426) {
  struct f_resolve_overload_427fr *F = rt_alloc(sizeof *F);
F->name_423 = name_423;
F->args_424 = args_424;
F->is_stmt_425 = is_stmt_425;
F->line_426 = line_426;
F->y_1235 = NULL;
F->y_1235 = (*(P479)rt_nil_check(g_table_493)).p[rt_index(f_hash_138(&(*F->name_423)), (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
F->first_1236 = NULL;
F->n_1237 = ((rt_int)0LL);
while ((F->y_1235 != NULL)) {
if ((rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1235)).name)), (*F->name_423)) && (((*(P473)rt_nil_check(F->y_1235)).kind == ((rt_int)3LL)) || ((*(P473)rt_nil_check(F->y_1235)).kind == ((rt_int)4LL))))) {
F->n_1237 = rt_add(F->n_1237, ((rt_int)1LL));
if ((F->first_1236 == NULL)) {
F->first_1236 = F->y_1235;
}
if (((((*(P473)rt_nil_check(F->y_1235)).kind == ((rt_int)4LL)) == F->is_stmt_425) && f_fits_422(F->y_1235, F->args_424))) {
F->result_ = F->y_1235;
goto ret_;
}
}
F->y_1235 = (*(P473)rt_nil_check(F->y_1235)).chain;
}
if (f_is_builtin_429(&(*F->name_423))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_1237 > ((rt_int)1LL))) {
f_fail_23(F->line_426, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_423)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_1236;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_builtin_429(rstr *n_428) {
  struct f_is_builtin_429fr *F = rt_alloc(sizeof *F);
F->n_428 = n_428;
F->result_ = (((((((((((((((rt_str_eq((*F->n_428), rt_str("ABS", 3)) || rt_str_eq((*F->n_428), rt_str("POS", 3))) || rt_str_eq((*F->n_428), rt_str("SUCC", 4))) || rt_str_eq((*F->n_428), rt_str("PRED", 4))) || rt_str_eq((*F->n_428), rt_str("SQRT", 4))) || rt_str_eq((*F->n_428), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_428), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_428), rt_str("WRITE", 5))) || rt_str_eq((*F->n_428), rt_str("READLN", 6))) || rt_str_eq((*F->n_428), rt_str("SEND", 4))) || rt_str_eq((*F->n_428), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_428), rt_str("DELAY", 5))) || rt_str_eq((*F->n_428), rt_str("TIME", 4))) || rt_str_eq((*F->n_428), rt_str("CNVT", 4))) || rt_str_eq((*F->n_428), rt_str("FORMAT", 6))) || f_is_low_level_431(&(*F->n_428)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static int f_is_low_level_431(rstr *n_430) {
  struct f_is_low_level_431fr *F = rt_alloc(sizeof *F);
F->n_430 = n_430;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_430), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_430), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_430), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_430), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_430), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_430), rt_str("LOCK", 4))) || rt_str_eq((*F->n_430), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_430), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_430), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_430), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_430), rt_str("WAITING", 7))) || rt_str_eq((*F->n_430), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_430), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_430), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_430), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_430), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_430), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_430), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_430), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_me_high_435(P463 tt_432, rt_int line_433, P467 *t_434) {
  struct f_me_high_435fr *F = rt_alloc(sizeof *F);
F->tt_432 = tt_432;
F->line_433 = line_433;
F->t_434 = t_434;
F->t_434v = *F->t_434;
F->c_1238 = NULL;
if ((F->tt_432 == NULL)) {
f_fail_23(F->line_433, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_434v = f_resolve_subtype_188(F->tt_432, &F->c_1238);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_177(F->t_434v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_437(F->t_434v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_434) = F->t_434v;
  return F->result_;
}

static rstr f_type_tag_437(P467 t_436) {
  struct f_type_tag_437fr *F = rt_alloc(sizeof *F);
F->t_436 = t_436;
if (((*(P467)rt_nil_check(F->t_436)).name != NULL)) {
F->result_ = (*(P458)rt_nil_check((*(P467)rt_nil_check(F->t_436)).name));
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_lock_ref_440(P463 e_438, rstr *name_439) {
  struct f_lock_ref_440fr *F = rt_alloc(sizeof *F);
F->e_438 = e_438;
F->name_439 = name_439;
F->lv_1239 = NULL;
F->t_1240 = NULL;
F->c_1241 = NULL;
f_lvalue_378(F->e_438, &F->lv_1239, &F->t_1240, &F->c_1241, &F->ro_1242);
if (((*(P467)rt_nil_check(F->t_1240)).kind != ((rt_int)13LL))) {
f_fail_23((*(P463)rt_nil_check(F->e_438)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_439), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (*(P458)rt_nil_check(F->lv_1239)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static P473 f_user_op_443(rstr *op_441, P463 args_442) {
  struct f_user_op_443fr *F = rt_alloc(sizeof *F);
F->op_441 = op_441;
F->args_442 = args_442;
F->y_1243 = NULL;
F->y_1243 = (*(P479)rt_nil_check(g_table_493)).p[rt_index(f_hash_138(&(*F->op_441)), (*(P479)rt_nil_check(g_table_493)).lo, (*(P479)rt_nil_check(g_table_493)).hi) - (*(P479)rt_nil_check(g_table_493)).lo];
while ((F->y_1243 != NULL)) {
if (((rt_str_eq((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1243)).name)), (*F->op_441)) && ((*(P473)rt_nil_check(F->y_1243)).kind == ((rt_int)3LL))) && f_fits_422(F->y_1243, F->args_442))) {
F->result_ = F->y_1243;
goto ret_;
}
F->y_1243 = (*(P473)rt_nil_check(F->y_1243)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  return F->result_;
}

static rstr f_gcall_447(P463 e_444, int is_stmt_445, P467 *t_446) {
  struct f_gcall_447fr *F = rt_alloc(sizeof *F);
F->e_444 = e_444;
F->is_stmt_445 = is_stmt_445;
F->t_446 = t_446;
F->t_446v = *F->t_446;
F->fn_1244 = NULL;
F->fn_1244 = (*(P463)rt_nil_check(F->e_444)).a;
F->tt_1245 = NULL;
F->y_1246 = NULL;
F->args_1247 = NULL;
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_1248 = NULL;
F->a_1248 = (*(P463)rt_nil_check(F->e_444)).b;
F->pm_1249 = NULL;
F->lt_1250 = NULL;
F->vt_1251 = NULL;
F->lv_1252 = NULL;
F->lc_1253 = NULL;
if (((*(P463)rt_nil_check(F->fn_1244)).kind == ((rt_int)12LL))) {
F->tt_1245 = (*(P463)rt_nil_check(F->fn_1244)).b;
F->fn_1244 = (*(P463)rt_nil_check(F->fn_1244)).a;
}
F->y_1246 = f_lookup_140(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)));
if ((F->y_1246 == NULL)) {
F->result_ = f_builtin_454(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), F->tt_1245, (*(P463)rt_nil_check(F->e_444)).b, (*(P463)rt_nil_check(F->e_444)).line, F->is_stmt_445, &F->t_446v);
goto ret_;
}
if (((*(P473)rt_nil_check(F->y_1246)).kind == ((rt_int)10LL))) {
F->y_1246 = f_instantiate_357(F->y_1246, F->tt_1245, (*(P463)rt_nil_check(F->e_444)).b, (*(P463)rt_nil_check(F->e_444)).line);
} else if ((((*(P473)rt_nil_check(F->y_1246)).kind == ((rt_int)3LL)) || ((*(P473)rt_nil_check(F->y_1246)).kind == ((rt_int)4LL)))) {
F->y_1246 = f_resolve_overload_427(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), (*(P463)rt_nil_check(F->e_444)).b, F->is_stmt_445, (*(P463)rt_nil_check(F->e_444)).line);
if ((F->y_1246 == NULL)) {
F->result_ = f_builtin_454(&(*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), F->tt_1245, (*(P463)rt_nil_check(F->e_444)).b, (*(P463)rt_nil_check(F->e_444)).line, F->is_stmt_445, &F->t_446v);
goto ret_;
}
}
if ((((*(P473)rt_nil_check(F->y_1246)).kind != ((rt_int)3LL)) && ((*(P473)rt_nil_check(F->y_1246)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), rt_str(" cannot be invoked", 18)); b_; }));
}
if ((F->is_stmt_445 && ((*(P473)rt_nil_check(F->y_1246)).kind != ((rt_int)4LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_445) && ((*(P473)rt_nil_check(F->y_1246)).kind != ((rt_int)3LL)))) {
f_fail_23((*(P463)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_1249 = (*(P473)rt_nil_check(F->y_1246)).params;
if (((*(P473)rt_nil_check(F->y_1246)).level > ((rt_int)0LL))) {
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1256 = ((rt_int)1LL), hi1257 = rt_sub(g_cur_level_508, (*(P473)rt_nil_check(F->y_1246)).level);
for (rt_int it1258 = lo1256; it1258 <= hi1257; it1258++) {
F->i_1255 = it1258;
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_1248 != NULL) && (F->pm_1249 != NULL))) {
if ((((*(P458)rt_nil_check(F->args_1247))).len > ((rt_int)0LL))) {
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str(", ", 2)); b_; }));
}
if ((((*(P471)rt_nil_check(F->pm_1249)).mode == ((rt_int)2LL)) || ((*(P471)rt_nil_check(F->pm_1249)).mode == ((rt_int)3LL)))) {
f_lvalue_378(F->a_1248, &F->lv_1252, &F->lt_1250, &F->lc_1253, &F->ro_1254);
if (F->ro_1254) {
f_fail_23((*(P463)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check((*(P471)rt_nil_check(F->pm_1249)).name)), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_175(F->lt_1250, (*(P471)rt_nil_check(F->pm_1249)).t, (*(P463)rt_nil_check(F->e_444)).line);
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str("&", 1)), (*(P458)rt_nil_check(F->lv_1252))); b_; }));
} else if ((((*(P471)rt_nil_check(F->pm_1249)).mode == ((rt_int)4LL)) && f_is_lvalue_372(F->a_1248))) {
f_lvalue_378(F->a_1248, &F->lv_1252, &F->lt_1250, &F->lc_1253, &F->ro_1254);
f_check_type_175(F->lt_1250, (*(P471)rt_nil_check(F->pm_1249)).t, (*(P463)rt_nil_check(F->e_444)).line);
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str("&", 1)), (*(P458)rt_nil_check(F->lv_1252))); b_; }));
} else if (((*(P471)rt_nil_check(F->pm_1249)).mode == ((rt_int)4LL))) {
F->v_1259 = rt_str_copy(f_gexpr_399(F->a_1248, (*(P471)rt_nil_check(F->pm_1249)).t, &F->vt_1251));
F->ct_1260 = rt_str_copy(f_ctype_177((*(P471)rt_nil_check(F->pm_1249)).t));
f_check_type_175(F->vt_1251, (*(P471)rt_nil_check(F->pm_1249)).t, (*(P463)rt_nil_check(F->e_444)).line);
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str("({ ", 3)), F->ct_1260), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1260), rt_str(")); *b_ = ", 10)), F->v_1259), rt_str("; b_; })", 8)); b_; }));
} else {
F->v_1261 = rt_str_copy(f_gexpr_399(F->a_1248, (*(P471)rt_nil_check(F->pm_1249)).t, &F->vt_1251));
f_check_type_175(F->vt_1251, (*(P471)rt_nil_check(F->pm_1249)).t, (*(P463)rt_nil_check(F->e_444)).line);
if (((((*(P467)rt_nil_check((*(P471)rt_nil_check(F->pm_1249)).t)).kind == ((rt_int)1LL)) && ((*(P471)rt_nil_check(F->pm_1249)).c != NULL)) && (*(P465)rt_nil_check((*(P471)rt_nil_check(F->pm_1249)).c)).hasm)) {
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->args_1247)), rt_str("rt_range(", 9)), F->v_1261), rt_str(", ", 2)), f_itos_7((*(P465)rt_nil_check((*(P471)rt_nil_check(F->pm_1249)).c)).mlo)), rt_str(", ", 2)), f_itos_7((*(P465)rt_nil_check((*(P471)rt_nil_check(F->pm_1249)).c)).mhi)), rt_str(")", 1)); b_; }));
} else {
F->args_1247 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*(P458)rt_nil_check(F->args_1247)), F->v_1261); b_; }));
}
}
F->a_1248 = (*(P463)rt_nil_check(F->a_1248)).next;
F->pm_1249 = (*(P471)rt_nil_check(F->pm_1249)).next;
}
if (((F->a_1248 != NULL) || (F->pm_1249 != NULL))) {
f_fail_23((*(P463)rt_nil_check(F->e_444)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check((*(P463)rt_nil_check(F->fn_1244)).name)), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_54((*(P463)rt_nil_check(F->e_444)).b), f_list_len_54(F->a_1248)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_446v = (*(P473)rt_nil_check(F->y_1246)).result;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check((*(P473)rt_nil_check(F->y_1246)).cname)), rt_str("(", 1)), (*(P458)rt_nil_check(F->args_1247))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_446) = F->t_446v;
  return F->result_;
}

static rstr f_builtin_454(rstr *name_448, P463 tt_449, P463 args_450, rt_int line_451, int is_stmt_452, P467 *t_453) {
  struct f_builtin_454fr *F = rt_alloc(sizeof *F);
F->name_448 = name_448;
F->tt_449 = tt_449;
F->args_450 = args_450;
F->line_451 = line_451;
F->is_stmt_452 = is_stmt_452;
F->t_453 = t_453;
F->t_453v = *F->t_453;
F->at_1262 = NULL;
F->n_1263 = f_list_len_54(F->args_450);
F->t_453v = g_ty_void_527;
if (((rt_str_eq((*F->name_448), rt_str("POS", 3)) || rt_str_eq((*F->name_448), rt_str("SUCC", 4))) || rt_str_eq((*F->name_448), rt_str("PRED", 4)))) {
F->a_1264 = rt_str_copy(f_gexpr_399(F->args_450, NULL, &F->at_1262));
if (rt_str_eq((*F->name_448), rt_str("POS", 3))) {
if (((*(P467)rt_nil_check(f_base_of_166(F->at_1262))).kind != ((rt_int)4LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1264), rt_str(") + 1)", 6));
goto ret_;
}
F->t_453v = F->at_1262;
if (((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)1LL))) {
if (rt_str_eq((*F->name_448), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_1264), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_1264), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_448), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1264), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check(f_base_of_166(F->at_1262))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_1264), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_54((*(P467)rt_nil_check(f_base_of_166(F->at_1262))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_448), rt_str("SQRT", 4)) || rt_str_eq((*F->name_448), rt_str("SIN", 3))) || rt_str_eq((*F->name_448), rt_str("COS", 3))) || rt_str_eq((*F->name_448), rt_str("EXP", 3))) || rt_str_eq((*F->name_448), rt_str("LN", 2))) || rt_str_eq((*F->name_448), rt_str("FLOOR", 5)))) {
F->a_1265 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_float_524, &F->at_1262));
F->t_453v = g_ty_float_524;
if (rt_str_eq((*F->name_448), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_1265), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_448)), rt_str("(", 1)), F->a_1265), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("IFLOAT", 6))) {
F->a_1266 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, g_ty_int_522, &F->at_1262));
F->t_453v = g_ty_float_524;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_1266), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("IFIX", 4))) {
F->a_1267 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_float_524, &F->at_1262));
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_1267), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("FORMAT", 6))) {
F->a_1268 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_float_524, &F->at_1262));
F->n1_1269 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, g_ty_int_522, &F->at_1262));
F->m1_1270 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check((*(P463)rt_nil_check(F->args_450)).next)).next, g_ty_int_522, &F->at_1262));
F->t_453v = g_ty_string_526;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_format(", 10), F->a_1268), rt_str(", ", 2)), F->n1_1269), rt_str(", ", 2)), F->m1_1270), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("ABS", 3))) {
F->a_1271 = rt_str_copy(f_gexpr_399(F->args_450, NULL, &F->at_1262));
F->t_453v = F->at_1262;
if (((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)1LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_1271), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_1271), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("CNVT", 4))) {
if ((F->tt_449 == NULL)) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
{
F->a_1272 = rt_str_copy(f_gexpr_399(F->args_450, NULL, &F->at_1262));
if ((((*(P463)rt_nil_check(F->tt_449)).kind == ((rt_int)73LL)) && ((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)1LL)))) {
F->t_453v = g_ty_string_526;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_1272), rt_str(")", 1));
goto ret_;
} else if ((((*(P463)rt_nil_check(F->tt_449)).kind == ((rt_int)73LL)) && ((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)3LL)))) {
F->t_453v = g_ty_string_526;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_float(", 16), F->a_1272), rt_str(", 6)", 4));
goto ret_;
} else if ((((*(P463)rt_nil_check(F->tt_449)).kind == ((rt_int)73LL)) && ((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)2LL)))) {
F->t_453v = g_ty_string_526;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_1272), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5));
goto ret_;
} else if ((((*(P463)rt_nil_check(F->tt_449)).kind == ((rt_int)70LL)) && ((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)5LL)))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_1272), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this conversion is not handled yet", 34); b_; }));
}
} else if (rt_str_eq((*F->name_448), rt_str("WRITELN", 7))) {
if ((F->n_1263 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->last_1273 = NULL;
F->last_1273 = F->args_450;
while (((*(P463)rt_nil_check(F->last_1273)).next != NULL)) {
F->last_1273 = (*(P463)rt_nil_check(F->last_1273)).next;
}
{
F->a_1274 = rt_str_copy(f_gexpr_399(F->last_1273, g_ty_string_526, &F->at_1262));
f_check_type_175(F->at_1262, g_ty_string_526, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_1274), rt_str(")", 1));
goto ret_;
}
}
} else if (rt_str_eq((*F->name_448), rt_str("WRITE", 5))) {
F->a_1275 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, NULL, &F->at_1262));
if (((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)5LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_put(", 7), F->a_1275), rt_str(")", 1));
goto ret_;
} else if (((*(P467)rt_nil_check(F->at_1262)).kind == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putc(", 8), F->a_1275), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WRITE writes a character or a string", 36); b_; }));
} else if (rt_str_eq((*F->name_448), rt_str("READLN", 6))) {
F->lv_1276 = NULL;
F->lc_1277 = NULL;
F->last_1279 = NULL;
F->last_1279 = F->args_450;
while (((*(P463)rt_nil_check(F->last_1279)).next != NULL)) {
F->last_1279 = (*(P463)rt_nil_check(F->last_1279)).next;
}
f_lvalue_378(F->last_1279, &F->lv_1276, &F->at_1262, &F->lc_1277, &F->ro_1278);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_readln(&", 11), (*(P458)rt_nil_check(F->lv_1276))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("SIZELN", 6))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("EOF", 3))) {
F->t_453v = g_ty_bool_523;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("SYS_IN", 6)) || rt_str_eq((*F->name_448), rt_str("SYS_OUT", 7)))) {
F->t_453v = g_ty_file_528;
F->result_ = rt_str("0", 1);
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("OPEN", 4)) || rt_str_eq((*F->name_448), rt_str("CLOSE", 5)))) {
F->result_ = rt_str("(void)0", 7);
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("SEND", 4)) || rt_str_eq((*F->name_448), rt_str("RECEIVE", 7)))) {
F->lv_1280 = NULL;
F->dv_1281 = NULL;
F->lc_1282 = NULL;
F->mt_1284 = NULL;
F->dt_1285 = NULL;
f_lvalue_378(F->args_450, &F->lv_1280, &F->mt_1284, &F->lc_1282, &F->ro_1283);
if (((*(P467)rt_nil_check(F->mt_1284)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_448), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_448), rt_str("RECEIVE", 7))) {
f_lvalue_378((*(P463)rt_nil_check(F->args_450)).next, &F->dv_1281, &F->dt_1285, &F->lc_1282, &F->ro_1283);
f_check_type_175(F->dt_1285, (*(P467)rt_nil_check(F->mt_1284)).elem, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (*(P458)rt_nil_check(F->lv_1280))), rt_str(", &", 3)), (*(P458)rt_nil_check(F->dv_1281))), rt_str(")", 1));
goto ret_;
}
{
F->v_1286 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, (*(P467)rt_nil_check(F->mt_1284)).elem, &F->at_1262));
f_check_type_175(F->at_1262, (*(P467)rt_nil_check(F->mt_1284)).elem, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P467)rt_nil_check(F->mt_1284)).elem)), rt_str(" m_ = ", 6)), F->v_1286), rt_str("; rt_send(", 10)), (*(P458)rt_nil_check(F->lv_1280))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_448), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_448), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_1287 = NULL;
F->lc_1288 = NULL;
F->mt_1290 = NULL;
f_lvalue_378(F->args_450, &F->lv_1287, &F->mt_1290, &F->lc_1288, &F->ro_1289);
if (((*(P467)rt_nil_check(F->mt_1290)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_448), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_448))), rt_str("(", 1)), (*(P458)rt_nil_check(F->lv_1287))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_448), rt_str("COND_RECEIVE", 12)))) {
F->lv_1291 = NULL;
F->dv_1292 = NULL;
F->bv_1293 = NULL;
F->lc_1294 = NULL;
F->mt_1296 = NULL;
F->dt_1297 = NULL;
F->bt_1298 = NULL;
f_lvalue_378(F->args_450, &F->lv_1291, &F->mt_1296, &F->lc_1294, &F->ro_1295);
if (((*(P467)rt_nil_check(F->mt_1296)).kind != ((rt_int)12LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_448), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_378((*(P463)rt_nil_check((*(P463)rt_nil_check(F->args_450)).next)).next, &F->bv_1293, &F->bt_1298, &F->lc_1294, &F->ro_1295);
f_check_type_175(F->bt_1298, g_ty_bool_523, F->line_451);
if (rt_str_eq((*F->name_448), rt_str("COND_RECEIVE", 12))) {
f_lvalue_378((*(P463)rt_nil_check(F->args_450)).next, &F->dv_1292, &F->dt_1297, &F->lc_1294, &F->ro_1295);
f_check_type_175(F->dt_1297, (*(P467)rt_nil_check(F->mt_1296)).elem, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->bv_1293)), rt_str(" = rt_cond_receive(", 19)), (*(P458)rt_nil_check(F->lv_1291))), rt_str(", &", 3)), (*(P458)rt_nil_check(F->dv_1292))), rt_str(")", 1));
goto ret_;
}
{
F->v_1299 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, (*(P467)rt_nil_check(F->mt_1296)).elem, &F->at_1262));
f_check_type_175(F->at_1262, (*(P467)rt_nil_check(F->mt_1296)).elem, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_177((*(P467)rt_nil_check(F->mt_1296)).elem)), rt_str(" m_ = ", 6)), F->v_1299), rt_str("; ", 2)), (*(P458)rt_nil_check(F->bv_1293))), rt_str(" = rt_cond_send(", 16)), (*(P458)rt_nil_check(F->lv_1291))), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_448), rt_str("PRIORITY", 8))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("SET_PRIORITY", 12))) {
F->v_1300 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, g_ty_int_522, &F->at_1262));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_312(F->args_450)), rt_str(", ", 2)), F->v_1300), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("ACTIVE", 6))) {
F->t_453v = g_ty_bool_523;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_is_active(", 13), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("DELAY", 5))) {
F->v_1301 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_int_522, &F->at_1262));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_1301), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("DELAY_UNTIL", 11))) {
F->v_1302 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_int_522, &F->at_1262));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_1302), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("TIME", 4))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_448), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_448), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_448), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_448), rt_str("HOURS", 5)))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_448));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("HALT", 4))) {
F->a_1303 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_int_522, &F->at_1262));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_1303), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("ME", 2)) && (F->tt_449 != NULL))) {
F->result_ = f_me_high_435(F->tt_449, F->line_451, &F->t_453v);
goto ret_;
} else if ((rt_str_eq((*F->name_448), rt_str("WAITING", 7)) || rt_str_eq((*F->name_448), rt_str("SUSPENDED", 9)))) {
F->t_453v = g_ty_bool_523;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_448))), rt_str("(", 1)), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_448), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_448), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_448), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_448), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_448), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_448), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_448))), rt_str("(", 1)), f_act_ref_312(F->args_450)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("TASK_START", 10))) {
if ((F->n_1263 != ((rt_int)2LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_312(F->args_450)), rt_str(", ", 2)), f_act_ref_312((*(P463)rt_nil_check(F->args_450)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_448), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_448), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_448), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_448), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_448), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_448), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_1263 != ((rt_int)0LL))) {
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_448), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_448))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_440(F->args_450, &(*F->name_448))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_440(F->args_450, &(*F->name_448))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("COND_LOCK", 9))) {
F->bv_1304 = NULL;
F->bc_1305 = NULL;
F->bt_1307 = NULL;
F->l_1308 = rt_str_copy(f_lock_ref_440(F->args_450, &(*F->name_448)));
f_lvalue_378((*(P463)rt_nil_check(F->args_450)).next, &F->bv_1304, &F->bt_1307, &F->bc_1305, &F->ro_1306);
f_check_type_175(F->bt_1307, g_ty_bool_523, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*(P458)rt_nil_check(F->bv_1304)), rt_str(" = rt_cond_lock(", 16)), F->l_1308), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("EXCESS_LOCKS", 12))) {
F->t_453v = g_ty_int_522;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_440(F->args_450, &(*F->name_448))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("OWNER", 5))) {
F->t_453v = g_ty_act_532;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_owner(", 14), f_lock_ref_440(F->args_450, &(*F->name_448))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_448), rt_str("LOW_IO", 6))) {
F->dev_1309 = rt_str_copy(f_gexpr_399(F->args_450, g_ty_int_522, &F->at_1262));
F->cmd_1310 = rt_str_copy(f_gexpr_399((*(P463)rt_nil_check(F->args_450)).next, g_ty_int_522, &F->at_1262));
if ((F->n_1263 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_1309), rt_str(", ", 2)), F->cmd_1310), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_1311 = NULL;
F->dc_1312 = NULL;
F->dt_1314 = NULL;
f_lvalue_378((*(P463)rt_nil_check((*(P463)rt_nil_check(F->args_450)).next)).next, &F->dv_1311, &F->dt_1314, &F->dc_1312, &F->ro_1313);
f_check_type_175(F->dt_1314, g_ty_int_522, F->line_451);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_1309), rt_str(", ", 2)), F->cmd_1310), rt_str(", &", 3)), (*(P458)rt_nil_check(F->dv_1311))), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_451, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_448), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_453) = F->t_453v;
  return F->result_;
}

static void f_translate_456(P463 units_455) {
  struct f_translate_456fr *F = rt_alloc(sizeof *F);
F->units_455 = units_455;
F->u_1315 = NULL;
F->u_1315 = F->units_455;
while ((F->u_1315 != NULL)) {
if (((*(P463)rt_nil_check(F->u_1315)).next == NULL)) {
{ R484 *cell1316 = rt_alloc(sizeof(R484));
(*cell1316).d = NULL;
(*cell1316).next = NULL;
g_caps_510 = cell1316;
}
(*(P483)rt_nil_check(g_caps_510)).d = F->u_1315;
f_declare_body_235((*(P463)rt_nil_check(F->u_1315)).c);
f_body_elements_280((*(P463)rt_nil_check(F->u_1315)).c);
{
F->l_1317 = NULL;
F->l_1317 = F->units_455;
while ((F->l_1317 != F->u_1315)) {
{
F->w_1318 = rt_str_copy(f_waits_of_272(F->l_1317));
if (((F->w_1318).len > ((rt_int)0LL))) {
f_emit_29(&F->w_1318);
}
}
F->l_1317 = (*(P463)rt_nil_check(F->l_1317)).next;
}
}
} else {
f_gen_capsule_245(F->u_1315);
}
F->u_1315 = (*(P463)rt_nil_check(F->u_1315)).next;
}
ret_:
  return;
}

static void f_print_program_457(void) {
  struct f_print_program_457fr *F = rt_alloc(sizeof *F);
f_emit_helpers_231();
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_498);
f_print_buffer_31(g_out_frames_514);
f_print_buffer_31(g_out_helpers_499);
f_print_buffer_31(g_out_protos_500);
f_print_buffer_31(g_out_globals_501);
f_print_buffer_31(g_out_funcs_502);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_excs_504);
f_print_buffer_31(g_out_init_503);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  return;
}

static void as_R488(R488 *d, R488 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R488 cp_R488(R488 s) {
  R488 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R488(R488 a, R488 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_R486(R486 *d, R486 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R486 cp_R486(R486 s) {
  R486 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R486(R486 a, R486 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R484(R484 *d, R484 s) {
  d->d = s.d;
  d->next = s.next;
}
static R484 cp_R484(R484 s) {
  R484 d = s;
  d.d = s.d;
  d.next = s.next;
  return d;
}
static int eq_R484(R484 a, R484 b) {
  return 1 && (a.d == b.d) && (a.next == b.next);
}
static void as_R482(R482 *d, R482 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R482 cp_R482(R482 s) {
  R482 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R482(R482 a, R482 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_A480(A480 *d, A480 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A480 cp_A480(A480 s) {
  A480 d = s; d.p = rt_alloc(sizeof(P473) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A480(A480 a, A480 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R478(R478 *d, R478 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R478 cp_R478(R478 s) {
  R478 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R478(R478 a, R478 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R476(R476 *d, R476 s) {
  d->s = s.s;
  d->next = s.next;
}
static R476 cp_R476(R476 s) {
  R476 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R476(R476 a, R476 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R474(R474 *d, R474 s) {
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
  d->chain = s.chain;
  d->stack = s.stack;
}
static R474 cp_R474(R474 s) {
  R474 d = s;
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
  d.chain = s.chain;
  d.stack = s.stack;
  return d;
}
static int eq_R474(R474 a, R474 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.chain == b.chain) && (a.stack == b.stack);
}
static void as_R472(R472 *d, R472 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R472 cp_R472(R472 s) {
  R472 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R472(R472 a, R472 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R470(R470 *d, R470 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R470 cp_R470(R470 s) {
  R470 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R470(R470 a, R470 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R468(R468 *d, R468 s) {
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
  d->next = s.next;
}
static R468 cp_R468(R468 s) {
  R468 d = s;
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
  d.next = s.next;
  return d;
}
static int eq_R468(R468 a, R468 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.next == b.next);
}
static void as_R466(R466 *d, R466 s) {
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
static R466 cp_R466(R466 s) {
  R466 d = s;
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
static int eq_R466(R466 a, R466 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args);
}
static void as_R464(R464 *d, R464 s) {
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
static R464 cp_R464(R464 s) {
  R464 d = s;
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
static int eq_R464(R464 a, R464 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A462(A462 *d, A462 s) {
  if (d->hi - d->lo != s.hi - s.lo || d->hi2 - d->lo2 != s.hi2 - s.lo2) rt_raise_msg(RT_X_SUBTYPE, "array length");
  for (rt_int i = 0; i < RT_CNT(s); i++) { d->p[i] = s.p[i]; }
}
static A462 cp_A462(A462 s) {
  A462 d = s; d.p = rt_alloc(sizeof(P459) * (size_t)RT_CNT(s));
  for (rt_int i = 0; i < RT_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A462(A462 a, A462 b) {
  if (a.hi - a.lo != b.hi - b.lo || a.hi2 - a.lo2 != b.hi2 - b.lo2) return 0;
  for (rt_int i = 0; i < RT_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R460(R460 *d, R460 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
}
static R460 cp_R460(R460 s) {
  R460 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  return d;
}
static int eq_R460(R460 a, R460 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_489 = NULL;
g_ntoks_490 = ((rt_int)0LL);
g_tpos_491 = ((rt_int)1LL);
g_src_line_492 = ((rt_int)0LL);
g_table_493 = NULL;
g_depth_494 = ((rt_int)0LL);
g_scope_stack_495 = NULL;
g_all_types_496 = NULL;
g_serial_497 = ((rt_int)0LL);
g_out_types_498 = NULL;
g_out_helpers_499 = NULL;
g_out_protos_500 = NULL;
g_out_globals_501 = NULL;
g_out_funcs_502 = NULL;
g_out_init_503 = NULL;
g_out_excs_504 = NULL;
g_code_505 = NULL;
g_fields_buf_506 = NULL;
g_in_func_507 = 0;
g_cur_level_508 = ((rt_int)0LL);
g_fctx_509 = NULL;
g_caps_510 = NULL;
g_cap_waits_511 = NULL;
g_psub_512 = NULL;
g_st_field_513 = NULL;
g_out_frames_514 = NULL;
g_func_sym_515 = NULL;
g_exits_516 = NULL;
g_frames_517 = ((rt_int)0LL);
g_handlers_518 = NULL;
g_cleanups_519 = NULL;
g_trial_520 = ((rt_int)0LL);
g_mcopies_521 = NULL;
g_ty_int_522 = NULL;
g_ty_bool_523 = NULL;
g_ty_float_524 = NULL;
g_ty_ascii_525 = NULL;
g_ty_string_526 = NULL;
g_ty_void_527 = NULL;
g_ty_file_528 = NULL;
g_ty_nil_529 = NULL;
g_ty_lock_530 = NULL;
g_ty_latch_531 = NULL;
g_ty_act_532 = NULL;
g_no_cons_533 = NULL;
{ A462 *cell1319 = rt_alloc(sizeof(A462));
rt_int pv1320 = ((rt_int)1000000LL);
(*cell1319).lo = ((rt_int)1LL); (*cell1319).hi = pv1320; (*cell1319).lo2 = 1; (*cell1319).hi2 = 1;
(*cell1319).p = rt_alloc(sizeof(P459) * (size_t)RT_CNT((*cell1319)));
for (rt_int i1321 = 0; i1321 < RT_CNT((*cell1319)); i1321++) {
(*cell1319).p[i1321] = NULL;
}
g_toks_489 = cell1319;
}
{ A480 *cell1322 = rt_alloc(sizeof(A480));
rt_int pv1323 = ((rt_int)4093LL);
(*cell1322).lo = ((rt_int)0LL); (*cell1322).hi = pv1323; (*cell1322).lo2 = 1; (*cell1322).hi2 = 1;
(*cell1322).p = rt_alloc(sizeof(P473) * (size_t)RT_CNT((*cell1322)));
for (rt_int i1324 = 0; i1324 < RT_CNT((*cell1322)); i1324++) {
(*cell1322).p[i1324] = NULL;
}
g_table_493 = cell1322;
}
g_out_types_498 = f_new_buffer_24();
g_out_helpers_499 = f_new_buffer_24();
g_out_protos_500 = f_new_buffer_24();
g_out_globals_501 = f_new_buffer_24();
g_out_funcs_502 = f_new_buffer_24();
g_out_init_503 = f_new_buffer_24();
g_out_excs_504 = f_new_buffer_24();
g_out_frames_514 = f_new_buffer_24();
g_code_505 = g_out_init_503;
g_no_cons_533 = f_new_cons_158();
g_ty_int_522 = f_new_typ_157(((rt_int)1LL));
g_ty_bool_523 = f_new_typ_157(((rt_int)2LL));
g_ty_float_524 = f_new_typ_157(((rt_int)3LL));
g_ty_string_526 = f_new_typ_157(((rt_int)5LL));
g_ty_void_527 = f_new_typ_157(((rt_int)9LL));
g_ty_file_528 = f_new_typ_157(((rt_int)10LL));
g_ty_nil_529 = f_new_typ_157(((rt_int)11LL));
g_ty_lock_530 = f_new_typ_157(((rt_int)13LL));
g_ty_latch_531 = f_new_typ_157(((rt_int)13LL));
g_ty_act_532 = f_new_typ_157(((rt_int)14LL));
{ rt_frame xf1325;
if (RT_TRY(xf1325)) {
f_init_ascii_182();
f_read_source_45();
f_translate_456(f_program_136());
f_print_program_457();
RT_POP(xf1325);
} else {
RT_POP(xf1325);
int x1326 = rt_xcur;
if (0 || x1326 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x1326);
}
}
}
  rt_main_done();
  return 0;
}
