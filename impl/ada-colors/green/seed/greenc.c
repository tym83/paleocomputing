#include "paleo.h"
#include <math.h>
typedef struct R110 R110;
typedef struct R110 *P109;
typedef struct A108 A108;
struct A108 { rt_int lo, hi, lo2, hi2; P109 *p; };
typedef struct R117 R117;
typedef struct R117 *P116;
typedef struct A115 A115;
struct A115 { rt_int lo, hi, lo2, hi2; P116 *p; };
typedef struct R122 R122;
typedef struct R122 *P121;
typedef struct R126 R126;
typedef struct R126 *P125;
typedef rt_gstr *P139;
typedef struct R143 R143;
typedef struct R143 *P142;
typedef struct R146 R146;
typedef struct R146 *P145;
typedef struct R151 R151;
typedef struct R151 *P150;
typedef struct R174 R174;
typedef struct R174 *P173;
typedef struct R178 R178;
typedef struct R178 *P177;
typedef struct A182 A182;
struct A182 { rt_int lo, hi, lo2, hi2; P139 *p; };
typedef struct A184 A184;
struct A184 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct R189 R189;
typedef struct R189 *P188;
struct R126 { int dummy_; P150 head_; P150 tail_; };
struct R151 { int dummy_; P139 s_; P150 next_; };
struct R110 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P139 s_; };
struct R174 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P139 name_; P139 tag_; P173 a_; P173 b_; P173 c_; P173 d_; P173 e_; P173 next_; P139 formal_; };
typedef struct R1762 R1762;
typedef struct R1762 *P1761;
struct R117 { int dummy_; rt_int kind_; P139 name_; P121 t_; P177 c_; P139 access_path_; P139 cname_; int ro_; rt_int mvalue_; int hasmv_; P173 decl_; P1761 params_; P121 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P116 members_; P116 mnext_; P116 chain_; P116 stack_; rt_int flags_; };
typedef struct R1780 R1780;
typedef struct R1780 *P1779;
struct R122 { int dummy_; rt_int kind_; P139 name_; P173 lits_; P121 elem_; P121 idx_; P177 elemcons_; P177 tcons_; P1779 fields_; P121 target_; P173 decl_; P139 cname_; int forward_; int defined_; int priv_; P121 next_; P121 idx2_; P139 littab_; P121 parent_; rt_int ndigits_; P139 fdelta_; P139 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1784 R1784;
typedef struct R1784 *P1783;
struct R178 { int dummy_; P139 lo_; P139 hi_; P139 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P139 lo2_; P139 hi2_; P139 acc_; P177 inner_; P1783 dv_; };
struct R1784 { int dummy_; P139 name_; P139 v_; P1783 next_; };
struct R1762 { int dummy_; P139 name_; rt_int mode_; P121 t_; P177 c_; P139 cfield_; P173 dflt_; P1761 next_; P116 dsym_; };
typedef struct R1905 R1905;
typedef struct R1905 *P1904;
struct R1905 { int dummy_; P139 disc_; P173 arm_; P173 variant_; P1904 next_; };
struct R1780 { int dummy_; P139 name_; P121 t_; P177 c_; P1779 next_; P173 dflt_; int is_const_; int is_discr_; P116 dsym_; P1904 guard_; P139 cond_; int dyn_; };
struct R189 { int dummy_; P139 name_; P139 cname_; P139 path_; rt_int frames_; rt_int line_; P188 next_; };
typedef struct A2159 A2159;
struct A2159 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R143 { int dummy_; P139 match_; P139 label_; rt_int depth_; int is_loop_; P142 next_; };
typedef struct A2484 A2484;
struct A2484 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2489 A2489;
struct A2489 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2492 A2492;
struct A2492 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R146 { int dummy_; P173 body_node_; P116 visible_; P145 next_; };
struct f_mk_221fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_220;
 P139 result_;
 rt_gstr r_1251;
};
struct f_new_name_224fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_222;
 P139 *res_223;
};
struct f_is_letter_226fr { int dummy;
 struct f_greenc_1fr *up;
 int c_225;
 int result_;
};
struct f_is_digit_228fr { int dummy;
 struct f_greenc_1fr *up;
 int c_227;
 int result_;
};
struct f_upper_230fr { int dummy;
 struct f_greenc_1fr *up;
 int c_229;
 int result_;
};
struct f_lower_s_232fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_231;
 rt_gstr result_;
 rt_gstr r_1255;
 rt_int i_1258;
};
struct f_upper_s_234fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_233;
 rt_gstr result_;
 rt_gstr r_1266;
 rt_int i_1269;
};
struct f_is_operator_236fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_235;
 int result_;
};
struct f_c_field_238fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_237;
 rt_gstr result_;
};
struct f_q_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_242fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_240;
 rt_gstr msg_241;
};
struct f_new_buffer_243fr { int dummy;
 struct f_greenc_1fr *up;
 P125 result_;
};
struct f_put_to_246fr { int dummy;
 struct f_greenc_1fr *up;
 P125 b_244;
 rt_gstr s_245;
 P150 l_1278;
};
struct f_emit_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_247;
};
struct f_print_buffer_250fr { int dummy;
 struct f_greenc_1fr *up;
 P125 b_249;
 P150 l_1281;
};
struct f_splice_253fr { int dummy;
 struct f_greenc_1fr *up;
 P125 a_251;
 P125 b_252;
};
struct f_is_reserved_255fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_254;
 int result_;
};
struct f_add_token_259fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_256;
 rt_gstr s_257;
 rt_int ival_258;
};
struct f_digit_value_261fr { int dummy;
 struct f_greenc_1fr *up;
 int c_260;
 rt_int result_;
};
struct f_digit_in_264fr { int dummy;
 struct f_greenc_1fr *up;
 int c_262;
 rt_int base_263;
 rt_int result_;
 rt_int d_1289;
};
struct f_accumulate_268fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_265;
 rt_int base_266;
 rt_int d_267;
};
struct f_lex_line_270fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_269;
 rt_int i_1290;
 rt_int j_1291;
 rt_int n_1292;
 int c_1294;
 int quote_1295;
 rt_int v_1296;
 rt_int d_1297;
 rt_gstr buf_1298;
 rt_int bl_1300;
 rt_int base_1342;
 rt_gstr two_1386;
};
struct f_exponent_ahead_273fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_271;
 rt_int j_272;
 int result_;
};
struct f_exponent_278fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_274;
 rt_int *j_275;
 rt_gstr *buf_276;
 rt_int *bl_277;
};
struct f_include_open_281fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_279;
 rt_int *length_280;
};
struct f_include_char_284fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_282;
 int *c_283;
};
struct f_check_include_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1433;
};
struct f_include_text_287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_286;
 rt_gstr t_1444;
 rt_int saved_line_1446;
 rt_int from_1447;
 rt_int k_1449;
 rt_int k_1456;
};
struct f_include_line_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_288;
 rt_int from_289;
 rt_int to_290;
 rt_gstr l_1461;
 rt_int k_1464;
};
struct f_read_source_292fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1472;
 rt_int bl_1474;
 int c_1475;
};
struct f_nn_295fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_293;
 rt_int line_294;
 P173 result_;
};
struct f_append_299fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *head_296;
 P173 *tail_297;
 P173 x_298;
};
struct f_list_len_301fr { int dummy;
 struct f_greenc_1fr *up;
 P173 l_300;
 rt_int result_;
 rt_int n_1485;
 P173 p_1486;
};
struct f_cur_line_302fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_304fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_303;
 int result_;
};
struct f_at_op_306fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_305;
 int result_;
};
struct f_at_kind_308fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_307;
 int result_;
};
struct f_kind_at_310fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_309;
 rt_int result_;
};
struct f_text_at_312fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_311;
 rt_gstr result_;
};
struct f_perror_314fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_313;
};
struct f_skip_315fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_317fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_316;
};
struct f_expect_op_319fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_318;
};
struct f_expect_id_321fr { int dummy;
 struct f_greenc_1fr *up;
 P139 *res_320;
};
struct f_name_node_323fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_322;
 P173 x_1501;
};
struct f_id_list_325fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_324;
 P173 head_1502;
 P173 tail_1503;
 P173 x_1504;
};
struct f_binop_330fr { int dummy;
 struct f_greenc_1fr *up;
 P139 op_326;
 P173 l_327;
 P173 r_328;
 rt_int line_329;
 P173 result_;
 P173 x_1506;
};
struct f_expr_332fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_331;
 P173 l_1507;
 P173 r_1508;
 P139 op_1509;
 P139 first_op_1510;
 rt_int line_1511;
 int short_1512;
 int first_short_1513;
};
struct f_is_rel_334fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_333;
 int result_;
};
struct f_relation_336fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_335;
 P173 l_1516;
 P173 r_1517;
 P173 lo_1518;
 P173 hi_1519;
 P173 t_1520;
 P139 op_1521;
 rt_int line_1522;
 int neg_1523;
};
struct f_path_of_338fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_337;
 rt_gstr result_;
};
struct f_simple_expr_340fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_339;
 P173 l_1527;
 P173 r_1528;
 P139 op_1529;
 rt_int line_1530;
};
struct f_term_342fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_341;
 P173 l_1534;
 P173 r_1535;
 P139 op_1536;
 rt_int line_1537;
};
struct f_factor_344fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_343;
 P173 l_1540;
 P173 r_1541;
 P139 op_1542;
 rt_int line_1543;
};
struct f_primary_346fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_345;
 P173 x_1545;
 rt_int line_1546;
};
struct f_agg_or_paren_348fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_347;
 rt_int line_1551;
 P173 items_1552;
 P173 itail_1553;
 P173 it_1554;
 P173 first_1555;
 P173 keys_1556;
 P173 ktail_1557;
 P173 lab_1558;
 P173 x_1559;
 int more_1560;
};
struct f_choice_token_350fr { int dummy;
 struct f_greenc_1fr *up;
 P109 t_349;
 int result_;
};
struct f_aggregate_ahead_351fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1563;
 rt_int k_1564;
 P109 t_1567;
};
struct f_name_p_353fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_352;
 P173 p_1569;
 P173 x_1570;
 P173 args_1571;
 P173 atail_1572;
 P173 lo_1573;
 P173 r_1574;
 rt_int line_1575;
 int more_1576;
 P139 formal_1580;
 rt_int mark_1581;
};
struct f_component_list_355fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_354;
 P173 comps_1584;
 P173 ctail_1585;
 P173 names_1586;
 P173 st_1587;
 P173 def_1588;
 P173 cm_1589;
 P173 v_1590;
 P173 arm_1591;
 P173 atail_1592;
 P173 labs_1593;
 P173 ltail_1594;
 P173 l_1595;
 int is_c_1596;
};
struct f_discrete_range_p_357fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_356;
 P173 lo_1601;
 P173 r_1602;
 rt_int line_1603;
};
struct f_subtype_ind_359fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_358;
 P139 f_1604;
 P173 x_1605;
 P173 r_1606;
 P173 args_1607;
 P173 atail_1608;
 P173 lo_1609;
 rt_int line_1610;
 int more_1611;
};
struct f_type_spec_361fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_360;
 P173 x_1614;
};
struct f_type_def_363fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_362;
 P173 x_1615;
 P173 lits_1616;
 P173 ltail_1617;
 P173 l_1618;
 P173 idx_1619;
 P173 itail_1620;
 P173 r_1621;
 P173 comps_1622;
 P173 ctail_1623;
 P173 names_1624;
 P173 st_1625;
 P173 def_1626;
 P173 cm_1627;
 rt_int line_1628;
 int more_1629;
};
struct f_pragma_p_365fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_364;
 P173 x_1633;
 P173 a_1634;
 P173 head_1635;
 P173 tail_1636;
};
struct f_check_pragma_367fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_366;
 rt_gstr p_1638;
 rt_int n_1639;
 P173 a_1640;
};
struct f_skip_visibility_368fr { int dummy;
 struct f_greenc_1fr *up;
 P173 names_1642;
};
struct f_skip_representation_369fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_371fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_370;
 P173 head_1646;
 P173 tail_1647;
 P173 x_1648;
 P173 names_1649;
};
struct f_object_decl_373fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_372;
 P173 head_1651;
 P173 tail_1652;
 P173 names_1653;
 P173 st_1654;
 P173 init_1655;
 P173 x_1656;
 rt_int line_1657;
 int is_const_1658;
};
struct f_type_decl_375fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_374;
 P173 x_1661;
 rt_int line_1662;
};
struct f_formal_part_377fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_376;
 P173 head_1663;
 P173 tail_1664;
 P173 names_1665;
 P173 st_1666;
 P173 def_1667;
 P173 p_1668;
 rt_int mode_1669;
 int more_1670;
};
struct f_designator_379fr { int dummy;
 struct f_greenc_1fr *up;
 P139 *res_378;
};
struct f_subprogram_381fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_380;
 P173 x_1677;
 rt_int line_1678;
 int is_proc_1679;
};
struct f_body_part_383fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_382;
};
struct f_parse_handlers_385fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_384;
 P173 head_1681;
 P173 tail_1682;
 P173 h_1683;
 P173 names_1684;
 P173 ntail_1685;
 P173 n_1686;
};
struct f_package_p_387fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_386;
 P173 x_1690;
 rt_int line_1691;
};
struct f_at_statements_end_388fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_390fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_389;
 P173 head_1692;
 P173 tail_1693;
 P173 x_1694;
};
struct f_statement_392fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_391;
 P173 l_1696;
 P173 x_1697;
 P139 label_1698;
};
struct f_labelled_statement_395fr { int dummy;
 struct f_greenc_1fr *up;
 P139 label_393;
 P173 *res_394;
 P173 x_1699;
 P173 t_1700;
 rt_int line_1701;
};
struct f_task_statement_397fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_396;
};
struct f_if_stmt_399fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_398;
 P173 x_1705;
 P173 arm_1706;
 P173 head_1707;
 P173 tail_1708;
 int go_1709;
};
struct f_case_stmt_401fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_400;
 P173 x_1711;
 P173 arm_1712;
 P173 head_1713;
 P173 tail_1714;
 P173 labs_1715;
 P173 ltail_1716;
 P173 l_1717;
 int others_arm_1718;
};
struct f_loop_stmt_403fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_402;
 P173 x_1721;
 P173 r_1722;
 rt_int line_1723;
};
struct f_compilation_405fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_404;
 P173 head_1724;
 P173 tail_1725;
 P173 x_1726;
};
struct f_hash_407fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_406;
 rt_int result_;
 rt_int h_1728;
 rt_int i_1731;
};
struct f_lookup_409fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_408;
 P116 result_;
 P116 y_1736;
};
struct f_same_task_412fr { int dummy;
 struct f_greenc_1fr *up;
 P116 a_410;
 P116 b_411;
 int result_;
};
struct f_lookup_entry_415fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_413;
 P116 owner_414;
 P116 result_;
 P116 y_1739;
};
struct f_lookup_at_418fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_416;
 rt_int d_417;
 P116 result_;
 P116 y_1742;
};
struct f_enclosing_depth_420fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_419;
 rt_int result_;
 rt_int i_1746;
};
struct f_push_unit_422fr { int dummy;
 struct f_greenc_1fr *up;
 P139 name_421;
};
struct f_lookup_decl_424fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_423;
 P116 result_;
 P116 y_1754;
};
struct f_overloadable_426fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_425;
 int result_;
};
struct f_same_429fr { int dummy;
 struct f_greenc_1fr *up;
 P121 a_427;
 P121 b_428;
 int result_;
};
struct f_root_431fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_430;
 P121 result_;
 P121 r_1757;
};
struct f_derived_from_434fr { int dummy;
 struct f_greenc_1fr *up;
 P121 a_432;
 P121 b_433;
 int result_;
 P121 r_1759;
};
struct f_is_numeric_436fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_435;
 int result_;
};
struct f_is_discrete_438fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_437;
 int result_;
};
struct f_same_types_441fr { int dummy;
 struct f_greenc_1fr *up;
 P1761 a_439;
 P1761 b_440;
 int result_;
 P1761 x_1763;
 P1761 y_1764;
};
struct f_same_signature_444fr { int dummy;
 struct f_greenc_1fr *up;
 P1761 a_442;
 P1761 b_443;
 int result_;
 P1761 x_1766;
 P1761 y_1767;
};
struct f_distinct_overload_447fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_445;
 P116 z_446;
 int result_;
};
struct f_define_450fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_448;
 rt_int line_449;
 rt_int h_1769;
 P116 z_1770;
};
struct f_open_scope_451fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_452fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_455fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_453;
 P139 name_454;
 P116 result_;
};
struct f_new_typ_457fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_456;
 P121 result_;
};
struct f_new_cons_458fr { int dummy;
 struct f_greenc_1fr *up;
 P177 result_;
};
struct f_bounded_460fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_459;
 int result_;
};
struct f_bounded_hi_462fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_461;
 int result_;
};
struct f_static_bounds_464fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_463;
 int result_;
};
struct f_discriminated_466fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_465;
 int result_;
};
struct f_kind_name_468fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_467;
 rt_gstr result_;
};
struct f_check_type_472fr { int dummy;
 struct f_greenc_1fr *up;
 P121 got_469;
 P121 want_470;
 rt_int line_471;
};
struct f_field_count_474fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_473;
 rt_int result_;
 rt_int n_1788;
 P1779 f_1789;
};
struct f_ctype_477fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_475;
 P139 *r_476;
 P139 s_1791;
};
struct f_field_decls_480fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_478;
 P139 *r_479;
 P1779 f_1793;
 P139 s_1794;
 P139 ct_1795;
};
struct f_declare_ctype_482fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_481;
 P139 ct_1797;
 P139 s_1798;
 P121 target_1799;
};
struct f_lit_index_485fr { int dummy;
 struct f_greenc_1fr *up;
 P173 lits_483;
 rt_gstr name_484;
 rt_int result_;
 rt_int i_1800;
 P173 l_1801;
};
struct f_manifest_489fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_486;
 rt_int *v_487;
 int *ok_488;
 rt_int a_1803;
 rt_int b_1804;
 int ok2_1805;
 P116 y_1806;
};
struct f_resolve_493fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_490;
 P121 *t_491;
 P177 *c_492;
 P116 y_1807;
 P121 dummy_1808;
 P139 code_1809;
 int ok_1810;
 P173 r_1811;
};
struct f_constraint_list_497fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_494;
 P121 t_495;
 P177 c_496;
 P173 r_1812;
 P121 arrt_1813;
 P177 cc_1814;
 P121 it_1815;
};
struct f_discriminant_constraint_501fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_498;
 P121 t_499;
 P177 c_500;
 P173 a_1817;
 P1779 f_1818;
 P121 vt_1819;
 P139 v_1820;
 P1783 d_1821;
 P1783 tail_1822;
};
struct f_discrete_bounds_507fr { int dummy;
 struct f_greenc_1fr *up;
 P173 r_502;
 P121 want_503;
 P121 *t_504;
 P139 *lo_505;
 P139 *hi_506;
 P177 c_1830;
 P116 y_1831;
};
struct f_range_of_511fr { int dummy;
 struct f_greenc_1fr *up;
 P173 r_508;
 P121 t_509;
 P177 c_510;
 P121 dummy_1832;
 int ok_1833;
};
struct f_fresh_typ_515fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_512;
 P139 name_513;
 P121 *t_514;
 P121 ph_1834;
};
struct f_inherit_519fr { int dummy;
 struct f_greenc_1fr *up;
 P121 parent_516;
 P121 t_517;
 rt_int line_518;
 P116 s_1835;
 P116 z_1836;
 P1761 p_1837;
 P1761 q_1838;
 P1761 tail_1839;
 int uses_1840;
 P116 news_1841;
};
struct f_derive_literals_522fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_520;
 rt_int line_521;
 P173 l_1848;
 rt_int n_1849;
 P116 y_1850;
};
struct f_type_definition_527fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_523;
 P139 name_524;
 P121 *t_525;
 P177 *c_526;
 P121 dummy_1852;
 P121 it_1853;
 P177 ic_1854;
 P173 l_1855;
 P173 comp_1856;
 P1779 f_1857;
 P1779 tail_1858;
 int ok_1859;
 rt_int n_1860;
 P116 y_1861;
};
struct f_array_type_534fr { int dummy;
 struct f_greenc_1fr *up;
 P173 idx_528;
 P173 comp_529;
 P139 name_530;
 rt_int line_531;
 P121 *t_532;
 P177 *c_533;
 P173 l_1865;
 P177 rowc_1866;
 P177 ic_1867;
 P121 it_1868;
};
struct f_static_range_538fr { int dummy;
 struct f_greenc_1fr *up;
 P173 l_535;
 P173 h_536;
 P177 c_537;
 int ok_1869;
 int ok2_1870;
};
struct f_component_place_544fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_539;
 P1779 f_540;
 rt_gstr a_541;
 rt_gstr ct_542;
 P139 *r_543;
 P139 bits_1873;
};
struct f_no_value_546fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_545;
 rt_gstr result_;
};
struct f_elem_ctype_549fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_547;
 P139 *r_548;
};
struct f_first_index_552fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_550;
 P139 *r_551;
};
struct f_is_string_554fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_553;
 int result_;
};
struct f_subst_557fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_555;
 rt_gstr r_556;
 rt_gstr result_;
 rt_int i_1877;
};
struct f_mentions_record_559fr { int dummy;
 struct f_greenc_1fr *up;
 P139 s_558;
 int result_;
 rt_int i_1891;
};
struct f_subst_cons_563fr { int dummy;
 struct f_greenc_1fr *up;
 P177 c_560;
 rt_gstr r_561;
 P177 *res_562;
};
struct f_remove_sym_565fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_564;
 rt_int h_1897;
 P116 p_1898;
};
struct f_record_components_570fr { int dummy;
 struct f_greenc_1fr *up;
 P173 list_566;
 P121 t_567;
 P1904 g_568;
 rt_int line_569;
 P173 comp_1906;
 P1779 f_1907;
 P1779 tail_1908;
 P1779 df_1909;
 P173 prev_1910;
 P121 pt_1911;
 P121 vt_1912;
 P177 pc_1913;
 P116 y_1914;
 P139 acc_1915;
 P139 v_1916;
 P139 x_1917;
 P173 arm_1918;
 P1904 g2_1919;
};
struct f_guard_cond_574fr { int dummy;
 struct f_greenc_1fr *up;
 P1904 g_571;
 P121 t_572;
 P139 *r_573;
 P173 a_1929;
 P173 l_1930;
 P1779 df_1931;
 P139 x_1932;
 P139 d_1933;
 P121 dt_1934;
 P121 vt_1935;
 P139 lo_1936;
 P139 hi_1937;
};
struct f_arm_test_579fr { int dummy;
 struct f_greenc_1fr *up;
 P173 arm_575;
 P139 dname_576;
 rt_gstr d_577;
 P139 *x_578;
 P173 l_1939;
 P116 y_1940;
 P121 dt_1941;
 P121 vt_1942;
 P139 lo_1943;
 P139 hi_1944;
};
struct f_derived_type_584fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_580;
 P139 name_581;
 P121 *t_582;
 P177 *c_583;
 P121 pt_1946;
 P139 ct_1947;
 P121 ph_1948;
};
struct f_real_type_589fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_585;
 P139 name_586;
 P121 *t_587;
 P177 *c_588;
 P121 dt_1949;
 P139 dv_1950;
 rt_int n_1951;
 int ok_1952;
};
struct f_finish_ptr_591fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_590;
 P177 c_1953;
};
struct f_init_storage_595fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_592;
 P121 t_593;
 P177 c_594;
 P177 ec_1954;
 P177 fc_1955;
 P1783 d_1956;
 P139 ct_1957;
 P139 i_1958;
 P139 v_1959;
 P139 x_1960;
 P121 vt_1961;
 P1779 f_1962;
};
struct f_composite_597fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_596;
 int result_;
};
struct f_assign_code_603fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_598;
 P121 t_599;
 rt_gstr v_600;
 P177 c_601;
 P139 *r_602;
 P139 ct_1966;
 P139 x_1967;
 P1783 d_1968;
};
struct f_copy_code_607fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_604;
 rt_gstr v_605;
 P139 *r_606;
 P139 ct_1970;
};
struct f_eq_code_612fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_608;
 rt_gstr a_609;
 rt_gstr b_610;
 P139 *r_611;
 P139 ct_1971;
};
struct f_seen_name_615fr { int dummy;
 struct f_greenc_1fr *up;
 P150 l_613;
 rt_gstr s_614;
 int result_;
 P150 p_1972;
};
struct f_emit_helpers_616fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_1974;
 P139 et_1975;
 P150 done_1976;
 P150 l_1977;
};
struct f_helper_bodies_618fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_617;
 P139 c_1981;
 P125 b_1982;
 P139 ct_1983;
 P139 et_1984;
 P139 x_1985;
 P139 y_1986;
 P139 conds_1987;
 P1779 f_1988;
};
struct f_storage_622fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_619;
 P121 t_620;
 P139 *access_code_621;
 P139 ct_1991;
 P139 g_1992;
};
struct f_bind_625fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_623;
 P139 access_code_624;
};
struct f_declare_subprograms_627fr { int dummy;
 struct f_greenc_1fr *up;
 P173 from_626;
 P173 e_1993;
};
struct f_declare_one_629fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_628;
 P116 y_1995;
 P116 z_1996;
};
struct f_elaborate_defaults_631fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_630;
 P1761 pm_2000;
 P121 vt_2001;
 P139 v_2002;
 P139 acc_2003;
 P139 x_2004;
 P116 z_2005;
};
struct f_build_subprogram_634fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_632;
 P116 *y_633;
 P173 p_2007;
 P1761 pm_2008;
 P1761 tail_2009;
 P177 rc_2010;
 rt_int k_2011;
};
struct f_decl_elements_636fr { int dummy;
 struct f_greenc_1fr *up;
 P173 decls_635;
 P173 e_2015;
 int declared_2016;
};
struct f_decl_element_638fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_637;
 P173 pd_2018;
 P116 y_2019;
 P116 z_2020;
 P121 t_2021;
 P121 vt_2022;
 P177 c_2023;
 P139 acc_2024;
 P139 v_2025;
 P139 x_2026;
 int ok_2027;
};
struct f_pragma_decl_640fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_639;
};
struct f_resolve_object_type_644fr { int dummy;
 struct f_greenc_1fr *up;
 P173 st_641;
 P121 *t_642;
 P177 *c_643;
};
struct f_other_decl_646fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_645;
};
struct f_scan_labels_649fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_647;
 rt_gstr path_648;
 P173 s_2029;
 P173 a_2030;
 P188 l_2031;
 P139 c_2032;
};
struct f_scan_guarded_653fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_650;
 P173 hs_651;
 rt_gstr path_652;
 P173 h_2042;
};
struct f_count_g_655fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_654;
 rt_int result_;
 rt_int n_2044;
 rt_int i_2048;
};
struct f_label_body_658fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_656;
 P173 hs_657;
 P188 l_2053;
 P188 g_2054;
 P139 gp_2055;
 P139 lp_2056;
 rt_int i_2067;
};
struct f_gen_label_661fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_659;
 int goto_it_660;
 P188 l_2073;
};
struct f_is_foreign_663fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_662;
 int result_;
};
struct f_subprogram_body_666fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_664;
 P116 y_665;
 P125 saved_code_2075;
 P125 saved_fields_2076;
 int saved_in_2077;
 P116 saved_sym_2078;
 P142 saved_exits_2079;
 rt_int saved_frames_2080;
 P150 saved_handlers_2081;
 P150 saved_cleanups_2082;
 P188 saved_labels_2083;
 P142 saved_hx_2084;
 rt_int saved_hd_2085;
 P116 saved_pure_2086;
 P139 aw_2087;
 rt_int saved_pdepth_2088;
 P139 args_2089;
 P139 head_2090;
 P139 frame_2091;
 P139 parent_2092;
 P139 ct_2093;
 P139 x_2094;
 P1761 pm_2095;
 P116 p_2096;
};
struct f_gen_statements_668fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_667;
 P173 s_2102;
};
struct f_pop_frames_670fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_669;
 rt_int i_2104;
 P150 c_2105;
};
struct f_push_cleanup_672fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_671;
};
struct f_pop_cleanup_673fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_678fr { int dummy;
 struct f_greenc_1fr *up;
 P173 decls_674;
 P173 stmts_675;
 P173 hs_676;
 rt_int line_677;
 P142 saved_hx_2109;
 P139 f_2110;
 P139 x_2111;
 P173 h_2112;
 P173 n_2113;
 int first_2114;
 int has_others_2115;
 P139 conds_2116;
};
struct f_exc_id_682fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_679;
 rt_int line_680;
 P139 *r_681;
 P116 y_2121;
};
struct f_gen_statement_684fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_683;
 P121 t_2122;
 P121 vt_2123;
 P177 c_2124;
 P139 lv_2125;
 P139 v_2126;
 P139 x_2127;
 int ro_2128;
};
struct f_slice_assign_686fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_685;
 P139 lv_2130;
 P139 v_2131;
 P139 sl_2132;
 P139 x_2133;
 P121 t_2134;
 P121 st_2135;
 P121 vt_2136;
 P177 c_2137;
 int ro_2138;
};
struct f_gen_call_688fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_687;
 P173 c_2139;
 P121 t_2140;
 P139 v_2141;
};
struct f_gen_if_690fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_689;
 P173 a_2142;
 int first_2143;
 P121 t_2144;
 P139 v_2145;
};
struct f_gen_case_692fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_691;
 P121 st_2147;
 P121 vt_2148;
 int first_2149;
 P173 a_2150;
 P173 lab_2151;
 P139 sel_2152;
 P139 tmp_2153;
 P139 ct_2154;
 P139 conds_2155;
 P139 v_2156;
 P139 lo_2157;
 P139 hi_2158;
 A2159 clo_2160;
 A2159 chi_2162;
 rt_int nc_2164;
 rt_int vlo_2165;
 rt_int vhi_2166;
 rt_int total_2167;
 int ok_2168;
 int ok2_2169;
 P116 y_2170;
 rt_int k_2174;
 rt_int k_2183;
};
struct f_selector_range_698fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_693;
 P121 t_694;
 rt_int *lo_695;
 rt_int *hi_696;
 int *ok_697;
 P116 y_2191;
};
struct f_push_exit_702fr { int dummy;
 struct f_greenc_1fr *up;
 P139 match_699;
 int is_loop_700;
 P139 *label_701;
};
struct f_gen_loop_704fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_703;
 P121 t_2194;
 P121 vt_2195;
 P177 c_2196;
 P139 label_2197;
 P139 cond_2198;
 P139 acc_2199;
 P139 lov_2200;
 P139 hiv_2201;
 P139 it_2202;
 P116 y_2203;
 P173 r_2204;
};
struct f_gen_block_706fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_705;
 P139 label_2205;
 P139 aw_2206;
};
struct f_exit_matches_709fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_707;
 P142 x_708;
 int result_;
};
struct f_gen_exit_711fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_710;
 P142 x_2207;
 P121 t_2208;
 P139 v_2209;
};
struct f_gen_return_713fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_712;
 P121 vt_2211;
 P139 v_2212;
 P139 x_2213;
};
struct f_access_of_716fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_714;
 P139 *r_715;
 P139 p_2214;
 rt_int i_2216;
};
struct f_link_to_719fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_717;
 P139 *r_718;
 rt_int i_2221;
};
struct f_c_ident_721fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_720;
 rt_gstr result_;
};
struct f_deref_725fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_722;
 P121 t_723;
 P139 *r_724;
 P139 ct_2225;
};
struct f_is_object_727fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_726;
 int result_;
 P116 y_2226;
};
struct f_is_const_access_729fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_728;
 int result_;
 P116 y_2227;
};
struct f_lvalue_735fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_730;
 P139 *code_out_731;
 P121 *t_732;
 P177 *c_733;
 int *ro_734;
 int cp_2228;
 P173 ex_2229;
 P116 y_2230;
 P139 base_2231;
 P121 bt_2232;
 P177 bc_2233;
};
struct f_select_on_744fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_736;
 P121 bt_737;
 P173 e_738;
 int *ro_739;
 int lv_740;
 P139 *code_out_741;
 P121 *t_742;
 P177 *c_743;
 P1779 f_2234;
 P139 d_2235;
 P139 ct_2236;
 P139 tmp_2237;
};
struct f_index_on_753fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_745;
 P121 bt_746;
 P173 e_747;
 int *ro_748;
 int lv_749;
 P139 *code_out_750;
 P121 *t_751;
 P177 *c_752;
 P173 a_2239;
 P121 arrt_2240;
 P139 acc_2241;
 P121 it_2242;
 P139 i_2243;
 P139 lo_2244;
 P139 hi_2245;
 P139 d_2246;
 P139 ct_2247;
 P139 tmp_2248;
};
struct f_type_attribute_756fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_754;
 rt_gstr name_755;
 int result_;
 P116 y_2250;
 P1761 p_2252;
};
struct f_is_type_name_758fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_757;
 int result_;
 P116 y_2255;
};
struct f_is_char_lit_760fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_759;
 int result_;
};
struct f_is_enum_lit_762fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_761;
 int result_;
 P116 y_2257;
};
struct f_c_string_764fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_763;
 rt_gstr result_;
 rt_int n_2258;
 rt_int i_2261;
 rt_gstr r_2270;
 rt_int j_2272;
 rt_int i_2276;
};
struct f_is_literal_766fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_765;
 int result_;
};
struct f_range_bounds_774fr { int dummy;
 struct f_greenc_1fr *up;
 P173 l_767;
 P173 h_768;
 P121 want_769;
 rt_int line_770;
 P121 *t_771;
 P139 *lo_772;
 P139 *hi_773;
 P121 w_2287;
 P121 t2_2288;
};
struct f_gexpr_779fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_775;
 P121 want_776;
 P121 *t_777;
 P139 *r_778;
 P116 y_2289;
 P121 bt_2290;
 P177 c_2291;
 int ro_2292;
 P139 base_2293;
 P139 a_2294;
 P173 nm_2295;
 int saved_lv_2296;
};
struct f_gexpr_1_784fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_780;
 P121 want_781;
 P121 *t_782;
 P139 *r_783;
 P116 y_2297;
 P121 bt_2298;
 P177 c_2299;
 int ro_2300;
 P139 base_2301;
 P139 a_2302;
 P173 nm_2303;
 P173 c2_2304;
};
struct f_string_aggregate_789fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_785;
 P121 want_786;
 P121 *t_787;
 P139 *r_788;
 P173 ag_2308;
 P173 it_2309;
 P173 tail_2310;
 P173 l_2311;
 rt_int k_2314;
};
struct f_char_literal_794fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_790;
 P121 want_791;
 P121 *t_792;
 P139 *r_793;
 rt_int i_2320;
};
struct f_expanded_797fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_795;
 P173 *r_796;
 P116 y_2323;
 rt_int d_2324;
};
struct f_gen_name_802fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_798;
 P121 want_799;
 P121 *t_800;
 P139 *r_801;
 P116 y_2325;
 P116 z_2326;
 P173 call_2327;
};
struct f_gen_unop_807fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_803;
 P121 want_804;
 P121 *t_805;
 P139 *r_806;
 P139 a_2330;
 P139 x_2331;
 int done_2332;
};
struct f_short_int_809fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_808;
 int result_;
};
struct f_float_kind_811fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_810;
 rt_gstr result_;
};
struct f_membership_814fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_812;
 P139 *r_813;
 P121 ta_2333;
 P121 tb_2334;
 P121 tt_2335;
 P139 a_2336;
 P139 lo_2337;
 P139 hi_2338;
 P139 ct_2339;
 P177 c_2340;
 P1783 d_2341;
};
struct f_condition_819fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_815;
 P121 want_816;
 P121 *t_817;
 P139 *r_818;
 P139 a_2343;
 P139 b_2344;
 P121 tb_2345;
};
struct f_catenation_824fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_820;
 P121 want_821;
 P121 *t_822;
 P139 *r_823;
 P121 arrt_2346;
 P121 ta_2347;
 P121 tb_2348;
 P139 a_2349;
 P139 b_2350;
 P139 ct_2351;
};
struct f_cat_operand_829fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_825;
 P121 arrt_826;
 rt_int line_827;
 P139 *r_828;
 P121 tx_2352;
 P139 ct_2353;
};
struct f_arithmetic_834fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_830;
 P121 want_831;
 P121 *t_832;
 P139 *r_833;
 rt_gstr op_2354;
 P121 ta_2355;
 P121 tb_2356;
 P121 hint_2357;
 P139 a_2358;
 P139 b_2359;
};
struct f_fixed_operation_842fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_835;
 P121 ta_836;
 P121 tb_837;
 rt_gstr a_838;
 rt_gstr b_839;
 P121 *t_840;
 P139 *r_841;
 rt_gstr op_2360;
};
struct f_gen_binop_847fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_843;
 P121 want_844;
 P121 *t_845;
 P139 *r_846;
 rt_gstr op_2361;
 P121 ta_2362;
 P121 tb_2363;
 P121 hint_2364;
 P121 ct_2365;
 P139 a_2366;
 P139 b_2367;
 P139 x_2368;
 P139 dummy_2369;
 int done_2370;
};
struct f_conversion_852fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_848;
 P116 y_849;
 P121 *t_850;
 P139 *r_851;
 P121 aty_2371;
 P139 a_2372;
 P173 ag_2373;
 P173 it_2374;
 P173 tail_2375;
 P173 arg_2376;
};
struct f_constrain_856fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_853;
 P121 t_854;
 P139 *r_855;
 P139 ct_2378;
 P139 tmp_2379;
};
struct f_array_conversion_863fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_857;
 P121 t_858;
 P121 aty_859;
 P177 c_860;
 rt_gstr a_861;
 P139 *r_862;
 P121 x_2380;
 P121 y_2381;
 P139 ct_2382;
 P139 act_2383;
 P139 et_2384;
 P139 tmp_2385;
 P139 s_2386;
 rt_int k_2388;
};
struct f_gen_attr_868fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_864;
 P121 want_865;
 P121 *t_866;
 P139 *r_867;
 rt_gstr a_2392;
 P116 y_2393;
 P121 tt_2394;
 P121 aty_2395;
 P139 v_2396;
 P139 d_2397;
 P177 c_2398;
 rt_int n_2399;
 int ro_2400;
};
struct f_type_bits_872fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_869;
 P177 c_870;
 P139 *r_871;
 P139 ct_2401;
};
struct f_object_bits_876fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_873;
 rt_gstr v_874;
 P139 *r_875;
 P139 ct_2402;
 P139 et_2403;
};
struct f_numeric_attr_882fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_877;
 P121 tt_878;
 P177 c_879;
 P121 *t_880;
 P139 *r_881;
 rt_gstr a_2404;
 int short_2405;
};
struct f_component_attr_886fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_883;
 P121 *t_884;
 P139 *r_885;
 P121 bt_2406;
 P139 v_2407;
 P139 ct_2408;
 P1779 f_2409;
};
struct f_config_attr_890fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_887;
 P121 *t_888;
 P139 *r_889;
 rt_gstr a_2411;
 rt_gstr p_2412;
 P139 nm_2413;
};
struct f_attr_dim_894fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_891;
 P121 arrt_892;
 rt_int *n_893;
 int ok_2416;
};
struct f_object_array_attr_900fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_895;
 P121 arrt_896;
 rt_gstr v_897;
 P121 *t_898;
 P139 *r_899;
 rt_int n_2417;
 P121 it_2418;
 P139 ct_2419;
 P139 tmp_2420;
 P139 p_2421;
 P139 lo_2422;
 P139 hi_2423;
 rt_int k_2425;
 rt_int k_2430;
};
struct f_type_array_attr_906fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_901;
 P121 arrt_902;
 P177 c_903;
 P121 *t_904;
 P139 *r_905;
 rt_int n_2434;
 P121 it_2435;
 P177 cc_2436;
 rt_int k_2438;
};
struct f_lit_table_909fr { int dummy;
 struct f_greenc_1fr *up;
 P121 t_907;
 P139 *r_908;
 P173 l_2442;
 P139 s_2443;
};
struct f_val_rep_915fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_910;
 P121 tt_911;
 P177 c_912;
 P121 *t_913;
 P139 *r_914;
 P121 aty_2446;
 P139 v_2447;
 P139 lt_2448;
 rt_int n_2449;
};
struct f_allocator_920fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_916;
 P121 want_917;
 P121 *t_918;
 P139 *r_919;
 P116 y_2450;
 P121 target_2451;
 P121 vt_2452;
 P139 ct_2453;
 P139 pt_2454;
 P139 cell_2455;
 P139 v_2456;
 P139 x_2457;
};
struct f_aggregate_925fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_921;
 P121 want_922;
 P121 *t_923;
 P139 *r_924;
 P139 b_2458;
};
struct f_captured_928fr { int dummy;
 struct f_greenc_1fr *up;
 P125 b_926;
 P139 *r_927;
 P150 l_2459;
};
struct f_field_at_931fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_929;
 rt_int k_930;
 P1779 result_;
 P1779 f_2461;
 rt_int i_2463;
};
struct f_names_field_934fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_932;
 P1779 f_933;
 int result_;
};
struct f_item_for_939fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_935;
 P121 rt_936;
 rt_int k_937;
 rt_int p_938;
 P173 result_;
 P173 it_2467;
 P173 lab_2468;
 rt_int n_2469;
};
struct f_arm_holds_943fr { int dummy;
 struct f_greenc_1fr *up;
 P173 arm_940;
 rt_int v_941;
 int *res_942;
 P173 l_2472;
 rt_int lo_2473;
 rt_int hi_2474;
 int ok_2475;
};
struct f_record_aggregate_947fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_944;
 P121 rt_945;
 P139 *r_946;
 P173 it_2477;
 P173 lab_2478;
 P173 vn_2479;
 P173 a_2480;
 P1779 f_2481;
 P1904 g_2482;
 rt_int n_2483;
 A2484 done_2485;
 A2484 active_2487;
 A2489 dvs_2490;
 A2492 order_2493;
 rt_int norder_2495;
 rt_int nung_2496;
 rt_int k_2497;
 rt_int d_2498;
 rt_int npos_2499;
 P125 saved_2500;
 P139 ct_2501;
 P139 tmp_2502;
 P139 parts_2503;
 int named_2504;
 int ok_2505;
 int holds_2506;
 rt_int i_2508;
 rt_int p_2517;
 rt_int i_2536;
 rt_int i_2553;
 rt_int i_2564;
};
struct f_field_index_950fr { int dummy;
 struct f_greenc_1fr *up;
 P121 rt_948;
 rt_gstr name_949;
 rt_int result_;
 P1779 f_2570;
 rt_int k_2571;
};
struct f_agg_component_956fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_951;
 P121 rt_952;
 rt_int k_953;
 P173 v_954;
 rt_int line_955;
 P1779 f_2573;
 P121 vt_2574;
 P139 x_2575;
 P139 y_2576;
 rt_int i_2578;
};
struct f_static_choice_960fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_957;
 rt_int *v_958;
 int *ok_959;
};
struct f_array_aggregate_965fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_961;
 P121 arrt_962;
 P139 bounds_963;
 P139 *r_964;
 P173 it_2583;
 P173 lab_2584;
 P173 others_it_2585;
 rt_int np_2586;
 rt_int nnamed_2587;
 rt_int clo_2588;
 rt_int chi_2589;
 rt_int v1_2590;
 rt_int v2_2591;
 int all_static_2592;
 int ok_2593;
 int ok2_2594;
 int first_choice_2595;
 P121 vt_2596;
 P139 ct_2597;
 P139 et_2598;
 P139 tmp_2599;
 P139 lo_2600;
 P139 hi_2601;
 P139 v_2602;
 P139 x_2603;
 P139 parts_2604;
 P139 fill_2605;
 P139 rowb_2606;
 P139 key_2607;
 P139 khi_2608;
 P125 saved_2609;
};
struct f_element_store_969fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_966;
 P121 arrt_967;
 rt_gstr v_968;
 P139 x_2614;
};
struct f_check_choices_973fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_970;
 P121 arrt_971;
 int has_others_972;
 P173 a_2615;
 P173 b_2616;
 P173 lab_2617;
 P173 lab2_2618;
 rt_int lo1_2619;
 rt_int hi1_2620;
 rt_int lo2_2621;
 rt_int hi2_2622;
 rt_int count_2623;
 int ok_2624;
};
struct f_actual_for_977fr { int dummy;
 struct f_greenc_1fr *up;
 P173 args_974;
 P1761 pm_975;
 P1761 first_976;
 P173 result_;
 P173 a_2629;
 P1761 p_2630;
};
struct f_gcall_982fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_978;
 int is_stmt_979;
 P121 *t_980;
 P139 *r_981;
 P173 fn_2633;
 P173 nm_2634;
 P116 y_2635;
 P139 args_2636;
 P139 lv_2637;
 P139 v_2638;
 P139 ct_2639;
 P139 x_2640;
 P173 a_2641;
 P1761 pm_2642;
 P121 lt_2643;
 P121 vt_2644;
 P177 lc_2645;
 int ro_2646;
};
struct f_out_check_986fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_983;
 P121 t_984;
 P177 c_985;
};
struct f_var_path_989fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_987;
 P139 *r_988;
 P121 pt_2647;
 P139 v_2648;
 P125 saved_2649;
};
struct f_paths_overlap_992fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_990;
 rt_gstr r_991;
 int result_;
 rt_int i_2653;
 rt_int j_2655;
};
struct f_mentions_995fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_993;
 rt_gstr name_994;
 int result_;
 P173 p_2677;
};
struct f_mentions_one_998fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_996;
 rt_gstr name_997;
 int result_;
};
struct f_check_aliasing_1002fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_999;
 P116 y_1000;
 P173 a_1001;
 P173 b_2679;
 P139 p_2680;
 P139 q_2681;
 P173 r_2682;
 P116 v_2683;
};
struct f_gcall_with_1007fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1003;
 P116 y_1004;
 P121 *t_1005;
 P139 *r_1006;
 P139 args_2685;
 P139 lv_2686;
 P139 v_2687;
 P139 x1_2688;
 P139 x2_2689;
 P173 a_2690;
 P1761 pm_2691;
 P121 lt_2692;
 P121 vt_2693;
 P177 lc_2694;
 int ro_2695;
};
struct f_builtin_1014fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1008;
 P173 args_1009;
 rt_int line_1010;
 int is_stmt_1011;
 P121 *t_1012;
 P139 *r_1013;
 P121 aty_2698;
 P121 lt_2699;
 P139 a_2700;
 P139 w_2701;
 P139 lv_2702;
 P177 lc_2703;
 int ro_2704;
};
struct f_lookup_path_1016fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1015;
 P116 result_;
 P116 y_2705;
 P116 m_2706;
 rt_int i_2710;
};
struct f_is_package_1018fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1017;
 int result_;
 P116 y_2722;
};
struct f_member_of_1022fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1019;
 rt_gstr name_1020;
 rt_int line_1021;
 P116 result_;
 P116 y_2723;
 P116 m_2724;
};
struct f_inside_package_1024fr { int dummy;
 struct f_greenc_1fr *up;
 P173 p_1023;
 int result_;
 P150 l_2726;
};
struct f_copy_sym_1027fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1025;
 P116 *z_1026;
};
struct f_complete_private_1030fr { int dummy;
 struct f_greenc_1fr *up;
 P121 ph_1028;
 P121 full_1029;
 P139 n_2730;
 P173 p_2731;
};
struct f_package_spec_1032fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1031;
 P116 y_2732;
 P116 m_2733;
 P116 z_2734;
 P173 saved_2735;
 P116 first_private_2736;
};
struct f_hidden_from_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P116 m_1033;
 P116 first_private_1034;
 int result_;
 P116 p_2740;
};
struct f_package_body_1037fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1036;
 P188 saved_labels_2742;
 P116 y_2743;
 P116 m_2744;
 P116 z_2745;
 P173 saved_2746;
};
struct f_use_visible_1039fr { int dummy;
 struct f_greenc_1fr *up;
 P116 old_1038;
 int result_;
};
struct f_use_clause_1041fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1040;
 P173 n_2753;
 P116 y_2754;
 P116 m_2755;
 P116 z_2756;
 P116 old_2757;
};
struct f_fits_1046fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1042;
 P173 args_1043;
 P121 want_1044;
 int *ok_1045;
 P1761 pm_2760;
 P173 a_2761;
 P121 t_2762;
 P177 c_2763;
 P139 v_2764;
 int ro_2765;
 P125 saved_2766;
 rt_int used_2767;
};
struct f_is_builtin_1048fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1047;
 int result_;
};
struct f_resolve_overload_1055fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1049;
 P173 args_1050;
 int is_stmt_1051;
 P121 want_1052;
 rt_int line_1053;
 P116 *y_1054;
 P116 z_2772;
 P116 w_2773;
 P116 first_2774;
 P116 found_2775;
 rt_int n_2776;
 int ok_2777;
 int hidden_2778;
 rt_int pass_2780;
};
struct f_same_profile_1058fr { int dummy;
 struct f_greenc_1fr *up;
 P116 a_1056;
 P116 b_1057;
 int result_;
};
struct f_resolve_member_overload_1066fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1059;
 rt_gstr name_1060;
 P173 args_1061;
 int is_stmt_1062;
 P121 want_1063;
 rt_int line_1064;
 P116 *y_1065;
 P116 pk_2790;
 P116 z_2791;
 P116 found_2792;
 rt_int n_2793;
 int ok_2794;
 rt_int pass_2796;
};
struct f_user_operator_1072fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1067;
 P121 want_1068;
 P121 *t_1069;
 P139 *r_1070;
 int *done_1071;
 P139 op_2801;
 int negate_2802;
 P116 y_2803;
 P173 call_2804;
 P173 fname_2805;
 P173 l_2806;
 P173 rt_2807;
 int ok_2808;
};
struct f_task_p_1074fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1073;
 P173 x_2811;
 P173 r_2812;
 rt_int line_2813;
};
struct f_entry_p_1076fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1075;
 P173 x_2814;
};
struct f_accept_p_1078fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1077;
 P173 x_2815;
};
struct f_delay_p_1080fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1079;
 P173 x_2816;
};
struct f_designators_1082fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1081;
 P173 head_2817;
 P173 tail_2818;
 P173 n_2819;
};
struct f_parse_task_statement_1084fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1083;
 P173 x_2821;
 P173 alt_2822;
 P173 head_2823;
 P173 tail_2824;
 rt_int line_2825;
};
struct f_path_at_1088fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1085;
 rt_gstr field_1086;
 P139 *r_1087;
 rt_int i_2828;
};
struct f_is_task_name_1090fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1089;
 int result_;
 P116 y_2832;
};
struct f_task_of_1094fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1091;
 P116 *y_1092;
 P173 *ix_1093;
 P173 n_2833;
};
struct f_own_index_1096fr { int dummy;
 struct f_greenc_1fr *up;
 P139 *r_1095;
 P116 y_2834;
};
struct f_member_1101fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1097;
 rt_gstr arr_1098;
 rt_gstr i_1099;
 P139 *r_1100;
 P139 lo_2835;
 P139 hi_2836;
};
struct f_act_path_1104fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1102;
 P139 *r_1103;
 P139 i_2837;
};
struct f_act_path_i_1108fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1105;
 rt_gstr i_1106;
 P139 *r_1107;
};
struct f_entry_path_1112fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1109;
 rt_gstr i_1110;
 P139 *r_1111;
 P139 own_2838;
};
struct f_declare_slot_1115fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1113;
 rt_gstr field_1114;
};
struct f_task_decl_1117fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1116;
};
struct f_family_arg_struct_1118fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1122fr { int dummy;
 struct f_greenc_1fr *up;
 P173 b_1119;
 P116 y_1120;
 P139 x_1121;
 P139 lo_2840;
 P139 hi_2841;
 P139 v_2842;
 P139 d_2843;
 P121 vt_2844;
 P177 c_2845;
};
struct f_entry_family_slot_1127fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1123;
 rt_gstr base_1124;
 rt_gstr i_1125;
 P139 *r_1126;
 P139 lo_2846;
 P139 hi_2847;
};
struct f_task_spec_1129fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1128;
 int has_procs_2848;
 int saved_defer_2849;
 P139 fields_2850;
 P139 ct_2851;
 P1761 pm_2852;
 P139 fp_2853;
 P139 flo_2854;
 P139 fhi_2855;
 P116 y_2856;
 P116 m_2857;
 P116 z_2858;
 P116 saved_2859;
 P139 d_2860;
 P139 v_2861;
 P139 p_2862;
 P139 p2_2863;
 P121 vt_2864;
 P173 r_2865;
};
struct f_entry_decl_1131fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1130;
 P116 y_2869;
 P173 p_2870;
 P1761 pm_2871;
 P1761 tail_2872;
 P139 fields_2873;
 P139 ct_2874;
 P139 x_2875;
 P139 lo_2876;
 P139 hi_2877;
};
struct f_task_body_1133fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1132;
 P116 y_2881;
 P116 b_2882;
 P116 m_2883;
 P116 z_2884;
 P139 upp_2885;
 P116 saved_2886;
};
struct f_task_awaits_1136fr { int dummy;
 struct f_greenc_1fr *up;
 P173 decls_1134;
 P139 *aw_1135;
 P173 e_2890;
 P116 y_2891;
 P139 p_2892;
};
struct f_task_failure_1138fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1137;
 P116 y_2894;
 P139 a_2895;
 P139 i_2896;
 P121 it_2897;
};
struct f_entry_sym_1142fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1139;
 P116 *y_1140;
 P173 *ix_1141;
 P116 t_2898;
};
struct f_other_call_1147fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1143;
 int is_stmt_1144;
 P121 *t_1145;
 P139 *r_1146;
 P116 y_2899;
 P1761 pm_2900;
 P173 a_2901;
 P139 parts_2902;
 P139 v_2903;
 P139 lv_2904;
 P139 ent_2905;
 P139 act_2906;
 P139 i_2907;
 P121 vt_2908;
 P121 lt_2909;
 P177 lc_2910;
 int ro_2911;
 P173 ix_2912;
 P173 fix_2913;
 P173 args_node_2914;
};
struct f_other_attr_1152fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1148;
 P116 y_1149;
 P121 *t_1150;
 P139 *r_1151;
 rt_gstr a_2916;
 P139 p_2917;
};
struct f_member_attr_1156fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1153;
 P121 *t_1154;
 P139 *r_1155;
 P116 y_2918;
 P173 ix_2919;
 P139 i_2920;
 P139 p_2921;
 P121 vt_2922;
};
struct f_task_builtin_1162fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1157;
 P173 args_1158;
 rt_int line_1159;
 P121 *t_1160;
 P139 *r_1161;
 P121 vt_2923;
 P139 v_2924;
};
struct f_gen_accept_1164fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1163;
 P116 y_2925;
 P142 saved_ax_2926;
 P139 ent_2927;
 P139 ep_2928;
 P139 xf_2929;
 P139 x_2930;
 P1761 pm_2931;
 P173 f_2932;
 P116 p_2933;
};
struct f_member_slot_1168fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1165;
 P173 s_1166;
 P139 *ent_1167;
 P121 vt_2935;
 P139 v_2936;
};
struct f_gen_delay_ticks_1171fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1169;
 P139 *r_1170;
 P121 vt_2937;
 P139 v_2938;
};
struct f_gen_select_1173fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1172;
 P173 alt_2939;
 rt_int n_2940;
 rt_int i_2941;
 int has_delay_2942;
 int has_accept_2943;
 P139 al_2944;
 P139 w_2945;
 P139 g_2946;
 P139 ent_2947;
 P139 ticks_2948;
 P121 vt_2949;
 P116 y_2950;
};
struct f_family_range_1178fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1174;
 P173 ix_1175;
 P139 *lo_1176;
 P139 *hi_1177;
 P121 vt_2954;
};
struct f_task_statement_gen_1180fr { int dummy;
 struct f_greenc_1fr *up;
 P173 s_1179;
 P173 n_2955;
 P173 ix_2956;
 P116 y_2957;
 P139 a_2958;
 P139 d_2959;
 P139 l_2960;
 P139 ticks_2961;
 P139 lo_2962;
 P139 hi_2963;
};
struct f_root_name_1182fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1181;
 P173 result_;
};
struct f_check_pure_target_1185fr { int dummy;
 struct f_greenc_1fr *up;
 P173 target_1183;
 rt_int line_1184;
 P173 n_2967;
 P116 y_2968;
};
struct f_assigns_nonlocal_1188fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_1186;
 rt_gstr name_1187;
 int result_;
};
struct f_declares_1191fr { int dummy;
 struct f_greenc_1fr *up;
 P173 d_1189;
 rt_gstr name_1190;
 int result_;
 P173 p_2969;
 P173 e_2970;
};
struct f_scan_handlers_1195fr { int dummy;
 struct f_greenc_1fr *up;
 P173 h_1192;
 P173 d_1193;
 rt_gstr name_1194;
 int result_;
 P173 p_2973;
};
struct f_scan_assigns_1199fr { int dummy;
 struct f_greenc_1fr *up;
 P173 stmts_1196;
 P173 d_1197;
 rt_gstr name_1198;
 int result_;
 P173 s_2975;
 P173 a_2976;
 P173 r_2977;
};
struct f_check_call_rules_1202fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1200;
 P116 y_1201;
 P116 z_2981;
 P116 s_2982;
};
struct f_generic_p_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P173 *res_1203;
 P173 x_2984;
 P173 p_2985;
 P173 head_2986;
 P173 tail_2987;
 P173 names_2988;
 P173 st_2989;
 P173 def_2990;
 P173 sub_2991;
 P139 def_name_text_2992;
 int more_2993;
};
struct f_instantiation_1207fr { int dummy;
 struct f_greenc_1fr *up;
 P173 x_1205;
 P173 *res_1206;
 P173 i_2996;
 P173 head_2997;
 P173 tail_2998;
 P173 a_2999;
 P139 formal_3000;
 rt_int mark_3001;
 int more_3002;
};
struct f_generic_decl_1209fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1208;
 P116 y_3004;
};
struct f_is_generic_name_1211fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1210;
 int result_;
 P116 y_3005;
};
struct f_attach_generic_body_1213fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1212;
 P116 y_3006;
};
struct f_restore_generic_context_1216fr { int dummy;
 struct f_greenc_1fr *up;
 P173 body_node_1214;
 rt_int line_1215;
 P145 ctx_3009;
 P116 m_3010;
 P116 z_3011;
 int seen_3012;
};
struct f_gactual_1220fr { int dummy;
 struct f_greenc_1fr *up;
 P173 args_1217;
 rt_int nth_1218;
 rt_gstr name_1219;
 P173 result_;
 P173 a_3017;
 rt_int i_3018;
};
struct f_copy_node_1224fr { int dummy;
 struct f_greenc_1fr *up;
 P173 n_1221;
 P139 name_1222;
 P173 *r_1223;
};
struct f_matches_formal_1228fr { int dummy;
 struct f_greenc_1fr *up;
 P116 y_1225;
 rt_gstr name_1226;
 P116 fs_1227;
 int result_;
};
struct f_instantiate_1230fr { int dummy;
 struct f_greenc_1fr *up;
 P173 e_1229;
 P116 g_3020;
 P173 gd_3021;
 P173 pat_3022;
 P173 f_3023;
 P173 a_3024;
 P173 cn_3025;
 P116 y_3026;
 P116 z_3027;
 P116 fs_3028;
 rt_int nth_3029;
 P121 t_3030;
 P121 vt_3031;
 P177 c_3032;
 P139 v_3033;
 P139 acc_3034;
 P139 x_3035;
 int ok_3036;
};
struct f_predef_type_1235fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1231;
 P121 t_1232;
 rt_gstr lo_1233;
 rt_gstr hi_1234;
 P116 y_3040;
};
struct f_predef_const_1239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1236;
 P121 t_1237;
 rt_gstr code_text_1238;
 P116 y_3047;
};
struct f_predef_exc_1241fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1240;
 P116 y_3048;
};
struct f_predef_lit_1245fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1242;
 P121 t_1243;
 rt_int v_1244;
 P116 y_3049;
};
struct f_predefine_1246fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr control_3050;
 rt_int start_3051;
 rt_int code_no_3052;
 rt_int i_3055;
 rt_int i_3063;
};
struct f_translate_1248fr { int dummy;
 struct f_greenc_1fr *up;
 P173 u_1247;
 P173 p_3067;
 P116 y_3068;
};
struct f_print_program_1249fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_greenc_1fr { int dummy;
 rt_int k_eof_2;
 rt_int k_id_3;
 rt_int k_kw_4;
 rt_int k_op_5;
 rt_int k_int_6;
 rt_int k_float_7;
 rt_int k_str_8;
 rt_int n_int_9;
 rt_int n_float_10;
 rt_int n_str_11;
 rt_int n_nil_12;
 rt_int n_name_13;
 rt_int n_unop_14;
 rt_int n_binop_15;
 rt_int n_apply_16;
 rt_int n_select_17;
 rt_int n_attr_18;
 rt_int n_new_19;
 rt_int n_agg_20;
 rt_int n_citem_21;
 rt_int n_range_22;
 rt_int n_paren_23;
 rt_int n_raw_24;
 rt_int n_assign_25;
 rt_int n_call_26;
 rt_int n_if_27;
 rt_int n_case_28;
 rt_int n_loop_29;
 rt_int n_block_30;
 rt_int n_exit_31;
 rt_int n_return_32;
 rt_int n_raise_33;
 rt_int n_reraise_34;
 rt_int n_assert_35;
 rt_int n_null_36;
 rt_int n_delay_37;
 rt_int n_initiate_38;
 rt_int n_accept_39;
 rt_int n_selects_40;
 rt_int n_abort_41;
 rt_int n_var_42;
 rt_int n_const_43;
 rt_int n_type_44;
 rt_int n_subtype_45;
 rt_int n_proc_46;
 rt_int n_func_47;
 rt_int n_exc_48;
 rt_int n_param_49;
 rt_int n_pkgspec_50;
 rt_int n_pkgbody_51;
 rt_int n_taskspec_52;
 rt_int n_taskbody_53;
 rt_int n_entry_54;
 rt_int n_inst_55;
 rt_int n_generic_56;
 rt_int n_use_57;
 rt_int n_pragma_58;
 rt_int n_slabel_59;
 rt_int n_goto_60;
 rt_int n_arm_61;
 rt_int n_label_62;
 rt_int n_handler_63;
 rt_int n_comp_64;
 rt_int n_alt_65;
 rt_int d_enum_66;
 rt_int d_range_67;
 rt_int d_float_68;
 rt_int d_array_69;
 rt_int d_record_70;
 rt_int d_access_71;
 rt_int d_derived_72;
 rt_int d_private_73;
 rt_int s_mark_74;
 rt_int m_in_75;
 rt_int m_inout_76;
 rt_int m_out_77;
 rt_int t_int_78;
 rt_int t_bool_79;
 rt_int t_float_80;
 rt_int t_enum_81;
 rt_int t_string_82;
 rt_int t_array_83;
 rt_int t_record_84;
 rt_int t_ptr_85;
 rt_int t_void_86;
 rt_int t_nil_87;
 rt_int t_char_88;
 rt_int t_univ_89;
 rt_int t_act_90;
 rt_int t_tdecl_91;
 rt_int t_entry_92;
 rt_int t_fixed_93;
 rt_int y_var_94;
 rt_int y_const_95;
 rt_int y_func_96;
 rt_int y_proc_97;
 rt_int y_type_98;
 rt_int y_exc_99;
 rt_int y_enumlit_100;
 rt_int y_package_101;
 rt_int y_task_102;
 rt_int y_entry_103;
 rt_int y_generic_104;
 rt_int f_const_obj_105;
 rt_int f_deferred_106;
 A108 toks_111;
 rt_int ntoks_112;
 rt_int tpos_113;
 rt_int src_line_114;
 A115 table_118;
 rt_int depth_119;
 P116 scope_stack_120;
 P121 all_types_123;
 rt_int serial_124;
 P125 out_types_127;
 P125 out_frames_128;
 P125 out_helpers_129;
 P125 out_protos_130;
 P125 out_globals_131;
 P125 out_funcs_132;
 P125 out_init_133;
 P125 out_excs_134;
 P125 code_135;
 P125 fields_buf_136;
 int in_func_137;
 rt_int cur_level_138;
 P139 st_field_140;
 P116 func_sym_141;
 P142 exits_144;
 P145 generic_contexts_147;
 P142 accept_exits_148;
 rt_int frames_149;
 P150 handlers_152;
 P150 cleanups_153;
 rt_int trial_154;
 P121 ty_int_155;
 P121 ty_bool_156;
 P121 ty_float_157;
 P121 ty_char_158;
 P121 ty_string_159;
 P121 ty_void_160;
 P121 ty_nil_161;
 P121 ty_univ_162;
 P121 ty_act_163;
 P121 ty_tdecl_164;
 P121 ty_entry_165;
 P121 ty_short_166;
 P121 ty_long_167;
 P121 ty_sfloat_168;
 P121 ty_lfloat_169;
 P121 ty_time_170;
 P121 ty_ufixed_171;
 P121 completing_172;
 P173 anon_node_175;
 P121 anon_typ_176;
 P177 anon_cons_179;
 P139 agg_bounds_180;
 P116 disc_syms_181;
 A182 unit_names_183;
 A184 unit_depths_185;
 rt_int nunits_187;
 P188 body_labels_190;
 P188 body_gotos_191;
 rt_int segments_192;
 P142 handler_exits_193;
 rt_int handler_depth_194;
 P139 post_checks_195;
 P116 cur_task_196;
 rt_int accept_depth_197;
 int famarg_done_198;
 P173 fam_ix_199;
 P173 call_task_ix_200;
 int saw_interface_201;
 int defer_entry_structs_202;
 P125 out_awaits_203;
 P177 no_cons_204;
 P173 units_205;
 P150 pkg_stack_206;
 P173 cur_pkg_207;
 P139 prefix_hint_208;
 P121 call_want_209;
 P116 pure_sym_210;
 rt_int pure_depth_211;
 int vrp_ok_212;
 int in_lv_path_213;
 int last_deref_214;
 P139 main_name_215;
 P139 conf_system_216;
 rt_int conf_storage_unit_217;
 rt_int conf_memory_size_218;
 P139 conf_optimize_219;
};
static void as_A2492(A2492 *d, A2492 s);
static A2492 cp_A2492(A2492 s);
static int eq_A2492(A2492 a, A2492 b);
static A2492 cat_A2492(A2492 a, A2492 b);
static A2492 one_A2492(rt_int e);
static void as_A2489(A2489 *d, A2489 s);
static A2489 cp_A2489(A2489 s);
static int eq_A2489(A2489 a, A2489 b);
static A2489 cat_A2489(A2489 a, A2489 b);
static A2489 one_A2489(rt_int e);
static void as_A2484(A2484 *d, A2484 s);
static A2484 cp_A2484(A2484 s);
static int eq_A2484(A2484 a, A2484 b);
static A2484 cat_A2484(A2484 a, A2484 b);
static A2484 one_A2484(int e);
static A2484 and_A2484(A2484 a, A2484 b);
static A2484 or_A2484(A2484 a, A2484 b);
static A2484 xor_A2484(A2484 a, A2484 b);
static A2484 not_A2484(A2484 a);
static void as_A2159(A2159 *d, A2159 s);
static A2159 cp_A2159(A2159 s);
static int eq_A2159(A2159 a, A2159 b);
static A2159 cat_A2159(A2159 a, A2159 b);
static A2159 one_A2159(rt_int e);
static void as_R1905(R1905 *d, R1905 s);
static R1905 cp_R1905(R1905 s);
static int eq_R1905(R1905 a, R1905 b);
static void as_R1784(R1784 *d, R1784 s);
static R1784 cp_R1784(R1784 s);
static int eq_R1784(R1784 a, R1784 b);
static void as_R1780(R1780 *d, R1780 s);
static R1780 cp_R1780(R1780 s);
static int eq_R1780(R1780 a, R1780 b);
static void as_R1762(R1762 *d, R1762 s);
static R1762 cp_R1762(R1762 s);
static int eq_R1762(R1762 a, R1762 b);
static void as_R189(R189 *d, R189 s);
static R189 cp_R189(R189 s);
static int eq_R189(R189 a, R189 b);
static void as_A184(A184 *d, A184 s);
static A184 cp_A184(A184 s);
static int eq_A184(A184 a, A184 b);
static A184 cat_A184(A184 a, A184 b);
static A184 one_A184(rt_int e);
static void as_A182(A182 *d, A182 s);
static A182 cp_A182(A182 s);
static int eq_A182(A182 a, A182 b);
static A182 cat_A182(A182 a, A182 b);
static A182 one_A182(P139 e);
static void as_R178(R178 *d, R178 s);
static R178 cp_R178(R178 s);
static int eq_R178(R178 a, R178 b);
static void as_R174(R174 *d, R174 s);
static R174 cp_R174(R174 s);
static int eq_R174(R174 a, R174 b);
static void as_R151(R151 *d, R151 s);
static R151 cp_R151(R151 s);
static int eq_R151(R151 a, R151 b);
static void as_R146(R146 *d, R146 s);
static R146 cp_R146(R146 s);
static int eq_R146(R146 a, R146 b);
static void as_R143(R143 *d, R143 s);
static R143 cp_R143(R143 s);
static int eq_R143(R143 a, R143 b);
static void as_R126(R126 *d, R126 s);
static R126 cp_R126(R126 s);
static int eq_R126(R126 a, R126 b);
static void as_R122(R122 *d, R122 s);
static R122 cp_R122(R122 s);
static int eq_R122(R122 a, R122 b);
static void as_R117(R117 *d, R117 s);
static R117 cp_R117(R117 s);
static int eq_R117(R117 a, R117 b);
static void as_A115(A115 *d, A115 s);
static A115 cp_A115(A115 s);
static int eq_A115(A115 a, A115 b);
static A115 cat_A115(A115 a, A115 b);
static A115 one_A115(P116 e);
static void as_R110(R110 *d, R110 s);
static R110 cp_R110(R110 s);
static int eq_R110(R110 a, R110 b);
static void as_A108(A108 *d, A108 s);
static A108 cp_A108(A108 s);
static int eq_A108(A108 a, A108 b);
static A108 cat_A108(A108 a, A108 b);
static A108 one_A108(P109 e);
static void as_rt_gstr(rt_gstr *d, rt_gstr s);
static rt_gstr cp_rt_gstr(rt_gstr s);
static int eq_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr one_rt_gstr(int e);
static P139 f_mk_221(struct f_greenc_1fr *up_, rt_gstr s_220);
static void f_new_name_224(struct f_greenc_1fr *up_, rt_gstr base_222, P139 *res_223);
static int f_is_letter_226(struct f_greenc_1fr *up_, int c_225);
static int f_is_digit_228(struct f_greenc_1fr *up_, int c_227);
static int f_upper_230(struct f_greenc_1fr *up_, int c_229);
static rt_gstr f_lower_s_232(struct f_greenc_1fr *up_, rt_gstr s_231);
static rt_gstr f_upper_s_234(struct f_greenc_1fr *up_, rt_gstr s_233);
static int f_is_operator_236(struct f_greenc_1fr *up_, rt_gstr s_235);
static rt_gstr f_c_field_238(struct f_greenc_1fr *up_, rt_gstr s_237);
static rt_gstr f_q_239(struct f_greenc_1fr *up_);
static void f_fail_242(struct f_greenc_1fr *up_, rt_int line_240, rt_gstr msg_241);
static P125 f_new_buffer_243(struct f_greenc_1fr *up_);
static void f_put_to_246(struct f_greenc_1fr *up_, P125 b_244, rt_gstr s_245);
static void f_emit_248(struct f_greenc_1fr *up_, rt_gstr s_247);
static void f_print_buffer_250(struct f_greenc_1fr *up_, P125 b_249);
static void f_splice_253(struct f_greenc_1fr *up_, P125 a_251, P125 b_252);
static int f_is_reserved_255(struct f_greenc_1fr *up_, rt_gstr w_254);
static void f_add_token_259(struct f_greenc_1fr *up_, rt_int kind_256, rt_gstr s_257, rt_int ival_258);
static rt_int f_digit_value_261(struct f_greenc_1fr *up_, int c_260);
static rt_int f_digit_in_264(struct f_greenc_1fr *up_, int c_262, rt_int base_263);
static void f_accumulate_268(struct f_greenc_1fr *up_, rt_int *v_265, rt_int base_266, rt_int d_267);
static void f_lex_line_270(struct f_greenc_1fr *up_, rt_gstr line_269);
static int f_exponent_ahead_273(struct f_greenc_1fr *up_, rt_gstr line_271, rt_int j_272);
static void f_exponent_278(struct f_greenc_1fr *up_, rt_gstr line_274, rt_int *j_275, rt_gstr *buf_276, rt_int *bl_277);
static void f_include_open_281(struct f_greenc_1fr *up_, rt_gstr name_279, rt_int *length_280);
static void f_include_char_284(struct f_greenc_1fr *up_, rt_int i_282, int *c_283);
static void f_check_include_285(struct f_greenc_1fr *up_);
static void f_include_text_287(struct f_greenc_1fr *up_, rt_int n_286);
static void f_include_line_291(struct f_greenc_1fr *up_, rt_gstr t_288, rt_int from_289, rt_int to_290);
static void f_read_source_292(struct f_greenc_1fr *up_);
static P173 f_nn_295(struct f_greenc_1fr *up_, rt_int kind_293, rt_int line_294);
static void f_append_299(struct f_greenc_1fr *up_, P173 *head_296, P173 *tail_297, P173 x_298);
static rt_int f_list_len_301(struct f_greenc_1fr *up_, P173 l_300);
static rt_int f_cur_line_302(struct f_greenc_1fr *up_);
static int f_at_kw_304(struct f_greenc_1fr *up_, rt_gstr w_303);
static int f_at_op_306(struct f_greenc_1fr *up_, rt_gstr w_305);
static int f_at_kind_308(struct f_greenc_1fr *up_, rt_int k_307);
static rt_int f_kind_at_310(struct f_greenc_1fr *up_, rt_int k_309);
static rt_gstr f_text_at_312(struct f_greenc_1fr *up_, rt_int k_311);
static void f_perror_314(struct f_greenc_1fr *up_, rt_gstr msg_313);
static void f_skip_315(struct f_greenc_1fr *up_);
static void f_expect_kw_317(struct f_greenc_1fr *up_, rt_gstr w_316);
static void f_expect_op_319(struct f_greenc_1fr *up_, rt_gstr w_318);
static void f_expect_id_321(struct f_greenc_1fr *up_, P139 *res_320);
static void f_name_node_323(struct f_greenc_1fr *up_, P173 *res_322);
static void f_id_list_325(struct f_greenc_1fr *up_, P173 *res_324);
static P173 f_binop_330(struct f_greenc_1fr *up_, P139 op_326, P173 l_327, P173 r_328, rt_int line_329);
static void f_expr_332(struct f_greenc_1fr *up_, P173 *res_331);
static int f_is_rel_334(struct f_greenc_1fr *up_, rt_gstr s_333);
static void f_relation_336(struct f_greenc_1fr *up_, P173 *res_335);
static rt_gstr f_path_of_338(struct f_greenc_1fr *up_, P173 e_337);
static void f_simple_expr_340(struct f_greenc_1fr *up_, P173 *res_339);
static void f_term_342(struct f_greenc_1fr *up_, P173 *res_341);
static void f_factor_344(struct f_greenc_1fr *up_, P173 *res_343);
static void f_primary_346(struct f_greenc_1fr *up_, P173 *res_345);
static void f_agg_or_paren_348(struct f_greenc_1fr *up_, P173 *res_347);
static int f_choice_token_350(struct f_greenc_1fr *up_, P109 t_349);
static int f_aggregate_ahead_351(struct f_greenc_1fr *up_);
static void f_name_p_353(struct f_greenc_1fr *up_, P173 *res_352);
static void f_component_list_355(struct f_greenc_1fr *up_, P173 *res_354);
static void f_discrete_range_p_357(struct f_greenc_1fr *up_, P173 *res_356);
static void f_subtype_ind_359(struct f_greenc_1fr *up_, P173 *res_358);
static void f_type_spec_361(struct f_greenc_1fr *up_, P173 *res_360);
static void f_type_def_363(struct f_greenc_1fr *up_, P173 *res_362);
static void f_pragma_p_365(struct f_greenc_1fr *up_, P173 *res_364);
static void f_check_pragma_367(struct f_greenc_1fr *up_, P173 x_366);
static void f_skip_visibility_368(struct f_greenc_1fr *up_);
static void f_skip_representation_369(struct f_greenc_1fr *up_);
static void f_decl_part_371(struct f_greenc_1fr *up_, P173 *res_370);
static void f_object_decl_373(struct f_greenc_1fr *up_, P173 *res_372);
static void f_type_decl_375(struct f_greenc_1fr *up_, P173 *res_374);
static void f_formal_part_377(struct f_greenc_1fr *up_, P173 *res_376);
static void f_designator_379(struct f_greenc_1fr *up_, P139 *res_378);
static void f_subprogram_381(struct f_greenc_1fr *up_, P173 *res_380);
static void f_body_part_383(struct f_greenc_1fr *up_, P173 x_382);
static void f_parse_handlers_385(struct f_greenc_1fr *up_, P173 *res_384);
static void f_package_p_387(struct f_greenc_1fr *up_, P173 *res_386);
static int f_at_statements_end_388(struct f_greenc_1fr *up_);
static void f_statements_390(struct f_greenc_1fr *up_, P173 *res_389);
static void f_statement_392(struct f_greenc_1fr *up_, P173 *res_391);
static void f_labelled_statement_395(struct f_greenc_1fr *up_, P139 label_393, P173 *res_394);
static void f_task_statement_397(struct f_greenc_1fr *up_, P173 *res_396);
static void f_if_stmt_399(struct f_greenc_1fr *up_, P173 *res_398);
static void f_case_stmt_401(struct f_greenc_1fr *up_, P173 *res_400);
static void f_loop_stmt_403(struct f_greenc_1fr *up_, P173 *res_402);
static void f_compilation_405(struct f_greenc_1fr *up_, P173 *res_404);
static rt_int f_hash_407(struct f_greenc_1fr *up_, rt_gstr s_406);
static P116 f_lookup_409(struct f_greenc_1fr *up_, rt_gstr name_408);
static int f_same_task_412(struct f_greenc_1fr *up_, P116 a_410, P116 b_411);
static P116 f_lookup_entry_415(struct f_greenc_1fr *up_, rt_gstr name_413, P116 owner_414);
static P116 f_lookup_at_418(struct f_greenc_1fr *up_, rt_gstr name_416, rt_int d_417);
static rt_int f_enclosing_depth_420(struct f_greenc_1fr *up_, rt_gstr name_419);
static void f_push_unit_422(struct f_greenc_1fr *up_, P139 name_421);
static P116 f_lookup_decl_424(struct f_greenc_1fr *up_, P173 d_423);
static int f_overloadable_426(struct f_greenc_1fr *up_, P116 y_425);
static int f_same_429(struct f_greenc_1fr *up_, P121 a_427, P121 b_428);
static P121 f_root_431(struct f_greenc_1fr *up_, P121 t_430);
static int f_derived_from_434(struct f_greenc_1fr *up_, P121 a_432, P121 b_433);
static int f_is_numeric_436(struct f_greenc_1fr *up_, P121 t_435);
static int f_is_discrete_438(struct f_greenc_1fr *up_, P121 t_437);
static int f_same_types_441(struct f_greenc_1fr *up_, P1761 a_439, P1761 b_440);
static int f_same_signature_444(struct f_greenc_1fr *up_, P1761 a_442, P1761 b_443);
static int f_distinct_overload_447(struct f_greenc_1fr *up_, P116 y_445, P116 z_446);
static void f_define_450(struct f_greenc_1fr *up_, P116 y_448, rt_int line_449);
static void f_open_scope_451(struct f_greenc_1fr *up_);
static void f_close_scope_452(struct f_greenc_1fr *up_);
static P116 f_new_sym_455(struct f_greenc_1fr *up_, rt_int kind_453, P139 name_454);
static P121 f_new_typ_457(struct f_greenc_1fr *up_, rt_int kind_456);
static P177 f_new_cons_458(struct f_greenc_1fr *up_);
static int f_bounded_460(struct f_greenc_1fr *up_, P177 c_459);
static int f_bounded_hi_462(struct f_greenc_1fr *up_, P177 c_461);
static int f_static_bounds_464(struct f_greenc_1fr *up_, P177 c_463);
static int f_discriminated_466(struct f_greenc_1fr *up_, P177 c_465);
static rt_gstr f_kind_name_468(struct f_greenc_1fr *up_, P121 t_467);
static void f_check_type_472(struct f_greenc_1fr *up_, P121 got_469, P121 want_470, rt_int line_471);
static rt_int f_field_count_474(struct f_greenc_1fr *up_, P121 t_473);
static void f_ctype_477(struct f_greenc_1fr *up_, P121 t_475, P139 *r_476);
static void f_field_decls_480(struct f_greenc_1fr *up_, P121 t_478, P139 *r_479);
static void f_declare_ctype_482(struct f_greenc_1fr *up_, P121 t_481);
static rt_int f_lit_index_485(struct f_greenc_1fr *up_, P173 lits_483, rt_gstr name_484);
static void f_manifest_489(struct f_greenc_1fr *up_, P173 e_486, rt_int *v_487, int *ok_488);
static void f_resolve_493(struct f_greenc_1fr *up_, P173 st_490, P121 *t_491, P177 *c_492);
static void f_constraint_list_497(struct f_greenc_1fr *up_, P173 st_494, P121 t_495, P177 c_496);
static void f_discriminant_constraint_501(struct f_greenc_1fr *up_, P173 st_498, P121 t_499, P177 c_500);
static void f_discrete_bounds_507(struct f_greenc_1fr *up_, P173 r_502, P121 want_503, P121 *t_504, P139 *lo_505, P139 *hi_506);
static void f_range_of_511(struct f_greenc_1fr *up_, P173 r_508, P121 t_509, P177 c_510);
static void f_fresh_typ_515(struct f_greenc_1fr *up_, rt_int kind_512, P139 name_513, P121 *t_514);
static void f_inherit_519(struct f_greenc_1fr *up_, P121 parent_516, P121 t_517, rt_int line_518);
static void f_derive_literals_522(struct f_greenc_1fr *up_, P121 t_520, rt_int line_521);
static void f_type_definition_527(struct f_greenc_1fr *up_, P173 d_523, P139 name_524, P121 *t_525, P177 *c_526);
static void f_array_type_534(struct f_greenc_1fr *up_, P173 idx_528, P173 comp_529, P139 name_530, rt_int line_531, P121 *t_532, P177 *c_533);
static void f_static_range_538(struct f_greenc_1fr *up_, P173 l_535, P173 h_536, P177 c_537);
static void f_component_place_544(struct f_greenc_1fr *up_, P121 rt_539, P1779 f_540, rt_gstr a_541, rt_gstr ct_542, P139 *r_543);
static rt_gstr f_no_value_546(struct f_greenc_1fr *up_, P121 t_545);
static void f_elem_ctype_549(struct f_greenc_1fr *up_, P121 t_547, P139 *r_548);
static void f_first_index_552(struct f_greenc_1fr *up_, P121 t_550, P139 *r_551);
static int f_is_string_554(struct f_greenc_1fr *up_, P121 t_553);
static rt_gstr f_subst_557(struct f_greenc_1fr *up_, rt_gstr s_555, rt_gstr r_556);
static int f_mentions_record_559(struct f_greenc_1fr *up_, P139 s_558);
static void f_subst_cons_563(struct f_greenc_1fr *up_, P177 c_560, rt_gstr r_561, P177 *res_562);
static void f_remove_sym_565(struct f_greenc_1fr *up_, P116 y_564);
static void f_record_components_570(struct f_greenc_1fr *up_, P173 list_566, P121 t_567, P1904 g_568, rt_int line_569);
static void f_guard_cond_574(struct f_greenc_1fr *up_, P1904 g_571, P121 t_572, P139 *r_573);
static void f_arm_test_579(struct f_greenc_1fr *up_, P173 arm_575, P139 dname_576, rt_gstr d_577, P139 *x_578);
static void f_derived_type_584(struct f_greenc_1fr *up_, P173 d_580, P139 name_581, P121 *t_582, P177 *c_583);
static void f_real_type_589(struct f_greenc_1fr *up_, P173 d_585, P139 name_586, P121 *t_587, P177 *c_588);
static void f_finish_ptr_591(struct f_greenc_1fr *up_, P121 t_590);
static void f_init_storage_595(struct f_greenc_1fr *up_, rt_gstr lval_592, P121 t_593, P177 c_594);
static int f_composite_597(struct f_greenc_1fr *up_, P121 t_596);
static void f_assign_code_603(struct f_greenc_1fr *up_, rt_gstr lval_598, P121 t_599, rt_gstr v_600, P177 c_601, P139 *r_602);
static void f_copy_code_607(struct f_greenc_1fr *up_, P121 t_604, rt_gstr v_605, P139 *r_606);
static void f_eq_code_612(struct f_greenc_1fr *up_, P121 t_608, rt_gstr a_609, rt_gstr b_610, P139 *r_611);
static int f_seen_name_615(struct f_greenc_1fr *up_, P150 l_613, rt_gstr s_614);
static void f_emit_helpers_616(struct f_greenc_1fr *up_);
static void f_helper_bodies_618(struct f_greenc_1fr *up_, P121 t_617);
static void f_storage_622(struct f_greenc_1fr *up_, rt_gstr name_619, P121 t_620, P139 *access_code_621);
static void f_bind_625(struct f_greenc_1fr *up_, P116 y_623, P139 access_code_624);
static void f_declare_subprograms_627(struct f_greenc_1fr *up_, P173 from_626);
static void f_declare_one_629(struct f_greenc_1fr *up_, P173 e_628);
static void f_elaborate_defaults_631(struct f_greenc_1fr *up_, P116 y_630);
static void f_build_subprogram_634(struct f_greenc_1fr *up_, P173 d_632, P116 *y_633);
static void f_decl_elements_636(struct f_greenc_1fr *up_, P173 decls_635);
static void f_decl_element_638(struct f_greenc_1fr *up_, P173 e_637);
static void f_pragma_decl_640(struct f_greenc_1fr *up_, P173 e_639);
static void f_resolve_object_type_644(struct f_greenc_1fr *up_, P173 st_641, P121 *t_642, P177 *c_643);
static void f_other_decl_646(struct f_greenc_1fr *up_, P173 e_645);
static void f_scan_labels_649(struct f_greenc_1fr *up_, P173 stmts_647, rt_gstr path_648);
static void f_scan_guarded_653(struct f_greenc_1fr *up_, P173 stmts_650, P173 hs_651, rt_gstr path_652);
static rt_int f_count_g_655(struct f_greenc_1fr *up_, rt_gstr p_654);
static void f_label_body_658(struct f_greenc_1fr *up_, P173 stmts_656, P173 hs_657);
static void f_gen_label_661(struct f_greenc_1fr *up_, P173 s_659, int goto_it_660);
static int f_is_foreign_663(struct f_greenc_1fr *up_, P173 d_662);
static void f_subprogram_body_666(struct f_greenc_1fr *up_, P173 d_664, P116 y_665);
static void f_gen_statements_668(struct f_greenc_1fr *up_, P173 stmts_667);
static void f_pop_frames_670(struct f_greenc_1fr *up_, rt_int upto_669);
static void f_push_cleanup_672(struct f_greenc_1fr *up_, rt_gstr s_671);
static void f_pop_cleanup_673(struct f_greenc_1fr *up_);
static void f_guarded_678(struct f_greenc_1fr *up_, P173 decls_674, P173 stmts_675, P173 hs_676, rt_int line_677);
static void f_exc_id_682(struct f_greenc_1fr *up_, rt_gstr name_679, rt_int line_680, P139 *r_681);
static void f_gen_statement_684(struct f_greenc_1fr *up_, P173 s_683);
static void f_slice_assign_686(struct f_greenc_1fr *up_, P173 s_685);
static void f_gen_call_688(struct f_greenc_1fr *up_, P173 s_687);
static void f_gen_if_690(struct f_greenc_1fr *up_, P173 s_689);
static void f_gen_case_692(struct f_greenc_1fr *up_, P173 s_691);
static void f_selector_range_698(struct f_greenc_1fr *up_, P173 e_693, P121 t_694, rt_int *lo_695, rt_int *hi_696, int *ok_697);
static void f_push_exit_702(struct f_greenc_1fr *up_, P139 match_699, int is_loop_700, P139 *label_701);
static void f_gen_loop_704(struct f_greenc_1fr *up_, P173 s_703);
static void f_gen_block_706(struct f_greenc_1fr *up_, P173 s_705);
static int f_exit_matches_709(struct f_greenc_1fr *up_, P173 s_707, P142 x_708);
static void f_gen_exit_711(struct f_greenc_1fr *up_, P173 s_710);
static void f_gen_return_713(struct f_greenc_1fr *up_, P173 s_712);
static void f_access_of_716(struct f_greenc_1fr *up_, P116 y_714, P139 *r_715);
static void f_link_to_719(struct f_greenc_1fr *up_, rt_int l_717, P139 *r_718);
static rt_gstr f_c_ident_721(struct f_greenc_1fr *up_, rt_gstr s_720);
static void f_deref_725(struct f_greenc_1fr *up_, rt_gstr base_722, P121 t_723, P139 *r_724);
static int f_is_object_727(struct f_greenc_1fr *up_, P173 e_726);
static int f_is_const_access_729(struct f_greenc_1fr *up_, P173 e_728);
static void f_lvalue_735(struct f_greenc_1fr *up_, P173 e_730, P139 *code_out_731, P121 *t_732, P177 *c_733, int *ro_734);
static void f_select_on_744(struct f_greenc_1fr *up_, rt_gstr base_736, P121 bt_737, P173 e_738, int *ro_739, int lv_740, P139 *code_out_741, P121 *t_742, P177 *c_743);
static void f_index_on_753(struct f_greenc_1fr *up_, rt_gstr base_745, P121 bt_746, P173 e_747, int *ro_748, int lv_749, P139 *code_out_750, P121 *t_751, P177 *c_752);
static int f_type_attribute_756(struct f_greenc_1fr *up_, P121 t_754, rt_gstr name_755);
static int f_is_type_name_758(struct f_greenc_1fr *up_, rt_gstr n_757);
static int f_is_char_lit_760(struct f_greenc_1fr *up_, P173 e_759);
static int f_is_enum_lit_762(struct f_greenc_1fr *up_, P173 e_761);
static rt_gstr f_c_string_764(struct f_greenc_1fr *up_, rt_gstr s_763);
static int f_is_literal_766(struct f_greenc_1fr *up_, P173 e_765);
static void f_range_bounds_774(struct f_greenc_1fr *up_, P173 l_767, P173 h_768, P121 want_769, rt_int line_770, P121 *t_771, P139 *lo_772, P139 *hi_773);
static void f_gexpr_779(struct f_greenc_1fr *up_, P173 e_775, P121 want_776, P121 *t_777, P139 *r_778);
static void f_gexpr_1_784(struct f_greenc_1fr *up_, P173 e_780, P121 want_781, P121 *t_782, P139 *r_783);
static void f_string_aggregate_789(struct f_greenc_1fr *up_, P173 e_785, P121 want_786, P121 *t_787, P139 *r_788);
static void f_char_literal_794(struct f_greenc_1fr *up_, P173 e_790, P121 want_791, P121 *t_792, P139 *r_793);
static void f_expanded_797(struct f_greenc_1fr *up_, P173 e_795, P173 *r_796);
static void f_gen_name_802(struct f_greenc_1fr *up_, P173 e_798, P121 want_799, P121 *t_800, P139 *r_801);
static void f_gen_unop_807(struct f_greenc_1fr *up_, P173 e_803, P121 want_804, P121 *t_805, P139 *r_806);
static int f_short_int_809(struct f_greenc_1fr *up_, P121 t_808);
static rt_gstr f_float_kind_811(struct f_greenc_1fr *up_, P121 t_810);
static void f_membership_814(struct f_greenc_1fr *up_, P173 e_812, P139 *r_813);
static void f_condition_819(struct f_greenc_1fr *up_, P173 e_815, P121 want_816, P121 *t_817, P139 *r_818);
static void f_catenation_824(struct f_greenc_1fr *up_, P173 e_820, P121 want_821, P121 *t_822, P139 *r_823);
static void f_cat_operand_829(struct f_greenc_1fr *up_, P173 x_825, P121 arrt_826, rt_int line_827, P139 *r_828);
static void f_arithmetic_834(struct f_greenc_1fr *up_, P173 e_830, P121 want_831, P121 *t_832, P139 *r_833);
static void f_fixed_operation_842(struct f_greenc_1fr *up_, P173 e_835, P121 ta_836, P121 tb_837, rt_gstr a_838, rt_gstr b_839, P121 *t_840, P139 *r_841);
static void f_gen_binop_847(struct f_greenc_1fr *up_, P173 e_843, P121 want_844, P121 *t_845, P139 *r_846);
static void f_conversion_852(struct f_greenc_1fr *up_, P173 e_848, P116 y_849, P121 *t_850, P139 *r_851);
static void f_constrain_856(struct f_greenc_1fr *up_, P116 y_853, P121 t_854, P139 *r_855);
static void f_array_conversion_863(struct f_greenc_1fr *up_, P173 e_857, P121 t_858, P121 aty_859, P177 c_860, rt_gstr a_861, P139 *r_862);
static void f_gen_attr_868(struct f_greenc_1fr *up_, P173 e_864, P121 want_865, P121 *t_866, P139 *r_867);
static void f_type_bits_872(struct f_greenc_1fr *up_, P121 t_869, P177 c_870, P139 *r_871);
static void f_object_bits_876(struct f_greenc_1fr *up_, P121 t_873, rt_gstr v_874, P139 *r_875);
static void f_numeric_attr_882(struct f_greenc_1fr *up_, P173 e_877, P121 tt_878, P177 c_879, P121 *t_880, P139 *r_881);
static void f_component_attr_886(struct f_greenc_1fr *up_, P173 e_883, P121 *t_884, P139 *r_885);
static void f_config_attr_890(struct f_greenc_1fr *up_, P173 e_887, P121 *t_888, P139 *r_889);
static void f_attr_dim_894(struct f_greenc_1fr *up_, P173 e_891, P121 arrt_892, rt_int *n_893);
static void f_object_array_attr_900(struct f_greenc_1fr *up_, P173 e_895, P121 arrt_896, rt_gstr v_897, P121 *t_898, P139 *r_899);
static void f_type_array_attr_906(struct f_greenc_1fr *up_, P173 e_901, P121 arrt_902, P177 c_903, P121 *t_904, P139 *r_905);
static void f_lit_table_909(struct f_greenc_1fr *up_, P121 t_907, P139 *r_908);
static void f_val_rep_915(struct f_greenc_1fr *up_, P173 e_910, P121 tt_911, P177 c_912, P121 *t_913, P139 *r_914);
static void f_allocator_920(struct f_greenc_1fr *up_, P173 e_916, P121 want_917, P121 *t_918, P139 *r_919);
static void f_aggregate_925(struct f_greenc_1fr *up_, P173 e_921, P121 want_922, P121 *t_923, P139 *r_924);
static void f_captured_928(struct f_greenc_1fr *up_, P125 b_926, P139 *r_927);
static P1779 f_field_at_931(struct f_greenc_1fr *up_, P121 rt_929, rt_int k_930);
static int f_names_field_934(struct f_greenc_1fr *up_, P173 x_932, P1779 f_933);
static P173 f_item_for_939(struct f_greenc_1fr *up_, P173 e_935, P121 rt_936, rt_int k_937, rt_int p_938);
static void f_arm_holds_943(struct f_greenc_1fr *up_, P173 arm_940, rt_int v_941, int *res_942);
static void f_record_aggregate_947(struct f_greenc_1fr *up_, P173 e_944, P121 rt_945, P139 *r_946);
static rt_int f_field_index_950(struct f_greenc_1fr *up_, P121 rt_948, rt_gstr name_949);
static void f_agg_component_956(struct f_greenc_1fr *up_, rt_gstr tmp_951, P121 rt_952, rt_int k_953, P173 v_954, rt_int line_955);
static void f_static_choice_960(struct f_greenc_1fr *up_, P173 x_957, rt_int *v_958, int *ok_959);
static void f_array_aggregate_965(struct f_greenc_1fr *up_, P173 e_961, P121 arrt_962, P139 bounds_963, P139 *r_964);
static void f_element_store_969(struct f_greenc_1fr *up_, rt_gstr lv_966, P121 arrt_967, rt_gstr v_968);
static void f_check_choices_973(struct f_greenc_1fr *up_, P173 e_970, P121 arrt_971, int has_others_972);
static P173 f_actual_for_977(struct f_greenc_1fr *up_, P173 args_974, P1761 pm_975, P1761 first_976);
static void f_gcall_982(struct f_greenc_1fr *up_, P173 e_978, int is_stmt_979, P121 *t_980, P139 *r_981);
static void f_out_check_986(struct f_greenc_1fr *up_, rt_gstr lv_983, P121 t_984, P177 c_985);
static void f_var_path_989(struct f_greenc_1fr *up_, P173 e_987, P139 *r_988);
static int f_paths_overlap_992(struct f_greenc_1fr *up_, rt_gstr p_990, rt_gstr r_991);
static int f_mentions_995(struct f_greenc_1fr *up_, P173 n_993, rt_gstr name_994);
static int f_mentions_one_998(struct f_greenc_1fr *up_, P173 n_996, rt_gstr name_997);
static void f_check_aliasing_1002(struct f_greenc_1fr *up_, P173 e_999, P116 y_1000, P173 a_1001);
static void f_gcall_with_1007(struct f_greenc_1fr *up_, P173 e_1003, P116 y_1004, P121 *t_1005, P139 *r_1006);
static void f_builtin_1014(struct f_greenc_1fr *up_, rt_gstr name_1008, P173 args_1009, rt_int line_1010, int is_stmt_1011, P121 *t_1012, P139 *r_1013);
static P116 f_lookup_path_1016(struct f_greenc_1fr *up_, rt_gstr p_1015);
static int f_is_package_1018(struct f_greenc_1fr *up_, P173 e_1017);
static P116 f_member_of_1022(struct f_greenc_1fr *up_, rt_gstr p_1019, rt_gstr name_1020, rt_int line_1021);
static int f_inside_package_1024(struct f_greenc_1fr *up_, P173 p_1023);
static void f_copy_sym_1027(struct f_greenc_1fr *up_, P116 y_1025, P116 *z_1026);
static void f_complete_private_1030(struct f_greenc_1fr *up_, P121 ph_1028, P121 full_1029);
static void f_package_spec_1032(struct f_greenc_1fr *up_, P173 e_1031);
static int f_hidden_from_1035(struct f_greenc_1fr *up_, P116 m_1033, P116 first_private_1034);
static void f_package_body_1037(struct f_greenc_1fr *up_, P173 e_1036);
static int f_use_visible_1039(struct f_greenc_1fr *up_, P116 old_1038);
static void f_use_clause_1041(struct f_greenc_1fr *up_, P173 e_1040);
static void f_fits_1046(struct f_greenc_1fr *up_, P116 y_1042, P173 args_1043, P121 want_1044, int *ok_1045);
static int f_is_builtin_1048(struct f_greenc_1fr *up_, rt_gstr n_1047);
static void f_resolve_overload_1055(struct f_greenc_1fr *up_, rt_gstr name_1049, P173 args_1050, int is_stmt_1051, P121 want_1052, rt_int line_1053, P116 *y_1054);
static int f_same_profile_1058(struct f_greenc_1fr *up_, P116 a_1056, P116 b_1057);
static void f_resolve_member_overload_1066(struct f_greenc_1fr *up_, rt_gstr p_1059, rt_gstr name_1060, P173 args_1061, int is_stmt_1062, P121 want_1063, rt_int line_1064, P116 *y_1065);
static void f_user_operator_1072(struct f_greenc_1fr *up_, P173 e_1067, P121 want_1068, P121 *t_1069, P139 *r_1070, int *done_1071);
static void f_task_p_1074(struct f_greenc_1fr *up_, P173 *res_1073);
static void f_entry_p_1076(struct f_greenc_1fr *up_, P173 *res_1075);
static void f_accept_p_1078(struct f_greenc_1fr *up_, P173 *res_1077);
static void f_delay_p_1080(struct f_greenc_1fr *up_, P173 *res_1079);
static void f_designators_1082(struct f_greenc_1fr *up_, P173 *res_1081);
static void f_parse_task_statement_1084(struct f_greenc_1fr *up_, P173 *res_1083);
static void f_path_at_1088(struct f_greenc_1fr *up_, rt_int level_1085, rt_gstr field_1086, P139 *r_1087);
static int f_is_task_name_1090(struct f_greenc_1fr *up_, rt_gstr n_1089);
static void f_task_of_1094(struct f_greenc_1fr *up_, P173 e_1091, P116 *y_1092, P173 *ix_1093);
static void f_own_index_1096(struct f_greenc_1fr *up_, P139 *r_1095);
static void f_member_1101(struct f_greenc_1fr *up_, P116 y_1097, rt_gstr arr_1098, rt_gstr i_1099, P139 *r_1100);
static void f_act_path_1104(struct f_greenc_1fr *up_, P116 y_1102, P139 *r_1103);
static void f_act_path_i_1108(struct f_greenc_1fr *up_, P116 y_1105, rt_gstr i_1106, P139 *r_1107);
static void f_entry_path_1112(struct f_greenc_1fr *up_, P116 y_1109, rt_gstr i_1110, P139 *r_1111);
static void f_declare_slot_1115(struct f_greenc_1fr *up_, rt_gstr ctype_name_1113, rt_gstr field_1114);
static void f_task_decl_1117(struct f_greenc_1fr *up_, P173 e_1116);
static void f_family_arg_struct_1118(struct f_greenc_1fr *up_);
static void f_family_bounds_1122(struct f_greenc_1fr *up_, P173 b_1119, P116 y_1120, P139 x_1121);
static void f_entry_family_slot_1127(struct f_greenc_1fr *up_, P116 y_1123, rt_gstr base_1124, rt_gstr i_1125, P139 *r_1126);
static void f_task_spec_1129(struct f_greenc_1fr *up_, P173 e_1128);
static void f_entry_decl_1131(struct f_greenc_1fr *up_, P173 e_1130);
static void f_task_body_1133(struct f_greenc_1fr *up_, P173 e_1132);
static void f_task_awaits_1136(struct f_greenc_1fr *up_, P173 decls_1134, P139 *aw_1135);
static void f_task_failure_1138(struct f_greenc_1fr *up_, P173 s_1137);
static void f_entry_sym_1142(struct f_greenc_1fr *up_, P173 e_1139, P116 *y_1140, P173 *ix_1141);
static void f_other_call_1147(struct f_greenc_1fr *up_, P173 e_1143, int is_stmt_1144, P121 *t_1145, P139 *r_1146);
static void f_other_attr_1152(struct f_greenc_1fr *up_, P173 e_1148, P116 y_1149, P121 *t_1150, P139 *r_1151);
static void f_member_attr_1156(struct f_greenc_1fr *up_, P173 e_1153, P121 *t_1154, P139 *r_1155);
static void f_task_builtin_1162(struct f_greenc_1fr *up_, rt_gstr name_1157, P173 args_1158, rt_int line_1159, P121 *t_1160, P139 *r_1161);
static void f_gen_accept_1164(struct f_greenc_1fr *up_, P173 s_1163);
static void f_member_slot_1168(struct f_greenc_1fr *up_, P116 y_1165, P173 s_1166, P139 *ent_1167);
static void f_gen_delay_ticks_1171(struct f_greenc_1fr *up_, P173 e_1169, P139 *r_1170);
static void f_gen_select_1173(struct f_greenc_1fr *up_, P173 s_1172);
static void f_family_range_1178(struct f_greenc_1fr *up_, P116 y_1174, P173 ix_1175, P139 *lo_1176, P139 *hi_1177);
static void f_task_statement_gen_1180(struct f_greenc_1fr *up_, P173 s_1179);
static P173 f_root_name_1182(struct f_greenc_1fr *up_, P173 e_1181);
static void f_check_pure_target_1185(struct f_greenc_1fr *up_, P173 target_1183, rt_int line_1184);
static int f_assigns_nonlocal_1188(struct f_greenc_1fr *up_, P173 d_1186, rt_gstr name_1187);
static int f_declares_1191(struct f_greenc_1fr *up_, P173 d_1189, rt_gstr name_1190);
static int f_scan_handlers_1195(struct f_greenc_1fr *up_, P173 h_1192, P173 d_1193, rt_gstr name_1194);
static int f_scan_assigns_1199(struct f_greenc_1fr *up_, P173 stmts_1196, P173 d_1197, rt_gstr name_1198);
static void f_check_call_rules_1202(struct f_greenc_1fr *up_, P173 e_1200, P116 y_1201);
static void f_generic_p_1204(struct f_greenc_1fr *up_, P173 *res_1203);
static void f_instantiation_1207(struct f_greenc_1fr *up_, P173 x_1205, P173 *res_1206);
static void f_generic_decl_1209(struct f_greenc_1fr *up_, P173 e_1208);
static int f_is_generic_name_1211(struct f_greenc_1fr *up_, rt_gstr n_1210);
static void f_attach_generic_body_1213(struct f_greenc_1fr *up_, P173 e_1212);
static void f_restore_generic_context_1216(struct f_greenc_1fr *up_, P173 body_node_1214, rt_int line_1215);
static P173 f_gactual_1220(struct f_greenc_1fr *up_, P173 args_1217, rt_int nth_1218, rt_gstr name_1219);
static void f_copy_node_1224(struct f_greenc_1fr *up_, P173 n_1221, P139 name_1222, P173 *r_1223);
static int f_matches_formal_1228(struct f_greenc_1fr *up_, P116 y_1225, rt_gstr name_1226, P116 fs_1227);
static void f_instantiate_1230(struct f_greenc_1fr *up_, P173 e_1229);
static void f_predef_type_1235(struct f_greenc_1fr *up_, rt_gstr name_1231, P121 t_1232, rt_gstr lo_1233, rt_gstr hi_1234);
static void f_predef_const_1239(struct f_greenc_1fr *up_, rt_gstr name_1236, P121 t_1237, rt_gstr code_text_1238);
static void f_predef_exc_1241(struct f_greenc_1fr *up_, rt_gstr name_1240);
static void f_predef_lit_1245(struct f_greenc_1fr *up_, rt_gstr name_1242, P121 t_1243, rt_int v_1244);
static void f_predefine_1246(struct f_greenc_1fr *up_);
static void f_translate_1248(struct f_greenc_1fr *up_, P173 u_1247);
static void f_print_program_1249(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_107;
static P139 f_mk_221(struct f_greenc_1fr *up_, rt_gstr s_220) {
  struct f_mk_221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_220 = cp_rt_gstr(s_220);
F->r_1251.lo = ((rt_int)1LL); F->r_1251.hi = ({ rt_gstr at1250 = F->s_220; at1250.hi >= at1250.lo ? at1250.hi - at1250.lo + 1 : (rt_int)0; });
F->r_1251.lo2 = 1; F->r_1251.hi2 = 1;
F->r_1251.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1251));
memset(F->r_1251.p, 0xFF, (size_t)G_CNT(F->r_1251));
as_rt_gstr(&F->r_1251, F->s_220);
F->result_ = ({ rt_gstr *cell1253 = rt_alloc(sizeof(rt_gstr)); *cell1253 = cp_rt_gstr(F->r_1251); (P139)cell1253; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_224(struct f_greenc_1fr *up_, rt_gstr base_222, P139 *res_223) {
  struct f_new_name_224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_222 = cp_rt_gstr(base_222);
F->res_223 = res_223;
F->up->serial_124 = rt_add(G_NV(F->up->serial_124), ((rt_int)1LL));
(*F->res_223) = ({ rt_gstr *cell1254 = rt_alloc(sizeof(rt_gstr)); *cell1254 = cp_rt_gstr(cat_rt_gstr(F->base_222, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_124))))); (P139)cell1254; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_226(struct f_greenc_1fr *up_, int c_225) {
  struct f_is_letter_226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_225 = c_225;
F->result_ = (((F->c_225 >= 65) && (F->c_225 <= 90)) || ((F->c_225 >= 97) && (F->c_225 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_228(struct f_greenc_1fr *up_, int c_227) {
  struct f_is_digit_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_227 = c_227;
F->result_ = ((F->c_227 >= 48) && (F->c_227 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_230(struct f_greenc_1fr *up_, int c_229) {
  struct f_upper_230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_229 = c_229;
if (((F->c_229 >= 97) && (F->c_229 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_229) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_229, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_232(struct f_greenc_1fr *up_, rt_gstr s_231) {
  struct f_lower_s_232fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_231 = cp_rt_gstr(s_231);
F->r_1255 = cp_rt_gstr(F->s_231);
{ rt_int lo1259 = ((rt_int)1LL), hi1260 = ({ rt_gstr at1257 = F->s_231; at1257.hi >= at1257.lo ? at1257.hi - at1257.lo + 1 : (rt_int)0; });
for (rt_int it1261 = lo1259; it1261 <= hi1260; it1261++) {
F->i_1258 = it1261;
if (((G_NV(({ rt_gstr ix1262 = F->r_1255; ix1262.p[rt_index(F->i_1258, ix1262.lo, ix1262.hi) - ix1262.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1263 = F->r_1255; ix1263.p[rt_index(F->i_1258, ix1263.lo, ix1263.hi) - ix1263.lo]; })) <= 90))) {
(*({ rt_gstr *ix1264 = &(F->r_1255); &ix1264->p[rt_index(F->i_1258, ix1264->lo, ix1264->hi) - ix1264->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1265 = F->r_1255; ix1265.p[rt_index(F->i_1258, ix1265.lo, ix1265.hi) - ix1265.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1256: ;
F->result_ = F->r_1255;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_234(struct f_greenc_1fr *up_, rt_gstr s_233) {
  struct f_upper_s_234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_233 = cp_rt_gstr(s_233);
F->r_1266 = cp_rt_gstr(F->s_233);
{ rt_int lo1270 = ((rt_int)1LL), hi1271 = ({ rt_gstr at1268 = F->s_233; at1268.hi >= at1268.lo ? at1268.hi - at1268.lo + 1 : (rt_int)0; });
for (rt_int it1272 = lo1270; it1272 <= hi1271; it1272++) {
F->i_1269 = it1272;
(*({ rt_gstr *ix1273 = &(F->r_1266); &ix1273->p[rt_index(F->i_1269, ix1273->lo, ix1273->hi) - ix1273->lo]; })) = f_upper_230(F->up, G_NV(({ rt_gstr ix1275 = F->r_1266; ix1275.p[rt_index(F->i_1269, ix1275.lo, ix1275.hi) - ix1275.lo]; })));
}
}
L_end_1267: ;
F->result_ = F->r_1266;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_236(struct f_greenc_1fr *up_, rt_gstr s_235) {
  struct f_is_operator_236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_235 = cp_rt_gstr(s_235);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_235, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_235, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_235, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_235, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_235, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_235, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_235, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_235, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_235, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_235, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_235, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_238(struct f_greenc_1fr *up_, rt_gstr s_237) {
  struct f_c_field_238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_237 = cp_rt_gstr(s_237);
F->result_ = cat_rt_gstr(f_lower_s_232(F->up, F->s_237), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_239(struct f_greenc_1fr *up_) {
  struct f_q_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_242(struct f_greenc_1fr *up_, rt_int line_240, rt_gstr msg_241) {
  struct f_fail_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_240 = line_240;
F->msg_241 = cp_rt_gstr(msg_241);
if ((G_NV(F->up->trial_154) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_240))), rt_g_lit(": ", 2)), F->msg_241)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_107);
ret_:

  return;
}

static P125 f_new_buffer_243(struct f_greenc_1fr *up_) {
  struct f_new_buffer_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R126 *cell1276 = rt_alloc(sizeof(R126)); *cell1276 = cp_R126(({ R126 ag1277; ag1277.head_ = NULL; ag1277.tail_ = NULL; ag1277; })); (P125)cell1276; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_246(struct f_greenc_1fr *up_, P125 b_244, rt_gstr s_245) {
  struct f_put_to_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_244 = b_244;
F->s_245 = cp_rt_gstr(s_245);
F->l_1278 = NULL;
F->l_1278 = ({ R151 *cell1279 = rt_alloc(sizeof(R151)); *cell1279 = cp_R151(({ R151 ag1280; ag1280.s_ = NULL; ag1280.next_ = NULL; ag1280; })); (P150)cell1279; });
(*(P150)rt_nil_check(F->l_1278)).s_ = f_mk_221(F->up, F->s_245);
if (((*(P125)rt_nil_check(F->b_244)).tail_ == NULL)) {
(*(P125)rt_nil_check(F->b_244)).head_ = F->l_1278;
} else {
(*(P150)rt_nil_check((*(P125)rt_nil_check(F->b_244)).tail_)).next_ = F->l_1278;
}
(*(P125)rt_nil_check(F->b_244)).tail_ = F->l_1278;
ret_:

  return;
}

static void f_emit_248(struct f_greenc_1fr *up_, rt_gstr s_247) {
  struct f_emit_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_247 = cp_rt_gstr(s_247);
f_put_to_246(F->up, F->up->code_135, F->s_247);
ret_:

  return;
}

static void f_print_buffer_250(struct f_greenc_1fr *up_, P125 b_249) {
  struct f_print_buffer_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_249 = b_249;
F->l_1281 = NULL;
F->l_1281 = (*(P125)rt_nil_check(F->b_249)).head_;
while ((F->l_1281 != NULL)) {
rt_g_put(rt_g_g2s((*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_1281)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1281 = (*(P150)rt_nil_check(F->l_1281)).next_;
}
L_end_1282: ;
ret_:

  return;
}

static void f_splice_253(struct f_greenc_1fr *up_, P125 a_251, P125 b_252) {
  struct f_splice_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_251 = a_251;
F->b_252 = b_252;
if (((*(P125)rt_nil_check(F->b_252)).head_ == NULL)) {
goto ret_;
}
if (((*(P125)rt_nil_check(F->a_251)).tail_ == NULL)) {
(*(P125)rt_nil_check(F->a_251)).head_ = (*(P125)rt_nil_check(F->b_252)).head_;
} else {
(*(P150)rt_nil_check((*(P125)rt_nil_check(F->a_251)).tail_)).next_ = (*(P125)rt_nil_check(F->b_252)).head_;
}
(*(P125)rt_nil_check(F->a_251)).tail_ = (*(P125)rt_nil_check(F->b_252)).tail_;
(*(P125)rt_nil_check(F->b_252)).head_ = NULL;
(*(P125)rt_nil_check(F->b_252)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_255(struct f_greenc_1fr *up_, rt_gstr w_254) {
  struct f_is_reserved_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_254 = cp_rt_gstr(w_254);
{ rt_int sel1284 = ({ rt_gstr at1283 = F->w_254; at1283.hi >= at1283.lo ? at1283.hi - at1283.lo + 1 : (rt_int)0; });
if (0 || sel1284 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_254, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_254, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_254, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_254, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_254, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_254, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_254, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_254, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_254, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_254, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_254, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_254, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_254, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_254, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_254, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_254, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_254, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_254, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_254, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_254, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_254, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_254, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_254, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_254, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1284 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_254, rt_g_lit("RESTRICTED", 10));
goto ret_;
} else {
F->result_ = 0;
goto ret_;
}
}
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_add_token_259(struct f_greenc_1fr *up_, rt_int kind_256, rt_gstr s_257, rt_int ival_258) {
  struct f_add_token_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_256 = kind_256;
F->s_257 = cp_rt_gstr(s_257);
F->ival_258 = ival_258;
F->up->ntoks_112 = rt_add(G_NV(F->up->ntoks_112), ((rt_int)1LL));
(*({ A108 *ix1285 = &(F->up->toks_111); &ix1285->p[rt_index(G_NV(F->up->ntoks_112), ix1285->lo, ix1285->hi) - ix1285->lo]; })) = ({ R110 *cell1286 = rt_alloc(sizeof(R110)); *cell1286 = cp_R110(({ R110 ag1287; ag1287.kind_ = F->kind_256; ag1287.line_ = G_NV(F->up->src_line_114); ag1287.ival_ = F->ival_258; ag1287.s_ = NULL; ag1287; })); (P109)cell1286; });
(*(P109)rt_nil_check((*({ A108 *ix1288 = &(F->up->toks_111); &ix1288->p[rt_index(G_NV(F->up->ntoks_112), ix1288->lo, ix1288->hi) - ix1288->lo]; })))).s_ = f_mk_221(F->up, F->s_257);
ret_:

  return;
}

static rt_int f_digit_value_261(struct f_greenc_1fr *up_, int c_260) {
  struct f_digit_value_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_260 = c_260;
if (f_is_digit_228(F->up, F->c_260)) {
F->result_ = rt_sub(((rt_int)(F->c_260) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_230(F->up, F->c_260)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_264(struct f_greenc_1fr *up_, int c_262, rt_int base_263) {
  struct f_digit_in_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_262 = c_262;
F->base_263 = base_263;
F->d_1289 = INT64_MIN;
if (f_is_digit_228(F->up, F->c_262)) {
F->d_1289 = rt_sub(((rt_int)(F->c_262) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_230(F->up, F->c_262) >= 65) && (f_upper_230(F->up, F->c_262) <= 70))) {
F->d_1289 = rt_add(rt_sub(((rt_int)(f_upper_230(F->up, F->c_262)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1289) >= F->base_263)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1289);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_268(struct f_greenc_1fr *up_, rt_int *v_265, rt_int base_266, rt_int d_267) {
  struct f_accumulate_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_265 = v_265;
F->base_266 = base_266;
F->d_267 = d_267;
if ((G_NV((*F->v_265)) > rt_quot(rt_sub(INT64_MAX, F->d_267), F->base_266))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_265) = rt_add(rt_mul(G_NV((*F->v_265)), F->base_266), F->d_267);
ret_:

  return;
}

static void f_lex_line_270(struct f_greenc_1fr *up_, rt_gstr line_269) {
  struct f_lex_line_270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_269 = cp_rt_gstr(line_269);
F->i_1290 = INT64_MIN;
F->i_1290 = ((rt_int)1LL);
F->j_1291 = INT64_MIN;
F->j_1291 = ((rt_int)0LL);
F->n_1292 = INT64_MIN;
F->n_1292 = ({ rt_gstr at1293 = F->line_269; at1293.hi >= at1293.lo ? at1293.hi - at1293.lo + 1 : (rt_int)0; });
F->c_1294 = INT_MIN;
F->quote_1295 = INT_MIN;
F->v_1296 = INT64_MIN;
F->d_1297 = INT64_MIN;
F->buf_1298.lo = ((rt_int)1LL); F->buf_1298.hi = ((rt_int)1000LL);
F->buf_1298.lo2 = 1; F->buf_1298.hi2 = 1;
F->buf_1298.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1298));
memset(F->buf_1298.p, 0xFF, (size_t)G_CNT(F->buf_1298));
F->bl_1300 = INT64_MIN;
while ((G_NV(F->i_1290) <= G_NV(F->n_1292))) {
F->c_1294 = rt_range(G_NV(({ rt_gstr ix1302 = F->line_269; ix1302.p[rt_index(G_NV(F->i_1290), ix1302.lo, ix1302.hi) - ix1302.lo]; })), 0, 127);
if (((((G_NV(F->c_1294) == 32) || (G_NV(F->c_1294) == 9)) || (G_NV(F->c_1294) == 13)) || (G_NV(F->c_1294) == 12))) {
F->i_1290 = rt_add(G_NV(F->i_1290), ((rt_int)1LL));
} else if ((((G_NV(F->c_1294) == 45) && (G_NV(F->i_1290) < G_NV(F->n_1292))) && (G_NV(({ rt_gstr ix1303 = F->line_269; ix1303.p[rt_index(rt_add(G_NV(F->i_1290), ((rt_int)1LL)), ix1303.lo, ix1303.hi) - ix1303.lo]; })) == 45))) {
F->i_1290 = rt_add(G_NV(F->n_1292), ((rt_int)1LL));
} else if (f_is_letter_226(F->up, G_NV(F->c_1294))) {
F->j_1291 = G_NV(F->i_1290);
F->bl_1300 = ((rt_int)0LL);
while (((G_NV(F->j_1291) <= G_NV(F->n_1292)) && ((f_is_letter_226(F->up, G_NV(({ rt_gstr ix1306 = F->line_269; ix1306.p[rt_index(G_NV(F->j_1291), ix1306.lo, ix1306.hi) - ix1306.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1308 = F->line_269; ix1308.p[rt_index(G_NV(F->j_1291), ix1308.lo, ix1308.hi) - ix1308.lo]; })))) || (G_NV(({ rt_gstr ix1309 = F->line_269; ix1309.p[rt_index(G_NV(F->j_1291), ix1309.lo, ix1309.hi) - ix1309.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1310 = F->line_269; ix1310.p[rt_index(G_NV(F->j_1291), ix1310.lo, ix1310.hi) - ix1310.lo]; })) == 95)) {
if (((G_NV(F->j_1291) == G_NV(F->n_1292)) || (!(f_is_letter_226(F->up, G_NV(({ rt_gstr ix1312 = F->line_269; ix1312.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1312.lo, ix1312.hi) - ix1312.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1314 = F->line_269; ix1314.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1314.lo, ix1314.hi) - ix1314.lo]; }))))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1300 = rt_add(G_NV(F->bl_1300), ((rt_int)1LL));
(*({ rt_gstr *ix1315 = &(F->buf_1298); &ix1315->p[rt_index(G_NV(F->bl_1300), ix1315->lo, ix1315->hi) - ix1315->lo]; })) = f_upper_230(F->up, G_NV(({ rt_gstr ix1317 = F->line_269; ix1317.p[rt_index(G_NV(F->j_1291), ix1317.lo, ix1317.hi) - ix1317.lo]; })));
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
}
L_end_1304: ;
if (f_is_reserved_255(F->up, ({ rt_gstr sl1319 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1319.lo, sl1319.hi); rt_index(h_, sl1319.lo, sl1319.hi); } sl1319.p += l_ - sl1319.lo; sl1319.lo = l_; sl1319.hi = h_; sl1319; }))) {
f_add_token_259(F->up, ((rt_int)2LL), ({ rt_gstr sl1321 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1321.lo, sl1321.hi); rt_index(h_, sl1321.lo, sl1321.hi); } sl1321.p += l_ - sl1321.lo; sl1321.lo = l_; sl1321.hi = h_; sl1321; }), ((rt_int)0LL));
} else {
f_add_token_259(F->up, ((rt_int)1LL), ({ rt_gstr sl1323 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1323.lo, sl1323.hi); rt_index(h_, sl1323.lo, sl1323.hi); } sl1323.p += l_ - sl1323.lo; sl1323.lo = l_; sl1323.hi = h_; sl1323; }), ((rt_int)0LL));
}
F->i_1290 = G_NV(F->j_1291);
} else if (f_is_digit_228(F->up, G_NV(F->c_1294))) {
F->j_1291 = G_NV(F->i_1290);
F->v_1296 = ((rt_int)0LL);
F->bl_1300 = ((rt_int)0LL);
while (((G_NV(F->j_1291) <= G_NV(F->n_1292)) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1326 = F->line_269; ix1326.p[rt_index(G_NV(F->j_1291), ix1326.lo, ix1326.hi) - ix1326.lo]; }))) || (G_NV(({ rt_gstr ix1327 = F->line_269; ix1327.p[rt_index(G_NV(F->j_1291), ix1327.lo, ix1327.hi) - ix1327.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1328 = F->line_269; ix1328.p[rt_index(G_NV(F->j_1291), ix1328.lo, ix1328.hi) - ix1328.lo]; })) == 95)) {
if (((G_NV(F->j_1291) == G_NV(F->n_1292)) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1330 = F->line_269; ix1330.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1330.lo, ix1330.hi) - ix1330.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_268(F->up, &F->v_1296, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1332 = F->line_269; ix1332.p[rt_index(G_NV(F->j_1291), ix1332.lo, ix1332.hi) - ix1332.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1300 = rt_add(G_NV(F->bl_1300), ((rt_int)1LL));
(*({ rt_gstr *ix1333 = &(F->buf_1298); &ix1333->p[rt_index(G_NV(F->bl_1300), ix1333->lo, ix1333->hi) - ix1333->lo]; })) = G_NV(({ rt_gstr ix1334 = F->line_269; ix1334.p[rt_index(G_NV(F->j_1291), ix1334.lo, ix1334.hi) - ix1334.lo]; }));
}
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
}
L_end_1324: ;
if (((G_NV(F->j_1291) < G_NV(F->n_1292)) && ((G_NV(({ rt_gstr ix1335 = F->line_269; ix1335.p[rt_index(G_NV(F->j_1291), ix1335.lo, ix1335.hi) - ix1335.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1336 = F->line_269; ix1336.p[rt_index(G_NV(F->j_1291), ix1336.lo, ix1336.hi) - ix1336.lo]; })) == 58) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1338 = F->line_269; ix1338.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1338.lo, ix1338.hi) - ix1338.lo]; }))) || f_is_letter_226(F->up, G_NV(({ rt_gstr ix1340 = F->line_269; ix1340.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1340.lo, ix1340.hi) - ix1340.lo]; })))))))) {
{
F->base_1342 = INT64_MIN;
F->base_1342 = G_NV(F->v_1296);
if (((G_NV(F->base_1342) < ((rt_int)2LL)) || (G_NV(F->base_1342) > ((rt_int)16LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1296 = ((rt_int)0LL);
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
if (((G_NV(F->j_1291) > G_NV(F->n_1292)) || (f_digit_in_264(F->up, G_NV(({ rt_gstr ix1344 = F->line_269; ix1344.p[rt_index(G_NV(F->j_1291), ix1344.lo, ix1344.hi) - ix1344.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1291) <= G_NV(F->n_1292)) && ((f_is_letter_226(F->up, G_NV(({ rt_gstr ix1347 = F->line_269; ix1347.p[rt_index(G_NV(F->j_1291), ix1347.lo, ix1347.hi) - ix1347.lo]; }))) || f_is_digit_228(F->up, G_NV(({ rt_gstr ix1349 = F->line_269; ix1349.p[rt_index(G_NV(F->j_1291), ix1349.lo, ix1349.hi) - ix1349.lo]; })))) || (G_NV(({ rt_gstr ix1350 = F->line_269; ix1350.p[rt_index(G_NV(F->j_1291), ix1350.lo, ix1350.hi) - ix1350.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1351 = F->line_269; ix1351.p[rt_index(G_NV(F->j_1291), ix1351.lo, ix1351.hi) - ix1351.lo]; })) == 95)) {
if (((G_NV(F->j_1291) == G_NV(F->n_1292)) || (f_digit_in_264(F->up, G_NV(({ rt_gstr ix1353 = F->line_269; ix1353.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1353.lo, ix1353.hi) - ix1353.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1297 = f_digit_in_264(F->up, G_NV(({ rt_gstr ix1355 = F->line_269; ix1355.p[rt_index(G_NV(F->j_1291), ix1355.lo, ix1355.hi) - ix1355.lo]; })), G_NV(F->base_1342));
if ((G_NV(F->d_1297) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1357 = F->line_269; ix1357.p[rt_index(G_NV(F->j_1291), ix1357.lo, ix1357.hi) - ix1357.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1342)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_268(F->up, &F->v_1296, G_NV(F->base_1342), G_NV(F->d_1297));
}
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
}
L_end_1345: ;

}
L_end_1341: ;
f_add_token_259(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1296))), G_NV(F->v_1296));
} else if (((G_NV(F->j_1291) < G_NV(F->n_1292)) && ((G_NV(({ rt_gstr ix1358 = F->line_269; ix1358.p[rt_index(G_NV(F->j_1291), ix1358.lo, ix1358.hi) - ix1358.lo]; })) == 46) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix1360 = F->line_269; ix1360.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1360.lo, ix1360.hi) - ix1360.lo]; })))))) {
F->bl_1300 = rt_add(G_NV(F->bl_1300), ((rt_int)1LL));
(*({ rt_gstr *ix1361 = &(F->buf_1298); &ix1361->p[rt_index(G_NV(F->bl_1300), ix1361->lo, ix1361->hi) - ix1361->lo]; })) = 46;
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
while (((G_NV(F->j_1291) <= G_NV(F->n_1292)) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1364 = F->line_269; ix1364.p[rt_index(G_NV(F->j_1291), ix1364.lo, ix1364.hi) - ix1364.lo]; }))) || (G_NV(({ rt_gstr ix1365 = F->line_269; ix1365.p[rt_index(G_NV(F->j_1291), ix1365.lo, ix1365.hi) - ix1365.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1366 = F->line_269; ix1366.p[rt_index(G_NV(F->j_1291), ix1366.lo, ix1366.hi) - ix1366.lo]; })) != 95)) {
F->bl_1300 = rt_add(G_NV(F->bl_1300), ((rt_int)1LL));
(*({ rt_gstr *ix1367 = &(F->buf_1298); &ix1367->p[rt_index(G_NV(F->bl_1300), ix1367->lo, ix1367->hi) - ix1367->lo]; })) = G_NV(({ rt_gstr ix1368 = F->line_269; ix1368.p[rt_index(G_NV(F->j_1291), ix1368.lo, ix1368.hi) - ix1368.lo]; }));
} else if (((G_NV(F->j_1291) == G_NV(F->n_1292)) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1370 = F->line_269; ix1370.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1370.lo, ix1370.hi) - ix1370.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
}
L_end_1362: ;
if (f_exponent_ahead_273(F->up, F->line_269, G_NV(F->j_1291))) {
f_exponent_278(F->up, F->line_269, &F->j_1291, &F->buf_1298, &F->bl_1300);

}
f_add_token_259(F->up, ((rt_int)5LL), ({ rt_gstr sl1372 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1372.lo, sl1372.hi); rt_index(h_, sl1372.lo, sl1372.hi); } sl1372.p += l_ - sl1372.lo; sl1372.lo = l_; sl1372.hi = h_; sl1372; }), ((rt_int)0LL));
} else if (f_exponent_ahead_273(F->up, F->line_269, G_NV(F->j_1291))) {
f_exponent_278(F->up, F->line_269, &F->j_1291, &F->buf_1298, &F->bl_1300);

f_add_token_259(F->up, ((rt_int)5LL), ({ rt_gstr sl1374 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1374.lo, sl1374.hi); rt_index(h_, sl1374.lo, sl1374.hi); } sl1374.p += l_ - sl1374.lo; sl1374.lo = l_; sl1374.hi = h_; sl1374; }), ((rt_int)0LL));
} else {
f_add_token_259(F->up, ((rt_int)4LL), ({ rt_gstr sl1376 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1376.lo, sl1376.hi); rt_index(h_, sl1376.lo, sl1376.hi); } sl1376.p += l_ - sl1376.lo; sl1376.lo = l_; sl1376.hi = h_; sl1376; }), G_NV(F->v_1296));
}
F->i_1290 = G_NV(F->j_1291);
} else if (((G_NV(F->c_1294) == 34) || (G_NV(F->c_1294) == 37))) {
F->quote_1295 = rt_range(G_NV(F->c_1294), 0, 127);
F->j_1291 = rt_add(G_NV(F->i_1290), ((rt_int)1LL));
F->bl_1300 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1291) > G_NV(F->n_1292))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1378 = F->line_269; ix1378.p[rt_index(G_NV(F->j_1291), ix1378.lo, ix1378.hi) - ix1378.lo]; })) == G_NV(F->quote_1295))) {
if (((G_NV(F->j_1291) == G_NV(F->n_1292)) || (G_NV(({ rt_gstr ix1379 = F->line_269; ix1379.p[rt_index(rt_add(G_NV(F->j_1291), ((rt_int)1LL)), ix1379.lo, ix1379.hi) - ix1379.lo]; })) != G_NV(F->quote_1295)))) {
goto L_end_1377;
}
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
} else if (((G_NV(F->quote_1295) == 37) && (G_NV(({ rt_gstr ix1380 = F->line_269; ix1380.p[rt_index(G_NV(F->j_1291), ix1380.lo, ix1380.hi) - ix1380.lo]; })) == 34))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1300 = rt_add(G_NV(F->bl_1300), ((rt_int)1LL));
(*({ rt_gstr *ix1381 = &(F->buf_1298); &ix1381->p[rt_index(G_NV(F->bl_1300), ix1381->lo, ix1381->hi) - ix1381->lo]; })) = G_NV(({ rt_gstr ix1382 = F->line_269; ix1382.p[rt_index(G_NV(F->j_1291), ix1382.lo, ix1382.hi) - ix1382.lo]; }));
F->j_1291 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
}
L_end_1377: ;
f_add_token_259(F->up, ((rt_int)6LL), ({ rt_gstr sl1384 = F->buf_1298; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1300); if (l_ <= h_) { rt_index(l_, sl1384.lo, sl1384.hi); rt_index(h_, sl1384.lo, sl1384.hi); } sl1384.p += l_ - sl1384.lo; sl1384.lo = l_; sl1384.hi = h_; sl1384; }), ((rt_int)0LL));
F->i_1290 = rt_add(G_NV(F->j_1291), ((rt_int)1LL));
} else {
{
F->two_1386.lo = ((rt_int)1LL); F->two_1386.hi = ((rt_int)3LL);
F->two_1386.lo2 = 1; F->two_1386.hi2 = 1;
F->two_1386.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1386));
memset(F->two_1386.p, 0xFF, (size_t)G_CNT(F->two_1386));
as_rt_gstr(&F->two_1386, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1388 = &(F->two_1386); &ix1388->p[rt_index(((rt_int)1LL), ix1388->lo, ix1388->hi) - ix1388->lo]; })) = G_NV(F->c_1294);
if ((G_NV(F->i_1290) < G_NV(F->n_1292))) {
(*({ rt_gstr *ix1389 = &(F->two_1386); &ix1389->p[rt_index(((rt_int)2LL), ix1389->lo, ix1389->hi) - ix1389->lo]; })) = G_NV(({ rt_gstr ix1390 = F->line_269; ix1390.p[rt_index(rt_add(G_NV(F->i_1290), ((rt_int)1LL)), ix1390.lo, ix1390.hi) - ix1390.lo]; }));
}
if ((rt_add(G_NV(F->i_1290), ((rt_int)1LL)) < G_NV(F->n_1292))) {
(*({ rt_gstr *ix1391 = &(F->two_1386); &ix1391->p[rt_index(((rt_int)3LL), ix1391->lo, ix1391->hi) - ix1391->lo]; })) = G_NV(({ rt_gstr ix1392 = F->line_269; ix1392.p[rt_index(rt_add(G_NV(F->i_1290), ((rt_int)2LL)), ix1392.lo, ix1392.hi) - ix1392.lo]; }));
}
if (eq_rt_gstr(F->two_1386, rt_g_lit(":=:", 3))) {
f_add_token_259(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1290 = rt_add(G_NV(F->i_1290), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1393 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1393.lo, sl1393.hi); rt_index(h_, sl1393.lo, sl1393.hi); } sl1393.p += l_ - sl1393.lo; sl1393.lo = l_; sl1393.hi = h_; sl1393; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1394 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1394.lo, sl1394.hi); rt_index(h_, sl1394.lo, sl1394.hi); } sl1394.p += l_ - sl1394.lo; sl1394.lo = l_; sl1394.hi = h_; sl1394; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1395 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1395.lo, sl1395.hi); rt_index(h_, sl1395.lo, sl1395.hi); } sl1395.p += l_ - sl1395.lo; sl1395.lo = l_; sl1395.hi = h_; sl1395; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1396 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1396.lo, sl1396.hi); rt_index(h_, sl1396.lo, sl1396.hi); } sl1396.p += l_ - sl1396.lo; sl1396.lo = l_; sl1396.hi = h_; sl1396; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1397 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1397.lo, sl1397.hi); rt_index(h_, sl1397.lo, sl1397.hi); } sl1397.p += l_ - sl1397.lo; sl1397.lo = l_; sl1397.hi = h_; sl1397; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1398 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1398.lo, sl1398.hi); rt_index(h_, sl1398.lo, sl1398.hi); } sl1398.p += l_ - sl1398.lo; sl1398.lo = l_; sl1398.hi = h_; sl1398; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1399 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1399.lo, sl1399.hi); rt_index(h_, sl1399.lo, sl1399.hi); } sl1399.p += l_ - sl1399.lo; sl1399.lo = l_; sl1399.hi = h_; sl1399; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1400 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1400.lo, sl1400.hi); rt_index(h_, sl1400.lo, sl1400.hi); } sl1400.p += l_ - sl1400.lo; sl1400.lo = l_; sl1400.hi = h_; sl1400; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1401 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1401.lo, sl1401.hi); rt_index(h_, sl1401.lo, sl1401.hi); } sl1401.p += l_ - sl1401.lo; sl1401.lo = l_; sl1401.hi = h_; sl1401; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1402 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1402.lo, sl1402.hi); rt_index(h_, sl1402.lo, sl1402.hi); } sl1402.p += l_ - sl1402.lo; sl1402.lo = l_; sl1402.hi = h_; sl1402; }), rt_g_lit(">>", 2)))) {
f_add_token_259(F->up, ((rt_int)3LL), ({ rt_gstr sl1404 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1404.lo, sl1404.hi); rt_index(h_, sl1404.lo, sl1404.hi); } sl1404.p += l_ - sl1404.lo; sl1404.lo = l_; sl1404.hi = h_; sl1404; }), ((rt_int)0LL));
F->i_1290 = rt_add(G_NV(F->i_1290), ((rt_int)2LL));
} else if ((G_NV(F->c_1294) == 33)) {
f_add_token_259(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1290 = rt_add(G_NV(F->i_1290), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1294) == 38) || (G_NV(F->c_1294) == 39)) || (G_NV(F->c_1294) == 40)) || (G_NV(F->c_1294) == 41)) || (G_NV(F->c_1294) == 42)) || (G_NV(F->c_1294) == 43)) || (G_NV(F->c_1294) == 44)) || (G_NV(F->c_1294) == 45)) || (G_NV(F->c_1294) == 46)) || (G_NV(F->c_1294) == 47)) || (G_NV(F->c_1294) == 58)) || (G_NV(F->c_1294) == 59)) || (G_NV(F->c_1294) == 60)) || (G_NV(F->c_1294) == 61)) || (G_NV(F->c_1294) == 62)) || (G_NV(F->c_1294) == 124))) {
f_add_token_259(F->up, ((rt_int)3LL), ({ rt_gstr sl1406 = F->two_1386; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1406.lo, sl1406.hi); rt_index(h_, sl1406.lo, sl1406.hi); } sl1406.p += l_ - sl1406.lo; sl1406.lo = l_; sl1406.hi = h_; sl1406; }), ((rt_int)0LL));
F->i_1290 = rt_add(G_NV(F->i_1290), ((rt_int)1LL));
if ((G_NV(F->c_1294) == 59)) {
f_check_include_285(F->up);
}
} else {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("unexpected character", 20));
}

}
L_end_1385: ;
}
}
L_end_1301: ;
ret_:

  return;
}

static int f_exponent_ahead_273(struct f_greenc_1fr *up_, rt_gstr line_271, rt_int j_272) {
  struct f_exponent_ahead_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_271 = cp_rt_gstr(line_271);
F->j_272 = j_272;
if ((F->j_272 >= ({ rt_gstr at1407 = F->line_271; at1407.hi >= at1407.lo ? at1407.hi - at1407.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1408 = F->line_271; ix1408.p[rt_index(F->j_272, ix1408.lo, ix1408.hi) - ix1408.lo]; })) != 69) && (G_NV(({ rt_gstr ix1409 = F->line_271; ix1409.p[rt_index(F->j_272, ix1409.lo, ix1409.hi) - ix1409.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1411 = F->line_271; ix1411.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1411.lo, ix1411.hi) - ix1411.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_272, ((rt_int)1LL)) >= ({ rt_gstr at1412 = F->line_271; at1412.hi >= at1412.lo ? at1412.hi - at1412.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1413 = F->line_271; ix1413.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1413.lo, ix1413.hi) - ix1413.lo]; })) == 43) || (G_NV(({ rt_gstr ix1414 = F->line_271; ix1414.p[rt_index(rt_add(F->j_272, ((rt_int)1LL)), ix1414.lo, ix1414.hi) - ix1414.lo]; })) == 45)) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix1416 = F->line_271; ix1416.p[rt_index(rt_add(F->j_272, ((rt_int)2LL)), ix1416.lo, ix1416.hi) - ix1416.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_278(struct f_greenc_1fr *up_, rt_gstr line_274, rt_int *j_275, rt_gstr *buf_276, rt_int *bl_277) {
  struct f_exponent_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_274 = cp_rt_gstr(line_274);
F->j_275 = j_275;
F->buf_276 = buf_276;
F->bl_277 = bl_277;
(*F->bl_277) = rt_add(G_NV((*F->bl_277)), ((rt_int)1LL));
(*({ rt_gstr *ix1417 = &((*F->buf_276)); &ix1417->p[rt_index(G_NV((*F->bl_277)), ix1417->lo, ix1417->hi) - ix1417->lo]; })) = 69;
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1418 = F->line_274; ix1418.p[rt_index(G_NV((*F->j_275)), ix1418.lo, ix1418.hi) - ix1418.lo]; })) == 43) || (G_NV(({ rt_gstr ix1419 = F->line_274; ix1419.p[rt_index(G_NV((*F->j_275)), ix1419.lo, ix1419.hi) - ix1419.lo]; })) == 45))) {
(*F->bl_277) = rt_add(G_NV((*F->bl_277)), ((rt_int)1LL));
(*({ rt_gstr *ix1420 = &((*F->buf_276)); &ix1420->p[rt_index(G_NV((*F->bl_277)), ix1420->lo, ix1420->hi) - ix1420->lo]; })) = G_NV(({ rt_gstr ix1421 = F->line_274; ix1421.p[rt_index(G_NV((*F->j_275)), ix1421.lo, ix1421.hi) - ix1421.lo]; }));
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
}
while (((G_NV((*F->j_275)) <= ({ rt_gstr at1423 = F->line_274; at1423.hi >= at1423.lo ? at1423.hi - at1423.lo + 1 : (rt_int)0; })) && (f_is_digit_228(F->up, G_NV(({ rt_gstr ix1425 = F->line_274; ix1425.p[rt_index(G_NV((*F->j_275)), ix1425.lo, ix1425.hi) - ix1425.lo]; }))) || (G_NV(({ rt_gstr ix1426 = F->line_274; ix1426.p[rt_index(G_NV((*F->j_275)), ix1426.lo, ix1426.hi) - ix1426.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1427 = F->line_274; ix1427.p[rt_index(G_NV((*F->j_275)), ix1427.lo, ix1427.hi) - ix1427.lo]; })) != 95)) {
(*F->bl_277) = rt_add(G_NV((*F->bl_277)), ((rt_int)1LL));
(*({ rt_gstr *ix1428 = &((*F->buf_276)); &ix1428->p[rt_index(G_NV((*F->bl_277)), ix1428->lo, ix1428->hi) - ix1428->lo]; })) = G_NV(({ rt_gstr ix1429 = F->line_274; ix1429.p[rt_index(G_NV((*F->j_275)), ix1429.lo, ix1429.hi) - ix1429.lo]; }));
} else if (((G_NV((*F->j_275)) == ({ rt_gstr at1430 = F->line_274; at1430.hi >= at1430.lo ? at1430.hi - at1430.lo + 1 : (rt_int)0; })) || (!f_is_digit_228(F->up, G_NV(({ rt_gstr ix1432 = F->line_274; ix1432.p[rt_index(rt_add(G_NV((*F->j_275)), ((rt_int)1LL)), ix1432.lo, ix1432.hi) - ix1432.lo]; })))))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_275) = rt_add(G_NV((*F->j_275)), ((rt_int)1LL));
}
L_end_1422: ;
ret_:

  return;
}

static void f_include_open_281(struct f_greenc_1fr *up_, rt_gstr name_279, rt_int *length_280) {
  struct f_include_open_281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_279 = cp_rt_gstr(name_279);
F->length_280 = length_280;
rt_g_include_open(rt_g_g2s(F->name_279), F->length_280);
ret_:

  return;
}

static void f_include_char_284(struct f_greenc_1fr *up_, rt_int i_282, int *c_283) {
  struct f_include_char_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_282 = i_282;
F->c_283 = c_283;
rt_g_include_char(F->i_282, F->c_283);
ret_:

  return;
}

static void f_check_include_285(struct f_greenc_1fr *up_) {
  struct f_check_include_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1433 = INT64_MIN;
if ((G_NV(F->up->ntoks_112) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P109)rt_nil_check(({ A108 ix1434 = F->up->toks_111; ix1434.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)5LL)), ix1434.lo, ix1434.hi) - ix1434.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P109)rt_nil_check(({ A108 ix1435 = F->up->toks_111; ix1435.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1435.lo, ix1435.hi) - ix1435.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1436 = F->up->toks_111; ix1436.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)5LL)), ix1436.lo, ix1436.hi) - ix1436.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1437 = F->up->toks_111; ix1437.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)4LL)), ix1437.lo, ix1437.hi) - ix1437.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1438 = F->up->toks_111; ix1438.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)3LL)), ix1438.lo, ix1438.hi) - ix1438.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1439 = F->up->toks_111; ix1439.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)1LL)), ix1439.lo, ix1439.hi) - ix1439.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_281(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1441 = F->up->toks_111; ix1441.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1441.lo, ix1441.hi) - ix1441.lo]; }))).s_)), &F->n_1433);
if ((G_NV(F->n_1433) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV(F->up->src_line_114), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1443 = F->up->toks_111; ix1443.p[rt_index(rt_sub(G_NV(F->up->ntoks_112), ((rt_int)2LL)), ix1443.lo, ix1443.hi) - ix1443.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_112 = rt_sub(G_NV(F->up->ntoks_112), ((rt_int)6LL));
f_include_text_287(F->up, G_NV(F->n_1433));
ret_:

  return;
}

static void f_include_text_287(struct f_greenc_1fr *up_, rt_int n_286) {
  struct f_include_text_287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_286 = n_286;
F->t_1444.lo = ((rt_int)1LL); F->t_1444.hi = rt_add(F->n_286, ((rt_int)1LL));
F->t_1444.lo2 = 1; F->t_1444.hi2 = 1;
F->t_1444.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1444));
memset(F->t_1444.p, 0xFF, (size_t)G_CNT(F->t_1444));
F->saved_line_1446 = INT64_MIN;
F->saved_line_1446 = G_NV(F->up->src_line_114);
F->from_1447 = INT64_MIN;
F->from_1447 = ((rt_int)1LL);
{ rt_int lo1450 = ((rt_int)1LL), hi1451 = F->n_286;
for (rt_int it1452 = lo1450; it1452 <= hi1451; it1452++) {
F->k_1449 = it1452;
f_include_char_284(F->up, F->k_1449, &(*({ rt_gstr *ix1454 = &(F->t_1444); &ix1454->p[rt_index(F->k_1449, ix1454->lo, ix1454->hi) - ix1454->lo]; })));
}
}
L_end_1448: ;
F->up->src_line_114 = ((rt_int)0LL);
{ rt_int lo1457 = ((rt_int)1LL), hi1458 = F->n_286;
for (rt_int it1459 = lo1457; it1459 <= hi1458; it1459++) {
F->k_1456 = it1459;
if ((G_NV(({ rt_gstr ix1460 = F->t_1444; ix1460.p[rt_index(F->k_1456, ix1460.lo, ix1460.hi) - ix1460.lo]; })) == 10)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_include_line_291(F->up, F->t_1444, G_NV(F->from_1447), rt_sub(F->k_1456, ((rt_int)1LL)));
F->from_1447 = rt_add(F->k_1456, ((rt_int)1LL));
}
}
}
L_end_1455: ;
if ((G_NV(F->from_1447) <= F->n_286)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_include_line_291(F->up, F->t_1444, G_NV(F->from_1447), F->n_286);
}
F->up->src_line_114 = G_NV(F->saved_line_1446);
ret_:

  return;
}

static void f_include_line_291(struct f_greenc_1fr *up_, rt_gstr t_288, rt_int from_289, rt_int to_290) {
  struct f_include_line_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_288 = cp_rt_gstr(t_288);
F->from_289 = from_289;
F->to_290 = to_290;
F->l_1461.lo = ((rt_int)1LL); F->l_1461.hi = rt_add(rt_sub(F->to_290, F->from_289), ((rt_int)1LL));
F->l_1461.lo2 = 1; F->l_1461.hi2 = 1;
F->l_1461.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1461));
memset(F->l_1461.p, 0xFF, (size_t)G_CNT(F->l_1461));
{ rt_int lo1465 = F->from_289, hi1466 = F->to_290;
for (rt_int it1467 = lo1465; it1467 <= hi1466; it1467++) {
F->k_1464 = it1467;
(*({ rt_gstr *ix1468 = &(F->l_1461); &ix1468->p[rt_index(rt_add(rt_sub(F->k_1464, F->from_289), ((rt_int)1LL)), ix1468->lo, ix1468->hi) - ix1468->lo]; })) = G_NV(({ rt_gstr ix1469 = F->t_288; ix1469.p[rt_index(F->k_1464, ix1469.lo, ix1469.hi) - ix1469.lo]; }));
}
}
L_end_1463: ;
f_lex_line_270(F->up, F->l_1461);
ret_:

  return;
}

static void f_read_source_292(struct f_greenc_1fr *up_) {
  struct f_read_source_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1470;
if (RT_TRY(xf1470)) {
F->buf_1472.lo = ((rt_int)1LL); F->buf_1472.hi = ((rt_int)10000LL);
F->buf_1472.lo2 = 1; F->buf_1472.hi2 = 1;
F->buf_1472.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1472));
memset(F->buf_1472.p, 0xFF, (size_t)G_CNT(F->buf_1472));
F->bl_1474 = INT64_MIN;
F->bl_1474 = ((rt_int)0LL);
F->c_1475 = INT_MIN;
for (;;) {
(F->c_1475 = rt_g_getc());
if ((G_NV(F->c_1475) == 10)) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_lex_line_270(F->up, ({ rt_gstr sl1478 = F->buf_1472; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1474); if (l_ <= h_) { rt_index(l_, sl1478.lo, sl1478.hi); rt_index(h_, sl1478.lo, sl1478.hi); } sl1478.p += l_ - sl1478.lo; sl1478.lo = l_; sl1478.hi = h_; sl1478; }));
F->bl_1474 = ((rt_int)0LL);
} else {
F->bl_1474 = rt_add(G_NV(F->bl_1474), ((rt_int)1LL));
(*({ rt_gstr *ix1479 = &(F->buf_1472); &ix1479->p[rt_index(G_NV(F->bl_1474), ix1479->lo, ix1479->hi) - ix1479->lo]; })) = G_NV(F->c_1475);
}
}
L_end_1476: ;
RT_POP(xf1470);
} else {
RT_POP(xf1470);
int x1471 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1471);
if (0 || x1471 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1474) > ((rt_int)0LL))) {
F->up->src_line_114 = rt_add(G_NV(F->up->src_line_114), ((rt_int)1LL));
f_lex_line_270(F->up, ({ rt_gstr sl1481 = F->buf_1472; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1474); if (l_ <= h_) { rt_index(l_, sl1481.lo, sl1481.hi); rt_index(h_, sl1481.lo, sl1481.hi); } sl1481.p += l_ - sl1481.lo; sl1481.lo = l_; sl1481.hi = h_; sl1481; }));
}
f_add_token_259(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1471);
}
}
}
ret_:

  return;
}

static P173 f_nn_295(struct f_greenc_1fr *up_, rt_int kind_293, rt_int line_294) {
  struct f_nn_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_293 = kind_293;
F->line_294 = line_294;
F->result_ = ({ R174 *cell1482 = rt_alloc(sizeof(R174)); *cell1482 = cp_R174(({ R174 ag1483; ag1483.kind_ = F->kind_293; ag1483.line_ = F->line_294; ag1483.ival_ = ((rt_int)0LL); ag1483.flag_ = ((rt_int)0LL); ag1483.name_ = NULL; ag1483.tag_ = NULL; ag1483.a_ = NULL; ag1483.b_ = NULL; ag1483.c_ = NULL; ag1483.d_ = NULL; ag1483.e_ = NULL; ag1483.next_ = NULL; ag1483.formal_ = NULL; ag1483; })); (P173)cell1482; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_299(struct f_greenc_1fr *up_, P173 *head_296, P173 *tail_297, P173 x_298) {
  struct f_append_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_296 = head_296;
F->tail_297 = tail_297;
F->x_298 = x_298;
if ((F->x_298 == NULL)) {
goto ret_;
}
if (((*F->head_296) == NULL)) {
(*F->head_296) = F->x_298;
} else {
(*(P173)rt_nil_check((*F->tail_297))).next_ = F->x_298;
}
(*F->tail_297) = F->x_298;
while (((*(P173)rt_nil_check((*F->tail_297))).next_ != NULL)) {
(*F->tail_297) = (*(P173)rt_nil_check((*F->tail_297))).next_;
}
L_end_1484: ;
ret_:

  return;
}

static rt_int f_list_len_301(struct f_greenc_1fr *up_, P173 l_300) {
  struct f_list_len_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_300 = l_300;
F->n_1485 = INT64_MIN;
F->n_1485 = ((rt_int)0LL);
F->p_1486 = NULL;
F->p_1486 = F->l_300;
while ((F->p_1486 != NULL)) {
F->n_1485 = rt_add(G_NV(F->n_1485), ((rt_int)1LL));
F->p_1486 = (*(P173)rt_nil_check(F->p_1486)).next_;
}
L_end_1487: ;
F->result_ = G_NV(F->n_1485);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_302(struct f_greenc_1fr *up_) {
  struct f_cur_line_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P109)rt_nil_check(({ A108 ix1488 = F->up->toks_111; ix1488.p[rt_index(G_NV(F->up->tpos_113), ix1488.lo, ix1488.hi) - ix1488.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_304(struct f_greenc_1fr *up_, rt_gstr w_303) {
  struct f_at_kw_304fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_303 = cp_rt_gstr(w_303);
if ((!(G_NV((*(P109)rt_nil_check(({ A108 ix1489 = F->up->toks_111; ix1489.p[rt_index(G_NV(F->up->tpos_113), ix1489.lo, ix1489.hi) - ix1489.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1490 = F->up->toks_111; ix1490.p[rt_index(G_NV(F->up->tpos_113), ix1490.lo, ix1490.hi) - ix1490.lo]; }))).s_)), F->w_303);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_306(struct f_greenc_1fr *up_, rt_gstr w_305) {
  struct f_at_op_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_305 = cp_rt_gstr(w_305);
if ((!(G_NV((*(P109)rt_nil_check(({ A108 ix1491 = F->up->toks_111; ix1491.p[rt_index(G_NV(F->up->tpos_113), ix1491.lo, ix1491.hi) - ix1491.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1492 = F->up->toks_111; ix1492.p[rt_index(G_NV(F->up->tpos_113), ix1492.lo, ix1492.hi) - ix1492.lo]; }))).s_)), F->w_305);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_308(struct f_greenc_1fr *up_, rt_int k_307) {
  struct f_at_kind_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_307 = k_307;
F->result_ = (G_NV((*(P109)rt_nil_check(({ A108 ix1493 = F->up->toks_111; ix1493.p[rt_index(G_NV(F->up->tpos_113), ix1493.lo, ix1493.hi) - ix1493.lo]; }))).kind_) == F->k_307);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_310(struct f_greenc_1fr *up_, rt_int k_309) {
  struct f_kind_at_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_309 = k_309;
if ((rt_add(G_NV(F->up->tpos_113), F->k_309) > G_NV(F->up->ntoks_112))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P109)rt_nil_check(({ A108 ix1494 = F->up->toks_111; ix1494.p[rt_index(rt_add(G_NV(F->up->tpos_113), F->k_309), ix1494.lo, ix1494.hi) - ix1494.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_312(struct f_greenc_1fr *up_, rt_int k_311) {
  struct f_text_at_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_311 = k_311;
if ((rt_add(G_NV(F->up->tpos_113), F->k_311) > G_NV(F->up->ntoks_112))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1495 = F->up->toks_111; ix1495.p[rt_index(rt_add(G_NV(F->up->tpos_113), F->k_311), ix1495.lo, ix1495.hi) - ix1495.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_314(struct f_greenc_1fr *up_, rt_gstr msg_313) {
  struct f_perror_314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_313 = cp_rt_gstr(msg_313);
f_fail_242(F->up, G_NV((*(P109)rt_nil_check(({ A108 ix1498 = F->up->toks_111; ix1498.p[rt_index(G_NV(F->up->tpos_113), ix1498.lo, ix1498.hi) - ix1498.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_313, rt_g_lit(" (at ", 5)), (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1499 = F->up->toks_111; ix1499.p[rt_index(G_NV(F->up->tpos_113), ix1499.lo, ix1499.hi) - ix1499.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_315(struct f_greenc_1fr *up_) {
  struct f_skip_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_113 = rt_add(G_NV(F->up->tpos_113), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_317(struct f_greenc_1fr *up_, rt_gstr w_316) {
  struct f_expect_kw_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_316 = cp_rt_gstr(w_316);
if ((!f_at_kw_304(F->up, F->w_316))) {
f_perror_314(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_316));
}
F->up->tpos_113 = rt_add(G_NV(F->up->tpos_113), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_319(struct f_greenc_1fr *up_, rt_gstr w_318) {
  struct f_expect_op_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_318 = cp_rt_gstr(w_318);
if ((!f_at_op_306(F->up, F->w_318))) {
f_perror_314(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_318));
}
F->up->tpos_113 = rt_add(G_NV(F->up->tpos_113), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_321(struct f_greenc_1fr *up_, P139 *res_320) {
  struct f_expect_id_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_320 = res_320;
if ((!f_at_kind_308(F->up, ((rt_int)1LL)))) {
f_perror_314(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_113 = rt_add(G_NV(F->up->tpos_113), ((rt_int)1LL));
(*F->res_320) = (*(P109)rt_nil_check(({ A108 ix1500 = F->up->toks_111; ix1500.p[rt_index(rt_sub(G_NV(F->up->tpos_113), ((rt_int)1LL)), ix1500.lo, ix1500.hi) - ix1500.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_323(struct f_greenc_1fr *up_, P173 *res_322) {
  struct f_name_node_323fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_322 = res_322;
F->x_1501 = NULL;
F->x_1501 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1501)).name_);
(*F->res_322) = F->x_1501;
goto ret_;
ret_:

  return;
}

static void f_id_list_325(struct f_greenc_1fr *up_, P173 *res_324) {
  struct f_id_list_325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_324 = res_324;
F->head_1502 = NULL;
F->tail_1503 = NULL;
F->x_1504 = NULL;
f_name_node_323(F->up, &F->x_1504);
f_append_299(F->up, &F->head_1502, &F->tail_1503, F->x_1504);
while (f_at_op_306(F->up, rt_g_lit(",", 1))) {
f_skip_315(F->up);
f_name_node_323(F->up, &F->x_1504);
f_append_299(F->up, &F->head_1502, &F->tail_1503, F->x_1504);
}
L_end_1505: ;
(*F->res_324) = F->head_1502;
goto ret_;
ret_:

  return;
}

static P173 f_binop_330(struct f_greenc_1fr *up_, P139 op_326, P173 l_327, P173 r_328, rt_int line_329) {
  struct f_binop_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_326 = op_326;
F->l_327 = l_327;
F->r_328 = r_328;
F->line_329 = line_329;
F->x_1506 = NULL;
F->x_1506 = f_nn_295(F->up, ((rt_int)7LL), F->line_329);
(*(P173)rt_nil_check(F->x_1506)).name_ = F->op_326;
(*(P173)rt_nil_check(F->x_1506)).a_ = F->l_327;
(*(P173)rt_nil_check(F->x_1506)).b_ = F->r_328;
F->result_ = F->x_1506;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_332(struct f_greenc_1fr *up_, P173 *res_331) {
  struct f_expr_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->l_1507 = NULL;
F->r_1508 = NULL;
F->op_1509 = NULL;
F->first_op_1510 = NULL;
F->line_1511 = INT64_MIN;
F->short_1512 = INT_MIN;
F->short_1512 = 0;
F->first_short_1513 = INT_MIN;
F->first_short_1513 = 0;
f_relation_336(F->up, &F->l_1507);
while (((f_at_kw_304(F->up, rt_g_lit("AND", 3)) || f_at_kw_304(F->up, rt_g_lit("OR", 2))) || f_at_kw_304(F->up, rt_g_lit("XOR", 3)))) {
F->op_1509 = (*(P109)rt_nil_check(({ A108 ix1515 = F->up->toks_111; ix1515.p[rt_index(G_NV(F->up->tpos_113), ix1515.lo, ix1515.hi) - ix1515.lo]; }))).s_;
F->line_1511 = f_cur_line_302(F->up);
f_skip_315(F->up);
F->short_1512 = 0;
if ((eq_rt_gstr((*(P139)rt_nil_check(F->op_1509)), rt_g_lit("AND", 3)) && f_at_kw_304(F->up, rt_g_lit("THEN", 4)))) {
f_skip_315(F->up);
F->short_1512 = 1;
} else if ((eq_rt_gstr((*(P139)rt_nil_check(F->op_1509)), rt_g_lit("OR", 2)) && f_at_kw_304(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_315(F->up);
F->short_1512 = 1;
}
if ((F->first_op_1510 == NULL)) {
F->first_op_1510 = F->op_1509;
F->first_short_1513 = G_NV(F->short_1512);
} else if (((!eq_rt_gstr((*(P139)rt_nil_check(F->first_op_1510)), (*(P139)rt_nil_check(F->op_1509)))) || (G_NV(F->first_short_1513) != G_NV(F->short_1512)))) {
f_fail_242(F->up, G_NV(F->line_1511), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_336(F->up, &F->r_1508);
F->l_1507 = f_binop_330(F->up, F->op_1509, F->l_1507, F->r_1508, G_NV(F->line_1511));
if (G_NV(F->short_1512)) {
(*(P173)rt_nil_check(F->l_1507)).ival_ = ((rt_int)1LL);
}
}
L_end_1514: ;
(*F->res_331) = F->l_1507;
goto ret_;
ret_:

  return;
}

static int f_is_rel_334(struct f_greenc_1fr *up_, rt_gstr s_333) {
  struct f_is_rel_334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_333 = cp_rt_gstr(s_333);
F->result_ = (((((eq_rt_gstr(F->s_333, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_333, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_333, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_333, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_333, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_333, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_336(struct f_greenc_1fr *up_, P173 *res_335) {
  struct f_relation_336fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_335 = res_335;
F->l_1516 = NULL;
F->r_1517 = NULL;
F->lo_1518 = NULL;
F->hi_1519 = NULL;
F->t_1520 = NULL;
F->op_1521 = NULL;
F->line_1522 = INT64_MIN;
F->line_1522 = f_cur_line_302(F->up);
F->neg_1523 = INT_MIN;
F->neg_1523 = 0;
f_simple_expr_340(F->up, &F->l_1516);
if ((f_at_kind_308(F->up, ((rt_int)3LL)) && f_is_rel_334(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1525 = F->up->toks_111; ix1525.p[rt_index(G_NV(F->up->tpos_113), ix1525.lo, ix1525.hi) - ix1525.lo]; }))).s_))))) {
F->op_1521 = (*(P109)rt_nil_check(({ A108 ix1526 = F->up->toks_111; ix1526.p[rt_index(G_NV(F->up->tpos_113), ix1526.lo, ix1526.hi) - ix1526.lo]; }))).s_;
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->r_1517);
F->l_1516 = f_binop_330(F->up, F->op_1521, F->l_1516, F->r_1517, G_NV(F->line_1522));
(*F->res_335) = F->l_1516;
goto ret_;
}
if (((f_at_kw_304(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_315(F->up);
F->neg_1523 = 1;
}
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->lo_1518);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->hi_1519);
F->t_1520 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1522));
(*(P173)rt_nil_check(F->t_1520)).a_ = F->lo_1518;
(*(P173)rt_nil_check(F->t_1520)).b_ = F->hi_1519;
} else if (((G_NV((*(P173)rt_nil_check(F->lo_1518)).kind_) == ((rt_int)5LL)) || (G_NV((*(P173)rt_nil_check(F->lo_1518)).kind_) == ((rt_int)9LL)))) {
F->t_1520 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1522));
(*(P173)rt_nil_check(F->t_1520)).name_ = (*(P173)rt_nil_check(F->lo_1518)).name_;
if ((G_NV((*(P173)rt_nil_check(F->lo_1518)).kind_) == ((rt_int)9LL))) {
(*(P173)rt_nil_check(F->t_1520)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->lo_1518)).a_));
}
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1517 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1522));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1517)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1517)).b_);
(*(P173)rt_nil_check(F->t_1520)).a_ = F->r_1517;
(*(P173)rt_nil_check(F->t_1520)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->t_1520)).b_);
(*(P173)rt_nil_check(F->t_1520)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_314(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1521 = f_mk_221(F->up, rt_g_lit("IN", 2));
F->l_1516 = f_binop_330(F->up, F->op_1521, F->l_1516, F->t_1520, G_NV(F->line_1522));
if (G_NV(F->neg_1523)) {
F->t_1520 = f_nn_295(F->up, ((rt_int)6LL), G_NV(F->line_1522));
(*(P173)rt_nil_check(F->t_1520)).name_ = f_mk_221(F->up, rt_g_lit("NOT", 3));
(*(P173)rt_nil_check(F->t_1520)).a_ = F->l_1516;
(*F->res_335) = F->t_1520;
goto ret_;
}
}
(*F->res_335) = F->l_1516;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_338(struct f_greenc_1fr *up_, P173 e_337) {
  struct f_path_of_338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_337 = e_337;
if ((G_NV((*(P173)rt_nil_check(F->e_337)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_337)).a_), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_337)).name_)));
goto ret_;
}
F->result_ = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_337)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_340(struct f_greenc_1fr *up_, P173 *res_339) {
  struct f_simple_expr_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_339 = res_339;
F->l_1527 = NULL;
F->r_1528 = NULL;
F->op_1529 = NULL;
F->line_1530 = INT64_MIN;
F->line_1530 = f_cur_line_302(F->up);
if (((f_at_op_306(F->up, rt_g_lit("+", 1)) || f_at_op_306(F->up, rt_g_lit("-", 1))) || f_at_kw_304(F->up, rt_g_lit("NOT", 3)))) {
F->op_1529 = (*(P109)rt_nil_check(({ A108 ix1531 = F->up->toks_111; ix1531.p[rt_index(G_NV(F->up->tpos_113), ix1531.lo, ix1531.hi) - ix1531.lo]; }))).s_;
f_skip_315(F->up);
f_term_342(F->up, &F->r_1528);
F->l_1527 = f_nn_295(F->up, ((rt_int)6LL), G_NV(F->line_1530));
(*(P173)rt_nil_check(F->l_1527)).name_ = F->op_1529;
(*(P173)rt_nil_check(F->l_1527)).a_ = F->r_1528;
} else {
f_term_342(F->up, &F->l_1527);
}
while (((f_at_op_306(F->up, rt_g_lit("+", 1)) || f_at_op_306(F->up, rt_g_lit("-", 1))) || f_at_op_306(F->up, rt_g_lit("&", 1)))) {
F->op_1529 = (*(P109)rt_nil_check(({ A108 ix1533 = F->up->toks_111; ix1533.p[rt_index(G_NV(F->up->tpos_113), ix1533.lo, ix1533.hi) - ix1533.lo]; }))).s_;
f_skip_315(F->up);
f_term_342(F->up, &F->r_1528);
F->l_1527 = f_binop_330(F->up, F->op_1529, F->l_1527, F->r_1528, G_NV(F->line_1530));
}
L_end_1532: ;
(*F->res_339) = F->l_1527;
goto ret_;
ret_:

  return;
}

static void f_term_342(struct f_greenc_1fr *up_, P173 *res_341) {
  struct f_term_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_341 = res_341;
F->l_1534 = NULL;
F->r_1535 = NULL;
F->op_1536 = NULL;
F->line_1537 = INT64_MIN;
F->line_1537 = f_cur_line_302(F->up);
f_factor_344(F->up, &F->l_1534);
while (((f_at_op_306(F->up, rt_g_lit("*", 1)) || f_at_op_306(F->up, rt_g_lit("/", 1))) || f_at_kw_304(F->up, rt_g_lit("MOD", 3)))) {
F->op_1536 = (*(P109)rt_nil_check(({ A108 ix1539 = F->up->toks_111; ix1539.p[rt_index(G_NV(F->up->tpos_113), ix1539.lo, ix1539.hi) - ix1539.lo]; }))).s_;
f_skip_315(F->up);
f_factor_344(F->up, &F->r_1535);
F->l_1534 = f_binop_330(F->up, F->op_1536, F->l_1534, F->r_1535, G_NV(F->line_1537));
}
L_end_1538: ;
(*F->res_341) = F->l_1534;
goto ret_;
ret_:

  return;
}

static void f_factor_344(struct f_greenc_1fr *up_, P173 *res_343) {
  struct f_factor_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_343 = res_343;
F->l_1540 = NULL;
F->r_1541 = NULL;
F->op_1542 = NULL;
F->line_1543 = INT64_MIN;
F->line_1543 = f_cur_line_302(F->up);
f_primary_346(F->up, &F->l_1540);
if (f_at_op_306(F->up, rt_g_lit("**", 2))) {
F->op_1542 = (*(P109)rt_nil_check(({ A108 ix1544 = F->up->toks_111; ix1544.p[rt_index(G_NV(F->up->tpos_113), ix1544.lo, ix1544.hi) - ix1544.lo]; }))).s_;
f_skip_315(F->up);
f_primary_346(F->up, &F->r_1541);
F->l_1540 = f_binop_330(F->up, F->op_1542, F->l_1540, F->r_1541, G_NV(F->line_1543));
}
(*F->res_343) = F->l_1540;
goto ret_;
ret_:

  return;
}

static void f_primary_346(struct f_greenc_1fr *up_, P173 *res_345) {
  struct f_primary_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
F->x_1545 = NULL;
F->line_1546 = INT64_MIN;
F->line_1546 = f_cur_line_302(F->up);
if (f_at_kind_308(F->up, ((rt_int)4LL))) {
F->x_1545 = f_nn_295(F->up, ((rt_int)1LL), G_NV(F->line_1546));
(*(P173)rt_nil_check(F->x_1545)).ival_ = G_NV((*(P109)rt_nil_check(({ A108 ix1547 = F->up->toks_111; ix1547.p[rt_index(G_NV(F->up->tpos_113), ix1547.lo, ix1547.hi) - ix1547.lo]; }))).ival_);
(*(P173)rt_nil_check(F->x_1545)).name_ = (*(P109)rt_nil_check(({ A108 ix1548 = F->up->toks_111; ix1548.p[rt_index(G_NV(F->up->tpos_113), ix1548.lo, ix1548.hi) - ix1548.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)5LL))) {
F->x_1545 = f_nn_295(F->up, ((rt_int)2LL), G_NV(F->line_1546));
(*(P173)rt_nil_check(F->x_1545)).name_ = (*(P109)rt_nil_check(({ A108 ix1549 = F->up->toks_111; ix1549.p[rt_index(G_NV(F->up->tpos_113), ix1549.lo, ix1549.hi) - ix1549.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
F->x_1545 = f_nn_295(F->up, ((rt_int)3LL), G_NV(F->line_1546));
(*(P173)rt_nil_check(F->x_1545)).name_ = (*(P109)rt_nil_check(({ A108 ix1550 = F->up->toks_111; ix1550.p[rt_index(G_NV(F->up->tpos_113), ix1550.lo, ix1550.hi) - ix1550.lo]; }))).s_;
f_skip_315(F->up);
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
F->x_1545 = f_nn_295(F->up, ((rt_int)4LL), G_NV(F->line_1546));
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NEW", 3))) {
f_skip_315(F->up);
F->x_1545 = f_nn_295(F->up, ((rt_int)11LL), G_NV(F->line_1546));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1545)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_348(F->up, &(*(P173)rt_nil_check(F->x_1545)).a_);
}
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_348(F->up, &F->x_1545);
(*F->res_345) = F->x_1545;
goto ret_;
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_name_p_353(F->up, &F->x_1545);
(*F->res_345) = F->x_1545;
goto ret_;
}
f_perror_314(F->up, rt_g_lit("expected an expression", 22));
(*F->res_345) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_348(struct f_greenc_1fr *up_, P173 *res_347) {
  struct f_agg_or_paren_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->line_1551 = INT64_MIN;
F->line_1551 = f_cur_line_302(F->up);
F->items_1552 = NULL;
F->itail_1553 = NULL;
F->it_1554 = NULL;
F->first_1555 = NULL;
F->keys_1556 = NULL;
F->ktail_1557 = NULL;
F->lab_1558 = NULL;
F->x_1559 = NULL;
F->more_1560 = INT_MIN;
F->more_1560 = 1;
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1560)) {
F->it_1554 = f_nn_295(F->up, ((rt_int)13LL), G_NV(F->line_1551));
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit("=>", 2));
F->lab_1558 = f_nn_295(F->up, ((rt_int)61LL), G_NV(F->line_1551));
(*(P173)rt_nil_check(F->lab_1558)).flag_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->it_1554)).a_ = F->lab_1558;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->it_1554)).b_);
} else {
f_expr_332(F->up, &F->first_1555);
if (((f_at_op_306(F->up, rt_g_lit("..", 2)) || f_at_op_306(F->up, rt_g_lit("|", 1))) || f_at_op_306(F->up, rt_g_lit("=>", 2)))) {
F->keys_1556 = NULL;
F->ktail_1557 = NULL;
for (;;) {
F->lab_1558 = f_nn_295(F->up, ((rt_int)61LL), G_NV(F->line_1551));
(*(P173)rt_nil_check(F->lab_1558)).a_ = F->first_1555;
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->lab_1558)).b_);
}
f_append_299(F->up, &F->keys_1556, &F->ktail_1557, F->lab_1558);
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1562;
}
f_skip_315(F->up);
f_simple_expr_340(F->up, &F->first_1555);
}
L_end_1562: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->it_1554)).a_ = F->keys_1556;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->it_1554)).b_);
} else {
(*(P173)rt_nil_check(F->it_1554)).b_ = F->first_1555;
}
}
f_append_299(F->up, &F->items_1552, &F->itail_1553, F->it_1554);
F->more_1560 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1560)) {
f_skip_315(F->up);
}
}
L_end_1561: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
if ((((*(P173)rt_nil_check(F->items_1552)).next_ == NULL) && ((*(P173)rt_nil_check(F->items_1552)).a_ == NULL))) {
F->x_1559 = f_nn_295(F->up, ((rt_int)15LL), G_NV(F->line_1551));
(*(P173)rt_nil_check(F->x_1559)).a_ = (*(P173)rt_nil_check(F->items_1552)).b_;
(*F->res_347) = F->x_1559;
goto ret_;
}
F->x_1559 = f_nn_295(F->up, ((rt_int)12LL), G_NV(F->line_1551));
(*(P173)rt_nil_check(F->x_1559)).a_ = F->items_1552;
(*F->res_347) = F->x_1559;
goto ret_;
ret_:

  return;
}

static int f_choice_token_350(struct f_greenc_1fr *up_, P109 t_349) {
  struct f_choice_token_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_349 = t_349;
if ((G_NV((*(P109)rt_nil_check(F->t_349)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_349)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_349)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P109)rt_nil_check(F->t_349)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_349)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_351(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1563 = INT64_MIN;
F->d_1563 = ((rt_int)0LL);
F->k_1564 = INT64_MIN;
F->k_1564 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_113), G_NV(F->k_1564)) > G_NV(F->up->ntoks_112))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1567 = NULL;
F->t_1567 = ({ A108 ix1568 = F->up->toks_111; ix1568.p[rt_index(rt_add(G_NV(F->up->tpos_113), G_NV(F->k_1564)), ix1568.lo, ix1568.hi) - ix1568.lo]; });
if (((G_NV((*(P109)rt_nil_check(F->t_1567)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1567)).s_)), rt_g_lit("(", 1)))) {
F->d_1563 = rt_add(G_NV(F->d_1563), ((rt_int)1LL));
} else if (((G_NV((*(P109)rt_nil_check(F->t_1567)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1567)).s_)), rt_g_lit(")", 1)))) {
F->d_1563 = rt_sub(G_NV(F->d_1563), ((rt_int)1LL));
if ((G_NV(F->d_1563) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1563) == ((rt_int)1LL)) && f_choice_token_350(F->up, F->t_1567))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P109)rt_nil_check(F->t_1567)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(F->t_1567)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1566: ;
F->k_1564 = rt_add(G_NV(F->k_1564), ((rt_int)1LL));
}
L_end_1565: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_353(struct f_greenc_1fr *up_, P173 *res_352) {
  struct f_name_p_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_352 = res_352;
F->p_1569 = NULL;
F->x_1570 = NULL;
F->args_1571 = NULL;
F->atail_1572 = NULL;
F->lo_1573 = NULL;
F->r_1574 = NULL;
F->line_1575 = INT64_MIN;
F->line_1575 = f_cur_line_302(F->up);
F->more_1576 = INT_MIN;
f_name_node_323(F->up, &F->p_1569);
for (;;) {
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_351(F->up))) {
F->x_1570 = f_nn_295(F->up, ((rt_int)8LL), G_NV(F->line_1575));
(*(P173)rt_nil_check(F->x_1570)).a_ = F->p_1569;
f_agg_or_paren_348(F->up, &(*(P173)rt_nil_check(F->x_1570)).b_);
(*(P173)rt_nil_check(F->x_1570)).flag_ = ((rt_int)9LL);
F->p_1569 = F->x_1570;
} else if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
F->args_1571 = NULL;
F->atail_1572 = NULL;
if ((!f_at_op_306(F->up, rt_g_lit(")", 1)))) {
F->more_1576 = 1;
while (G_NV(F->more_1576)) {
{
F->formal_1580 = NULL;
F->mark_1581 = INT64_MIN;
F->mark_1581 = ((rt_int)0LL);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1580 = (*(P109)rt_nil_check(({ A108 ix1582 = F->up->toks_111; ix1582.p[rt_index(G_NV(F->up->tpos_113), ix1582.lo, ix1582.hi) - ix1582.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1581 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1581 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1581 = ((rt_int)2LL);
} else {
F->mark_1581 = ((rt_int)4LL);
}
f_skip_315(F->up);
f_skip_315(F->up);
}
f_expr_332(F->up, &F->lo_1573);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
F->r_1574 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1575));
(*(P173)rt_nil_check(F->r_1574)).a_ = F->lo_1573;
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1574)).b_);
F->lo_1573 = F->r_1574;
}
(*(P173)rt_nil_check(F->lo_1573)).formal_ = F->formal_1580;
(*(P173)rt_nil_check(F->lo_1573)).flag_ = G_NV(F->mark_1581);
f_append_299(F->up, &F->args_1571, &F->atail_1572, F->lo_1573);

}
L_end_1579: ;
F->more_1576 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1576)) {
f_skip_315(F->up);
}
}
L_end_1578: ;
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
F->x_1570 = f_nn_295(F->up, ((rt_int)8LL), G_NV(F->line_1575));
(*(P173)rt_nil_check(F->x_1570)).a_ = F->p_1569;
(*(P173)rt_nil_check(F->x_1570)).b_ = F->args_1571;
F->p_1569 = F->x_1570;
} else if (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
F->x_1570 = f_nn_295(F->up, ((rt_int)9LL), G_NV(F->line_1575));
(*(P173)rt_nil_check(F->x_1570)).a_ = F->p_1569;
if (f_at_kw_304(F->up, rt_g_lit("ALL", 3))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1570)).name_ = f_mk_221(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1570)).name_);
}
F->p_1569 = F->x_1570;
} else if (f_at_op_306(F->up, rt_g_lit("'", 1))) {
f_skip_315(F->up);
F->x_1570 = f_nn_295(F->up, ((rt_int)10LL), G_NV(F->line_1575));
(*(P173)rt_nil_check(F->x_1570)).a_ = F->p_1569;
(*(P173)rt_nil_check(F->x_1570)).name_ = (*(P109)rt_nil_check(({ A108 ix1583 = F->up->toks_111; ix1583.p[rt_index(G_NV(F->up->tpos_113), ix1583.lo, ix1583.hi) - ix1583.lo]; }))).s_;
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1570)).b_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
F->p_1569 = F->x_1570;
} else {
(*F->res_352) = F->p_1569;
goto ret_;
}
}
L_end_1577: ;
ret_:

  return;
}

static void f_component_list_355(struct f_greenc_1fr *up_, P173 *res_354) {
  struct f_component_list_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->comps_1584 = NULL;
F->ctail_1585 = NULL;
F->names_1586 = NULL;
F->st_1587 = NULL;
F->def_1588 = NULL;
F->cm_1589 = NULL;
F->v_1590 = NULL;
F->arm_1591 = NULL;
F->atail_1592 = NULL;
F->labs_1593 = NULL;
F->ltail_1594 = NULL;
F->l_1595 = NULL;
F->is_c_1596 = INT_MIN;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_304(F->up, rt_g_lit("CASE", 4))) {
F->v_1590 = f_nn_295(F->up, ((rt_int)23LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_name_node_323(F->up, &(*(P173)rt_nil_check(F->v_1590)).a_);
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
F->atail_1592 = NULL;
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->arm_1591 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
F->labs_1593 = NULL;
F->ltail_1594 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->arm_1591)).flag_ = ((rt_int)1LL);
} else {
F->l_1595 = f_nn_295(F->up, ((rt_int)61LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1595)).a_);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1595)).b_);
}
f_append_299(F->up, &F->labs_1593, &F->ltail_1594, F->l_1595);
}
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1599;
}
f_skip_315(F->up);
}
L_end_1599: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->arm_1591)).a_ = F->labs_1593;
f_component_list_355(F->up, &(*(P173)rt_nil_check(F->arm_1591)).b_);
f_append_299(F->up, &(*(P173)rt_nil_check(F->v_1590)).b_, &F->atail_1592, F->arm_1591);
}
L_end_1598: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("CASE", 4));
f_expect_op_319(F->up, rt_g_lit(";", 1));
f_append_299(F->up, &F->comps_1584, &F->ctail_1585, F->v_1590);
} else if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_id_list_325(F->up, &F->names_1586);
f_expect_op_319(F->up, rt_g_lit(":", 1));
F->is_c_1596 = 0;
if (f_at_kw_304(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_315(F->up);
F->is_c_1596 = 1;
}
f_type_spec_361(F->up, &F->st_1587);
F->def_1588 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_1588);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1586 != NULL)) {
F->cm_1589 = f_nn_295(F->up, ((rt_int)63LL), G_NV((*(P173)rt_nil_check(F->names_1586)).line_));
(*(P173)rt_nil_check(F->cm_1589)).name_ = (*(P173)rt_nil_check(F->names_1586)).name_;
(*(P173)rt_nil_check(F->cm_1589)).a_ = F->st_1587;
(*(P173)rt_nil_check(F->cm_1589)).b_ = F->def_1588;
if (G_NV(F->is_c_1596)) {
(*(P173)rt_nil_check(F->cm_1589)).flag_ = ((rt_int)1LL);
}
f_append_299(F->up, &F->comps_1584, &F->ctail_1585, F->cm_1589);
F->names_1586 = (*(P173)rt_nil_check(F->names_1586)).next_;
}
L_end_1600: ;
} else {
(*F->res_354) = F->comps_1584;
goto ret_;
}
}
L_end_1597: ;
ret_:

  return;
}

static void f_discrete_range_p_357(struct f_greenc_1fr *up_, P173 *res_356) {
  struct f_discrete_range_p_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_356 = res_356;
F->lo_1601 = NULL;
F->r_1602 = NULL;
F->line_1603 = INT64_MIN;
F->line_1603 = f_cur_line_302(F->up);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_359(F->up, &(*F->res_356));
goto ret_;
}
if ((((((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_310(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_310(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_359(F->up, &(*F->res_356));
goto ret_;
}
f_simple_expr_340(F->up, &F->lo_1601);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
F->r_1602 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1603));
(*(P173)rt_nil_check(F->r_1602)).a_ = F->lo_1601;
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1602)).b_);
(*F->res_356) = F->r_1602;
goto ret_;
}
(*F->res_356) = F->lo_1601;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_359(struct f_greenc_1fr *up_, P173 *res_358) {
  struct f_subtype_ind_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_358 = res_358;
F->f_1604 = NULL;
F->x_1605 = NULL;
F->r_1606 = NULL;
F->args_1607 = NULL;
F->atail_1608 = NULL;
F->lo_1609 = NULL;
F->line_1610 = INT64_MIN;
F->line_1610 = f_cur_line_302(F->up);
F->more_1611 = INT_MIN;
F->more_1611 = 1;
F->x_1605 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1610));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1605)).name_);
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
if (((*(P173)rt_nil_check(F->x_1605)).tag_ == NULL)) {
(*(P173)rt_nil_check(F->x_1605)).tag_ = (*(P173)rt_nil_check(F->x_1605)).name_;
} else {
(*(P173)rt_nil_check(F->x_1605)).tag_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1605)).tag_)), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1605)).name_))));
}
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1605)).name_);
}
L_end_1612: ;
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1606 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1610));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1606)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1606)).b_);
(*(P173)rt_nil_check(F->x_1605)).a_ = F->r_1606;
(*(P173)rt_nil_check(F->x_1605)).flag_ = ((rt_int)1LL);
} else if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_1611)) {
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_321(F->up, &F->f_1604);
f_skip_315(F->up);
f_expr_332(F->up, &F->lo_1609);
(*(P173)rt_nil_check(F->lo_1609)).formal_ = F->f_1604;
} else {
f_discrete_range_p_357(F->up, &F->lo_1609);
}
f_append_299(F->up, &F->args_1607, &F->atail_1608, F->lo_1609);
F->more_1611 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1611)) {
f_skip_315(F->up);
}
}
L_end_1613: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*(P173)rt_nil_check(F->x_1605)).a_ = F->args_1607;
(*(P173)rt_nil_check(F->x_1605)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1605)).b_);
(*(P173)rt_nil_check(F->x_1605)).flag_ = ((rt_int)3LL);
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1606 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1610));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1606)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1606)).b_);
(*(P173)rt_nil_check(F->x_1605)).a_ = F->r_1606;
}
}
(*F->res_358) = F->x_1605;
goto ret_;
ret_:

  return;
}

static void f_type_spec_361(struct f_greenc_1fr *up_, P173 *res_360) {
  struct f_type_spec_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->x_1614 = NULL;
if ((((((((f_at_op_306(F->up, rt_g_lit("(", 1)) || f_at_kw_304(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_304(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_304(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_304(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_363(F->up, &F->x_1614);
} else {
f_subtype_ind_359(F->up, &F->x_1614);
}
(*F->res_360) = F->x_1614;
goto ret_;
ret_:

  return;
}

static void f_type_def_363(struct f_greenc_1fr *up_, P173 *res_362) {
  struct f_type_def_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_362 = res_362;
F->x_1615 = NULL;
F->lits_1616 = NULL;
F->ltail_1617 = NULL;
F->l_1618 = NULL;
F->idx_1619 = NULL;
F->itail_1620 = NULL;
F->r_1621 = NULL;
F->comps_1622 = NULL;
F->ctail_1623 = NULL;
F->names_1624 = NULL;
F->st_1625 = NULL;
F->def_1626 = NULL;
F->cm_1627 = NULL;
F->line_1628 = INT64_MIN;
F->line_1628 = f_cur_line_302(F->up);
F->more_1629 = INT_MIN;
F->more_1629 = 1;
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)70LL), G_NV(F->line_1628));
while (G_NV(F->more_1629)) {
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
F->l_1618 = f_nn_295(F->up, ((rt_int)3LL), G_NV(F->line_1628));
(*(P173)rt_nil_check(F->l_1618)).name_ = (*(P109)rt_nil_check(({ A108 ix1631 = F->up->toks_111; ix1631.p[rt_index(G_NV(F->up->tpos_113), ix1631.lo, ix1631.hi) - ix1631.lo]; }))).s_;
f_skip_315(F->up);
} else {
f_name_node_323(F->up, &F->l_1618);
}
f_append_299(F->up, &F->lits_1616, &F->ltail_1617, F->l_1618);
F->more_1629 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1629)) {
f_skip_315(F->up);
}
}
L_end_1630: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*(P173)rt_nil_check(F->x_1615)).a_ = F->lits_1616;
(*F->res_362) = F->x_1615;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)71LL), G_NV(F->line_1628));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1615)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1615)).b_);
(*F->res_362) = F->x_1615;
goto ret_;
}
if ((f_at_kw_304(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_304(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1615 = f_nn_295(F->up, ((rt_int)72LL), G_NV(F->line_1628));
(*(P173)rt_nil_check(F->x_1615)).flag_ = ((rt_int)1LL);
if (f_at_kw_304(F->up, rt_g_lit("DELTA", 5))) {
(*(P173)rt_nil_check(F->x_1615)).flag_ = ((rt_int)2LL);
}
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_1615)).a_);
if (f_at_kw_304(F->up, rt_g_lit("RANGE", 5))) {
f_skip_315(F->up);
F->r_1621 = f_nn_295(F->up, ((rt_int)14LL), G_NV(F->line_1628));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1621)).a_);
f_expect_op_319(F->up, rt_g_lit("..", 2));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->r_1621)).b_);
(*(P173)rt_nil_check(F->x_1615)).b_ = F->r_1621;
}
(*F->res_362) = F->x_1615;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)73LL), G_NV(F->line_1628));
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1629)) {
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1618 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_1628));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->l_1618)).name_);
(*(P173)rt_nil_check(F->x_1615)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_357(F->up, &F->l_1618);
if (((G_NV((*(P173)rt_nil_check(F->l_1618)).kind_) != ((rt_int)14LL)) && (G_NV((*(P173)rt_nil_check(F->l_1618)).kind_) != ((rt_int)80LL)))) {
f_perror_314(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_299(F->up, &F->idx_1619, &F->itail_1620, F->l_1618);
F->more_1629 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1629)) {
f_skip_315(F->up);
}
}
L_end_1632: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
(*(P173)rt_nil_check(F->x_1615)).a_ = F->idx_1619;
f_type_spec_361(F->up, &(*(P173)rt_nil_check(F->x_1615)).b_);
(*F->res_362) = F->x_1615;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)74LL), G_NV(F->line_1628));
f_component_list_355(F->up, &(*(P173)rt_nil_check(F->x_1615)).a_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("RECORD", 6));
(*F->res_362) = F->x_1615;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)75LL), G_NV(F->line_1628));
f_type_spec_361(F->up, &(*(P173)rt_nil_check(F->x_1615)).a_);
(*F->res_362) = F->x_1615;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("NEW", 3))) {
f_skip_315(F->up);
F->x_1615 = f_nn_295(F->up, ((rt_int)76LL), G_NV(F->line_1628));
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1615)).a_);
(*F->res_362) = F->x_1615;
goto ret_;
}
f_perror_314(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_362) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_365(struct f_greenc_1fr *up_, P173 *res_364) {
  struct f_pragma_p_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->x_1633 = NULL;
F->a_1634 = NULL;
F->head_1635 = NULL;
F->tail_1636 = NULL;
F->x_1633 = f_nn_295(F->up, ((rt_int)56LL), f_cur_line_302(F->up));
f_expect_kw_317(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1633)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
for (;;) {
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_name_node_323(F->up, &F->a_1634);
} else if (((f_at_kind_308(F->up, ((rt_int)6LL)) || f_at_kind_308(F->up, ((rt_int)4LL))) || f_at_kind_308(F->up, ((rt_int)5LL)))) {
f_primary_346(F->up, &F->a_1634);
} else {
f_perror_314(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_299(F->up, &F->head_1635, &F->tail_1636, F->a_1634);
if ((!f_at_op_306(F->up, rt_g_lit(",", 1)))) {
goto L_end_1637;
}
f_skip_315(F->up);
}
L_end_1637: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1633)).a_ = F->head_1635;
f_check_pragma_367(F->up, F->x_1633);
(*F->res_364) = F->x_1633;
ret_:

  return;
}

static void f_check_pragma_367(struct f_greenc_1fr *up_, P173 x_366) {
  struct f_check_pragma_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_366 = x_366;
F->p_1638 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_366)).name_)));
F->n_1639 = INT64_MIN;
F->n_1639 = f_list_len_301(F->up, (*(P173)rt_nil_check(F->x_366)).a_);
F->a_1640 = NULL;
F->a_1640 = (*(P173)rt_nil_check(F->x_366)).a_;
if ((eq_rt_gstr(F->p_1638, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1638, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1639) != ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1638), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1638, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1638, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1638, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1638, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1638, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1639) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1640)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1638), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1638, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1638, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1638, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1640)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1638, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_219 = (*(P173)rt_nil_check(F->a_1640)).name_;
} else if (eq_rt_gstr(F->p_1638, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_216 = (*(P173)rt_nil_check(F->a_1640)).name_;
}
} else if ((eq_rt_gstr(F->p_1638, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1638, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1639) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1640)).kind_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1638), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1638, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_217 = G_NV((*(P173)rt_nil_check(F->a_1640)).ival_);
} else {
F->up->conf_memory_size_218 = G_NV((*(P173)rt_nil_check(F->a_1640)).ival_);
}
} else if ((eq_rt_gstr(F->p_1638, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1638, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1639) == ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1638), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1640 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->a_1640)).kind_) != ((rt_int)5LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1638), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1640 = (*(P173)rt_nil_check(F->a_1640)).next_;
}
L_end_1641: ;
} else if (eq_rt_gstr(F->p_1638, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1639) != ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->a_1640)).kind_) != ((rt_int)3LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->x_366)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_skip_visibility_368(struct f_greenc_1fr *up_) {
  struct f_skip_visibility_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->names_1642 = NULL;
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_id_list_325(F->up, &F->names_1642);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
ret_:

  return;
}

static void f_skip_representation_369(struct f_greenc_1fr *up_) {
  struct f_skip_representation_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_304(F->up, rt_g_lit("USE", 3)))) {
f_skip_315(F->up);
}
L_end_1643: ;
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_304(F->up, rt_g_lit("END", 3)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_315(F->up);
}
L_end_1644: ;
f_skip_315(F->up);
f_skip_315(F->up);
}
while ((!f_at_op_306(F->up, rt_g_lit(";", 1)))) {
f_skip_315(F->up);
}
L_end_1645: ;
f_skip_315(F->up);
ret_:

  return;
}

static void f_decl_part_371(struct f_greenc_1fr *up_, P173 *res_370) {
  struct f_decl_part_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->head_1646 = NULL;
F->tail_1647 = NULL;
F->x_1648 = NULL;
F->names_1649 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("USE", 3))) {
f_skip_315(F->up);
F->x_1648 = f_nn_295(F->up, ((rt_int)55LL), f_cur_line_302(F->up));
f_id_list_325(F->up, &(*(P173)rt_nil_check(F->x_1648)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_368(F->up);
} else if (f_at_kw_304(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_369(F->up);
} else if ((f_at_kw_304(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_304(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_375(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1074(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1204(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (f_at_kw_304(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1076(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_373(F->up, &F->x_1648);
f_append_299(F->up, &F->head_1646, &F->tail_1647, F->x_1648);
} else {
(*F->res_370) = F->head_1646;
goto ret_;
}
}
L_end_1650: ;
ret_:

  return;
}

static void f_object_decl_373(struct f_greenc_1fr *up_, P173 *res_372) {
  struct f_object_decl_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->head_1651 = NULL;
F->tail_1652 = NULL;
F->names_1653 = NULL;
F->st_1654 = NULL;
F->init_1655 = NULL;
F->x_1656 = NULL;
F->line_1657 = INT64_MIN;
F->line_1657 = f_cur_line_302(F->up);
F->is_const_1658 = INT_MIN;
F->is_const_1658 = 0;
f_id_list_325(F->up, &F->names_1653);
f_expect_op_319(F->up, rt_g_lit(":", 1));
if (f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_315(F->up);
F->x_1656 = f_nn_295(F->up, ((rt_int)46LL), G_NV(F->line_1657));
(*(P173)rt_nil_check(F->x_1656)).name_ = (*(P173)rt_nil_check(F->names_1653)).name_;
f_name_p_353(F->up, &(*(P173)rt_nil_check(F->x_1656)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_372) = F->x_1656;
goto ret_;
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1653 != NULL)) {
F->x_1656 = f_nn_295(F->up, ((rt_int)46LL), G_NV(F->line_1657));
(*(P173)rt_nil_check(F->x_1656)).name_ = (*(P173)rt_nil_check(F->names_1653)).name_;
f_append_299(F->up, &F->head_1651, &F->tail_1652, F->x_1656);
F->names_1653 = (*(P173)rt_nil_check(F->names_1653)).next_;
}
L_end_1659: ;
(*F->res_372) = F->head_1651;
goto ret_;
}
if (f_at_kw_304(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_315(F->up);
F->is_const_1658 = 1;
}
f_type_spec_361(F->up, &F->st_1654);
if ((f_at_kw_304(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1658)))) {
f_skip_315(F->up);
F->x_1656 = f_nn_295(F->up, ((rt_int)40LL), G_NV(F->line_1657));
(*(P173)rt_nil_check(F->x_1656)).name_ = (*(P173)rt_nil_check(F->names_1653)).name_;
(*(P173)rt_nil_check(F->x_1656)).a_ = F->st_1654;
(*(P173)rt_nil_check(F->x_1656)).flag_ = ((rt_int)2LL);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1656)).b_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_372) = F->x_1656;
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->init_1655);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
while ((F->names_1653 != NULL)) {
if (G_NV(F->is_const_1658)) {
F->x_1656 = f_nn_295(F->up, ((rt_int)41LL), G_NV(F->line_1657));
} else {
F->x_1656 = f_nn_295(F->up, ((rt_int)40LL), G_NV(F->line_1657));
}
(*(P173)rt_nil_check(F->x_1656)).name_ = (*(P173)rt_nil_check(F->names_1653)).name_;
(*(P173)rt_nil_check(F->x_1656)).a_ = F->st_1654;
(*(P173)rt_nil_check(F->x_1656)).b_ = F->init_1655;
f_append_299(F->up, &F->head_1651, &F->tail_1652, F->x_1656);
F->names_1653 = (*(P173)rt_nil_check(F->names_1653)).next_;
}
L_end_1660: ;
(*F->res_372) = F->head_1651;
goto ret_;
ret_:

  return;
}

static void f_type_decl_375(struct f_greenc_1fr *up_, P173 *res_374) {
  struct f_type_decl_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->x_1661 = NULL;
F->line_1662 = INT64_MIN;
F->line_1662 = f_cur_line_302(F->up);
if (f_at_kw_304(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_315(F->up);
F->x_1661 = f_nn_295(F->up, ((rt_int)43LL), G_NV(F->line_1662));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1661)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1661)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_374) = F->x_1661;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("TYPE", 4));
F->x_1661 = f_nn_295(F->up, ((rt_int)42LL), G_NV(F->line_1662));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1661)).name_);
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
(*F->res_374) = NULL;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1661)).a_ = f_nn_295(F->up, ((rt_int)77LL), G_NV(F->line_1662));
} else {
f_type_def_363(F->up, &(*(P173)rt_nil_check(F->x_1661)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_374) = F->x_1661;
goto ret_;
ret_:

  return;
}

static void f_formal_part_377(struct f_greenc_1fr *up_, P173 *res_376) {
  struct f_formal_part_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->head_1663 = NULL;
F->tail_1664 = NULL;
F->names_1665 = NULL;
F->st_1666 = NULL;
F->def_1667 = NULL;
F->p_1668 = NULL;
F->mode_1669 = INT64_MIN;
F->more_1670 = INT_MIN;
F->more_1670 = 1;
f_expect_op_319(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1670)) {
f_id_list_325(F->up, &F->names_1665);
f_expect_op_319(F->up, rt_g_lit(":", 1));
F->mode_1669 = ((rt_int)1LL);
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
if (f_at_kw_304(F->up, rt_g_lit("OUT", 3))) {
f_skip_315(F->up);
F->mode_1669 = ((rt_int)2LL);
}
} else if (f_at_kw_304(F->up, rt_g_lit("OUT", 3))) {
f_skip_315(F->up);
F->mode_1669 = ((rt_int)3LL);
}
f_subtype_ind_359(F->up, &F->st_1666);
F->def_1667 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_1667);
}
while ((F->names_1665 != NULL)) {
F->p_1668 = f_nn_295(F->up, ((rt_int)47LL), G_NV((*(P173)rt_nil_check(F->names_1665)).line_));
(*(P173)rt_nil_check(F->p_1668)).name_ = (*(P173)rt_nil_check(F->names_1665)).name_;
(*(P173)rt_nil_check(F->p_1668)).ival_ = G_NV(F->mode_1669);
(*(P173)rt_nil_check(F->p_1668)).a_ = F->st_1666;
(*(P173)rt_nil_check(F->p_1668)).b_ = F->def_1667;
f_append_299(F->up, &F->head_1663, &F->tail_1664, F->p_1668);
F->names_1665 = (*(P173)rt_nil_check(F->names_1665)).next_;
}
L_end_1672: ;
F->more_1670 = f_at_op_306(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1670)) {
f_skip_315(F->up);
}
}
L_end_1671: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
(*F->res_376) = F->head_1663;
goto ret_;
ret_:

  return;
}

static void f_designator_379(struct f_greenc_1fr *up_, P139 *res_378) {
  struct f_designator_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_378 = res_378;
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
f_skip_315(F->up);
(*F->res_378) = f_mk_221(F->up, f_upper_s_234(F->up, (*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1676 = F->up->toks_111; ix1676.p[rt_index(rt_sub(G_NV(F->up->tpos_113), ((rt_int)1LL)), ix1676.lo, ix1676.hi) - ix1676.lo]; }))).s_))));
if (eq_rt_gstr((*(P139)rt_nil_check((*F->res_378))), rt_g_lit("/=", 2))) {
f_perror_314(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_236(F->up, (*(P139)rt_nil_check((*F->res_378)))))) {
f_perror_314(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->res_378))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_321(F->up, &(*F->res_378));
goto ret_;
ret_:

  return;
}

static void f_subprogram_381(struct f_greenc_1fr *up_, P173 *res_380) {
  struct f_subprogram_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_380 = res_380;
F->x_1677 = NULL;
F->line_1678 = INT64_MIN;
F->line_1678 = f_cur_line_302(F->up);
F->is_proc_1679 = INT_MIN;
F->is_proc_1679 = f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_315(F->up);
if (G_NV(F->is_proc_1679)) {
F->x_1677 = f_nn_295(F->up, ((rt_int)44LL), G_NV(F->line_1678));
} else {
F->x_1677 = f_nn_295(F->up, ((rt_int)45LL), G_NV(F->line_1678));
}
f_designator_379(F->up, &(*(P173)rt_nil_check(F->x_1677)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1207(F->up, F->x_1677, &(*F->res_380));
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_1677)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1677)).b_);
if (G_NV(F->is_proc_1679)) {
(*(P173)rt_nil_check(F->x_1677)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1679))) {
f_perror_314(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1677)).ival_ = ((rt_int)1LL);
(*F->res_380) = F->x_1677;
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
if (f_at_kw_304(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_314(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_383(F->up, F->x_1677);
if ((f_at_kind_308(F->up, ((rt_int)1LL)) || f_at_kind_308(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1680 = F->up->toks_111; ix1680.p[rt_index(G_NV(F->up->tpos_113), ix1680.lo, ix1680.hi) - ix1680.lo]; }))).s_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1677)).name_))))) {
f_perror_314(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1677)).name_))));
}
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_380) = F->x_1677;
goto ret_;
ret_:

  return;
}

static void f_body_part_383(struct f_greenc_1fr *up_, P173 x_382) {
  struct f_body_part_383fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_382 = x_382;
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_382)).c_);
if (f_at_kw_304(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_315(F->up);
F->up->saw_interface_201 = 0;
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_382)).d_);
if ((G_NV(F->up->saw_interface_201) && ((*(P173)rt_nil_check(F->x_382)).d_ == NULL))) {
(*(P173)rt_nil_check(F->x_382)).tag_ = f_mk_221(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_201 = 0;
}
if (f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_385(F->up, &(*(P173)rt_nil_check(F->x_382)).e_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_385(struct f_greenc_1fr *up_, P173 *res_384) {
  struct f_parse_handlers_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_384 = res_384;
F->head_1681 = NULL;
F->tail_1682 = NULL;
F->h_1683 = NULL;
F->names_1684 = NULL;
F->ntail_1685 = NULL;
F->n_1686 = NULL;
f_expect_kw_317(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->h_1683 = f_nn_295(F->up, ((rt_int)62LL), f_cur_line_302(F->up));
F->names_1684 = NULL;
F->ntail_1685 = NULL;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
F->n_1686 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->n_1686)).name_ = f_mk_221(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_323(F->up, &F->n_1686);
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
if (((*(P173)rt_nil_check(F->n_1686)).tag_ == NULL)) {
(*(P173)rt_nil_check(F->n_1686)).tag_ = (*(P173)rt_nil_check(F->n_1686)).name_;
} else {
(*(P173)rt_nil_check(F->n_1686)).tag_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_1686)).tag_)), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_1686)).name_))));
}
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->n_1686)).name_);
}
L_end_1689: ;
}
f_append_299(F->up, &F->names_1684, &F->ntail_1685, F->n_1686);
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1688;
}
f_skip_315(F->up);
}
L_end_1688: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
(*(P173)rt_nil_check(F->h_1683)).a_ = F->names_1684;
f_statements_390(F->up, &(*(P173)rt_nil_check(F->h_1683)).b_);
f_append_299(F->up, &F->head_1681, &F->tail_1682, F->h_1683);
}
L_end_1687: ;
(*F->res_384) = F->head_1681;
goto ret_;
ret_:

  return;
}

static void f_package_p_387(struct f_greenc_1fr *up_, P173 *res_386) {
  struct f_package_p_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_386 = res_386;
F->x_1690 = NULL;
F->line_1691 = INT64_MIN;
F->line_1691 = f_cur_line_302(F->up);
f_expect_kw_317(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_304(F->up, rt_g_lit("BODY", 4))) {
f_skip_315(F->up);
F->x_1690 = f_nn_295(F->up, ((rt_int)49LL), G_NV(F->line_1691));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_body_part_383(F->up, F->x_1690);
} else {
F->x_1690 = f_nn_295(F->up, ((rt_int)48LL), G_NV(F->line_1691));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1690)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1207(F->up, F->x_1690, &(*F->res_386));
goto ret_;
}
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1690)).c_);
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1690)).d_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_386) = F->x_1690;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_388(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_388fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_304(F->up, rt_g_lit("END", 3)) || f_at_kw_304(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_304(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_304(F->up, rt_g_lit("OR", 2))) || f_at_kind_308(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_390(struct f_greenc_1fr *up_, P173 *res_389) {
  struct f_statements_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_389 = res_389;
F->head_1692 = NULL;
F->tail_1693 = NULL;
F->x_1694 = NULL;
while ((!f_at_statements_end_388(F->up))) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1694);
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_1694)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_201 = 1;
}
} else {
f_statement_392(F->up, &F->x_1694);
f_append_299(F->up, &F->head_1692, &F->tail_1693, F->x_1694);
}
}
L_end_1695: ;
(*F->res_389) = F->head_1692;
goto ret_;
ret_:

  return;
}

static void f_statement_392(struct f_greenc_1fr *up_, P173 *res_391) {
  struct f_statement_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_391 = res_391;
F->l_1696 = NULL;
F->x_1697 = NULL;
F->label_1698 = NULL;
if (f_at_op_306(F->up, rt_g_lit("<<", 2))) {
F->l_1696 = f_nn_295(F->up, ((rt_int)57LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_expect_id_321(F->up, &F->label_1698);
f_expect_op_319(F->up, rt_g_lit(">>", 2));
(*(P173)rt_nil_check(F->l_1696)).name_ = F->label_1698;
if (f_at_op_306(F->up, rt_g_lit("<<", 2))) {
f_statement_392(F->up, &F->x_1697);
} else {
f_labelled_statement_395(F->up, F->label_1698, &F->x_1697);
}
(*(P173)rt_nil_check(F->l_1696)).next_ = F->x_1697;
(*F->res_391) = F->l_1696;
goto ret_;
}
f_labelled_statement_395(F->up, NULL, &(*F->res_391));
ret_:

  return;
}

static void f_labelled_statement_395(struct f_greenc_1fr *up_, P139 label_393, P173 *res_394) {
  struct f_labelled_statement_395fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_393 = label_393;
F->res_394 = res_394;
F->x_1699 = NULL;
F->t_1700 = NULL;
F->line_1701 = INT64_MIN;
F->line_1701 = f_cur_line_302(F->up);
if (f_at_kw_304(F->up, rt_g_lit("NULL", 4))) {
f_skip_315(F->up);
f_expect_op_319(F->up, rt_g_lit(";", 1));
F->x_1699 = f_nn_295(F->up, ((rt_int)31LL), G_NV(F->line_1701));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_399(F->up, &F->x_1699);
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_401(F->up, &F->x_1699);
(*F->res_394) = F->x_1699;
goto ret_;
} else if (((f_at_kw_304(F->up, rt_g_lit("FOR", 3)) || f_at_kw_304(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_304(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_403(F->up, &F->x_1699);
(*(P173)rt_nil_check(F->x_1699)).tag_ = F->label_393;
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
if (((F->label_393 == NULL) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1702 = F->up->toks_111; ix1702.p[rt_index(G_NV(F->up->tpos_113), ix1702.lo, ix1702.hi) - ix1702.lo]; }))).s_)), (*(P139)rt_nil_check(F->label_393)))))) {
f_perror_314(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_315(F->up);
} else if ((F->label_393 != NULL)) {
f_perror_314(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" ends with end loop ", 20)), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if ((f_at_kw_304(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_304(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1699 = f_nn_295(F->up, ((rt_int)25LL), G_NV(F->line_1701));
(*(P173)rt_nil_check(F->x_1699)).tag_ = F->label_393;
if (f_at_kw_304(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_1699)).a_);
}
f_expect_kw_317(F->up, rt_g_lit("BEGIN", 5));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1699)).b_);
if (f_at_kw_304(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_385(F->up, &(*(P173)rt_nil_check(F->x_1699)).c_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
if (((F->label_393 == NULL) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P109)rt_nil_check(({ A108 ix1703 = F->up->toks_111; ix1703.p[rt_index(G_NV(F->up->tpos_113), ix1703.lo, ix1703.hi) - ix1703.lo]; }))).s_)), (*(P139)rt_nil_check(F->label_393)))))) {
f_perror_314(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_315(F->up);
} else if ((F->label_393 != NULL)) {
f_perror_314(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" ends with end ", 15)), (*(P139)rt_nil_check(F->label_393))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("EXIT", 4))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)26LL), G_NV(F->line_1701));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1699)).name_);
}
if (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1699)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)27LL), G_NV(F->line_1701));
if ((!f_at_op_306(F->up, rt_g_lit(";", 1)))) {
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1699)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("RAISE", 5))) {
f_skip_315(F->up);
if (f_at_op_306(F->up, rt_g_lit(";", 1))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)29LL), G_NV(F->line_1701));
(*F->res_394) = F->x_1699;
goto ret_;
}
F->x_1699 = f_nn_295(F->up, ((rt_int)28LL), G_NV(F->line_1701));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1699)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1699)).a_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
while (f_at_op_306(F->up, rt_g_lit(".", 1))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1699)).tag_ = (*(P173)rt_nil_check(F->x_1699)).name_;
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1699)).name_);
}
L_end_1704: ;
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)30LL), G_NV(F->line_1701));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1699)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
} else if (f_at_kw_304(F->up, rt_g_lit("GOTO", 4))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)58LL), G_NV(F->line_1701));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1699)).name_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
}
f_task_statement_397(F->up, &F->x_1699);
if ((F->x_1699 != NULL)) {
(*F->res_394) = F->x_1699;
goto ret_;
}
f_name_p_353(F->up, &F->t_1700);
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
F->x_1699 = f_nn_295(F->up, ((rt_int)20LL), G_NV(F->line_1701));
(*(P173)rt_nil_check(F->x_1699)).a_ = F->t_1700;
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1699)).b_);
} else {
F->x_1699 = f_nn_295(F->up, ((rt_int)21LL), G_NV(F->line_1701));
(*(P173)rt_nil_check(F->x_1699)).a_ = F->t_1700;
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_394) = F->x_1699;
goto ret_;
ret_:

  return;
}

static void f_task_statement_397(struct f_greenc_1fr *up_, P173 *res_396) {
  struct f_task_statement_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_396 = res_396;
f_parse_task_statement_1084(F->up, &(*F->res_396));
ret_:

  return;
}

static void f_if_stmt_399(struct f_greenc_1fr *up_, P173 *res_398) {
  struct f_if_stmt_399fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_398 = res_398;
F->x_1705 = NULL;
F->arm_1706 = NULL;
F->head_1707 = NULL;
F->tail_1708 = NULL;
F->go_1709 = INT_MIN;
F->go_1709 = 1;
F->x_1705 = f_nn_295(F->up, ((rt_int)22LL), f_cur_line_302(F->up));
f_skip_315(F->up);
F->arm_1706 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->arm_1706)).a_);
f_expect_kw_317(F->up, rt_g_lit("THEN", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1706)).b_);
f_append_299(F->up, &F->head_1707, &F->tail_1708, F->arm_1706);
while (G_NV(F->go_1709)) {
if (f_at_kw_304(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_315(F->up);
F->arm_1706 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
f_expr_332(F->up, &(*(P173)rt_nil_check(F->arm_1706)).a_);
f_expect_kw_317(F->up, rt_g_lit("THEN", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1706)).b_);
f_append_299(F->up, &F->head_1707, &F->tail_1708, F->arm_1706);
} else if (f_at_kw_304(F->up, rt_g_lit("ELSE", 4))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1705)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1705)).b_);
} else {
F->go_1709 = 0;
}
}
L_end_1710: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("IF", 2));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1705)).a_ = F->head_1707;
(*F->res_398) = F->x_1705;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_401(struct f_greenc_1fr *up_, P173 *res_400) {
  struct f_case_stmt_401fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_400 = res_400;
F->x_1711 = NULL;
F->arm_1712 = NULL;
F->head_1713 = NULL;
F->tail_1714 = NULL;
F->labs_1715 = NULL;
F->ltail_1716 = NULL;
F->l_1717 = NULL;
F->others_arm_1718 = INT_MIN;
F->x_1711 = f_nn_295(F->up, ((rt_int)23LL), f_cur_line_302(F->up));
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1711)).a_);
f_expect_kw_317(F->up, rt_g_lit("OF", 2));
while (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
F->labs_1715 = NULL;
F->ltail_1716 = NULL;
F->others_arm_1718 = 0;
for (;;) {
if (f_at_kw_304(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_315(F->up);
F->others_arm_1718 = 1;
} else {
F->l_1717 = f_nn_295(F->up, ((rt_int)61LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1717)).a_);
if (f_at_op_306(F->up, rt_g_lit("..", 2))) {
f_skip_315(F->up);
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->l_1717)).b_);
}
f_append_299(F->up, &F->labs_1715, &F->ltail_1716, F->l_1717);
}
if ((!f_at_op_306(F->up, rt_g_lit("|", 1)))) {
goto L_end_1720;
}
f_skip_315(F->up);
}
L_end_1720: ;
f_expect_op_319(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1718)) {
(*(P173)rt_nil_check(F->x_1711)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1711)).c_);
if ((!f_at_kw_304(F->up, rt_g_lit("END", 3)))) {
f_perror_314(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1712 = f_nn_295(F->up, ((rt_int)60LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->arm_1712)).a_ = F->labs_1715;
f_statements_390(F->up, &(*(P173)rt_nil_check(F->arm_1712)).b_);
f_append_299(F->up, &F->head_1713, &F->tail_1714, F->arm_1712);
}
}
L_end_1719: ;
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("CASE", 4));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_1711)).b_ = F->head_1713;
(*F->res_400) = F->x_1711;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_403(struct f_greenc_1fr *up_, P173 *res_402) {
  struct f_loop_stmt_403fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_402 = res_402;
F->x_1721 = NULL;
F->r_1722 = NULL;
F->line_1723 = INT64_MIN;
F->line_1723 = f_cur_line_302(F->up);
F->x_1721 = f_nn_295(F->up, ((rt_int)24LL), G_NV(F->line_1723));
if (f_at_kw_304(F->up, rt_g_lit("FOR", 3))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1721)).flag_ = ((rt_int)2LL);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_1721)).name_);
f_expect_kw_317(F->up, rt_g_lit("IN", 2));
if (f_at_kw_304(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1721)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_1721)).a_);
} else {
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_1721)).a_);
}
} else if (f_at_kw_304(F->up, rt_g_lit("WHILE", 5))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_1721)).flag_ = ((rt_int)1LL);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_1721)).a_);
}
f_expect_kw_317(F->up, rt_g_lit("LOOP", 4));
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_1721)).b_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("LOOP", 4));
(*F->res_402) = F->x_1721;
goto ret_;
ret_:

  return;
}

static void f_compilation_405(struct f_greenc_1fr *up_, P173 *res_404) {
  struct f_compilation_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_404 = res_404;
F->head_1724 = NULL;
F->tail_1725 = NULL;
F->x_1726 = NULL;
while ((!f_at_kind_308(F->up, ((rt_int)0LL)))) {
if (f_at_kw_304(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_365(F->up, &F->x_1726);
} else {
if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_visibility_368(F->up);
}
if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &F->x_1726);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &F->x_1726);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1074(F->up, &F->x_1726);
} else if (f_at_kw_304(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1204(F->up, &F->x_1726);
} else {
f_perror_314(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_append_299(F->up, &F->head_1724, &F->tail_1725, F->x_1726);
}
}
L_end_1727: ;
(*F->res_404) = F->head_1724;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_407(struct f_greenc_1fr *up_, rt_gstr s_406) {
  struct f_hash_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_406 = cp_rt_gstr(s_406);
F->h_1728 = INT64_MIN;
F->h_1728 = ((rt_int)0LL);
{ rt_int lo1732 = ((rt_int)1LL), hi1733 = ({ rt_gstr at1730 = F->s_406; at1730.hi >= at1730.lo ? at1730.hi - at1730.lo + 1 : (rt_int)0; });
for (rt_int it1734 = lo1732; it1734 <= hi1733; it1734++) {
F->i_1731 = it1734;
F->h_1728 = rt_rem(rt_add(rt_mul(G_NV(F->h_1728), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1735 = F->s_406; ix1735.p[rt_index(F->i_1731, ix1735.lo, ix1735.hi) - ix1735.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1729: ;
F->result_ = G_NV(F->h_1728);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_lookup_409(struct f_greenc_1fr *up_, rt_gstr name_408) {
  struct f_lookup_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_408 = cp_rt_gstr(name_408);
F->y_1736 = NULL;
F->y_1736 = ({ A115 ix1737 = F->up->table_118; ix1737.p[rt_index(f_hash_407(F->up, F->name_408), ix1737.lo, ix1737.hi) - ix1737.lo]; });
while ((F->y_1736 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1736)).name_)), F->name_408)) {
F->result_ = F->y_1736;
goto ret_;
}
F->y_1736 = (*(P116)rt_nil_check(F->y_1736)).chain_;
}
L_end_1738: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_412(struct f_greenc_1fr *up_, P116 a_410, P116 b_411) {
  struct f_same_task_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_410 = a_410;
F->b_411 = b_411;
if ((F->a_410 == F->b_411)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_410 == NULL) || (F->b_411 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->a_410)).cname_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_411)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_lookup_entry_415(struct f_greenc_1fr *up_, rt_gstr name_413, P116 owner_414) {
  struct f_lookup_entry_415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_413 = cp_rt_gstr(name_413);
F->owner_414 = owner_414;
F->y_1739 = NULL;
F->y_1739 = ({ A115 ix1740 = F->up->table_118; ix1740.p[rt_index(f_hash_407(F->up, F->name_413), ix1740.lo, ix1740.hi) - ix1740.lo]; });
while ((F->y_1739 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1739)).name_)), F->name_413) && (G_NV((*(P116)rt_nil_check(F->y_1739)).kind_) == ((rt_int)10LL))) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_1739)).members_, F->owner_414))) {
F->result_ = F->y_1739;
goto ret_;
}
F->y_1739 = (*(P116)rt_nil_check(F->y_1739)).chain_;
}
L_end_1741: ;
F->result_ = f_lookup_409(F->up, F->name_413);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_lookup_at_418(struct f_greenc_1fr *up_, rt_gstr name_416, rt_int d_417) {
  struct f_lookup_at_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_416 = cp_rt_gstr(name_416);
F->d_417 = d_417;
F->y_1742 = NULL;
F->y_1742 = ({ A115 ix1743 = F->up->table_118; ix1743.p[rt_index(f_hash_407(F->up, F->name_416), ix1743.lo, ix1743.hi) - ix1743.lo]; });
while ((F->y_1742 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1742)).name_)), F->name_416) && (G_NV((*(P116)rt_nil_check(F->y_1742)).depth_) == F->d_417))) {
F->result_ = F->y_1742;
goto ret_;
}
F->y_1742 = (*(P116)rt_nil_check(F->y_1742)).chain_;
}
L_end_1744: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_420(struct f_greenc_1fr *up_, rt_gstr name_419) {
  struct f_enclosing_depth_420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_419 = cp_rt_gstr(name_419);
{ rt_int lo1747 = ((rt_int)1LL), hi1748 = G_NV(F->up->nunits_187);
for (rt_int it1749 = hi1748; it1749 >= lo1747; it1749--) {
F->i_1746 = it1749;
if (eq_rt_gstr((*(P139)rt_nil_check(({ A182 ix1750 = F->up->unit_names_183; ix1750.p[rt_index(F->i_1746, ix1750.lo, ix1750.hi) - ix1750.lo]; }))), F->name_419)) {
F->result_ = G_NV(({ A184 ix1751 = F->up->unit_depths_185; ix1751.p[rt_index(F->i_1746, ix1751.lo, ix1751.hi) - ix1751.lo]; }));
goto ret_;
}
}
}
L_end_1745: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_422(struct f_greenc_1fr *up_, P139 name_421) {
  struct f_push_unit_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_421 = name_421;
F->up->nunits_187 = rt_add(G_NV(F->up->nunits_187), ((rt_int)1LL));
(*({ A182 *ix1752 = &(F->up->unit_names_183); &ix1752->p[rt_index(G_NV(F->up->nunits_187), ix1752->lo, ix1752->hi) - ix1752->lo]; })) = F->name_421;
(*({ A184 *ix1753 = &(F->up->unit_depths_185); &ix1753->p[rt_index(G_NV(F->up->nunits_187), ix1753->lo, ix1753->hi) - ix1753->lo]; })) = G_NV(F->up->depth_119);
ret_:

  return;
}

static P116 f_lookup_decl_424(struct f_greenc_1fr *up_, P173 d_423) {
  struct f_lookup_decl_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_423 = d_423;
F->y_1754 = NULL;
F->y_1754 = ({ A115 ix1755 = F->up->table_118; ix1755.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_423)).name_))), ix1755.lo, ix1755.hi) - ix1755.lo]; });
while ((F->y_1754 != NULL)) {
if (((*(P116)rt_nil_check(F->y_1754)).decl_ == F->d_423)) {
F->result_ = F->y_1754;
goto ret_;
}
F->y_1754 = (*(P116)rt_nil_check(F->y_1754)).chain_;
}
L_end_1756: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_426(struct f_greenc_1fr *up_, P116 y_425) {
  struct f_overloadable_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_425 = y_425;
F->result_ = ((((G_NV((*(P116)rt_nil_check(F->y_425)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_425)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_425)).kind_) == ((rt_int)7LL))) || (G_NV((*(P116)rt_nil_check(F->y_425)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_429(struct f_greenc_1fr *up_, P121 a_427, P121 b_428) {
  struct f_same_429fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_427 = a_427;
F->b_428 = b_428;
F->result_ = (F->a_427 == F->b_428);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P121 f_root_431(struct f_greenc_1fr *up_, P121 t_430) {
  struct f_root_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_430 = t_430;
F->r_1757 = NULL;
F->r_1757 = F->t_430;
while (((*(P121)rt_nil_check(F->r_1757)).parent_ != NULL)) {
F->r_1757 = (*(P121)rt_nil_check(F->r_1757)).parent_;
}
L_end_1758: ;
F->result_ = F->r_1757;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_434(struct f_greenc_1fr *up_, P121 a_432, P121 b_433) {
  struct f_derived_from_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_432 = a_432;
F->b_433 = b_433;
F->r_1759 = NULL;
F->r_1759 = F->a_432;
while ((F->r_1759 != NULL)) {
if ((F->r_1759 == F->b_433)) {
F->result_ = 1;
goto ret_;
}
F->r_1759 = (*(P121)rt_nil_check(F->r_1759)).parent_;
}
L_end_1760: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_436(struct f_greenc_1fr *up_, P121 t_435) {
  struct f_is_numeric_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_435 = t_435;
F->result_ = (((G_NV((*(P121)rt_nil_check(F->t_435)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check(F->t_435)).kind_) == ((rt_int)3LL))) || (G_NV((*(P121)rt_nil_check(F->t_435)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_438(struct f_greenc_1fr *up_, P121 t_437) {
  struct f_is_discrete_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_437 = t_437;
F->result_ = ((((G_NV((*(P121)rt_nil_check(F->t_437)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check(F->t_437)).kind_) == ((rt_int)4LL))) || (G_NV((*(P121)rt_nil_check(F->t_437)).kind_) == ((rt_int)11LL))) || (G_NV((*(P121)rt_nil_check(F->t_437)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_441(struct f_greenc_1fr *up_, P1761 a_439, P1761 b_440) {
  struct f_same_types_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_439 = a_439;
F->b_440 = b_440;
F->x_1763 = NULL;
F->x_1763 = F->a_439;
F->y_1764 = NULL;
F->y_1764 = F->b_440;
while (((F->x_1763 != NULL) && (F->y_1764 != NULL))) {
if (((!f_same_429(F->up, (*(P1761)rt_nil_check(F->x_1763)).t_, (*(P1761)rt_nil_check(F->y_1764)).t_)) || (G_NV((*(P1761)rt_nil_check(F->x_1763)).mode_) != G_NV((*(P1761)rt_nil_check(F->y_1764)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1763 = (*(P1761)rt_nil_check(F->x_1763)).next_;
F->y_1764 = (*(P1761)rt_nil_check(F->y_1764)).next_;
}
L_end_1765: ;
F->result_ = ((F->x_1763 == NULL) && (F->y_1764 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_444(struct f_greenc_1fr *up_, P1761 a_442, P1761 b_443) {
  struct f_same_signature_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_442 = a_442;
F->b_443 = b_443;
F->x_1766 = NULL;
F->x_1766 = F->a_442;
F->y_1767 = NULL;
F->y_1767 = F->b_443;
while (((F->x_1766 != NULL) && (F->y_1767 != NULL))) {
if ((((!f_same_429(F->up, (*(P1761)rt_nil_check(F->x_1766)).t_, (*(P1761)rt_nil_check(F->y_1767)).t_)) || (G_NV((*(P1761)rt_nil_check(F->x_1766)).mode_) != G_NV((*(P1761)rt_nil_check(F->y_1767)).mode_))) || (!eq_rt_gstr((*(P139)rt_nil_check((*(P1761)rt_nil_check(F->x_1766)).name_)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->y_1767)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1766 = (*(P1761)rt_nil_check(F->x_1766)).next_;
F->y_1767 = (*(P1761)rt_nil_check(F->y_1767)).next_;
}
L_end_1768: ;
F->result_ = ((F->x_1766 == NULL) && (F->y_1767 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_447(struct f_greenc_1fr *up_, P116 y_445, P116 z_446) {
  struct f_distinct_overload_447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_445 = y_445;
F->z_446 = z_446;
if ((!(f_overloadable_426(F->up, F->y_445) && f_overloadable_426(F->up, F->z_446)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P116)rt_nil_check(F->y_445)).kind_) != G_NV((*(P116)rt_nil_check(F->z_446)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_444(F->up, (*(P116)rt_nil_check(F->y_445)).params_, (*(P116)rt_nil_check(F->z_446)).params_)) || (!f_same_429(F->up, (*(P116)rt_nil_check(F->y_445)).result_, (*(P116)rt_nil_check(F->z_446)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_450(struct f_greenc_1fr *up_, P116 y_448, rt_int line_449) {
  struct f_define_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_448 = y_448;
F->line_449 = line_449;
F->h_1769 = INT64_MIN;
F->h_1769 = f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_448)).name_)));
F->z_1770 = NULL;
F->z_1770 = ({ A115 ix1771 = F->up->table_118; ix1771.p[rt_index(G_NV(F->h_1769), ix1771.lo, ix1771.hi) - ix1771.lo]; });
while ((F->z_1770 != NULL)) {
if ((((G_NV((*(P116)rt_nil_check(F->z_1770)).depth_) == G_NV(F->up->depth_119)) && eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1770)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_448)).name_)))) && (!f_distinct_overload_447(F->up, F->y_448, F->z_1770)))) {
f_fail_242(F->up, F->line_449, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_448)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1770 = (*(P116)rt_nil_check(F->z_1770)).chain_;
}
L_end_1772: ;
(*(P116)rt_nil_check(F->y_448)).depth_ = G_NV(F->up->depth_119);
(*(P116)rt_nil_check(F->y_448)).chain_ = ({ A115 ix1773 = F->up->table_118; ix1773.p[rt_index(G_NV(F->h_1769), ix1773.lo, ix1773.hi) - ix1773.lo]; });
(*({ A115 *ix1774 = &(F->up->table_118); &ix1774->p[rt_index(G_NV(F->h_1769), ix1774->lo, ix1774->hi) - ix1774->lo]; })) = F->y_448;
(*(P116)rt_nil_check(F->y_448)).stack_ = F->up->scope_stack_120;
F->up->scope_stack_120 = F->y_448;
ret_:

  return;
}

static void f_open_scope_451(struct f_greenc_1fr *up_) {
  struct f_open_scope_451fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_119 = rt_add(G_NV(F->up->depth_119), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_452(struct f_greenc_1fr *up_) {
  struct f_close_scope_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_120 != NULL) && (G_NV((*(P116)rt_nil_check(F->up->scope_stack_120)).depth_) == G_NV(F->up->depth_119)))) {
(*({ A115 *ix1776 = &(F->up->table_118); &ix1776->p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->scope_stack_120)).name_))), ix1776->lo, ix1776->hi) - ix1776->lo]; })) = (*(P116)rt_nil_check(F->up->scope_stack_120)).chain_;
F->up->scope_stack_120 = (*(P116)rt_nil_check(F->up->scope_stack_120)).stack_;
}
L_end_1775: ;
F->up->depth_119 = rt_sub(G_NV(F->up->depth_119), ((rt_int)1LL));
ret_:

  return;
}

static P116 f_new_sym_455(struct f_greenc_1fr *up_, rt_int kind_453, P139 name_454) {
  struct f_new_sym_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_453 = kind_453;
F->name_454 = name_454;
F->result_ = ({ R117 *cell1777 = rt_alloc(sizeof(R117)); *cell1777 = cp_R117(({ R117 ag1778; ag1778.kind_ = F->kind_453; ag1778.name_ = F->name_454; ag1778.t_ = NULL; ag1778.c_ = NULL; ag1778.access_path_ = NULL; ag1778.cname_ = NULL; ag1778.ro_ = 0; ag1778.mvalue_ = ((rt_int)0LL); ag1778.hasmv_ = 0; ag1778.decl_ = NULL; ag1778.params_ = NULL; ag1778.result_ = NULL; ag1778.depth_ = ((rt_int)0LL); ag1778.level_ = ((rt_int)0LL); ag1778.byref_ = 0; ag1778.vrp_ = 0; ag1778.hidden_ = 0; ag1778.from_use_ = 0; ag1778.members_ = NULL; ag1778.mnext_ = NULL; ag1778.chain_ = NULL; ag1778.stack_ = NULL; ag1778.flags_ = ((rt_int)0LL); ag1778; })); (P116)cell1777; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P121 f_new_typ_457(struct f_greenc_1fr *up_, rt_int kind_456) {
  struct f_new_typ_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_456 = kind_456;
F->result_ = ({ R122 *cell1781 = rt_alloc(sizeof(R122)); *cell1781 = cp_R122(({ R122 ag1782; ag1782.kind_ = F->kind_456; ag1782.name_ = NULL; ag1782.lits_ = NULL; ag1782.elem_ = NULL; ag1782.idx_ = NULL; ag1782.elemcons_ = NULL; ag1782.tcons_ = NULL; ag1782.fields_ = NULL; ag1782.target_ = NULL; ag1782.decl_ = NULL; ag1782.cname_ = NULL; ag1782.forward_ = 0; ag1782.defined_ = 0; ag1782.priv_ = 0; ag1782.next_ = NULL; ag1782.idx2_ = NULL; ag1782.littab_ = NULL; ag1782.parent_ = NULL; ag1782.ndigits_ = ((rt_int)0LL); ag1782.fdelta_ = NULL; ag1782.fsmall_ = NULL; ag1782.dims_ = ((rt_int)0LL); ag1782.is_restricted_ = 0; ag1782; })); (P121)cell1781; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P177 f_new_cons_458(struct f_greenc_1fr *up_) {
  struct f_new_cons_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R178 *cell1785 = rt_alloc(sizeof(R178)); *cell1785 = cp_R178(({ R178 ag1786; ag1786.lo_ = NULL; ag1786.hi_ = NULL; ag1786.slen_ = NULL; ag1786.mlo_ = ((rt_int)0LL); ag1786.mhi_ = ((rt_int)0LL); ag1786.hasm_ = 0; ag1786.lo2_ = NULL; ag1786.hi2_ = NULL; ag1786.acc_ = NULL; ag1786.inner_ = NULL; ag1786.dv_ = NULL; ag1786; })); (P177)cell1785; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_460(struct f_greenc_1fr *up_, P177 c_459) {
  struct f_bounded_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_459 = c_459;
if ((F->c_459 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_459)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_462(struct f_greenc_1fr *up_, P177 c_461) {
  struct f_bounded_hi_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_461 = c_461;
if ((F->c_461 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_461)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_464(struct f_greenc_1fr *up_, P177 c_463) {
  struct f_static_bounds_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_463 = c_463;
if ((F->c_463 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P177)rt_nil_check(F->c_463)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_466(struct f_greenc_1fr *up_, P177 c_465) {
  struct f_discriminated_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_465 = c_465;
if ((F->c_465 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P177)rt_nil_check(F->c_465)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_468(struct f_greenc_1fr *up_, P121 t_467) {
  struct f_kind_name_468fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_467 = t_467;
if (((*(P121)rt_nil_check(F->t_467)).name_ != NULL)) {
F->result_ = (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_467)).name_));
goto ret_;
}
{ rt_int sel1787 = G_NV((*(P121)rt_nil_check(F->t_467)).kind_);
if (0 || sel1787 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1787 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1787 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1787 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1787 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1787 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1787 == ((rt_int)16LL)) {
F->result_ = rt_g_lit("a fixed point type", 18);
goto ret_;
} else {
F->result_ = rt_g_lit("an anonymous type", 17);
goto ret_;
}
}
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_type_472(struct f_greenc_1fr *up_, P121 got_469, P121 want_470, rt_int line_471) {
  struct f_check_type_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_469 = got_469;
F->want_470 = want_470;
F->line_471 = line_471;
if ((F->want_470 == NULL)) {
goto ret_;
}
if (((G_NV((*(P121)rt_nil_check(F->got_469)).kind_) == ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check(F->want_470)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_429(F->up, F->got_469, F->want_470))) {
f_fail_242(F->up, F->line_471, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_468(F->up, F->got_469)), rt_g_lit(" where ", 7)), f_kind_name_468(F->up, F->want_470)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_474(struct f_greenc_1fr *up_, P121 t_473) {
  struct f_field_count_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_473 = t_473;
F->n_1788 = INT64_MIN;
F->n_1788 = ((rt_int)0LL);
F->f_1789 = NULL;
F->f_1789 = (*(P121)rt_nil_check(F->t_473)).fields_;
while ((F->f_1789 != NULL)) {
F->n_1788 = rt_add(G_NV(F->n_1788), ((rt_int)1LL));
F->f_1789 = (*(P1779)rt_nil_check(F->f_1789)).next_;
}
L_end_1790: ;
F->result_ = G_NV(F->n_1788);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_477(struct f_greenc_1fr *up_, P121 t_475, P139 *r_476) {
  struct f_ctype_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_475 = t_475;
F->r_476 = r_476;
F->s_1791 = NULL;
{ rt_int sel1792 = G_NV((*(P121)rt_nil_check(F->t_475)).kind_);
if (0 || sel1792 == ((rt_int)1LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1792 == ((rt_int)2LL) || sel1792 == ((rt_int)4LL) || sel1792 == ((rt_int)11LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("int", 3));
} else if (0 || sel1792 == ((rt_int)3LL) || sel1792 == ((rt_int)16LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("double", 6));
} else if (0 || sel1792 == ((rt_int)5LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1792 == ((rt_int)9LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("void", 4));
} else if (0 || sel1792 == ((rt_int)13LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1792 == ((rt_int)14LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1792 == ((rt_int)15LL)) {
(*F->r_476) = f_mk_221(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P121)rt_nil_check(F->t_475)).cname_ == NULL)) {
f_declare_ctype_482(F->up, F->t_475);
} else if ((((G_NV((*(P121)rt_nil_check(F->t_475)).kind_) == ((rt_int)7LL)) && G_NV((*(P121)rt_nil_check(F->t_475)).forward_)) && (!G_NV((*(P121)rt_nil_check(F->t_475)).defined_)))) {
(*(P121)rt_nil_check(F->t_475)).defined_ = 1;
f_field_decls_480(F->up, F->t_475, &F->s_1791);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_475)).cname_))), rt_g_lit(" {", 2)), (*(P139)rt_nil_check(F->s_1791))), rt_g_lit(" };", 3)));
}
(*F->r_476) = (*(P121)rt_nil_check(F->t_475)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_480(struct f_greenc_1fr *up_, P121 t_478, P139 *r_479) {
  struct f_field_decls_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_478 = t_478;
F->r_479 = r_479;
F->f_1793 = NULL;
F->f_1793 = (*(P121)rt_nil_check(F->t_478)).fields_;
F->s_1794 = NULL;
F->ct_1795 = NULL;
F->s_1794 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1793 != NULL)) {
f_ctype_477(F->up, (*(P1779)rt_nil_check(F->f_1793)).t_, &F->ct_1795);
F->s_1794 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->s_1794)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_1795))), one_rt_gstr(32)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1793)).name_)))), one_rt_gstr(59)));
F->f_1793 = (*(P1779)rt_nil_check(F->f_1793)).next_;
}
L_end_1796: ;
(*F->r_479) = F->s_1794;
ret_:

  return;
}

static void f_declare_ctype_482(struct f_greenc_1fr *up_, P121 t_481) {
  struct f_declare_ctype_482fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_481 = t_481;
F->ct_1797 = NULL;
F->s_1798 = NULL;
F->target_1799 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_481)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_591(F->up, F->t_481);
}
if ((G_NV((*(P121)rt_nil_check(F->t_481)).kind_) == ((rt_int)6LL))) {
f_new_name_224(F->up, rt_g_lit("A", 1), &(*(P121)rt_nil_check(F->t_481)).cname_);
} else if ((G_NV((*(P121)rt_nil_check(F->t_481)).kind_) == ((rt_int)7LL))) {
f_new_name_224(F->up, rt_g_lit("R", 1), &(*(P121)rt_nil_check(F->t_481)).cname_);
} else {
f_new_name_224(F->up, rt_g_lit("P", 1), &(*(P121)rt_nil_check(F->t_481)).cname_);
}
(*(P121)rt_nil_check(F->t_481)).next_ = F->up->all_types_123;
F->up->all_types_123 = F->t_481;
if ((G_NV((*(P121)rt_nil_check(F->t_481)).kind_) == ((rt_int)8LL))) {
F->target_1799 = (*(P121)rt_nil_check(F->t_481)).target_;
if ((F->target_1799 == NULL)) {
f_fail_242(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_468(F->up, F->t_481)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P121)rt_nil_check(F->target_1799)).kind_) == ((rt_int)7LL))) {
if (((*(P121)rt_nil_check(F->target_1799)).cname_ == NULL)) {
f_new_name_224(F->up, rt_g_lit("R", 1), &(*(P121)rt_nil_check(F->target_1799)).cname_);
(*(P121)rt_nil_check(F->target_1799)).next_ = F->up->all_types_123;
F->up->all_types_123 = F->target_1799;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1799)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1799)).cname_))), one_rt_gstr(59)));
(*(P121)rt_nil_check(F->target_1799)).forward_ = 1;
}
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->target_1799)).cname_))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_477(F->up, F->target_1799, &F->ct_1797);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P139)rt_nil_check(F->ct_1797))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P121)rt_nil_check(F->t_481)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_481)).elem_, &F->ct_1797);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P139)rt_nil_check(F->ct_1797))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), one_rt_gstr(59)));
(*(P121)rt_nil_check(F->t_481)).defined_ = 1;
f_field_decls_480(F->up, F->t_481, &F->s_1798);
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_481)).cname_))), rt_g_lit(" {", 2)), (*(P139)rt_nil_check(F->s_1798))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_485(struct f_greenc_1fr *up_, P173 lits_483, rt_gstr name_484) {
  struct f_lit_index_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_483 = lits_483;
F->name_484 = cp_rt_gstr(name_484);
F->i_1800 = INT64_MIN;
F->i_1800 = ((rt_int)0LL);
F->l_1801 = NULL;
F->l_1801 = F->lits_483;
while ((F->l_1801 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_1801)).name_)), F->name_484)) {
F->result_ = G_NV(F->i_1800);
goto ret_;
}
F->i_1800 = rt_add(G_NV(F->i_1800), ((rt_int)1LL));
F->l_1801 = (*(P173)rt_nil_check(F->l_1801)).next_;
}
L_end_1802: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_489(struct f_greenc_1fr *up_, P173 e_486, rt_int *v_487, int *ok_488) {
  struct f_manifest_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_486 = e_486;
F->v_487 = v_487;
F->ok_488 = ok_488;
F->a_1803 = INT64_MIN;
F->b_1804 = INT64_MIN;
F->ok2_1805 = INT_MIN;
F->y_1806 = NULL;
(*F->ok_488) = 0;
(*F->v_487) = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)1LL))) {
(*F->ok_488) = 1;
(*F->v_487) = G_NV((*(P173)rt_nil_check(F->e_486)).ival_);
} else if ((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)15LL))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_486)).a_, &(*F->v_487), &(*F->ok_488));
 (void)rt_range((*F->ok_488), 0, 1);
} else if (((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("-", 1)))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_486)).a_, &F->a_1803, &(*F->ok_488));
 (void)rt_range((*F->ok_488), 0, 1);
(*F->v_487) = rt_neg(G_NV(F->a_1803));
} else if (((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("*", 1))))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_486)).a_, &F->a_1803, &(*F->ok_488));
 (void)rt_range((*F->ok_488), 0, 1);
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_486)).b_, &F->b_1804, &F->ok2_1805);
 (void)rt_range(F->ok2_1805, 0, 1);
(*F->ok_488) = (G_NV((*F->ok_488)) && G_NV(F->ok2_1805));
if (G_NV((*F->ok_488))) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("+", 1))) {
(*F->v_487) = rt_add(G_NV(F->a_1803), G_NV(F->b_1804));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("-", 1))) {
(*F->v_487) = rt_sub(G_NV(F->a_1803), G_NV(F->b_1804));
} else {
(*F->v_487) = rt_mul(G_NV(F->a_1803), G_NV(F->b_1804));
}
}
} else if ((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)5LL))) {
F->y_1806 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)));
if ((((F->y_1806 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)2LL)) || (G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)7LL)))) && G_NV((*(P116)rt_nil_check(F->y_1806)).hasmv_))) {
(*F->ok_488) = 1;
(*F->v_487) = G_NV((*(P116)rt_nil_check(F->y_1806)).mvalue_);
}
} else if (((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check(F->e_486)).a_))) {
F->y_1806 = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_486)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), G_NV((*(P173)rt_nil_check(F->e_486)).line_));
if ((((F->y_1806 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)2LL)) || (G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)7LL)))) && G_NV((*(P116)rt_nil_check(F->y_1806)).hasmv_))) {
(*F->ok_488) = 1;
(*F->v_487) = G_NV((*(P116)rt_nil_check(F->y_1806)).mvalue_);
}
} else if ((((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)10LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_486)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1806 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_486)).a_)).name_)));
if (((((F->y_1806 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(F->y_1806)).c_ != NULL)) && G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1806)).c_)).hasm_))) {
(*F->ok_488) = 1;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_486)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_487) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1806)).c_)).mlo_);
} else {
(*F->v_487) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1806)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P173)rt_nil_check(F->e_486)).kind_) == ((rt_int)8LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_486)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_486)).b_) == ((rt_int)1LL)))) {
F->y_1806 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_486)).a_)).name_)));
if (((((F->y_1806 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_1806)).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(F->y_1806)).t_ != NULL)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1806)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_486)).b_, &(*F->v_487), &(*F->ok_488));
 (void)rt_range((*F->ok_488), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_493(struct f_greenc_1fr *up_, P173 st_490, P121 *t_491, P177 *c_492) {
  struct f_resolve_493fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_490 = st_490;
F->t_491 = t_491;
F->c_492 = c_492;
F->y_1807 = NULL;
F->dummy_1808 = NULL;
F->code_1809 = NULL;
F->ok_1810 = INT_MIN;
F->r_1811 = NULL;
(*F->c_492) = f_new_cons_458(F->up);
if ((G_NV((*(P173)rt_nil_check(F->st_490)).kind_) != ((rt_int)80LL))) {
f_type_definition_527(F->up, F->st_490, NULL, &(*F->t_491), &(*F->c_492));
goto ret_;
}
if (((*(P173)rt_nil_check(F->st_490)).tag_ != NULL)) {
F->y_1807 = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_490)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_490)).name_)), G_NV((*(P173)rt_nil_check(F->st_490)).line_));
} else {
F->y_1807 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_490)).name_)));
}
if (((F->y_1807 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_1807)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_490)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_490)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_491) = (*(P116)rt_nil_check(F->y_1807)).t_;
if (((*(P116)rt_nil_check(F->y_1807)).c_ != NULL)) {
(*(P177)rt_nil_check((*F->c_492))).lo_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).lo_;
(*(P177)rt_nil_check((*F->c_492))).hi_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).hi_;
(*(P177)rt_nil_check((*F->c_492))).slen_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).slen_;
(*(P177)rt_nil_check((*F->c_492))).mlo_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).mlo_);
(*(P177)rt_nil_check((*F->c_492))).mhi_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).mhi_);
(*(P177)rt_nil_check((*F->c_492))).hasm_ = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).hasm_);
(*(P177)rt_nil_check((*F->c_492))).acc_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).acc_;
(*(P177)rt_nil_check((*F->c_492))).inner_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).inner_;
(*(P177)rt_nil_check((*F->c_492))).dv_ = (*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_1807)).c_)).dv_;
}
if (((*F->t_491) == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_490)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->st_490)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P173)rt_nil_check(F->st_490)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P121)rt_nil_check((*F->t_491))).kind_) != ((rt_int)3LL)) && (G_NV((*(P121)rt_nil_check((*F->t_491))).kind_) != ((rt_int)16LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_490)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->st_490)).b_, NULL, &F->dummy_1808, &(*(P177)rt_nil_check((*F->c_492))).acc_);
}
if (((G_NV((*(P173)rt_nil_check(F->st_490)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P173)rt_nil_check(F->st_490)).flag_) == ((rt_int)3LL)) && ((*(P173)rt_nil_check(F->st_490)).a_ != NULL)))) {
F->r_1811 = (*(P173)rt_nil_check(F->st_490)).a_;
if (((!f_is_numeric_436(F->up, (*F->t_491))) && (!f_is_discrete_438(F->up, (*F->t_491))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_490)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_511(F->up, F->r_1811, (*F->t_491), (*F->c_492));
} else if ((G_NV((*(P173)rt_nil_check(F->st_490)).flag_) == ((rt_int)2LL))) {
f_constraint_list_497(F->up, F->st_490, (*F->t_491), (*F->c_492));
}
ret_:

  return;
}

static void f_constraint_list_497(struct f_greenc_1fr *up_, P173 st_494, P121 t_495, P177 c_496) {
  struct f_constraint_list_497fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_494 = st_494;
F->t_495 = t_495;
F->c_496 = c_496;
F->r_1812 = NULL;
F->r_1812 = (*(P173)rt_nil_check(F->st_494)).a_;
F->arrt_1813 = NULL;
F->arrt_1813 = F->t_495;
F->cc_1814 = NULL;
F->cc_1814 = F->c_496;
F->it_1815 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_495)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_501(F->up, F->st_494, F->t_495, F->c_496);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->t_495)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_494)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_301(F->up, F->r_1812) != G_NV((*(P121)rt_nil_check(F->t_495)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_494)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P121)rt_nil_check(F->t_495)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1812 != NULL)) {
if (((*(P173)rt_nil_check(F->r_1812)).formal_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_494)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_507(F->up, F->r_1812, (*(P121)rt_nil_check(F->arrt_1813)).idx_, &F->it_1815, &(*(P177)rt_nil_check(F->cc_1814)).lo_, &(*(P177)rt_nil_check(F->cc_1814)).hi_);
f_check_type_472(F->up, F->it_1815, (*(P121)rt_nil_check(F->arrt_1813)).idx_, G_NV((*(P173)rt_nil_check(F->st_494)).line_));
(*(P177)rt_nil_check(F->cc_1814)).mlo_ = ((rt_int)0LL);
(*(P177)rt_nil_check(F->cc_1814)).mhi_ = ((rt_int)0LL);
(*(P177)rt_nil_check(F->cc_1814)).hasm_ = 0;
F->r_1812 = (*(P173)rt_nil_check(F->r_1812)).next_;
if ((F->r_1812 != NULL)) {
(*(P177)rt_nil_check(F->cc_1814)).inner_ = f_new_cons_458(F->up);
F->cc_1814 = (*(P177)rt_nil_check(F->cc_1814)).inner_;
F->arrt_1813 = (*(P121)rt_nil_check(F->arrt_1813)).elem_;
}
}
L_end_1816: ;
ret_:

  return;
}

static void f_discriminant_constraint_501(struct f_greenc_1fr *up_, P173 st_498, P121 t_499, P177 c_500) {
  struct f_discriminant_constraint_501fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_498 = st_498;
F->t_499 = t_499;
F->c_500 = c_500;
F->a_1817 = NULL;
F->a_1817 = (*(P173)rt_nil_check(F->st_498)).a_;
F->f_1818 = NULL;
F->f_1818 = (*(P121)rt_nil_check(F->t_499)).fields_;
F->vt_1819 = NULL;
F->v_1820 = NULL;
F->d_1821 = NULL;
F->tail_1822 = NULL;
(*(P177)rt_nil_check(F->c_500)).dv_ = NULL;
while ((F->a_1817 != NULL)) {
if (((*(P173)rt_nil_check(F->a_1817)).formal_ != NULL)) {
F->f_1818 = (*(P121)rt_nil_check(F->t_499)).fields_;
while (((F->f_1818 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1818)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_1817)).formal_)))))) {
F->f_1818 = (*(P1779)rt_nil_check(F->f_1818)).next_;
}
L_end_1824: ;
} else {
while (((F->f_1818 != NULL) && (!G_NV((*(P1779)rt_nil_check(F->f_1818)).is_discr_)))) {
F->f_1818 = (*(P1779)rt_nil_check(F->f_1818)).next_;
}
L_end_1825: ;
}
if (((F->f_1818 == NULL) || (!G_NV((*(P1779)rt_nil_check(F->f_1818)).is_discr_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_498)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_468(F->up, F->t_499)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_779(F->up, F->a_1817, (*(P1779)rt_nil_check(F->f_1818)).t_, &F->vt_1819, &F->v_1820);
f_check_type_472(F->up, F->vt_1819, (*(P1779)rt_nil_check(F->f_1818)).t_, G_NV((*(P173)rt_nil_check(F->st_498)).line_));
F->d_1821 = ({ R1784 *cell1826 = rt_alloc(sizeof(R1784)); *cell1826 = cp_R1784(({ R1784 ag1827; ag1827.name_ = (*(P1779)rt_nil_check(F->f_1818)).name_; ag1827.v_ = F->v_1820; ag1827.next_ = NULL; ag1827; })); (P1783)cell1826; });
if ((F->tail_1822 == NULL)) {
(*(P177)rt_nil_check(F->c_500)).dv_ = F->d_1821;
} else {
(*(P1783)rt_nil_check(F->tail_1822)).next_ = F->d_1821;
}
F->tail_1822 = F->d_1821;
if (((*(P173)rt_nil_check(F->a_1817)).formal_ == NULL)) {
F->f_1818 = (*(P1779)rt_nil_check(F->f_1818)).next_;
}
F->a_1817 = (*(P173)rt_nil_check(F->a_1817)).next_;
}
L_end_1823: ;
F->f_1818 = (*(P121)rt_nil_check(F->t_499)).fields_;
while ((F->f_1818 != NULL)) {
if (G_NV((*(P1779)rt_nil_check(F->f_1818)).is_discr_)) {
F->d_1821 = (*(P177)rt_nil_check(F->c_500)).dv_;
while (((F->d_1821 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_1821)).name_)), (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1818)).name_)))))) {
F->d_1821 = (*(P1783)rt_nil_check(F->d_1821)).next_;
}
L_end_1829: ;
if ((F->d_1821 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->st_498)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1818)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1818 = (*(P1779)rt_nil_check(F->f_1818)).next_;
}
L_end_1828: ;
ret_:

  return;
}

static void f_discrete_bounds_507(struct f_greenc_1fr *up_, P173 r_502, P121 want_503, P121 *t_504, P139 *lo_505, P139 *hi_506) {
  struct f_discrete_bounds_507fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_502 = r_502;
F->want_503 = want_503;
F->t_504 = t_504;
F->lo_505 = lo_505;
F->hi_506 = hi_506;
F->c_1830 = NULL;
F->y_1831 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->r_502)).kind_) == ((rt_int)14LL))) {
f_range_bounds_774(F->up, (*(P173)rt_nil_check(F->r_502)).a_, (*(P173)rt_nil_check(F->r_502)).b_, F->want_503, G_NV((*(P173)rt_nil_check(F->r_502)).line_), &(*F->t_504), &(*F->lo_505), &(*F->hi_506));
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->r_502)).kind_) == ((rt_int)5LL))) {
F->y_1831 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_502)).name_)));
if (((F->y_1831 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_1831)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_502)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P173)rt_nil_check(F->r_502)).kind_) != ((rt_int)80LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_502)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P173)rt_nil_check(F->r_502)).kind_) == ((rt_int)5LL))) {
(*F->t_504) = (*(P116)rt_nil_check(F->y_1831)).t_;
F->c_1830 = (*(P116)rt_nil_check(F->y_1831)).c_;
} else {
f_resolve_493(F->up, F->r_502, &(*F->t_504), &F->c_1830);
}
if (((F->c_1830 == NULL) || ((*(P177)rt_nil_check(F->c_1830)).lo_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->r_502)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_505) = (*(P177)rt_nil_check(F->c_1830)).lo_;
(*F->hi_506) = (*(P177)rt_nil_check(F->c_1830)).hi_;
ret_:

  return;
}

static void f_range_of_511(struct f_greenc_1fr *up_, P173 r_508, P121 t_509, P177 c_510) {
  struct f_range_of_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_508 = r_508;
F->t_509 = t_509;
F->c_510 = c_510;
F->dummy_1832 = NULL;
F->ok_1833 = INT_MIN;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->r_508)).a_, F->t_509, &F->dummy_1832, &(*(P177)rt_nil_check(F->c_510)).lo_);
f_check_type_472(F->up, F->dummy_1832, F->t_509, G_NV((*(P173)rt_nil_check(F->r_508)).line_));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->r_508)).b_, F->t_509, &F->dummy_1832, &(*(P177)rt_nil_check(F->c_510)).hi_);
f_check_type_472(F->up, F->dummy_1832, F->t_509, G_NV((*(P173)rt_nil_check(F->r_508)).line_));
if ((G_NV((*(P121)rt_nil_check(F->t_509)).kind_) == ((rt_int)16LL))) {
(*(P177)rt_nil_check(F->c_510)).lo_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_510)).lo_))), one_rt_gstr(41)));
(*(P177)rt_nil_check(F->c_510)).hi_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_510)).hi_))), one_rt_gstr(41)));
}
f_manifest_489(F->up, (*(P173)rt_nil_check(F->r_508)).a_, &(*(P177)rt_nil_check(F->c_510)).mlo_, &F->ok_1833);
 (void)rt_range(F->ok_1833, 0, 1);
(*(P177)rt_nil_check(F->c_510)).hasm_ = G_NV(F->ok_1833);
f_manifest_489(F->up, (*(P173)rt_nil_check(F->r_508)).b_, &(*(P177)rt_nil_check(F->c_510)).mhi_, &F->ok_1833);
 (void)rt_range(F->ok_1833, 0, 1);
(*(P177)rt_nil_check(F->c_510)).hasm_ = (G_NV((*(P177)rt_nil_check(F->c_510)).hasm_) && G_NV(F->ok_1833));
ret_:

  return;
}

static void f_fresh_typ_515(struct f_greenc_1fr *up_, rt_int kind_512, P139 name_513, P121 *t_514) {
  struct f_fresh_typ_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_512 = kind_512;
F->name_513 = name_513;
F->t_514 = t_514;
F->ph_1834 = NULL;
F->ph_1834 = F->up->completing_172;
F->up->completing_172 = NULL;
if ((F->ph_1834 == NULL)) {
(*F->t_514) = f_new_typ_457(F->up, F->kind_512);
(*(P121)rt_nil_check((*F->t_514))).name_ = F->name_513;
goto ret_;
}
as_R122(&(*(P121)rt_nil_check(F->ph_1834)), (*(P121)rt_nil_check(f_new_typ_457(F->up, F->kind_512))));
(*(P121)rt_nil_check(F->ph_1834)).name_ = F->name_513;
(*F->t_514) = F->ph_1834;
ret_:

  return;
}

static void f_inherit_519(struct f_greenc_1fr *up_, P121 parent_516, P121 t_517, rt_int line_518) {
  struct f_inherit_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_516 = parent_516;
F->t_517 = t_517;
F->line_518 = line_518;
F->s_1835 = NULL;
F->s_1835 = F->up->scope_stack_120;
F->z_1836 = NULL;
F->p_1837 = NULL;
F->q_1838 = NULL;
F->tail_1839 = NULL;
F->uses_1840 = INT_MIN;
F->news_1841 = NULL;
while ((F->s_1835 != NULL)) {
if (((((G_NV((*(P116)rt_nil_check(F->s_1835)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->s_1835)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P116)rt_nil_check(F->s_1835)).hidden_))) && ((*(P116)rt_nil_check(F->s_1835)).members_ == NULL))) {
F->uses_1840 = f_same_429(F->up, (*(P116)rt_nil_check(F->s_1835)).result_, F->parent_516);
F->p_1837 = (*(P116)rt_nil_check(F->s_1835)).params_;
while ((F->p_1837 != NULL)) {
F->uses_1840 = (G_NV(F->uses_1840) || f_same_429(F->up, (*(P1761)rt_nil_check(F->p_1837)).t_, F->parent_516));
F->p_1837 = (*(P1761)rt_nil_check(F->p_1837)).next_;
}
L_end_1843: ;
if (G_NV(F->uses_1840)) {
f_copy_sym_1027(F->up, F->s_1835, &F->z_1836);
(*(P116)rt_nil_check(F->z_1836)).params_ = NULL;
F->tail_1839 = NULL;
F->p_1837 = (*(P116)rt_nil_check(F->s_1835)).params_;
while ((F->p_1837 != NULL)) {
F->q_1838 = ({ R1762 *cell1845 = rt_alloc(sizeof(R1762)); *cell1845 = cp_R1762(({ R1762 ag1846; ag1846.name_ = (*(P1761)rt_nil_check(F->p_1837)).name_; ag1846.mode_ = G_NV((*(P1761)rt_nil_check(F->p_1837)).mode_); ag1846.t_ = (*(P1761)rt_nil_check(F->p_1837)).t_; ag1846.c_ = (*(P1761)rt_nil_check(F->p_1837)).c_; ag1846.cfield_ = (*(P1761)rt_nil_check(F->p_1837)).cfield_; ag1846.dflt_ = (*(P1761)rt_nil_check(F->p_1837)).dflt_; ag1846.next_ = NULL; ag1846.dsym_ = (*(P1761)rt_nil_check(F->p_1837)).dsym_; ag1846; })); (P1761)cell1845; });
if (f_same_429(F->up, (*(P1761)rt_nil_check(F->q_1838)).t_, F->parent_516)) {
(*(P1761)rt_nil_check(F->q_1838)).t_ = F->t_517;
}
if ((F->tail_1839 == NULL)) {
(*(P116)rt_nil_check(F->z_1836)).params_ = F->q_1838;
} else {
(*(P1761)rt_nil_check(F->tail_1839)).next_ = F->q_1838;
}
F->tail_1839 = F->q_1838;
F->p_1837 = (*(P1761)rt_nil_check(F->p_1837)).next_;
}
L_end_1844: ;
if (f_same_429(F->up, (*(P116)rt_nil_check(F->z_1836)).result_, F->parent_516)) {
(*(P116)rt_nil_check(F->z_1836)).result_ = F->t_517;
}
(*(P116)rt_nil_check(F->z_1836)).chain_ = F->news_1841;
F->news_1841 = F->z_1836;
}
}
F->s_1835 = (*(P116)rt_nil_check(F->s_1835)).stack_;
}
L_end_1842: ;
while ((F->news_1841 != NULL)) {
F->z_1836 = F->news_1841;
F->news_1841 = (*(P116)rt_nil_check(F->news_1841)).chain_;
(*(P116)rt_nil_check(F->z_1836)).chain_ = NULL;
f_define_450(F->up, F->z_1836, F->line_518);
}
L_end_1847: ;
ret_:

  return;
}

static void f_derive_literals_522(struct f_greenc_1fr *up_, P121 t_520, rt_int line_521) {
  struct f_derive_literals_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_520 = t_520;
F->line_521 = line_521;
F->l_1848 = NULL;
F->l_1848 = (*(P121)rt_nil_check(F->t_520)).lits_;
F->n_1849 = INT64_MIN;
F->n_1849 = ((rt_int)0LL);
F->y_1850 = NULL;
while ((F->l_1848 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->l_1848)).kind_) == ((rt_int)5LL))) {
F->y_1850 = f_new_sym_455(F->up, ((rt_int)7LL), (*(P173)rt_nil_check(F->l_1848)).name_);
(*(P116)rt_nil_check(F->y_1850)).t_ = F->t_520;
(*(P116)rt_nil_check(F->y_1850)).result_ = F->t_520;
(*(P116)rt_nil_check(F->y_1850)).mvalue_ = G_NV(F->n_1849);
(*(P116)rt_nil_check(F->y_1850)).hasmv_ = 1;
f_define_450(F->up, F->y_1850, F->line_521);
}
F->n_1849 = rt_add(G_NV(F->n_1849), ((rt_int)1LL));
F->l_1848 = (*(P173)rt_nil_check(F->l_1848)).next_;
}
L_end_1851: ;
ret_:

  return;
}

static void f_type_definition_527(struct f_greenc_1fr *up_, P173 d_523, P139 name_524, P121 *t_525, P177 *c_526) {
  struct f_type_definition_527fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_523 = d_523;
F->name_524 = name_524;
F->t_525 = t_525;
F->c_526 = c_526;
F->dummy_1852 = NULL;
F->it_1853 = NULL;
F->ic_1854 = NULL;
F->l_1855 = NULL;
F->comp_1856 = NULL;
F->f_1857 = NULL;
F->tail_1858 = NULL;
F->ok_1859 = INT_MIN;
F->n_1860 = INT64_MIN;
F->y_1861 = NULL;
(*F->c_526) = f_new_cons_458(F->up);
{ rt_int sel1862 = G_NV((*(P173)rt_nil_check(F->d_523)).kind_);
if (0 || sel1862 == ((rt_int)70LL)) {
f_fresh_typ_515(F->up, ((rt_int)4LL), F->name_524, &(*F->t_525));
(*(P121)rt_nil_check((*F->t_525))).lits_ = (*(P173)rt_nil_check(F->d_523)).a_;
F->l_1855 = (*(P173)rt_nil_check(F->d_523)).a_;
F->n_1860 = ((rt_int)0LL);
while ((F->l_1855 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->l_1855)).kind_) == ((rt_int)5LL))) {
F->y_1861 = f_new_sym_455(F->up, ((rt_int)7LL), (*(P173)rt_nil_check(F->l_1855)).name_);
(*(P116)rt_nil_check(F->y_1861)).t_ = (*F->t_525);
(*(P116)rt_nil_check(F->y_1861)).result_ = (*F->t_525);
(*(P116)rt_nil_check(F->y_1861)).mvalue_ = G_NV(F->n_1860);
(*(P116)rt_nil_check(F->y_1861)).hasmv_ = 1;
f_define_450(F->up, F->y_1861, G_NV((*(P173)rt_nil_check(F->l_1855)).line_));
}
F->n_1860 = rt_add(G_NV(F->n_1860), ((rt_int)1LL));
F->l_1855 = (*(P173)rt_nil_check(F->l_1855)).next_;
}
L_end_1863: ;
(*(P177)rt_nil_check((*F->c_526))).lo_ = f_mk_221(F->up, rt_g_lit("0", 1));
(*(P177)rt_nil_check((*F->c_526))).hi_ = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1860), ((rt_int)1LL)))));
(*(P177)rt_nil_check((*F->c_526))).mlo_ = ((rt_int)0LL);
(*(P177)rt_nil_check((*F->c_526))).mhi_ = rt_sub(G_NV(F->n_1860), ((rt_int)1LL));
(*(P177)rt_nil_check((*F->c_526))).hasm_ = 1;
} else if (0 || sel1862 == ((rt_int)71LL)) {
f_fresh_typ_515(F->up, ((rt_int)1LL), F->name_524, &(*F->t_525));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->d_523)).a_, F->up->ty_int_155, &F->dummy_1852, &(*(P177)rt_nil_check((*F->c_526))).lo_);
if ((G_NV((*(P121)rt_nil_check(F->dummy_1852)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_523)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->d_523)).b_, F->up->ty_int_155, &F->dummy_1852, &(*(P177)rt_nil_check((*F->c_526))).hi_);
if ((G_NV((*(P121)rt_nil_check(F->dummy_1852)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_523)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_489(F->up, (*(P173)rt_nil_check(F->d_523)).a_, &(*(P177)rt_nil_check((*F->c_526))).mlo_, &F->ok_1859);
 (void)rt_range(F->ok_1859, 0, 1);
(*(P177)rt_nil_check((*F->c_526))).hasm_ = G_NV(F->ok_1859);
f_manifest_489(F->up, (*(P173)rt_nil_check(F->d_523)).b_, &(*(P177)rt_nil_check((*F->c_526))).mhi_, &F->ok_1859);
 (void)rt_range(F->ok_1859, 0, 1);
(*(P177)rt_nil_check((*F->c_526))).hasm_ = (G_NV((*(P177)rt_nil_check((*F->c_526))).hasm_) && G_NV(F->ok_1859));
(*(P121)rt_nil_check((*F->t_525))).parent_ = F->up->ty_int_155;
(*(P121)rt_nil_check((*F->t_525))).tcons_ = (*F->c_526);
if ((G_NV((*(P177)rt_nil_check((*F->c_526))).hasm_) && ((G_NV((*(P177)rt_nil_check((*F->c_526))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P177)rt_nil_check((*F->c_526))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P121)rt_nil_check((*F->t_525))).parent_ = F->up->ty_short_166;
}
f_inherit_519(F->up, (*(P121)rt_nil_check((*F->t_525))).parent_, (*F->t_525), G_NV((*(P173)rt_nil_check(F->d_523)).line_));
} else if (0 || sel1862 == ((rt_int)72LL)) {
f_real_type_589(F->up, F->d_523, F->name_524, &(*F->t_525), &(*F->c_526));
} else if (0 || sel1862 == ((rt_int)73LL)) {
f_array_type_534(F->up, (*(P173)rt_nil_check(F->d_523)).a_, (*(P173)rt_nil_check(F->d_523)).b_, F->name_524, G_NV((*(P173)rt_nil_check(F->d_523)).line_), &(*F->t_525), &(*F->c_526));
} else if (0 || sel1862 == ((rt_int)74LL)) {
f_fresh_typ_515(F->up, ((rt_int)7LL), F->name_524, &(*F->t_525));
F->up->disc_syms_181 = NULL;
f_record_components_570(F->up, (*(P173)rt_nil_check(F->d_523)).a_, (*F->t_525), NULL, G_NV((*(P173)rt_nil_check(F->d_523)).line_));
while ((F->up->disc_syms_181 != NULL)) {
f_remove_sym_565(F->up, F->up->disc_syms_181);
F->up->disc_syms_181 = (*(P116)rt_nil_check(F->up->disc_syms_181)).mnext_;
}
L_end_1864: ;
} else if (0 || sel1862 == ((rt_int)75LL)) {
f_fresh_typ_515(F->up, ((rt_int)8LL), F->name_524, &(*F->t_525));
(*(P121)rt_nil_check((*F->t_525))).decl_ = (*(P173)rt_nil_check(F->d_523)).a_;
if (((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_523)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_523)).a_)).name_))) != NULL)) && (G_NV((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_523)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->d_523)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_591(F->up, (*F->t_525));
}
} else if (0 || sel1862 == ((rt_int)76LL)) {
f_derived_type_584(F->up, F->d_523, F->name_524, &(*F->t_525), &(*F->c_526));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_523)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_534(struct f_greenc_1fr *up_, P173 idx_528, P173 comp_529, P139 name_530, rt_int line_531, P121 *t_532, P177 *c_533) {
  struct f_array_type_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_528 = idx_528;
F->comp_529 = comp_529;
F->name_530 = name_530;
F->line_531 = line_531;
F->t_532 = t_532;
F->c_533 = c_533;
F->l_1865 = NULL;
F->l_1865 = F->idx_528;
F->rowc_1866 = NULL;
F->ic_1867 = NULL;
F->it_1868 = NULL;
(*F->c_533) = f_new_cons_458(F->up);
f_fresh_typ_515(F->up, ((rt_int)6LL), F->name_530, &(*F->t_532));
(*(P121)rt_nil_check((*F->t_532))).dims_ = f_list_len_301(F->up, F->idx_528);
if (((*(P173)rt_nil_check(F->idx_528)).next_ == NULL)) {
f_resolve_493(F->up, F->comp_529, &(*(P121)rt_nil_check((*F->t_532))).elem_, &(*(P121)rt_nil_check((*F->t_532))).elemcons_);
} else {
if (((G_NV((*(P173)rt_nil_check(F->idx_528)).kind_) == ((rt_int)14LL)) != (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->idx_528)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_242(F->up, F->line_531, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_534(F->up, (*(P173)rt_nil_check(F->idx_528)).next_, F->comp_529, NULL, F->line_531, &(*(P121)rt_nil_check((*F->t_532))).elem_, &F->rowc_1866);
if (((*(P177)rt_nil_check(F->rowc_1866)).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_532))).elemcons_ = F->rowc_1866;
}
}
if ((G_NV((*(P173)rt_nil_check(F->l_1865)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_507(F->up, F->l_1865, NULL, &(*(P121)rt_nil_check((*F->t_532))).idx_, &(*(P177)rt_nil_check((*F->c_533))).lo_, &(*(P177)rt_nil_check((*F->c_533))).hi_);
f_static_range_538(F->up, (*(P173)rt_nil_check(F->l_1865)).a_, (*(P173)rt_nil_check(F->l_1865)).b_, (*F->c_533));
} else if (((G_NV((*(P173)rt_nil_check(F->l_1865)).kind_) == ((rt_int)80LL)) && (G_NV((*(P173)rt_nil_check(F->l_1865)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_507(F->up, F->l_1865, NULL, &(*(P121)rt_nil_check((*F->t_532))).idx_, &(*(P177)rt_nil_check((*F->c_533))).lo_, &(*(P177)rt_nil_check((*F->c_533))).hi_);
} else {
f_resolve_493(F->up, F->l_1865, &(*(P121)rt_nil_check((*F->t_532))).idx_, &F->ic_1867);
if (((((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_532))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_532))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_532))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P177)rt_nil_check(F->ic_1867)).hasm_) && ((rt_sub(G_NV((*(P177)rt_nil_check(F->ic_1867)).mhi_), G_NV((*(P177)rt_nil_check(F->ic_1867)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P177)rt_nil_check(F->ic_1867)).mhi_), G_NV((*(P177)rt_nil_check(F->ic_1867)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P177)rt_nil_check((*F->c_533))).lo_ = (*(P177)rt_nil_check(F->ic_1867)).lo_;
(*(P177)rt_nil_check((*F->c_533))).hi_ = (*(P177)rt_nil_check(F->ic_1867)).hi_;
(*(P177)rt_nil_check((*F->c_533))).mlo_ = G_NV((*(P177)rt_nil_check(F->ic_1867)).mlo_);
(*(P177)rt_nil_check((*F->c_533))).mhi_ = G_NV((*(P177)rt_nil_check(F->ic_1867)).mhi_);
(*(P177)rt_nil_check((*F->c_533))).hasm_ = G_NV((*(P177)rt_nil_check(F->ic_1867)).hasm_);
} else if (((*(P177)rt_nil_check(F->ic_1867)).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_532))).tcons_ = f_new_cons_458(F->up);
(*(P177)rt_nil_check((*(P121)rt_nil_check((*F->t_532))).tcons_)).lo_ = (*(P177)rt_nil_check(F->ic_1867)).lo_;
}
}
if ((!f_is_discrete_438(F->up, (*(P121)rt_nil_check((*F->t_532))).idx_))) {
f_fail_242(F->up, F->line_531, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P121)rt_nil_check((*F->t_532))).dims_) > ((rt_int)1LL))) {
(*(P177)rt_nil_check((*F->c_533))).inner_ = F->rowc_1866;
if ((((*(P177)rt_nil_check((*F->c_533))).lo_ == NULL) != ((*(P177)rt_nil_check(F->rowc_1866)).lo_ == NULL))) {
(*(P177)rt_nil_check((*F->c_533))).lo_ = NULL;
(*(P177)rt_nil_check((*F->c_533))).hi_ = NULL;
(*(P177)rt_nil_check((*F->c_533))).inner_ = NULL;
(*(P121)rt_nil_check((*F->t_532))).elemcons_ = NULL;
}
}
if (((*(P177)rt_nil_check((*F->c_533))).lo_ != NULL)) {
(*(P121)rt_nil_check((*F->t_532))).tcons_ = (*F->c_533);
}
ret_:

  return;
}

static void f_static_range_538(struct f_greenc_1fr *up_, P173 l_535, P173 h_536, P177 c_537) {
  struct f_static_range_538fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_535 = l_535;
F->h_536 = h_536;
F->c_537 = c_537;
F->ok_1869 = INT_MIN;
F->ok2_1870 = INT_MIN;
f_manifest_489(F->up, F->l_535, &(*(P177)rt_nil_check(F->c_537)).mlo_, &F->ok_1869);
 (void)rt_range(F->ok_1869, 0, 1);
f_manifest_489(F->up, F->h_536, &(*(P177)rt_nil_check(F->c_537)).mhi_, &F->ok2_1870);
 (void)rt_range(F->ok2_1870, 0, 1);
if ((f_is_char_lit_760(F->up, F->l_535) && f_is_char_lit_760(F->up, F->h_536))) {
(*(P177)rt_nil_check(F->c_537)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1871 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_535)).name_)); ix1871.p[rt_index(((rt_int)1LL), ix1871.lo, ix1871.hi) - ix1871.lo]; }))) + 1), ((rt_int)1LL));
(*(P177)rt_nil_check(F->c_537)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1872 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->h_536)).name_)); ix1872.p[rt_index(((rt_int)1LL), ix1872.lo, ix1872.hi) - ix1872.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1869 = 1;
F->ok2_1870 = 1;
}
(*(P177)rt_nil_check(F->c_537)).hasm_ = (G_NV(F->ok_1869) && G_NV(F->ok2_1870));
ret_:

  return;
}

static void f_component_place_544(struct f_greenc_1fr *up_, P121 rt_539, P1779 f_540, rt_gstr a_541, rt_gstr ct_542, P139 *r_543) {
  struct f_component_place_544fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_539 = rt_539;
F->f_540 = f_540;
F->a_541 = cp_rt_gstr(a_541);
F->ct_542 = cp_rt_gstr(ct_542);
F->r_543 = r_543;
F->bits_1873 = NULL;
if (eq_rt_gstr(F->a_541, rt_g_lit("POSITION", 8))) {
(*F->r_543) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_542), rt_g_lit(", ", 2)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_540)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_541, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_543) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_543) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_542), rt_g_lit(" *)0)->", 7)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_540)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_546(struct f_greenc_1fr *up_, P121 t_545) {
  struct f_no_value_546fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_545 = t_545;
if (((G_NV((*(P121)rt_nil_check(F->t_545)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_545)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P121)rt_nil_check(F->t_545)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_549(struct f_greenc_1fr *up_, P121 t_547, P139 *r_548) {
  struct f_elem_ctype_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_547 = t_547;
F->r_548 = r_548;
if ((G_NV((*(P121)rt_nil_check(F->t_547)).kind_) == ((rt_int)11LL))) {
(*F->r_548) = f_mk_221(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_477(F->up, F->t_547, &(*F->r_548));
}
ret_:

  return;
}

static void f_first_index_552(struct f_greenc_1fr *up_, P121 t_550, P139 *r_551) {
  struct f_first_index_552fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_550 = t_550;
F->r_551 = r_551;
if ((((*(P121)rt_nil_check(F->t_550)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_550)).tcons_)).lo_ != NULL))) {
(*F->r_551) = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_550)).tcons_)).lo_;
} else if ((((*(P121)rt_nil_check(F->t_550)).idx_ != NULL) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_550)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_551) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_551) = f_mk_221(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_554(struct f_greenc_1fr *up_, P121 t_553) {
  struct f_is_string_554fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_553 = t_553;
if ((!(F->t_553 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P121)rt_nil_check(F->t_553)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_434(F->up, F->t_553, F->up->ty_string_159);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_557(struct f_greenc_1fr *up_, rt_gstr s_555, rt_gstr r_556) {
  struct f_subst_557fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_555 = cp_rt_gstr(s_555);
F->r_556 = cp_rt_gstr(r_556);
{ rt_int lo1878 = ({ rt_gstr at1875 = F->s_555; at1875.lo; }), hi1879 = rt_sub(({ rt_gstr at1876 = F->s_555; at1876.hi; }), ((rt_int)1LL));
for (rt_int it1880 = lo1878; it1880 <= hi1879; it1880++) {
F->i_1877 = it1880;
if (((G_NV(({ rt_gstr ix1881 = F->s_555; ix1881.p[rt_index(F->i_1877, ix1881.lo, ix1881.hi) - ix1881.lo]; })) == 64) && (G_NV(({ rt_gstr ix1882 = F->s_555; ix1882.p[rt_index(rt_add(F->i_1877, ((rt_int)1LL)), ix1882.lo, ix1882.hi) - ix1882.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1884 = F->s_555; rt_int l_ = ({ rt_gstr at1883 = F->s_555; at1883.lo; }), h_ = rt_sub(F->i_1877, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1884.lo, sl1884.hi); rt_index(h_, sl1884.lo, sl1884.hi); } sl1884.p += l_ - sl1884.lo; sl1884.lo = l_; sl1884.hi = h_; sl1884; }), F->r_556), f_subst_557(F->up, ({ rt_gstr sl1888 = F->s_555; rt_int l_ = rt_add(F->i_1877, ((rt_int)2LL)), h_ = ({ rt_gstr at1887 = F->s_555; at1887.hi; }); if (l_ <= h_) { rt_index(l_, sl1888.lo, sl1888.hi); rt_index(h_, sl1888.lo, sl1888.hi); } sl1888.p += l_ - sl1888.lo; sl1888.lo = l_; sl1888.hi = h_; sl1888; }), F->r_556));
goto ret_;
}
}
}
L_end_1874: ;
F->result_ = F->s_555;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_559(struct f_greenc_1fr *up_, P139 s_558) {
  struct f_mentions_record_559fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_558 = s_558;
if ((F->s_558 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1892 = ((rt_int)1LL), hi1893 = rt_sub(({ rt_gstr at1890 = (*(P139)rt_nil_check(F->s_558)); at1890.hi >= at1890.lo ? at1890.hi - at1890.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1894 = lo1892; it1894 <= hi1893; it1894++) {
F->i_1891 = it1894;
if (((G_NV(({ rt_gstr ix1895 = (*(P139)rt_nil_check(F->s_558)); ix1895.p[rt_index(F->i_1891, ix1895.lo, ix1895.hi) - ix1895.lo]; })) == 64) && (G_NV(({ rt_gstr ix1896 = (*(P139)rt_nil_check(F->s_558)); ix1896.p[rt_index(rt_add(F->i_1891, ((rt_int)1LL)), ix1896.lo, ix1896.hi) - ix1896.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1889: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_563(struct f_greenc_1fr *up_, P177 c_560, rt_gstr r_561, P177 *res_562) {
  struct f_subst_cons_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_560 = c_560;
F->r_561 = cp_rt_gstr(r_561);
F->res_562 = res_562;
if (((F->c_560 == NULL) || (!(f_mentions_record_559(F->up, (*(P177)rt_nil_check(F->c_560)).lo_) || f_mentions_record_559(F->up, (*(P177)rt_nil_check(F->c_560)).hi_))))) {
(*F->res_562) = F->c_560;
goto ret_;
}
(*F->res_562) = f_new_cons_458(F->up);
as_R178(&(*(P177)rt_nil_check((*F->res_562))), (*(P177)rt_nil_check(F->c_560)));
(*(P177)rt_nil_check((*F->res_562))).lo_ = f_mk_221(F->up, f_subst_557(F->up, (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_560)).lo_)), F->r_561));
(*(P177)rt_nil_check((*F->res_562))).hi_ = f_mk_221(F->up, f_subst_557(F->up, (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_560)).hi_)), F->r_561));
ret_:

  return;
}

static void f_remove_sym_565(struct f_greenc_1fr *up_, P116 y_564) {
  struct f_remove_sym_565fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_564 = y_564;
F->h_1897 = INT64_MIN;
F->h_1897 = f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_564)).name_)));
F->p_1898 = NULL;
if ((({ A115 ix1899 = F->up->table_118; ix1899.p[rt_index(G_NV(F->h_1897), ix1899.lo, ix1899.hi) - ix1899.lo]; }) == F->y_564)) {
(*({ A115 *ix1900 = &(F->up->table_118); &ix1900->p[rt_index(G_NV(F->h_1897), ix1900->lo, ix1900->hi) - ix1900->lo]; })) = (*(P116)rt_nil_check(F->y_564)).chain_;
} else {
F->p_1898 = ({ A115 ix1901 = F->up->table_118; ix1901.p[rt_index(G_NV(F->h_1897), ix1901.lo, ix1901.hi) - ix1901.lo]; });
while (((F->p_1898 != NULL) && ((*(P116)rt_nil_check(F->p_1898)).chain_ != F->y_564))) {
F->p_1898 = (*(P116)rt_nil_check(F->p_1898)).chain_;
}
L_end_1902: ;
if ((F->p_1898 != NULL)) {
(*(P116)rt_nil_check(F->p_1898)).chain_ = (*(P116)rt_nil_check(F->y_564)).chain_;
}
}
if ((F->up->scope_stack_120 == F->y_564)) {
F->up->scope_stack_120 = (*(P116)rt_nil_check(F->y_564)).stack_;
} else {
F->p_1898 = F->up->scope_stack_120;
while (((F->p_1898 != NULL) && ((*(P116)rt_nil_check(F->p_1898)).stack_ != F->y_564))) {
F->p_1898 = (*(P116)rt_nil_check(F->p_1898)).stack_;
}
L_end_1903: ;
if ((F->p_1898 != NULL)) {
(*(P116)rt_nil_check(F->p_1898)).stack_ = (*(P116)rt_nil_check(F->y_564)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_570(struct f_greenc_1fr *up_, P173 list_566, P121 t_567, P1904 g_568, rt_int line_569) {
  struct f_record_components_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_566 = list_566;
F->t_567 = t_567;
F->g_568 = g_568;
F->line_569 = line_569;
F->comp_1906 = NULL;
F->comp_1906 = F->list_566;
F->f_1907 = NULL;
F->tail_1908 = NULL;
F->df_1909 = NULL;
F->prev_1910 = NULL;
F->pt_1911 = NULL;
F->vt_1912 = NULL;
F->pc_1913 = NULL;
F->y_1914 = NULL;
F->acc_1915 = NULL;
F->v_1916 = NULL;
F->x_1917 = NULL;
F->arm_1918 = NULL;
F->g2_1919 = NULL;
F->tail_1908 = (*(P121)rt_nil_check(F->t_567)).fields_;
while (((F->tail_1908 != NULL) && ((*(P1779)rt_nil_check(F->tail_1908)).next_ != NULL))) {
F->tail_1908 = (*(P1779)rt_nil_check(F->tail_1908)).next_;
}
L_end_1920: ;
while ((F->comp_1906 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->comp_1906)).kind_) == ((rt_int)23LL))) {
F->df_1909 = (*(P121)rt_nil_check(F->t_567)).fields_;
while (((F->df_1909 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->df_1909)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1906)).a_)).name_)))))) {
F->df_1909 = (*(P1779)rt_nil_check(F->df_1909)).next_;
}
L_end_1922: ;
if (((F->df_1909 == NULL) || (!G_NV((*(P1779)rt_nil_check(F->df_1909)).is_discr_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1906)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_438(F->up, (*(P1779)rt_nil_check(F->df_1909)).t_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1918 = (*(P173)rt_nil_check(F->comp_1906)).b_;
while ((F->arm_1918 != NULL)) {
F->g2_1919 = ({ R1905 *cell1924 = rt_alloc(sizeof(R1905)); *cell1924 = cp_R1905(({ R1905 ag1925; ag1925.disc_ = (*(P1779)rt_nil_check(F->df_1909)).name_; ag1925.arm_ = F->arm_1918; ag1925.variant_ = F->comp_1906; ag1925.next_ = F->g_568; ag1925; })); (P1904)cell1924; });
f_record_components_570(F->up, (*(P173)rt_nil_check(F->arm_1918)).b_, F->t_567, F->g2_1919, F->line_569);
F->arm_1918 = (*(P173)rt_nil_check(F->arm_1918)).next_;
}
L_end_1923: ;
F->tail_1908 = (*(P121)rt_nil_check(F->t_567)).fields_;
while (((F->tail_1908 != NULL) && ((*(P1779)rt_nil_check(F->tail_1908)).next_ != NULL))) {
F->tail_1908 = (*(P1779)rt_nil_check(F->tail_1908)).next_;
}
L_end_1926: ;
} else {
if ((f_field_index_950(F->up, F->t_567, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->comp_1906)).name_))) != ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->comp_1906)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1907 = ({ R1780 *cell1927 = rt_alloc(sizeof(R1780)); *cell1927 = cp_R1780(({ R1780 ag1928; ag1928.name_ = (*(P173)rt_nil_check(F->comp_1906)).name_; ag1928.t_ = NULL; ag1928.c_ = NULL; ag1928.next_ = NULL; ag1928.dflt_ = (*(P173)rt_nil_check(F->comp_1906)).b_; ag1928.is_const_ = (G_NV((*(P173)rt_nil_check(F->comp_1906)).flag_) == ((rt_int)1LL)); ag1928.is_discr_ = 0; ag1928.dsym_ = NULL; ag1928.guard_ = F->g_568; ag1928.cond_ = NULL; ag1928.dyn_ = 0; ag1928; })); (P1779)cell1927; });
if ((((*(P173)rt_nil_check(F->comp_1906)).a_ == F->prev_1910) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->comp_1906)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1779)rt_nil_check(F->f_1907)).t_ = F->pt_1911;
(*(P1779)rt_nil_check(F->f_1907)).c_ = F->pc_1913;
} else {
f_resolve_493(F->up, (*(P173)rt_nil_check(F->comp_1906)).a_, &(*(P1779)rt_nil_check(F->f_1907)).t_, &(*(P1779)rt_nil_check(F->f_1907)).c_);
}
F->prev_1910 = (*(P173)rt_nil_check(F->comp_1906)).a_;
F->pt_1911 = (*(P1779)rt_nil_check(F->f_1907)).t_;
F->pc_1913 = (*(P1779)rt_nil_check(F->f_1907)).c_;
if ((((*(P1779)rt_nil_check(F->f_1907)).c_ != NULL) && (f_mentions_record_559(F->up, (*(P177)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).c_)).lo_) || f_mentions_record_559(F->up, (*(P177)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).c_)).hi_)))) {
(*(P1779)rt_nil_check(F->f_1907)).dyn_ = 1;
if ((G_NV((*(P121)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P121)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).t_)).tcons_ == (*(P1779)rt_nil_check(F->f_1907)).c_)) {
(*(P121)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).t_)).tcons_ = NULL;
}
}
if ((F->g_568 != NULL)) {
f_guard_cond_574(F->up, F->g_568, (*(P1779)rt_nil_check(F->f_1907)).t_, &F->x_1917);
(*(P1779)rt_nil_check(F->f_1907)).cond_ = F->x_1917;
}
if (((*(P173)rt_nil_check(F->comp_1906)).b_ != NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->comp_1906)).b_, (*(P1779)rt_nil_check(F->f_1907)).t_, &F->vt_1912, &F->v_1916);
f_check_type_472(F->up, F->vt_1912, (*(P1779)rt_nil_check(F->f_1907)).t_, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_));
F->y_1914 = f_new_sym_455(F->up, ((rt_int)2LL), f_mk_221(F->up, rt_g_lit("dflt", 4)));
f_storage_622(F->up, rt_g_lit("dflt", 4), (*(P1779)rt_nil_check(F->f_1907)).t_, &F->acc_1915);
(*(P116)rt_nil_check(F->y_1914)).t_ = (*(P1779)rt_nil_check(F->f_1907)).t_;
(*(P116)rt_nil_check(F->y_1914)).c_ = (*(P1779)rt_nil_check(F->f_1907)).c_;
f_bind_625(F->up, F->y_1914, F->acc_1915);
if ((f_composite_597(F->up, (*(P1779)rt_nil_check(F->f_1907)).t_) && (!f_bounded_460(F->up, (*(P1779)rt_nil_check(F->f_1907)).c_)))) {
f_copy_code_607(F->up, (*(P1779)rt_nil_check(F->f_1907)).t_, (*(P139)rt_nil_check(F->v_1916)), &F->x_1917);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_1915)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1917))), one_rt_gstr(59)));
} else {
f_init_storage_595(F->up, (*(P139)rt_nil_check(F->acc_1915)), (*(P1779)rt_nil_check(F->f_1907)).t_, (*(P1779)rt_nil_check(F->f_1907)).c_);
f_assign_code_603(F->up, (*(P139)rt_nil_check(F->acc_1915)), (*(P1779)rt_nil_check(F->f_1907)).t_, (*(P139)rt_nil_check(F->v_1916)), (*(P1779)rt_nil_check(F->f_1907)).c_, &F->x_1917);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1917)));
}
(*(P1779)rt_nil_check(F->f_1907)).dsym_ = F->y_1914;
} else if (G_NV((*(P1779)rt_nil_check(F->f_1907)).is_const_)) {
(*(P1779)rt_nil_check(F->f_1907)).is_discr_ = 1;
F->y_1914 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P1779)rt_nil_check(F->f_1907)).name_);
(*(P116)rt_nil_check(F->y_1914)).t_ = (*(P1779)rt_nil_check(F->f_1907)).t_;
(*(P116)rt_nil_check(F->y_1914)).c_ = (*(P1779)rt_nil_check(F->f_1907)).c_;
(*(P116)rt_nil_check(F->y_1914)).ro_ = 1;
(*(P116)rt_nil_check(F->y_1914)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1907)).name_)))), one_rt_gstr(41)));
F->up->depth_119 = rt_add(G_NV(F->up->depth_119), ((rt_int)1LL));
f_define_450(F->up, F->y_1914, G_NV((*(P173)rt_nil_check(F->comp_1906)).line_));
F->up->depth_119 = rt_sub(G_NV(F->up->depth_119), ((rt_int)1LL));
(*(P116)rt_nil_check(F->y_1914)).mnext_ = F->up->disc_syms_181;
F->up->disc_syms_181 = F->y_1914;
}
if ((F->tail_1908 == NULL)) {
(*(P121)rt_nil_check(F->t_567)).fields_ = F->f_1907;
} else {
(*(P1779)rt_nil_check(F->tail_1908)).next_ = F->f_1907;
}
F->tail_1908 = F->f_1907;
}
F->comp_1906 = (*(P173)rt_nil_check(F->comp_1906)).next_;
}
L_end_1921: ;
ret_:

  return;
}

static void f_guard_cond_574(struct f_greenc_1fr *up_, P1904 g_571, P121 t_572, P139 *r_573) {
  struct f_guard_cond_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_571 = g_571;
F->t_572 = t_572;
F->r_573 = r_573;
F->a_1929 = NULL;
F->l_1930 = NULL;
F->df_1931 = NULL;
F->x_1932 = NULL;
F->d_1933 = NULL;
F->dt_1934 = NULL;
F->vt_1935 = NULL;
F->lo_1936 = NULL;
F->hi_1937 = NULL;
(*F->r_573) = f_mk_221(F->up, rt_g_lit("1", 1));
if ((F->g_571 == NULL)) {
goto ret_;
}
F->d_1933 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1904)rt_nil_check(F->g_571)).disc_)))), one_rt_gstr(41)));
F->df_1931 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P1904)rt_nil_check(F->g_571)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_1932 = f_mk_221(F->up, rt_g_lit("0", 1));
F->a_1929 = (*(P173)rt_nil_check((*(P1904)rt_nil_check(F->g_571)).variant_)).b_;
while ((F->a_1929 != NULL)) {
if ((F->a_1929 != (*(P1904)rt_nil_check(F->g_571)).arm_)) {
f_arm_test_579(F->up, F->a_1929, (*(P1904)rt_nil_check(F->g_571)).disc_, (*(P139)rt_nil_check(F->d_1933)), &F->x_1932);
}
F->a_1929 = (*(P173)rt_nil_check(F->a_1929)).next_;
}
L_end_1938: ;
F->x_1932 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P139)rt_nil_check(F->x_1932))), one_rt_gstr(41)));
} else {
F->x_1932 = f_mk_221(F->up, rt_g_lit("0", 1));
f_arm_test_579(F->up, (*(P1904)rt_nil_check(F->g_571)).arm_, (*(P1904)rt_nil_check(F->g_571)).disc_, (*(P139)rt_nil_check(F->d_1933)), &F->x_1932);
}
f_guard_cond_574(F->up, (*(P1904)rt_nil_check(F->g_571)).next_, F->t_572, &(*F->r_573));
(*F->r_573) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*F->r_573)))), rt_g_lit(" && (", 5)), (*(P139)rt_nil_check(F->x_1932))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_579(struct f_greenc_1fr *up_, P173 arm_575, P139 dname_576, rt_gstr d_577, P139 *x_578) {
  struct f_arm_test_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_575 = arm_575;
F->dname_576 = dname_576;
F->d_577 = cp_rt_gstr(d_577);
F->x_578 = x_578;
F->l_1939 = NULL;
F->l_1939 = (*(P173)rt_nil_check(F->arm_575)).a_;
F->y_1940 = NULL;
F->y_1940 = f_lookup_409(F->up, (*(P139)rt_nil_check(F->dname_576)));
F->dt_1941 = NULL;
F->vt_1942 = NULL;
F->lo_1943 = NULL;
F->hi_1944 = NULL;
F->dt_1941 = (*(P116)rt_nil_check(F->y_1940)).t_;
while ((F->l_1939 != NULL)) {
if (((*(P173)rt_nil_check(F->l_1939)).b_ == NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->l_1939)).a_, F->dt_1941, &F->vt_1942, &F->lo_1943);
f_check_type_472(F->up, F->vt_1942, F->dt_1941, G_NV((*(P173)rt_nil_check(F->l_1939)).line_));
(*F->x_578) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->x_578))), rt_g_lit(" || ", 4)), F->d_577), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->lo_1943))));
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->l_1939)).a_, F->dt_1941, &F->vt_1942, &F->lo_1943);
f_check_type_472(F->up, F->vt_1942, F->dt_1941, G_NV((*(P173)rt_nil_check(F->l_1939)).line_));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->l_1939)).b_, F->dt_1941, &F->vt_1942, &F->hi_1944);
f_check_type_472(F->up, F->vt_1942, F->dt_1941, G_NV((*(P173)rt_nil_check(F->l_1939)).line_));
(*F->x_578) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->x_578))), rt_g_lit(" || (", 5)), F->d_577), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_1943))), rt_g_lit(" && ", 4)), F->d_577), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hi_1944))), one_rt_gstr(41)));
}
F->l_1939 = (*(P173)rt_nil_check(F->l_1939)).next_;
}
L_end_1945: ;
ret_:

  return;
}

static void f_derived_type_584(struct f_greenc_1fr *up_, P173 d_580, P139 name_581, P121 *t_582, P177 *c_583) {
  struct f_derived_type_584fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_580 = d_580;
F->name_581 = name_581;
F->t_582 = t_582;
F->c_583 = c_583;
F->pt_1946 = NULL;
F->ct_1947 = NULL;
F->ph_1948 = NULL;
F->ph_1948 = F->up->completing_172;
F->up->completing_172 = NULL;
f_resolve_493(F->up, (*(P173)rt_nil_check(F->d_580)).a_, &F->pt_1946, &(*F->c_583));
if (((G_NV((*(P121)rt_nil_check(F->pt_1946)).kind_) == ((rt_int)9LL)) && G_NV((*(P121)rt_nil_check(F->pt_1946)).priv_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_580)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_597(F->up, F->pt_1946) || (G_NV((*(P121)rt_nil_check(F->pt_1946)).kind_) == ((rt_int)8LL)))) {
f_ctype_477(F->up, F->pt_1946, &F->ct_1947);
}
if ((F->ph_1948 == NULL)) {
(*F->t_582) = f_new_typ_457(F->up, G_NV((*(P121)rt_nil_check(F->pt_1946)).kind_));
} else {
(*F->t_582) = F->ph_1948;
}
as_R122(&(*(P121)rt_nil_check((*F->t_582))), (*(P121)rt_nil_check(F->pt_1946)));
(*(P121)rt_nil_check((*F->t_582))).name_ = F->name_581;
(*(P121)rt_nil_check((*F->t_582))).parent_ = F->pt_1946;
(*(P121)rt_nil_check((*F->t_582))).next_ = NULL;
if ((G_NV((*(P121)rt_nil_check((*F->t_582))).kind_) == ((rt_int)4LL))) {
f_derive_literals_522(F->up, (*F->t_582), G_NV((*(P173)rt_nil_check(F->d_580)).line_));
}
f_inherit_519(F->up, F->pt_1946, (*F->t_582), G_NV((*(P173)rt_nil_check(F->d_580)).line_));
ret_:

  return;
}

static void f_real_type_589(struct f_greenc_1fr *up_, P173 d_585, P139 name_586, P121 *t_587, P177 *c_588) {
  struct f_real_type_589fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_585 = d_585;
F->name_586 = name_586;
F->t_587 = t_587;
F->c_588 = c_588;
F->dt_1949 = NULL;
F->dv_1950 = NULL;
F->n_1951 = INT64_MIN;
F->ok_1952 = INT_MIN;
(*F->c_588) = f_new_cons_458(F->up);
if ((G_NV((*(P173)rt_nil_check(F->d_585)).flag_) == ((rt_int)1LL))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->d_585)).a_, &F->n_1951, &F->ok_1952);
 (void)rt_range(F->ok_1952, 0, 1);
if ((!G_NV(F->ok_1952))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_585)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_1951) < ((rt_int)1LL)) || (G_NV(F->n_1951) > ((rt_int)15LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_585)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_1951)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_515(F->up, ((rt_int)3LL), F->name_586, &(*F->t_587));
(*(P121)rt_nil_check((*F->t_587))).ndigits_ = G_NV(F->n_1951);
if ((G_NV(F->n_1951) <= ((rt_int)6LL))) {
(*(P121)rt_nil_check((*F->t_587))).parent_ = F->up->ty_sfloat_168;
} else {
(*(P121)rt_nil_check((*F->t_587))).parent_ = F->up->ty_float_157;
}
} else {
if (((*(P173)rt_nil_check(F->d_585)).b_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_585)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->d_585)).a_, F->up->ty_float_157, &F->dt_1949, &F->dv_1950);
if ((G_NV((*(P121)rt_nil_check(F->dt_1949)).kind_) != ((rt_int)3LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_585)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_515(F->up, ((rt_int)16LL), F->name_586, &(*F->t_587));
(*(P121)rt_nil_check((*F->t_587))).fdelta_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->dv_1950))), one_rt_gstr(41)));
(*(P121)rt_nil_check((*F->t_587))).fsmall_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P139)rt_nil_check(F->dv_1950))), one_rt_gstr(41)));
}
if (((*(P173)rt_nil_check(F->d_585)).b_ != NULL)) {
f_range_of_511(F->up, (*(P173)rt_nil_check(F->d_585)).b_, (*F->t_587), (*F->c_588));
}
if (((*(P121)rt_nil_check((*F->t_587))).parent_ != NULL)) {
f_inherit_519(F->up, (*(P121)rt_nil_check((*F->t_587))).parent_, (*F->t_587), G_NV((*(P173)rt_nil_check(F->d_585)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_591(struct f_greenc_1fr *up_, P121 t_590) {
  struct f_finish_ptr_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_590 = t_590;
F->c_1953 = NULL;
if ((((*(P121)rt_nil_check(F->t_590)).target_ == NULL) && ((*(P121)rt_nil_check(F->t_590)).decl_ != NULL))) {
f_resolve_493(F->up, (*(P121)rt_nil_check(F->t_590)).decl_, &(*(P121)rt_nil_check(F->t_590)).target_, &F->c_1953);
if ((((*(P121)rt_nil_check(F->t_590)).target_ != NULL) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_590)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check((*(P121)rt_nil_check(F->t_590)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_595(struct f_greenc_1fr *up_, rt_gstr lval_592, P121 t_593, P177 c_594) {
  struct f_init_storage_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_592 = cp_rt_gstr(lval_592);
F->t_593 = t_593;
F->c_594 = c_594;
F->ec_1954 = NULL;
F->fc_1955 = NULL;
F->d_1956 = NULL;
F->ct_1957 = NULL;
F->i_1958 = NULL;
F->v_1959 = NULL;
F->x_1960 = NULL;
F->vt_1961 = NULL;
F->f_1962 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_593)).kind_) == ((rt_int)8LL))) {
f_emit_248(F->up, cat_rt_gstr(F->lval_592, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_436(F->up, F->t_593) || f_is_discrete_438(F->up, F->t_593))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(" = ", 3)), f_no_value_546(F->up, F->t_593)), one_rt_gstr(59)));
} else if ((G_NV((*(P121)rt_nil_check(F->t_593)).kind_) == ((rt_int)6LL))) {
if (((F->c_594 == NULL) || ((*(P177)rt_nil_check(F->c_594)).lo_ == NULL))) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_593)).elem_, &F->ct_1957);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(".lo = ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_594)).lo_))), rt_g_lit("; ", 2)), F->lval_592), rt_g_lit(".hi = ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_594)).hi_))), one_rt_gstr(59)));
F->ec_1954 = (*(P121)rt_nil_check(F->t_593)).elemcons_;
if (((G_NV((*(P121)rt_nil_check(F->t_593)).dims_) > ((rt_int)1LL)) && f_bounded_460(F->up, (*(P177)rt_nil_check(F->c_594)).inner_))) {
F->ec_1954 = (*(P177)rt_nil_check(F->c_594)).inner_;
}
if (((G_NV((*(P121)rt_nil_check(F->t_593)).dims_) > ((rt_int)1LL)) && f_bounded_460(F->up, F->ec_1954))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->ec_1954)).lo_))), rt_g_lit("; ", 2)), F->lval_592), rt_g_lit(".hi2 = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->ec_1954)).hi_))), one_rt_gstr(59)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(".lo2 = 1; ", 10)), F->lval_592), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P139)rt_nil_check(F->ct_1957))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_592), rt_g_lit("));", 3)));
if ((f_is_numeric_436(F->up, (*(P121)rt_nil_check(F->t_593)).elem_) || f_is_discrete_438(F->up, (*(P121)rt_nil_check(F->t_593)).elem_))) {
f_new_name_224(F->up, rt_g_lit("i", 1), &F->i_1958);
if ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_593)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_592), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_592), rt_g_lit("));", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit(" = 0; ", 6)), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit(" < G_CNT(", 9)), F->lval_592), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit("++) ", 4)), F->lval_592), rt_g_lit(".p[", 3)), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit("] = ", 4)), f_no_value_546(F->up, (*(P121)rt_nil_check(F->t_593)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_593)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_593)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_224(F->up, rt_g_lit("i", 1), &F->i_1958);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit(" = 0; ", 6)), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit(" < G_CNT(", 9)), F->lval_592), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->i_1958))), rt_g_lit("++) {", 5)));
f_init_storage_595(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, rt_g_lit(".p[", 3)), (*(P139)rt_nil_check(F->i_1958))), one_rt_gstr(93)), (*(P121)rt_nil_check(F->t_593)).elem_, F->ec_1954);
f_emit_248(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P121)rt_nil_check(F->t_593)).kind_) == ((rt_int)7LL))) {
if ((F->c_594 != NULL)) {
F->d_1956 = (*(P177)rt_nil_check(F->c_594)).dv_;
while ((F->d_1956 != NULL)) {
F->f_1962 = (*(P121)rt_nil_check(F->t_593)).fields_;
while ((!eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)), (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_1956)).name_))))) {
F->f_1962 = (*(P1779)rt_nil_check(F->f_1962)).next_;
}
L_end_1964: ;
f_assign_code_603(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_592, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), (*(P1779)rt_nil_check(F->f_1962)).t_, (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_1956)).v_)), (*(P1779)rt_nil_check(F->f_1962)).c_, &F->x_1960);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1960)));
F->d_1956 = (*(P1783)rt_nil_check(F->d_1956)).next_;
}
L_end_1963: ;
}
F->f_1962 = (*(P121)rt_nil_check(F->t_593)).fields_;
while ((F->f_1962 != NULL)) {
f_subst_cons_563(F->up, (*(P1779)rt_nil_check(F->f_1962)).c_, F->lval_592, &F->fc_1955);
if ((G_NV((*(P1779)rt_nil_check(F->f_1962)).dyn_) && (!f_discriminated_466(F->up, F->c_594)))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_592, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_592), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_592), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_592), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_592), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1779)rt_nil_check(F->f_1962)).is_discr_))) {
f_init_storage_595(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_592, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), (*(P1779)rt_nil_check(F->f_1962)).t_, F->fc_1955);
}
if (((*(P1779)rt_nil_check(F->f_1962)).dsym_ != NULL)) {
f_access_of_716(F->up, (*(P1779)rt_nil_check(F->f_1962)).dsym_, &F->v_1959);
f_assign_code_603(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_592, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1962)).name_)))), (*(P1779)rt_nil_check(F->f_1962)).t_, (*(P139)rt_nil_check(F->v_1959)), F->fc_1955, &F->x_1960);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_1960)));
}
F->f_1962 = (*(P1779)rt_nil_check(F->f_1962)).next_;
}
L_end_1965: ;
}
ret_:

  return;
}

static int f_composite_597(struct f_greenc_1fr *up_, P121 t_596) {
  struct f_composite_597fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_596 = t_596;
F->result_ = ((G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)6LL)) || (G_NV((*(P121)rt_nil_check(F->t_596)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_603(struct f_greenc_1fr *up_, rt_gstr lval_598, P121 t_599, rt_gstr v_600, P177 c_601, P139 *r_602) {
  struct f_assign_code_603fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_598 = cp_rt_gstr(lval_598);
F->t_599 = t_599;
F->v_600 = cp_rt_gstr(v_600);
F->c_601 = c_601;
F->r_602 = r_602;
F->ct_1966 = NULL;
F->x_1967 = NULL;
F->d_1968 = NULL;
if (((G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)7LL)) && f_discriminated_466(F->up, F->c_601))) {
f_ctype_477(F->up, F->t_599, &F->ct_1966);
F->x_1967 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->ct_1966))), rt_g_lit(" dv_ = ", 7)), F->v_600), one_rt_gstr(59)));
F->d_1968 = (*(P177)rt_nil_check(F->c_601)).dv_;
while ((F->d_1968 != NULL)) {
F->x_1967 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1967)), rt_g_lit(" if (dv_.", 9)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_1968)).name_)))), rt_g_lit(" != (", 5)), (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_1968)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_1968 = (*(P1783)rt_nil_check(F->d_1968)).next_;
}
L_end_1969: ;
(*F->r_602) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1967)), rt_g_lit(" as_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_599)).cname_))), rt_g_lit("(&", 2)), F->lval_598), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_597(F->up, F->t_599)) {
f_ctype_477(F->up, F->t_599, &F->ct_1966);
(*F->r_602) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_599)).cname_))), rt_g_lit("(&", 2)), F->lval_598), rt_g_lit(", ", 2)), F->v_600), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)4LL))) || (G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)11LL))) && f_bounded_460(F->up, F->c_601))) {
(*F->r_602) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_598, rt_g_lit(" = rt_range(", 12)), F->v_600), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_601)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_601)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_599)).kind_) == ((rt_int)16LL))) && f_bounded_460(F->up, F->c_601))) {
(*F->r_602) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_598, rt_g_lit(" = rt_frange(", 13)), F->v_600), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_601)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_601)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_602) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_598, rt_g_lit(" = ", 3)), F->v_600), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_607(struct f_greenc_1fr *up_, P121 t_604, rt_gstr v_605, P139 *r_606) {
  struct f_copy_code_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_604 = t_604;
F->v_605 = cp_rt_gstr(v_605);
F->r_606 = r_606;
F->ct_1970 = NULL;
if (f_composite_597(F->up, F->t_604)) {
f_ctype_477(F->up, F->t_604, &F->ct_1970);
(*F->r_606) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_604)).cname_))), one_rt_gstr(40)), F->v_605), one_rt_gstr(41)));
} else {
(*F->r_606) = f_mk_221(F->up, F->v_605);
}
ret_:

  return;
}

static void f_eq_code_612(struct f_greenc_1fr *up_, P121 t_608, rt_gstr a_609, rt_gstr b_610, P139 *r_611) {
  struct f_eq_code_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_608 = t_608;
F->a_609 = cp_rt_gstr(a_609);
F->b_610 = cp_rt_gstr(b_610);
F->r_611 = r_611;
F->ct_1971 = NULL;
if (f_composite_597(F->up, F->t_608)) {
f_ctype_477(F->up, F->t_608, &F->ct_1971);
(*F->r_611) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_608)).cname_))), one_rt_gstr(40)), F->a_609), rt_g_lit(", ", 2)), F->b_610), one_rt_gstr(41)));
} else {
(*F->r_611) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_609), rt_g_lit(" == ", 4)), F->b_610), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_615(struct f_greenc_1fr *up_, P150 l_613, rt_gstr s_614) {
  struct f_seen_name_615fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_613 = l_613;
F->s_614 = cp_rt_gstr(s_614);
F->p_1972 = NULL;
F->p_1972 = F->l_613;
while ((F->p_1972 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P150)rt_nil_check(F->p_1972)).s_)), F->s_614)) {
F->result_ = 1;
goto ret_;
}
F->p_1972 = (*(P150)rt_nil_check(F->p_1972)).next_;
}
L_end_1973: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_616(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_616fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1974 = NULL;
F->t_1974 = F->up->all_types_123;
F->et_1975 = NULL;
F->done_1976 = NULL;
F->l_1977 = NULL;
while ((F->t_1974 != NULL)) {
if ((f_composite_597(F->up, F->t_1974) && (!f_seen_name_615(F->up, F->done_1976, (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_)))))) {
F->l_1977 = ({ R151 *cell1979 = rt_alloc(sizeof(R151)); *cell1979 = cp_R151(({ R151 ag1980; ag1980.s_ = (*(P121)rt_nil_check(F->t_1974)).cname_; ag1980.next_ = F->done_1976; ag1980; })); (P150)cell1979; });
F->done_1976 = F->l_1977;
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P121)rt_nil_check(F->t_1974)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->t_1974)).dims_) == ((rt_int)1LL)))) {
f_ctype_477(F->up, (*(P121)rt_nil_check(F->t_1974)).elem_, &F->et_1975);
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" cat_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" one_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->et_1975))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" and_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" or_", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" xor_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_246(F->up, F->up->out_helpers_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" not_", 5)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_1974)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_618(F->up, F->t_1974);
}
F->t_1974 = (*(P121)rt_nil_check(F->t_1974)).next_;
}
L_end_1978: ;
ret_:

  return;
}

static void f_helper_bodies_618(struct f_greenc_1fr *up_, P121 t_617) {
  struct f_helper_bodies_618fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_617 = t_617;
F->c_1981 = NULL;
F->c_1981 = (*(P121)rt_nil_check(F->t_617)).cname_;
F->b_1982 = NULL;
F->b_1982 = F->up->out_funcs_132;
F->ct_1983 = NULL;
F->et_1984 = NULL;
F->x_1985 = NULL;
F->y_1986 = NULL;
F->conds_1987 = NULL;
F->f_1988 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_617)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, &F->ct_1983);
f_assign_code_603(F->up, rt_g_lit("d->p[i]", 7), (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_1985);
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit(");", 2)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P139)rt_nil_check(F->x_1985))), rt_g_lit(" }", 2)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("s.p[i]", 6), &F->x_1985);
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P139)rt_nil_check(F->ct_1983))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P139)rt_nil_check(F->x_1985))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  return d;", 11));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
f_eq_code_612(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_1985);
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P139)rt_nil_check(F->x_1985))), rt_g_lit(")) return 0;", 12)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  return 1;", 11));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
if (((G_NV((*(P121)rt_nil_check(F->t_617)).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->t_617)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" and_", 5)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" or_", 4)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" xor_", 5)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) { ", 6)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" not_", 5)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a) { ", 6)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r = cp_", 8)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P121)rt_nil_check(F->t_617)).dims_) == ((rt_int)1LL))) {
f_ctype_477(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, &F->et_1984);
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("a.p[i]", 6), &F->x_1985);
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("b.p[i]", 6), &F->y_1986);
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" cat_", 5)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P139)rt_nil_check(F->ct_1983))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P139)rt_nil_check(F->x_1985))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P139)rt_nil_check(F->y_1986))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  return r;", 11));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->t_617)).elem_, rt_g_lit("e", 1), &F->x_1985);
f_first_index_552(F->up, F->t_617, &F->y_1986);
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" one_", 5)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->et_1984))), rt_g_lit(" e) {", 5)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P139)rt_nil_check(F->y_1986))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P139)rt_nil_check(F->ct_1983))), rt_g_lit(")); r.p[0] = ", 13)), (*(P139)rt_nil_check(F->x_1985))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("  return r;", 11));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
}
} else {
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" *d, ", 5)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" s) {", 5)));
F->f_1988 = (*(P121)rt_nil_check(F->t_617)).fields_;
while ((F->f_1988 != NULL)) {
if ((G_NV((*(P1779)rt_nil_check(F->f_1988)).dyn_) || ((*(P1779)rt_nil_check(F->f_1988)).cond_ != NULL))) {
f_copy_code_607(F->up, (*(P1779)rt_nil_check(F->f_1988)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), &F->x_1985);
F->x_1985 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1985))), one_rt_gstr(59)));
if (((*(P1779)rt_nil_check(F->f_1988)).cond_ != NULL)) {
F->x_1985 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_557(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P139)rt_nil_check(F->x_1985))));
}
} else {
f_assign_code_603(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), (*(P1779)rt_nil_check(F->f_1988)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), NULL, &F->x_1985);
}
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->x_1985))));
F->f_1988 = (*(P1779)rt_nil_check(F->f_1988)).next_;
}
L_end_1989: ;
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" cp_", 4)), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" s) {", 5)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" d = s;", 7)));
F->conds_1987 = f_mk_221(F->up, rt_g_lit("1", 1));
F->f_1988 = (*(P121)rt_nil_check(F->t_617)).fields_;
while ((F->f_1988 != NULL)) {
f_copy_code_607(F->up, (*(P1779)rt_nil_check(F->f_1988)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), &F->x_1985);
F->x_1985 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_1985))), one_rt_gstr(59)));
f_eq_code_612(F->up, (*(P1779)rt_nil_check(F->f_1988)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).name_)))), &F->y_1986);
if (((*(P1779)rt_nil_check(F->f_1988)).cond_ != NULL)) {
F->x_1985 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_557(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P139)rt_nil_check(F->x_1985))));
F->y_1986 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_557(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_1988)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P139)rt_nil_check(F->y_1986))), one_rt_gstr(41)));
}
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->x_1985))));
F->conds_1987 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_1987)), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->y_1986))));
F->f_1988 = (*(P1779)rt_nil_check(F->f_1988)).next_;
}
L_end_1990: ;
f_put_to_246(F->up, F->b_1982, rt_g_lit("  return d;", 11));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P139)rt_nil_check(F->c_1981))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" a, ", 4)), (*(P139)rt_nil_check(F->c_1981))), rt_g_lit(" b) {", 5)));
f_put_to_246(F->up, F->b_1982, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P139)rt_nil_check(F->conds_1987))), one_rt_gstr(59)));
f_put_to_246(F->up, F->b_1982, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_622(struct f_greenc_1fr *up_, rt_gstr name_619, P121 t_620, P139 *access_code_621) {
  struct f_storage_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_619 = cp_rt_gstr(name_619);
F->t_620 = t_620;
F->access_code_621 = access_code_621;
F->ct_1991 = NULL;
F->g_1992 = NULL;
f_ctype_477(F->up, F->t_620, &F->ct_1991);
if ((!G_NV(F->up->in_func_137))) {
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_232(F->up, F->name_619)), one_rt_gstr(95)), &F->g_1992);
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->ct_1991))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->g_1992))), one_rt_gstr(59)));
F->up->st_field_140 = F->g_1992;
(*F->access_code_621) = F->g_1992;
} else {
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, F->name_619), one_rt_gstr(95)), &F->g_1992);
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_1991))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->g_1992))), one_rt_gstr(59)));
F->up->st_field_140 = F->g_1992;
(*F->access_code_621) = f_mk_221(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check(F->g_1992))));
}
ret_:

  return;
}

static void f_bind_625(struct f_greenc_1fr *up_, P116 y_623, P139 access_code_624) {
  struct f_bind_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_623 = y_623;
F->access_code_624 = access_code_624;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_623)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->y_623)).access_path_ = F->up->st_field_140;
} else {
(*(P116)rt_nil_check(F->y_623)).level_ = ((rt_int)0LL);
(*(P116)rt_nil_check(F->y_623)).access_path_ = F->access_code_624;
}
ret_:

  return;
}

static void f_declare_subprograms_627(struct f_greenc_1fr *up_, P173 from_626) {
  struct f_declare_subprograms_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_626 = from_626;
F->e_1993 = NULL;
F->e_1993 = F->from_626;
while ((F->e_1993 != NULL)) {
if ((((G_NV((*(P173)rt_nil_check(F->e_1993)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->e_1993)).kind_) == ((rt_int)45LL))) && (G_NV((*(P173)rt_nil_check(F->e_1993)).ival_) == ((rt_int)0LL)))) {
f_declare_one_629(F->up, F->e_1993);
}
F->e_1993 = (*(P173)rt_nil_check(F->e_1993)).next_;
}
L_end_1994: ;
ret_:

  return;
}

static void f_declare_one_629(struct f_greenc_1fr *up_, P173 e_628) {
  struct f_declare_one_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_628 = e_628;
F->y_1995 = NULL;
F->z_1996 = NULL;
if (f_is_generic_name_1211(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_628)).name_)))) {
goto ret_;
}
f_build_subprogram_634(F->up, F->e_628, &F->y_1995);
F->z_1996 = ({ A115 ix1997 = F->up->table_118; ix1997.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1995)).name_))), ix1997.lo, ix1997.hi) - ix1997.lo]; });
while ((F->z_1996 != NULL)) {
if (((((((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1996)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1995)).name_))) && ((G_NV((*(P116)rt_nil_check(F->z_1996)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_1996)).kind_) == ((rt_int)4LL)))) && ((*(P116)rt_nil_check(F->z_1996)).decl_ != NULL)) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->z_1996)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->z_1996)).depth_) == G_NV(F->up->depth_119))) && f_same_signature_444(F->up, (*(P116)rt_nil_check(F->z_1996)).params_, (*(P116)rt_nil_check(F->y_1995)).params_)) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_1996)).result_, (*(P116)rt_nil_check(F->y_1995)).result_))) {
(*(P116)rt_nil_check(F->z_1996)).decl_ = F->e_628;
goto ret_;
}
F->z_1996 = (*(P116)rt_nil_check(F->z_1996)).chain_;
}
L_end_1998: ;
if ((F->up->cur_task_196 != NULL)) {
F->z_1996 = (*(P116)rt_nil_check(F->up->cur_task_196)).members_;
while ((F->z_1996 != NULL)) {
if ((((((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_1996)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1995)).name_))) && ((G_NV((*(P116)rt_nil_check(F->z_1996)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_1996)).kind_) == ((rt_int)4LL)))) && ((*(P116)rt_nil_check(F->z_1996)).decl_ != NULL)) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->z_1996)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_444(F->up, (*(P116)rt_nil_check(F->z_1996)).params_, (*(P116)rt_nil_check(F->y_1995)).params_)) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_1996)).result_, (*(P116)rt_nil_check(F->y_1995)).result_))) {
(*(P116)rt_nil_check(F->y_1995)).cname_ = (*(P116)rt_nil_check(F->z_1996)).cname_;
(*(P116)rt_nil_check(F->z_1996)).decl_ = F->e_628;
goto L_end_1999;
}
F->z_1996 = (*(P116)rt_nil_check(F->z_1996)).mnext_;
}
L_end_1999: ;
}
f_define_450(F->up, F->y_1995, G_NV((*(P173)rt_nil_check(F->e_628)).line_));
f_elaborate_defaults_631(F->up, F->y_1995);
ret_:

  return;
}

static void f_elaborate_defaults_631(struct f_greenc_1fr *up_, P116 y_630) {
  struct f_elaborate_defaults_631fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_630 = y_630;
F->pm_2000 = NULL;
F->pm_2000 = (*(P116)rt_nil_check(F->y_630)).params_;
F->vt_2001 = NULL;
F->v_2002 = NULL;
F->acc_2003 = NULL;
F->x_2004 = NULL;
F->z_2005 = NULL;
while ((F->pm_2000 != NULL)) {
if (((*(P1761)rt_nil_check(F->pm_2000)).dflt_ != NULL)) {
if ((G_NV((*(P1761)rt_nil_check(F->pm_2000)).mode_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check((*(P1761)rt_nil_check(F->pm_2000)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_779(F->up, (*(P1761)rt_nil_check(F->pm_2000)).dflt_, (*(P1761)rt_nil_check(F->pm_2000)).t_, &F->vt_2001, &F->v_2002);
f_check_type_472(F->up, F->vt_2001, (*(P1761)rt_nil_check(F->pm_2000)).t_, G_NV((*(P173)rt_nil_check((*(P1761)rt_nil_check(F->pm_2000)).dflt_)).line_));
F->z_2005 = f_new_sym_455(F->up, ((rt_int)2LL), f_mk_221(F->up, rt_g_lit("dflt", 4)));
f_storage_622(F->up, rt_g_lit("dflt", 4), (*(P1761)rt_nil_check(F->pm_2000)).t_, &F->acc_2003);
(*(P116)rt_nil_check(F->z_2005)).t_ = (*(P1761)rt_nil_check(F->pm_2000)).t_;
(*(P116)rt_nil_check(F->z_2005)).c_ = (*(P1761)rt_nil_check(F->pm_2000)).c_;
f_bind_625(F->up, F->z_2005, F->acc_2003);
f_copy_code_607(F->up, (*(P1761)rt_nil_check(F->pm_2000)).t_, (*(P139)rt_nil_check(F->v_2002)), &F->x_2004);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2003)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2004))), one_rt_gstr(59)));
(*(P1761)rt_nil_check(F->pm_2000)).dsym_ = F->z_2005;
}
F->pm_2000 = (*(P1761)rt_nil_check(F->pm_2000)).next_;
}
L_end_2006: ;
ret_:

  return;
}

static void f_build_subprogram_634(struct f_greenc_1fr *up_, P173 d_632, P116 *y_633) {
  struct f_build_subprogram_634fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_632 = d_632;
F->y_633 = y_633;
F->p_2007 = NULL;
F->p_2007 = (*(P173)rt_nil_check(F->d_632)).a_;
F->pm_2008 = NULL;
F->tail_2009 = NULL;
F->rc_2010 = NULL;
F->k_2011 = INT64_MIN;
F->k_2011 = ((rt_int)4LL);
if ((G_NV((*(P173)rt_nil_check(F->d_632)).kind_) == ((rt_int)45LL))) {
F->k_2011 = ((rt_int)3LL);
}
(*F->y_633) = f_new_sym_455(F->up, G_NV(F->k_2011), (*(P173)rt_nil_check(F->d_632)).name_);
while ((F->p_2007 != NULL)) {
F->pm_2008 = ({ R1762 *cell2013 = rt_alloc(sizeof(R1762)); *cell2013 = cp_R1762(({ R1762 ag2014; ag2014.name_ = (*(P173)rt_nil_check(F->p_2007)).name_; ag2014.mode_ = G_NV((*(P173)rt_nil_check(F->p_2007)).ival_); ag2014.t_ = NULL; ag2014.c_ = NULL; ag2014.cfield_ = NULL; ag2014.dflt_ = (*(P173)rt_nil_check(F->p_2007)).b_; ag2014.next_ = NULL; ag2014.dsym_ = NULL; ag2014; })); (P1761)cell2013; });
f_resolve_493(F->up, (*(P173)rt_nil_check(F->p_2007)).a_, &(*(P1761)rt_nil_check(F->pm_2008)).t_, &(*(P1761)rt_nil_check(F->pm_2008)).c_);
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2007)).name_))), one_rt_gstr(95)), &(*(P1761)rt_nil_check(F->pm_2008)).cfield_);
if (((G_NV((*(P173)rt_nil_check(F->d_632)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1761)rt_nil_check(F->pm_2008)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_2007)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P173)rt_nil_check(F->d_632)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1761)rt_nil_check(F->pm_2008)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_2007)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2009 == NULL)) {
(*(P116)rt_nil_check((*F->y_633))).params_ = F->pm_2008;
} else {
(*(P1761)rt_nil_check(F->tail_2009)).next_ = F->pm_2008;
}
F->tail_2009 = F->pm_2008;
F->p_2007 = (*(P173)rt_nil_check(F->p_2007)).next_;
}
L_end_2012: ;
(*(P116)rt_nil_check((*F->y_633))).result_ = F->up->ty_void_160;
if (((*(P173)rt_nil_check(F->d_632)).b_ != NULL)) {
f_resolve_493(F->up, (*(P173)rt_nil_check(F->d_632)).b_, &(*(P116)rt_nil_check((*F->y_633))).result_, &F->rc_2010);
(*(P116)rt_nil_check((*F->y_633))).c_ = F->rc_2010;
}
if ((f_is_rel_334(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_632)).name_))) && ((*(P116)rt_nil_check((*F->y_633))).result_ != F->up->ty_bool_156))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->d_632)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_632)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P116)rt_nil_check((*F->y_633))).vrp_ = (G_NV((*(P173)rt_nil_check(F->d_632)).flag_) == ((rt_int)1LL));
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_721(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_632)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check((*F->y_633))).cname_);
(*(P116)rt_nil_check((*F->y_633))).decl_ = F->d_632;
(*(P116)rt_nil_check((*F->y_633))).level_ = G_NV(F->up->cur_level_138);
ret_:

  return;
}

static void f_decl_elements_636(struct f_greenc_1fr *up_, P173 decls_635) {
  struct f_decl_elements_636fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_635 = decls_635;
F->e_2015 = NULL;
F->e_2015 = F->decls_635;
F->declared_2016 = INT_MIN;
F->declared_2016 = 0;
F->up->anon_node_175 = NULL;
while ((F->e_2015 != NULL)) {
if ((((G_NV((*(P173)rt_nil_check(F->e_2015)).kind_) != ((rt_int)40LL)) && (G_NV((*(P173)rt_nil_check(F->e_2015)).kind_) != ((rt_int)41LL))) || ((*(P173)rt_nil_check(F->e_2015)).a_ != F->up->anon_node_175))) {
F->up->anon_node_175 = NULL;
}
if (((((G_NV((*(P173)rt_nil_check(F->e_2015)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->e_2015)).kind_) == ((rt_int)45LL))) && (G_NV((*(P173)rt_nil_check(F->e_2015)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2016)))) {
f_declare_subprograms_627(F->up, F->e_2015);
F->declared_2016 = 1;
}
f_decl_element_638(F->up, F->e_2015);
F->e_2015 = (*(P173)rt_nil_check(F->e_2015)).next_;
}
L_end_2017: ;
ret_:

  return;
}

static void f_decl_element_638(struct f_greenc_1fr *up_, P173 e_637) {
  struct f_decl_element_638fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_637 = e_637;
F->pd_2018 = NULL;
F->y_2019 = NULL;
F->z_2020 = NULL;
F->t_2021 = NULL;
F->vt_2022 = NULL;
F->c_2023 = NULL;
F->acc_2024 = NULL;
F->v_2025 = NULL;
F->x_2026 = NULL;
F->ok_2027 = INT_MIN;
{ rt_int sel2028 = G_NV((*(P173)rt_nil_check(F->e_637)).kind_);
if (0 || sel2028 == ((rt_int)42LL)) {
F->y_2019 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)));
if ((((((((F->y_2019 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2019)).kind_) == ((rt_int)5LL))) && (G_NV((*(P116)rt_nil_check(F->y_2019)).depth_) == G_NV(F->up->depth_119))) && ((*(P116)rt_nil_check(F->y_2019)).t_ != NULL)) && G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).priv_)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_172 = (*(P116)rt_nil_check(F->y_2019)).t_;
F->x_2026 = (*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).name_;
F->pd_2018 = (*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).decl_;
f_type_definition_527(F->up, (*(P173)rt_nil_check(F->e_637)).a_, (*(P173)rt_nil_check(F->e_637)).name_, &F->t_2021, &F->c_2023);
F->up->completing_172 = NULL;
if ((F->t_2021 != (*(P116)rt_nil_check(F->y_2019)).t_)) {
as_R122(&(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)), (*(P121)rt_nil_check(F->t_2021)));
}
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).name_ = F->x_2026;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).priv_ = 1;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).decl_ = F->pd_2018;
(*(P116)rt_nil_check(F->y_2019)).c_ = F->c_2023;
} else {
F->y_2019 = f_new_sym_455(F->up, ((rt_int)5LL), (*(P173)rt_nil_check(F->e_637)).name_);
(*(P116)rt_nil_check(F->y_2019)).decl_ = F->e_637;
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).kind_) == ((rt_int)77LL))) {
(*(P116)rt_nil_check(F->y_2019)).t_ = f_new_typ_457(F->up, ((rt_int)9LL));
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).name_ = (*(P173)rt_nil_check(F->e_637)).name_;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).priv_ = 1;
(*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).t_)).decl_ = F->up->cur_pkg_207;
} else {
f_type_definition_527(F->up, (*(P173)rt_nil_check(F->e_637)).a_, (*(P173)rt_nil_check(F->e_637)).name_, &(*(P116)rt_nil_check(F->y_2019)).t_, &(*(P116)rt_nil_check(F->y_2019)).c_);
}
}
} else if (0 || sel2028 == ((rt_int)43LL)) {
F->y_2019 = f_new_sym_455(F->up, ((rt_int)5LL), (*(P173)rt_nil_check(F->e_637)).name_);
f_resolve_493(F->up, (*(P173)rt_nil_check(F->e_637)).a_, &(*(P116)rt_nil_check(F->y_2019)).t_, &(*(P116)rt_nil_check(F->y_2019)).c_);
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
} else if (0 || sel2028 == ((rt_int)40LL)) {
f_resolve_object_type_644(F->up, (*(P173)rt_nil_check(F->e_637)).a_, &F->t_2021, &F->c_2023);
F->y_2019 = f_new_sym_455(F->up, ((rt_int)1LL), (*(P173)rt_nil_check(F->e_637)).name_);
if ((G_NV((*(P173)rt_nil_check(F->e_637)).flag_) == ((rt_int)2LL))) {
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->e_637)).b_, &F->v_2025, &F->vt_2022, &F->c_2023, &(*(P116)rt_nil_check(F->y_2019)).ro_);
 (void)rt_range((*(P116)rt_nil_check(F->y_2019)).ro_, 0, 1);
f_check_type_472(F->up, F->vt_2022, F->t_2021, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_ctype_477(F->up, F->t_2021, &F->acc_2024);
f_new_name_224(F->up, cat_rt_gstr(f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_))), one_rt_gstr(95)), &F->x_2026);
if (G_NV(F->up->in_func_137)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->acc_2024))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check(F->x_2026))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->v_2025))), rt_g_lit(");", 2)));
(*(P116)rt_nil_check(F->y_2019)).byref_ = 1;
(*(P116)rt_nil_check(F->y_2019)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->y_2019)).access_path_ = F->x_2026;
} else {
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->acc_2024))), rt_g_lit(" *g_", 4)), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P139)rt_nil_check(F->x_2026))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->v_2025))), rt_g_lit(");", 2)));
(*(P116)rt_nil_check(F->y_2019)).level_ = ((rt_int)0LL);
(*(P116)rt_nil_check(F->y_2019)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(41)));
}
(*(P116)rt_nil_check(F->y_2019)).t_ = F->vt_2022;
(*(P116)rt_nil_check(F->y_2019)).c_ = F->c_2023;
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
goto ret_;
}
if ((((G_NV((*(P121)rt_nil_check(F->t_2021)).kind_) == ((rt_int)6LL)) && (!f_bounded_460(F->up, F->c_2023))) && ((*(P173)rt_nil_check(F->e_637)).b_ != NULL))) {
F->up->vrp_ok_212 = 1;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_637)).b_, F->t_2021, &F->vt_2022, &F->v_2025);
F->up->vrp_ok_212 = 0;
f_check_type_472(F->up, F->vt_2022, F->t_2021, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)), F->t_2021, &F->acc_2024);
f_copy_code_607(F->up, F->t_2021, (*(P139)rt_nil_check(F->v_2025)), &F->x_2026);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2024)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(59)));
} else {
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)), F->t_2021, &F->acc_2024);
f_init_storage_595(F->up, (*(P139)rt_nil_check(F->acc_2024)), F->t_2021, F->c_2023);
if (((*(P173)rt_nil_check(F->e_637)).b_ != NULL)) {
if (f_is_const_access_729(F->up, (*(P173)rt_nil_check(F->e_637)).b_)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_637)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_212 = 1;
if (((G_NV((*(P121)rt_nil_check(F->t_2021)).kind_) == ((rt_int)6LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_180 = F->acc_2024;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_637)).b_, F->t_2021, &F->vt_2022, &F->v_2025);
F->up->agg_bounds_180 = NULL;
F->up->vrp_ok_212 = 0;
f_check_type_472(F->up, F->vt_2022, F->t_2021, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_assign_code_603(F->up, (*(P139)rt_nil_check(F->acc_2024)), F->t_2021, (*(P139)rt_nil_check(F->v_2025)), F->c_2023, &F->x_2026);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2026)));
}
}
(*(P116)rt_nil_check(F->y_2019)).t_ = F->t_2021;
(*(P116)rt_nil_check(F->y_2019)).c_ = F->c_2023;
f_bind_625(F->up, F->y_2019, F->acc_2024);
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
} else if (0 || sel2028 == ((rt_int)41LL)) {
f_resolve_object_type_644(F->up, (*(P173)rt_nil_check(F->e_637)).a_, &F->t_2021, &F->c_2023);
F->z_2020 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)));
if (((*(P173)rt_nil_check(F->e_637)).b_ == NULL)) {
if (((F->up->cur_pkg_207 == NULL) || (!(G_NV((*(P121)rt_nil_check(F->t_2021)).priv_) && (G_NV((*(P121)rt_nil_check(F->t_2021)).kind_) == ((rt_int)9LL)))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_637)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2019 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->e_637)).name_);
(*(P116)rt_nil_check(F->y_2019)).t_ = F->t_2021;
(*(P116)rt_nil_check(F->y_2019)).c_ = F->c_2023;
(*(P116)rt_nil_check(F->y_2019)).ro_ = 1;
(*(P116)rt_nil_check(F->y_2019)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
goto ret_;
}
if (((((F->z_2020 != NULL) && (G_NV((*(P116)rt_nil_check(F->z_2020)).depth_) == G_NV(F->up->depth_119))) && (G_NV((*(P116)rt_nil_check(F->z_2020)).kind_) == ((rt_int)2LL))) && (G_NV((*(P116)rt_nil_check(F->z_2020)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_472(F->up, F->t_2021, (*(P116)rt_nil_check(F->z_2020)).t_, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_637)).b_, F->t_2021, &F->vt_2022, &F->v_2025);
f_check_type_472(F->up, F->vt_2022, F->t_2021, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)), F->t_2021, &F->acc_2024);
f_bind_625(F->up, F->z_2020, F->acc_2024);
f_copy_code_607(F->up, F->t_2021, (*(P139)rt_nil_check(F->v_2025)), &F->x_2026);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2024)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->z_2020)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2019 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->e_637)).name_);
(*(P116)rt_nil_check(F->y_2019)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_212 = 1;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_637)).b_, F->t_2021, &F->vt_2022, &F->v_2025);
F->up->vrp_ok_212 = 0;
f_check_type_472(F->up, F->vt_2022, F->t_2021, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
if ((G_NV((*(P121)rt_nil_check(F->t_2021)).kind_) == ((rt_int)1LL))) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_637)).b_, &(*(P116)rt_nil_check(F->y_2019)).mvalue_, &F->ok_2027);
 (void)rt_range(F->ok_2027, 0, 1);
(*(P116)rt_nil_check(F->y_2019)).hasmv_ = G_NV(F->ok_2027);
}
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)), F->t_2021, &F->acc_2024);
f_copy_code_607(F->up, F->t_2021, (*(P139)rt_nil_check(F->v_2025)), &F->x_2026);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2024)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2026))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->y_2019)).t_ = F->t_2021;
(*(P116)rt_nil_check(F->y_2019)).c_ = F->c_2023;
(*(P116)rt_nil_check(F->y_2019)).ro_ = 1;
f_bind_625(F->up, F->y_2019, F->acc_2024);
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
} else if (0 || sel2028 == ((rt_int)46LL)) {
if (((*(P173)rt_nil_check(F->e_637)).a_ != NULL)) {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).a_))) {
F->y_2019 = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_637)).line_));
} else if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2019 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_637)).a_)).name_)));
} else {
F->y_2019 = NULL;
}
if (((F->y_2019 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2019)).kind_) != ((rt_int)6LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_637)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1027(F->up, F->y_2019, &F->z_2020);
(*(P116)rt_nil_check(F->z_2020)).name_ = (*(P173)rt_nil_check(F->e_637)).name_;
f_define_450(F->up, F->z_2020, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
goto ret_;
}
F->y_2019 = f_new_sym_455(F->up, ((rt_int)6LL), (*(P173)rt_nil_check(F->e_637)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2019)).cname_);
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).cname_))), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_excs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2019)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_239(F->up)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_))), f_q_239(F->up)), rt_g_lit(");", 2)));
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
} else if (0 || sel2028 == ((rt_int)44LL) || sel2028 == ((rt_int)45LL)) {
if (f_is_generic_name_1211(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_637)).name_)))) {
f_attach_generic_body_1213(F->up, F->e_637);
} else if ((G_NV((*(P173)rt_nil_check(F->e_637)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_634(F->up, F->e_637, &F->y_2019);
f_define_450(F->up, F->y_2019, G_NV((*(P173)rt_nil_check(F->e_637)).line_));
f_elaborate_defaults_631(F->up, F->y_2019);
} else {
f_subprogram_body_666(F->up, F->e_637, f_lookup_decl_424(F->up, F->e_637));
}
} else if (0 || sel2028 == ((rt_int)55LL)) {
f_use_clause_1041(F->up, F->e_637);
} else if (0 || sel2028 == ((rt_int)56LL)) {
f_pragma_decl_640(F->up, F->e_637);
} else {
f_other_decl_646(F->up, F->e_637);
}
}
ret_:

  return;
}

static void f_pragma_decl_640(struct f_greenc_1fr *up_, P173 e_639) {
  struct f_pragma_decl_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_639 = e_639;
ret_:

  return;
}

static void f_resolve_object_type_644(struct f_greenc_1fr *up_, P173 st_641, P121 *t_642, P177 *c_643) {
  struct f_resolve_object_type_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_641 = st_641;
F->t_642 = t_642;
F->c_643 = c_643;
if (((G_NV((*(P173)rt_nil_check(F->st_641)).kind_) != ((rt_int)80LL)) && (F->st_641 == F->up->anon_node_175))) {
(*F->t_642) = F->up->anon_typ_176;
(*F->c_643) = F->up->anon_cons_179;
goto ret_;
}
f_resolve_493(F->up, F->st_641, &(*F->t_642), &(*F->c_643));
if ((G_NV((*(P173)rt_nil_check(F->st_641)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_175 = F->st_641;
F->up->anon_typ_176 = (*F->t_642);
F->up->anon_cons_179 = (*F->c_643);
}
ret_:

  return;
}

static void f_other_decl_646(struct f_greenc_1fr *up_, P173 e_645) {
  struct f_other_decl_646fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_645 = e_645;
if ((G_NV((*(P173)rt_nil_check(F->e_645)).kind_) == ((rt_int)48LL))) {
f_package_spec_1032(F->up, F->e_645);
} else if ((G_NV((*(P173)rt_nil_check(F->e_645)).kind_) == ((rt_int)49LL))) {
f_package_body_1037(F->up, F->e_645);
} else {
f_task_decl_1117(F->up, F->e_645);
}
ret_:

  return;
}

static void f_scan_labels_649(struct f_greenc_1fr *up_, P173 stmts_647, rt_gstr path_648) {
  struct f_scan_labels_649fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_647 = stmts_647;
F->path_648 = cp_rt_gstr(path_648);
F->s_2029 = NULL;
F->s_2029 = F->stmts_647;
F->a_2030 = NULL;
F->l_2031 = NULL;
F->c_2032 = NULL;
while ((F->s_2029 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)57LL))) {
F->l_2031 = F->up->body_labels_190;
while ((F->l_2031 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2031)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2029)).name_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_2029)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2029)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2031 = (*(P188)rt_nil_check(F->l_2031)).next_;
}
L_end_2034: ;
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_2029)).name_)))), one_rt_gstr(95)), &F->c_2032);
F->up->body_labels_190 = ({ R189 *cell2035 = rt_alloc(sizeof(R189)); *cell2035 = cp_R189(({ R189 ag2036; ag2036.name_ = (*(P173)rt_nil_check(F->s_2029)).name_; ag2036.cname_ = F->c_2032; ag2036.path_ = f_mk_221(F->up, F->path_648); ag2036.frames_ = ((rt_int)0LL); ag2036.line_ = G_NV((*(P173)rt_nil_check(F->s_2029)).line_); ag2036.next_ = F->up->body_labels_190; ag2036; })); (P188)cell2035; });
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_191 = ({ R189 *cell2037 = rt_alloc(sizeof(R189)); *cell2037 = cp_R189(({ R189 ag2038; ag2038.name_ = (*(P173)rt_nil_check(F->s_2029)).name_; ag2038.cname_ = NULL; ag2038.path_ = f_mk_221(F->up, F->path_648); ag2038.frames_ = ((rt_int)0LL); ag2038.line_ = G_NV((*(P173)rt_nil_check(F->s_2029)).line_); ag2038.next_ = F->up->body_gotos_191; ag2038; })); (P188)cell2037; });
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)22LL))) {
F->a_2030 = (*(P173)rt_nil_check(F->s_2029)).a_;
while ((F->a_2030 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->a_2030)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2030 = (*(P173)rt_nil_check(F->a_2030)).next_;
}
L_end_2039: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->s_2029)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)23LL))) {
F->a_2030 = (*(P173)rt_nil_check(F->s_2029)).b_;
while ((F->a_2030 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->a_2030)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2030 = (*(P173)rt_nil_check(F->a_2030)).next_;
}
L_end_2040: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->s_2029)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)24LL))) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->s_2029)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_653(F->up, (*(P173)rt_nil_check(F->s_2029)).b_, (*(P173)rt_nil_check(F->s_2029)).c_, F->path_648);
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)34LL))) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->s_2029)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else if ((G_NV((*(P173)rt_nil_check(F->s_2029)).kind_) == ((rt_int)35LL))) {
F->a_2030 = (*(P173)rt_nil_check(F->s_2029)).a_;
while ((F->a_2030 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2030)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_649(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2030)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->a_2030)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->a_2030 = (*(P173)rt_nil_check(F->a_2030)).next_;
}
L_end_2041: ;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->s_2029)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_648, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
F->s_2029 = (*(P173)rt_nil_check(F->s_2029)).next_;
}
L_end_2033: ;
ret_:

  return;
}

static void f_scan_guarded_653(struct f_greenc_1fr *up_, P173 stmts_650, P173 hs_651, rt_gstr path_652) {
  struct f_scan_guarded_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_650 = stmts_650;
F->hs_651 = hs_651;
F->path_652 = cp_rt_gstr(path_652);
F->h_2042 = NULL;
F->h_2042 = F->hs_651;
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
if ((F->hs_651 == NULL)) {
f_scan_labels_649(F->up, F->stmts_650, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_652, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
} else {
f_scan_labels_649(F->up, F->stmts_650, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_652, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
}
while ((F->h_2042 != NULL)) {
F->up->segments_192 = rt_add(G_NV(F->up->segments_192), ((rt_int)1LL));
f_scan_labels_649(F->up, (*(P173)rt_nil_check(F->h_2042)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_652, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_192)))), one_rt_gstr(47)));
F->h_2042 = (*(P173)rt_nil_check(F->h_2042)).next_;
}
L_end_2043: ;
ret_:

  return;
}

static rt_int f_count_g_655(struct f_greenc_1fr *up_, rt_gstr p_654) {
  struct f_count_g_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_654 = cp_rt_gstr(p_654);
F->n_2044 = INT64_MIN;
F->n_2044 = ((rt_int)0LL);
{ rt_int lo2049 = ({ rt_gstr at2046 = F->p_654; at2046.lo; }), hi2050 = ({ rt_gstr at2047 = F->p_654; at2047.hi; });
for (rt_int it2051 = lo2049; it2051 <= hi2050; it2051++) {
F->i_2048 = it2051;
if ((G_NV(({ rt_gstr ix2052 = F->p_654; ix2052.p[rt_index(F->i_2048, ix2052.lo, ix2052.hi) - ix2052.lo]; })) == 103)) {
F->n_2044 = rt_add(G_NV(F->n_2044), ((rt_int)1LL));
}
}
}
L_end_2045: ;
F->result_ = G_NV(F->n_2044);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_658(struct f_greenc_1fr *up_, P173 stmts_656, P173 hs_657) {
  struct f_label_body_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_656 = stmts_656;
F->hs_657 = hs_657;
F->l_2053 = NULL;
F->g_2054 = NULL;
F->gp_2055 = NULL;
F->lp_2056 = NULL;
F->up->body_labels_190 = NULL;
F->up->body_gotos_191 = NULL;
F->up->segments_192 = ((rt_int)0LL);
f_scan_guarded_653(F->up, F->stmts_656, F->hs_657, rt_g_lit("/", 1));
F->l_2053 = F->up->body_labels_190;
while ((F->l_2053 != NULL)) {
(*(P188)rt_nil_check(F->l_2053)).frames_ = rt_add(G_NV(F->up->frames_149), f_count_g_655(F->up, (*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2053)).path_))));
F->l_2053 = (*(P188)rt_nil_check(F->l_2053)).next_;
}
L_end_2057: ;
F->g_2054 = F->up->body_gotos_191;
while ((F->g_2054 != NULL)) {
F->l_2053 = F->up->body_labels_190;
while (((F->l_2053 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2053)).name_)), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->g_2054)).name_)))))) {
F->l_2053 = (*(P188)rt_nil_check(F->l_2053)).next_;
}
L_end_2059: ;
if ((F->l_2053 == NULL)) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2054)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->g_2054)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2055 = (*(P188)rt_nil_check(F->g_2054)).path_;
F->lp_2056 = (*(P188)rt_nil_check(F->l_2053)).path_;
if ((({ rt_gstr at2060 = (*(P139)rt_nil_check(F->lp_2056)); at2060.hi >= at2060.lo ? at2060.hi - at2060.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2061 = (*(P139)rt_nil_check(F->gp_2055)); at2061.hi >= at2061.lo ? at2061.hi - at2061.lo + 1 : (rt_int)0; }))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2054)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2063 = (*(P139)rt_nil_check(F->gp_2055)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2062 = (*(P139)rt_nil_check(F->lp_2056)); at2062.hi >= at2062.lo ? at2062.hi - at2062.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2063.lo, sl2063.hi); rt_index(h_, sl2063.lo, sl2063.hi); } sl2063.p += l_ - sl2063.lo; sl2063.lo = l_; sl2063.hi = h_; sl2063; }), (*(P139)rt_nil_check(F->lp_2056))))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2054)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2068 = rt_add(({ rt_gstr at2065 = (*(P139)rt_nil_check(F->lp_2056)); at2065.hi >= at2065.lo ? at2065.hi - at2065.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2069 = ({ rt_gstr at2066 = (*(P139)rt_nil_check(F->gp_2055)); at2066.hi >= at2066.lo ? at2066.hi - at2066.lo + 1 : (rt_int)0; });
for (rt_int it2070 = lo2068; it2070 <= hi2069; it2070++) {
F->i_2067 = it2070;
if (((G_NV(({ rt_gstr ix2071 = (*(P139)rt_nil_check(F->gp_2055)); ix2071.p[rt_index(F->i_2067, ix2071.lo, ix2071.hi) - ix2071.lo]; })) == 104) || (G_NV(({ rt_gstr ix2072 = (*(P139)rt_nil_check(F->gp_2055)); ix2072.p[rt_index(F->i_2067, ix2072.lo, ix2072.hi) - ix2072.lo]; })) == 97))) {
f_fail_242(F->up, G_NV((*(P188)rt_nil_check(F->g_2054)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2064: ;
F->g_2054 = (*(P188)rt_nil_check(F->g_2054)).next_;
}
L_end_2058: ;
ret_:

  return;
}

static void f_gen_label_661(struct f_greenc_1fr *up_, P173 s_659, int goto_it_660) {
  struct f_gen_label_661fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_659 = s_659;
F->goto_it_660 = goto_it_660;
F->l_2073 = NULL;
F->l_2073 = F->up->body_labels_190;
while (((F->l_2073 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2073)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_659)).name_)))))) {
F->l_2073 = (*(P188)rt_nil_check(F->l_2073)).next_;
}
L_end_2074: ;
if ((F->l_2073 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_659)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_659)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_660) {
f_pop_frames_670(F->up, G_NV((*(P188)rt_nil_check(F->l_2073)).frames_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2073)).cname_))), one_rt_gstr(59)));
} else {
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P188)rt_nil_check(F->l_2073)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_663(struct f_greenc_1fr *up_, P173 d_662) {
  struct f_is_foreign_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_662 = d_662;
if (((*(P173)rt_nil_check(F->d_662)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_662)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_666(struct f_greenc_1fr *up_, P173 d_664, P116 y_665) {
  struct f_subprogram_body_666fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_664 = d_664;
F->y_665 = y_665;
F->saved_code_2075 = NULL;
F->saved_code_2075 = F->up->code_135;
F->saved_fields_2076 = NULL;
F->saved_fields_2076 = F->up->fields_buf_136;
F->saved_in_2077 = INT_MIN;
F->saved_in_2077 = G_NV(F->up->in_func_137);
F->saved_sym_2078 = NULL;
F->saved_sym_2078 = F->up->func_sym_141;
F->saved_exits_2079 = NULL;
F->saved_exits_2079 = F->up->exits_144;
F->saved_frames_2080 = INT64_MIN;
F->saved_frames_2080 = G_NV(F->up->frames_149);
F->saved_handlers_2081 = NULL;
F->saved_handlers_2081 = F->up->handlers_152;
F->saved_cleanups_2082 = NULL;
F->saved_cleanups_2082 = F->up->cleanups_153;
F->saved_labels_2083 = NULL;
F->saved_labels_2083 = F->up->body_labels_190;
F->saved_hx_2084 = NULL;
F->saved_hx_2084 = F->up->handler_exits_193;
F->saved_hd_2085 = INT64_MIN;
F->saved_hd_2085 = G_NV(F->up->handler_depth_194);
F->saved_pure_2086 = NULL;
F->saved_pure_2086 = F->up->pure_sym_210;
F->aw_2087 = NULL;
F->saved_pdepth_2088 = INT64_MIN;
F->saved_pdepth_2088 = G_NV(F->up->pure_depth_211);
F->args_2089 = NULL;
F->head_2090 = NULL;
F->frame_2091 = NULL;
F->parent_2092 = NULL;
F->ct_2093 = NULL;
F->x_2094 = NULL;
F->pm_2095 = NULL;
F->pm_2095 = (*(P116)rt_nil_check(F->y_665)).params_;
F->p_2096 = NULL;
F->frame_2091 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_665)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_137)) {
F->parent_2092 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->func_sym_141)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_135 = f_new_buffer_243(F->up);
F->up->fields_buf_136 = f_new_buffer_243(F->up);
F->up->in_func_137 = 1;
F->up->func_sym_141 = F->y_665;
F->up->exits_144 = NULL;
F->up->frames_149 = ((rt_int)0LL);
F->up->handlers_152 = NULL;
F->up->cleanups_153 = NULL;
F->up->handler_exits_193 = NULL;
F->up->handler_depth_194 = ((rt_int)0LL);
F->up->cur_level_138 = rt_add(G_NV(F->up->cur_level_138), ((rt_int)1LL));
F->args_2089 = f_mk_221(F->up, rt_g_lit("", 0));
f_open_scope_451(F->up);
f_push_unit_422(F->up, (*(P173)rt_nil_check(F->d_664)).name_);
if (((G_NV((*(P116)rt_nil_check(F->y_665)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P116)rt_nil_check(F->y_665)).vrp_)))) {
F->up->pure_sym_210 = F->y_665;
F->up->pure_depth_211 = G_NV(F->up->depth_119);
}
if ((F->parent_2092 != NULL)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P139)rt_nil_check(F->parent_2092))), rt_g_lit(" *up;", 5)));
F->args_2089 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check(F->parent_2092))), rt_g_lit(" *up_", 5)));
f_emit_248(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2095 != NULL)) {
f_ctype_477(F->up, (*(P1761)rt_nil_check(F->pm_2095)).t_, &F->ct_2093);
if ((({ rt_gstr at2098 = (*(P139)rt_nil_check(F->args_2089)); at2098.hi >= at2098.lo ? at2098.hi - at2098.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2089 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2089)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1761)rt_nil_check(F->pm_2095)).mode_) == ((rt_int)1LL))) {
F->p_2096 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P1761)rt_nil_check(F->pm_2095)).name_);
(*(P116)rt_nil_check(F->p_2096)).ro_ = 1;
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2093))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), one_rt_gstr(59)));
F->args_2089 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2089)), (*(P139)rt_nil_check(F->ct_2093))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))));
f_copy_code_607(F->up, (*(P1761)rt_nil_check(F->pm_2095)).t_, (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_)), &F->x_2094);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
} else {
F->p_2096 = f_new_sym_455(F->up, ((rt_int)1LL), (*(P1761)rt_nil_check(F->pm_2095)).name_);
(*(P116)rt_nil_check(F->p_2096)).byref_ = 1;
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2093))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), one_rt_gstr(59)));
F->args_2089 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2089)), (*(P139)rt_nil_check(F->ct_2093))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), one_rt_gstr(59)));
}
(*(P116)rt_nil_check(F->p_2096)).access_path_ = (*(P1761)rt_nil_check(F->pm_2095)).cfield_;
(*(P116)rt_nil_check(F->p_2096)).t_ = (*(P1761)rt_nil_check(F->pm_2095)).t_;
(*(P116)rt_nil_check(F->p_2096)).c_ = (*(P1761)rt_nil_check(F->pm_2095)).c_;
(*(P116)rt_nil_check(F->p_2096)).level_ = G_NV(F->up->cur_level_138);
f_define_450(F->up, F->p_2096, G_NV((*(P173)rt_nil_check(F->d_664)).line_));
F->pm_2095 = (*(P1761)rt_nil_check(F->pm_2095)).next_;
}
L_end_2097: ;
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_665)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_477(F->up, (*(P116)rt_nil_check(F->y_665)).result_, &F->ct_2093);
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P139)rt_nil_check(F->ct_2093))), rt_g_lit(" result_;", 9)));
}
if ((f_is_foreign_663(F->up, F->d_664) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_665)).result_)).kind_) == ((rt_int)9LL)))) {
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->d_664)).c_);
F->x_2094 = f_mk_221(F->up, rt_g_lit("", 0));
F->pm_2095 = (*(P116)rt_nil_check(F->y_665)).params_;
while ((F->pm_2095 != NULL)) {
if ((({ rt_gstr at2100 = (*(P139)rt_nil_check(F->x_2094)); at2100.hi >= at2100.lo ? at2100.hi - at2100.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2094 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->x_2094)), rt_g_lit(", ", 2)));
}
if ((f_is_string_554(F->up, (*(P1761)rt_nil_check(F->pm_2095)).t_) && (G_NV((*(P1761)rt_nil_check(F->pm_2095)).mode_) == ((rt_int)1LL)))) {
F->x_2094 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2094)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2094 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2094)), rt_g_lit("F->", 3)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2095)).cfield_))));
}
F->pm_2095 = (*(P1761)rt_nil_check(F->pm_2095)).next_;
}
L_end_2099: ;
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->d_664)).name_)))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->x_2094))), rt_g_lit(");", 2)));
} else {
f_label_body_658(F->up, (*(P173)rt_nil_check(F->d_664)).d_, (*(P173)rt_nil_check(F->d_664)).e_);
f_guarded_678(F->up, (*(P173)rt_nil_check(F->d_664)).c_, (*(P173)rt_nil_check(F->d_664)).d_, (*(P173)rt_nil_check(F->d_664)).e_, G_NV((*(P173)rt_nil_check(F->d_664)).line_));
}
f_task_awaits_1136(F->up, (*(P173)rt_nil_check(F->d_664)).c_, &F->aw_2087);
F->up->nunits_187 = rt_sub(G_NV(F->up->nunits_187), ((rt_int)1LL));
f_close_scope_452(F->up);
F->up->cur_level_138 = rt_sub(G_NV(F->up->cur_level_138), ((rt_int)1LL));
if ((({ rt_gstr at2101 = (*(P139)rt_nil_check(F->args_2089)); at2101.hi >= at2101.lo ? at2101.hi - at2101.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2089 = f_mk_221(F->up, rt_g_lit("void", 4));
}
f_ctype_477(F->up, (*(P116)rt_nil_check(F->y_665)).result_, &F->ct_2093);
F->head_2090 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P139)rt_nil_check(F->ct_2093))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_665)).cname_))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->args_2089))), one_rt_gstr(41)));
f_put_to_246(F->up, F->up->out_protos_130, cat_rt_gstr((*(P139)rt_nil_check(F->head_2090)), one_rt_gstr(59)));
f_put_to_246(F->up, F->up->out_frames_128, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check(F->frame_2091))), rt_g_lit(" { int dummy;", 13)));
f_splice_253(F->up, F->up->out_frames_128, F->up->fields_buf_136);
f_put_to_246(F->up, F->up->out_frames_128, rt_g_lit("};", 2));
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr((*(P139)rt_nil_check(F->head_2090)), rt_g_lit(" {", 2)));
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P139)rt_nil_check(F->frame_2091))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P116)rt_nil_check(F->y_665)).kind_) == ((rt_int)4LL)) && ((*(P116)rt_nil_check(F->y_665)).access_path_ != NULL))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_665)).access_path_))));
}
f_splice_253(F->up, F->up->out_funcs_132, F->up->code_135);
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_665)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("ret_:", 5));
f_put_to_246(F->up, F->up->out_funcs_132, (*(P139)rt_nil_check(F->aw_2087)));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("ret_:", 5));
f_put_to_246(F->up, F->up->out_funcs_132, (*(P139)rt_nil_check(F->aw_2087)));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("  return;", 9));
}
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("}", 1));
f_put_to_246(F->up, F->up->out_funcs_132, rt_g_lit("", 0));
F->up->code_135 = F->saved_code_2075;
F->up->fields_buf_136 = F->saved_fields_2076;
F->up->in_func_137 = G_NV(F->saved_in_2077);
F->up->func_sym_141 = F->saved_sym_2078;
F->up->exits_144 = F->saved_exits_2079;
F->up->frames_149 = G_NV(F->saved_frames_2080);
F->up->handlers_152 = F->saved_handlers_2081;
F->up->cleanups_153 = F->saved_cleanups_2082;
F->up->pure_sym_210 = F->saved_pure_2086;
F->up->pure_depth_211 = G_NV(F->saved_pdepth_2088);
F->up->body_labels_190 = F->saved_labels_2083;
F->up->handler_exits_193 = F->saved_hx_2084;
F->up->handler_depth_194 = G_NV(F->saved_hd_2085);
ret_:

  return;
}

static void f_gen_statements_668(struct f_greenc_1fr *up_, P173 stmts_667) {
  struct f_gen_statements_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_667 = stmts_667;
F->s_2102 = NULL;
F->s_2102 = F->stmts_667;
while ((F->s_2102 != NULL)) {
f_gen_statement_684(F->up, F->s_2102);
F->s_2102 = (*(P173)rt_nil_check(F->s_2102)).next_;
}
L_end_2103: ;
ret_:

  return;
}

static void f_pop_frames_670(struct f_greenc_1fr *up_, rt_int upto_669) {
  struct f_pop_frames_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_669 = upto_669;
F->i_2104 = INT64_MIN;
F->i_2104 = G_NV(F->up->frames_149);
F->c_2105 = NULL;
F->c_2105 = F->up->cleanups_153;
while ((G_NV(F->i_2104) > F->upto_669)) {
f_emit_248(F->up, (*(P139)rt_nil_check((*(P150)rt_nil_check(F->c_2105)).s_)));
F->c_2105 = (*(P150)rt_nil_check(F->c_2105)).next_;
F->i_2104 = rt_sub(G_NV(F->i_2104), ((rt_int)1LL));
}
L_end_2106: ;
ret_:

  return;
}

static void f_push_cleanup_672(struct f_greenc_1fr *up_, rt_gstr s_671) {
  struct f_push_cleanup_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_671 = cp_rt_gstr(s_671);
F->up->cleanups_153 = ({ R151 *cell2107 = rt_alloc(sizeof(R151)); *cell2107 = cp_R151(({ R151 ag2108; ag2108.s_ = NULL; ag2108.next_ = F->up->cleanups_153; ag2108; })); (P150)cell2107; });
(*(P150)rt_nil_check(F->up->cleanups_153)).s_ = f_mk_221(F->up, F->s_671);
F->up->frames_149 = rt_add(G_NV(F->up->frames_149), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_673(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_153 = (*(P150)rt_nil_check(F->up->cleanups_153)).next_;
F->up->frames_149 = rt_sub(G_NV(F->up->frames_149), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_678(struct f_greenc_1fr *up_, P173 decls_674, P173 stmts_675, P173 hs_676, rt_int line_677) {
  struct f_guarded_678fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_674 = decls_674;
F->stmts_675 = stmts_675;
F->hs_676 = hs_676;
F->line_677 = line_677;
F->saved_hx_2109 = NULL;
F->f_2110 = NULL;
F->x_2111 = NULL;
F->h_2112 = NULL;
F->n_2113 = NULL;
F->first_2114 = INT_MIN;
F->first_2114 = 1;
F->has_others_2115 = INT_MIN;
F->has_others_2115 = 0;
F->conds_2116 = NULL;
if ((F->hs_676 == NULL)) {
f_decl_elements_636(F->up, F->decls_674);
f_gen_statements_668(F->up, F->stmts_675);
goto ret_;
}
f_new_name_224(F->up, rt_g_lit("xf", 2), &F->f_2110);
f_new_name_224(F->up, rt_g_lit("x", 1), &F->x_2111);
f_push_cleanup_672(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2110))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P139)rt_nil_check(F->f_2110))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P139)rt_nil_check(F->f_2110))), rt_g_lit(")) {", 4)));
f_decl_elements_636(F->up, F->decls_674);
f_gen_statements_668(F->up, F->stmts_675);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2110))), rt_g_lit(");", 2)));
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_673(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->f_2110))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P139)rt_nil_check(F->x_2111))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P139)rt_nil_check(F->x_2111))), rt_g_lit(");", 2)));
F->up->handlers_152 = ({ R151 *cell2117 = rt_alloc(sizeof(R151)); *cell2117 = cp_R151(({ R151 ag2118; ag2118.s_ = F->x_2111; ag2118.next_ = F->up->handlers_152; ag2118; })); (P150)cell2117; });
F->h_2112 = F->hs_676;
while ((F->h_2112 != NULL)) {
F->n_2113 = (*(P173)rt_nil_check(F->h_2112)).a_;
F->conds_2116 = f_mk_221(F->up, rt_g_lit("0", 1));
while ((F->n_2113 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2113)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2115 = 1;
F->conds_2116 = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_208 = (*(P173)rt_nil_check(F->n_2113)).tag_;
f_exc_id_682(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2113)).name_)), G_NV((*(P173)rt_nil_check(F->h_2112)).line_), &F->f_2110);
F->conds_2116 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2116)), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->x_2111))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->f_2110))));
}
F->n_2113 = (*(P173)rt_nil_check(F->n_2113)).next_;
}
L_end_2120: ;
if (G_NV(F->first_2114)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->conds_2116))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->conds_2116))), rt_g_lit(") {", 3)));
}
F->first_2114 = 0;
F->saved_hx_2109 = F->up->handler_exits_193;
F->up->handler_exits_193 = F->up->exits_144;
F->up->handler_depth_194 = rt_add(G_NV(F->up->handler_depth_194), ((rt_int)1LL));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->h_2112)).b_);
F->up->handler_depth_194 = rt_sub(G_NV(F->up->handler_depth_194), ((rt_int)1LL));
F->up->handler_exits_193 = F->saved_hx_2109;
F->h_2112 = (*(P173)rt_nil_check(F->h_2112)).next_;
}
L_end_2119: ;
if ((!G_NV(F->has_others_2115))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check(F->x_2111))), rt_g_lit(");", 2)));
}
f_emit_248(F->up, rt_g_lit("}", 1));
F->up->handlers_152 = (*(P150)rt_nil_check(F->up->handlers_152)).next_;
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_682(struct f_greenc_1fr *up_, rt_gstr name_679, rt_int line_680, P139 *r_681) {
  struct f_exc_id_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_679 = cp_rt_gstr(name_679);
F->line_680 = line_680;
F->r_681 = r_681;
F->y_2121 = NULL;
F->y_2121 = f_lookup_409(F->up, F->name_679);
if ((F->up->prefix_hint_208 != NULL)) {
F->y_2121 = f_member_of_1022(F->up, (*(P139)rt_nil_check(F->up->prefix_hint_208)), F->name_679, F->line_680);
F->up->prefix_hint_208 = NULL;
}
if (((F->y_2121 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2121)).kind_) != ((rt_int)6LL)))) {
f_fail_242(F->up, F->line_680, cat_rt_gstr(F->name_679, rt_g_lit(" is not an exception", 20)));
}
(*F->r_681) = (*(P116)rt_nil_check(F->y_2121)).cname_;
ret_:

  return;
}

static void f_gen_statement_684(struct f_greenc_1fr *up_, P173 s_683) {
  struct f_gen_statement_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_683 = s_683;
F->t_2122 = NULL;
F->vt_2123 = NULL;
F->c_2124 = NULL;
F->lv_2125 = NULL;
F->v_2126 = NULL;
F->x_2127 = NULL;
F->ro_2128 = INT_MIN;
{ rt_int sel2129 = G_NV((*(P173)rt_nil_check(F->s_683)).kind_);
if (0 || sel2129 == ((rt_int)20LL)) {
if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_683)).a_)).kind_) == ((rt_int)8LL)) && ((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_683)).a_)).b_ != NULL)) && ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_683)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_683)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_686(F->up, F->s_683);
goto ret_;
}
F->up->in_lv_path_213 = 1;
F->up->last_deref_214 = 0;
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->s_683)).a_, &F->lv_2125, &F->t_2122, &F->c_2124, &F->ro_2128);
 (void)rt_range(F->ro_2128, 0, 1);
F->up->in_lv_path_213 = 0;
if (G_NV(F->ro_2128)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_683)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1185(F->up, (*(P173)rt_nil_check(F->s_683)).a_, G_NV((*(P173)rt_nil_check(F->s_683)).line_));
if (f_is_const_access_729(F->up, (*(P173)rt_nil_check(F->s_683)).b_)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_683)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_212 = 1;
if (((G_NV((*(P121)rt_nil_check(F->t_2122)).kind_) == ((rt_int)6LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_683)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_180 = F->lv_2125;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_683)).b_, F->t_2122, &F->vt_2123, &F->v_2126);
F->up->agg_bounds_180 = NULL;
F->up->vrp_ok_212 = 0;
f_check_type_472(F->up, F->vt_2123, F->t_2122, G_NV((*(P173)rt_nil_check(F->s_683)).line_));
f_assign_code_603(F->up, (*(P139)rt_nil_check(F->lv_2125)), F->t_2122, (*(P139)rt_nil_check(F->v_2126)), F->c_2124, &F->x_2127);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2127)));
} else if (0 || sel2129 == ((rt_int)21LL)) {
F->up->vrp_ok_212 = 1;
f_gen_call_688(F->up, F->s_683);
F->up->vrp_ok_212 = 0;
} else if (0 || sel2129 == ((rt_int)22LL)) {
f_gen_if_690(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)23LL)) {
f_gen_case_692(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)24LL)) {
f_gen_loop_704(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)25LL)) {
f_gen_block_706(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)26LL)) {
f_gen_exit_711(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)27LL)) {
f_gen_return_713(F->up, F->s_683);
} else if (0 || sel2129 == ((rt_int)28LL)) {
if (((((*(P173)rt_nil_check(F->s_683)).tag_ != NULL) && f_is_task_name_1090(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_683)).tag_)))) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_683)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1138(F->up, F->s_683);
} else {
F->up->prefix_hint_208 = (*(P173)rt_nil_check(F->s_683)).tag_;
f_exc_id_682(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_683)).name_)), G_NV((*(P173)rt_nil_check(F->s_683)).line_), &F->x_2127);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check(F->x_2127))), rt_g_lit(");", 2)));
}
} else if (0 || sel2129 == ((rt_int)29LL)) {
if ((F->up->handlers_152 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_683)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P139)rt_nil_check((*(P150)rt_nil_check(F->up->handlers_152)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2129 == ((rt_int)30LL)) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->s_683)).a_, F->up->ty_bool_156, &F->vt_2123, &F->v_2126);
f_check_type_472(F->up, F->vt_2123, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_683)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P139)rt_nil_check(F->v_2126))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2129 == ((rt_int)31LL)) {
} else if (0 || sel2129 == ((rt_int)57LL)) {
f_gen_label_661(F->up, F->s_683, 0);
} else if (0 || sel2129 == ((rt_int)58LL)) {
f_gen_label_661(F->up, F->s_683, 1);
} else {
f_task_statement_gen_1180(F->up, F->s_683);
}
}
ret_:

  return;
}

static void f_slice_assign_686(struct f_greenc_1fr *up_, P173 s_685) {
  struct f_slice_assign_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_685 = s_685;
F->lv_2130 = NULL;
F->v_2131 = NULL;
F->sl_2132 = NULL;
F->x_2133 = NULL;
F->t_2134 = NULL;
F->st_2135 = NULL;
F->vt_2136 = NULL;
F->c_2137 = NULL;
F->ro_2138 = INT_MIN;
F->up->in_lv_path_213 = 1;
F->up->last_deref_214 = 0;
f_lvalue_735(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->s_685)).a_)).a_, &F->lv_2130, &F->t_2134, &F->c_2137, &F->ro_2138);
 (void)rt_range(F->ro_2138, 0, 1);
F->up->in_lv_path_213 = 0;
if (G_NV(F->ro_2138)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_685)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1185(F->up, (*(P173)rt_nil_check(F->s_685)).a_, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
F->ro_2138 = 0;
f_index_on_753(F->up, (*(P139)rt_nil_check(F->lv_2130)), F->t_2134, (*(P173)rt_nil_check(F->s_685)).a_, &F->ro_2138, 0, &F->sl_2132, &F->st_2135, &F->c_2137);
 (void)rt_range(F->ro_2138, 0, 1);
F->up->vrp_ok_212 = 1;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_685)).b_, F->st_2135, &F->vt_2136, &F->v_2131);
F->up->vrp_ok_212 = 0;
f_check_type_472(F->up, F->vt_2136, F->st_2135, G_NV((*(P173)rt_nil_check(F->s_685)).line_));
f_ctype_477(F->up, F->st_2135, &F->x_2133);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->x_2133))), rt_g_lit(" sl_ = ", 7)), (*(P139)rt_nil_check(F->sl_2132))), rt_g_lit("; as_", 5)), (*(P139)rt_nil_check(F->x_2133))), rt_g_lit("(&sl_, ", 7)), (*(P139)rt_nil_check(F->v_2131))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_688(struct f_greenc_1fr *up_, P173 s_687) {
  struct f_gen_call_688fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_687 = s_687;
F->c_2139 = NULL;
F->c_2139 = (*(P173)rt_nil_check(F->s_687)).a_;
F->t_2140 = NULL;
F->v_2141 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->c_2139)).kind_) == ((rt_int)5LL)) || (G_NV((*(P173)rt_nil_check(F->c_2139)).kind_) == ((rt_int)9LL)))) {
F->c_2139 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->s_687)).line_));
(*(P173)rt_nil_check(F->c_2139)).a_ = (*(P173)rt_nil_check(F->s_687)).a_;
}
if ((G_NV((*(P173)rt_nil_check(F->c_2139)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_687)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_195 = NULL;
f_gcall_982(F->up, F->c_2139, 1, &F->t_2140, &F->v_2141);
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->v_2141)), one_rt_gstr(59)));
if ((F->up->post_checks_195 != NULL)) {
f_emit_248(F->up, (*(P139)rt_nil_check(F->up->post_checks_195)));
F->up->post_checks_195 = NULL;
}
ret_:

  return;
}

static void f_gen_if_690(struct f_greenc_1fr *up_, P173 s_689) {
  struct f_gen_if_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_689 = s_689;
F->a_2142 = NULL;
F->a_2142 = (*(P173)rt_nil_check(F->s_689)).a_;
F->first_2143 = INT_MIN;
F->first_2143 = 1;
F->t_2144 = NULL;
F->v_2145 = NULL;
while ((F->a_2142 != NULL)) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->a_2142)).a_, F->up->ty_bool_156, &F->t_2144, &F->v_2145);
f_check_type_472(F->up, F->t_2144, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_689)).line_));
if (G_NV(F->first_2143)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->v_2145))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->v_2145))), rt_g_lit(") {", 3)));
}
F->first_2143 = 0;
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->a_2142)).b_);
F->a_2142 = (*(P173)rt_nil_check(F->a_2142)).next_;
}
L_end_2146: ;
if ((G_NV((*(P173)rt_nil_check(F->s_689)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_689)).b_);
}
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_692(struct f_greenc_1fr *up_, P173 s_691) {
  struct f_gen_case_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_691 = s_691;
F->st_2147 = NULL;
F->vt_2148 = NULL;
F->first_2149 = INT_MIN;
F->first_2149 = 1;
F->a_2150 = NULL;
F->a_2150 = (*(P173)rt_nil_check(F->s_691)).b_;
F->lab_2151 = NULL;
F->sel_2152 = NULL;
F->tmp_2153 = NULL;
F->ct_2154 = NULL;
F->conds_2155 = NULL;
F->v_2156 = NULL;
F->lo_2157 = NULL;
F->hi_2158 = NULL;
F->clo_2160.lo = ((rt_int)1LL); F->clo_2160.hi = ((rt_int)2000LL);
F->clo_2160.lo2 = 1; F->clo_2160.hi2 = 1;
F->clo_2160.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2160));
for (rt_int i2161 = 0; i2161 < G_CNT(F->clo_2160); i2161++) F->clo_2160.p[i2161] = INT64_MIN;
F->chi_2162.lo = ((rt_int)1LL); F->chi_2162.hi = ((rt_int)2000LL);
F->chi_2162.lo2 = 1; F->chi_2162.hi2 = 1;
F->chi_2162.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2162));
for (rt_int i2163 = 0; i2163 < G_CNT(F->chi_2162); i2163++) F->chi_2162.p[i2163] = INT64_MIN;
F->nc_2164 = INT64_MIN;
F->nc_2164 = ((rt_int)0LL);
F->vlo_2165 = INT64_MIN;
F->vhi_2166 = INT64_MIN;
F->total_2167 = INT64_MIN;
F->ok_2168 = INT_MIN;
F->ok2_2169 = INT_MIN;
F->y_2170 = NULL;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_691)).a_, NULL, &F->st_2147, &F->sel_2152);
if ((!f_is_discrete_438(F->up, F->st_2147))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_224(F->up, rt_g_lit("sel", 3), &F->tmp_2153);
f_ctype_477(F->up, F->st_2147, &F->ct_2154);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->ct_2154))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->sel_2152))), one_rt_gstr(59)));
while ((F->a_2150 != NULL)) {
F->lab_2151 = (*(P173)rt_nil_check(F->a_2150)).a_;
F->conds_2155 = f_mk_221(F->up, rt_g_lit("0", 1));
while ((F->lab_2151 != NULL)) {
F->y_2170 = NULL;
if ((((*(P173)rt_nil_check(F->lab_2151)).b_ == NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2151)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2170 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2151)).a_)).name_)));
if (((F->y_2170 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2170)).kind_) != ((rt_int)5LL)))) {
F->y_2170 = NULL;
}
}
if ((F->y_2170 != NULL)) {
f_check_type_472(F->up, (*(P116)rt_nil_check(F->y_2170)).t_, F->st_2147, G_NV((*(P173)rt_nil_check(F->s_691)).line_));
if ((!f_static_bounds_464(F->up, (*(P116)rt_nil_check(F->y_2170)).c_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2151)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2165 = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2170)).c_)).mlo_);
F->vhi_2166 = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2170)).c_)).mhi_);
F->conds_2155 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2155)), rt_g_lit(" || (", 5)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2170)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2170)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P173)rt_nil_check(F->lab_2151)).b_ == NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->lab_2151)).a_, F->st_2147, &F->vt_2148, &F->v_2156);
f_check_type_472(F->up, F->vt_2148, F->st_2147, G_NV((*(P173)rt_nil_check(F->s_691)).line_));
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2151)).a_, &F->vlo_2165, &F->ok_2168);
 (void)rt_range(F->ok_2168, 0, 1);
if ((!G_NV(F->ok_2168))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2166 = G_NV(F->vlo_2165);
F->conds_2155 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2155)), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->v_2156))));
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->lab_2151)).a_, F->st_2147, &F->vt_2148, &F->lo_2157);
f_check_type_472(F->up, F->vt_2148, F->st_2147, G_NV((*(P173)rt_nil_check(F->s_691)).line_));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->lab_2151)).b_, F->st_2147, &F->vt_2148, &F->hi_2158);
f_check_type_472(F->up, F->vt_2148, F->st_2147, G_NV((*(P173)rt_nil_check(F->s_691)).line_));
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2151)).a_, &F->vlo_2165, &F->ok_2168);
 (void)rt_range(F->ok_2168, 0, 1);
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2151)).b_, &F->vhi_2166, &F->ok2_2169);
 (void)rt_range(F->ok2_2169, 0, 1);
if ((!(G_NV(F->ok_2168) && G_NV(F->ok2_2169)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2155 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->conds_2155)), rt_g_lit(" || (", 5)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2157))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->tmp_2153))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hi_2158))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2165) <= G_NV(F->vhi_2166))) {
{ rt_int lo2175 = ((rt_int)1LL), hi2176 = G_NV(F->nc_2164);
for (rt_int it2177 = lo2175; it2177 <= hi2176; it2177++) {
F->k_2174 = it2177;
if (((G_NV(F->vlo_2165) <= G_NV(({ A2159 ix2178 = F->chi_2162; ix2178.p[rt_index(F->k_2174, ix2178.lo, ix2178.hi) - ix2178.lo]; }))) && (G_NV(({ A2159 ix2179 = F->clo_2160; ix2179.p[rt_index(F->k_2174, ix2179.lo, ix2179.hi) - ix2179.lo]; })) <= G_NV(F->vhi_2166)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2173: ;
if ((G_NV(F->nc_2164) < ((rt_int)2000LL))) {
F->nc_2164 = rt_add(G_NV(F->nc_2164), ((rt_int)1LL));
(*({ A2159 *ix2180 = &(F->clo_2160); &ix2180->p[rt_index(G_NV(F->nc_2164), ix2180->lo, ix2180->hi) - ix2180->lo]; })) = G_NV(F->vlo_2165);
(*({ A2159 *ix2181 = &(F->chi_2162); &ix2181->p[rt_index(G_NV(F->nc_2164), ix2181->lo, ix2181->hi) - ix2181->lo]; })) = G_NV(F->vhi_2166);
}
}
F->lab_2151 = (*(P173)rt_nil_check(F->lab_2151)).next_;
}
L_end_2172: ;
if (G_NV(F->first_2149)) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->conds_2155))), rt_g_lit(") {", 3)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->conds_2155))), rt_g_lit(") {", 3)));
}
F->first_2149 = 0;
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->a_2150)).b_);
F->a_2150 = (*(P173)rt_nil_check(F->a_2150)).next_;
}
L_end_2171: ;
if ((G_NV((*(P173)rt_nil_check(F->s_691)).flag_) != ((rt_int)1LL))) {
f_selector_range_698(F->up, (*(P173)rt_nil_check(F->s_691)).a_, F->st_2147, &F->vlo_2165, &F->vhi_2166, &F->ok_2168);
 (void)rt_range(F->ok_2168, 0, 1);
if ((!G_NV(F->ok_2168))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_468(F->up, F->st_2147)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2167 = ((rt_int)0LL);
{ rt_int lo2184 = ((rt_int)1LL), hi2185 = G_NV(F->nc_2164);
for (rt_int it2186 = lo2184; it2186 <= hi2185; it2186++) {
F->k_2183 = it2186;
if (((G_NV(({ A2159 ix2187 = F->clo_2160; ix2187.p[rt_index(F->k_2183, ix2187.lo, ix2187.hi) - ix2187.lo]; })) < G_NV(F->vlo_2165)) || (G_NV(({ A2159 ix2188 = F->chi_2162; ix2188.p[rt_index(F->k_2183, ix2188.lo, ix2188.hi) - ix2188.lo]; })) > G_NV(F->vhi_2166)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_468(F->up, F->st_2147)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2167 = rt_add(G_NV(F->total_2167), rt_add(rt_sub(G_NV(({ A2159 ix2189 = F->chi_2162; ix2189.p[rt_index(F->k_2183, ix2189.lo, ix2189.hi) - ix2189.lo]; })), G_NV(({ A2159 ix2190 = F->clo_2160; ix2190.p[rt_index(F->k_2183, ix2190.lo, ix2190.hi) - ix2190.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2182: ;
if ((G_NV(F->total_2167) != rt_add(rt_sub(G_NV(F->vhi_2166), G_NV(F->vlo_2165)), ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_691)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_468(F->up, F->st_2147)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2149)) {
f_emit_248(F->up, rt_g_lit("{", 1));
} else {
f_emit_248(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P173)rt_nil_check(F->s_691)).flag_) == ((rt_int)1LL))) {
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_691)).c_);
} else {
f_emit_248(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_698(struct f_greenc_1fr *up_, P173 e_693, P121 t_694, rt_int *lo_695, rt_int *hi_696, int *ok_697) {
  struct f_selector_range_698fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_693 = e_693;
F->t_694 = t_694;
F->lo_695 = lo_695;
F->hi_696 = hi_696;
F->ok_697 = ok_697;
F->y_2191 = NULL;
(*F->ok_697) = 0;
(*F->lo_695) = ((rt_int)0LL);
(*F->hi_696) = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_693)).kind_) == ((rt_int)5LL))) {
F->y_2191 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_693)).name_)));
if ((((F->y_2191 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2191)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2191)).kind_) == ((rt_int)2LL)))) && f_static_bounds_464(F->up, (*(P116)rt_nil_check(F->y_2191)).c_))) {
(*F->lo_695) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2191)).c_)).mlo_);
(*F->hi_696) = G_NV((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_2191)).c_)).mhi_);
(*F->ok_697) = 1;
goto ret_;
}
}
if ((G_NV((*(P121)rt_nil_check(F->t_694)).kind_) == ((rt_int)2LL))) {
(*F->hi_696) = ((rt_int)1LL);
(*F->ok_697) = 1;
} else if (((G_NV((*(P121)rt_nil_check(F->t_694)).kind_) == ((rt_int)11LL)) && ((*(P121)rt_nil_check(F->t_694)).tcons_ == NULL))) {
(*F->hi_696) = ((rt_int)127LL);
(*F->ok_697) = 1;
} else if ((G_NV((*(P121)rt_nil_check(F->t_694)).kind_) == ((rt_int)4LL))) {
(*F->hi_696) = rt_sub(f_list_len_301(F->up, (*(P121)rt_nil_check(F->t_694)).lits_), ((rt_int)1LL));
(*F->ok_697) = 1;
} else if (f_static_bounds_464(F->up, (*(P121)rt_nil_check(F->t_694)).tcons_)) {
(*F->lo_695) = G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_694)).tcons_)).mlo_);
(*F->hi_696) = G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_694)).tcons_)).mhi_);
(*F->ok_697) = 1;
}
ret_:

  return;
}

static void f_push_exit_702(struct f_greenc_1fr *up_, P139 match_699, int is_loop_700, P139 *label_701) {
  struct f_push_exit_702fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_699 = match_699;
F->is_loop_700 = is_loop_700;
F->label_701 = label_701;
f_new_name_224(F->up, rt_g_lit("L_end_", 6), &(*F->label_701));
F->up->exits_144 = ({ R143 *cell2192 = rt_alloc(sizeof(R143)); *cell2192 = cp_R143(({ R143 ag2193; ag2193.match_ = F->match_699; ag2193.label_ = (*F->label_701); ag2193.depth_ = G_NV(F->up->frames_149); ag2193.is_loop_ = F->is_loop_700; ag2193.next_ = F->up->exits_144; ag2193; })); (P142)cell2192; });
ret_:

  return;
}

static void f_gen_loop_704(struct f_greenc_1fr *up_, P173 s_703) {
  struct f_gen_loop_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_703 = s_703;
F->t_2194 = NULL;
F->vt_2195 = NULL;
F->c_2196 = NULL;
F->label_2197 = NULL;
F->cond_2198 = NULL;
F->acc_2199 = NULL;
F->lov_2200 = NULL;
F->hiv_2201 = NULL;
F->it_2202 = NULL;
F->y_2203 = NULL;
F->r_2204 = NULL;
f_push_exit_702(F->up, (*(P173)rt_nil_check(F->s_703)).tag_, 1, &F->label_2197);
if ((G_NV((*(P173)rt_nil_check(F->s_703)).flag_) == ((rt_int)0LL))) {
f_emit_248(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_703)).b_);
f_emit_248(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P173)rt_nil_check(F->s_703)).flag_) == ((rt_int)1LL))) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->s_703)).a_, F->up->ty_bool_156, &F->vt_2195, &F->cond_2198);
f_check_type_472(F->up, F->vt_2195, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_703)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P139)rt_nil_check(F->cond_2198))), rt_g_lit(") {", 3)));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_703)).b_);
f_emit_248(F->up, rt_g_lit("}", 1));
} else {
F->r_2204 = (*(P173)rt_nil_check(F->s_703)).a_;
F->c_2196 = f_new_cons_458(F->up);
if ((G_NV((*(P173)rt_nil_check(F->r_2204)).kind_) == ((rt_int)14LL))) {
f_range_bounds_774(F->up, (*(P173)rt_nil_check(F->r_2204)).a_, (*(P173)rt_nil_check(F->r_2204)).b_, NULL, G_NV((*(P173)rt_nil_check(F->s_703)).line_), &F->t_2194, &(*(P177)rt_nil_check(F->c_2196)).lo_, &(*(P177)rt_nil_check(F->c_2196)).hi_);
} else {
f_resolve_493(F->up, F->r_2204, &F->t_2194, &F->c_2196);
if (((*(P177)rt_nil_check(F->c_2196)).lo_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_703)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P121)rt_nil_check(F->t_2194)).kind_) != ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check(F->t_2194)).kind_) != ((rt_int)4LL))) && (G_NV((*(P121)rt_nil_check(F->t_2194)).kind_) != ((rt_int)11LL))) && (G_NV((*(P121)rt_nil_check(F->t_2194)).kind_) != ((rt_int)2LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_703)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_703)).name_)), F->t_2194, &F->acc_2199);
f_new_name_224(F->up, rt_g_lit("lo", 2), &F->lov_2200);
f_new_name_224(F->up, rt_g_lit("hi", 2), &F->hiv_2201);
f_new_name_224(F->up, rt_g_lit("it", 2), &F->it_2202);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P139)rt_nil_check(F->lov_2200))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2196)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hiv_2201))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2196)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P173)rt_nil_check(F->s_703)).ival_) == ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->hiv_2201))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lov_2200))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit("--) {", 5)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->lov_2200))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit(" <= ", 4)), (*(P139)rt_nil_check(F->hiv_2201))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->it_2202))), rt_g_lit("++) {", 5)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_2199)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->it_2202))), one_rt_gstr(59)));
f_open_scope_451(F->up);
F->y_2203 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->s_703)).name_);
(*(P116)rt_nil_check(F->y_2203)).t_ = F->t_2194;
(*(P116)rt_nil_check(F->y_2203)).ro_ = 1;
f_bind_625(F->up, F->y_2203, F->acc_2199);
f_define_450(F->up, F->y_2203, G_NV((*(P173)rt_nil_check(F->s_703)).line_));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_703)).b_);
f_close_scope_452(F->up);
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
}
F->up->exits_144 = (*(P142)rt_nil_check(F->up->exits_144)).next_;
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->label_2197)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_706(struct f_greenc_1fr *up_, P173 s_705) {
  struct f_gen_block_706fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_705 = s_705;
F->label_2205 = NULL;
F->aw_2206 = NULL;
f_push_exit_702(F->up, (*(P173)rt_nil_check(F->s_705)).tag_, 0, &F->label_2205);
f_emit_248(F->up, rt_g_lit("{", 1));
f_open_scope_451(F->up);
if (((*(P173)rt_nil_check(F->s_705)).tag_ != NULL)) {
f_push_unit_422(F->up, (*(P173)rt_nil_check(F->s_705)).tag_);
}
f_guarded_678(F->up, (*(P173)rt_nil_check(F->s_705)).a_, (*(P173)rt_nil_check(F->s_705)).b_, (*(P173)rt_nil_check(F->s_705)).c_, G_NV((*(P173)rt_nil_check(F->s_705)).line_));
f_task_awaits_1136(F->up, (*(P173)rt_nil_check(F->s_705)).a_, &F->aw_2206);
f_emit_248(F->up, (*(P139)rt_nil_check(F->aw_2206)));
if (((*(P173)rt_nil_check(F->s_705)).tag_ != NULL)) {
F->up->nunits_187 = rt_sub(G_NV(F->up->nunits_187), ((rt_int)1LL));
}
f_close_scope_452(F->up);
f_emit_248(F->up, rt_g_lit("}", 1));
F->up->exits_144 = (*(P142)rt_nil_check(F->up->exits_144)).next_;
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->label_2205)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_709(struct f_greenc_1fr *up_, P173 s_707, P142 x_708) {
  struct f_exit_matches_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_707 = s_707;
F->x_708 = x_708;
if (((*(P173)rt_nil_check(F->s_707)).name_ == NULL)) {
F->result_ = G_NV((*(P142)rt_nil_check(F->x_708)).is_loop_);
goto ret_;
} else if (((*(P142)rt_nil_check(F->x_708)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P142)rt_nil_check(F->x_708)).match_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_707)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_711(struct f_greenc_1fr *up_, P173 s_710) {
  struct f_gen_exit_711fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_710 = s_710;
F->x_2207 = NULL;
F->x_2207 = F->up->exits_144;
F->t_2208 = NULL;
F->v_2209 = NULL;
while ((F->x_2207 != NULL)) {
if (((G_NV(F->up->accept_depth_197) > ((rt_int)0LL)) && (F->x_2207 == F->up->accept_exits_148))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_710)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_194) > ((rt_int)0LL)) && (F->x_2207 == F->up->handler_exits_193))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_710)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_709(F->up, F->s_710, F->x_2207)) {
if ((!G_NV((*(P142)rt_nil_check(F->x_2207)).is_loop_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_710)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_710)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P173)rt_nil_check(F->s_710)).a_ != NULL)) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->s_710)).a_, F->up->ty_bool_156, &F->t_2208, &F->v_2209);
f_check_type_472(F->up, F->t_2208, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->s_710)).line_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->v_2209))), rt_g_lit(") {", 3)));
}
f_pop_frames_670(F->up, G_NV((*(P142)rt_nil_check(F->x_2207)).depth_));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P139)rt_nil_check((*(P142)rt_nil_check(F->x_2207)).label_))), one_rt_gstr(59)));
if (((*(P173)rt_nil_check(F->s_710)).a_ != NULL)) {
f_emit_248(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2207 = (*(P142)rt_nil_check(F->x_2207)).next_;
}
L_end_2210: ;
if (((*(P173)rt_nil_check(F->s_710)).name_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_710)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_710)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_710)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_713(struct f_greenc_1fr *up_, P173 s_712) {
  struct f_gen_return_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_712 = s_712;
F->vt_2211 = NULL;
F->v_2212 = NULL;
F->x_2213 = NULL;
if ((!G_NV(F->up->in_func_137))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_712)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_197) > ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_712)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->up->func_sym_141)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P173)rt_nil_check(F->s_712)).a_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_712)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_670(F->up, ((rt_int)0LL));
f_emit_248(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P173)rt_nil_check(F->s_712)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_712)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_712)).a_, (*(P116)rt_nil_check(F->up->func_sym_141)).result_, &F->vt_2211, &F->v_2212);
f_check_type_472(F->up, F->vt_2211, (*(P116)rt_nil_check(F->up->func_sym_141)).result_, G_NV((*(P173)rt_nil_check(F->s_712)).line_));
if (((f_is_numeric_436(F->up, F->vt_2211) || f_is_discrete_438(F->up, F->vt_2211)) && f_bounded_460(F->up, (*(P116)rt_nil_check(F->up->func_sym_141)).c_))) {
f_assign_code_603(F->up, rt_g_lit("F->result_", 10), F->vt_2211, (*(P139)rt_nil_check(F->v_2212)), (*(P116)rt_nil_check(F->up->func_sym_141)).c_, &F->x_2213);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2213)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P139)rt_nil_check(F->v_2212))), one_rt_gstr(59)));
}
f_pop_frames_670(F->up, ((rt_int)0LL));
f_emit_248(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_716(struct f_greenc_1fr *up_, P116 y_714, P139 *r_715) {
  struct f_access_of_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_714 = y_714;
F->r_715 = r_715;
F->p_2214 = NULL;
if ((G_NV((*(P116)rt_nil_check(F->y_714)).level_) <= ((rt_int)0LL))) {
(*F->r_715) = (*(P116)rt_nil_check(F->y_714)).access_path_;
goto ret_;
}
F->p_2214 = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2217 = ((rt_int)1LL), hi2218 = rt_sub(G_NV(F->up->cur_level_138), G_NV((*(P116)rt_nil_check(F->y_714)).level_));
for (rt_int it2219 = lo2217; it2219 <= hi2218; it2219++) {
F->i_2216 = it2219;
F->p_2214 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2214)), rt_g_lit("->up", 4)));
}
}
L_end_2215: ;
if (G_NV((*(P116)rt_nil_check(F->y_714)).byref_)) {
(*F->r_715) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->p_2214))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_714)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_715) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p_2214)), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_714)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_719(struct f_greenc_1fr *up_, rt_int l_717, P139 *r_718) {
  struct f_link_to_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_717 = l_717;
F->r_718 = r_718;
(*F->r_718) = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2222 = ((rt_int)1LL), hi2223 = rt_sub(G_NV(F->up->cur_level_138), F->l_717);
for (rt_int it2224 = lo2222; it2224 <= hi2223; it2224++) {
F->i_2221 = it2224;
(*F->r_718) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_718))), rt_g_lit("->up", 4)));
}
}
L_end_2220: ;
ret_:

  return;
}

static rt_gstr f_c_ident_721(struct f_greenc_1fr *up_, rt_gstr s_720) {
  struct f_c_ident_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_720 = cp_rt_gstr(s_720);
if (eq_rt_gstr(F->s_720, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_720, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_232(F->up, F->s_720);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_725(struct f_greenc_1fr *up_, rt_gstr base_722, P121 t_723, P139 *r_724) {
  struct f_deref_725fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_722 = cp_rt_gstr(base_722);
F->t_723 = t_723;
F->r_724 = r_724;
F->ct_2225 = NULL;
if (G_NV(F->up->in_lv_path_213)) {
F->up->last_deref_214 = 1;
}
f_ctype_477(F->up, F->t_723, &F->ct_2225);
(*F->r_724) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P139)rt_nil_check(F->ct_2225))), rt_g_lit(")rt_nil_check(", 14)), F->base_722), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_727(struct f_greenc_1fr *up_, P173 e_726) {
  struct f_is_object_727fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_726 = e_726;
F->y_2226 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_726)).kind_) == ((rt_int)5LL))) {
F->y_2226 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_726)).name_)));
if ((!(F->y_2226 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P116)rt_nil_check(F->y_2226)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2226)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_726)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_727(F->up, (*(P173)rt_nil_check(F->e_726)).a_);
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_726)).kind_) == ((rt_int)8LL))) {
if ((((*(P173)rt_nil_check(F->e_726)).b_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_726)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_727(F->up, (*(P173)rt_nil_check(F->e_726)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_729(struct f_greenc_1fr *up_, P173 e_728) {
  struct f_is_const_access_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_728 = e_728;
F->y_2227 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_728)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2227 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_728)).name_)));
if ((F->y_2227 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P116)rt_nil_check(F->y_2227)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P116)rt_nil_check(F->y_2227)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P116)rt_nil_check(F->y_2227)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2227)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_735(struct f_greenc_1fr *up_, P173 e_730, P139 *code_out_731, P121 *t_732, P177 *c_733, int *ro_734) {
  struct f_lvalue_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_730 = e_730;
F->code_out_731 = code_out_731;
F->t_732 = t_732;
F->c_733 = c_733;
F->ro_734 = ro_734;
F->cp_2228 = INT_MIN;
F->ex_2229 = NULL;
F->y_2230 = NULL;
F->base_2231 = NULL;
F->bt_2232 = NULL;
F->bc_2233 = NULL;
f_expanded_797(F->up, F->e_730, &F->ex_2229);
if ((F->ex_2229 != NULL)) {
f_lvalue_735(F->up, F->ex_2229, &(*F->code_out_731), &(*F->t_732), &(*F->c_733), &(*F->ro_734));
 (void)rt_range((*F->ro_734), 0, 1);
goto ret_;
}
if (((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check(F->e_730)).a_)))) {
if ((G_NV((*(P173)rt_nil_check(F->e_730)).ival_) > ((rt_int)0LL))) {
F->y_2230 = f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_730)).name_)), rt_sub(G_NV((*(P173)rt_nil_check(F->e_730)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)9LL))) {
F->y_2230 = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_730)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_730)).name_)), G_NV((*(P173)rt_nil_check(F->e_730)).line_));
} else {
F->y_2230 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_730)).name_)));
}
if ((F->y_2230 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_730)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_730)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2230)).kind_) != ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->y_2230)).kind_) != ((rt_int)2LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_730)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_730)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_716(F->up, F->y_2230, &(*F->code_out_731));
(*F->t_732) = (*(P116)rt_nil_check(F->y_2230)).t_;
(*F->c_733) = (*(P116)rt_nil_check(F->y_2230)).c_;
(*F->ro_734) = G_NV((*(P116)rt_nil_check(F->y_2230)).ro_);
} else if ((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)15LL))) {
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->e_730)).a_, &(*F->code_out_731), &(*F->t_732), &(*F->c_733), &(*F->ro_734));
 (void)rt_range((*F->ro_734), 0, 1);
} else if ((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)9LL))) {
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->e_730)).a_, &F->base_2231, &F->bt_2232, &F->bc_2233, &(*F->ro_734));
 (void)rt_range((*F->ro_734), 0, 1);
F->cp_2228 = ((G_NV((*(P121)rt_nil_check(F->bt_2232)).kind_) == ((rt_int)8LL)) && f_is_const_access_729(F->up, (*(P173)rt_nil_check(F->e_730)).a_));
f_select_on_744(F->up, (*(P139)rt_nil_check(F->base_2231)), F->bt_2232, F->e_730, &(*F->ro_734), 1, &(*F->code_out_731), &(*F->t_732), &(*F->c_733));
 (void)rt_range((*F->ro_734), 0, 1);
(*F->ro_734) = (G_NV((*F->ro_734)) || G_NV(F->cp_2228));
} else if ((G_NV((*(P173)rt_nil_check(F->e_730)).kind_) == ((rt_int)8LL))) {
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->e_730)).a_, &F->base_2231, &F->bt_2232, &F->bc_2233, &(*F->ro_734));
 (void)rt_range((*F->ro_734), 0, 1);
F->cp_2228 = ((G_NV((*(P121)rt_nil_check(F->bt_2232)).kind_) == ((rt_int)8LL)) && f_is_const_access_729(F->up, (*(P173)rt_nil_check(F->e_730)).a_));
f_index_on_753(F->up, (*(P139)rt_nil_check(F->base_2231)), F->bt_2232, F->e_730, &(*F->ro_734), 1, &(*F->code_out_731), &(*F->t_732), &(*F->c_733));
 (void)rt_range((*F->ro_734), 0, 1);
(*F->ro_734) = (G_NV((*F->ro_734)) || G_NV(F->cp_2228));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_730)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_744(struct f_greenc_1fr *up_, rt_gstr base_736, P121 bt_737, P173 e_738, int *ro_739, int lv_740, P139 *code_out_741, P121 *t_742, P177 *c_743) {
  struct f_select_on_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_736 = cp_rt_gstr(base_736);
F->bt_737 = bt_737;
F->e_738 = e_738;
F->ro_739 = ro_739;
F->lv_740 = lv_740;
F->code_out_741 = code_out_741;
F->t_742 = t_742;
F->c_743 = c_743;
F->f_2234 = NULL;
F->d_2235 = NULL;
F->ct_2236 = NULL;
F->tmp_2237 = NULL;
(*F->c_743) = F->up->no_cons_204;
if ((G_NV((*(P121)rt_nil_check(F->bt_737)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_591(F->up, F->bt_737);
f_deref_725(F->up, F->base_736, F->bt_737, &F->d_2235);
(*F->ro_739) = 0;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_741) = F->d_2235;
(*F->t_742) = (*(P121)rt_nil_check(F->bt_737)).target_;
goto ret_;
}
f_select_on_744(F->up, (*(P139)rt_nil_check(F->d_2235)), (*(P121)rt_nil_check(F->bt_737)).target_, F->e_738, &(*F->ro_739), 1, &(*F->code_out_741), &(*F->t_742), &(*F->c_743));
 (void)rt_range((*F->ro_739), 0, 1);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_737)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P121)rt_nil_check(F->bt_737)).priv_) && (!f_inside_package_1024(F->up, (*(P121)rt_nil_check(F->bt_737)).decl_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_738)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_468(F->up, F->bt_737)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2234 = (*(P121)rt_nil_check(F->bt_737)).fields_;
while ((F->f_2234 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2234)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_)))) {
f_subst_cons_563(F->up, (*(P1779)rt_nil_check(F->f_2234)).c_, F->base_736, &(*F->c_743));
(*F->code_out_741) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(F->base_736, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_)))));
(*F->t_742) = (*(P1779)rt_nil_check(F->f_2234)).t_;
if (G_NV((*(P1779)rt_nil_check(F->f_2234)).is_const_)) {
(*F->ro_739) = 1;
}
if (((*(P1779)rt_nil_check(F->f_2234)).cond_ != NULL)) {
f_ctype_477(F->up, F->bt_737, &F->ct_2236);
f_new_name_224(F->up, rt_g_lit("vr", 2), &F->tmp_2237);
if (F->lv_740) {
(*F->code_out_741) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P139)rt_nil_check(F->ct_2236))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->tmp_2237))), rt_g_lit(" = &(", 5)), F->base_736), rt_g_lit("); if (!(", 9)), f_subst_557(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2234)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->tmp_2237))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P139)rt_nil_check(F->tmp_2237))), rt_g_lit("->", 2)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_741) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2236))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2237))), rt_g_lit(" = ", 3)), F->base_736), rt_g_lit("; if (!(", 8)), f_subst_557(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2234)).cond_)), (*(P139)rt_nil_check(F->tmp_2237)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P139)rt_nil_check(F->tmp_2237))), one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2234 = (*(P1779)rt_nil_check(F->f_2234)).next_;
}
L_end_2238: ;
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_738)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_468(F->up, F->bt_737), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_))));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_738)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_738)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_753(struct f_greenc_1fr *up_, rt_gstr base_745, P121 bt_746, P173 e_747, int *ro_748, int lv_749, P139 *code_out_750, P121 *t_751, P177 *c_752) {
  struct f_index_on_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_745 = cp_rt_gstr(base_745);
F->bt_746 = bt_746;
F->e_747 = e_747;
F->ro_748 = ro_748;
F->lv_749 = lv_749;
F->code_out_750 = code_out_750;
F->t_751 = t_751;
F->c_752 = c_752;
F->a_2239 = NULL;
F->a_2239 = (*(P173)rt_nil_check(F->e_747)).b_;
F->arrt_2240 = NULL;
F->arrt_2240 = F->bt_746;
F->acc_2241 = NULL;
F->acc_2241 = f_mk_221(F->up, F->base_745);
F->it_2242 = NULL;
F->i_2243 = NULL;
F->lo_2244 = NULL;
F->hi_2245 = NULL;
F->d_2246 = NULL;
F->ct_2247 = NULL;
F->tmp_2248 = NULL;
(*F->c_752) = F->up->no_cons_204;
if ((G_NV((*(P121)rt_nil_check(F->bt_746)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_591(F->up, F->bt_746);
f_deref_725(F->up, F->base_745, F->bt_746, &F->d_2246);
(*F->ro_748) = 0;
f_index_on_753(F->up, (*(P139)rt_nil_check(F->d_2246)), (*(P121)rt_nil_check(F->bt_746)).target_, F->e_747, &(*F->ro_748), F->lv_749, &(*F->code_out_750), &(*F->t_751), &(*F->c_752));
 (void)rt_range((*F->ro_748), 0, 1);
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_746)).kind_) != ((rt_int)6LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_747)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2239 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_747)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P173)rt_nil_check(F->a_2239)).kind_) == ((rt_int)14LL)) || (G_NV((*(P173)rt_nil_check(F->a_2239)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P173)rt_nil_check(F->a_2239)).kind_) == ((rt_int)5LL)) && f_is_type_name_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2239)).name_)))))) {
if ((((*(P173)rt_nil_check(F->a_2239)).next_ != NULL) || (G_NV((*(P121)rt_nil_check(F->bt_746)).dims_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_747)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_507(F->up, F->a_2239, (*(P121)rt_nil_check(F->bt_746)).idx_, &F->it_2242, &F->lo_2244, &F->hi_2245);
f_check_type_472(F->up, F->it_2242, (*(P121)rt_nil_check(F->bt_746)).idx_, G_NV((*(P173)rt_nil_check(F->e_747)).line_));
f_ctype_477(F->up, F->bt_746, &F->d_2246);
f_new_name_224(F->up, rt_g_lit("sl", 2), &F->tmp_2248);
(*F->code_out_750) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->d_2246))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(" = ", 3)), F->base_745), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check(F->lo_2244))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check(F->hi_2245))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".hi); } ", 8)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".p += l_ - ", 11)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo; ", 5)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo = l_; ", 10)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".hi = h_; ", 10)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit("; })", 4)));
(*F->t_751) = F->bt_746;
(*F->ro_748) = 1;
goto ret_;
}
if ((f_list_len_301(F->up, F->a_2239) > G_NV((*(P121)rt_nil_check(F->bt_746)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_747)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_468(F->up, F->bt_746)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2239 != NULL)) {
f_gexpr_779(F->up, F->a_2239, (*(P121)rt_nil_check(F->arrt_2240)).idx_, &F->it_2242, &F->i_2243);
f_check_type_472(F->up, F->it_2242, (*(P121)rt_nil_check(F->arrt_2240)).idx_, G_NV((*(P173)rt_nil_check(F->e_747)).line_));
f_ctype_477(F->up, F->arrt_2240, &F->ct_2247);
f_new_name_224(F->up, rt_g_lit("ix", 2), &F->tmp_2248);
if (F->lv_749) {
F->acc_2241 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P139)rt_nil_check(F->ct_2247))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(" = &(", 5)), (*(P139)rt_nil_check(F->acc_2241))), rt_g_lit("); &", 4)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit("->p[rt_index(", 13)), (*(P139)rt_nil_check(F->i_2243))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit("->lo, ", 6)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit("->hi) - ", 8)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2241 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2247))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->acc_2241))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".p[rt_index(", 12)), (*(P139)rt_nil_check(F->i_2243))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".hi) - ", 7)), (*(P139)rt_nil_check(F->tmp_2248))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_752) = (*(P121)rt_nil_check(F->arrt_2240)).elemcons_;
F->arrt_2240 = (*(P121)rt_nil_check(F->arrt_2240)).elem_;
F->a_2239 = (*(P173)rt_nil_check(F->a_2239)).next_;
}
L_end_2249: ;
(*F->code_out_750) = F->acc_2241;
(*F->t_751) = F->arrt_2240;
if ((!F->lv_749)) {
(*F->ro_748) = 1;
}
ret_:

  return;
}

static int f_type_attribute_756(struct f_greenc_1fr *up_, P121 t_754, rt_gstr name_755) {
  struct f_type_attribute_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_754 = t_754;
F->name_755 = cp_rt_gstr(name_755);
F->y_2250 = NULL;
F->y_2250 = ({ A115 ix2251 = F->up->table_118; ix2251.p[rt_index(f_hash_407(F->up, F->name_755), ix2251.lo, ix2251.hi) - ix2251.lo]; });
F->p_2252 = NULL;
while ((F->y_2250 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2250)).name_)), F->name_755) && ((G_NV((*(P116)rt_nil_check(F->y_2250)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2250)).kind_) == ((rt_int)4LL))))) {
if (f_same_429(F->up, (*(P116)rt_nil_check(F->y_2250)).result_, F->t_754)) {
F->result_ = 1;
goto ret_;
}
F->p_2252 = (*(P116)rt_nil_check(F->y_2250)).params_;
while ((F->p_2252 != NULL)) {
if (f_same_429(F->up, (*(P1761)rt_nil_check(F->p_2252)).t_, F->t_754)) {
F->result_ = 1;
goto ret_;
}
F->p_2252 = (*(P1761)rt_nil_check(F->p_2252)).next_;
}
L_end_2254: ;
}
F->y_2250 = (*(P116)rt_nil_check(F->y_2250)).chain_;
}
L_end_2253: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_758(struct f_greenc_1fr *up_, rt_gstr n_757) {
  struct f_is_type_name_758fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_757 = cp_rt_gstr(n_757);
F->y_2255 = NULL;
F->y_2255 = f_lookup_409(F->up, F->n_757);
if ((!(F->y_2255 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2255)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_760(struct f_greenc_1fr *up_, P173 e_759) {
  struct f_is_char_lit_760fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_759 = e_759;
if ((!(G_NV((*(P173)rt_nil_check(F->e_759)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2256 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_759)).name_)); at2256.hi >= at2256.lo ? at2256.hi - at2256.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_762(struct f_greenc_1fr *up_, P173 e_761) {
  struct f_is_enum_lit_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_761 = e_761;
F->y_2257 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_761)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2257 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_761)).name_)));
if ((!(F->y_2257 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2257)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_764(struct f_greenc_1fr *up_, rt_gstr s_763) {
  struct f_c_string_764fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_763 = cp_rt_gstr(s_763);
F->n_2258 = INT64_MIN;
F->n_2258 = ((rt_int)0LL);
{ rt_int lo2262 = ((rt_int)1LL), hi2263 = ({ rt_gstr at2260 = F->s_763; at2260.hi >= at2260.lo ? at2260.hi - at2260.lo + 1 : (rt_int)0; });
for (rt_int it2264 = lo2262; it2264 <= hi2263; it2264++) {
F->i_2261 = it2264;
if ((((G_NV(({ rt_gstr ix2265 = F->s_763; ix2265.p[rt_index(F->i_2261, ix2265.lo, ix2265.hi) - ix2265.lo]; })) == 34) || (G_NV(({ rt_gstr ix2266 = F->s_763; ix2266.p[rt_index(F->i_2261, ix2266.lo, ix2266.hi) - ix2266.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2267 = F->s_763; ix2267.p[rt_index(F->i_2261, ix2267.lo, ix2267.hi) - ix2267.lo]; })) == 63))) {
F->n_2258 = rt_add(G_NV(F->n_2258), ((rt_int)1LL));
}
}
}
L_end_2259: ;
{
F->r_2270.lo = ((rt_int)1LL); F->r_2270.hi = rt_add(rt_add(({ rt_gstr at2269 = F->s_763; at2269.hi >= at2269.lo ? at2269.hi - at2269.lo + 1 : (rt_int)0; }), G_NV(F->n_2258)), ((rt_int)2LL));
F->r_2270.lo2 = 1; F->r_2270.hi2 = 1;
F->r_2270.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2270));
memset(F->r_2270.p, 0xFF, (size_t)G_CNT(F->r_2270));
F->j_2272 = INT64_MIN;
F->j_2272 = ((rt_int)1LL);
(*({ rt_gstr *ix2273 = &(F->r_2270); &ix2273->p[rt_index(((rt_int)1LL), ix2273->lo, ix2273->hi) - ix2273->lo]; })) = 34;
{ rt_int lo2277 = ((rt_int)1LL), hi2278 = ({ rt_gstr at2275 = F->s_763; at2275.hi >= at2275.lo ? at2275.hi - at2275.lo + 1 : (rt_int)0; });
for (rt_int it2279 = lo2277; it2279 <= hi2278; it2279++) {
F->i_2276 = it2279;
F->j_2272 = rt_add(G_NV(F->j_2272), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2280 = F->s_763; ix2280.p[rt_index(F->i_2276, ix2280.lo, ix2280.hi) - ix2280.lo]; })) == 34) || (G_NV(({ rt_gstr ix2281 = F->s_763; ix2281.p[rt_index(F->i_2276, ix2281.lo, ix2281.hi) - ix2281.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2282 = F->s_763; ix2282.p[rt_index(F->i_2276, ix2282.lo, ix2282.hi) - ix2282.lo]; })) == 63))) {
(*({ rt_gstr *ix2283 = &(F->r_2270); &ix2283->p[rt_index(G_NV(F->j_2272), ix2283->lo, ix2283->hi) - ix2283->lo]; })) = 92;
F->j_2272 = rt_add(G_NV(F->j_2272), ((rt_int)1LL));
}
(*({ rt_gstr *ix2284 = &(F->r_2270); &ix2284->p[rt_index(G_NV(F->j_2272), ix2284->lo, ix2284->hi) - ix2284->lo]; })) = G_NV(({ rt_gstr ix2285 = F->s_763; ix2285.p[rt_index(F->i_2276, ix2285.lo, ix2285.hi) - ix2285.lo]; }));
}
}
L_end_2274: ;
(*({ rt_gstr *ix2286 = &(F->r_2270); &ix2286->p[rt_index(rt_add(G_NV(F->j_2272), ((rt_int)1LL)), ix2286->lo, ix2286->hi) - ix2286->lo]; })) = 34;
F->result_ = F->r_2270;
goto ret_;

}
L_end_2268: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_766(struct f_greenc_1fr *up_, P173 e_765) {
  struct f_is_literal_766fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_765 = e_765;
if ((((G_NV((*(P173)rt_nil_check(F->e_765)).kind_) == ((rt_int)1LL)) || (G_NV((*(P173)rt_nil_check(F->e_765)).kind_) == ((rt_int)2LL))) || f_is_char_lit_760(F->up, F->e_765))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check(F->e_765)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P173)rt_nil_check(F->e_765)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_765)).a_);
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check(F->e_765)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_765)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_765)).a_) && f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_765)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_774(struct f_greenc_1fr *up_, P173 l_767, P173 h_768, P121 want_769, rt_int line_770, P121 *t_771, P139 *lo_772, P139 *hi_773) {
  struct f_range_bounds_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_767 = l_767;
F->h_768 = h_768;
F->want_769 = want_769;
F->line_770 = line_770;
F->t_771 = t_771;
F->lo_772 = lo_772;
F->hi_773 = hi_773;
F->w_2287 = NULL;
F->w_2287 = F->want_769;
F->t2_2288 = NULL;
if ((((F->w_2287 == NULL) && f_is_char_lit_760(F->up, F->l_767)) && f_is_char_lit_760(F->up, F->h_768))) {
F->w_2287 = F->up->ty_char_158;
}
if ((((F->w_2287 == NULL) && f_is_literal_766(F->up, F->l_767)) && (!f_is_literal_766(F->up, F->h_768)))) {
f_gexpr_779(F->up, F->h_768, NULL, &(*F->t_771), &(*F->hi_773));
f_gexpr_779(F->up, F->l_767, (*F->t_771), &F->t2_2288, &(*F->lo_772));
f_check_type_472(F->up, F->t2_2288, (*F->t_771), F->line_770);
} else {
f_gexpr_779(F->up, F->l_767, F->w_2287, &(*F->t_771), &(*F->lo_772));
f_gexpr_779(F->up, F->h_768, (*F->t_771), &F->t2_2288, &(*F->hi_773));
f_check_type_472(F->up, F->t2_2288, (*F->t_771), F->line_770);
}
ret_:

  return;
}

static void f_gexpr_779(struct f_greenc_1fr *up_, P173 e_775, P121 want_776, P121 *t_777, P139 *r_778) {
  struct f_gexpr_779fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_775 = e_775;
F->want_776 = want_776;
F->t_777 = t_777;
F->r_778 = r_778;
F->y_2289 = NULL;
F->bt_2290 = NULL;
F->c_2291 = NULL;
F->ro_2292 = INT_MIN;
F->base_2293 = NULL;
F->a_2294 = NULL;
F->nm_2295 = NULL;
F->saved_lv_2296 = INT_MIN;
F->saved_lv_2296 = G_NV(F->up->in_lv_path_213);
F->up->in_lv_path_213 = 0;
f_gexpr_1_784(F->up, F->e_775, F->want_776, &(*F->t_777), &(*F->r_778));
F->up->in_lv_path_213 = G_NV(F->saved_lv_2296);
ret_:

  return;
}

static void f_gexpr_1_784(struct f_greenc_1fr *up_, P173 e_780, P121 want_781, P121 *t_782, P139 *r_783) {
  struct f_gexpr_1_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_780 = e_780;
F->want_781 = want_781;
F->t_782 = t_782;
F->r_783 = r_783;
F->y_2297 = NULL;
F->bt_2298 = NULL;
F->c_2299 = NULL;
F->ro_2300 = INT_MIN;
F->base_2301 = NULL;
F->a_2302 = NULL;
F->nm_2303 = NULL;
F->c2_2304 = NULL;
(*F->t_782) = F->up->ty_int_155;
{ rt_int sel2305 = G_NV((*(P173)rt_nil_check(F->e_780)).kind_);
if (0 || sel2305 == ((rt_int)1LL)) {
if (((F->want_781 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)1LL)))) {
(*F->t_782) = F->want_781;
}
(*F->r_783) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P173)rt_nil_check(F->e_780)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2305 == ((rt_int)2LL)) {
(*F->t_782) = F->up->ty_float_157;
(*F->r_783) = (*(P173)rt_nil_check(F->e_780)).name_;
if (((F->want_781 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)3LL)))) {
(*F->t_782) = F->want_781;
} else if ((((F->want_781 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)16LL))) && ((*(P121)rt_nil_check(F->want_781)).fsmall_ != NULL))) {
(*F->t_782) = F->want_781;
(*F->r_783) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_780)).name_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->want_781)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2305 == ((rt_int)3LL)) {
if (((f_is_char_lit_760(F->up, F->e_780) && (F->want_781 != NULL)) && ((G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)4LL))))) {
f_char_literal_794(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if ((((((F->want_781 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_781)).kind_) == ((rt_int)6LL))) && (G_NV((*(P121)rt_nil_check(F->want_781)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->want_781)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->want_781)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_554(F->up, F->want_781)))) {
f_string_aggregate_789(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else {
(*F->t_782) = F->up->ty_string_159;
if (((F->want_781 != NULL) && f_is_string_554(F->up, F->want_781))) {
(*F->t_782) = F->want_781;
}
(*F->r_783) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_764(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_780)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2307 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_780)).name_)); at2307.hi >= at2307.lo ? at2307.hi - at2307.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2305 == ((rt_int)4LL)) {
(*F->t_782) = F->up->ty_nil_161;
(*F->r_783) = f_mk_221(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2305 == ((rt_int)15LL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_780)).a_, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)5LL)) {
f_gen_name_802(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)6LL)) {
f_gen_unop_807(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)7LL)) {
f_gen_binop_847(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)8LL)) {
f_expanded_797(F->up, (*(P173)rt_nil_check(F->e_780)).a_, &F->nm_2303);
if ((F->nm_2303 != NULL)) {
F->c2_2304 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_780)).line_));
as_R174(&(*(P173)rt_nil_check(F->c2_2304)), (*(P173)rt_nil_check(F->e_780)));
(*(P173)rt_nil_check(F->c2_2304)).a_ = F->nm_2303;
f_gexpr_779(F->up, F->c2_2304, F->want_781, &(*F->t_782), &(*F->r_783));
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2297 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).name_)));
if (((F->y_2297 == NULL) || (((G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_209 = F->want_781;
f_gcall_982(F->up, F->e_780, 0, &(*F->t_782), &(*F->r_783));
goto ret_;
}
if ((G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)5LL))) {
f_conversion_852(F->up, F->e_780, F->y_2297, &(*F->t_782), &(*F->r_783));
goto ret_;
}
} else if (((((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1090(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).a_)).name_)))) && (f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_780)).line_)) != NULL)) && (G_NV((*(P116)rt_nil_check(f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_780)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_209 = F->want_781;
f_gcall_982(F->up, F->e_780, 0, &(*F->t_782), &(*F->r_783));
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_)).name_))))) {
F->up->call_want_209 = F->want_781;
f_gcall_982(F->up, F->e_780, 0, &(*F->t_782), &(*F->r_783));
goto ret_;
} else if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_))) {
F->y_2297 = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_780)).line_));
if (((F->y_2297 != NULL) && (((G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2297)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_209 = F->want_781;
f_gcall_982(F->up, F->e_780, 0, &(*F->t_782), &(*F->r_783));
goto ret_;
}
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_780)).a_, NULL, &F->bt_2298, &F->base_2301);
F->ro_2300 = 1;
f_index_on_753(F->up, (*(P139)rt_nil_check(F->base_2301)), F->bt_2298, F->e_780, &F->ro_2300, 0, &(*F->r_783), &(*F->t_782), &F->c_2299);
 (void)rt_range(F->ro_2300, 0, 1);
if ((f_is_numeric_436(F->up, (*F->t_782)) || f_is_discrete_438(F->up, (*F->t_782)))) {
(*F->r_783) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_783)))), one_rt_gstr(41)));
}
} else if (0 || sel2305 == ((rt_int)9LL)) {
f_expanded_797(F->up, F->e_780, &F->nm_2303);
if ((F->nm_2303 != NULL)) {
f_gen_name_802(F->up, F->nm_2303, F->want_781, &(*F->t_782), &(*F->r_783));
goto ret_;
}
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_780)).a_)).name_))))) {
F->nm_2303 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_780)).line_));
(*(P173)rt_nil_check(F->nm_2303)).a_ = F->e_780;
F->up->call_want_209 = F->want_781;
f_gcall_982(F->up, F->nm_2303, 0, &(*F->t_782), &(*F->r_783));
goto ret_;
}
if (f_is_package_1018(F->up, (*(P173)rt_nil_check(F->e_780)).a_)) {
F->nm_2303 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_780)).line_));
(*(P173)rt_nil_check(F->nm_2303)).name_ = (*(P173)rt_nil_check(F->e_780)).name_;
(*(P173)rt_nil_check(F->nm_2303)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_780)).a_));
f_gen_name_802(F->up, F->nm_2303, F->want_781, &(*F->t_782), &(*F->r_783));
goto ret_;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_780)).a_, NULL, &F->bt_2298, &F->base_2301);
F->ro_2300 = 1;
f_select_on_744(F->up, (*(P139)rt_nil_check(F->base_2301)), F->bt_2298, F->e_780, &F->ro_2300, 0, &(*F->r_783), &(*F->t_782), &F->c_2299);
 (void)rt_range(F->ro_2300, 0, 1);
if ((f_is_numeric_436(F->up, (*F->t_782)) || f_is_discrete_438(F->up, (*F->t_782)))) {
(*F->r_783) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_783)))), one_rt_gstr(41)));
}
} else if (0 || sel2305 == ((rt_int)10LL)) {
f_gen_attr_868(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)11LL)) {
f_allocator_920(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else if (0 || sel2305 == ((rt_int)12LL)) {
f_aggregate_925(F->up, F->e_780, F->want_781, &(*F->t_782), &(*F->r_783));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_780)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_789(struct f_greenc_1fr *up_, P173 e_785, P121 want_786, P121 *t_787, P139 *r_788) {
  struct f_string_aggregate_789fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_785 = e_785;
F->want_786 = want_786;
F->t_787 = t_787;
F->r_788 = r_788;
F->ag_2308 = NULL;
F->it_2309 = NULL;
F->tail_2310 = NULL;
F->l_2311 = NULL;
F->ag_2308 = f_nn_295(F->up, ((rt_int)12LL), G_NV((*(P173)rt_nil_check(F->e_785)).line_));
{ rt_int lo2315 = ((rt_int)1LL), hi2316 = ({ rt_gstr at2313 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_785)).name_)); at2313.hi >= at2313.lo ? at2313.hi - at2313.lo + 1 : (rt_int)0; });
for (rt_int it2317 = lo2315; it2317 <= hi2316; it2317++) {
F->k_2314 = it2317;
F->l_2311 = f_nn_295(F->up, ((rt_int)3LL), G_NV((*(P173)rt_nil_check(F->e_785)).line_));
(*(P173)rt_nil_check(F->l_2311)).name_ = f_mk_221(F->up, ({ rt_gstr sl2319 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_785)).name_)); rt_int l_ = F->k_2314, h_ = F->k_2314; if (l_ <= h_) { rt_index(l_, sl2319.lo, sl2319.hi); rt_index(h_, sl2319.lo, sl2319.hi); } sl2319.p += l_ - sl2319.lo; sl2319.lo = l_; sl2319.hi = h_; sl2319; }));
F->it_2309 = f_nn_295(F->up, ((rt_int)13LL), G_NV((*(P173)rt_nil_check(F->e_785)).line_));
(*(P173)rt_nil_check(F->it_2309)).b_ = F->l_2311;
if ((F->tail_2310 == NULL)) {
(*(P173)rt_nil_check(F->ag_2308)).a_ = F->it_2309;
} else {
(*(P173)rt_nil_check(F->tail_2310)).next_ = F->it_2309;
}
F->tail_2310 = F->it_2309;
}
}
L_end_2312: ;
if (((*(P173)rt_nil_check(F->ag_2308)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_785)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_468(F->up, F->want_786)));
}
f_aggregate_925(F->up, F->ag_2308, F->want_786, &(*F->t_787), &(*F->r_788));
ret_:

  return;
}

static void f_char_literal_794(struct f_greenc_1fr *up_, P173 e_790, P121 want_791, P121 *t_792, P139 *r_793) {
  struct f_char_literal_794fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_790 = e_790;
F->want_791 = want_791;
F->t_792 = t_792;
F->r_793 = r_793;
F->i_2320 = INT64_MIN;
if ((G_NV((*(P121)rt_nil_check(F->want_791)).kind_) == ((rt_int)11LL))) {
(*F->t_792) = F->want_791;
(*F->r_793) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2322 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_790)).name_)); ix2322.p[rt_index(((rt_int)1LL), ix2322.lo, ix2322.hi) - ix2322.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2320 = f_lit_index_485(F->up, (*(P121)rt_nil_check(F->want_791)).lits_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_790)).name_)));
if ((G_NV(F->i_2320) < ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_790)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_790)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_468(F->up, F->want_791)));
}
(*F->t_792) = F->want_791;
(*F->r_793) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2320))));
ret_:

  return;
}

static void f_expanded_797(struct f_greenc_1fr *up_, P173 e_795, P173 *r_796) {
  struct f_expanded_797fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_795 = e_795;
F->r_796 = r_796;
F->y_2323 = NULL;
F->d_2324 = INT64_MIN;
(*F->r_796) = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_795)).kind_) != ((rt_int)9LL)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_795)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2324 = f_enclosing_depth_420(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_795)).a_)).name_)));
if ((G_NV(F->d_2324) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2323 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_795)).a_)).name_)));
if (((F->y_2323 != NULL) && ((((G_NV((*(P116)rt_nil_check(F->y_2323)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2323)).kind_) == ((rt_int)2LL))) || (G_NV((*(P116)rt_nil_check(F->y_2323)).kind_) == ((rt_int)8LL))) || (G_NV((*(P116)rt_nil_check(F->y_2323)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_795)).name_)), G_NV(F->d_2324)) == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_795)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_795)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_795)).a_)).name_))));
}
(*F->r_796) = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_795)).line_));
(*(P173)rt_nil_check((*F->r_796))).name_ = (*(P173)rt_nil_check(F->e_795)).name_;
(*(P173)rt_nil_check((*F->r_796))).ival_ = rt_add(G_NV(F->d_2324), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_802(struct f_greenc_1fr *up_, P173 e_798, P121 want_799, P121 *t_800, P139 *r_801) {
  struct f_gen_name_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_798 = e_798;
F->want_799 = want_799;
F->t_800 = t_800;
F->r_801 = r_801;
F->y_2325 = NULL;
F->y_2325 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)));
F->z_2326 = NULL;
F->call_2327 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_798)).ival_) > ((rt_int)0LL))) {
F->y_2325 = f_lookup_at_418(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_sub(G_NV((*(P173)rt_nil_check(F->e_798)).ival_), ((rt_int)1LL)));
}
if (((*(P173)rt_nil_check(F->e_798)).tag_ != NULL)) {
F->y_2325 = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), G_NV((*(P173)rt_nil_check(F->e_798)).line_));
}
if ((F->y_2325 == NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_g_lit("GET", 3)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_798)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_798)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)2LL)) && G_NV((*(P116)rt_nil_check(F->y_2325)).hasmv_))) {
(*F->t_800) = (*(P116)rt_nil_check(F->y_2325)).t_;
(*F->r_801) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->y_2325)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)2LL)) && (G_NV((*(P116)rt_nil_check(F->y_2325)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_798)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2325)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)1LL)) || (G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)2LL)))) {
(*F->t_800) = (*(P116)rt_nil_check(F->y_2325)).t_;
f_access_of_716(F->up, F->y_2325, &(*F->r_801));
if (((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)1LL)) && (f_is_numeric_436(F->up, (*F->t_800)) || f_is_discrete_438(F->up, (*F->t_800))))) {
(*F->r_801) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P139)rt_nil_check((*F->r_801)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)7LL))) {
F->z_2326 = F->y_2325;
if ((F->want_799 != NULL)) {
while ((F->z_2326 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2326)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_))) && (G_NV((*(P116)rt_nil_check(F->z_2326)).kind_) == ((rt_int)7LL))) && f_same_429(F->up, (*(P116)rt_nil_check(F->z_2326)).t_, F->want_799))) {
goto L_end_2328;
}
F->z_2326 = (*(P116)rt_nil_check(F->z_2326)).chain_;
}
L_end_2328: ;
if ((F->z_2326 == NULL)) {
F->z_2326 = F->y_2325;
}
} else {
F->z_2326 = (*(P116)rt_nil_check(F->y_2325)).chain_;
while ((F->z_2326 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2326)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_))) && (G_NV((*(P116)rt_nil_check(F->z_2326)).kind_) == ((rt_int)7LL))) && (!f_same_429(F->up, (*(P116)rt_nil_check(F->z_2326)).t_, (*(P116)rt_nil_check(F->y_2325)).t_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_798)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2326 = (*(P116)rt_nil_check(F->z_2326)).chain_;
}
L_end_2329: ;
F->z_2326 = F->y_2325;
}
(*F->t_800) = (*(P116)rt_nil_check(F->z_2326)).t_;
(*F->r_801) = f_mk_221(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->z_2326)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)4LL))) || (G_NV((*(P116)rt_nil_check(F->y_2325)).kind_) == ((rt_int)10LL)))) {
F->call_2327 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_798)).line_));
(*(P173)rt_nil_check(F->call_2327)).a_ = F->e_798;
F->up->call_want_209 = F->want_799;
f_gcall_982(F->up, F->call_2327, 0, &(*F->t_800), &(*F->r_801));
goto ret_;
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_798)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_798)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_807(struct f_greenc_1fr *up_, P173 e_803, P121 want_804, P121 *t_805, P139 *r_806) {
  struct f_gen_unop_807fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_803 = e_803;
F->want_804 = want_804;
F->t_805 = t_805;
F->r_806 = r_806;
F->a_2330 = NULL;
F->x_2331 = NULL;
F->done_2332 = INT_MIN;
f_user_operator_1072(F->up, F->e_803, F->want_804, &(*F->t_805), &(*F->r_806), &F->done_2332);
 (void)rt_range(F->done_2332, 0, 1);
if (G_NV(F->done_2332)) {
goto ret_;
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_803)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_803)).a_, F->want_804, &(*F->t_805), &F->a_2330);
if (((G_NV((*(P121)rt_nil_check((*F->t_805))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P121)rt_nil_check((*F->t_805))).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check((*F->t_805))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_477(F->up, (*F->t_805), &F->x_2331);
(*F->r_806) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P139)rt_nil_check(F->x_2331))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2330))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check((*F->t_805))).kind_) != ((rt_int)2LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_803)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_806) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check(F->a_2330))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_803)).a_, F->want_804, &(*F->t_805), &F->a_2330);
if ((!f_is_numeric_436(F->up, (*F->t_805)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_803)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_803)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_803)).name_)), rt_g_lit("+", 1))) {
(*F->r_806) = F->a_2330;
} else if (((G_NV((*(P121)rt_nil_check((*F->t_805))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_805))).kind_) == ((rt_int)16LL)))) {
(*F->r_806) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P139)rt_nil_check(F->a_2330))), one_rt_gstr(41)));
} else {
(*F->r_806) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P139)rt_nil_check(F->a_2330))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_809(struct f_greenc_1fr *up_, P121 t_808) {
  struct f_short_int_809fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_808 = t_808;
if ((!(G_NV((*(P121)rt_nil_check(F->t_808)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_431(F->up, F->t_808) == F->up->ty_short_166);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_811(struct f_greenc_1fr *up_, P121 t_810) {
  struct f_float_kind_811fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_810 = t_810;
if ((f_root_431(F->up, F->t_810) == F->up->ty_sfloat_168)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_814(struct f_greenc_1fr *up_, P173 e_812, P139 *r_813) {
  struct f_membership_814fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_812 = e_812;
F->r_813 = r_813;
F->ta_2333 = NULL;
F->tb_2334 = NULL;
F->tt_2335 = NULL;
F->a_2336 = NULL;
F->lo_2337 = NULL;
F->hi_2338 = NULL;
F->ct_2339 = NULL;
F->c_2340 = NULL;
F->d_2341 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_812)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_812)).a_)) {
f_range_bounds_774(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_812)).b_)).a_, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_812)).b_)).b_, NULL, G_NV((*(P173)rt_nil_check(F->e_812)).line_), &F->tt_2335, &F->lo_2337, &F->hi_2338);
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_812)).a_, F->tt_2335, &F->ta_2333, &F->a_2336);
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_812)).a_, NULL, &F->ta_2333, &F->a_2336);
f_range_bounds_774(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_812)).b_)).a_, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_812)).b_)).b_, F->ta_2333, G_NV((*(P173)rt_nil_check(F->e_812)).line_), &F->tt_2335, &F->lo_2337, &F->hi_2338);
}
f_check_type_472(F->up, F->tt_2335, F->ta_2333, G_NV((*(P173)rt_nil_check(F->e_812)).line_));
if (((!f_is_numeric_436(F->up, F->ta_2333)) && (!f_is_discrete_438(F->up, F->ta_2333)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_812)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_477(F->up, F->ta_2333, &F->ct_2339);
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2339))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2336))), rt_g_lit("; m_ >= ", 8)), (*(P139)rt_nil_check(F->lo_2337))), rt_g_lit(" && m_ <= ", 10)), (*(P139)rt_nil_check(F->hi_2338))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_493(F->up, (*(P173)rt_nil_check(F->e_812)).b_, &F->tt_2335, &F->c_2340);
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_812)).a_, F->tt_2335, &F->ta_2333, &F->a_2336);
f_check_type_472(F->up, F->ta_2333, F->tt_2335, G_NV((*(P173)rt_nil_check(F->e_812)).line_));
f_ctype_477(F->up, F->ta_2333, &F->ct_2339);
if (((f_is_numeric_436(F->up, F->ta_2333) || f_is_discrete_438(F->up, F->ta_2333)) && ((*(P177)rt_nil_check(F->c_2340)).lo_ != NULL))) {
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2339))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2336))), rt_g_lit("; m_ >= ", 8)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2340)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2340)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2333)).kind_) == ((rt_int)6LL)) && ((*(P177)rt_nil_check(F->c_2340)).lo_ != NULL))) {
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2339))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2336))), rt_g_lit("; m_.lo == ", 11)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2340)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2340)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2333)).kind_) == ((rt_int)7LL)) && f_discriminated_466(F->up, F->c_2340))) {
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2339))), rt_g_lit(" m_ = ", 6)), (*(P139)rt_nil_check(F->a_2336))), rt_g_lit("; 1", 3)));
F->d_2341 = (*(P177)rt_nil_check(F->c_2340)).dv_;
while ((F->d_2341 != NULL)) {
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_813))), rt_g_lit(" && m_.", 7)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_2341)).name_)))), rt_g_lit(" == (", 5)), (*(P139)rt_nil_check((*(P1783)rt_nil_check(F->d_2341)).v_))), one_rt_gstr(41)));
F->d_2341 = (*(P1783)rt_nil_check(F->d_2341)).next_;
}
L_end_2342: ;
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_813))), rt_g_lit("; })", 4)));
} else {
(*F->r_813) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P139)rt_nil_check(F->a_2336))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_819(struct f_greenc_1fr *up_, P173 e_815, P121 want_816, P121 *t_817, P139 *r_818) {
  struct f_condition_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_815 = e_815;
F->want_816 = want_816;
F->t_817 = t_817;
F->r_818 = r_818;
F->a_2343 = NULL;
F->b_2344 = NULL;
F->tb_2345 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_815)).kind_) == ((rt_int)7LL)) && (G_NV((*(P173)rt_nil_check(F->e_815)).ival_) == ((rt_int)1LL)))) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->e_815)).a_, F->up->ty_bool_156, &(*F->t_817), &F->a_2343);
f_check_type_472(F->up, (*F->t_817), F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->e_815)).line_));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_815)).b_, F->up->ty_bool_156, &F->tb_2345, &F->b_2344);
f_check_type_472(F->up, F->tb_2345, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->e_815)).line_));
(*F->t_817) = F->up->ty_bool_156;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_815)).name_)), rt_g_lit("AND", 3))) {
(*F->r_818) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2343))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->b_2344))), one_rt_gstr(41)));
} else {
(*F->r_818) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2343))), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->b_2344))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_779(F->up, F->e_815, F->up->ty_bool_156, &(*F->t_817), &(*F->r_818));
ret_:

  return;
}

static void f_catenation_824(struct f_greenc_1fr *up_, P173 e_820, P121 want_821, P121 *t_822, P139 *r_823) {
  struct f_catenation_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_820 = e_820;
F->want_821 = want_821;
F->t_822 = t_822;
F->r_823 = r_823;
F->arrt_2346 = NULL;
F->ta_2347 = NULL;
F->tb_2348 = NULL;
F->a_2349 = NULL;
F->b_2350 = NULL;
F->ct_2351 = NULL;
if ((((F->want_821 != NULL) && (G_NV((*(P121)rt_nil_check(F->want_821)).kind_) == ((rt_int)6LL))) && (G_NV((*(P121)rt_nil_check(F->want_821)).dims_) == ((rt_int)1LL)))) {
F->arrt_2346 = F->want_821;
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_820)).a_, NULL, &F->ta_2347, &F->a_2349);
if (((G_NV((*(P121)rt_nil_check(F->ta_2347)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->ta_2347)).dims_) == ((rt_int)1LL)))) {
F->arrt_2346 = F->ta_2347;
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_820)).b_, NULL, &F->tb_2348, &F->b_2350);
if (((G_NV((*(P121)rt_nil_check(F->tb_2348)).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2348)).dims_) == ((rt_int)1LL)))) {
F->arrt_2346 = F->tb_2348;
} else if (((G_NV((*(P121)rt_nil_check(F->ta_2347)).kind_) == ((rt_int)11LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2348)).kind_) == ((rt_int)11LL)))) {
F->arrt_2346 = F->up->ty_string_159;
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_820)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_477(F->up, F->arrt_2346, &F->ct_2351);
f_cat_operand_829(F->up, (*(P173)rt_nil_check(F->e_820)).a_, F->arrt_2346, G_NV((*(P173)rt_nil_check(F->e_820)).line_), &F->a_2349);
f_cat_operand_829(F->up, (*(P173)rt_nil_check(F->e_820)).b_, F->arrt_2346, G_NV((*(P173)rt_nil_check(F->e_820)).line_), &F->b_2350);
(*F->t_822) = F->arrt_2346;
(*F->r_823) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P139)rt_nil_check(F->ct_2351))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2349))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2350))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_829(struct f_greenc_1fr *up_, P173 x_825, P121 arrt_826, rt_int line_827, P139 *r_828) {
  struct f_cat_operand_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_825 = x_825;
F->arrt_826 = arrt_826;
F->line_827 = line_827;
F->r_828 = r_828;
F->tx_2352 = NULL;
F->ct_2353 = NULL;
if ((f_is_char_lit_760(F->up, F->x_825) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->arrt_826)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_779(F->up, F->x_825, (*(P121)rt_nil_check(F->arrt_826)).elem_, &F->tx_2352, &(*F->r_828));
} else {
f_gexpr_779(F->up, F->x_825, F->arrt_826, &F->tx_2352, &(*F->r_828));
}
if (f_same_429(F->up, F->tx_2352, F->arrt_826)) {
goto ret_;
}
if (f_same_429(F->up, F->tx_2352, (*(P121)rt_nil_check(F->arrt_826)).elem_)) {
f_ctype_477(F->up, F->arrt_826, &F->ct_2353);
(*F->r_828) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P139)rt_nil_check(F->ct_2353))), one_rt_gstr(40)), (*(P139)rt_nil_check((*F->r_828)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_242(F->up, F->line_827, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_468(F->up, F->tx_2352)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_468(F->up, F->arrt_826)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_834(struct f_greenc_1fr *up_, P173 e_830, P121 want_831, P121 *t_832, P139 *r_833) {
  struct f_arithmetic_834fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_830 = e_830;
F->want_831 = want_831;
F->t_832 = t_832;
F->r_833 = r_833;
F->op_2354 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_830)).name_)));
F->ta_2355 = NULL;
F->tb_2356 = NULL;
F->hint_2357 = NULL;
F->a_2358 = NULL;
F->b_2359 = NULL;
if (eq_rt_gstr(F->op_2354, rt_g_lit("**", 2))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).a_, F->want_831, &F->ta_2355, &F->a_2358);
F->hint_2357 = F->up->ty_int_155;
if ((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)1LL))) {
F->hint_2357 = F->ta_2355;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).b_, F->hint_2357, &F->tb_2356, &F->b_2359);
if ((G_NV((*(P121)rt_nil_check(F->tb_2356)).kind_) != ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_830)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_832) = F->ta_2355;
if ((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)1LL))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)3LL))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), rt_g_lit(", ", 2)), f_float_kind_811(F->up, F->ta_2355)), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_830)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_830)).a_) && (!f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_830)).b_)))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).b_, F->want_831, &F->tb_2356, &F->b_2359);
F->hint_2357 = F->tb_2356;
if (((G_NV((*(P121)rt_nil_check(F->tb_2356)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2354, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2354, rt_g_lit("/", 1))))) {
F->hint_2357 = F->up->ty_int_155;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).a_, F->hint_2357, &F->ta_2355, &F->a_2358);
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).a_, F->want_831, &F->ta_2355, &F->a_2358);
F->hint_2357 = F->ta_2355;
if (((((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2354, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2354, rt_g_lit("/", 1)))) && f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_830)).b_)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_830)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2357 = F->up->ty_int_155;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_830)).b_, F->hint_2357, &F->tb_2356, &F->b_2359);
}
if (((!f_is_numeric_436(F->up, F->ta_2355)) || (!f_is_numeric_436(F->up, F->tb_2356)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_830)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2354), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_468(F->up, F->ta_2355)), rt_g_lit(" and ", 5)), f_kind_name_468(F->up, F->tb_2356)));
}
if (((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)16LL)) || (G_NV((*(P121)rt_nil_check(F->tb_2356)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_842(F->up, F->e_830, F->ta_2355, F->tb_2356, (*(P139)rt_nil_check(F->a_2358)), (*(P139)rt_nil_check(F->b_2359)), &(*F->t_832), &(*F->r_833));
goto ret_;
}
f_check_type_472(F->up, F->tb_2356, F->ta_2355, G_NV((*(P173)rt_nil_check(F->e_830)).line_));
(*F->t_832) = F->ta_2355;
if ((G_NV((*(P121)rt_nil_check(F->ta_2355)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2354, rt_g_lit("+", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), rt_g_lit(", ", 2)), f_float_kind_811(F->up, F->ta_2355)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("-", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), rt_g_lit(", ", 2)), f_float_kind_811(F->up, F->ta_2355)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("*", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), rt_g_lit(", ", 2)), f_float_kind_811(F->up, F->ta_2355)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("/", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), rt_g_lit(", ", 2)), f_float_kind_811(F->up, F->ta_2355)), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_830)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2354), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2354, rt_g_lit("+", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("-", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("*", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("/", 1))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2354, rt_g_lit("MOD", 3))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P139)rt_nil_check(F->a_2358))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2359))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_830)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2354), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_809(F->up, (*F->t_832))) {
(*F->r_833) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P139)rt_nil_check((*F->r_833)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_842(struct f_greenc_1fr *up_, P173 e_835, P121 ta_836, P121 tb_837, rt_gstr a_838, rt_gstr b_839, P121 *t_840, P139 *r_841) {
  struct f_fixed_operation_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_835 = e_835;
F->ta_836 = ta_836;
F->tb_837 = tb_837;
F->a_838 = cp_rt_gstr(a_838);
F->b_839 = cp_rt_gstr(b_839);
F->t_840 = t_840;
F->r_841 = r_841;
F->op_2360 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_835)).name_)));
if ((eq_rt_gstr(F->op_2360, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2360, rt_g_lit("-", 1)))) {
f_check_type_472(F->up, F->tb_837, F->ta_836, G_NV((*(P173)rt_nil_check(F->e_835)).line_));
(*F->t_840) = F->ta_836;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_838), one_rt_gstr(32)), F->op_2360), one_rt_gstr(32)), F->b_839), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2360, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_836)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_837)).kind_) == ((rt_int)16LL)))) {
(*F->t_840) = F->up->ty_ufixed_171;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_838), rt_g_lit(" * ", 3)), F->b_839), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2360, rt_g_lit("/", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_836)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_837)).kind_) == ((rt_int)16LL)))) {
(*F->t_840) = F->up->ty_ufixed_171;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_838), rt_g_lit(", ", 2)), F->b_839), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2360, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_836)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_837)).kind_) == ((rt_int)1LL)))) {
(*F->t_840) = F->ta_836;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_838), rt_g_lit(" * (double)(", 12)), F->b_839), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2360, rt_g_lit("*", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_836)).kind_) == ((rt_int)1LL))) && (G_NV((*(P121)rt_nil_check(F->tb_837)).kind_) == ((rt_int)16LL)))) {
(*F->t_840) = F->tb_837;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_838), rt_g_lit(") * ", 4)), F->b_839), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2360, rt_g_lit("/", 1)) && (G_NV((*(P121)rt_nil_check(F->ta_836)).kind_) == ((rt_int)16LL))) && (G_NV((*(P121)rt_nil_check(F->tb_837)).kind_) == ((rt_int)1LL)))) {
(*F->t_840) = F->ta_836;
(*F->r_841) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_838), rt_g_lit(", (double)(", 11)), F->b_839), rt_g_lit("), 0), ", 7)), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->ta_836)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_835)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2360), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_847(struct f_greenc_1fr *up_, P173 e_843, P121 want_844, P121 *t_845, P139 *r_846) {
  struct f_gen_binop_847fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_843 = e_843;
F->want_844 = want_844;
F->t_845 = t_845;
F->r_846 = r_846;
F->op_2361 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_843)).name_)));
F->ta_2362 = NULL;
F->tb_2363 = NULL;
F->hint_2364 = NULL;
F->ct_2365 = NULL;
F->a_2366 = NULL;
F->b_2367 = NULL;
F->x_2368 = NULL;
F->dummy_2369 = NULL;
F->done_2370 = INT_MIN;
(*F->t_845) = F->up->ty_bool_156;
f_user_operator_1072(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846), &F->done_2370);
 (void)rt_range(F->done_2370, 0, 1);
if (G_NV(F->done_2370)) {
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->e_843)).ival_) == ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_843)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2361, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2361, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2361, rt_g_lit("XOR", 3)))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_843)).a_, F->want_844, &F->ta_2362, &F->a_2366);
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_843)).b_, F->ta_2362, &F->tb_2363, &F->b_2367);
f_check_type_472(F->up, F->tb_2363, F->ta_2362, G_NV((*(P173)rt_nil_check(F->e_843)).line_));
(*F->t_845) = F->ta_2362;
if (((G_NV((*(P121)rt_nil_check(F->ta_2362)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P121)rt_nil_check(F->ta_2362)).dims_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check((*(P121)rt_nil_check(F->ta_2362)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_477(F->up, F->ta_2362, &F->x_2368);
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_232(F->up, F->op_2361), one_rt_gstr(95)), (*(P139)rt_nil_check(F->x_2368))), one_rt_gstr(40)), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->ta_2362)).kind_) != ((rt_int)2LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_843)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2361), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2361, rt_g_lit("AND", 3))) {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(" && ", 4)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2361, rt_g_lit("OR", 2))) {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(" || ", 4)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
} else {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(" != ", 4)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2361, rt_g_lit("IN", 2))) {
f_membership_814(F->up, F->e_843, &(*F->r_846));
goto ret_;
}
if (eq_rt_gstr(F->op_2361, rt_g_lit("&", 1))) {
f_catenation_824(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
goto ret_;
}
if (f_is_rel_334(F->up, F->op_2361)) {
if (((((f_is_literal_766(F->up, (*(P173)rt_nil_check(F->e_843)).a_) || f_is_enum_lit_762(F->up, (*(P173)rt_nil_check(F->e_843)).a_)) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_843)).b_, NULL, &F->hint_2364, &F->dummy_2369);
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_843)).a_, F->hint_2364, &F->ta_2362, &F->a_2366);
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_843)).b_, F->ta_2362, &F->tb_2363, &F->b_2367);
F->ct_2365 = F->ta_2362;
if (((G_NV((*(P121)rt_nil_check(F->ta_2362)).kind_) != ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check(F->tb_2363)).kind_) != ((rt_int)10LL)))) {
f_check_type_472(F->up, F->tb_2363, F->ta_2362, G_NV((*(P173)rt_nil_check(F->e_843)).line_));
}
if ((G_NV((*(P121)rt_nil_check(F->ta_2362)).kind_) == ((rt_int)10LL))) {
F->ct_2365 = F->tb_2363;
}
if (((((!eq_rt_gstr(F->op_2361, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2361, rt_g_lit("/=", 2)))) && (!f_is_numeric_436(F->up, F->ct_2365))) && (!f_is_discrete_438(F->up, F->ct_2365)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_843)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2361), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_468(F->up, F->ct_2365)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_597(F->up, F->ct_2365)) {
f_eq_code_612(F->up, F->ct_2365, (*(P139)rt_nil_check(F->a_2366)), (*(P139)rt_nil_check(F->b_2367)), &F->x_2368);
if (eq_rt_gstr(F->op_2361, rt_g_lit("=", 1))) {
(*F->r_846) = F->x_2368;
} else if (eq_rt_gstr(F->op_2361, rt_g_lit("/=", 2))) {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check(F->x_2368))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_843)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2361, rt_g_lit("=", 1))) {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(" == ", 4)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2361, rt_g_lit("/=", 2))) {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), rt_g_lit(" != ", 4)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
} else {
(*F->r_846) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->a_2366))), one_rt_gstr(32)), F->op_2361), one_rt_gstr(32)), (*(P139)rt_nil_check(F->b_2367))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_834(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
ret_:

  return;
}

static void f_conversion_852(struct f_greenc_1fr *up_, P173 e_848, P116 y_849, P121 *t_850, P139 *r_851) {
  struct f_conversion_852fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_848 = e_848;
F->y_849 = y_849;
F->t_850 = t_850;
F->r_851 = r_851;
F->aty_2371 = NULL;
F->a_2372 = NULL;
F->ag_2373 = NULL;
F->it_2374 = NULL;
F->tail_2375 = NULL;
F->arg_2376 = NULL;
(*F->t_850) = (*(P116)rt_nil_check(F->y_849)).t_;
if (((G_NV((*(P173)rt_nil_check(F->e_848)).flag_) == ((rt_int)9LL)) || (f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_848)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P173)rt_nil_check(F->e_848)).flag_) == ((rt_int)9LL))) {
F->ag_2373 = (*(P173)rt_nil_check(F->e_848)).b_;
} else {
F->ag_2373 = f_nn_295(F->up, ((rt_int)12LL), G_NV((*(P173)rt_nil_check(F->e_848)).line_));
F->arg_2376 = (*(P173)rt_nil_check(F->e_848)).b_;
while ((F->arg_2376 != NULL)) {
F->it_2374 = f_nn_295(F->up, ((rt_int)13LL), G_NV((*(P173)rt_nil_check(F->e_848)).line_));
(*(P173)rt_nil_check(F->it_2374)).b_ = F->arg_2376;
if (((*(P173)rt_nil_check(F->arg_2376)).formal_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_848)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2375 == NULL)) {
(*(P173)rt_nil_check(F->ag_2373)).a_ = F->it_2374;
} else {
(*(P173)rt_nil_check(F->tail_2375)).next_ = F->it_2374;
}
F->tail_2375 = F->it_2374;
F->arg_2376 = (*(P173)rt_nil_check(F->arg_2376)).next_;
}
L_end_2377: ;
}
if ((G_NV((*(P173)rt_nil_check(F->ag_2373)).kind_) != ((rt_int)12LL))) {
f_gexpr_779(F->up, F->ag_2373, (*F->t_850), &F->aty_2371, &(*F->r_851));
f_check_type_472(F->up, F->aty_2371, (*F->t_850), G_NV((*(P173)rt_nil_check(F->e_848)).line_));
} else {
f_aggregate_925(F->up, F->ag_2373, (*F->t_850), &F->aty_2371, &(*F->r_851));
}
f_constrain_856(F->up, F->y_849, (*F->t_850), &(*F->r_851));
goto ret_;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_848)).b_, (*F->t_850), &F->aty_2371, &F->a_2372);
if ((((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)6LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2371)).kind_) == ((rt_int)6LL))) && (!f_same_429(F->up, (*F->t_850), F->aty_2371)))) {
f_array_conversion_863(F->up, F->e_848, (*F->t_850), F->aty_2371, (*(P116)rt_nil_check(F->y_849)).c_, (*(P139)rt_nil_check(F->a_2372)), &(*F->r_851));
goto ret_;
}
if ((f_is_numeric_436(F->up, (*F->t_850)) && f_is_numeric_436(F->up, F->aty_2371))) {
if (((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)1LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2371)).kind_) != ((rt_int)1LL)))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P139)rt_nil_check(F->a_2372))), one_rt_gstr(41)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)3LL)) && (G_NV((*(P121)rt_nil_check(F->aty_2371)).kind_) == ((rt_int)1LL)))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P139)rt_nil_check(F->a_2372))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)16LL)) && ((*(P121)rt_nil_check((*F->t_850))).fsmall_ != NULL))) {
if ((G_NV((*(P121)rt_nil_check(F->aty_2371)).kind_) == ((rt_int)1LL))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P139)rt_nil_check(F->a_2372))), rt_g_lit("), ", 3)), (*(P139)rt_nil_check((*(P121)rt_nil_check((*F->t_850))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P139)rt_nil_check(F->a_2372))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P121)rt_nil_check((*F->t_850))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_851) = F->a_2372;
}
} else if (((f_same_429(F->up, F->aty_2371, (*F->t_850)) || f_derived_from_434(F->up, F->aty_2371, (*F->t_850))) || f_derived_from_434(F->up, (*F->t_850), F->aty_2371))) {
(*F->r_851) = F->a_2372;
} else {
f_check_type_472(F->up, F->aty_2371, (*F->t_850), G_NV((*(P173)rt_nil_check(F->e_848)).line_));
(*F->r_851) = F->a_2372;
}
if (((((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)4LL))) || (G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)11LL))) && f_bounded_460(F->up, (*(P116)rt_nil_check(F->y_849)).c_))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check((*F->r_851)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_849)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_849)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_850))).kind_) == ((rt_int)16LL))) && f_bounded_460(F->up, (*(P116)rt_nil_check(F->y_849)).c_))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P139)rt_nil_check((*F->r_851)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_849)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_849)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_809(F->up, (*F->t_850))) {
(*F->r_851) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P139)rt_nil_check((*F->r_851)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_856(struct f_greenc_1fr *up_, P116 y_853, P121 t_854, P139 *r_855) {
  struct f_constrain_856fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_853 = y_853;
F->t_854 = t_854;
F->r_855 = r_855;
F->ct_2378 = NULL;
F->tmp_2379 = NULL;
if ((((*(P116)rt_nil_check(F->y_853)).c_ == NULL) || ((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_853)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P121)rt_nil_check(F->t_854)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_462(F->up, (*(P121)rt_nil_check(F->t_854)).tcons_)))) {
f_ctype_477(F->up, F->t_854, &F->ct_2378);
f_new_name_224(F->up, rt_g_lit("q", 1), &F->tmp_2379);
(*F->r_855) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2378))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2379))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check((*F->r_855)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_853)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_853)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P139)rt_nil_check(F->tmp_2379))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->tmp_2379))), rt_g_lit(".lo = l_; ", 10)), (*(P139)rt_nil_check(F->tmp_2379))), rt_g_lit(".hi = h_; ", 10)), (*(P139)rt_nil_check(F->tmp_2379))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_863(struct f_greenc_1fr *up_, P173 e_857, P121 t_858, P121 aty_859, P177 c_860, rt_gstr a_861, P139 *r_862) {
  struct f_array_conversion_863fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_857 = e_857;
F->t_858 = t_858;
F->aty_859 = aty_859;
F->c_860 = c_860;
F->a_861 = cp_rt_gstr(a_861);
F->r_862 = r_862;
F->x_2380 = NULL;
F->y_2381 = NULL;
F->ct_2382 = NULL;
F->act_2383 = NULL;
F->et_2384 = NULL;
F->tmp_2385 = NULL;
F->s_2386 = NULL;
F->x_2380 = F->t_858;
F->y_2381 = F->aty_859;
if ((G_NV((*(P121)rt_nil_check(F->t_858)).dims_) != G_NV((*(P121)rt_nil_check(F->aty_859)).dims_))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_857)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2389 = ((rt_int)1LL), hi2390 = G_NV((*(P121)rt_nil_check(F->t_858)).dims_);
for (rt_int it2391 = lo2389; it2391 <= hi2390; it2391++) {
F->k_2388 = it2391;
if ((!((f_same_429(F->up, (*(P121)rt_nil_check(F->x_2380)).idx_, (*(P121)rt_nil_check(F->y_2381)).idx_) || f_derived_from_434(F->up, (*(P121)rt_nil_check(F->x_2380)).idx_, (*(P121)rt_nil_check(F->y_2381)).idx_)) || f_derived_from_434(F->up, (*(P121)rt_nil_check(F->y_2381)).idx_, (*(P121)rt_nil_check(F->x_2380)).idx_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_857)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_468(F->up, F->aty_859)), rt_g_lit(" to ", 4)), f_kind_name_468(F->up, F->t_858)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2380 = (*(P121)rt_nil_check(F->x_2380)).elem_;
F->y_2381 = (*(P121)rt_nil_check(F->y_2381)).elem_;
}
}
L_end_2387: ;
if ((!((f_same_429(F->up, F->x_2380, F->y_2381) || f_derived_from_434(F->up, F->x_2380, F->y_2381)) || f_derived_from_434(F->up, F->y_2381, F->x_2380)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_857)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_468(F->up, F->aty_859)), rt_g_lit(" to ", 4)), f_kind_name_468(F->up, F->t_858)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_477(F->up, F->t_858, &F->ct_2382);
f_ctype_477(F->up, F->aty_859, &F->act_2383);
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_858)).elem_, &F->et_2384);
f_new_name_224(F->up, rt_g_lit("cv", 2), &F->tmp_2385);
(*F->r_862) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->act_2383))), rt_g_lit(" s_ = ", 6)), F->a_861), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->ct_2382))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit(".p = (", 6)), (*(P139)rt_nil_check(F->et_2384))), rt_g_lit(" *)s_.p; ", 9)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("; })", 4)));
if ((((*(P121)rt_nil_check(F->t_858)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_858)).tcons_)).hi_ != NULL))) {
(*F->r_862) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2382))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("x = ", 4)), (*(P139)rt_nil_check((*F->r_862)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_858)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P121)rt_nil_check(F->t_858)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_239(F->up)), rt_g_lit("array length", 12)), f_q_239(F->up)), rt_g_lit("); ", 3)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("x.lo = l_; ", 11)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("x.hi = h_; ", 11)), (*(P139)rt_nil_check(F->tmp_2385))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_868(struct f_greenc_1fr *up_, P173 e_864, P121 want_865, P121 *t_866, P139 *r_867) {
  struct f_gen_attr_868fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_864 = e_864;
F->want_865 = want_865;
F->t_866 = t_866;
F->r_867 = r_867;
F->a_2392 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_864)).name_)));
F->y_2393 = NULL;
F->tt_2394 = NULL;
F->aty_2395 = NULL;
F->v_2396 = NULL;
F->d_2397 = NULL;
F->c_2398 = NULL;
F->n_2399 = INT64_MIN;
F->ro_2400 = INT_MIN;
if ((((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1090(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_)).name_))))) {
f_member_attr_1156(F->up, F->e_864, &(*F->t_866), &(*F->r_867));
goto ret_;
}
if ((eq_rt_gstr(F->a_2392, rt_g_lit("ADDRESS", 7)) && f_is_object_727(F->up, (*(P173)rt_nil_check(F->e_864)).a_))) {
f_lvalue_735(F->up, (*(P173)rt_nil_check(F->e_864)).a_, &F->v_2396, &F->aty_2395, &F->c_2398, &F->ro_2400);
 (void)rt_range(F->ro_2400, 0, 1);
(*F->t_866) = F->up->ty_int_155;
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2392, rt_g_lit("COUNT", 5)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2393 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_)).name_)));
if ((((F->y_2393 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)10LL))) && ((*(P116)rt_nil_check(F->y_2393)).c_ != NULL))) {
if ((!f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_2393)).members_, F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_864)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1112(F->up, F->y_2393, rt_g_lit("", 0), &F->v_2396);
f_gexpr_779(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).b_, NULL, &F->aty_2395, &F->d_2397);
f_entry_family_slot_1127(F->up, F->y_2393, (*(P139)rt_nil_check(F->v_2396)), (*(P139)rt_nil_check(F->d_2397)), &F->v_2396);
(*F->t_866) = F->up->ty_int_155;
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P139)rt_nil_check(F->v_2396))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_))) {
F->y_2393 = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)), G_NV((*(P173)rt_nil_check(F->e_864)).line_));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2393 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)));
if (((F->y_2393 == NULL) && (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_890(F->up, F->e_864, &(*F->t_866), &(*F->r_867));
goto ret_;
}
if (((eq_rt_gstr(F->a_2392, rt_g_lit("ADDRESS", 7)) && (F->y_2393 != NULL)) && ((((G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)4LL)) || (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)3LL))) || (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)8LL))) || (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)9LL))))) {
(*F->t_866) = F->up->ty_int_155;
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_407(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2393)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P116)rt_nil_check(F->y_2393)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2393 == NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2392, rt_g_lit("CLOCK", 5)))) {
(*F->t_866) = F->up->ty_time_170;
(*F->r_867) = f_mk_221(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2393 == NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_864)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2392, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2392, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_866) = F->up->ty_int_155;
if (eq_rt_gstr(F->a_2392, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2393 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) == ((rt_int)5LL)))) {
F->tt_2394 = (*(P116)rt_nil_check(F->y_2393)).t_;
F->c_2398 = (*(P116)rt_nil_check(F->y_2393)).c_;
if (eq_rt_gstr(F->a_2392, rt_g_lit("SIZE", 4))) {
(*F->t_866) = F->up->ty_int_155;
f_type_bits_872(F->up, F->tt_2394, F->c_2398, &(*F->r_867));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2392, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2392, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2392, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2392, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2392, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2392, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2392, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2392, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2392, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_882(F->up, F->e_864, F->tt_2394, F->c_2398, &(*F->t_866), &(*F->r_867));
goto ret_;
}
if (eq_rt_gstr(F->a_2392, rt_g_lit("ORD", 3))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_864)).b_, F->tt_2394, &F->aty_2395, &F->v_2396);
f_check_type_472(F->up, F->aty_2395, F->tt_2394, G_NV((*(P173)rt_nil_check(F->e_864)).line_));
(*F->t_866) = F->up->ty_int_155;
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2392, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2392, rt_g_lit("REP", 3)))) {
f_val_rep_915(F->up, F->e_864, F->tt_2394, F->c_2398, &(*F->t_866), &(*F->r_867));
goto ret_;
} else if ((eq_rt_gstr(F->a_2392, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2392, rt_g_lit("PRED", 4)))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_864)).b_, F->tt_2394, &F->aty_2395, &F->v_2396);
(*F->t_866) = F->tt_2394;
if ((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2392, rt_g_lit("SUCC", 4))) {
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2392, rt_g_lit("SUCC", 4))) {
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit(" + 1, ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2398)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2398)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_867) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2396))), rt_g_lit(" - 1, ", 6)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2398)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_2398)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2392, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2392, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_906(F->up, F->e_864, F->tt_2394, F->c_2398, &(*F->t_866), &(*F->r_867));
goto ret_;
} else if ((eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2392, rt_g_lit("LAST", 4)))) {
(*F->t_866) = F->tt_2394;
if (f_bounded_460(F->up, F->c_2398)) {
if (eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5))) {
(*F->r_867) = (*(P177)rt_nil_check(F->c_2398)).lo_;
} else {
(*F->r_867) = (*(P177)rt_nil_check(F->c_2398)).hi_;
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5))) {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)3LL)) && (f_root_431(F->up, F->tt_2394) == F->up->ty_sfloat_168))) {
if (eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5))) {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5))) {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_867) = f_mk_221(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_864)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2392));
}
goto ret_;
}
f_other_attr_1152(F->up, F->e_864, F->y_2393, &(*F->t_866), &(*F->r_867));
goto ret_;
}
if (((F->y_2393 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) != ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->y_2393)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1152(F->up, F->e_864, F->y_2393, &(*F->t_866), &(*F->r_867));
goto ret_;
}
if (((eq_rt_gstr(F->a_2392, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2392, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2392, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_886(F->up, F->e_864, &(*F->t_866), &(*F->r_867));
goto ret_;
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_864)).a_, NULL, &F->tt_2394, &F->v_2396);
if (eq_rt_gstr(F->a_2392, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_864)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_866) = F->up->ty_int_155;
(*F->r_867) = f_mk_221(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2392, rt_g_lit("SIZE", 4))) {
(*F->t_866) = F->up->ty_int_155;
f_object_bits_876(F->up, F->tt_2394, (*(P139)rt_nil_check(F->v_2396)), &(*F->r_867));
goto ret_;
}
if ((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_591(F->up, F->tt_2394);
f_deref_725(F->up, (*(P139)rt_nil_check(F->v_2396)), F->tt_2394, &F->d_2397);
F->v_2396 = F->d_2397;
F->tt_2394 = (*(P121)rt_nil_check(F->tt_2394)).target_;
}
(*F->t_866) = F->up->ty_int_155;
if (((G_NV((*(P121)rt_nil_check(F->tt_2394)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2392, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2392, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2392, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_900(F->up, F->e_864, F->tt_2394, (*(P139)rt_nil_check(F->v_2396)), &(*F->t_866), &(*F->r_867));
goto ret_;
}
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_864)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2392), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_872(struct f_greenc_1fr *up_, P121 t_869, P177 c_870, P139 *r_871) {
  struct f_type_bits_872fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_869 = t_869;
F->c_870 = c_870;
F->r_871 = r_871;
F->ct_2401 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_460(F->up, F->c_870))) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_869)).elem_, &F->ct_2401);
(*F->r_871) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_870)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_870)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P139)rt_nil_check(F->ct_2401))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)11LL)) || (G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)2LL)))) {
(*F->r_871) = f_mk_221(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_301(F->up, (*(P121)rt_nil_check(F->t_869)).lits_) <= ((rt_int)256LL))) {
(*F->r_871) = f_mk_221(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_871) = f_mk_221(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)1LL)) && (f_root_431(F->up, F->t_869) == F->up->ty_short_166))) {
(*F->r_871) = f_mk_221(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P121)rt_nil_check(F->t_869)).kind_) == ((rt_int)3LL)) && (f_root_431(F->up, F->t_869) == F->up->ty_sfloat_168))) {
(*F->r_871) = f_mk_221(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_477(F->up, F->t_869, &F->ct_2401);
(*F->r_871) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P139)rt_nil_check(F->ct_2401))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_876(struct f_greenc_1fr *up_, P121 t_873, rt_gstr v_874, P139 *r_875) {
  struct f_object_bits_876fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_873 = t_873;
F->v_874 = cp_rt_gstr(v_874);
F->r_875 = r_875;
F->ct_2402 = NULL;
F->et_2403 = NULL;
if ((G_NV((*(P121)rt_nil_check(F->t_873)).kind_) == ((rt_int)6LL))) {
f_ctype_477(F->up, F->t_873, &F->ct_2402);
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->t_873)).elem_, &F->et_2403);
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2402))), rt_g_lit(" sz_ = ", 7)), F->v_874), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P139)rt_nil_check(F->et_2403))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_872(F->up, F->t_873, NULL, &(*F->r_875));
(*F->r_875) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_874), rt_g_lit("); ", 3)), (*(P139)rt_nil_check((*F->r_875)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_882(struct f_greenc_1fr *up_, P173 e_877, P121 tt_878, P177 c_879, P121 *t_880, P139 *r_881) {
  struct f_numeric_attr_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_877 = e_877;
F->tt_878 = tt_878;
F->c_879 = c_879;
F->t_880 = t_880;
F->r_881 = r_881;
F->a_2404 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_877)).name_)));
F->short_2405 = INT_MIN;
F->short_2405 = (f_root_431(F->up, F->tt_878) == F->up->ty_sfloat_168);
(*F->t_880) = F->up->ty_int_155;
if (eq_rt_gstr(F->a_2404, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P121)rt_nil_check(F->tt_878)).kind_) != ((rt_int)8LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_436(F->up, F->tt_878))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_878)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2404, rt_g_lit("DIGITS", 6))) {
if (((F->c_879 != NULL) && ((*(P177)rt_nil_check(F->c_879)).acc_ != NULL))) {
(*F->r_881) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_881) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P121)rt_nil_check(F->tt_878)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2405)) {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2405)) {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2405)) {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("SMALL", 5))) {
(*F->t_880) = F->tt_878;
if (G_NV(F->short_2405)) {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("LARGE", 5))) {
(*F->t_880) = F->tt_878;
if (G_NV(F->short_2405)) {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_881) = f_mk_221(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P121)rt_nil_check(F->tt_878)).kind_) == ((rt_int)16LL)) && ((*(P121)rt_nil_check(F->tt_878)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2404, rt_g_lit("DELTA", 5))) {
(*F->t_880) = F->tt_878;
if (((F->c_879 != NULL) && ((*(P177)rt_nil_check(F->c_879)).acc_ != NULL))) {
(*F->r_881) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_881) = (*(P121)rt_nil_check(F->tt_878)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("SMALL", 5))) {
(*F->t_880) = F->tt_878;
(*F->r_881) = (*(P121)rt_nil_check(F->tt_878)).fsmall_;
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("LARGE", 5))) {
(*F->t_880) = F->tt_878;
(*F->r_881) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->tt_878)).fsmall_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2404, rt_g_lit("BITS", 4))) {
(*F->r_881) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->tt_878)).fsmall_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_879)).hi_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), cat_rt_gstr(F->a_2404, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_877)).line_), cat_rt_gstr(F->a_2404, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_886(struct f_greenc_1fr *up_, P173 e_883, P121 *t_884, P139 *r_885) {
  struct f_component_attr_886fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_883 = e_883;
F->t_884 = t_884;
F->r_885 = r_885;
F->bt_2406 = NULL;
F->v_2407 = NULL;
F->ct_2408 = NULL;
F->f_2409 = NULL;
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_883)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_883)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_883)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_883)).a_)).a_, NULL, &F->bt_2406, &F->v_2407);
if ((G_NV((*(P121)rt_nil_check(F->bt_2406)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_591(F->up, F->bt_2406);
F->bt_2406 = (*(P121)rt_nil_check(F->bt_2406)).target_;
}
if ((G_NV((*(P121)rt_nil_check(F->bt_2406)).kind_) != ((rt_int)7LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_883)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_883)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2409 = (*(P121)rt_nil_check(F->bt_2406)).fields_;
while (((F->f_2409 != NULL) && (!eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2409)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_883)).a_)).name_)))))) {
F->f_2409 = (*(P1779)rt_nil_check(F->f_2409)).next_;
}
L_end_2410: ;
if ((F->f_2409 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_883)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_468(F->up, F->bt_2406), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_883)).a_)).name_))));
}
f_ctype_477(F->up, F->bt_2406, &F->ct_2408);
(*F->t_884) = F->up->ty_int_155;
f_component_place_544(F->up, F->bt_2406, F->f_2409, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_883)).name_)), (*(P139)rt_nil_check(F->ct_2408)), &(*F->r_885));
ret_:

  return;
}

static void f_config_attr_890(struct f_greenc_1fr *up_, P173 e_887, P121 *t_888, P139 *r_889) {
  struct f_config_attr_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_887 = e_887;
F->t_888 = t_888;
F->r_889 = r_889;
F->a_2411 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_887)).name_)));
F->p_2412 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_887)).a_)).name_)));
F->nm_2413 = NULL;
F->nm_2413 = F->up->conf_system_216;
(*F->t_888) = F->up->ty_int_155;
if (eq_rt_gstr(F->p_2412, rt_g_lit("OPTION", 6))) {
(*F->t_888) = F->up->ty_bool_156;
if (eq_rt_gstr(F->a_2411, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_219 != NULL) && eq_rt_gstr((*(P139)rt_nil_check(F->up->conf_optimize_219)), rt_g_lit("TIME", 4)))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_219 != NULL) && eq_rt_gstr((*(P139)rt_nil_check(F->up->conf_optimize_219)), rt_g_lit("SPACE", 5)))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("1", 1));
} else {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_887)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("CLOCK", 5))) {
(*F->t_888) = F->up->ty_time_170;
(*F->r_889) = f_mk_221(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("NAME", 4))) {
if ((F->nm_2413 == NULL)) {
F->nm_2413 = f_mk_221(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_888) = F->up->ty_string_159;
(*F->r_889) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_764(F->up, (*(P139)rt_nil_check(F->nm_2413)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2415 = (*(P139)rt_nil_check(F->nm_2413)); at2415.hi >= at2415.lo ? at2415.hi - at2415.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_889) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_217)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_889) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_218)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("MAX_INT", 7))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2411, rt_g_lit("MIN_INT", 7))) {
(*F->r_889) = f_mk_221(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_887)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2411), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_894(struct f_greenc_1fr *up_, P173 e_891, P121 arrt_892, rt_int *n_893) {
  struct f_attr_dim_894fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_891 = e_891;
F->arrt_892 = arrt_892;
F->n_893 = n_893;
F->ok_2416 = INT_MIN;
(*F->n_893) = ((rt_int)1LL);
if (((*(P173)rt_nil_check(F->e_891)).b_ != NULL)) {
f_manifest_489(F->up, (*(P173)rt_nil_check(F->e_891)).b_, &(*F->n_893), &F->ok_2416);
 (void)rt_range(F->ok_2416, 0, 1);
if ((!G_NV(F->ok_2416))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_891)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_891)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_893)) < ((rt_int)1LL)) || (G_NV((*F->n_893)) > G_NV((*(P121)rt_nil_check(F->arrt_892)).dims_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_891)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_468(F->up, F->arrt_892), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_893))))));
}
ret_:

  return;
}

static void f_object_array_attr_900(struct f_greenc_1fr *up_, P173 e_895, P121 arrt_896, rt_gstr v_897, P121 *t_898, P139 *r_899) {
  struct f_object_array_attr_900fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_895 = e_895;
F->arrt_896 = arrt_896;
F->v_897 = cp_rt_gstr(v_897);
F->t_898 = t_898;
F->r_899 = r_899;
F->n_2417 = INT64_MIN;
F->it_2418 = NULL;
F->it_2418 = F->arrt_896;
F->ct_2419 = NULL;
F->tmp_2420 = NULL;
F->p_2421 = NULL;
F->lo_2422 = NULL;
F->hi_2423 = NULL;
f_attr_dim_894(F->up, F->e_895, F->arrt_896, &F->n_2417);
f_ctype_477(F->up, F->arrt_896, &F->ct_2419);
f_new_name_224(F->up, rt_g_lit("at", 2), &F->tmp_2420);
F->p_2421 = F->tmp_2420;
{ rt_int lo2426 = ((rt_int)2LL), hi2427 = G_NV(F->n_2417);
for (rt_int it2428 = lo2426; it2428 <= hi2427; it2428++) {
F->k_2425 = it2428;
F->it_2418 = (*(P121)rt_nil_check(F->it_2418)).elem_;
}
}
L_end_2424: ;
if ((G_NV(F->n_2417) == ((rt_int)1LL))) {
F->lo_2422 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2421)), rt_g_lit(".lo", 3)));
F->hi_2423 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2421)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2431 = ((rt_int)3LL), hi2432 = G_NV(F->n_2417);
for (rt_int it2433 = lo2431; it2433 <= hi2432; it2433++) {
F->k_2430 = it2433;
F->p_2421 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2421)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2429: ;
F->lo_2422 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2421)), rt_g_lit(".lo2", 4)));
F->hi_2423 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->p_2421)), rt_g_lit(".hi2", 4)));
}
(*F->t_898) = (*(P121)rt_nil_check(F->it_2418)).idx_;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_895)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_899) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2419))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2420))), rt_g_lit(" = ", 3)), F->v_897), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->lo_2422))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_895)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_899) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2419))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2420))), rt_g_lit(" = ", 3)), F->v_897), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2423))), rt_g_lit("; })", 4)));
} else {
(*F->t_898) = F->up->ty_int_155;
(*F->r_899) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2419))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2420))), rt_g_lit(" = ", 3)), F->v_897), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2423))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2422))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2423))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2422))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_906(struct f_greenc_1fr *up_, P173 e_901, P121 arrt_902, P177 c_903, P121 *t_904, P139 *r_905) {
  struct f_type_array_attr_906fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_901 = e_901;
F->arrt_902 = arrt_902;
F->c_903 = c_903;
F->t_904 = t_904;
F->r_905 = r_905;
F->n_2434 = INT64_MIN;
F->it_2435 = NULL;
F->it_2435 = F->arrt_902;
F->cc_2436 = NULL;
F->cc_2436 = F->c_903;
f_attr_dim_894(F->up, F->e_901, F->arrt_902, &F->n_2434);
{ rt_int lo2439 = ((rt_int)2LL), hi2440 = G_NV(F->n_2434);
for (rt_int it2441 = lo2439; it2441 <= hi2440; it2441++) {
F->k_2438 = it2441;
F->it_2435 = (*(P121)rt_nil_check(F->it_2435)).elem_;
if ((F->cc_2436 != NULL)) {
F->cc_2436 = (*(P177)rt_nil_check(F->cc_2436)).inner_;
}
}
}
L_end_2437: ;
if (((F->cc_2436 == NULL) || ((*(P177)rt_nil_check(F->cc_2436)).lo_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_901)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_468(F->up, F->arrt_902)), rt_g_lit(" are not known here: ", 21)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_901)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_904) = (*(P121)rt_nil_check(F->it_2435)).idx_;
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_901)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_905) = (*(P177)rt_nil_check(F->cc_2436)).lo_;
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_901)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_905) = (*(P177)rt_nil_check(F->cc_2436)).hi_;
} else {
(*F->t_904) = F->up->ty_int_155;
(*F->r_905) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->cc_2436)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->cc_2436)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_909(struct f_greenc_1fr *up_, P121 t_907, P139 *r_908) {
  struct f_lit_table_909fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_907 = t_907;
F->r_908 = r_908;
F->l_2442 = NULL;
F->l_2442 = (*(P121)rt_nil_check(F->t_907)).lits_;
F->s_2443 = NULL;
F->s_2443 = f_mk_221(F->up, rt_g_lit("", 0));
if (((*(P121)rt_nil_check(F->t_907)).littab_ == NULL)) {
f_new_name_224(F->up, rt_g_lit("lits", 4), &(*(P121)rt_nil_check(F->t_907)).littab_);
while ((F->l_2442 != NULL)) {
if ((({ rt_gstr at2445 = (*(P139)rt_nil_check(F->s_2443)); at2445.hi >= at2445.lo ? at2445.hi - at2445.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2443 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2443)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P173)rt_nil_check(F->l_2442)).kind_) == ((rt_int)3LL))) {
F->s_2443 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2443)), f_c_string_764(F->up, cat_rt_gstr(cat_rt_gstr(f_q_239(F->up), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_2442)).name_))), f_q_239(F->up)))));
} else {
F->s_2443 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->s_2443)), f_c_string_764(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->l_2442)).name_)))));
}
F->l_2442 = (*(P173)rt_nil_check(F->l_2442)).next_;
}
L_end_2444: ;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P139)rt_nil_check((*(P121)rt_nil_check(F->t_907)).littab_))), rt_g_lit("[] = {", 6)), (*(P139)rt_nil_check(F->s_2443))), rt_g_lit("};", 2)));
}
(*F->r_908) = (*(P121)rt_nil_check(F->t_907)).littab_;
ret_:

  return;
}

static void f_val_rep_915(struct f_greenc_1fr *up_, P173 e_910, P121 tt_911, P177 c_912, P121 *t_913, P139 *r_914) {
  struct f_val_rep_915fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_910 = e_910;
F->tt_911 = tt_911;
F->c_912 = c_912;
F->t_913 = t_913;
F->r_914 = r_914;
F->aty_2446 = NULL;
F->v_2447 = NULL;
F->lt_2448 = NULL;
F->n_2449 = INT64_MIN;
if (((*(P173)rt_nil_check(F->e_910)).b_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_910)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_910)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_910)).b_, F->tt_911, &F->aty_2446, &F->v_2447);
f_check_type_472(F->up, F->aty_2446, F->tt_911, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
(*F->t_913) = F->up->ty_string_159;
if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)1LL))) {
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)3LL))) {
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)2LL))) {
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)11LL))) {
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)4LL))) {
f_lit_table_909(F->up, F->tt_911, &F->lt_2448);
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lt_2448))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_301(F->up, (*(P121)rt_nil_check(F->tt_911)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P139)rt_nil_check((*F->r_914)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_913) = F->tt_911;
if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)1LL))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_910)).b_, F->up->ty_string_159, &F->aty_2446, &F->v_2447);
f_check_type_472(F->up, F->aty_2446, F->up->ty_string_159, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit("))", 2)));
if (f_bounded_460(F->up, F->c_912)) {
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check((*F->r_914)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_912)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_912)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)3LL))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_910)).b_, F->up->ty_string_159, &F->aty_2446, &F->v_2447);
f_check_type_472(F->up, F->aty_2446, F->up->ty_string_159, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)2LL)) || (G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)11LL))) || (G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)4LL)))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_910)).b_, NULL, &F->aty_2446, &F->v_2447);
if (f_is_string_554(F->up, F->aty_2446)) {
F->v_2447 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)2LL))) {
F->v_2447 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->tt_911)).kind_) == ((rt_int)11LL))) {
F->v_2447 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P139)rt_nil_check(F->v_2447))), one_rt_gstr(41)));
} else {
f_lit_table_909(F->up, F->tt_911, &F->lt_2448);
F->v_2447 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lt_2448))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_301(F->up, (*(P121)rt_nil_check(F->tt_911)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_472(F->up, F->aty_2446, F->up->ty_int_155, G_NV((*(P173)rt_nil_check(F->e_910)).line_));
F->v_2447 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit(" - 1)", 5)));
}
(*F->r_914) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2447))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_912)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_912)).hi_))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_910)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_920(struct f_greenc_1fr *up_, P173 e_916, P121 want_917, P121 *t_918, P139 *r_919) {
  struct f_allocator_920fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_916 = e_916;
F->want_917 = want_917;
F->t_918 = t_918;
F->r_919 = r_919;
F->y_2450 = NULL;
F->y_2450 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_916)).name_)));
F->target_2451 = NULL;
F->vt_2452 = NULL;
F->ct_2453 = NULL;
F->pt_2454 = NULL;
F->cell_2455 = NULL;
F->v_2456 = NULL;
F->x_2457 = NULL;
if (((F->want_917 == NULL) || (G_NV((*(P121)rt_nil_check(F->want_917)).kind_) != ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_916)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2450 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2450)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_916)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_916)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_591(F->up, F->want_917);
F->target_2451 = (*(P121)rt_nil_check(F->want_917)).target_;
if ((!f_same_429(F->up, (*(P116)rt_nil_check(F->y_2450)).t_, F->want_917))) {
f_check_type_472(F->up, (*(P116)rt_nil_check(F->y_2450)).t_, F->target_2451, G_NV((*(P173)rt_nil_check(F->e_916)).line_));
}
f_ctype_477(F->up, F->target_2451, &F->ct_2453);
f_ctype_477(F->up, F->want_917, &F->pt_2454);
f_new_name_224(F->up, rt_g_lit("cell", 4), &F->cell_2455);
if (((*(P173)rt_nil_check(F->e_916)).a_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_916)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_210 != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_916)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_916)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_925(F->up, (*(P173)rt_nil_check(F->e_916)).a_, F->target_2451, &F->vt_2452, &F->v_2456);
} else {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_916)).a_, F->target_2451, &F->vt_2452, &F->v_2456);
}
f_check_type_472(F->up, F->vt_2452, F->target_2451, G_NV((*(P173)rt_nil_check(F->e_916)).line_));
f_copy_code_607(F->up, F->target_2451, (*(P139)rt_nil_check(F->v_2456)), &F->x_2457);
(*F->t_918) = F->want_917;
(*F->r_919) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2453))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check(F->cell_2455))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P139)rt_nil_check(F->ct_2453))), rt_g_lit(")); *", 5)), (*(P139)rt_nil_check(F->cell_2455))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2457))), rt_g_lit("; (", 3)), (*(P139)rt_nil_check(F->pt_2454))), one_rt_gstr(41)), (*(P139)rt_nil_check(F->cell_2455))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_925(struct f_greenc_1fr *up_, P173 e_921, P121 want_922, P121 *t_923, P139 *r_924) {
  struct f_aggregate_925fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_921 = e_921;
F->want_922 = want_922;
F->t_923 = t_923;
F->r_924 = r_924;
F->b_2458 = NULL;
F->b_2458 = F->up->agg_bounds_180;
F->up->agg_bounds_180 = NULL;
if ((F->want_922 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_921)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_923) = F->want_922;
if ((G_NV((*(P121)rt_nil_check(F->want_922)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_947(F->up, F->e_921, F->want_922, &(*F->r_924));
} else if ((G_NV((*(P121)rt_nil_check(F->want_922)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_965(F->up, F->e_921, F->want_922, F->b_2458, &(*F->r_924));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_921)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_468(F->up, F->want_922)));
}
ret_:

  return;
}

static void f_captured_928(struct f_greenc_1fr *up_, P125 b_926, P139 *r_927) {
  struct f_captured_928fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_926 = b_926;
F->r_927 = r_927;
F->l_2459 = NULL;
F->l_2459 = (*(P125)rt_nil_check(F->b_926)).head_;
(*F->r_927) = f_mk_221(F->up, rt_g_lit("", 0));
while ((F->l_2459 != NULL)) {
(*F->r_927) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_927))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_2459)).s_))));
F->l_2459 = (*(P150)rt_nil_check(F->l_2459)).next_;
}
L_end_2460: ;
ret_:

  return;
}

static P1779 f_field_at_931(struct f_greenc_1fr *up_, P121 rt_929, rt_int k_930) {
  struct f_field_at_931fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_929 = rt_929;
F->k_930 = k_930;
F->f_2461 = NULL;
F->f_2461 = (*(P121)rt_nil_check(F->rt_929)).fields_;
{ rt_int lo2464 = ((rt_int)2LL), hi2465 = F->k_930;
for (rt_int it2466 = lo2464; it2466 <= hi2465; it2466++) {
F->i_2463 = it2466;
F->f_2461 = (*(P1779)rt_nil_check(F->f_2461)).next_;
}
}
L_end_2462: ;
F->result_ = F->f_2461;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_934(struct f_greenc_1fr *up_, P173 x_932, P1779 f_933) {
  struct f_names_field_934fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_932 = x_932;
F->f_933 = f_933;
if ((G_NV((*(P173)rt_nil_check(F->x_932)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_932)).name_)), (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_933)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P173 f_item_for_939(struct f_greenc_1fr *up_, P173 e_935, P121 rt_936, rt_int k_937, rt_int p_938) {
  struct f_item_for_939fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_935 = e_935;
F->rt_936 = rt_936;
F->k_937 = k_937;
F->p_938 = p_938;
F->it_2467 = NULL;
F->it_2467 = (*(P173)rt_nil_check(F->e_935)).a_;
F->lab_2468 = NULL;
F->n_2469 = INT64_MIN;
F->n_2469 = ((rt_int)0LL);
while ((F->it_2467 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2467)).a_ == NULL)) {
F->n_2469 = rt_add(G_NV(F->n_2469), ((rt_int)1LL));
if ((G_NV(F->n_2469) == F->p_938)) {
F->result_ = (*(P173)rt_nil_check(F->it_2467)).b_;
goto ret_;
}
} else {
F->lab_2468 = (*(P173)rt_nil_check(F->it_2467)).a_;
while ((F->lab_2468 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->lab_2468)).flag_) == ((rt_int)1LL)) || f_names_field_934(F->up, (*(P173)rt_nil_check(F->lab_2468)).a_, f_field_at_931(F->up, F->rt_936, F->k_937)))) {
F->result_ = (*(P173)rt_nil_check(F->it_2467)).b_;
goto ret_;
}
F->lab_2468 = (*(P173)rt_nil_check(F->lab_2468)).next_;
}
L_end_2471: ;
}
F->it_2467 = (*(P173)rt_nil_check(F->it_2467)).next_;
}
L_end_2470: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_943(struct f_greenc_1fr *up_, P173 arm_940, rt_int v_941, int *res_942) {
  struct f_arm_holds_943fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_940 = arm_940;
F->v_941 = v_941;
F->res_942 = res_942;
F->l_2472 = NULL;
F->l_2472 = (*(P173)rt_nil_check(F->arm_940)).a_;
F->lo_2473 = INT64_MIN;
F->hi_2474 = INT64_MIN;
F->ok_2475 = INT_MIN;
(*F->res_942) = 0;
while ((F->l_2472 != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->l_2472)).a_, &F->lo_2473, &F->ok_2475);
 (void)rt_range(F->ok_2475, 0, 1);
F->hi_2474 = G_NV(F->lo_2473);
if (((*(P173)rt_nil_check(F->l_2472)).b_ != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->l_2472)).b_, &F->hi_2474, &F->ok_2475);
 (void)rt_range(F->ok_2475, 0, 1);
}
if (((F->v_941 >= G_NV(F->lo_2473)) && (F->v_941 <= G_NV(F->hi_2474)))) {
(*F->res_942) = 1;
}
F->l_2472 = (*(P173)rt_nil_check(F->l_2472)).next_;
}
L_end_2476: ;
ret_:

  return;
}

static void f_record_aggregate_947(struct f_greenc_1fr *up_, P173 e_944, P121 rt_945, P139 *r_946) {
  struct f_record_aggregate_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_944 = e_944;
F->rt_945 = rt_945;
F->r_946 = r_946;
F->it_2477 = NULL;
F->it_2477 = (*(P173)rt_nil_check(F->e_944)).a_;
F->lab_2478 = NULL;
F->vn_2479 = NULL;
F->a_2480 = NULL;
F->f_2481 = NULL;
F->g_2482 = NULL;
F->n_2483 = INT64_MIN;
F->n_2483 = f_field_count_474(F->up, F->rt_945);
F->done_2485.lo = ((rt_int)1LL); F->done_2485.hi = ((rt_int)200LL);
F->done_2485.lo2 = 1; F->done_2485.hi2 = 1;
F->done_2485.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2485));
for (rt_int i2486 = 0; i2486 < G_CNT(F->done_2485); i2486++) F->done_2485.p[i2486] = INT_MIN;
F->active_2487.lo = ((rt_int)1LL); F->active_2487.hi = ((rt_int)200LL);
F->active_2487.lo2 = 1; F->active_2487.hi2 = 1;
F->active_2487.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2487));
for (rt_int i2488 = 0; i2488 < G_CNT(F->active_2487); i2488++) F->active_2487.p[i2488] = INT_MIN;
F->dvs_2490.lo = ((rt_int)1LL); F->dvs_2490.hi = ((rt_int)200LL);
F->dvs_2490.lo2 = 1; F->dvs_2490.hi2 = 1;
F->dvs_2490.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2490));
for (rt_int i2491 = 0; i2491 < G_CNT(F->dvs_2490); i2491++) F->dvs_2490.p[i2491] = INT64_MIN;
F->order_2493.lo = ((rt_int)1LL); F->order_2493.hi = ((rt_int)200LL);
F->order_2493.lo2 = 1; F->order_2493.hi2 = 1;
F->order_2493.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2493));
for (rt_int i2494 = 0; i2494 < G_CNT(F->order_2493); i2494++) F->order_2493.p[i2494] = INT64_MIN;
F->norder_2495 = INT64_MIN;
F->norder_2495 = ((rt_int)0LL);
F->nung_2496 = INT64_MIN;
F->nung_2496 = ((rt_int)0LL);
F->k_2497 = INT64_MIN;
F->k_2497 = ((rt_int)0LL);
F->d_2498 = INT64_MIN;
F->d_2498 = ((rt_int)0LL);
F->npos_2499 = INT64_MIN;
F->npos_2499 = ((rt_int)0LL);
F->saved_2500 = NULL;
F->saved_2500 = F->up->code_135;
F->ct_2501 = NULL;
F->tmp_2502 = NULL;
F->parts_2503 = NULL;
F->named_2504 = INT_MIN;
F->named_2504 = 0;
F->ok_2505 = INT_MIN;
F->ok_2505 = 0;
F->holds_2506 = INT_MIN;
F->holds_2506 = 0;
if ((G_NV((*(P121)rt_nil_check(F->rt_945)).priv_) && (!f_inside_package_1024(F->up, (*(P121)rt_nil_check(F->rt_945)).decl_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_468(F->up, F->rt_945)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2483) > ((rt_int)200LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2481 = (*(P121)rt_nil_check(F->rt_945)).fields_;
{ rt_int lo2509 = ((rt_int)1LL), hi2510 = G_NV(F->n_2483);
for (rt_int it2511 = lo2509; it2511 <= hi2510; it2511++) {
F->i_2508 = it2511;
(*({ A2484 *ix2512 = &(F->done_2485); &ix2512->p[rt_index(F->i_2508, ix2512->lo, ix2512->hi) - ix2512->lo]; })) = 0;
(*({ A2484 *ix2513 = &(F->active_2487); &ix2513->p[rt_index(F->i_2508, ix2513->lo, ix2513->hi) - ix2513->lo]; })) = ((*(P1779)rt_nil_check(F->f_2481)).guard_ == NULL);
if (G_NV(({ A2484 ix2514 = F->active_2487; ix2514.p[rt_index(F->i_2508, ix2514.lo, ix2514.hi) - ix2514.lo]; }))) {
F->norder_2495 = rt_add(G_NV(F->norder_2495), ((rt_int)1LL));
(*({ A2492 *ix2515 = &(F->order_2493); &ix2515->p[rt_index(G_NV(F->norder_2495), ix2515->lo, ix2515->hi) - ix2515->lo]; })) = F->i_2508;
}
F->f_2481 = (*(P1779)rt_nil_check(F->f_2481)).next_;
}
}
L_end_2507: ;
F->nung_2496 = G_NV(F->norder_2495);
{ rt_int lo2518 = ((rt_int)1LL), hi2519 = G_NV(F->nung_2496);
for (rt_int it2520 = lo2518; it2520 <= hi2519; it2520++) {
F->p_2517 = it2520;
F->f_2481 = f_field_at_931(F->up, F->rt_945, G_NV(({ A2492 ix2522 = F->order_2493; ix2522.p[rt_index(F->p_2517, ix2522.lo, ix2522.hi) - ix2522.lo]; })));
if (G_NV((*(P1779)rt_nil_check(F->f_2481)).is_discr_)) {
F->vn_2479 = f_item_for_939(F->up, F->e_944, F->rt_945, G_NV(({ A2492 ix2524 = F->order_2493; ix2524.p[rt_index(F->p_2517, ix2524.lo, ix2524.hi) - ix2524.lo]; })), F->p_2517);
if ((F->vn_2479 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2481)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_960(F->up, F->vn_2479, &(*({ A2489 *ix2528 = &(F->dvs_2490); &ix2528->p[rt_index(G_NV(({ A2492 ix2527 = F->order_2493; ix2527.p[rt_index(F->p_2517, ix2527.lo, ix2527.hi) - ix2527.lo]; })), ix2528->lo, ix2528->hi) - ix2528->lo]; })), &F->ok_2505);
 (void)rt_range(F->ok_2505, 0, 1);
if (((!G_NV(F->ok_2505)) && f_is_enum_lit_762(F->up, F->vn_2479))) {
F->ok_2505 = 1;
(*({ A2489 *ix2530 = &(F->dvs_2490); &ix2530->p[rt_index(G_NV(({ A2492 ix2529 = F->order_2493; ix2529.p[rt_index(F->p_2517, ix2529.lo, ix2529.hi) - ix2529.lo]; })), ix2530->lo, ix2530->hi) - ix2530->lo]; })) = G_NV((*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->vn_2479)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2505)) && ((*(P121)rt_nil_check(F->rt_945)).fields_ != NULL))) {
F->g_2482 = NULL;
F->d_2498 = ((rt_int)0LL);
F->a_2480 = NULL;
F->f_2481 = (*(P121)rt_nil_check(F->rt_945)).fields_;
while ((F->f_2481 != NULL)) {
F->g_2482 = (*(P1779)rt_nil_check(F->f_2481)).guard_;
while ((F->g_2482 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1904)rt_nil_check(F->g_2482)).disc_)), (*(P139)rt_nil_check((*(P1779)rt_nil_check(f_field_at_931(F->up, F->rt_945, G_NV(({ A2492 ix2534 = F->order_2493; ix2534.p[rt_index(F->p_2517, ix2534.lo, ix2534.hi) - ix2534.lo]; }))))).name_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P139)rt_nil_check((*(P1904)rt_nil_check(F->g_2482)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2482 = (*(P1904)rt_nil_check(F->g_2482)).next_;
}
L_end_2532: ;
F->f_2481 = (*(P1779)rt_nil_check(F->f_2481)).next_;
}
L_end_2531: ;
}
}
}
}
L_end_2516: ;
F->f_2481 = (*(P121)rt_nil_check(F->rt_945)).fields_;
{ rt_int lo2537 = ((rt_int)1LL), hi2538 = G_NV(F->n_2483);
for (rt_int it2539 = lo2537; it2539 <= hi2538; it2539++) {
F->i_2536 = it2539;
if (((*(P1779)rt_nil_check(F->f_2481)).guard_ != NULL)) {
F->holds_2506 = 1;
F->g_2482 = (*(P1779)rt_nil_check(F->f_2481)).guard_;
while ((F->g_2482 != NULL)) {
F->d_2498 = f_field_index_950(F->up, F->rt_945, (*(P139)rt_nil_check((*(P1904)rt_nil_check(F->g_2482)).disc_)));
if ((G_NV((*(P173)rt_nil_check((*(P1904)rt_nil_check(F->g_2482)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2480 = (*(P173)rt_nil_check((*(P1904)rt_nil_check(F->g_2482)).variant_)).b_;
while ((F->a_2480 != NULL)) {
if ((F->a_2480 != (*(P1904)rt_nil_check(F->g_2482)).arm_)) {
f_arm_holds_943(F->up, F->a_2480, G_NV(({ A2489 ix2543 = F->dvs_2490; ix2543.p[rt_index(G_NV(F->d_2498), ix2543.lo, ix2543.hi) - ix2543.lo]; })), &F->ok_2505);
 (void)rt_range(F->ok_2505, 0, 1);
if (G_NV(F->ok_2505)) {
F->holds_2506 = 0;
}
}
F->a_2480 = (*(P173)rt_nil_check(F->a_2480)).next_;
}
L_end_2541: ;
} else {
f_arm_holds_943(F->up, (*(P1904)rt_nil_check(F->g_2482)).arm_, G_NV(({ A2489 ix2545 = F->dvs_2490; ix2545.p[rt_index(G_NV(F->d_2498), ix2545.lo, ix2545.hi) - ix2545.lo]; })), &F->ok_2505);
 (void)rt_range(F->ok_2505, 0, 1);
if ((!G_NV(F->ok_2505))) {
F->holds_2506 = 0;
}
}
F->g_2482 = (*(P1904)rt_nil_check(F->g_2482)).next_;
}
L_end_2540: ;
if (G_NV(F->holds_2506)) {
(*({ A2484 *ix2546 = &(F->active_2487); &ix2546->p[rt_index(F->i_2536, ix2546->lo, ix2546->hi) - ix2546->lo]; })) = 1;
F->norder_2495 = rt_add(G_NV(F->norder_2495), ((rt_int)1LL));
(*({ A2492 *ix2547 = &(F->order_2493); &ix2547->p[rt_index(G_NV(F->norder_2495), ix2547->lo, ix2547->hi) - ix2547->lo]; })) = F->i_2536;
}
}
F->f_2481 = (*(P1779)rt_nil_check(F->f_2481)).next_;
}
}
L_end_2535: ;
f_ctype_477(F->up, F->rt_945, &F->ct_2501);
f_new_name_224(F->up, rt_g_lit("ag", 2), &F->tmp_2502);
F->up->code_135 = f_new_buffer_243(F->up);
while ((F->it_2477 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2477)).a_ == NULL)) {
if (G_NV(F->named_2504)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2499 = rt_add(G_NV(F->npos_2499), ((rt_int)1LL));
if ((G_NV(F->npos_2499) > G_NV(F->norder_2495))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_468(F->up, F->rt_945)));
}
F->k_2497 = G_NV(({ A2492 ix2549 = F->order_2493; ix2549.p[rt_index(G_NV(F->npos_2499), ix2549.lo, ix2549.hi) - ix2549.lo]; }));
f_agg_component_956(F->up, (*(P139)rt_nil_check(F->tmp_2502)), F->rt_945, G_NV(F->k_2497), (*(P173)rt_nil_check(F->it_2477)).b_, G_NV((*(P173)rt_nil_check(F->e_944)).line_));
(*({ A2484 *ix2550 = &(F->done_2485); &ix2550->p[rt_index(G_NV(F->k_2497), ix2550->lo, ix2550->hi) - ix2550->lo]; })) = 1;
} else {
F->named_2504 = 1;
F->lab_2478 = (*(P173)rt_nil_check(F->it_2477)).a_;
while ((F->lab_2478 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->lab_2478)).flag_) == ((rt_int)1LL))) {
if (((*(P173)rt_nil_check(F->it_2477)).next_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2554 = ((rt_int)1LL), hi2555 = G_NV(F->n_2483);
for (rt_int it2556 = lo2554; it2556 <= hi2555; it2556++) {
F->i_2553 = it2556;
if ((G_NV(({ A2484 ix2557 = F->active_2487; ix2557.p[rt_index(F->i_2553, ix2557.lo, ix2557.hi) - ix2557.lo]; })) && (!G_NV(({ A2484 ix2558 = F->done_2485; ix2558.p[rt_index(F->i_2553, ix2558.lo, ix2558.hi) - ix2558.lo]; }))))) {
f_agg_component_956(F->up, (*(P139)rt_nil_check(F->tmp_2502)), F->rt_945, F->i_2553, (*(P173)rt_nil_check(F->it_2477)).b_, G_NV((*(P173)rt_nil_check(F->e_944)).line_));
(*({ A2484 *ix2559 = &(F->done_2485); &ix2559->p[rt_index(F->i_2553, ix2559->lo, ix2559->hi) - ix2559->lo]; })) = 1;
}
}
}
L_end_2552: ;
} else {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2478)).a_)).kind_) != ((rt_int)5LL)) || ((*(P173)rt_nil_check(F->lab_2478)).b_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2497 = f_field_index_950(F->up, F->rt_945, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2478)).a_)).name_)));
if ((G_NV(F->k_2497) == ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_468(F->up, F->rt_945), rt_g_lit(" has no component ", 18)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2478)).a_)).name_))));
}
if ((!G_NV(({ A2484 ix2560 = F->active_2487; ix2560.p[rt_index(G_NV(F->k_2497), ix2560.lo, ix2560.hi) - ix2560.lo]; })))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2478)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2484 ix2561 = F->done_2485; ix2561.p[rt_index(G_NV(F->k_2497), ix2561.lo, ix2561.hi) - ix2561.lo]; }))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->lab_2478)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_956(F->up, (*(P139)rt_nil_check(F->tmp_2502)), F->rt_945, G_NV(F->k_2497), (*(P173)rt_nil_check(F->it_2477)).b_, G_NV((*(P173)rt_nil_check(F->e_944)).line_));
(*({ A2484 *ix2562 = &(F->done_2485); &ix2562->p[rt_index(G_NV(F->k_2497), ix2562->lo, ix2562->hi) - ix2562->lo]; })) = 1;
}
F->lab_2478 = (*(P173)rt_nil_check(F->lab_2478)).next_;
}
L_end_2551: ;
}
F->it_2477 = (*(P173)rt_nil_check(F->it_2477)).next_;
}
L_end_2548: ;
F->f_2481 = (*(P121)rt_nil_check(F->rt_945)).fields_;
{ rt_int lo2565 = ((rt_int)1LL), hi2566 = G_NV(F->n_2483);
for (rt_int it2567 = lo2565; it2567 <= hi2566; it2567++) {
F->i_2564 = it2567;
if ((G_NV(({ A2484 ix2568 = F->active_2487; ix2568.p[rt_index(F->i_2564, ix2568.lo, ix2568.hi) - ix2568.lo]; })) && (!G_NV(({ A2484 ix2569 = F->done_2485; ix2569.p[rt_index(F->i_2564, ix2569.lo, ix2569.hi) - ix2569.lo]; }))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_944)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_468(F->up, F->rt_945)), rt_g_lit(": ", 2)), (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2481)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2481 = (*(P1779)rt_nil_check(F->f_2481)).next_;
}
}
L_end_2563: ;
f_captured_928(F->up, F->up->code_135, &F->parts_2503);
F->up->code_135 = F->saved_2500;
(*F->r_946) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2501))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2502))), one_rt_gstr(59)), (*(P139)rt_nil_check(F->parts_2503))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2502))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_950(struct f_greenc_1fr *up_, P121 rt_948, rt_gstr name_949) {
  struct f_field_index_950fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_948 = rt_948;
F->name_949 = cp_rt_gstr(name_949);
F->f_2570 = NULL;
F->f_2570 = (*(P121)rt_nil_check(F->rt_948)).fields_;
F->k_2571 = INT64_MIN;
F->k_2571 = ((rt_int)1LL);
while ((F->f_2570 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2570)).name_)), F->name_949)) {
F->result_ = G_NV(F->k_2571);
goto ret_;
}
F->k_2571 = rt_add(G_NV(F->k_2571), ((rt_int)1LL));
F->f_2570 = (*(P1779)rt_nil_check(F->f_2570)).next_;
}
L_end_2572: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_956(struct f_greenc_1fr *up_, rt_gstr tmp_951, P121 rt_952, rt_int k_953, P173 v_954, rt_int line_955) {
  struct f_agg_component_956fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_951 = cp_rt_gstr(tmp_951);
F->rt_952 = rt_952;
F->k_953 = k_953;
F->v_954 = v_954;
F->line_955 = line_955;
F->f_2573 = NULL;
F->f_2573 = (*(P121)rt_nil_check(F->rt_952)).fields_;
F->vt_2574 = NULL;
F->x_2575 = NULL;
F->y_2576 = NULL;
{ rt_int lo2579 = ((rt_int)2LL), hi2580 = F->k_953;
for (rt_int it2581 = lo2579; it2581 <= hi2580; it2581++) {
F->i_2578 = it2581;
F->f_2573 = (*(P1779)rt_nil_check(F->f_2573)).next_;
}
}
L_end_2577: ;
f_gexpr_779(F->up, F->v_954, (*(P1779)rt_nil_check(F->f_2573)).t_, &F->vt_2574, &F->x_2575);
f_check_type_472(F->up, F->vt_2574, (*(P1779)rt_nil_check(F->f_2573)).t_, F->line_955);
if (((G_NV((*(P121)rt_nil_check((*(P1779)rt_nil_check(F->f_2573)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_460(F->up, (*(P1779)rt_nil_check(F->f_2573)).c_)))) {
f_copy_code_607(F->up, (*(P1779)rt_nil_check(F->f_2573)).t_, (*(P139)rt_nil_check(F->x_2575)), &F->y_2576);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_951, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2573)).name_)))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->y_2576))), one_rt_gstr(59)));
} else {
if (f_composite_597(F->up, (*(P1779)rt_nil_check(F->f_2573)).t_)) {
f_init_storage_595(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_951, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2573)).name_)))), (*(P1779)rt_nil_check(F->f_2573)).t_, (*(P1779)rt_nil_check(F->f_2573)).c_);
}
f_assign_code_603(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_951, one_rt_gstr(46)), f_c_field_238(F->up, (*(P139)rt_nil_check((*(P1779)rt_nil_check(F->f_2573)).name_)))), (*(P1779)rt_nil_check(F->f_2573)).t_, (*(P139)rt_nil_check(F->x_2575)), (*(P1779)rt_nil_check(F->f_2573)).c_, &F->y_2576);
f_emit_248(F->up, (*(P139)rt_nil_check(F->y_2576)));
}
ret_:

  return;
}

static void f_static_choice_960(struct f_greenc_1fr *up_, P173 x_957, rt_int *v_958, int *ok_959) {
  struct f_static_choice_960fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_957 = x_957;
F->v_958 = v_958;
F->ok_959 = ok_959;
if (f_is_char_lit_760(F->up, F->x_957)) {
(*F->ok_959) = 1;
(*F->v_958) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2582 = (*(P139)rt_nil_check((*(P173)rt_nil_check(F->x_957)).name_)); ix2582.p[rt_index(((rt_int)1LL), ix2582.lo, ix2582.hi) - ix2582.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_489(F->up, F->x_957, &(*F->v_958), &(*F->ok_959));
 (void)rt_range((*F->ok_959), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_965(struct f_greenc_1fr *up_, P173 e_961, P121 arrt_962, P139 bounds_963, P139 *r_964) {
  struct f_array_aggregate_965fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_961 = e_961;
F->arrt_962 = arrt_962;
F->bounds_963 = bounds_963;
F->r_964 = r_964;
F->it_2583 = NULL;
F->it_2583 = (*(P173)rt_nil_check(F->e_961)).a_;
F->lab_2584 = NULL;
F->others_it_2585 = NULL;
F->np_2586 = INT64_MIN;
F->np_2586 = ((rt_int)0LL);
F->nnamed_2587 = INT64_MIN;
F->nnamed_2587 = ((rt_int)0LL);
F->clo_2588 = INT64_MIN;
F->clo_2588 = ((rt_int)0LL);
F->chi_2589 = INT64_MIN;
F->chi_2589 = ((rt_int)0LL);
F->v1_2590 = INT64_MIN;
F->v1_2590 = ((rt_int)0LL);
F->v2_2591 = INT64_MIN;
F->v2_2591 = ((rt_int)0LL);
F->all_static_2592 = INT_MIN;
F->all_static_2592 = 1;
F->ok_2593 = INT_MIN;
F->ok_2593 = 1;
F->ok2_2594 = INT_MIN;
F->ok2_2594 = 1;
F->first_choice_2595 = INT_MIN;
F->first_choice_2595 = 1;
F->vt_2596 = NULL;
F->ct_2597 = NULL;
F->et_2598 = NULL;
F->tmp_2599 = NULL;
F->lo_2600 = NULL;
F->hi_2601 = NULL;
F->v_2602 = NULL;
F->x_2603 = NULL;
F->parts_2604 = NULL;
F->fill_2605 = NULL;
F->rowb_2606 = NULL;
F->key_2607 = NULL;
F->khi_2608 = NULL;
F->saved_2609 = NULL;
F->saved_2609 = F->up->code_135;
f_ctype_477(F->up, F->arrt_962, &F->ct_2597);
f_elem_ctype_549(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, &F->et_2598);
f_new_name_224(F->up, rt_g_lit("ag", 2), &F->tmp_2599);
while ((F->it_2583 != NULL)) {
if (((*(P173)rt_nil_check(F->it_2583)).a_ == NULL)) {
if (((G_NV(F->nnamed_2587) > ((rt_int)0LL)) || (F->others_it_2585 != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_961)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2586 = rt_add(G_NV(F->np_2586), ((rt_int)1LL));
} else if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->it_2583)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P173)rt_nil_check(F->it_2583)).next_ != NULL) || ((*(P173)rt_nil_check((*(P173)rt_nil_check(F->it_2583)).a_)).next_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_961)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2585 = F->it_2583;
} else {
F->nnamed_2587 = rt_add(G_NV(F->nnamed_2587), ((rt_int)1LL));
F->lab_2584 = (*(P173)rt_nil_check(F->it_2583)).a_;
while ((F->lab_2584 != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2584)).a_, &F->v1_2590, &F->ok_2593);
 (void)rt_range(F->ok_2593, 0, 1);
F->v2_2591 = G_NV(F->v1_2590);
if (((*(P173)rt_nil_check(F->lab_2584)).b_ != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2584)).b_, &F->v2_2591, &F->ok2_2594);
 (void)rt_range(F->ok2_2594, 0, 1);
F->ok_2593 = (G_NV(F->ok_2593) && G_NV(F->ok2_2594));
}
if ((!G_NV(F->ok_2593))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_961)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2595) || (G_NV(F->v1_2590) < G_NV(F->clo_2588)))) {
F->clo_2588 = G_NV(F->v1_2590);
}
if ((G_NV(F->first_choice_2595) || (G_NV(F->v2_2591) > G_NV(F->chi_2589)))) {
F->chi_2589 = G_NV(F->v2_2591);
}
F->first_choice_2595 = 0;
F->lab_2584 = (*(P173)rt_nil_check(F->lab_2584)).next_;
}
L_end_2611: ;
}
F->it_2583 = (*(P173)rt_nil_check(F->it_2583)).next_;
}
L_end_2610: ;
if (((G_NV(F->np_2586) > ((rt_int)0LL)) && (G_NV(F->nnamed_2587) > ((rt_int)0LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_961)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2587) > ((rt_int)0LL))) {
f_check_choices_973(F->up, F->e_961, F->arrt_962, (F->others_it_2585 != NULL));
}
if (((F->others_it_2585 == NULL) && (G_NV(F->np_2586) > ((rt_int)0LL)))) {
f_first_index_552(F->up, F->arrt_962, &F->lo_2600);
F->hi_2601 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lo_2600))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2586), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2585 == NULL) && (G_NV(F->nnamed_2587) > ((rt_int)0LL)))) {
F->lo_2600 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2588)))), rt_g_lit("LL)", 3)));
F->hi_2601 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2589)))), rt_g_lit("LL)", 3)));
} else if ((((*(P121)rt_nil_check(F->arrt_962)).tcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_962)).tcons_)).hi_ != NULL))) {
F->lo_2600 = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_962)).tcons_)).lo_;
F->hi_2601 = (*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_962)).tcons_)).hi_;
} else if ((F->bounds_963 != NULL)) {
F->lo_2600 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->bounds_963))), rt_g_lit(").lo", 4)));
F->hi_2601 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->bounds_963))), rt_g_lit(").hi", 4)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_961)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P121)rt_nil_check(F->arrt_962)).dims_) > ((rt_int)1LL)) && (F->bounds_963 != NULL))) {
F->rowb_2606 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P139)rt_nil_check(F->bounds_963))), rt_g_lit(").lo2, (", 8)), (*(P139)rt_nil_check(F->bounds_963))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_135 = f_new_buffer_243(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2599)), rt_g_lit(".lo = ", 6)), (*(P139)rt_nil_check(F->lo_2600))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".hi = ", 6)), (*(P139)rt_nil_check(F->hi_2601))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2599)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P139)rt_nil_check(F->et_2598))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2586) > ((rt_int)0LL)) && (F->others_it_2585 == NULL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2586)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2586) > ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2586)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2585 != NULL)) {
F->up->agg_bounds_180 = F->rowb_2606;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->others_it_2585)).b_, (*(P121)rt_nil_check(F->arrt_962)).elem_, &F->vt_2596, &F->v_2602);
F->up->agg_bounds_180 = NULL;
f_check_type_472(F->up, F->vt_2596, (*(P121)rt_nil_check(F->arrt_962)).elem_, G_NV((*(P173)rt_nil_check(F->e_961)).line_));
f_ctype_477(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, &F->x_2603);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->x_2603))), rt_g_lit(" o_ = ", 6)), (*(P139)rt_nil_check(F->v_2602))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit("); k_++) {", 10)));
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, rt_g_lit("o_", 2), &F->x_2603);
f_element_store_969(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2599)), rt_g_lit(".p[k_]", 6)), F->arrt_962, (*(P139)rt_nil_check(F->x_2603)));
f_emit_248(F->up, rt_g_lit("} }", 3));
}
F->it_2583 = (*(P173)rt_nil_check(F->e_961)).a_;
F->np_2586 = ((rt_int)0LL);
while (((F->it_2583 != NULL) && (F->it_2583 != F->others_it_2585))) {
F->up->agg_bounds_180 = F->rowb_2606;
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->it_2583)).b_, (*(P121)rt_nil_check(F->arrt_962)).elem_, &F->vt_2596, &F->v_2602);
F->up->agg_bounds_180 = NULL;
f_check_type_472(F->up, F->vt_2596, (*(P121)rt_nil_check(F->arrt_962)).elem_, G_NV((*(P173)rt_nil_check(F->e_961)).line_));
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, (*(P139)rt_nil_check(F->v_2602)), &F->x_2603);
if (((*(P173)rt_nil_check(F->it_2583)).a_ == NULL)) {
f_element_store_969(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2599)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2586)))), one_rt_gstr(93)), F->arrt_962, (*(P139)rt_nil_check(F->x_2603)));
F->np_2586 = rt_add(G_NV(F->np_2586), ((rt_int)1LL));
} else {
f_new_name_224(F->up, rt_g_lit("av", 2), &F->v_2602);
f_ctype_477(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, &F->parts_2604);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P139)rt_nil_check(F->parts_2604))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->v_2602))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_2603))), one_rt_gstr(59)));
F->lab_2584 = (*(P173)rt_nil_check(F->it_2583)).a_;
while ((F->lab_2584 != NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->lab_2584)).a_, (*(P121)rt_nil_check(F->arrt_962)).idx_, &F->vt_2596, &F->key_2607);
f_check_type_472(F->up, F->vt_2596, (*(P121)rt_nil_check(F->arrt_962)).idx_, G_NV((*(P173)rt_nil_check(F->e_961)).line_));
F->khi_2608 = F->key_2607;
if (((*(P173)rt_nil_check(F->lab_2584)).b_ != NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->lab_2584)).b_, (*(P121)rt_nil_check(F->arrt_962)).idx_, &F->vt_2596, &F->khi_2608);
f_check_type_472(F->up, F->vt_2596, (*(P121)rt_nil_check(F->arrt_962)).idx_, G_NV((*(P173)rt_nil_check(F->e_961)).line_));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->key_2607))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->khi_2608))), rt_g_lit("; k_++) {", 9)));
f_copy_code_607(F->up, (*(P121)rt_nil_check(F->arrt_962)).elem_, (*(P139)rt_nil_check(F->v_2602)), &F->x_2603);
f_element_store_969(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->tmp_2599)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".lo, ", 5)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".hi) - ", 7)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".lo]", 4)), F->arrt_962, (*(P139)rt_nil_check(F->x_2603)));
f_emit_248(F->up, rt_g_lit("}", 1));
F->lab_2584 = (*(P173)rt_nil_check(F->lab_2584)).next_;
}
L_end_2613: ;
f_emit_248(F->up, rt_g_lit("}", 1));
}
F->it_2583 = (*(P173)rt_nil_check(F->it_2583)).next_;
}
L_end_2612: ;
if ((G_NV((*(P121)rt_nil_check(F->arrt_962)).dims_) > ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(") > 0) { ", 9)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".lo2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".p[0].lo; ", 10)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".hi2 = ", 7)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_928(F->up, F->up->code_135, &F->parts_2604);
F->up->code_135 = F->saved_2609;
(*F->r_964) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P139)rt_nil_check(F->ct_2597))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2599))), one_rt_gstr(59)), (*(P139)rt_nil_check(F->parts_2604))), one_rt_gstr(32)), (*(P139)rt_nil_check(F->tmp_2599))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_969(struct f_greenc_1fr *up_, rt_gstr lv_966, P121 arrt_967, rt_gstr v_968) {
  struct f_element_store_969fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_966 = cp_rt_gstr(lv_966);
F->arrt_967 = arrt_967;
F->v_968 = cp_rt_gstr(v_968);
F->x_2614 = NULL;
if (((((*(P121)rt_nil_check(F->arrt_967)).elemcons_ != NULL) && ((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_967)).elemcons_)).lo_ != NULL)) && (!f_composite_597(F->up, (*(P121)rt_nil_check(F->arrt_967)).elem_)))) {
f_assign_code_603(F->up, F->lv_966, (*(P121)rt_nil_check(F->arrt_967)).elem_, F->v_968, (*(P121)rt_nil_check(F->arrt_967)).elemcons_, &F->x_2614);
f_emit_248(F->up, (*(P139)rt_nil_check(F->x_2614)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_966, rt_g_lit(" = ", 3)), F->v_968), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_973(struct f_greenc_1fr *up_, P173 e_970, P121 arrt_971, int has_others_972) {
  struct f_check_choices_973fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_970 = e_970;
F->arrt_971 = arrt_971;
F->has_others_972 = has_others_972;
F->a_2615 = NULL;
F->b_2616 = NULL;
F->lab_2617 = NULL;
F->lab2_2618 = NULL;
F->lo1_2619 = INT64_MIN;
F->lo1_2619 = ((rt_int)0LL);
F->hi1_2620 = INT64_MIN;
F->hi1_2620 = ((rt_int)0LL);
F->lo2_2621 = INT64_MIN;
F->lo2_2621 = ((rt_int)0LL);
F->hi2_2622 = INT64_MIN;
F->hi2_2622 = ((rt_int)0LL);
F->count_2623 = INT64_MIN;
F->count_2623 = ((rt_int)0LL);
F->ok_2624 = INT_MIN;
F->a_2615 = (*(P173)rt_nil_check(F->e_970)).a_;
while ((F->a_2615 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_2615)).a_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->a_2615)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2617 = (*(P173)rt_nil_check(F->a_2615)).a_;
while ((F->lab_2617 != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2617)).a_, &F->lo1_2619, &F->ok_2624);
 (void)rt_range(F->ok_2624, 0, 1);
F->hi1_2620 = G_NV(F->lo1_2619);
if (((*(P173)rt_nil_check(F->lab_2617)).b_ != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab_2617)).b_, &F->hi1_2620, &F->ok_2624);
 (void)rt_range(F->ok_2624, 0, 1);
}
if ((G_NV(F->hi1_2620) >= G_NV(F->lo1_2619))) {
F->count_2623 = rt_add(G_NV(F->count_2623), rt_add(rt_sub(G_NV(F->hi1_2620), G_NV(F->lo1_2619)), ((rt_int)1LL)));
}
F->b_2616 = F->a_2615;
F->lab2_2618 = (*(P173)rt_nil_check(F->lab_2617)).next_;
while ((F->b_2616 != NULL)) {
if ((((*(P173)rt_nil_check(F->b_2616)).a_ != NULL) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->b_2616)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2616 != F->a_2615)) {
F->lab2_2618 = (*(P173)rt_nil_check(F->b_2616)).a_;
}
while ((F->lab2_2618 != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab2_2618)).a_, &F->lo2_2621, &F->ok_2624);
 (void)rt_range(F->ok_2624, 0, 1);
F->hi2_2622 = G_NV(F->lo2_2621);
if (((*(P173)rt_nil_check(F->lab2_2618)).b_ != NULL)) {
f_static_choice_960(F->up, (*(P173)rt_nil_check(F->lab2_2618)).b_, &F->hi2_2622, &F->ok_2624);
 (void)rt_range(F->ok_2624, 0, 1);
}
if (((((G_NV(F->lo1_2619) <= G_NV(F->hi1_2620)) && (G_NV(F->lo2_2621) <= G_NV(F->hi2_2622))) && (G_NV(F->lo1_2619) <= G_NV(F->hi2_2622))) && (G_NV(F->lo2_2621) <= G_NV(F->hi1_2620)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_970)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2618 = (*(P173)rt_nil_check(F->lab2_2618)).next_;
}
L_end_2628: ;
}
F->b_2616 = (*(P173)rt_nil_check(F->b_2616)).next_;
F->lab2_2618 = NULL;
}
L_end_2627: ;
F->lab_2617 = (*(P173)rt_nil_check(F->lab_2617)).next_;
}
L_end_2626: ;
}
F->a_2615 = (*(P173)rt_nil_check(F->a_2615)).next_;
}
L_end_2625: ;
if (((!F->has_others_972) && f_static_bounds_464(F->up, (*(P121)rt_nil_check(F->arrt_971)).tcons_))) {
if ((G_NV(F->count_2623) != rt_add(rt_sub(G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_971)).tcons_)).mhi_), G_NV((*(P177)rt_nil_check((*(P121)rt_nil_check(F->arrt_971)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_970)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_468(F->up, F->arrt_971)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P173 f_actual_for_977(struct f_greenc_1fr *up_, P173 args_974, P1761 pm_975, P1761 first_976) {
  struct f_actual_for_977fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_974 = args_974;
F->pm_975 = pm_975;
F->first_976 = first_976;
F->a_2629 = NULL;
F->a_2629 = F->args_974;
F->p_2630 = NULL;
F->p_2630 = F->first_976;
while (((F->a_2629 != NULL) && ((*(P173)rt_nil_check(F->a_2629)).formal_ == NULL))) {
if ((F->p_2630 == F->pm_975)) {
F->result_ = F->a_2629;
goto ret_;
}
F->p_2630 = (*(P1761)rt_nil_check(F->p_2630)).next_;
F->a_2629 = (*(P173)rt_nil_check(F->a_2629)).next_;
}
L_end_2631: ;
while ((F->a_2629 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_2629)).formal_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_2629)).formal_)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_975)).name_))))) {
F->result_ = F->a_2629;
goto ret_;
}
F->a_2629 = (*(P173)rt_nil_check(F->a_2629)).next_;
}
L_end_2632: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_982(struct f_greenc_1fr *up_, P173 e_978, int is_stmt_979, P121 *t_980, P139 *r_981) {
  struct f_gcall_982fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_978 = e_978;
F->is_stmt_979 = is_stmt_979;
F->t_980 = t_980;
F->r_981 = r_981;
F->fn_2633 = NULL;
F->fn_2633 = (*(P173)rt_nil_check(F->e_978)).a_;
F->nm_2634 = NULL;
F->y_2635 = NULL;
F->args_2636 = NULL;
F->lv_2637 = NULL;
F->v_2638 = NULL;
F->ct_2639 = NULL;
F->x_2640 = NULL;
F->a_2641 = NULL;
F->pm_2642 = NULL;
F->lt_2643 = NULL;
F->vt_2644 = NULL;
F->lc_2645 = NULL;
F->ro_2646 = INT_MIN;
f_expanded_797(F->up, F->fn_2633, &F->nm_2634);
if ((F->nm_2634 != NULL)) {
F->fn_2633 = F->nm_2634;
} else if ((((G_NV((*(P173)rt_nil_check(F->fn_2633)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_758(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).name_))))) {
if ((!f_type_attribute_756(F->up, (*(P116)rt_nil_check(f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).name_))))).t_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_978)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2634 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->fn_2633)).line_));
(*(P173)rt_nil_check(F->nm_2634)).name_ = (*(P173)rt_nil_check(F->fn_2633)).name_;
F->fn_2633 = F->nm_2634;
} else if (((G_NV((*(P173)rt_nil_check(F->fn_2633)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check(F->fn_2633)).a_))) {
F->nm_2634 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->fn_2633)).line_));
(*(P173)rt_nil_check(F->nm_2634)).name_ = (*(P173)rt_nil_check(F->fn_2633)).name_;
(*(P173)rt_nil_check(F->nm_2634)).tag_ = f_mk_221(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->fn_2633)).a_));
F->fn_2633 = F->nm_2634;
} else if (((((G_NV((*(P173)rt_nil_check(F->fn_2633)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1090(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).a_)).name_))))) {
F->y_2635 = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), G_NV((*(P173)rt_nil_check(F->fn_2633)).line_));
if (((F->y_2635 != NULL) && ((G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1066(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), (*(P173)rt_nil_check(F->e_978)).b_, F->is_stmt_979, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_978)).line_), &F->y_2635);
F->up->call_task_ix_200 = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).a_)).b_;
if ((F->is_stmt_979 && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2635)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_978)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1007(F->up, F->e_978, F->y_2635, &(*F->t_980), &(*F->r_981));
goto ret_;
}
}
if ((G_NV((*(P173)rt_nil_check(F->fn_2633)).kind_) != ((rt_int)5LL))) {
f_other_call_1147(F->up, F->e_978, F->is_stmt_979, &(*F->t_980), &(*F->r_981));
goto ret_;
}
F->y_2635 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)));
if (((*(P173)rt_nil_check(F->fn_2633)).tag_ != NULL)) {
F->y_2635 = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), G_NV((*(P173)rt_nil_check(F->fn_2633)).line_));
}
if ((F->y_2635 == NULL)) {
f_builtin_1014(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), (*(P173)rt_nil_check(F->e_978)).b_, G_NV((*(P173)rt_nil_check(F->e_978)).line_), F->is_stmt_979, &(*F->t_980), &(*F->r_981));
goto ret_;
}
if ((((G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)4LL))) && ((*(P173)rt_nil_check(F->fn_2633)).tag_ == NULL))) {
f_resolve_overload_1055(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), (*(P173)rt_nil_check(F->e_978)).b_, F->is_stmt_979, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_978)).line_), &F->y_2635);
if ((F->y_2635 == NULL)) {
f_builtin_1014(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), (*(P173)rt_nil_check(F->e_978)).b_, G_NV((*(P173)rt_nil_check(F->e_978)).line_), F->is_stmt_979, &(*F->t_980), &(*F->r_981));
goto ret_;
}
} else if (((G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1066(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), (*(P173)rt_nil_check(F->e_978)).b_, F->is_stmt_979, F->up->call_want_209, G_NV((*(P173)rt_nil_check(F->e_978)).line_), &F->y_2635);
}
if ((G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) == ((rt_int)10LL))) {
f_other_call_1147(F->up, F->e_978, F->is_stmt_979, &(*F->t_980), &(*F->r_981));
goto ret_;
}
if (((G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) != ((rt_int)3LL)) && (G_NV((*(P116)rt_nil_check(F->y_2635)).kind_) != ((rt_int)4LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_978)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_979 && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2635)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_978)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_979) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_2635)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_978)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->fn_2633)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1007(F->up, F->e_978, F->y_2635, &(*F->t_980), &(*F->r_981));
ret_:

  return;
}

static void f_out_check_986(struct f_greenc_1fr *up_, rt_gstr lv_983, P121 t_984, P177 c_985) {
  struct f_out_check_986fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_983 = cp_rt_gstr(lv_983);
F->t_984 = t_984;
F->c_985 = c_985;
if ((!f_bounded_460(F->up, F->c_985))) {
goto ret_;
}
if ((F->up->post_checks_195 == NULL)) {
F->up->post_checks_195 = f_mk_221(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P121)rt_nil_check(F->t_984)).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check(F->t_984)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_195 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->up->post_checks_195)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_983), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_985)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_985)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_438(F->up, F->t_984)) {
F->up->post_checks_195 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->up->post_checks_195)), rt_g_lit(" (void)rt_range(", 16)), F->lv_983), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_985)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check(F->c_985)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_989(struct f_greenc_1fr *up_, P173 e_987, P139 *r_988) {
  struct f_var_path_989fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_987 = e_987;
F->r_988 = r_988;
F->pt_2647 = NULL;
F->v_2648 = NULL;
F->saved_2649 = NULL;
F->saved_2649 = F->up->code_135;
if ((G_NV((*(P173)rt_nil_check(F->e_987)).kind_) == ((rt_int)5LL))) {
(*F->r_988) = (*(P173)rt_nil_check(F->e_987)).name_;
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_987)).kind_) == ((rt_int)15LL))) {
f_var_path_989(F->up, (*(P173)rt_nil_check(F->e_987)).a_, &(*F->r_988));
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check(F->e_987)).kind_) != ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check(F->e_987)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P173)rt_nil_check(F->e_987)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_987)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_988) = f_mk_221(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2647 = NULL;
F->up->trial_154 = rt_add(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = f_new_buffer_243(F->up);
{
{ rt_frame xf2651;
if (RT_TRY(xf2651)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->e_987)).a_, NULL, &F->pt_2647, &F->v_2648);
RT_POP(xf2651);
} else {
RT_POP(xf2651);
int x2652 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2652);
if (0 || x2652 == ex_compile_error_107) {
F->pt_2647 = NULL;
} else {
rt_raise(x2652);
}
}
}

}
L_end_2650: ;
F->up->trial_154 = rt_sub(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = F->saved_2649;
if (((F->pt_2647 == NULL) || (G_NV((*(P121)rt_nil_check(F->pt_2647)).kind_) == ((rt_int)8LL)))) {
(*F->r_988) = f_mk_221(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_989(F->up, (*(P173)rt_nil_check(F->e_987)).a_, &(*F->r_988));
if (eq_rt_gstr((*(P139)rt_nil_check((*F->r_988))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_987)).kind_) == ((rt_int)9LL))) {
(*F->r_988) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_988))), one_rt_gstr(46)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_987)).name_))));
} else if (((f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_987)).b_) == ((rt_int)1LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_987)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_988) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_988))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_987)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_988) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_988))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_992(struct f_greenc_1fr *up_, rt_gstr p_990, rt_gstr r_991) {
  struct f_paths_overlap_992fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_990 = cp_rt_gstr(p_990);
F->r_991 = cp_rt_gstr(r_991);
F->i_2653 = INT64_MIN;
F->i_2653 = ({ rt_gstr at2654 = F->p_990; at2654.lo; });
F->j_2655 = INT64_MIN;
F->j_2655 = ({ rt_gstr at2656 = F->r_991; at2656.lo; });
for (;;) {
if (((G_NV(F->i_2653) > ({ rt_gstr at2658 = F->p_990; at2658.hi; })) || (G_NV(F->j_2655) > ({ rt_gstr at2659 = F->r_991; at2659.hi; })))) {
if (((G_NV(F->i_2653) > ({ rt_gstr at2660 = F->p_990; at2660.hi; })) && (G_NV(F->j_2655) > ({ rt_gstr at2661 = F->r_991; at2661.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2653) > ({ rt_gstr at2662 = F->p_990; at2662.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2663 = F->r_991; ix2663.p[rt_index(G_NV(F->j_2655), ix2663.lo, ix2663.hi) - ix2663.lo]; })) == 46) || (G_NV(({ rt_gstr ix2664 = F->r_991; ix2664.p[rt_index(G_NV(F->j_2655), ix2664.lo, ix2664.hi) - ix2664.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2665 = F->p_990; ix2665.p[rt_index(G_NV(F->i_2653), ix2665.lo, ix2665.hi) - ix2665.lo]; })) == 46) || (G_NV(({ rt_gstr ix2666 = F->p_990; ix2666.p[rt_index(G_NV(F->i_2653), ix2666.lo, ix2666.hi) - ix2666.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2667 = F->p_990; ix2667.p[rt_index(G_NV(F->i_2653), ix2667.lo, ix2667.hi) - ix2667.lo]; })) == 40) && (G_NV(({ rt_gstr ix2668 = F->r_991; ix2668.p[rt_index(G_NV(F->j_2655), ix2668.lo, ix2668.hi) - ix2668.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2669 = F->p_990; ix2669.p[rt_index(rt_add(G_NV(F->i_2653), ((rt_int)1LL)), ix2669.lo, ix2669.hi) - ix2669.lo]; })) == 42) || (G_NV(({ rt_gstr ix2670 = F->r_991; ix2670.p[rt_index(rt_add(G_NV(F->j_2655), ((rt_int)1LL)), ix2670.lo, ix2670.hi) - ix2670.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2672 = F->p_990; ix2672.p[rt_index(G_NV(F->i_2653), ix2672.lo, ix2672.hi) - ix2672.lo]; })) != 41)) {
F->i_2653 = rt_add(G_NV(F->i_2653), ((rt_int)1LL));
}
L_end_2671: ;
while ((G_NV(({ rt_gstr ix2674 = F->r_991; ix2674.p[rt_index(G_NV(F->j_2655), ix2674.lo, ix2674.hi) - ix2674.lo]; })) != 41)) {
F->j_2655 = rt_add(G_NV(F->j_2655), ((rt_int)1LL));
}
L_end_2673: ;
} else if ((G_NV(({ rt_gstr ix2675 = F->p_990; ix2675.p[rt_index(G_NV(F->i_2653), ix2675.lo, ix2675.hi) - ix2675.lo]; })) != G_NV(({ rt_gstr ix2676 = F->r_991; ix2676.p[rt_index(G_NV(F->j_2655), ix2676.lo, ix2676.hi) - ix2676.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2653 = rt_add(G_NV(F->i_2653), ((rt_int)1LL));
F->j_2655 = rt_add(G_NV(F->j_2655), ((rt_int)1LL));
}
L_end_2657: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_995(struct f_greenc_1fr *up_, P173 n_993, rt_gstr name_994) {
  struct f_mentions_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_993 = n_993;
F->name_994 = cp_rt_gstr(name_994);
F->p_2677 = NULL;
F->p_2677 = F->n_993;
while ((F->p_2677 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->p_2677)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2677)).name_)), F->name_994))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_995(F->up, (*(P173)rt_nil_check(F->p_2677)).a_, F->name_994) || f_mentions_995(F->up, (*(P173)rt_nil_check(F->p_2677)).b_, F->name_994))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_995(F->up, (*(P173)rt_nil_check(F->p_2677)).c_, F->name_994) || f_mentions_995(F->up, (*(P173)rt_nil_check(F->p_2677)).d_, F->name_994))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_995(F->up, (*(P173)rt_nil_check(F->p_2677)).e_, F->name_994)) {
F->result_ = 1;
goto ret_;
}
F->p_2677 = (*(P173)rt_nil_check(F->p_2677)).next_;
}
L_end_2678: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_998(struct f_greenc_1fr *up_, P173 n_996, rt_gstr name_997) {
  struct f_mentions_one_998fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_996 = n_996;
F->name_997 = cp_rt_gstr(name_997);
if (((G_NV((*(P173)rt_nil_check(F->n_996)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_996)).name_)), F->name_997))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_995(F->up, (*(P173)rt_nil_check(F->n_996)).a_, F->name_997) || f_mentions_995(F->up, (*(P173)rt_nil_check(F->n_996)).b_, F->name_997))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_995(F->up, (*(P173)rt_nil_check(F->n_996)).c_, F->name_997) || f_mentions_995(F->up, (*(P173)rt_nil_check(F->n_996)).d_, F->name_997)) || f_mentions_995(F->up, (*(P173)rt_nil_check(F->n_996)).e_, F->name_997));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1002(struct f_greenc_1fr *up_, P173 e_999, P116 y_1000, P173 a_1001) {
  struct f_check_aliasing_1002fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_999 = e_999;
F->y_1000 = y_1000;
F->a_1001 = a_1001;
F->b_2679 = NULL;
F->b_2679 = (*(P173)rt_nil_check(F->e_999)).b_;
F->p_2680 = NULL;
F->q_2681 = NULL;
F->r_2682 = NULL;
F->r_2682 = f_root_name_1182(F->up, F->a_1001);
F->v_2683 = NULL;
if ((F->r_2682 == NULL)) {
goto ret_;
}
f_var_path_989(F->up, F->a_1001, &F->p_2680);
while ((F->b_2679 != NULL)) {
if (((F->b_2679 != F->a_1001) && (!eq_rt_gstr((*(P139)rt_nil_check(F->p_2680)), rt_g_lit("\?", 1))))) {
f_var_path_989(F->up, F->b_2679, &F->q_2681);
if (((!eq_rt_gstr((*(P139)rt_nil_check(F->q_2681)), rt_g_lit("\?", 1))) && f_paths_overlap_992(F->up, (*(P139)rt_nil_check(F->p_2680)), (*(P139)rt_nil_check(F->q_2681))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_999)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2679 = (*(P173)rt_nil_check(F->b_2679)).next_;
}
L_end_2684: ;
F->v_2683 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_)));
if (((((F->v_2683 != NULL) && (G_NV((*(P116)rt_nil_check(F->v_2683)).kind_) == ((rt_int)1LL))) && ((*(P116)rt_nil_check(F->y_1000)).decl_ != NULL)) && ((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1191(F->up, (*(P116)rt_nil_check(F->y_1000)).decl_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_)))))) {
if (((f_mentions_995(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).c_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_))) || f_mentions_995(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).d_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_)))) || f_mentions_995(F->up, (*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).decl_)).e_, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_999)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2682)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1000)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1007(struct f_greenc_1fr *up_, P173 e_1003, P116 y_1004, P121 *t_1005, P139 *r_1006) {
  struct f_gcall_with_1007fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1003 = e_1003;
F->y_1004 = y_1004;
F->t_1005 = t_1005;
F->r_1006 = r_1006;
F->args_2685 = NULL;
F->lv_2686 = NULL;
F->v_2687 = NULL;
F->x1_2688 = NULL;
F->x2_2689 = NULL;
F->a_2690 = NULL;
F->pm_2691 = NULL;
F->lt_2692 = NULL;
F->vt_2693 = NULL;
F->lc_2694 = NULL;
F->ro_2695 = INT_MIN;
f_check_call_rules_1202(F->up, F->e_1003, F->y_1004);
F->args_2685 = f_mk_221(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P116)rt_nil_check(F->y_1004)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_1004)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->y_1004)).access_path_ != NULL)) && ((*(P116)rt_nil_check(F->y_1004)).members_ != NULL)) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_200 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1003)).line_), cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).name_))));
}
f_gexpr_779(F->up, F->up->call_task_ix_200, (*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).t_, &F->vt_2693, &F->v_2687);
F->up->call_task_ix_200 = NULL;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).access_path_)), &F->lv_2686);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2688);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2689);
F->lv_2686 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->lv_2686)), rt_g_lit("[rt_index(", 10)), (*(P139)rt_nil_check(F->v_2687))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->x1_2688))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->x2_2689))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->x1_2688))), one_rt_gstr(93)));
F->args_2685 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2686))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->lv_2686))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((((G_NV((*(P116)rt_nil_check(F->y_1004)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->y_1004)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->y_1004)).access_path_ != NULL))) {
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).members_)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).access_path_)), &F->lv_2686);
F->args_2685 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2686))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->lv_2686))), rt_g_lit(" : (rt_raise(RT_X_TASKING), (void *)0))", 39)));
} else if ((G_NV((*(P116)rt_nil_check(F->y_1004)).level_) > ((rt_int)0LL))) {
f_link_to_719(F->up, G_NV((*(P116)rt_nil_check(F->y_1004)).level_), &F->args_2685);
}
F->pm_2691 = (*(P116)rt_nil_check(F->y_1004)).params_;
while ((F->pm_2691 != NULL)) {
F->a_2690 = f_actual_for_977(F->up, (*(P173)rt_nil_check(F->e_1003)).b_, F->pm_2691, (*(P116)rt_nil_check(F->y_1004)).params_);
if ((({ rt_gstr at2697 = (*(P139)rt_nil_check(F->args_2685)); at2697.hi >= at2697.lo ? at2697.hi - at2697.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2685 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2685)), rt_g_lit(", ", 2)));
}
if ((F->a_2690 == NULL)) {
if ((((*(P1761)rt_nil_check(F->pm_2691)).dflt_ == NULL) || (G_NV((*(P1761)rt_nil_check(F->pm_2691)).mode_) != ((rt_int)1LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1003)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).name_))));
}
if (((*(P1761)rt_nil_check(F->pm_2691)).dsym_ != NULL)) {
f_access_of_716(F->up, (*(P1761)rt_nil_check(F->pm_2691)).dsym_, &F->v_2687);
f_copy_code_607(F->up, (*(P1761)rt_nil_check(F->pm_2691)).t_, (*(P139)rt_nil_check(F->v_2687)), &F->x1_2688);
F->v_2687 = F->x1_2688;
} else {
f_gexpr_779(F->up, (*(P1761)rt_nil_check(F->pm_2691)).dflt_, (*(P1761)rt_nil_check(F->pm_2691)).t_, &F->vt_2693, &F->v_2687);
}
F->args_2685 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2685)), (*(P139)rt_nil_check(F->v_2687))));
} else {
if ((((G_NV((*(P173)rt_nil_check(F->a_2690)).flag_) != ((rt_int)0LL)) && (G_NV((*(P173)rt_nil_check(F->a_2690)).flag_) != ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check(F->a_2690)).flag_) != G_NV((*(P1761)rt_nil_check(F->pm_2691)).mode_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1003)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1761)rt_nil_check(F->pm_2691)).mode_) == ((rt_int)1LL))) {
f_gexpr_779(F->up, F->a_2690, (*(P1761)rt_nil_check(F->pm_2691)).t_, &F->vt_2693, &F->v_2687);
f_check_type_472(F->up, F->vt_2693, (*(P1761)rt_nil_check(F->pm_2691)).t_, G_NV((*(P173)rt_nil_check(F->e_1003)).line_));
if (((((*(P1761)rt_nil_check(F->pm_2691)).c_ != NULL) && ((*(P177)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).c_)).lo_ != NULL)) && ((G_NV((*(P121)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P121)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2687 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P139)rt_nil_check(F->v_2687))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P177)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2685 = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->args_2685)), (*(P139)rt_nil_check(F->v_2687))));
} else {
f_lvalue_735(F->up, F->a_2690, &F->lv_2686, &F->lt_2692, &F->lc_2694, &F->ro_2695);
 (void)rt_range(F->ro_2695, 0, 1);
if (G_NV(F->ro_2695)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1003)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2691)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1185(F->up, F->a_2690, G_NV((*(P173)rt_nil_check(F->e_1003)).line_));
f_check_type_472(F->up, F->lt_2692, (*(P1761)rt_nil_check(F->pm_2691)).t_, G_NV((*(P173)rt_nil_check(F->e_1003)).line_));
F->args_2685 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->args_2685)), one_rt_gstr(38)), (*(P139)rt_nil_check(F->lv_2686))));
f_check_aliasing_1002(F->up, F->e_1003, F->y_1004, F->a_2690);
f_out_check_986(F->up, (*(P139)rt_nil_check(F->lv_2686)), F->lt_2692, F->lc_2694);
}
}
F->pm_2691 = (*(P1761)rt_nil_check(F->pm_2691)).next_;
}
L_end_2696: ;
if (((f_list_len_301(F->up, (*(P173)rt_nil_check(F->e_1003)).b_) > ((rt_int)0LL)) && ((*(P116)rt_nil_check(F->y_1004)).params_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1003)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1005) = (*(P116)rt_nil_check(F->y_1004)).result_;
(*F->r_1006) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1004)).cname_)), one_rt_gstr(40)), (*(P139)rt_nil_check(F->args_2685))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1014(struct f_greenc_1fr *up_, rt_gstr name_1008, P173 args_1009, rt_int line_1010, int is_stmt_1011, P121 *t_1012, P139 *r_1013) {
  struct f_builtin_1014fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1008 = cp_rt_gstr(name_1008);
F->args_1009 = args_1009;
F->line_1010 = line_1010;
F->is_stmt_1011 = is_stmt_1011;
F->t_1012 = t_1012;
F->r_1013 = r_1013;
F->aty_2698 = NULL;
F->lt_2699 = NULL;
F->a_2700 = NULL;
F->w_2701 = NULL;
F->lv_2702 = NULL;
F->lc_2703 = NULL;
F->ro_2704 = INT_MIN;
(*F->t_1012) = F->up->ty_void_160;
if (((F->up->pure_sym_210 != NULL) && (eq_rt_gstr(F->name_1008, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1008, rt_g_lit("GET", 3))))) {
f_fail_242(F->up, F->line_1010, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1008), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1008, rt_g_lit("PUT", 3))) {
if ((F->args_1009 == NULL)) {
f_fail_242(F->up, F->line_1010, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_779(F->up, F->args_1009, NULL, &F->aty_2698, &F->a_2700);
F->w_2701 = f_mk_221(F->up, rt_g_lit("0", 1));
if (((*(P173)rt_nil_check(F->args_1009)).next_ != NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->args_1009)).next_, F->up->ty_int_155, &F->lt_2699, &F->w_2701);
}
if (f_is_string_554(F->up, F->aty_2698)) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P139)rt_nil_check(F->a_2700))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2698)).kind_) == ((rt_int)11LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P139)rt_nil_check(F->a_2700))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2698)).kind_) == ((rt_int)1LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P139)rt_nil_check(F->a_2700))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2701))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2698)).kind_) == ((rt_int)2LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P139)rt_nil_check(F->a_2700))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2701))), one_rt_gstr(41)));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2698)).kind_) == ((rt_int)16LL))) {
f_fail_242(F->up, F->line_1010, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P121)rt_nil_check(F->aty_2698)).kind_) == ((rt_int)3LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P139)rt_nil_check(F->a_2700))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->w_2701))), rt_g_lit(", 0)", 4)));
} else {
f_fail_242(F->up, F->line_1010, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1008, rt_g_lit("GET", 3))) {
f_lvalue_735(F->up, F->args_1009, &F->lv_2702, &F->lt_2699, &F->lc_2703, &F->ro_2704);
 (void)rt_range(F->ro_2704, 0, 1);
if ((G_NV((*(P121)rt_nil_check(F->lt_2699)).kind_) == ((rt_int)11LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2702))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P121)rt_nil_check(F->lt_2699)).kind_) == ((rt_int)1LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2702))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P121)rt_nil_check(F->lt_2699)).kind_) == ((rt_int)3LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->lv_2702))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_242(F->up, F->line_1010, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1008, rt_g_lit("ABS", 3))) {
f_gexpr_779(F->up, F->args_1009, NULL, &(*F->t_1012), &F->a_2700);
if ((G_NV((*(P121)rt_nil_check((*F->t_1012))).kind_) == ((rt_int)1LL))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P139)rt_nil_check(F->a_2700))), one_rt_gstr(41)));
} else if (((G_NV((*(P121)rt_nil_check((*F->t_1012))).kind_) == ((rt_int)3LL)) || (G_NV((*(P121)rt_nil_check((*F->t_1012))).kind_) == ((rt_int)16LL)))) {
(*F->r_1013) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P139)rt_nil_check(F->a_2700))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, F->line_1010, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1162(F->up, F->name_1008, F->args_1009, F->line_1010, &(*F->t_1012), &(*F->r_1013));
}
ret_:

  return;
}

static P116 f_lookup_path_1016(struct f_greenc_1fr *up_, rt_gstr p_1015) {
  struct f_lookup_path_1016fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1015 = cp_rt_gstr(p_1015);
F->y_2705 = NULL;
F->m_2706 = NULL;
{ rt_int lo2711 = ({ rt_gstr at2708 = F->p_1015; at2708.lo; }), hi2712 = ({ rt_gstr at2709 = F->p_1015; at2709.hi; });
for (rt_int it2713 = hi2712; it2713 >= lo2711; it2713--) {
F->i_2710 = it2713;
if ((G_NV(({ rt_gstr ix2714 = F->p_1015; ix2714.p[rt_index(F->i_2710, ix2714.lo, ix2714.hi) - ix2714.lo]; })) == 46)) {
F->y_2705 = f_lookup_path_1016(F->up, ({ rt_gstr sl2718 = F->p_1015; rt_int l_ = ({ rt_gstr at2717 = F->p_1015; at2717.lo; }), h_ = rt_sub(F->i_2710, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2718.lo, sl2718.hi); rt_index(h_, sl2718.lo, sl2718.hi); } sl2718.p += l_ - sl2718.lo; sl2718.lo = l_; sl2718.hi = h_; sl2718; }));
if ((F->y_2705 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P116)rt_nil_check(F->y_2705)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2705)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2706 = (*(P116)rt_nil_check(F->y_2705)).members_;
while ((F->m_2706 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2706)).name_)), ({ rt_gstr sl2721 = F->p_1015; rt_int l_ = rt_add(F->i_2710, ((rt_int)1LL)), h_ = ({ rt_gstr at2720 = F->p_1015; at2720.hi; }); if (l_ <= h_) { rt_index(l_, sl2721.lo, sl2721.hi); rt_index(h_, sl2721.lo, sl2721.hi); } sl2721.p += l_ - sl2721.lo; sl2721.lo = l_; sl2721.hi = h_; sl2721; })) && (!G_NV((*(P116)rt_nil_check(F->m_2706)).hidden_)))) {
F->result_ = F->m_2706;
goto ret_;
}
F->m_2706 = (*(P116)rt_nil_check(F->m_2706)).mnext_;
}
L_end_2719: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2707: ;
F->result_ = f_lookup_409(F->up, F->p_1015);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1018(struct f_greenc_1fr *up_, P173 e_1017) {
  struct f_is_package_1018fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1017 = e_1017;
F->y_2722 = NULL;
if (((G_NV((*(P173)rt_nil_check(F->e_1017)).kind_) != ((rt_int)5LL)) && (G_NV((*(P173)rt_nil_check(F->e_1017)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P173)rt_nil_check(F->e_1017)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1017)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1017)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2722 = f_lookup_path_1016(F->up, f_path_of_338(F->up, F->e_1017));
if ((!(F->y_2722 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P116)rt_nil_check(F->y_2722)).kind_) == ((rt_int)8LL)) || (G_NV((*(P116)rt_nil_check(F->y_2722)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P116 f_member_of_1022(struct f_greenc_1fr *up_, rt_gstr p_1019, rt_gstr name_1020, rt_int line_1021) {
  struct f_member_of_1022fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1019 = cp_rt_gstr(p_1019);
F->name_1020 = cp_rt_gstr(name_1020);
F->line_1021 = line_1021;
F->y_2723 = NULL;
F->y_2723 = f_lookup_path_1016(F->up, F->p_1019);
F->m_2724 = NULL;
if (((F->y_2723 == NULL) || ((G_NV((*(P116)rt_nil_check(F->y_2723)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2723)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2724 = (*(P116)rt_nil_check(F->y_2723)).members_;
while ((F->m_2724 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2724)).name_)), F->name_1020) && (!G_NV((*(P116)rt_nil_check(F->m_2724)).hidden_)))) {
F->result_ = F->m_2724;
goto ret_;
}
F->m_2724 = (*(P116)rt_nil_check(F->m_2724)).mnext_;
}
L_end_2725: ;
if ((G_NV((*(P116)rt_nil_check(F->y_2723)).kind_) == ((rt_int)9LL))) {
F->m_2724 = f_lookup_entry_415(F->up, F->name_1020, F->y_2723);
if ((((F->m_2724 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2724)).kind_) == ((rt_int)10LL))) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->m_2724)).members_, F->y_2723))) {
F->result_ = F->m_2724;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1024(struct f_greenc_1fr *up_, P173 p_1023) {
  struct f_inside_package_1024fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1023 = p_1023;
F->l_2726 = NULL;
F->l_2726 = F->up->pkg_stack_206;
if ((F->p_1023 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2726 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P150)rt_nil_check(F->l_2726)).s_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_1023)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2726 = (*(P150)rt_nil_check(F->l_2726)).next_;
}
L_end_2727: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1027(struct f_greenc_1fr *up_, P116 y_1025, P116 *z_1026) {
  struct f_copy_sym_1027fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1025 = y_1025;
F->z_1026 = z_1026;
(*F->z_1026) = ({ R117 *cell2728 = rt_alloc(sizeof(R117)); *cell2728 = cp_R117(({ R117 ag2729; ag2729.kind_ = G_NV((*(P116)rt_nil_check(F->y_1025)).kind_); ag2729.name_ = (*(P116)rt_nil_check(F->y_1025)).name_; ag2729.t_ = (*(P116)rt_nil_check(F->y_1025)).t_; ag2729.c_ = (*(P116)rt_nil_check(F->y_1025)).c_; ag2729.access_path_ = (*(P116)rt_nil_check(F->y_1025)).access_path_; ag2729.cname_ = (*(P116)rt_nil_check(F->y_1025)).cname_; ag2729.ro_ = G_NV((*(P116)rt_nil_check(F->y_1025)).ro_); ag2729.mvalue_ = G_NV((*(P116)rt_nil_check(F->y_1025)).mvalue_); ag2729.hasmv_ = G_NV((*(P116)rt_nil_check(F->y_1025)).hasmv_); ag2729.decl_ = (*(P116)rt_nil_check(F->y_1025)).decl_; ag2729.params_ = (*(P116)rt_nil_check(F->y_1025)).params_; ag2729.result_ = (*(P116)rt_nil_check(F->y_1025)).result_; ag2729.depth_ = ((rt_int)0LL); ag2729.level_ = G_NV((*(P116)rt_nil_check(F->y_1025)).level_); ag2729.byref_ = G_NV((*(P116)rt_nil_check(F->y_1025)).byref_); ag2729.vrp_ = G_NV((*(P116)rt_nil_check(F->y_1025)).vrp_); ag2729.hidden_ = G_NV((*(P116)rt_nil_check(F->y_1025)).hidden_); ag2729.from_use_ = 0; ag2729.members_ = (*(P116)rt_nil_check(F->y_1025)).members_; ag2729.mnext_ = NULL; ag2729.chain_ = NULL; ag2729.stack_ = NULL; ag2729.flags_ = G_NV((*(P116)rt_nil_check(F->y_1025)).flags_); ag2729; })); (P116)cell2728; });
ret_:

  return;
}

static void f_complete_private_1030(struct f_greenc_1fr *up_, P121 ph_1028, P121 full_1029) {
  struct f_complete_private_1030fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1028 = ph_1028;
F->full_1029 = full_1029;
F->n_2730 = NULL;
F->n_2730 = (*(P121)rt_nil_check(F->ph_1028)).name_;
F->p_2731 = NULL;
F->p_2731 = (*(P121)rt_nil_check(F->ph_1028)).decl_;
as_R122(&(*(P121)rt_nil_check(F->ph_1028)), (*(P121)rt_nil_check(F->full_1029)));
(*(P121)rt_nil_check(F->ph_1028)).name_ = F->n_2730;
(*(P121)rt_nil_check(F->ph_1028)).priv_ = 1;
(*(P121)rt_nil_check(F->ph_1028)).decl_ = F->p_2731;
ret_:

  return;
}

static void f_package_spec_1032(struct f_greenc_1fr *up_, P173 e_1031) {
  struct f_package_spec_1032fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1031 = e_1031;
F->y_2732 = NULL;
F->m_2733 = NULL;
F->z_2734 = NULL;
F->saved_2735 = NULL;
F->saved_2735 = F->up->cur_pkg_207;
F->first_private_2736 = NULL;
F->y_2732 = f_new_sym_455(F->up, ((rt_int)8LL), (*(P173)rt_nil_check(F->e_1031)).name_);
(*(P116)rt_nil_check(F->y_2732)).decl_ = F->e_1031;
F->up->pkg_stack_206 = ({ R151 *cell2737 = rt_alloc(sizeof(R151)); *cell2737 = cp_R151(({ R151 ag2738; ag2738.s_ = (*(P173)rt_nil_check(F->e_1031)).name_; ag2738.next_ = F->up->pkg_stack_206; ag2738; })); (P150)cell2737; });
F->up->cur_pkg_207 = F->e_1031;
f_open_scope_451(F->up);
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->e_1031)).c_);
F->first_private_2736 = F->up->scope_stack_120;
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->e_1031)).d_);
F->m_2733 = F->up->scope_stack_120;
while (((F->m_2733 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2733)).depth_) == G_NV(F->up->depth_119)))) {
if (((G_NV((*(P116)rt_nil_check(F->m_2733)).kind_) == ((rt_int)2LL)) && (G_NV((*(P116)rt_nil_check(F->m_2733)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1031)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2733)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1027(F->up, F->m_2733, &F->z_2734);
(*(P116)rt_nil_check(F->z_2734)).hidden_ = (f_hidden_from_1035(F->up, F->m_2733, F->first_private_2736) || G_NV((*(P116)rt_nil_check(F->m_2733)).from_use_));
(*(P116)rt_nil_check(F->z_2734)).mnext_ = (*(P116)rt_nil_check(F->y_2732)).members_;
(*(P116)rt_nil_check(F->y_2732)).members_ = F->z_2734;
F->m_2733 = (*(P116)rt_nil_check(F->m_2733)).stack_;
}
L_end_2739: ;
f_close_scope_452(F->up);
F->up->pkg_stack_206 = (*(P150)rt_nil_check(F->up->pkg_stack_206)).next_;
F->up->cur_pkg_207 = F->saved_2735;
f_define_450(F->up, F->y_2732, G_NV((*(P173)rt_nil_check(F->e_1031)).line_));
ret_:

  return;
}

static int f_hidden_from_1035(struct f_greenc_1fr *up_, P116 m_1033, P116 first_private_1034) {
  struct f_hidden_from_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1033 = m_1033;
F->first_private_1034 = first_private_1034;
F->p_2740 = NULL;
F->p_2740 = F->up->scope_stack_120;
while ((F->p_2740 != NULL)) {
if ((F->p_2740 == F->first_private_1034)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2740 == F->m_1033)) {
F->result_ = 1;
goto ret_;
}
F->p_2740 = (*(P116)rt_nil_check(F->p_2740)).stack_;
}
L_end_2741: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1037(struct f_greenc_1fr *up_, P173 e_1036) {
  struct f_package_body_1037fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1036 = e_1036;
F->saved_labels_2742 = NULL;
F->y_2743 = NULL;
F->y_2743 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1036)).name_)));
F->m_2744 = NULL;
F->z_2745 = NULL;
F->saved_2746 = NULL;
F->saved_2746 = F->up->cur_pkg_207;
if (((F->y_2743 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2743)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1213(F->up, F->e_1036);
goto ret_;
}
if (((F->y_2743 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2743)).kind_) != ((rt_int)8LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1036)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1036)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_206 = ({ R151 *cell2747 = rt_alloc(sizeof(R151)); *cell2747 = cp_R151(({ R151 ag2748; ag2748.s_ = (*(P173)rt_nil_check(F->e_1036)).name_; ag2748.next_ = F->up->pkg_stack_206; ag2748; })); (P150)cell2747; });
F->up->cur_pkg_207 = (*(P116)rt_nil_check(F->y_2743)).decl_;
f_open_scope_451(F->up);
F->m_2744 = (*(P116)rt_nil_check(F->y_2743)).members_;
while ((F->m_2744 != NULL)) {
f_copy_sym_1027(F->up, F->m_2744, &F->z_2745);
(*(P116)rt_nil_check(F->z_2745)).hidden_ = 0;
f_define_450(F->up, F->z_2745, G_NV((*(P173)rt_nil_check(F->e_1036)).line_));
F->m_2744 = (*(P116)rt_nil_check(F->m_2744)).mnext_;
}
L_end_2749: ;
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->e_1036)).c_);
F->m_2744 = (*(P116)rt_nil_check(F->y_2743)).members_;
while ((F->m_2744 != NULL)) {
if ((((G_NV((*(P116)rt_nil_check(F->m_2744)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2744)).kind_) == ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->m_2744)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2745 = ({ A115 ix2751 = F->up->table_118; ix2751.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2744)).name_))), ix2751.lo, ix2751.hi) - ix2751.lo]; });
while ((F->z_2745 != NULL)) {
if (((*(P116)rt_nil_check(F->z_2745)).cname_ == (*(P116)rt_nil_check(F->m_2744)).cname_)) {
(*(P116)rt_nil_check(F->m_2744)).decl_ = (*(P116)rt_nil_check(F->z_2745)).decl_;
}
F->z_2745 = (*(P116)rt_nil_check(F->z_2745)).chain_;
}
L_end_2752: ;
if ((G_NV((*(P173)rt_nil_check((*(P116)rt_nil_check(F->m_2744)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1036)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2744)).name_))), rt_g_lit(" in package body ", 17)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1036)).name_))));
}
}
F->m_2744 = (*(P116)rt_nil_check(F->m_2744)).mnext_;
}
L_end_2750: ;
F->saved_labels_2742 = F->up->body_labels_190;
f_label_body_658(F->up, (*(P173)rt_nil_check(F->e_1036)).d_, (*(P173)rt_nil_check(F->e_1036)).e_);
f_guarded_678(F->up, NULL, (*(P173)rt_nil_check(F->e_1036)).d_, (*(P173)rt_nil_check(F->e_1036)).e_, G_NV((*(P173)rt_nil_check(F->e_1036)).line_));
F->up->body_labels_190 = F->saved_labels_2742;
f_close_scope_452(F->up);
F->up->pkg_stack_206 = (*(P150)rt_nil_check(F->up->pkg_stack_206)).next_;
F->up->cur_pkg_207 = F->saved_2746;
ret_:

  return;
}

static int f_use_visible_1039(struct f_greenc_1fr *up_, P116 old_1038) {
  struct f_use_visible_1039fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1038 = old_1038;
if ((F->old_1038 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P116)rt_nil_check(F->old_1038)).depth_) < G_NV(F->up->depth_119)) && (G_NV((*(P116)rt_nil_check(F->old_1038)).kind_) != ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->old_1038)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1041(struct f_greenc_1fr *up_, P173 e_1040) {
  struct f_use_clause_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1040 = e_1040;
F->n_2753 = NULL;
F->n_2753 = (*(P173)rt_nil_check(F->e_1040)).a_;
F->y_2754 = NULL;
F->m_2755 = NULL;
F->z_2756 = NULL;
F->old_2757 = NULL;
while ((F->n_2753 != NULL)) {
F->y_2754 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2753)).name_)));
if ((F->y_2754 == NULL)) {
if ((!eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2753)).name_)), rt_g_lit("TEXT_IO", 7)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->n_2753)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2753)).name_)), rt_g_lit(" is not a package", 17)));
}
} else if (((G_NV((*(P116)rt_nil_check(F->y_2754)).kind_) != ((rt_int)8LL)) && (G_NV((*(P116)rt_nil_check(F->y_2754)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->n_2753)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2753)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else {
F->m_2755 = (*(P116)rt_nil_check(F->y_2754)).members_;
while ((F->m_2755 != NULL)) {
F->old_2757 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2755)).name_)));
if (((!G_NV((*(P116)rt_nil_check(F->m_2755)).hidden_)) && f_use_visible_1039(F->up, F->old_2757))) {
f_copy_sym_1027(F->up, F->m_2755, &F->z_2756);
(*(P116)rt_nil_check(F->z_2756)).from_use_ = 1;
f_define_450(F->up, F->z_2756, G_NV((*(P173)rt_nil_check(F->n_2753)).line_));
}
F->m_2755 = (*(P116)rt_nil_check(F->m_2755)).mnext_;
}
L_end_2759: ;
}
F->n_2753 = (*(P173)rt_nil_check(F->n_2753)).next_;
}
L_end_2758: ;
ret_:

  return;
}

static void f_fits_1046(struct f_greenc_1fr *up_, P116 y_1042, P173 args_1043, P121 want_1044, int *ok_1045) {
  struct f_fits_1046fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1042 = y_1042;
F->args_1043 = args_1043;
F->want_1044 = want_1044;
F->ok_1045 = ok_1045;
F->pm_2760 = NULL;
F->pm_2760 = (*(P116)rt_nil_check(F->y_1042)).params_;
F->a_2761 = NULL;
F->t_2762 = NULL;
F->c_2763 = NULL;
F->v_2764 = NULL;
F->ro_2765 = INT_MIN;
F->saved_2766 = NULL;
F->saved_2766 = F->up->code_135;
F->used_2767 = INT64_MIN;
F->used_2767 = ((rt_int)0LL);
(*F->ok_1045) = 1;
F->up->trial_154 = rt_add(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = f_new_buffer_243(F->up);
{
{ rt_frame xf2769;
if (RT_TRY(xf2769)) {
while ((G_NV((*F->ok_1045)) && (F->pm_2760 != NULL))) {
F->a_2761 = f_actual_for_977(F->up, F->args_1043, F->pm_2760, (*(P116)rt_nil_check(F->y_1042)).params_);
if ((F->a_2761 == NULL)) {
(*F->ok_1045) = ((*(P1761)rt_nil_check(F->pm_2760)).dflt_ != NULL);
} else {
F->used_2767 = rt_add(G_NV(F->used_2767), ((rt_int)1LL));
if ((((G_NV((*(P173)rt_nil_check(F->a_2761)).flag_) != ((rt_int)0LL)) && (G_NV((*(P173)rt_nil_check(F->a_2761)).flag_) != ((rt_int)4LL))) && (G_NV((*(P173)rt_nil_check(F->a_2761)).flag_) != G_NV((*(P1761)rt_nil_check(F->pm_2760)).mode_)))) {
(*F->ok_1045) = 0;
} else if ((G_NV((*(P1761)rt_nil_check(F->pm_2760)).mode_) == ((rt_int)1LL))) {
f_gexpr_779(F->up, F->a_2761, (*(P1761)rt_nil_check(F->pm_2760)).t_, &F->t_2762, &F->v_2764);
(*F->ok_1045) = (f_same_429(F->up, F->t_2762, (*(P1761)rt_nil_check(F->pm_2760)).t_) || ((G_NV((*(P121)rt_nil_check(F->t_2762)).kind_) == ((rt_int)10LL)) && (G_NV((*(P121)rt_nil_check((*(P1761)rt_nil_check(F->pm_2760)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_735(F->up, F->a_2761, &F->v_2764, &F->t_2762, &F->c_2763, &F->ro_2765);
 (void)rt_range(F->ro_2765, 0, 1);
(*F->ok_1045) = f_same_429(F->up, F->t_2762, (*(P1761)rt_nil_check(F->pm_2760)).t_);
}
}
F->pm_2760 = (*(P1761)rt_nil_check(F->pm_2760)).next_;
}
L_end_2771: ;
if ((G_NV(F->used_2767) != f_list_len_301(F->up, F->args_1043))) {
(*F->ok_1045) = 0;
}
if (((G_NV((*F->ok_1045)) && (F->want_1044 != NULL)) && (G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1042)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1045) = (f_same_429(F->up, (*(P116)rt_nil_check(F->y_1042)).result_, F->want_1044) || (G_NV((*(P121)rt_nil_check(F->want_1044)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2769);
} else {
RT_POP(xf2769);
int x2770 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2770);
if (0 || x2770 == ex_compile_error_107) {
(*F->ok_1045) = 0;
} else {
rt_raise(x2770);
}
}
}

}
L_end_2768: ;
F->up->trial_154 = rt_sub(G_NV(F->up->trial_154), ((rt_int)1LL));
F->up->code_135 = F->saved_2766;
ret_:

  return;
}

static int f_is_builtin_1048(struct f_greenc_1fr *up_, rt_gstr n_1047) {
  struct f_is_builtin_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1047 = cp_rt_gstr(n_1047);
F->result_ = (((eq_rt_gstr(F->n_1047, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1047, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1047, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1047, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1055(struct f_greenc_1fr *up_, rt_gstr name_1049, P173 args_1050, int is_stmt_1051, P121 want_1052, rt_int line_1053, P116 *y_1054) {
  struct f_resolve_overload_1055fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1049 = cp_rt_gstr(name_1049);
F->args_1050 = args_1050;
F->is_stmt_1051 = is_stmt_1051;
F->want_1052 = want_1052;
F->line_1053 = line_1053;
F->y_1054 = y_1054;
F->z_2772 = NULL;
F->w_2773 = NULL;
F->first_2774 = NULL;
F->found_2775 = NULL;
F->n_2776 = INT64_MIN;
F->n_2776 = ((rt_int)0LL);
F->ok_2777 = INT_MIN;
F->hidden_2778 = INT_MIN;
{ rt_int lo2781 = ((rt_int)1LL), hi2782 = ((rt_int)2LL);
for (rt_int it2783 = lo2781; it2783 <= hi2782; it2783++) {
F->pass_2780 = it2783;
F->z_2772 = ({ A115 ix2784 = F->up->table_118; ix2784.p[rt_index(f_hash_407(F->up, F->name_1049), ix2784.lo, ix2784.hi) - ix2784.lo]; });
F->n_2776 = ((rt_int)0LL);
F->found_2775 = NULL;
while ((F->z_2772 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2772)).name_)), F->name_1049) && ((G_NV((*(P116)rt_nil_check(F->z_2772)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_2772)).kind_) == ((rt_int)4LL))))) {
if ((F->first_2774 == NULL)) {
F->first_2774 = F->z_2772;
}
F->hidden_2778 = 0;
F->w_2773 = ({ A115 ix2786 = F->up->table_118; ix2786.p[rt_index(f_hash_407(F->up, F->name_1049), ix2786.lo, ix2786.hi) - ix2786.lo]; });
while ((F->w_2773 != F->z_2772)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->w_2773)).name_)), F->name_1049) && ((G_NV((*(P116)rt_nil_check(F->w_2773)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->w_2773)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1058(F->up, F->w_2773, F->z_2772)) {
F->hidden_2778 = 1;
}
}
F->w_2773 = (*(P116)rt_nil_check(F->w_2773)).chain_;
}
L_end_2787: ;
if (((!G_NV(F->hidden_2778)) && ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->z_2772)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1051))) {
if ((F->pass_2780 == ((rt_int)1LL))) {
f_fits_1046(F->up, F->z_2772, F->args_1050, F->want_1052, &F->ok_2777);
 (void)rt_range(F->ok_2777, 0, 1);
} else {
f_fits_1046(F->up, F->z_2772, F->args_1050, NULL, &F->ok_2777);
 (void)rt_range(F->ok_2777, 0, 1);
}
if (G_NV(F->ok_2777)) {
if ((F->found_2775 != NULL)) {
f_fail_242(F->up, F->line_1053, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1049), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2775 = F->z_2772;
}
}
}
F->z_2772 = (*(P116)rt_nil_check(F->z_2772)).chain_;
}
L_end_2785: ;
if ((F->found_2775 != NULL)) {
(*F->y_1054) = F->found_2775;
goto ret_;
}
}
}
L_end_2779: ;
if (f_is_builtin_1048(F->up, F->name_1049)) {
(*F->y_1054) = NULL;
goto ret_;
}
F->z_2772 = ({ A115 ix2788 = F->up->table_118; ix2788.p[rt_index(f_hash_407(F->up, F->name_1049), ix2788.lo, ix2788.hi) - ix2788.lo]; });
while ((F->z_2772 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2772)).name_)), F->name_1049) && ((G_NV((*(P116)rt_nil_check(F->z_2772)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_2772)).kind_) == ((rt_int)4LL))))) {
F->n_2776 = rt_add(G_NV(F->n_2776), ((rt_int)1LL));
}
F->z_2772 = (*(P116)rt_nil_check(F->z_2772)).chain_;
}
L_end_2789: ;
if ((G_NV(F->n_2776) > ((rt_int)1LL))) {
f_fail_242(F->up, F->line_1053, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1049), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1054) = F->first_2774;
ret_:

  return;
}

static int f_same_profile_1058(struct f_greenc_1fr *up_, P116 a_1056, P116 b_1057) {
  struct f_same_profile_1058fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1056 = a_1056;
F->b_1057 = b_1057;
if (((!f_same_types_441(F->up, (*(P116)rt_nil_check(F->a_1056)).params_, (*(P116)rt_nil_check(F->b_1057)).params_)) || (!f_same_429(F->up, (*(P116)rt_nil_check(F->a_1056)).result_, (*(P116)rt_nil_check(F->b_1057)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P116)rt_nil_check(F->a_1056)).cname_ != NULL) && ((*(P116)rt_nil_check(F->b_1057)).cname_ != NULL))) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->a_1056)).cname_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_1057)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_444(F->up, (*(P116)rt_nil_check(F->a_1056)).params_, (*(P116)rt_nil_check(F->b_1057)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1066(struct f_greenc_1fr *up_, rt_gstr p_1059, rt_gstr name_1060, P173 args_1061, int is_stmt_1062, P121 want_1063, rt_int line_1064, P116 *y_1065) {
  struct f_resolve_member_overload_1066fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1059 = cp_rt_gstr(p_1059);
F->name_1060 = cp_rt_gstr(name_1060);
F->args_1061 = args_1061;
F->is_stmt_1062 = is_stmt_1062;
F->want_1063 = want_1063;
F->line_1064 = line_1064;
F->y_1065 = y_1065;
F->pk_2790 = NULL;
F->pk_2790 = f_lookup_path_1016(F->up, F->p_1059);
F->z_2791 = NULL;
F->found_2792 = NULL;
F->n_2793 = INT64_MIN;
F->n_2793 = ((rt_int)0LL);
F->ok_2794 = INT_MIN;
if ((F->pk_2790 == NULL)) {
goto ret_;
}
{ rt_int lo2797 = ((rt_int)1LL), hi2798 = ((rt_int)2LL);
for (rt_int it2799 = lo2797; it2799 <= hi2798; it2799++) {
F->pass_2796 = it2799;
F->z_2791 = (*(P116)rt_nil_check(F->pk_2790)).members_;
F->n_2793 = ((rt_int)0LL);
F->found_2792 = NULL;
while ((F->z_2791 != NULL)) {
if (((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_2791)).name_)), F->name_1060) && ((G_NV((*(P116)rt_nil_check(F->z_2791)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->z_2791)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P116)rt_nil_check(F->z_2791)).hidden_)))) {
F->n_2793 = rt_add(G_NV(F->n_2793), ((rt_int)1LL));
if (((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->z_2791)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1062)) {
if ((F->pass_2796 == ((rt_int)1LL))) {
f_fits_1046(F->up, F->z_2791, F->args_1061, F->want_1063, &F->ok_2794);
 (void)rt_range(F->ok_2794, 0, 1);
} else {
f_fits_1046(F->up, F->z_2791, F->args_1061, NULL, &F->ok_2794);
 (void)rt_range(F->ok_2794, 0, 1);
}
if (G_NV(F->ok_2794)) {
if (((F->found_2792 != NULL) && (!f_same_profile_1058(F->up, F->found_2792, F->z_2791)))) {
f_fail_242(F->up, F->line_1064, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1060), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2792 = F->z_2791;
}
}
}
F->z_2791 = (*(P116)rt_nil_check(F->z_2791)).mnext_;
}
L_end_2800: ;
if ((F->found_2792 != NULL)) {
(*F->y_1065) = F->found_2792;
goto ret_;
}
}
}
L_end_2795: ;
if ((G_NV(F->n_2793) > ((rt_int)1LL))) {
f_fail_242(F->up, F->line_1064, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1060), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1072(struct f_greenc_1fr *up_, P173 e_1067, P121 want_1068, P121 *t_1069, P139 *r_1070, int *done_1071) {
  struct f_user_operator_1072fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1067 = e_1067;
F->want_1068 = want_1068;
F->t_1069 = t_1069;
F->r_1070 = r_1070;
F->done_1071 = done_1071;
F->op_2801 = NULL;
F->op_2801 = (*(P173)rt_nil_check(F->e_1067)).name_;
F->negate_2802 = INT_MIN;
F->negate_2802 = 0;
F->y_2803 = NULL;
F->call_2804 = NULL;
F->fname_2805 = NULL;
F->l_2806 = NULL;
F->rt_2807 = NULL;
F->ok_2808 = INT_MIN;
(*F->done_1071) = 0;
if (eq_rt_gstr((*(P139)rt_nil_check(F->op_2801)), rt_g_lit("/=", 2))) {
F->op_2801 = f_mk_221(F->up, rt_g_lit("=", 1));
F->negate_2802 = 1;
}
if ((f_lookup_409(F->up, (*(P139)rt_nil_check(F->op_2801))) == NULL)) {
goto ret_;
}
F->l_2806 = f_nn_295(F->up, G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).a_)).kind_), G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).a_)).line_));
as_R174(&(*(P173)rt_nil_check(F->l_2806)), (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).a_)));
(*(P173)rt_nil_check(F->l_2806)).next_ = NULL;
(*(P173)rt_nil_check(F->l_2806)).formal_ = NULL;
(*(P173)rt_nil_check(F->l_2806)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P173)rt_nil_check(F->e_1067)).kind_) == ((rt_int)7LL))) {
F->rt_2807 = f_nn_295(F->up, G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).b_)).kind_), G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).b_)).line_));
as_R174(&(*(P173)rt_nil_check(F->rt_2807)), (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1067)).b_)));
(*(P173)rt_nil_check(F->rt_2807)).next_ = NULL;
(*(P173)rt_nil_check(F->rt_2807)).formal_ = NULL;
(*(P173)rt_nil_check(F->rt_2807)).flag_ = ((rt_int)0LL);
(*(P173)rt_nil_check(F->l_2806)).next_ = F->rt_2807;
}
F->y_2803 = ({ A115 ix2809 = F->up->table_118; ix2809.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check(F->op_2801))), ix2809.lo, ix2809.hi) - ix2809.lo]; });
while ((F->y_2803 != NULL)) {
if ((eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2803)).name_)), (*(P139)rt_nil_check(F->op_2801))) && (G_NV((*(P116)rt_nil_check(F->y_2803)).kind_) == ((rt_int)3LL)))) {
f_fits_1046(F->up, F->y_2803, F->l_2806, NULL, &F->ok_2808);
 (void)rt_range(F->ok_2808, 0, 1);
if (G_NV(F->ok_2808)) {
F->fname_2805 = f_nn_295(F->up, ((rt_int)5LL), G_NV((*(P173)rt_nil_check(F->e_1067)).line_));
(*(P173)rt_nil_check(F->fname_2805)).name_ = F->op_2801;
F->call_2804 = f_nn_295(F->up, ((rt_int)8LL), G_NV((*(P173)rt_nil_check(F->e_1067)).line_));
(*(P173)rt_nil_check(F->call_2804)).a_ = F->fname_2805;
(*(P173)rt_nil_check(F->call_2804)).b_ = F->l_2806;
F->up->call_want_209 = NULL;
f_gcall_with_1007(F->up, F->call_2804, F->y_2803, &(*F->t_1069), &(*F->r_1070));
if (G_NV(F->negate_2802)) {
(*F->r_1070) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P139)rt_nil_check((*F->r_1070)))), one_rt_gstr(41)));
}
(*F->done_1071) = 1;
goto ret_;
}
}
F->y_2803 = (*(P116)rt_nil_check(F->y_2803)).chain_;
}
L_end_2810: ;
ret_:

  return;
}

static void f_task_p_1074(struct f_greenc_1fr *up_, P173 *res_1073) {
  struct f_task_p_1074fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1073 = res_1073;
F->x_2811 = NULL;
F->r_2812 = NULL;
F->line_2813 = INT64_MIN;
F->line_2813 = f_cur_line_302(F->up);
f_expect_kw_317(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_304(F->up, rt_g_lit("BODY", 4))) {
f_skip_315(F->up);
F->x_2811 = f_nn_295(F->up, ((rt_int)51LL), G_NV(F->line_2813));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2811)).name_);
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_body_part_383(F->up, F->x_2811);
} else {
F->x_2811 = f_nn_295(F->up, ((rt_int)50LL), G_NV(F->line_2813));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2811)).name_);
if (((f_at_kw_304(F->up, rt_g_lit("IS", 2)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1207(F->up, F->x_2811, &(*F->res_1073));
goto ret_;
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_2811)).a_);
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2811)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2812 = f_nn_295(F->up, ((rt_int)80LL), G_NV(F->line_2813));
(*(P173)rt_nil_check(F->r_2812)).name_ = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2811)).a_)).name_;
(*(P173)rt_nil_check(F->x_2811)).a_ = F->r_2812;
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_304(F->up, rt_g_lit("IS", 2))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_2811)).c_);
if (f_at_kw_304(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_315(F->up);
f_decl_part_371(F->up, &(*(P173)rt_nil_check(F->x_2811)).d_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1073) = F->x_2811;
ret_:

  return;
}

static void f_entry_p_1076(struct f_greenc_1fr *up_, P173 *res_1075) {
  struct f_entry_p_1076fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1075 = res_1075;
F->x_2814 = NULL;
f_expect_kw_317(F->up, rt_g_lit("ENTRY", 5));
F->x_2814 = f_nn_295(F->up, ((rt_int)52LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2814)).name_);
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_315(F->up);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->x_2814)).b_);
} else {
f_discrete_range_p_357(F->up, &(*(P173)rt_nil_check(F->x_2814)).b_);
}
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_2814)).a_);
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1075) = F->x_2814;
ret_:

  return;
}

static void f_accept_p_1078(struct f_greenc_1fr *up_, P173 *res_1077) {
  struct f_accept_p_1078fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1077 = res_1077;
F->x_2815 = NULL;
f_expect_kw_317(F->up, rt_g_lit("ACCEPT", 6));
F->x_2815 = f_nn_295(F->up, ((rt_int)34LL), f_cur_line_302(F->up));
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->x_2815)).name_);
if ((f_at_op_306(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->x_2815)).c_);
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->x_2815)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("DO", 2))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_2815)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_2815)).b_);
f_expect_kw_317(F->up, rt_g_lit("END", 3));
if (f_at_kind_308(F->up, ((rt_int)1LL))) {
f_skip_315(F->up);
}
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1077) = F->x_2815;
ret_:

  return;
}

static void f_delay_p_1080(struct f_greenc_1fr *up_, P173 *res_1079) {
  struct f_delay_p_1080fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1079 = res_1079;
F->x_2816 = NULL;
f_expect_kw_317(F->up, rt_g_lit("DELAY", 5));
F->x_2816 = f_nn_295(F->up, ((rt_int)32LL), f_cur_line_302(F->up));
f_simple_expr_340(F->up, &(*(P173)rt_nil_check(F->x_2816)).a_);
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1079) = F->x_2816;
ret_:

  return;
}

static void f_designators_1082(struct f_greenc_1fr *up_, P173 *res_1081) {
  struct f_designators_1082fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1081 = res_1081;
F->head_2817 = NULL;
F->tail_2818 = NULL;
F->n_2819 = NULL;
for (;;) {
f_name_p_353(F->up, &F->n_2819);
f_append_299(F->up, &F->head_2817, &F->tail_2818, F->n_2819);
if ((!f_at_op_306(F->up, rt_g_lit(",", 1)))) {
goto L_end_2820;
}
f_skip_315(F->up);
}
L_end_2820: ;
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*F->res_1081) = F->head_2817;
ret_:

  return;
}

static void f_parse_task_statement_1084(struct f_greenc_1fr *up_, P173 *res_1083) {
  struct f_parse_task_statement_1084fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1083 = res_1083;
F->x_2821 = NULL;
F->alt_2822 = NULL;
F->head_2823 = NULL;
F->tail_2824 = NULL;
F->line_2825 = INT64_MIN;
F->line_2825 = f_cur_line_302(F->up);
(*F->res_1083) = NULL;
if (f_at_kw_304(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_315(F->up);
F->x_2821 = f_nn_295(F->up, ((rt_int)33LL), G_NV(F->line_2825));
f_designators_1082(F->up, &(*(P173)rt_nil_check(F->x_2821)).a_);
(*F->res_1083) = F->x_2821;
} else if (f_at_kw_304(F->up, rt_g_lit("ABORT", 5))) {
f_skip_315(F->up);
F->x_2821 = f_nn_295(F->up, ((rt_int)36LL), G_NV(F->line_2825));
f_designators_1082(F->up, &(*(P173)rt_nil_check(F->x_2821)).a_);
(*F->res_1083) = F->x_2821;
} else if (f_at_kw_304(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1080(F->up, &(*F->res_1083));
} else if (f_at_kw_304(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1078(F->up, &(*F->res_1083));
} else if (f_at_kw_304(F->up, rt_g_lit("SELECT", 6))) {
f_skip_315(F->up);
F->x_2821 = f_nn_295(F->up, ((rt_int)35LL), G_NV(F->line_2825));
for (;;) {
F->alt_2822 = f_nn_295(F->up, ((rt_int)64LL), f_cur_line_302(F->up));
if (f_at_kw_304(F->up, rt_g_lit("WHEN", 4))) {
f_skip_315(F->up);
f_expr_332(F->up, &(*(P173)rt_nil_check(F->alt_2822)).a_);
f_expect_op_319(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_304(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1078(F->up, &(*(P173)rt_nil_check(F->alt_2822)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1080(F->up, &(*(P173)rt_nil_check(F->alt_2822)).b_);
} else {
f_perror_314(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_390(F->up, &(*(P173)rt_nil_check(F->alt_2822)).c_);
f_append_299(F->up, &F->head_2823, &F->tail_2824, F->alt_2822);
if ((!f_at_kw_304(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2826;
}
f_skip_315(F->up);
}
L_end_2826: ;
if (f_at_kw_304(F->up, rt_g_lit("ELSE", 4))) {
f_skip_315(F->up);
(*(P173)rt_nil_check(F->x_2821)).flag_ = ((rt_int)1LL);
f_statements_390(F->up, &(*(P173)rt_nil_check(F->x_2821)).b_);
}
f_expect_kw_317(F->up, rt_g_lit("END", 3));
f_expect_kw_317(F->up, rt_g_lit("SELECT", 6));
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->x_2821)).a_ = F->head_2823;
(*F->res_1083) = F->x_2821;
}
ret_:

  return;
}

static void f_path_at_1088(struct f_greenc_1fr *up_, rt_int level_1085, rt_gstr field_1086, P139 *r_1087) {
  struct f_path_at_1088fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1085 = level_1085;
F->field_1086 = cp_rt_gstr(field_1086);
F->r_1087 = r_1087;
if ((F->level_1085 <= ((rt_int)0LL))) {
(*F->r_1087) = f_mk_221(F->up, F->field_1086);
goto ret_;
}
(*F->r_1087) = f_mk_221(F->up, rt_g_lit("F", 1));
{ rt_int lo2829 = ((rt_int)1LL), hi2830 = rt_sub(G_NV(F->up->cur_level_138), F->level_1085);
for (rt_int it2831 = lo2829; it2831 <= hi2830; it2831++) {
F->i_2828 = it2831;
(*F->r_1087) = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*F->r_1087))), rt_g_lit("->up", 4)));
}
}
L_end_2827: ;
(*F->r_1087) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->r_1087))), rt_g_lit("->", 2)), F->field_1086));
ret_:

  return;
}

static int f_is_task_name_1090(struct f_greenc_1fr *up_, rt_gstr n_1089) {
  struct f_is_task_name_1090fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1089 = cp_rt_gstr(n_1089);
F->y_2832 = NULL;
F->y_2832 = f_lookup_409(F->up, F->n_1089);
if ((!(F->y_2832 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_2832)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1094(struct f_greenc_1fr *up_, P173 e_1091, P116 *y_1092, P173 *ix_1093) {
  struct f_task_of_1094fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1091 = e_1091;
F->y_1092 = y_1092;
F->ix_1093 = ix_1093;
F->n_2833 = NULL;
F->n_2833 = F->e_1091;
(*F->ix_1093) = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1091)).kind_) == ((rt_int)8LL))) {
F->n_2833 = (*(P173)rt_nil_check(F->e_1091)).a_;
(*F->ix_1093) = (*(P173)rt_nil_check(F->e_1091)).b_;
}
if ((G_NV((*(P173)rt_nil_check(F->n_2833)).kind_) != ((rt_int)5LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1091)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1092) = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2833)).name_)));
if ((((*F->y_1092) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1092))).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1091)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2833)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1093) != NULL) && ((*(P116)rt_nil_check((*F->y_1092))).c_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1091)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2833)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1096(struct f_greenc_1fr *up_, P139 *r_1095) {
  struct f_own_index_1096fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1095 = r_1095;
F->y_2834 = NULL;
F->y_2834 = f_lookup_409(F->up, rt_g_lit("INDEX_", 6));
if ((F->y_2834 == NULL)) {
f_fail_242(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_716(F->up, F->y_2834, &(*F->r_1095));
ret_:

  return;
}

static void f_member_1101(struct f_greenc_1fr *up_, P116 y_1097, rt_gstr arr_1098, rt_gstr i_1099, P139 *r_1100) {
  struct f_member_1101fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1097 = y_1097;
F->arr_1098 = cp_rt_gstr(arr_1098);
F->i_1099 = cp_rt_gstr(i_1099);
F->r_1100 = r_1100;
F->lo_2835 = NULL;
F->hi_2836 = NULL;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1097)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1097)).cname_)), rt_g_lit("lo", 2)), &F->lo_2835);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1097)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1097)).cname_)), rt_g_lit("hi", 2)), &F->hi_2836);
(*F->r_1100) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1098, rt_g_lit("[rt_index(", 10)), F->i_1099), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lo_2835))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hi_2836))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->lo_2835))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1104(struct f_greenc_1fr *up_, P116 y_1102, P139 *r_1103) {
  struct f_act_path_1104fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1102 = y_1102;
F->r_1103 = r_1103;
F->i_2837 = NULL;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1102)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1102)).cname_)), rt_g_lit("act", 3)), &(*F->r_1103));
if (((*(P116)rt_nil_check(F->y_1102)).c_ != NULL)) {
f_own_index_1096(F->up, &F->i_2837);
f_member_1101(F->up, F->y_1102, (*(P139)rt_nil_check((*F->r_1103))), (*(P139)rt_nil_check(F->i_2837)), &(*F->r_1103));
}
ret_:

  return;
}

static void f_act_path_i_1108(struct f_greenc_1fr *up_, P116 y_1105, rt_gstr i_1106, P139 *r_1107) {
  struct f_act_path_i_1108fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1105 = y_1105;
F->i_1106 = cp_rt_gstr(i_1106);
F->r_1107 = r_1107;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1105)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1105)).cname_)), rt_g_lit("act", 3)), &(*F->r_1107));
f_member_1101(F->up, F->y_1105, (*(P139)rt_nil_check((*F->r_1107))), F->i_1106, &(*F->r_1107));
ret_:

  return;
}

static void f_entry_path_1112(struct f_greenc_1fr *up_, P116 y_1109, rt_gstr i_1110, P139 *r_1111) {
  struct f_entry_path_1112fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1109 = y_1109;
F->i_1110 = cp_rt_gstr(i_1110);
F->r_1111 = r_1111;
F->own_2838 = NULL;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1109)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1109)).access_path_)), &(*F->r_1111));
if (((((*(P116)rt_nil_check(F->y_1109)).members_ != NULL) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_1109)).members_)).c_ != NULL)) && (!G_NV((*(P116)rt_nil_check(F->y_1109)).ro_)))) {
if ((({ rt_gstr at2839 = F->i_1110; at2839.hi >= at2839.lo ? at2839.hi - at2839.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1096(F->up, &F->own_2838);
f_member_1101(F->up, (*(P116)rt_nil_check(F->y_1109)).members_, (*(P139)rt_nil_check((*F->r_1111))), (*(P139)rt_nil_check(F->own_2838)), &(*F->r_1111));
} else {
f_member_1101(F->up, (*(P116)rt_nil_check(F->y_1109)).members_, (*(P139)rt_nil_check((*F->r_1111))), F->i_1110, &(*F->r_1111));
}
}
ret_:

  return;
}

static void f_declare_slot_1115(struct f_greenc_1fr *up_, rt_gstr ctype_name_1113, rt_gstr field_1114) {
  struct f_declare_slot_1115fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1113 = cp_rt_gstr(ctype_name_1113);
F->field_1114 = cp_rt_gstr(field_1114);
if (G_NV(F->up->in_func_137)) {
f_put_to_246(F->up, F->up->fields_buf_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1113), one_rt_gstr(32)), F->field_1114), one_rt_gstr(59)));
} else {
f_put_to_246(F->up, F->up->out_globals_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1113), one_rt_gstr(32)), F->field_1114), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1117(struct f_greenc_1fr *up_, P173 e_1116) {
  struct f_task_decl_1117fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1116 = e_1116;
if ((G_NV((*(P173)rt_nil_check(F->e_1116)).kind_) == ((rt_int)50LL))) {
f_task_spec_1129(F->up, F->e_1116);
} else if ((G_NV((*(P173)rt_nil_check(F->e_1116)).kind_) == ((rt_int)51LL))) {
f_task_body_1133(F->up, F->e_1116);
} else if ((G_NV((*(P173)rt_nil_check(F->e_1116)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1131(F->up, F->e_1116);
} else {
f_generic_decl_1209(F->up, F->e_1116);
}
ret_:

  return;
}

static void f_family_arg_struct_1118(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1118fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_198))) {
F->up->famarg_done_198 = 1;
f_put_to_246(F->up, F->up->out_types_127, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1122(struct f_greenc_1fr *up_, P173 b_1119, P116 y_1120, P139 x_1121) {
  struct f_family_bounds_1122fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1119 = b_1119;
F->y_1120 = y_1120;
F->x_1121 = x_1121;
F->lo_2840 = NULL;
F->hi_2841 = NULL;
F->v_2842 = NULL;
F->d_2843 = NULL;
F->vt_2844 = NULL;
F->c_2845 = NULL;
(*(P116)rt_nil_check(F->y_1120)).c_ = f_new_cons_458(F->up);
f_declare_slot_1115(F->up, rt_g_lit("rt_entry *", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1120)).access_path_)));
f_declare_slot_1115(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1120)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1115(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1120)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1120)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1120)).cname_)), rt_g_lit("flo", 3)), &F->lo_2840);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1120)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1120)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2841);
f_discrete_bounds_507(F->up, F->b_1119, NULL, &F->vt_2844, &F->v_2842, &F->d_2843);
(*(P116)rt_nil_check(F->y_1120)).t_ = F->vt_2844;
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->lo_2840)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2842))), rt_g_lit("; ", 2)), (*(P139)rt_nil_check(F->hi_2841))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->d_2843))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_1121)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P139)rt_nil_check(F->hi_2841))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2840))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2841))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2840))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P139)rt_nil_check(F->hi_2841))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2840))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P139)rt_nil_check(F->x_1121))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1127(struct f_greenc_1fr *up_, P116 y_1123, rt_gstr base_1124, rt_gstr i_1125, P139 *r_1126) {
  struct f_entry_family_slot_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1123 = y_1123;
F->base_1124 = cp_rt_gstr(base_1124);
F->i_1125 = cp_rt_gstr(i_1125);
F->r_1126 = r_1126;
F->lo_2846 = NULL;
F->hi_2847 = NULL;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1123)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1123)).cname_)), rt_g_lit("flo", 3)), &F->lo_2846);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1123)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1123)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2847);
(*F->r_1126) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1124, rt_g_lit("[rt_index(", 10)), F->i_1125), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->lo_2846))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->hi_2847))), rt_g_lit(") - ", 4)), (*(P139)rt_nil_check(F->lo_2846))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1129(struct f_greenc_1fr *up_, P173 e_1128) {
  struct f_task_spec_1129fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1128 = e_1128;
F->has_procs_2848 = INT_MIN;
F->has_procs_2848 = 0;
F->saved_defer_2849 = INT_MIN;
F->fields_2850 = NULL;
F->ct_2851 = NULL;
F->pm_2852 = NULL;
F->fp_2853 = NULL;
F->flo_2854 = NULL;
F->fhi_2855 = NULL;
F->y_2856 = NULL;
F->m_2857 = NULL;
F->z_2858 = NULL;
F->saved_2859 = NULL;
F->saved_2859 = F->up->cur_task_196;
F->d_2860 = NULL;
F->v_2861 = NULL;
F->p_2862 = NULL;
F->p2_2863 = NULL;
F->vt_2864 = NULL;
F->r_2865 = NULL;
F->y_2856 = f_new_sym_455(F->up, ((rt_int)9LL), (*(P173)rt_nil_check(F->e_1128)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1128)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2856)).cname_);
(*(P116)rt_nil_check(F->y_2856)).decl_ = F->e_1128;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_2856)).level_ = G_NV(F->up->cur_level_138);
}
(*(P116)rt_nil_check(F->y_2856)).access_path_ = (*(P116)rt_nil_check(F->y_2856)).cname_;
f_declare_slot_1115(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("decl", 4)));
if (((*(P173)rt_nil_check(F->e_1128)).a_ != NULL)) {
(*(P116)rt_nil_check(F->y_2856)).c_ = f_new_cons_458(F->up);
f_declare_slot_1115(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1115(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1115(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_507(F->up, (*(P173)rt_nil_check(F->e_1128)).a_, NULL, &F->vt_2864, &F->v_2861, &F->d_2860);
(*(P116)rt_nil_check(F->y_2856)).t_ = F->vt_2864;
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("lo", 2)), &F->p_2862);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p_2862)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2861))), one_rt_gstr(59)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("hi", 2)), &F->p2_2863);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->p2_2863)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->d_2860))), one_rt_gstr(59)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("act", 3)), &F->v_2861);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->v_2861)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P139)rt_nil_check(F->p2_2863))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->p_2862))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->p2_2863))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->p_2862))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1118(F->up);
} else {
f_declare_slot_1115(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_246(F->up, F->up->out_protos_130, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_137))) {
f_put_to_246(F->up, F->up->out_awaits_203, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_))), rt_g_lit("decl);", 6)));
}
f_open_scope_451(F->up);
F->up->cur_task_196 = F->y_2856;
F->saved_defer_2849 = G_NV(F->up->defer_entry_structs_202);
F->up->defer_entry_structs_202 = 1;
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->e_1128)).c_);
f_decl_elements_636(F->up, (*(P173)rt_nil_check(F->e_1128)).d_);
F->up->defer_entry_structs_202 = G_NV(F->saved_defer_2849);
F->m_2857 = F->up->scope_stack_120;
while (((F->m_2857 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2857)).depth_) == G_NV(F->up->depth_119)))) {
if (((G_NV((*(P116)rt_nil_check(F->m_2857)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P116)rt_nil_check(F->m_2857)).from_use_)))) {
F->fields_2850 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2852 = (*(P116)rt_nil_check(F->m_2857)).params_;
while ((F->pm_2852 != NULL)) {
f_ctype_477(F->up, (*(P1761)rt_nil_check(F->pm_2852)).t_, &F->ct_2851);
if ((G_NV((*(P1761)rt_nil_check(F->pm_2852)).mode_) == ((rt_int)1LL))) {
F->fields_2850 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2850)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2851))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2852)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2850 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2850)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2851))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2852)).cfield_))), one_rt_gstr(59)));
}
F->pm_2852 = (*(P1761)rt_nil_check(F->pm_2852)).next_;
}
L_end_2867: ;
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2857)).cname_))), rt_g_lit("p {", 3)), (*(P139)rt_nil_check(F->fields_2850))), rt_g_lit(" };", 3)));
}
F->m_2857 = (*(P116)rt_nil_check(F->m_2857)).stack_;
}
L_end_2866: ;
F->m_2857 = F->up->scope_stack_120;
while (((F->m_2857 != NULL) && (G_NV((*(P116)rt_nil_check(F->m_2857)).depth_) == G_NV(F->up->depth_119)))) {
if ((((G_NV((*(P116)rt_nil_check(F->m_2857)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2857)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P116)rt_nil_check(F->m_2857)).from_use_)))) {
if (((!G_NV(F->has_procs_2848)) && ((*(P116)rt_nil_check(F->y_2856)).c_ != NULL))) {
f_declare_slot_1115(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frames", 6)), &F->fp_2853);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("lo", 2)), &F->flo_2854);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2855);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fp_2853)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P139)rt_nil_check(F->fhi_2855))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->flo_2854))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->fhi_2855))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->flo_2854))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2848 = 1;
} else if ((!G_NV(F->has_procs_2848))) {
f_declare_slot_1115(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2856)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frame", 5)), &F->fp_2853);
f_emit_248(F->up, cat_rt_gstr((*(P139)rt_nil_check(F->fp_2853)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2848 = 1;
}
if (((*(P116)rt_nil_check(F->y_2856)).c_ != NULL)) {
(*(P116)rt_nil_check(F->m_2857)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P116)rt_nil_check(F->m_2857)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2856)).cname_)), rt_g_lit("frame", 5)));
}
(*(P116)rt_nil_check(F->m_2857)).members_ = F->y_2856;
}
f_copy_sym_1027(F->up, F->m_2857, &F->z_2858);
(*(P116)rt_nil_check(F->z_2858)).hidden_ = G_NV((*(P116)rt_nil_check(F->m_2857)).from_use_);
(*(P116)rt_nil_check(F->z_2858)).mnext_ = (*(P116)rt_nil_check(F->y_2856)).members_;
(*(P116)rt_nil_check(F->y_2856)).members_ = F->z_2858;
F->m_2857 = (*(P116)rt_nil_check(F->m_2857)).stack_;
}
L_end_2868: ;
f_close_scope_452(F->up);
F->up->cur_task_196 = F->saved_2859;
f_define_450(F->up, F->y_2856, G_NV((*(P173)rt_nil_check(F->e_1128)).line_));
ret_:

  return;
}

static void f_entry_decl_1131(struct f_greenc_1fr *up_, P173 e_1130) {
  struct f_entry_decl_1131fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1130 = e_1130;
F->y_2869 = NULL;
F->p_2870 = NULL;
F->p_2870 = (*(P173)rt_nil_check(F->e_1130)).a_;
F->pm_2871 = NULL;
F->tail_2872 = NULL;
F->fields_2873 = NULL;
F->ct_2874 = NULL;
F->x_2875 = NULL;
F->lo_2876 = NULL;
F->hi_2877 = NULL;
if ((F->up->cur_task_196 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2869 = f_new_sym_455(F->up, ((rt_int)10LL), (*(P173)rt_nil_check(F->e_1130)).name_);
f_new_name_224(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_232(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1130)).name_)))), one_rt_gstr(95)), &(*(P116)rt_nil_check(F->y_2869)).cname_);
F->fields_2873 = f_mk_221(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2870 != NULL)) {
F->pm_2871 = ({ R1762 *cell2879 = rt_alloc(sizeof(R1762)); *cell2879 = cp_R1762(({ R1762 ag2880; ag2880.name_ = (*(P173)rt_nil_check(F->p_2870)).name_; ag2880.mode_ = G_NV((*(P173)rt_nil_check(F->p_2870)).ival_); ag2880.t_ = NULL; ag2880.c_ = NULL; ag2880.cfield_ = NULL; ag2880.dflt_ = (*(P173)rt_nil_check(F->p_2870)).b_; ag2880.next_ = NULL; ag2880.dsym_ = NULL; ag2880; })); (P1761)cell2879; });
f_resolve_493(F->up, (*(P173)rt_nil_check(F->p_2870)).a_, &(*(P1761)rt_nil_check(F->pm_2871)).t_, &(*(P1761)rt_nil_check(F->pm_2871)).c_);
(*(P1761)rt_nil_check(F->pm_2871)).cfield_ = f_mk_221(F->up, f_c_field_238(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2870)).name_))));
f_ctype_477(F->up, (*(P1761)rt_nil_check(F->pm_2871)).t_, &F->ct_2874);
if ((G_NV((*(P1761)rt_nil_check(F->pm_2871)).mode_) == ((rt_int)1LL))) {
F->fields_2873 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2873)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2874))), one_rt_gstr(32)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2871)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2873 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->fields_2873)), one_rt_gstr(32)), (*(P139)rt_nil_check(F->ct_2874))), rt_g_lit(" *", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2871)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2872 == NULL)) {
(*(P116)rt_nil_check(F->y_2869)).params_ = F->pm_2871;
} else {
(*(P1761)rt_nil_check(F->tail_2872)).next_ = F->pm_2871;
}
F->tail_2872 = F->pm_2871;
F->p_2870 = (*(P173)rt_nil_check(F->p_2870)).next_;
}
L_end_2878: ;
if ((!G_NV(F->up->defer_entry_structs_202))) {
f_put_to_246(F->up, F->up->out_types_127, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2869)).cname_))), rt_g_lit("p {", 3)), (*(P139)rt_nil_check(F->fields_2873))), rt_g_lit(" };", 3)));
}
(*(P116)rt_nil_check(F->y_2869)).result_ = F->up->ty_void_160;
(*(P116)rt_nil_check(F->y_2869)).decl_ = F->e_1130;
(*(P116)rt_nil_check(F->y_2869)).members_ = F->up->cur_task_196;
if (G_NV(F->up->in_func_137)) {
(*(P116)rt_nil_check(F->y_2869)).level_ = G_NV(F->up->cur_level_138);
}
(*(P116)rt_nil_check(F->y_2869)).access_path_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2869)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2869)).level_), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2869)).access_path_)), &F->x_2875);
(*(P116)rt_nil_check(F->y_2869)).ro_ = ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && G_NV(F->up->in_func_137)) && (G_NV(F->up->cur_level_138) > G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_)));
if (((*(P173)rt_nil_check(F->e_1130)).b_ != NULL)) {
if ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && (!G_NV((*(P116)rt_nil_check(F->y_2869)).ro_)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1130)).line_), rt_g_lit("an entry family in a task family is not handled", 47));
}
f_family_bounds_1122(F->up, (*(P173)rt_nil_check(F->e_1130)).b_, F->y_2869, F->x_2875);
} else if ((((*(P116)rt_nil_check(F->up->cur_task_196)).c_ != NULL) && (!G_NV((*(P116)rt_nil_check(F->y_2869)).ro_)))) {
f_declare_slot_1115(F->up, rt_g_lit("rt_entry *", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2869)).access_path_)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->cur_task_196)).cname_)), rt_g_lit("lo", 2)), &F->lo_2876);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->up->cur_task_196)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->cur_task_196)).cname_)), rt_g_lit("hi", 2)), &F->hi_2877);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->x_2875)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P139)rt_nil_check(F->hi_2877))), rt_g_lit(" >= ", 4)), (*(P139)rt_nil_check(F->lo_2876))), rt_g_lit(" \? ", 3)), (*(P139)rt_nil_check(F->hi_2877))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2876))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P139)rt_nil_check(F->hi_2877))), rt_g_lit(" - ", 3)), (*(P139)rt_nil_check(F->lo_2876))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P139)rt_nil_check(F->x_2875))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1115(F->up, rt_g_lit("rt_entry", 8), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2869)).access_path_)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P139)rt_nil_check(F->x_2875))), rt_g_lit(");", 2)));
}
f_define_450(F->up, F->y_2869, G_NV((*(P173)rt_nil_check(F->e_1130)).line_));
ret_:

  return;
}

static void f_task_body_1133(struct f_greenc_1fr *up_, P173 e_1132) {
  struct f_task_body_1133fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1132 = e_1132;
F->y_2881 = NULL;
F->y_2881 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1132)).name_)));
F->b_2882 = NULL;
F->m_2883 = NULL;
F->z_2884 = NULL;
F->upp_2885 = NULL;
F->saved_2886 = NULL;
F->saved_2886 = F->up->cur_task_196;
if (((F->y_2881 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2881)).kind_) == ((rt_int)11LL)))) {
f_attach_generic_body_1213(F->up, F->e_1132);
goto ret_;
}
if (((F->y_2881 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2881)).kind_) != ((rt_int)9LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1132)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1132)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2882 = f_new_sym_455(F->up, ((rt_int)4LL), (*(P173)rt_nil_check(F->e_1132)).name_);
(*(P116)rt_nil_check(F->b_2882)).cname_ = f_mk_221(F->up, cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_)), rt_g_lit("body", 4)));
(*(P116)rt_nil_check(F->b_2882)).result_ = F->up->ty_void_160;
(*(P116)rt_nil_check(F->b_2882)).level_ = G_NV(F->up->cur_level_138);
(*(P116)rt_nil_check(F->b_2882)).decl_ = F->e_1132;
if (((*(P116)rt_nil_check(F->y_2881)).c_ != NULL)) {
(*(P116)rt_nil_check(F->b_2882)).params_ = ({ R1762 *cell2887 = rt_alloc(sizeof(R1762)); *cell2887 = cp_R1762(({ R1762 ag2888; ag2888.name_ = f_mk_221(F->up, rt_g_lit("INDEX_", 6)); ag2888.mode_ = ((rt_int)1LL); ag2888.t_ = F->up->ty_int_155; ag2888.c_ = NULL; ag2888.cfield_ = f_mk_221(F->up, rt_g_lit("index_", 6)); ag2888.dflt_ = NULL; ag2888.next_ = NULL; ag2888.dsym_ = NULL; ag2888; })); (P1761)cell2887; });
}
f_open_scope_451(F->up);
F->m_2883 = (*(P116)rt_nil_check(F->y_2881)).members_;
while ((F->m_2883 != NULL)) {
f_copy_sym_1027(F->up, F->m_2883, &F->z_2884);
f_define_450(F->up, F->z_2884, G_NV((*(P173)rt_nil_check(F->e_1132)).line_));
if (((((G_NV((*(P116)rt_nil_check(F->m_2883)).kind_) == ((rt_int)3LL)) || (G_NV((*(P116)rt_nil_check(F->m_2883)).kind_) == ((rt_int)4LL))) && ((*(P116)rt_nil_check(F->m_2883)).access_path_ != NULL)) && f_same_task_412(F->up, (*(P116)rt_nil_check(F->m_2883)).members_, F->y_2881))) {
if ((G_NV((*(P116)rt_nil_check(F->y_2881)).level_) > ((rt_int)0LL))) {
F->upp_2885 = f_mk_221(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2885 = f_mk_221(F->up, rt_g_lit("", 0));
}
if (((*(P116)rt_nil_check(F->y_2881)).c_ != NULL)) {
(*(P116)rt_nil_check(F->b_2882)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->upp_2885)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2883)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P139)rt_nil_check(F->upp_2885))), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P116)rt_nil_check(F->b_2882)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->upp_2885)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_2883)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2883 = (*(P116)rt_nil_check(F->m_2883)).mnext_;
}
L_end_2889: ;
F->up->cur_task_196 = F->y_2881;
f_subprogram_body_666(F->up, F->e_1132, F->b_2882);
F->up->cur_task_196 = F->saved_2886;
f_close_scope_452(F->up);
if ((((*(P116)rt_nil_check(F->y_2881)).c_ != NULL) && (G_NV((*(P116)rt_nil_check(F->b_2882)).level_) > ((rt_int)0LL)))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2882)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P116)rt_nil_check(F->y_2881)).c_ != NULL)) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2882)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P116)rt_nil_check(F->b_2882)).level_) > ((rt_int)0LL))) {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2882)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_246(F->up, F->up->out_funcs_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2881)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->b_2882)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1136(struct f_greenc_1fr *up_, P173 decls_1134, P139 *aw_1135) {
  struct f_task_awaits_1136fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1134 = decls_1134;
F->aw_1135 = aw_1135;
F->e_2890 = NULL;
F->e_2890 = F->decls_1134;
F->y_2891 = NULL;
F->p_2892 = NULL;
(*F->aw_1135) = f_mk_221(F->up, rt_g_lit("", 0));
while ((F->e_2890 != NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->e_2890)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P173)rt_nil_check(F->e_2890)).kind_) == ((rt_int)53LL)) && (G_NV((*(P173)rt_nil_check(F->e_2890)).ival_) == ((rt_int)50LL))))) {
F->y_2891 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_2890)).name_)));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2891)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2891)).cname_)), rt_g_lit("decl", 4)), &F->p_2892);
(*F->aw_1135) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*F->aw_1135))), rt_g_lit(" rt_await_decl(&", 16)), (*(P139)rt_nil_check(F->p_2892))), rt_g_lit(");", 2)));
}
F->e_2890 = (*(P173)rt_nil_check(F->e_2890)).next_;
}
L_end_2893: ;
ret_:

  return;
}

static void f_task_failure_1138(struct f_greenc_1fr *up_, P173 s_1137) {
  struct f_task_failure_1138fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1137 = s_1137;
F->y_2894 = NULL;
F->y_2894 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1137)).tag_)));
F->a_2895 = NULL;
F->i_2896 = NULL;
F->it_2897 = NULL;
if (((*(P173)rt_nil_check(F->s_1137)).a_ != NULL)) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_1137)).a_, (*(P116)rt_nil_check(F->y_2894)).t_, &F->it_2897, &F->i_2896);
f_act_path_i_1108(F->up, F->y_2894, (*(P139)rt_nil_check(F->i_2896)), &F->a_2895);
} else {
f_act_path_1104(F->up, F->y_2894, &F->a_2895);
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P139)rt_nil_check(F->a_2895))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1142(struct f_greenc_1fr *up_, P173 e_1139, P116 *y_1140, P173 *ix_1141) {
  struct f_entry_sym_1142fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1139 = e_1139;
F->y_1140 = y_1140;
F->ix_1141 = ix_1141;
F->t_2898 = NULL;
(*F->ix_1141) = NULL;
F->up->fam_ix_199 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1139)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1142(F->up, (*(P173)rt_nil_check(F->e_1139)).a_, &(*F->y_1140), &(*F->ix_1141));
if (((*(P116)rt_nil_check((*F->y_1140))).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check((*F->y_1140))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_199 = (*(P173)rt_nil_check(F->e_1139)).b_;
goto ret_;
}
if ((((G_NV((*(P173)rt_nil_check(F->e_1139)).kind_) == ((rt_int)9LL)) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_2898 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).a_)).name_)));
if ((((F->t_2898 == NULL) || (G_NV((*(P116)rt_nil_check(F->t_2898)).kind_) != ((rt_int)9LL))) || ((*(P116)rt_nil_check(F->t_2898)).c_ == NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1140) = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).a_)).name_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).name_)), G_NV((*(P173)rt_nil_check(F->e_1139)).line_));
(*F->ix_1141) = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).a_)).b_;
if ((((*F->y_1140) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1140))).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P173)rt_nil_check(F->e_1139)).kind_) == ((rt_int)5LL))) {
(*F->y_1140) = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).name_)));
if (((*(P173)rt_nil_check(F->e_1139)).tag_ != NULL)) {
(*F->y_1140) = f_member_of_1022(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).tag_)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).name_)), G_NV((*(P173)rt_nil_check(F->e_1139)).line_));
}
} else if (((G_NV((*(P173)rt_nil_check(F->e_1139)).kind_) == ((rt_int)9LL)) && f_is_package_1018(F->up, (*(P173)rt_nil_check(F->e_1139)).a_))) {
(*F->y_1140) = f_member_of_1022(F->up, f_path_of_338(F->up, (*(P173)rt_nil_check(F->e_1139)).a_), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1139)).name_)), G_NV((*(P173)rt_nil_check(F->e_1139)).line_));
} else {
(*F->y_1140) = NULL;
}
if ((((*F->y_1140) == NULL) || (G_NV((*(P116)rt_nil_check((*F->y_1140))).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1139)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_other_call_1147(struct f_greenc_1fr *up_, P173 e_1143, int is_stmt_1144, P121 *t_1145, P139 *r_1146) {
  struct f_other_call_1147fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1143 = e_1143;
F->is_stmt_1144 = is_stmt_1144;
F->t_1145 = t_1145;
F->r_1146 = r_1146;
F->y_2899 = NULL;
F->pm_2900 = NULL;
F->a_2901 = NULL;
F->parts_2902 = NULL;
F->v_2903 = NULL;
F->lv_2904 = NULL;
F->ent_2905 = NULL;
F->act_2906 = NULL;
F->i_2907 = NULL;
F->vt_2908 = NULL;
F->lt_2909 = NULL;
F->lc_2910 = NULL;
F->ro_2911 = INT_MIN;
F->ix_2912 = NULL;
F->fix_2913 = NULL;
F->args_node_2914 = NULL;
f_entry_sym_1142(F->up, (*(P173)rt_nil_check(F->e_1143)).a_, &F->y_2899, &F->ix_2912);
F->fix_2913 = F->up->fam_ix_199;
F->args_node_2914 = (*(P173)rt_nil_check(F->e_1143)).b_;
if ((((*(P116)rt_nil_check(F->y_2899)).c_ != NULL) && (F->fix_2913 == NULL))) {
F->fix_2913 = (*(P173)rt_nil_check(F->e_1143)).b_;
F->args_node_2914 = NULL;
}
F->i_2907 = f_mk_221(F->up, rt_g_lit("", 0));
if ((F->ix_2912 != NULL)) {
f_gexpr_779(F->up, F->ix_2912, F->up->ty_int_155, &F->vt_2908, &F->i_2907);
} else if (((((*(P116)rt_nil_check(F->y_2899)).members_ != NULL) && ((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).members_)).c_ != NULL)) && ((*(P116)rt_nil_check(F->y_2899)).members_ != F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P139)rt_nil_check((*(P116)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).name_))));
}
if ((!F->is_stmt_1144)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_210 != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1112(F->up, F->y_2899, (*(P139)rt_nil_check(F->i_2907)), &F->ent_2905);
if (((*(P116)rt_nil_check(F->y_2899)).c_ != NULL)) {
if ((F->fix_2913 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_779(F->up, F->fix_2913, NULL, &F->vt_2908, &F->v_2903);
f_entry_family_slot_1127(F->up, F->y_2899, (*(P139)rt_nil_check(F->ent_2905)), (*(P139)rt_nil_check(F->v_2903)), &F->ent_2905);
}
F->parts_2902 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2899)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_2900 = (*(P116)rt_nil_check(F->y_2899)).params_;
while ((F->pm_2900 != NULL)) {
F->a_2901 = f_actual_for_977(F->up, F->args_node_2914, F->pm_2900, (*(P116)rt_nil_check(F->y_2899)).params_);
if ((F->a_2901 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2900)).name_))));
}
if ((G_NV((*(P1761)rt_nil_check(F->pm_2900)).mode_) == ((rt_int)1LL))) {
f_gexpr_779(F->up, F->a_2901, (*(P1761)rt_nil_check(F->pm_2900)).t_, &F->vt_2908, &F->v_2903);
f_check_type_472(F->up, F->vt_2908, (*(P1761)rt_nil_check(F->pm_2900)).t_, G_NV((*(P173)rt_nil_check(F->e_1143)).line_));
F->parts_2902 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2902)), rt_g_lit(" p_.", 4)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2900)).cfield_))), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->v_2903))), one_rt_gstr(59)));
} else {
f_lvalue_735(F->up, F->a_2901, &F->lv_2904, &F->lt_2909, &F->lc_2910, &F->ro_2911);
 (void)rt_range(F->ro_2911, 0, 1);
if (G_NV(F->ro_2911)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1143)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2900)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_472(F->up, F->lt_2909, (*(P1761)rt_nil_check(F->pm_2900)).t_, G_NV((*(P173)rt_nil_check(F->e_1143)).line_));
F->parts_2902 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2902)), rt_g_lit(" p_.", 4)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2900)).cfield_))), rt_g_lit(" = &", 4)), (*(P139)rt_nil_check(F->lv_2904))), one_rt_gstr(59)));
}
F->pm_2900 = (*(P1761)rt_nil_check(F->pm_2900)).next_;
}
L_end_2915: ;
if ((((*(P116)rt_nil_check(F->y_2899)).members_ != NULL) && ((*(P116)rt_nil_check(F->y_2899)).members_ != F->up->cur_task_196))) {
if ((F->ix_2912 != NULL)) {
f_act_path_i_1108(F->up, (*(P116)rt_nil_check(F->y_2899)).members_, (*(P139)rt_nil_check(F->i_2907)), &F->act_2906);
} else {
f_act_path_1104(F->up, (*(P116)rt_nil_check(F->y_2899)).members_, &F->act_2906);
}
F->parts_2902 = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2902)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P139)rt_nil_check(F->act_2906))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1145) = F->up->ty_void_160;
(*F->r_1146) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->parts_2902)), rt_g_lit(" rt_entry_call(&", 16)), (*(P139)rt_nil_check(F->ent_2905))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1152(struct f_greenc_1fr *up_, P173 e_1148, P116 y_1149, P121 *t_1150, P139 *r_1151) {
  struct f_other_attr_1152fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1148 = e_1148;
F->y_1149 = y_1149;
F->t_1150 = t_1150;
F->r_1151 = r_1151;
F->a_2916 = cp_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1148)).name_)));
F->p_2917 = NULL;
if (((G_NV((*(P116)rt_nil_check(F->y_1149)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2916, rt_g_lit("INDEX", 5)))) {
if (((*(P116)rt_nil_check(F->y_1149)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1148)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1149)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1096(F->up, &F->p_2917);
(*F->t_1150) = F->up->ty_int_155;
if (((*(P116)rt_nil_check(F->y_1149)).t_ != NULL)) {
(*F->t_1150) = (*(P116)rt_nil_check(F->y_1149)).t_;
}
(*F->r_1151) = F->p_2917;
} else if (((G_NV((*(P116)rt_nil_check(F->y_1149)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2916, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1104(F->up, F->y_1149, &F->p_2917);
(*F->t_1150) = F->up->ty_bool_156;
(*F->r_1151) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P139)rt_nil_check(F->p_2917))), one_rt_gstr(41)));
} else if (((G_NV((*(P116)rt_nil_check(F->y_1149)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_2916, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1104(F->up, F->y_1149, &F->p_2917);
(*F->t_1150) = F->up->ty_int_155;
(*F->r_1151) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P139)rt_nil_check(F->p_2917))), one_rt_gstr(41)));
} else if (((G_NV((*(P116)rt_nil_check(F->y_1149)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_2916, rt_g_lit("COUNT", 5)))) {
if (((*(P116)rt_nil_check(F->y_1149)).members_ != F->up->cur_task_196)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1148)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1112(F->up, F->y_1149, rt_g_lit("", 0), &F->p_2917);
(*F->t_1150) = F->up->ty_int_155;
(*F->r_1151) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P139)rt_nil_check(F->p_2917))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1148)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2916), rt_g_lit(" is not handled here", 20)));
(*F->t_1150) = F->up->ty_int_155;
(*F->r_1151) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1156(struct f_greenc_1fr *up_, P173 e_1153, P121 *t_1154, P139 *r_1155) {
  struct f_member_attr_1156fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1153 = e_1153;
F->t_1154 = t_1154;
F->r_1155 = r_1155;
F->y_2918 = NULL;
F->ix_2919 = NULL;
F->i_2920 = NULL;
F->p_2921 = NULL;
F->vt_2922 = NULL;
f_task_of_1094(F->up, (*(P173)rt_nil_check(F->e_1153)).a_, &F->y_2918, &F->ix_2919);
f_gexpr_779(F->up, F->ix_2919, F->up->ty_int_155, &F->vt_2922, &F->i_2920);
f_act_path_i_1108(F->up, F->y_2918, (*(P139)rt_nil_check(F->i_2920)), &F->p_2921);
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1153)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1154) = F->up->ty_bool_156;
(*F->r_1155) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P139)rt_nil_check(F->p_2921))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1153)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1154) = F->up->ty_int_155;
(*F->r_1155) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P139)rt_nil_check(F->p_2921))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1153)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1153)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1154) = F->up->ty_int_155;
(*F->r_1155) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1162(struct f_greenc_1fr *up_, rt_gstr name_1157, P173 args_1158, rt_int line_1159, P121 *t_1160, P139 *r_1161) {
  struct f_task_builtin_1162fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1157 = cp_rt_gstr(name_1157);
F->args_1158 = args_1158;
F->line_1159 = line_1159;
F->t_1160 = t_1160;
F->r_1161 = r_1161;
F->vt_2923 = NULL;
F->v_2924 = NULL;
(*F->t_1160) = F->up->ty_void_160;
if (eq_rt_gstr(F->name_1157, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_779(F->up, F->args_1158, F->up->ty_int_155, &F->vt_2923, &F->v_2924);
(*F->r_1161) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P139)rt_nil_check(F->v_2924))), one_rt_gstr(41)));
} else {
f_fail_242(F->up, F->line_1159, cat_rt_gstr(F->name_1157, rt_g_lit(" is not declared", 16)));
(*F->r_1161) = NULL;
}
ret_:

  return;
}

static void f_gen_accept_1164(struct f_greenc_1fr *up_, P173 s_1163) {
  struct f_gen_accept_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1163 = s_1163;
F->y_2925 = NULL;
F->y_2925 = f_lookup_entry_415(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1163)).name_)), F->up->cur_task_196);
F->saved_ax_2926 = NULL;
F->ent_2927 = NULL;
F->ep_2928 = NULL;
F->xf_2929 = NULL;
F->x_2930 = NULL;
F->pm_2931 = NULL;
F->f_2932 = NULL;
F->f_2932 = (*(P173)rt_nil_check(F->s_1163)).a_;
F->p_2933 = NULL;
if (((F->y_2925 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2925)).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1163)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->s_1163)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_412(F->up, (*(P116)rt_nil_check(F->y_2925)).members_, F->up->cur_task_196))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1163)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1112(F->up, F->y_2925, rt_g_lit("", 0), &F->ent_2927);
f_member_slot_1168(F->up, F->y_2925, F->s_1163, &F->ent_2927);
if ((G_NV((*(P173)rt_nil_check(F->s_1163)).flag_) == ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_224(F->up, rt_g_lit("ep", 2), &F->ep_2928);
f_new_name_224(F->up, rt_g_lit("xf", 2), &F->xf_2929);
f_new_name_224(F->up, rt_g_lit("x", 1), &F->x_2930);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2925)).cname_))), rt_g_lit("p *", 3)), (*(P139)rt_nil_check(F->ep_2928))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit(");", 2)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P139)rt_nil_check(F->xf_2929))), one_rt_gstr(59)));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P139)rt_nil_check(F->xf_2929))), rt_g_lit(")) {", 4)));
f_push_cleanup_672(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2929))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_451(F->up);
F->pm_2931 = (*(P116)rt_nil_check(F->y_2925)).params_;
while ((F->pm_2931 != NULL)) {
if ((G_NV((*(P1761)rt_nil_check(F->pm_2931)).mode_) == ((rt_int)1LL))) {
F->p_2933 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P1761)rt_nil_check(F->pm_2931)).name_);
(*(P116)rt_nil_check(F->p_2933)).ro_ = 1;
(*(P116)rt_nil_check(F->p_2933)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P139)rt_nil_check(F->ep_2928))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2931)).cfield_))), one_rt_gstr(41)));
} else {
F->p_2933 = f_new_sym_455(F->up, ((rt_int)1LL), (*(P1761)rt_nil_check(F->pm_2931)).name_);
(*(P116)rt_nil_check(F->p_2933)).access_path_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P139)rt_nil_check(F->ep_2928))), rt_g_lit("->", 2)), (*(P139)rt_nil_check((*(P1761)rt_nil_check(F->pm_2931)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_2932 != NULL)) {
(*(P116)rt_nil_check(F->p_2933)).name_ = (*(P173)rt_nil_check(F->f_2932)).name_;
F->f_2932 = (*(P173)rt_nil_check(F->f_2932)).next_;
}
(*(P116)rt_nil_check(F->p_2933)).t_ = (*(P1761)rt_nil_check(F->pm_2931)).t_;
(*(P116)rt_nil_check(F->p_2933)).c_ = (*(P1761)rt_nil_check(F->pm_2931)).c_;
f_define_450(F->up, F->p_2933, G_NV((*(P173)rt_nil_check(F->s_1163)).line_));
F->pm_2931 = (*(P1761)rt_nil_check(F->pm_2931)).next_;
}
L_end_2934: ;
F->up->accept_depth_197 = rt_add(G_NV(F->up->accept_depth_197), ((rt_int)1LL));
F->saved_ax_2926 = F->up->accept_exits_148;
F->up->accept_exits_148 = F->up->exits_144;
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_1163)).b_);
F->up->accept_exits_148 = F->saved_ax_2926;
F->up->accept_depth_197 = rt_sub(G_NV(F->up->accept_depth_197), ((rt_int)1LL));
f_close_scope_452(F->up);
f_pop_cleanup_673(F->up);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2929))), rt_g_lit("); rt_accept_end(&", 18)), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit(", 0, 0);", 8)));
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P139)rt_nil_check(F->xf_2929))), rt_g_lit("); int ", 7)), (*(P139)rt_nil_check(F->x_2930))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P139)rt_nil_check(F->ent_2927))), rt_g_lit(", 1, ", 5)), (*(P139)rt_nil_check(F->x_2930))), rt_g_lit("); rt_raise(", 12)), (*(P139)rt_nil_check(F->x_2930))), rt_g_lit(");", 2)));
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1168(struct f_greenc_1fr *up_, P116 y_1165, P173 s_1166, P139 *ent_1167) {
  struct f_member_slot_1168fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1165 = y_1165;
F->s_1166 = s_1166;
F->ent_1167 = ent_1167;
F->vt_2935 = NULL;
F->v_2936 = NULL;
if (((*(P116)rt_nil_check(F->y_1165)).c_ != NULL)) {
if (((*(P173)rt_nil_check(F->s_1166)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1166)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1165)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1165)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->s_1166)).c_, NULL, &F->vt_2935, &F->v_2936);
f_entry_family_slot_1127(F->up, F->y_1165, (*(P139)rt_nil_check((*F->ent_1167))), (*(P139)rt_nil_check(F->v_2936)), &(*F->ent_1167));
} else if (((*(P173)rt_nil_check(F->s_1166)).c_ != NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1166)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1165)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1171(struct f_greenc_1fr *up_, P173 e_1169, P139 *r_1170) {
  struct f_gen_delay_ticks_1171fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1169 = e_1169;
F->r_1170 = r_1170;
F->vt_2937 = NULL;
F->v_2938 = NULL;
f_gexpr_779(F->up, F->e_1169, F->up->ty_time_170, &F->vt_2937, &F->v_2938);
f_check_type_472(F->up, F->vt_2937, F->up->ty_time_170, G_NV((*(P173)rt_nil_check(F->e_1169)).line_));
(*F->r_1170) = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P139)rt_nil_check(F->v_2938))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1173(struct f_greenc_1fr *up_, P173 s_1172) {
  struct f_gen_select_1173fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1172 = s_1172;
F->alt_2939 = NULL;
F->alt_2939 = (*(P173)rt_nil_check(F->s_1172)).a_;
F->n_2940 = INT64_MIN;
F->n_2940 = ((rt_int)0LL);
F->i_2941 = INT64_MIN;
F->has_delay_2942 = INT_MIN;
F->has_delay_2942 = 0;
F->has_accept_2943 = INT_MIN;
F->has_accept_2943 = 0;
F->al_2944 = NULL;
F->w_2945 = NULL;
F->g_2946 = NULL;
F->ent_2947 = NULL;
F->ticks_2948 = NULL;
F->vt_2949 = NULL;
F->y_2950 = NULL;
f_new_name_224(F->up, rt_g_lit("al", 2), &F->al_2944);
f_new_name_224(F->up, rt_g_lit("w", 1), &F->w_2945);
while ((F->alt_2939 != NULL)) {
F->n_2940 = rt_add(G_NV(F->n_2940), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_2942 = 1;
} else {
F->has_accept_2943 = 1;
}
F->alt_2939 = (*(P173)rt_nil_check(F->alt_2939)).next_;
}
L_end_2951: ;
if (((G_NV((*(P173)rt_nil_check(F->s_1172)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_2942))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1172)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_2943))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1172)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P139)rt_nil_check(F->al_2944))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_2940), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_2939 = (*(P173)rt_nil_check(F->s_1172)).a_;
F->i_2941 = ((rt_int)0LL);
while ((F->alt_2939 != NULL)) {
F->g_2946 = f_mk_221(F->up, rt_g_lit("1", 1));
if (((*(P173)rt_nil_check(F->alt_2939)).a_ != NULL)) {
f_condition_819(F->up, (*(P173)rt_nil_check(F->alt_2939)).a_, F->up->ty_bool_156, &F->vt_2949, &F->g_2946);
f_check_type_472(F->up, F->vt_2949, F->up->ty_bool_156, G_NV((*(P173)rt_nil_check(F->alt_2939)).line_));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).kind_) == ((rt_int)34LL))) {
F->y_2950 = f_lookup_entry_415(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).name_)), F->up->cur_task_196);
if (((F->y_2950 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_2950)).kind_) != ((rt_int)10LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->alt_2939)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1112(F->up, F->y_2950, rt_g_lit("", 0), &F->ent_2947);
f_member_slot_1168(F->up, F->y_2950, (*(P173)rt_nil_check(F->alt_2939)).b_, &F->ent_2947);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2944)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2941)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P139)rt_nil_check(F->g_2946))), rt_g_lit("), &", 4)), (*(P139)rt_nil_check(F->ent_2947))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1171(F->up, (*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).a_, &F->ticks_2948);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2944)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2941)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P139)rt_nil_check(F->g_2946))), rt_g_lit("), NULL, NULL, ", 15)), (*(P139)rt_nil_check(F->ticks_2948))), rt_g_lit("};", 2)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P139)rt_nil_check(F->al_2944))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2941)))), rt_g_lit("].open;", 7)));
F->i_2941 = rt_add(G_NV(F->i_2941), ((rt_int)1LL));
F->alt_2939 = (*(P173)rt_nil_check(F->alt_2939)).next_;
}
L_end_2952: ;
if ((G_NV((*(P173)rt_nil_check(F->s_1172)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->al_2944)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2940)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_2940 = rt_add(G_NV(F->n_2940), ((rt_int)1LL));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_239(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_239(F->up)), rt_g_lit("));", 3)));
}
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P139)rt_nil_check(F->w_2945))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2940)))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check(F->al_2944))), rt_g_lit(");", 2)));
F->alt_2939 = (*(P173)rt_nil_check(F->s_1172)).a_;
F->i_2941 = ((rt_int)0LL);
while ((F->alt_2939 != NULL)) {
if ((G_NV(F->i_2941) == ((rt_int)0LL))) {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P139)rt_nil_check(F->w_2945))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P139)rt_nil_check(F->w_2945))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_2941)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P173)rt_nil_check((*(P173)rt_nil_check(F->alt_2939)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1164(F->up, (*(P173)rt_nil_check(F->alt_2939)).b_);
}
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->alt_2939)).c_);
F->i_2941 = rt_add(G_NV(F->i_2941), ((rt_int)1LL));
F->alt_2939 = (*(P173)rt_nil_check(F->alt_2939)).next_;
}
L_end_2953: ;
if ((G_NV((*(P173)rt_nil_check(F->s_1172)).flag_) == ((rt_int)1LL))) {
f_emit_248(F->up, rt_g_lit("} else {", 8));
f_gen_statements_668(F->up, (*(P173)rt_nil_check(F->s_1172)).b_);
}
f_emit_248(F->up, rt_g_lit("}", 1));
f_emit_248(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1178(struct f_greenc_1fr *up_, P116 y_1174, P173 ix_1175, P139 *lo_1176, P139 *hi_1177) {
  struct f_family_range_1178fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1174 = y_1174;
F->ix_1175 = ix_1175;
F->lo_1176 = lo_1176;
F->hi_1177 = hi_1177;
F->vt_2954 = NULL;
if ((F->ix_1175 == NULL)) {
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1174)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1174)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1176));
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_1174)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1174)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1177));
} else if ((G_NV((*(P173)rt_nil_check(F->ix_1175)).kind_) == ((rt_int)14LL))) {
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->ix_1175)).a_, F->up->ty_int_155, &F->vt_2954, &(*F->lo_1176));
f_gexpr_779(F->up, (*(P173)rt_nil_check(F->ix_1175)).b_, F->up->ty_int_155, &F->vt_2954, &(*F->hi_1177));
} else {
f_gexpr_779(F->up, F->ix_1175, F->up->ty_int_155, &F->vt_2954, &(*F->lo_1176));
(*F->hi_1177) = (*F->lo_1176);
}
ret_:

  return;
}

static void f_task_statement_gen_1180(struct f_greenc_1fr *up_, P173 s_1179) {
  struct f_task_statement_gen_1180fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1179 = s_1179;
F->n_2955 = NULL;
F->ix_2956 = NULL;
F->y_2957 = NULL;
F->a_2958 = NULL;
F->d_2959 = NULL;
F->l_2960 = NULL;
F->ticks_2961 = NULL;
F->lo_2962 = NULL;
F->hi_2963 = NULL;
{ rt_int sel2964 = G_NV((*(P173)rt_nil_check(F->s_1179)).kind_);
if (0 || sel2964 == ((rt_int)32LL)) {
f_gen_delay_ticks_1171(F->up, (*(P173)rt_nil_check(F->s_1179)).a_, &F->ticks_2961);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P139)rt_nil_check(F->ticks_2961))), rt_g_lit(");", 2)));
} else if (0 || sel2964 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_197) > ((rt_int)0LL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1179)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_2955 = (*(P173)rt_nil_check(F->s_1179)).a_;
while ((F->n_2955 != NULL)) {
f_task_of_1094(F->up, F->n_2955, &F->y_2957, &F->ix_2956);
f_path_at_1088(F->up, G_NV((*(P116)rt_nil_check(F->y_2957)).level_), cat_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2957)).cname_)), rt_g_lit("decl", 4)), &F->d_2959);
if ((G_NV((*(P116)rt_nil_check(F->y_2957)).level_) > ((rt_int)0LL))) {
f_link_to_719(F->up, G_NV((*(P116)rt_nil_check(F->y_2957)).level_), &F->l_2960);
} else {
F->l_2960 = f_mk_221(F->up, rt_g_lit("NULL", 4));
}
if (((*(P116)rt_nil_check(F->y_2957)).c_ == NULL)) {
f_act_path_1104(F->up, F->y_2957, &F->a_2958);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P139)rt_nil_check(F->a_2958))), rt_g_lit(", &", 3)), (*(P139)rt_nil_check(F->d_2959))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2957)).cname_))), rt_g_lit("run, ", 5)), (*(P139)rt_nil_check(F->l_2960))), rt_g_lit(");", 2)));
} else {
f_family_range_1178(F->up, F->y_2957, F->ix_2956, &F->lo_2962, &F->hi_2963);
f_act_path_i_1108(F->up, F->y_2957, rt_g_lit("k_", 2), &F->a_2958);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->lo_2962))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->hi_2963))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P139)rt_nil_check(F->l_2960))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P139)rt_nil_check(F->a_2958))), rt_g_lit(", &", 3)), (*(P139)rt_nil_check(F->d_2959))), rt_g_lit(", ", 2)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_2957)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_2955 = (*(P173)rt_nil_check(F->n_2955)).next_;
}
L_end_2965: ;
} else if (0 || sel2964 == ((rt_int)34LL)) {
f_gen_accept_1164(F->up, F->s_1179);
} else if (0 || sel2964 == ((rt_int)35LL)) {
f_gen_select_1173(F->up, F->s_1179);
} else if (0 || sel2964 == ((rt_int)36LL)) {
F->n_2955 = (*(P173)rt_nil_check(F->s_1179)).a_;
while ((F->n_2955 != NULL)) {
f_task_of_1094(F->up, F->n_2955, &F->y_2957, &F->ix_2956);
if (((*(P116)rt_nil_check(F->y_2957)).c_ == NULL)) {
f_act_path_1104(F->up, F->y_2957, &F->a_2958);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P139)rt_nil_check(F->a_2958))), rt_g_lit(");", 2)));
} else {
f_family_range_1178(F->up, F->y_2957, F->ix_2956, &F->lo_2962, &F->hi_2963);
f_act_path_i_1108(F->up, F->y_2957, rt_g_lit("k_", 2), &F->a_2958);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P139)rt_nil_check(F->lo_2962))), rt_g_lit("; k_ <= ", 8)), (*(P139)rt_nil_check(F->hi_2963))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P139)rt_nil_check(F->a_2958))), rt_g_lit(");", 2)));
}
F->n_2955 = (*(P173)rt_nil_check(F->n_2955)).next_;
}
L_end_2966: ;
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->s_1179)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P173 f_root_name_1182(struct f_greenc_1fr *up_, P173 e_1181) {
  struct f_root_name_1182fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1181 = e_1181;
if ((G_NV((*(P173)rt_nil_check(F->e_1181)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1181;
goto ret_;
} else if ((((G_NV((*(P173)rt_nil_check(F->e_1181)).kind_) == ((rt_int)9LL)) || (G_NV((*(P173)rt_nil_check(F->e_1181)).kind_) == ((rt_int)8LL))) || (G_NV((*(P173)rt_nil_check(F->e_1181)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1182(F->up, (*(P173)rt_nil_check(F->e_1181)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1185(struct f_greenc_1fr *up_, P173 target_1183, rt_int line_1184) {
  struct f_check_pure_target_1185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1183 = target_1183;
F->line_1184 = line_1184;
F->n_2967 = NULL;
F->y_2968 = NULL;
if ((F->up->pure_sym_210 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_214)) {
f_fail_242(F->up, F->line_1184, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_2967 = f_root_name_1182(F->up, F->target_1183);
if ((F->n_2967 != NULL)) {
F->y_2968 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2967)).name_)));
if ((((F->y_2968 != NULL) && (G_NV((*(P116)rt_nil_check(F->y_2968)).kind_) == ((rt_int)1LL))) && (G_NV((*(P116)rt_nil_check(F->y_2968)).depth_) < G_NV(F->up->pure_depth_211)))) {
f_fail_242(F->up, F->line_1184, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->n_2967)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1188(struct f_greenc_1fr *up_, P173 d_1186, rt_gstr name_1187) {
  struct f_assigns_nonlocal_1188fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1186 = d_1186;
F->name_1187 = cp_rt_gstr(name_1187);
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->d_1186)).d_, F->d_1186, F->name_1187)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1195(F->up, (*(P173)rt_nil_check(F->d_1186)).e_, F->d_1186, F->name_1187);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1191(struct f_greenc_1fr *up_, P173 d_1189, rt_gstr name_1190) {
  struct f_declares_1191fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1189 = d_1189;
F->name_1190 = cp_rt_gstr(name_1190);
F->p_2969 = NULL;
F->p_2969 = (*(P173)rt_nil_check(F->d_1189)).a_;
F->e_2970 = NULL;
F->e_2970 = (*(P173)rt_nil_check(F->d_1189)).c_;
while ((F->p_2969 != NULL)) {
if (eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->p_2969)).name_)), F->name_1190)) {
F->result_ = 1;
goto ret_;
}
F->p_2969 = (*(P173)rt_nil_check(F->p_2969)).next_;
}
L_end_2971: ;
while ((F->e_2970 != NULL)) {
if ((((*(P173)rt_nil_check(F->e_2970)).name_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_2970)).name_)), F->name_1190))) {
F->result_ = 1;
goto ret_;
}
F->e_2970 = (*(P173)rt_nil_check(F->e_2970)).next_;
}
L_end_2972: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1195(struct f_greenc_1fr *up_, P173 h_1192, P173 d_1193, rt_gstr name_1194) {
  struct f_scan_handlers_1195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1192 = h_1192;
F->d_1193 = d_1193;
F->name_1194 = cp_rt_gstr(name_1194);
F->p_2973 = NULL;
F->p_2973 = F->h_1192;
while ((F->p_2973 != NULL)) {
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->p_2973)).b_, F->d_1193, F->name_1194)) {
F->result_ = 1;
goto ret_;
}
F->p_2973 = (*(P173)rt_nil_check(F->p_2973)).next_;
}
L_end_2974: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1199(struct f_greenc_1fr *up_, P173 stmts_1196, P173 d_1197, rt_gstr name_1198) {
  struct f_scan_assigns_1199fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1196 = stmts_1196;
F->d_1197 = d_1197;
F->name_1198 = cp_rt_gstr(name_1198);
F->s_2975 = NULL;
F->s_2975 = F->stmts_1196;
F->a_2976 = NULL;
F->r_2977 = NULL;
while ((F->s_2975 != NULL)) {
if ((G_NV((*(P173)rt_nil_check(F->s_2975)).kind_) == ((rt_int)20LL))) {
F->r_2977 = f_root_name_1182(F->up, (*(P173)rt_nil_check(F->s_2975)).a_);
if ((((F->r_2977 != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->r_2977)).name_)), F->name_1198)) && (!f_declares_1191(F->up, F->d_1197, F->name_1198)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2975)).kind_) == ((rt_int)22LL))) {
F->a_2976 = (*(P173)rt_nil_check(F->s_2975)).a_;
while ((F->a_2976 != NULL)) {
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->a_2976)).b_, F->d_1197, F->name_1198)) {
F->result_ = 1;
goto ret_;
}
F->a_2976 = (*(P173)rt_nil_check(F->a_2976)).next_;
}
L_end_2979: ;
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->s_2975)).b_, F->d_1197, F->name_1198)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2975)).kind_) == ((rt_int)23LL))) {
F->a_2976 = (*(P173)rt_nil_check(F->s_2975)).b_;
while ((F->a_2976 != NULL)) {
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->a_2976)).b_, F->d_1197, F->name_1198)) {
F->result_ = 1;
goto ret_;
}
F->a_2976 = (*(P173)rt_nil_check(F->a_2976)).next_;
}
L_end_2980: ;
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->s_2975)).c_, F->d_1197, F->name_1198)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2975)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->s_2975)).b_, F->d_1197, F->name_1198)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P173)rt_nil_check(F->s_2975)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1199(F->up, (*(P173)rt_nil_check(F->s_2975)).b_, F->d_1197, F->name_1198) || f_scan_handlers_1195(F->up, (*(P173)rt_nil_check(F->s_2975)).c_, F->d_1197, F->name_1198))) {
F->result_ = 1;
goto ret_;
}
}
F->s_2975 = (*(P173)rt_nil_check(F->s_2975)).next_;
}
L_end_2978: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1202(struct f_greenc_1fr *up_, P173 e_1200, P116 y_1201) {
  struct f_check_call_rules_1202fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1200 = e_1200;
F->y_1201 = y_1201;
F->z_2981 = NULL;
F->s_2982 = NULL;
if ((((F->up->pure_sym_210 != NULL) && ((G_NV((*(P121)rt_nil_check((*(P116)rt_nil_check(F->y_1201)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P116)rt_nil_check(F->y_1201)).vrp_))) && (G_NV((*(P116)rt_nil_check(F->y_1201)).depth_) < G_NV(F->up->pure_depth_211)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1200)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->up->pure_sym_210)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1201)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P116)rt_nil_check(F->y_1201)).vrp_)) || (G_NV(F->up->trial_154) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_212))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1200)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1201)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_2982 = F->up->scope_stack_120;
while ((F->s_2982 != NULL)) {
if (((((G_NV((*(P116)rt_nil_check(F->s_2982)).kind_) == ((rt_int)1LL)) && (G_NV((*(P116)rt_nil_check(F->s_2982)).depth_) <= G_NV((*(P116)rt_nil_check(F->y_1201)).depth_))) && (f_lookup_409(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2982)).name_))) == F->s_2982)) && f_assigns_nonlocal_1188(F->up, (*(P116)rt_nil_check(F->y_1201)).decl_, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2982)).name_))))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1200)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1201)).name_))), rt_g_lit(" assigns ", 9)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->s_2982)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_2982 = (*(P116)rt_nil_check(F->s_2982)).stack_;
}
L_end_2983: ;
ret_:

  return;
}

static void f_generic_p_1204(struct f_greenc_1fr *up_, P173 *res_1203) {
  struct f_generic_p_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1203 = res_1203;
F->x_2984 = NULL;
F->p_2985 = NULL;
F->head_2986 = NULL;
F->tail_2987 = NULL;
F->names_2988 = NULL;
F->st_2989 = NULL;
F->def_2990 = NULL;
F->sub_2991 = NULL;
F->def_name_text_2992 = NULL;
F->more_2993 = INT_MIN;
F->more_2993 = 1;
f_expect_kw_317(F->up, rt_g_lit("GENERIC", 7));
F->x_2984 = f_nn_295(F->up, ((rt_int)54LL), f_cur_line_302(F->up));
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_2993)) {
if (f_at_kw_304(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_315(F->up);
}
if (f_at_kw_304(F->up, rt_g_lit("TYPE", 4))) {
f_skip_315(F->up);
F->p_2985 = f_nn_295(F->up, ((rt_int)47LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->p_2985)).ival_ = ((rt_int)10LL);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->p_2985)).name_);
f_append_299(F->up, &F->head_2986, &F->tail_2987, F->p_2985);
} else if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_2985 = f_nn_295(F->up, ((rt_int)47LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check(F->p_2985)).ival_ = ((rt_int)11LL);
if (f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_2991 = f_nn_295(F->up, ((rt_int)44LL), f_cur_line_302(F->up));
} else {
F->sub_2991 = f_nn_295(F->up, ((rt_int)45LL), f_cur_line_302(F->up));
}
f_skip_315(F->up);
f_designator_379(F->up, &(*(P173)rt_nil_check(F->sub_2991)).name_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_formal_part_377(F->up, &(*(P173)rt_nil_check(F->sub_2991)).a_);
}
if (f_at_kw_304(F->up, rt_g_lit("RETURN", 6))) {
f_skip_315(F->up);
f_subtype_ind_359(F->up, &(*(P173)rt_nil_check(F->sub_2991)).b_);
}
(*(P173)rt_nil_check(F->sub_2991)).ival_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->p_2985)).name_ = (*(P173)rt_nil_check(F->sub_2991)).name_;
(*(P173)rt_nil_check(F->p_2985)).a_ = F->sub_2991;
if (f_at_kw_304(F->up, rt_g_lit("IS", 2))) {
f_skip_315(F->up);
if (f_at_kind_308(F->up, ((rt_int)6LL))) {
f_designator_379(F->up, &F->def_name_text_2992);
(*(P173)rt_nil_check(F->p_2985)).b_ = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
(*(P173)rt_nil_check((*(P173)rt_nil_check(F->p_2985)).b_)).name_ = F->def_name_text_2992;
} else {
f_name_p_353(F->up, &(*(P173)rt_nil_check(F->p_2985)).b_);
}
}
f_append_299(F->up, &F->head_2986, &F->tail_2987, F->p_2985);
} else {
f_id_list_325(F->up, &F->names_2988);
f_expect_op_319(F->up, rt_g_lit(":", 1));
if (f_at_kw_304(F->up, rt_g_lit("IN", 2))) {
f_skip_315(F->up);
}
f_subtype_ind_359(F->up, &F->st_2989);
F->def_2990 = NULL;
if (f_at_op_306(F->up, rt_g_lit(":=", 2))) {
f_skip_315(F->up);
f_expr_332(F->up, &F->def_2990);
}
while ((F->names_2988 != NULL)) {
F->p_2985 = f_nn_295(F->up, ((rt_int)47LL), G_NV((*(P173)rt_nil_check(F->names_2988)).line_));
(*(P173)rt_nil_check(F->p_2985)).ival_ = ((rt_int)1LL);
(*(P173)rt_nil_check(F->p_2985)).name_ = (*(P173)rt_nil_check(F->names_2988)).name_;
(*(P173)rt_nil_check(F->p_2985)).a_ = F->st_2989;
(*(P173)rt_nil_check(F->p_2985)).b_ = F->def_2990;
f_append_299(F->up, &F->head_2986, &F->tail_2987, F->p_2985);
F->names_2988 = (*(P173)rt_nil_check(F->names_2988)).next_;
}
L_end_2995: ;
}
F->more_2993 = f_at_op_306(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_2993)) {
f_skip_315(F->up);
}
}
L_end_2994: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_304(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_304(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_381(F->up, &(*(P173)rt_nil_check(F->x_2984)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_387(F->up, &(*(P173)rt_nil_check(F->x_2984)).b_);
} else if (f_at_kw_304(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1074(F->up, &(*(P173)rt_nil_check(F->x_2984)).b_);
} else {
f_perror_314(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P173)rt_nil_check(F->x_2984)).a_ = F->head_2986;
(*(P173)rt_nil_check(F->x_2984)).name_ = (*(P173)rt_nil_check((*(P173)rt_nil_check(F->x_2984)).b_)).name_;
(*F->res_1203) = F->x_2984;
ret_:

  return;
}

static void f_instantiation_1207(struct f_greenc_1fr *up_, P173 x_1205, P173 *res_1206) {
  struct f_instantiation_1207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1205 = x_1205;
F->res_1206 = res_1206;
F->i_2996 = NULL;
F->head_2997 = NULL;
F->tail_2998 = NULL;
F->a_2999 = NULL;
F->formal_3000 = NULL;
F->mark_3001 = INT64_MIN;
F->more_3002 = INT_MIN;
F->more_3002 = 1;
f_expect_kw_317(F->up, rt_g_lit("IS", 2));
f_expect_kw_317(F->up, rt_g_lit("NEW", 3));
F->i_2996 = f_nn_295(F->up, ((rt_int)53LL), G_NV((*(P173)rt_nil_check(F->x_1205)).line_));
(*(P173)rt_nil_check(F->i_2996)).name_ = (*(P173)rt_nil_check(F->x_1205)).name_;
(*(P173)rt_nil_check(F->i_2996)).ival_ = G_NV((*(P173)rt_nil_check(F->x_1205)).kind_);
f_expect_id_321(F->up, &(*(P173)rt_nil_check(F->i_2996)).tag_);
if (f_at_op_306(F->up, rt_g_lit("(", 1))) {
f_skip_315(F->up);
while (G_NV(F->more_3002)) {
F->formal_3000 = NULL;
F->mark_3001 = ((rt_int)0LL);
if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_321(F->up, &F->formal_3000);
f_skip_315(F->up);
F->mark_3001 = ((rt_int)5LL);
} else if (((f_at_kind_308(F->up, ((rt_int)1LL)) && (f_kind_at_310(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_312(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_321(F->up, &F->formal_3000);
f_skip_315(F->up);
F->mark_3001 = ((rt_int)1LL);
}
if ((f_at_kind_308(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3001) == ((rt_int)5LL)))) {
F->a_2999 = f_nn_295(F->up, ((rt_int)5LL), f_cur_line_302(F->up));
f_designator_379(F->up, &(*(P173)rt_nil_check(F->a_2999)).name_);
} else {
f_expr_332(F->up, &F->a_2999);
}
(*(P173)rt_nil_check(F->a_2999)).formal_ = F->formal_3000;
(*(P173)rt_nil_check(F->a_2999)).flag_ = G_NV(F->mark_3001);
f_append_299(F->up, &F->head_2997, &F->tail_2998, F->a_2999);
F->more_3002 = f_at_op_306(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3002)) {
f_skip_315(F->up);
}
}
L_end_3003: ;
f_expect_op_319(F->up, rt_g_lit(")", 1));
}
f_expect_op_319(F->up, rt_g_lit(";", 1));
(*(P173)rt_nil_check(F->i_2996)).a_ = F->head_2997;
(*F->res_1206) = F->i_2996;
ret_:

  return;
}

static void f_generic_decl_1209(struct f_greenc_1fr *up_, P173 e_1208) {
  struct f_generic_decl_1209fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1208 = e_1208;
F->y_3004 = NULL;
if ((G_NV((*(P173)rt_nil_check(F->e_1208)).kind_) == ((rt_int)54LL))) {
F->y_3004 = f_new_sym_455(F->up, ((rt_int)11LL), (*(P173)rt_nil_check(F->e_1208)).name_);
(*(P116)rt_nil_check(F->y_3004)).decl_ = F->e_1208;
f_define_450(F->up, F->y_3004, G_NV((*(P173)rt_nil_check(F->e_1208)).line_));
} else if ((G_NV((*(P173)rt_nil_check(F->e_1208)).kind_) == ((rt_int)53LL))) {
f_instantiate_1230(F->up, F->e_1208);
} else {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1208)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1211(struct f_greenc_1fr *up_, rt_gstr n_1210) {
  struct f_is_generic_name_1211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1210 = cp_rt_gstr(n_1210);
F->y_3005 = NULL;
F->y_3005 = f_lookup_409(F->up, F->n_1210);
if ((!(F->y_3005 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P116)rt_nil_check(F->y_3005)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1213(struct f_greenc_1fr *up_, P173 e_1212) {
  struct f_attach_generic_body_1213fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1212 = e_1212;
F->y_3006 = NULL;
F->y_3006 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1212)).name_)));
(*(P173)rt_nil_check((*(P116)rt_nil_check(F->y_3006)).decl_)).c_ = F->e_1212;
F->up->generic_contexts_147 = ({ R146 *cell3007 = rt_alloc(sizeof(R146)); *cell3007 = cp_R146(({ R146 ag3008; ag3008.body_node_ = F->e_1212; ag3008.visible_ = F->up->scope_stack_120; ag3008.next_ = F->up->generic_contexts_147; ag3008; })); (P145)cell3007; });
ret_:

  return;
}

static void f_restore_generic_context_1216(struct f_greenc_1fr *up_, P173 body_node_1214, rt_int line_1215) {
  struct f_restore_generic_context_1216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1214 = body_node_1214;
F->line_1215 = line_1215;
F->ctx_3009 = NULL;
F->ctx_3009 = F->up->generic_contexts_147;
F->m_3010 = NULL;
F->z_3011 = NULL;
F->seen_3012 = INT_MIN;
while (((F->ctx_3009 != NULL) && ((*(P145)rt_nil_check(F->ctx_3009)).body_node_ != F->body_node_1214))) {
F->ctx_3009 = (*(P145)rt_nil_check(F->ctx_3009)).next_;
}
L_end_3013: ;
if ((F->ctx_3009 == NULL)) {
goto ret_;
}
F->m_3010 = (*(P145)rt_nil_check(F->ctx_3009)).visible_;
while ((F->m_3010 != NULL)) {
if (((G_NV((*(P116)rt_nil_check(F->m_3010)).level_) <= ((rt_int)0LL)) && (G_NV((*(P116)rt_nil_check(F->m_3010)).kind_) != ((rt_int)11LL)))) {
F->z_3011 = ({ A115 ix3015 = F->up->table_118; ix3015.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_3010)).name_))), ix3015.lo, ix3015.hi) - ix3015.lo]; });
F->seen_3012 = 0;
while ((F->z_3011 != NULL)) {
if (((G_NV((*(P116)rt_nil_check(F->z_3011)).depth_) == G_NV(F->up->depth_119)) && eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->z_3011)).name_)), (*(P139)rt_nil_check((*(P116)rt_nil_check(F->m_3010)).name_))))) {
F->seen_3012 = 1;
}
F->z_3011 = (*(P116)rt_nil_check(F->z_3011)).chain_;
}
L_end_3016: ;
if ((!G_NV(F->seen_3012))) {
f_copy_sym_1027(F->up, F->m_3010, &F->z_3011);
f_define_450(F->up, F->z_3011, F->line_1215);
}
}
F->m_3010 = (*(P116)rt_nil_check(F->m_3010)).stack_;
}
L_end_3014: ;
ret_:

  return;
}

static P173 f_gactual_1220(struct f_greenc_1fr *up_, P173 args_1217, rt_int nth_1218, rt_gstr name_1219) {
  struct f_gactual_1220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1217 = args_1217;
F->nth_1218 = nth_1218;
F->name_1219 = cp_rt_gstr(name_1219);
F->a_3017 = NULL;
F->a_3017 = F->args_1217;
F->i_3018 = INT64_MIN;
F->i_3018 = ((rt_int)1LL);
while ((F->a_3017 != NULL)) {
if ((((*(P173)rt_nil_check(F->a_3017)).formal_ == NULL) && (G_NV(F->i_3018) == F->nth_1218))) {
F->result_ = F->a_3017;
goto ret_;
}
if ((((*(P173)rt_nil_check(F->a_3017)).formal_ != NULL) && eq_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3017)).formal_)), F->name_1219))) {
F->result_ = F->a_3017;
goto ret_;
}
if (((*(P173)rt_nil_check(F->a_3017)).formal_ == NULL)) {
F->i_3018 = rt_add(G_NV(F->i_3018), ((rt_int)1LL));
}
F->a_3017 = (*(P173)rt_nil_check(F->a_3017)).next_;
}
L_end_3019: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1224(struct f_greenc_1fr *up_, P173 n_1221, P139 name_1222, P173 *r_1223) {
  struct f_copy_node_1224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1221 = n_1221;
F->name_1222 = name_1222;
F->r_1223 = r_1223;
(*F->r_1223) = f_nn_295(F->up, G_NV((*(P173)rt_nil_check(F->n_1221)).kind_), G_NV((*(P173)rt_nil_check(F->n_1221)).line_));
as_R174(&(*(P173)rt_nil_check((*F->r_1223))), (*(P173)rt_nil_check(F->n_1221)));
(*(P173)rt_nil_check((*F->r_1223))).name_ = F->name_1222;
(*(P173)rt_nil_check((*F->r_1223))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1228(struct f_greenc_1fr *up_, P116 y_1225, rt_gstr name_1226, P116 fs_1227) {
  struct f_matches_formal_1228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1225 = y_1225;
F->name_1226 = cp_rt_gstr(name_1226);
F->fs_1227 = fs_1227;
if (((!eq_rt_gstr((*(P139)rt_nil_check((*(P116)rt_nil_check(F->y_1225)).name_)), F->name_1226)) || ((G_NV((*(P116)rt_nil_check(F->y_1225)).kind_) != ((rt_int)3LL)) && (G_NV((*(P116)rt_nil_check(F->y_1225)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_441(F->up, (*(P116)rt_nil_check(F->y_1225)).params_, (*(P116)rt_nil_check(F->fs_1227)).params_) && f_same_429(F->up, (*(P116)rt_nil_check(F->y_1225)).result_, (*(P116)rt_nil_check(F->fs_1227)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1230(struct f_greenc_1fr *up_, P173 e_1229) {
  struct f_instantiate_1230fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1229 = e_1229;
F->g_3020 = NULL;
F->g_3020 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).tag_)));
F->gd_3021 = NULL;
F->pat_3022 = NULL;
F->f_3023 = NULL;
F->a_3024 = NULL;
F->cn_3025 = NULL;
F->y_3026 = NULL;
F->z_3027 = NULL;
F->fs_3028 = NULL;
F->nth_3029 = INT64_MIN;
F->nth_3029 = ((rt_int)1LL);
F->t_3030 = NULL;
F->vt_3031 = NULL;
F->c_3032 = NULL;
F->v_3033 = NULL;
F->acc_3034 = NULL;
F->x_3035 = NULL;
F->ok_3036 = INT_MIN;
if (((F->g_3020 == NULL) || (G_NV((*(P116)rt_nil_check(F->g_3020)).kind_) != ((rt_int)11LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3021 = (*(P116)rt_nil_check(F->g_3020)).decl_;
F->pat_3022 = (*(P173)rt_nil_check(F->gd_3021)).b_;
f_open_scope_451(F->up);
F->f_3023 = (*(P173)rt_nil_check(F->gd_3021)).a_;
while ((F->f_3023 != NULL)) {
F->a_3024 = f_gactual_1220(F->up, (*(P173)rt_nil_check(F->e_1229)).a_, G_NV(F->nth_3029), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_)));
F->nth_3029 = rt_add(G_NV(F->nth_3029), ((rt_int)1LL));
if ((G_NV((*(P173)rt_nil_check(F->f_3023)).ival_) == ((rt_int)10LL))) {
if (((F->a_3024 == NULL) || (G_NV((*(P173)rt_nil_check(F->a_3024)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_))));
}
F->y_3026 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3024)).name_)));
if (((F->y_3026 == NULL) || (G_NV((*(P116)rt_nil_check(F->y_3026)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr((*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3024)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_1027(F->up, F->y_3026, &F->z_3027);
(*(P116)rt_nil_check(F->z_3027)).name_ = (*(P173)rt_nil_check(F->f_3023)).name_;
f_define_450(F->up, F->z_3027, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
} else if ((G_NV((*(P173)rt_nil_check(F->f_3023)).ival_) == ((rt_int)11LL))) {
if ((F->a_3024 == NULL)) {
F->a_3024 = (*(P173)rt_nil_check(F->f_3023)).b_;
}
if (((F->a_3024 == NULL) || (G_NV((*(P173)rt_nil_check(F->a_3024)).kind_) != ((rt_int)5LL)))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_))));
}
f_build_subprogram_634(F->up, (*(P173)rt_nil_check(F->f_3023)).a_, &F->fs_3028);
F->y_3026 = ({ A115 ix3038 = F->up->table_118; ix3038.p[rt_index(f_hash_407(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3024)).name_))), ix3038.lo, ix3038.hi) - ix3038.lo]; });
while (((F->y_3026 != NULL) && (!f_matches_formal_1228(F->up, F->y_3026, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3024)).name_)), F->fs_3028)))) {
F->y_3026 = (*(P116)rt_nil_check(F->y_3026)).chain_;
}
L_end_3039: ;
if ((F->y_3026 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->a_3024)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_))));
}
f_copy_sym_1027(F->up, F->y_3026, &F->z_3027);
(*(P116)rt_nil_check(F->z_3027)).name_ = (*(P173)rt_nil_check(F->f_3023)).name_;
f_define_450(F->up, F->z_3027, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
} else {
if ((F->a_3024 == NULL)) {
F->a_3024 = (*(P173)rt_nil_check(F->f_3023)).b_;
}
if ((F->a_3024 == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_))));
}
f_resolve_493(F->up, (*(P173)rt_nil_check(F->f_3023)).a_, &F->t_3030, &F->c_3032);
f_gexpr_779(F->up, F->a_3024, F->t_3030, &F->vt_3031, &F->v_3033);
f_check_type_472(F->up, F->vt_3031, F->t_3030, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
F->z_3027 = f_new_sym_455(F->up, ((rt_int)2LL), (*(P173)rt_nil_check(F->f_3023)).name_);
f_storage_622(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->f_3023)).name_)), F->t_3030, &F->acc_3034);
f_copy_code_607(F->up, F->t_3030, (*(P139)rt_nil_check(F->v_3033)), &F->x_3035);
f_emit_248(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P139)rt_nil_check(F->acc_3034)), rt_g_lit(" = ", 3)), (*(P139)rt_nil_check(F->x_3035))), one_rt_gstr(59)));
(*(P116)rt_nil_check(F->z_3027)).t_ = F->t_3030;
(*(P116)rt_nil_check(F->z_3027)).c_ = F->c_3032;
(*(P116)rt_nil_check(F->z_3027)).ro_ = 1;
if ((G_NV((*(P121)rt_nil_check(F->t_3030)).kind_) == ((rt_int)1LL))) {
f_manifest_489(F->up, F->a_3024, &(*(P116)rt_nil_check(F->z_3027)).mvalue_, &F->ok_3036);
 (void)rt_range(F->ok_3036, 0, 1);
(*(P116)rt_nil_check(F->z_3027)).hasmv_ = G_NV(F->ok_3036);
}
f_bind_625(F->up, F->z_3027, F->acc_3034);
f_define_450(F->up, F->z_3027, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
}
F->f_3023 = (*(P173)rt_nil_check(F->f_3023)).next_;
}
L_end_3037: ;
if (((*(P173)rt_nil_check(F->gd_3021)).c_ != NULL)) {
f_restore_generic_context_1216(F->up, (*(P173)rt_nil_check(F->gd_3021)).c_, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
}
if (((G_NV((*(P173)rt_nil_check(F->pat_3022)).kind_) == ((rt_int)44LL)) || (G_NV((*(P173)rt_nil_check(F->pat_3022)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P173)rt_nil_check(F->pat_3022)).ival_) == ((rt_int)1LL))) {
if (((*(P173)rt_nil_check(F->gd_3021)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3022 = (*(P173)rt_nil_check(F->gd_3021)).c_;
}
f_copy_node_1224(F->up, F->pat_3022, (*(P173)rt_nil_check(F->e_1229)).name_, &F->cn_3025);
f_build_subprogram_634(F->up, F->cn_3025, &F->y_3026);
f_define_450(F->up, F->y_3026, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
f_subprogram_body_666(F->up, F->cn_3025, F->y_3026);
} else if ((G_NV((*(P173)rt_nil_check(F->pat_3022)).kind_) == ((rt_int)48LL))) {
f_copy_node_1224(F->up, F->pat_3022, (*(P173)rt_nil_check(F->e_1229)).name_, &F->cn_3025);
f_package_spec_1032(F->up, F->cn_3025);
F->y_3026 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).name_)));
if (((*(P173)rt_nil_check(F->gd_3021)).c_ != NULL)) {
f_copy_node_1224(F->up, (*(P173)rt_nil_check(F->gd_3021)).c_, (*(P173)rt_nil_check(F->e_1229)).name_, &F->cn_3025);
f_package_body_1037(F->up, F->cn_3025);
}
} else {
f_copy_node_1224(F->up, F->pat_3022, (*(P173)rt_nil_check(F->e_1229)).name_, &F->cn_3025);
f_task_spec_1129(F->up, F->cn_3025);
F->y_3026 = f_lookup_409(F->up, (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).name_)));
if (((*(P173)rt_nil_check(F->gd_3021)).c_ == NULL)) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->e_1229)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P139)rt_nil_check((*(P173)rt_nil_check(F->e_1229)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1224(F->up, (*(P173)rt_nil_check(F->gd_3021)).c_, (*(P173)rt_nil_check(F->e_1229)).name_, &F->cn_3025);
f_task_body_1133(F->up, F->cn_3025);
}
f_close_scope_452(F->up);
f_define_450(F->up, F->y_3026, G_NV((*(P173)rt_nil_check(F->e_1229)).line_));
ret_:

  return;
}

static void f_predef_type_1235(struct f_greenc_1fr *up_, rt_gstr name_1231, P121 t_1232, rt_gstr lo_1233, rt_gstr hi_1234) {
  struct f_predef_type_1235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1231 = cp_rt_gstr(name_1231);
F->t_1232 = t_1232;
F->lo_1233 = cp_rt_gstr(lo_1233);
F->hi_1234 = cp_rt_gstr(hi_1234);
F->y_3040 = NULL;
F->y_3040 = f_new_sym_455(F->up, ((rt_int)5LL), f_mk_221(F->up, F->name_1231));
(*(P116)rt_nil_check(F->y_3040)).t_ = F->t_1232;
if ((({ rt_gstr at3041 = F->lo_1233; at3041.hi >= at3041.lo ? at3041.hi - at3041.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P116)rt_nil_check(F->y_3040)).c_ = f_new_cons_458(F->up);
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3040)).c_)).lo_ = f_mk_221(F->up, F->lo_1233);
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3040)).c_)).hi_ = f_mk_221(F->up, F->hi_1234);
if (((({ rt_gstr at3042 = F->hi_1234; at3042.hi >= at3042.lo ? at3042.hi - at3042.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_228(F->up, G_NV(({ rt_gstr ix3046 = F->hi_1234; ix3046.p[rt_index(({ rt_gstr at3045 = F->hi_1234; at3045.lo; }), ix3046.lo, ix3046.hi) - ix3046.lo]; }))))) {
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3040)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1233));
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3040)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1234));
(*(P177)rt_nil_check((*(P116)rt_nil_check(F->y_3040)).c_)).hasm_ = 1;
}
}
f_define_450(F->up, F->y_3040, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1239(struct f_greenc_1fr *up_, rt_gstr name_1236, P121 t_1237, rt_gstr code_text_1238) {
  struct f_predef_const_1239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1236 = cp_rt_gstr(name_1236);
F->t_1237 = t_1237;
F->code_text_1238 = cp_rt_gstr(code_text_1238);
F->y_3047 = NULL;
F->y_3047 = f_new_sym_455(F->up, ((rt_int)2LL), f_mk_221(F->up, F->name_1236));
(*(P116)rt_nil_check(F->y_3047)).t_ = F->t_1237;
(*(P116)rt_nil_check(F->y_3047)).ro_ = 1;
(*(P116)rt_nil_check(F->y_3047)).access_path_ = f_mk_221(F->up, F->code_text_1238);
f_define_450(F->up, F->y_3047, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1241(struct f_greenc_1fr *up_, rt_gstr name_1240) {
  struct f_predef_exc_1241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1240 = cp_rt_gstr(name_1240);
F->y_3048 = NULL;
F->y_3048 = f_new_sym_455(F->up, ((rt_int)6LL), f_mk_221(F->up, F->name_1240));
(*(P116)rt_nil_check(F->y_3048)).cname_ = f_mk_221(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_239(F->up)), F->name_1240), f_q_239(F->up)), one_rt_gstr(41)));
f_define_450(F->up, F->y_3048, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1245(struct f_greenc_1fr *up_, rt_gstr name_1242, P121 t_1243, rt_int v_1244) {
  struct f_predef_lit_1245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1242 = cp_rt_gstr(name_1242);
F->t_1243 = t_1243;
F->v_1244 = v_1244;
F->y_3049 = NULL;
F->y_3049 = f_new_sym_455(F->up, ((rt_int)7LL), f_mk_221(F->up, F->name_1242));
(*(P116)rt_nil_check(F->y_3049)).t_ = F->t_1243;
(*(P116)rt_nil_check(F->y_3049)).result_ = F->t_1243;
(*(P116)rt_nil_check(F->y_3049)).mvalue_ = F->v_1244;
(*(P116)rt_nil_check(F->y_3049)).hasmv_ = 1;
f_define_450(F->up, F->y_3049, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1246(struct f_greenc_1fr *up_) {
  struct f_predefine_1246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->control_3050 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3051 = INT64_MIN;
F->start_3051 = ((rt_int)1LL);
F->code_no_3052 = INT64_MIN;
F->code_no_3052 = ((rt_int)0LL);
f_predef_type_1235(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_155, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_166, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_155, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1235(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_155, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1235(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_156, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1235(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_158, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1235(F->up, rt_g_lit("STRING", 6), F->up->ty_string_159, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_157, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1235(F->up, rt_g_lit("TIME", 4), F->up->ty_time_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1245(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_156, ((rt_int)0LL));
f_predef_lit_1245(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_156, ((rt_int)1LL));
{ rt_int lo3056 = ((rt_int)1LL), hi3057 = ({ rt_gstr at3054 = F->control_3050; at3054.hi >= at3054.lo ? at3054.hi - at3054.lo + 1 : (rt_int)0; });
for (rt_int it3058 = lo3056; it3058 <= hi3057; it3058++) {
F->i_3055 = it3058;
if ((G_NV(({ rt_gstr ix3059 = F->control_3050; ix3059.p[rt_index(F->i_3055, ix3059.lo, ix3059.hi) - ix3059.lo]; })) == 32)) {
f_predef_const_1239(F->up, ({ rt_gstr sl3061 = F->control_3050; rt_int l_ = G_NV(F->start_3051), h_ = rt_sub(F->i_3055, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3061.lo, sl3061.hi); rt_index(h_, sl3061.lo, sl3061.hi); } sl3061.p += l_ - sl3061.lo; sl3061.lo = l_; sl3061.hi = h_; sl3061; }), F->up->ty_char_158, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3052))));
F->code_no_3052 = rt_add(G_NV(F->code_no_3052), ((rt_int)1LL));
F->start_3051 = rt_add(F->i_3055, ((rt_int)1LL));
}
}
}
L_end_3053: ;
f_predef_const_1239(F->up, rt_g_lit("DEL", 3), F->up->ty_char_158, rt_g_lit("127", 3));
f_predef_const_1239(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_158, rt_g_lit("33", 2));
f_predef_const_1239(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_158, rt_g_lit("36", 2));
f_predef_const_1239(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_158, rt_g_lit("63", 2));
f_predef_const_1239(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_158, rt_g_lit("64", 2));
f_predef_const_1239(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_158, rt_g_lit("91", 2));
f_predef_const_1239(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_158, rt_g_lit("92", 2));
f_predef_const_1239(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_158, rt_g_lit("93", 2));
f_predef_const_1239(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_158, rt_g_lit("94", 2));
f_predef_const_1239(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_158, rt_g_lit("96", 2));
f_predef_const_1239(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_158, rt_g_lit("123", 3));
f_predef_const_1239(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_158, rt_g_lit("125", 3));
f_predef_const_1239(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_158, rt_g_lit("126", 3));
{ rt_int lo3064 = ((rt_int)0LL), hi3065 = ((rt_int)25LL);
for (rt_int it3066 = lo3064; it3066 <= hi3065; it3066++) {
F->i_3063 = it3066;
f_predef_const_1239(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3063) - 1), 0, 127))), F->up->ty_char_158, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3063))));
}
}
L_end_3062: ;
f_predef_const_1239(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_159, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_239(F->up)), rt_g_lit("\\n", 2)), f_q_239(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1239(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_170, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1241(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1241(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1241(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1241(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1241(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1241(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1241(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1241(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1241(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1241(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1241(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1241(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1241(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1241(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1241(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1241(F->up, rt_g_lit("END_OF_FILE", 11));
ret_:

  return;
}

static void f_translate_1248(struct f_greenc_1fr *up_, P173 u_1247) {
  struct f_translate_1248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1247 = u_1247;
F->p_3067 = NULL;
F->p_3067 = F->u_1247;
F->y_3068 = NULL;
f_open_scope_451(F->up);
while ((F->p_3067 != NULL)) {
if (((*(P173)rt_nil_check(F->p_3067)).next_ == NULL)) {
if (((G_NV((*(P173)rt_nil_check(F->p_3067)).kind_) != ((rt_int)44LL)) || ((*(P173)rt_nil_check(F->p_3067)).a_ != NULL))) {
f_fail_242(F->up, G_NV((*(P173)rt_nil_check(F->p_3067)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_634(F->up, F->p_3067, &F->y_3068);
f_define_450(F->up, F->y_3068, G_NV((*(P173)rt_nil_check(F->p_3067)).line_));
f_subprogram_body_666(F->up, F->p_3067, F->y_3068);
F->up->main_name_215 = (*(P116)rt_nil_check(F->y_3068)).cname_;
} else {
f_decl_element_638(F->up, F->p_3067);
}
F->p_3067 = (*(P173)rt_nil_check(F->p_3067)).next_;
}
L_end_3069: ;
ret_:

  return;
}

static void f_print_program_1249(struct f_greenc_1fr *up_) {
  struct f_print_program_1249fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_616(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_239(F->up)), rt_g_lit("paleo.h", 7)), f_q_239(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_250(F->up, F->up->out_types_127);
f_print_buffer_250(F->up, F->up->out_frames_128);
f_print_buffer_250(F->up, F->up->out_helpers_129);
f_print_buffer_250(F->up, F->up->out_protos_130);
f_print_buffer_250(F->up, F->up->out_globals_131);
f_print_buffer_250(F->up, F->up->out_funcs_132);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_250(F->up, F->up->out_excs_134);
f_print_buffer_250(F->up, F->up->out_init_133);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P139)rt_nil_check(F->up->main_name_215))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_250(F->up, F->up->out_awaits_203);
rt_g_put(rt_g_g2s(rt_g_lit("  rt_main_done();", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  return 0;", 11)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("}", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
ret_:

  return;
}

static void f_greenc_1(void) {
  struct f_greenc_1fr *F = rt_alloc(sizeof *F);
F->k_eof_2 = ((rt_int)0LL);
F->k_id_3 = ((rt_int)1LL);
F->k_kw_4 = ((rt_int)2LL);
F->k_op_5 = ((rt_int)3LL);
F->k_int_6 = ((rt_int)4LL);
F->k_float_7 = ((rt_int)5LL);
F->k_str_8 = ((rt_int)6LL);
F->n_int_9 = ((rt_int)1LL);
F->n_float_10 = ((rt_int)2LL);
F->n_str_11 = ((rt_int)3LL);
F->n_nil_12 = ((rt_int)4LL);
F->n_name_13 = ((rt_int)5LL);
F->n_unop_14 = ((rt_int)6LL);
F->n_binop_15 = ((rt_int)7LL);
F->n_apply_16 = ((rt_int)8LL);
F->n_select_17 = ((rt_int)9LL);
F->n_attr_18 = ((rt_int)10LL);
F->n_new_19 = ((rt_int)11LL);
F->n_agg_20 = ((rt_int)12LL);
F->n_citem_21 = ((rt_int)13LL);
F->n_range_22 = ((rt_int)14LL);
F->n_paren_23 = ((rt_int)15LL);
F->n_raw_24 = ((rt_int)16LL);
F->n_assign_25 = ((rt_int)20LL);
F->n_call_26 = ((rt_int)21LL);
F->n_if_27 = ((rt_int)22LL);
F->n_case_28 = ((rt_int)23LL);
F->n_loop_29 = ((rt_int)24LL);
F->n_block_30 = ((rt_int)25LL);
F->n_exit_31 = ((rt_int)26LL);
F->n_return_32 = ((rt_int)27LL);
F->n_raise_33 = ((rt_int)28LL);
F->n_reraise_34 = ((rt_int)29LL);
F->n_assert_35 = ((rt_int)30LL);
F->n_null_36 = ((rt_int)31LL);
F->n_delay_37 = ((rt_int)32LL);
F->n_initiate_38 = ((rt_int)33LL);
F->n_accept_39 = ((rt_int)34LL);
F->n_selects_40 = ((rt_int)35LL);
F->n_abort_41 = ((rt_int)36LL);
F->n_var_42 = ((rt_int)40LL);
F->n_const_43 = ((rt_int)41LL);
F->n_type_44 = ((rt_int)42LL);
F->n_subtype_45 = ((rt_int)43LL);
F->n_proc_46 = ((rt_int)44LL);
F->n_func_47 = ((rt_int)45LL);
F->n_exc_48 = ((rt_int)46LL);
F->n_param_49 = ((rt_int)47LL);
F->n_pkgspec_50 = ((rt_int)48LL);
F->n_pkgbody_51 = ((rt_int)49LL);
F->n_taskspec_52 = ((rt_int)50LL);
F->n_taskbody_53 = ((rt_int)51LL);
F->n_entry_54 = ((rt_int)52LL);
F->n_inst_55 = ((rt_int)53LL);
F->n_generic_56 = ((rt_int)54LL);
F->n_use_57 = ((rt_int)55LL);
F->n_pragma_58 = ((rt_int)56LL);
F->n_slabel_59 = ((rt_int)57LL);
F->n_goto_60 = ((rt_int)58LL);
F->n_arm_61 = ((rt_int)60LL);
F->n_label_62 = ((rt_int)61LL);
F->n_handler_63 = ((rt_int)62LL);
F->n_comp_64 = ((rt_int)63LL);
F->n_alt_65 = ((rt_int)64LL);
F->d_enum_66 = ((rt_int)70LL);
F->d_range_67 = ((rt_int)71LL);
F->d_float_68 = ((rt_int)72LL);
F->d_array_69 = ((rt_int)73LL);
F->d_record_70 = ((rt_int)74LL);
F->d_access_71 = ((rt_int)75LL);
F->d_derived_72 = ((rt_int)76LL);
F->d_private_73 = ((rt_int)77LL);
F->s_mark_74 = ((rt_int)80LL);
F->m_in_75 = ((rt_int)1LL);
F->m_inout_76 = ((rt_int)2LL);
F->m_out_77 = ((rt_int)3LL);
F->t_int_78 = ((rt_int)1LL);
F->t_bool_79 = ((rt_int)2LL);
F->t_float_80 = ((rt_int)3LL);
F->t_enum_81 = ((rt_int)4LL);
F->t_string_82 = ((rt_int)5LL);
F->t_array_83 = ((rt_int)6LL);
F->t_record_84 = ((rt_int)7LL);
F->t_ptr_85 = ((rt_int)8LL);
F->t_void_86 = ((rt_int)9LL);
F->t_nil_87 = ((rt_int)10LL);
F->t_char_88 = ((rt_int)11LL);
F->t_univ_89 = ((rt_int)12LL);
F->t_act_90 = ((rt_int)13LL);
F->t_tdecl_91 = ((rt_int)14LL);
F->t_entry_92 = ((rt_int)15LL);
F->t_fixed_93 = ((rt_int)16LL);
F->y_var_94 = ((rt_int)1LL);
F->y_const_95 = ((rt_int)2LL);
F->y_func_96 = ((rt_int)3LL);
F->y_proc_97 = ((rt_int)4LL);
F->y_type_98 = ((rt_int)5LL);
F->y_exc_99 = ((rt_int)6LL);
F->y_enumlit_100 = ((rt_int)7LL);
F->y_package_101 = ((rt_int)8LL);
F->y_task_102 = ((rt_int)9LL);
F->y_entry_103 = ((rt_int)10LL);
F->y_generic_104 = ((rt_int)11LL);
F->f_const_obj_105 = ((rt_int)1LL);
F->f_deferred_106 = ((rt_int)2LL);
F->toks_111.lo = ((rt_int)1LL); F->toks_111.hi = ((rt_int)1000000LL);
F->toks_111.lo2 = 1; F->toks_111.hi2 = 1;
F->toks_111.p = rt_alloc(sizeof(P109) * (size_t)G_CNT(F->toks_111));
F->ntoks_112 = INT64_MIN;
F->ntoks_112 = ((rt_int)0LL);
F->tpos_113 = INT64_MIN;
F->tpos_113 = ((rt_int)1LL);
F->src_line_114 = INT64_MIN;
F->src_line_114 = ((rt_int)0LL);
F->table_118.lo = ((rt_int)0LL); F->table_118.hi = ((rt_int)4092LL);
F->table_118.lo2 = 1; F->table_118.hi2 = 1;
F->table_118.p = rt_alloc(sizeof(P116) * (size_t)G_CNT(F->table_118));
F->depth_119 = INT64_MIN;
F->depth_119 = ((rt_int)0LL);
F->scope_stack_120 = NULL;
F->all_types_123 = NULL;
F->serial_124 = INT64_MIN;
F->serial_124 = ((rt_int)0LL);
F->out_types_127 = NULL;
F->out_frames_128 = NULL;
F->out_helpers_129 = NULL;
F->out_protos_130 = NULL;
F->out_globals_131 = NULL;
F->out_funcs_132 = NULL;
F->out_init_133 = NULL;
F->out_excs_134 = NULL;
F->code_135 = NULL;
F->fields_buf_136 = NULL;
F->in_func_137 = INT_MIN;
F->in_func_137 = 0;
F->cur_level_138 = INT64_MIN;
F->cur_level_138 = ((rt_int)0LL);
F->st_field_140 = NULL;
F->func_sym_141 = NULL;
F->exits_144 = NULL;
F->generic_contexts_147 = NULL;
F->accept_exits_148 = NULL;
F->frames_149 = INT64_MIN;
F->frames_149 = ((rt_int)0LL);
F->handlers_152 = NULL;
F->cleanups_153 = NULL;
F->trial_154 = INT64_MIN;
F->trial_154 = ((rt_int)0LL);
F->ty_int_155 = NULL;
F->ty_bool_156 = NULL;
F->ty_float_157 = NULL;
F->ty_char_158 = NULL;
F->ty_string_159 = NULL;
F->ty_void_160 = NULL;
F->ty_nil_161 = NULL;
F->ty_univ_162 = NULL;
F->ty_act_163 = NULL;
F->ty_tdecl_164 = NULL;
F->ty_entry_165 = NULL;
F->ty_short_166 = NULL;
F->ty_long_167 = NULL;
F->ty_sfloat_168 = NULL;
F->ty_lfloat_169 = NULL;
F->ty_time_170 = NULL;
F->ty_ufixed_171 = NULL;
F->completing_172 = NULL;
F->anon_node_175 = NULL;
F->anon_typ_176 = NULL;
F->anon_cons_179 = NULL;
F->agg_bounds_180 = NULL;
F->disc_syms_181 = NULL;
F->unit_names_183.lo = ((rt_int)1LL); F->unit_names_183.hi = ((rt_int)1000LL);
F->unit_names_183.lo2 = 1; F->unit_names_183.hi2 = 1;
F->unit_names_183.p = rt_alloc(sizeof(P139) * (size_t)G_CNT(F->unit_names_183));
F->unit_depths_185.lo = ((rt_int)1LL); F->unit_depths_185.hi = ((rt_int)1000LL);
F->unit_depths_185.lo2 = 1; F->unit_depths_185.hi2 = 1;
F->unit_depths_185.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->unit_depths_185));
for (rt_int i186 = 0; i186 < G_CNT(F->unit_depths_185); i186++) F->unit_depths_185.p[i186] = INT64_MIN;
F->nunits_187 = INT64_MIN;
F->nunits_187 = ((rt_int)0LL);
F->body_labels_190 = NULL;
F->body_gotos_191 = NULL;
F->segments_192 = INT64_MIN;
F->segments_192 = ((rt_int)0LL);
F->handler_exits_193 = NULL;
F->handler_depth_194 = INT64_MIN;
F->handler_depth_194 = ((rt_int)0LL);
F->post_checks_195 = NULL;
F->cur_task_196 = NULL;
F->accept_depth_197 = INT64_MIN;
F->accept_depth_197 = ((rt_int)0LL);
F->famarg_done_198 = INT_MIN;
F->famarg_done_198 = 0;
F->fam_ix_199 = NULL;
F->call_task_ix_200 = NULL;
F->saw_interface_201 = INT_MIN;
F->saw_interface_201 = 0;
F->defer_entry_structs_202 = INT_MIN;
F->defer_entry_structs_202 = 0;
F->out_awaits_203 = NULL;
F->no_cons_204 = NULL;
F->units_205 = NULL;
F->pkg_stack_206 = NULL;
F->cur_pkg_207 = NULL;
F->prefix_hint_208 = NULL;
F->call_want_209 = NULL;
F->pure_sym_210 = NULL;
F->pure_depth_211 = INT64_MIN;
F->pure_depth_211 = ((rt_int)0LL);
F->vrp_ok_212 = INT_MIN;
F->vrp_ok_212 = 0;
F->in_lv_path_213 = INT_MIN;
F->in_lv_path_213 = 0;
F->last_deref_214 = INT_MIN;
F->last_deref_214 = 0;
F->main_name_215 = NULL;
F->conf_system_216 = NULL;
F->conf_storage_unit_217 = INT64_MIN;
F->conf_storage_unit_217 = ((rt_int)8LL);
F->conf_memory_size_218 = INT64_MIN;
F->conf_memory_size_218 = ((rt_int)1048576LL);
F->conf_optimize_219 = NULL;
F->out_types_127 = f_new_buffer_243(F);
F->out_frames_128 = f_new_buffer_243(F);
F->out_helpers_129 = f_new_buffer_243(F);
F->out_protos_130 = f_new_buffer_243(F);
F->out_globals_131 = f_new_buffer_243(F);
F->out_funcs_132 = f_new_buffer_243(F);
F->out_init_133 = f_new_buffer_243(F);
F->out_excs_134 = f_new_buffer_243(F);
F->code_135 = F->out_init_133;
F->no_cons_204 = f_new_cons_458(F);
F->ty_int_155 = f_new_typ_457(F, ((rt_int)1LL));
F->ty_bool_156 = f_new_typ_457(F, ((rt_int)2LL));
F->ty_float_157 = f_new_typ_457(F, ((rt_int)3LL));
F->ty_char_158 = f_new_typ_457(F, ((rt_int)11LL));
F->ty_string_159 = f_new_typ_457(F, ((rt_int)6LL));
(*(P121)rt_nil_check(F->ty_string_159)).name_ = f_mk_221(F, rt_g_lit("STRING", 6));
(*(P121)rt_nil_check(F->ty_string_159)).cname_ = f_mk_221(F, rt_g_lit("rt_gstr", 7));
(*(P121)rt_nil_check(F->ty_string_159)).dims_ = ((rt_int)1LL);
(*(P121)rt_nil_check(F->ty_string_159)).elem_ = F->ty_char_158;
(*(P121)rt_nil_check(F->ty_string_159)).tcons_ = f_new_cons_458(F);
(*(P177)rt_nil_check((*(P121)rt_nil_check(F->ty_string_159)).tcons_)).lo_ = f_mk_221(F, rt_g_lit("1", 1));
F->ty_void_160 = f_new_typ_457(F, ((rt_int)9LL));
F->ty_nil_161 = f_new_typ_457(F, ((rt_int)10LL));
F->ty_act_163 = f_new_typ_457(F, ((rt_int)13LL));
F->ty_tdecl_164 = f_new_typ_457(F, ((rt_int)14LL));
F->ty_entry_165 = f_new_typ_457(F, ((rt_int)15LL));
(*(P121)rt_nil_check(F->ty_int_155)).name_ = f_mk_221(F, rt_g_lit("INTEGER", 7));
(*(P121)rt_nil_check(F->ty_string_159)).idx_ = F->ty_int_155;
(*(P121)rt_nil_check(F->ty_string_159)).next_ = F->all_types_123;
F->all_types_123 = F->ty_string_159;
(*(P121)rt_nil_check(F->ty_float_157)).name_ = f_mk_221(F, rt_g_lit("FLOAT", 5));
(*(P121)rt_nil_check(F->ty_float_157)).ndigits_ = ((rt_int)15LL);
F->ty_short_166 = f_new_typ_457(F, ((rt_int)1LL));
(*(P121)rt_nil_check(F->ty_short_166)).name_ = f_mk_221(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_167 = f_new_typ_457(F, ((rt_int)1LL));
(*(P121)rt_nil_check(F->ty_long_167)).name_ = f_mk_221(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_168 = f_new_typ_457(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_sfloat_168)).name_ = f_mk_221(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P121)rt_nil_check(F->ty_sfloat_168)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_169 = f_new_typ_457(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_lfloat_169)).name_ = f_mk_221(F, rt_g_lit("LONG_FLOAT", 10));
(*(P121)rt_nil_check(F->ty_lfloat_169)).ndigits_ = ((rt_int)15LL);
F->ty_time_170 = f_new_typ_457(F, ((rt_int)3LL));
(*(P121)rt_nil_check(F->ty_time_170)).name_ = f_mk_221(F, rt_g_lit("TIME", 4));
(*(P121)rt_nil_check(F->ty_time_170)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_171 = f_new_typ_457(F, ((rt_int)16LL));
(*(P121)rt_nil_check(F->ty_ufixed_171)).name_ = f_mk_221(F, rt_g_lit("universal fixed", 15));
F->out_awaits_203 = f_new_buffer_243(F);
f_predefine_1246(F);
f_read_source_292(F);
f_compilation_405(F, &F->units_205);
if ((F->units_205 == NULL)) {
f_fail_242(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1248(F, F->units_205);
f_print_program_1249(F);
ret_:

  return;
}

static void as_A2492(A2492 *d, A2492 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2492 cp_A2492(A2492 s) {
  A2492 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2492(A2492 a, A2492 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2492 cat_A2492(A2492 a, A2492 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2492 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2492 one_A2492(rt_int e) {
  A2492 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2489(A2489 *d, A2489 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2489 cp_A2489(A2489 s) {
  A2489 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2489(A2489 a, A2489 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2489 cat_A2489(A2489 a, A2489 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2489 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2489 one_A2489(rt_int e) {
  A2489 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2484(A2484 *d, A2484 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2484 cp_A2484(A2484 s) {
  A2484 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2484(A2484 a, A2484 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2484 and_A2484(A2484 a, A2484 b) { A2484 r = cp_A2484(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2484 or_A2484(A2484 a, A2484 b) { A2484 r = cp_A2484(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2484 xor_A2484(A2484 a, A2484 b) { A2484 r = cp_A2484(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2484 not_A2484(A2484 a) { A2484 r = cp_A2484(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2484 cat_A2484(A2484 a, A2484 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2484 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2484 one_A2484(int e) {
  A2484 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2159(A2159 *d, A2159 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2159 cp_A2159(A2159 s) {
  A2159 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2159(A2159 a, A2159 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2159 cat_A2159(A2159 a, A2159 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2159 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2159 one_A2159(rt_int e) {
  A2159 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R1905(R1905 *d, R1905 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1905 cp_R1905(R1905 s) {
  R1905 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1905(R1905 a, R1905 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1784(R1784 *d, R1784 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1784 cp_R1784(R1784 s) {
  R1784 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1784(R1784 a, R1784 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1780(R1780 *d, R1780 s) {
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->next_ = s.next_;
  d->dflt_ = s.dflt_;
  d->is_const_ = s.is_const_;
  d->is_discr_ = s.is_discr_;
  d->dsym_ = s.dsym_;
  d->guard_ = s.guard_;
  d->cond_ = s.cond_;
  d->dyn_ = s.dyn_;
}
static R1780 cp_R1780(R1780 s) {
  R1780 d = s;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.next_ = s.next_;
  d.dflt_ = s.dflt_;
  d.is_const_ = s.is_const_;
  d.is_discr_ = s.is_discr_;
  d.dsym_ = s.dsym_;
  d.guard_ = s.guard_;
  d.cond_ = s.cond_;
  d.dyn_ = s.dyn_;
  return d;
}
static int eq_R1780(R1780 a, R1780 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1762(R1762 *d, R1762 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1762 cp_R1762(R1762 s) {
  R1762 d = s;
  d.name_ = s.name_;
  d.mode_ = s.mode_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.cfield_ = s.cfield_;
  d.dflt_ = s.dflt_;
  d.next_ = s.next_;
  d.dsym_ = s.dsym_;
  return d;
}
static int eq_R1762(R1762 a, R1762 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_) && (a.dsym_ == b.dsym_);
}
static void as_R189(R189 *d, R189 s) {
  d->name_ = s.name_;
  d->cname_ = s.cname_;
  d->path_ = s.path_;
  d->frames_ = s.frames_;
  d->line_ = s.line_;
  d->next_ = s.next_;
}
static R189 cp_R189(R189 s) {
  R189 d = s;
  d.name_ = s.name_;
  d.cname_ = s.cname_;
  d.path_ = s.path_;
  d.frames_ = s.frames_;
  d.line_ = s.line_;
  d.next_ = s.next_;
  return d;
}
static int eq_R189(R189 a, R189 b) {
  return 1 && (a.name_ == b.name_) && (a.cname_ == b.cname_) && (a.path_ == b.path_) && (a.frames_ == b.frames_) && (a.line_ == b.line_) && (a.next_ == b.next_);
}
static void as_A184(A184 *d, A184 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A184 cp_A184(A184 s) {
  A184 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A184(A184 a, A184 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A184 cat_A184(A184 a, A184 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A184 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A184 one_A184(rt_int e) {
  A184 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A182(A182 *d, A182 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A182 cp_A182(A182 s) {
  A182 d = s; d.p = rt_alloc(sizeof(P139) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A182(A182 a, A182 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A182 cat_A182(A182 a, A182 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A182 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P139) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A182 one_A182(P139 e) {
  A182 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P139)); r.p[0] = e;
  return r;
}
static void as_R178(R178 *d, R178 s) {
  d->lo_ = s.lo_;
  d->hi_ = s.hi_;
  d->slen_ = s.slen_;
  d->mlo_ = s.mlo_;
  d->mhi_ = s.mhi_;
  d->hasm_ = s.hasm_;
  d->lo2_ = s.lo2_;
  d->hi2_ = s.hi2_;
  d->acc_ = s.acc_;
  d->inner_ = s.inner_;
  d->dv_ = s.dv_;
}
static R178 cp_R178(R178 s) {
  R178 d = s;
  d.lo_ = s.lo_;
  d.hi_ = s.hi_;
  d.slen_ = s.slen_;
  d.mlo_ = s.mlo_;
  d.mhi_ = s.mhi_;
  d.hasm_ = s.hasm_;
  d.lo2_ = s.lo2_;
  d.hi2_ = s.hi2_;
  d.acc_ = s.acc_;
  d.inner_ = s.inner_;
  d.dv_ = s.dv_;
  return d;
}
static int eq_R178(R178 a, R178 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_) && (a.inner_ == b.inner_) && (a.dv_ == b.dv_);
}
static void as_R174(R174 *d, R174 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->flag_ = s.flag_;
  d->name_ = s.name_;
  d->tag_ = s.tag_;
  d->a_ = s.a_;
  d->b_ = s.b_;
  d->c_ = s.c_;
  d->d_ = s.d_;
  d->e_ = s.e_;
  d->next_ = s.next_;
  d->formal_ = s.formal_;
}
static R174 cp_R174(R174 s) {
  R174 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.flag_ = s.flag_;
  d.name_ = s.name_;
  d.tag_ = s.tag_;
  d.a_ = s.a_;
  d.b_ = s.b_;
  d.c_ = s.c_;
  d.d_ = s.d_;
  d.e_ = s.e_;
  d.next_ = s.next_;
  d.formal_ = s.formal_;
  return d;
}
static int eq_R174(R174 a, R174 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R151(R151 *d, R151 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R151 cp_R151(R151 s) {
  R151 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R151(R151 a, R151 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R146(R146 *d, R146 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R146 cp_R146(R146 s) {
  R146 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R146(R146 a, R146 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R143(R143 *d, R143 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R143 cp_R143(R143 s) {
  R143 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R143(R143 a, R143 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R126(R126 *d, R126 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R126 cp_R126(R126 s) {
  R126 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R126(R126 a, R126 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R122(R122 *d, R122 s) {
  d->kind_ = s.kind_;
  d->name_ = s.name_;
  d->lits_ = s.lits_;
  d->elem_ = s.elem_;
  d->idx_ = s.idx_;
  d->elemcons_ = s.elemcons_;
  d->tcons_ = s.tcons_;
  d->fields_ = s.fields_;
  d->target_ = s.target_;
  d->decl_ = s.decl_;
  d->cname_ = s.cname_;
  d->forward_ = s.forward_;
  d->defined_ = s.defined_;
  d->priv_ = s.priv_;
  d->next_ = s.next_;
  d->idx2_ = s.idx2_;
  d->littab_ = s.littab_;
  d->parent_ = s.parent_;
  d->ndigits_ = s.ndigits_;
  d->fdelta_ = s.fdelta_;
  d->fsmall_ = s.fsmall_;
  d->dims_ = s.dims_;
  d->is_restricted_ = s.is_restricted_;
}
static R122 cp_R122(R122 s) {
  R122 d = s;
  d.kind_ = s.kind_;
  d.name_ = s.name_;
  d.lits_ = s.lits_;
  d.elem_ = s.elem_;
  d.idx_ = s.idx_;
  d.elemcons_ = s.elemcons_;
  d.tcons_ = s.tcons_;
  d.fields_ = s.fields_;
  d.target_ = s.target_;
  d.decl_ = s.decl_;
  d.cname_ = s.cname_;
  d.forward_ = s.forward_;
  d.defined_ = s.defined_;
  d.priv_ = s.priv_;
  d.next_ = s.next_;
  d.idx2_ = s.idx2_;
  d.littab_ = s.littab_;
  d.parent_ = s.parent_;
  d.ndigits_ = s.ndigits_;
  d.fdelta_ = s.fdelta_;
  d.fsmall_ = s.fsmall_;
  d.dims_ = s.dims_;
  d.is_restricted_ = s.is_restricted_;
  return d;
}
static int eq_R122(R122 a, R122 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R117(R117 *d, R117 s) {
  d->kind_ = s.kind_;
  d->name_ = s.name_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->access_path_ = s.access_path_;
  d->cname_ = s.cname_;
  d->ro_ = s.ro_;
  d->mvalue_ = s.mvalue_;
  d->hasmv_ = s.hasmv_;
  d->decl_ = s.decl_;
  d->params_ = s.params_;
  d->result_ = s.result_;
  d->depth_ = s.depth_;
  d->level_ = s.level_;
  d->byref_ = s.byref_;
  d->vrp_ = s.vrp_;
  d->hidden_ = s.hidden_;
  d->from_use_ = s.from_use_;
  d->members_ = s.members_;
  d->mnext_ = s.mnext_;
  d->chain_ = s.chain_;
  d->stack_ = s.stack_;
  d->flags_ = s.flags_;
}
static R117 cp_R117(R117 s) {
  R117 d = s;
  d.kind_ = s.kind_;
  d.name_ = s.name_;
  d.t_ = s.t_;
  d.c_ = s.c_;
  d.access_path_ = s.access_path_;
  d.cname_ = s.cname_;
  d.ro_ = s.ro_;
  d.mvalue_ = s.mvalue_;
  d.hasmv_ = s.hasmv_;
  d.decl_ = s.decl_;
  d.params_ = s.params_;
  d.result_ = s.result_;
  d.depth_ = s.depth_;
  d.level_ = s.level_;
  d.byref_ = s.byref_;
  d.vrp_ = s.vrp_;
  d.hidden_ = s.hidden_;
  d.from_use_ = s.from_use_;
  d.members_ = s.members_;
  d.mnext_ = s.mnext_;
  d.chain_ = s.chain_;
  d.stack_ = s.stack_;
  d.flags_ = s.flags_;
  return d;
}
static int eq_R117(R117 a, R117 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_) && (a.flags_ == b.flags_);
}
static void as_A115(A115 *d, A115 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A115 cp_A115(A115 s) {
  A115 d = s; d.p = rt_alloc(sizeof(P116) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A115(A115 a, A115 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A115 cat_A115(A115 a, A115 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A115 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P116) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A115 one_A115(P116 e) {
  A115 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P116)); r.p[0] = e;
  return r;
}
static void as_R110(R110 *d, R110 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R110 cp_R110(R110 s) {
  R110 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R110(R110 a, R110 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A108(A108 *d, A108 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A108 cp_A108(A108 s) {
  A108 d = s; d.p = rt_alloc(sizeof(P109) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A108(A108 a, A108 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A108 cat_A108(A108 a, A108 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A108 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P109) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A108 one_A108(P109 e) {
  A108 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P109)); r.p[0] = e;
  return r;
}
static void as_rt_gstr(rt_gstr *d, rt_gstr s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static rt_gstr cp_rt_gstr(rt_gstr s) {
  rt_gstr d = s; d.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_rt_gstr(rt_gstr a, rt_gstr b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  rt_gstr r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(unsigned char) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static rt_gstr one_rt_gstr(int e) {
  rt_gstr r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(unsigned char)); r.p[0] = e;
  return r;
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(1);
  ex_compile_error_107 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
