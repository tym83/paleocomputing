#include "paleo.h"
#include <math.h>
typedef struct R111 R111;
typedef struct R111 *P110;
typedef struct A109 A109;
struct A109 { rt_int lo, hi, lo2, hi2; P110 *p; };
typedef struct R118 R118;
typedef struct R118 *P117;
typedef struct A116 A116;
struct A116 { rt_int lo, hi, lo2, hi2; P117 *p; };
typedef struct R123 R123;
typedef struct R123 *P122;
typedef struct R127 R127;
typedef struct R127 *P126;
typedef rt_gstr *P140;
typedef struct R144 R144;
typedef struct R144 *P143;
typedef struct R147 R147;
typedef struct R147 *P146;
typedef struct R152 R152;
typedef struct R152 *P151;
typedef struct R175 R175;
typedef struct R175 *P174;
typedef struct R179 R179;
typedef struct R179 *P178;
typedef struct A183 A183;
struct A183 { rt_int lo, hi, lo2, hi2; P140 *p; };
typedef struct A185 A185;
struct A185 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct R190 R190;
typedef struct R190 *P189;
typedef struct R199 R199;
typedef struct R199 *P198;
struct R127 { int dummy_; P151 head_; P151 tail_; };
struct R152 { int dummy_; P140 s_; P151 next_; };
struct R111 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P140 s_; };
struct R175 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P140 name_; P140 tag_; P174 a_; P174 b_; P174 c_; P174 d_; P174 e_; P174 next_; P140 formal_; };
typedef struct R1829 R1829;
typedef struct R1829 *P1828;
struct R118 { int dummy_; rt_int kind_; P140 name_; P122 t_; P178 c_; P140 access_path_; P140 cname_; int ro_; rt_int mvalue_; int hasmv_; P174 decl_; P1828 params_; P122 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P117 members_; P117 mnext_; P117 chain_; P117 stack_; rt_int flags_; };
typedef struct R1847 R1847;
typedef struct R1847 *P1846;
struct R123 { int dummy_; rt_int kind_; P140 name_; P174 lits_; P122 elem_; P122 idx_; P178 elemcons_; P178 tcons_; P1846 fields_; P122 target_; P174 decl_; P140 cname_; int forward_; int defined_; int priv_; P122 next_; P122 idx2_; P140 littab_; P122 parent_; rt_int ndigits_; P140 fdelta_; P140 fsmall_; rt_int dims_; int is_restricted_; };
typedef struct R1851 R1851;
typedef struct R1851 *P1850;
struct R179 { int dummy_; P140 lo_; P140 hi_; P140 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P140 lo2_; P140 hi2_; P140 acc_; P178 inner_; P1850 dv_; };
struct R1851 { int dummy_; P140 name_; P140 v_; P1850 next_; };
struct R1829 { int dummy_; P140 name_; rt_int mode_; P122 t_; P178 c_; P140 cfield_; P174 dflt_; P1828 next_; P117 dsym_; };
typedef struct R1972 R1972;
typedef struct R1972 *P1971;
struct R1972 { int dummy_; P140 disc_; P174 arm_; P174 variant_; P1971 next_; };
struct R1847 { int dummy_; P140 name_; P122 t_; P178 c_; P1846 next_; P174 dflt_; int is_const_; int is_discr_; P117 dsym_; P1971 guard_; P140 cond_; int dyn_; };
struct R199 { int dummy_; rt_int limit_; rt_int keep_; P140 allowed_; P198 next_; };
struct R190 { int dummy_; P140 name_; P140 cname_; P140 path_; rt_int frames_; rt_int line_; P189 next_; };
typedef struct A2255 A2255;
struct A2255 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P140 match_; P140 label_; rt_int depth_; int is_loop_; P143 next_; };
typedef struct A2580 A2580;
struct A2580 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2585 A2585;
struct A2585 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2588 A2588;
struct A2588 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R147 { int dummy_; P174 body_node_; P117 visible_; P146 next_; };
struct f_mk_228fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_227;
 P140 result_;
 rt_gstr r_1298;
};
struct f_new_name_231fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_229;
 P140 *res_230;
};
struct f_is_letter_233fr { int dummy;
 struct f_greenc_1fr *up;
 int c_232;
 int result_;
};
struct f_is_digit_235fr { int dummy;
 struct f_greenc_1fr *up;
 int c_234;
 int result_;
};
struct f_upper_237fr { int dummy;
 struct f_greenc_1fr *up;
 int c_236;
 int result_;
};
struct f_lower_s_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_238;
 rt_gstr result_;
 rt_gstr r_1302;
 rt_int i_1305;
};
struct f_upper_s_241fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_240;
 rt_gstr result_;
 rt_gstr r_1313;
 rt_int i_1316;
};
struct f_is_operator_243fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_242;
 int result_;
};
struct f_c_field_245fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_244;
 rt_gstr result_;
};
struct f_q_246fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_249fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_247;
 rt_gstr msg_248;
};
struct f_new_buffer_250fr { int dummy;
 struct f_greenc_1fr *up;
 P126 result_;
};
struct f_put_to_253fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_251;
 rt_gstr s_252;
 P151 l_1325;
};
struct f_emit_255fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_254;
};
struct f_print_buffer_257fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_256;
 P151 l_1328;
};
struct f_splice_260fr { int dummy;
 struct f_greenc_1fr *up;
 P126 a_258;
 P126 b_259;
};
struct f_is_reserved_262fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_261;
 int result_;
};
struct f_add_token_266fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_263;
 rt_gstr s_264;
 rt_int ival_265;
};
struct f_digit_value_268fr { int dummy;
 struct f_greenc_1fr *up;
 int c_267;
 rt_int result_;
};
struct f_digit_in_271fr { int dummy;
 struct f_greenc_1fr *up;
 int c_269;
 rt_int base_270;
 rt_int result_;
 rt_int d_1336;
};
struct f_accumulate_275fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_272;
 rt_int base_273;
 rt_int d_274;
};
struct f_lex_line_277fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_276;
 rt_int i_1337;
 rt_int j_1338;
 rt_int n_1339;
 int c_1341;
 int quote_1342;
 rt_int v_1343;
 rt_int d_1344;
 rt_gstr buf_1345;
 rt_int bl_1347;
 rt_int base_1389;
 rt_gstr two_1433;
};
struct f_exponent_ahead_280fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_278;
 rt_int j_279;
 int result_;
};
struct f_exponent_285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_281;
 rt_int *j_282;
 rt_gstr *buf_283;
 rt_int *bl_284;
};
struct f_include_open_288fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_286;
 rt_int *length_287;
};
struct f_include_char_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_289;
 int *c_290;
};
struct f_check_include_292fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1480;
};
struct f_include_text_294fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_293;
 rt_gstr t_1491;
 rt_int saved_line_1493;
 rt_int from_1494;
 rt_int k_1496;
 rt_int k_1503;
};
struct f_include_line_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_295;
 rt_int from_296;
 rt_int to_297;
 rt_gstr l_1508;
 rt_int k_1511;
};
struct f_read_source_299fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1519;
 rt_int bl_1521;
 int c_1522;
};
struct f_nn_302fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_300;
 rt_int line_301;
 P174 result_;
};
struct f_append_306fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *head_303;
 P174 *tail_304;
 P174 x_305;
};
struct f_list_len_308fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_307;
 rt_int result_;
 rt_int n_1532;
 P174 p_1533;
};
struct f_cur_line_309fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_311fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_310;
 int result_;
};
struct f_at_op_313fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_312;
 int result_;
};
struct f_at_kind_315fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_314;
 int result_;
};
struct f_kind_at_317fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_316;
 rt_int result_;
};
struct f_text_at_319fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_318;
 rt_gstr result_;
};
struct f_perror_321fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_320;
};
struct f_skip_322fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_324fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_323;
};
struct f_expect_op_326fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_325;
};
struct f_expect_id_328fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_327;
};
struct f_name_node_330fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_329;
 P174 x_1548;
};
struct f_id_list_332fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_331;
 P174 head_1549;
 P174 tail_1550;
 P174 x_1551;
};
struct f_binop_337fr { int dummy;
 struct f_greenc_1fr *up;
 P140 op_333;
 P174 l_334;
 P174 r_335;
 rt_int line_336;
 P174 result_;
 P174 x_1553;
};
struct f_expr_339fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_338;
 P174 l_1554;
 P174 r_1555;
 P140 op_1556;
 P140 first_op_1557;
 rt_int line_1558;
 int short_1559;
 int first_short_1560;
};
struct f_is_rel_341fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_340;
 int result_;
};
struct f_relation_343fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_342;
 P174 l_1563;
 P174 r_1564;
 P174 lo_1565;
 P174 hi_1566;
 P174 t_1567;
 P140 op_1568;
 rt_int line_1569;
 int neg_1570;
};
struct f_path_of_345fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_344;
 rt_gstr result_;
};
struct f_simple_expr_347fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_346;
 P174 l_1574;
 P174 r_1575;
 P140 op_1576;
 rt_int line_1577;
};
struct f_term_349fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_348;
 P174 l_1581;
 P174 r_1582;
 P140 op_1583;
 rt_int line_1584;
};
struct f_factor_351fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_350;
 P174 l_1587;
 P174 r_1588;
 P140 op_1589;
 rt_int line_1590;
};
struct f_primary_353fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_352;
 P174 x_1592;
 rt_int line_1593;
};
struct f_agg_or_paren_355fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_354;
 rt_int line_1598;
 P174 items_1599;
 P174 itail_1600;
 P174 it_1601;
 P174 first_1602;
 P174 keys_1603;
 P174 ktail_1604;
 P174 lab_1605;
 P174 x_1606;
 int more_1607;
};
struct f_choice_token_357fr { int dummy;
 struct f_greenc_1fr *up;
 P110 t_356;
 int result_;
};
struct f_aggregate_ahead_358fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1610;
 rt_int k_1611;
 P110 t_1614;
};
struct f_name_p_360fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_359;
 P174 p_1616;
 P174 x_1617;
 P174 args_1618;
 P174 atail_1619;
 P174 lo_1620;
 P174 r_1621;
 rt_int line_1622;
 int more_1623;
 P140 formal_1627;
 rt_int mark_1628;
};
struct f_component_list_362fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_361;
 P174 comps_1631;
 P174 ctail_1632;
 P174 names_1633;
 P174 st_1634;
 P174 def_1635;
 P174 cm_1636;
 P174 v_1637;
 P174 arm_1638;
 P174 atail_1639;
 P174 labs_1640;
 P174 ltail_1641;
 P174 l_1642;
 int is_c_1643;
};
struct f_discrete_range_p_364fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_363;
 P174 lo_1648;
 P174 r_1649;
 rt_int line_1650;
};
struct f_subtype_ind_366fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_365;
 P140 f_1651;
 P174 x_1652;
 P174 r_1653;
 P174 args_1654;
 P174 atail_1655;
 P174 lo_1656;
 rt_int line_1657;
 int more_1658;
};
struct f_type_spec_368fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_367;
 P174 x_1661;
};
struct f_type_def_370fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_369;
 P174 x_1662;
 P174 lits_1663;
 P174 ltail_1664;
 P174 l_1665;
 P174 idx_1666;
 P174 itail_1667;
 P174 r_1668;
 P174 comps_1669;
 P174 ctail_1670;
 P174 names_1671;
 P174 st_1672;
 P174 def_1673;
 P174 cm_1674;
 rt_int line_1675;
 int more_1676;
};
struct f_pragma_p_372fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_371;
 P174 x_1680;
 P174 a_1681;
 P174 head_1682;
 P174 tail_1683;
};
struct f_check_pragma_374fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_373;
 rt_gstr p_1685;
 rt_int n_1686;
 P174 a_1687;
};
struct f_visibility_p_376fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_375;
 P174 names_1689;
 P140 v_1690;
};
struct f_unit_p_378fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_377;
 P140 v_1692;
 P174 x_1693;
};
struct f_skip_representation_379fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_381fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_380;
 P174 head_1697;
 P174 tail_1698;
 P174 x_1699;
 P174 names_1700;
};
struct f_object_decl_383fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_382;
 P174 head_1702;
 P174 tail_1703;
 P174 names_1704;
 P174 st_1705;
 P174 init_1706;
 P174 x_1707;
 rt_int line_1708;
 int is_const_1709;
};
struct f_type_decl_385fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_384;
 P174 x_1712;
 rt_int line_1713;
};
struct f_formal_part_387fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_386;
 P174 head_1714;
 P174 tail_1715;
 P174 names_1716;
 P174 st_1717;
 P174 def_1718;
 P174 p_1719;
 rt_int mode_1720;
 int more_1721;
};
struct f_designator_389fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_388;
};
struct f_subprogram_391fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_390;
 P174 x_1728;
 rt_int line_1729;
 int is_proc_1730;
};
struct f_body_part_393fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_392;
};
struct f_parse_handlers_395fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_394;
 P174 head_1732;
 P174 tail_1733;
 P174 h_1734;
 P174 names_1735;
 P174 ntail_1736;
 P174 n_1737;
};
struct f_package_p_397fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_396;
 P174 x_1741;
 rt_int line_1742;
};
struct f_at_statements_end_398fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_400fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_399;
 P174 head_1743;
 P174 tail_1744;
 P174 x_1745;
};
struct f_statement_402fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_401;
 P174 l_1747;
 P174 x_1748;
 P140 label_1749;
};
struct f_labelled_statement_405fr { int dummy;
 struct f_greenc_1fr *up;
 P140 label_403;
 P174 *res_404;
 P174 x_1750;
 P174 t_1751;
 rt_int line_1752;
};
struct f_task_statement_407fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_406;
};
struct f_if_stmt_409fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_408;
 P174 x_1756;
 P174 arm_1757;
 P174 head_1758;
 P174 tail_1759;
 int go_1760;
};
struct f_case_stmt_411fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_410;
 P174 x_1762;
 P174 arm_1763;
 P174 head_1764;
 P174 tail_1765;
 P174 labs_1766;
 P174 ltail_1767;
 P174 l_1768;
 int others_arm_1769;
};
struct f_loop_stmt_413fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_412;
 P174 x_1772;
 P174 r_1773;
 rt_int line_1774;
};
struct f_compilation_415fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_414;
 P174 head_1775;
 P174 tail_1776;
 P174 x_1777;
};
struct f_hash_417fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_416;
 rt_int result_;
 rt_int h_1780;
 rt_int i_1783;
};
struct f_listed_420fr { int dummy;
 struct f_greenc_1fr *up;
 P140 list_418;
 rt_gstr name_419;
 int result_;
 rt_gstr l_1788;
 rt_int n_1789;
 rt_int i_1794;
};
struct f_visible_sym_422fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_421;
 int result_;
 P198 b_1801;
};
struct f_lookup_424fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_423;
 P117 result_;
 P117 y_1803;
};
struct f_same_task_427fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_425;
 P117 b_426;
 int result_;
};
struct f_lookup_entry_430fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_428;
 P117 owner_429;
 P117 result_;
 P117 y_1806;
};
struct f_lookup_at_433fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_431;
 rt_int d_432;
 P117 result_;
 P117 y_1809;
};
struct f_enclosing_depth_435fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_434;
 rt_int result_;
 rt_int i_1813;
};
struct f_push_unit_437fr { int dummy;
 struct f_greenc_1fr *up;
 P140 name_436;
};
struct f_lookup_decl_439fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_438;
 P117 result_;
 P117 y_1821;
};
struct f_overloadable_441fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_440;
 int result_;
};
struct f_same_444fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_442;
 P122 b_443;
 int result_;
};
struct f_root_446fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_445;
 P122 result_;
 P122 r_1824;
};
struct f_derived_from_449fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_447;
 P122 b_448;
 int result_;
 P122 r_1826;
};
struct f_is_numeric_451fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_450;
 int result_;
};
struct f_is_discrete_453fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_452;
 int result_;
};
struct f_same_types_456fr { int dummy;
 struct f_greenc_1fr *up;
 P1828 a_454;
 P1828 b_455;
 int result_;
 P1828 x_1830;
 P1828 y_1831;
};
struct f_same_signature_459fr { int dummy;
 struct f_greenc_1fr *up;
 P1828 a_457;
 P1828 b_458;
 int result_;
 P1828 x_1833;
 P1828 y_1834;
};
struct f_distinct_overload_462fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_460;
 P117 z_461;
 int result_;
};
struct f_define_465fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_463;
 rt_int line_464;
 rt_int h_1836;
 P117 z_1837;
};
struct f_open_scope_466fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_467fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_470fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_468;
 P140 name_469;
 P117 result_;
};
struct f_new_typ_472fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_471;
 P122 result_;
};
struct f_new_cons_473fr { int dummy;
 struct f_greenc_1fr *up;
 P178 result_;
};
struct f_bounded_475fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_474;
 int result_;
};
struct f_bounded_hi_477fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_476;
 int result_;
};
struct f_static_bounds_479fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_478;
 int result_;
};
struct f_discriminated_481fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_480;
 int result_;
};
struct f_kind_name_483fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_482;
 rt_gstr result_;
};
struct f_check_type_487fr { int dummy;
 struct f_greenc_1fr *up;
 P122 got_484;
 P122 want_485;
 rt_int line_486;
};
struct f_field_count_489fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_488;
 rt_int result_;
 rt_int n_1855;
 P1846 f_1856;
};
struct f_ctype_492fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_490;
 P140 *r_491;
 P140 s_1858;
};
struct f_field_decls_495fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_493;
 P140 *r_494;
 P1846 f_1860;
 P140 s_1861;
 P140 ct_1862;
};
struct f_declare_ctype_497fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_496;
 P140 ct_1864;
 P140 s_1865;
 P122 target_1866;
};
struct f_lit_index_500fr { int dummy;
 struct f_greenc_1fr *up;
 P174 lits_498;
 rt_gstr name_499;
 rt_int result_;
 rt_int i_1867;
 P174 l_1868;
};
struct f_manifest_504fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_501;
 rt_int *v_502;
 int *ok_503;
 rt_int a_1870;
 rt_int b_1871;
 int ok2_1872;
 P117 y_1873;
};
struct f_resolve_508fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_505;
 P122 *t_506;
 P178 *c_507;
 P117 y_1874;
 P122 dummy_1875;
 P140 code_1876;
 int ok_1877;
 P174 r_1878;
};
struct f_constraint_list_512fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_509;
 P122 t_510;
 P178 c_511;
 P174 r_1879;
 P122 arrt_1880;
 P178 cc_1881;
 P122 it_1882;
};
struct f_discriminant_constraint_516fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_513;
 P122 t_514;
 P178 c_515;
 P174 a_1884;
 P1846 f_1885;
 P122 vt_1886;
 P140 v_1887;
 P1850 d_1888;
 P1850 tail_1889;
};
struct f_discrete_bounds_522fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_517;
 P122 want_518;
 P122 *t_519;
 P140 *lo_520;
 P140 *hi_521;
 P178 c_1897;
 P117 y_1898;
};
struct f_range_of_526fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_523;
 P122 t_524;
 P178 c_525;
 P122 dummy_1899;
 int ok_1900;
};
struct f_fresh_typ_530fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_527;
 P140 name_528;
 P122 *t_529;
 P122 ph_1901;
};
struct f_inherit_534fr { int dummy;
 struct f_greenc_1fr *up;
 P122 parent_531;
 P122 t_532;
 rt_int line_533;
 P117 s_1902;
 P117 z_1903;
 P1828 p_1904;
 P1828 q_1905;
 P1828 tail_1906;
 int uses_1907;
 P117 news_1908;
};
struct f_derive_literals_537fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_535;
 rt_int line_536;
 P174 l_1915;
 rt_int n_1916;
 P117 y_1917;
};
struct f_type_definition_542fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_538;
 P140 name_539;
 P122 *t_540;
 P178 *c_541;
 P122 dummy_1919;
 P122 it_1920;
 P178 ic_1921;
 P174 l_1922;
 P174 comp_1923;
 P1846 f_1924;
 P1846 tail_1925;
 int ok_1926;
 rt_int n_1927;
 P117 y_1928;
};
struct f_array_type_549fr { int dummy;
 struct f_greenc_1fr *up;
 P174 idx_543;
 P174 comp_544;
 P140 name_545;
 rt_int line_546;
 P122 *t_547;
 P178 *c_548;
 P174 l_1932;
 P178 rowc_1933;
 P178 ic_1934;
 P122 it_1935;
};
struct f_static_range_553fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_550;
 P174 h_551;
 P178 c_552;
 int ok_1936;
 int ok2_1937;
};
struct f_component_place_559fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_554;
 P1846 f_555;
 rt_gstr a_556;
 rt_gstr ct_557;
 P140 *r_558;
 P140 bits_1940;
};
struct f_no_value_561fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_560;
 rt_gstr result_;
};
struct f_restricted_here_563fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_562;
 int result_;
};
struct f_elem_ctype_566fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_564;
 P140 *r_565;
};
struct f_first_index_569fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_567;
 P140 *r_568;
};
struct f_is_string_571fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_570;
 int result_;
};
struct f_subst_574fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_572;
 rt_gstr r_573;
 rt_gstr result_;
 rt_int i_1944;
};
struct f_mentions_record_576fr { int dummy;
 struct f_greenc_1fr *up;
 P140 s_575;
 int result_;
 rt_int i_1958;
};
struct f_subst_cons_580fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_577;
 rt_gstr r_578;
 P178 *res_579;
};
struct f_remove_sym_582fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_581;
 rt_int h_1964;
 P117 p_1965;
};
struct f_record_components_587fr { int dummy;
 struct f_greenc_1fr *up;
 P174 list_583;
 P122 t_584;
 P1971 g_585;
 rt_int line_586;
 P174 comp_1973;
 P1846 f_1974;
 P1846 tail_1975;
 P1846 df_1976;
 P174 prev_1977;
 P122 pt_1978;
 P122 vt_1979;
 P178 pc_1980;
 P117 y_1981;
 P140 acc_1982;
 P140 v_1983;
 P140 x_1984;
 P174 arm_1985;
 P1971 g2_1986;
};
struct f_guard_cond_591fr { int dummy;
 struct f_greenc_1fr *up;
 P1971 g_588;
 P122 t_589;
 P140 *r_590;
 P174 a_1996;
 P174 l_1997;
 P1846 df_1998;
 P140 x_1999;
 P140 d_2000;
 P122 dt_2001;
 P122 vt_2002;
 P140 lo_2003;
 P140 hi_2004;
};
struct f_arm_test_596fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_592;
 P140 dname_593;
 rt_gstr d_594;
 P140 *x_595;
 P174 l_2006;
 P117 y_2007;
 P122 dt_2008;
 P122 vt_2009;
 P140 lo_2010;
 P140 hi_2011;
};
struct f_derived_type_601fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_597;
 P140 name_598;
 P122 *t_599;
 P178 *c_600;
 P122 pt_2013;
 P140 ct_2014;
 P122 ph_2015;
};
struct f_real_type_606fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_602;
 P140 name_603;
 P122 *t_604;
 P178 *c_605;
 P122 dt_2016;
 P140 dv_2017;
 rt_int n_2018;
 int ok_2019;
};
struct f_finish_ptr_608fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_607;
 P178 c_2020;
};
struct f_init_storage_612fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_609;
 P122 t_610;
 P178 c_611;
 P178 ec_2021;
 P178 fc_2022;
 P1850 d_2023;
 P140 ct_2024;
 P140 i_2025;
 P140 v_2026;
 P140 x_2027;
 P122 vt_2028;
 P1846 f_2029;
};
struct f_composite_614fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_613;
 int result_;
};
struct f_assign_code_620fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_615;
 P122 t_616;
 rt_gstr v_617;
 P178 c_618;
 P140 *r_619;
 P140 ct_2033;
 P140 x_2034;
 P1850 d_2035;
};
struct f_copy_code_624fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_621;
 rt_gstr v_622;
 P140 *r_623;
 P140 ct_2037;
};
struct f_eq_code_629fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_625;
 rt_gstr a_626;
 rt_gstr b_627;
 P140 *r_628;
 P140 ct_2038;
};
struct f_seen_name_632fr { int dummy;
 struct f_greenc_1fr *up;
 P151 l_630;
 rt_gstr s_631;
 int result_;
 P151 p_2039;
};
struct f_emit_helpers_633fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_2041;
 P140 et_2042;
 P151 done_2043;
 P151 l_2044;
};
struct f_helper_bodies_635fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_634;
 P140 c_2048;
 P126 b_2049;
 P140 ct_2050;
 P140 et_2051;
 P140 x_2052;
 P140 y_2053;
 P140 conds_2054;
 P1846 f_2055;
};
struct f_storage_639fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_636;
 P122 t_637;
 P140 *access_code_638;
 P140 ct_2058;
 P140 g_2059;
};
struct f_bind_642fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_640;
 P140 access_code_641;
};
struct f_declare_subprograms_644fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_643;
 P174 e_2060;
};
struct f_declare_one_646fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_645;
 P117 y_2062;
 P117 z_2063;
};
struct f_elaborate_defaults_648fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_647;
 P1828 pm_2067;
 P122 vt_2068;
 P140 v_2069;
 P140 acc_2070;
 P140 x_2071;
 P117 z_2072;
};
struct f_build_subprogram_651fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_649;
 P117 *y_650;
 P174 p_2074;
 P1828 pm_2075;
 P1828 tail_2076;
 P178 rc_2077;
 rt_int k_2078;
};
struct f_decl_elements_653fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_652;
 P174 e_2082;
 int declared_2083;
};
struct f_decl_element_655fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_654;
 P198 saved_2085;
};
struct f_decl_element_1_657fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_656;
 P174 pd_2086;
 P117 y_2087;
 P117 z_2088;
 P122 t_2089;
 P122 vt_2090;
 P178 c_2091;
 P140 acc_2092;
 P140 v_2093;
 P140 x_2094;
 int ok_2095;
};
struct f_pragma_decl_659fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_658;
};
struct f_resolve_object_type_663fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_660;
 P122 *t_661;
 P178 *c_662;
};
struct f_rename_subprogram_665fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_664;
 P117 newy_2097;
 P117 y_2098;
 P117 z_2099;
 P117 cand_2100;
 P174 ix_2101;
 P1828 p_2102;
 P1828 q_2103;
 P1828 tail_2104;
};
struct f_rename_module_668fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_666;
 P174 target_667;
 P117 y_2113;
 P117 z_2114;
};
struct f_push_barrier_671fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_669;
 rt_int limit_670;
 P198 b_2115;
 P140 first_name_2116;
 rt_int k_2117;
};
struct f_other_decl_673fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_672;
};
struct f_scan_labels_676fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_674;
 rt_gstr path_675;
 P174 s_2125;
 P174 a_2126;
 P189 l_2127;
 P140 c_2128;
};
struct f_scan_guarded_680fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_677;
 P174 hs_678;
 rt_gstr path_679;
 P174 h_2138;
};
struct f_count_g_682fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_681;
 rt_int result_;
 rt_int n_2140;
 rt_int i_2144;
};
struct f_label_body_685fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_683;
 P174 hs_684;
 P189 l_2149;
 P189 g_2150;
 P140 gp_2151;
 P140 lp_2152;
 rt_int i_2163;
};
struct f_gen_label_688fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_686;
 int goto_it_687;
 P189 l_2169;
};
struct f_is_foreign_690fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_689;
 int result_;
};
struct f_subprogram_body_693fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_691;
 P117 y_692;
 P126 saved_code_2171;
 P126 saved_fields_2172;
 int saved_in_2173;
 P117 saved_sym_2174;
 P143 saved_exits_2175;
 rt_int saved_frames_2176;
 P151 saved_handlers_2177;
 P151 saved_cleanups_2178;
 P189 saved_labels_2179;
 P143 saved_hx_2180;
 rt_int saved_hd_2181;
 P117 saved_pure_2182;
 P140 aw_2183;
 rt_int saved_pdepth_2184;
 P140 args_2185;
 P140 head_2186;
 P140 frame_2187;
 P140 parent_2188;
 P140 ct_2189;
 P140 x_2190;
 P1828 pm_2191;
 P117 p_2192;
};
struct f_gen_statements_695fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_694;
 P174 s_2198;
};
struct f_pop_frames_697fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_696;
 rt_int i_2200;
 P151 c_2201;
};
struct f_push_cleanup_699fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_698;
};
struct f_pop_cleanup_700fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_705fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_701;
 P174 stmts_702;
 P174 hs_703;
 rt_int line_704;
 P143 saved_hx_2205;
 P140 f_2206;
 P140 x_2207;
 P174 h_2208;
 P174 n_2209;
 int first_2210;
 int has_others_2211;
 P140 conds_2212;
};
struct f_exc_id_709fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_706;
 rt_int line_707;
 P140 *r_708;
 P117 y_2217;
};
struct f_gen_statement_711fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_710;
 P122 t_2218;
 P122 vt_2219;
 P178 c_2220;
 P140 lv_2221;
 P140 v_2222;
 P140 x_2223;
 int ro_2224;
};
struct f_slice_assign_713fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_712;
 P140 lv_2226;
 P140 v_2227;
 P140 sl_2228;
 P140 x_2229;
 P122 t_2230;
 P122 st_2231;
 P122 vt_2232;
 P178 c_2233;
 int ro_2234;
};
struct f_gen_call_715fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_714;
 P174 c_2235;
 P122 t_2236;
 P140 v_2237;
};
struct f_gen_if_717fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_716;
 P174 a_2238;
 int first_2239;
 P122 t_2240;
 P140 v_2241;
};
struct f_gen_case_719fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_718;
 P122 st_2243;
 P122 vt_2244;
 int first_2245;
 P174 a_2246;
 P174 lab_2247;
 P140 sel_2248;
 P140 tmp_2249;
 P140 ct_2250;
 P140 conds_2251;
 P140 v_2252;
 P140 lo_2253;
 P140 hi_2254;
 A2255 clo_2256;
 A2255 chi_2258;
 rt_int nc_2260;
 rt_int vlo_2261;
 rt_int vhi_2262;
 rt_int total_2263;
 int ok_2264;
 int ok2_2265;
 P117 y_2266;
 rt_int k_2270;
 rt_int k_2279;
};
struct f_selector_range_725fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_720;
 P122 t_721;
 rt_int *lo_722;
 rt_int *hi_723;
 int *ok_724;
 P117 y_2287;
};
struct f_push_exit_729fr { int dummy;
 struct f_greenc_1fr *up;
 P140 match_726;
 int is_loop_727;
 P140 *label_728;
};
struct f_gen_loop_731fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_730;
 P122 t_2290;
 P122 vt_2291;
 P178 c_2292;
 P140 label_2293;
 P140 cond_2294;
 P140 acc_2295;
 P140 lov_2296;
 P140 hiv_2297;
 P140 it_2298;
 P117 y_2299;
 P174 r_2300;
};
struct f_gen_block_733fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_732;
 P140 label_2301;
 P140 aw_2302;
};
struct f_exit_matches_736fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_734;
 P143 x_735;
 int result_;
};
struct f_gen_exit_738fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_737;
 P143 x_2303;
 P122 t_2304;
 P140 v_2305;
};
struct f_gen_return_740fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_739;
 P122 vt_2307;
 P140 v_2308;
 P140 x_2309;
};
struct f_access_of_743fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_741;
 P140 *r_742;
 P140 p_2310;
 rt_int i_2312;
};
struct f_link_to_746fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_744;
 P140 *r_745;
 rt_int i_2317;
};
struct f_c_ident_748fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_747;
 rt_gstr result_;
};
struct f_deref_752fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_749;
 P122 t_750;
 P140 *r_751;
 P140 ct_2321;
};
struct f_is_object_754fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_753;
 int result_;
 P117 y_2322;
};
struct f_is_const_access_756fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_755;
 int result_;
 P117 y_2323;
};
struct f_lvalue_762fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_757;
 P140 *code_out_758;
 P122 *t_759;
 P178 *c_760;
 int *ro_761;
 int cp_2324;
 P174 ex_2325;
 P117 y_2326;
 P140 base_2327;
 P122 bt_2328;
 P178 bc_2329;
};
struct f_select_on_771fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_763;
 P122 bt_764;
 P174 e_765;
 int *ro_766;
 int lv_767;
 P140 *code_out_768;
 P122 *t_769;
 P178 *c_770;
 P1846 f_2330;
 P140 d_2331;
 P140 ct_2332;
 P140 tmp_2333;
};
struct f_index_on_780fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_772;
 P122 bt_773;
 P174 e_774;
 int *ro_775;
 int lv_776;
 P140 *code_out_777;
 P122 *t_778;
 P178 *c_779;
 P174 a_2335;
 P122 arrt_2336;
 P140 acc_2337;
 P122 it_2338;
 P140 i_2339;
 P140 lo_2340;
 P140 hi_2341;
 P140 d_2342;
 P140 ct_2343;
 P140 tmp_2344;
};
struct f_type_attribute_783fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_781;
 rt_gstr name_782;
 int result_;
 P117 y_2346;
 P1828 p_2348;
};
struct f_is_type_name_785fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_784;
 int result_;
 P117 y_2351;
};
struct f_is_char_lit_787fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_786;
 int result_;
};
struct f_is_enum_lit_789fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_788;
 int result_;
 P117 y_2353;
};
struct f_c_string_791fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_790;
 rt_gstr result_;
 rt_int n_2354;
 rt_int i_2357;
 rt_gstr r_2366;
 rt_int j_2368;
 rt_int i_2372;
};
struct f_is_literal_793fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_792;
 int result_;
};
struct f_range_bounds_801fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_794;
 P174 h_795;
 P122 want_796;
 rt_int line_797;
 P122 *t_798;
 P140 *lo_799;
 P140 *hi_800;
 P122 w_2383;
 P122 t2_2384;
};
struct f_gexpr_806fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_802;
 P122 want_803;
 P122 *t_804;
 P140 *r_805;
 P117 y_2385;
 P122 bt_2386;
 P178 c_2387;
 int ro_2388;
 P140 base_2389;
 P140 a_2390;
 P174 nm_2391;
 int saved_lv_2392;
};
struct f_gexpr_1_811fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_807;
 P122 want_808;
 P122 *t_809;
 P140 *r_810;
 P117 y_2393;
 P122 bt_2394;
 P178 c_2395;
 int ro_2396;
 P140 base_2397;
 P140 a_2398;
 P174 nm_2399;
 P174 c2_2400;
};
struct f_string_aggregate_816fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_812;
 P122 want_813;
 P122 *t_814;
 P140 *r_815;
 P174 ag_2404;
 P174 it_2405;
 P174 tail_2406;
 P174 l_2407;
 rt_int k_2410;
};
struct f_char_literal_821fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_817;
 P122 want_818;
 P122 *t_819;
 P140 *r_820;
 rt_int i_2416;
};
struct f_expanded_824fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_822;
 P174 *r_823;
 P117 y_2419;
 rt_int d_2420;
};
struct f_gen_name_829fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_825;
 P122 want_826;
 P122 *t_827;
 P140 *r_828;
 P117 y_2421;
 P117 z_2422;
 P174 call_2423;
};
struct f_gen_unop_834fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_830;
 P122 want_831;
 P122 *t_832;
 P140 *r_833;
 P140 a_2426;
 P140 x_2427;
 int done_2428;
};
struct f_short_int_836fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_835;
 int result_;
};
struct f_float_kind_838fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_837;
 rt_gstr result_;
};
struct f_membership_841fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_839;
 P140 *r_840;
 P122 ta_2429;
 P122 tb_2430;
 P122 tt_2431;
 P140 a_2432;
 P140 lo_2433;
 P140 hi_2434;
 P140 ct_2435;
 P178 c_2436;
 P1850 d_2437;
};
struct f_condition_846fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_842;
 P122 want_843;
 P122 *t_844;
 P140 *r_845;
 P140 a_2439;
 P140 b_2440;
 P122 tb_2441;
};
struct f_catenation_851fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_847;
 P122 want_848;
 P122 *t_849;
 P140 *r_850;
 P122 arrt_2442;
 P122 ta_2443;
 P122 tb_2444;
 P140 a_2445;
 P140 b_2446;
 P140 ct_2447;
};
struct f_cat_operand_856fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_852;
 P122 arrt_853;
 rt_int line_854;
 P140 *r_855;
 P122 tx_2448;
 P140 ct_2449;
};
struct f_arithmetic_861fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_857;
 P122 want_858;
 P122 *t_859;
 P140 *r_860;
 rt_gstr op_2450;
 P122 ta_2451;
 P122 tb_2452;
 P122 hint_2453;
 P140 a_2454;
 P140 b_2455;
};
struct f_fixed_operation_869fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_862;
 P122 ta_863;
 P122 tb_864;
 rt_gstr a_865;
 rt_gstr b_866;
 P122 *t_867;
 P140 *r_868;
 rt_gstr op_2456;
};
struct f_gen_binop_874fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_870;
 P122 want_871;
 P122 *t_872;
 P140 *r_873;
 rt_gstr op_2457;
 P122 ta_2458;
 P122 tb_2459;
 P122 hint_2460;
 P122 ct_2461;
 P140 a_2462;
 P140 b_2463;
 P140 x_2464;
 P140 dummy_2465;
 int done_2466;
};
struct f_conversion_879fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_875;
 P117 y_876;
 P122 *t_877;
 P140 *r_878;
 P122 aty_2467;
 P140 a_2468;
 P174 ag_2469;
 P174 it_2470;
 P174 tail_2471;
 P174 arg_2472;
};
struct f_constrain_883fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_880;
 P122 t_881;
 P140 *r_882;
 P140 ct_2474;
 P140 tmp_2475;
};
struct f_array_conversion_890fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_884;
 P122 t_885;
 P122 aty_886;
 P178 c_887;
 rt_gstr a_888;
 P140 *r_889;
 P122 x_2476;
 P122 y_2477;
 P140 ct_2478;
 P140 act_2479;
 P140 et_2480;
 P140 tmp_2481;
 P140 s_2482;
 rt_int k_2484;
};
struct f_gen_attr_895fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_891;
 P122 want_892;
 P122 *t_893;
 P140 *r_894;
 rt_gstr a_2488;
 P117 y_2489;
 P122 tt_2490;
 P122 aty_2491;
 P140 v_2492;
 P140 d_2493;
 P178 c_2494;
 rt_int n_2495;
 int ro_2496;
};
struct f_type_bits_899fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_896;
 P178 c_897;
 P140 *r_898;
 P140 ct_2497;
};
struct f_object_bits_903fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_900;
 rt_gstr v_901;
 P140 *r_902;
 P140 ct_2498;
 P140 et_2499;
};
struct f_numeric_attr_909fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_904;
 P122 tt_905;
 P178 c_906;
 P122 *t_907;
 P140 *r_908;
 rt_gstr a_2500;
 int short_2501;
};
struct f_component_attr_913fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_910;
 P122 *t_911;
 P140 *r_912;
 P122 bt_2502;
 P140 v_2503;
 P140 ct_2504;
 P1846 f_2505;
};
struct f_config_attr_917fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_914;
 P122 *t_915;
 P140 *r_916;
 rt_gstr a_2507;
 rt_gstr p_2508;
 P140 nm_2509;
};
struct f_attr_dim_921fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_918;
 P122 arrt_919;
 rt_int *n_920;
 int ok_2512;
};
struct f_object_array_attr_927fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_922;
 P122 arrt_923;
 rt_gstr v_924;
 P122 *t_925;
 P140 *r_926;
 rt_int n_2513;
 P122 it_2514;
 P140 ct_2515;
 P140 tmp_2516;
 P140 p_2517;
 P140 lo_2518;
 P140 hi_2519;
 rt_int k_2521;
 rt_int k_2526;
};
struct f_type_array_attr_933fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_928;
 P122 arrt_929;
 P178 c_930;
 P122 *t_931;
 P140 *r_932;
 rt_int n_2530;
 P122 it_2531;
 P178 cc_2532;
 rt_int k_2534;
};
struct f_lit_table_936fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_934;
 P140 *r_935;
 P174 l_2538;
 P140 s_2539;
};
struct f_val_rep_942fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_937;
 P122 tt_938;
 P178 c_939;
 P122 *t_940;
 P140 *r_941;
 P122 aty_2542;
 P140 v_2543;
 P140 lt_2544;
 rt_int n_2545;
};
struct f_allocator_947fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_943;
 P122 want_944;
 P122 *t_945;
 P140 *r_946;
 P117 y_2546;
 P122 target_2547;
 P122 vt_2548;
 P140 ct_2549;
 P140 pt_2550;
 P140 cell_2551;
 P140 v_2552;
 P140 x_2553;
};
struct f_aggregate_952fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_948;
 P122 want_949;
 P122 *t_950;
 P140 *r_951;
 P140 b_2554;
};
struct f_captured_955fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_953;
 P140 *r_954;
 P151 l_2555;
};
struct f_field_at_958fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_956;
 rt_int k_957;
 P1846 result_;
 P1846 f_2557;
 rt_int i_2559;
};
struct f_names_field_961fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_959;
 P1846 f_960;
 int result_;
};
struct f_item_for_966fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_962;
 P122 rt_963;
 rt_int k_964;
 rt_int p_965;
 P174 result_;
 P174 it_2563;
 P174 lab_2564;
 rt_int n_2565;
};
struct f_arm_holds_970fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_967;
 rt_int v_968;
 int *res_969;
 P174 l_2568;
 rt_int lo_2569;
 rt_int hi_2570;
 int ok_2571;
};
struct f_record_aggregate_974fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_971;
 P122 rt_972;
 P140 *r_973;
 P174 it_2573;
 P174 lab_2574;
 P174 vn_2575;
 P174 a_2576;
 P1846 f_2577;
 P1971 g_2578;
 rt_int n_2579;
 A2580 done_2581;
 A2580 active_2583;
 A2585 dvs_2586;
 A2588 order_2589;
 rt_int norder_2591;
 rt_int nung_2592;
 rt_int k_2593;
 rt_int d_2594;
 rt_int npos_2595;
 P126 saved_2596;
 P140 ct_2597;
 P140 tmp_2598;
 P140 parts_2599;
 int named_2600;
 int ok_2601;
 int holds_2602;
 rt_int i_2604;
 rt_int p_2613;
 rt_int i_2632;
 rt_int i_2649;
 rt_int i_2660;
};
struct f_field_index_977fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_975;
 rt_gstr name_976;
 rt_int result_;
 P1846 f_2666;
 rt_int k_2667;
};
struct f_agg_component_983fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_978;
 P122 rt_979;
 rt_int k_980;
 P174 v_981;
 rt_int line_982;
 P1846 f_2669;
 P122 vt_2670;
 P140 x_2671;
 P140 y_2672;
 rt_int i_2674;
};
struct f_static_choice_987fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_984;
 rt_int *v_985;
 int *ok_986;
};
struct f_array_aggregate_992fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_988;
 P122 arrt_989;
 P140 bounds_990;
 P140 *r_991;
 P174 it_2679;
 P174 lab_2680;
 P174 others_it_2681;
 rt_int np_2682;
 rt_int nnamed_2683;
 rt_int clo_2684;
 rt_int chi_2685;
 rt_int v1_2686;
 rt_int v2_2687;
 int all_static_2688;
 int ok_2689;
 int ok2_2690;
 int first_choice_2691;
 P122 vt_2692;
 P140 ct_2693;
 P140 et_2694;
 P140 tmp_2695;
 P140 lo_2696;
 P140 hi_2697;
 P140 v_2698;
 P140 x_2699;
 P140 parts_2700;
 P140 fill_2701;
 P140 rowb_2702;
 P140 key_2703;
 P140 khi_2704;
 P126 saved_2705;
};
struct f_element_store_996fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_993;
 P122 arrt_994;
 rt_gstr v_995;
 P140 x_2710;
};
struct f_check_choices_1000fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_997;
 P122 arrt_998;
 int has_others_999;
 P174 a_2711;
 P174 b_2712;
 P174 lab_2713;
 P174 lab2_2714;
 rt_int lo1_2715;
 rt_int hi1_2716;
 rt_int lo2_2717;
 rt_int hi2_2718;
 rt_int count_2719;
 int ok_2720;
};
struct f_actual_for_1004fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1001;
 P1828 pm_1002;
 P1828 first_1003;
 P174 result_;
 P174 a_2725;
 P1828 p_2726;
};
struct f_gcall_1009fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1005;
 int is_stmt_1006;
 P122 *t_1007;
 P140 *r_1008;
 P174 fn_2729;
 P174 nm_2730;
 P117 y_2731;
 P140 args_2732;
 P140 lv_2733;
 P140 v_2734;
 P140 ct_2735;
 P140 x_2736;
 P174 a_2737;
 P1828 pm_2738;
 P122 lt_2739;
 P122 vt_2740;
 P178 lc_2741;
 int ro_2742;
};
struct f_out_check_1013fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1010;
 P122 t_1011;
 P178 c_1012;
};
struct f_var_path_1016fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1014;
 P140 *r_1015;
 P122 pt_2743;
 P140 v_2744;
 P126 saved_2745;
};
struct f_paths_overlap_1019fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1017;
 rt_gstr r_1018;
 int result_;
 rt_int i_2749;
 rt_int j_2751;
};
struct f_mentions_1022fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1020;
 rt_gstr name_1021;
 int result_;
 P174 p_2773;
};
struct f_mentions_one_1025fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1023;
 rt_gstr name_1024;
 int result_;
};
struct f_check_aliasing_1029fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1026;
 P117 y_1027;
 P174 a_1028;
 P174 b_2775;
 P140 p_2776;
 P140 q_2777;
 P174 r_2778;
 P117 v_2779;
};
struct f_gcall_with_1034fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1030;
 P117 y_1031;
 P122 *t_1032;
 P140 *r_1033;
 P140 args_2781;
 P140 lv_2782;
 P140 v_2783;
 P140 x1_2784;
 P140 x2_2785;
 P174 a_2786;
 P1828 pm_2787;
 P122 lt_2788;
 P122 vt_2789;
 P178 lc_2790;
 int ro_2791;
};
struct f_builtin_1041fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1035;
 P174 args_1036;
 rt_int line_1037;
 int is_stmt_1038;
 P122 *t_1039;
 P140 *r_1040;
 P122 aty_2794;
 P122 lt_2795;
 P140 a_2796;
 P140 w_2797;
 P140 lv_2798;
 P178 lc_2799;
 int ro_2800;
};
struct f_lookup_path_1043fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1042;
 P117 result_;
 P117 y_2801;
 P117 m_2802;
 rt_int i_2806;
};
struct f_is_package_1045fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1044;
 int result_;
 P117 y_2818;
};
struct f_member_of_1049fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1046;
 rt_gstr name_1047;
 rt_int line_1048;
 P117 result_;
 P117 y_2819;
 P117 m_2820;
};
struct f_inside_package_1051fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1050;
 int result_;
 P151 l_2822;
};
struct f_copy_sym_1054fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1052;
 P117 *z_1053;
};
struct f_complete_private_1057fr { int dummy;
 struct f_greenc_1fr *up;
 P122 ph_1055;
 P122 full_1056;
 P140 n_2826;
 P174 p_2827;
};
struct f_package_spec_1059fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1058;
 P117 y_2828;
 P117 m_2829;
 P117 z_2830;
 P174 saved_2831;
 P117 first_private_2832;
};
struct f_hidden_from_1062fr { int dummy;
 struct f_greenc_1fr *up;
 P117 m_1060;
 P117 first_private_1061;
 int result_;
 P117 p_2836;
};
struct f_package_body_1064fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1063;
 P189 saved_labels_2838;
 P117 y_2839;
 P117 m_2840;
 P117 z_2841;
 P174 saved_2842;
};
struct f_use_visible_1066fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1065;
 int result_;
};
struct f_use_clause_1068fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1067;
 P174 n_2849;
 P117 y_2850;
 P117 m_2851;
 P117 z_2852;
 P117 old_2853;
 int clash_2854;
};
struct f_usable_over_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1069;
 int result_;
};
struct f_same_entity_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1071;
 P117 b_1072;
 int result_;
};
struct f_fits_1078fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1074;
 P174 args_1075;
 P122 want_1076;
 int *ok_1077;
 P1828 pm_2859;
 P174 a_2860;
 P122 t_2861;
 P178 c_2862;
 P140 v_2863;
 int ro_2864;
 P126 saved_2865;
 rt_int used_2866;
};
struct f_is_builtin_1080fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1079;
 int result_;
};
struct f_resolve_overload_1087fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1081;
 P174 args_1082;
 int is_stmt_1083;
 P122 want_1084;
 rt_int line_1085;
 P117 *y_1086;
 P117 z_2871;
 P117 w_2872;
 P117 first_2873;
 P117 found_2874;
 rt_int n_2875;
 int ok_2876;
 int hidden_2877;
 rt_int pass_2879;
};
struct f_same_profile_1090fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1088;
 P117 b_1089;
 int result_;
};
struct f_resolve_member_overload_1098fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1091;
 rt_gstr name_1092;
 P174 args_1093;
 int is_stmt_1094;
 P122 want_1095;
 rt_int line_1096;
 P117 *y_1097;
 P117 pk_2889;
 P117 z_2890;
 P117 found_2891;
 rt_int n_2892;
 int ok_2893;
 rt_int pass_2895;
};
struct f_user_operator_1104fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1099;
 P122 want_1100;
 P122 *t_1101;
 P140 *r_1102;
 int *done_1103;
 P140 op_2900;
 int negate_2901;
 P117 y_2902;
 P174 call_2903;
 P174 fname_2904;
 P174 l_2905;
 P174 rt_2906;
 int ok_2907;
};
struct f_task_p_1106fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1105;
 P174 x_2910;
 P174 r_2911;
 rt_int line_2912;
};
struct f_entry_p_1108fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1107;
 P174 x_2913;
};
struct f_accept_p_1110fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1109;
 P174 x_2914;
};
struct f_delay_p_1112fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1111;
 P174 x_2915;
};
struct f_designators_1114fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1113;
 P174 head_2916;
 P174 tail_2917;
 P174 n_2918;
};
struct f_parse_task_statement_1116fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1115;
 P174 x_2920;
 P174 alt_2921;
 P174 head_2922;
 P174 tail_2923;
 rt_int line_2924;
};
struct f_path_at_1120fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1117;
 rt_gstr field_1118;
 P140 *r_1119;
 rt_int i_2927;
};
struct f_is_task_name_1122fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1121;
 int result_;
 P117 y_2931;
};
struct f_task_of_1126fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1123;
 P117 *y_1124;
 P174 *ix_1125;
 P174 n_2932;
 P117 a_2933;
};
struct f_own_index_1129fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1127;
 P140 *r_1128;
 P117 y_2934;
};
struct f_member_1134fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1130;
 rt_gstr arr_1131;
 rt_gstr i_1132;
 P140 *r_1133;
 P140 lo_2935;
 P140 hi_2936;
};
struct f_act_path_1137fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1135;
 P140 *r_1136;
 P140 i_2937;
};
struct f_act_path_i_1141fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1138;
 rt_gstr i_1139;
 P140 *r_1140;
};
struct f_entry_path_1145fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1142;
 rt_gstr i_1143;
 P140 *r_1144;
 P140 own_2938;
};
struct f_declare_slot_1148fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1146;
 rt_gstr field_1147;
};
struct f_task_decl_1150fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1149;
};
struct f_family_arg_struct_1151fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1156fr { int dummy;
 struct f_greenc_1fr *up;
 P174 b_1152;
 P117 y_1153;
 P140 x_1154;
 int per_member_1155;
 P140 lo_2940;
 P140 hi_2941;
 P140 v_2942;
 P140 d_2943;
 P140 mlo_2944;
 P140 mhi_2945;
 P122 vt_2946;
 P178 c_2947;
};
struct f_entry_family_slot_1161fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1157;
 rt_gstr base_1158;
 rt_gstr i_1159;
 P140 *r_1160;
 P140 lo_2948;
 P140 hi_2949;
};
struct f_task_spec_1163fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1162;
 int has_procs_2950;
 int saved_defer_2951;
 P140 fields_2952;
 P140 ct_2953;
 P1828 pm_2954;
 P140 fp_2955;
 P140 flo_2956;
 P140 fhi_2957;
 P117 y_2958;
 P117 m_2959;
 P117 z_2960;
 P117 saved_2961;
 P140 d_2962;
 P140 v_2963;
 P140 p_2964;
 P140 p2_2965;
 P122 vt_2966;
 P174 r_2967;
};
struct f_entry_decl_1165fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1164;
 P117 y_2972;
 P174 p_2973;
 P1828 pm_2974;
 P1828 tail_2975;
 P140 fields_2976;
 P140 ct_2977;
 P140 x_2978;
 P140 lo_2979;
 P140 hi_2980;
};
struct f_task_body_1167fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1166;
 P117 y_2984;
 P117 b_2985;
 P117 m_2986;
 P117 z_2987;
 P140 upp_2988;
 P117 saved_2989;
};
struct f_task_awaits_1170fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_1168;
 P140 *aw_1169;
 P174 e_2993;
 P117 y_2994;
 P140 p_2995;
};
struct f_task_failure_1172fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1171;
 P117 y_2997;
 P140 a_2998;
 P140 i_2999;
 P122 it_3000;
};
struct f_entry_sym_1176fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1173;
 P117 *y_1174;
 P174 *ix_1175;
 P174 alias_3001;
 P117 t_3002;
};
struct f_entry_overload_1181fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1177;
 P174 args_1178;
 rt_int line_1179;
 P117 *r_1180;
 P117 z_3003;
 P117 found_3004;
 int ok_3005;
};
struct f_other_call_1186fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1182;
 int is_stmt_1183;
 P122 *t_1184;
 P140 *r_1185;
 P117 y_3007;
 P117 oy_3008;
 P1828 pm_3009;
 P174 a_3010;
 P140 parts_3011;
 P140 v_3012;
 P140 lv_3013;
 P140 ent_3014;
 P140 act_3015;
 P140 i_3016;
 P122 vt_3017;
 P122 lt_3018;
 P178 lc_3019;
 int ro_3020;
 P174 ix_3021;
 P174 fix_3022;
 P174 args_node_3023;
};
struct f_other_attr_1191fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1187;
 P117 y_1188;
 P122 *t_1189;
 P140 *r_1190;
 rt_gstr a_3025;
 P140 p_3026;
};
struct f_member_attr_1195fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1192;
 P122 *t_1193;
 P140 *r_1194;
 P117 y_3027;
 P174 ix_3028;
 P140 i_3029;
 P140 p_3030;
 P122 vt_3031;
};
struct f_task_builtin_1201fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1196;
 P174 args_1197;
 rt_int line_1198;
 P122 *t_1199;
 P140 *r_1200;
 P122 vt_3032;
 P140 v_3033;
};
struct f_accept_entry_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1202;
 P117 *r_1203;
 P117 z_3034;
 P117 found_3035;
 P117 any_3036;
 int ok_3037;
};
struct f_accept_conforms_1208fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1205;
 P117 y_1206;
 int *ok_1207;
 P174 f_3041;
 P1828 pm_3042;
 P122 t_3043;
 P178 c_3044;
};
struct f_gen_accept_1210fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1209;
 P117 y_3046;
 P143 saved_ax_3047;
 P140 ent_3048;
 P140 ep_3049;
 P140 xf_3050;
 P140 x_3051;
 P1828 pm_3052;
 P174 f_3053;
 P117 p_3054;
};
struct f_member_slot_1214fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1211;
 P174 s_1212;
 P140 *ent_1213;
 P122 vt_3056;
 P140 v_3057;
};
struct f_gen_delay_ticks_1217fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1215;
 P140 *r_1216;
 P122 vt_3058;
 P140 v_3059;
};
struct f_gen_select_1219fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1218;
 P174 alt_3060;
 rt_int n_3061;
 rt_int i_3062;
 int has_delay_3063;
 int has_accept_3064;
 P140 al_3065;
 P140 w_3066;
 P140 g_3067;
 P140 ent_3068;
 P140 ticks_3069;
 P122 vt_3070;
 P117 y_3071;
};
struct f_family_range_1224fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1220;
 P174 ix_1221;
 P140 *lo_1222;
 P140 *hi_1223;
 P122 vt_3075;
};
struct f_task_statement_gen_1226fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1225;
 P174 n_3076;
 P174 ix_3077;
 P117 y_3078;
 P140 a_3079;
 P140 d_3080;
 P140 l_3081;
 P140 ticks_3082;
 P140 lo_3083;
 P140 hi_3084;
};
struct f_root_name_1228fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1227;
 P174 result_;
};
struct f_check_pure_target_1231fr { int dummy;
 struct f_greenc_1fr *up;
 P174 target_1229;
 rt_int line_1230;
 P174 n_3088;
 P117 y_3089;
};
struct f_assigns_nonlocal_1234fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1232;
 rt_gstr name_1233;
 int result_;
};
struct f_declares_1237fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1235;
 rt_gstr name_1236;
 int result_;
 P174 p_3090;
 P174 e_3091;
};
struct f_scan_handlers_1241fr { int dummy;
 struct f_greenc_1fr *up;
 P174 h_1238;
 P174 d_1239;
 rt_gstr name_1240;
 int result_;
 P174 p_3094;
};
struct f_scan_assigns_1245fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_1242;
 P174 d_1243;
 rt_gstr name_1244;
 int result_;
 P174 s_3096;
 P174 a_3097;
 P174 r_3098;
};
struct f_check_call_rules_1248fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1246;
 P117 y_1247;
 P117 z_3102;
 P117 s_3103;
};
struct f_generic_p_1250fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1249;
 P174 x_3105;
 P174 p_3106;
 P174 head_3107;
 P174 tail_3108;
 P174 names_3109;
 P174 st_3110;
 P174 def_3111;
 P174 sub_3112;
 P140 def_name_text_3113;
 int more_3114;
};
struct f_instantiation_1253fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1251;
 P174 *res_1252;
 P174 i_3117;
 P174 head_3118;
 P174 tail_3119;
 P174 a_3120;
 P140 formal_3121;
 rt_int mark_3122;
 int more_3123;
};
struct f_generic_decl_1255fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1254;
 P117 y_3125;
};
struct f_is_generic_name_1257fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1256;
 int result_;
 P117 y_3126;
};
struct f_attach_generic_body_1259fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1258;
 P117 y_3127;
};
struct f_restore_generic_context_1262fr { int dummy;
 struct f_greenc_1fr *up;
 P174 body_node_1260;
 rt_int line_1261;
 P146 ctx_3130;
 P117 m_3131;
 P117 z_3132;
 int seen_3133;
};
struct f_gactual_1266fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1263;
 rt_int nth_1264;
 rt_gstr name_1265;
 P174 result_;
 P174 a_3138;
 rt_int i_3139;
};
struct f_copy_node_1270fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1267;
 P140 name_1268;
 P174 *r_1269;
};
struct f_matches_formal_1274fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1271;
 rt_gstr name_1272;
 P117 fs_1273;
 int result_;
};
struct f_instantiate_1276fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1275;
 P117 g_3141;
 P174 gd_3142;
 P174 pat_3143;
 P174 f_3144;
 P174 a_3145;
 P174 cn_3146;
 P117 y_3147;
 P117 z_3148;
 P117 fs_3149;
 rt_int nth_3150;
 P122 t_3151;
 P122 vt_3152;
 P178 c_3153;
 P140 v_3154;
 P140 acc_3155;
 P140 x_3156;
 int ok_3157;
};
struct f_predef_type_1281fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1277;
 P122 t_1278;
 rt_gstr lo_1279;
 rt_gstr hi_1280;
 P117 y_3161;
};
struct f_predef_const_1285fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1282;
 P122 t_1283;
 rt_gstr code_text_1284;
 P117 y_3168;
};
struct f_predef_exc_1287fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1286;
 P117 y_3169;
};
struct f_predef_lit_1291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1288;
 P122 t_1289;
 rt_int v_1290;
 P117 y_3170;
};
struct f_predefine_1292fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_3171;
 rt_gstr control_3172;
 rt_int start_3173;
 rt_int code_no_3174;
 rt_int i_3177;
 rt_int i_3185;
};
struct f_prelude_1293fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_translate_1295fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1294;
 P174 p_3189;
 P117 y_3190;
};
struct f_print_program_1296fr { int dummy;
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
 rt_int y_conflict_105;
 rt_int f_const_obj_106;
 rt_int f_deferred_107;
 A109 toks_112;
 rt_int ntoks_113;
 rt_int tpos_114;
 rt_int src_line_115;
 A116 table_119;
 rt_int depth_120;
 P117 scope_stack_121;
 P122 all_types_124;
 rt_int serial_125;
 P126 out_types_128;
 P126 out_frames_129;
 P126 out_helpers_130;
 P126 out_protos_131;
 P126 out_globals_132;
 P126 out_funcs_133;
 P126 out_init_134;
 P126 out_excs_135;
 P126 code_136;
 P126 fields_buf_137;
 int in_func_138;
 rt_int cur_level_139;
 P140 st_field_141;
 P117 func_sym_142;
 P143 exits_145;
 P146 generic_contexts_148;
 P143 accept_exits_149;
 rt_int frames_150;
 P151 handlers_153;
 P151 cleanups_154;
 rt_int trial_155;
 P122 ty_int_156;
 P122 ty_bool_157;
 P122 ty_float_158;
 P122 ty_char_159;
 P122 ty_string_160;
 P122 ty_void_161;
 P122 ty_nil_162;
 P122 ty_univ_163;
 P122 ty_act_164;
 P122 ty_tdecl_165;
 P122 ty_entry_166;
 P122 ty_short_167;
 P122 ty_long_168;
 P122 ty_sfloat_169;
 P122 ty_lfloat_170;
 P122 ty_time_171;
 P122 ty_ufixed_172;
 P122 completing_173;
 P174 anon_node_176;
 P122 anon_typ_177;
 P178 anon_cons_180;
 P140 agg_bounds_181;
 P117 disc_syms_182;
 A183 unit_names_184;
 A185 unit_depths_186;
 rt_int nunits_188;
 P189 body_labels_191;
 P189 body_gotos_192;
 rt_int segments_193;
 P143 handler_exits_194;
 rt_int handler_depth_195;
 P140 post_checks_196;
 P140 env_names_197;
 P198 barriers_200;
 int text_io_qualified_201;
 P117 cur_task_202;
 rt_int accept_depth_203;
 int famarg_done_204;
 P174 fam_ix_205;
 P174 call_task_ix_206;
 int saw_interface_207;
 int defer_entry_structs_208;
 P126 out_awaits_209;
 P178 no_cons_210;
 P174 units_211;
 P174 prelude_units_212;
 P151 pkg_stack_213;
 P174 cur_pkg_214;
 P140 prefix_hint_215;
 P122 call_want_216;
 P117 pure_sym_217;
 rt_int pure_depth_218;
 int vrp_ok_219;
 int in_lv_path_220;
 int last_deref_221;
 P140 main_name_222;
 P140 conf_system_223;
 rt_int conf_storage_unit_224;
 rt_int conf_memory_size_225;
 P140 conf_optimize_226;
};
static void as_A2588(A2588 *d, A2588 s);
static A2588 cp_A2588(A2588 s);
static int eq_A2588(A2588 a, A2588 b);
static A2588 cat_A2588(A2588 a, A2588 b);
static A2588 one_A2588(rt_int e);
static void as_A2585(A2585 *d, A2585 s);
static A2585 cp_A2585(A2585 s);
static int eq_A2585(A2585 a, A2585 b);
static A2585 cat_A2585(A2585 a, A2585 b);
static A2585 one_A2585(rt_int e);
static void as_A2580(A2580 *d, A2580 s);
static A2580 cp_A2580(A2580 s);
static int eq_A2580(A2580 a, A2580 b);
static A2580 cat_A2580(A2580 a, A2580 b);
static A2580 one_A2580(int e);
static A2580 and_A2580(A2580 a, A2580 b);
static A2580 or_A2580(A2580 a, A2580 b);
static A2580 xor_A2580(A2580 a, A2580 b);
static A2580 not_A2580(A2580 a);
static void as_A2255(A2255 *d, A2255 s);
static A2255 cp_A2255(A2255 s);
static int eq_A2255(A2255 a, A2255 b);
static A2255 cat_A2255(A2255 a, A2255 b);
static A2255 one_A2255(rt_int e);
static void as_R1972(R1972 *d, R1972 s);
static R1972 cp_R1972(R1972 s);
static int eq_R1972(R1972 a, R1972 b);
static void as_R1851(R1851 *d, R1851 s);
static R1851 cp_R1851(R1851 s);
static int eq_R1851(R1851 a, R1851 b);
static void as_R1847(R1847 *d, R1847 s);
static R1847 cp_R1847(R1847 s);
static int eq_R1847(R1847 a, R1847 b);
static void as_R1829(R1829 *d, R1829 s);
static R1829 cp_R1829(R1829 s);
static int eq_R1829(R1829 a, R1829 b);
static void as_R199(R199 *d, R199 s);
static R199 cp_R199(R199 s);
static int eq_R199(R199 a, R199 b);
static void as_R190(R190 *d, R190 s);
static R190 cp_R190(R190 s);
static int eq_R190(R190 a, R190 b);
static void as_A185(A185 *d, A185 s);
static A185 cp_A185(A185 s);
static int eq_A185(A185 a, A185 b);
static A185 cat_A185(A185 a, A185 b);
static A185 one_A185(rt_int e);
static void as_A183(A183 *d, A183 s);
static A183 cp_A183(A183 s);
static int eq_A183(A183 a, A183 b);
static A183 cat_A183(A183 a, A183 b);
static A183 one_A183(P140 e);
static void as_R179(R179 *d, R179 s);
static R179 cp_R179(R179 s);
static int eq_R179(R179 a, R179 b);
static void as_R175(R175 *d, R175 s);
static R175 cp_R175(R175 s);
static int eq_R175(R175 a, R175 b);
static void as_R152(R152 *d, R152 s);
static R152 cp_R152(R152 s);
static int eq_R152(R152 a, R152 b);
static void as_R147(R147 *d, R147 s);
static R147 cp_R147(R147 s);
static int eq_R147(R147 a, R147 b);
static void as_R144(R144 *d, R144 s);
static R144 cp_R144(R144 s);
static int eq_R144(R144 a, R144 b);
static void as_R127(R127 *d, R127 s);
static R127 cp_R127(R127 s);
static int eq_R127(R127 a, R127 b);
static void as_R123(R123 *d, R123 s);
static R123 cp_R123(R123 s);
static int eq_R123(R123 a, R123 b);
static void as_R118(R118 *d, R118 s);
static R118 cp_R118(R118 s);
static int eq_R118(R118 a, R118 b);
static void as_A116(A116 *d, A116 s);
static A116 cp_A116(A116 s);
static int eq_A116(A116 a, A116 b);
static A116 cat_A116(A116 a, A116 b);
static A116 one_A116(P117 e);
static void as_R111(R111 *d, R111 s);
static R111 cp_R111(R111 s);
static int eq_R111(R111 a, R111 b);
static void as_A109(A109 *d, A109 s);
static A109 cp_A109(A109 s);
static int eq_A109(A109 a, A109 b);
static A109 cat_A109(A109 a, A109 b);
static A109 one_A109(P110 e);
static void as_rt_gstr(rt_gstr *d, rt_gstr s);
static rt_gstr cp_rt_gstr(rt_gstr s);
static int eq_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr one_rt_gstr(int e);
static P140 f_mk_228(struct f_greenc_1fr *up_, rt_gstr s_227);
static void f_new_name_231(struct f_greenc_1fr *up_, rt_gstr base_229, P140 *res_230);
static int f_is_letter_233(struct f_greenc_1fr *up_, int c_232);
static int f_is_digit_235(struct f_greenc_1fr *up_, int c_234);
static int f_upper_237(struct f_greenc_1fr *up_, int c_236);
static rt_gstr f_lower_s_239(struct f_greenc_1fr *up_, rt_gstr s_238);
static rt_gstr f_upper_s_241(struct f_greenc_1fr *up_, rt_gstr s_240);
static int f_is_operator_243(struct f_greenc_1fr *up_, rt_gstr s_242);
static rt_gstr f_c_field_245(struct f_greenc_1fr *up_, rt_gstr s_244);
static rt_gstr f_q_246(struct f_greenc_1fr *up_);
static void f_fail_249(struct f_greenc_1fr *up_, rt_int line_247, rt_gstr msg_248);
static P126 f_new_buffer_250(struct f_greenc_1fr *up_);
static void f_put_to_253(struct f_greenc_1fr *up_, P126 b_251, rt_gstr s_252);
static void f_emit_255(struct f_greenc_1fr *up_, rt_gstr s_254);
static void f_print_buffer_257(struct f_greenc_1fr *up_, P126 b_256);
static void f_splice_260(struct f_greenc_1fr *up_, P126 a_258, P126 b_259);
static int f_is_reserved_262(struct f_greenc_1fr *up_, rt_gstr w_261);
static void f_add_token_266(struct f_greenc_1fr *up_, rt_int kind_263, rt_gstr s_264, rt_int ival_265);
static rt_int f_digit_value_268(struct f_greenc_1fr *up_, int c_267);
static rt_int f_digit_in_271(struct f_greenc_1fr *up_, int c_269, rt_int base_270);
static void f_accumulate_275(struct f_greenc_1fr *up_, rt_int *v_272, rt_int base_273, rt_int d_274);
static void f_lex_line_277(struct f_greenc_1fr *up_, rt_gstr line_276);
static int f_exponent_ahead_280(struct f_greenc_1fr *up_, rt_gstr line_278, rt_int j_279);
static void f_exponent_285(struct f_greenc_1fr *up_, rt_gstr line_281, rt_int *j_282, rt_gstr *buf_283, rt_int *bl_284);
static void f_include_open_288(struct f_greenc_1fr *up_, rt_gstr name_286, rt_int *length_287);
static void f_include_char_291(struct f_greenc_1fr *up_, rt_int i_289, int *c_290);
static void f_check_include_292(struct f_greenc_1fr *up_);
static void f_include_text_294(struct f_greenc_1fr *up_, rt_int n_293);
static void f_include_line_298(struct f_greenc_1fr *up_, rt_gstr t_295, rt_int from_296, rt_int to_297);
static void f_read_source_299(struct f_greenc_1fr *up_);
static P174 f_nn_302(struct f_greenc_1fr *up_, rt_int kind_300, rt_int line_301);
static void f_append_306(struct f_greenc_1fr *up_, P174 *head_303, P174 *tail_304, P174 x_305);
static rt_int f_list_len_308(struct f_greenc_1fr *up_, P174 l_307);
static rt_int f_cur_line_309(struct f_greenc_1fr *up_);
static int f_at_kw_311(struct f_greenc_1fr *up_, rt_gstr w_310);
static int f_at_op_313(struct f_greenc_1fr *up_, rt_gstr w_312);
static int f_at_kind_315(struct f_greenc_1fr *up_, rt_int k_314);
static rt_int f_kind_at_317(struct f_greenc_1fr *up_, rt_int k_316);
static rt_gstr f_text_at_319(struct f_greenc_1fr *up_, rt_int k_318);
static void f_perror_321(struct f_greenc_1fr *up_, rt_gstr msg_320);
static void f_skip_322(struct f_greenc_1fr *up_);
static void f_expect_kw_324(struct f_greenc_1fr *up_, rt_gstr w_323);
static void f_expect_op_326(struct f_greenc_1fr *up_, rt_gstr w_325);
static void f_expect_id_328(struct f_greenc_1fr *up_, P140 *res_327);
static void f_name_node_330(struct f_greenc_1fr *up_, P174 *res_329);
static void f_id_list_332(struct f_greenc_1fr *up_, P174 *res_331);
static P174 f_binop_337(struct f_greenc_1fr *up_, P140 op_333, P174 l_334, P174 r_335, rt_int line_336);
static void f_expr_339(struct f_greenc_1fr *up_, P174 *res_338);
static int f_is_rel_341(struct f_greenc_1fr *up_, rt_gstr s_340);
static void f_relation_343(struct f_greenc_1fr *up_, P174 *res_342);
static rt_gstr f_path_of_345(struct f_greenc_1fr *up_, P174 e_344);
static void f_simple_expr_347(struct f_greenc_1fr *up_, P174 *res_346);
static void f_term_349(struct f_greenc_1fr *up_, P174 *res_348);
static void f_factor_351(struct f_greenc_1fr *up_, P174 *res_350);
static void f_primary_353(struct f_greenc_1fr *up_, P174 *res_352);
static void f_agg_or_paren_355(struct f_greenc_1fr *up_, P174 *res_354);
static int f_choice_token_357(struct f_greenc_1fr *up_, P110 t_356);
static int f_aggregate_ahead_358(struct f_greenc_1fr *up_);
static void f_name_p_360(struct f_greenc_1fr *up_, P174 *res_359);
static void f_component_list_362(struct f_greenc_1fr *up_, P174 *res_361);
static void f_discrete_range_p_364(struct f_greenc_1fr *up_, P174 *res_363);
static void f_subtype_ind_366(struct f_greenc_1fr *up_, P174 *res_365);
static void f_type_spec_368(struct f_greenc_1fr *up_, P174 *res_367);
static void f_type_def_370(struct f_greenc_1fr *up_, P174 *res_369);
static void f_pragma_p_372(struct f_greenc_1fr *up_, P174 *res_371);
static void f_check_pragma_374(struct f_greenc_1fr *up_, P174 x_373);
static void f_visibility_p_376(struct f_greenc_1fr *up_, P140 *res_375);
static void f_unit_p_378(struct f_greenc_1fr *up_, P174 *res_377);
static void f_skip_representation_379(struct f_greenc_1fr *up_);
static void f_decl_part_381(struct f_greenc_1fr *up_, P174 *res_380);
static void f_object_decl_383(struct f_greenc_1fr *up_, P174 *res_382);
static void f_type_decl_385(struct f_greenc_1fr *up_, P174 *res_384);
static void f_formal_part_387(struct f_greenc_1fr *up_, P174 *res_386);
static void f_designator_389(struct f_greenc_1fr *up_, P140 *res_388);
static void f_subprogram_391(struct f_greenc_1fr *up_, P174 *res_390);
static void f_body_part_393(struct f_greenc_1fr *up_, P174 x_392);
static void f_parse_handlers_395(struct f_greenc_1fr *up_, P174 *res_394);
static void f_package_p_397(struct f_greenc_1fr *up_, P174 *res_396);
static int f_at_statements_end_398(struct f_greenc_1fr *up_);
static void f_statements_400(struct f_greenc_1fr *up_, P174 *res_399);
static void f_statement_402(struct f_greenc_1fr *up_, P174 *res_401);
static void f_labelled_statement_405(struct f_greenc_1fr *up_, P140 label_403, P174 *res_404);
static void f_task_statement_407(struct f_greenc_1fr *up_, P174 *res_406);
static void f_if_stmt_409(struct f_greenc_1fr *up_, P174 *res_408);
static void f_case_stmt_411(struct f_greenc_1fr *up_, P174 *res_410);
static void f_loop_stmt_413(struct f_greenc_1fr *up_, P174 *res_412);
static void f_compilation_415(struct f_greenc_1fr *up_, P174 *res_414);
static rt_int f_hash_417(struct f_greenc_1fr *up_, rt_gstr s_416);
static int f_listed_420(struct f_greenc_1fr *up_, P140 list_418, rt_gstr name_419);
static int f_visible_sym_422(struct f_greenc_1fr *up_, P117 y_421);
static P117 f_lookup_424(struct f_greenc_1fr *up_, rt_gstr name_423);
static int f_same_task_427(struct f_greenc_1fr *up_, P117 a_425, P117 b_426);
static P117 f_lookup_entry_430(struct f_greenc_1fr *up_, rt_gstr name_428, P117 owner_429);
static P117 f_lookup_at_433(struct f_greenc_1fr *up_, rt_gstr name_431, rt_int d_432);
static rt_int f_enclosing_depth_435(struct f_greenc_1fr *up_, rt_gstr name_434);
static void f_push_unit_437(struct f_greenc_1fr *up_, P140 name_436);
static P117 f_lookup_decl_439(struct f_greenc_1fr *up_, P174 d_438);
static int f_overloadable_441(struct f_greenc_1fr *up_, P117 y_440);
static int f_same_444(struct f_greenc_1fr *up_, P122 a_442, P122 b_443);
static P122 f_root_446(struct f_greenc_1fr *up_, P122 t_445);
static int f_derived_from_449(struct f_greenc_1fr *up_, P122 a_447, P122 b_448);
static int f_is_numeric_451(struct f_greenc_1fr *up_, P122 t_450);
static int f_is_discrete_453(struct f_greenc_1fr *up_, P122 t_452);
static int f_same_types_456(struct f_greenc_1fr *up_, P1828 a_454, P1828 b_455);
static int f_same_signature_459(struct f_greenc_1fr *up_, P1828 a_457, P1828 b_458);
static int f_distinct_overload_462(struct f_greenc_1fr *up_, P117 y_460, P117 z_461);
static void f_define_465(struct f_greenc_1fr *up_, P117 y_463, rt_int line_464);
static void f_open_scope_466(struct f_greenc_1fr *up_);
static void f_close_scope_467(struct f_greenc_1fr *up_);
static P117 f_new_sym_470(struct f_greenc_1fr *up_, rt_int kind_468, P140 name_469);
static P122 f_new_typ_472(struct f_greenc_1fr *up_, rt_int kind_471);
static P178 f_new_cons_473(struct f_greenc_1fr *up_);
static int f_bounded_475(struct f_greenc_1fr *up_, P178 c_474);
static int f_bounded_hi_477(struct f_greenc_1fr *up_, P178 c_476);
static int f_static_bounds_479(struct f_greenc_1fr *up_, P178 c_478);
static int f_discriminated_481(struct f_greenc_1fr *up_, P178 c_480);
static rt_gstr f_kind_name_483(struct f_greenc_1fr *up_, P122 t_482);
static void f_check_type_487(struct f_greenc_1fr *up_, P122 got_484, P122 want_485, rt_int line_486);
static rt_int f_field_count_489(struct f_greenc_1fr *up_, P122 t_488);
static void f_ctype_492(struct f_greenc_1fr *up_, P122 t_490, P140 *r_491);
static void f_field_decls_495(struct f_greenc_1fr *up_, P122 t_493, P140 *r_494);
static void f_declare_ctype_497(struct f_greenc_1fr *up_, P122 t_496);
static rt_int f_lit_index_500(struct f_greenc_1fr *up_, P174 lits_498, rt_gstr name_499);
static void f_manifest_504(struct f_greenc_1fr *up_, P174 e_501, rt_int *v_502, int *ok_503);
static void f_resolve_508(struct f_greenc_1fr *up_, P174 st_505, P122 *t_506, P178 *c_507);
static void f_constraint_list_512(struct f_greenc_1fr *up_, P174 st_509, P122 t_510, P178 c_511);
static void f_discriminant_constraint_516(struct f_greenc_1fr *up_, P174 st_513, P122 t_514, P178 c_515);
static void f_discrete_bounds_522(struct f_greenc_1fr *up_, P174 r_517, P122 want_518, P122 *t_519, P140 *lo_520, P140 *hi_521);
static void f_range_of_526(struct f_greenc_1fr *up_, P174 r_523, P122 t_524, P178 c_525);
static void f_fresh_typ_530(struct f_greenc_1fr *up_, rt_int kind_527, P140 name_528, P122 *t_529);
static void f_inherit_534(struct f_greenc_1fr *up_, P122 parent_531, P122 t_532, rt_int line_533);
static void f_derive_literals_537(struct f_greenc_1fr *up_, P122 t_535, rt_int line_536);
static void f_type_definition_542(struct f_greenc_1fr *up_, P174 d_538, P140 name_539, P122 *t_540, P178 *c_541);
static void f_array_type_549(struct f_greenc_1fr *up_, P174 idx_543, P174 comp_544, P140 name_545, rt_int line_546, P122 *t_547, P178 *c_548);
static void f_static_range_553(struct f_greenc_1fr *up_, P174 l_550, P174 h_551, P178 c_552);
static void f_component_place_559(struct f_greenc_1fr *up_, P122 rt_554, P1846 f_555, rt_gstr a_556, rt_gstr ct_557, P140 *r_558);
static rt_gstr f_no_value_561(struct f_greenc_1fr *up_, P122 t_560);
static int f_restricted_here_563(struct f_greenc_1fr *up_, P122 t_562);
static void f_elem_ctype_566(struct f_greenc_1fr *up_, P122 t_564, P140 *r_565);
static void f_first_index_569(struct f_greenc_1fr *up_, P122 t_567, P140 *r_568);
static int f_is_string_571(struct f_greenc_1fr *up_, P122 t_570);
static rt_gstr f_subst_574(struct f_greenc_1fr *up_, rt_gstr s_572, rt_gstr r_573);
static int f_mentions_record_576(struct f_greenc_1fr *up_, P140 s_575);
static void f_subst_cons_580(struct f_greenc_1fr *up_, P178 c_577, rt_gstr r_578, P178 *res_579);
static void f_remove_sym_582(struct f_greenc_1fr *up_, P117 y_581);
static void f_record_components_587(struct f_greenc_1fr *up_, P174 list_583, P122 t_584, P1971 g_585, rt_int line_586);
static void f_guard_cond_591(struct f_greenc_1fr *up_, P1971 g_588, P122 t_589, P140 *r_590);
static void f_arm_test_596(struct f_greenc_1fr *up_, P174 arm_592, P140 dname_593, rt_gstr d_594, P140 *x_595);
static void f_derived_type_601(struct f_greenc_1fr *up_, P174 d_597, P140 name_598, P122 *t_599, P178 *c_600);
static void f_real_type_606(struct f_greenc_1fr *up_, P174 d_602, P140 name_603, P122 *t_604, P178 *c_605);
static void f_finish_ptr_608(struct f_greenc_1fr *up_, P122 t_607);
static void f_init_storage_612(struct f_greenc_1fr *up_, rt_gstr lval_609, P122 t_610, P178 c_611);
static int f_composite_614(struct f_greenc_1fr *up_, P122 t_613);
static void f_assign_code_620(struct f_greenc_1fr *up_, rt_gstr lval_615, P122 t_616, rt_gstr v_617, P178 c_618, P140 *r_619);
static void f_copy_code_624(struct f_greenc_1fr *up_, P122 t_621, rt_gstr v_622, P140 *r_623);
static void f_eq_code_629(struct f_greenc_1fr *up_, P122 t_625, rt_gstr a_626, rt_gstr b_627, P140 *r_628);
static int f_seen_name_632(struct f_greenc_1fr *up_, P151 l_630, rt_gstr s_631);
static void f_emit_helpers_633(struct f_greenc_1fr *up_);
static void f_helper_bodies_635(struct f_greenc_1fr *up_, P122 t_634);
static void f_storage_639(struct f_greenc_1fr *up_, rt_gstr name_636, P122 t_637, P140 *access_code_638);
static void f_bind_642(struct f_greenc_1fr *up_, P117 y_640, P140 access_code_641);
static void f_declare_subprograms_644(struct f_greenc_1fr *up_, P174 from_643);
static void f_declare_one_646(struct f_greenc_1fr *up_, P174 e_645);
static void f_elaborate_defaults_648(struct f_greenc_1fr *up_, P117 y_647);
static void f_build_subprogram_651(struct f_greenc_1fr *up_, P174 d_649, P117 *y_650);
static void f_decl_elements_653(struct f_greenc_1fr *up_, P174 decls_652);
static void f_decl_element_655(struct f_greenc_1fr *up_, P174 e_654);
static void f_decl_element_1_657(struct f_greenc_1fr *up_, P174 e_656);
static void f_pragma_decl_659(struct f_greenc_1fr *up_, P174 e_658);
static void f_resolve_object_type_663(struct f_greenc_1fr *up_, P174 st_660, P122 *t_661, P178 *c_662);
static void f_rename_subprogram_665(struct f_greenc_1fr *up_, P174 e_664);
static void f_rename_module_668(struct f_greenc_1fr *up_, P174 e_666, P174 target_667);
static void f_push_barrier_671(struct f_greenc_1fr *up_, P174 e_669, rt_int limit_670);
static void f_other_decl_673(struct f_greenc_1fr *up_, P174 e_672);
static void f_scan_labels_676(struct f_greenc_1fr *up_, P174 stmts_674, rt_gstr path_675);
static void f_scan_guarded_680(struct f_greenc_1fr *up_, P174 stmts_677, P174 hs_678, rt_gstr path_679);
static rt_int f_count_g_682(struct f_greenc_1fr *up_, rt_gstr p_681);
static void f_label_body_685(struct f_greenc_1fr *up_, P174 stmts_683, P174 hs_684);
static void f_gen_label_688(struct f_greenc_1fr *up_, P174 s_686, int goto_it_687);
static int f_is_foreign_690(struct f_greenc_1fr *up_, P174 d_689);
static void f_subprogram_body_693(struct f_greenc_1fr *up_, P174 d_691, P117 y_692);
static void f_gen_statements_695(struct f_greenc_1fr *up_, P174 stmts_694);
static void f_pop_frames_697(struct f_greenc_1fr *up_, rt_int upto_696);
static void f_push_cleanup_699(struct f_greenc_1fr *up_, rt_gstr s_698);
static void f_pop_cleanup_700(struct f_greenc_1fr *up_);
static void f_guarded_705(struct f_greenc_1fr *up_, P174 decls_701, P174 stmts_702, P174 hs_703, rt_int line_704);
static void f_exc_id_709(struct f_greenc_1fr *up_, rt_gstr name_706, rt_int line_707, P140 *r_708);
static void f_gen_statement_711(struct f_greenc_1fr *up_, P174 s_710);
static void f_slice_assign_713(struct f_greenc_1fr *up_, P174 s_712);
static void f_gen_call_715(struct f_greenc_1fr *up_, P174 s_714);
static void f_gen_if_717(struct f_greenc_1fr *up_, P174 s_716);
static void f_gen_case_719(struct f_greenc_1fr *up_, P174 s_718);
static void f_selector_range_725(struct f_greenc_1fr *up_, P174 e_720, P122 t_721, rt_int *lo_722, rt_int *hi_723, int *ok_724);
static void f_push_exit_729(struct f_greenc_1fr *up_, P140 match_726, int is_loop_727, P140 *label_728);
static void f_gen_loop_731(struct f_greenc_1fr *up_, P174 s_730);
static void f_gen_block_733(struct f_greenc_1fr *up_, P174 s_732);
static int f_exit_matches_736(struct f_greenc_1fr *up_, P174 s_734, P143 x_735);
static void f_gen_exit_738(struct f_greenc_1fr *up_, P174 s_737);
static void f_gen_return_740(struct f_greenc_1fr *up_, P174 s_739);
static void f_access_of_743(struct f_greenc_1fr *up_, P117 y_741, P140 *r_742);
static void f_link_to_746(struct f_greenc_1fr *up_, rt_int l_744, P140 *r_745);
static rt_gstr f_c_ident_748(struct f_greenc_1fr *up_, rt_gstr s_747);
static void f_deref_752(struct f_greenc_1fr *up_, rt_gstr base_749, P122 t_750, P140 *r_751);
static int f_is_object_754(struct f_greenc_1fr *up_, P174 e_753);
static int f_is_const_access_756(struct f_greenc_1fr *up_, P174 e_755);
static void f_lvalue_762(struct f_greenc_1fr *up_, P174 e_757, P140 *code_out_758, P122 *t_759, P178 *c_760, int *ro_761);
static void f_select_on_771(struct f_greenc_1fr *up_, rt_gstr base_763, P122 bt_764, P174 e_765, int *ro_766, int lv_767, P140 *code_out_768, P122 *t_769, P178 *c_770);
static void f_index_on_780(struct f_greenc_1fr *up_, rt_gstr base_772, P122 bt_773, P174 e_774, int *ro_775, int lv_776, P140 *code_out_777, P122 *t_778, P178 *c_779);
static int f_type_attribute_783(struct f_greenc_1fr *up_, P122 t_781, rt_gstr name_782);
static int f_is_type_name_785(struct f_greenc_1fr *up_, rt_gstr n_784);
static int f_is_char_lit_787(struct f_greenc_1fr *up_, P174 e_786);
static int f_is_enum_lit_789(struct f_greenc_1fr *up_, P174 e_788);
static rt_gstr f_c_string_791(struct f_greenc_1fr *up_, rt_gstr s_790);
static int f_is_literal_793(struct f_greenc_1fr *up_, P174 e_792);
static void f_range_bounds_801(struct f_greenc_1fr *up_, P174 l_794, P174 h_795, P122 want_796, rt_int line_797, P122 *t_798, P140 *lo_799, P140 *hi_800);
static void f_gexpr_806(struct f_greenc_1fr *up_, P174 e_802, P122 want_803, P122 *t_804, P140 *r_805);
static void f_gexpr_1_811(struct f_greenc_1fr *up_, P174 e_807, P122 want_808, P122 *t_809, P140 *r_810);
static void f_string_aggregate_816(struct f_greenc_1fr *up_, P174 e_812, P122 want_813, P122 *t_814, P140 *r_815);
static void f_char_literal_821(struct f_greenc_1fr *up_, P174 e_817, P122 want_818, P122 *t_819, P140 *r_820);
static void f_expanded_824(struct f_greenc_1fr *up_, P174 e_822, P174 *r_823);
static void f_gen_name_829(struct f_greenc_1fr *up_, P174 e_825, P122 want_826, P122 *t_827, P140 *r_828);
static void f_gen_unop_834(struct f_greenc_1fr *up_, P174 e_830, P122 want_831, P122 *t_832, P140 *r_833);
static int f_short_int_836(struct f_greenc_1fr *up_, P122 t_835);
static rt_gstr f_float_kind_838(struct f_greenc_1fr *up_, P122 t_837);
static void f_membership_841(struct f_greenc_1fr *up_, P174 e_839, P140 *r_840);
static void f_condition_846(struct f_greenc_1fr *up_, P174 e_842, P122 want_843, P122 *t_844, P140 *r_845);
static void f_catenation_851(struct f_greenc_1fr *up_, P174 e_847, P122 want_848, P122 *t_849, P140 *r_850);
static void f_cat_operand_856(struct f_greenc_1fr *up_, P174 x_852, P122 arrt_853, rt_int line_854, P140 *r_855);
static void f_arithmetic_861(struct f_greenc_1fr *up_, P174 e_857, P122 want_858, P122 *t_859, P140 *r_860);
static void f_fixed_operation_869(struct f_greenc_1fr *up_, P174 e_862, P122 ta_863, P122 tb_864, rt_gstr a_865, rt_gstr b_866, P122 *t_867, P140 *r_868);
static void f_gen_binop_874(struct f_greenc_1fr *up_, P174 e_870, P122 want_871, P122 *t_872, P140 *r_873);
static void f_conversion_879(struct f_greenc_1fr *up_, P174 e_875, P117 y_876, P122 *t_877, P140 *r_878);
static void f_constrain_883(struct f_greenc_1fr *up_, P117 y_880, P122 t_881, P140 *r_882);
static void f_array_conversion_890(struct f_greenc_1fr *up_, P174 e_884, P122 t_885, P122 aty_886, P178 c_887, rt_gstr a_888, P140 *r_889);
static void f_gen_attr_895(struct f_greenc_1fr *up_, P174 e_891, P122 want_892, P122 *t_893, P140 *r_894);
static void f_type_bits_899(struct f_greenc_1fr *up_, P122 t_896, P178 c_897, P140 *r_898);
static void f_object_bits_903(struct f_greenc_1fr *up_, P122 t_900, rt_gstr v_901, P140 *r_902);
static void f_numeric_attr_909(struct f_greenc_1fr *up_, P174 e_904, P122 tt_905, P178 c_906, P122 *t_907, P140 *r_908);
static void f_component_attr_913(struct f_greenc_1fr *up_, P174 e_910, P122 *t_911, P140 *r_912);
static void f_config_attr_917(struct f_greenc_1fr *up_, P174 e_914, P122 *t_915, P140 *r_916);
static void f_attr_dim_921(struct f_greenc_1fr *up_, P174 e_918, P122 arrt_919, rt_int *n_920);
static void f_object_array_attr_927(struct f_greenc_1fr *up_, P174 e_922, P122 arrt_923, rt_gstr v_924, P122 *t_925, P140 *r_926);
static void f_type_array_attr_933(struct f_greenc_1fr *up_, P174 e_928, P122 arrt_929, P178 c_930, P122 *t_931, P140 *r_932);
static void f_lit_table_936(struct f_greenc_1fr *up_, P122 t_934, P140 *r_935);
static void f_val_rep_942(struct f_greenc_1fr *up_, P174 e_937, P122 tt_938, P178 c_939, P122 *t_940, P140 *r_941);
static void f_allocator_947(struct f_greenc_1fr *up_, P174 e_943, P122 want_944, P122 *t_945, P140 *r_946);
static void f_aggregate_952(struct f_greenc_1fr *up_, P174 e_948, P122 want_949, P122 *t_950, P140 *r_951);
static void f_captured_955(struct f_greenc_1fr *up_, P126 b_953, P140 *r_954);
static P1846 f_field_at_958(struct f_greenc_1fr *up_, P122 rt_956, rt_int k_957);
static int f_names_field_961(struct f_greenc_1fr *up_, P174 x_959, P1846 f_960);
static P174 f_item_for_966(struct f_greenc_1fr *up_, P174 e_962, P122 rt_963, rt_int k_964, rt_int p_965);
static void f_arm_holds_970(struct f_greenc_1fr *up_, P174 arm_967, rt_int v_968, int *res_969);
static void f_record_aggregate_974(struct f_greenc_1fr *up_, P174 e_971, P122 rt_972, P140 *r_973);
static rt_int f_field_index_977(struct f_greenc_1fr *up_, P122 rt_975, rt_gstr name_976);
static void f_agg_component_983(struct f_greenc_1fr *up_, rt_gstr tmp_978, P122 rt_979, rt_int k_980, P174 v_981, rt_int line_982);
static void f_static_choice_987(struct f_greenc_1fr *up_, P174 x_984, rt_int *v_985, int *ok_986);
static void f_array_aggregate_992(struct f_greenc_1fr *up_, P174 e_988, P122 arrt_989, P140 bounds_990, P140 *r_991);
static void f_element_store_996(struct f_greenc_1fr *up_, rt_gstr lv_993, P122 arrt_994, rt_gstr v_995);
static void f_check_choices_1000(struct f_greenc_1fr *up_, P174 e_997, P122 arrt_998, int has_others_999);
static P174 f_actual_for_1004(struct f_greenc_1fr *up_, P174 args_1001, P1828 pm_1002, P1828 first_1003);
static void f_gcall_1009(struct f_greenc_1fr *up_, P174 e_1005, int is_stmt_1006, P122 *t_1007, P140 *r_1008);
static void f_out_check_1013(struct f_greenc_1fr *up_, rt_gstr lv_1010, P122 t_1011, P178 c_1012);
static void f_var_path_1016(struct f_greenc_1fr *up_, P174 e_1014, P140 *r_1015);
static int f_paths_overlap_1019(struct f_greenc_1fr *up_, rt_gstr p_1017, rt_gstr r_1018);
static int f_mentions_1022(struct f_greenc_1fr *up_, P174 n_1020, rt_gstr name_1021);
static int f_mentions_one_1025(struct f_greenc_1fr *up_, P174 n_1023, rt_gstr name_1024);
static void f_check_aliasing_1029(struct f_greenc_1fr *up_, P174 e_1026, P117 y_1027, P174 a_1028);
static void f_gcall_with_1034(struct f_greenc_1fr *up_, P174 e_1030, P117 y_1031, P122 *t_1032, P140 *r_1033);
static void f_builtin_1041(struct f_greenc_1fr *up_, rt_gstr name_1035, P174 args_1036, rt_int line_1037, int is_stmt_1038, P122 *t_1039, P140 *r_1040);
static P117 f_lookup_path_1043(struct f_greenc_1fr *up_, rt_gstr p_1042);
static int f_is_package_1045(struct f_greenc_1fr *up_, P174 e_1044);
static P117 f_member_of_1049(struct f_greenc_1fr *up_, rt_gstr p_1046, rt_gstr name_1047, rt_int line_1048);
static int f_inside_package_1051(struct f_greenc_1fr *up_, P174 p_1050);
static void f_copy_sym_1054(struct f_greenc_1fr *up_, P117 y_1052, P117 *z_1053);
static void f_complete_private_1057(struct f_greenc_1fr *up_, P122 ph_1055, P122 full_1056);
static void f_package_spec_1059(struct f_greenc_1fr *up_, P174 e_1058);
static int f_hidden_from_1062(struct f_greenc_1fr *up_, P117 m_1060, P117 first_private_1061);
static void f_package_body_1064(struct f_greenc_1fr *up_, P174 e_1063);
static int f_use_visible_1066(struct f_greenc_1fr *up_, P117 old_1065);
static void f_use_clause_1068(struct f_greenc_1fr *up_, P174 e_1067);
static int f_usable_over_1070(struct f_greenc_1fr *up_, P117 old_1069);
static int f_same_entity_1073(struct f_greenc_1fr *up_, P117 a_1071, P117 b_1072);
static void f_fits_1078(struct f_greenc_1fr *up_, P117 y_1074, P174 args_1075, P122 want_1076, int *ok_1077);
static int f_is_builtin_1080(struct f_greenc_1fr *up_, rt_gstr n_1079);
static void f_resolve_overload_1087(struct f_greenc_1fr *up_, rt_gstr name_1081, P174 args_1082, int is_stmt_1083, P122 want_1084, rt_int line_1085, P117 *y_1086);
static int f_same_profile_1090(struct f_greenc_1fr *up_, P117 a_1088, P117 b_1089);
static void f_resolve_member_overload_1098(struct f_greenc_1fr *up_, rt_gstr p_1091, rt_gstr name_1092, P174 args_1093, int is_stmt_1094, P122 want_1095, rt_int line_1096, P117 *y_1097);
static void f_user_operator_1104(struct f_greenc_1fr *up_, P174 e_1099, P122 want_1100, P122 *t_1101, P140 *r_1102, int *done_1103);
static void f_task_p_1106(struct f_greenc_1fr *up_, P174 *res_1105);
static void f_entry_p_1108(struct f_greenc_1fr *up_, P174 *res_1107);
static void f_accept_p_1110(struct f_greenc_1fr *up_, P174 *res_1109);
static void f_delay_p_1112(struct f_greenc_1fr *up_, P174 *res_1111);
static void f_designators_1114(struct f_greenc_1fr *up_, P174 *res_1113);
static void f_parse_task_statement_1116(struct f_greenc_1fr *up_, P174 *res_1115);
static void f_path_at_1120(struct f_greenc_1fr *up_, rt_int level_1117, rt_gstr field_1118, P140 *r_1119);
static int f_is_task_name_1122(struct f_greenc_1fr *up_, rt_gstr n_1121);
static void f_task_of_1126(struct f_greenc_1fr *up_, P174 e_1123, P117 *y_1124, P174 *ix_1125);
static void f_own_index_1129(struct f_greenc_1fr *up_, P117 t_1127, P140 *r_1128);
static void f_member_1134(struct f_greenc_1fr *up_, P117 y_1130, rt_gstr arr_1131, rt_gstr i_1132, P140 *r_1133);
static void f_act_path_1137(struct f_greenc_1fr *up_, P117 y_1135, P140 *r_1136);
static void f_act_path_i_1141(struct f_greenc_1fr *up_, P117 y_1138, rt_gstr i_1139, P140 *r_1140);
static void f_entry_path_1145(struct f_greenc_1fr *up_, P117 y_1142, rt_gstr i_1143, P140 *r_1144);
static void f_declare_slot_1148(struct f_greenc_1fr *up_, rt_gstr ctype_name_1146, rt_gstr field_1147);
static void f_task_decl_1150(struct f_greenc_1fr *up_, P174 e_1149);
static void f_family_arg_struct_1151(struct f_greenc_1fr *up_);
static void f_family_bounds_1156(struct f_greenc_1fr *up_, P174 b_1152, P117 y_1153, P140 x_1154, int per_member_1155);
static void f_entry_family_slot_1161(struct f_greenc_1fr *up_, P117 y_1157, rt_gstr base_1158, rt_gstr i_1159, P140 *r_1160);
static void f_task_spec_1163(struct f_greenc_1fr *up_, P174 e_1162);
static void f_entry_decl_1165(struct f_greenc_1fr *up_, P174 e_1164);
static void f_task_body_1167(struct f_greenc_1fr *up_, P174 e_1166);
static void f_task_awaits_1170(struct f_greenc_1fr *up_, P174 decls_1168, P140 *aw_1169);
static void f_task_failure_1172(struct f_greenc_1fr *up_, P174 s_1171);
static void f_entry_sym_1176(struct f_greenc_1fr *up_, P174 e_1173, P117 *y_1174, P174 *ix_1175);
static void f_entry_overload_1181(struct f_greenc_1fr *up_, P117 y_1177, P174 args_1178, rt_int line_1179, P117 *r_1180);
static void f_other_call_1186(struct f_greenc_1fr *up_, P174 e_1182, int is_stmt_1183, P122 *t_1184, P140 *r_1185);
static void f_other_attr_1191(struct f_greenc_1fr *up_, P174 e_1187, P117 y_1188, P122 *t_1189, P140 *r_1190);
static void f_member_attr_1195(struct f_greenc_1fr *up_, P174 e_1192, P122 *t_1193, P140 *r_1194);
static void f_task_builtin_1201(struct f_greenc_1fr *up_, rt_gstr name_1196, P174 args_1197, rt_int line_1198, P122 *t_1199, P140 *r_1200);
static void f_accept_entry_1204(struct f_greenc_1fr *up_, P174 s_1202, P117 *r_1203);
static void f_accept_conforms_1208(struct f_greenc_1fr *up_, P174 s_1205, P117 y_1206, int *ok_1207);
static void f_gen_accept_1210(struct f_greenc_1fr *up_, P174 s_1209);
static void f_member_slot_1214(struct f_greenc_1fr *up_, P117 y_1211, P174 s_1212, P140 *ent_1213);
static void f_gen_delay_ticks_1217(struct f_greenc_1fr *up_, P174 e_1215, P140 *r_1216);
static void f_gen_select_1219(struct f_greenc_1fr *up_, P174 s_1218);
static void f_family_range_1224(struct f_greenc_1fr *up_, P117 y_1220, P174 ix_1221, P140 *lo_1222, P140 *hi_1223);
static void f_task_statement_gen_1226(struct f_greenc_1fr *up_, P174 s_1225);
static P174 f_root_name_1228(struct f_greenc_1fr *up_, P174 e_1227);
static void f_check_pure_target_1231(struct f_greenc_1fr *up_, P174 target_1229, rt_int line_1230);
static int f_assigns_nonlocal_1234(struct f_greenc_1fr *up_, P174 d_1232, rt_gstr name_1233);
static int f_declares_1237(struct f_greenc_1fr *up_, P174 d_1235, rt_gstr name_1236);
static int f_scan_handlers_1241(struct f_greenc_1fr *up_, P174 h_1238, P174 d_1239, rt_gstr name_1240);
static int f_scan_assigns_1245(struct f_greenc_1fr *up_, P174 stmts_1242, P174 d_1243, rt_gstr name_1244);
static void f_check_call_rules_1248(struct f_greenc_1fr *up_, P174 e_1246, P117 y_1247);
static void f_generic_p_1250(struct f_greenc_1fr *up_, P174 *res_1249);
static void f_instantiation_1253(struct f_greenc_1fr *up_, P174 x_1251, P174 *res_1252);
static void f_generic_decl_1255(struct f_greenc_1fr *up_, P174 e_1254);
static int f_is_generic_name_1257(struct f_greenc_1fr *up_, rt_gstr n_1256);
static void f_attach_generic_body_1259(struct f_greenc_1fr *up_, P174 e_1258);
static void f_restore_generic_context_1262(struct f_greenc_1fr *up_, P174 body_node_1260, rt_int line_1261);
static P174 f_gactual_1266(struct f_greenc_1fr *up_, P174 args_1263, rt_int nth_1264, rt_gstr name_1265);
static void f_copy_node_1270(struct f_greenc_1fr *up_, P174 n_1267, P140 name_1268, P174 *r_1269);
static int f_matches_formal_1274(struct f_greenc_1fr *up_, P117 y_1271, rt_gstr name_1272, P117 fs_1273);
static void f_instantiate_1276(struct f_greenc_1fr *up_, P174 e_1275);
static void f_predef_type_1281(struct f_greenc_1fr *up_, rt_gstr name_1277, P122 t_1278, rt_gstr lo_1279, rt_gstr hi_1280);
static void f_predef_const_1285(struct f_greenc_1fr *up_, rt_gstr name_1282, P122 t_1283, rt_gstr code_text_1284);
static void f_predef_exc_1287(struct f_greenc_1fr *up_, rt_gstr name_1286);
static void f_predef_lit_1291(struct f_greenc_1fr *up_, rt_gstr name_1288, P122 t_1289, rt_int v_1290);
static void f_predefine_1292(struct f_greenc_1fr *up_);
static void f_prelude_1293(struct f_greenc_1fr *up_);
static void f_translate_1295(struct f_greenc_1fr *up_, P174 u_1294);
static void f_print_program_1296(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_108;
static P140 f_mk_228(struct f_greenc_1fr *up_, rt_gstr s_227) {
  struct f_mk_228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_227 = cp_rt_gstr(s_227);
F->r_1298.lo = ((rt_int)1LL); F->r_1298.hi = ({ rt_gstr at1297 = F->s_227; at1297.hi >= at1297.lo ? at1297.hi - at1297.lo + 1 : (rt_int)0; });
F->r_1298.lo2 = 1; F->r_1298.hi2 = 1;
F->r_1298.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1298));
memset(F->r_1298.p, 0xFF, (size_t)G_CNT(F->r_1298));
as_rt_gstr(&F->r_1298, F->s_227);
F->result_ = ({ rt_gstr *cell1300 = rt_alloc(sizeof(rt_gstr)); *cell1300 = cp_rt_gstr(F->r_1298); (P140)cell1300; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_231(struct f_greenc_1fr *up_, rt_gstr base_229, P140 *res_230) {
  struct f_new_name_231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_229 = cp_rt_gstr(base_229);
F->res_230 = res_230;
F->up->serial_125 = rt_add(G_NV(F->up->serial_125), ((rt_int)1LL));
(*F->res_230) = ({ rt_gstr *cell1301 = rt_alloc(sizeof(rt_gstr)); *cell1301 = cp_rt_gstr(cat_rt_gstr(F->base_229, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_125))))); (P140)cell1301; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_233(struct f_greenc_1fr *up_, int c_232) {
  struct f_is_letter_233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_232 = c_232;
F->result_ = (((F->c_232 >= 65) && (F->c_232 <= 90)) || ((F->c_232 >= 97) && (F->c_232 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_235(struct f_greenc_1fr *up_, int c_234) {
  struct f_is_digit_235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_234 = c_234;
F->result_ = ((F->c_234 >= 48) && (F->c_234 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_237(struct f_greenc_1fr *up_, int c_236) {
  struct f_upper_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_236 = c_236;
if (((F->c_236 >= 97) && (F->c_236 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_236) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_236, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_239(struct f_greenc_1fr *up_, rt_gstr s_238) {
  struct f_lower_s_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_238 = cp_rt_gstr(s_238);
F->r_1302 = cp_rt_gstr(F->s_238);
{ rt_int lo1306 = ((rt_int)1LL), hi1307 = ({ rt_gstr at1304 = F->s_238; at1304.hi >= at1304.lo ? at1304.hi - at1304.lo + 1 : (rt_int)0; });
for (rt_int it1308 = lo1306; it1308 <= hi1307; it1308++) {
F->i_1305 = it1308;
if (((G_NV(({ rt_gstr ix1309 = F->r_1302; ix1309.p[rt_index(F->i_1305, ix1309.lo, ix1309.hi) - ix1309.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1310 = F->r_1302; ix1310.p[rt_index(F->i_1305, ix1310.lo, ix1310.hi) - ix1310.lo]; })) <= 90))) {
(*({ rt_gstr *ix1311 = &(F->r_1302); &ix1311->p[rt_index(F->i_1305, ix1311->lo, ix1311->hi) - ix1311->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1312 = F->r_1302; ix1312.p[rt_index(F->i_1305, ix1312.lo, ix1312.hi) - ix1312.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1303: ;
F->result_ = F->r_1302;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_241(struct f_greenc_1fr *up_, rt_gstr s_240) {
  struct f_upper_s_241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_240 = cp_rt_gstr(s_240);
F->r_1313 = cp_rt_gstr(F->s_240);
{ rt_int lo1317 = ((rt_int)1LL), hi1318 = ({ rt_gstr at1315 = F->s_240; at1315.hi >= at1315.lo ? at1315.hi - at1315.lo + 1 : (rt_int)0; });
for (rt_int it1319 = lo1317; it1319 <= hi1318; it1319++) {
F->i_1316 = it1319;
(*({ rt_gstr *ix1320 = &(F->r_1313); &ix1320->p[rt_index(F->i_1316, ix1320->lo, ix1320->hi) - ix1320->lo]; })) = f_upper_237(F->up, G_NV(({ rt_gstr ix1322 = F->r_1313; ix1322.p[rt_index(F->i_1316, ix1322.lo, ix1322.hi) - ix1322.lo]; })));
}
}
L_end_1314: ;
F->result_ = F->r_1313;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_243(struct f_greenc_1fr *up_, rt_gstr s_242) {
  struct f_is_operator_243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_242 = cp_rt_gstr(s_242);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_242, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_242, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_242, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_242, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_242, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_242, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_242, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_242, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_242, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_242, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_242, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_245(struct f_greenc_1fr *up_, rt_gstr s_244) {
  struct f_c_field_245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_244 = cp_rt_gstr(s_244);
F->result_ = cat_rt_gstr(f_lower_s_239(F->up, F->s_244), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_246(struct f_greenc_1fr *up_) {
  struct f_q_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_249(struct f_greenc_1fr *up_, rt_int line_247, rt_gstr msg_248) {
  struct f_fail_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_247 = line_247;
F->msg_248 = cp_rt_gstr(msg_248);
if ((G_NV(F->up->trial_155) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_247))), rt_g_lit(": ", 2)), F->msg_248)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_108);
ret_:

  return;
}

static P126 f_new_buffer_250(struct f_greenc_1fr *up_) {
  struct f_new_buffer_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R127 *cell1323 = rt_alloc(sizeof(R127)); *cell1323 = cp_R127(({ R127 ag1324; ag1324.head_ = NULL; ag1324.tail_ = NULL; ag1324; })); (P126)cell1323; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_253(struct f_greenc_1fr *up_, P126 b_251, rt_gstr s_252) {
  struct f_put_to_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_251 = b_251;
F->s_252 = cp_rt_gstr(s_252);
F->l_1325 = NULL;
F->l_1325 = ({ R152 *cell1326 = rt_alloc(sizeof(R152)); *cell1326 = cp_R152(({ R152 ag1327; ag1327.s_ = NULL; ag1327.next_ = NULL; ag1327; })); (P151)cell1326; });
(*(P151)rt_nil_check(F->l_1325)).s_ = f_mk_228(F->up, F->s_252);
if (((*(P126)rt_nil_check(F->b_251)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->b_251)).head_ = F->l_1325;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->b_251)).tail_)).next_ = F->l_1325;
}
(*(P126)rt_nil_check(F->b_251)).tail_ = F->l_1325;
ret_:

  return;
}

static void f_emit_255(struct f_greenc_1fr *up_, rt_gstr s_254) {
  struct f_emit_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_254 = cp_rt_gstr(s_254);
f_put_to_253(F->up, F->up->code_136, F->s_254);
ret_:

  return;
}

static void f_print_buffer_257(struct f_greenc_1fr *up_, P126 b_256) {
  struct f_print_buffer_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_256 = b_256;
F->l_1328 = NULL;
F->l_1328 = (*(P126)rt_nil_check(F->b_256)).head_;
while ((F->l_1328 != NULL)) {
rt_g_put(rt_g_g2s((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_1328)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1328 = (*(P151)rt_nil_check(F->l_1328)).next_;
}
L_end_1329: ;
ret_:

  return;
}

static void f_splice_260(struct f_greenc_1fr *up_, P126 a_258, P126 b_259) {
  struct f_splice_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_258 = a_258;
F->b_259 = b_259;
if (((*(P126)rt_nil_check(F->b_259)).head_ == NULL)) {
goto ret_;
}
if (((*(P126)rt_nil_check(F->a_258)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->a_258)).head_ = (*(P126)rt_nil_check(F->b_259)).head_;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->a_258)).tail_)).next_ = (*(P126)rt_nil_check(F->b_259)).head_;
}
(*(P126)rt_nil_check(F->a_258)).tail_ = (*(P126)rt_nil_check(F->b_259)).tail_;
(*(P126)rt_nil_check(F->b_259)).head_ = NULL;
(*(P126)rt_nil_check(F->b_259)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_262(struct f_greenc_1fr *up_, rt_gstr w_261) {
  struct f_is_reserved_262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_261 = cp_rt_gstr(w_261);
{ rt_int sel1331 = ({ rt_gstr at1330 = F->w_261; at1330.hi >= at1330.lo ? at1330.hi - at1330.lo + 1 : (rt_int)0; });
if (0 || sel1331 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_261, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_261, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_261, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_261, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_261, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_261, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_261, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_261, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_261, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_261, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_261, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_261, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_261, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_261, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_261, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_261, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_261, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_261, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_261, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_261, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_261, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_261, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_261, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_261, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_261, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_261, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_261, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_261, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1331 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_261, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_266(struct f_greenc_1fr *up_, rt_int kind_263, rt_gstr s_264, rt_int ival_265) {
  struct f_add_token_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_263 = kind_263;
F->s_264 = cp_rt_gstr(s_264);
F->ival_265 = ival_265;
F->up->ntoks_113 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*({ A109 *ix1332 = &(F->up->toks_112); &ix1332->p[rt_index(G_NV(F->up->ntoks_113), ix1332->lo, ix1332->hi) - ix1332->lo]; })) = ({ R111 *cell1333 = rt_alloc(sizeof(R111)); *cell1333 = cp_R111(({ R111 ag1334; ag1334.kind_ = F->kind_263; ag1334.line_ = G_NV(F->up->src_line_115); ag1334.ival_ = F->ival_265; ag1334.s_ = NULL; ag1334; })); (P110)cell1333; });
(*(P110)rt_nil_check((*({ A109 *ix1335 = &(F->up->toks_112); &ix1335->p[rt_index(G_NV(F->up->ntoks_113), ix1335->lo, ix1335->hi) - ix1335->lo]; })))).s_ = f_mk_228(F->up, F->s_264);
ret_:

  return;
}

static rt_int f_digit_value_268(struct f_greenc_1fr *up_, int c_267) {
  struct f_digit_value_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_267 = c_267;
if (f_is_digit_235(F->up, F->c_267)) {
F->result_ = rt_sub(((rt_int)(F->c_267) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_237(F->up, F->c_267)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_271(struct f_greenc_1fr *up_, int c_269, rt_int base_270) {
  struct f_digit_in_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_269 = c_269;
F->base_270 = base_270;
F->d_1336 = INT64_MIN;
if (f_is_digit_235(F->up, F->c_269)) {
F->d_1336 = rt_sub(((rt_int)(F->c_269) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_237(F->up, F->c_269) >= 65) && (f_upper_237(F->up, F->c_269) <= 70))) {
F->d_1336 = rt_add(rt_sub(((rt_int)(f_upper_237(F->up, F->c_269)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1336) >= F->base_270)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1336);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_275(struct f_greenc_1fr *up_, rt_int *v_272, rt_int base_273, rt_int d_274) {
  struct f_accumulate_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_272 = v_272;
F->base_273 = base_273;
F->d_274 = d_274;
if ((G_NV((*F->v_272)) > rt_quot(rt_sub(INT64_MAX, F->d_274), F->base_273))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_272) = rt_add(rt_mul(G_NV((*F->v_272)), F->base_273), F->d_274);
ret_:

  return;
}

static void f_lex_line_277(struct f_greenc_1fr *up_, rt_gstr line_276) {
  struct f_lex_line_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_276 = cp_rt_gstr(line_276);
F->i_1337 = INT64_MIN;
F->i_1337 = ((rt_int)1LL);
F->j_1338 = INT64_MIN;
F->j_1338 = ((rt_int)0LL);
F->n_1339 = INT64_MIN;
F->n_1339 = ({ rt_gstr at1340 = F->line_276; at1340.hi >= at1340.lo ? at1340.hi - at1340.lo + 1 : (rt_int)0; });
F->c_1341 = INT_MIN;
F->quote_1342 = INT_MIN;
F->v_1343 = INT64_MIN;
F->d_1344 = INT64_MIN;
F->buf_1345.lo = ((rt_int)1LL); F->buf_1345.hi = ((rt_int)1000LL);
F->buf_1345.lo2 = 1; F->buf_1345.hi2 = 1;
F->buf_1345.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1345));
memset(F->buf_1345.p, 0xFF, (size_t)G_CNT(F->buf_1345));
F->bl_1347 = INT64_MIN;
while ((G_NV(F->i_1337) <= G_NV(F->n_1339))) {
F->c_1341 = rt_range(G_NV(({ rt_gstr ix1349 = F->line_276; ix1349.p[rt_index(G_NV(F->i_1337), ix1349.lo, ix1349.hi) - ix1349.lo]; })), 0, 127);
if (((((G_NV(F->c_1341) == 32) || (G_NV(F->c_1341) == 9)) || (G_NV(F->c_1341) == 13)) || (G_NV(F->c_1341) == 12))) {
F->i_1337 = rt_add(G_NV(F->i_1337), ((rt_int)1LL));
} else if ((((G_NV(F->c_1341) == 45) && (G_NV(F->i_1337) < G_NV(F->n_1339))) && (G_NV(({ rt_gstr ix1350 = F->line_276; ix1350.p[rt_index(rt_add(G_NV(F->i_1337), ((rt_int)1LL)), ix1350.lo, ix1350.hi) - ix1350.lo]; })) == 45))) {
F->i_1337 = rt_add(G_NV(F->n_1339), ((rt_int)1LL));
} else if (f_is_letter_233(F->up, G_NV(F->c_1341))) {
F->j_1338 = G_NV(F->i_1337);
F->bl_1347 = ((rt_int)0LL);
while (((G_NV(F->j_1338) <= G_NV(F->n_1339)) && ((f_is_letter_233(F->up, G_NV(({ rt_gstr ix1353 = F->line_276; ix1353.p[rt_index(G_NV(F->j_1338), ix1353.lo, ix1353.hi) - ix1353.lo]; }))) || f_is_digit_235(F->up, G_NV(({ rt_gstr ix1355 = F->line_276; ix1355.p[rt_index(G_NV(F->j_1338), ix1355.lo, ix1355.hi) - ix1355.lo]; })))) || (G_NV(({ rt_gstr ix1356 = F->line_276; ix1356.p[rt_index(G_NV(F->j_1338), ix1356.lo, ix1356.hi) - ix1356.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1357 = F->line_276; ix1357.p[rt_index(G_NV(F->j_1338), ix1357.lo, ix1357.hi) - ix1357.lo]; })) == 95)) {
if (((G_NV(F->j_1338) == G_NV(F->n_1339)) || (!(f_is_letter_233(F->up, G_NV(({ rt_gstr ix1359 = F->line_276; ix1359.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1359.lo, ix1359.hi) - ix1359.lo]; }))) || f_is_digit_235(F->up, G_NV(({ rt_gstr ix1361 = F->line_276; ix1361.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1361.lo, ix1361.hi) - ix1361.lo]; }))))))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1347 = rt_add(G_NV(F->bl_1347), ((rt_int)1LL));
(*({ rt_gstr *ix1362 = &(F->buf_1345); &ix1362->p[rt_index(G_NV(F->bl_1347), ix1362->lo, ix1362->hi) - ix1362->lo]; })) = f_upper_237(F->up, G_NV(({ rt_gstr ix1364 = F->line_276; ix1364.p[rt_index(G_NV(F->j_1338), ix1364.lo, ix1364.hi) - ix1364.lo]; })));
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
}
L_end_1351: ;
if (f_is_reserved_262(F->up, ({ rt_gstr sl1366 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1366.lo, sl1366.hi); rt_index(h_, sl1366.lo, sl1366.hi); } sl1366.p += l_ - sl1366.lo; sl1366.lo = l_; sl1366.hi = h_; sl1366; }))) {
f_add_token_266(F->up, ((rt_int)2LL), ({ rt_gstr sl1368 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1368.lo, sl1368.hi); rt_index(h_, sl1368.lo, sl1368.hi); } sl1368.p += l_ - sl1368.lo; sl1368.lo = l_; sl1368.hi = h_; sl1368; }), ((rt_int)0LL));
} else {
f_add_token_266(F->up, ((rt_int)1LL), ({ rt_gstr sl1370 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1370.lo, sl1370.hi); rt_index(h_, sl1370.lo, sl1370.hi); } sl1370.p += l_ - sl1370.lo; sl1370.lo = l_; sl1370.hi = h_; sl1370; }), ((rt_int)0LL));
}
F->i_1337 = G_NV(F->j_1338);
} else if (f_is_digit_235(F->up, G_NV(F->c_1341))) {
F->j_1338 = G_NV(F->i_1337);
F->v_1343 = ((rt_int)0LL);
F->bl_1347 = ((rt_int)0LL);
while (((G_NV(F->j_1338) <= G_NV(F->n_1339)) && (f_is_digit_235(F->up, G_NV(({ rt_gstr ix1373 = F->line_276; ix1373.p[rt_index(G_NV(F->j_1338), ix1373.lo, ix1373.hi) - ix1373.lo]; }))) || (G_NV(({ rt_gstr ix1374 = F->line_276; ix1374.p[rt_index(G_NV(F->j_1338), ix1374.lo, ix1374.hi) - ix1374.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1375 = F->line_276; ix1375.p[rt_index(G_NV(F->j_1338), ix1375.lo, ix1375.hi) - ix1375.lo]; })) == 95)) {
if (((G_NV(F->j_1338) == G_NV(F->n_1339)) || (!f_is_digit_235(F->up, G_NV(({ rt_gstr ix1377 = F->line_276; ix1377.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1377.lo, ix1377.hi) - ix1377.lo]; })))))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_275(F->up, &F->v_1343, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1379 = F->line_276; ix1379.p[rt_index(G_NV(F->j_1338), ix1379.lo, ix1379.hi) - ix1379.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1347 = rt_add(G_NV(F->bl_1347), ((rt_int)1LL));
(*({ rt_gstr *ix1380 = &(F->buf_1345); &ix1380->p[rt_index(G_NV(F->bl_1347), ix1380->lo, ix1380->hi) - ix1380->lo]; })) = G_NV(({ rt_gstr ix1381 = F->line_276; ix1381.p[rt_index(G_NV(F->j_1338), ix1381.lo, ix1381.hi) - ix1381.lo]; }));
}
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
}
L_end_1371: ;
if (((G_NV(F->j_1338) < G_NV(F->n_1339)) && ((G_NV(({ rt_gstr ix1382 = F->line_276; ix1382.p[rt_index(G_NV(F->j_1338), ix1382.lo, ix1382.hi) - ix1382.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1383 = F->line_276; ix1383.p[rt_index(G_NV(F->j_1338), ix1383.lo, ix1383.hi) - ix1383.lo]; })) == 58) && (f_is_digit_235(F->up, G_NV(({ rt_gstr ix1385 = F->line_276; ix1385.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1385.lo, ix1385.hi) - ix1385.lo]; }))) || f_is_letter_233(F->up, G_NV(({ rt_gstr ix1387 = F->line_276; ix1387.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1387.lo, ix1387.hi) - ix1387.lo]; })))))))) {
{
F->base_1389 = INT64_MIN;
F->base_1389 = G_NV(F->v_1343);
if (((G_NV(F->base_1389) < ((rt_int)2LL)) || (G_NV(F->base_1389) > ((rt_int)16LL)))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1343 = ((rt_int)0LL);
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
if (((G_NV(F->j_1338) > G_NV(F->n_1339)) || (f_digit_in_271(F->up, G_NV(({ rt_gstr ix1391 = F->line_276; ix1391.p[rt_index(G_NV(F->j_1338), ix1391.lo, ix1391.hi) - ix1391.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1338) <= G_NV(F->n_1339)) && ((f_is_letter_233(F->up, G_NV(({ rt_gstr ix1394 = F->line_276; ix1394.p[rt_index(G_NV(F->j_1338), ix1394.lo, ix1394.hi) - ix1394.lo]; }))) || f_is_digit_235(F->up, G_NV(({ rt_gstr ix1396 = F->line_276; ix1396.p[rt_index(G_NV(F->j_1338), ix1396.lo, ix1396.hi) - ix1396.lo]; })))) || (G_NV(({ rt_gstr ix1397 = F->line_276; ix1397.p[rt_index(G_NV(F->j_1338), ix1397.lo, ix1397.hi) - ix1397.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1398 = F->line_276; ix1398.p[rt_index(G_NV(F->j_1338), ix1398.lo, ix1398.hi) - ix1398.lo]; })) == 95)) {
if (((G_NV(F->j_1338) == G_NV(F->n_1339)) || (f_digit_in_271(F->up, G_NV(({ rt_gstr ix1400 = F->line_276; ix1400.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1400.lo, ix1400.hi) - ix1400.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1344 = f_digit_in_271(F->up, G_NV(({ rt_gstr ix1402 = F->line_276; ix1402.p[rt_index(G_NV(F->j_1338), ix1402.lo, ix1402.hi) - ix1402.lo]; })), G_NV(F->base_1389));
if ((G_NV(F->d_1344) < ((rt_int)0LL))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1404 = F->line_276; ix1404.p[rt_index(G_NV(F->j_1338), ix1404.lo, ix1404.hi) - ix1404.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1389)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_275(F->up, &F->v_1343, G_NV(F->base_1389), G_NV(F->d_1344));
}
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
}
L_end_1392: ;

}
L_end_1388: ;
f_add_token_266(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1343))), G_NV(F->v_1343));
} else if (((G_NV(F->j_1338) < G_NV(F->n_1339)) && ((G_NV(({ rt_gstr ix1405 = F->line_276; ix1405.p[rt_index(G_NV(F->j_1338), ix1405.lo, ix1405.hi) - ix1405.lo]; })) == 46) && f_is_digit_235(F->up, G_NV(({ rt_gstr ix1407 = F->line_276; ix1407.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1407.lo, ix1407.hi) - ix1407.lo]; })))))) {
F->bl_1347 = rt_add(G_NV(F->bl_1347), ((rt_int)1LL));
(*({ rt_gstr *ix1408 = &(F->buf_1345); &ix1408->p[rt_index(G_NV(F->bl_1347), ix1408->lo, ix1408->hi) - ix1408->lo]; })) = 46;
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
while (((G_NV(F->j_1338) <= G_NV(F->n_1339)) && (f_is_digit_235(F->up, G_NV(({ rt_gstr ix1411 = F->line_276; ix1411.p[rt_index(G_NV(F->j_1338), ix1411.lo, ix1411.hi) - ix1411.lo]; }))) || (G_NV(({ rt_gstr ix1412 = F->line_276; ix1412.p[rt_index(G_NV(F->j_1338), ix1412.lo, ix1412.hi) - ix1412.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1413 = F->line_276; ix1413.p[rt_index(G_NV(F->j_1338), ix1413.lo, ix1413.hi) - ix1413.lo]; })) != 95)) {
F->bl_1347 = rt_add(G_NV(F->bl_1347), ((rt_int)1LL));
(*({ rt_gstr *ix1414 = &(F->buf_1345); &ix1414->p[rt_index(G_NV(F->bl_1347), ix1414->lo, ix1414->hi) - ix1414->lo]; })) = G_NV(({ rt_gstr ix1415 = F->line_276; ix1415.p[rt_index(G_NV(F->j_1338), ix1415.lo, ix1415.hi) - ix1415.lo]; }));
} else if (((G_NV(F->j_1338) == G_NV(F->n_1339)) || (!f_is_digit_235(F->up, G_NV(({ rt_gstr ix1417 = F->line_276; ix1417.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1417.lo, ix1417.hi) - ix1417.lo]; })))))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
}
L_end_1409: ;
if (f_exponent_ahead_280(F->up, F->line_276, G_NV(F->j_1338))) {
f_exponent_285(F->up, F->line_276, &F->j_1338, &F->buf_1345, &F->bl_1347);

}
f_add_token_266(F->up, ((rt_int)5LL), ({ rt_gstr sl1419 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1419.lo, sl1419.hi); rt_index(h_, sl1419.lo, sl1419.hi); } sl1419.p += l_ - sl1419.lo; sl1419.lo = l_; sl1419.hi = h_; sl1419; }), ((rt_int)0LL));
} else if (f_exponent_ahead_280(F->up, F->line_276, G_NV(F->j_1338))) {
f_exponent_285(F->up, F->line_276, &F->j_1338, &F->buf_1345, &F->bl_1347);

f_add_token_266(F->up, ((rt_int)5LL), ({ rt_gstr sl1421 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1421.lo, sl1421.hi); rt_index(h_, sl1421.lo, sl1421.hi); } sl1421.p += l_ - sl1421.lo; sl1421.lo = l_; sl1421.hi = h_; sl1421; }), ((rt_int)0LL));
} else {
f_add_token_266(F->up, ((rt_int)4LL), ({ rt_gstr sl1423 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1423.lo, sl1423.hi); rt_index(h_, sl1423.lo, sl1423.hi); } sl1423.p += l_ - sl1423.lo; sl1423.lo = l_; sl1423.hi = h_; sl1423; }), G_NV(F->v_1343));
}
F->i_1337 = G_NV(F->j_1338);
} else if (((G_NV(F->c_1341) == 34) || (G_NV(F->c_1341) == 37))) {
F->quote_1342 = rt_range(G_NV(F->c_1341), 0, 127);
F->j_1338 = rt_add(G_NV(F->i_1337), ((rt_int)1LL));
F->bl_1347 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1338) > G_NV(F->n_1339))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1425 = F->line_276; ix1425.p[rt_index(G_NV(F->j_1338), ix1425.lo, ix1425.hi) - ix1425.lo]; })) == G_NV(F->quote_1342))) {
if (((G_NV(F->j_1338) == G_NV(F->n_1339)) || (G_NV(({ rt_gstr ix1426 = F->line_276; ix1426.p[rt_index(rt_add(G_NV(F->j_1338), ((rt_int)1LL)), ix1426.lo, ix1426.hi) - ix1426.lo]; })) != G_NV(F->quote_1342)))) {
goto L_end_1424;
}
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
} else if (((G_NV(F->quote_1342) == 37) && (G_NV(({ rt_gstr ix1427 = F->line_276; ix1427.p[rt_index(G_NV(F->j_1338), ix1427.lo, ix1427.hi) - ix1427.lo]; })) == 34))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1347 = rt_add(G_NV(F->bl_1347), ((rt_int)1LL));
(*({ rt_gstr *ix1428 = &(F->buf_1345); &ix1428->p[rt_index(G_NV(F->bl_1347), ix1428->lo, ix1428->hi) - ix1428->lo]; })) = G_NV(({ rt_gstr ix1429 = F->line_276; ix1429.p[rt_index(G_NV(F->j_1338), ix1429.lo, ix1429.hi) - ix1429.lo]; }));
F->j_1338 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
}
L_end_1424: ;
f_add_token_266(F->up, ((rt_int)6LL), ({ rt_gstr sl1431 = F->buf_1345; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1347); if (l_ <= h_) { rt_index(l_, sl1431.lo, sl1431.hi); rt_index(h_, sl1431.lo, sl1431.hi); } sl1431.p += l_ - sl1431.lo; sl1431.lo = l_; sl1431.hi = h_; sl1431; }), ((rt_int)0LL));
F->i_1337 = rt_add(G_NV(F->j_1338), ((rt_int)1LL));
} else {
{
F->two_1433.lo = ((rt_int)1LL); F->two_1433.hi = ((rt_int)3LL);
F->two_1433.lo2 = 1; F->two_1433.hi2 = 1;
F->two_1433.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1433));
memset(F->two_1433.p, 0xFF, (size_t)G_CNT(F->two_1433));
as_rt_gstr(&F->two_1433, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1435 = &(F->two_1433); &ix1435->p[rt_index(((rt_int)1LL), ix1435->lo, ix1435->hi) - ix1435->lo]; })) = G_NV(F->c_1341);
if ((G_NV(F->i_1337) < G_NV(F->n_1339))) {
(*({ rt_gstr *ix1436 = &(F->two_1433); &ix1436->p[rt_index(((rt_int)2LL), ix1436->lo, ix1436->hi) - ix1436->lo]; })) = G_NV(({ rt_gstr ix1437 = F->line_276; ix1437.p[rt_index(rt_add(G_NV(F->i_1337), ((rt_int)1LL)), ix1437.lo, ix1437.hi) - ix1437.lo]; }));
}
if ((rt_add(G_NV(F->i_1337), ((rt_int)1LL)) < G_NV(F->n_1339))) {
(*({ rt_gstr *ix1438 = &(F->two_1433); &ix1438->p[rt_index(((rt_int)3LL), ix1438->lo, ix1438->hi) - ix1438->lo]; })) = G_NV(({ rt_gstr ix1439 = F->line_276; ix1439.p[rt_index(rt_add(G_NV(F->i_1337), ((rt_int)2LL)), ix1439.lo, ix1439.hi) - ix1439.lo]; }));
}
if (eq_rt_gstr(F->two_1433, rt_g_lit(":=:", 3))) {
f_add_token_266(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1337 = rt_add(G_NV(F->i_1337), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1440 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1440.lo, sl1440.hi); rt_index(h_, sl1440.lo, sl1440.hi); } sl1440.p += l_ - sl1440.lo; sl1440.lo = l_; sl1440.hi = h_; sl1440; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1441 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1441.lo, sl1441.hi); rt_index(h_, sl1441.lo, sl1441.hi); } sl1441.p += l_ - sl1441.lo; sl1441.lo = l_; sl1441.hi = h_; sl1441; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1442 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1442.lo, sl1442.hi); rt_index(h_, sl1442.lo, sl1442.hi); } sl1442.p += l_ - sl1442.lo; sl1442.lo = l_; sl1442.hi = h_; sl1442; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1443 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1443.lo, sl1443.hi); rt_index(h_, sl1443.lo, sl1443.hi); } sl1443.p += l_ - sl1443.lo; sl1443.lo = l_; sl1443.hi = h_; sl1443; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1444 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1444.lo, sl1444.hi); rt_index(h_, sl1444.lo, sl1444.hi); } sl1444.p += l_ - sl1444.lo; sl1444.lo = l_; sl1444.hi = h_; sl1444; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1445 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1445.lo, sl1445.hi); rt_index(h_, sl1445.lo, sl1445.hi); } sl1445.p += l_ - sl1445.lo; sl1445.lo = l_; sl1445.hi = h_; sl1445; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1446 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1446.lo, sl1446.hi); rt_index(h_, sl1446.lo, sl1446.hi); } sl1446.p += l_ - sl1446.lo; sl1446.lo = l_; sl1446.hi = h_; sl1446; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1447 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1447.lo, sl1447.hi); rt_index(h_, sl1447.lo, sl1447.hi); } sl1447.p += l_ - sl1447.lo; sl1447.lo = l_; sl1447.hi = h_; sl1447; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1448 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1448.lo, sl1448.hi); rt_index(h_, sl1448.lo, sl1448.hi); } sl1448.p += l_ - sl1448.lo; sl1448.lo = l_; sl1448.hi = h_; sl1448; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1449 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1449.lo, sl1449.hi); rt_index(h_, sl1449.lo, sl1449.hi); } sl1449.p += l_ - sl1449.lo; sl1449.lo = l_; sl1449.hi = h_; sl1449; }), rt_g_lit(">>", 2)))) {
f_add_token_266(F->up, ((rt_int)3LL), ({ rt_gstr sl1451 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1451.lo, sl1451.hi); rt_index(h_, sl1451.lo, sl1451.hi); } sl1451.p += l_ - sl1451.lo; sl1451.lo = l_; sl1451.hi = h_; sl1451; }), ((rt_int)0LL));
F->i_1337 = rt_add(G_NV(F->i_1337), ((rt_int)2LL));
} else if ((G_NV(F->c_1341) == 33)) {
f_add_token_266(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1337 = rt_add(G_NV(F->i_1337), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1341) == 38) || (G_NV(F->c_1341) == 39)) || (G_NV(F->c_1341) == 40)) || (G_NV(F->c_1341) == 41)) || (G_NV(F->c_1341) == 42)) || (G_NV(F->c_1341) == 43)) || (G_NV(F->c_1341) == 44)) || (G_NV(F->c_1341) == 45)) || (G_NV(F->c_1341) == 46)) || (G_NV(F->c_1341) == 47)) || (G_NV(F->c_1341) == 58)) || (G_NV(F->c_1341) == 59)) || (G_NV(F->c_1341) == 60)) || (G_NV(F->c_1341) == 61)) || (G_NV(F->c_1341) == 62)) || (G_NV(F->c_1341) == 124))) {
f_add_token_266(F->up, ((rt_int)3LL), ({ rt_gstr sl1453 = F->two_1433; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1453.lo, sl1453.hi); rt_index(h_, sl1453.lo, sl1453.hi); } sl1453.p += l_ - sl1453.lo; sl1453.lo = l_; sl1453.hi = h_; sl1453; }), ((rt_int)0LL));
F->i_1337 = rt_add(G_NV(F->i_1337), ((rt_int)1LL));
if ((G_NV(F->c_1341) == 59)) {
f_check_include_292(F->up);
}
} else {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("unexpected character", 20));
}

}
L_end_1432: ;
}
}
L_end_1348: ;
ret_:

  return;
}

static int f_exponent_ahead_280(struct f_greenc_1fr *up_, rt_gstr line_278, rt_int j_279) {
  struct f_exponent_ahead_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_278 = cp_rt_gstr(line_278);
F->j_279 = j_279;
if ((F->j_279 >= ({ rt_gstr at1454 = F->line_278; at1454.hi >= at1454.lo ? at1454.hi - at1454.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1455 = F->line_278; ix1455.p[rt_index(F->j_279, ix1455.lo, ix1455.hi) - ix1455.lo]; })) != 69) && (G_NV(({ rt_gstr ix1456 = F->line_278; ix1456.p[rt_index(F->j_279, ix1456.lo, ix1456.hi) - ix1456.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_235(F->up, G_NV(({ rt_gstr ix1458 = F->line_278; ix1458.p[rt_index(rt_add(F->j_279, ((rt_int)1LL)), ix1458.lo, ix1458.hi) - ix1458.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_279, ((rt_int)1LL)) >= ({ rt_gstr at1459 = F->line_278; at1459.hi >= at1459.lo ? at1459.hi - at1459.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1460 = F->line_278; ix1460.p[rt_index(rt_add(F->j_279, ((rt_int)1LL)), ix1460.lo, ix1460.hi) - ix1460.lo]; })) == 43) || (G_NV(({ rt_gstr ix1461 = F->line_278; ix1461.p[rt_index(rt_add(F->j_279, ((rt_int)1LL)), ix1461.lo, ix1461.hi) - ix1461.lo]; })) == 45)) && f_is_digit_235(F->up, G_NV(({ rt_gstr ix1463 = F->line_278; ix1463.p[rt_index(rt_add(F->j_279, ((rt_int)2LL)), ix1463.lo, ix1463.hi) - ix1463.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_285(struct f_greenc_1fr *up_, rt_gstr line_281, rt_int *j_282, rt_gstr *buf_283, rt_int *bl_284) {
  struct f_exponent_285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_281 = cp_rt_gstr(line_281);
F->j_282 = j_282;
F->buf_283 = buf_283;
F->bl_284 = bl_284;
(*F->bl_284) = rt_add(G_NV((*F->bl_284)), ((rt_int)1LL));
(*({ rt_gstr *ix1464 = &((*F->buf_283)); &ix1464->p[rt_index(G_NV((*F->bl_284)), ix1464->lo, ix1464->hi) - ix1464->lo]; })) = 69;
(*F->j_282) = rt_add(G_NV((*F->j_282)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1465 = F->line_281; ix1465.p[rt_index(G_NV((*F->j_282)), ix1465.lo, ix1465.hi) - ix1465.lo]; })) == 43) || (G_NV(({ rt_gstr ix1466 = F->line_281; ix1466.p[rt_index(G_NV((*F->j_282)), ix1466.lo, ix1466.hi) - ix1466.lo]; })) == 45))) {
(*F->bl_284) = rt_add(G_NV((*F->bl_284)), ((rt_int)1LL));
(*({ rt_gstr *ix1467 = &((*F->buf_283)); &ix1467->p[rt_index(G_NV((*F->bl_284)), ix1467->lo, ix1467->hi) - ix1467->lo]; })) = G_NV(({ rt_gstr ix1468 = F->line_281; ix1468.p[rt_index(G_NV((*F->j_282)), ix1468.lo, ix1468.hi) - ix1468.lo]; }));
(*F->j_282) = rt_add(G_NV((*F->j_282)), ((rt_int)1LL));
}
while (((G_NV((*F->j_282)) <= ({ rt_gstr at1470 = F->line_281; at1470.hi >= at1470.lo ? at1470.hi - at1470.lo + 1 : (rt_int)0; })) && (f_is_digit_235(F->up, G_NV(({ rt_gstr ix1472 = F->line_281; ix1472.p[rt_index(G_NV((*F->j_282)), ix1472.lo, ix1472.hi) - ix1472.lo]; }))) || (G_NV(({ rt_gstr ix1473 = F->line_281; ix1473.p[rt_index(G_NV((*F->j_282)), ix1473.lo, ix1473.hi) - ix1473.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1474 = F->line_281; ix1474.p[rt_index(G_NV((*F->j_282)), ix1474.lo, ix1474.hi) - ix1474.lo]; })) != 95)) {
(*F->bl_284) = rt_add(G_NV((*F->bl_284)), ((rt_int)1LL));
(*({ rt_gstr *ix1475 = &((*F->buf_283)); &ix1475->p[rt_index(G_NV((*F->bl_284)), ix1475->lo, ix1475->hi) - ix1475->lo]; })) = G_NV(({ rt_gstr ix1476 = F->line_281; ix1476.p[rt_index(G_NV((*F->j_282)), ix1476.lo, ix1476.hi) - ix1476.lo]; }));
} else if (((G_NV((*F->j_282)) == ({ rt_gstr at1477 = F->line_281; at1477.hi >= at1477.lo ? at1477.hi - at1477.lo + 1 : (rt_int)0; })) || (!f_is_digit_235(F->up, G_NV(({ rt_gstr ix1479 = F->line_281; ix1479.p[rt_index(rt_add(G_NV((*F->j_282)), ((rt_int)1LL)), ix1479.lo, ix1479.hi) - ix1479.lo]; })))))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_282) = rt_add(G_NV((*F->j_282)), ((rt_int)1LL));
}
L_end_1469: ;
ret_:

  return;
}

static void f_include_open_288(struct f_greenc_1fr *up_, rt_gstr name_286, rt_int *length_287) {
  struct f_include_open_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_286 = cp_rt_gstr(name_286);
F->length_287 = length_287;
rt_g_include_open(rt_g_g2s(F->name_286), F->length_287);
ret_:

  return;
}

static void f_include_char_291(struct f_greenc_1fr *up_, rt_int i_289, int *c_290) {
  struct f_include_char_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_289 = i_289;
F->c_290 = c_290;
rt_g_include_char(F->i_289, F->c_290);
ret_:

  return;
}

static void f_check_include_292(struct f_greenc_1fr *up_) {
  struct f_check_include_292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1480 = INT64_MIN;
if ((G_NV(F->up->ntoks_113) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P110)rt_nil_check(({ A109 ix1481 = F->up->toks_112; ix1481.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1481.lo, ix1481.hi) - ix1481.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P110)rt_nil_check(({ A109 ix1482 = F->up->toks_112; ix1482.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1482.lo, ix1482.hi) - ix1482.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1483 = F->up->toks_112; ix1483.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1483.lo, ix1483.hi) - ix1483.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1484 = F->up->toks_112; ix1484.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)4LL)), ix1484.lo, ix1484.hi) - ix1484.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1485 = F->up->toks_112; ix1485.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)3LL)), ix1485.lo, ix1485.hi) - ix1485.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1486 = F->up->toks_112; ix1486.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)1LL)), ix1486.lo, ix1486.hi) - ix1486.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_288(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1488 = F->up->toks_112; ix1488.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1488.lo, ix1488.hi) - ix1488.lo]; }))).s_)), &F->n_1480);
if ((G_NV(F->n_1480) < ((rt_int)0LL))) {
f_fail_249(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1490 = F->up->toks_112; ix1490.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1490.lo, ix1490.hi) - ix1490.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_113 = rt_sub(G_NV(F->up->ntoks_113), ((rt_int)6LL));
f_include_text_294(F->up, G_NV(F->n_1480));
ret_:

  return;
}

static void f_include_text_294(struct f_greenc_1fr *up_, rt_int n_293) {
  struct f_include_text_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_293 = n_293;
F->t_1491.lo = ((rt_int)1LL); F->t_1491.hi = rt_add(F->n_293, ((rt_int)1LL));
F->t_1491.lo2 = 1; F->t_1491.hi2 = 1;
F->t_1491.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1491));
memset(F->t_1491.p, 0xFF, (size_t)G_CNT(F->t_1491));
F->saved_line_1493 = INT64_MIN;
F->saved_line_1493 = G_NV(F->up->src_line_115);
F->from_1494 = INT64_MIN;
F->from_1494 = ((rt_int)1LL);
{ rt_int lo1497 = ((rt_int)1LL), hi1498 = F->n_293;
for (rt_int it1499 = lo1497; it1499 <= hi1498; it1499++) {
F->k_1496 = it1499;
f_include_char_291(F->up, F->k_1496, &(*({ rt_gstr *ix1501 = &(F->t_1491); &ix1501->p[rt_index(F->k_1496, ix1501->lo, ix1501->hi) - ix1501->lo]; })));
}
}
L_end_1495: ;
F->up->src_line_115 = ((rt_int)0LL);
{ rt_int lo1504 = ((rt_int)1LL), hi1505 = F->n_293;
for (rt_int it1506 = lo1504; it1506 <= hi1505; it1506++) {
F->k_1503 = it1506;
if ((G_NV(({ rt_gstr ix1507 = F->t_1491; ix1507.p[rt_index(F->k_1503, ix1507.lo, ix1507.hi) - ix1507.lo]; })) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_298(F->up, F->t_1491, G_NV(F->from_1494), rt_sub(F->k_1503, ((rt_int)1LL)));
F->from_1494 = rt_add(F->k_1503, ((rt_int)1LL));
}
}
}
L_end_1502: ;
if ((G_NV(F->from_1494) <= F->n_293)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_298(F->up, F->t_1491, G_NV(F->from_1494), F->n_293);
}
F->up->src_line_115 = G_NV(F->saved_line_1493);
ret_:

  return;
}

static void f_include_line_298(struct f_greenc_1fr *up_, rt_gstr t_295, rt_int from_296, rt_int to_297) {
  struct f_include_line_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_295 = cp_rt_gstr(t_295);
F->from_296 = from_296;
F->to_297 = to_297;
F->l_1508.lo = ((rt_int)1LL); F->l_1508.hi = rt_add(rt_sub(F->to_297, F->from_296), ((rt_int)1LL));
F->l_1508.lo2 = 1; F->l_1508.hi2 = 1;
F->l_1508.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1508));
memset(F->l_1508.p, 0xFF, (size_t)G_CNT(F->l_1508));
{ rt_int lo1512 = F->from_296, hi1513 = F->to_297;
for (rt_int it1514 = lo1512; it1514 <= hi1513; it1514++) {
F->k_1511 = it1514;
(*({ rt_gstr *ix1515 = &(F->l_1508); &ix1515->p[rt_index(rt_add(rt_sub(F->k_1511, F->from_296), ((rt_int)1LL)), ix1515->lo, ix1515->hi) - ix1515->lo]; })) = G_NV(({ rt_gstr ix1516 = F->t_295; ix1516.p[rt_index(F->k_1511, ix1516.lo, ix1516.hi) - ix1516.lo]; }));
}
}
L_end_1510: ;
f_lex_line_277(F->up, F->l_1508);
ret_:

  return;
}

static void f_read_source_299(struct f_greenc_1fr *up_) {
  struct f_read_source_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1517;
if (RT_TRY(xf1517)) {
F->buf_1519.lo = ((rt_int)1LL); F->buf_1519.hi = ((rt_int)10000LL);
F->buf_1519.lo2 = 1; F->buf_1519.hi2 = 1;
F->buf_1519.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1519));
memset(F->buf_1519.p, 0xFF, (size_t)G_CNT(F->buf_1519));
F->bl_1521 = INT64_MIN;
F->bl_1521 = ((rt_int)0LL);
F->c_1522 = INT_MIN;
for (;;) {
(F->c_1522 = rt_g_getc());
if ((G_NV(F->c_1522) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_lex_line_277(F->up, ({ rt_gstr sl1525 = F->buf_1519; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1521); if (l_ <= h_) { rt_index(l_, sl1525.lo, sl1525.hi); rt_index(h_, sl1525.lo, sl1525.hi); } sl1525.p += l_ - sl1525.lo; sl1525.lo = l_; sl1525.hi = h_; sl1525; }));
F->bl_1521 = ((rt_int)0LL);
} else {
F->bl_1521 = rt_add(G_NV(F->bl_1521), ((rt_int)1LL));
(*({ rt_gstr *ix1526 = &(F->buf_1519); &ix1526->p[rt_index(G_NV(F->bl_1521), ix1526->lo, ix1526->hi) - ix1526->lo]; })) = G_NV(F->c_1522);
}
}
L_end_1523: ;
RT_POP(xf1517);
} else {
RT_POP(xf1517);
int x1518 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1518);
if (0 || x1518 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1521) > ((rt_int)0LL))) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_lex_line_277(F->up, ({ rt_gstr sl1528 = F->buf_1519; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1521); if (l_ <= h_) { rt_index(l_, sl1528.lo, sl1528.hi); rt_index(h_, sl1528.lo, sl1528.hi); } sl1528.p += l_ - sl1528.lo; sl1528.lo = l_; sl1528.hi = h_; sl1528; }));
}
f_add_token_266(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1518);
}
}
}
ret_:

  return;
}

static P174 f_nn_302(struct f_greenc_1fr *up_, rt_int kind_300, rt_int line_301) {
  struct f_nn_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_300 = kind_300;
F->line_301 = line_301;
F->result_ = ({ R175 *cell1529 = rt_alloc(sizeof(R175)); *cell1529 = cp_R175(({ R175 ag1530; ag1530.kind_ = F->kind_300; ag1530.line_ = F->line_301; ag1530.ival_ = ((rt_int)0LL); ag1530.flag_ = ((rt_int)0LL); ag1530.name_ = NULL; ag1530.tag_ = NULL; ag1530.a_ = NULL; ag1530.b_ = NULL; ag1530.c_ = NULL; ag1530.d_ = NULL; ag1530.e_ = NULL; ag1530.next_ = NULL; ag1530.formal_ = NULL; ag1530; })); (P174)cell1529; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_306(struct f_greenc_1fr *up_, P174 *head_303, P174 *tail_304, P174 x_305) {
  struct f_append_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_303 = head_303;
F->tail_304 = tail_304;
F->x_305 = x_305;
if ((F->x_305 == NULL)) {
goto ret_;
}
if (((*F->head_303) == NULL)) {
(*F->head_303) = F->x_305;
} else {
(*(P174)rt_nil_check((*F->tail_304))).next_ = F->x_305;
}
(*F->tail_304) = F->x_305;
while (((*(P174)rt_nil_check((*F->tail_304))).next_ != NULL)) {
(*F->tail_304) = (*(P174)rt_nil_check((*F->tail_304))).next_;
}
L_end_1531: ;
ret_:

  return;
}

static rt_int f_list_len_308(struct f_greenc_1fr *up_, P174 l_307) {
  struct f_list_len_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_307 = l_307;
F->n_1532 = INT64_MIN;
F->n_1532 = ((rt_int)0LL);
F->p_1533 = NULL;
F->p_1533 = F->l_307;
while ((F->p_1533 != NULL)) {
F->n_1532 = rt_add(G_NV(F->n_1532), ((rt_int)1LL));
F->p_1533 = (*(P174)rt_nil_check(F->p_1533)).next_;
}
L_end_1534: ;
F->result_ = G_NV(F->n_1532);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_309(struct f_greenc_1fr *up_) {
  struct f_cur_line_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1535 = F->up->toks_112; ix1535.p[rt_index(G_NV(F->up->tpos_114), ix1535.lo, ix1535.hi) - ix1535.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_311(struct f_greenc_1fr *up_, rt_gstr w_310) {
  struct f_at_kw_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_310 = cp_rt_gstr(w_310);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1536 = F->up->toks_112; ix1536.p[rt_index(G_NV(F->up->tpos_114), ix1536.lo, ix1536.hi) - ix1536.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1537 = F->up->toks_112; ix1537.p[rt_index(G_NV(F->up->tpos_114), ix1537.lo, ix1537.hi) - ix1537.lo]; }))).s_)), F->w_310);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_313(struct f_greenc_1fr *up_, rt_gstr w_312) {
  struct f_at_op_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_312 = cp_rt_gstr(w_312);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1538 = F->up->toks_112; ix1538.p[rt_index(G_NV(F->up->tpos_114), ix1538.lo, ix1538.hi) - ix1538.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1539 = F->up->toks_112; ix1539.p[rt_index(G_NV(F->up->tpos_114), ix1539.lo, ix1539.hi) - ix1539.lo]; }))).s_)), F->w_312);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_315(struct f_greenc_1fr *up_, rt_int k_314) {
  struct f_at_kind_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_314 = k_314;
F->result_ = (G_NV((*(P110)rt_nil_check(({ A109 ix1540 = F->up->toks_112; ix1540.p[rt_index(G_NV(F->up->tpos_114), ix1540.lo, ix1540.hi) - ix1540.lo]; }))).kind_) == F->k_314);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_317(struct f_greenc_1fr *up_, rt_int k_316) {
  struct f_kind_at_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_316 = k_316;
if ((rt_add(G_NV(F->up->tpos_114), F->k_316) > G_NV(F->up->ntoks_113))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1541 = F->up->toks_112; ix1541.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_316), ix1541.lo, ix1541.hi) - ix1541.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_319(struct f_greenc_1fr *up_, rt_int k_318) {
  struct f_text_at_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_318 = k_318;
if ((rt_add(G_NV(F->up->tpos_114), F->k_318) > G_NV(F->up->ntoks_113))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1542 = F->up->toks_112; ix1542.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_318), ix1542.lo, ix1542.hi) - ix1542.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_321(struct f_greenc_1fr *up_, rt_gstr msg_320) {
  struct f_perror_321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_320 = cp_rt_gstr(msg_320);
f_fail_249(F->up, G_NV((*(P110)rt_nil_check(({ A109 ix1545 = F->up->toks_112; ix1545.p[rt_index(G_NV(F->up->tpos_114), ix1545.lo, ix1545.hi) - ix1545.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_320, rt_g_lit(" (at ", 5)), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1546 = F->up->toks_112; ix1546.p[rt_index(G_NV(F->up->tpos_114), ix1546.lo, ix1546.hi) - ix1546.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_322(struct f_greenc_1fr *up_) {
  struct f_skip_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_324(struct f_greenc_1fr *up_, rt_gstr w_323) {
  struct f_expect_kw_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_323 = cp_rt_gstr(w_323);
if ((!f_at_kw_311(F->up, F->w_323))) {
f_perror_321(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_323));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_326(struct f_greenc_1fr *up_, rt_gstr w_325) {
  struct f_expect_op_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_325 = cp_rt_gstr(w_325);
if ((!f_at_op_313(F->up, F->w_325))) {
f_perror_321(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_325));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_328(struct f_greenc_1fr *up_, P140 *res_327) {
  struct f_expect_id_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_327 = res_327;
if ((!f_at_kind_315(F->up, ((rt_int)1LL)))) {
f_perror_321(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
(*F->res_327) = (*(P110)rt_nil_check(({ A109 ix1547 = F->up->toks_112; ix1547.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1547.lo, ix1547.hi) - ix1547.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_330(struct f_greenc_1fr *up_, P174 *res_329) {
  struct f_name_node_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_329 = res_329;
F->x_1548 = NULL;
F->x_1548 = f_nn_302(F->up, ((rt_int)5LL), f_cur_line_309(F->up));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1548)).name_);
(*F->res_329) = F->x_1548;
goto ret_;
ret_:

  return;
}

static void f_id_list_332(struct f_greenc_1fr *up_, P174 *res_331) {
  struct f_id_list_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_331 = res_331;
F->head_1549 = NULL;
F->tail_1550 = NULL;
F->x_1551 = NULL;
f_name_node_330(F->up, &F->x_1551);
f_append_306(F->up, &F->head_1549, &F->tail_1550, F->x_1551);
while (f_at_op_313(F->up, rt_g_lit(",", 1))) {
f_skip_322(F->up);
f_name_node_330(F->up, &F->x_1551);
f_append_306(F->up, &F->head_1549, &F->tail_1550, F->x_1551);
}
L_end_1552: ;
(*F->res_331) = F->head_1549;
goto ret_;
ret_:

  return;
}

static P174 f_binop_337(struct f_greenc_1fr *up_, P140 op_333, P174 l_334, P174 r_335, rt_int line_336) {
  struct f_binop_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_333 = op_333;
F->l_334 = l_334;
F->r_335 = r_335;
F->line_336 = line_336;
F->x_1553 = NULL;
F->x_1553 = f_nn_302(F->up, ((rt_int)7LL), F->line_336);
(*(P174)rt_nil_check(F->x_1553)).name_ = F->op_333;
(*(P174)rt_nil_check(F->x_1553)).a_ = F->l_334;
(*(P174)rt_nil_check(F->x_1553)).b_ = F->r_335;
F->result_ = F->x_1553;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_339(struct f_greenc_1fr *up_, P174 *res_338) {
  struct f_expr_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_338 = res_338;
F->l_1554 = NULL;
F->r_1555 = NULL;
F->op_1556 = NULL;
F->first_op_1557 = NULL;
F->line_1558 = INT64_MIN;
F->short_1559 = INT_MIN;
F->short_1559 = 0;
F->first_short_1560 = INT_MIN;
F->first_short_1560 = 0;
f_relation_343(F->up, &F->l_1554);
while (((f_at_kw_311(F->up, rt_g_lit("AND", 3)) || f_at_kw_311(F->up, rt_g_lit("OR", 2))) || f_at_kw_311(F->up, rt_g_lit("XOR", 3)))) {
F->op_1556 = (*(P110)rt_nil_check(({ A109 ix1562 = F->up->toks_112; ix1562.p[rt_index(G_NV(F->up->tpos_114), ix1562.lo, ix1562.hi) - ix1562.lo]; }))).s_;
F->line_1558 = f_cur_line_309(F->up);
f_skip_322(F->up);
F->short_1559 = 0;
if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1556)), rt_g_lit("AND", 3)) && f_at_kw_311(F->up, rt_g_lit("THEN", 4)))) {
f_skip_322(F->up);
F->short_1559 = 1;
} else if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1556)), rt_g_lit("OR", 2)) && f_at_kw_311(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_322(F->up);
F->short_1559 = 1;
}
if ((F->first_op_1557 == NULL)) {
F->first_op_1557 = F->op_1556;
F->first_short_1560 = G_NV(F->short_1559);
} else if (((!eq_rt_gstr((*(P140)rt_nil_check(F->first_op_1557)), (*(P140)rt_nil_check(F->op_1556)))) || (G_NV(F->first_short_1560) != G_NV(F->short_1559)))) {
f_fail_249(F->up, G_NV(F->line_1558), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_343(F->up, &F->r_1555);
F->l_1554 = f_binop_337(F->up, F->op_1556, F->l_1554, F->r_1555, G_NV(F->line_1558));
if (G_NV(F->short_1559)) {
(*(P174)rt_nil_check(F->l_1554)).ival_ = ((rt_int)1LL);
}
}
L_end_1561: ;
(*F->res_338) = F->l_1554;
goto ret_;
ret_:

  return;
}

static int f_is_rel_341(struct f_greenc_1fr *up_, rt_gstr s_340) {
  struct f_is_rel_341fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_340 = cp_rt_gstr(s_340);
F->result_ = (((((eq_rt_gstr(F->s_340, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_340, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_340, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_340, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_340, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_340, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_343(struct f_greenc_1fr *up_, P174 *res_342) {
  struct f_relation_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_342 = res_342;
F->l_1563 = NULL;
F->r_1564 = NULL;
F->lo_1565 = NULL;
F->hi_1566 = NULL;
F->t_1567 = NULL;
F->op_1568 = NULL;
F->line_1569 = INT64_MIN;
F->line_1569 = f_cur_line_309(F->up);
F->neg_1570 = INT_MIN;
F->neg_1570 = 0;
f_simple_expr_347(F->up, &F->l_1563);
if ((f_at_kind_315(F->up, ((rt_int)3LL)) && f_is_rel_341(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1572 = F->up->toks_112; ix1572.p[rt_index(G_NV(F->up->tpos_114), ix1572.lo, ix1572.hi) - ix1572.lo]; }))).s_))))) {
F->op_1568 = (*(P110)rt_nil_check(({ A109 ix1573 = F->up->toks_112; ix1573.p[rt_index(G_NV(F->up->tpos_114), ix1573.lo, ix1573.hi) - ix1573.lo]; }))).s_;
f_skip_322(F->up);
f_simple_expr_347(F->up, &F->r_1564);
F->l_1563 = f_binop_337(F->up, F->op_1568, F->l_1563, F->r_1564, G_NV(F->line_1569));
(*F->res_342) = F->l_1563;
goto ret_;
}
if (((f_at_kw_311(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_322(F->up);
F->neg_1570 = 1;
}
if (f_at_kw_311(F->up, rt_g_lit("IN", 2))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &F->lo_1565);
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &F->hi_1566);
F->t_1567 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1569));
(*(P174)rt_nil_check(F->t_1567)).a_ = F->lo_1565;
(*(P174)rt_nil_check(F->t_1567)).b_ = F->hi_1566;
} else if (((G_NV((*(P174)rt_nil_check(F->lo_1565)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->lo_1565)).kind_) == ((rt_int)9LL)))) {
F->t_1567 = f_nn_302(F->up, ((rt_int)80LL), G_NV(F->line_1569));
(*(P174)rt_nil_check(F->t_1567)).name_ = (*(P174)rt_nil_check(F->lo_1565)).name_;
if ((G_NV((*(P174)rt_nil_check(F->lo_1565)).kind_) == ((rt_int)9LL))) {
(*(P174)rt_nil_check(F->t_1567)).tag_ = f_mk_228(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->lo_1565)).a_));
}
if (f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) {
f_skip_322(F->up);
F->r_1564 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1569));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1564)).a_);
f_expect_op_326(F->up, rt_g_lit("..", 2));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1564)).b_);
(*(P174)rt_nil_check(F->t_1567)).a_ = F->r_1564;
(*(P174)rt_nil_check(F->t_1567)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_311(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_311(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->t_1567)).b_);
(*(P174)rt_nil_check(F->t_1567)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_321(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1568 = f_mk_228(F->up, rt_g_lit("IN", 2));
F->l_1563 = f_binop_337(F->up, F->op_1568, F->l_1563, F->t_1567, G_NV(F->line_1569));
if (G_NV(F->neg_1570)) {
F->t_1567 = f_nn_302(F->up, ((rt_int)6LL), G_NV(F->line_1569));
(*(P174)rt_nil_check(F->t_1567)).name_ = f_mk_228(F->up, rt_g_lit("NOT", 3));
(*(P174)rt_nil_check(F->t_1567)).a_ = F->l_1563;
(*F->res_342) = F->t_1567;
goto ret_;
}
}
(*F->res_342) = F->l_1563;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_345(struct f_greenc_1fr *up_, P174 e_344) {
  struct f_path_of_345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_344 = e_344;
if ((G_NV((*(P174)rt_nil_check(F->e_344)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_345(F->up, (*(P174)rt_nil_check(F->e_344)).a_), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_344)).name_)));
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_344)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_347(struct f_greenc_1fr *up_, P174 *res_346) {
  struct f_simple_expr_347fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_346 = res_346;
F->l_1574 = NULL;
F->r_1575 = NULL;
F->op_1576 = NULL;
F->line_1577 = INT64_MIN;
F->line_1577 = f_cur_line_309(F->up);
if (((f_at_op_313(F->up, rt_g_lit("+", 1)) || f_at_op_313(F->up, rt_g_lit("-", 1))) || f_at_kw_311(F->up, rt_g_lit("NOT", 3)))) {
F->op_1576 = (*(P110)rt_nil_check(({ A109 ix1578 = F->up->toks_112; ix1578.p[rt_index(G_NV(F->up->tpos_114), ix1578.lo, ix1578.hi) - ix1578.lo]; }))).s_;
f_skip_322(F->up);
f_term_349(F->up, &F->r_1575);
F->l_1574 = f_nn_302(F->up, ((rt_int)6LL), G_NV(F->line_1577));
(*(P174)rt_nil_check(F->l_1574)).name_ = F->op_1576;
(*(P174)rt_nil_check(F->l_1574)).a_ = F->r_1575;
} else {
f_term_349(F->up, &F->l_1574);
}
while (((f_at_op_313(F->up, rt_g_lit("+", 1)) || f_at_op_313(F->up, rt_g_lit("-", 1))) || f_at_op_313(F->up, rt_g_lit("&", 1)))) {
F->op_1576 = (*(P110)rt_nil_check(({ A109 ix1580 = F->up->toks_112; ix1580.p[rt_index(G_NV(F->up->tpos_114), ix1580.lo, ix1580.hi) - ix1580.lo]; }))).s_;
f_skip_322(F->up);
f_term_349(F->up, &F->r_1575);
F->l_1574 = f_binop_337(F->up, F->op_1576, F->l_1574, F->r_1575, G_NV(F->line_1577));
}
L_end_1579: ;
(*F->res_346) = F->l_1574;
goto ret_;
ret_:

  return;
}

static void f_term_349(struct f_greenc_1fr *up_, P174 *res_348) {
  struct f_term_349fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_348 = res_348;
F->l_1581 = NULL;
F->r_1582 = NULL;
F->op_1583 = NULL;
F->line_1584 = INT64_MIN;
F->line_1584 = f_cur_line_309(F->up);
f_factor_351(F->up, &F->l_1581);
while (((f_at_op_313(F->up, rt_g_lit("*", 1)) || f_at_op_313(F->up, rt_g_lit("/", 1))) || f_at_kw_311(F->up, rt_g_lit("MOD", 3)))) {
F->op_1583 = (*(P110)rt_nil_check(({ A109 ix1586 = F->up->toks_112; ix1586.p[rt_index(G_NV(F->up->tpos_114), ix1586.lo, ix1586.hi) - ix1586.lo]; }))).s_;
f_skip_322(F->up);
f_factor_351(F->up, &F->r_1582);
F->l_1581 = f_binop_337(F->up, F->op_1583, F->l_1581, F->r_1582, G_NV(F->line_1584));
}
L_end_1585: ;
(*F->res_348) = F->l_1581;
goto ret_;
ret_:

  return;
}

static void f_factor_351(struct f_greenc_1fr *up_, P174 *res_350) {
  struct f_factor_351fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_350 = res_350;
F->l_1587 = NULL;
F->r_1588 = NULL;
F->op_1589 = NULL;
F->line_1590 = INT64_MIN;
F->line_1590 = f_cur_line_309(F->up);
f_primary_353(F->up, &F->l_1587);
if (f_at_op_313(F->up, rt_g_lit("**", 2))) {
F->op_1589 = (*(P110)rt_nil_check(({ A109 ix1591 = F->up->toks_112; ix1591.p[rt_index(G_NV(F->up->tpos_114), ix1591.lo, ix1591.hi) - ix1591.lo]; }))).s_;
f_skip_322(F->up);
f_primary_353(F->up, &F->r_1588);
F->l_1587 = f_binop_337(F->up, F->op_1589, F->l_1587, F->r_1588, G_NV(F->line_1590));
}
(*F->res_350) = F->l_1587;
goto ret_;
ret_:

  return;
}

static void f_primary_353(struct f_greenc_1fr *up_, P174 *res_352) {
  struct f_primary_353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_352 = res_352;
F->x_1592 = NULL;
F->line_1593 = INT64_MIN;
F->line_1593 = f_cur_line_309(F->up);
if (f_at_kind_315(F->up, ((rt_int)4LL))) {
F->x_1592 = f_nn_302(F->up, ((rt_int)1LL), G_NV(F->line_1593));
(*(P174)rt_nil_check(F->x_1592)).ival_ = G_NV((*(P110)rt_nil_check(({ A109 ix1594 = F->up->toks_112; ix1594.p[rt_index(G_NV(F->up->tpos_114), ix1594.lo, ix1594.hi) - ix1594.lo]; }))).ival_);
(*(P174)rt_nil_check(F->x_1592)).name_ = (*(P110)rt_nil_check(({ A109 ix1595 = F->up->toks_112; ix1595.p[rt_index(G_NV(F->up->tpos_114), ix1595.lo, ix1595.hi) - ix1595.lo]; }))).s_;
f_skip_322(F->up);
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_kind_315(F->up, ((rt_int)5LL))) {
F->x_1592 = f_nn_302(F->up, ((rt_int)2LL), G_NV(F->line_1593));
(*(P174)rt_nil_check(F->x_1592)).name_ = (*(P110)rt_nil_check(({ A109 ix1596 = F->up->toks_112; ix1596.p[rt_index(G_NV(F->up->tpos_114), ix1596.lo, ix1596.hi) - ix1596.lo]; }))).s_;
f_skip_322(F->up);
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_kind_315(F->up, ((rt_int)6LL))) {
F->x_1592 = f_nn_302(F->up, ((rt_int)3LL), G_NV(F->line_1593));
(*(P174)rt_nil_check(F->x_1592)).name_ = (*(P110)rt_nil_check(({ A109 ix1597 = F->up->toks_112; ix1597.p[rt_index(G_NV(F->up->tpos_114), ix1597.lo, ix1597.hi) - ix1597.lo]; }))).s_;
f_skip_322(F->up);
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("NULL", 4))) {
f_skip_322(F->up);
F->x_1592 = f_nn_302(F->up, ((rt_int)4LL), G_NV(F->line_1593));
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("NEW", 3))) {
f_skip_322(F->up);
F->x_1592 = f_nn_302(F->up, ((rt_int)11LL), G_NV(F->line_1593));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1592)).name_);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_355(F->up, &(*(P174)rt_nil_check(F->x_1592)).a_);
}
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_355(F->up, &F->x_1592);
(*F->res_352) = F->x_1592;
goto ret_;
}
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_name_p_360(F->up, &F->x_1592);
(*F->res_352) = F->x_1592;
goto ret_;
}
f_perror_321(F->up, rt_g_lit("expected an expression", 22));
(*F->res_352) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_355(struct f_greenc_1fr *up_, P174 *res_354) {
  struct f_agg_or_paren_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_354 = res_354;
F->line_1598 = INT64_MIN;
F->line_1598 = f_cur_line_309(F->up);
F->items_1599 = NULL;
F->itail_1600 = NULL;
F->it_1601 = NULL;
F->first_1602 = NULL;
F->keys_1603 = NULL;
F->ktail_1604 = NULL;
F->lab_1605 = NULL;
F->x_1606 = NULL;
F->more_1607 = INT_MIN;
F->more_1607 = 1;
f_expect_op_326(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1607)) {
F->it_1601 = f_nn_302(F->up, ((rt_int)13LL), G_NV(F->line_1598));
if (f_at_kw_311(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_322(F->up);
f_expect_op_326(F->up, rt_g_lit("=>", 2));
F->lab_1605 = f_nn_302(F->up, ((rt_int)61LL), G_NV(F->line_1598));
(*(P174)rt_nil_check(F->lab_1605)).flag_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->it_1601)).a_ = F->lab_1605;
f_expr_339(F->up, &(*(P174)rt_nil_check(F->it_1601)).b_);
} else {
f_expr_339(F->up, &F->first_1602);
if (((f_at_op_313(F->up, rt_g_lit("..", 2)) || f_at_op_313(F->up, rt_g_lit("|", 1))) || f_at_op_313(F->up, rt_g_lit("=>", 2)))) {
F->keys_1603 = NULL;
F->ktail_1604 = NULL;
for (;;) {
F->lab_1605 = f_nn_302(F->up, ((rt_int)61LL), G_NV(F->line_1598));
(*(P174)rt_nil_check(F->lab_1605)).a_ = F->first_1602;
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->lab_1605)).b_);
}
f_append_306(F->up, &F->keys_1603, &F->ktail_1604, F->lab_1605);
if ((!f_at_op_313(F->up, rt_g_lit("|", 1)))) {
goto L_end_1609;
}
f_skip_322(F->up);
f_simple_expr_347(F->up, &F->first_1602);
}
L_end_1609: ;
f_expect_op_326(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->it_1601)).a_ = F->keys_1603;
f_expr_339(F->up, &(*(P174)rt_nil_check(F->it_1601)).b_);
} else {
(*(P174)rt_nil_check(F->it_1601)).b_ = F->first_1602;
}
}
f_append_306(F->up, &F->items_1599, &F->itail_1600, F->it_1601);
F->more_1607 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1607)) {
f_skip_322(F->up);
}
}
L_end_1608: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
if ((((*(P174)rt_nil_check(F->items_1599)).next_ == NULL) && ((*(P174)rt_nil_check(F->items_1599)).a_ == NULL))) {
F->x_1606 = f_nn_302(F->up, ((rt_int)15LL), G_NV(F->line_1598));
(*(P174)rt_nil_check(F->x_1606)).a_ = (*(P174)rt_nil_check(F->items_1599)).b_;
(*F->res_354) = F->x_1606;
goto ret_;
}
F->x_1606 = f_nn_302(F->up, ((rt_int)12LL), G_NV(F->line_1598));
(*(P174)rt_nil_check(F->x_1606)).a_ = F->items_1599;
(*F->res_354) = F->x_1606;
goto ret_;
ret_:

  return;
}

static int f_choice_token_357(struct f_greenc_1fr *up_, P110 t_356) {
  struct f_choice_token_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_356 = t_356;
if ((G_NV((*(P110)rt_nil_check(F->t_356)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_356)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_356)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P110)rt_nil_check(F->t_356)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_356)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_358(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1610 = INT64_MIN;
F->d_1610 = ((rt_int)0LL);
F->k_1611 = INT64_MIN;
F->k_1611 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1611)) > G_NV(F->up->ntoks_113))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1614 = NULL;
F->t_1614 = ({ A109 ix1615 = F->up->toks_112; ix1615.p[rt_index(rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1611)), ix1615.lo, ix1615.hi) - ix1615.lo]; });
if (((G_NV((*(P110)rt_nil_check(F->t_1614)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1614)).s_)), rt_g_lit("(", 1)))) {
F->d_1610 = rt_add(G_NV(F->d_1610), ((rt_int)1LL));
} else if (((G_NV((*(P110)rt_nil_check(F->t_1614)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1614)).s_)), rt_g_lit(")", 1)))) {
F->d_1610 = rt_sub(G_NV(F->d_1610), ((rt_int)1LL));
if ((G_NV(F->d_1610) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1610) == ((rt_int)1LL)) && f_choice_token_357(F->up, F->t_1614))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P110)rt_nil_check(F->t_1614)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1614)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1613: ;
F->k_1611 = rt_add(G_NV(F->k_1611), ((rt_int)1LL));
}
L_end_1612: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_360(struct f_greenc_1fr *up_, P174 *res_359) {
  struct f_name_p_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_359 = res_359;
F->p_1616 = NULL;
F->x_1617 = NULL;
F->args_1618 = NULL;
F->atail_1619 = NULL;
F->lo_1620 = NULL;
F->r_1621 = NULL;
F->line_1622 = INT64_MIN;
F->line_1622 = f_cur_line_309(F->up);
F->more_1623 = INT_MIN;
f_name_node_330(F->up, &F->p_1616);
for (;;) {
if ((f_at_op_313(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_358(F->up))) {
F->x_1617 = f_nn_302(F->up, ((rt_int)8LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->x_1617)).a_ = F->p_1616;
f_agg_or_paren_355(F->up, &(*(P174)rt_nil_check(F->x_1617)).b_);
(*(P174)rt_nil_check(F->x_1617)).flag_ = ((rt_int)9LL);
F->p_1616 = F->x_1617;
} else if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
F->args_1618 = NULL;
F->atail_1619 = NULL;
if ((!f_at_op_313(F->up, rt_g_lit(")", 1)))) {
F->more_1623 = 1;
while (G_NV(F->more_1623)) {
{
F->formal_1627 = NULL;
F->mark_1628 = INT64_MIN;
F->mark_1628 = ((rt_int)0LL);
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1627 = (*(P110)rt_nil_check(({ A109 ix1629 = F->up->toks_112; ix1629.p[rt_index(G_NV(F->up->tpos_114), ix1629.lo, ix1629.hi) - ix1629.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1628 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1628 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1628 = ((rt_int)2LL);
} else {
F->mark_1628 = ((rt_int)4LL);
}
f_skip_322(F->up);
f_skip_322(F->up);
}
f_expr_339(F->up, &F->lo_1620);
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
F->r_1621 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->r_1621)).a_ = F->lo_1620;
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1621)).b_);
F->lo_1620 = F->r_1621;
}
(*(P174)rt_nil_check(F->lo_1620)).formal_ = F->formal_1627;
(*(P174)rt_nil_check(F->lo_1620)).flag_ = G_NV(F->mark_1628);
f_append_306(F->up, &F->args_1618, &F->atail_1619, F->lo_1620);

}
L_end_1626: ;
F->more_1623 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1623)) {
f_skip_322(F->up);
}
}
L_end_1625: ;
}
f_expect_op_326(F->up, rt_g_lit(")", 1));
F->x_1617 = f_nn_302(F->up, ((rt_int)8LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->x_1617)).a_ = F->p_1616;
(*(P174)rt_nil_check(F->x_1617)).b_ = F->args_1618;
F->p_1616 = F->x_1617;
} else if (f_at_op_313(F->up, rt_g_lit(".", 1))) {
f_skip_322(F->up);
F->x_1617 = f_nn_302(F->up, ((rt_int)9LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->x_1617)).a_ = F->p_1616;
if (f_at_kw_311(F->up, rt_g_lit("ALL", 3))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1617)).name_ = f_mk_228(F->up, rt_g_lit("ALL", 3));
} else {
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1617)).name_);
}
F->p_1616 = F->x_1617;
} else if (f_at_op_313(F->up, rt_g_lit("'", 1))) {
f_skip_322(F->up);
F->x_1617 = f_nn_302(F->up, ((rt_int)10LL), G_NV(F->line_1622));
(*(P174)rt_nil_check(F->x_1617)).a_ = F->p_1616;
(*(P174)rt_nil_check(F->x_1617)).name_ = (*(P110)rt_nil_check(({ A109 ix1630 = F->up->toks_112; ix1630.p[rt_index(G_NV(F->up->tpos_114), ix1630.lo, ix1630.hi) - ix1630.lo]; }))).s_;
f_skip_322(F->up);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1617)).b_);
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
F->p_1616 = F->x_1617;
} else {
(*F->res_359) = F->p_1616;
goto ret_;
}
}
L_end_1624: ;
ret_:

  return;
}

static void f_component_list_362(struct f_greenc_1fr *up_, P174 *res_361) {
  struct f_component_list_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_361 = res_361;
F->comps_1631 = NULL;
F->ctail_1632 = NULL;
F->names_1633 = NULL;
F->st_1634 = NULL;
F->def_1635 = NULL;
F->cm_1636 = NULL;
F->v_1637 = NULL;
F->arm_1638 = NULL;
F->atail_1639 = NULL;
F->labs_1640 = NULL;
F->ltail_1641 = NULL;
F->l_1642 = NULL;
F->is_c_1643 = INT_MIN;
for (;;) {
if (f_at_kw_311(F->up, rt_g_lit("NULL", 4))) {
f_skip_322(F->up);
f_expect_op_326(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_311(F->up, rt_g_lit("CASE", 4))) {
F->v_1637 = f_nn_302(F->up, ((rt_int)23LL), f_cur_line_309(F->up));
f_skip_322(F->up);
f_name_node_330(F->up, &(*(P174)rt_nil_check(F->v_1637)).a_);
f_expect_kw_324(F->up, rt_g_lit("OF", 2));
F->atail_1639 = NULL;
while (f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) {
f_skip_322(F->up);
F->arm_1638 = f_nn_302(F->up, ((rt_int)60LL), f_cur_line_309(F->up));
F->labs_1640 = NULL;
F->ltail_1641 = NULL;
for (;;) {
if (f_at_kw_311(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->arm_1638)).flag_ = ((rt_int)1LL);
} else {
F->l_1642 = f_nn_302(F->up, ((rt_int)61LL), f_cur_line_309(F->up));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->l_1642)).a_);
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->l_1642)).b_);
}
f_append_306(F->up, &F->labs_1640, &F->ltail_1641, F->l_1642);
}
if ((!f_at_op_313(F->up, rt_g_lit("|", 1)))) {
goto L_end_1646;
}
f_skip_322(F->up);
}
L_end_1646: ;
f_expect_op_326(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->arm_1638)).a_ = F->labs_1640;
f_component_list_362(F->up, &(*(P174)rt_nil_check(F->arm_1638)).b_);
f_append_306(F->up, &(*(P174)rt_nil_check(F->v_1637)).b_, &F->atail_1639, F->arm_1638);
}
L_end_1645: ;
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("CASE", 4));
f_expect_op_326(F->up, rt_g_lit(";", 1));
f_append_306(F->up, &F->comps_1631, &F->ctail_1632, F->v_1637);
} else if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_id_list_332(F->up, &F->names_1633);
f_expect_op_326(F->up, rt_g_lit(":", 1));
F->is_c_1643 = 0;
if (f_at_kw_311(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_322(F->up);
F->is_c_1643 = 1;
}
f_type_spec_368(F->up, &F->st_1634);
F->def_1635 = NULL;
if (f_at_op_313(F->up, rt_g_lit(":=", 2))) {
f_skip_322(F->up);
f_expr_339(F->up, &F->def_1635);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
while ((F->names_1633 != NULL)) {
F->cm_1636 = f_nn_302(F->up, ((rt_int)63LL), G_NV((*(P174)rt_nil_check(F->names_1633)).line_));
(*(P174)rt_nil_check(F->cm_1636)).name_ = (*(P174)rt_nil_check(F->names_1633)).name_;
(*(P174)rt_nil_check(F->cm_1636)).a_ = F->st_1634;
(*(P174)rt_nil_check(F->cm_1636)).b_ = F->def_1635;
if (G_NV(F->is_c_1643)) {
(*(P174)rt_nil_check(F->cm_1636)).flag_ = ((rt_int)1LL);
}
f_append_306(F->up, &F->comps_1631, &F->ctail_1632, F->cm_1636);
F->names_1633 = (*(P174)rt_nil_check(F->names_1633)).next_;
}
L_end_1647: ;
} else {
(*F->res_361) = F->comps_1631;
goto ret_;
}
}
L_end_1644: ;
ret_:

  return;
}

static void f_discrete_range_p_364(struct f_greenc_1fr *up_, P174 *res_363) {
  struct f_discrete_range_p_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_363 = res_363;
F->lo_1648 = NULL;
F->r_1649 = NULL;
F->line_1650 = INT64_MIN;
F->line_1650 = f_cur_line_309(F->up);
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_366(F->up, &(*F->res_363));
goto ret_;
}
if ((((((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_317(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_317(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_366(F->up, &(*F->res_363));
goto ret_;
}
f_simple_expr_347(F->up, &F->lo_1648);
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
F->r_1649 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1650));
(*(P174)rt_nil_check(F->r_1649)).a_ = F->lo_1648;
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1649)).b_);
(*F->res_363) = F->r_1649;
goto ret_;
}
(*F->res_363) = F->lo_1648;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_366(struct f_greenc_1fr *up_, P174 *res_365) {
  struct f_subtype_ind_366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_365 = res_365;
F->f_1651 = NULL;
F->x_1652 = NULL;
F->r_1653 = NULL;
F->args_1654 = NULL;
F->atail_1655 = NULL;
F->lo_1656 = NULL;
F->line_1657 = INT64_MIN;
F->line_1657 = f_cur_line_309(F->up);
F->more_1658 = INT_MIN;
F->more_1658 = 1;
F->x_1652 = f_nn_302(F->up, ((rt_int)80LL), G_NV(F->line_1657));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1652)).name_);
while (f_at_op_313(F->up, rt_g_lit(".", 1))) {
f_skip_322(F->up);
if (((*(P174)rt_nil_check(F->x_1652)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->x_1652)).tag_ = (*(P174)rt_nil_check(F->x_1652)).name_;
} else {
(*(P174)rt_nil_check(F->x_1652)).tag_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1652)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1652)).name_))));
}
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1652)).name_);
}
L_end_1659: ;
if (f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) {
f_skip_322(F->up);
F->r_1653 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1657));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1653)).a_);
f_expect_op_326(F->up, rt_g_lit("..", 2));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1653)).b_);
(*(P174)rt_nil_check(F->x_1652)).a_ = F->r_1653;
(*(P174)rt_nil_check(F->x_1652)).flag_ = ((rt_int)1LL);
} else if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
while (G_NV(F->more_1658)) {
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_328(F->up, &F->f_1651);
f_skip_322(F->up);
f_expr_339(F->up, &F->lo_1656);
(*(P174)rt_nil_check(F->lo_1656)).formal_ = F->f_1651;
} else {
f_discrete_range_p_364(F->up, &F->lo_1656);
}
f_append_306(F->up, &F->args_1654, &F->atail_1655, F->lo_1656);
F->more_1658 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1658)) {
f_skip_322(F->up);
}
}
L_end_1660: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1652)).a_ = F->args_1654;
(*(P174)rt_nil_check(F->x_1652)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_311(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_311(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1652)).b_);
(*(P174)rt_nil_check(F->x_1652)).flag_ = ((rt_int)3LL);
if (f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) {
f_skip_322(F->up);
F->r_1653 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1657));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1653)).a_);
f_expect_op_326(F->up, rt_g_lit("..", 2));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1653)).b_);
(*(P174)rt_nil_check(F->x_1652)).a_ = F->r_1653;
}
}
(*F->res_365) = F->x_1652;
goto ret_;
ret_:

  return;
}

static void f_type_spec_368(struct f_greenc_1fr *up_, P174 *res_367) {
  struct f_type_spec_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_367 = res_367;
F->x_1661 = NULL;
if ((((((((f_at_op_313(F->up, rt_g_lit("(", 1)) || f_at_kw_311(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_311(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_311(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_311(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_311(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_311(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_370(F->up, &F->x_1661);
} else {
f_subtype_ind_366(F->up, &F->x_1661);
}
(*F->res_367) = F->x_1661;
goto ret_;
ret_:

  return;
}

static void f_type_def_370(struct f_greenc_1fr *up_, P174 *res_369) {
  struct f_type_def_370fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_369 = res_369;
F->x_1662 = NULL;
F->lits_1663 = NULL;
F->ltail_1664 = NULL;
F->l_1665 = NULL;
F->idx_1666 = NULL;
F->itail_1667 = NULL;
F->r_1668 = NULL;
F->comps_1669 = NULL;
F->ctail_1670 = NULL;
F->names_1671 = NULL;
F->st_1672 = NULL;
F->def_1673 = NULL;
F->cm_1674 = NULL;
F->line_1675 = INT64_MIN;
F->line_1675 = f_cur_line_309(F->up);
F->more_1676 = INT_MIN;
F->more_1676 = 1;
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)70LL), G_NV(F->line_1675));
while (G_NV(F->more_1676)) {
if (f_at_kind_315(F->up, ((rt_int)6LL))) {
F->l_1665 = f_nn_302(F->up, ((rt_int)3LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->l_1665)).name_ = (*(P110)rt_nil_check(({ A109 ix1678 = F->up->toks_112; ix1678.p[rt_index(G_NV(F->up->tpos_114), ix1678.lo, ix1678.hi) - ix1678.lo]; }))).s_;
f_skip_322(F->up);
} else {
f_name_node_330(F->up, &F->l_1665);
}
f_append_306(F->up, &F->lits_1663, &F->ltail_1664, F->l_1665);
F->more_1676 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1676)) {
f_skip_322(F->up);
}
}
L_end_1677: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1662)).a_ = F->lits_1663;
(*F->res_369) = F->x_1662;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)71LL), G_NV(F->line_1675));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1662)).a_);
f_expect_op_326(F->up, rt_g_lit("..", 2));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1662)).b_);
(*F->res_369) = F->x_1662;
goto ret_;
}
if ((f_at_kw_311(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_311(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1662 = f_nn_302(F->up, ((rt_int)72LL), G_NV(F->line_1675));
(*(P174)rt_nil_check(F->x_1662)).flag_ = ((rt_int)1LL);
if (f_at_kw_311(F->up, rt_g_lit("DELTA", 5))) {
(*(P174)rt_nil_check(F->x_1662)).flag_ = ((rt_int)2LL);
}
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->x_1662)).a_);
if (f_at_kw_311(F->up, rt_g_lit("RANGE", 5))) {
f_skip_322(F->up);
F->r_1668 = f_nn_302(F->up, ((rt_int)14LL), G_NV(F->line_1675));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1668)).a_);
f_expect_op_326(F->up, rt_g_lit("..", 2));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->r_1668)).b_);
(*(P174)rt_nil_check(F->x_1662)).b_ = F->r_1668;
}
(*F->res_369) = F->x_1662;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)73LL), G_NV(F->line_1675));
f_expect_op_326(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1676)) {
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1665 = f_nn_302(F->up, ((rt_int)80LL), G_NV(F->line_1675));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->l_1665)).name_);
(*(P174)rt_nil_check(F->x_1662)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_364(F->up, &F->l_1665);
if (((G_NV((*(P174)rt_nil_check(F->l_1665)).kind_) != ((rt_int)14LL)) && (G_NV((*(P174)rt_nil_check(F->l_1665)).kind_) != ((rt_int)80LL)))) {
f_perror_321(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_306(F->up, &F->idx_1666, &F->itail_1667, F->l_1665);
F->more_1676 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1676)) {
f_skip_322(F->up);
}
}
L_end_1679: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
f_expect_kw_324(F->up, rt_g_lit("OF", 2));
(*(P174)rt_nil_check(F->x_1662)).a_ = F->idx_1666;
f_type_spec_368(F->up, &(*(P174)rt_nil_check(F->x_1662)).b_);
(*F->res_369) = F->x_1662;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("RECORD", 6))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)74LL), G_NV(F->line_1675));
f_component_list_362(F->up, &(*(P174)rt_nil_check(F->x_1662)).a_);
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("RECORD", 6));
(*F->res_369) = F->x_1662;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)75LL), G_NV(F->line_1675));
f_type_spec_368(F->up, &(*(P174)rt_nil_check(F->x_1662)).a_);
(*F->res_369) = F->x_1662;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("NEW", 3))) {
f_skip_322(F->up);
F->x_1662 = f_nn_302(F->up, ((rt_int)76LL), G_NV(F->line_1675));
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->x_1662)).a_);
(*F->res_369) = F->x_1662;
goto ret_;
}
f_perror_321(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_369) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_372(struct f_greenc_1fr *up_, P174 *res_371) {
  struct f_pragma_p_372fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_371 = res_371;
F->x_1680 = NULL;
F->a_1681 = NULL;
F->head_1682 = NULL;
F->tail_1683 = NULL;
F->x_1680 = f_nn_302(F->up, ((rt_int)56LL), f_cur_line_309(F->up));
f_expect_kw_324(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1680)).name_);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
for (;;) {
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_name_node_330(F->up, &F->a_1681);
} else if (((f_at_kind_315(F->up, ((rt_int)6LL)) || f_at_kind_315(F->up, ((rt_int)4LL))) || f_at_kind_315(F->up, ((rt_int)5LL)))) {
f_primary_353(F->up, &F->a_1681);
} else {
f_perror_321(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_306(F->up, &F->head_1682, &F->tail_1683, F->a_1681);
if ((!f_at_op_313(F->up, rt_g_lit(",", 1)))) {
goto L_end_1684;
}
f_skip_322(F->up);
}
L_end_1684: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1680)).a_ = F->head_1682;
f_check_pragma_374(F->up, F->x_1680);
(*F->res_371) = F->x_1680;
ret_:

  return;
}

static void f_check_pragma_374(struct f_greenc_1fr *up_, P174 x_373) {
  struct f_check_pragma_374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_373 = x_373;
F->p_1685 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_373)).name_)));
F->n_1686 = INT64_MIN;
F->n_1686 = f_list_len_308(F->up, (*(P174)rt_nil_check(F->x_373)).a_);
F->a_1687 = NULL;
F->a_1687 = (*(P174)rt_nil_check(F->x_373)).a_;
if ((eq_rt_gstr(F->p_1685, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1685, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1686) != ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1685), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1685, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1685, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1685, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1685, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1685, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1686) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1687)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1685), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1685, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1685, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1685, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1687)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1685, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_226 = (*(P174)rt_nil_check(F->a_1687)).name_;
} else if (eq_rt_gstr(F->p_1685, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_223 = (*(P174)rt_nil_check(F->a_1687)).name_;
}
} else if ((eq_rt_gstr(F->p_1685, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1685, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1686) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1687)).kind_) != ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1685), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1685, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_224 = G_NV((*(P174)rt_nil_check(F->a_1687)).ival_);
} else {
F->up->conf_memory_size_225 = G_NV((*(P174)rt_nil_check(F->a_1687)).ival_);
}
} else if ((eq_rt_gstr(F->p_1685, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1685, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1686) == ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1685), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1687 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->a_1687)).kind_) != ((rt_int)5LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1685), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1687 = (*(P174)rt_nil_check(F->a_1687)).next_;
}
L_end_1688: ;
} else if (eq_rt_gstr(F->p_1685, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1686) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1687)).kind_) != ((rt_int)3LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->x_373)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_376(struct f_greenc_1fr *up_, P140 *res_375) {
  struct f_visibility_p_376fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_375 = res_375;
F->names_1689 = NULL;
F->v_1690 = NULL;
F->v_1690 = f_mk_228(F->up, rt_g_lit(",", 1));
f_expect_kw_324(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
f_id_list_332(F->up, &F->names_1689);
f_expect_op_326(F->up, rt_g_lit(")", 1));
while ((F->names_1689 != NULL)) {
F->v_1690 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_1690)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->names_1689)).name_))), one_rt_gstr(44)));
F->names_1689 = (*(P174)rt_nil_check(F->names_1689)).next_;
}
L_end_1691: ;
}
(*F->res_375) = F->v_1690;
ret_:

  return;
}

static void f_unit_p_378(struct f_greenc_1fr *up_, P174 *res_377) {
  struct f_unit_p_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_377 = res_377;
F->v_1692 = NULL;
F->x_1693 = NULL;
if (f_at_kw_311(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_376(F->up, &F->v_1692);
}
if ((f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_311(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_391(F->up, &F->x_1693);
} else if (f_at_kw_311(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_397(F->up, &F->x_1693);
} else if (f_at_kw_311(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1106(F->up, &F->x_1693);
} else if (f_at_kw_311(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1250(F->up, &F->x_1693);
} else {
f_perror_321(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1693 != NULL)) {
(*(P174)rt_nil_check(F->x_1693)).formal_ = F->v_1692;
}
(*F->res_377) = F->x_1693;
ret_:

  return;
}

static void f_skip_representation_379(struct f_greenc_1fr *up_) {
  struct f_skip_representation_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_311(F->up, rt_g_lit("USE", 3)))) {
f_skip_322(F->up);
}
L_end_1694: ;
f_skip_322(F->up);
if (f_at_kw_311(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_311(F->up, rt_g_lit("END", 3)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_322(F->up);
}
L_end_1695: ;
f_skip_322(F->up);
f_skip_322(F->up);
}
while ((!f_at_op_313(F->up, rt_g_lit(";", 1)))) {
f_skip_322(F->up);
}
L_end_1696: ;
f_skip_322(F->up);
ret_:

  return;
}

static void f_decl_part_381(struct f_greenc_1fr *up_, P174 *res_380) {
  struct f_decl_part_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_380 = res_380;
F->head_1697 = NULL;
F->tail_1698 = NULL;
F->x_1699 = NULL;
F->names_1700 = NULL;
for (;;) {
if (f_at_kw_311(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_372(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("USE", 3))) {
f_skip_322(F->up);
F->x_1699 = f_nn_302(F->up, ((rt_int)55LL), f_cur_line_309(F->up));
f_id_list_332(F->up, &(*(P174)rt_nil_check(F->x_1699)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (((f_at_kw_311(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_322(F->up);
f_type_decl_385(F->up, &F->x_1699);
if (((F->x_1699 == NULL) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1699)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_321(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P174)rt_nil_check(F->x_1699)).flag_ = ((rt_int)9LL);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_378(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_379(F->up);
} else if ((f_at_kw_311(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_311(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_385(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if ((f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_311(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_391(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_397(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1106(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1250(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (f_at_kw_311(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1108(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_383(F->up, &F->x_1699);
f_append_306(F->up, &F->head_1697, &F->tail_1698, F->x_1699);
} else {
(*F->res_380) = F->head_1697;
goto ret_;
}
}
L_end_1701: ;
ret_:

  return;
}

static void f_object_decl_383(struct f_greenc_1fr *up_, P174 *res_382) {
  struct f_object_decl_383fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_382 = res_382;
F->head_1702 = NULL;
F->tail_1703 = NULL;
F->names_1704 = NULL;
F->st_1705 = NULL;
F->init_1706 = NULL;
F->x_1707 = NULL;
F->line_1708 = INT64_MIN;
F->line_1708 = f_cur_line_309(F->up);
F->is_const_1709 = INT_MIN;
F->is_const_1709 = 0;
f_id_list_332(F->up, &F->names_1704);
f_expect_op_326(F->up, rt_g_lit(":", 1));
if (f_at_kw_311(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_322(F->up);
if (f_at_kw_311(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_322(F->up);
F->x_1707 = f_nn_302(F->up, ((rt_int)46LL), G_NV(F->line_1708));
(*(P174)rt_nil_check(F->x_1707)).name_ = (*(P174)rt_nil_check(F->names_1704)).name_;
f_name_p_360(F->up, &(*(P174)rt_nil_check(F->x_1707)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_382) = F->x_1707;
goto ret_;
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
while ((F->names_1704 != NULL)) {
F->x_1707 = f_nn_302(F->up, ((rt_int)46LL), G_NV(F->line_1708));
(*(P174)rt_nil_check(F->x_1707)).name_ = (*(P174)rt_nil_check(F->names_1704)).name_;
f_append_306(F->up, &F->head_1702, &F->tail_1703, F->x_1707);
F->names_1704 = (*(P174)rt_nil_check(F->names_1704)).next_;
}
L_end_1710: ;
(*F->res_382) = F->head_1702;
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_322(F->up);
F->is_const_1709 = 1;
}
f_type_spec_368(F->up, &F->st_1705);
if ((f_at_kw_311(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1709)))) {
f_skip_322(F->up);
F->x_1707 = f_nn_302(F->up, ((rt_int)40LL), G_NV(F->line_1708));
(*(P174)rt_nil_check(F->x_1707)).name_ = (*(P174)rt_nil_check(F->names_1704)).name_;
(*(P174)rt_nil_check(F->x_1707)).a_ = F->st_1705;
(*(P174)rt_nil_check(F->x_1707)).flag_ = ((rt_int)2LL);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1707)).b_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_382) = F->x_1707;
goto ret_;
}
if (f_at_op_313(F->up, rt_g_lit(":=", 2))) {
f_skip_322(F->up);
f_expr_339(F->up, &F->init_1706);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
while ((F->names_1704 != NULL)) {
if (G_NV(F->is_const_1709)) {
F->x_1707 = f_nn_302(F->up, ((rt_int)41LL), G_NV(F->line_1708));
} else {
F->x_1707 = f_nn_302(F->up, ((rt_int)40LL), G_NV(F->line_1708));
}
(*(P174)rt_nil_check(F->x_1707)).name_ = (*(P174)rt_nil_check(F->names_1704)).name_;
(*(P174)rt_nil_check(F->x_1707)).a_ = F->st_1705;
(*(P174)rt_nil_check(F->x_1707)).b_ = F->init_1706;
f_append_306(F->up, &F->head_1702, &F->tail_1703, F->x_1707);
F->names_1704 = (*(P174)rt_nil_check(F->names_1704)).next_;
}
L_end_1711: ;
(*F->res_382) = F->head_1702;
goto ret_;
ret_:

  return;
}

static void f_type_decl_385(struct f_greenc_1fr *up_, P174 *res_384) {
  struct f_type_decl_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_384 = res_384;
F->x_1712 = NULL;
F->line_1713 = INT64_MIN;
F->line_1713 = f_cur_line_309(F->up);
if (f_at_kw_311(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_322(F->up);
F->x_1712 = f_nn_302(F->up, ((rt_int)43LL), G_NV(F->line_1713));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1712)).name_);
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->x_1712)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_384) = F->x_1712;
goto ret_;
}
f_expect_kw_324(F->up, rt_g_lit("TYPE", 4));
F->x_1712 = f_nn_302(F->up, ((rt_int)42LL), G_NV(F->line_1713));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1712)).name_);
if (f_at_op_313(F->up, rt_g_lit(";", 1))) {
f_skip_322(F->up);
(*F->res_384) = NULL;
goto ret_;
}
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
if (f_at_kw_311(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1712)).a_ = f_nn_302(F->up, ((rt_int)77LL), G_NV(F->line_1713));
} else {
f_type_def_370(F->up, &(*(P174)rt_nil_check(F->x_1712)).a_);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_384) = F->x_1712;
goto ret_;
ret_:

  return;
}

static void f_formal_part_387(struct f_greenc_1fr *up_, P174 *res_386) {
  struct f_formal_part_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_386 = res_386;
F->head_1714 = NULL;
F->tail_1715 = NULL;
F->names_1716 = NULL;
F->st_1717 = NULL;
F->def_1718 = NULL;
F->p_1719 = NULL;
F->mode_1720 = INT64_MIN;
F->more_1721 = INT_MIN;
F->more_1721 = 1;
f_expect_op_326(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1721)) {
f_id_list_332(F->up, &F->names_1716);
f_expect_op_326(F->up, rt_g_lit(":", 1));
F->mode_1720 = ((rt_int)1LL);
if (f_at_kw_311(F->up, rt_g_lit("IN", 2))) {
f_skip_322(F->up);
if (f_at_kw_311(F->up, rt_g_lit("OUT", 3))) {
f_skip_322(F->up);
F->mode_1720 = ((rt_int)2LL);
}
} else if (f_at_kw_311(F->up, rt_g_lit("OUT", 3))) {
f_skip_322(F->up);
F->mode_1720 = ((rt_int)3LL);
}
f_subtype_ind_366(F->up, &F->st_1717);
F->def_1718 = NULL;
if (f_at_op_313(F->up, rt_g_lit(":=", 2))) {
f_skip_322(F->up);
f_expr_339(F->up, &F->def_1718);
}
while ((F->names_1716 != NULL)) {
F->p_1719 = f_nn_302(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_1716)).line_));
(*(P174)rt_nil_check(F->p_1719)).name_ = (*(P174)rt_nil_check(F->names_1716)).name_;
(*(P174)rt_nil_check(F->p_1719)).ival_ = G_NV(F->mode_1720);
(*(P174)rt_nil_check(F->p_1719)).a_ = F->st_1717;
(*(P174)rt_nil_check(F->p_1719)).b_ = F->def_1718;
f_append_306(F->up, &F->head_1714, &F->tail_1715, F->p_1719);
F->names_1716 = (*(P174)rt_nil_check(F->names_1716)).next_;
}
L_end_1723: ;
F->more_1721 = f_at_op_313(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1721)) {
f_skip_322(F->up);
}
}
L_end_1722: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
(*F->res_386) = F->head_1714;
goto ret_;
ret_:

  return;
}

static void f_designator_389(struct f_greenc_1fr *up_, P140 *res_388) {
  struct f_designator_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_388 = res_388;
if (f_at_kind_315(F->up, ((rt_int)6LL))) {
f_skip_322(F->up);
(*F->res_388) = f_mk_228(F->up, f_upper_s_241(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1727 = F->up->toks_112; ix1727.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1727.lo, ix1727.hi) - ix1727.lo]; }))).s_))));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->res_388))), rt_g_lit("/=", 2))) {
f_perror_321(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_243(F->up, (*(P140)rt_nil_check((*F->res_388)))))) {
f_perror_321(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->res_388))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_328(F->up, &(*F->res_388));
goto ret_;
ret_:

  return;
}

static void f_subprogram_391(struct f_greenc_1fr *up_, P174 *res_390) {
  struct f_subprogram_391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_390 = res_390;
F->x_1728 = NULL;
F->line_1729 = INT64_MIN;
F->line_1729 = f_cur_line_309(F->up);
F->is_proc_1730 = INT_MIN;
F->is_proc_1730 = f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_322(F->up);
if (G_NV(F->is_proc_1730)) {
F->x_1728 = f_nn_302(F->up, ((rt_int)44LL), G_NV(F->line_1729));
} else {
F->x_1728 = f_nn_302(F->up, ((rt_int)45LL), G_NV(F->line_1729));
}
f_designator_389(F->up, &(*(P174)rt_nil_check(F->x_1728)).name_);
if (((f_at_kw_311(F->up, rt_g_lit("IS", 2)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1253(F->up, F->x_1728, &(*F->res_390));
goto ret_;
}
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_formal_part_387(F->up, &(*(P174)rt_nil_check(F->x_1728)).a_);
}
if (f_at_kw_311(F->up, rt_g_lit("RETURN", 6))) {
f_skip_322(F->up);
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->x_1728)).b_);
if (G_NV(F->is_proc_1730)) {
(*(P174)rt_nil_check(F->x_1728)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1730))) {
f_perror_321(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_311(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1728)).ival_ = ((rt_int)2LL);
f_name_p_360(F->up, &(*(P174)rt_nil_check(F->x_1728)).c_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_390) = F->x_1728;
goto ret_;
}
if (f_at_op_313(F->up, rt_g_lit(";", 1))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1728)).ival_ = ((rt_int)1LL);
(*F->res_390) = F->x_1728;
goto ret_;
}
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
if (f_at_kw_311(F->up, rt_g_lit("SEPARATE", 8))) {
f_perror_321(F->up, rt_g_lit("separate bodies are not handled", 31));
}
f_body_part_393(F->up, F->x_1728);
if ((f_at_kind_315(F->up, ((rt_int)1LL)) || f_at_kind_315(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1731 = F->up->toks_112; ix1731.p[rt_index(G_NV(F->up->tpos_114), ix1731.lo, ix1731.hi) - ix1731.lo]; }))).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1728)).name_))))) {
f_perror_321(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1728)).name_))));
}
f_skip_322(F->up);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_390) = F->x_1728;
goto ret_;
ret_:

  return;
}

static void f_body_part_393(struct f_greenc_1fr *up_, P174 x_392) {
  struct f_body_part_393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_392 = x_392;
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_392)).c_);
if (f_at_kw_311(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_322(F->up);
F->up->saw_interface_207 = 0;
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_392)).d_);
if ((G_NV(F->up->saw_interface_207) && ((*(P174)rt_nil_check(F->x_392)).d_ == NULL))) {
(*(P174)rt_nil_check(F->x_392)).tag_ = f_mk_228(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_207 = 0;
}
if (f_at_kw_311(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_395(F->up, &(*(P174)rt_nil_check(F->x_392)).e_);
}
f_expect_kw_324(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_395(struct f_greenc_1fr *up_, P174 *res_394) {
  struct f_parse_handlers_395fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_394 = res_394;
F->head_1732 = NULL;
F->tail_1733 = NULL;
F->h_1734 = NULL;
F->names_1735 = NULL;
F->ntail_1736 = NULL;
F->n_1737 = NULL;
f_expect_kw_324(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) {
f_skip_322(F->up);
F->h_1734 = f_nn_302(F->up, ((rt_int)62LL), f_cur_line_309(F->up));
F->names_1735 = NULL;
F->ntail_1736 = NULL;
for (;;) {
if (f_at_kw_311(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_322(F->up);
F->n_1737 = f_nn_302(F->up, ((rt_int)5LL), f_cur_line_309(F->up));
(*(P174)rt_nil_check(F->n_1737)).name_ = f_mk_228(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_330(F->up, &F->n_1737);
while (f_at_op_313(F->up, rt_g_lit(".", 1))) {
f_skip_322(F->up);
if (((*(P174)rt_nil_check(F->n_1737)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->n_1737)).tag_ = (*(P174)rt_nil_check(F->n_1737)).name_;
} else {
(*(P174)rt_nil_check(F->n_1737)).tag_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1737)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1737)).name_))));
}
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->n_1737)).name_);
}
L_end_1740: ;
}
f_append_306(F->up, &F->names_1735, &F->ntail_1736, F->n_1737);
if ((!f_at_op_313(F->up, rt_g_lit("|", 1)))) {
goto L_end_1739;
}
f_skip_322(F->up);
}
L_end_1739: ;
f_expect_op_326(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->h_1734)).a_ = F->names_1735;
f_statements_400(F->up, &(*(P174)rt_nil_check(F->h_1734)).b_);
f_append_306(F->up, &F->head_1732, &F->tail_1733, F->h_1734);
}
L_end_1738: ;
(*F->res_394) = F->head_1732;
goto ret_;
ret_:

  return;
}

static void f_package_p_397(struct f_greenc_1fr *up_, P174 *res_396) {
  struct f_package_p_397fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_396 = res_396;
F->x_1741 = NULL;
F->line_1742 = INT64_MIN;
F->line_1742 = f_cur_line_309(F->up);
f_expect_kw_324(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_311(F->up, rt_g_lit("BODY", 4))) {
f_skip_322(F->up);
F->x_1741 = f_nn_302(F->up, ((rt_int)49LL), G_NV(F->line_1742));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1741)).name_);
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
f_body_part_393(F->up, F->x_1741);
} else {
F->x_1741 = f_nn_302(F->up, ((rt_int)48LL), G_NV(F->line_1742));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1741)).name_);
if (((f_at_kw_311(F->up, rt_g_lit("IS", 2)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1253(F->up, F->x_1741, &(*F->res_396));
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1741)).flag_ = ((rt_int)3LL);
f_name_p_360(F->up, &(*(P174)rt_nil_check(F->x_1741)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_396) = F->x_1741;
goto ret_;
}
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_1741)).c_);
if (f_at_kw_311(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_322(F->up);
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_1741)).d_);
}
f_expect_kw_324(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_skip_322(F->up);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_396) = F->x_1741;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_398(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_311(F->up, rt_g_lit("END", 3)) || f_at_kw_311(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_311(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_311(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_311(F->up, rt_g_lit("OR", 2))) || f_at_kind_315(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_400(struct f_greenc_1fr *up_, P174 *res_399) {
  struct f_statements_400fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_399 = res_399;
F->head_1743 = NULL;
F->tail_1744 = NULL;
F->x_1745 = NULL;
while ((!f_at_statements_end_398(F->up))) {
if (f_at_kw_311(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_372(F->up, &F->x_1745);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1745)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_207 = 1;
}
} else {
f_statement_402(F->up, &F->x_1745);
f_append_306(F->up, &F->head_1743, &F->tail_1744, F->x_1745);
}
}
L_end_1746: ;
(*F->res_399) = F->head_1743;
goto ret_;
ret_:

  return;
}

static void f_statement_402(struct f_greenc_1fr *up_, P174 *res_401) {
  struct f_statement_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_401 = res_401;
F->l_1747 = NULL;
F->x_1748 = NULL;
F->label_1749 = NULL;
if (f_at_op_313(F->up, rt_g_lit("<<", 2))) {
F->l_1747 = f_nn_302(F->up, ((rt_int)57LL), f_cur_line_309(F->up));
f_skip_322(F->up);
f_expect_id_328(F->up, &F->label_1749);
f_expect_op_326(F->up, rt_g_lit(">>", 2));
(*(P174)rt_nil_check(F->l_1747)).name_ = F->label_1749;
if (f_at_op_313(F->up, rt_g_lit("<<", 2))) {
f_statement_402(F->up, &F->x_1748);
} else {
f_labelled_statement_405(F->up, F->label_1749, &F->x_1748);
}
(*(P174)rt_nil_check(F->l_1747)).next_ = F->x_1748;
(*F->res_401) = F->l_1747;
goto ret_;
}
f_labelled_statement_405(F->up, NULL, &(*F->res_401));
ret_:

  return;
}

static void f_labelled_statement_405(struct f_greenc_1fr *up_, P140 label_403, P174 *res_404) {
  struct f_labelled_statement_405fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_403 = label_403;
F->res_404 = res_404;
F->x_1750 = NULL;
F->t_1751 = NULL;
F->line_1752 = INT64_MIN;
F->line_1752 = f_cur_line_309(F->up);
if (f_at_kw_311(F->up, rt_g_lit("NULL", 4))) {
f_skip_322(F->up);
f_expect_op_326(F->up, rt_g_lit(";", 1));
F->x_1750 = f_nn_302(F->up, ((rt_int)31LL), G_NV(F->line_1752));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_409(F->up, &F->x_1750);
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_411(F->up, &F->x_1750);
(*F->res_404) = F->x_1750;
goto ret_;
} else if (((f_at_kw_311(F->up, rt_g_lit("FOR", 3)) || f_at_kw_311(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_311(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_413(F->up, &F->x_1750);
(*(P174)rt_nil_check(F->x_1750)).tag_ = F->label_403;
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
if (((F->label_403 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1753 = F->up->toks_112; ix1753.p[rt_index(G_NV(F->up->tpos_114), ix1753.lo, ix1753.hi) - ix1753.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_403)))))) {
f_perror_321(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_322(F->up);
} else if ((F->label_403 != NULL)) {
f_perror_321(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P140)rt_nil_check(F->label_403))), rt_g_lit(" ends with end loop ", 20)), (*(P140)rt_nil_check(F->label_403))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if ((f_at_kw_311(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_311(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1750 = f_nn_302(F->up, ((rt_int)25LL), G_NV(F->line_1752));
(*(P174)rt_nil_check(F->x_1750)).tag_ = F->label_403;
if (f_at_kw_311(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_322(F->up);
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_1750)).a_);
}
f_expect_kw_324(F->up, rt_g_lit("BEGIN", 5));
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_1750)).b_);
if (f_at_kw_311(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_395(F->up, &(*(P174)rt_nil_check(F->x_1750)).c_);
}
f_expect_kw_324(F->up, rt_g_lit("END", 3));
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
if (((F->label_403 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1754 = F->up->toks_112; ix1754.p[rt_index(G_NV(F->up->tpos_114), ix1754.lo, ix1754.hi) - ix1754.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_403)))))) {
f_perror_321(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_322(F->up);
} else if ((F->label_403 != NULL)) {
f_perror_321(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P140)rt_nil_check(F->label_403))), rt_g_lit(" ends with end ", 15)), (*(P140)rt_nil_check(F->label_403))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("EXIT", 4))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)26LL), G_NV(F->line_1752));
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1750)).name_);
}
if (f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) {
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1750)).a_);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("RETURN", 6))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)27LL), G_NV(F->line_1752));
if ((!f_at_op_313(F->up, rt_g_lit(";", 1)))) {
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1750)).a_);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("RAISE", 5))) {
f_skip_322(F->up);
if (f_at_op_313(F->up, rt_g_lit(";", 1))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)29LL), G_NV(F->line_1752));
(*F->res_404) = F->x_1750;
goto ret_;
}
F->x_1750 = f_nn_302(F->up, ((rt_int)28LL), G_NV(F->line_1752));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1750)).name_);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1750)).a_);
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
while (f_at_op_313(F->up, rt_g_lit(".", 1))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1750)).tag_ = (*(P174)rt_nil_check(F->x_1750)).name_;
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1750)).name_);
}
L_end_1755: ;
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)30LL), G_NV(F->line_1752));
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1750)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
} else if (f_at_kw_311(F->up, rt_g_lit("GOTO", 4))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)58LL), G_NV(F->line_1752));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1750)).name_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
}
f_task_statement_407(F->up, &F->x_1750);
if ((F->x_1750 != NULL)) {
(*F->res_404) = F->x_1750;
goto ret_;
}
f_name_p_360(F->up, &F->t_1751);
if (f_at_op_313(F->up, rt_g_lit(":=", 2))) {
f_skip_322(F->up);
F->x_1750 = f_nn_302(F->up, ((rt_int)20LL), G_NV(F->line_1752));
(*(P174)rt_nil_check(F->x_1750)).a_ = F->t_1751;
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1750)).b_);
} else {
F->x_1750 = f_nn_302(F->up, ((rt_int)21LL), G_NV(F->line_1752));
(*(P174)rt_nil_check(F->x_1750)).a_ = F->t_1751;
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_404) = F->x_1750;
goto ret_;
ret_:

  return;
}

static void f_task_statement_407(struct f_greenc_1fr *up_, P174 *res_406) {
  struct f_task_statement_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_406 = res_406;
f_parse_task_statement_1116(F->up, &(*F->res_406));
ret_:

  return;
}

static void f_if_stmt_409(struct f_greenc_1fr *up_, P174 *res_408) {
  struct f_if_stmt_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_408 = res_408;
F->x_1756 = NULL;
F->arm_1757 = NULL;
F->head_1758 = NULL;
F->tail_1759 = NULL;
F->go_1760 = INT_MIN;
F->go_1760 = 1;
F->x_1756 = f_nn_302(F->up, ((rt_int)22LL), f_cur_line_309(F->up));
f_skip_322(F->up);
F->arm_1757 = f_nn_302(F->up, ((rt_int)60LL), f_cur_line_309(F->up));
f_expr_339(F->up, &(*(P174)rt_nil_check(F->arm_1757)).a_);
f_expect_kw_324(F->up, rt_g_lit("THEN", 4));
f_statements_400(F->up, &(*(P174)rt_nil_check(F->arm_1757)).b_);
f_append_306(F->up, &F->head_1758, &F->tail_1759, F->arm_1757);
while (G_NV(F->go_1760)) {
if (f_at_kw_311(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_322(F->up);
F->arm_1757 = f_nn_302(F->up, ((rt_int)60LL), f_cur_line_309(F->up));
f_expr_339(F->up, &(*(P174)rt_nil_check(F->arm_1757)).a_);
f_expect_kw_324(F->up, rt_g_lit("THEN", 4));
f_statements_400(F->up, &(*(P174)rt_nil_check(F->arm_1757)).b_);
f_append_306(F->up, &F->head_1758, &F->tail_1759, F->arm_1757);
} else if (f_at_kw_311(F->up, rt_g_lit("ELSE", 4))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1756)).flag_ = ((rt_int)1LL);
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_1756)).b_);
} else {
F->go_1760 = 0;
}
}
L_end_1761: ;
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("IF", 2));
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1756)).a_ = F->head_1758;
(*F->res_408) = F->x_1756;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_411(struct f_greenc_1fr *up_, P174 *res_410) {
  struct f_case_stmt_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_410 = res_410;
F->x_1762 = NULL;
F->arm_1763 = NULL;
F->head_1764 = NULL;
F->tail_1765 = NULL;
F->labs_1766 = NULL;
F->ltail_1767 = NULL;
F->l_1768 = NULL;
F->others_arm_1769 = INT_MIN;
F->x_1762 = f_nn_302(F->up, ((rt_int)23LL), f_cur_line_309(F->up));
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1762)).a_);
f_expect_kw_324(F->up, rt_g_lit("OF", 2));
while (f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) {
f_skip_322(F->up);
F->labs_1766 = NULL;
F->ltail_1767 = NULL;
F->others_arm_1769 = 0;
for (;;) {
if (f_at_kw_311(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_322(F->up);
F->others_arm_1769 = 1;
} else {
F->l_1768 = f_nn_302(F->up, ((rt_int)61LL), f_cur_line_309(F->up));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->l_1768)).a_);
if (f_at_op_313(F->up, rt_g_lit("..", 2))) {
f_skip_322(F->up);
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->l_1768)).b_);
}
f_append_306(F->up, &F->labs_1766, &F->ltail_1767, F->l_1768);
}
if ((!f_at_op_313(F->up, rt_g_lit("|", 1)))) {
goto L_end_1771;
}
f_skip_322(F->up);
}
L_end_1771: ;
f_expect_op_326(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1769)) {
(*(P174)rt_nil_check(F->x_1762)).flag_ = ((rt_int)1LL);
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_1762)).c_);
if ((!f_at_kw_311(F->up, rt_g_lit("END", 3)))) {
f_perror_321(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1763 = f_nn_302(F->up, ((rt_int)60LL), f_cur_line_309(F->up));
(*(P174)rt_nil_check(F->arm_1763)).a_ = F->labs_1766;
f_statements_400(F->up, &(*(P174)rt_nil_check(F->arm_1763)).b_);
f_append_306(F->up, &F->head_1764, &F->tail_1765, F->arm_1763);
}
}
L_end_1770: ;
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("CASE", 4));
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1762)).b_ = F->head_1764;
(*F->res_410) = F->x_1762;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_413(struct f_greenc_1fr *up_, P174 *res_412) {
  struct f_loop_stmt_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_412 = res_412;
F->x_1772 = NULL;
F->r_1773 = NULL;
F->line_1774 = INT64_MIN;
F->line_1774 = f_cur_line_309(F->up);
F->x_1772 = f_nn_302(F->up, ((rt_int)24LL), G_NV(F->line_1774));
if (f_at_kw_311(F->up, rt_g_lit("FOR", 3))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1772)).flag_ = ((rt_int)2LL);
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_1772)).name_);
f_expect_kw_324(F->up, rt_g_lit("IN", 2));
if (f_at_kw_311(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1772)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->x_1772)).a_);
} else {
f_discrete_range_p_364(F->up, &(*(P174)rt_nil_check(F->x_1772)).a_);
}
} else if (f_at_kw_311(F->up, rt_g_lit("WHILE", 5))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_1772)).flag_ = ((rt_int)1LL);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_1772)).a_);
}
f_expect_kw_324(F->up, rt_g_lit("LOOP", 4));
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_1772)).b_);
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("LOOP", 4));
(*F->res_412) = F->x_1772;
goto ret_;
ret_:

  return;
}

static void f_compilation_415(struct f_greenc_1fr *up_, P174 *res_414) {
  struct f_compilation_415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_414 = res_414;
F->head_1775 = NULL;
F->tail_1776 = NULL;
F->x_1777 = NULL;
while ((!f_at_kind_315(F->up, ((rt_int)0LL)))) {
if (f_at_kw_311(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_372(F->up, &F->x_1777);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1777)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1777 = (*(P174)rt_nil_check(F->x_1777)).a_;
while ((F->x_1777 != NULL)) {
F->up->env_names_197 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->env_names_197)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1777)).name_))), one_rt_gstr(44)));
F->x_1777 = (*(P174)rt_nil_check(F->x_1777)).next_;
}
L_end_1779: ;
}
} else {
if ((!(((((f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_311(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_311(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_311(F->up, rt_g_lit("TASK", 4))) || f_at_kw_311(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_311(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_321(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
f_unit_p_378(F->up, &F->x_1777);
if (((*(P174)rt_nil_check(F->x_1777)).formal_ == NULL)) {
(*(P174)rt_nil_check(F->x_1777)).formal_ = f_mk_228(F->up, rt_g_lit(",", 1));
}
(*(P174)rt_nil_check(F->x_1777)).formal_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1777)).formal_)), (*(P140)rt_nil_check(F->up->env_names_197))));
f_append_306(F->up, &F->head_1775, &F->tail_1776, F->x_1777);
}
}
L_end_1778: ;
(*F->res_414) = F->head_1775;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_417(struct f_greenc_1fr *up_, rt_gstr s_416) {
  struct f_hash_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_416 = cp_rt_gstr(s_416);
F->h_1780 = INT64_MIN;
F->h_1780 = ((rt_int)0LL);
{ rt_int lo1784 = ((rt_int)1LL), hi1785 = ({ rt_gstr at1782 = F->s_416; at1782.hi >= at1782.lo ? at1782.hi - at1782.lo + 1 : (rt_int)0; });
for (rt_int it1786 = lo1784; it1786 <= hi1785; it1786++) {
F->i_1783 = it1786;
F->h_1780 = rt_rem(rt_add(rt_mul(G_NV(F->h_1780), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1787 = F->s_416; ix1787.p[rt_index(F->i_1783, ix1787.lo, ix1787.hi) - ix1787.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1781: ;
F->result_ = G_NV(F->h_1780);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_420(struct f_greenc_1fr *up_, P140 list_418, rt_gstr name_419) {
  struct f_listed_420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_418 = list_418;
F->name_419 = cp_rt_gstr(name_419);
F->l_1788 = cp_rt_gstr((*(P140)rt_nil_check(F->list_418)));
F->n_1789 = INT64_MIN;
F->n_1789 = ({ rt_gstr at1790 = F->name_419; at1790.hi >= at1790.lo ? at1790.hi - at1790.lo + 1 : (rt_int)0; });
{ rt_int lo1795 = ({ rt_gstr at1792 = F->l_1788; at1792.lo; }), hi1796 = rt_sub(rt_sub(({ rt_gstr at1793 = F->l_1788; at1793.hi; }), G_NV(F->n_1789)), ((rt_int)1LL));
for (rt_int it1797 = lo1795; it1797 <= hi1796; it1797++) {
F->i_1794 = it1797;
if (((G_NV(({ rt_gstr ix1798 = F->l_1788; ix1798.p[rt_index(F->i_1794, ix1798.lo, ix1798.hi) - ix1798.lo]; })) == 44) && (G_NV(({ rt_gstr ix1799 = F->l_1788; ix1799.p[rt_index(rt_add(rt_add(F->i_1794, G_NV(F->n_1789)), ((rt_int)1LL)), ix1799.lo, ix1799.hi) - ix1799.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1800 = F->l_1788; rt_int l_ = rt_add(F->i_1794, ((rt_int)1LL)), h_ = rt_add(F->i_1794, G_NV(F->n_1789)); if (l_ <= h_) { rt_index(l_, sl1800.lo, sl1800.hi); rt_index(h_, sl1800.lo, sl1800.hi); } sl1800.p += l_ - sl1800.lo; sl1800.lo = l_; sl1800.hi = h_; sl1800; }), F->name_419)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1791: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_422(struct f_greenc_1fr *up_, P117 y_421) {
  struct f_visible_sym_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_421 = y_421;
F->b_1801 = NULL;
F->b_1801 = F->up->barriers_200;
if ((G_NV((*(P117)rt_nil_check(F->y_421)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1801 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->y_421)).depth_) <= G_NV((*(P198)rt_nil_check(F->b_1801)).limit_)) && (G_NV((*(P117)rt_nil_check(F->y_421)).depth_) != G_NV((*(P198)rt_nil_check(F->b_1801)).keep_)))) {
if ((!f_listed_420(F->up, (*(P198)rt_nil_check(F->b_1801)).allowed_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_421)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1801 = (*(P198)rt_nil_check(F->b_1801)).next_;
}
L_end_1802: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_424(struct f_greenc_1fr *up_, rt_gstr name_423) {
  struct f_lookup_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_423 = cp_rt_gstr(name_423);
F->y_1803 = NULL;
F->y_1803 = ({ A116 ix1804 = F->up->table_119; ix1804.p[rt_index(f_hash_417(F->up, F->name_423), ix1804.lo, ix1804.hi) - ix1804.lo]; });
while ((F->y_1803 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1803)).name_)), F->name_423) && f_visible_sym_422(F->up, F->y_1803))) {
F->result_ = F->y_1803;
goto ret_;
}
F->y_1803 = (*(P117)rt_nil_check(F->y_1803)).chain_;
}
L_end_1805: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_427(struct f_greenc_1fr *up_, P117 a_425, P117 b_426) {
  struct f_same_task_427fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_425 = a_425;
F->b_426 = b_426;
if ((F->a_425 == F->b_426)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_425 == NULL) || (F->b_426 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_425)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_426)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_entry_430(struct f_greenc_1fr *up_, rt_gstr name_428, P117 owner_429) {
  struct f_lookup_entry_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_428 = cp_rt_gstr(name_428);
F->owner_429 = owner_429;
F->y_1806 = NULL;
F->y_1806 = ({ A116 ix1807 = F->up->table_119; ix1807.p[rt_index(f_hash_417(F->up, F->name_428), ix1807.lo, ix1807.hi) - ix1807.lo]; });
while ((F->y_1806 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1806)).name_)), F->name_428) && (G_NV((*(P117)rt_nil_check(F->y_1806)).kind_) == ((rt_int)10LL))) && f_same_task_427(F->up, (*(P117)rt_nil_check(F->y_1806)).members_, F->owner_429))) {
F->result_ = F->y_1806;
goto ret_;
}
F->y_1806 = (*(P117)rt_nil_check(F->y_1806)).chain_;
}
L_end_1808: ;
F->result_ = f_lookup_424(F->up, F->name_428);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_at_433(struct f_greenc_1fr *up_, rt_gstr name_431, rt_int d_432) {
  struct f_lookup_at_433fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_431 = cp_rt_gstr(name_431);
F->d_432 = d_432;
F->y_1809 = NULL;
F->y_1809 = ({ A116 ix1810 = F->up->table_119; ix1810.p[rt_index(f_hash_417(F->up, F->name_431), ix1810.lo, ix1810.hi) - ix1810.lo]; });
while ((F->y_1809 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1809)).name_)), F->name_431) && (G_NV((*(P117)rt_nil_check(F->y_1809)).depth_) == F->d_432))) {
F->result_ = F->y_1809;
goto ret_;
}
F->y_1809 = (*(P117)rt_nil_check(F->y_1809)).chain_;
}
L_end_1811: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_435(struct f_greenc_1fr *up_, rt_gstr name_434) {
  struct f_enclosing_depth_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_434 = cp_rt_gstr(name_434);
{ rt_int lo1814 = ((rt_int)1LL), hi1815 = G_NV(F->up->nunits_188);
for (rt_int it1816 = hi1815; it1816 >= lo1814; it1816--) {
F->i_1813 = it1816;
if (eq_rt_gstr((*(P140)rt_nil_check(({ A183 ix1817 = F->up->unit_names_184; ix1817.p[rt_index(F->i_1813, ix1817.lo, ix1817.hi) - ix1817.lo]; }))), F->name_434)) {
F->result_ = G_NV(({ A185 ix1818 = F->up->unit_depths_186; ix1818.p[rt_index(F->i_1813, ix1818.lo, ix1818.hi) - ix1818.lo]; }));
goto ret_;
}
}
}
L_end_1812: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_437(struct f_greenc_1fr *up_, P140 name_436) {
  struct f_push_unit_437fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_436 = name_436;
F->up->nunits_188 = rt_add(G_NV(F->up->nunits_188), ((rt_int)1LL));
(*({ A183 *ix1819 = &(F->up->unit_names_184); &ix1819->p[rt_index(G_NV(F->up->nunits_188), ix1819->lo, ix1819->hi) - ix1819->lo]; })) = F->name_436;
(*({ A185 *ix1820 = &(F->up->unit_depths_186); &ix1820->p[rt_index(G_NV(F->up->nunits_188), ix1820->lo, ix1820->hi) - ix1820->lo]; })) = G_NV(F->up->depth_120);
ret_:

  return;
}

static P117 f_lookup_decl_439(struct f_greenc_1fr *up_, P174 d_438) {
  struct f_lookup_decl_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_438 = d_438;
F->y_1821 = NULL;
F->y_1821 = ({ A116 ix1822 = F->up->table_119; ix1822.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_438)).name_))), ix1822.lo, ix1822.hi) - ix1822.lo]; });
while ((F->y_1821 != NULL)) {
if (((*(P117)rt_nil_check(F->y_1821)).decl_ == F->d_438)) {
F->result_ = F->y_1821;
goto ret_;
}
F->y_1821 = (*(P117)rt_nil_check(F->y_1821)).chain_;
}
L_end_1823: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_441(struct f_greenc_1fr *up_, P117 y_440) {
  struct f_overloadable_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_440 = y_440;
F->result_ = ((((G_NV((*(P117)rt_nil_check(F->y_440)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_440)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_440)).kind_) == ((rt_int)7LL))) || (G_NV((*(P117)rt_nil_check(F->y_440)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_444(struct f_greenc_1fr *up_, P122 a_442, P122 b_443) {
  struct f_same_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_442 = a_442;
F->b_443 = b_443;
F->result_ = (F->a_442 == F->b_443);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_root_446(struct f_greenc_1fr *up_, P122 t_445) {
  struct f_root_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_445 = t_445;
F->r_1824 = NULL;
F->r_1824 = F->t_445;
while (((*(P122)rt_nil_check(F->r_1824)).parent_ != NULL)) {
F->r_1824 = (*(P122)rt_nil_check(F->r_1824)).parent_;
}
L_end_1825: ;
F->result_ = F->r_1824;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_449(struct f_greenc_1fr *up_, P122 a_447, P122 b_448) {
  struct f_derived_from_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_447 = a_447;
F->b_448 = b_448;
F->r_1826 = NULL;
F->r_1826 = F->a_447;
while ((F->r_1826 != NULL)) {
if ((F->r_1826 == F->b_448)) {
F->result_ = 1;
goto ret_;
}
F->r_1826 = (*(P122)rt_nil_check(F->r_1826)).parent_;
}
L_end_1827: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_451(struct f_greenc_1fr *up_, P122 t_450) {
  struct f_is_numeric_451fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_450 = t_450;
F->result_ = (((G_NV((*(P122)rt_nil_check(F->t_450)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_450)).kind_) == ((rt_int)3LL))) || (G_NV((*(P122)rt_nil_check(F->t_450)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_453(struct f_greenc_1fr *up_, P122 t_452) {
  struct f_is_discrete_453fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_452 = t_452;
F->result_ = ((((G_NV((*(P122)rt_nil_check(F->t_452)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_452)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_452)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->t_452)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_456(struct f_greenc_1fr *up_, P1828 a_454, P1828 b_455) {
  struct f_same_types_456fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_454 = a_454;
F->b_455 = b_455;
F->x_1830 = NULL;
F->x_1830 = F->a_454;
F->y_1831 = NULL;
F->y_1831 = F->b_455;
while (((F->x_1830 != NULL) && (F->y_1831 != NULL))) {
if (((!f_same_444(F->up, (*(P1828)rt_nil_check(F->x_1830)).t_, (*(P1828)rt_nil_check(F->y_1831)).t_)) || (G_NV((*(P1828)rt_nil_check(F->x_1830)).mode_) != G_NV((*(P1828)rt_nil_check(F->y_1831)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1830 = (*(P1828)rt_nil_check(F->x_1830)).next_;
F->y_1831 = (*(P1828)rt_nil_check(F->y_1831)).next_;
}
L_end_1832: ;
F->result_ = ((F->x_1830 == NULL) && (F->y_1831 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_459(struct f_greenc_1fr *up_, P1828 a_457, P1828 b_458) {
  struct f_same_signature_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_457 = a_457;
F->b_458 = b_458;
F->x_1833 = NULL;
F->x_1833 = F->a_457;
F->y_1834 = NULL;
F->y_1834 = F->b_458;
while (((F->x_1833 != NULL) && (F->y_1834 != NULL))) {
if ((((!f_same_444(F->up, (*(P1828)rt_nil_check(F->x_1833)).t_, (*(P1828)rt_nil_check(F->y_1834)).t_)) || (G_NV((*(P1828)rt_nil_check(F->x_1833)).mode_) != G_NV((*(P1828)rt_nil_check(F->y_1834)).mode_))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P1828)rt_nil_check(F->x_1833)).name_)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->y_1834)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1833 = (*(P1828)rt_nil_check(F->x_1833)).next_;
F->y_1834 = (*(P1828)rt_nil_check(F->y_1834)).next_;
}
L_end_1835: ;
F->result_ = ((F->x_1833 == NULL) && (F->y_1834 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_462(struct f_greenc_1fr *up_, P117 y_460, P117 z_461) {
  struct f_distinct_overload_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_460 = y_460;
F->z_461 = z_461;
if ((!(f_overloadable_441(F->up, F->y_460) && f_overloadable_441(F->up, F->z_461)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_460)).kind_) != G_NV((*(P117)rt_nil_check(F->z_461)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_459(F->up, (*(P117)rt_nil_check(F->y_460)).params_, (*(P117)rt_nil_check(F->z_461)).params_)) || (!f_same_444(F->up, (*(P117)rt_nil_check(F->y_460)).result_, (*(P117)rt_nil_check(F->z_461)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_465(struct f_greenc_1fr *up_, P117 y_463, rt_int line_464) {
  struct f_define_465fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_463 = y_463;
F->line_464 = line_464;
F->h_1836 = INT64_MIN;
F->h_1836 = f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_463)).name_)));
F->z_1837 = NULL;
F->z_1837 = ({ A116 ix1838 = F->up->table_119; ix1838.p[rt_index(G_NV(F->h_1836), ix1838.lo, ix1838.hi) - ix1838.lo]; });
while ((F->z_1837 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_1837)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_1837)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_463)).name_)))) && (!f_distinct_overload_462(F->up, F->y_463, F->z_1837)))) {
f_fail_249(F->up, F->line_464, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_463)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1837 = (*(P117)rt_nil_check(F->z_1837)).chain_;
}
L_end_1839: ;
(*(P117)rt_nil_check(F->y_463)).depth_ = G_NV(F->up->depth_120);
(*(P117)rt_nil_check(F->y_463)).chain_ = ({ A116 ix1840 = F->up->table_119; ix1840.p[rt_index(G_NV(F->h_1836), ix1840.lo, ix1840.hi) - ix1840.lo]; });
(*({ A116 *ix1841 = &(F->up->table_119); &ix1841->p[rt_index(G_NV(F->h_1836), ix1841->lo, ix1841->hi) - ix1841->lo]; })) = F->y_463;
(*(P117)rt_nil_check(F->y_463)).stack_ = F->up->scope_stack_121;
F->up->scope_stack_121 = F->y_463;
ret_:

  return;
}

static void f_open_scope_466(struct f_greenc_1fr *up_) {
  struct f_open_scope_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_467(struct f_greenc_1fr *up_) {
  struct f_close_scope_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_121 != NULL) && (G_NV((*(P117)rt_nil_check(F->up->scope_stack_121)).depth_) == G_NV(F->up->depth_120)))) {
(*({ A116 *ix1843 = &(F->up->table_119); &ix1843->p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->scope_stack_121)).name_))), ix1843->lo, ix1843->hi) - ix1843->lo]; })) = (*(P117)rt_nil_check(F->up->scope_stack_121)).chain_;
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->up->scope_stack_121)).stack_;
}
L_end_1842: ;
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static P117 f_new_sym_470(struct f_greenc_1fr *up_, rt_int kind_468, P140 name_469) {
  struct f_new_sym_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_468 = kind_468;
F->name_469 = name_469;
F->result_ = ({ R118 *cell1844 = rt_alloc(sizeof(R118)); *cell1844 = cp_R118(({ R118 ag1845; ag1845.kind_ = F->kind_468; ag1845.name_ = F->name_469; ag1845.t_ = NULL; ag1845.c_ = NULL; ag1845.access_path_ = NULL; ag1845.cname_ = NULL; ag1845.ro_ = 0; ag1845.mvalue_ = ((rt_int)0LL); ag1845.hasmv_ = 0; ag1845.decl_ = NULL; ag1845.params_ = NULL; ag1845.result_ = NULL; ag1845.depth_ = ((rt_int)0LL); ag1845.level_ = ((rt_int)0LL); ag1845.byref_ = 0; ag1845.vrp_ = 0; ag1845.hidden_ = 0; ag1845.from_use_ = 0; ag1845.members_ = NULL; ag1845.mnext_ = NULL; ag1845.chain_ = NULL; ag1845.stack_ = NULL; ag1845.flags_ = ((rt_int)0LL); ag1845; })); (P117)cell1844; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_new_typ_472(struct f_greenc_1fr *up_, rt_int kind_471) {
  struct f_new_typ_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_471 = kind_471;
F->result_ = ({ R123 *cell1848 = rt_alloc(sizeof(R123)); *cell1848 = cp_R123(({ R123 ag1849; ag1849.kind_ = F->kind_471; ag1849.name_ = NULL; ag1849.lits_ = NULL; ag1849.elem_ = NULL; ag1849.idx_ = NULL; ag1849.elemcons_ = NULL; ag1849.tcons_ = NULL; ag1849.fields_ = NULL; ag1849.target_ = NULL; ag1849.decl_ = NULL; ag1849.cname_ = NULL; ag1849.forward_ = 0; ag1849.defined_ = 0; ag1849.priv_ = 0; ag1849.next_ = NULL; ag1849.idx2_ = NULL; ag1849.littab_ = NULL; ag1849.parent_ = NULL; ag1849.ndigits_ = ((rt_int)0LL); ag1849.fdelta_ = NULL; ag1849.fsmall_ = NULL; ag1849.dims_ = ((rt_int)0LL); ag1849.is_restricted_ = 0; ag1849; })); (P122)cell1848; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P178 f_new_cons_473(struct f_greenc_1fr *up_) {
  struct f_new_cons_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R179 *cell1852 = rt_alloc(sizeof(R179)); *cell1852 = cp_R179(({ R179 ag1853; ag1853.lo_ = NULL; ag1853.hi_ = NULL; ag1853.slen_ = NULL; ag1853.mlo_ = ((rt_int)0LL); ag1853.mhi_ = ((rt_int)0LL); ag1853.hasm_ = 0; ag1853.lo2_ = NULL; ag1853.hi2_ = NULL; ag1853.acc_ = NULL; ag1853.inner_ = NULL; ag1853.dv_ = NULL; ag1853; })); (P178)cell1852; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_475(struct f_greenc_1fr *up_, P178 c_474) {
  struct f_bounded_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_474 = c_474;
if ((F->c_474 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_474)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_477(struct f_greenc_1fr *up_, P178 c_476) {
  struct f_bounded_hi_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_476 = c_476;
if ((F->c_476 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_476)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_479(struct f_greenc_1fr *up_, P178 c_478) {
  struct f_static_bounds_479fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_478 = c_478;
if ((F->c_478 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P178)rt_nil_check(F->c_478)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_481(struct f_greenc_1fr *up_, P178 c_480) {
  struct f_discriminated_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_480 = c_480;
if ((F->c_480 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_480)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_483(struct f_greenc_1fr *up_, P122 t_482) {
  struct f_kind_name_483fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_482 = t_482;
if (((*(P122)rt_nil_check(F->t_482)).name_ != NULL)) {
F->result_ = (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_482)).name_));
goto ret_;
}
{ rt_int sel1854 = G_NV((*(P122)rt_nil_check(F->t_482)).kind_);
if (0 || sel1854 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1854 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1854 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1854 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1854 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1854 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1854 == ((rt_int)16LL)) {
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

static void f_check_type_487(struct f_greenc_1fr *up_, P122 got_484, P122 want_485, rt_int line_486) {
  struct f_check_type_487fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_484 = got_484;
F->want_485 = want_485;
F->line_486 = line_486;
if ((F->want_485 == NULL)) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->got_484)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->want_485)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_444(F->up, F->got_484, F->want_485))) {
f_fail_249(F->up, F->line_486, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_483(F->up, F->got_484)), rt_g_lit(" where ", 7)), f_kind_name_483(F->up, F->want_485)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_489(struct f_greenc_1fr *up_, P122 t_488) {
  struct f_field_count_489fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_488 = t_488;
F->n_1855 = INT64_MIN;
F->n_1855 = ((rt_int)0LL);
F->f_1856 = NULL;
F->f_1856 = (*(P122)rt_nil_check(F->t_488)).fields_;
while ((F->f_1856 != NULL)) {
F->n_1855 = rt_add(G_NV(F->n_1855), ((rt_int)1LL));
F->f_1856 = (*(P1846)rt_nil_check(F->f_1856)).next_;
}
L_end_1857: ;
F->result_ = G_NV(F->n_1855);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_492(struct f_greenc_1fr *up_, P122 t_490, P140 *r_491) {
  struct f_ctype_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_490 = t_490;
F->r_491 = r_491;
F->s_1858 = NULL;
{ rt_int sel1859 = G_NV((*(P122)rt_nil_check(F->t_490)).kind_);
if (0 || sel1859 == ((rt_int)1LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1859 == ((rt_int)2LL) || sel1859 == ((rt_int)4LL) || sel1859 == ((rt_int)11LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("int", 3));
} else if (0 || sel1859 == ((rt_int)3LL) || sel1859 == ((rt_int)16LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("double", 6));
} else if (0 || sel1859 == ((rt_int)5LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1859 == ((rt_int)9LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("void", 4));
} else if (0 || sel1859 == ((rt_int)13LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1859 == ((rt_int)14LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1859 == ((rt_int)15LL)) {
(*F->r_491) = f_mk_228(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P122)rt_nil_check(F->t_490)).cname_ == NULL)) {
f_declare_ctype_497(F->up, F->t_490);
} else if ((((G_NV((*(P122)rt_nil_check(F->t_490)).kind_) == ((rt_int)7LL)) && G_NV((*(P122)rt_nil_check(F->t_490)).forward_)) && (!G_NV((*(P122)rt_nil_check(F->t_490)).defined_)))) {
(*(P122)rt_nil_check(F->t_490)).defined_ = 1;
f_field_decls_495(F->up, F->t_490, &F->s_1858);
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_490)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1858))), rt_g_lit(" };", 3)));
}
(*F->r_491) = (*(P122)rt_nil_check(F->t_490)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_495(struct f_greenc_1fr *up_, P122 t_493, P140 *r_494) {
  struct f_field_decls_495fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_493 = t_493;
F->r_494 = r_494;
F->f_1860 = NULL;
F->f_1860 = (*(P122)rt_nil_check(F->t_493)).fields_;
F->s_1861 = NULL;
F->ct_1862 = NULL;
F->s_1861 = f_mk_228(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1860 != NULL)) {
f_ctype_492(F->up, (*(P1846)rt_nil_check(F->f_1860)).t_, &F->ct_1862);
F->s_1861 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->s_1861)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_1862))), one_rt_gstr(32)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_1860)).name_)))), one_rt_gstr(59)));
F->f_1860 = (*(P1846)rt_nil_check(F->f_1860)).next_;
}
L_end_1863: ;
(*F->r_494) = F->s_1861;
ret_:

  return;
}

static void f_declare_ctype_497(struct f_greenc_1fr *up_, P122 t_496) {
  struct f_declare_ctype_497fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_496 = t_496;
F->ct_1864 = NULL;
F->s_1865 = NULL;
F->target_1866 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_496)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_608(F->up, F->t_496);
}
if ((G_NV((*(P122)rt_nil_check(F->t_496)).kind_) == ((rt_int)6LL))) {
f_new_name_231(F->up, rt_g_lit("A", 1), &(*(P122)rt_nil_check(F->t_496)).cname_);
} else if ((G_NV((*(P122)rt_nil_check(F->t_496)).kind_) == ((rt_int)7LL))) {
f_new_name_231(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->t_496)).cname_);
} else {
f_new_name_231(F->up, rt_g_lit("P", 1), &(*(P122)rt_nil_check(F->t_496)).cname_);
}
(*(P122)rt_nil_check(F->t_496)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->t_496;
if ((G_NV((*(P122)rt_nil_check(F->t_496)).kind_) == ((rt_int)8LL))) {
F->target_1866 = (*(P122)rt_nil_check(F->t_496)).target_;
if ((F->target_1866 == NULL)) {
f_fail_249(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_483(F->up, F->t_496)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P122)rt_nil_check(F->target_1866)).kind_) == ((rt_int)7LL))) {
if (((*(P122)rt_nil_check(F->target_1866)).cname_ == NULL)) {
f_new_name_231(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->target_1866)).cname_);
(*(P122)rt_nil_check(F->target_1866)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->target_1866;
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1866)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1866)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->target_1866)).forward_ = 1;
}
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1866)).cname_))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_492(F->up, F->target_1866, &F->ct_1864);
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P140)rt_nil_check(F->ct_1864))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_496)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_496)).elem_, &F->ct_1864);
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(59)));
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P140)rt_nil_check(F->ct_1864))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->t_496)).defined_ = 1;
f_field_decls_495(F->up, F->t_496, &F->s_1865);
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_496)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1865))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_500(struct f_greenc_1fr *up_, P174 lits_498, rt_gstr name_499) {
  struct f_lit_index_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_498 = lits_498;
F->name_499 = cp_rt_gstr(name_499);
F->i_1867 = INT64_MIN;
F->i_1867 = ((rt_int)0LL);
F->l_1868 = NULL;
F->l_1868 = F->lits_498;
while ((F->l_1868 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_1868)).name_)), F->name_499)) {
F->result_ = G_NV(F->i_1867);
goto ret_;
}
F->i_1867 = rt_add(G_NV(F->i_1867), ((rt_int)1LL));
F->l_1868 = (*(P174)rt_nil_check(F->l_1868)).next_;
}
L_end_1869: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_504(struct f_greenc_1fr *up_, P174 e_501, rt_int *v_502, int *ok_503) {
  struct f_manifest_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_501 = e_501;
F->v_502 = v_502;
F->ok_503 = ok_503;
F->a_1870 = INT64_MIN;
F->b_1871 = INT64_MIN;
F->ok2_1872 = INT_MIN;
F->y_1873 = NULL;
(*F->ok_503) = 0;
(*F->v_502) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)1LL))) {
(*F->ok_503) = 1;
(*F->v_502) = G_NV((*(P174)rt_nil_check(F->e_501)).ival_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)15LL))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_501)).a_, &(*F->v_502), &(*F->ok_503));
 (void)rt_range((*F->ok_503), 0, 1);
} else if (((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("-", 1)))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_501)).a_, &F->a_1870, &(*F->ok_503));
 (void)rt_range((*F->ok_503), 0, 1);
(*F->v_502) = rt_neg(G_NV(F->a_1870));
} else if (((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("*", 1))))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_501)).a_, &F->a_1870, &(*F->ok_503));
 (void)rt_range((*F->ok_503), 0, 1);
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_501)).b_, &F->b_1871, &F->ok2_1872);
 (void)rt_range(F->ok2_1872, 0, 1);
(*F->ok_503) = (G_NV((*F->ok_503)) && G_NV(F->ok2_1872));
if (G_NV((*F->ok_503))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("+", 1))) {
(*F->v_502) = rt_add(G_NV(F->a_1870), G_NV(F->b_1871));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("-", 1))) {
(*F->v_502) = rt_sub(G_NV(F->a_1870), G_NV(F->b_1871));
} else {
(*F->v_502) = rt_mul(G_NV(F->a_1870), G_NV(F->b_1871));
}
}
} else if ((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)5LL))) {
F->y_1873 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)));
if ((((F->y_1873 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1873)).hasmv_))) {
(*F->ok_503) = 1;
(*F->v_502) = G_NV((*(P117)rt_nil_check(F->y_1873)).mvalue_);
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check(F->e_501)).a_))) {
F->y_1873 = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->e_501)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), G_NV((*(P174)rt_nil_check(F->e_501)).line_));
if ((((F->y_1873 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1873)).hasmv_))) {
(*F->ok_503) = 1;
(*F->v_502) = G_NV((*(P117)rt_nil_check(F->y_1873)).mvalue_);
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)10LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_501)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1873 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_501)).a_)).name_)));
if (((((F->y_1873 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1873)).c_ != NULL)) && G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1873)).c_)).hasm_))) {
(*F->ok_503) = 1;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_501)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_502) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1873)).c_)).mlo_);
} else {
(*F->v_502) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1873)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_501)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_501)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_308(F->up, (*(P174)rt_nil_check(F->e_501)).b_) == ((rt_int)1LL)))) {
F->y_1873 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_501)).a_)).name_)));
if (((((F->y_1873 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1873)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1873)).t_ != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1873)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_501)).b_, &(*F->v_502), &(*F->ok_503));
 (void)rt_range((*F->ok_503), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_508(struct f_greenc_1fr *up_, P174 st_505, P122 *t_506, P178 *c_507) {
  struct f_resolve_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_505 = st_505;
F->t_506 = t_506;
F->c_507 = c_507;
F->y_1874 = NULL;
F->dummy_1875 = NULL;
F->code_1876 = NULL;
F->ok_1877 = INT_MIN;
F->r_1878 = NULL;
(*F->c_507) = f_new_cons_473(F->up);
if ((G_NV((*(P174)rt_nil_check(F->st_505)).kind_) != ((rt_int)80LL))) {
f_type_definition_542(F->up, F->st_505, NULL, &(*F->t_506), &(*F->c_507));
goto ret_;
}
if (((*(P174)rt_nil_check(F->st_505)).tag_ != NULL)) {
F->y_1874 = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_505)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_505)).name_)), G_NV((*(P174)rt_nil_check(F->st_505)).line_));
} else {
F->y_1874 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_505)).name_)));
}
if (((F->y_1874 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1874)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_505)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_505)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_506) = (*(P117)rt_nil_check(F->y_1874)).t_;
if (((*(P117)rt_nil_check(F->y_1874)).c_ != NULL)) {
(*(P178)rt_nil_check((*F->c_507))).lo_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).lo_;
(*(P178)rt_nil_check((*F->c_507))).hi_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).hi_;
(*(P178)rt_nil_check((*F->c_507))).slen_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).slen_;
(*(P178)rt_nil_check((*F->c_507))).mlo_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).mlo_);
(*(P178)rt_nil_check((*F->c_507))).mhi_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).mhi_);
(*(P178)rt_nil_check((*F->c_507))).hasm_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).hasm_);
(*(P178)rt_nil_check((*F->c_507))).acc_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).acc_;
(*(P178)rt_nil_check((*F->c_507))).inner_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).inner_;
(*(P178)rt_nil_check((*F->c_507))).dv_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1874)).c_)).dv_;
}
if (((*F->t_506) == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_505)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_505)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P174)rt_nil_check(F->st_505)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_506))).kind_) != ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check((*F->t_506))).kind_) != ((rt_int)16LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_505)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->st_505)).b_, NULL, &F->dummy_1875, &(*(P178)rt_nil_check((*F->c_507))).acc_);
}
if (((G_NV((*(P174)rt_nil_check(F->st_505)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P174)rt_nil_check(F->st_505)).flag_) == ((rt_int)3LL)) && ((*(P174)rt_nil_check(F->st_505)).a_ != NULL)))) {
F->r_1878 = (*(P174)rt_nil_check(F->st_505)).a_;
if (((!f_is_numeric_451(F->up, (*F->t_506))) && (!f_is_discrete_453(F->up, (*F->t_506))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_505)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_526(F->up, F->r_1878, (*F->t_506), (*F->c_507));
} else if ((G_NV((*(P174)rt_nil_check(F->st_505)).flag_) == ((rt_int)2LL))) {
f_constraint_list_512(F->up, F->st_505, (*F->t_506), (*F->c_507));
}
ret_:

  return;
}

static void f_constraint_list_512(struct f_greenc_1fr *up_, P174 st_509, P122 t_510, P178 c_511) {
  struct f_constraint_list_512fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_509 = st_509;
F->t_510 = t_510;
F->c_511 = c_511;
F->r_1879 = NULL;
F->r_1879 = (*(P174)rt_nil_check(F->st_509)).a_;
F->arrt_1880 = NULL;
F->arrt_1880 = F->t_510;
F->cc_1881 = NULL;
F->cc_1881 = F->c_511;
F->it_1882 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_510)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_516(F->up, F->st_509, F->t_510, F->c_511);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->t_510)).kind_) != ((rt_int)6LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_509)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_308(F->up, F->r_1879) != G_NV((*(P122)rt_nil_check(F->t_510)).dims_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_509)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->t_510)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1879 != NULL)) {
if (((*(P174)rt_nil_check(F->r_1879)).formal_ != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_509)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_522(F->up, F->r_1879, (*(P122)rt_nil_check(F->arrt_1880)).idx_, &F->it_1882, &(*(P178)rt_nil_check(F->cc_1881)).lo_, &(*(P178)rt_nil_check(F->cc_1881)).hi_);
f_check_type_487(F->up, F->it_1882, (*(P122)rt_nil_check(F->arrt_1880)).idx_, G_NV((*(P174)rt_nil_check(F->st_509)).line_));
(*(P178)rt_nil_check(F->cc_1881)).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1881)).mhi_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1881)).hasm_ = 0;
F->r_1879 = (*(P174)rt_nil_check(F->r_1879)).next_;
if ((F->r_1879 != NULL)) {
(*(P178)rt_nil_check(F->cc_1881)).inner_ = f_new_cons_473(F->up);
F->cc_1881 = (*(P178)rt_nil_check(F->cc_1881)).inner_;
F->arrt_1880 = (*(P122)rt_nil_check(F->arrt_1880)).elem_;
}
}
L_end_1883: ;
ret_:

  return;
}

static void f_discriminant_constraint_516(struct f_greenc_1fr *up_, P174 st_513, P122 t_514, P178 c_515) {
  struct f_discriminant_constraint_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_513 = st_513;
F->t_514 = t_514;
F->c_515 = c_515;
F->a_1884 = NULL;
F->a_1884 = (*(P174)rt_nil_check(F->st_513)).a_;
F->f_1885 = NULL;
F->f_1885 = (*(P122)rt_nil_check(F->t_514)).fields_;
F->vt_1886 = NULL;
F->v_1887 = NULL;
F->d_1888 = NULL;
F->tail_1889 = NULL;
(*(P178)rt_nil_check(F->c_515)).dv_ = NULL;
while ((F->a_1884 != NULL)) {
if (((*(P174)rt_nil_check(F->a_1884)).formal_ != NULL)) {
F->f_1885 = (*(P122)rt_nil_check(F->t_514)).fields_;
while (((F->f_1885 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_1885)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1884)).formal_)))))) {
F->f_1885 = (*(P1846)rt_nil_check(F->f_1885)).next_;
}
L_end_1891: ;
} else {
while (((F->f_1885 != NULL) && (!G_NV((*(P1846)rt_nil_check(F->f_1885)).is_discr_)))) {
F->f_1885 = (*(P1846)rt_nil_check(F->f_1885)).next_;
}
L_end_1892: ;
}
if (((F->f_1885 == NULL) || (!G_NV((*(P1846)rt_nil_check(F->f_1885)).is_discr_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_483(F->up, F->t_514)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_806(F->up, F->a_1884, (*(P1846)rt_nil_check(F->f_1885)).t_, &F->vt_1886, &F->v_1887);
f_check_type_487(F->up, F->vt_1886, (*(P1846)rt_nil_check(F->f_1885)).t_, G_NV((*(P174)rt_nil_check(F->st_513)).line_));
F->d_1888 = ({ R1851 *cell1893 = rt_alloc(sizeof(R1851)); *cell1893 = cp_R1851(({ R1851 ag1894; ag1894.name_ = (*(P1846)rt_nil_check(F->f_1885)).name_; ag1894.v_ = F->v_1887; ag1894.next_ = NULL; ag1894; })); (P1850)cell1893; });
if ((F->tail_1889 == NULL)) {
(*(P178)rt_nil_check(F->c_515)).dv_ = F->d_1888;
} else {
(*(P1850)rt_nil_check(F->tail_1889)).next_ = F->d_1888;
}
F->tail_1889 = F->d_1888;
if (((*(P174)rt_nil_check(F->a_1884)).formal_ == NULL)) {
F->f_1885 = (*(P1846)rt_nil_check(F->f_1885)).next_;
}
F->a_1884 = (*(P174)rt_nil_check(F->a_1884)).next_;
}
L_end_1890: ;
F->f_1885 = (*(P122)rt_nil_check(F->t_514)).fields_;
while ((F->f_1885 != NULL)) {
if (G_NV((*(P1846)rt_nil_check(F->f_1885)).is_discr_)) {
F->d_1888 = (*(P178)rt_nil_check(F->c_515)).dv_;
while (((F->d_1888 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_1888)).name_)), (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_1885)).name_)))))) {
F->d_1888 = (*(P1850)rt_nil_check(F->d_1888)).next_;
}
L_end_1896: ;
if ((F->d_1888 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->st_513)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_1885)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1885 = (*(P1846)rt_nil_check(F->f_1885)).next_;
}
L_end_1895: ;
ret_:

  return;
}

static void f_discrete_bounds_522(struct f_greenc_1fr *up_, P174 r_517, P122 want_518, P122 *t_519, P140 *lo_520, P140 *hi_521) {
  struct f_discrete_bounds_522fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_517 = r_517;
F->want_518 = want_518;
F->t_519 = t_519;
F->lo_520 = lo_520;
F->hi_521 = hi_521;
F->c_1897 = NULL;
F->y_1898 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->r_517)).kind_) == ((rt_int)14LL))) {
f_range_bounds_801(F->up, (*(P174)rt_nil_check(F->r_517)).a_, (*(P174)rt_nil_check(F->r_517)).b_, F->want_518, G_NV((*(P174)rt_nil_check(F->r_517)).line_), &(*F->t_519), &(*F->lo_520), &(*F->hi_521));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->r_517)).kind_) == ((rt_int)5LL))) {
F->y_1898 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_517)).name_)));
if (((F->y_1898 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1898)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->r_517)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P174)rt_nil_check(F->r_517)).kind_) != ((rt_int)80LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->r_517)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P174)rt_nil_check(F->r_517)).kind_) == ((rt_int)5LL))) {
(*F->t_519) = (*(P117)rt_nil_check(F->y_1898)).t_;
F->c_1897 = (*(P117)rt_nil_check(F->y_1898)).c_;
} else {
f_resolve_508(F->up, F->r_517, &(*F->t_519), &F->c_1897);
}
if (((F->c_1897 == NULL) || ((*(P178)rt_nil_check(F->c_1897)).lo_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->r_517)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_520) = (*(P178)rt_nil_check(F->c_1897)).lo_;
(*F->hi_521) = (*(P178)rt_nil_check(F->c_1897)).hi_;
ret_:

  return;
}

static void f_range_of_526(struct f_greenc_1fr *up_, P174 r_523, P122 t_524, P178 c_525) {
  struct f_range_of_526fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_523 = r_523;
F->t_524 = t_524;
F->c_525 = c_525;
F->dummy_1899 = NULL;
F->ok_1900 = INT_MIN;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->r_523)).a_, F->t_524, &F->dummy_1899, &(*(P178)rt_nil_check(F->c_525)).lo_);
f_check_type_487(F->up, F->dummy_1899, F->t_524, G_NV((*(P174)rt_nil_check(F->r_523)).line_));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->r_523)).b_, F->t_524, &F->dummy_1899, &(*(P178)rt_nil_check(F->c_525)).hi_);
f_check_type_487(F->up, F->dummy_1899, F->t_524, G_NV((*(P174)rt_nil_check(F->r_523)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_524)).kind_) == ((rt_int)16LL))) {
(*(P178)rt_nil_check(F->c_525)).lo_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_525)).lo_))), one_rt_gstr(41)));
(*(P178)rt_nil_check(F->c_525)).hi_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_525)).hi_))), one_rt_gstr(41)));
}
f_manifest_504(F->up, (*(P174)rt_nil_check(F->r_523)).a_, &(*(P178)rt_nil_check(F->c_525)).mlo_, &F->ok_1900);
 (void)rt_range(F->ok_1900, 0, 1);
(*(P178)rt_nil_check(F->c_525)).hasm_ = G_NV(F->ok_1900);
f_manifest_504(F->up, (*(P174)rt_nil_check(F->r_523)).b_, &(*(P178)rt_nil_check(F->c_525)).mhi_, &F->ok_1900);
 (void)rt_range(F->ok_1900, 0, 1);
(*(P178)rt_nil_check(F->c_525)).hasm_ = (G_NV((*(P178)rt_nil_check(F->c_525)).hasm_) && G_NV(F->ok_1900));
ret_:

  return;
}

static void f_fresh_typ_530(struct f_greenc_1fr *up_, rt_int kind_527, P140 name_528, P122 *t_529) {
  struct f_fresh_typ_530fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_527 = kind_527;
F->name_528 = name_528;
F->t_529 = t_529;
F->ph_1901 = NULL;
F->ph_1901 = F->up->completing_173;
F->up->completing_173 = NULL;
if ((F->ph_1901 == NULL)) {
(*F->t_529) = f_new_typ_472(F->up, F->kind_527);
(*(P122)rt_nil_check((*F->t_529))).name_ = F->name_528;
goto ret_;
}
as_R123(&(*(P122)rt_nil_check(F->ph_1901)), (*(P122)rt_nil_check(f_new_typ_472(F->up, F->kind_527))));
(*(P122)rt_nil_check(F->ph_1901)).name_ = F->name_528;
(*F->t_529) = F->ph_1901;
ret_:

  return;
}

static void f_inherit_534(struct f_greenc_1fr *up_, P122 parent_531, P122 t_532, rt_int line_533) {
  struct f_inherit_534fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_531 = parent_531;
F->t_532 = t_532;
F->line_533 = line_533;
F->s_1902 = NULL;
F->s_1902 = F->up->scope_stack_121;
F->z_1903 = NULL;
F->p_1904 = NULL;
F->q_1905 = NULL;
F->tail_1906 = NULL;
F->uses_1907 = INT_MIN;
F->news_1908 = NULL;
while ((F->s_1902 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_1902)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->s_1902)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->s_1902)).hidden_))) && ((*(P117)rt_nil_check(F->s_1902)).members_ == NULL))) {
F->uses_1907 = f_same_444(F->up, (*(P117)rt_nil_check(F->s_1902)).result_, F->parent_531);
F->p_1904 = (*(P117)rt_nil_check(F->s_1902)).params_;
while ((F->p_1904 != NULL)) {
F->uses_1907 = (G_NV(F->uses_1907) || f_same_444(F->up, (*(P1828)rt_nil_check(F->p_1904)).t_, F->parent_531));
F->p_1904 = (*(P1828)rt_nil_check(F->p_1904)).next_;
}
L_end_1910: ;
if (G_NV(F->uses_1907)) {
f_copy_sym_1054(F->up, F->s_1902, &F->z_1903);
(*(P117)rt_nil_check(F->z_1903)).params_ = NULL;
F->tail_1906 = NULL;
F->p_1904 = (*(P117)rt_nil_check(F->s_1902)).params_;
while ((F->p_1904 != NULL)) {
F->q_1905 = ({ R1829 *cell1912 = rt_alloc(sizeof(R1829)); *cell1912 = cp_R1829(({ R1829 ag1913; ag1913.name_ = (*(P1828)rt_nil_check(F->p_1904)).name_; ag1913.mode_ = G_NV((*(P1828)rt_nil_check(F->p_1904)).mode_); ag1913.t_ = (*(P1828)rt_nil_check(F->p_1904)).t_; ag1913.c_ = (*(P1828)rt_nil_check(F->p_1904)).c_; ag1913.cfield_ = (*(P1828)rt_nil_check(F->p_1904)).cfield_; ag1913.dflt_ = (*(P1828)rt_nil_check(F->p_1904)).dflt_; ag1913.next_ = NULL; ag1913.dsym_ = (*(P1828)rt_nil_check(F->p_1904)).dsym_; ag1913; })); (P1828)cell1912; });
if (f_same_444(F->up, (*(P1828)rt_nil_check(F->q_1905)).t_, F->parent_531)) {
(*(P1828)rt_nil_check(F->q_1905)).t_ = F->t_532;
}
if ((F->tail_1906 == NULL)) {
(*(P117)rt_nil_check(F->z_1903)).params_ = F->q_1905;
} else {
(*(P1828)rt_nil_check(F->tail_1906)).next_ = F->q_1905;
}
F->tail_1906 = F->q_1905;
F->p_1904 = (*(P1828)rt_nil_check(F->p_1904)).next_;
}
L_end_1911: ;
if (f_same_444(F->up, (*(P117)rt_nil_check(F->z_1903)).result_, F->parent_531)) {
(*(P117)rt_nil_check(F->z_1903)).result_ = F->t_532;
}
(*(P117)rt_nil_check(F->z_1903)).chain_ = F->news_1908;
F->news_1908 = F->z_1903;
}
}
F->s_1902 = (*(P117)rt_nil_check(F->s_1902)).stack_;
}
L_end_1909: ;
while ((F->news_1908 != NULL)) {
F->z_1903 = F->news_1908;
F->news_1908 = (*(P117)rt_nil_check(F->news_1908)).chain_;
(*(P117)rt_nil_check(F->z_1903)).chain_ = NULL;
f_define_465(F->up, F->z_1903, F->line_533);
}
L_end_1914: ;
ret_:

  return;
}

static void f_derive_literals_537(struct f_greenc_1fr *up_, P122 t_535, rt_int line_536) {
  struct f_derive_literals_537fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_535 = t_535;
F->line_536 = line_536;
F->l_1915 = NULL;
F->l_1915 = (*(P122)rt_nil_check(F->t_535)).lits_;
F->n_1916 = INT64_MIN;
F->n_1916 = ((rt_int)0LL);
F->y_1917 = NULL;
while ((F->l_1915 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1915)).kind_) == ((rt_int)5LL))) {
F->y_1917 = f_new_sym_470(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1915)).name_);
(*(P117)rt_nil_check(F->y_1917)).t_ = F->t_535;
(*(P117)rt_nil_check(F->y_1917)).result_ = F->t_535;
(*(P117)rt_nil_check(F->y_1917)).mvalue_ = G_NV(F->n_1916);
(*(P117)rt_nil_check(F->y_1917)).hasmv_ = 1;
f_define_465(F->up, F->y_1917, F->line_536);
}
F->n_1916 = rt_add(G_NV(F->n_1916), ((rt_int)1LL));
F->l_1915 = (*(P174)rt_nil_check(F->l_1915)).next_;
}
L_end_1918: ;
ret_:

  return;
}

static void f_type_definition_542(struct f_greenc_1fr *up_, P174 d_538, P140 name_539, P122 *t_540, P178 *c_541) {
  struct f_type_definition_542fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_538 = d_538;
F->name_539 = name_539;
F->t_540 = t_540;
F->c_541 = c_541;
F->dummy_1919 = NULL;
F->it_1920 = NULL;
F->ic_1921 = NULL;
F->l_1922 = NULL;
F->comp_1923 = NULL;
F->f_1924 = NULL;
F->tail_1925 = NULL;
F->ok_1926 = INT_MIN;
F->n_1927 = INT64_MIN;
F->y_1928 = NULL;
(*F->c_541) = f_new_cons_473(F->up);
{ rt_int sel1929 = G_NV((*(P174)rt_nil_check(F->d_538)).kind_);
if (0 || sel1929 == ((rt_int)70LL)) {
f_fresh_typ_530(F->up, ((rt_int)4LL), F->name_539, &(*F->t_540));
(*(P122)rt_nil_check((*F->t_540))).lits_ = (*(P174)rt_nil_check(F->d_538)).a_;
F->l_1922 = (*(P174)rt_nil_check(F->d_538)).a_;
F->n_1927 = ((rt_int)0LL);
while ((F->l_1922 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_1922)).kind_) == ((rt_int)5LL))) {
F->y_1928 = f_new_sym_470(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_1922)).name_);
(*(P117)rt_nil_check(F->y_1928)).t_ = (*F->t_540);
(*(P117)rt_nil_check(F->y_1928)).result_ = (*F->t_540);
(*(P117)rt_nil_check(F->y_1928)).mvalue_ = G_NV(F->n_1927);
(*(P117)rt_nil_check(F->y_1928)).hasmv_ = 1;
f_define_465(F->up, F->y_1928, G_NV((*(P174)rt_nil_check(F->l_1922)).line_));
}
F->n_1927 = rt_add(G_NV(F->n_1927), ((rt_int)1LL));
F->l_1922 = (*(P174)rt_nil_check(F->l_1922)).next_;
}
L_end_1930: ;
(*(P178)rt_nil_check((*F->c_541))).lo_ = f_mk_228(F->up, rt_g_lit("0", 1));
(*(P178)rt_nil_check((*F->c_541))).hi_ = f_mk_228(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_1927), ((rt_int)1LL)))));
(*(P178)rt_nil_check((*F->c_541))).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check((*F->c_541))).mhi_ = rt_sub(G_NV(F->n_1927), ((rt_int)1LL));
(*(P178)rt_nil_check((*F->c_541))).hasm_ = 1;
} else if (0 || sel1929 == ((rt_int)71LL)) {
f_fresh_typ_530(F->up, ((rt_int)1LL), F->name_539, &(*F->t_540));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->d_538)).a_, F->up->ty_int_156, &F->dummy_1919, &(*(P178)rt_nil_check((*F->c_541))).lo_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1919)).kind_) != ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_538)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->d_538)).b_, F->up->ty_int_156, &F->dummy_1919, &(*(P178)rt_nil_check((*F->c_541))).hi_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_1919)).kind_) != ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_538)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_504(F->up, (*(P174)rt_nil_check(F->d_538)).a_, &(*(P178)rt_nil_check((*F->c_541))).mlo_, &F->ok_1926);
 (void)rt_range(F->ok_1926, 0, 1);
(*(P178)rt_nil_check((*F->c_541))).hasm_ = G_NV(F->ok_1926);
f_manifest_504(F->up, (*(P174)rt_nil_check(F->d_538)).b_, &(*(P178)rt_nil_check((*F->c_541))).mhi_, &F->ok_1926);
 (void)rt_range(F->ok_1926, 0, 1);
(*(P178)rt_nil_check((*F->c_541))).hasm_ = (G_NV((*(P178)rt_nil_check((*F->c_541))).hasm_) && G_NV(F->ok_1926));
(*(P122)rt_nil_check((*F->t_540))).parent_ = F->up->ty_int_156;
(*(P122)rt_nil_check((*F->t_540))).tcons_ = (*F->c_541);
if ((G_NV((*(P178)rt_nil_check((*F->c_541))).hasm_) && ((G_NV((*(P178)rt_nil_check((*F->c_541))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P178)rt_nil_check((*F->c_541))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P122)rt_nil_check((*F->t_540))).parent_ = F->up->ty_short_167;
}
f_inherit_534(F->up, (*(P122)rt_nil_check((*F->t_540))).parent_, (*F->t_540), G_NV((*(P174)rt_nil_check(F->d_538)).line_));
} else if (0 || sel1929 == ((rt_int)72LL)) {
f_real_type_606(F->up, F->d_538, F->name_539, &(*F->t_540), &(*F->c_541));
} else if (0 || sel1929 == ((rt_int)73LL)) {
f_array_type_549(F->up, (*(P174)rt_nil_check(F->d_538)).a_, (*(P174)rt_nil_check(F->d_538)).b_, F->name_539, G_NV((*(P174)rt_nil_check(F->d_538)).line_), &(*F->t_540), &(*F->c_541));
} else if (0 || sel1929 == ((rt_int)74LL)) {
f_fresh_typ_530(F->up, ((rt_int)7LL), F->name_539, &(*F->t_540));
F->up->disc_syms_182 = NULL;
f_record_components_587(F->up, (*(P174)rt_nil_check(F->d_538)).a_, (*F->t_540), NULL, G_NV((*(P174)rt_nil_check(F->d_538)).line_));
while ((F->up->disc_syms_182 != NULL)) {
f_remove_sym_582(F->up, F->up->disc_syms_182);
F->up->disc_syms_182 = (*(P117)rt_nil_check(F->up->disc_syms_182)).mnext_;
}
L_end_1931: ;
} else if (0 || sel1929 == ((rt_int)75LL)) {
f_fresh_typ_530(F->up, ((rt_int)8LL), F->name_539, &(*F->t_540));
(*(P122)rt_nil_check((*F->t_540))).decl_ = (*(P174)rt_nil_check(F->d_538)).a_;
if (((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_538)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_538)).a_)).name_))) != NULL)) && (G_NV((*(P117)rt_nil_check(f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_538)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_538)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_608(F->up, (*F->t_540));
}
} else if (0 || sel1929 == ((rt_int)76LL)) {
f_derived_type_601(F->up, F->d_538, F->name_539, &(*F->t_540), &(*F->c_541));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_538)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_549(struct f_greenc_1fr *up_, P174 idx_543, P174 comp_544, P140 name_545, rt_int line_546, P122 *t_547, P178 *c_548) {
  struct f_array_type_549fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_543 = idx_543;
F->comp_544 = comp_544;
F->name_545 = name_545;
F->line_546 = line_546;
F->t_547 = t_547;
F->c_548 = c_548;
F->l_1932 = NULL;
F->l_1932 = F->idx_543;
F->rowc_1933 = NULL;
F->ic_1934 = NULL;
F->it_1935 = NULL;
(*F->c_548) = f_new_cons_473(F->up);
f_fresh_typ_530(F->up, ((rt_int)6LL), F->name_545, &(*F->t_547));
(*(P122)rt_nil_check((*F->t_547))).dims_ = f_list_len_308(F->up, F->idx_543);
if (((*(P174)rt_nil_check(F->idx_543)).next_ == NULL)) {
f_resolve_508(F->up, F->comp_544, &(*(P122)rt_nil_check((*F->t_547))).elem_, &(*(P122)rt_nil_check((*F->t_547))).elemcons_);
} else {
if (((G_NV((*(P174)rt_nil_check(F->idx_543)).kind_) == ((rt_int)14LL)) != (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->idx_543)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_249(F->up, F->line_546, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_549(F->up, (*(P174)rt_nil_check(F->idx_543)).next_, F->comp_544, NULL, F->line_546, &(*(P122)rt_nil_check((*F->t_547))).elem_, &F->rowc_1933);
if (((*(P178)rt_nil_check(F->rowc_1933)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_547))).elemcons_ = F->rowc_1933;
}
}
if ((G_NV((*(P174)rt_nil_check(F->l_1932)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_522(F->up, F->l_1932, NULL, &(*(P122)rt_nil_check((*F->t_547))).idx_, &(*(P178)rt_nil_check((*F->c_548))).lo_, &(*(P178)rt_nil_check((*F->c_548))).hi_);
f_static_range_553(F->up, (*(P174)rt_nil_check(F->l_1932)).a_, (*(P174)rt_nil_check(F->l_1932)).b_, (*F->c_548));
} else if (((G_NV((*(P174)rt_nil_check(F->l_1932)).kind_) == ((rt_int)80LL)) && (G_NV((*(P174)rt_nil_check(F->l_1932)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_522(F->up, F->l_1932, NULL, &(*(P122)rt_nil_check((*F->t_547))).idx_, &(*(P178)rt_nil_check((*F->c_548))).lo_, &(*(P178)rt_nil_check((*F->c_548))).hi_);
} else {
f_resolve_508(F->up, F->l_1932, &(*(P122)rt_nil_check((*F->t_547))).idx_, &F->ic_1934);
if (((((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_547))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_547))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_547))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P178)rt_nil_check(F->ic_1934)).hasm_) && ((rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1934)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1934)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P178)rt_nil_check(F->ic_1934)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_1934)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P178)rt_nil_check((*F->c_548))).lo_ = (*(P178)rt_nil_check(F->ic_1934)).lo_;
(*(P178)rt_nil_check((*F->c_548))).hi_ = (*(P178)rt_nil_check(F->ic_1934)).hi_;
(*(P178)rt_nil_check((*F->c_548))).mlo_ = G_NV((*(P178)rt_nil_check(F->ic_1934)).mlo_);
(*(P178)rt_nil_check((*F->c_548))).mhi_ = G_NV((*(P178)rt_nil_check(F->ic_1934)).mhi_);
(*(P178)rt_nil_check((*F->c_548))).hasm_ = G_NV((*(P178)rt_nil_check(F->ic_1934)).hasm_);
} else if (((*(P178)rt_nil_check(F->ic_1934)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_547))).tcons_ = f_new_cons_473(F->up);
(*(P178)rt_nil_check((*(P122)rt_nil_check((*F->t_547))).tcons_)).lo_ = (*(P178)rt_nil_check(F->ic_1934)).lo_;
}
}
if ((!f_is_discrete_453(F->up, (*(P122)rt_nil_check((*F->t_547))).idx_))) {
f_fail_249(F->up, F->line_546, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P122)rt_nil_check((*F->t_547))).dims_) > ((rt_int)1LL))) {
(*(P178)rt_nil_check((*F->c_548))).inner_ = F->rowc_1933;
if ((((*(P178)rt_nil_check((*F->c_548))).lo_ == NULL) != ((*(P178)rt_nil_check(F->rowc_1933)).lo_ == NULL))) {
(*(P178)rt_nil_check((*F->c_548))).lo_ = NULL;
(*(P178)rt_nil_check((*F->c_548))).hi_ = NULL;
(*(P178)rt_nil_check((*F->c_548))).inner_ = NULL;
(*(P122)rt_nil_check((*F->t_547))).elemcons_ = NULL;
}
}
if (((*(P178)rt_nil_check((*F->c_548))).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_547))).tcons_ = (*F->c_548);
}
ret_:

  return;
}

static void f_static_range_553(struct f_greenc_1fr *up_, P174 l_550, P174 h_551, P178 c_552) {
  struct f_static_range_553fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_550 = l_550;
F->h_551 = h_551;
F->c_552 = c_552;
F->ok_1936 = INT_MIN;
F->ok2_1937 = INT_MIN;
f_manifest_504(F->up, F->l_550, &(*(P178)rt_nil_check(F->c_552)).mlo_, &F->ok_1936);
 (void)rt_range(F->ok_1936, 0, 1);
f_manifest_504(F->up, F->h_551, &(*(P178)rt_nil_check(F->c_552)).mhi_, &F->ok2_1937);
 (void)rt_range(F->ok2_1937, 0, 1);
if ((f_is_char_lit_787(F->up, F->l_550) && f_is_char_lit_787(F->up, F->h_551))) {
(*(P178)rt_nil_check(F->c_552)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1938 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_550)).name_)); ix1938.p[rt_index(((rt_int)1LL), ix1938.lo, ix1938.hi) - ix1938.lo]; }))) + 1), ((rt_int)1LL));
(*(P178)rt_nil_check(F->c_552)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix1939 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->h_551)).name_)); ix1939.p[rt_index(((rt_int)1LL), ix1939.lo, ix1939.hi) - ix1939.lo]; }))) + 1), ((rt_int)1LL));
F->ok_1936 = 1;
F->ok2_1937 = 1;
}
(*(P178)rt_nil_check(F->c_552)).hasm_ = (G_NV(F->ok_1936) && G_NV(F->ok2_1937));
ret_:

  return;
}

static void f_component_place_559(struct f_greenc_1fr *up_, P122 rt_554, P1846 f_555, rt_gstr a_556, rt_gstr ct_557, P140 *r_558) {
  struct f_component_place_559fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_554 = rt_554;
F->f_555 = f_555;
F->a_556 = cp_rt_gstr(a_556);
F->ct_557 = cp_rt_gstr(ct_557);
F->r_558 = r_558;
F->bits_1940 = NULL;
if (eq_rt_gstr(F->a_556, rt_g_lit("POSITION", 8))) {
(*F->r_558) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_557), rt_g_lit(", ", 2)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_555)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_556, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_558) = f_mk_228(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_558) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_557), rt_g_lit(" *)0)->", 7)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_555)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_561(struct f_greenc_1fr *up_, P122 t_560) {
  struct f_no_value_561fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_560 = t_560;
if (((G_NV((*(P122)rt_nil_check(F->t_560)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_560)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P122)rt_nil_check(F->t_560)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_563(struct f_greenc_1fr *up_, P122 t_562) {
  struct f_restricted_here_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_562 = t_562;
if ((!G_NV((*(P122)rt_nil_check(F->t_562)).is_restricted_))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (!f_inside_package_1051(F->up, (*(P122)rt_nil_check(F->t_562)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_566(struct f_greenc_1fr *up_, P122 t_564, P140 *r_565) {
  struct f_elem_ctype_566fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_564 = t_564;
F->r_565 = r_565;
if ((G_NV((*(P122)rt_nil_check(F->t_564)).kind_) == ((rt_int)11LL))) {
(*F->r_565) = f_mk_228(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_492(F->up, F->t_564, &(*F->r_565));
}
ret_:

  return;
}

static void f_first_index_569(struct f_greenc_1fr *up_, P122 t_567, P140 *r_568) {
  struct f_first_index_569fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_567 = t_567;
F->r_568 = r_568;
if ((((*(P122)rt_nil_check(F->t_567)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_567)).tcons_)).lo_ != NULL))) {
(*F->r_568) = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_567)).tcons_)).lo_;
} else if ((((*(P122)rt_nil_check(F->t_567)).idx_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_567)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_568) = f_mk_228(F->up, rt_g_lit("1", 1));
} else {
(*F->r_568) = f_mk_228(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_571(struct f_greenc_1fr *up_, P122 t_570) {
  struct f_is_string_571fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_570 = t_570;
if ((!(F->t_570 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P122)rt_nil_check(F->t_570)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_449(F->up, F->t_570, F->up->ty_string_160);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_574(struct f_greenc_1fr *up_, rt_gstr s_572, rt_gstr r_573) {
  struct f_subst_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_572 = cp_rt_gstr(s_572);
F->r_573 = cp_rt_gstr(r_573);
{ rt_int lo1945 = ({ rt_gstr at1942 = F->s_572; at1942.lo; }), hi1946 = rt_sub(({ rt_gstr at1943 = F->s_572; at1943.hi; }), ((rt_int)1LL));
for (rt_int it1947 = lo1945; it1947 <= hi1946; it1947++) {
F->i_1944 = it1947;
if (((G_NV(({ rt_gstr ix1948 = F->s_572; ix1948.p[rt_index(F->i_1944, ix1948.lo, ix1948.hi) - ix1948.lo]; })) == 64) && (G_NV(({ rt_gstr ix1949 = F->s_572; ix1949.p[rt_index(rt_add(F->i_1944, ((rt_int)1LL)), ix1949.lo, ix1949.hi) - ix1949.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl1951 = F->s_572; rt_int l_ = ({ rt_gstr at1950 = F->s_572; at1950.lo; }), h_ = rt_sub(F->i_1944, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl1951.lo, sl1951.hi); rt_index(h_, sl1951.lo, sl1951.hi); } sl1951.p += l_ - sl1951.lo; sl1951.lo = l_; sl1951.hi = h_; sl1951; }), F->r_573), f_subst_574(F->up, ({ rt_gstr sl1955 = F->s_572; rt_int l_ = rt_add(F->i_1944, ((rt_int)2LL)), h_ = ({ rt_gstr at1954 = F->s_572; at1954.hi; }); if (l_ <= h_) { rt_index(l_, sl1955.lo, sl1955.hi); rt_index(h_, sl1955.lo, sl1955.hi); } sl1955.p += l_ - sl1955.lo; sl1955.lo = l_; sl1955.hi = h_; sl1955; }), F->r_573));
goto ret_;
}
}
}
L_end_1941: ;
F->result_ = F->s_572;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_576(struct f_greenc_1fr *up_, P140 s_575) {
  struct f_mentions_record_576fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_575 = s_575;
if ((F->s_575 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1959 = ((rt_int)1LL), hi1960 = rt_sub(({ rt_gstr at1957 = (*(P140)rt_nil_check(F->s_575)); at1957.hi >= at1957.lo ? at1957.hi - at1957.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it1961 = lo1959; it1961 <= hi1960; it1961++) {
F->i_1958 = it1961;
if (((G_NV(({ rt_gstr ix1962 = (*(P140)rt_nil_check(F->s_575)); ix1962.p[rt_index(F->i_1958, ix1962.lo, ix1962.hi) - ix1962.lo]; })) == 64) && (G_NV(({ rt_gstr ix1963 = (*(P140)rt_nil_check(F->s_575)); ix1963.p[rt_index(rt_add(F->i_1958, ((rt_int)1LL)), ix1963.lo, ix1963.hi) - ix1963.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_1956: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_580(struct f_greenc_1fr *up_, P178 c_577, rt_gstr r_578, P178 *res_579) {
  struct f_subst_cons_580fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_577 = c_577;
F->r_578 = cp_rt_gstr(r_578);
F->res_579 = res_579;
if (((F->c_577 == NULL) || (!(f_mentions_record_576(F->up, (*(P178)rt_nil_check(F->c_577)).lo_) || f_mentions_record_576(F->up, (*(P178)rt_nil_check(F->c_577)).hi_))))) {
(*F->res_579) = F->c_577;
goto ret_;
}
(*F->res_579) = f_new_cons_473(F->up);
as_R179(&(*(P178)rt_nil_check((*F->res_579))), (*(P178)rt_nil_check(F->c_577)));
(*(P178)rt_nil_check((*F->res_579))).lo_ = f_mk_228(F->up, f_subst_574(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_577)).lo_)), F->r_578));
(*(P178)rt_nil_check((*F->res_579))).hi_ = f_mk_228(F->up, f_subst_574(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_577)).hi_)), F->r_578));
ret_:

  return;
}

static void f_remove_sym_582(struct f_greenc_1fr *up_, P117 y_581) {
  struct f_remove_sym_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_581 = y_581;
F->h_1964 = INT64_MIN;
F->h_1964 = f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_581)).name_)));
F->p_1965 = NULL;
if ((({ A116 ix1966 = F->up->table_119; ix1966.p[rt_index(G_NV(F->h_1964), ix1966.lo, ix1966.hi) - ix1966.lo]; }) == F->y_581)) {
(*({ A116 *ix1967 = &(F->up->table_119); &ix1967->p[rt_index(G_NV(F->h_1964), ix1967->lo, ix1967->hi) - ix1967->lo]; })) = (*(P117)rt_nil_check(F->y_581)).chain_;
} else {
F->p_1965 = ({ A116 ix1968 = F->up->table_119; ix1968.p[rt_index(G_NV(F->h_1964), ix1968.lo, ix1968.hi) - ix1968.lo]; });
while (((F->p_1965 != NULL) && ((*(P117)rt_nil_check(F->p_1965)).chain_ != F->y_581))) {
F->p_1965 = (*(P117)rt_nil_check(F->p_1965)).chain_;
}
L_end_1969: ;
if ((F->p_1965 != NULL)) {
(*(P117)rt_nil_check(F->p_1965)).chain_ = (*(P117)rt_nil_check(F->y_581)).chain_;
}
}
if ((F->up->scope_stack_121 == F->y_581)) {
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->y_581)).stack_;
} else {
F->p_1965 = F->up->scope_stack_121;
while (((F->p_1965 != NULL) && ((*(P117)rt_nil_check(F->p_1965)).stack_ != F->y_581))) {
F->p_1965 = (*(P117)rt_nil_check(F->p_1965)).stack_;
}
L_end_1970: ;
if ((F->p_1965 != NULL)) {
(*(P117)rt_nil_check(F->p_1965)).stack_ = (*(P117)rt_nil_check(F->y_581)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_587(struct f_greenc_1fr *up_, P174 list_583, P122 t_584, P1971 g_585, rt_int line_586) {
  struct f_record_components_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_583 = list_583;
F->t_584 = t_584;
F->g_585 = g_585;
F->line_586 = line_586;
F->comp_1973 = NULL;
F->comp_1973 = F->list_583;
F->f_1974 = NULL;
F->tail_1975 = NULL;
F->df_1976 = NULL;
F->prev_1977 = NULL;
F->pt_1978 = NULL;
F->vt_1979 = NULL;
F->pc_1980 = NULL;
F->y_1981 = NULL;
F->acc_1982 = NULL;
F->v_1983 = NULL;
F->x_1984 = NULL;
F->arm_1985 = NULL;
F->g2_1986 = NULL;
F->tail_1975 = (*(P122)rt_nil_check(F->t_584)).fields_;
while (((F->tail_1975 != NULL) && ((*(P1846)rt_nil_check(F->tail_1975)).next_ != NULL))) {
F->tail_1975 = (*(P1846)rt_nil_check(F->tail_1975)).next_;
}
L_end_1987: ;
while ((F->comp_1973 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->comp_1973)).kind_) == ((rt_int)23LL))) {
F->df_1976 = (*(P122)rt_nil_check(F->t_584)).fields_;
while (((F->df_1976 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->df_1976)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1973)).a_)).name_)))))) {
F->df_1976 = (*(P1846)rt_nil_check(F->df_1976)).next_;
}
L_end_1989: ;
if (((F->df_1976 == NULL) || (!G_NV((*(P1846)rt_nil_check(F->df_1976)).is_discr_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1973)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_453(F->up, (*(P1846)rt_nil_check(F->df_1976)).t_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_1985 = (*(P174)rt_nil_check(F->comp_1973)).b_;
while ((F->arm_1985 != NULL)) {
F->g2_1986 = ({ R1972 *cell1991 = rt_alloc(sizeof(R1972)); *cell1991 = cp_R1972(({ R1972 ag1992; ag1992.disc_ = (*(P1846)rt_nil_check(F->df_1976)).name_; ag1992.arm_ = F->arm_1985; ag1992.variant_ = F->comp_1973; ag1992.next_ = F->g_585; ag1992; })); (P1971)cell1991; });
f_record_components_587(F->up, (*(P174)rt_nil_check(F->arm_1985)).b_, F->t_584, F->g2_1986, F->line_586);
F->arm_1985 = (*(P174)rt_nil_check(F->arm_1985)).next_;
}
L_end_1990: ;
F->tail_1975 = (*(P122)rt_nil_check(F->t_584)).fields_;
while (((F->tail_1975 != NULL) && ((*(P1846)rt_nil_check(F->tail_1975)).next_ != NULL))) {
F->tail_1975 = (*(P1846)rt_nil_check(F->tail_1975)).next_;
}
L_end_1993: ;
} else {
if ((f_field_index_977(F->up, F->t_584, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_1973)).name_))) != ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_1973)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_1974 = ({ R1847 *cell1994 = rt_alloc(sizeof(R1847)); *cell1994 = cp_R1847(({ R1847 ag1995; ag1995.name_ = (*(P174)rt_nil_check(F->comp_1973)).name_; ag1995.t_ = NULL; ag1995.c_ = NULL; ag1995.next_ = NULL; ag1995.dflt_ = (*(P174)rt_nil_check(F->comp_1973)).b_; ag1995.is_const_ = (G_NV((*(P174)rt_nil_check(F->comp_1973)).flag_) == ((rt_int)1LL)); ag1995.is_discr_ = 0; ag1995.dsym_ = NULL; ag1995.guard_ = F->g_585; ag1995.cond_ = NULL; ag1995.dyn_ = 0; ag1995; })); (P1846)cell1994; });
if ((((*(P174)rt_nil_check(F->comp_1973)).a_ == F->prev_1977) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_1973)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1846)rt_nil_check(F->f_1974)).t_ = F->pt_1978;
(*(P1846)rt_nil_check(F->f_1974)).c_ = F->pc_1980;
} else {
f_resolve_508(F->up, (*(P174)rt_nil_check(F->comp_1973)).a_, &(*(P1846)rt_nil_check(F->f_1974)).t_, &(*(P1846)rt_nil_check(F->f_1974)).c_);
}
F->prev_1977 = (*(P174)rt_nil_check(F->comp_1973)).a_;
F->pt_1978 = (*(P1846)rt_nil_check(F->f_1974)).t_;
F->pc_1980 = (*(P1846)rt_nil_check(F->f_1974)).c_;
if ((((*(P1846)rt_nil_check(F->f_1974)).c_ != NULL) && (f_mentions_record_576(F->up, (*(P178)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).c_)).lo_) || f_mentions_record_576(F->up, (*(P178)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).c_)).hi_)))) {
(*(P1846)rt_nil_check(F->f_1974)).dyn_ = 1;
if ((G_NV((*(P122)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P122)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).t_)).tcons_ == (*(P1846)rt_nil_check(F->f_1974)).c_)) {
(*(P122)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).t_)).tcons_ = NULL;
}
}
if ((F->g_585 != NULL)) {
f_guard_cond_591(F->up, F->g_585, (*(P1846)rt_nil_check(F->f_1974)).t_, &F->x_1984);
(*(P1846)rt_nil_check(F->f_1974)).cond_ = F->x_1984;
}
if (((*(P174)rt_nil_check(F->comp_1973)).b_ != NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->comp_1973)).b_, (*(P1846)rt_nil_check(F->f_1974)).t_, &F->vt_1979, &F->v_1983);
f_check_type_487(F->up, F->vt_1979, (*(P1846)rt_nil_check(F->f_1974)).t_, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_));
F->y_1981 = f_new_sym_470(F->up, ((rt_int)2LL), f_mk_228(F->up, rt_g_lit("dflt", 4)));
f_storage_639(F->up, rt_g_lit("dflt", 4), (*(P1846)rt_nil_check(F->f_1974)).t_, &F->acc_1982);
(*(P117)rt_nil_check(F->y_1981)).t_ = (*(P1846)rt_nil_check(F->f_1974)).t_;
(*(P117)rt_nil_check(F->y_1981)).c_ = (*(P1846)rt_nil_check(F->f_1974)).c_;
f_bind_642(F->up, F->y_1981, F->acc_1982);
if ((f_composite_614(F->up, (*(P1846)rt_nil_check(F->f_1974)).t_) && (!f_bounded_475(F->up, (*(P1846)rt_nil_check(F->f_1974)).c_)))) {
f_copy_code_624(F->up, (*(P1846)rt_nil_check(F->f_1974)).t_, (*(P140)rt_nil_check(F->v_1983)), &F->x_1984);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_1982)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_1984))), one_rt_gstr(59)));
} else {
f_init_storage_612(F->up, (*(P140)rt_nil_check(F->acc_1982)), (*(P1846)rt_nil_check(F->f_1974)).t_, (*(P1846)rt_nil_check(F->f_1974)).c_);
f_assign_code_620(F->up, (*(P140)rt_nil_check(F->acc_1982)), (*(P1846)rt_nil_check(F->f_1974)).t_, (*(P140)rt_nil_check(F->v_1983)), (*(P1846)rt_nil_check(F->f_1974)).c_, &F->x_1984);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_1984)));
}
(*(P1846)rt_nil_check(F->f_1974)).dsym_ = F->y_1981;
} else if (G_NV((*(P1846)rt_nil_check(F->f_1974)).is_const_)) {
(*(P1846)rt_nil_check(F->f_1974)).is_discr_ = 1;
F->y_1981 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P1846)rt_nil_check(F->f_1974)).name_);
(*(P117)rt_nil_check(F->y_1981)).t_ = (*(P1846)rt_nil_check(F->f_1974)).t_;
(*(P117)rt_nil_check(F->y_1981)).c_ = (*(P1846)rt_nil_check(F->f_1974)).c_;
(*(P117)rt_nil_check(F->y_1981)).ro_ = 1;
(*(P117)rt_nil_check(F->y_1981)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_1974)).name_)))), one_rt_gstr(41)));
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
f_define_465(F->up, F->y_1981, G_NV((*(P174)rt_nil_check(F->comp_1973)).line_));
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
(*(P117)rt_nil_check(F->y_1981)).mnext_ = F->up->disc_syms_182;
F->up->disc_syms_182 = F->y_1981;
}
if ((F->tail_1975 == NULL)) {
(*(P122)rt_nil_check(F->t_584)).fields_ = F->f_1974;
} else {
(*(P1846)rt_nil_check(F->tail_1975)).next_ = F->f_1974;
}
F->tail_1975 = F->f_1974;
}
F->comp_1973 = (*(P174)rt_nil_check(F->comp_1973)).next_;
}
L_end_1988: ;
ret_:

  return;
}

static void f_guard_cond_591(struct f_greenc_1fr *up_, P1971 g_588, P122 t_589, P140 *r_590) {
  struct f_guard_cond_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_588 = g_588;
F->t_589 = t_589;
F->r_590 = r_590;
F->a_1996 = NULL;
F->l_1997 = NULL;
F->df_1998 = NULL;
F->x_1999 = NULL;
F->d_2000 = NULL;
F->dt_2001 = NULL;
F->vt_2002 = NULL;
F->lo_2003 = NULL;
F->hi_2004 = NULL;
(*F->r_590) = f_mk_228(F->up, rt_g_lit("1", 1));
if ((F->g_588 == NULL)) {
goto ret_;
}
F->d_2000 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1971)rt_nil_check(F->g_588)).disc_)))), one_rt_gstr(41)));
F->df_1998 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P1971)rt_nil_check(F->g_588)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_1999 = f_mk_228(F->up, rt_g_lit("0", 1));
F->a_1996 = (*(P174)rt_nil_check((*(P1971)rt_nil_check(F->g_588)).variant_)).b_;
while ((F->a_1996 != NULL)) {
if ((F->a_1996 != (*(P1971)rt_nil_check(F->g_588)).arm_)) {
f_arm_test_596(F->up, F->a_1996, (*(P1971)rt_nil_check(F->g_588)).disc_, (*(P140)rt_nil_check(F->d_2000)), &F->x_1999);
}
F->a_1996 = (*(P174)rt_nil_check(F->a_1996)).next_;
}
L_end_2005: ;
F->x_1999 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P140)rt_nil_check(F->x_1999))), one_rt_gstr(41)));
} else {
F->x_1999 = f_mk_228(F->up, rt_g_lit("0", 1));
f_arm_test_596(F->up, (*(P1971)rt_nil_check(F->g_588)).arm_, (*(P1971)rt_nil_check(F->g_588)).disc_, (*(P140)rt_nil_check(F->d_2000)), &F->x_1999);
}
f_guard_cond_591(F->up, (*(P1971)rt_nil_check(F->g_588)).next_, F->t_589, &(*F->r_590));
(*F->r_590) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*F->r_590)))), rt_g_lit(" && (", 5)), (*(P140)rt_nil_check(F->x_1999))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_596(struct f_greenc_1fr *up_, P174 arm_592, P140 dname_593, rt_gstr d_594, P140 *x_595) {
  struct f_arm_test_596fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_592 = arm_592;
F->dname_593 = dname_593;
F->d_594 = cp_rt_gstr(d_594);
F->x_595 = x_595;
F->l_2006 = NULL;
F->l_2006 = (*(P174)rt_nil_check(F->arm_592)).a_;
F->y_2007 = NULL;
F->y_2007 = f_lookup_424(F->up, (*(P140)rt_nil_check(F->dname_593)));
F->dt_2008 = NULL;
F->vt_2009 = NULL;
F->lo_2010 = NULL;
F->hi_2011 = NULL;
F->dt_2008 = (*(P117)rt_nil_check(F->y_2007)).t_;
while ((F->l_2006 != NULL)) {
if (((*(P174)rt_nil_check(F->l_2006)).b_ == NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->l_2006)).a_, F->dt_2008, &F->vt_2009, &F->lo_2010);
f_check_type_487(F->up, F->vt_2009, F->dt_2008, G_NV((*(P174)rt_nil_check(F->l_2006)).line_));
(*F->x_595) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_595))), rt_g_lit(" || ", 4)), F->d_594), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->lo_2010))));
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->l_2006)).a_, F->dt_2008, &F->vt_2009, &F->lo_2010);
f_check_type_487(F->up, F->vt_2009, F->dt_2008, G_NV((*(P174)rt_nil_check(F->l_2006)).line_));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->l_2006)).b_, F->dt_2008, &F->vt_2009, &F->hi_2011);
f_check_type_487(F->up, F->vt_2009, F->dt_2008, G_NV((*(P174)rt_nil_check(F->l_2006)).line_));
(*F->x_595) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_595))), rt_g_lit(" || (", 5)), F->d_594), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2010))), rt_g_lit(" && ", 4)), F->d_594), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2011))), one_rt_gstr(41)));
}
F->l_2006 = (*(P174)rt_nil_check(F->l_2006)).next_;
}
L_end_2012: ;
ret_:

  return;
}

static void f_derived_type_601(struct f_greenc_1fr *up_, P174 d_597, P140 name_598, P122 *t_599, P178 *c_600) {
  struct f_derived_type_601fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_597 = d_597;
F->name_598 = name_598;
F->t_599 = t_599;
F->c_600 = c_600;
F->pt_2013 = NULL;
F->ct_2014 = NULL;
F->ph_2015 = NULL;
F->ph_2015 = F->up->completing_173;
F->up->completing_173 = NULL;
f_resolve_508(F->up, (*(P174)rt_nil_check(F->d_597)).a_, &F->pt_2013, &(*F->c_600));
if (((G_NV((*(P122)rt_nil_check(F->pt_2013)).kind_) == ((rt_int)9LL)) && G_NV((*(P122)rt_nil_check(F->pt_2013)).priv_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_597)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_614(F->up, F->pt_2013) || (G_NV((*(P122)rt_nil_check(F->pt_2013)).kind_) == ((rt_int)8LL)))) {
f_ctype_492(F->up, F->pt_2013, &F->ct_2014);
}
if ((F->ph_2015 == NULL)) {
(*F->t_599) = f_new_typ_472(F->up, G_NV((*(P122)rt_nil_check(F->pt_2013)).kind_));
} else {
(*F->t_599) = F->ph_2015;
}
as_R123(&(*(P122)rt_nil_check((*F->t_599))), (*(P122)rt_nil_check(F->pt_2013)));
(*(P122)rt_nil_check((*F->t_599))).name_ = F->name_598;
(*(P122)rt_nil_check((*F->t_599))).parent_ = F->pt_2013;
(*(P122)rt_nil_check((*F->t_599))).next_ = NULL;
if ((G_NV((*(P122)rt_nil_check((*F->t_599))).kind_) == ((rt_int)4LL))) {
f_derive_literals_537(F->up, (*F->t_599), G_NV((*(P174)rt_nil_check(F->d_597)).line_));
}
f_inherit_534(F->up, F->pt_2013, (*F->t_599), G_NV((*(P174)rt_nil_check(F->d_597)).line_));
ret_:

  return;
}

static void f_real_type_606(struct f_greenc_1fr *up_, P174 d_602, P140 name_603, P122 *t_604, P178 *c_605) {
  struct f_real_type_606fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_602 = d_602;
F->name_603 = name_603;
F->t_604 = t_604;
F->c_605 = c_605;
F->dt_2016 = NULL;
F->dv_2017 = NULL;
F->n_2018 = INT64_MIN;
F->ok_2019 = INT_MIN;
(*F->c_605) = f_new_cons_473(F->up);
if ((G_NV((*(P174)rt_nil_check(F->d_602)).flag_) == ((rt_int)1LL))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->d_602)).a_, &F->n_2018, &F->ok_2019);
 (void)rt_range(F->ok_2019, 0, 1);
if ((!G_NV(F->ok_2019))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_602)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2018) < ((rt_int)1LL)) || (G_NV(F->n_2018) > ((rt_int)15LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_602)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2018)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_530(F->up, ((rt_int)3LL), F->name_603, &(*F->t_604));
(*(P122)rt_nil_check((*F->t_604))).ndigits_ = G_NV(F->n_2018);
if ((G_NV(F->n_2018) <= ((rt_int)6LL))) {
(*(P122)rt_nil_check((*F->t_604))).parent_ = F->up->ty_sfloat_169;
} else {
(*(P122)rt_nil_check((*F->t_604))).parent_ = F->up->ty_float_158;
}
} else {
if (((*(P174)rt_nil_check(F->d_602)).b_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_602)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->d_602)).a_, F->up->ty_float_158, &F->dt_2016, &F->dv_2017);
if ((G_NV((*(P122)rt_nil_check(F->dt_2016)).kind_) != ((rt_int)3LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_602)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_530(F->up, ((rt_int)16LL), F->name_603, &(*F->t_604));
(*(P122)rt_nil_check((*F->t_604))).fdelta_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->dv_2017))), one_rt_gstr(41)));
(*(P122)rt_nil_check((*F->t_604))).fsmall_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P140)rt_nil_check(F->dv_2017))), one_rt_gstr(41)));
}
if (((*(P174)rt_nil_check(F->d_602)).b_ != NULL)) {
f_range_of_526(F->up, (*(P174)rt_nil_check(F->d_602)).b_, (*F->t_604), (*F->c_605));
}
if (((*(P122)rt_nil_check((*F->t_604))).parent_ != NULL)) {
f_inherit_534(F->up, (*(P122)rt_nil_check((*F->t_604))).parent_, (*F->t_604), G_NV((*(P174)rt_nil_check(F->d_602)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_608(struct f_greenc_1fr *up_, P122 t_607) {
  struct f_finish_ptr_608fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_607 = t_607;
F->c_2020 = NULL;
if ((((*(P122)rt_nil_check(F->t_607)).target_ == NULL) && ((*(P122)rt_nil_check(F->t_607)).decl_ != NULL))) {
f_resolve_508(F->up, (*(P122)rt_nil_check(F->t_607)).decl_, &(*(P122)rt_nil_check(F->t_607)).target_, &F->c_2020);
if ((((*(P122)rt_nil_check(F->t_607)).target_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_607)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check((*(P122)rt_nil_check(F->t_607)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_612(struct f_greenc_1fr *up_, rt_gstr lval_609, P122 t_610, P178 c_611) {
  struct f_init_storage_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_609 = cp_rt_gstr(lval_609);
F->t_610 = t_610;
F->c_611 = c_611;
F->ec_2021 = NULL;
F->fc_2022 = NULL;
F->d_2023 = NULL;
F->ct_2024 = NULL;
F->i_2025 = NULL;
F->v_2026 = NULL;
F->x_2027 = NULL;
F->vt_2028 = NULL;
F->f_2029 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_610)).kind_) == ((rt_int)8LL))) {
f_emit_255(F->up, cat_rt_gstr(F->lval_609, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_451(F->up, F->t_610) || f_is_discrete_453(F->up, F->t_610))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(" = ", 3)), f_no_value_561(F->up, F->t_610)), one_rt_gstr(59)));
} else if ((G_NV((*(P122)rt_nil_check(F->t_610)).kind_) == ((rt_int)6LL))) {
if (((F->c_611 == NULL) || ((*(P178)rt_nil_check(F->c_611)).lo_ == NULL))) {
f_fail_249(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_610)).elem_, &F->ct_2024);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_611)).lo_))), rt_g_lit("; ", 2)), F->lval_609), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_611)).hi_))), one_rt_gstr(59)));
F->ec_2021 = (*(P122)rt_nil_check(F->t_610)).elemcons_;
if (((G_NV((*(P122)rt_nil_check(F->t_610)).dims_) > ((rt_int)1LL)) && f_bounded_475(F->up, (*(P178)rt_nil_check(F->c_611)).inner_))) {
F->ec_2021 = (*(P178)rt_nil_check(F->c_611)).inner_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_610)).dims_) > ((rt_int)1LL)) && f_bounded_475(F->up, F->ec_2021))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2021)).lo_))), rt_g_lit("; ", 2)), F->lval_609), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2021)).hi_))), one_rt_gstr(59)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(".lo2 = 1; ", 10)), F->lval_609), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->ct_2024))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_609), rt_g_lit("));", 3)));
if ((f_is_numeric_451(F->up, (*(P122)rt_nil_check(F->t_610)).elem_) || f_is_discrete_453(F->up, (*(P122)rt_nil_check(F->t_610)).elem_))) {
f_new_name_231(F->up, rt_g_lit("i", 1), &F->i_2025);
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_610)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_609), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_609), rt_g_lit("));", 3)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit(" < G_CNT(", 9)), F->lval_609), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit("++) ", 4)), F->lval_609), rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit("] = ", 4)), f_no_value_561(F->up, (*(P122)rt_nil_check(F->t_610)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_610)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_610)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_231(F->up, rt_g_lit("i", 1), &F->i_2025);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit(" < G_CNT(", 9)), F->lval_609), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2025))), rt_g_lit("++) {", 5)));
f_init_storage_612(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2025))), one_rt_gstr(93)), (*(P122)rt_nil_check(F->t_610)).elem_, F->ec_2021);
f_emit_255(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_610)).kind_) == ((rt_int)7LL))) {
if ((F->c_611 != NULL)) {
F->d_2023 = (*(P178)rt_nil_check(F->c_611)).dv_;
while ((F->d_2023 != NULL)) {
F->f_2029 = (*(P122)rt_nil_check(F->t_610)).fields_;
while ((!eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)), (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2023)).name_))))) {
F->f_2029 = (*(P1846)rt_nil_check(F->f_2029)).next_;
}
L_end_2031: ;
f_assign_code_620(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_609, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), (*(P1846)rt_nil_check(F->f_2029)).t_, (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2023)).v_)), (*(P1846)rt_nil_check(F->f_2029)).c_, &F->x_2027);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2027)));
F->d_2023 = (*(P1850)rt_nil_check(F->d_2023)).next_;
}
L_end_2030: ;
}
F->f_2029 = (*(P122)rt_nil_check(F->t_610)).fields_;
while ((F->f_2029 != NULL)) {
f_subst_cons_580(F->up, (*(P1846)rt_nil_check(F->f_2029)).c_, F->lval_609, &F->fc_2022);
if ((G_NV((*(P1846)rt_nil_check(F->f_2029)).dyn_) && (!f_discriminated_481(F->up, F->c_611)))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_609, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_609), one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_609), one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_609), one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_609), one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1846)rt_nil_check(F->f_2029)).is_discr_))) {
f_init_storage_612(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_609, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), (*(P1846)rt_nil_check(F->f_2029)).t_, F->fc_2022);
}
if (((*(P1846)rt_nil_check(F->f_2029)).dsym_ != NULL)) {
f_access_of_743(F->up, (*(P1846)rt_nil_check(F->f_2029)).dsym_, &F->v_2026);
f_assign_code_620(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_609, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2029)).name_)))), (*(P1846)rt_nil_check(F->f_2029)).t_, (*(P140)rt_nil_check(F->v_2026)), F->fc_2022, &F->x_2027);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2027)));
}
F->f_2029 = (*(P1846)rt_nil_check(F->f_2029)).next_;
}
L_end_2032: ;
}
ret_:

  return;
}

static int f_composite_614(struct f_greenc_1fr *up_, P122 t_613) {
  struct f_composite_614fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_613 = t_613;
F->result_ = ((G_NV((*(P122)rt_nil_check(F->t_613)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check(F->t_613)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_620(struct f_greenc_1fr *up_, rt_gstr lval_615, P122 t_616, rt_gstr v_617, P178 c_618, P140 *r_619) {
  struct f_assign_code_620fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_615 = cp_rt_gstr(lval_615);
F->t_616 = t_616;
F->v_617 = cp_rt_gstr(v_617);
F->c_618 = c_618;
F->r_619 = r_619;
F->ct_2033 = NULL;
F->x_2034 = NULL;
F->d_2035 = NULL;
if (((G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)7LL)) && f_discriminated_481(F->up, F->c_618))) {
f_ctype_492(F->up, F->t_616, &F->ct_2033);
F->x_2034 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2033))), rt_g_lit(" dv_ = ", 7)), F->v_617), one_rt_gstr(59)));
F->d_2035 = (*(P178)rt_nil_check(F->c_618)).dv_;
while ((F->d_2035 != NULL)) {
F->x_2034 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2034)), rt_g_lit(" if (dv_.", 9)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2035)).name_)))), rt_g_lit(" != (", 5)), (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2035)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2035 = (*(P1850)rt_nil_check(F->d_2035)).next_;
}
L_end_2036: ;
(*F->r_619) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2034)), rt_g_lit(" as_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_616)).cname_))), rt_g_lit("(&", 2)), F->lval_615), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_614(F->up, F->t_616)) {
f_ctype_492(F->up, F->t_616, &F->ct_2033);
(*F->r_619) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_616)).cname_))), rt_g_lit("(&", 2)), F->lval_615), rt_g_lit(", ", 2)), F->v_617), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)11LL))) && f_bounded_475(F->up, F->c_618))) {
(*F->r_619) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_615, rt_g_lit(" = rt_range(", 12)), F->v_617), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_618)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_618)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_616)).kind_) == ((rt_int)16LL))) && f_bounded_475(F->up, F->c_618))) {
(*F->r_619) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_615, rt_g_lit(" = rt_frange(", 13)), F->v_617), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_618)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_618)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_619) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_615, rt_g_lit(" = ", 3)), F->v_617), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_624(struct f_greenc_1fr *up_, P122 t_621, rt_gstr v_622, P140 *r_623) {
  struct f_copy_code_624fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_621 = t_621;
F->v_622 = cp_rt_gstr(v_622);
F->r_623 = r_623;
F->ct_2037 = NULL;
if (f_composite_614(F->up, F->t_621)) {
f_ctype_492(F->up, F->t_621, &F->ct_2037);
(*F->r_623) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_621)).cname_))), one_rt_gstr(40)), F->v_622), one_rt_gstr(41)));
} else {
(*F->r_623) = f_mk_228(F->up, F->v_622);
}
ret_:

  return;
}

static void f_eq_code_629(struct f_greenc_1fr *up_, P122 t_625, rt_gstr a_626, rt_gstr b_627, P140 *r_628) {
  struct f_eq_code_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_625 = t_625;
F->a_626 = cp_rt_gstr(a_626);
F->b_627 = cp_rt_gstr(b_627);
F->r_628 = r_628;
F->ct_2038 = NULL;
if (f_composite_614(F->up, F->t_625)) {
f_ctype_492(F->up, F->t_625, &F->ct_2038);
(*F->r_628) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_625)).cname_))), one_rt_gstr(40)), F->a_626), rt_g_lit(", ", 2)), F->b_627), one_rt_gstr(41)));
} else {
(*F->r_628) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_626), rt_g_lit(" == ", 4)), F->b_627), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_632(struct f_greenc_1fr *up_, P151 l_630, rt_gstr s_631) {
  struct f_seen_name_632fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_630 = l_630;
F->s_631 = cp_rt_gstr(s_631);
F->p_2039 = NULL;
F->p_2039 = F->l_630;
while ((F->p_2039 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->p_2039)).s_)), F->s_631)) {
F->result_ = 1;
goto ret_;
}
F->p_2039 = (*(P151)rt_nil_check(F->p_2039)).next_;
}
L_end_2040: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_633(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2041 = NULL;
F->t_2041 = F->up->all_types_124;
F->et_2042 = NULL;
F->done_2043 = NULL;
F->l_2044 = NULL;
while ((F->t_2041 != NULL)) {
if ((f_composite_614(F->up, F->t_2041) && (!f_seen_name_632(F->up, F->done_2043, (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_)))))) {
F->l_2044 = ({ R152 *cell2046 = rt_alloc(sizeof(R152)); *cell2046 = cp_R152(({ R152 ag2047; ag2047.s_ = (*(P122)rt_nil_check(F->t_2041)).cname_; ag2047.next_ = F->done_2043; ag2047; })); (P151)cell2046; });
F->done_2043 = F->l_2044;
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P122)rt_nil_check(F->t_2041)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->t_2041)).dims_) == ((rt_int)1LL)))) {
f_ctype_492(F->up, (*(P122)rt_nil_check(F->t_2041)).elem_, &F->et_2042);
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2042))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_253(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2041)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_635(F->up, F->t_2041);
}
F->t_2041 = (*(P122)rt_nil_check(F->t_2041)).next_;
}
L_end_2045: ;
ret_:

  return;
}

static void f_helper_bodies_635(struct f_greenc_1fr *up_, P122 t_634) {
  struct f_helper_bodies_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_634 = t_634;
F->c_2048 = NULL;
F->c_2048 = (*(P122)rt_nil_check(F->t_634)).cname_;
F->b_2049 = NULL;
F->b_2049 = F->up->out_funcs_133;
F->ct_2050 = NULL;
F->et_2051 = NULL;
F->x_2052 = NULL;
F->y_2053 = NULL;
F->conds_2054 = NULL;
F->f_2055 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_634)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, &F->ct_2050);
f_assign_code_620(F->up, rt_g_lit("d->p[i]", 7), (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2052);
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" s) {", 5)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit(");", 2)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P140)rt_nil_check(F->x_2052))), rt_g_lit(" }", 2)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2052);
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" s) {", 5)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P140)rt_nil_check(F->ct_2050))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P140)rt_nil_check(F->x_2052))), one_rt_gstr(59)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  return d;", 11));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
f_eq_code_629(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2052);
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) {", 5)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P140)rt_nil_check(F->x_2052))), rt_g_lit(")) return 0;", 12)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  return 1;", 11));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
if (((G_NV((*(P122)rt_nil_check(F->t_634)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_634)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a) { ", 6)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P122)rt_nil_check(F->t_634)).dims_) == ((rt_int)1LL))) {
f_ctype_492(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, &F->et_2051);
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2052);
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2053);
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) {", 5)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2050))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P140)rt_nil_check(F->x_2052))), one_rt_gstr(59)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P140)rt_nil_check(F->y_2053))), one_rt_gstr(59)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  return r;", 11));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->t_634)).elem_, rt_g_lit("e", 1), &F->x_2052);
f_first_index_569(F->up, F->t_634, &F->y_2053);
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2051))), rt_g_lit(" e) {", 5)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P140)rt_nil_check(F->y_2053))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2050))), rt_g_lit(")); r.p[0] = ", 13)), (*(P140)rt_nil_check(F->x_2052))), one_rt_gstr(59)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("  return r;", 11));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
}
} else {
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" s) {", 5)));
F->f_2055 = (*(P122)rt_nil_check(F->t_634)).fields_;
while ((F->f_2055 != NULL)) {
if ((G_NV((*(P1846)rt_nil_check(F->f_2055)).dyn_) || ((*(P1846)rt_nil_check(F->f_2055)).cond_ != NULL))) {
f_copy_code_624(F->up, (*(P1846)rt_nil_check(F->f_2055)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), &F->x_2052);
F->x_2052 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2052))), one_rt_gstr(59)));
if (((*(P1846)rt_nil_check(F->f_2055)).cond_ != NULL)) {
F->x_2052 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_574(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2052))));
}
} else {
f_assign_code_620(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), (*(P1846)rt_nil_check(F->f_2055)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), NULL, &F->x_2052);
}
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2052))));
F->f_2055 = (*(P1846)rt_nil_check(F->f_2055)).next_;
}
L_end_2056: ;
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" s) {", 5)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" d = s;", 7)));
F->conds_2054 = f_mk_228(F->up, rt_g_lit("1", 1));
F->f_2055 = (*(P122)rt_nil_check(F->t_634)).fields_;
while ((F->f_2055 != NULL)) {
f_copy_code_624(F->up, (*(P1846)rt_nil_check(F->f_2055)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), &F->x_2052);
F->x_2052 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2052))), one_rt_gstr(59)));
f_eq_code_629(F->up, (*(P1846)rt_nil_check(F->f_2055)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).name_)))), &F->y_2053);
if (((*(P1846)rt_nil_check(F->f_2055)).cond_ != NULL)) {
F->x_2052 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_574(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2052))));
F->y_2053 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_574(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2055)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P140)rt_nil_check(F->y_2053))), one_rt_gstr(41)));
}
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2052))));
F->conds_2054 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2054)), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->y_2053))));
F->f_2055 = (*(P1846)rt_nil_check(F->f_2055)).next_;
}
L_end_2057: ;
f_put_to_253(F->up, F->b_2049, rt_g_lit("  return d;", 11));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2048))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2048))), rt_g_lit(" b) {", 5)));
f_put_to_253(F->up, F->b_2049, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P140)rt_nil_check(F->conds_2054))), one_rt_gstr(59)));
f_put_to_253(F->up, F->b_2049, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_639(struct f_greenc_1fr *up_, rt_gstr name_636, P122 t_637, P140 *access_code_638) {
  struct f_storage_639fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_636 = cp_rt_gstr(name_636);
F->t_637 = t_637;
F->access_code_638 = access_code_638;
F->ct_2058 = NULL;
F->g_2059 = NULL;
f_ctype_492(F->up, F->t_637, &F->ct_2058);
if ((!G_NV(F->up->in_func_138))) {
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_239(F->up, F->name_636)), one_rt_gstr(95)), &F->g_2059);
f_put_to_253(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2058))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2059))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2059;
(*F->access_code_638) = F->g_2059;
} else {
f_new_name_231(F->up, cat_rt_gstr(f_lower_s_239(F->up, F->name_636), one_rt_gstr(95)), &F->g_2059);
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2058))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2059))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2059;
(*F->access_code_638) = f_mk_228(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->g_2059))));
}
ret_:

  return;
}

static void f_bind_642(struct f_greenc_1fr *up_, P117 y_640, P140 access_code_641) {
  struct f_bind_642fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_640 = y_640;
F->access_code_641 = access_code_641;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_640)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_640)).access_path_ = F->up->st_field_141;
} else {
(*(P117)rt_nil_check(F->y_640)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_640)).access_path_ = F->access_code_641;
}
ret_:

  return;
}

static void f_declare_subprograms_644(struct f_greenc_1fr *up_, P174 from_643) {
  struct f_declare_subprograms_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_643 = from_643;
F->e_2060 = NULL;
F->e_2060 = F->from_643;
while ((F->e_2060 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2060)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2060)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2060)).ival_) == ((rt_int)0LL)))) {
f_declare_one_646(F->up, F->e_2060);
}
F->e_2060 = (*(P174)rt_nil_check(F->e_2060)).next_;
}
L_end_2061: ;
ret_:

  return;
}

static void f_declare_one_646(struct f_greenc_1fr *up_, P174 e_645) {
  struct f_declare_one_646fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_645 = e_645;
F->y_2062 = NULL;
F->z_2063 = NULL;
if (f_is_generic_name_1257(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_645)).name_)))) {
goto ret_;
}
f_build_subprogram_651(F->up, F->e_645, &F->y_2062);
F->z_2063 = ({ A116 ix2064 = F->up->table_119; ix2064.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2062)).name_))), ix2064.lo, ix2064.hi) - ix2064.lo]; });
while ((F->z_2063 != NULL)) {
if (((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2063)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2062)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2063)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2063)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2063)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2063)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->z_2063)).depth_) == G_NV(F->up->depth_120))) && f_same_signature_459(F->up, (*(P117)rt_nil_check(F->z_2063)).params_, (*(P117)rt_nil_check(F->y_2062)).params_)) && f_same_444(F->up, (*(P117)rt_nil_check(F->z_2063)).result_, (*(P117)rt_nil_check(F->y_2062)).result_))) {
(*(P117)rt_nil_check(F->z_2063)).decl_ = F->e_645;
goto ret_;
}
F->z_2063 = (*(P117)rt_nil_check(F->z_2063)).chain_;
}
L_end_2065: ;
if ((F->up->cur_task_202 != NULL)) {
F->z_2063 = (*(P117)rt_nil_check(F->up->cur_task_202)).members_;
while ((F->z_2063 != NULL)) {
if ((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2063)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2062)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2063)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2063)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2063)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2063)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_459(F->up, (*(P117)rt_nil_check(F->z_2063)).params_, (*(P117)rt_nil_check(F->y_2062)).params_)) && f_same_444(F->up, (*(P117)rt_nil_check(F->z_2063)).result_, (*(P117)rt_nil_check(F->y_2062)).result_))) {
(*(P117)rt_nil_check(F->y_2062)).cname_ = (*(P117)rt_nil_check(F->z_2063)).cname_;
(*(P117)rt_nil_check(F->z_2063)).decl_ = F->e_645;
goto L_end_2066;
}
F->z_2063 = (*(P117)rt_nil_check(F->z_2063)).mnext_;
}
L_end_2066: ;
}
f_define_465(F->up, F->y_2062, G_NV((*(P174)rt_nil_check(F->e_645)).line_));
f_elaborate_defaults_648(F->up, F->y_2062);
ret_:

  return;
}

static void f_elaborate_defaults_648(struct f_greenc_1fr *up_, P117 y_647) {
  struct f_elaborate_defaults_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_647 = y_647;
F->pm_2067 = NULL;
F->pm_2067 = (*(P117)rt_nil_check(F->y_647)).params_;
F->vt_2068 = NULL;
F->v_2069 = NULL;
F->acc_2070 = NULL;
F->x_2071 = NULL;
F->z_2072 = NULL;
while ((F->pm_2067 != NULL)) {
if (((*(P1828)rt_nil_check(F->pm_2067)).dflt_ != NULL)) {
if ((G_NV((*(P1828)rt_nil_check(F->pm_2067)).mode_) != ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check((*(P1828)rt_nil_check(F->pm_2067)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_806(F->up, (*(P1828)rt_nil_check(F->pm_2067)).dflt_, (*(P1828)rt_nil_check(F->pm_2067)).t_, &F->vt_2068, &F->v_2069);
f_check_type_487(F->up, F->vt_2068, (*(P1828)rt_nil_check(F->pm_2067)).t_, G_NV((*(P174)rt_nil_check((*(P1828)rt_nil_check(F->pm_2067)).dflt_)).line_));
F->z_2072 = f_new_sym_470(F->up, ((rt_int)2LL), f_mk_228(F->up, rt_g_lit("dflt", 4)));
f_storage_639(F->up, rt_g_lit("dflt", 4), (*(P1828)rt_nil_check(F->pm_2067)).t_, &F->acc_2070);
(*(P117)rt_nil_check(F->z_2072)).t_ = (*(P1828)rt_nil_check(F->pm_2067)).t_;
(*(P117)rt_nil_check(F->z_2072)).c_ = (*(P1828)rt_nil_check(F->pm_2067)).c_;
f_bind_642(F->up, F->z_2072, F->acc_2070);
f_copy_code_624(F->up, (*(P1828)rt_nil_check(F->pm_2067)).t_, (*(P140)rt_nil_check(F->v_2069)), &F->x_2071);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2070)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2071))), one_rt_gstr(59)));
(*(P1828)rt_nil_check(F->pm_2067)).dsym_ = F->z_2072;
}
F->pm_2067 = (*(P1828)rt_nil_check(F->pm_2067)).next_;
}
L_end_2073: ;
ret_:

  return;
}

static void f_build_subprogram_651(struct f_greenc_1fr *up_, P174 d_649, P117 *y_650) {
  struct f_build_subprogram_651fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_649 = d_649;
F->y_650 = y_650;
F->p_2074 = NULL;
F->p_2074 = (*(P174)rt_nil_check(F->d_649)).a_;
F->pm_2075 = NULL;
F->tail_2076 = NULL;
F->rc_2077 = NULL;
F->k_2078 = INT64_MIN;
F->k_2078 = ((rt_int)4LL);
if ((G_NV((*(P174)rt_nil_check(F->d_649)).kind_) == ((rt_int)45LL))) {
F->k_2078 = ((rt_int)3LL);
}
(*F->y_650) = f_new_sym_470(F->up, G_NV(F->k_2078), (*(P174)rt_nil_check(F->d_649)).name_);
while ((F->p_2074 != NULL)) {
F->pm_2075 = ({ R1829 *cell2080 = rt_alloc(sizeof(R1829)); *cell2080 = cp_R1829(({ R1829 ag2081; ag2081.name_ = (*(P174)rt_nil_check(F->p_2074)).name_; ag2081.mode_ = G_NV((*(P174)rt_nil_check(F->p_2074)).ival_); ag2081.t_ = NULL; ag2081.c_ = NULL; ag2081.cfield_ = NULL; ag2081.dflt_ = (*(P174)rt_nil_check(F->p_2074)).b_; ag2081.next_ = NULL; ag2081.dsym_ = NULL; ag2081; })); (P1828)cell2080; });
f_resolve_508(F->up, (*(P174)rt_nil_check(F->p_2074)).a_, &(*(P1828)rt_nil_check(F->pm_2075)).t_, &(*(P1828)rt_nil_check(F->pm_2075)).c_);
f_new_name_231(F->up, cat_rt_gstr(f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2074)).name_))), one_rt_gstr(95)), &(*(P1828)rt_nil_check(F->pm_2075)).cfield_);
if (((G_NV((*(P174)rt_nil_check(F->d_649)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1828)rt_nil_check(F->pm_2075)).mode_) != ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->p_2074)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P174)rt_nil_check(F->d_649)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1828)rt_nil_check(F->pm_2075)).mode_) != ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->p_2074)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2076 == NULL)) {
(*(P117)rt_nil_check((*F->y_650))).params_ = F->pm_2075;
} else {
(*(P1828)rt_nil_check(F->tail_2076)).next_ = F->pm_2075;
}
F->tail_2076 = F->pm_2075;
F->p_2074 = (*(P174)rt_nil_check(F->p_2074)).next_;
}
L_end_2079: ;
(*(P117)rt_nil_check((*F->y_650))).result_ = F->up->ty_void_161;
if (((*(P174)rt_nil_check(F->d_649)).b_ != NULL)) {
f_resolve_508(F->up, (*(P174)rt_nil_check(F->d_649)).b_, &(*(P117)rt_nil_check((*F->y_650))).result_, &F->rc_2077);
(*(P117)rt_nil_check((*F->y_650))).c_ = F->rc_2077;
}
if ((f_is_rel_341(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_649)).name_))) && ((*(P117)rt_nil_check((*F->y_650))).result_ != F->up->ty_bool_157))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->d_649)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_649)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P117)rt_nil_check((*F->y_650))).vrp_ = (G_NV((*(P174)rt_nil_check(F->d_649)).flag_) == ((rt_int)1LL));
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_748(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_649)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check((*F->y_650))).cname_);
(*(P117)rt_nil_check((*F->y_650))).decl_ = F->d_649;
(*(P117)rt_nil_check((*F->y_650))).level_ = G_NV(F->up->cur_level_139);
ret_:

  return;
}

static void f_decl_elements_653(struct f_greenc_1fr *up_, P174 decls_652) {
  struct f_decl_elements_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_652 = decls_652;
F->e_2082 = NULL;
F->e_2082 = F->decls_652;
F->declared_2083 = INT_MIN;
F->declared_2083 = 0;
F->up->anon_node_176 = NULL;
while ((F->e_2082 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2082)).kind_) != ((rt_int)40LL)) && (G_NV((*(P174)rt_nil_check(F->e_2082)).kind_) != ((rt_int)41LL))) || ((*(P174)rt_nil_check(F->e_2082)).a_ != F->up->anon_node_176))) {
F->up->anon_node_176 = NULL;
}
if (((((G_NV((*(P174)rt_nil_check(F->e_2082)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2082)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2082)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2083)))) {
f_declare_subprograms_644(F->up, F->e_2082);
F->declared_2083 = 1;
}
f_decl_element_655(F->up, F->e_2082);
F->e_2082 = (*(P174)rt_nil_check(F->e_2082)).next_;
}
L_end_2084: ;
ret_:

  return;
}

static void f_decl_element_655(struct f_greenc_1fr *up_, P174 e_654) {
  struct f_decl_element_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_654 = e_654;
F->saved_2085 = NULL;
F->saved_2085 = F->up->barriers_200;
if ((((*(P174)rt_nil_check(F->e_654)).formal_ != NULL) && (((((((G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)45LL))) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->e_654)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_671(F->up, F->e_654, G_NV(F->up->depth_120));
f_decl_element_1_657(F->up, F->e_654);
F->up->barriers_200 = F->saved_2085;
goto ret_;
}
f_decl_element_1_657(F->up, F->e_654);
ret_:

  return;
}

static void f_decl_element_1_657(struct f_greenc_1fr *up_, P174 e_656) {
  struct f_decl_element_1_657fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_656 = e_656;
F->pd_2086 = NULL;
F->y_2087 = NULL;
F->z_2088 = NULL;
F->t_2089 = NULL;
F->vt_2090 = NULL;
F->c_2091 = NULL;
F->acc_2092 = NULL;
F->v_2093 = NULL;
F->x_2094 = NULL;
F->ok_2095 = INT_MIN;
{ rt_int sel2096 = G_NV((*(P174)rt_nil_check(F->e_656)).kind_);
if (0 || sel2096 == ((rt_int)42LL)) {
F->y_2087 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)));
if ((((((((F->y_2087 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2087)).kind_) == ((rt_int)5LL))) && (G_NV((*(P117)rt_nil_check(F->y_2087)).depth_) == G_NV(F->up->depth_120))) && ((*(P117)rt_nil_check(F->y_2087)).t_ != NULL)) && G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).priv_)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_173 = (*(P117)rt_nil_check(F->y_2087)).t_;
F->x_2094 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).name_;
F->pd_2086 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).decl_;
F->ok_2095 = G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).is_restricted_);
f_type_definition_542(F->up, (*(P174)rt_nil_check(F->e_656)).a_, (*(P174)rt_nil_check(F->e_656)).name_, &F->t_2089, &F->c_2091);
F->up->completing_173 = NULL;
if ((F->t_2089 != (*(P117)rt_nil_check(F->y_2087)).t_)) {
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)), (*(P122)rt_nil_check(F->t_2089)));
}
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).name_ = F->x_2094;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).decl_ = F->pd_2086;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).is_restricted_ = G_NV(F->ok_2095);
(*(P117)rt_nil_check(F->y_2087)).c_ = F->c_2091;
} else {
F->y_2087 = f_new_sym_470(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_656)).name_);
(*(P117)rt_nil_check(F->y_2087)).decl_ = F->e_656;
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).kind_) == ((rt_int)77LL))) {
(*(P117)rt_nil_check(F->y_2087)).t_ = f_new_typ_472(F->up, ((rt_int)9LL));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).name_ = (*(P174)rt_nil_check(F->e_656)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).decl_ = F->up->cur_pkg_214;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->e_656)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_542(F->up, (*(P174)rt_nil_check(F->e_656)).a_, (*(P174)rt_nil_check(F->e_656)).name_, &(*(P117)rt_nil_check(F->y_2087)).t_, &(*(P117)rt_nil_check(F->y_2087)).c_);
}
}
} else if (0 || sel2096 == ((rt_int)43LL)) {
F->y_2087 = f_new_sym_470(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_656)).name_);
f_resolve_508(F->up, (*(P174)rt_nil_check(F->e_656)).a_, &(*(P117)rt_nil_check(F->y_2087)).t_, &(*(P117)rt_nil_check(F->y_2087)).c_);
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
} else if (0 || sel2096 == ((rt_int)40LL)) {
f_resolve_object_type_663(F->up, (*(P174)rt_nil_check(F->e_656)).a_, &F->t_2089, &F->c_2091);
F->y_2087 = f_new_sym_470(F->up, ((rt_int)1LL), (*(P174)rt_nil_check(F->e_656)).name_);
if ((G_NV((*(P174)rt_nil_check(F->e_656)).flag_) == ((rt_int)2LL))) {
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->e_656)).b_, &F->v_2093, &F->vt_2090, &F->c_2091, &(*(P117)rt_nil_check(F->y_2087)).ro_);
 (void)rt_range((*(P117)rt_nil_check(F->y_2087)).ro_, 0, 1);
f_check_type_487(F->up, F->vt_2090, F->t_2089, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_ctype_492(F->up, F->t_2089, &F->acc_2092);
f_new_name_231(F->up, cat_rt_gstr(f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_))), one_rt_gstr(95)), &F->x_2094);
if (G_NV(F->up->in_func_138)) {
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->acc_2092))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->x_2094))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2093))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2087)).byref_ = 1;
(*(P117)rt_nil_check(F->y_2087)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_2087)).access_path_ = F->x_2094;
} else {
f_put_to_253(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->acc_2092))), rt_g_lit(" *g_", 4)), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P140)rt_nil_check(F->x_2094))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2093))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2087)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_2087)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(41)));
}
(*(P117)rt_nil_check(F->y_2087)).t_ = F->vt_2090;
(*(P117)rt_nil_check(F->y_2087)).c_ = F->c_2091;
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
goto ret_;
}
if ((((G_NV((*(P122)rt_nil_check(F->t_2089)).kind_) == ((rt_int)6LL)) && (!f_bounded_475(F->up, F->c_2091))) && ((*(P174)rt_nil_check(F->e_656)).b_ != NULL))) {
F->up->vrp_ok_219 = 1;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_656)).b_, F->t_2089, &F->vt_2090, &F->v_2093);
F->up->vrp_ok_219 = 0;
f_check_type_487(F->up, F->vt_2090, F->t_2089, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)), F->t_2089, &F->acc_2092);
f_copy_code_624(F->up, F->t_2089, (*(P140)rt_nil_check(F->v_2093)), &F->x_2094);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2092)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
} else {
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)), F->t_2089, &F->acc_2092);
f_init_storage_612(F->up, (*(P140)rt_nil_check(F->acc_2092)), F->t_2089, F->c_2091);
if (((*(P174)rt_nil_check(F->e_656)).b_ != NULL)) {
if (f_restricted_here_563(F->up, F->t_2089)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_656)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_756(F->up, (*(P174)rt_nil_check(F->e_656)).b_)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_656)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_219 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2089)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->acc_2092;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_656)).b_, F->t_2089, &F->vt_2090, &F->v_2093);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_219 = 0;
f_check_type_487(F->up, F->vt_2090, F->t_2089, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_assign_code_620(F->up, (*(P140)rt_nil_check(F->acc_2092)), F->t_2089, (*(P140)rt_nil_check(F->v_2093)), F->c_2091, &F->x_2094);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2094)));
}
}
(*(P117)rt_nil_check(F->y_2087)).t_ = F->t_2089;
(*(P117)rt_nil_check(F->y_2087)).c_ = F->c_2091;
f_bind_642(F->up, F->y_2087, F->acc_2092);
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
} else if (0 || sel2096 == ((rt_int)41LL)) {
f_resolve_object_type_663(F->up, (*(P174)rt_nil_check(F->e_656)).a_, &F->t_2089, &F->c_2091);
F->z_2088 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)));
if (((*(P174)rt_nil_check(F->e_656)).b_ == NULL)) {
if (((F->up->cur_pkg_214 == NULL) || (!(G_NV((*(P122)rt_nil_check(F->t_2089)).priv_) && (G_NV((*(P122)rt_nil_check(F->t_2089)).kind_) == ((rt_int)9LL)))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_656)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2087 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_656)).name_);
(*(P117)rt_nil_check(F->y_2087)).t_ = F->t_2089;
(*(P117)rt_nil_check(F->y_2087)).c_ = F->c_2091;
(*(P117)rt_nil_check(F->y_2087)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2087)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
goto ret_;
}
if (((((F->z_2088 != NULL) && (G_NV((*(P117)rt_nil_check(F->z_2088)).depth_) == G_NV(F->up->depth_120))) && (G_NV((*(P117)rt_nil_check(F->z_2088)).kind_) == ((rt_int)2LL))) && (G_NV((*(P117)rt_nil_check(F->z_2088)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_487(F->up, F->t_2089, (*(P117)rt_nil_check(F->z_2088)).t_, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_656)).b_, F->t_2089, &F->vt_2090, &F->v_2093);
f_check_type_487(F->up, F->vt_2090, F->t_2089, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)), F->t_2089, &F->acc_2092);
f_bind_642(F->up, F->z_2088, F->acc_2092);
f_copy_code_624(F->up, F->t_2089, (*(P140)rt_nil_check(F->v_2093)), &F->x_2094);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2092)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_2088)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2087 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_656)).name_);
(*(P117)rt_nil_check(F->y_2087)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_219 = 1;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_656)).b_, F->t_2089, &F->vt_2090, &F->v_2093);
F->up->vrp_ok_219 = 0;
f_check_type_487(F->up, F->vt_2090, F->t_2089, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_2089)).kind_) == ((rt_int)1LL))) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_656)).b_, &(*(P117)rt_nil_check(F->y_2087)).mvalue_, &F->ok_2095);
 (void)rt_range(F->ok_2095, 0, 1);
(*(P117)rt_nil_check(F->y_2087)).hasmv_ = G_NV(F->ok_2095);
}
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)), F->t_2089, &F->acc_2092);
f_copy_code_624(F->up, F->t_2089, (*(P140)rt_nil_check(F->v_2093)), &F->x_2094);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2092)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2094))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->y_2087)).t_ = F->t_2089;
(*(P117)rt_nil_check(F->y_2087)).c_ = F->c_2091;
(*(P117)rt_nil_check(F->y_2087)).ro_ = 1;
f_bind_642(F->up, F->y_2087, F->acc_2092);
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
} else if (0 || sel2096 == ((rt_int)46LL)) {
if (((*(P174)rt_nil_check(F->e_656)).a_ != NULL)) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).a_))) {
F->y_2087 = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_656)).line_));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2087 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_656)).a_)).name_)));
} else {
F->y_2087 = NULL;
}
if (((F->y_2087 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2087)).kind_) != ((rt_int)6LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_656)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1054(F->up, F->y_2087, &F->z_2088);
(*(P117)rt_nil_check(F->z_2088)).name_ = (*(P174)rt_nil_check(F->e_656)).name_;
f_define_465(F->up, F->z_2088, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
goto ret_;
}
F->y_2087 = f_new_sym_470(F->up, ((rt_int)6LL), (*(P174)rt_nil_check(F->e_656)).name_);
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2087)).cname_);
f_put_to_253(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).cname_))), one_rt_gstr(59)));
f_put_to_253(F->up, F->up->out_excs_135, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2087)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_246(F->up)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_))), f_q_246(F->up)), rt_g_lit(");", 2)));
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
} else if (0 || sel2096 == ((rt_int)44LL) || sel2096 == ((rt_int)45LL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_656)).ival_) == ((rt_int)0LL)) && f_is_generic_name_1257(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_656)).name_))))) {
f_attach_generic_body_1259(F->up, F->e_656);
} else if ((G_NV((*(P174)rt_nil_check(F->e_656)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_665(F->up, F->e_656);
} else if ((G_NV((*(P174)rt_nil_check(F->e_656)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_651(F->up, F->e_656, &F->y_2087);
f_define_465(F->up, F->y_2087, G_NV((*(P174)rt_nil_check(F->e_656)).line_));
f_elaborate_defaults_648(F->up, F->y_2087);
} else {
f_subprogram_body_693(F->up, F->e_656, f_lookup_decl_439(F->up, F->e_656));
}
} else if (0 || sel2096 == ((rt_int)55LL)) {
f_use_clause_1068(F->up, F->e_656);
} else if (0 || sel2096 == ((rt_int)56LL)) {
f_pragma_decl_659(F->up, F->e_656);
} else {
f_other_decl_673(F->up, F->e_656);
}
}
ret_:

  return;
}

static void f_pragma_decl_659(struct f_greenc_1fr *up_, P174 e_658) {
  struct f_pragma_decl_659fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_658 = e_658;
ret_:

  return;
}

static void f_resolve_object_type_663(struct f_greenc_1fr *up_, P174 st_660, P122 *t_661, P178 *c_662) {
  struct f_resolve_object_type_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_660 = st_660;
F->t_661 = t_661;
F->c_662 = c_662;
if (((G_NV((*(P174)rt_nil_check(F->st_660)).kind_) != ((rt_int)80LL)) && (F->st_660 == F->up->anon_node_176))) {
(*F->t_661) = F->up->anon_typ_177;
(*F->c_662) = F->up->anon_cons_180;
goto ret_;
}
f_resolve_508(F->up, F->st_660, &(*F->t_661), &(*F->c_662));
if ((G_NV((*(P174)rt_nil_check(F->st_660)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_176 = F->st_660;
F->up->anon_typ_177 = (*F->t_661);
F->up->anon_cons_180 = (*F->c_662);
}
ret_:

  return;
}

static void f_rename_subprogram_665(struct f_greenc_1fr *up_, P174 e_664) {
  struct f_rename_subprogram_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_664 = e_664;
F->newy_2097 = NULL;
F->y_2098 = NULL;
F->z_2099 = NULL;
F->cand_2100 = NULL;
F->ix_2101 = NULL;
F->p_2102 = NULL;
F->q_2103 = NULL;
F->tail_2104 = NULL;
f_build_subprogram_651(F->up, F->e_664, &F->newy_2097);
F->y_2098 = NULL;
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).a_)))) {
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2100 = ({ A116 ix2105 = F->up->table_119; ix2105.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).name_))), ix2105.lo, ix2105.hi) - ix2105.lo]; });
while ((F->cand_2100 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2100)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)10LL)))) && f_visible_sym_422(F->up, F->cand_2100))) {
if (((f_same_types_456(F->up, (*(P117)rt_nil_check(F->cand_2100)).params_, (*(P117)rt_nil_check(F->newy_2097)).params_) && f_same_444(F->up, (*(P117)rt_nil_check(F->cand_2100)).result_, (*(P117)rt_nil_check(F->newy_2097)).result_)) && (F->y_2098 == NULL))) {
F->y_2098 = F->cand_2100;
}
}
F->cand_2100 = (*(P117)rt_nil_check(F->cand_2100)).chain_;
}
L_end_2106: ;
} else {
F->cand_2100 = (*(P117)rt_nil_check(f_lookup_path_1043(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).a_)))).members_;
while ((F->cand_2100 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2100)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2100)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P117)rt_nil_check(F->cand_2100)).hidden_)))) {
if (((f_same_types_456(F->up, (*(P117)rt_nil_check(F->cand_2100)).params_, (*(P117)rt_nil_check(F->newy_2097)).params_) && f_same_444(F->up, (*(P117)rt_nil_check(F->cand_2100)).result_, (*(P117)rt_nil_check(F->newy_2097)).result_)) && (F->y_2098 == NULL))) {
F->y_2098 = F->cand_2100;
}
}
F->cand_2100 = (*(P117)rt_nil_check(F->cand_2100)).mnext_;
}
L_end_2107: ;
}
}
if (((F->y_2098 == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1176(F->up, (*(P174)rt_nil_check(F->e_664)).c_, &F->y_2098, &F->ix_2101);
if (((F->ix_2101 != NULL) || ((*(P117)rt_nil_check(F->y_2098)).c_ != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_456(F->up, (*(P117)rt_nil_check(F->y_2098)).params_, (*(P117)rt_nil_check(F->newy_2097)).params_)) || (G_NV((*(P174)rt_nil_check(F->e_664)).kind_) != ((rt_int)44LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2098 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_664)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_664)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1054(F->up, F->y_2098, &F->z_2099);
(*(P117)rt_nil_check(F->z_2099)).name_ = (*(P174)rt_nil_check(F->e_664)).name_;
(*(P117)rt_nil_check(F->z_2099)).decl_ = (*(P117)rt_nil_check(F->y_2098)).decl_;
(*(P117)rt_nil_check(F->z_2099)).params_ = NULL;
F->p_2102 = (*(P117)rt_nil_check(F->y_2098)).params_;
F->q_2103 = (*(P117)rt_nil_check(F->newy_2097)).params_;
while ((F->p_2102 != NULL)) {
if ((F->tail_2104 == NULL)) {
(*(P117)rt_nil_check(F->z_2099)).params_ = ({ R1829 *cell2109 = rt_alloc(sizeof(R1829)); *cell2109 = cp_R1829(({ R1829 ag2110; ag2110.name_ = (*(P1828)rt_nil_check(F->q_2103)).name_; ag2110.mode_ = G_NV((*(P1828)rt_nil_check(F->p_2102)).mode_); ag2110.t_ = (*(P1828)rt_nil_check(F->p_2102)).t_; ag2110.c_ = (*(P1828)rt_nil_check(F->p_2102)).c_; ag2110.cfield_ = (*(P1828)rt_nil_check(F->p_2102)).cfield_; ag2110.dflt_ = (*(P1828)rt_nil_check(F->q_2103)).dflt_; ag2110.next_ = NULL; ag2110.dsym_ = NULL; ag2110; })); (P1828)cell2109; });
F->tail_2104 = (*(P117)rt_nil_check(F->z_2099)).params_;
} else {
(*(P1828)rt_nil_check(F->tail_2104)).next_ = ({ R1829 *cell2111 = rt_alloc(sizeof(R1829)); *cell2111 = cp_R1829(({ R1829 ag2112; ag2112.name_ = (*(P1828)rt_nil_check(F->q_2103)).name_; ag2112.mode_ = G_NV((*(P1828)rt_nil_check(F->p_2102)).mode_); ag2112.t_ = (*(P1828)rt_nil_check(F->p_2102)).t_; ag2112.c_ = (*(P1828)rt_nil_check(F->p_2102)).c_; ag2112.cfield_ = (*(P1828)rt_nil_check(F->p_2102)).cfield_; ag2112.dflt_ = (*(P1828)rt_nil_check(F->q_2103)).dflt_; ag2112.next_ = NULL; ag2112.dsym_ = NULL; ag2112; })); (P1828)cell2111; });
F->tail_2104 = (*(P1828)rt_nil_check(F->tail_2104)).next_;
}
F->p_2102 = (*(P1828)rt_nil_check(F->p_2102)).next_;
F->q_2103 = (*(P1828)rt_nil_check(F->q_2103)).next_;
}
L_end_2108: ;
f_define_465(F->up, F->z_2099, G_NV((*(P174)rt_nil_check(F->e_664)).line_));
f_elaborate_defaults_648(F->up, F->z_2099);
ret_:

  return;
}

static void f_rename_module_668(struct f_greenc_1fr *up_, P174 e_666, P174 target_667) {
  struct f_rename_module_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_666 = e_666;
F->target_667 = target_667;
F->y_2113 = NULL;
F->z_2114 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->target_667)).kind_) == ((rt_int)8LL))) {
F->y_2113 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_667)).a_)).name_)));
if ((((F->y_2113 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2113)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->y_2113)).c_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_666)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_667)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1054(F->up, F->y_2113, &F->z_2114);
(*(P117)rt_nil_check(F->z_2114)).name_ = (*(P174)rt_nil_check(F->e_666)).name_;
(*(P117)rt_nil_check(F->z_2114)).flags_ = ((rt_int)4LL);
(*(P117)rt_nil_check(F->z_2114)).decl_ = F->target_667;
f_define_465(F->up, F->z_2114, G_NV((*(P174)rt_nil_check(F->e_666)).line_));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->target_667)).kind_) == ((rt_int)5LL))) {
F->y_2113 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->target_667)).name_)));
} else if ((G_NV((*(P174)rt_nil_check(F->target_667)).kind_) == ((rt_int)9LL))) {
F->y_2113 = f_lookup_path_1043(F->up, f_path_of_345(F->up, F->target_667));
}
if (((F->y_2113 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2113)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2113)).kind_) != ((rt_int)9LL))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_666)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2113)).kind_) == ((rt_int)9LL)) != (G_NV((*(P174)rt_nil_check(F->e_666)).kind_) == ((rt_int)50LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_666)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1054(F->up, F->y_2113, &F->z_2114);
(*(P117)rt_nil_check(F->z_2114)).name_ = (*(P174)rt_nil_check(F->e_666)).name_;
f_define_465(F->up, F->z_2114, G_NV((*(P174)rt_nil_check(F->e_666)).line_));
ret_:

  return;
}

static void f_push_barrier_671(struct f_greenc_1fr *up_, P174 e_669, rt_int limit_670) {
  struct f_push_barrier_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_669 = e_669;
F->limit_670 = limit_670;
F->b_2115 = NULL;
F->first_name_2116 = NULL;
F->k_2117 = INT64_MIN;
F->b_2115 = ({ R199 *cell2118 = rt_alloc(sizeof(R199)); *cell2118 = cp_R199(({ R199 ag2119; ag2119.limit_ = F->limit_670; ag2119.keep_ = rt_neg(((rt_int)1LL)); ag2119.allowed_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_669)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_669)).name_))), one_rt_gstr(44))); ag2119.next_ = F->up->barriers_200; ag2119; })); (P198)cell2118; });
F->k_2117 = ((rt_int)2LL);
while (((G_NV(F->k_2117) <= ({ rt_gstr at2121 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_669)).formal_)); at2121.hi >= at2121.lo ? at2121.hi - at2121.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2122 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_669)).formal_)); ix2122.p[rt_index(G_NV(F->k_2117), ix2122.lo, ix2122.hi) - ix2122.lo]; })) != 44))) {
F->k_2117 = rt_add(G_NV(F->k_2117), ((rt_int)1LL));
}
L_end_2120: ;
if ((G_NV(F->k_2117) > ((rt_int)2LL))) {
F->first_name_2116 = f_mk_228(F->up, ({ rt_gstr sl2124 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_669)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2117), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2124.lo, sl2124.hi); rt_index(h_, sl2124.lo, sl2124.hi); } sl2124.p += l_ - sl2124.lo; sl2124.lo = l_; sl2124.hi = h_; sl2124; }));
(*(P198)rt_nil_check(F->b_2115)).keep_ = f_enclosing_depth_435(F->up, (*(P140)rt_nil_check(F->first_name_2116)));
}
F->up->barriers_200 = F->b_2115;
ret_:

  return;
}

static void f_other_decl_673(struct f_greenc_1fr *up_, P174 e_672) {
  struct f_other_decl_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_672 = e_672;
if (((G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)48LL)) && (G_NV((*(P174)rt_nil_check(F->e_672)).flag_) == ((rt_int)3LL)))) {
f_rename_module_668(F->up, F->e_672, (*(P174)rt_nil_check(F->e_672)).a_);
} else if (((G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)50LL)) && (G_NV((*(P174)rt_nil_check(F->e_672)).flag_) == ((rt_int)3LL)))) {
f_rename_module_668(F->up, F->e_672, (*(P174)rt_nil_check(F->e_672)).b_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)48LL))) {
f_package_spec_1059(F->up, F->e_672);
} else if ((G_NV((*(P174)rt_nil_check(F->e_672)).kind_) == ((rt_int)49LL))) {
f_package_body_1064(F->up, F->e_672);
} else {
f_task_decl_1150(F->up, F->e_672);
}
ret_:

  return;
}

static void f_scan_labels_676(struct f_greenc_1fr *up_, P174 stmts_674, rt_gstr path_675) {
  struct f_scan_labels_676fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_674 = stmts_674;
F->path_675 = cp_rt_gstr(path_675);
F->s_2125 = NULL;
F->s_2125 = F->stmts_674;
F->a_2126 = NULL;
F->l_2127 = NULL;
F->c_2128 = NULL;
while ((F->s_2125 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)57LL))) {
F->l_2127 = F->up->body_labels_191;
while ((F->l_2127 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2127)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2125)).name_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_2125)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2125)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2127 = (*(P189)rt_nil_check(F->l_2127)).next_;
}
L_end_2130: ;
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2125)).name_)))), one_rt_gstr(95)), &F->c_2128);
F->up->body_labels_191 = ({ R190 *cell2131 = rt_alloc(sizeof(R190)); *cell2131 = cp_R190(({ R190 ag2132; ag2132.name_ = (*(P174)rt_nil_check(F->s_2125)).name_; ag2132.cname_ = F->c_2128; ag2132.path_ = f_mk_228(F->up, F->path_675); ag2132.frames_ = ((rt_int)0LL); ag2132.line_ = G_NV((*(P174)rt_nil_check(F->s_2125)).line_); ag2132.next_ = F->up->body_labels_191; ag2132; })); (P189)cell2131; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_192 = ({ R190 *cell2133 = rt_alloc(sizeof(R190)); *cell2133 = cp_R190(({ R190 ag2134; ag2134.name_ = (*(P174)rt_nil_check(F->s_2125)).name_; ag2134.cname_ = NULL; ag2134.path_ = f_mk_228(F->up, F->path_675); ag2134.frames_ = ((rt_int)0LL); ag2134.line_ = G_NV((*(P174)rt_nil_check(F->s_2125)).line_); ag2134.next_ = F->up->body_gotos_192; ag2134; })); (P189)cell2133; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)22LL))) {
F->a_2126 = (*(P174)rt_nil_check(F->s_2125)).a_;
while ((F->a_2126 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->a_2126)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2126 = (*(P174)rt_nil_check(F->a_2126)).next_;
}
L_end_2135: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->s_2125)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)23LL))) {
F->a_2126 = (*(P174)rt_nil_check(F->s_2125)).b_;
while ((F->a_2126 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->a_2126)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2126 = (*(P174)rt_nil_check(F->a_2126)).next_;
}
L_end_2136: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->s_2125)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)24LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->s_2125)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_680(F->up, (*(P174)rt_nil_check(F->s_2125)).b_, (*(P174)rt_nil_check(F->s_2125)).c_, F->path_675);
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)34LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->s_2125)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2125)).kind_) == ((rt_int)35LL))) {
F->a_2126 = (*(P174)rt_nil_check(F->s_2125)).a_;
while ((F->a_2126 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2126)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_676(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2126)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->a_2126)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2126 = (*(P174)rt_nil_check(F->a_2126)).next_;
}
L_end_2137: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->s_2125)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_675, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
F->s_2125 = (*(P174)rt_nil_check(F->s_2125)).next_;
}
L_end_2129: ;
ret_:

  return;
}

static void f_scan_guarded_680(struct f_greenc_1fr *up_, P174 stmts_677, P174 hs_678, rt_gstr path_679) {
  struct f_scan_guarded_680fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_677 = stmts_677;
F->hs_678 = hs_678;
F->path_679 = cp_rt_gstr(path_679);
F->h_2138 = NULL;
F->h_2138 = F->hs_678;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((F->hs_678 == NULL)) {
f_scan_labels_676(F->up, F->stmts_677, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_679, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else {
f_scan_labels_676(F->up, F->stmts_677, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_679, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
while ((F->h_2138 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_676(F->up, (*(P174)rt_nil_check(F->h_2138)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_679, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->h_2138 = (*(P174)rt_nil_check(F->h_2138)).next_;
}
L_end_2139: ;
ret_:

  return;
}

static rt_int f_count_g_682(struct f_greenc_1fr *up_, rt_gstr p_681) {
  struct f_count_g_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_681 = cp_rt_gstr(p_681);
F->n_2140 = INT64_MIN;
F->n_2140 = ((rt_int)0LL);
{ rt_int lo2145 = ({ rt_gstr at2142 = F->p_681; at2142.lo; }), hi2146 = ({ rt_gstr at2143 = F->p_681; at2143.hi; });
for (rt_int it2147 = lo2145; it2147 <= hi2146; it2147++) {
F->i_2144 = it2147;
if ((G_NV(({ rt_gstr ix2148 = F->p_681; ix2148.p[rt_index(F->i_2144, ix2148.lo, ix2148.hi) - ix2148.lo]; })) == 103)) {
F->n_2140 = rt_add(G_NV(F->n_2140), ((rt_int)1LL));
}
}
}
L_end_2141: ;
F->result_ = G_NV(F->n_2140);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_685(struct f_greenc_1fr *up_, P174 stmts_683, P174 hs_684) {
  struct f_label_body_685fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_683 = stmts_683;
F->hs_684 = hs_684;
F->l_2149 = NULL;
F->g_2150 = NULL;
F->gp_2151 = NULL;
F->lp_2152 = NULL;
F->up->body_labels_191 = NULL;
F->up->body_gotos_192 = NULL;
F->up->segments_193 = ((rt_int)0LL);
f_scan_guarded_680(F->up, F->stmts_683, F->hs_684, rt_g_lit("/", 1));
F->l_2149 = F->up->body_labels_191;
while ((F->l_2149 != NULL)) {
(*(P189)rt_nil_check(F->l_2149)).frames_ = rt_add(G_NV(F->up->frames_150), f_count_g_682(F->up, (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2149)).path_))));
F->l_2149 = (*(P189)rt_nil_check(F->l_2149)).next_;
}
L_end_2153: ;
F->g_2150 = F->up->body_gotos_192;
while ((F->g_2150 != NULL)) {
F->l_2149 = F->up->body_labels_191;
while (((F->l_2149 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2149)).name_)), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2150)).name_)))))) {
F->l_2149 = (*(P189)rt_nil_check(F->l_2149)).next_;
}
L_end_2155: ;
if ((F->l_2149 == NULL)) {
f_fail_249(F->up, G_NV((*(P189)rt_nil_check(F->g_2150)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2150)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2151 = (*(P189)rt_nil_check(F->g_2150)).path_;
F->lp_2152 = (*(P189)rt_nil_check(F->l_2149)).path_;
if ((({ rt_gstr at2156 = (*(P140)rt_nil_check(F->lp_2152)); at2156.hi >= at2156.lo ? at2156.hi - at2156.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2157 = (*(P140)rt_nil_check(F->gp_2151)); at2157.hi >= at2157.lo ? at2157.hi - at2157.lo + 1 : (rt_int)0; }))) {
f_fail_249(F->up, G_NV((*(P189)rt_nil_check(F->g_2150)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2159 = (*(P140)rt_nil_check(F->gp_2151)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2158 = (*(P140)rt_nil_check(F->lp_2152)); at2158.hi >= at2158.lo ? at2158.hi - at2158.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2159.lo, sl2159.hi); rt_index(h_, sl2159.lo, sl2159.hi); } sl2159.p += l_ - sl2159.lo; sl2159.lo = l_; sl2159.hi = h_; sl2159; }), (*(P140)rt_nil_check(F->lp_2152))))) {
f_fail_249(F->up, G_NV((*(P189)rt_nil_check(F->g_2150)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2164 = rt_add(({ rt_gstr at2161 = (*(P140)rt_nil_check(F->lp_2152)); at2161.hi >= at2161.lo ? at2161.hi - at2161.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2165 = ({ rt_gstr at2162 = (*(P140)rt_nil_check(F->gp_2151)); at2162.hi >= at2162.lo ? at2162.hi - at2162.lo + 1 : (rt_int)0; });
for (rt_int it2166 = lo2164; it2166 <= hi2165; it2166++) {
F->i_2163 = it2166;
if (((G_NV(({ rt_gstr ix2167 = (*(P140)rt_nil_check(F->gp_2151)); ix2167.p[rt_index(F->i_2163, ix2167.lo, ix2167.hi) - ix2167.lo]; })) == 104) || (G_NV(({ rt_gstr ix2168 = (*(P140)rt_nil_check(F->gp_2151)); ix2168.p[rt_index(F->i_2163, ix2168.lo, ix2168.hi) - ix2168.lo]; })) == 97))) {
f_fail_249(F->up, G_NV((*(P189)rt_nil_check(F->g_2150)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2160: ;
F->g_2150 = (*(P189)rt_nil_check(F->g_2150)).next_;
}
L_end_2154: ;
ret_:

  return;
}

static void f_gen_label_688(struct f_greenc_1fr *up_, P174 s_686, int goto_it_687) {
  struct f_gen_label_688fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_686 = s_686;
F->goto_it_687 = goto_it_687;
F->l_2169 = NULL;
F->l_2169 = F->up->body_labels_191;
while (((F->l_2169 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2169)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_686)).name_)))))) {
F->l_2169 = (*(P189)rt_nil_check(F->l_2169)).next_;
}
L_end_2170: ;
if ((F->l_2169 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_686)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_686)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_687) {
f_pop_frames_697(F->up, G_NV((*(P189)rt_nil_check(F->l_2169)).frames_));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2169)).cname_))), one_rt_gstr(59)));
} else {
f_emit_255(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2169)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_690(struct f_greenc_1fr *up_, P174 d_689) {
  struct f_is_foreign_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_689 = d_689;
if (((*(P174)rt_nil_check(F->d_689)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_689)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_693(struct f_greenc_1fr *up_, P174 d_691, P117 y_692) {
  struct f_subprogram_body_693fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_691 = d_691;
F->y_692 = y_692;
F->saved_code_2171 = NULL;
F->saved_code_2171 = F->up->code_136;
F->saved_fields_2172 = NULL;
F->saved_fields_2172 = F->up->fields_buf_137;
F->saved_in_2173 = INT_MIN;
F->saved_in_2173 = G_NV(F->up->in_func_138);
F->saved_sym_2174 = NULL;
F->saved_sym_2174 = F->up->func_sym_142;
F->saved_exits_2175 = NULL;
F->saved_exits_2175 = F->up->exits_145;
F->saved_frames_2176 = INT64_MIN;
F->saved_frames_2176 = G_NV(F->up->frames_150);
F->saved_handlers_2177 = NULL;
F->saved_handlers_2177 = F->up->handlers_153;
F->saved_cleanups_2178 = NULL;
F->saved_cleanups_2178 = F->up->cleanups_154;
F->saved_labels_2179 = NULL;
F->saved_labels_2179 = F->up->body_labels_191;
F->saved_hx_2180 = NULL;
F->saved_hx_2180 = F->up->handler_exits_194;
F->saved_hd_2181 = INT64_MIN;
F->saved_hd_2181 = G_NV(F->up->handler_depth_195);
F->saved_pure_2182 = NULL;
F->saved_pure_2182 = F->up->pure_sym_217;
F->aw_2183 = NULL;
F->saved_pdepth_2184 = INT64_MIN;
F->saved_pdepth_2184 = G_NV(F->up->pure_depth_218);
F->args_2185 = NULL;
F->head_2186 = NULL;
F->frame_2187 = NULL;
F->parent_2188 = NULL;
F->ct_2189 = NULL;
F->x_2190 = NULL;
F->pm_2191 = NULL;
F->pm_2191 = (*(P117)rt_nil_check(F->y_692)).params_;
F->p_2192 = NULL;
F->frame_2187 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_692)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_138)) {
F->parent_2188 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_136 = f_new_buffer_250(F->up);
F->up->fields_buf_137 = f_new_buffer_250(F->up);
F->up->in_func_138 = 1;
F->up->func_sym_142 = F->y_692;
F->up->exits_145 = NULL;
F->up->frames_150 = ((rt_int)0LL);
F->up->handlers_153 = NULL;
F->up->cleanups_154 = NULL;
F->up->handler_exits_194 = NULL;
F->up->handler_depth_195 = ((rt_int)0LL);
F->up->cur_level_139 = rt_add(G_NV(F->up->cur_level_139), ((rt_int)1LL));
F->args_2185 = f_mk_228(F->up, rt_g_lit("", 0));
f_open_scope_466(F->up);
f_push_unit_437(F->up, (*(P174)rt_nil_check(F->d_691)).name_);
if (((G_NV((*(P117)rt_nil_check(F->y_692)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P117)rt_nil_check(F->y_692)).vrp_)))) {
F->up->pure_sym_217 = F->y_692;
F->up->pure_depth_218 = G_NV(F->up->depth_120);
}
if ((F->parent_2188 != NULL)) {
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P140)rt_nil_check(F->parent_2188))), rt_g_lit(" *up;", 5)));
F->args_2185 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->parent_2188))), rt_g_lit(" *up_", 5)));
f_emit_255(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2191 != NULL)) {
f_ctype_492(F->up, (*(P1828)rt_nil_check(F->pm_2191)).t_, &F->ct_2189);
if ((({ rt_gstr at2194 = (*(P140)rt_nil_check(F->args_2185)); at2194.hi >= at2194.lo ? at2194.hi - at2194.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2185 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2185)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1828)rt_nil_check(F->pm_2191)).mode_) == ((rt_int)1LL))) {
F->p_2192 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P1828)rt_nil_check(F->pm_2191)).name_);
(*(P117)rt_nil_check(F->p_2192)).ro_ = 1;
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2189))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), one_rt_gstr(59)));
F->args_2185 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2185)), (*(P140)rt_nil_check(F->ct_2189))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))));
f_copy_code_624(F->up, (*(P1828)rt_nil_check(F->pm_2191)).t_, (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_)), &F->x_2190);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2190))), one_rt_gstr(59)));
} else {
F->p_2192 = f_new_sym_470(F->up, ((rt_int)1LL), (*(P1828)rt_nil_check(F->pm_2191)).name_);
(*(P117)rt_nil_check(F->p_2192)).byref_ = 1;
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2189))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), one_rt_gstr(59)));
F->args_2185 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2185)), (*(P140)rt_nil_check(F->ct_2189))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), one_rt_gstr(59)));
}
(*(P117)rt_nil_check(F->p_2192)).access_path_ = (*(P1828)rt_nil_check(F->pm_2191)).cfield_;
(*(P117)rt_nil_check(F->p_2192)).t_ = (*(P1828)rt_nil_check(F->pm_2191)).t_;
(*(P117)rt_nil_check(F->p_2192)).c_ = (*(P1828)rt_nil_check(F->pm_2191)).c_;
(*(P117)rt_nil_check(F->p_2192)).level_ = G_NV(F->up->cur_level_139);
f_define_465(F->up, F->p_2192, G_NV((*(P174)rt_nil_check(F->d_691)).line_));
F->pm_2191 = (*(P1828)rt_nil_check(F->pm_2191)).next_;
}
L_end_2193: ;
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_692)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_492(F->up, (*(P117)rt_nil_check(F->y_692)).result_, &F->ct_2189);
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2189))), rt_g_lit(" result_;", 9)));
}
if ((f_is_foreign_690(F->up, F->d_691) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_692)).result_)).kind_) == ((rt_int)9LL)))) {
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->d_691)).c_);
F->x_2190 = f_mk_228(F->up, rt_g_lit("", 0));
F->pm_2191 = (*(P117)rt_nil_check(F->y_692)).params_;
while ((F->pm_2191 != NULL)) {
if ((({ rt_gstr at2196 = (*(P140)rt_nil_check(F->x_2190)); at2196.hi >= at2196.lo ? at2196.hi - at2196.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2190 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2190)), rt_g_lit(", ", 2)));
}
if ((f_is_string_571(F->up, (*(P1828)rt_nil_check(F->pm_2191)).t_) && (G_NV((*(P1828)rt_nil_check(F->pm_2191)).mode_) == ((rt_int)1LL)))) {
F->x_2190 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2190)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2190 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2190)), rt_g_lit("F->", 3)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2191)).cfield_))));
}
F->pm_2191 = (*(P1828)rt_nil_check(F->pm_2191)).next_;
}
L_end_2195: ;
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_691)).name_)))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2190))), rt_g_lit(");", 2)));
} else {
f_label_body_685(F->up, (*(P174)rt_nil_check(F->d_691)).d_, (*(P174)rt_nil_check(F->d_691)).e_);
f_guarded_705(F->up, (*(P174)rt_nil_check(F->d_691)).c_, (*(P174)rt_nil_check(F->d_691)).d_, (*(P174)rt_nil_check(F->d_691)).e_, G_NV((*(P174)rt_nil_check(F->d_691)).line_));
}
f_task_awaits_1170(F->up, (*(P174)rt_nil_check(F->d_691)).c_, &F->aw_2183);
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_467(F->up);
F->up->cur_level_139 = rt_sub(G_NV(F->up->cur_level_139), ((rt_int)1LL));
if ((({ rt_gstr at2197 = (*(P140)rt_nil_check(F->args_2185)); at2197.hi >= at2197.lo ? at2197.hi - at2197.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2185 = f_mk_228(F->up, rt_g_lit("void", 4));
}
f_ctype_492(F->up, (*(P117)rt_nil_check(F->y_692)).result_, &F->ct_2189);
F->head_2186 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2189))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_692)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2185))), one_rt_gstr(41)));
f_put_to_253(F->up, F->up->out_protos_131, cat_rt_gstr((*(P140)rt_nil_check(F->head_2186)), one_rt_gstr(59)));
f_put_to_253(F->up, F->up->out_frames_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->frame_2187))), rt_g_lit(" { int dummy;", 13)));
f_splice_260(F->up, F->up->out_frames_129, F->up->fields_buf_137);
f_put_to_253(F->up, F->up->out_frames_129, rt_g_lit("};", 2));
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr((*(P140)rt_nil_check(F->head_2186)), rt_g_lit(" {", 2)));
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P140)rt_nil_check(F->frame_2187))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P117)rt_nil_check(F->y_692)).kind_) == ((rt_int)4LL)) && ((*(P117)rt_nil_check(F->y_692)).access_path_ != NULL))) {
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_692)).access_path_))));
}
f_splice_260(F->up, F->up->out_funcs_133, F->up->code_136);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_692)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_253(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2183)));
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_253(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2183)));
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("  return;", 9));
}
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("}", 1));
f_put_to_253(F->up, F->up->out_funcs_133, rt_g_lit("", 0));
F->up->code_136 = F->saved_code_2171;
F->up->fields_buf_137 = F->saved_fields_2172;
F->up->in_func_138 = G_NV(F->saved_in_2173);
F->up->func_sym_142 = F->saved_sym_2174;
F->up->exits_145 = F->saved_exits_2175;
F->up->frames_150 = G_NV(F->saved_frames_2176);
F->up->handlers_153 = F->saved_handlers_2177;
F->up->cleanups_154 = F->saved_cleanups_2178;
F->up->pure_sym_217 = F->saved_pure_2182;
F->up->pure_depth_218 = G_NV(F->saved_pdepth_2184);
F->up->body_labels_191 = F->saved_labels_2179;
F->up->handler_exits_194 = F->saved_hx_2180;
F->up->handler_depth_195 = G_NV(F->saved_hd_2181);
ret_:

  return;
}

static void f_gen_statements_695(struct f_greenc_1fr *up_, P174 stmts_694) {
  struct f_gen_statements_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_694 = stmts_694;
F->s_2198 = NULL;
F->s_2198 = F->stmts_694;
while ((F->s_2198 != NULL)) {
f_gen_statement_711(F->up, F->s_2198);
F->s_2198 = (*(P174)rt_nil_check(F->s_2198)).next_;
}
L_end_2199: ;
ret_:

  return;
}

static void f_pop_frames_697(struct f_greenc_1fr *up_, rt_int upto_696) {
  struct f_pop_frames_697fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_696 = upto_696;
F->i_2200 = INT64_MIN;
F->i_2200 = G_NV(F->up->frames_150);
F->c_2201 = NULL;
F->c_2201 = F->up->cleanups_154;
while ((G_NV(F->i_2200) > F->upto_696)) {
f_emit_255(F->up, (*(P140)rt_nil_check((*(P151)rt_nil_check(F->c_2201)).s_)));
F->c_2201 = (*(P151)rt_nil_check(F->c_2201)).next_;
F->i_2200 = rt_sub(G_NV(F->i_2200), ((rt_int)1LL));
}
L_end_2202: ;
ret_:

  return;
}

static void f_push_cleanup_699(struct f_greenc_1fr *up_, rt_gstr s_698) {
  struct f_push_cleanup_699fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_698 = cp_rt_gstr(s_698);
F->up->cleanups_154 = ({ R152 *cell2203 = rt_alloc(sizeof(R152)); *cell2203 = cp_R152(({ R152 ag2204; ag2204.s_ = NULL; ag2204.next_ = F->up->cleanups_154; ag2204; })); (P151)cell2203; });
(*(P151)rt_nil_check(F->up->cleanups_154)).s_ = f_mk_228(F->up, F->s_698);
F->up->frames_150 = rt_add(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_700(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_154 = (*(P151)rt_nil_check(F->up->cleanups_154)).next_;
F->up->frames_150 = rt_sub(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_705(struct f_greenc_1fr *up_, P174 decls_701, P174 stmts_702, P174 hs_703, rt_int line_704) {
  struct f_guarded_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_701 = decls_701;
F->stmts_702 = stmts_702;
F->hs_703 = hs_703;
F->line_704 = line_704;
F->saved_hx_2205 = NULL;
F->f_2206 = NULL;
F->x_2207 = NULL;
F->h_2208 = NULL;
F->n_2209 = NULL;
F->first_2210 = INT_MIN;
F->first_2210 = 1;
F->has_others_2211 = INT_MIN;
F->has_others_2211 = 0;
F->conds_2212 = NULL;
if ((F->hs_703 == NULL)) {
f_decl_elements_653(F->up, F->decls_701);
f_gen_statements_695(F->up, F->stmts_702);
goto ret_;
}
f_new_name_231(F->up, rt_g_lit("xf", 2), &F->f_2206);
f_new_name_231(F->up, rt_g_lit("x", 1), &F->x_2207);
f_push_cleanup_699(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2206))), rt_g_lit(");", 2)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P140)rt_nil_check(F->f_2206))), one_rt_gstr(59)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->f_2206))), rt_g_lit(")) {", 4)));
f_decl_elements_653(F->up, F->decls_701);
f_gen_statements_695(F->up, F->stmts_702);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2206))), rt_g_lit(");", 2)));
f_emit_255(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_700(F->up);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2206))), rt_g_lit(");", 2)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->x_2207))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P140)rt_nil_check(F->x_2207))), rt_g_lit(");", 2)));
F->up->handlers_153 = ({ R152 *cell2213 = rt_alloc(sizeof(R152)); *cell2213 = cp_R152(({ R152 ag2214; ag2214.s_ = F->x_2207; ag2214.next_ = F->up->handlers_153; ag2214; })); (P151)cell2213; });
F->h_2208 = F->hs_703;
while ((F->h_2208 != NULL)) {
F->n_2209 = (*(P174)rt_nil_check(F->h_2208)).a_;
F->conds_2212 = f_mk_228(F->up, rt_g_lit("0", 1));
while ((F->n_2209 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2209)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2211 = 1;
F->conds_2212 = f_mk_228(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_215 = (*(P174)rt_nil_check(F->n_2209)).tag_;
f_exc_id_709(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2209)).name_)), G_NV((*(P174)rt_nil_check(F->h_2208)).line_), &F->f_2206);
F->conds_2212 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2212)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->x_2207))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->f_2206))));
}
F->n_2209 = (*(P174)rt_nil_check(F->n_2209)).next_;
}
L_end_2216: ;
if (G_NV(F->first_2210)) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2212))), rt_g_lit(") {", 3)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2212))), rt_g_lit(") {", 3)));
}
F->first_2210 = 0;
F->saved_hx_2205 = F->up->handler_exits_194;
F->up->handler_exits_194 = F->up->exits_145;
F->up->handler_depth_195 = rt_add(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->h_2208)).b_);
F->up->handler_depth_195 = rt_sub(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
F->up->handler_exits_194 = F->saved_hx_2205;
F->h_2208 = (*(P174)rt_nil_check(F->h_2208)).next_;
}
L_end_2215: ;
if ((!G_NV(F->has_others_2211))) {
f_emit_255(F->up, rt_g_lit("} else {", 8));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2207))), rt_g_lit(");", 2)));
}
f_emit_255(F->up, rt_g_lit("}", 1));
F->up->handlers_153 = (*(P151)rt_nil_check(F->up->handlers_153)).next_;
f_emit_255(F->up, rt_g_lit("}", 1));
f_emit_255(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_709(struct f_greenc_1fr *up_, rt_gstr name_706, rt_int line_707, P140 *r_708) {
  struct f_exc_id_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_706 = cp_rt_gstr(name_706);
F->line_707 = line_707;
F->r_708 = r_708;
F->y_2217 = NULL;
F->y_2217 = f_lookup_424(F->up, F->name_706);
if ((F->up->prefix_hint_215 != NULL)) {
F->y_2217 = f_member_of_1049(F->up, (*(P140)rt_nil_check(F->up->prefix_hint_215)), F->name_706, F->line_707);
F->up->prefix_hint_215 = NULL;
}
if (((F->y_2217 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2217)).kind_) != ((rt_int)6LL)))) {
f_fail_249(F->up, F->line_707, cat_rt_gstr(F->name_706, rt_g_lit(" is not an exception", 20)));
}
(*F->r_708) = (*(P117)rt_nil_check(F->y_2217)).cname_;
ret_:

  return;
}

static void f_gen_statement_711(struct f_greenc_1fr *up_, P174 s_710) {
  struct f_gen_statement_711fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_710 = s_710;
F->t_2218 = NULL;
F->vt_2219 = NULL;
F->c_2220 = NULL;
F->lv_2221 = NULL;
F->v_2222 = NULL;
F->x_2223 = NULL;
F->ro_2224 = INT_MIN;
{ rt_int sel2225 = G_NV((*(P174)rt_nil_check(F->s_710)).kind_);
if (0 || sel2225 == ((rt_int)20LL)) {
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_710)).a_)).kind_) == ((rt_int)8LL)) && ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_710)).a_)).b_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_710)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_710)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_713(F->up, F->s_710);
goto ret_;
}
F->up->in_lv_path_220 = 1;
F->up->last_deref_221 = 0;
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->s_710)).a_, &F->lv_2221, &F->t_2218, &F->c_2220, &F->ro_2224);
 (void)rt_range(F->ro_2224, 0, 1);
F->up->in_lv_path_220 = 0;
if (G_NV(F->ro_2224)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_710)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1231(F->up, (*(P174)rt_nil_check(F->s_710)).a_, G_NV((*(P174)rt_nil_check(F->s_710)).line_));
if (f_restricted_here_563(F->up, F->t_2218)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_710)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_756(F->up, (*(P174)rt_nil_check(F->s_710)).b_)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_710)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_219 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2218)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_710)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->lv_2221;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_710)).b_, F->t_2218, &F->vt_2219, &F->v_2222);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_219 = 0;
f_check_type_487(F->up, F->vt_2219, F->t_2218, G_NV((*(P174)rt_nil_check(F->s_710)).line_));
f_assign_code_620(F->up, (*(P140)rt_nil_check(F->lv_2221)), F->t_2218, (*(P140)rt_nil_check(F->v_2222)), F->c_2220, &F->x_2223);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2223)));
} else if (0 || sel2225 == ((rt_int)21LL)) {
F->up->vrp_ok_219 = 1;
f_gen_call_715(F->up, F->s_710);
F->up->vrp_ok_219 = 0;
} else if (0 || sel2225 == ((rt_int)22LL)) {
f_gen_if_717(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)23LL)) {
f_gen_case_719(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)24LL)) {
f_gen_loop_731(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)25LL)) {
f_gen_block_733(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)26LL)) {
f_gen_exit_738(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)27LL)) {
f_gen_return_740(F->up, F->s_710);
} else if (0 || sel2225 == ((rt_int)28LL)) {
if (((((*(P174)rt_nil_check(F->s_710)).tag_ != NULL) && f_is_task_name_1122(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_710)).tag_)))) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_710)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1172(F->up, F->s_710);
} else {
F->up->prefix_hint_215 = (*(P174)rt_nil_check(F->s_710)).tag_;
f_exc_id_709(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_710)).name_)), G_NV((*(P174)rt_nil_check(F->s_710)).line_), &F->x_2223);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2223))), rt_g_lit(");", 2)));
}
} else if (0 || sel2225 == ((rt_int)29LL)) {
if ((F->up->handlers_153 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_710)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->up->handlers_153)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2225 == ((rt_int)30LL)) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->s_710)).a_, F->up->ty_bool_157, &F->vt_2219, &F->v_2222);
f_check_type_487(F->up, F->vt_2219, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_710)).line_));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P140)rt_nil_check(F->v_2222))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2225 == ((rt_int)31LL)) {
} else if (0 || sel2225 == ((rt_int)57LL)) {
f_gen_label_688(F->up, F->s_710, 0);
} else if (0 || sel2225 == ((rt_int)58LL)) {
f_gen_label_688(F->up, F->s_710, 1);
} else {
f_task_statement_gen_1226(F->up, F->s_710);
}
}
ret_:

  return;
}

static void f_slice_assign_713(struct f_greenc_1fr *up_, P174 s_712) {
  struct f_slice_assign_713fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_712 = s_712;
F->lv_2226 = NULL;
F->v_2227 = NULL;
F->sl_2228 = NULL;
F->x_2229 = NULL;
F->t_2230 = NULL;
F->st_2231 = NULL;
F->vt_2232 = NULL;
F->c_2233 = NULL;
F->ro_2234 = INT_MIN;
F->up->in_lv_path_220 = 1;
F->up->last_deref_221 = 0;
f_lvalue_762(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_712)).a_)).a_, &F->lv_2226, &F->t_2230, &F->c_2233, &F->ro_2234);
 (void)rt_range(F->ro_2234, 0, 1);
F->up->in_lv_path_220 = 0;
if (G_NV(F->ro_2234)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_712)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1231(F->up, (*(P174)rt_nil_check(F->s_712)).a_, G_NV((*(P174)rt_nil_check(F->s_712)).line_));
F->ro_2234 = 0;
f_index_on_780(F->up, (*(P140)rt_nil_check(F->lv_2226)), F->t_2230, (*(P174)rt_nil_check(F->s_712)).a_, &F->ro_2234, 0, &F->sl_2228, &F->st_2231, &F->c_2233);
 (void)rt_range(F->ro_2234, 0, 1);
F->up->vrp_ok_219 = 1;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_712)).b_, F->st_2231, &F->vt_2232, &F->v_2227);
F->up->vrp_ok_219 = 0;
f_check_type_487(F->up, F->vt_2232, F->st_2231, G_NV((*(P174)rt_nil_check(F->s_712)).line_));
f_ctype_492(F->up, F->st_2231, &F->x_2229);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2229))), rt_g_lit(" sl_ = ", 7)), (*(P140)rt_nil_check(F->sl_2228))), rt_g_lit("; as_", 5)), (*(P140)rt_nil_check(F->x_2229))), rt_g_lit("(&sl_, ", 7)), (*(P140)rt_nil_check(F->v_2227))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_715(struct f_greenc_1fr *up_, P174 s_714) {
  struct f_gen_call_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_714 = s_714;
F->c_2235 = NULL;
F->c_2235 = (*(P174)rt_nil_check(F->s_714)).a_;
F->t_2236 = NULL;
F->v_2237 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->c_2235)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->c_2235)).kind_) == ((rt_int)9LL)))) {
F->c_2235 = f_nn_302(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->s_714)).line_));
(*(P174)rt_nil_check(F->c_2235)).a_ = (*(P174)rt_nil_check(F->s_714)).a_;
}
if ((G_NV((*(P174)rt_nil_check(F->c_2235)).kind_) != ((rt_int)8LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_714)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_196 = NULL;
f_gcall_1009(F->up, F->c_2235, 1, &F->t_2236, &F->v_2237);
f_emit_255(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->v_2237)), one_rt_gstr(59)));
if ((F->up->post_checks_196 != NULL)) {
f_emit_255(F->up, (*(P140)rt_nil_check(F->up->post_checks_196)));
F->up->post_checks_196 = NULL;
}
ret_:

  return;
}

static void f_gen_if_717(struct f_greenc_1fr *up_, P174 s_716) {
  struct f_gen_if_717fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_716 = s_716;
F->a_2238 = NULL;
F->a_2238 = (*(P174)rt_nil_check(F->s_716)).a_;
F->first_2239 = INT_MIN;
F->first_2239 = 1;
F->t_2240 = NULL;
F->v_2241 = NULL;
while ((F->a_2238 != NULL)) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->a_2238)).a_, F->up->ty_bool_157, &F->t_2240, &F->v_2241);
f_check_type_487(F->up, F->t_2240, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_716)).line_));
if (G_NV(F->first_2239)) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2241))), rt_g_lit(") {", 3)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->v_2241))), rt_g_lit(") {", 3)));
}
F->first_2239 = 0;
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->a_2238)).b_);
F->a_2238 = (*(P174)rt_nil_check(F->a_2238)).next_;
}
L_end_2242: ;
if ((G_NV((*(P174)rt_nil_check(F->s_716)).flag_) == ((rt_int)1LL))) {
f_emit_255(F->up, rt_g_lit("} else {", 8));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_716)).b_);
}
f_emit_255(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_719(struct f_greenc_1fr *up_, P174 s_718) {
  struct f_gen_case_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_718 = s_718;
F->st_2243 = NULL;
F->vt_2244 = NULL;
F->first_2245 = INT_MIN;
F->first_2245 = 1;
F->a_2246 = NULL;
F->a_2246 = (*(P174)rt_nil_check(F->s_718)).b_;
F->lab_2247 = NULL;
F->sel_2248 = NULL;
F->tmp_2249 = NULL;
F->ct_2250 = NULL;
F->conds_2251 = NULL;
F->v_2252 = NULL;
F->lo_2253 = NULL;
F->hi_2254 = NULL;
F->clo_2256.lo = ((rt_int)1LL); F->clo_2256.hi = ((rt_int)2000LL);
F->clo_2256.lo2 = 1; F->clo_2256.hi2 = 1;
F->clo_2256.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2256));
for (rt_int i2257 = 0; i2257 < G_CNT(F->clo_2256); i2257++) F->clo_2256.p[i2257] = INT64_MIN;
F->chi_2258.lo = ((rt_int)1LL); F->chi_2258.hi = ((rt_int)2000LL);
F->chi_2258.lo2 = 1; F->chi_2258.hi2 = 1;
F->chi_2258.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2258));
for (rt_int i2259 = 0; i2259 < G_CNT(F->chi_2258); i2259++) F->chi_2258.p[i2259] = INT64_MIN;
F->nc_2260 = INT64_MIN;
F->nc_2260 = ((rt_int)0LL);
F->vlo_2261 = INT64_MIN;
F->vhi_2262 = INT64_MIN;
F->total_2263 = INT64_MIN;
F->ok_2264 = INT_MIN;
F->ok2_2265 = INT_MIN;
F->y_2266 = NULL;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_718)).a_, NULL, &F->st_2243, &F->sel_2248);
if ((!f_is_discrete_453(F->up, F->st_2243))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_231(F->up, rt_g_lit("sel", 3), &F->tmp_2249);
f_ctype_492(F->up, F->st_2243, &F->ct_2250);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2250))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->sel_2248))), one_rt_gstr(59)));
while ((F->a_2246 != NULL)) {
F->lab_2247 = (*(P174)rt_nil_check(F->a_2246)).a_;
F->conds_2251 = f_mk_228(F->up, rt_g_lit("0", 1));
while ((F->lab_2247 != NULL)) {
F->y_2266 = NULL;
if ((((*(P174)rt_nil_check(F->lab_2247)).b_ == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2247)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2266 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2247)).a_)).name_)));
if (((F->y_2266 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2266)).kind_) != ((rt_int)5LL)))) {
F->y_2266 = NULL;
}
}
if ((F->y_2266 != NULL)) {
f_check_type_487(F->up, (*(P117)rt_nil_check(F->y_2266)).t_, F->st_2243, G_NV((*(P174)rt_nil_check(F->s_718)).line_));
if ((!f_static_bounds_479(F->up, (*(P117)rt_nil_check(F->y_2266)).c_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2247)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2261 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2266)).c_)).mlo_);
F->vhi_2262 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2266)).c_)).mhi_);
F->conds_2251 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2251)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2266)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2266)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P174)rt_nil_check(F->lab_2247)).b_ == NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->lab_2247)).a_, F->st_2243, &F->vt_2244, &F->v_2252);
f_check_type_487(F->up, F->vt_2244, F->st_2243, G_NV((*(P174)rt_nil_check(F->s_718)).line_));
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2247)).a_, &F->vlo_2261, &F->ok_2264);
 (void)rt_range(F->ok_2264, 0, 1);
if ((!G_NV(F->ok_2264))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2262 = G_NV(F->vlo_2261);
F->conds_2251 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2251)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->v_2252))));
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->lab_2247)).a_, F->st_2243, &F->vt_2244, &F->lo_2253);
f_check_type_487(F->up, F->vt_2244, F->st_2243, G_NV((*(P174)rt_nil_check(F->s_718)).line_));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->lab_2247)).b_, F->st_2243, &F->vt_2244, &F->hi_2254);
f_check_type_487(F->up, F->vt_2244, F->st_2243, G_NV((*(P174)rt_nil_check(F->s_718)).line_));
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2247)).a_, &F->vlo_2261, &F->ok_2264);
 (void)rt_range(F->ok_2264, 0, 1);
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2247)).b_, &F->vhi_2262, &F->ok2_2265);
 (void)rt_range(F->ok2_2265, 0, 1);
if ((!(G_NV(F->ok_2264) && G_NV(F->ok2_2265)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2251 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2251)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2253))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2249))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2254))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2261) <= G_NV(F->vhi_2262))) {
{ rt_int lo2271 = ((rt_int)1LL), hi2272 = G_NV(F->nc_2260);
for (rt_int it2273 = lo2271; it2273 <= hi2272; it2273++) {
F->k_2270 = it2273;
if (((G_NV(F->vlo_2261) <= G_NV(({ A2255 ix2274 = F->chi_2258; ix2274.p[rt_index(F->k_2270, ix2274.lo, ix2274.hi) - ix2274.lo]; }))) && (G_NV(({ A2255 ix2275 = F->clo_2256; ix2275.p[rt_index(F->k_2270, ix2275.lo, ix2275.hi) - ix2275.lo]; })) <= G_NV(F->vhi_2262)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2269: ;
if ((G_NV(F->nc_2260) < ((rt_int)2000LL))) {
F->nc_2260 = rt_add(G_NV(F->nc_2260), ((rt_int)1LL));
(*({ A2255 *ix2276 = &(F->clo_2256); &ix2276->p[rt_index(G_NV(F->nc_2260), ix2276->lo, ix2276->hi) - ix2276->lo]; })) = G_NV(F->vlo_2261);
(*({ A2255 *ix2277 = &(F->chi_2258); &ix2277->p[rt_index(G_NV(F->nc_2260), ix2277->lo, ix2277->hi) - ix2277->lo]; })) = G_NV(F->vhi_2262);
}
}
F->lab_2247 = (*(P174)rt_nil_check(F->lab_2247)).next_;
}
L_end_2268: ;
if (G_NV(F->first_2245)) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2251))), rt_g_lit(") {", 3)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2251))), rt_g_lit(") {", 3)));
}
F->first_2245 = 0;
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->a_2246)).b_);
F->a_2246 = (*(P174)rt_nil_check(F->a_2246)).next_;
}
L_end_2267: ;
if ((G_NV((*(P174)rt_nil_check(F->s_718)).flag_) != ((rt_int)1LL))) {
f_selector_range_725(F->up, (*(P174)rt_nil_check(F->s_718)).a_, F->st_2243, &F->vlo_2261, &F->vhi_2262, &F->ok_2264);
 (void)rt_range(F->ok_2264, 0, 1);
if ((!G_NV(F->ok_2264))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_483(F->up, F->st_2243)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2263 = ((rt_int)0LL);
{ rt_int lo2280 = ((rt_int)1LL), hi2281 = G_NV(F->nc_2260);
for (rt_int it2282 = lo2280; it2282 <= hi2281; it2282++) {
F->k_2279 = it2282;
if (((G_NV(({ A2255 ix2283 = F->clo_2256; ix2283.p[rt_index(F->k_2279, ix2283.lo, ix2283.hi) - ix2283.lo]; })) < G_NV(F->vlo_2261)) || (G_NV(({ A2255 ix2284 = F->chi_2258; ix2284.p[rt_index(F->k_2279, ix2284.lo, ix2284.hi) - ix2284.lo]; })) > G_NV(F->vhi_2262)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_483(F->up, F->st_2243)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2263 = rt_add(G_NV(F->total_2263), rt_add(rt_sub(G_NV(({ A2255 ix2285 = F->chi_2258; ix2285.p[rt_index(F->k_2279, ix2285.lo, ix2285.hi) - ix2285.lo]; })), G_NV(({ A2255 ix2286 = F->clo_2256; ix2286.p[rt_index(F->k_2279, ix2286.lo, ix2286.hi) - ix2286.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2278: ;
if ((G_NV(F->total_2263) != rt_add(rt_sub(G_NV(F->vhi_2262), G_NV(F->vlo_2261)), ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_718)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_483(F->up, F->st_2243)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2245)) {
f_emit_255(F->up, rt_g_lit("{", 1));
} else {
f_emit_255(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P174)rt_nil_check(F->s_718)).flag_) == ((rt_int)1LL))) {
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_718)).c_);
} else {
f_emit_255(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_255(F->up, rt_g_lit("}", 1));
f_emit_255(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_725(struct f_greenc_1fr *up_, P174 e_720, P122 t_721, rt_int *lo_722, rt_int *hi_723, int *ok_724) {
  struct f_selector_range_725fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_720 = e_720;
F->t_721 = t_721;
F->lo_722 = lo_722;
F->hi_723 = hi_723;
F->ok_724 = ok_724;
F->y_2287 = NULL;
(*F->ok_724) = 0;
(*F->lo_722) = ((rt_int)0LL);
(*F->hi_723) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_720)).kind_) == ((rt_int)5LL))) {
F->y_2287 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_720)).name_)));
if ((((F->y_2287 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2287)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2287)).kind_) == ((rt_int)2LL)))) && f_static_bounds_479(F->up, (*(P117)rt_nil_check(F->y_2287)).c_))) {
(*F->lo_722) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2287)).c_)).mlo_);
(*F->hi_723) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2287)).c_)).mhi_);
(*F->ok_724) = 1;
goto ret_;
}
}
if ((G_NV((*(P122)rt_nil_check(F->t_721)).kind_) == ((rt_int)2LL))) {
(*F->hi_723) = ((rt_int)1LL);
(*F->ok_724) = 1;
} else if (((G_NV((*(P122)rt_nil_check(F->t_721)).kind_) == ((rt_int)11LL)) && ((*(P122)rt_nil_check(F->t_721)).tcons_ == NULL))) {
(*F->hi_723) = ((rt_int)127LL);
(*F->ok_724) = 1;
} else if ((G_NV((*(P122)rt_nil_check(F->t_721)).kind_) == ((rt_int)4LL))) {
(*F->hi_723) = rt_sub(f_list_len_308(F->up, (*(P122)rt_nil_check(F->t_721)).lits_), ((rt_int)1LL));
(*F->ok_724) = 1;
} else if (f_static_bounds_479(F->up, (*(P122)rt_nil_check(F->t_721)).tcons_)) {
(*F->lo_722) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_721)).tcons_)).mlo_);
(*F->hi_723) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_721)).tcons_)).mhi_);
(*F->ok_724) = 1;
}
ret_:

  return;
}

static void f_push_exit_729(struct f_greenc_1fr *up_, P140 match_726, int is_loop_727, P140 *label_728) {
  struct f_push_exit_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_726 = match_726;
F->is_loop_727 = is_loop_727;
F->label_728 = label_728;
f_new_name_231(F->up, rt_g_lit("L_end_", 6), &(*F->label_728));
F->up->exits_145 = ({ R144 *cell2288 = rt_alloc(sizeof(R144)); *cell2288 = cp_R144(({ R144 ag2289; ag2289.match_ = F->match_726; ag2289.label_ = (*F->label_728); ag2289.depth_ = G_NV(F->up->frames_150); ag2289.is_loop_ = F->is_loop_727; ag2289.next_ = F->up->exits_145; ag2289; })); (P143)cell2288; });
ret_:

  return;
}

static void f_gen_loop_731(struct f_greenc_1fr *up_, P174 s_730) {
  struct f_gen_loop_731fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_730 = s_730;
F->t_2290 = NULL;
F->vt_2291 = NULL;
F->c_2292 = NULL;
F->label_2293 = NULL;
F->cond_2294 = NULL;
F->acc_2295 = NULL;
F->lov_2296 = NULL;
F->hiv_2297 = NULL;
F->it_2298 = NULL;
F->y_2299 = NULL;
F->r_2300 = NULL;
f_push_exit_729(F->up, (*(P174)rt_nil_check(F->s_730)).tag_, 1, &F->label_2293);
if ((G_NV((*(P174)rt_nil_check(F->s_730)).flag_) == ((rt_int)0LL))) {
f_emit_255(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_730)).b_);
f_emit_255(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P174)rt_nil_check(F->s_730)).flag_) == ((rt_int)1LL))) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->s_730)).a_, F->up->ty_bool_157, &F->vt_2291, &F->cond_2294);
f_check_type_487(F->up, F->vt_2291, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_730)).line_));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P140)rt_nil_check(F->cond_2294))), rt_g_lit(") {", 3)));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_730)).b_);
f_emit_255(F->up, rt_g_lit("}", 1));
} else {
F->r_2300 = (*(P174)rt_nil_check(F->s_730)).a_;
F->c_2292 = f_new_cons_473(F->up);
if ((G_NV((*(P174)rt_nil_check(F->r_2300)).kind_) == ((rt_int)14LL))) {
f_range_bounds_801(F->up, (*(P174)rt_nil_check(F->r_2300)).a_, (*(P174)rt_nil_check(F->r_2300)).b_, NULL, G_NV((*(P174)rt_nil_check(F->s_730)).line_), &F->t_2290, &(*(P178)rt_nil_check(F->c_2292)).lo_, &(*(P178)rt_nil_check(F->c_2292)).hi_);
} else {
f_resolve_508(F->up, F->r_2300, &F->t_2290, &F->c_2292);
if (((*(P178)rt_nil_check(F->c_2292)).lo_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_730)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P122)rt_nil_check(F->t_2290)).kind_) != ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->t_2290)).kind_) != ((rt_int)4LL))) && (G_NV((*(P122)rt_nil_check(F->t_2290)).kind_) != ((rt_int)11LL))) && (G_NV((*(P122)rt_nil_check(F->t_2290)).kind_) != ((rt_int)2LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_730)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_730)).name_)), F->t_2290, &F->acc_2295);
f_new_name_231(F->up, rt_g_lit("lo", 2), &F->lov_2296);
f_new_name_231(F->up, rt_g_lit("hi", 2), &F->hiv_2297);
f_new_name_231(F->up, rt_g_lit("it", 2), &F->it_2298);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P140)rt_nil_check(F->lov_2296))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2292)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hiv_2297))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2292)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P174)rt_nil_check(F->s_730)).ival_) == ((rt_int)1LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->hiv_2297))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lov_2296))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit("--) {", 5)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lov_2296))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hiv_2297))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2298))), rt_g_lit("++) {", 5)));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2295)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->it_2298))), one_rt_gstr(59)));
f_open_scope_466(F->up);
F->y_2299 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->s_730)).name_);
(*(P117)rt_nil_check(F->y_2299)).t_ = F->t_2290;
(*(P117)rt_nil_check(F->y_2299)).ro_ = 1;
f_bind_642(F->up, F->y_2299, F->acc_2295);
f_define_465(F->up, F->y_2299, G_NV((*(P174)rt_nil_check(F->s_730)).line_));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_730)).b_);
f_close_scope_467(F->up);
f_emit_255(F->up, rt_g_lit("}", 1));
f_emit_255(F->up, rt_g_lit("}", 1));
}
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_255(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2293)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_733(struct f_greenc_1fr *up_, P174 s_732) {
  struct f_gen_block_733fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_732 = s_732;
F->label_2301 = NULL;
F->aw_2302 = NULL;
f_push_exit_729(F->up, (*(P174)rt_nil_check(F->s_732)).tag_, 0, &F->label_2301);
f_emit_255(F->up, rt_g_lit("{", 1));
f_open_scope_466(F->up);
if (((*(P174)rt_nil_check(F->s_732)).tag_ != NULL)) {
f_push_unit_437(F->up, (*(P174)rt_nil_check(F->s_732)).tag_);
}
f_guarded_705(F->up, (*(P174)rt_nil_check(F->s_732)).a_, (*(P174)rt_nil_check(F->s_732)).b_, (*(P174)rt_nil_check(F->s_732)).c_, G_NV((*(P174)rt_nil_check(F->s_732)).line_));
f_task_awaits_1170(F->up, (*(P174)rt_nil_check(F->s_732)).a_, &F->aw_2302);
f_emit_255(F->up, (*(P140)rt_nil_check(F->aw_2302)));
if (((*(P174)rt_nil_check(F->s_732)).tag_ != NULL)) {
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
}
f_close_scope_467(F->up);
f_emit_255(F->up, rt_g_lit("}", 1));
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_255(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2301)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_736(struct f_greenc_1fr *up_, P174 s_734, P143 x_735) {
  struct f_exit_matches_736fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_734 = s_734;
F->x_735 = x_735;
if (((*(P174)rt_nil_check(F->s_734)).name_ == NULL)) {
F->result_ = G_NV((*(P143)rt_nil_check(F->x_735)).is_loop_);
goto ret_;
} else if (((*(P143)rt_nil_check(F->x_735)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_735)).match_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_734)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_738(struct f_greenc_1fr *up_, P174 s_737) {
  struct f_gen_exit_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_737 = s_737;
F->x_2303 = NULL;
F->x_2303 = F->up->exits_145;
F->t_2304 = NULL;
F->v_2305 = NULL;
while ((F->x_2303 != NULL)) {
if (((G_NV(F->up->accept_depth_203) > ((rt_int)0LL)) && (F->x_2303 == F->up->accept_exits_149))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_195) > ((rt_int)0LL)) && (F->x_2303 == F->up->handler_exits_194))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_736(F->up, F->s_737, F->x_2303)) {
if ((!G_NV((*(P143)rt_nil_check(F->x_2303)).is_loop_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_737)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P174)rt_nil_check(F->s_737)).a_ != NULL)) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->s_737)).a_, F->up->ty_bool_157, &F->t_2304, &F->v_2305);
f_check_type_487(F->up, F->t_2304, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_737)).line_));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2305))), rt_g_lit(") {", 3)));
}
f_pop_frames_697(F->up, G_NV((*(P143)rt_nil_check(F->x_2303)).depth_));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_2303)).label_))), one_rt_gstr(59)));
if (((*(P174)rt_nil_check(F->s_737)).a_ != NULL)) {
f_emit_255(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2303 = (*(P143)rt_nil_check(F->x_2303)).next_;
}
L_end_2306: ;
if (((*(P174)rt_nil_check(F->s_737)).name_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_737)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_740(struct f_greenc_1fr *up_, P174 s_739) {
  struct f_gen_return_740fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_739 = s_739;
F->vt_2307 = NULL;
F->v_2308 = NULL;
F->x_2309 = NULL;
if ((!G_NV(F->up->in_func_138))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_739)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_203) > ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_739)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P174)rt_nil_check(F->s_739)).a_ != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_739)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_697(F->up, ((rt_int)0LL));
f_emit_255(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P174)rt_nil_check(F->s_739)).a_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_739)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_739)).a_, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, &F->vt_2307, &F->v_2308);
f_check_type_487(F->up, F->vt_2307, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, G_NV((*(P174)rt_nil_check(F->s_739)).line_));
if (((f_is_numeric_451(F->up, F->vt_2307) || f_is_discrete_453(F->up, F->vt_2307)) && f_bounded_475(F->up, (*(P117)rt_nil_check(F->up->func_sym_142)).c_))) {
f_assign_code_620(F->up, rt_g_lit("F->result_", 10), F->vt_2307, (*(P140)rt_nil_check(F->v_2308)), (*(P117)rt_nil_check(F->up->func_sym_142)).c_, &F->x_2309);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2309)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->v_2308))), one_rt_gstr(59)));
}
f_pop_frames_697(F->up, ((rt_int)0LL));
f_emit_255(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_743(struct f_greenc_1fr *up_, P117 y_741, P140 *r_742) {
  struct f_access_of_743fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_741 = y_741;
F->r_742 = r_742;
F->p_2310 = NULL;
if ((G_NV((*(P117)rt_nil_check(F->y_741)).level_) <= ((rt_int)0LL))) {
(*F->r_742) = (*(P117)rt_nil_check(F->y_741)).access_path_;
goto ret_;
}
F->p_2310 = f_mk_228(F->up, rt_g_lit("F", 1));
{ rt_int lo2313 = ((rt_int)1LL), hi2314 = rt_sub(G_NV(F->up->cur_level_139), G_NV((*(P117)rt_nil_check(F->y_741)).level_));
for (rt_int it2315 = lo2313; it2315 <= hi2314; it2315++) {
F->i_2312 = it2315;
F->p_2310 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2310)), rt_g_lit("->up", 4)));
}
}
L_end_2311: ;
if (G_NV((*(P117)rt_nil_check(F->y_741)).byref_)) {
(*F->r_742) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->p_2310))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_741)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_742) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2310)), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_741)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_746(struct f_greenc_1fr *up_, rt_int l_744, P140 *r_745) {
  struct f_link_to_746fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_744 = l_744;
F->r_745 = r_745;
(*F->r_745) = f_mk_228(F->up, rt_g_lit("F", 1));
{ rt_int lo2318 = ((rt_int)1LL), hi2319 = rt_sub(G_NV(F->up->cur_level_139), F->l_744);
for (rt_int it2320 = lo2318; it2320 <= hi2319; it2320++) {
F->i_2317 = it2320;
(*F->r_745) = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_745))), rt_g_lit("->up", 4)));
}
}
L_end_2316: ;
ret_:

  return;
}

static rt_gstr f_c_ident_748(struct f_greenc_1fr *up_, rt_gstr s_747) {
  struct f_c_ident_748fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_747 = cp_rt_gstr(s_747);
if (eq_rt_gstr(F->s_747, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_747, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_239(F->up, F->s_747);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_752(struct f_greenc_1fr *up_, rt_gstr base_749, P122 t_750, P140 *r_751) {
  struct f_deref_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_749 = cp_rt_gstr(base_749);
F->t_750 = t_750;
F->r_751 = r_751;
F->ct_2321 = NULL;
if (G_NV(F->up->in_lv_path_220)) {
F->up->last_deref_221 = 1;
}
f_ctype_492(F->up, F->t_750, &F->ct_2321);
(*F->r_751) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P140)rt_nil_check(F->ct_2321))), rt_g_lit(")rt_nil_check(", 14)), F->base_749), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_754(struct f_greenc_1fr *up_, P174 e_753) {
  struct f_is_object_754fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_753 = e_753;
F->y_2322 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_753)).kind_) == ((rt_int)5LL))) {
F->y_2322 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_753)).name_)));
if ((!(F->y_2322 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2322)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2322)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_753)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_754(F->up, (*(P174)rt_nil_check(F->e_753)).a_);
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_753)).kind_) == ((rt_int)8LL))) {
if ((((*(P174)rt_nil_check(F->e_753)).b_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_753)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_754(F->up, (*(P174)rt_nil_check(F->e_753)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_756(struct f_greenc_1fr *up_, P174 e_755) {
  struct f_is_const_access_756fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_755 = e_755;
F->y_2323 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_755)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2323 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_755)).name_)));
if ((F->y_2323 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P117)rt_nil_check(F->y_2323)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P117)rt_nil_check(F->y_2323)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P117)rt_nil_check(F->y_2323)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2323)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_762(struct f_greenc_1fr *up_, P174 e_757, P140 *code_out_758, P122 *t_759, P178 *c_760, int *ro_761) {
  struct f_lvalue_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_757 = e_757;
F->code_out_758 = code_out_758;
F->t_759 = t_759;
F->c_760 = c_760;
F->ro_761 = ro_761;
F->cp_2324 = INT_MIN;
F->ex_2325 = NULL;
F->y_2326 = NULL;
F->base_2327 = NULL;
F->bt_2328 = NULL;
F->bc_2329 = NULL;
f_expanded_824(F->up, F->e_757, &F->ex_2325);
if ((F->ex_2325 != NULL)) {
f_lvalue_762(F->up, F->ex_2325, &(*F->code_out_758), &(*F->t_759), &(*F->c_760), &(*F->ro_761));
 (void)rt_range((*F->ro_761), 0, 1);
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check(F->e_757)).a_)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_757)).ival_) > ((rt_int)0LL))) {
F->y_2326 = f_lookup_at_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_757)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)9LL))) {
F->y_2326 = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->e_757)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)), G_NV((*(P174)rt_nil_check(F->e_757)).line_));
} else {
F->y_2326 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)));
}
if ((F->y_2326 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_757)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2326)).kind_) == ((rt_int)12LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_757)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2326)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2326)).kind_) != ((rt_int)2LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_757)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_757)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_743(F->up, F->y_2326, &(*F->code_out_758));
(*F->t_759) = (*(P117)rt_nil_check(F->y_2326)).t_;
(*F->c_760) = (*(P117)rt_nil_check(F->y_2326)).c_;
(*F->ro_761) = G_NV((*(P117)rt_nil_check(F->y_2326)).ro_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)15LL))) {
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->e_757)).a_, &(*F->code_out_758), &(*F->t_759), &(*F->c_760), &(*F->ro_761));
 (void)rt_range((*F->ro_761), 0, 1);
} else if ((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)9LL))) {
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->e_757)).a_, &F->base_2327, &F->bt_2328, &F->bc_2329, &(*F->ro_761));
 (void)rt_range((*F->ro_761), 0, 1);
F->cp_2324 = ((G_NV((*(P122)rt_nil_check(F->bt_2328)).kind_) == ((rt_int)8LL)) && f_is_const_access_756(F->up, (*(P174)rt_nil_check(F->e_757)).a_));
f_select_on_771(F->up, (*(P140)rt_nil_check(F->base_2327)), F->bt_2328, F->e_757, &(*F->ro_761), 1, &(*F->code_out_758), &(*F->t_759), &(*F->c_760));
 (void)rt_range((*F->ro_761), 0, 1);
(*F->ro_761) = (G_NV((*F->ro_761)) || G_NV(F->cp_2324));
} else if ((G_NV((*(P174)rt_nil_check(F->e_757)).kind_) == ((rt_int)8LL))) {
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->e_757)).a_, &F->base_2327, &F->bt_2328, &F->bc_2329, &(*F->ro_761));
 (void)rt_range((*F->ro_761), 0, 1);
F->cp_2324 = ((G_NV((*(P122)rt_nil_check(F->bt_2328)).kind_) == ((rt_int)8LL)) && f_is_const_access_756(F->up, (*(P174)rt_nil_check(F->e_757)).a_));
f_index_on_780(F->up, (*(P140)rt_nil_check(F->base_2327)), F->bt_2328, F->e_757, &(*F->ro_761), 1, &(*F->code_out_758), &(*F->t_759), &(*F->c_760));
 (void)rt_range((*F->ro_761), 0, 1);
(*F->ro_761) = (G_NV((*F->ro_761)) || G_NV(F->cp_2324));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_757)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_771(struct f_greenc_1fr *up_, rt_gstr base_763, P122 bt_764, P174 e_765, int *ro_766, int lv_767, P140 *code_out_768, P122 *t_769, P178 *c_770) {
  struct f_select_on_771fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_763 = cp_rt_gstr(base_763);
F->bt_764 = bt_764;
F->e_765 = e_765;
F->ro_766 = ro_766;
F->lv_767 = lv_767;
F->code_out_768 = code_out_768;
F->t_769 = t_769;
F->c_770 = c_770;
F->f_2330 = NULL;
F->d_2331 = NULL;
F->ct_2332 = NULL;
F->tmp_2333 = NULL;
(*F->c_770) = F->up->no_cons_210;
if ((G_NV((*(P122)rt_nil_check(F->bt_764)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_608(F->up, F->bt_764);
f_deref_752(F->up, F->base_763, F->bt_764, &F->d_2331);
(*F->ro_766) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_768) = F->d_2331;
(*F->t_769) = (*(P122)rt_nil_check(F->bt_764)).target_;
goto ret_;
}
f_select_on_771(F->up, (*(P140)rt_nil_check(F->d_2331)), (*(P122)rt_nil_check(F->bt_764)).target_, F->e_765, &(*F->ro_766), 1, &(*F->code_out_768), &(*F->t_769), &(*F->c_770));
 (void)rt_range((*F->ro_766), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_764)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P122)rt_nil_check(F->bt_764)).priv_) && (!f_inside_package_1051(F->up, (*(P122)rt_nil_check(F->bt_764)).decl_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_765)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_483(F->up, F->bt_764)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2330 = (*(P122)rt_nil_check(F->bt_764)).fields_;
while ((F->f_2330 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2330)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_)))) {
f_subst_cons_580(F->up, (*(P1846)rt_nil_check(F->f_2330)).c_, F->base_763, &(*F->c_770));
(*F->code_out_768) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(F->base_763, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_)))));
(*F->t_769) = (*(P1846)rt_nil_check(F->f_2330)).t_;
if (G_NV((*(P1846)rt_nil_check(F->f_2330)).is_const_)) {
(*F->ro_766) = 1;
}
if (((*(P1846)rt_nil_check(F->f_2330)).cond_ != NULL)) {
f_ctype_492(F->up, F->bt_764, &F->ct_2332);
f_new_name_231(F->up, rt_g_lit("vr", 2), &F->tmp_2333);
if (F->lv_767) {
(*F->code_out_768) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2332))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2333))), rt_g_lit(" = &(", 5)), F->base_763), rt_g_lit("); if (!(", 9)), f_subst_574(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2330)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->tmp_2333))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P140)rt_nil_check(F->tmp_2333))), rt_g_lit("->", 2)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_768) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2332))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2333))), rt_g_lit(" = ", 3)), F->base_763), rt_g_lit("; if (!(", 8)), f_subst_574(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2330)).cond_)), (*(P140)rt_nil_check(F->tmp_2333)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P140)rt_nil_check(F->tmp_2333))), one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2330 = (*(P1846)rt_nil_check(F->f_2330)).next_;
}
L_end_2334: ;
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_765)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_483(F->up, F->bt_764), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_))));
}
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_765)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_765)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_780(struct f_greenc_1fr *up_, rt_gstr base_772, P122 bt_773, P174 e_774, int *ro_775, int lv_776, P140 *code_out_777, P122 *t_778, P178 *c_779) {
  struct f_index_on_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_772 = cp_rt_gstr(base_772);
F->bt_773 = bt_773;
F->e_774 = e_774;
F->ro_775 = ro_775;
F->lv_776 = lv_776;
F->code_out_777 = code_out_777;
F->t_778 = t_778;
F->c_779 = c_779;
F->a_2335 = NULL;
F->a_2335 = (*(P174)rt_nil_check(F->e_774)).b_;
F->arrt_2336 = NULL;
F->arrt_2336 = F->bt_773;
F->acc_2337 = NULL;
F->acc_2337 = f_mk_228(F->up, F->base_772);
F->it_2338 = NULL;
F->i_2339 = NULL;
F->lo_2340 = NULL;
F->hi_2341 = NULL;
F->d_2342 = NULL;
F->ct_2343 = NULL;
F->tmp_2344 = NULL;
(*F->c_779) = F->up->no_cons_210;
if ((G_NV((*(P122)rt_nil_check(F->bt_773)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_608(F->up, F->bt_773);
f_deref_752(F->up, F->base_772, F->bt_773, &F->d_2342);
(*F->ro_775) = 0;
f_index_on_780(F->up, (*(P140)rt_nil_check(F->d_2342)), (*(P122)rt_nil_check(F->bt_773)).target_, F->e_774, &(*F->ro_775), F->lv_776, &(*F->code_out_777), &(*F->t_778), &(*F->c_779));
 (void)rt_range((*F->ro_775), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_773)).kind_) != ((rt_int)6LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_774)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2335 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_774)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P174)rt_nil_check(F->a_2335)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check(F->a_2335)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P174)rt_nil_check(F->a_2335)).kind_) == ((rt_int)5LL)) && f_is_type_name_785(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2335)).name_)))))) {
if ((((*(P174)rt_nil_check(F->a_2335)).next_ != NULL) || (G_NV((*(P122)rt_nil_check(F->bt_773)).dims_) != ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_774)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_522(F->up, F->a_2335, (*(P122)rt_nil_check(F->bt_773)).idx_, &F->it_2338, &F->lo_2340, &F->hi_2341);
f_check_type_487(F->up, F->it_2338, (*(P122)rt_nil_check(F->bt_773)).idx_, G_NV((*(P174)rt_nil_check(F->e_774)).line_));
f_ctype_492(F->up, F->bt_773, &F->d_2342);
f_new_name_231(F->up, rt_g_lit("sl", 2), &F->tmp_2344);
(*F->code_out_777) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->d_2342))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(" = ", 3)), F->base_772), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check(F->lo_2340))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check(F->hi_2341))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".hi); } ", 8)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".p += l_ - ", 11)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo; ", 5)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit("; })", 4)));
(*F->t_778) = F->bt_773;
(*F->ro_775) = 1;
goto ret_;
}
if ((f_list_len_308(F->up, F->a_2335) > G_NV((*(P122)rt_nil_check(F->bt_773)).dims_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_774)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_483(F->up, F->bt_773)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2335 != NULL)) {
f_gexpr_806(F->up, F->a_2335, (*(P122)rt_nil_check(F->arrt_2336)).idx_, &F->it_2338, &F->i_2339);
f_check_type_487(F->up, F->it_2338, (*(P122)rt_nil_check(F->arrt_2336)).idx_, G_NV((*(P174)rt_nil_check(F->e_774)).line_));
f_ctype_492(F->up, F->arrt_2336, &F->ct_2343);
f_new_name_231(F->up, rt_g_lit("ix", 2), &F->tmp_2344);
if (F->lv_776) {
F->acc_2337 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2343))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->acc_2337))), rt_g_lit("); &", 4)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit("->p[rt_index(", 13)), (*(P140)rt_nil_check(F->i_2339))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit("->lo, ", 6)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit("->hi) - ", 8)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2337 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2343))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->acc_2337))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".p[rt_index(", 12)), (*(P140)rt_nil_check(F->i_2339))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2344))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_779) = (*(P122)rt_nil_check(F->arrt_2336)).elemcons_;
F->arrt_2336 = (*(P122)rt_nil_check(F->arrt_2336)).elem_;
F->a_2335 = (*(P174)rt_nil_check(F->a_2335)).next_;
}
L_end_2345: ;
(*F->code_out_777) = F->acc_2337;
(*F->t_778) = F->arrt_2336;
if ((!F->lv_776)) {
(*F->ro_775) = 1;
}
ret_:

  return;
}

static int f_type_attribute_783(struct f_greenc_1fr *up_, P122 t_781, rt_gstr name_782) {
  struct f_type_attribute_783fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_781 = t_781;
F->name_782 = cp_rt_gstr(name_782);
F->y_2346 = NULL;
F->y_2346 = ({ A116 ix2347 = F->up->table_119; ix2347.p[rt_index(f_hash_417(F->up, F->name_782), ix2347.lo, ix2347.hi) - ix2347.lo]; });
F->p_2348 = NULL;
while ((F->y_2346 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2346)).name_)), F->name_782) && ((G_NV((*(P117)rt_nil_check(F->y_2346)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2346)).kind_) == ((rt_int)4LL))))) {
if (f_same_444(F->up, (*(P117)rt_nil_check(F->y_2346)).result_, F->t_781)) {
F->result_ = 1;
goto ret_;
}
F->p_2348 = (*(P117)rt_nil_check(F->y_2346)).params_;
while ((F->p_2348 != NULL)) {
if (f_same_444(F->up, (*(P1828)rt_nil_check(F->p_2348)).t_, F->t_781)) {
F->result_ = 1;
goto ret_;
}
F->p_2348 = (*(P1828)rt_nil_check(F->p_2348)).next_;
}
L_end_2350: ;
}
F->y_2346 = (*(P117)rt_nil_check(F->y_2346)).chain_;
}
L_end_2349: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_785(struct f_greenc_1fr *up_, rt_gstr n_784) {
  struct f_is_type_name_785fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_784 = cp_rt_gstr(n_784);
F->y_2351 = NULL;
F->y_2351 = f_lookup_424(F->up, F->n_784);
if ((!(F->y_2351 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2351)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_787(struct f_greenc_1fr *up_, P174 e_786) {
  struct f_is_char_lit_787fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_786 = e_786;
if ((!(G_NV((*(P174)rt_nil_check(F->e_786)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2352 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_786)).name_)); at2352.hi >= at2352.lo ? at2352.hi - at2352.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_789(struct f_greenc_1fr *up_, P174 e_788) {
  struct f_is_enum_lit_789fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_788 = e_788;
F->y_2353 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_788)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2353 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_788)).name_)));
if ((!(F->y_2353 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2353)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_791(struct f_greenc_1fr *up_, rt_gstr s_790) {
  struct f_c_string_791fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_790 = cp_rt_gstr(s_790);
F->n_2354 = INT64_MIN;
F->n_2354 = ((rt_int)0LL);
{ rt_int lo2358 = ((rt_int)1LL), hi2359 = ({ rt_gstr at2356 = F->s_790; at2356.hi >= at2356.lo ? at2356.hi - at2356.lo + 1 : (rt_int)0; });
for (rt_int it2360 = lo2358; it2360 <= hi2359; it2360++) {
F->i_2357 = it2360;
if ((((G_NV(({ rt_gstr ix2361 = F->s_790; ix2361.p[rt_index(F->i_2357, ix2361.lo, ix2361.hi) - ix2361.lo]; })) == 34) || (G_NV(({ rt_gstr ix2362 = F->s_790; ix2362.p[rt_index(F->i_2357, ix2362.lo, ix2362.hi) - ix2362.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2363 = F->s_790; ix2363.p[rt_index(F->i_2357, ix2363.lo, ix2363.hi) - ix2363.lo]; })) == 63))) {
F->n_2354 = rt_add(G_NV(F->n_2354), ((rt_int)1LL));
}
}
}
L_end_2355: ;
{
F->r_2366.lo = ((rt_int)1LL); F->r_2366.hi = rt_add(rt_add(({ rt_gstr at2365 = F->s_790; at2365.hi >= at2365.lo ? at2365.hi - at2365.lo + 1 : (rt_int)0; }), G_NV(F->n_2354)), ((rt_int)2LL));
F->r_2366.lo2 = 1; F->r_2366.hi2 = 1;
F->r_2366.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2366));
memset(F->r_2366.p, 0xFF, (size_t)G_CNT(F->r_2366));
F->j_2368 = INT64_MIN;
F->j_2368 = ((rt_int)1LL);
(*({ rt_gstr *ix2369 = &(F->r_2366); &ix2369->p[rt_index(((rt_int)1LL), ix2369->lo, ix2369->hi) - ix2369->lo]; })) = 34;
{ rt_int lo2373 = ((rt_int)1LL), hi2374 = ({ rt_gstr at2371 = F->s_790; at2371.hi >= at2371.lo ? at2371.hi - at2371.lo + 1 : (rt_int)0; });
for (rt_int it2375 = lo2373; it2375 <= hi2374; it2375++) {
F->i_2372 = it2375;
F->j_2368 = rt_add(G_NV(F->j_2368), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2376 = F->s_790; ix2376.p[rt_index(F->i_2372, ix2376.lo, ix2376.hi) - ix2376.lo]; })) == 34) || (G_NV(({ rt_gstr ix2377 = F->s_790; ix2377.p[rt_index(F->i_2372, ix2377.lo, ix2377.hi) - ix2377.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2378 = F->s_790; ix2378.p[rt_index(F->i_2372, ix2378.lo, ix2378.hi) - ix2378.lo]; })) == 63))) {
(*({ rt_gstr *ix2379 = &(F->r_2366); &ix2379->p[rt_index(G_NV(F->j_2368), ix2379->lo, ix2379->hi) - ix2379->lo]; })) = 92;
F->j_2368 = rt_add(G_NV(F->j_2368), ((rt_int)1LL));
}
(*({ rt_gstr *ix2380 = &(F->r_2366); &ix2380->p[rt_index(G_NV(F->j_2368), ix2380->lo, ix2380->hi) - ix2380->lo]; })) = G_NV(({ rt_gstr ix2381 = F->s_790; ix2381.p[rt_index(F->i_2372, ix2381.lo, ix2381.hi) - ix2381.lo]; }));
}
}
L_end_2370: ;
(*({ rt_gstr *ix2382 = &(F->r_2366); &ix2382->p[rt_index(rt_add(G_NV(F->j_2368), ((rt_int)1LL)), ix2382->lo, ix2382->hi) - ix2382->lo]; })) = 34;
F->result_ = F->r_2366;
goto ret_;

}
L_end_2364: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_793(struct f_greenc_1fr *up_, P174 e_792) {
  struct f_is_literal_793fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_792 = e_792;
if ((((G_NV((*(P174)rt_nil_check(F->e_792)).kind_) == ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->e_792)).kind_) == ((rt_int)2LL))) || f_is_char_lit_787(F->up, F->e_792))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_792)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P174)rt_nil_check(F->e_792)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_792)).a_);
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_792)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_792)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_792)).a_) && f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_792)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_801(struct f_greenc_1fr *up_, P174 l_794, P174 h_795, P122 want_796, rt_int line_797, P122 *t_798, P140 *lo_799, P140 *hi_800) {
  struct f_range_bounds_801fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_794 = l_794;
F->h_795 = h_795;
F->want_796 = want_796;
F->line_797 = line_797;
F->t_798 = t_798;
F->lo_799 = lo_799;
F->hi_800 = hi_800;
F->w_2383 = NULL;
F->w_2383 = F->want_796;
F->t2_2384 = NULL;
if ((((F->w_2383 == NULL) && f_is_char_lit_787(F->up, F->l_794)) && f_is_char_lit_787(F->up, F->h_795))) {
F->w_2383 = F->up->ty_char_159;
}
if ((((F->w_2383 == NULL) && f_is_literal_793(F->up, F->l_794)) && (!f_is_literal_793(F->up, F->h_795)))) {
f_gexpr_806(F->up, F->h_795, NULL, &(*F->t_798), &(*F->hi_800));
f_gexpr_806(F->up, F->l_794, (*F->t_798), &F->t2_2384, &(*F->lo_799));
f_check_type_487(F->up, F->t2_2384, (*F->t_798), F->line_797);
} else {
f_gexpr_806(F->up, F->l_794, F->w_2383, &(*F->t_798), &(*F->lo_799));
f_gexpr_806(F->up, F->h_795, (*F->t_798), &F->t2_2384, &(*F->hi_800));
f_check_type_487(F->up, F->t2_2384, (*F->t_798), F->line_797);
}
ret_:

  return;
}

static void f_gexpr_806(struct f_greenc_1fr *up_, P174 e_802, P122 want_803, P122 *t_804, P140 *r_805) {
  struct f_gexpr_806fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_802 = e_802;
F->want_803 = want_803;
F->t_804 = t_804;
F->r_805 = r_805;
F->y_2385 = NULL;
F->bt_2386 = NULL;
F->c_2387 = NULL;
F->ro_2388 = INT_MIN;
F->base_2389 = NULL;
F->a_2390 = NULL;
F->nm_2391 = NULL;
F->saved_lv_2392 = INT_MIN;
F->saved_lv_2392 = G_NV(F->up->in_lv_path_220);
F->up->in_lv_path_220 = 0;
f_gexpr_1_811(F->up, F->e_802, F->want_803, &(*F->t_804), &(*F->r_805));
F->up->in_lv_path_220 = G_NV(F->saved_lv_2392);
ret_:

  return;
}

static void f_gexpr_1_811(struct f_greenc_1fr *up_, P174 e_807, P122 want_808, P122 *t_809, P140 *r_810) {
  struct f_gexpr_1_811fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_807 = e_807;
F->want_808 = want_808;
F->t_809 = t_809;
F->r_810 = r_810;
F->y_2393 = NULL;
F->bt_2394 = NULL;
F->c_2395 = NULL;
F->ro_2396 = INT_MIN;
F->base_2397 = NULL;
F->a_2398 = NULL;
F->nm_2399 = NULL;
F->c2_2400 = NULL;
(*F->t_809) = F->up->ty_int_156;
{ rt_int sel2401 = G_NV((*(P174)rt_nil_check(F->e_807)).kind_);
if (0 || sel2401 == ((rt_int)1LL)) {
if (((F->want_808 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)1LL)))) {
(*F->t_809) = F->want_808;
}
(*F->r_810) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check(F->e_807)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2401 == ((rt_int)2LL)) {
(*F->t_809) = F->up->ty_float_158;
(*F->r_810) = (*(P174)rt_nil_check(F->e_807)).name_;
if (((F->want_808 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)3LL)))) {
(*F->t_809) = F->want_808;
} else if ((((F->want_808 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)16LL))) && ((*(P122)rt_nil_check(F->want_808)).fsmall_ != NULL))) {
(*F->t_809) = F->want_808;
(*F->r_810) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_807)).name_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->want_808)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2401 == ((rt_int)3LL)) {
if (((f_is_char_lit_787(F->up, F->e_807) && (F->want_808 != NULL)) && ((G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)4LL))))) {
f_char_literal_821(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if ((((((F->want_808 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_808)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_808)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_808)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_808)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_571(F->up, F->want_808)))) {
f_string_aggregate_816(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else {
(*F->t_809) = F->up->ty_string_160;
if (((F->want_808 != NULL) && f_is_string_571(F->up, F->want_808))) {
(*F->t_809) = F->want_808;
}
(*F->r_810) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_791(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_807)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2403 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_807)).name_)); at2403.hi >= at2403.lo ? at2403.hi - at2403.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2401 == ((rt_int)4LL)) {
(*F->t_809) = F->up->ty_nil_162;
(*F->r_810) = f_mk_228(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2401 == ((rt_int)15LL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_807)).a_, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)5LL)) {
f_gen_name_829(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)6LL)) {
f_gen_unop_834(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)7LL)) {
f_gen_binop_874(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)8LL)) {
f_expanded_824(F->up, (*(P174)rt_nil_check(F->e_807)).a_, &F->nm_2399);
if ((F->nm_2399 != NULL)) {
F->c2_2400 = f_nn_302(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_807)).line_));
as_R175(&(*(P174)rt_nil_check(F->c2_2400)), (*(P174)rt_nil_check(F->e_807)));
(*(P174)rt_nil_check(F->c2_2400)).a_ = F->nm_2399;
f_gexpr_806(F->up, F->c2_2400, F->want_808, &(*F->t_809), &(*F->r_810));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2393 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).name_)));
if (((F->y_2393 == NULL) || (((G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_216 = F->want_808;
f_gcall_1009(F->up, F->e_807, 0, &(*F->t_809), &(*F->r_810));
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)5LL))) {
f_conversion_879(F->up, F->e_807, F->y_2393, &(*F->t_809), &(*F->r_810));
goto ret_;
}
} else if (((((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1122(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).a_)).name_)))) && (f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_807)).line_)) != NULL)) && (G_NV((*(P117)rt_nil_check(f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_807)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_216 = F->want_808;
f_gcall_1009(F->up, F->e_807, 0, &(*F->t_809), &(*F->r_810));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_785(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_)).name_))))) {
F->up->call_want_216 = F->want_808;
f_gcall_1009(F->up, F->e_807, 0, &(*F->t_809), &(*F->r_810));
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_))) {
F->y_2393 = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_807)).line_));
if (((F->y_2393 != NULL) && (((G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2393)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_216 = F->want_808;
f_gcall_1009(F->up, F->e_807, 0, &(*F->t_809), &(*F->r_810));
goto ret_;
}
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_807)).a_, NULL, &F->bt_2394, &F->base_2397);
F->ro_2396 = 1;
f_index_on_780(F->up, (*(P140)rt_nil_check(F->base_2397)), F->bt_2394, F->e_807, &F->ro_2396, 0, &(*F->r_810), &(*F->t_809), &F->c_2395);
 (void)rt_range(F->ro_2396, 0, 1);
if ((f_is_numeric_451(F->up, (*F->t_809)) || f_is_discrete_453(F->up, (*F->t_809)))) {
(*F->r_810) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_810)))), one_rt_gstr(41)));
}
} else if (0 || sel2401 == ((rt_int)9LL)) {
f_expanded_824(F->up, F->e_807, &F->nm_2399);
if ((F->nm_2399 != NULL)) {
f_gen_name_829(F->up, F->nm_2399, F->want_808, &(*F->t_809), &(*F->r_810));
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_785(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_807)).a_)).name_))))) {
F->nm_2399 = f_nn_302(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_807)).line_));
(*(P174)rt_nil_check(F->nm_2399)).a_ = F->e_807;
F->up->call_want_216 = F->want_808;
f_gcall_1009(F->up, F->nm_2399, 0, &(*F->t_809), &(*F->r_810));
goto ret_;
}
if (f_is_package_1045(F->up, (*(P174)rt_nil_check(F->e_807)).a_)) {
F->nm_2399 = f_nn_302(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_807)).line_));
(*(P174)rt_nil_check(F->nm_2399)).name_ = (*(P174)rt_nil_check(F->e_807)).name_;
(*(P174)rt_nil_check(F->nm_2399)).tag_ = f_mk_228(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->e_807)).a_));
f_gen_name_829(F->up, F->nm_2399, F->want_808, &(*F->t_809), &(*F->r_810));
goto ret_;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_807)).a_, NULL, &F->bt_2394, &F->base_2397);
F->ro_2396 = 1;
f_select_on_771(F->up, (*(P140)rt_nil_check(F->base_2397)), F->bt_2394, F->e_807, &F->ro_2396, 0, &(*F->r_810), &(*F->t_809), &F->c_2395);
 (void)rt_range(F->ro_2396, 0, 1);
if ((f_is_numeric_451(F->up, (*F->t_809)) || f_is_discrete_453(F->up, (*F->t_809)))) {
(*F->r_810) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_810)))), one_rt_gstr(41)));
}
} else if (0 || sel2401 == ((rt_int)10LL)) {
f_gen_attr_895(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)11LL)) {
f_allocator_947(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else if (0 || sel2401 == ((rt_int)12LL)) {
f_aggregate_952(F->up, F->e_807, F->want_808, &(*F->t_809), &(*F->r_810));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_807)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_816(struct f_greenc_1fr *up_, P174 e_812, P122 want_813, P122 *t_814, P140 *r_815) {
  struct f_string_aggregate_816fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_812 = e_812;
F->want_813 = want_813;
F->t_814 = t_814;
F->r_815 = r_815;
F->ag_2404 = NULL;
F->it_2405 = NULL;
F->tail_2406 = NULL;
F->l_2407 = NULL;
F->ag_2404 = f_nn_302(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_812)).line_));
{ rt_int lo2411 = ((rt_int)1LL), hi2412 = ({ rt_gstr at2409 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_812)).name_)); at2409.hi >= at2409.lo ? at2409.hi - at2409.lo + 1 : (rt_int)0; });
for (rt_int it2413 = lo2411; it2413 <= hi2412; it2413++) {
F->k_2410 = it2413;
F->l_2407 = f_nn_302(F->up, ((rt_int)3LL), G_NV((*(P174)rt_nil_check(F->e_812)).line_));
(*(P174)rt_nil_check(F->l_2407)).name_ = f_mk_228(F->up, ({ rt_gstr sl2415 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_812)).name_)); rt_int l_ = F->k_2410, h_ = F->k_2410; if (l_ <= h_) { rt_index(l_, sl2415.lo, sl2415.hi); rt_index(h_, sl2415.lo, sl2415.hi); } sl2415.p += l_ - sl2415.lo; sl2415.lo = l_; sl2415.hi = h_; sl2415; }));
F->it_2405 = f_nn_302(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_812)).line_));
(*(P174)rt_nil_check(F->it_2405)).b_ = F->l_2407;
if ((F->tail_2406 == NULL)) {
(*(P174)rt_nil_check(F->ag_2404)).a_ = F->it_2405;
} else {
(*(P174)rt_nil_check(F->tail_2406)).next_ = F->it_2405;
}
F->tail_2406 = F->it_2405;
}
}
L_end_2408: ;
if (((*(P174)rt_nil_check(F->ag_2404)).a_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_812)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_483(F->up, F->want_813)));
}
f_aggregate_952(F->up, F->ag_2404, F->want_813, &(*F->t_814), &(*F->r_815));
ret_:

  return;
}

static void f_char_literal_821(struct f_greenc_1fr *up_, P174 e_817, P122 want_818, P122 *t_819, P140 *r_820) {
  struct f_char_literal_821fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_817 = e_817;
F->want_818 = want_818;
F->t_819 = t_819;
F->r_820 = r_820;
F->i_2416 = INT64_MIN;
if ((G_NV((*(P122)rt_nil_check(F->want_818)).kind_) == ((rt_int)11LL))) {
(*F->t_819) = F->want_818;
(*F->r_820) = f_mk_228(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2418 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_817)).name_)); ix2418.p[rt_index(((rt_int)1LL), ix2418.lo, ix2418.hi) - ix2418.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2416 = f_lit_index_500(F->up, (*(P122)rt_nil_check(F->want_818)).lits_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_817)).name_)));
if ((G_NV(F->i_2416) < ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_817)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_817)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_483(F->up, F->want_818)));
}
(*F->t_819) = F->want_818;
(*F->r_820) = f_mk_228(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2416))));
ret_:

  return;
}

static void f_expanded_824(struct f_greenc_1fr *up_, P174 e_822, P174 *r_823) {
  struct f_expanded_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_822 = e_822;
F->r_823 = r_823;
F->y_2419 = NULL;
F->d_2420 = INT64_MIN;
(*F->r_823) = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_822)).kind_) != ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_822)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2420 = f_enclosing_depth_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_822)).a_)).name_)));
if ((G_NV(F->d_2420) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2419 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_822)).a_)).name_)));
if (((F->y_2419 != NULL) && ((((G_NV((*(P117)rt_nil_check(F->y_2419)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2419)).kind_) == ((rt_int)2LL))) || (G_NV((*(P117)rt_nil_check(F->y_2419)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2419)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_822)).name_)), G_NV(F->d_2420)) == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_822)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_822)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_822)).a_)).name_))));
}
(*F->r_823) = f_nn_302(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_822)).line_));
(*(P174)rt_nil_check((*F->r_823))).name_ = (*(P174)rt_nil_check(F->e_822)).name_;
(*(P174)rt_nil_check((*F->r_823))).ival_ = rt_add(G_NV(F->d_2420), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_829(struct f_greenc_1fr *up_, P174 e_825, P122 want_826, P122 *t_827, P140 *r_828) {
  struct f_gen_name_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_825 = e_825;
F->want_826 = want_826;
F->t_827 = t_827;
F->r_828 = r_828;
F->y_2421 = NULL;
F->y_2421 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)));
F->z_2422 = NULL;
F->call_2423 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_825)).ival_) > ((rt_int)0LL))) {
F->y_2421 = f_lookup_at_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_825)).ival_), ((rt_int)1LL)));
}
if (((*(P174)rt_nil_check(F->e_825)).tag_ != NULL)) {
F->y_2421 = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), G_NV((*(P174)rt_nil_check(F->e_825)).line_));
}
if ((F->y_2421 == NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit("GET", 3)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)12LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)2LL)) && G_NV((*(P117)rt_nil_check(F->y_2421)).hasmv_))) {
(*F->t_827) = (*(P117)rt_nil_check(F->y_2421)).t_;
(*F->r_828) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2421)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->y_2421)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2421)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)2LL)))) {
(*F->t_827) = (*(P117)rt_nil_check(F->y_2421)).t_;
f_access_of_743(F->up, F->y_2421, &(*F->r_828));
if (((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)1LL)) && (f_is_numeric_451(F->up, (*F->t_827)) || f_is_discrete_453(F->up, (*F->t_827))))) {
(*F->r_828) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_828)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)7LL))) {
F->z_2422 = F->y_2421;
if ((F->want_826 != NULL)) {
while ((F->z_2422 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2422)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2422)).kind_) == ((rt_int)7LL))) && f_same_444(F->up, (*(P117)rt_nil_check(F->z_2422)).t_, F->want_826))) {
goto L_end_2424;
}
F->z_2422 = (*(P117)rt_nil_check(F->z_2422)).chain_;
}
L_end_2424: ;
if ((F->z_2422 == NULL)) {
F->z_2422 = F->y_2421;
}
} else {
F->z_2422 = (*(P117)rt_nil_check(F->y_2421)).chain_;
while ((F->z_2422 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2422)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2422)).kind_) == ((rt_int)7LL))) && (!f_same_444(F->up, (*(P117)rt_nil_check(F->z_2422)).t_, (*(P117)rt_nil_check(F->y_2421)).t_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2422 = (*(P117)rt_nil_check(F->z_2422)).chain_;
}
L_end_2425: ;
F->z_2422 = F->y_2421;
}
(*F->t_827) = (*(P117)rt_nil_check(F->z_2422)).t_;
(*F->r_828) = f_mk_228(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->z_2422)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2421)).kind_) == ((rt_int)10LL)))) {
F->call_2423 = f_nn_302(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_825)).line_));
(*(P174)rt_nil_check(F->call_2423)).a_ = F->e_825;
F->up->call_want_216 = F->want_826;
f_gcall_1009(F->up, F->call_2423, 0, &(*F->t_827), &(*F->r_828));
goto ret_;
}
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_825)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_825)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_834(struct f_greenc_1fr *up_, P174 e_830, P122 want_831, P122 *t_832, P140 *r_833) {
  struct f_gen_unop_834fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_830 = e_830;
F->want_831 = want_831;
F->t_832 = t_832;
F->r_833 = r_833;
F->a_2426 = NULL;
F->x_2427 = NULL;
F->done_2428 = INT_MIN;
f_user_operator_1104(F->up, F->e_830, F->want_831, &(*F->t_832), &(*F->r_833), &F->done_2428);
 (void)rt_range(F->done_2428, 0, 1);
if (G_NV(F->done_2428)) {
goto ret_;
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_830)).a_, F->want_831, &(*F->t_832), &F->a_2426);
if (((G_NV((*(P122)rt_nil_check((*F->t_832))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check((*F->t_832))).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_832))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_492(F->up, (*F->t_832), &F->x_2427);
(*F->r_833) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P140)rt_nil_check(F->x_2427))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2426))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check((*F->t_832))).kind_) != ((rt_int)2LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_830)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_833) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->a_2426))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_830)).a_, F->want_831, &(*F->t_832), &F->a_2426);
if ((!f_is_numeric_451(F->up, (*F->t_832)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_830)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_830)).name_)), rt_g_lit("+", 1))) {
(*F->r_833) = F->a_2426;
} else if (((G_NV((*(P122)rt_nil_check((*F->t_832))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_832))).kind_) == ((rt_int)16LL)))) {
(*F->r_833) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P140)rt_nil_check(F->a_2426))), one_rt_gstr(41)));
} else {
(*F->r_833) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P140)rt_nil_check(F->a_2426))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_836(struct f_greenc_1fr *up_, P122 t_835) {
  struct f_short_int_836fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_835 = t_835;
if ((!(G_NV((*(P122)rt_nil_check(F->t_835)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_446(F->up, F->t_835) == F->up->ty_short_167);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_838(struct f_greenc_1fr *up_, P122 t_837) {
  struct f_float_kind_838fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_837 = t_837;
if ((f_root_446(F->up, F->t_837) == F->up->ty_sfloat_169)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_841(struct f_greenc_1fr *up_, P174 e_839, P140 *r_840) {
  struct f_membership_841fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_839 = e_839;
F->r_840 = r_840;
F->ta_2429 = NULL;
F->tb_2430 = NULL;
F->tt_2431 = NULL;
F->a_2432 = NULL;
F->lo_2433 = NULL;
F->hi_2434 = NULL;
F->ct_2435 = NULL;
F->c_2436 = NULL;
F->d_2437 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_839)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_839)).a_)) {
f_range_bounds_801(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_839)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_839)).b_)).b_, NULL, G_NV((*(P174)rt_nil_check(F->e_839)).line_), &F->tt_2431, &F->lo_2433, &F->hi_2434);
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_839)).a_, F->tt_2431, &F->ta_2429, &F->a_2432);
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_839)).a_, NULL, &F->ta_2429, &F->a_2432);
f_range_bounds_801(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_839)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_839)).b_)).b_, F->ta_2429, G_NV((*(P174)rt_nil_check(F->e_839)).line_), &F->tt_2431, &F->lo_2433, &F->hi_2434);
}
f_check_type_487(F->up, F->tt_2431, F->ta_2429, G_NV((*(P174)rt_nil_check(F->e_839)).line_));
if (((!f_is_numeric_451(F->up, F->ta_2429)) && (!f_is_discrete_453(F->up, F->ta_2429)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_839)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_492(F->up, F->ta_2429, &F->ct_2435);
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2435))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2432))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check(F->lo_2433))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check(F->hi_2434))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_508(F->up, (*(P174)rt_nil_check(F->e_839)).b_, &F->tt_2431, &F->c_2436);
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_839)).a_, F->tt_2431, &F->ta_2429, &F->a_2432);
f_check_type_487(F->up, F->ta_2429, F->tt_2431, G_NV((*(P174)rt_nil_check(F->e_839)).line_));
f_ctype_492(F->up, F->ta_2429, &F->ct_2435);
if (((f_is_numeric_451(F->up, F->ta_2429) || f_is_discrete_453(F->up, F->ta_2429)) && ((*(P178)rt_nil_check(F->c_2436)).lo_ != NULL))) {
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2435))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2432))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2436)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2436)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2429)).kind_) == ((rt_int)6LL)) && ((*(P178)rt_nil_check(F->c_2436)).lo_ != NULL))) {
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2435))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2432))), rt_g_lit("; m_.lo == ", 11)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2436)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2436)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2429)).kind_) == ((rt_int)7LL)) && f_discriminated_481(F->up, F->c_2436))) {
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2435))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2432))), rt_g_lit("; 1", 3)));
F->d_2437 = (*(P178)rt_nil_check(F->c_2436)).dv_;
while ((F->d_2437 != NULL)) {
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_840))), rt_g_lit(" && m_.", 7)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2437)).name_)))), rt_g_lit(" == (", 5)), (*(P140)rt_nil_check((*(P1850)rt_nil_check(F->d_2437)).v_))), one_rt_gstr(41)));
F->d_2437 = (*(P1850)rt_nil_check(F->d_2437)).next_;
}
L_end_2438: ;
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_840))), rt_g_lit("; })", 4)));
} else {
(*F->r_840) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P140)rt_nil_check(F->a_2432))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_846(struct f_greenc_1fr *up_, P174 e_842, P122 want_843, P122 *t_844, P140 *r_845) {
  struct f_condition_846fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_842 = e_842;
F->want_843 = want_843;
F->t_844 = t_844;
F->r_845 = r_845;
F->a_2439 = NULL;
F->b_2440 = NULL;
F->tb_2441 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_842)).kind_) == ((rt_int)7LL)) && (G_NV((*(P174)rt_nil_check(F->e_842)).ival_) == ((rt_int)1LL)))) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->e_842)).a_, F->up->ty_bool_157, &(*F->t_844), &F->a_2439);
f_check_type_487(F->up, (*F->t_844), F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_842)).line_));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_842)).b_, F->up->ty_bool_157, &F->tb_2441, &F->b_2440);
f_check_type_487(F->up, F->tb_2441, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_842)).line_));
(*F->t_844) = F->up->ty_bool_157;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_842)).name_)), rt_g_lit("AND", 3))) {
(*F->r_845) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2439))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2440))), one_rt_gstr(41)));
} else {
(*F->r_845) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2439))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2440))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_806(F->up, F->e_842, F->up->ty_bool_157, &(*F->t_844), &(*F->r_845));
ret_:

  return;
}

static void f_catenation_851(struct f_greenc_1fr *up_, P174 e_847, P122 want_848, P122 *t_849, P140 *r_850) {
  struct f_catenation_851fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_847 = e_847;
F->want_848 = want_848;
F->t_849 = t_849;
F->r_850 = r_850;
F->arrt_2442 = NULL;
F->ta_2443 = NULL;
F->tb_2444 = NULL;
F->a_2445 = NULL;
F->b_2446 = NULL;
F->ct_2447 = NULL;
if ((((F->want_848 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_848)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_848)).dims_) == ((rt_int)1LL)))) {
F->arrt_2442 = F->want_848;
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_847)).a_, NULL, &F->ta_2443, &F->a_2445);
if (((G_NV((*(P122)rt_nil_check(F->ta_2443)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->ta_2443)).dims_) == ((rt_int)1LL)))) {
F->arrt_2442 = F->ta_2443;
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_847)).b_, NULL, &F->tb_2444, &F->b_2446);
if (((G_NV((*(P122)rt_nil_check(F->tb_2444)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2444)).dims_) == ((rt_int)1LL)))) {
F->arrt_2442 = F->tb_2444;
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2443)).kind_) == ((rt_int)11LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2444)).kind_) == ((rt_int)11LL)))) {
F->arrt_2442 = F->up->ty_string_160;
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_847)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_492(F->up, F->arrt_2442, &F->ct_2447);
f_cat_operand_856(F->up, (*(P174)rt_nil_check(F->e_847)).a_, F->arrt_2442, G_NV((*(P174)rt_nil_check(F->e_847)).line_), &F->a_2445);
f_cat_operand_856(F->up, (*(P174)rt_nil_check(F->e_847)).b_, F->arrt_2442, G_NV((*(P174)rt_nil_check(F->e_847)).line_), &F->b_2446);
(*F->t_849) = F->arrt_2442;
(*F->r_850) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P140)rt_nil_check(F->ct_2447))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2445))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2446))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_856(struct f_greenc_1fr *up_, P174 x_852, P122 arrt_853, rt_int line_854, P140 *r_855) {
  struct f_cat_operand_856fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_852 = x_852;
F->arrt_853 = arrt_853;
F->line_854 = line_854;
F->r_855 = r_855;
F->tx_2448 = NULL;
F->ct_2449 = NULL;
if ((f_is_char_lit_787(F->up, F->x_852) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->arrt_853)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_806(F->up, F->x_852, (*(P122)rt_nil_check(F->arrt_853)).elem_, &F->tx_2448, &(*F->r_855));
} else {
f_gexpr_806(F->up, F->x_852, F->arrt_853, &F->tx_2448, &(*F->r_855));
}
if (f_same_444(F->up, F->tx_2448, F->arrt_853)) {
goto ret_;
}
if (f_same_444(F->up, F->tx_2448, (*(P122)rt_nil_check(F->arrt_853)).elem_)) {
f_ctype_492(F->up, F->arrt_853, &F->ct_2449);
(*F->r_855) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P140)rt_nil_check(F->ct_2449))), one_rt_gstr(40)), (*(P140)rt_nil_check((*F->r_855)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_249(F->up, F->line_854, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_483(F->up, F->tx_2448)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_483(F->up, F->arrt_853)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_861(struct f_greenc_1fr *up_, P174 e_857, P122 want_858, P122 *t_859, P140 *r_860) {
  struct f_arithmetic_861fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_857 = e_857;
F->want_858 = want_858;
F->t_859 = t_859;
F->r_860 = r_860;
F->op_2450 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_857)).name_)));
F->ta_2451 = NULL;
F->tb_2452 = NULL;
F->hint_2453 = NULL;
F->a_2454 = NULL;
F->b_2455 = NULL;
if (eq_rt_gstr(F->op_2450, rt_g_lit("**", 2))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).a_, F->want_858, &F->ta_2451, &F->a_2454);
F->hint_2453 = F->up->ty_int_156;
if ((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)1LL))) {
F->hint_2453 = F->ta_2451;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).b_, F->hint_2453, &F->tb_2452, &F->b_2455);
if ((G_NV((*(P122)rt_nil_check(F->tb_2452)).kind_) != ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_857)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_859) = F->ta_2451;
if ((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)1LL))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)3LL))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), rt_g_lit(", ", 2)), f_float_kind_838(F->up, F->ta_2451)), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_857)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_857)).a_) && (!f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_857)).b_)))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).b_, F->want_858, &F->tb_2452, &F->b_2455);
F->hint_2453 = F->tb_2452;
if (((G_NV((*(P122)rt_nil_check(F->tb_2452)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2450, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2450, rt_g_lit("/", 1))))) {
F->hint_2453 = F->up->ty_int_156;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).a_, F->hint_2453, &F->ta_2451, &F->a_2454);
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).a_, F->want_858, &F->ta_2451, &F->a_2454);
F->hint_2453 = F->ta_2451;
if (((((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2450, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2450, rt_g_lit("/", 1)))) && f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_857)).b_)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_857)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2453 = F->up->ty_int_156;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_857)).b_, F->hint_2453, &F->tb_2452, &F->b_2455);
}
if (((!f_is_numeric_451(F->up, F->ta_2451)) || (!f_is_numeric_451(F->up, F->tb_2452)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_857)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2450), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_483(F->up, F->ta_2451)), rt_g_lit(" and ", 5)), f_kind_name_483(F->up, F->tb_2452)));
}
if (((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)16LL)) || (G_NV((*(P122)rt_nil_check(F->tb_2452)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_869(F->up, F->e_857, F->ta_2451, F->tb_2452, (*(P140)rt_nil_check(F->a_2454)), (*(P140)rt_nil_check(F->b_2455)), &(*F->t_859), &(*F->r_860));
goto ret_;
}
f_check_type_487(F->up, F->tb_2452, F->ta_2451, G_NV((*(P174)rt_nil_check(F->e_857)).line_));
(*F->t_859) = F->ta_2451;
if ((G_NV((*(P122)rt_nil_check(F->ta_2451)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2450, rt_g_lit("+", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), rt_g_lit(", ", 2)), f_float_kind_838(F->up, F->ta_2451)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("-", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), rt_g_lit(", ", 2)), f_float_kind_838(F->up, F->ta_2451)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("*", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), rt_g_lit(", ", 2)), f_float_kind_838(F->up, F->ta_2451)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("/", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), rt_g_lit(", ", 2)), f_float_kind_838(F->up, F->ta_2451)), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_857)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2450), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2450, rt_g_lit("+", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("-", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("*", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("/", 1))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2450, rt_g_lit("MOD", 3))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P140)rt_nil_check(F->a_2454))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2455))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_857)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2450), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_836(F->up, (*F->t_859))) {
(*F->r_860) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_860)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_869(struct f_greenc_1fr *up_, P174 e_862, P122 ta_863, P122 tb_864, rt_gstr a_865, rt_gstr b_866, P122 *t_867, P140 *r_868) {
  struct f_fixed_operation_869fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_862 = e_862;
F->ta_863 = ta_863;
F->tb_864 = tb_864;
F->a_865 = cp_rt_gstr(a_865);
F->b_866 = cp_rt_gstr(b_866);
F->t_867 = t_867;
F->r_868 = r_868;
F->op_2456 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_862)).name_)));
if ((eq_rt_gstr(F->op_2456, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2456, rt_g_lit("-", 1)))) {
f_check_type_487(F->up, F->tb_864, F->ta_863, G_NV((*(P174)rt_nil_check(F->e_862)).line_));
(*F->t_867) = F->ta_863;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_865), one_rt_gstr(32)), F->op_2456), one_rt_gstr(32)), F->b_866), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2456, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_863)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_864)).kind_) == ((rt_int)16LL)))) {
(*F->t_867) = F->up->ty_ufixed_172;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_865), rt_g_lit(" * ", 3)), F->b_866), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2456, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_863)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_864)).kind_) == ((rt_int)16LL)))) {
(*F->t_867) = F->up->ty_ufixed_172;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_865), rt_g_lit(", ", 2)), F->b_866), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2456, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_863)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_864)).kind_) == ((rt_int)1LL)))) {
(*F->t_867) = F->ta_863;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_865), rt_g_lit(" * (double)(", 12)), F->b_866), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2456, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_863)).kind_) == ((rt_int)1LL))) && (G_NV((*(P122)rt_nil_check(F->tb_864)).kind_) == ((rt_int)16LL)))) {
(*F->t_867) = F->tb_864;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_865), rt_g_lit(") * ", 4)), F->b_866), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2456, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_863)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_864)).kind_) == ((rt_int)1LL)))) {
(*F->t_867) = F->ta_863;
(*F->r_868) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_865), rt_g_lit(", (double)(", 11)), F->b_866), rt_g_lit("), 0), ", 7)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->ta_863)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_862)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2456), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_874(struct f_greenc_1fr *up_, P174 e_870, P122 want_871, P122 *t_872, P140 *r_873) {
  struct f_gen_binop_874fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_870 = e_870;
F->want_871 = want_871;
F->t_872 = t_872;
F->r_873 = r_873;
F->op_2457 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_870)).name_)));
F->ta_2458 = NULL;
F->tb_2459 = NULL;
F->hint_2460 = NULL;
F->ct_2461 = NULL;
F->a_2462 = NULL;
F->b_2463 = NULL;
F->x_2464 = NULL;
F->dummy_2465 = NULL;
F->done_2466 = INT_MIN;
(*F->t_872) = F->up->ty_bool_157;
f_user_operator_1104(F->up, F->e_870, F->want_871, &(*F->t_872), &(*F->r_873), &F->done_2466);
 (void)rt_range(F->done_2466, 0, 1);
if (G_NV(F->done_2466)) {
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_870)).ival_) == ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2457, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2457, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2457, rt_g_lit("XOR", 3)))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_870)).a_, F->want_871, &F->ta_2458, &F->a_2462);
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_870)).b_, F->ta_2458, &F->tb_2459, &F->b_2463);
f_check_type_487(F->up, F->tb_2459, F->ta_2458, G_NV((*(P174)rt_nil_check(F->e_870)).line_));
(*F->t_872) = F->ta_2458;
if (((G_NV((*(P122)rt_nil_check(F->ta_2458)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check(F->ta_2458)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->ta_2458)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_492(F->up, F->ta_2458, &F->x_2464);
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_239(F->up, F->op_2457), one_rt_gstr(95)), (*(P140)rt_nil_check(F->x_2464))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2458)).kind_) != ((rt_int)2LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2457), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2457, rt_g_lit("AND", 3))) {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2457, rt_g_lit("OR", 2))) {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
} else {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2457, rt_g_lit("IN", 2))) {
f_membership_841(F->up, F->e_870, &(*F->r_873));
goto ret_;
}
if (eq_rt_gstr(F->op_2457, rt_g_lit("&", 1))) {
f_catenation_851(F->up, F->e_870, F->want_871, &(*F->t_872), &(*F->r_873));
goto ret_;
}
if (f_is_rel_341(F->up, F->op_2457)) {
if (((((f_is_literal_793(F->up, (*(P174)rt_nil_check(F->e_870)).a_) || f_is_enum_lit_789(F->up, (*(P174)rt_nil_check(F->e_870)).a_)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_870)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_870)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_870)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_870)).b_, NULL, &F->hint_2460, &F->dummy_2465);
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_870)).a_, F->hint_2460, &F->ta_2458, &F->a_2462);
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_870)).b_, F->ta_2458, &F->tb_2459, &F->b_2463);
F->ct_2461 = F->ta_2458;
if (((G_NV((*(P122)rt_nil_check(F->ta_2458)).kind_) != ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2459)).kind_) != ((rt_int)10LL)))) {
f_check_type_487(F->up, F->tb_2459, F->ta_2458, G_NV((*(P174)rt_nil_check(F->e_870)).line_));
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2458)).kind_) == ((rt_int)10LL))) {
F->ct_2461 = F->tb_2459;
}
if (((eq_rt_gstr(F->op_2457, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2457, rt_g_lit("/=", 2))) && f_restricted_here_563(F->up, F->ct_2461))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2457, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2457, rt_g_lit("/=", 2)))) && (!f_is_numeric_451(F->up, F->ct_2461))) && (!f_is_discrete_453(F->up, F->ct_2461)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2457), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_483(F->up, F->ct_2461)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_614(F->up, F->ct_2461)) {
f_eq_code_629(F->up, F->ct_2461, (*(P140)rt_nil_check(F->a_2462)), (*(P140)rt_nil_check(F->b_2463)), &F->x_2464);
if (eq_rt_gstr(F->op_2457, rt_g_lit("=", 1))) {
(*F->r_873) = F->x_2464;
} else if (eq_rt_gstr(F->op_2457, rt_g_lit("/=", 2))) {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->x_2464))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_870)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2457, rt_g_lit("=", 1))) {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2457, rt_g_lit("/=", 2))) {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
} else {
(*F->r_873) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2462))), one_rt_gstr(32)), F->op_2457), one_rt_gstr(32)), (*(P140)rt_nil_check(F->b_2463))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_861(F->up, F->e_870, F->want_871, &(*F->t_872), &(*F->r_873));
ret_:

  return;
}

static void f_conversion_879(struct f_greenc_1fr *up_, P174 e_875, P117 y_876, P122 *t_877, P140 *r_878) {
  struct f_conversion_879fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_875 = e_875;
F->y_876 = y_876;
F->t_877 = t_877;
F->r_878 = r_878;
F->aty_2467 = NULL;
F->a_2468 = NULL;
F->ag_2469 = NULL;
F->it_2470 = NULL;
F->tail_2471 = NULL;
F->arg_2472 = NULL;
(*F->t_877) = (*(P117)rt_nil_check(F->y_876)).t_;
if (((G_NV((*(P174)rt_nil_check(F->e_875)).flag_) == ((rt_int)9LL)) || (f_list_len_308(F->up, (*(P174)rt_nil_check(F->e_875)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_875)).flag_) == ((rt_int)9LL))) {
F->ag_2469 = (*(P174)rt_nil_check(F->e_875)).b_;
} else {
F->ag_2469 = f_nn_302(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_875)).line_));
F->arg_2472 = (*(P174)rt_nil_check(F->e_875)).b_;
while ((F->arg_2472 != NULL)) {
F->it_2470 = f_nn_302(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_875)).line_));
(*(P174)rt_nil_check(F->it_2470)).b_ = F->arg_2472;
if (((*(P174)rt_nil_check(F->arg_2472)).formal_ != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_875)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2471 == NULL)) {
(*(P174)rt_nil_check(F->ag_2469)).a_ = F->it_2470;
} else {
(*(P174)rt_nil_check(F->tail_2471)).next_ = F->it_2470;
}
F->tail_2471 = F->it_2470;
F->arg_2472 = (*(P174)rt_nil_check(F->arg_2472)).next_;
}
L_end_2473: ;
}
if ((G_NV((*(P174)rt_nil_check(F->ag_2469)).kind_) != ((rt_int)12LL))) {
f_gexpr_806(F->up, F->ag_2469, (*F->t_877), &F->aty_2467, &(*F->r_878));
f_check_type_487(F->up, F->aty_2467, (*F->t_877), G_NV((*(P174)rt_nil_check(F->e_875)).line_));
} else {
f_aggregate_952(F->up, F->ag_2469, (*F->t_877), &F->aty_2467, &(*F->r_878));
}
f_constrain_883(F->up, F->y_876, (*F->t_877), &(*F->r_878));
goto ret_;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_875)).b_, (*F->t_877), &F->aty_2467, &F->a_2468);
if ((((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2467)).kind_) == ((rt_int)6LL))) && (!f_same_444(F->up, (*F->t_877), F->aty_2467)))) {
f_array_conversion_890(F->up, F->e_875, (*F->t_877), F->aty_2467, (*(P117)rt_nil_check(F->y_876)).c_, (*(P140)rt_nil_check(F->a_2468)), &(*F->r_878));
goto ret_;
}
if ((f_is_numeric_451(F->up, (*F->t_877)) && f_is_numeric_451(F->up, F->aty_2467))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2467)).kind_) != ((rt_int)1LL)))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P140)rt_nil_check(F->a_2468))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2467)).kind_) == ((rt_int)1LL)))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P140)rt_nil_check(F->a_2468))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check((*F->t_877))).fsmall_ != NULL))) {
if ((G_NV((*(P122)rt_nil_check(F->aty_2467)).kind_) == ((rt_int)1LL))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P140)rt_nil_check(F->a_2468))), rt_g_lit("), ", 3)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_877))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check(F->a_2468))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_877))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_878) = F->a_2468;
}
} else if (((f_same_444(F->up, F->aty_2467, (*F->t_877)) || f_derived_from_449(F->up, F->aty_2467, (*F->t_877))) || f_derived_from_449(F->up, (*F->t_877), F->aty_2467))) {
(*F->r_878) = F->a_2468;
} else {
f_check_type_487(F->up, F->aty_2467, (*F->t_877), G_NV((*(P174)rt_nil_check(F->e_875)).line_));
(*F->r_878) = F->a_2468;
}
if (((((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)11LL))) && f_bounded_475(F->up, (*(P117)rt_nil_check(F->y_876)).c_))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_878)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_876)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_876)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_877))).kind_) == ((rt_int)16LL))) && f_bounded_475(F->up, (*(P117)rt_nil_check(F->y_876)).c_))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P140)rt_nil_check((*F->r_878)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_876)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_876)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_836(F->up, (*F->t_877))) {
(*F->r_878) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_878)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_883(struct f_greenc_1fr *up_, P117 y_880, P122 t_881, P140 *r_882) {
  struct f_constrain_883fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_880 = y_880;
F->t_881 = t_881;
F->r_882 = r_882;
F->ct_2474 = NULL;
F->tmp_2475 = NULL;
if ((((*(P117)rt_nil_check(F->y_880)).c_ == NULL) || ((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_880)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_881)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_477(F->up, (*(P122)rt_nil_check(F->t_881)).tcons_)))) {
f_ctype_492(F->up, F->t_881, &F->ct_2474);
f_new_name_231(F->up, rt_g_lit("q", 1), &F->tmp_2475);
(*F->r_882) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2474))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2475))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*F->r_882)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_880)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_880)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2475))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2475))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2475))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2475))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_890(struct f_greenc_1fr *up_, P174 e_884, P122 t_885, P122 aty_886, P178 c_887, rt_gstr a_888, P140 *r_889) {
  struct f_array_conversion_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_884 = e_884;
F->t_885 = t_885;
F->aty_886 = aty_886;
F->c_887 = c_887;
F->a_888 = cp_rt_gstr(a_888);
F->r_889 = r_889;
F->x_2476 = NULL;
F->y_2477 = NULL;
F->ct_2478 = NULL;
F->act_2479 = NULL;
F->et_2480 = NULL;
F->tmp_2481 = NULL;
F->s_2482 = NULL;
F->x_2476 = F->t_885;
F->y_2477 = F->aty_886;
if ((G_NV((*(P122)rt_nil_check(F->t_885)).dims_) != G_NV((*(P122)rt_nil_check(F->aty_886)).dims_))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_884)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2485 = ((rt_int)1LL), hi2486 = G_NV((*(P122)rt_nil_check(F->t_885)).dims_);
for (rt_int it2487 = lo2485; it2487 <= hi2486; it2487++) {
F->k_2484 = it2487;
if ((!((f_same_444(F->up, (*(P122)rt_nil_check(F->x_2476)).idx_, (*(P122)rt_nil_check(F->y_2477)).idx_) || f_derived_from_449(F->up, (*(P122)rt_nil_check(F->x_2476)).idx_, (*(P122)rt_nil_check(F->y_2477)).idx_)) || f_derived_from_449(F->up, (*(P122)rt_nil_check(F->y_2477)).idx_, (*(P122)rt_nil_check(F->x_2476)).idx_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_884)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_483(F->up, F->aty_886)), rt_g_lit(" to ", 4)), f_kind_name_483(F->up, F->t_885)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2476 = (*(P122)rt_nil_check(F->x_2476)).elem_;
F->y_2477 = (*(P122)rt_nil_check(F->y_2477)).elem_;
}
}
L_end_2483: ;
if ((!((f_same_444(F->up, F->x_2476, F->y_2477) || f_derived_from_449(F->up, F->x_2476, F->y_2477)) || f_derived_from_449(F->up, F->y_2477, F->x_2476)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_884)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_483(F->up, F->aty_886)), rt_g_lit(" to ", 4)), f_kind_name_483(F->up, F->t_885)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_492(F->up, F->t_885, &F->ct_2478);
f_ctype_492(F->up, F->aty_886, &F->act_2479);
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_885)).elem_, &F->et_2480);
f_new_name_231(F->up, rt_g_lit("cv", 2), &F->tmp_2481);
(*F->r_889) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->act_2479))), rt_g_lit(" s_ = ", 6)), F->a_888), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->ct_2478))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit(".p = (", 6)), (*(P140)rt_nil_check(F->et_2480))), rt_g_lit(" *)s_.p; ", 9)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("; })", 4)));
if ((((*(P122)rt_nil_check(F->t_885)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_885)).tcons_)).hi_ != NULL))) {
(*F->r_889) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2478))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("x = ", 4)), (*(P140)rt_nil_check((*F->r_889)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_885)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_885)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_246(F->up)), rt_g_lit("array length", 12)), f_q_246(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("x.lo = l_; ", 11)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("x.hi = h_; ", 11)), (*(P140)rt_nil_check(F->tmp_2481))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_895(struct f_greenc_1fr *up_, P174 e_891, P122 want_892, P122 *t_893, P140 *r_894) {
  struct f_gen_attr_895fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_891 = e_891;
F->want_892 = want_892;
F->t_893 = t_893;
F->r_894 = r_894;
F->a_2488 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_891)).name_)));
F->y_2489 = NULL;
F->tt_2490 = NULL;
F->aty_2491 = NULL;
F->v_2492 = NULL;
F->d_2493 = NULL;
F->c_2494 = NULL;
F->n_2495 = INT64_MIN;
F->ro_2496 = INT_MIN;
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1122(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_)).name_))))) {
f_member_attr_1195(F->up, F->e_891, &(*F->t_893), &(*F->r_894));
goto ret_;
}
if ((eq_rt_gstr(F->a_2488, rt_g_lit("ADDRESS", 7)) && f_is_object_754(F->up, (*(P174)rt_nil_check(F->e_891)).a_))) {
f_lvalue_762(F->up, (*(P174)rt_nil_check(F->e_891)).a_, &F->v_2492, &F->aty_2491, &F->c_2494, &F->ro_2496);
 (void)rt_range(F->ro_2496, 0, 1);
(*F->t_893) = F->up->ty_int_156;
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2488, rt_g_lit("COUNT", 5)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2489 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_)).name_)));
if ((((F->y_2489 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)10LL))) && ((*(P117)rt_nil_check(F->y_2489)).c_ != NULL))) {
if ((!f_same_task_427(F->up, (*(P117)rt_nil_check(F->y_2489)).members_, F->up->cur_task_202))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_891)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1145(F->up, F->y_2489, rt_g_lit("", 0), &F->v_2492);
f_gexpr_806(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).b_, NULL, &F->aty_2491, &F->d_2493);
f_entry_family_slot_1161(F->up, F->y_2489, (*(P140)rt_nil_check(F->v_2492)), (*(P140)rt_nil_check(F->d_2493)), &F->v_2492);
(*F->t_893) = F->up->ty_int_156;
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->v_2492))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_))) {
F->y_2489 = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_891)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2489 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)));
if (((F->y_2489 == NULL) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_917(F->up, F->e_891, &(*F->t_893), &(*F->r_894));
goto ret_;
}
if (((eq_rt_gstr(F->a_2488, rt_g_lit("ADDRESS", 7)) && (F->y_2489 != NULL)) && ((((G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)3LL))) || (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)9LL))))) {
(*F->t_893) = F->up->ty_int_156;
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_417(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2489)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2489)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2489 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2488, rt_g_lit("CLOCK", 5)))) {
(*F->t_893) = F->up->ty_time_171;
(*F->r_894) = f_mk_228(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2489 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_891)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2488, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2488, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_893) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2488, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2489 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) == ((rt_int)5LL)))) {
F->tt_2490 = (*(P117)rt_nil_check(F->y_2489)).t_;
F->c_2494 = (*(P117)rt_nil_check(F->y_2489)).c_;
if (eq_rt_gstr(F->a_2488, rt_g_lit("SIZE", 4))) {
(*F->t_893) = F->up->ty_int_156;
f_type_bits_899(F->up, F->tt_2490, F->c_2494, &(*F->r_894));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2488, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2488, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2488, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2488, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2488, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2488, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2488, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2488, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2488, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_909(F->up, F->e_891, F->tt_2490, F->c_2494, &(*F->t_893), &(*F->r_894));
goto ret_;
}
if (eq_rt_gstr(F->a_2488, rt_g_lit("ORD", 3))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_891)).b_, F->tt_2490, &F->aty_2491, &F->v_2492);
f_check_type_487(F->up, F->aty_2491, F->tt_2490, G_NV((*(P174)rt_nil_check(F->e_891)).line_));
(*F->t_893) = F->up->ty_int_156;
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2488, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2488, rt_g_lit("REP", 3)))) {
f_val_rep_942(F->up, F->e_891, F->tt_2490, F->c_2494, &(*F->t_893), &(*F->r_894));
goto ret_;
} else if ((eq_rt_gstr(F->a_2488, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2488, rt_g_lit("PRED", 4)))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_891)).b_, F->tt_2490, &F->aty_2491, &F->v_2492);
(*F->t_893) = F->tt_2490;
if ((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2488, rt_g_lit("SUCC", 4))) {
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2488, rt_g_lit("SUCC", 4))) {
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit(" + 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2494)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2494)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_894) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2492))), rt_g_lit(" - 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2494)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2494)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2488, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2488, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_933(F->up, F->e_891, F->tt_2490, F->c_2494, &(*F->t_893), &(*F->r_894));
goto ret_;
} else if ((eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2488, rt_g_lit("LAST", 4)))) {
(*F->t_893) = F->tt_2490;
if (f_bounded_475(F->up, F->c_2494)) {
if (eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5))) {
(*F->r_894) = (*(P178)rt_nil_check(F->c_2494)).lo_;
} else {
(*F->r_894) = (*(P178)rt_nil_check(F->c_2494)).hi_;
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5))) {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)3LL)) && (f_root_446(F->up, F->tt_2490) == F->up->ty_sfloat_169))) {
if (eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5))) {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5))) {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_894) = f_mk_228(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_891)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2488));
}
goto ret_;
}
f_other_attr_1191(F->up, F->e_891, F->y_2489, &(*F->t_893), &(*F->r_894));
goto ret_;
}
if (((F->y_2489 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2489)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1191(F->up, F->e_891, F->y_2489, &(*F->t_893), &(*F->r_894));
goto ret_;
}
if (((eq_rt_gstr(F->a_2488, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2488, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2488, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_913(F->up, F->e_891, &(*F->t_893), &(*F->r_894));
goto ret_;
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_891)).a_, NULL, &F->tt_2490, &F->v_2492);
if (eq_rt_gstr(F->a_2488, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) != ((rt_int)8LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_891)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_893) = F->up->ty_int_156;
(*F->r_894) = f_mk_228(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2488, rt_g_lit("SIZE", 4))) {
(*F->t_893) = F->up->ty_int_156;
f_object_bits_903(F->up, F->tt_2490, (*(P140)rt_nil_check(F->v_2492)), &(*F->r_894));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_608(F->up, F->tt_2490);
f_deref_752(F->up, (*(P140)rt_nil_check(F->v_2492)), F->tt_2490, &F->d_2493);
F->v_2492 = F->d_2493;
F->tt_2490 = (*(P122)rt_nil_check(F->tt_2490)).target_;
}
(*F->t_893) = F->up->ty_int_156;
if (((G_NV((*(P122)rt_nil_check(F->tt_2490)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2488, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2488, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2488, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_927(F->up, F->e_891, F->tt_2490, (*(P140)rt_nil_check(F->v_2492)), &(*F->t_893), &(*F->r_894));
goto ret_;
}
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_891)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2488), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_899(struct f_greenc_1fr *up_, P122 t_896, P178 c_897, P140 *r_898) {
  struct f_type_bits_899fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_896 = t_896;
F->c_897 = c_897;
F->r_898 = r_898;
F->ct_2497 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_475(F->up, F->c_897))) {
f_fail_249(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_896)).elem_, &F->ct_2497);
(*F->r_898) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_897)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_897)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P140)rt_nil_check(F->ct_2497))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)2LL)))) {
(*F->r_898) = f_mk_228(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_308(F->up, (*(P122)rt_nil_check(F->t_896)).lits_) <= ((rt_int)256LL))) {
(*F->r_898) = f_mk_228(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_898) = f_mk_228(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)1LL)) && (f_root_446(F->up, F->t_896) == F->up->ty_short_167))) {
(*F->r_898) = f_mk_228(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P122)rt_nil_check(F->t_896)).kind_) == ((rt_int)3LL)) && (f_root_446(F->up, F->t_896) == F->up->ty_sfloat_169))) {
(*F->r_898) = f_mk_228(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_492(F->up, F->t_896, &F->ct_2497);
(*F->r_898) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P140)rt_nil_check(F->ct_2497))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_903(struct f_greenc_1fr *up_, P122 t_900, rt_gstr v_901, P140 *r_902) {
  struct f_object_bits_903fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_900 = t_900;
F->v_901 = cp_rt_gstr(v_901);
F->r_902 = r_902;
F->ct_2498 = NULL;
F->et_2499 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_900)).kind_) == ((rt_int)6LL))) {
f_ctype_492(F->up, F->t_900, &F->ct_2498);
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->t_900)).elem_, &F->et_2499);
(*F->r_902) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2498))), rt_g_lit(" sz_ = ", 7)), F->v_901), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P140)rt_nil_check(F->et_2499))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_899(F->up, F->t_900, NULL, &(*F->r_902));
(*F->r_902) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_901), rt_g_lit("); ", 3)), (*(P140)rt_nil_check((*F->r_902)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_909(struct f_greenc_1fr *up_, P174 e_904, P122 tt_905, P178 c_906, P122 *t_907, P140 *r_908) {
  struct f_numeric_attr_909fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_904 = e_904;
F->tt_905 = tt_905;
F->c_906 = c_906;
F->t_907 = t_907;
F->r_908 = r_908;
F->a_2500 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_904)).name_)));
F->short_2501 = INT_MIN;
F->short_2501 = (f_root_446(F->up, F->tt_905) == F->up->ty_sfloat_169);
(*F->t_907) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2500, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_905)).kind_) != ((rt_int)8LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_451(F->up, F->tt_905))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_905)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2500, rt_g_lit("DIGITS", 6))) {
if (((F->c_906 != NULL) && ((*(P178)rt_nil_check(F->c_906)).acc_ != NULL))) {
(*F->r_908) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_908) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->tt_905)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2501)) {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2501)) {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2501)) {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("SMALL", 5))) {
(*F->t_907) = F->tt_905;
if (G_NV(F->short_2501)) {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("LARGE", 5))) {
(*F->t_907) = F->tt_905;
if (G_NV(F->short_2501)) {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_908) = f_mk_228(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_905)).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check(F->tt_905)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2500, rt_g_lit("DELTA", 5))) {
(*F->t_907) = F->tt_905;
if (((F->c_906 != NULL) && ((*(P178)rt_nil_check(F->c_906)).acc_ != NULL))) {
(*F->r_908) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_908) = (*(P122)rt_nil_check(F->tt_905)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("SMALL", 5))) {
(*F->t_907) = F->tt_905;
(*F->r_908) = (*(P122)rt_nil_check(F->tt_905)).fsmall_;
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("LARGE", 5))) {
(*F->t_907) = F->tt_905;
(*F->r_908) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_905)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2500, rt_g_lit("BITS", 4))) {
(*F->r_908) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_905)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_906)).hi_))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), cat_rt_gstr(F->a_2500, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_904)).line_), cat_rt_gstr(F->a_2500, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_913(struct f_greenc_1fr *up_, P174 e_910, P122 *t_911, P140 *r_912) {
  struct f_component_attr_913fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_910 = e_910;
F->t_911 = t_911;
F->r_912 = r_912;
F->bt_2502 = NULL;
F->v_2503 = NULL;
F->ct_2504 = NULL;
F->f_2505 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_910)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_910)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_, NULL, &F->bt_2502, &F->v_2503);
if ((G_NV((*(P122)rt_nil_check(F->bt_2502)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_608(F->up, F->bt_2502);
F->bt_2502 = (*(P122)rt_nil_check(F->bt_2502)).target_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_2502)).kind_) != ((rt_int)7LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_910)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2505 = (*(P122)rt_nil_check(F->bt_2502)).fields_;
while (((F->f_2505 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2505)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)))))) {
F->f_2505 = (*(P1846)rt_nil_check(F->f_2505)).next_;
}
L_end_2506: ;
if ((F->f_2505 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_483(F->up, F->bt_2502), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_))));
}
f_ctype_492(F->up, F->bt_2502, &F->ct_2504);
(*F->t_911) = F->up->ty_int_156;
f_component_place_559(F->up, F->bt_2502, F->f_2505, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_910)).name_)), (*(P140)rt_nil_check(F->ct_2504)), &(*F->r_912));
ret_:

  return;
}

static void f_config_attr_917(struct f_greenc_1fr *up_, P174 e_914, P122 *t_915, P140 *r_916) {
  struct f_config_attr_917fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_914 = e_914;
F->t_915 = t_915;
F->r_916 = r_916;
F->a_2507 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_914)).name_)));
F->p_2508 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_914)).a_)).name_)));
F->nm_2509 = NULL;
F->nm_2509 = F->up->conf_system_223;
(*F->t_915) = F->up->ty_int_156;
if (eq_rt_gstr(F->p_2508, rt_g_lit("OPTION", 6))) {
(*F->t_915) = F->up->ty_bool_157;
if (eq_rt_gstr(F->a_2507, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_226 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_226)), rt_g_lit("TIME", 4)))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("1", 1));
} else {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_226 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_226)), rt_g_lit("SPACE", 5)))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("1", 1));
} else {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_914)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("CLOCK", 5))) {
(*F->t_915) = F->up->ty_time_171;
(*F->r_916) = f_mk_228(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("NAME", 4))) {
if ((F->nm_2509 == NULL)) {
F->nm_2509 = f_mk_228(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_915) = F->up->ty_string_160;
(*F->r_916) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_791(F->up, (*(P140)rt_nil_check(F->nm_2509)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2511 = (*(P140)rt_nil_check(F->nm_2509)); at2511.hi >= at2511.lo ? at2511.hi - at2511.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_916) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_224)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_916) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_225)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("MAX_INT", 7))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2507, rt_g_lit("MIN_INT", 7))) {
(*F->r_916) = f_mk_228(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_914)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2507), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_921(struct f_greenc_1fr *up_, P174 e_918, P122 arrt_919, rt_int *n_920) {
  struct f_attr_dim_921fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_918 = e_918;
F->arrt_919 = arrt_919;
F->n_920 = n_920;
F->ok_2512 = INT_MIN;
(*F->n_920) = ((rt_int)1LL);
if (((*(P174)rt_nil_check(F->e_918)).b_ != NULL)) {
f_manifest_504(F->up, (*(P174)rt_nil_check(F->e_918)).b_, &(*F->n_920), &F->ok_2512);
 (void)rt_range(F->ok_2512, 0, 1);
if ((!G_NV(F->ok_2512))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_918)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_918)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_920)) < ((rt_int)1LL)) || (G_NV((*F->n_920)) > G_NV((*(P122)rt_nil_check(F->arrt_919)).dims_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_918)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_483(F->up, F->arrt_919), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_920))))));
}
ret_:

  return;
}

static void f_object_array_attr_927(struct f_greenc_1fr *up_, P174 e_922, P122 arrt_923, rt_gstr v_924, P122 *t_925, P140 *r_926) {
  struct f_object_array_attr_927fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_922 = e_922;
F->arrt_923 = arrt_923;
F->v_924 = cp_rt_gstr(v_924);
F->t_925 = t_925;
F->r_926 = r_926;
F->n_2513 = INT64_MIN;
F->it_2514 = NULL;
F->it_2514 = F->arrt_923;
F->ct_2515 = NULL;
F->tmp_2516 = NULL;
F->p_2517 = NULL;
F->lo_2518 = NULL;
F->hi_2519 = NULL;
f_attr_dim_921(F->up, F->e_922, F->arrt_923, &F->n_2513);
f_ctype_492(F->up, F->arrt_923, &F->ct_2515);
f_new_name_231(F->up, rt_g_lit("at", 2), &F->tmp_2516);
F->p_2517 = F->tmp_2516;
{ rt_int lo2522 = ((rt_int)2LL), hi2523 = G_NV(F->n_2513);
for (rt_int it2524 = lo2522; it2524 <= hi2523; it2524++) {
F->k_2521 = it2524;
F->it_2514 = (*(P122)rt_nil_check(F->it_2514)).elem_;
}
}
L_end_2520: ;
if ((G_NV(F->n_2513) == ((rt_int)1LL))) {
F->lo_2518 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2517)), rt_g_lit(".lo", 3)));
F->hi_2519 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2517)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2527 = ((rt_int)3LL), hi2528 = G_NV(F->n_2513);
for (rt_int it2529 = lo2527; it2529 <= hi2528; it2529++) {
F->k_2526 = it2529;
F->p_2517 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2517)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2525: ;
F->lo_2518 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2517)), rt_g_lit(".lo2", 4)));
F->hi_2519 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2517)), rt_g_lit(".hi2", 4)));
}
(*F->t_925) = (*(P122)rt_nil_check(F->it_2514)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_922)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_926) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2515))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2516))), rt_g_lit(" = ", 3)), F->v_924), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->lo_2518))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_922)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_926) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2515))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2516))), rt_g_lit(" = ", 3)), F->v_924), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2519))), rt_g_lit("; })", 4)));
} else {
(*F->t_925) = F->up->ty_int_156;
(*F->r_926) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2515))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2516))), rt_g_lit(" = ", 3)), F->v_924), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2519))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2518))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2519))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2518))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_933(struct f_greenc_1fr *up_, P174 e_928, P122 arrt_929, P178 c_930, P122 *t_931, P140 *r_932) {
  struct f_type_array_attr_933fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_928 = e_928;
F->arrt_929 = arrt_929;
F->c_930 = c_930;
F->t_931 = t_931;
F->r_932 = r_932;
F->n_2530 = INT64_MIN;
F->it_2531 = NULL;
F->it_2531 = F->arrt_929;
F->cc_2532 = NULL;
F->cc_2532 = F->c_930;
f_attr_dim_921(F->up, F->e_928, F->arrt_929, &F->n_2530);
{ rt_int lo2535 = ((rt_int)2LL), hi2536 = G_NV(F->n_2530);
for (rt_int it2537 = lo2535; it2537 <= hi2536; it2537++) {
F->k_2534 = it2537;
F->it_2531 = (*(P122)rt_nil_check(F->it_2531)).elem_;
if ((F->cc_2532 != NULL)) {
F->cc_2532 = (*(P178)rt_nil_check(F->cc_2532)).inner_;
}
}
}
L_end_2533: ;
if (((F->cc_2532 == NULL) || ((*(P178)rt_nil_check(F->cc_2532)).lo_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_928)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_483(F->up, F->arrt_929)), rt_g_lit(" are not known here: ", 21)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_928)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_931) = (*(P122)rt_nil_check(F->it_2531)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_928)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_932) = (*(P178)rt_nil_check(F->cc_2532)).lo_;
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_928)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_932) = (*(P178)rt_nil_check(F->cc_2532)).hi_;
} else {
(*F->t_931) = F->up->ty_int_156;
(*F->r_932) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2532)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2532)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_936(struct f_greenc_1fr *up_, P122 t_934, P140 *r_935) {
  struct f_lit_table_936fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_934 = t_934;
F->r_935 = r_935;
F->l_2538 = NULL;
F->l_2538 = (*(P122)rt_nil_check(F->t_934)).lits_;
F->s_2539 = NULL;
F->s_2539 = f_mk_228(F->up, rt_g_lit("", 0));
if (((*(P122)rt_nil_check(F->t_934)).littab_ == NULL)) {
f_new_name_231(F->up, rt_g_lit("lits", 4), &(*(P122)rt_nil_check(F->t_934)).littab_);
while ((F->l_2538 != NULL)) {
if ((({ rt_gstr at2541 = (*(P140)rt_nil_check(F->s_2539)); at2541.hi >= at2541.lo ? at2541.hi - at2541.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2539 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2539)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P174)rt_nil_check(F->l_2538)).kind_) == ((rt_int)3LL))) {
F->s_2539 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2539)), f_c_string_791(F->up, cat_rt_gstr(cat_rt_gstr(f_q_246(F->up), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2538)).name_))), f_q_246(F->up)))));
} else {
F->s_2539 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2539)), f_c_string_791(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2538)).name_)))));
}
F->l_2538 = (*(P174)rt_nil_check(F->l_2538)).next_;
}
L_end_2540: ;
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_934)).littab_))), rt_g_lit("[] = {", 6)), (*(P140)rt_nil_check(F->s_2539))), rt_g_lit("};", 2)));
}
(*F->r_935) = (*(P122)rt_nil_check(F->t_934)).littab_;
ret_:

  return;
}

static void f_val_rep_942(struct f_greenc_1fr *up_, P174 e_937, P122 tt_938, P178 c_939, P122 *t_940, P140 *r_941) {
  struct f_val_rep_942fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_937 = e_937;
F->tt_938 = tt_938;
F->c_939 = c_939;
F->t_940 = t_940;
F->r_941 = r_941;
F->aty_2542 = NULL;
F->v_2543 = NULL;
F->lt_2544 = NULL;
F->n_2545 = INT64_MIN;
if (((*(P174)rt_nil_check(F->e_937)).b_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_937)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_937)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_937)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_937)).b_, F->tt_938, &F->aty_2542, &F->v_2543);
f_check_type_487(F->up, F->aty_2542, F->tt_938, G_NV((*(P174)rt_nil_check(F->e_937)).line_));
(*F->t_940) = F->up->ty_string_160;
if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)1LL))) {
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)3LL))) {
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)2LL))) {
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)11LL))) {
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)4LL))) {
f_lit_table_936(F->up, F->tt_938, &F->lt_2544);
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2544))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_308(F->up, (*(P122)rt_nil_check(F->tt_938)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_937)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P140)rt_nil_check((*F->r_941)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_940) = F->tt_938;
if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)1LL))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_937)).b_, F->up->ty_string_160, &F->aty_2542, &F->v_2543);
f_check_type_487(F->up, F->aty_2542, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_937)).line_));
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit("))", 2)));
if (f_bounded_475(F->up, F->c_939)) {
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_941)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_939)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_939)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)3LL))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_937)).b_, F->up->ty_string_160, &F->aty_2542, &F->v_2543);
f_check_type_487(F->up, F->aty_2542, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_937)).line_));
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)2LL)) || (G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)4LL)))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_937)).b_, NULL, &F->aty_2542, &F->v_2543);
if (f_is_string_571(F->up, F->aty_2542)) {
F->v_2543 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)2LL))) {
F->v_2543 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_938)).kind_) == ((rt_int)11LL))) {
F->v_2543 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P140)rt_nil_check(F->v_2543))), one_rt_gstr(41)));
} else {
f_lit_table_936(F->up, F->tt_938, &F->lt_2544);
F->v_2543 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2544))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_308(F->up, (*(P122)rt_nil_check(F->tt_938)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_487(F->up, F->aty_2542, F->up->ty_int_156, G_NV((*(P174)rt_nil_check(F->e_937)).line_));
F->v_2543 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit(" - 1)", 5)));
}
(*F->r_941) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2543))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_939)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_939)).hi_))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_937)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_947(struct f_greenc_1fr *up_, P174 e_943, P122 want_944, P122 *t_945, P140 *r_946) {
  struct f_allocator_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_943 = e_943;
F->want_944 = want_944;
F->t_945 = t_945;
F->r_946 = r_946;
F->y_2546 = NULL;
F->y_2546 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_943)).name_)));
F->target_2547 = NULL;
F->vt_2548 = NULL;
F->ct_2549 = NULL;
F->pt_2550 = NULL;
F->cell_2551 = NULL;
F->v_2552 = NULL;
F->x_2553 = NULL;
if (((F->want_944 == NULL) || (G_NV((*(P122)rt_nil_check(F->want_944)).kind_) != ((rt_int)8LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_943)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2546 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2546)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_943)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_943)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_608(F->up, F->want_944);
F->target_2547 = (*(P122)rt_nil_check(F->want_944)).target_;
if ((!f_same_444(F->up, (*(P117)rt_nil_check(F->y_2546)).t_, F->want_944))) {
f_check_type_487(F->up, (*(P117)rt_nil_check(F->y_2546)).t_, F->target_2547, G_NV((*(P174)rt_nil_check(F->e_943)).line_));
}
f_ctype_492(F->up, F->target_2547, &F->ct_2549);
f_ctype_492(F->up, F->want_944, &F->pt_2550);
f_new_name_231(F->up, rt_g_lit("cell", 4), &F->cell_2551);
if (((*(P174)rt_nil_check(F->e_943)).a_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_943)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_217 != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_943)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_943)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_952(F->up, (*(P174)rt_nil_check(F->e_943)).a_, F->target_2547, &F->vt_2548, &F->v_2552);
} else {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_943)).a_, F->target_2547, &F->vt_2548, &F->v_2552);
}
f_check_type_487(F->up, F->vt_2548, F->target_2547, G_NV((*(P174)rt_nil_check(F->e_943)).line_));
f_copy_code_624(F->up, F->target_2547, (*(P140)rt_nil_check(F->v_2552)), &F->x_2553);
(*F->t_945) = F->want_944;
(*F->r_946) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2549))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->cell_2551))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P140)rt_nil_check(F->ct_2549))), rt_g_lit(")); *", 5)), (*(P140)rt_nil_check(F->cell_2551))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2553))), rt_g_lit("; (", 3)), (*(P140)rt_nil_check(F->pt_2550))), one_rt_gstr(41)), (*(P140)rt_nil_check(F->cell_2551))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_952(struct f_greenc_1fr *up_, P174 e_948, P122 want_949, P122 *t_950, P140 *r_951) {
  struct f_aggregate_952fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_948 = e_948;
F->want_949 = want_949;
F->t_950 = t_950;
F->r_951 = r_951;
F->b_2554 = NULL;
F->b_2554 = F->up->agg_bounds_181;
F->up->agg_bounds_181 = NULL;
if ((F->want_949 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_948)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_950) = F->want_949;
if ((G_NV((*(P122)rt_nil_check(F->want_949)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_974(F->up, F->e_948, F->want_949, &(*F->r_951));
} else if ((G_NV((*(P122)rt_nil_check(F->want_949)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_992(F->up, F->e_948, F->want_949, F->b_2554, &(*F->r_951));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_948)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_483(F->up, F->want_949)));
}
ret_:

  return;
}

static void f_captured_955(struct f_greenc_1fr *up_, P126 b_953, P140 *r_954) {
  struct f_captured_955fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_953 = b_953;
F->r_954 = r_954;
F->l_2555 = NULL;
F->l_2555 = (*(P126)rt_nil_check(F->b_953)).head_;
(*F->r_954) = f_mk_228(F->up, rt_g_lit("", 0));
while ((F->l_2555 != NULL)) {
(*F->r_954) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_954))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2555)).s_))));
F->l_2555 = (*(P151)rt_nil_check(F->l_2555)).next_;
}
L_end_2556: ;
ret_:

  return;
}

static P1846 f_field_at_958(struct f_greenc_1fr *up_, P122 rt_956, rt_int k_957) {
  struct f_field_at_958fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_956 = rt_956;
F->k_957 = k_957;
F->f_2557 = NULL;
F->f_2557 = (*(P122)rt_nil_check(F->rt_956)).fields_;
{ rt_int lo2560 = ((rt_int)2LL), hi2561 = F->k_957;
for (rt_int it2562 = lo2560; it2562 <= hi2561; it2562++) {
F->i_2559 = it2562;
F->f_2557 = (*(P1846)rt_nil_check(F->f_2557)).next_;
}
}
L_end_2558: ;
F->result_ = F->f_2557;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_961(struct f_greenc_1fr *up_, P174 x_959, P1846 f_960) {
  struct f_names_field_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_959 = x_959;
F->f_960 = f_960;
if ((G_NV((*(P174)rt_nil_check(F->x_959)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_959)).name_)), (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_960)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P174 f_item_for_966(struct f_greenc_1fr *up_, P174 e_962, P122 rt_963, rt_int k_964, rt_int p_965) {
  struct f_item_for_966fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_962 = e_962;
F->rt_963 = rt_963;
F->k_964 = k_964;
F->p_965 = p_965;
F->it_2563 = NULL;
F->it_2563 = (*(P174)rt_nil_check(F->e_962)).a_;
F->lab_2564 = NULL;
F->n_2565 = INT64_MIN;
F->n_2565 = ((rt_int)0LL);
while ((F->it_2563 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2563)).a_ == NULL)) {
F->n_2565 = rt_add(G_NV(F->n_2565), ((rt_int)1LL));
if ((G_NV(F->n_2565) == F->p_965)) {
F->result_ = (*(P174)rt_nil_check(F->it_2563)).b_;
goto ret_;
}
} else {
F->lab_2564 = (*(P174)rt_nil_check(F->it_2563)).a_;
while ((F->lab_2564 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->lab_2564)).flag_) == ((rt_int)1LL)) || f_names_field_961(F->up, (*(P174)rt_nil_check(F->lab_2564)).a_, f_field_at_958(F->up, F->rt_963, F->k_964)))) {
F->result_ = (*(P174)rt_nil_check(F->it_2563)).b_;
goto ret_;
}
F->lab_2564 = (*(P174)rt_nil_check(F->lab_2564)).next_;
}
L_end_2567: ;
}
F->it_2563 = (*(P174)rt_nil_check(F->it_2563)).next_;
}
L_end_2566: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_970(struct f_greenc_1fr *up_, P174 arm_967, rt_int v_968, int *res_969) {
  struct f_arm_holds_970fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_967 = arm_967;
F->v_968 = v_968;
F->res_969 = res_969;
F->l_2568 = NULL;
F->l_2568 = (*(P174)rt_nil_check(F->arm_967)).a_;
F->lo_2569 = INT64_MIN;
F->hi_2570 = INT64_MIN;
F->ok_2571 = INT_MIN;
(*F->res_969) = 0;
while ((F->l_2568 != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->l_2568)).a_, &F->lo_2569, &F->ok_2571);
 (void)rt_range(F->ok_2571, 0, 1);
F->hi_2570 = G_NV(F->lo_2569);
if (((*(P174)rt_nil_check(F->l_2568)).b_ != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->l_2568)).b_, &F->hi_2570, &F->ok_2571);
 (void)rt_range(F->ok_2571, 0, 1);
}
if (((F->v_968 >= G_NV(F->lo_2569)) && (F->v_968 <= G_NV(F->hi_2570)))) {
(*F->res_969) = 1;
}
F->l_2568 = (*(P174)rt_nil_check(F->l_2568)).next_;
}
L_end_2572: ;
ret_:

  return;
}

static void f_record_aggregate_974(struct f_greenc_1fr *up_, P174 e_971, P122 rt_972, P140 *r_973) {
  struct f_record_aggregate_974fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_971 = e_971;
F->rt_972 = rt_972;
F->r_973 = r_973;
F->it_2573 = NULL;
F->it_2573 = (*(P174)rt_nil_check(F->e_971)).a_;
F->lab_2574 = NULL;
F->vn_2575 = NULL;
F->a_2576 = NULL;
F->f_2577 = NULL;
F->g_2578 = NULL;
F->n_2579 = INT64_MIN;
F->n_2579 = f_field_count_489(F->up, F->rt_972);
F->done_2581.lo = ((rt_int)1LL); F->done_2581.hi = ((rt_int)200LL);
F->done_2581.lo2 = 1; F->done_2581.hi2 = 1;
F->done_2581.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2581));
for (rt_int i2582 = 0; i2582 < G_CNT(F->done_2581); i2582++) F->done_2581.p[i2582] = INT_MIN;
F->active_2583.lo = ((rt_int)1LL); F->active_2583.hi = ((rt_int)200LL);
F->active_2583.lo2 = 1; F->active_2583.hi2 = 1;
F->active_2583.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2583));
for (rt_int i2584 = 0; i2584 < G_CNT(F->active_2583); i2584++) F->active_2583.p[i2584] = INT_MIN;
F->dvs_2586.lo = ((rt_int)1LL); F->dvs_2586.hi = ((rt_int)200LL);
F->dvs_2586.lo2 = 1; F->dvs_2586.hi2 = 1;
F->dvs_2586.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2586));
for (rt_int i2587 = 0; i2587 < G_CNT(F->dvs_2586); i2587++) F->dvs_2586.p[i2587] = INT64_MIN;
F->order_2589.lo = ((rt_int)1LL); F->order_2589.hi = ((rt_int)200LL);
F->order_2589.lo2 = 1; F->order_2589.hi2 = 1;
F->order_2589.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2589));
for (rt_int i2590 = 0; i2590 < G_CNT(F->order_2589); i2590++) F->order_2589.p[i2590] = INT64_MIN;
F->norder_2591 = INT64_MIN;
F->norder_2591 = ((rt_int)0LL);
F->nung_2592 = INT64_MIN;
F->nung_2592 = ((rt_int)0LL);
F->k_2593 = INT64_MIN;
F->k_2593 = ((rt_int)0LL);
F->d_2594 = INT64_MIN;
F->d_2594 = ((rt_int)0LL);
F->npos_2595 = INT64_MIN;
F->npos_2595 = ((rt_int)0LL);
F->saved_2596 = NULL;
F->saved_2596 = F->up->code_136;
F->ct_2597 = NULL;
F->tmp_2598 = NULL;
F->parts_2599 = NULL;
F->named_2600 = INT_MIN;
F->named_2600 = 0;
F->ok_2601 = INT_MIN;
F->ok_2601 = 0;
F->holds_2602 = INT_MIN;
F->holds_2602 = 0;
if ((G_NV((*(P122)rt_nil_check(F->rt_972)).priv_) && (!f_inside_package_1051(F->up, (*(P122)rt_nil_check(F->rt_972)).decl_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_483(F->up, F->rt_972)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2579) > ((rt_int)200LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2577 = (*(P122)rt_nil_check(F->rt_972)).fields_;
{ rt_int lo2605 = ((rt_int)1LL), hi2606 = G_NV(F->n_2579);
for (rt_int it2607 = lo2605; it2607 <= hi2606; it2607++) {
F->i_2604 = it2607;
(*({ A2580 *ix2608 = &(F->done_2581); &ix2608->p[rt_index(F->i_2604, ix2608->lo, ix2608->hi) - ix2608->lo]; })) = 0;
(*({ A2580 *ix2609 = &(F->active_2583); &ix2609->p[rt_index(F->i_2604, ix2609->lo, ix2609->hi) - ix2609->lo]; })) = ((*(P1846)rt_nil_check(F->f_2577)).guard_ == NULL);
if (G_NV(({ A2580 ix2610 = F->active_2583; ix2610.p[rt_index(F->i_2604, ix2610.lo, ix2610.hi) - ix2610.lo]; }))) {
F->norder_2591 = rt_add(G_NV(F->norder_2591), ((rt_int)1LL));
(*({ A2588 *ix2611 = &(F->order_2589); &ix2611->p[rt_index(G_NV(F->norder_2591), ix2611->lo, ix2611->hi) - ix2611->lo]; })) = F->i_2604;
}
F->f_2577 = (*(P1846)rt_nil_check(F->f_2577)).next_;
}
}
L_end_2603: ;
F->nung_2592 = G_NV(F->norder_2591);
{ rt_int lo2614 = ((rt_int)1LL), hi2615 = G_NV(F->nung_2592);
for (rt_int it2616 = lo2614; it2616 <= hi2615; it2616++) {
F->p_2613 = it2616;
F->f_2577 = f_field_at_958(F->up, F->rt_972, G_NV(({ A2588 ix2618 = F->order_2589; ix2618.p[rt_index(F->p_2613, ix2618.lo, ix2618.hi) - ix2618.lo]; })));
if (G_NV((*(P1846)rt_nil_check(F->f_2577)).is_discr_)) {
F->vn_2575 = f_item_for_966(F->up, F->e_971, F->rt_972, G_NV(({ A2588 ix2620 = F->order_2589; ix2620.p[rt_index(F->p_2613, ix2620.lo, ix2620.hi) - ix2620.lo]; })), F->p_2613);
if ((F->vn_2575 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2577)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_987(F->up, F->vn_2575, &(*({ A2585 *ix2624 = &(F->dvs_2586); &ix2624->p[rt_index(G_NV(({ A2588 ix2623 = F->order_2589; ix2623.p[rt_index(F->p_2613, ix2623.lo, ix2623.hi) - ix2623.lo]; })), ix2624->lo, ix2624->hi) - ix2624->lo]; })), &F->ok_2601);
 (void)rt_range(F->ok_2601, 0, 1);
if (((!G_NV(F->ok_2601)) && f_is_enum_lit_789(F->up, F->vn_2575))) {
F->ok_2601 = 1;
(*({ A2585 *ix2626 = &(F->dvs_2586); &ix2626->p[rt_index(G_NV(({ A2588 ix2625 = F->order_2589; ix2625.p[rt_index(F->p_2613, ix2625.lo, ix2625.hi) - ix2625.lo]; })), ix2626->lo, ix2626->hi) - ix2626->lo]; })) = G_NV((*(P117)rt_nil_check(f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->vn_2575)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2601)) && ((*(P122)rt_nil_check(F->rt_972)).fields_ != NULL))) {
F->g_2578 = NULL;
F->d_2594 = ((rt_int)0LL);
F->a_2576 = NULL;
F->f_2577 = (*(P122)rt_nil_check(F->rt_972)).fields_;
while ((F->f_2577 != NULL)) {
F->g_2578 = (*(P1846)rt_nil_check(F->f_2577)).guard_;
while ((F->g_2578 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1971)rt_nil_check(F->g_2578)).disc_)), (*(P140)rt_nil_check((*(P1846)rt_nil_check(f_field_at_958(F->up, F->rt_972, G_NV(({ A2588 ix2630 = F->order_2589; ix2630.p[rt_index(F->p_2613, ix2630.lo, ix2630.hi) - ix2630.lo]; }))))).name_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P140)rt_nil_check((*(P1971)rt_nil_check(F->g_2578)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2578 = (*(P1971)rt_nil_check(F->g_2578)).next_;
}
L_end_2628: ;
F->f_2577 = (*(P1846)rt_nil_check(F->f_2577)).next_;
}
L_end_2627: ;
}
}
}
}
L_end_2612: ;
F->f_2577 = (*(P122)rt_nil_check(F->rt_972)).fields_;
{ rt_int lo2633 = ((rt_int)1LL), hi2634 = G_NV(F->n_2579);
for (rt_int it2635 = lo2633; it2635 <= hi2634; it2635++) {
F->i_2632 = it2635;
if (((*(P1846)rt_nil_check(F->f_2577)).guard_ != NULL)) {
F->holds_2602 = 1;
F->g_2578 = (*(P1846)rt_nil_check(F->f_2577)).guard_;
while ((F->g_2578 != NULL)) {
F->d_2594 = f_field_index_977(F->up, F->rt_972, (*(P140)rt_nil_check((*(P1971)rt_nil_check(F->g_2578)).disc_)));
if ((G_NV((*(P174)rt_nil_check((*(P1971)rt_nil_check(F->g_2578)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2576 = (*(P174)rt_nil_check((*(P1971)rt_nil_check(F->g_2578)).variant_)).b_;
while ((F->a_2576 != NULL)) {
if ((F->a_2576 != (*(P1971)rt_nil_check(F->g_2578)).arm_)) {
f_arm_holds_970(F->up, F->a_2576, G_NV(({ A2585 ix2639 = F->dvs_2586; ix2639.p[rt_index(G_NV(F->d_2594), ix2639.lo, ix2639.hi) - ix2639.lo]; })), &F->ok_2601);
 (void)rt_range(F->ok_2601, 0, 1);
if (G_NV(F->ok_2601)) {
F->holds_2602 = 0;
}
}
F->a_2576 = (*(P174)rt_nil_check(F->a_2576)).next_;
}
L_end_2637: ;
} else {
f_arm_holds_970(F->up, (*(P1971)rt_nil_check(F->g_2578)).arm_, G_NV(({ A2585 ix2641 = F->dvs_2586; ix2641.p[rt_index(G_NV(F->d_2594), ix2641.lo, ix2641.hi) - ix2641.lo]; })), &F->ok_2601);
 (void)rt_range(F->ok_2601, 0, 1);
if ((!G_NV(F->ok_2601))) {
F->holds_2602 = 0;
}
}
F->g_2578 = (*(P1971)rt_nil_check(F->g_2578)).next_;
}
L_end_2636: ;
if (G_NV(F->holds_2602)) {
(*({ A2580 *ix2642 = &(F->active_2583); &ix2642->p[rt_index(F->i_2632, ix2642->lo, ix2642->hi) - ix2642->lo]; })) = 1;
F->norder_2591 = rt_add(G_NV(F->norder_2591), ((rt_int)1LL));
(*({ A2588 *ix2643 = &(F->order_2589); &ix2643->p[rt_index(G_NV(F->norder_2591), ix2643->lo, ix2643->hi) - ix2643->lo]; })) = F->i_2632;
}
}
F->f_2577 = (*(P1846)rt_nil_check(F->f_2577)).next_;
}
}
L_end_2631: ;
f_ctype_492(F->up, F->rt_972, &F->ct_2597);
f_new_name_231(F->up, rt_g_lit("ag", 2), &F->tmp_2598);
F->up->code_136 = f_new_buffer_250(F->up);
while ((F->it_2573 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2573)).a_ == NULL)) {
if (G_NV(F->named_2600)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2595 = rt_add(G_NV(F->npos_2595), ((rt_int)1LL));
if ((G_NV(F->npos_2595) > G_NV(F->norder_2591))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_483(F->up, F->rt_972)));
}
F->k_2593 = G_NV(({ A2588 ix2645 = F->order_2589; ix2645.p[rt_index(G_NV(F->npos_2595), ix2645.lo, ix2645.hi) - ix2645.lo]; }));
f_agg_component_983(F->up, (*(P140)rt_nil_check(F->tmp_2598)), F->rt_972, G_NV(F->k_2593), (*(P174)rt_nil_check(F->it_2573)).b_, G_NV((*(P174)rt_nil_check(F->e_971)).line_));
(*({ A2580 *ix2646 = &(F->done_2581); &ix2646->p[rt_index(G_NV(F->k_2593), ix2646->lo, ix2646->hi) - ix2646->lo]; })) = 1;
} else {
F->named_2600 = 1;
F->lab_2574 = (*(P174)rt_nil_check(F->it_2573)).a_;
while ((F->lab_2574 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->lab_2574)).flag_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->it_2573)).next_ != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2650 = ((rt_int)1LL), hi2651 = G_NV(F->n_2579);
for (rt_int it2652 = lo2650; it2652 <= hi2651; it2652++) {
F->i_2649 = it2652;
if ((G_NV(({ A2580 ix2653 = F->active_2583; ix2653.p[rt_index(F->i_2649, ix2653.lo, ix2653.hi) - ix2653.lo]; })) && (!G_NV(({ A2580 ix2654 = F->done_2581; ix2654.p[rt_index(F->i_2649, ix2654.lo, ix2654.hi) - ix2654.lo]; }))))) {
f_agg_component_983(F->up, (*(P140)rt_nil_check(F->tmp_2598)), F->rt_972, F->i_2649, (*(P174)rt_nil_check(F->it_2573)).b_, G_NV((*(P174)rt_nil_check(F->e_971)).line_));
(*({ A2580 *ix2655 = &(F->done_2581); &ix2655->p[rt_index(F->i_2649, ix2655->lo, ix2655->hi) - ix2655->lo]; })) = 1;
}
}
}
L_end_2648: ;
} else {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2574)).a_)).kind_) != ((rt_int)5LL)) || ((*(P174)rt_nil_check(F->lab_2574)).b_ != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2593 = f_field_index_977(F->up, F->rt_972, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2574)).a_)).name_)));
if ((G_NV(F->k_2593) == ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_483(F->up, F->rt_972), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2574)).a_)).name_))));
}
if ((!G_NV(({ A2580 ix2656 = F->active_2583; ix2656.p[rt_index(G_NV(F->k_2593), ix2656.lo, ix2656.hi) - ix2656.lo]; })))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2574)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2580 ix2657 = F->done_2581; ix2657.p[rt_index(G_NV(F->k_2593), ix2657.lo, ix2657.hi) - ix2657.lo]; }))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2574)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_983(F->up, (*(P140)rt_nil_check(F->tmp_2598)), F->rt_972, G_NV(F->k_2593), (*(P174)rt_nil_check(F->it_2573)).b_, G_NV((*(P174)rt_nil_check(F->e_971)).line_));
(*({ A2580 *ix2658 = &(F->done_2581); &ix2658->p[rt_index(G_NV(F->k_2593), ix2658->lo, ix2658->hi) - ix2658->lo]; })) = 1;
}
F->lab_2574 = (*(P174)rt_nil_check(F->lab_2574)).next_;
}
L_end_2647: ;
}
F->it_2573 = (*(P174)rt_nil_check(F->it_2573)).next_;
}
L_end_2644: ;
F->f_2577 = (*(P122)rt_nil_check(F->rt_972)).fields_;
{ rt_int lo2661 = ((rt_int)1LL), hi2662 = G_NV(F->n_2579);
for (rt_int it2663 = lo2661; it2663 <= hi2662; it2663++) {
F->i_2660 = it2663;
if ((G_NV(({ A2580 ix2664 = F->active_2583; ix2664.p[rt_index(F->i_2660, ix2664.lo, ix2664.hi) - ix2664.lo]; })) && (!G_NV(({ A2580 ix2665 = F->done_2581; ix2665.p[rt_index(F->i_2660, ix2665.lo, ix2665.hi) - ix2665.lo]; }))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_971)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_483(F->up, F->rt_972)), rt_g_lit(": ", 2)), (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2577)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2577 = (*(P1846)rt_nil_check(F->f_2577)).next_;
}
}
L_end_2659: ;
f_captured_955(F->up, F->up->code_136, &F->parts_2599);
F->up->code_136 = F->saved_2596;
(*F->r_973) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2597))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2598))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2599))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_977(struct f_greenc_1fr *up_, P122 rt_975, rt_gstr name_976) {
  struct f_field_index_977fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_975 = rt_975;
F->name_976 = cp_rt_gstr(name_976);
F->f_2666 = NULL;
F->f_2666 = (*(P122)rt_nil_check(F->rt_975)).fields_;
F->k_2667 = INT64_MIN;
F->k_2667 = ((rt_int)1LL);
while ((F->f_2666 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2666)).name_)), F->name_976)) {
F->result_ = G_NV(F->k_2667);
goto ret_;
}
F->k_2667 = rt_add(G_NV(F->k_2667), ((rt_int)1LL));
F->f_2666 = (*(P1846)rt_nil_check(F->f_2666)).next_;
}
L_end_2668: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_983(struct f_greenc_1fr *up_, rt_gstr tmp_978, P122 rt_979, rt_int k_980, P174 v_981, rt_int line_982) {
  struct f_agg_component_983fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_978 = cp_rt_gstr(tmp_978);
F->rt_979 = rt_979;
F->k_980 = k_980;
F->v_981 = v_981;
F->line_982 = line_982;
F->f_2669 = NULL;
F->f_2669 = (*(P122)rt_nil_check(F->rt_979)).fields_;
F->vt_2670 = NULL;
F->x_2671 = NULL;
F->y_2672 = NULL;
{ rt_int lo2675 = ((rt_int)2LL), hi2676 = F->k_980;
for (rt_int it2677 = lo2675; it2677 <= hi2676; it2677++) {
F->i_2674 = it2677;
F->f_2669 = (*(P1846)rt_nil_check(F->f_2669)).next_;
}
}
L_end_2673: ;
f_gexpr_806(F->up, F->v_981, (*(P1846)rt_nil_check(F->f_2669)).t_, &F->vt_2670, &F->x_2671);
f_check_type_487(F->up, F->vt_2670, (*(P1846)rt_nil_check(F->f_2669)).t_, F->line_982);
if (((G_NV((*(P122)rt_nil_check((*(P1846)rt_nil_check(F->f_2669)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_475(F->up, (*(P1846)rt_nil_check(F->f_2669)).c_)))) {
f_copy_code_624(F->up, (*(P1846)rt_nil_check(F->f_2669)).t_, (*(P140)rt_nil_check(F->x_2671)), &F->y_2672);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_978, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2669)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->y_2672))), one_rt_gstr(59)));
} else {
if (f_composite_614(F->up, (*(P1846)rt_nil_check(F->f_2669)).t_)) {
f_init_storage_612(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_978, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2669)).name_)))), (*(P1846)rt_nil_check(F->f_2669)).t_, (*(P1846)rt_nil_check(F->f_2669)).c_);
}
f_assign_code_620(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_978, one_rt_gstr(46)), f_c_field_245(F->up, (*(P140)rt_nil_check((*(P1846)rt_nil_check(F->f_2669)).name_)))), (*(P1846)rt_nil_check(F->f_2669)).t_, (*(P140)rt_nil_check(F->x_2671)), (*(P1846)rt_nil_check(F->f_2669)).c_, &F->y_2672);
f_emit_255(F->up, (*(P140)rt_nil_check(F->y_2672)));
}
ret_:

  return;
}

static void f_static_choice_987(struct f_greenc_1fr *up_, P174 x_984, rt_int *v_985, int *ok_986) {
  struct f_static_choice_987fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_984 = x_984;
F->v_985 = v_985;
F->ok_986 = ok_986;
if (f_is_char_lit_787(F->up, F->x_984)) {
(*F->ok_986) = 1;
(*F->v_985) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2678 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_984)).name_)); ix2678.p[rt_index(((rt_int)1LL), ix2678.lo, ix2678.hi) - ix2678.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_504(F->up, F->x_984, &(*F->v_985), &(*F->ok_986));
 (void)rt_range((*F->ok_986), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_992(struct f_greenc_1fr *up_, P174 e_988, P122 arrt_989, P140 bounds_990, P140 *r_991) {
  struct f_array_aggregate_992fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_988 = e_988;
F->arrt_989 = arrt_989;
F->bounds_990 = bounds_990;
F->r_991 = r_991;
F->it_2679 = NULL;
F->it_2679 = (*(P174)rt_nil_check(F->e_988)).a_;
F->lab_2680 = NULL;
F->others_it_2681 = NULL;
F->np_2682 = INT64_MIN;
F->np_2682 = ((rt_int)0LL);
F->nnamed_2683 = INT64_MIN;
F->nnamed_2683 = ((rt_int)0LL);
F->clo_2684 = INT64_MIN;
F->clo_2684 = ((rt_int)0LL);
F->chi_2685 = INT64_MIN;
F->chi_2685 = ((rt_int)0LL);
F->v1_2686 = INT64_MIN;
F->v1_2686 = ((rt_int)0LL);
F->v2_2687 = INT64_MIN;
F->v2_2687 = ((rt_int)0LL);
F->all_static_2688 = INT_MIN;
F->all_static_2688 = 1;
F->ok_2689 = INT_MIN;
F->ok_2689 = 1;
F->ok2_2690 = INT_MIN;
F->ok2_2690 = 1;
F->first_choice_2691 = INT_MIN;
F->first_choice_2691 = 1;
F->vt_2692 = NULL;
F->ct_2693 = NULL;
F->et_2694 = NULL;
F->tmp_2695 = NULL;
F->lo_2696 = NULL;
F->hi_2697 = NULL;
F->v_2698 = NULL;
F->x_2699 = NULL;
F->parts_2700 = NULL;
F->fill_2701 = NULL;
F->rowb_2702 = NULL;
F->key_2703 = NULL;
F->khi_2704 = NULL;
F->saved_2705 = NULL;
F->saved_2705 = F->up->code_136;
f_ctype_492(F->up, F->arrt_989, &F->ct_2693);
f_elem_ctype_566(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, &F->et_2694);
f_new_name_231(F->up, rt_g_lit("ag", 2), &F->tmp_2695);
while ((F->it_2679 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2679)).a_ == NULL)) {
if (((G_NV(F->nnamed_2683) > ((rt_int)0LL)) || (F->others_it_2681 != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2682 = rt_add(G_NV(F->np_2682), ((rt_int)1LL));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2679)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P174)rt_nil_check(F->it_2679)).next_ != NULL) || ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2679)).a_)).next_ != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2681 = F->it_2679;
} else {
F->nnamed_2683 = rt_add(G_NV(F->nnamed_2683), ((rt_int)1LL));
F->lab_2680 = (*(P174)rt_nil_check(F->it_2679)).a_;
while ((F->lab_2680 != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2680)).a_, &F->v1_2686, &F->ok_2689);
 (void)rt_range(F->ok_2689, 0, 1);
F->v2_2687 = G_NV(F->v1_2686);
if (((*(P174)rt_nil_check(F->lab_2680)).b_ != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2680)).b_, &F->v2_2687, &F->ok2_2690);
 (void)rt_range(F->ok2_2690, 0, 1);
F->ok_2689 = (G_NV(F->ok_2689) && G_NV(F->ok2_2690));
}
if ((!G_NV(F->ok_2689))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2691) || (G_NV(F->v1_2686) < G_NV(F->clo_2684)))) {
F->clo_2684 = G_NV(F->v1_2686);
}
if ((G_NV(F->first_choice_2691) || (G_NV(F->v2_2687) > G_NV(F->chi_2685)))) {
F->chi_2685 = G_NV(F->v2_2687);
}
F->first_choice_2691 = 0;
F->lab_2680 = (*(P174)rt_nil_check(F->lab_2680)).next_;
}
L_end_2707: ;
}
F->it_2679 = (*(P174)rt_nil_check(F->it_2679)).next_;
}
L_end_2706: ;
if (((G_NV(F->np_2682) > ((rt_int)0LL)) && (G_NV(F->nnamed_2683) > ((rt_int)0LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2683) > ((rt_int)0LL))) {
f_check_choices_1000(F->up, F->e_988, F->arrt_989, (F->others_it_2681 != NULL));
}
if (((F->others_it_2681 == NULL) && (G_NV(F->np_2682) > ((rt_int)0LL)))) {
f_first_index_569(F->up, F->arrt_989, &F->lo_2696);
F->hi_2697 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lo_2696))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2682), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2681 == NULL) && (G_NV(F->nnamed_2683) > ((rt_int)0LL)))) {
F->lo_2696 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2684)))), rt_g_lit("LL)", 3)));
F->hi_2697 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2685)))), rt_g_lit("LL)", 3)));
} else if ((((*(P122)rt_nil_check(F->arrt_989)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_989)).tcons_)).hi_ != NULL))) {
F->lo_2696 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_989)).tcons_)).lo_;
F->hi_2697 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_989)).tcons_)).hi_;
} else if ((F->bounds_990 != NULL)) {
F->lo_2696 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_990))), rt_g_lit(").lo", 4)));
F->hi_2697 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_990))), rt_g_lit(").hi", 4)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P122)rt_nil_check(F->arrt_989)).dims_) > ((rt_int)1LL)) && (F->bounds_990 != NULL))) {
F->rowb_2702 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P140)rt_nil_check(F->bounds_990))), rt_g_lit(").lo2, (", 8)), (*(P140)rt_nil_check(F->bounds_990))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_136 = f_new_buffer_250(F->up);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2695)), rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check(F->lo_2696))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check(F->hi_2697))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2695)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->et_2694))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2682) > ((rt_int)0LL)) && (F->others_it_2681 == NULL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2682)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2682) > ((rt_int)0LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2682)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2681 != NULL)) {
F->up->agg_bounds_181 = F->rowb_2702;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->others_it_2681)).b_, (*(P122)rt_nil_check(F->arrt_989)).elem_, &F->vt_2692, &F->v_2698);
F->up->agg_bounds_181 = NULL;
f_check_type_487(F->up, F->vt_2692, (*(P122)rt_nil_check(F->arrt_989)).elem_, G_NV((*(P174)rt_nil_check(F->e_988)).line_));
f_ctype_492(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, &F->x_2699);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2699))), rt_g_lit(" o_ = ", 6)), (*(P140)rt_nil_check(F->v_2698))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit("); k_++) {", 10)));
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, rt_g_lit("o_", 2), &F->x_2699);
f_element_store_996(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2695)), rt_g_lit(".p[k_]", 6)), F->arrt_989, (*(P140)rt_nil_check(F->x_2699)));
f_emit_255(F->up, rt_g_lit("} }", 3));
}
F->it_2679 = (*(P174)rt_nil_check(F->e_988)).a_;
F->np_2682 = ((rt_int)0LL);
while (((F->it_2679 != NULL) && (F->it_2679 != F->others_it_2681))) {
F->up->agg_bounds_181 = F->rowb_2702;
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->it_2679)).b_, (*(P122)rt_nil_check(F->arrt_989)).elem_, &F->vt_2692, &F->v_2698);
F->up->agg_bounds_181 = NULL;
f_check_type_487(F->up, F->vt_2692, (*(P122)rt_nil_check(F->arrt_989)).elem_, G_NV((*(P174)rt_nil_check(F->e_988)).line_));
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, (*(P140)rt_nil_check(F->v_2698)), &F->x_2699);
if (((*(P174)rt_nil_check(F->it_2679)).a_ == NULL)) {
f_element_store_996(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2695)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2682)))), one_rt_gstr(93)), F->arrt_989, (*(P140)rt_nil_check(F->x_2699)));
F->np_2682 = rt_add(G_NV(F->np_2682), ((rt_int)1LL));
} else {
f_new_name_231(F->up, rt_g_lit("av", 2), &F->v_2698);
f_ctype_492(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, &F->parts_2700);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->parts_2700))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->v_2698))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2699))), one_rt_gstr(59)));
F->lab_2680 = (*(P174)rt_nil_check(F->it_2679)).a_;
while ((F->lab_2680 != NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->lab_2680)).a_, (*(P122)rt_nil_check(F->arrt_989)).idx_, &F->vt_2692, &F->key_2703);
f_check_type_487(F->up, F->vt_2692, (*(P122)rt_nil_check(F->arrt_989)).idx_, G_NV((*(P174)rt_nil_check(F->e_988)).line_));
F->khi_2704 = F->key_2703;
if (((*(P174)rt_nil_check(F->lab_2680)).b_ != NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->lab_2680)).b_, (*(P122)rt_nil_check(F->arrt_989)).idx_, &F->vt_2692, &F->khi_2704);
f_check_type_487(F->up, F->vt_2692, (*(P122)rt_nil_check(F->arrt_989)).idx_, G_NV((*(P174)rt_nil_check(F->e_988)).line_));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->key_2703))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->khi_2704))), rt_g_lit("; k_++) {", 9)));
f_copy_code_624(F->up, (*(P122)rt_nil_check(F->arrt_989)).elem_, (*(P140)rt_nil_check(F->v_2698)), &F->x_2699);
f_element_store_996(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2695)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".lo]", 4)), F->arrt_989, (*(P140)rt_nil_check(F->x_2699)));
f_emit_255(F->up, rt_g_lit("}", 1));
F->lab_2680 = (*(P174)rt_nil_check(F->lab_2680)).next_;
}
L_end_2709: ;
f_emit_255(F->up, rt_g_lit("}", 1));
}
F->it_2679 = (*(P174)rt_nil_check(F->it_2679)).next_;
}
L_end_2708: ;
if ((G_NV((*(P122)rt_nil_check(F->arrt_989)).dims_) > ((rt_int)1LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(") > 0) { ", 9)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".p[0].lo; ", 10)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_955(F->up, F->up->code_136, &F->parts_2700);
F->up->code_136 = F->saved_2705;
(*F->r_991) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2693))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2695))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2700))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2695))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_996(struct f_greenc_1fr *up_, rt_gstr lv_993, P122 arrt_994, rt_gstr v_995) {
  struct f_element_store_996fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_993 = cp_rt_gstr(lv_993);
F->arrt_994 = arrt_994;
F->v_995 = cp_rt_gstr(v_995);
F->x_2710 = NULL;
if (((((*(P122)rt_nil_check(F->arrt_994)).elemcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_994)).elemcons_)).lo_ != NULL)) && (!f_composite_614(F->up, (*(P122)rt_nil_check(F->arrt_994)).elem_)))) {
f_assign_code_620(F->up, F->lv_993, (*(P122)rt_nil_check(F->arrt_994)).elem_, F->v_995, (*(P122)rt_nil_check(F->arrt_994)).elemcons_, &F->x_2710);
f_emit_255(F->up, (*(P140)rt_nil_check(F->x_2710)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_993, rt_g_lit(" = ", 3)), F->v_995), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_1000(struct f_greenc_1fr *up_, P174 e_997, P122 arrt_998, int has_others_999) {
  struct f_check_choices_1000fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_997 = e_997;
F->arrt_998 = arrt_998;
F->has_others_999 = has_others_999;
F->a_2711 = NULL;
F->b_2712 = NULL;
F->lab_2713 = NULL;
F->lab2_2714 = NULL;
F->lo1_2715 = INT64_MIN;
F->lo1_2715 = ((rt_int)0LL);
F->hi1_2716 = INT64_MIN;
F->hi1_2716 = ((rt_int)0LL);
F->lo2_2717 = INT64_MIN;
F->lo2_2717 = ((rt_int)0LL);
F->hi2_2718 = INT64_MIN;
F->hi2_2718 = ((rt_int)0LL);
F->count_2719 = INT64_MIN;
F->count_2719 = ((rt_int)0LL);
F->ok_2720 = INT_MIN;
F->a_2711 = (*(P174)rt_nil_check(F->e_997)).a_;
while ((F->a_2711 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2711)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2711)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2713 = (*(P174)rt_nil_check(F->a_2711)).a_;
while ((F->lab_2713 != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2713)).a_, &F->lo1_2715, &F->ok_2720);
 (void)rt_range(F->ok_2720, 0, 1);
F->hi1_2716 = G_NV(F->lo1_2715);
if (((*(P174)rt_nil_check(F->lab_2713)).b_ != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab_2713)).b_, &F->hi1_2716, &F->ok_2720);
 (void)rt_range(F->ok_2720, 0, 1);
}
if ((G_NV(F->hi1_2716) >= G_NV(F->lo1_2715))) {
F->count_2719 = rt_add(G_NV(F->count_2719), rt_add(rt_sub(G_NV(F->hi1_2716), G_NV(F->lo1_2715)), ((rt_int)1LL)));
}
F->b_2712 = F->a_2711;
F->lab2_2714 = (*(P174)rt_nil_check(F->lab_2713)).next_;
while ((F->b_2712 != NULL)) {
if ((((*(P174)rt_nil_check(F->b_2712)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->b_2712)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2712 != F->a_2711)) {
F->lab2_2714 = (*(P174)rt_nil_check(F->b_2712)).a_;
}
while ((F->lab2_2714 != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab2_2714)).a_, &F->lo2_2717, &F->ok_2720);
 (void)rt_range(F->ok_2720, 0, 1);
F->hi2_2718 = G_NV(F->lo2_2717);
if (((*(P174)rt_nil_check(F->lab2_2714)).b_ != NULL)) {
f_static_choice_987(F->up, (*(P174)rt_nil_check(F->lab2_2714)).b_, &F->hi2_2718, &F->ok_2720);
 (void)rt_range(F->ok_2720, 0, 1);
}
if (((((G_NV(F->lo1_2715) <= G_NV(F->hi1_2716)) && (G_NV(F->lo2_2717) <= G_NV(F->hi2_2718))) && (G_NV(F->lo1_2715) <= G_NV(F->hi2_2718))) && (G_NV(F->lo2_2717) <= G_NV(F->hi1_2716)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_997)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2714 = (*(P174)rt_nil_check(F->lab2_2714)).next_;
}
L_end_2724: ;
}
F->b_2712 = (*(P174)rt_nil_check(F->b_2712)).next_;
F->lab2_2714 = NULL;
}
L_end_2723: ;
F->lab_2713 = (*(P174)rt_nil_check(F->lab_2713)).next_;
}
L_end_2722: ;
}
F->a_2711 = (*(P174)rt_nil_check(F->a_2711)).next_;
}
L_end_2721: ;
if (((!F->has_others_999) && f_static_bounds_479(F->up, (*(P122)rt_nil_check(F->arrt_998)).tcons_))) {
if ((G_NV(F->count_2719) != rt_add(rt_sub(G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_998)).tcons_)).mhi_), G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_998)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_997)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_483(F->up, F->arrt_998)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P174 f_actual_for_1004(struct f_greenc_1fr *up_, P174 args_1001, P1828 pm_1002, P1828 first_1003) {
  struct f_actual_for_1004fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1001 = args_1001;
F->pm_1002 = pm_1002;
F->first_1003 = first_1003;
F->a_2725 = NULL;
F->a_2725 = F->args_1001;
F->p_2726 = NULL;
F->p_2726 = F->first_1003;
while (((F->a_2725 != NULL) && ((*(P174)rt_nil_check(F->a_2725)).formal_ == NULL))) {
if ((F->p_2726 == F->pm_1002)) {
F->result_ = F->a_2725;
goto ret_;
}
F->p_2726 = (*(P1828)rt_nil_check(F->p_2726)).next_;
F->a_2725 = (*(P174)rt_nil_check(F->a_2725)).next_;
}
L_end_2727: ;
while ((F->a_2725 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2725)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2725)).formal_)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_1002)).name_))))) {
F->result_ = F->a_2725;
goto ret_;
}
F->a_2725 = (*(P174)rt_nil_check(F->a_2725)).next_;
}
L_end_2728: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1009(struct f_greenc_1fr *up_, P174 e_1005, int is_stmt_1006, P122 *t_1007, P140 *r_1008) {
  struct f_gcall_1009fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1005 = e_1005;
F->is_stmt_1006 = is_stmt_1006;
F->t_1007 = t_1007;
F->r_1008 = r_1008;
F->fn_2729 = NULL;
F->fn_2729 = (*(P174)rt_nil_check(F->e_1005)).a_;
F->nm_2730 = NULL;
F->y_2731 = NULL;
F->args_2732 = NULL;
F->lv_2733 = NULL;
F->v_2734 = NULL;
F->ct_2735 = NULL;
F->x_2736 = NULL;
F->a_2737 = NULL;
F->pm_2738 = NULL;
F->lt_2739 = NULL;
F->vt_2740 = NULL;
F->lc_2741 = NULL;
F->ro_2742 = INT_MIN;
f_expanded_824(F->up, F->fn_2729, &F->nm_2730);
if ((F->nm_2730 != NULL)) {
F->fn_2729 = F->nm_2730;
} else if ((((G_NV((*(P174)rt_nil_check(F->fn_2729)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_785(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).name_))))) {
if ((!f_type_attribute_783(F->up, (*(P117)rt_nil_check(f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).name_))))).t_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2730 = f_nn_302(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2729)).line_));
(*(P174)rt_nil_check(F->nm_2730)).name_ = (*(P174)rt_nil_check(F->fn_2729)).name_;
F->fn_2729 = F->nm_2730;
} else if (((G_NV((*(P174)rt_nil_check(F->fn_2729)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check(F->fn_2729)).a_))) {
F->nm_2730 = f_nn_302(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2729)).line_));
(*(P174)rt_nil_check(F->nm_2730)).name_ = (*(P174)rt_nil_check(F->fn_2729)).name_;
(*(P174)rt_nil_check(F->nm_2730)).tag_ = f_mk_228(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->fn_2729)).a_));
F->fn_2729 = F->nm_2730;
} else if (((((G_NV((*(P174)rt_nil_check(F->fn_2729)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1122(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).a_)).name_))))) {
F->y_2731 = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2729)).line_));
if (((F->y_2731 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1098(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), (*(P174)rt_nil_check(F->e_1005)).b_, F->is_stmt_1006, F->up->call_want_216, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), &F->y_2731);
F->up->call_task_ix_206 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).a_)).b_;
if ((F->is_stmt_1006 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2731)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1034(F->up, F->e_1005, F->y_2731, &(*F->t_1007), &(*F->r_1008));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->fn_2729)).kind_) != ((rt_int)5LL))) {
f_other_call_1186(F->up, F->e_1005, F->is_stmt_1006, &(*F->t_1007), &(*F->r_1008));
goto ret_;
}
F->y_2731 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)));
if (((*(P174)rt_nil_check(F->fn_2729)).tag_ != NULL)) {
F->y_2731 = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2729)).line_));
}
if ((F->y_2731 == NULL)) {
if (((*(P174)rt_nil_check(F->fn_2729)).tag_ != NULL)) {
F->up->text_io_qualified_201 = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1041(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), (*(P174)rt_nil_check(F->e_1005)).b_, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), F->is_stmt_1006, &(*F->t_1007), &(*F->r_1008));
F->up->text_io_qualified_201 = 0;
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)4LL))) && ((*(P174)rt_nil_check(F->fn_2729)).tag_ == NULL))) {
f_resolve_overload_1087(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), (*(P174)rt_nil_check(F->e_1005)).b_, F->is_stmt_1006, F->up->call_want_216, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), &F->y_2731);
if ((F->y_2731 == NULL)) {
f_builtin_1041(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), (*(P174)rt_nil_check(F->e_1005)).b_, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), F->is_stmt_1006, &(*F->t_1007), &(*F->r_1008));
goto ret_;
}
} else if (((G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1098(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), (*(P174)rt_nil_check(F->e_1005)).b_, F->is_stmt_1006, F->up->call_want_216, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), &F->y_2731);
}
if ((G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) == ((rt_int)10LL))) {
f_other_call_1186(F->up, F->e_1005, F->is_stmt_1006, &(*F->t_1007), &(*F->r_1008));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_2731)).kind_) != ((rt_int)4LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1006 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2731)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1006) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2731)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1005)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2729)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1034(F->up, F->e_1005, F->y_2731, &(*F->t_1007), &(*F->r_1008));
ret_:

  return;
}

static void f_out_check_1013(struct f_greenc_1fr *up_, rt_gstr lv_1010, P122 t_1011, P178 c_1012) {
  struct f_out_check_1013fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1010 = cp_rt_gstr(lv_1010);
F->t_1011 = t_1011;
F->c_1012 = c_1012;
if ((!f_bounded_475(F->up, F->c_1012))) {
goto ret_;
}
if ((F->up->post_checks_196 == NULL)) {
F->up->post_checks_196 = f_mk_228(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P122)rt_nil_check(F->t_1011)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_1011)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_196 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1010), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1012)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1012)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_453(F->up, F->t_1011)) {
F->up->post_checks_196 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1010), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1012)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1012)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1016(struct f_greenc_1fr *up_, P174 e_1014, P140 *r_1015) {
  struct f_var_path_1016fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1014 = e_1014;
F->r_1015 = r_1015;
F->pt_2743 = NULL;
F->v_2744 = NULL;
F->saved_2745 = NULL;
F->saved_2745 = F->up->code_136;
if ((G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) == ((rt_int)5LL))) {
(*F->r_1015) = (*(P174)rt_nil_check(F->e_1014)).name_;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) == ((rt_int)15LL))) {
f_var_path_1016(F->up, (*(P174)rt_nil_check(F->e_1014)).a_, &(*F->r_1015));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) != ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1014)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1015) = f_mk_228(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2743 = NULL;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_250(F->up);
{
{ rt_frame xf2747;
if (RT_TRY(xf2747)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->e_1014)).a_, NULL, &F->pt_2743, &F->v_2744);
RT_POP(xf2747);
} else {
RT_POP(xf2747);
int x2748 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2748);
if (0 || x2748 == ex_compile_error_108) {
F->pt_2743 = NULL;
} else {
rt_raise(x2748);
}
}
}

}
L_end_2746: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2745;
if (((F->pt_2743 == NULL) || (G_NV((*(P122)rt_nil_check(F->pt_2743)).kind_) == ((rt_int)8LL)))) {
(*F->r_1015) = f_mk_228(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1016(F->up, (*(P174)rt_nil_check(F->e_1014)).a_, &(*F->r_1015));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->r_1015))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1014)).kind_) == ((rt_int)9LL))) {
(*F->r_1015) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1015))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1014)).name_))));
} else if (((f_list_len_308(F->up, (*(P174)rt_nil_check(F->e_1014)).b_) == ((rt_int)1LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1014)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1015) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1015))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1014)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1015) = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1015))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1019(struct f_greenc_1fr *up_, rt_gstr p_1017, rt_gstr r_1018) {
  struct f_paths_overlap_1019fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1017 = cp_rt_gstr(p_1017);
F->r_1018 = cp_rt_gstr(r_1018);
F->i_2749 = INT64_MIN;
F->i_2749 = ({ rt_gstr at2750 = F->p_1017; at2750.lo; });
F->j_2751 = INT64_MIN;
F->j_2751 = ({ rt_gstr at2752 = F->r_1018; at2752.lo; });
for (;;) {
if (((G_NV(F->i_2749) > ({ rt_gstr at2754 = F->p_1017; at2754.hi; })) || (G_NV(F->j_2751) > ({ rt_gstr at2755 = F->r_1018; at2755.hi; })))) {
if (((G_NV(F->i_2749) > ({ rt_gstr at2756 = F->p_1017; at2756.hi; })) && (G_NV(F->j_2751) > ({ rt_gstr at2757 = F->r_1018; at2757.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2749) > ({ rt_gstr at2758 = F->p_1017; at2758.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2759 = F->r_1018; ix2759.p[rt_index(G_NV(F->j_2751), ix2759.lo, ix2759.hi) - ix2759.lo]; })) == 46) || (G_NV(({ rt_gstr ix2760 = F->r_1018; ix2760.p[rt_index(G_NV(F->j_2751), ix2760.lo, ix2760.hi) - ix2760.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2761 = F->p_1017; ix2761.p[rt_index(G_NV(F->i_2749), ix2761.lo, ix2761.hi) - ix2761.lo]; })) == 46) || (G_NV(({ rt_gstr ix2762 = F->p_1017; ix2762.p[rt_index(G_NV(F->i_2749), ix2762.lo, ix2762.hi) - ix2762.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2763 = F->p_1017; ix2763.p[rt_index(G_NV(F->i_2749), ix2763.lo, ix2763.hi) - ix2763.lo]; })) == 40) && (G_NV(({ rt_gstr ix2764 = F->r_1018; ix2764.p[rt_index(G_NV(F->j_2751), ix2764.lo, ix2764.hi) - ix2764.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2765 = F->p_1017; ix2765.p[rt_index(rt_add(G_NV(F->i_2749), ((rt_int)1LL)), ix2765.lo, ix2765.hi) - ix2765.lo]; })) == 42) || (G_NV(({ rt_gstr ix2766 = F->r_1018; ix2766.p[rt_index(rt_add(G_NV(F->j_2751), ((rt_int)1LL)), ix2766.lo, ix2766.hi) - ix2766.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2768 = F->p_1017; ix2768.p[rt_index(G_NV(F->i_2749), ix2768.lo, ix2768.hi) - ix2768.lo]; })) != 41)) {
F->i_2749 = rt_add(G_NV(F->i_2749), ((rt_int)1LL));
}
L_end_2767: ;
while ((G_NV(({ rt_gstr ix2770 = F->r_1018; ix2770.p[rt_index(G_NV(F->j_2751), ix2770.lo, ix2770.hi) - ix2770.lo]; })) != 41)) {
F->j_2751 = rt_add(G_NV(F->j_2751), ((rt_int)1LL));
}
L_end_2769: ;
} else if ((G_NV(({ rt_gstr ix2771 = F->p_1017; ix2771.p[rt_index(G_NV(F->i_2749), ix2771.lo, ix2771.hi) - ix2771.lo]; })) != G_NV(({ rt_gstr ix2772 = F->r_1018; ix2772.p[rt_index(G_NV(F->j_2751), ix2772.lo, ix2772.hi) - ix2772.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2749 = rt_add(G_NV(F->i_2749), ((rt_int)1LL));
F->j_2751 = rt_add(G_NV(F->j_2751), ((rt_int)1LL));
}
L_end_2753: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1022(struct f_greenc_1fr *up_, P174 n_1020, rt_gstr name_1021) {
  struct f_mentions_1022fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1020 = n_1020;
F->name_1021 = cp_rt_gstr(name_1021);
F->p_2773 = NULL;
F->p_2773 = F->n_1020;
while ((F->p_2773 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_2773)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2773)).name_)), F->name_1021))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1022(F->up, (*(P174)rt_nil_check(F->p_2773)).a_, F->name_1021) || f_mentions_1022(F->up, (*(P174)rt_nil_check(F->p_2773)).b_, F->name_1021))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1022(F->up, (*(P174)rt_nil_check(F->p_2773)).c_, F->name_1021) || f_mentions_1022(F->up, (*(P174)rt_nil_check(F->p_2773)).d_, F->name_1021))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1022(F->up, (*(P174)rt_nil_check(F->p_2773)).e_, F->name_1021)) {
F->result_ = 1;
goto ret_;
}
F->p_2773 = (*(P174)rt_nil_check(F->p_2773)).next_;
}
L_end_2774: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1025(struct f_greenc_1fr *up_, P174 n_1023, rt_gstr name_1024) {
  struct f_mentions_one_1025fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1023 = n_1023;
F->name_1024 = cp_rt_gstr(name_1024);
if (((G_NV((*(P174)rt_nil_check(F->n_1023)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1023)).name_)), F->name_1024))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1022(F->up, (*(P174)rt_nil_check(F->n_1023)).a_, F->name_1024) || f_mentions_1022(F->up, (*(P174)rt_nil_check(F->n_1023)).b_, F->name_1024))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1022(F->up, (*(P174)rt_nil_check(F->n_1023)).c_, F->name_1024) || f_mentions_1022(F->up, (*(P174)rt_nil_check(F->n_1023)).d_, F->name_1024)) || f_mentions_1022(F->up, (*(P174)rt_nil_check(F->n_1023)).e_, F->name_1024));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1029(struct f_greenc_1fr *up_, P174 e_1026, P117 y_1027, P174 a_1028) {
  struct f_check_aliasing_1029fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1026 = e_1026;
F->y_1027 = y_1027;
F->a_1028 = a_1028;
F->b_2775 = NULL;
F->b_2775 = (*(P174)rt_nil_check(F->e_1026)).b_;
F->p_2776 = NULL;
F->q_2777 = NULL;
F->r_2778 = NULL;
F->r_2778 = f_root_name_1228(F->up, F->a_1028);
F->v_2779 = NULL;
if ((F->r_2778 == NULL)) {
goto ret_;
}
f_var_path_1016(F->up, F->a_1028, &F->p_2776);
while ((F->b_2775 != NULL)) {
if (((F->b_2775 != F->a_1028) && (!eq_rt_gstr((*(P140)rt_nil_check(F->p_2776)), rt_g_lit("\?", 1))))) {
f_var_path_1016(F->up, F->b_2775, &F->q_2777);
if (((!eq_rt_gstr((*(P140)rt_nil_check(F->q_2777)), rt_g_lit("\?", 1))) && f_paths_overlap_1019(F->up, (*(P140)rt_nil_check(F->p_2776)), (*(P140)rt_nil_check(F->q_2777))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1026)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2775 = (*(P174)rt_nil_check(F->b_2775)).next_;
}
L_end_2780: ;
F->v_2779 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_)));
if (((((F->v_2779 != NULL) && (G_NV((*(P117)rt_nil_check(F->v_2779)).kind_) == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->y_1027)).decl_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1237(F->up, (*(P117)rt_nil_check(F->y_1027)).decl_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_)))))) {
if (((f_mentions_1022(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_))) || f_mentions_1022(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_)))) || f_mentions_1022(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).decl_)).e_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1026)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2778)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1027)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1034(struct f_greenc_1fr *up_, P174 e_1030, P117 y_1031, P122 *t_1032, P140 *r_1033) {
  struct f_gcall_with_1034fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1030 = e_1030;
F->y_1031 = y_1031;
F->t_1032 = t_1032;
F->r_1033 = r_1033;
F->args_2781 = NULL;
F->lv_2782 = NULL;
F->v_2783 = NULL;
F->x1_2784 = NULL;
F->x2_2785 = NULL;
F->a_2786 = NULL;
F->pm_2787 = NULL;
F->lt_2788 = NULL;
F->vt_2789 = NULL;
F->lc_2790 = NULL;
F->ro_2791 = INT_MIN;
f_check_call_rules_1248(F->up, F->e_1030, F->y_1031);
F->args_2781 = f_mk_228(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P117)rt_nil_check(F->y_1031)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1031)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1031)).access_path_ != NULL)) && ((*(P117)rt_nil_check(F->y_1031)).members_ != NULL)) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_206 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1030)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).name_))));
}
f_gexpr_806(F->up, F->up->call_task_ix_206, (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).t_, &F->vt_2789, &F->v_2783);
F->up->call_task_ix_206 = NULL;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).access_path_)), &F->lv_2782);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2784);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2785);
F->lv_2782 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lv_2782)), rt_g_lit("[rt_index(", 10)), (*(P140)rt_nil_check(F->v_2783))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x1_2784))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x2_2785))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->x1_2784))), one_rt_gstr(93)));
f_act_path_i_1141(F->up, (*(P117)rt_nil_check(F->y_1031)).members_, (*(P140)rt_nil_check(F->v_2783)), &F->x1_2784);
F->args_2781 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2782))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2784))), one_rt_gstr(41)));
} else if ((((G_NV((*(P117)rt_nil_check(F->y_1031)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1031)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1031)).access_path_ != NULL))) {
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).access_path_)), &F->lv_2782);
if (f_same_task_427(F->up, (*(P117)rt_nil_check(F->y_1031)).members_, F->up->cur_task_202)) {
F->args_2781 = F->lv_2782;
} else {
f_act_path_1137(F->up, (*(P117)rt_nil_check(F->y_1031)).members_, &F->x1_2784);
F->args_2781 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2782))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2784))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P117)rt_nil_check(F->y_1031)).level_) > ((rt_int)0LL))) {
f_link_to_746(F->up, G_NV((*(P117)rt_nil_check(F->y_1031)).level_), &F->args_2781);
}
F->pm_2787 = (*(P117)rt_nil_check(F->y_1031)).params_;
while ((F->pm_2787 != NULL)) {
F->a_2786 = f_actual_for_1004(F->up, (*(P174)rt_nil_check(F->e_1030)).b_, F->pm_2787, (*(P117)rt_nil_check(F->y_1031)).params_);
if ((({ rt_gstr at2793 = (*(P140)rt_nil_check(F->args_2781)); at2793.hi >= at2793.lo ? at2793.hi - at2793.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2781 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2781)), rt_g_lit(", ", 2)));
}
if ((F->a_2786 == NULL)) {
if ((((*(P1828)rt_nil_check(F->pm_2787)).dflt_ == NULL) || (G_NV((*(P1828)rt_nil_check(F->pm_2787)).mode_) != ((rt_int)1LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1030)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).name_))));
}
if (((*(P1828)rt_nil_check(F->pm_2787)).dsym_ != NULL)) {
f_access_of_743(F->up, (*(P1828)rt_nil_check(F->pm_2787)).dsym_, &F->v_2783);
f_copy_code_624(F->up, (*(P1828)rt_nil_check(F->pm_2787)).t_, (*(P140)rt_nil_check(F->v_2783)), &F->x1_2784);
F->v_2783 = F->x1_2784;
} else {
f_gexpr_806(F->up, (*(P1828)rt_nil_check(F->pm_2787)).dflt_, (*(P1828)rt_nil_check(F->pm_2787)).t_, &F->vt_2789, &F->v_2783);
}
F->args_2781 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2781)), (*(P140)rt_nil_check(F->v_2783))));
} else {
if ((((G_NV((*(P174)rt_nil_check(F->a_2786)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2786)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2786)).flag_) != G_NV((*(P1828)rt_nil_check(F->pm_2787)).mode_)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1030)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1828)rt_nil_check(F->pm_2787)).mode_) == ((rt_int)1LL))) {
f_gexpr_806(F->up, F->a_2786, (*(P1828)rt_nil_check(F->pm_2787)).t_, &F->vt_2789, &F->v_2783);
f_check_type_487(F->up, F->vt_2789, (*(P1828)rt_nil_check(F->pm_2787)).t_, G_NV((*(P174)rt_nil_check(F->e_1030)).line_));
if (((((*(P1828)rt_nil_check(F->pm_2787)).c_ != NULL) && ((*(P178)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).c_)).lo_ != NULL)) && ((G_NV((*(P122)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2783 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2783))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2781 = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2781)), (*(P140)rt_nil_check(F->v_2783))));
} else {
f_lvalue_762(F->up, F->a_2786, &F->lv_2782, &F->lt_2788, &F->lc_2790, &F->ro_2791);
 (void)rt_range(F->ro_2791, 0, 1);
if (G_NV(F->ro_2791)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1030)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2787)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1231(F->up, F->a_2786, G_NV((*(P174)rt_nil_check(F->e_1030)).line_));
f_check_type_487(F->up, F->lt_2788, (*(P1828)rt_nil_check(F->pm_2787)).t_, G_NV((*(P174)rt_nil_check(F->e_1030)).line_));
F->args_2781 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2781)), one_rt_gstr(38)), (*(P140)rt_nil_check(F->lv_2782))));
f_check_aliasing_1029(F->up, F->e_1030, F->y_1031, F->a_2786);
f_out_check_1013(F->up, (*(P140)rt_nil_check(F->lv_2782)), F->lt_2788, F->lc_2790);
}
}
F->pm_2787 = (*(P1828)rt_nil_check(F->pm_2787)).next_;
}
L_end_2792: ;
if (((f_list_len_308(F->up, (*(P174)rt_nil_check(F->e_1030)).b_) > ((rt_int)0LL)) && ((*(P117)rt_nil_check(F->y_1031)).params_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1030)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1032) = (*(P117)rt_nil_check(F->y_1031)).result_;
(*F->r_1033) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1031)).cname_)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2781))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1041(struct f_greenc_1fr *up_, rt_gstr name_1035, P174 args_1036, rt_int line_1037, int is_stmt_1038, P122 *t_1039, P140 *r_1040) {
  struct f_builtin_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1035 = cp_rt_gstr(name_1035);
F->args_1036 = args_1036;
F->line_1037 = line_1037;
F->is_stmt_1038 = is_stmt_1038;
F->t_1039 = t_1039;
F->r_1040 = r_1040;
F->aty_2794 = NULL;
F->lt_2795 = NULL;
F->a_2796 = NULL;
F->w_2797 = NULL;
F->lv_2798 = NULL;
F->lc_2799 = NULL;
F->ro_2800 = INT_MIN;
(*F->t_1039) = F->up->ty_void_161;
if ((((eq_rt_gstr(F->name_1035, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1035, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_201))) && (f_lookup_424(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_249(F->up, F->line_1037, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1035, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1035), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_217 != NULL) && (eq_rt_gstr(F->name_1035, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1035, rt_g_lit("GET", 3))))) {
f_fail_249(F->up, F->line_1037, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1035), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1035, rt_g_lit("PUT", 3))) {
if ((F->args_1036 == NULL)) {
f_fail_249(F->up, F->line_1037, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_806(F->up, F->args_1036, NULL, &F->aty_2794, &F->a_2796);
F->w_2797 = f_mk_228(F->up, rt_g_lit("0", 1));
if (((*(P174)rt_nil_check(F->args_1036)).next_ != NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->args_1036)).next_, F->up->ty_int_156, &F->lt_2795, &F->w_2797);
}
if (f_is_string_571(F->up, F->aty_2794)) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P140)rt_nil_check(F->a_2796))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2794)).kind_) == ((rt_int)11LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P140)rt_nil_check(F->a_2796))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2794)).kind_) == ((rt_int)1LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P140)rt_nil_check(F->a_2796))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2797))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2794)).kind_) == ((rt_int)2LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P140)rt_nil_check(F->a_2796))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2797))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2794)).kind_) == ((rt_int)16LL))) {
f_fail_249(F->up, F->line_1037, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2794)).kind_) == ((rt_int)3LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P140)rt_nil_check(F->a_2796))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2797))), rt_g_lit(", 0)", 4)));
} else {
f_fail_249(F->up, F->line_1037, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1035, rt_g_lit("GET", 3))) {
f_lvalue_762(F->up, F->args_1036, &F->lv_2798, &F->lt_2795, &F->lc_2799, &F->ro_2800);
 (void)rt_range(F->ro_2800, 0, 1);
if ((G_NV((*(P122)rt_nil_check(F->lt_2795)).kind_) == ((rt_int)11LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2798))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2795)).kind_) == ((rt_int)1LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2798))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2795)).kind_) == ((rt_int)3LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2798))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_249(F->up, F->line_1037, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1035, rt_g_lit("ABS", 3))) {
f_gexpr_806(F->up, F->args_1036, NULL, &(*F->t_1039), &F->a_2796);
if ((G_NV((*(P122)rt_nil_check((*F->t_1039))).kind_) == ((rt_int)1LL))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P140)rt_nil_check(F->a_2796))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_1039))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_1039))).kind_) == ((rt_int)16LL)))) {
(*F->r_1040) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->a_2796))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, F->line_1037, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1201(F->up, F->name_1035, F->args_1036, F->line_1037, &(*F->t_1039), &(*F->r_1040));
}
ret_:

  return;
}

static P117 f_lookup_path_1043(struct f_greenc_1fr *up_, rt_gstr p_1042) {
  struct f_lookup_path_1043fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1042 = cp_rt_gstr(p_1042);
F->y_2801 = NULL;
F->m_2802 = NULL;
{ rt_int lo2807 = ({ rt_gstr at2804 = F->p_1042; at2804.lo; }), hi2808 = ({ rt_gstr at2805 = F->p_1042; at2805.hi; });
for (rt_int it2809 = hi2808; it2809 >= lo2807; it2809--) {
F->i_2806 = it2809;
if ((G_NV(({ rt_gstr ix2810 = F->p_1042; ix2810.p[rt_index(F->i_2806, ix2810.lo, ix2810.hi) - ix2810.lo]; })) == 46)) {
F->y_2801 = f_lookup_path_1043(F->up, ({ rt_gstr sl2814 = F->p_1042; rt_int l_ = ({ rt_gstr at2813 = F->p_1042; at2813.lo; }), h_ = rt_sub(F->i_2806, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2814.lo, sl2814.hi); rt_index(h_, sl2814.lo, sl2814.hi); } sl2814.p += l_ - sl2814.lo; sl2814.lo = l_; sl2814.hi = h_; sl2814; }));
if ((F->y_2801 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P117)rt_nil_check(F->y_2801)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2801)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2802 = (*(P117)rt_nil_check(F->y_2801)).members_;
while ((F->m_2802 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2802)).name_)), ({ rt_gstr sl2817 = F->p_1042; rt_int l_ = rt_add(F->i_2806, ((rt_int)1LL)), h_ = ({ rt_gstr at2816 = F->p_1042; at2816.hi; }); if (l_ <= h_) { rt_index(l_, sl2817.lo, sl2817.hi); rt_index(h_, sl2817.lo, sl2817.hi); } sl2817.p += l_ - sl2817.lo; sl2817.lo = l_; sl2817.hi = h_; sl2817; })) && (!G_NV((*(P117)rt_nil_check(F->m_2802)).hidden_)))) {
F->result_ = F->m_2802;
goto ret_;
}
F->m_2802 = (*(P117)rt_nil_check(F->m_2802)).mnext_;
}
L_end_2815: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2803: ;
F->result_ = f_lookup_424(F->up, F->p_1042);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1045(struct f_greenc_1fr *up_, P174 e_1044) {
  struct f_is_package_1045fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1044 = e_1044;
F->y_2818 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_1044)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check(F->e_1044)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1044)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1044)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1044)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2818 = f_lookup_path_1043(F->up, f_path_of_345(F->up, F->e_1044));
if ((!(F->y_2818 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2818)).kind_) == ((rt_int)8LL)) || (G_NV((*(P117)rt_nil_check(F->y_2818)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_member_of_1049(struct f_greenc_1fr *up_, rt_gstr p_1046, rt_gstr name_1047, rt_int line_1048) {
  struct f_member_of_1049fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1046 = cp_rt_gstr(p_1046);
F->name_1047 = cp_rt_gstr(name_1047);
F->line_1048 = line_1048;
F->y_2819 = NULL;
F->y_2819 = f_lookup_path_1043(F->up, F->p_1046);
F->m_2820 = NULL;
if (((F->y_2819 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2820 = (*(P117)rt_nil_check(F->y_2819)).members_;
while ((F->m_2820 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2820)).name_)), F->name_1047) && (!G_NV((*(P117)rt_nil_check(F->m_2820)).hidden_)))) {
F->result_ = F->m_2820;
goto ret_;
}
F->m_2820 = (*(P117)rt_nil_check(F->m_2820)).mnext_;
}
L_end_2821: ;
if ((G_NV((*(P117)rt_nil_check(F->y_2819)).kind_) == ((rt_int)9LL))) {
F->m_2820 = f_lookup_entry_430(F->up, F->name_1047, F->y_2819);
if ((((F->m_2820 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2820)).kind_) == ((rt_int)10LL))) && f_same_task_427(F->up, (*(P117)rt_nil_check(F->m_2820)).members_, F->y_2819))) {
F->result_ = F->m_2820;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1051(struct f_greenc_1fr *up_, P174 p_1050) {
  struct f_inside_package_1051fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1050 = p_1050;
F->l_2822 = NULL;
F->l_2822 = F->up->pkg_stack_213;
if ((F->p_1050 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2822 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2822)).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_1050)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2822 = (*(P151)rt_nil_check(F->l_2822)).next_;
}
L_end_2823: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1054(struct f_greenc_1fr *up_, P117 y_1052, P117 *z_1053) {
  struct f_copy_sym_1054fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1052 = y_1052;
F->z_1053 = z_1053;
(*F->z_1053) = ({ R118 *cell2824 = rt_alloc(sizeof(R118)); *cell2824 = cp_R118(({ R118 ag2825; ag2825.kind_ = G_NV((*(P117)rt_nil_check(F->y_1052)).kind_); ag2825.name_ = (*(P117)rt_nil_check(F->y_1052)).name_; ag2825.t_ = (*(P117)rt_nil_check(F->y_1052)).t_; ag2825.c_ = (*(P117)rt_nil_check(F->y_1052)).c_; ag2825.access_path_ = (*(P117)rt_nil_check(F->y_1052)).access_path_; ag2825.cname_ = (*(P117)rt_nil_check(F->y_1052)).cname_; ag2825.ro_ = G_NV((*(P117)rt_nil_check(F->y_1052)).ro_); ag2825.mvalue_ = G_NV((*(P117)rt_nil_check(F->y_1052)).mvalue_); ag2825.hasmv_ = G_NV((*(P117)rt_nil_check(F->y_1052)).hasmv_); ag2825.decl_ = (*(P117)rt_nil_check(F->y_1052)).decl_; ag2825.params_ = (*(P117)rt_nil_check(F->y_1052)).params_; ag2825.result_ = (*(P117)rt_nil_check(F->y_1052)).result_; ag2825.depth_ = ((rt_int)0LL); ag2825.level_ = G_NV((*(P117)rt_nil_check(F->y_1052)).level_); ag2825.byref_ = G_NV((*(P117)rt_nil_check(F->y_1052)).byref_); ag2825.vrp_ = G_NV((*(P117)rt_nil_check(F->y_1052)).vrp_); ag2825.hidden_ = G_NV((*(P117)rt_nil_check(F->y_1052)).hidden_); ag2825.from_use_ = 0; ag2825.members_ = (*(P117)rt_nil_check(F->y_1052)).members_; ag2825.mnext_ = NULL; ag2825.chain_ = NULL; ag2825.stack_ = NULL; ag2825.flags_ = G_NV((*(P117)rt_nil_check(F->y_1052)).flags_); ag2825; })); (P117)cell2824; });
ret_:

  return;
}

static void f_complete_private_1057(struct f_greenc_1fr *up_, P122 ph_1055, P122 full_1056) {
  struct f_complete_private_1057fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1055 = ph_1055;
F->full_1056 = full_1056;
F->n_2826 = NULL;
F->n_2826 = (*(P122)rt_nil_check(F->ph_1055)).name_;
F->p_2827 = NULL;
F->p_2827 = (*(P122)rt_nil_check(F->ph_1055)).decl_;
as_R123(&(*(P122)rt_nil_check(F->ph_1055)), (*(P122)rt_nil_check(F->full_1056)));
(*(P122)rt_nil_check(F->ph_1055)).name_ = F->n_2826;
(*(P122)rt_nil_check(F->ph_1055)).priv_ = 1;
(*(P122)rt_nil_check(F->ph_1055)).decl_ = F->p_2827;
ret_:

  return;
}

static void f_package_spec_1059(struct f_greenc_1fr *up_, P174 e_1058) {
  struct f_package_spec_1059fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1058 = e_1058;
F->y_2828 = NULL;
F->m_2829 = NULL;
F->z_2830 = NULL;
F->saved_2831 = NULL;
F->saved_2831 = F->up->cur_pkg_214;
F->first_private_2832 = NULL;
F->y_2828 = f_new_sym_470(F->up, ((rt_int)8LL), (*(P174)rt_nil_check(F->e_1058)).name_);
(*(P117)rt_nil_check(F->y_2828)).decl_ = F->e_1058;
F->up->pkg_stack_213 = ({ R152 *cell2833 = rt_alloc(sizeof(R152)); *cell2833 = cp_R152(({ R152 ag2834; ag2834.s_ = (*(P174)rt_nil_check(F->e_1058)).name_; ag2834.next_ = F->up->pkg_stack_213; ag2834; })); (P151)cell2833; });
F->up->cur_pkg_214 = F->e_1058;
f_open_scope_466(F->up);
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->e_1058)).c_);
F->first_private_2832 = F->up->scope_stack_121;
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->e_1058)).d_);
F->m_2829 = F->up->scope_stack_121;
while (((F->m_2829 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2829)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2829)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->m_2829)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1058)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2829)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1054(F->up, F->m_2829, &F->z_2830);
(*(P117)rt_nil_check(F->z_2830)).hidden_ = (f_hidden_from_1062(F->up, F->m_2829, F->first_private_2832) || G_NV((*(P117)rt_nil_check(F->m_2829)).from_use_));
(*(P117)rt_nil_check(F->z_2830)).mnext_ = (*(P117)rt_nil_check(F->y_2828)).members_;
(*(P117)rt_nil_check(F->y_2828)).members_ = F->z_2830;
F->m_2829 = (*(P117)rt_nil_check(F->m_2829)).stack_;
}
L_end_2835: ;
f_close_scope_467(F->up);
F->up->pkg_stack_213 = (*(P151)rt_nil_check(F->up->pkg_stack_213)).next_;
F->up->cur_pkg_214 = F->saved_2831;
f_define_465(F->up, F->y_2828, G_NV((*(P174)rt_nil_check(F->e_1058)).line_));
ret_:

  return;
}

static int f_hidden_from_1062(struct f_greenc_1fr *up_, P117 m_1060, P117 first_private_1061) {
  struct f_hidden_from_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1060 = m_1060;
F->first_private_1061 = first_private_1061;
F->p_2836 = NULL;
F->p_2836 = F->up->scope_stack_121;
while ((F->p_2836 != NULL)) {
if ((F->p_2836 == F->first_private_1061)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2836 == F->m_1060)) {
F->result_ = 1;
goto ret_;
}
F->p_2836 = (*(P117)rt_nil_check(F->p_2836)).stack_;
}
L_end_2837: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1064(struct f_greenc_1fr *up_, P174 e_1063) {
  struct f_package_body_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1063 = e_1063;
F->saved_labels_2838 = NULL;
F->y_2839 = NULL;
F->y_2839 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).name_)));
F->m_2840 = NULL;
F->z_2841 = NULL;
F->saved_2842 = NULL;
F->saved_2842 = F->up->cur_pkg_214;
if (f_is_generic_name_1257(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).name_)))) {
f_attach_generic_body_1259(F->up, F->e_1063);
goto ret_;
}
if (((F->y_2839 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2839)).kind_) != ((rt_int)8LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1063)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_213 = ({ R152 *cell2843 = rt_alloc(sizeof(R152)); *cell2843 = cp_R152(({ R152 ag2844; ag2844.s_ = (*(P174)rt_nil_check(F->e_1063)).name_; ag2844.next_ = F->up->pkg_stack_213; ag2844; })); (P151)cell2843; });
F->up->cur_pkg_214 = (*(P117)rt_nil_check(F->y_2839)).decl_;
f_open_scope_466(F->up);
F->m_2840 = (*(P117)rt_nil_check(F->y_2839)).members_;
while ((F->m_2840 != NULL)) {
f_copy_sym_1054(F->up, F->m_2840, &F->z_2841);
(*(P117)rt_nil_check(F->z_2841)).hidden_ = 0;
f_define_465(F->up, F->z_2841, G_NV((*(P174)rt_nil_check(F->e_1063)).line_));
F->m_2840 = (*(P117)rt_nil_check(F->m_2840)).mnext_;
}
L_end_2845: ;
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->e_1063)).c_);
F->m_2840 = (*(P117)rt_nil_check(F->y_2839)).members_;
while ((F->m_2840 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2840)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2840)).kind_) == ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2840)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2841 = ({ A116 ix2847 = F->up->table_119; ix2847.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2840)).name_))), ix2847.lo, ix2847.hi) - ix2847.lo]; });
while ((F->z_2841 != NULL)) {
if (((*(P117)rt_nil_check(F->z_2841)).cname_ == (*(P117)rt_nil_check(F->m_2840)).cname_)) {
(*(P117)rt_nil_check(F->m_2840)).decl_ = (*(P117)rt_nil_check(F->z_2841)).decl_;
}
F->z_2841 = (*(P117)rt_nil_check(F->z_2841)).chain_;
}
L_end_2848: ;
if ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2840)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1063)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2840)).name_))), rt_g_lit(" in package body ", 17)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).name_))));
}
}
F->m_2840 = (*(P117)rt_nil_check(F->m_2840)).mnext_;
}
L_end_2846: ;
F->saved_labels_2838 = F->up->body_labels_191;
f_label_body_685(F->up, (*(P174)rt_nil_check(F->e_1063)).d_, (*(P174)rt_nil_check(F->e_1063)).e_);
f_guarded_705(F->up, NULL, (*(P174)rt_nil_check(F->e_1063)).d_, (*(P174)rt_nil_check(F->e_1063)).e_, G_NV((*(P174)rt_nil_check(F->e_1063)).line_));
F->up->body_labels_191 = F->saved_labels_2838;
f_close_scope_467(F->up);
F->up->pkg_stack_213 = (*(P151)rt_nil_check(F->up->pkg_stack_213)).next_;
F->up->cur_pkg_214 = F->saved_2842;
ret_:

  return;
}

static int f_use_visible_1066(struct f_greenc_1fr *up_, P117 old_1065) {
  struct f_use_visible_1066fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1065 = old_1065;
if ((F->old_1065 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P117)rt_nil_check(F->old_1065)).depth_) < G_NV(F->up->depth_120)) && (G_NV((*(P117)rt_nil_check(F->old_1065)).kind_) != ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->old_1065)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1068(struct f_greenc_1fr *up_, P174 e_1067) {
  struct f_use_clause_1068fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1067 = e_1067;
F->n_2849 = NULL;
F->n_2849 = (*(P174)rt_nil_check(F->e_1067)).a_;
F->y_2850 = NULL;
F->m_2851 = NULL;
F->z_2852 = NULL;
F->old_2853 = NULL;
F->clash_2854 = INT_MIN;
while ((F->n_2849 != NULL)) {
F->y_2850 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2849)).name_)));
if ((F->y_2850 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->n_2849)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2849)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_2850)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2850)).kind_) != ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->n_2849)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2849)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2850)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P117)rt_nil_check(F->y_2850)).members_ == NULL))) {
F->z_2852 = f_new_sym_470(F->up, ((rt_int)2LL), f_mk_228(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P117)rt_nil_check(F->z_2852)).t_ = F->up->ty_void_161;
f_define_465(F->up, F->z_2852, G_NV((*(P174)rt_nil_check(F->n_2849)).line_));
} else {
F->m_2851 = (*(P117)rt_nil_check(F->y_2850)).members_;
while ((F->m_2851 != NULL)) {
if ((!G_NV((*(P117)rt_nil_check(F->m_2851)).hidden_))) {
F->old_2853 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2851)).name_)));
if ((!f_overloadable_441(F->up, F->m_2851))) {
if ((F->old_2853 == NULL)) {
f_copy_sym_1054(F->up, F->m_2851, &F->z_2852);
(*(P117)rt_nil_check(F->z_2852)).from_use_ = 1;
f_define_465(F->up, F->z_2852, G_NV((*(P174)rt_nil_check(F->n_2849)).line_));
} else if (((G_NV((*(P117)rt_nil_check(F->old_2853)).from_use_) && (G_NV((*(P117)rt_nil_check(F->old_2853)).depth_) == G_NV(F->up->depth_120))) && (!f_same_entity_1073(F->up, F->old_2853, F->m_2851)))) {
(*(P117)rt_nil_check(F->old_2853)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_2854 = 0;
F->z_2852 = ({ A116 ix2857 = F->up->table_119; ix2857.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2851)).name_))), ix2857.lo, ix2857.hi) - ix2857.lo]; });
while ((F->z_2852 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2852)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2851)).name_))) && f_overloadable_441(F->up, F->z_2852)) && f_visible_sym_422(F->up, F->z_2852))) {
if (f_same_entity_1073(F->up, F->z_2852, F->m_2851)) {
F->clash_2854 = 1;
} else if (((((!G_NV((*(P117)rt_nil_check(F->z_2852)).from_use_)) && f_same_types_456(F->up, (*(P117)rt_nil_check(F->z_2852)).params_, (*(P117)rt_nil_check(F->m_2851)).params_)) && f_same_444(F->up, (*(P117)rt_nil_check(F->z_2852)).result_, (*(P117)rt_nil_check(F->m_2851)).result_)) && ((G_NV((*(P117)rt_nil_check(F->z_2852)).kind_) != ((rt_int)7LL)) || f_same_444(F->up, (*(P117)rt_nil_check(F->z_2852)).t_, (*(P117)rt_nil_check(F->m_2851)).t_)))) {
F->clash_2854 = 1;
}
}
F->z_2852 = (*(P117)rt_nil_check(F->z_2852)).chain_;
}
L_end_2858: ;
if (((!G_NV(F->clash_2854)) && f_usable_over_1070(F->up, F->old_2853))) {
f_copy_sym_1054(F->up, F->m_2851, &F->z_2852);
(*(P117)rt_nil_check(F->z_2852)).from_use_ = 1;
f_define_465(F->up, F->z_2852, G_NV((*(P174)rt_nil_check(F->n_2849)).line_));
}
}
}
F->m_2851 = (*(P117)rt_nil_check(F->m_2851)).mnext_;
}
L_end_2856: ;
}
F->n_2849 = (*(P174)rt_nil_check(F->n_2849)).next_;
}
L_end_2855: ;
ret_:

  return;
}

static int f_usable_over_1070(struct f_greenc_1fr *up_, P117 old_1069) {
  struct f_usable_over_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1069 = old_1069;
if ((F->old_1069 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_441(F->up, F->old_1069) || G_NV((*(P117)rt_nil_check(F->old_1069)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1073(struct f_greenc_1fr *up_, P117 a_1071, P117 b_1072) {
  struct f_same_entity_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1071 = a_1071;
F->b_1072 = b_1072;
if ((G_NV((*(P117)rt_nil_check(F->a_1071)).kind_) != G_NV((*(P117)rt_nil_check(F->b_1072)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1071)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1072)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1071)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1072)).cname_)));
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1071)).access_path_ != NULL) && ((*(P117)rt_nil_check(F->b_1072)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1071)).access_path_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1072)).access_path_)));
goto ret_;
}
F->result_ = (((*(P117)rt_nil_check(F->a_1071)).t_ == (*(P117)rt_nil_check(F->b_1072)).t_) && ((*(P117)rt_nil_check(F->a_1071)).decl_ == (*(P117)rt_nil_check(F->b_1072)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1078(struct f_greenc_1fr *up_, P117 y_1074, P174 args_1075, P122 want_1076, int *ok_1077) {
  struct f_fits_1078fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1074 = y_1074;
F->args_1075 = args_1075;
F->want_1076 = want_1076;
F->ok_1077 = ok_1077;
F->pm_2859 = NULL;
F->pm_2859 = (*(P117)rt_nil_check(F->y_1074)).params_;
F->a_2860 = NULL;
F->t_2861 = NULL;
F->c_2862 = NULL;
F->v_2863 = NULL;
F->ro_2864 = INT_MIN;
F->saved_2865 = NULL;
F->saved_2865 = F->up->code_136;
F->used_2866 = INT64_MIN;
F->used_2866 = ((rt_int)0LL);
(*F->ok_1077) = 1;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_250(F->up);
{
{ rt_frame xf2868;
if (RT_TRY(xf2868)) {
while ((G_NV((*F->ok_1077)) && (F->pm_2859 != NULL))) {
F->a_2860 = f_actual_for_1004(F->up, F->args_1075, F->pm_2859, (*(P117)rt_nil_check(F->y_1074)).params_);
if ((F->a_2860 == NULL)) {
(*F->ok_1077) = ((*(P1828)rt_nil_check(F->pm_2859)).dflt_ != NULL);
} else {
F->used_2866 = rt_add(G_NV(F->used_2866), ((rt_int)1LL));
if ((((G_NV((*(P174)rt_nil_check(F->a_2860)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2860)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2860)).flag_) != G_NV((*(P1828)rt_nil_check(F->pm_2859)).mode_)))) {
(*F->ok_1077) = 0;
} else if ((G_NV((*(P1828)rt_nil_check(F->pm_2859)).mode_) == ((rt_int)1LL))) {
f_gexpr_806(F->up, F->a_2860, (*(P1828)rt_nil_check(F->pm_2859)).t_, &F->t_2861, &F->v_2863);
(*F->ok_1077) = (f_same_444(F->up, F->t_2861, (*(P1828)rt_nil_check(F->pm_2859)).t_) || ((G_NV((*(P122)rt_nil_check(F->t_2861)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check((*(P1828)rt_nil_check(F->pm_2859)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_762(F->up, F->a_2860, &F->v_2863, &F->t_2861, &F->c_2862, &F->ro_2864);
 (void)rt_range(F->ro_2864, 0, 1);
(*F->ok_1077) = f_same_444(F->up, F->t_2861, (*(P1828)rt_nil_check(F->pm_2859)).t_);
}
}
F->pm_2859 = (*(P1828)rt_nil_check(F->pm_2859)).next_;
}
L_end_2870: ;
if ((G_NV(F->used_2866) != f_list_len_308(F->up, F->args_1075))) {
(*F->ok_1077) = 0;
}
if (((G_NV((*F->ok_1077)) && (F->want_1076 != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1074)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1077) = (f_same_444(F->up, (*(P117)rt_nil_check(F->y_1074)).result_, F->want_1076) || (G_NV((*(P122)rt_nil_check(F->want_1076)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2868);
} else {
RT_POP(xf2868);
int x2869 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2869);
if (0 || x2869 == ex_compile_error_108) {
(*F->ok_1077) = 0;
} else {
rt_raise(x2869);
}
}
}

}
L_end_2867: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2865;
ret_:

  return;
}

static int f_is_builtin_1080(struct f_greenc_1fr *up_, rt_gstr n_1079) {
  struct f_is_builtin_1080fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1079 = cp_rt_gstr(n_1079);
F->result_ = (((eq_rt_gstr(F->n_1079, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1079, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1079, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1079, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1087(struct f_greenc_1fr *up_, rt_gstr name_1081, P174 args_1082, int is_stmt_1083, P122 want_1084, rt_int line_1085, P117 *y_1086) {
  struct f_resolve_overload_1087fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1081 = cp_rt_gstr(name_1081);
F->args_1082 = args_1082;
F->is_stmt_1083 = is_stmt_1083;
F->want_1084 = want_1084;
F->line_1085 = line_1085;
F->y_1086 = y_1086;
F->z_2871 = NULL;
F->w_2872 = NULL;
F->first_2873 = NULL;
F->found_2874 = NULL;
F->n_2875 = INT64_MIN;
F->n_2875 = ((rt_int)0LL);
F->ok_2876 = INT_MIN;
F->hidden_2877 = INT_MIN;
{ rt_int lo2880 = ((rt_int)1LL), hi2881 = ((rt_int)2LL);
for (rt_int it2882 = lo2880; it2882 <= hi2881; it2882++) {
F->pass_2879 = it2882;
F->z_2871 = ({ A116 ix2883 = F->up->table_119; ix2883.p[rt_index(f_hash_417(F->up, F->name_1081), ix2883.lo, ix2883.hi) - ix2883.lo]; });
F->n_2875 = ((rt_int)0LL);
F->found_2874 = NULL;
while ((F->z_2871 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2871)).name_)), F->name_1081) && ((G_NV((*(P117)rt_nil_check(F->z_2871)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2871)).kind_) == ((rt_int)4LL)))) && f_visible_sym_422(F->up, F->z_2871))) {
if ((F->first_2873 == NULL)) {
F->first_2873 = F->z_2871;
}
F->hidden_2877 = 0;
F->w_2872 = ({ A116 ix2885 = F->up->table_119; ix2885.p[rt_index(f_hash_417(F->up, F->name_1081), ix2885.lo, ix2885.hi) - ix2885.lo]; });
while ((F->w_2872 != F->z_2871)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->w_2872)).name_)), F->name_1081) && ((G_NV((*(P117)rt_nil_check(F->w_2872)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->w_2872)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1090(F->up, F->w_2872, F->z_2871)) {
F->hidden_2877 = 1;
}
}
F->w_2872 = (*(P117)rt_nil_check(F->w_2872)).chain_;
}
L_end_2886: ;
if (((!G_NV(F->hidden_2877)) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2871)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1083))) {
if ((F->pass_2879 == ((rt_int)1LL))) {
f_fits_1078(F->up, F->z_2871, F->args_1082, F->want_1084, &F->ok_2876);
 (void)rt_range(F->ok_2876, 0, 1);
} else {
f_fits_1078(F->up, F->z_2871, F->args_1082, NULL, &F->ok_2876);
 (void)rt_range(F->ok_2876, 0, 1);
}
if (G_NV(F->ok_2876)) {
if ((F->found_2874 != NULL)) {
f_fail_249(F->up, F->line_1085, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1081), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2874 = F->z_2871;
}
}
}
F->z_2871 = (*(P117)rt_nil_check(F->z_2871)).chain_;
}
L_end_2884: ;
if ((F->found_2874 != NULL)) {
(*F->y_1086) = F->found_2874;
goto ret_;
}
}
}
L_end_2878: ;
if (f_is_builtin_1080(F->up, F->name_1081)) {
(*F->y_1086) = NULL;
goto ret_;
}
F->z_2871 = ({ A116 ix2887 = F->up->table_119; ix2887.p[rt_index(f_hash_417(F->up, F->name_1081), ix2887.lo, ix2887.hi) - ix2887.lo]; });
while ((F->z_2871 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2871)).name_)), F->name_1081) && ((G_NV((*(P117)rt_nil_check(F->z_2871)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2871)).kind_) == ((rt_int)4LL))))) {
F->n_2875 = rt_add(G_NV(F->n_2875), ((rt_int)1LL));
}
F->z_2871 = (*(P117)rt_nil_check(F->z_2871)).chain_;
}
L_end_2888: ;
if ((G_NV(F->n_2875) > ((rt_int)1LL))) {
f_fail_249(F->up, F->line_1085, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1081), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1086) = F->first_2873;
ret_:

  return;
}

static int f_same_profile_1090(struct f_greenc_1fr *up_, P117 a_1088, P117 b_1089) {
  struct f_same_profile_1090fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1088 = a_1088;
F->b_1089 = b_1089;
if (((!f_same_types_456(F->up, (*(P117)rt_nil_check(F->a_1088)).params_, (*(P117)rt_nil_check(F->b_1089)).params_)) || (!f_same_444(F->up, (*(P117)rt_nil_check(F->a_1088)).result_, (*(P117)rt_nil_check(F->b_1089)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1088)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1089)).cname_ != NULL))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1088)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1089)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_459(F->up, (*(P117)rt_nil_check(F->a_1088)).params_, (*(P117)rt_nil_check(F->b_1089)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1098(struct f_greenc_1fr *up_, rt_gstr p_1091, rt_gstr name_1092, P174 args_1093, int is_stmt_1094, P122 want_1095, rt_int line_1096, P117 *y_1097) {
  struct f_resolve_member_overload_1098fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1091 = cp_rt_gstr(p_1091);
F->name_1092 = cp_rt_gstr(name_1092);
F->args_1093 = args_1093;
F->is_stmt_1094 = is_stmt_1094;
F->want_1095 = want_1095;
F->line_1096 = line_1096;
F->y_1097 = y_1097;
F->pk_2889 = NULL;
F->pk_2889 = f_lookup_path_1043(F->up, F->p_1091);
F->z_2890 = NULL;
F->found_2891 = NULL;
F->n_2892 = INT64_MIN;
F->n_2892 = ((rt_int)0LL);
F->ok_2893 = INT_MIN;
if ((F->pk_2889 == NULL)) {
goto ret_;
}
{ rt_int lo2896 = ((rt_int)1LL), hi2897 = ((rt_int)2LL);
for (rt_int it2898 = lo2896; it2898 <= hi2897; it2898++) {
F->pass_2895 = it2898;
F->z_2890 = (*(P117)rt_nil_check(F->pk_2889)).members_;
F->n_2892 = ((rt_int)0LL);
F->found_2891 = NULL;
while ((F->z_2890 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2890)).name_)), F->name_1092) && ((G_NV((*(P117)rt_nil_check(F->z_2890)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2890)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P117)rt_nil_check(F->z_2890)).hidden_)))) {
F->n_2892 = rt_add(G_NV(F->n_2892), ((rt_int)1LL));
if (((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2890)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1094)) {
if ((F->pass_2895 == ((rt_int)1LL))) {
f_fits_1078(F->up, F->z_2890, F->args_1093, F->want_1095, &F->ok_2893);
 (void)rt_range(F->ok_2893, 0, 1);
} else {
f_fits_1078(F->up, F->z_2890, F->args_1093, NULL, &F->ok_2893);
 (void)rt_range(F->ok_2893, 0, 1);
}
if (G_NV(F->ok_2893)) {
if (((F->found_2891 != NULL) && (!f_same_profile_1090(F->up, F->found_2891, F->z_2890)))) {
f_fail_249(F->up, F->line_1096, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1092), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2891 = F->z_2890;
}
}
}
F->z_2890 = (*(P117)rt_nil_check(F->z_2890)).mnext_;
}
L_end_2899: ;
if ((F->found_2891 != NULL)) {
(*F->y_1097) = F->found_2891;
goto ret_;
}
}
}
L_end_2894: ;
if ((G_NV(F->n_2892) > ((rt_int)1LL))) {
f_fail_249(F->up, F->line_1096, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1092), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1104(struct f_greenc_1fr *up_, P174 e_1099, P122 want_1100, P122 *t_1101, P140 *r_1102, int *done_1103) {
  struct f_user_operator_1104fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1099 = e_1099;
F->want_1100 = want_1100;
F->t_1101 = t_1101;
F->r_1102 = r_1102;
F->done_1103 = done_1103;
F->op_2900 = NULL;
F->op_2900 = (*(P174)rt_nil_check(F->e_1099)).name_;
F->negate_2901 = INT_MIN;
F->negate_2901 = 0;
F->y_2902 = NULL;
F->call_2903 = NULL;
F->fname_2904 = NULL;
F->l_2905 = NULL;
F->rt_2906 = NULL;
F->ok_2907 = INT_MIN;
(*F->done_1103) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check(F->op_2900)), rt_g_lit("/=", 2))) {
F->op_2900 = f_mk_228(F->up, rt_g_lit("=", 1));
F->negate_2901 = 1;
}
if ((f_lookup_424(F->up, (*(P140)rt_nil_check(F->op_2900))) == NULL)) {
goto ret_;
}
F->l_2905 = f_nn_302(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).a_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).a_)).line_));
as_R175(&(*(P174)rt_nil_check(F->l_2905)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).a_)));
(*(P174)rt_nil_check(F->l_2905)).next_ = NULL;
(*(P174)rt_nil_check(F->l_2905)).formal_ = NULL;
(*(P174)rt_nil_check(F->l_2905)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_1099)).kind_) == ((rt_int)7LL))) {
F->rt_2906 = f_nn_302(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).b_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).b_)).line_));
as_R175(&(*(P174)rt_nil_check(F->rt_2906)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1099)).b_)));
(*(P174)rt_nil_check(F->rt_2906)).next_ = NULL;
(*(P174)rt_nil_check(F->rt_2906)).formal_ = NULL;
(*(P174)rt_nil_check(F->rt_2906)).flag_ = ((rt_int)0LL);
(*(P174)rt_nil_check(F->l_2905)).next_ = F->rt_2906;
}
F->y_2902 = ({ A116 ix2908 = F->up->table_119; ix2908.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check(F->op_2900))), ix2908.lo, ix2908.hi) - ix2908.lo]; });
while ((F->y_2902 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2902)).name_)), (*(P140)rt_nil_check(F->op_2900))) && (G_NV((*(P117)rt_nil_check(F->y_2902)).kind_) == ((rt_int)3LL))) && f_visible_sym_422(F->up, F->y_2902))) {
f_fits_1078(F->up, F->y_2902, F->l_2905, NULL, &F->ok_2907);
 (void)rt_range(F->ok_2907, 0, 1);
if (G_NV(F->ok_2907)) {
F->fname_2904 = f_nn_302(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_1099)).line_));
(*(P174)rt_nil_check(F->fname_2904)).name_ = F->op_2900;
F->call_2903 = f_nn_302(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_1099)).line_));
(*(P174)rt_nil_check(F->call_2903)).a_ = F->fname_2904;
(*(P174)rt_nil_check(F->call_2903)).b_ = F->l_2905;
F->up->call_want_216 = NULL;
f_gcall_with_1034(F->up, F->call_2903, F->y_2902, &(*F->t_1101), &(*F->r_1102));
if (G_NV(F->negate_2901)) {
(*F->r_1102) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check((*F->r_1102)))), one_rt_gstr(41)));
}
(*F->done_1103) = 1;
goto ret_;
}
}
F->y_2902 = (*(P117)rt_nil_check(F->y_2902)).chain_;
}
L_end_2909: ;
ret_:

  return;
}

static void f_task_p_1106(struct f_greenc_1fr *up_, P174 *res_1105) {
  struct f_task_p_1106fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1105 = res_1105;
F->x_2910 = NULL;
F->r_2911 = NULL;
F->line_2912 = INT64_MIN;
F->line_2912 = f_cur_line_309(F->up);
f_expect_kw_324(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_311(F->up, rt_g_lit("BODY", 4))) {
f_skip_322(F->up);
F->x_2910 = f_nn_302(F->up, ((rt_int)51LL), G_NV(F->line_2912));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_2910)).name_);
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
f_body_part_393(F->up, F->x_2910);
} else {
F->x_2910 = f_nn_302(F->up, ((rt_int)50LL), G_NV(F->line_2912));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_2910)).name_);
if (((f_at_kw_311(F->up, rt_g_lit("IS", 2)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1253(F->up, F->x_2910, &(*F->res_1105));
goto ret_;
}
if (f_at_kw_311(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_2910)).flag_ = ((rt_int)3LL);
f_name_p_360(F->up, &(*(P174)rt_nil_check(F->x_2910)).b_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1105) = F->x_2910;
goto ret_;
}
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
f_discrete_range_p_364(F->up, &(*(P174)rt_nil_check(F->x_2910)).a_);
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2910)).a_)).kind_) == ((rt_int)5LL))) {
F->r_2911 = f_nn_302(F->up, ((rt_int)80LL), G_NV(F->line_2912));
(*(P174)rt_nil_check(F->r_2911)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_2910)).a_)).name_;
(*(P174)rt_nil_check(F->x_2910)).a_ = F->r_2911;
}
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_311(F->up, rt_g_lit("IS", 2))) {
f_skip_322(F->up);
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_2910)).c_);
if (f_at_kw_311(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_322(F->up);
f_decl_part_381(F->up, &(*(P174)rt_nil_check(F->x_2910)).d_);
}
f_expect_kw_324(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_skip_322(F->up);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1105) = F->x_2910;
ret_:

  return;
}

static void f_entry_p_1108(struct f_greenc_1fr *up_, P174 *res_1107) {
  struct f_entry_p_1108fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1107 = res_1107;
F->x_2913 = NULL;
f_expect_kw_324(F->up, rt_g_lit("ENTRY", 5));
F->x_2913 = f_nn_302(F->up, ((rt_int)52LL), f_cur_line_309(F->up));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_2913)).name_);
if ((f_at_op_313(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_322(F->up);
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->x_2913)).b_);
} else {
f_discrete_range_p_364(F->up, &(*(P174)rt_nil_check(F->x_2913)).b_);
}
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_formal_part_387(F->up, &(*(P174)rt_nil_check(F->x_2913)).a_);
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1107) = F->x_2913;
ret_:

  return;
}

static void f_accept_p_1110(struct f_greenc_1fr *up_, P174 *res_1109) {
  struct f_accept_p_1110fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1109 = res_1109;
F->x_2914 = NULL;
f_expect_kw_324(F->up, rt_g_lit("ACCEPT", 6));
F->x_2914 = f_nn_302(F->up, ((rt_int)34LL), f_cur_line_309(F->up));
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->x_2914)).name_);
if ((f_at_op_313(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_319(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->x_2914)).c_);
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_formal_part_387(F->up, &(*(P174)rt_nil_check(F->x_2914)).a_);
}
if (f_at_kw_311(F->up, rt_g_lit("DO", 2))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_2914)).flag_ = ((rt_int)1LL);
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_2914)).b_);
f_expect_kw_324(F->up, rt_g_lit("END", 3));
if (f_at_kind_315(F->up, ((rt_int)1LL))) {
f_skip_322(F->up);
}
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1109) = F->x_2914;
ret_:

  return;
}

static void f_delay_p_1112(struct f_greenc_1fr *up_, P174 *res_1111) {
  struct f_delay_p_1112fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1111 = res_1111;
F->x_2915 = NULL;
f_expect_kw_324(F->up, rt_g_lit("DELAY", 5));
F->x_2915 = f_nn_302(F->up, ((rt_int)32LL), f_cur_line_309(F->up));
f_simple_expr_347(F->up, &(*(P174)rt_nil_check(F->x_2915)).a_);
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1111) = F->x_2915;
ret_:

  return;
}

static void f_designators_1114(struct f_greenc_1fr *up_, P174 *res_1113) {
  struct f_designators_1114fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1113 = res_1113;
F->head_2916 = NULL;
F->tail_2917 = NULL;
F->n_2918 = NULL;
for (;;) {
f_name_p_360(F->up, &F->n_2918);
f_append_306(F->up, &F->head_2916, &F->tail_2917, F->n_2918);
if ((!f_at_op_313(F->up, rt_g_lit(",", 1)))) {
goto L_end_2919;
}
f_skip_322(F->up);
}
L_end_2919: ;
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*F->res_1113) = F->head_2916;
ret_:

  return;
}

static void f_parse_task_statement_1116(struct f_greenc_1fr *up_, P174 *res_1115) {
  struct f_parse_task_statement_1116fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1115 = res_1115;
F->x_2920 = NULL;
F->alt_2921 = NULL;
F->head_2922 = NULL;
F->tail_2923 = NULL;
F->line_2924 = INT64_MIN;
F->line_2924 = f_cur_line_309(F->up);
(*F->res_1115) = NULL;
if (f_at_kw_311(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_322(F->up);
F->x_2920 = f_nn_302(F->up, ((rt_int)33LL), G_NV(F->line_2924));
f_designators_1114(F->up, &(*(P174)rt_nil_check(F->x_2920)).a_);
(*F->res_1115) = F->x_2920;
} else if (f_at_kw_311(F->up, rt_g_lit("ABORT", 5))) {
f_skip_322(F->up);
F->x_2920 = f_nn_302(F->up, ((rt_int)36LL), G_NV(F->line_2924));
f_designators_1114(F->up, &(*(P174)rt_nil_check(F->x_2920)).a_);
(*F->res_1115) = F->x_2920;
} else if (f_at_kw_311(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1112(F->up, &(*F->res_1115));
} else if (f_at_kw_311(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1110(F->up, &(*F->res_1115));
} else if (f_at_kw_311(F->up, rt_g_lit("SELECT", 6))) {
f_skip_322(F->up);
F->x_2920 = f_nn_302(F->up, ((rt_int)35LL), G_NV(F->line_2924));
for (;;) {
F->alt_2921 = f_nn_302(F->up, ((rt_int)64LL), f_cur_line_309(F->up));
if (f_at_kw_311(F->up, rt_g_lit("WHEN", 4))) {
f_skip_322(F->up);
f_expr_339(F->up, &(*(P174)rt_nil_check(F->alt_2921)).a_);
f_expect_op_326(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_311(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1110(F->up, &(*(P174)rt_nil_check(F->alt_2921)).b_);
} else if (f_at_kw_311(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1112(F->up, &(*(P174)rt_nil_check(F->alt_2921)).b_);
} else {
f_perror_321(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_400(F->up, &(*(P174)rt_nil_check(F->alt_2921)).c_);
f_append_306(F->up, &F->head_2922, &F->tail_2923, F->alt_2921);
if ((!f_at_kw_311(F->up, rt_g_lit("OR", 2)))) {
goto L_end_2925;
}
f_skip_322(F->up);
}
L_end_2925: ;
if (f_at_kw_311(F->up, rt_g_lit("ELSE", 4))) {
f_skip_322(F->up);
(*(P174)rt_nil_check(F->x_2920)).flag_ = ((rt_int)1LL);
f_statements_400(F->up, &(*(P174)rt_nil_check(F->x_2920)).b_);
}
f_expect_kw_324(F->up, rt_g_lit("END", 3));
f_expect_kw_324(F->up, rt_g_lit("SELECT", 6));
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_2920)).a_ = F->head_2922;
(*F->res_1115) = F->x_2920;
}
ret_:

  return;
}

static void f_path_at_1120(struct f_greenc_1fr *up_, rt_int level_1117, rt_gstr field_1118, P140 *r_1119) {
  struct f_path_at_1120fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1117 = level_1117;
F->field_1118 = cp_rt_gstr(field_1118);
F->r_1119 = r_1119;
if ((F->level_1117 <= ((rt_int)0LL))) {
(*F->r_1119) = f_mk_228(F->up, F->field_1118);
goto ret_;
}
(*F->r_1119) = f_mk_228(F->up, rt_g_lit("F", 1));
{ rt_int lo2928 = ((rt_int)1LL), hi2929 = rt_sub(G_NV(F->up->cur_level_139), F->level_1117);
for (rt_int it2930 = lo2928; it2930 <= hi2929; it2930++) {
F->i_2927 = it2930;
(*F->r_1119) = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1119))), rt_g_lit("->up", 4)));
}
}
L_end_2926: ;
(*F->r_1119) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1119))), rt_g_lit("->", 2)), F->field_1118));
ret_:

  return;
}

static int f_is_task_name_1122(struct f_greenc_1fr *up_, rt_gstr n_1121) {
  struct f_is_task_name_1122fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1121 = cp_rt_gstr(n_1121);
F->y_2931 = NULL;
F->y_2931 = f_lookup_424(F->up, F->n_1121);
if ((!(F->y_2931 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2931)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1126(struct f_greenc_1fr *up_, P174 e_1123, P117 *y_1124, P174 *ix_1125) {
  struct f_task_of_1126fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1123 = e_1123;
F->y_1124 = y_1124;
F->ix_1125 = ix_1125;
F->n_2932 = NULL;
F->n_2932 = F->e_1123;
F->a_2933 = NULL;
(*F->ix_1125) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1123)).kind_) == ((rt_int)5LL))) {
F->a_2933 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1123)).name_)));
if (((F->a_2933 != NULL) && ((G_NV((*(P117)rt_nil_check(F->a_2933)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->a_2933)).flags_) == ((rt_int)4LL))))) {
f_task_of_1126(F->up, (*(P117)rt_nil_check(F->a_2933)).decl_, &(*F->y_1124), &(*F->ix_1125));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->e_1123)).kind_) == ((rt_int)8LL))) {
F->n_2932 = (*(P174)rt_nil_check(F->e_1123)).a_;
(*F->ix_1125) = (*(P174)rt_nil_check(F->e_1123)).b_;
}
if ((G_NV((*(P174)rt_nil_check(F->n_2932)).kind_) != ((rt_int)5LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1123)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1124) = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2932)).name_)));
if ((((*F->y_1124) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1124))).kind_) != ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1123)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2932)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1125) != NULL) && ((*(P117)rt_nil_check((*F->y_1124))).c_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1123)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2932)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1129(struct f_greenc_1fr *up_, P117 t_1127, P140 *r_1128) {
  struct f_own_index_1129fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1127 = t_1127;
F->r_1128 = r_1128;
F->y_2934 = NULL;
F->y_2934 = f_lookup_424(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->t_1127)).cname_))));
if ((F->y_2934 == NULL)) {
f_fail_249(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_743(F->up, F->y_2934, &(*F->r_1128));
ret_:

  return;
}

static void f_member_1134(struct f_greenc_1fr *up_, P117 y_1130, rt_gstr arr_1131, rt_gstr i_1132, P140 *r_1133) {
  struct f_member_1134fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1130 = y_1130;
F->arr_1131 = cp_rt_gstr(arr_1131);
F->i_1132 = cp_rt_gstr(i_1132);
F->r_1133 = r_1133;
F->lo_2935 = NULL;
F->hi_2936 = NULL;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1130)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1130)).cname_)), rt_g_lit("lo", 2)), &F->lo_2935);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1130)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1130)).cname_)), rt_g_lit("hi", 2)), &F->hi_2936);
(*F->r_1133) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1131, rt_g_lit("[rt_index(", 10)), F->i_1132), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_2935))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_2936))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_2935))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1137(struct f_greenc_1fr *up_, P117 y_1135, P140 *r_1136) {
  struct f_act_path_1137fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1135 = y_1135;
F->r_1136 = r_1136;
F->i_2937 = NULL;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1135)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1135)).cname_)), rt_g_lit("act", 3)), &(*F->r_1136));
if (((*(P117)rt_nil_check(F->y_1135)).c_ != NULL)) {
f_own_index_1129(F->up, F->y_1135, &F->i_2937);
f_member_1134(F->up, F->y_1135, (*(P140)rt_nil_check((*F->r_1136))), (*(P140)rt_nil_check(F->i_2937)), &(*F->r_1136));
}
ret_:

  return;
}

static void f_act_path_i_1141(struct f_greenc_1fr *up_, P117 y_1138, rt_gstr i_1139, P140 *r_1140) {
  struct f_act_path_i_1141fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1138 = y_1138;
F->i_1139 = cp_rt_gstr(i_1139);
F->r_1140 = r_1140;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1138)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1138)).cname_)), rt_g_lit("act", 3)), &(*F->r_1140));
f_member_1134(F->up, F->y_1138, (*(P140)rt_nil_check((*F->r_1140))), F->i_1139, &(*F->r_1140));
ret_:

  return;
}

static void f_entry_path_1145(struct f_greenc_1fr *up_, P117 y_1142, rt_gstr i_1143, P140 *r_1144) {
  struct f_entry_path_1145fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1142 = y_1142;
F->i_1143 = cp_rt_gstr(i_1143);
F->r_1144 = r_1144;
F->own_2938 = NULL;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1142)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1142)).access_path_)), &(*F->r_1144));
if (((((*(P117)rt_nil_check(F->y_1142)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1142)).members_)).c_ != NULL)) && (!G_NV((*(P117)rt_nil_check(F->y_1142)).ro_)))) {
if ((({ rt_gstr at2939 = F->i_1143; at2939.hi >= at2939.lo ? at2939.hi - at2939.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1129(F->up, (*(P117)rt_nil_check(F->y_1142)).members_, &F->own_2938);
f_member_1134(F->up, (*(P117)rt_nil_check(F->y_1142)).members_, (*(P140)rt_nil_check((*F->r_1144))), (*(P140)rt_nil_check(F->own_2938)), &(*F->r_1144));
} else {
f_member_1134(F->up, (*(P117)rt_nil_check(F->y_1142)).members_, (*(P140)rt_nil_check((*F->r_1144))), F->i_1143, &(*F->r_1144));
}
}
ret_:

  return;
}

static void f_declare_slot_1148(struct f_greenc_1fr *up_, rt_gstr ctype_name_1146, rt_gstr field_1147) {
  struct f_declare_slot_1148fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1146 = cp_rt_gstr(ctype_name_1146);
F->field_1147 = cp_rt_gstr(field_1147);
if (G_NV(F->up->in_func_138)) {
f_put_to_253(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1146), one_rt_gstr(32)), F->field_1147), one_rt_gstr(59)));
} else {
f_put_to_253(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1146), one_rt_gstr(32)), F->field_1147), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1150(struct f_greenc_1fr *up_, P174 e_1149) {
  struct f_task_decl_1150fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1149 = e_1149;
if ((G_NV((*(P174)rt_nil_check(F->e_1149)).kind_) == ((rt_int)50LL))) {
f_task_spec_1163(F->up, F->e_1149);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1149)).kind_) == ((rt_int)51LL))) {
f_task_body_1167(F->up, F->e_1149);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1149)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1165(F->up, F->e_1149);
} else {
f_generic_decl_1255(F->up, F->e_1149);
}
ret_:

  return;
}

static void f_family_arg_struct_1151(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1151fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_204))) {
F->up->famarg_done_204 = 1;
f_put_to_253(F->up, F->up->out_types_128, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1156(struct f_greenc_1fr *up_, P174 b_1152, P117 y_1153, P140 x_1154, int per_member_1155) {
  struct f_family_bounds_1156fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1152 = b_1152;
F->y_1153 = y_1153;
F->x_1154 = x_1154;
F->per_member_1155 = per_member_1155;
F->lo_2940 = NULL;
F->hi_2941 = NULL;
F->v_2942 = NULL;
F->d_2943 = NULL;
F->mlo_2944 = NULL;
F->mhi_2945 = NULL;
F->vt_2946 = NULL;
F->c_2947 = NULL;
(*(P117)rt_nil_check(F->y_1153)).c_ = f_new_cons_473(F->up);
if (F->per_member_1155) {
f_declare_slot_1148(F->up, rt_g_lit("rt_entry **", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).access_path_)));
} else {
f_declare_slot_1148(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).access_path_)));
}
f_declare_slot_1148(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1148(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1153)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).cname_)), rt_g_lit("flo", 3)), &F->lo_2940);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1153)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1153)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2941);
f_discrete_bounds_522(F->up, F->b_1152, NULL, &F->vt_2946, &F->v_2942, &F->d_2943);
(*(P117)rt_nil_check(F->y_1153)).t_ = F->vt_2946;
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lo_2940)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_2942))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_2943))), one_rt_gstr(59)));
if (F->per_member_1155) {
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("lo", 2)), &F->mlo_2944);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("hi", 2)), &F->mhi_2945);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1154)), rt_g_lit(" = rt_alloc(sizeof(rt_entry *) * (size_t)(", 42)), (*(P140)rt_nil_check(F->mhi_2945))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->mlo_2944))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->mhi_2945))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_2944))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int m_ = 0; m_ <= ", 26), (*(P140)rt_nil_check(F->mhi_2945))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_2944))), rt_g_lit("; m_++) { ", 10)), (*(P140)rt_nil_check(F->x_1154))), rt_g_lit("[m_] = rt_alloc(sizeof(rt_entry) * (size_t)(", 44)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit(" + 1 : 1)); for (rt_int k_ = 0; k_ <= ", 38)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1154))), rt_g_lit("[m_][k_]); }", 12)));
goto ret_;
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1154)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_2941))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2940))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1154))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1161(struct f_greenc_1fr *up_, P117 y_1157, rt_gstr base_1158, rt_gstr i_1159, P140 *r_1160) {
  struct f_entry_family_slot_1161fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1157 = y_1157;
F->base_1158 = cp_rt_gstr(base_1158);
F->i_1159 = cp_rt_gstr(i_1159);
F->r_1160 = r_1160;
F->lo_2948 = NULL;
F->hi_2949 = NULL;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1157)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1157)).cname_)), rt_g_lit("flo", 3)), &F->lo_2948);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1157)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1157)).cname_)), rt_g_lit("fhi", 3)), &F->hi_2949);
(*F->r_1160) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1158, rt_g_lit("[rt_index(", 10)), F->i_1159), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_2948))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_2949))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_2948))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1163(struct f_greenc_1fr *up_, P174 e_1162) {
  struct f_task_spec_1163fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1162 = e_1162;
F->has_procs_2950 = INT_MIN;
F->has_procs_2950 = 0;
F->saved_defer_2951 = INT_MIN;
F->fields_2952 = NULL;
F->ct_2953 = NULL;
F->pm_2954 = NULL;
F->fp_2955 = NULL;
F->flo_2956 = NULL;
F->fhi_2957 = NULL;
F->y_2958 = NULL;
F->m_2959 = NULL;
F->z_2960 = NULL;
F->saved_2961 = NULL;
F->saved_2961 = F->up->cur_task_202;
F->d_2962 = NULL;
F->v_2963 = NULL;
F->p_2964 = NULL;
F->p2_2965 = NULL;
F->vt_2966 = NULL;
F->r_2967 = NULL;
F->y_2958 = f_new_sym_470(F->up, ((rt_int)9LL), (*(P174)rt_nil_check(F->e_1162)).name_);
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1162)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2958)).cname_);
(*(P117)rt_nil_check(F->y_2958)).decl_ = F->e_1162;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_2958)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_2958)).access_path_ = (*(P117)rt_nil_check(F->y_2958)).cname_;
f_declare_slot_1148(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("decl", 4)));
if (((*(P174)rt_nil_check(F->e_1162)).a_ != NULL)) {
(*(P117)rt_nil_check(F->y_2958)).c_ = f_new_cons_473(F->up);
f_declare_slot_1148(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1148(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1148(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_522(F->up, (*(P174)rt_nil_check(F->e_1162)).a_, NULL, &F->vt_2966, &F->v_2963, &F->d_2962);
(*(P117)rt_nil_check(F->y_2958)).t_ = F->vt_2966;
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("lo", 2)), &F->p_2964);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2964)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_2963))), one_rt_gstr(59)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("hi", 2)), &F->p2_2965);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p2_2965)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_2962))), one_rt_gstr(59)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("act", 3)), &F->v_2963);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_2963)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P140)rt_nil_check(F->p2_2965))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->p_2964))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->p2_2965))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->p_2964))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1151(F->up);
} else {
f_declare_slot_1148(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_253(F->up, F->up->out_protos_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_138))) {
f_put_to_253(F->up, F->up->out_awaits_209, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_))), rt_g_lit("decl);", 6)));
}
F->r_2967 = (*(P174)rt_nil_check(F->e_1162)).c_;
while ((F->r_2967 != NULL)) {
if (((((G_NV((*(P174)rt_nil_check(F->r_2967)).kind_) == ((rt_int)40LL)) || (G_NV((*(P174)rt_nil_check(F->r_2967)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->r_2967)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->r_2967)).kind_) == ((rt_int)50LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->r_2967)).line_), cat_rt_gstr(rt_g_lit("the visible part of a task holds entries, subprograms, types, constants and ", 76), rt_g_lit("exceptions, not variables or modules (RM79 9.1)", 47)));
}
F->r_2967 = (*(P174)rt_nil_check(F->r_2967)).next_;
}
L_end_2968: ;
f_open_scope_466(F->up);
F->up->cur_task_202 = F->y_2958;
F->saved_defer_2951 = G_NV(F->up->defer_entry_structs_208);
F->up->defer_entry_structs_208 = 1;
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->e_1162)).c_);
f_decl_elements_653(F->up, (*(P174)rt_nil_check(F->e_1162)).d_);
F->up->defer_entry_structs_208 = G_NV(F->saved_defer_2951);
F->m_2959 = F->up->scope_stack_121;
while (((F->m_2959 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2959)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2959)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P117)rt_nil_check(F->m_2959)).from_use_)))) {
F->fields_2952 = f_mk_228(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_2954 = (*(P117)rt_nil_check(F->m_2959)).params_;
while ((F->pm_2954 != NULL)) {
f_ctype_492(F->up, (*(P1828)rt_nil_check(F->pm_2954)).t_, &F->ct_2953);
if ((G_NV((*(P1828)rt_nil_check(F->pm_2954)).mode_) == ((rt_int)1LL))) {
F->fields_2952 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2952)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2953))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2954)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2952 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2952)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2953))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2954)).cfield_))), one_rt_gstr(59)));
}
F->pm_2954 = (*(P1828)rt_nil_check(F->pm_2954)).next_;
}
L_end_2970: ;
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2959)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_2952))), rt_g_lit(" };", 3)));
}
F->m_2959 = (*(P117)rt_nil_check(F->m_2959)).stack_;
}
L_end_2969: ;
F->m_2959 = F->up->scope_stack_121;
while (((F->m_2959 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2959)).depth_) == G_NV(F->up->depth_120)))) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2959)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2959)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->m_2959)).from_use_)))) {
if (((!G_NV(F->has_procs_2950)) && ((*(P117)rt_nil_check(F->y_2958)).c_ != NULL))) {
f_declare_slot_1148(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frames", 6)), &F->fp_2955);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("lo", 2)), &F->flo_2956);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("hi", 2)), &F->fhi_2957);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fp_2955)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P140)rt_nil_check(F->fhi_2957))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->flo_2956))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->fhi_2957))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->flo_2956))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_2950 = 1;
} else if ((!G_NV(F->has_procs_2950))) {
f_declare_slot_1148(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2958)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frame", 5)), &F->fp_2955);
f_emit_255(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->fp_2955)), rt_g_lit(" = NULL;", 8)));
F->has_procs_2950 = 1;
}
if (((*(P117)rt_nil_check(F->y_2958)).c_ != NULL)) {
(*(P117)rt_nil_check(F->m_2959)).access_path_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P117)rt_nil_check(F->m_2959)).access_path_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2958)).cname_)), rt_g_lit("frame", 5)));
}
(*(P117)rt_nil_check(F->m_2959)).members_ = F->y_2958;
}
f_copy_sym_1054(F->up, F->m_2959, &F->z_2960);
(*(P117)rt_nil_check(F->z_2960)).hidden_ = G_NV((*(P117)rt_nil_check(F->m_2959)).from_use_);
(*(P117)rt_nil_check(F->z_2960)).mnext_ = (*(P117)rt_nil_check(F->y_2958)).members_;
(*(P117)rt_nil_check(F->y_2958)).members_ = F->z_2960;
F->m_2959 = (*(P117)rt_nil_check(F->m_2959)).stack_;
}
L_end_2971: ;
f_close_scope_467(F->up);
F->up->cur_task_202 = F->saved_2961;
f_define_465(F->up, F->y_2958, G_NV((*(P174)rt_nil_check(F->e_1162)).line_));
ret_:

  return;
}

static void f_entry_decl_1165(struct f_greenc_1fr *up_, P174 e_1164) {
  struct f_entry_decl_1165fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1164 = e_1164;
F->y_2972 = NULL;
F->p_2973 = NULL;
F->p_2973 = (*(P174)rt_nil_check(F->e_1164)).a_;
F->pm_2974 = NULL;
F->tail_2975 = NULL;
F->fields_2976 = NULL;
F->ct_2977 = NULL;
F->x_2978 = NULL;
F->lo_2979 = NULL;
F->hi_2980 = NULL;
if ((F->up->cur_task_202 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1164)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_2972 = f_new_sym_470(F->up, ((rt_int)10LL), (*(P174)rt_nil_check(F->e_1164)).name_);
f_new_name_231(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_239(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1164)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2972)).cname_);
F->fields_2976 = f_mk_228(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_2973 != NULL)) {
F->pm_2974 = ({ R1829 *cell2982 = rt_alloc(sizeof(R1829)); *cell2982 = cp_R1829(({ R1829 ag2983; ag2983.name_ = (*(P174)rt_nil_check(F->p_2973)).name_; ag2983.mode_ = G_NV((*(P174)rt_nil_check(F->p_2973)).ival_); ag2983.t_ = NULL; ag2983.c_ = NULL; ag2983.cfield_ = NULL; ag2983.dflt_ = (*(P174)rt_nil_check(F->p_2973)).b_; ag2983.next_ = NULL; ag2983.dsym_ = NULL; ag2983; })); (P1828)cell2982; });
f_resolve_508(F->up, (*(P174)rt_nil_check(F->p_2973)).a_, &(*(P1828)rt_nil_check(F->pm_2974)).t_, &(*(P1828)rt_nil_check(F->pm_2974)).c_);
(*(P1828)rt_nil_check(F->pm_2974)).cfield_ = f_mk_228(F->up, f_c_field_245(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2973)).name_))));
f_ctype_492(F->up, (*(P1828)rt_nil_check(F->pm_2974)).t_, &F->ct_2977);
if ((G_NV((*(P1828)rt_nil_check(F->pm_2974)).mode_) == ((rt_int)1LL))) {
F->fields_2976 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2976)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2977))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2974)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_2976 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_2976)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_2977))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_2974)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_2975 == NULL)) {
(*(P117)rt_nil_check(F->y_2972)).params_ = F->pm_2974;
} else {
(*(P1828)rt_nil_check(F->tail_2975)).next_ = F->pm_2974;
}
F->tail_2975 = F->pm_2974;
F->p_2973 = (*(P174)rt_nil_check(F->p_2973)).next_;
}
L_end_2981: ;
if ((!G_NV(F->up->defer_entry_structs_208))) {
f_put_to_253(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2972)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_2976))), rt_g_lit(" };", 3)));
}
(*(P117)rt_nil_check(F->y_2972)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->y_2972)).decl_ = F->e_1164;
(*(P117)rt_nil_check(F->y_2972)).members_ = F->up->cur_task_202;
f_elaborate_defaults_648(F->up, F->y_2972);
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_2972)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_2972)).access_path_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2972)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2972)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2972)).access_path_)), &F->x_2978);
(*(P117)rt_nil_check(F->y_2972)).ro_ = ((((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && G_NV(F->up->in_func_138)) && (G_NV(F->up->cur_level_139) > G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_)));
if (((*(P174)rt_nil_check(F->e_1164)).b_ != NULL)) {
f_family_bounds_1156(F->up, (*(P174)rt_nil_check(F->e_1164)).b_, F->y_2972, F->x_2978, (((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_2972)).ro_))));
} else if ((((*(P117)rt_nil_check(F->up->cur_task_202)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_2972)).ro_)))) {
f_declare_slot_1148(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2972)).access_path_)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("lo", 2)), &F->lo_2979);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_202)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_202)).cname_)), rt_g_lit("hi", 2)), &F->hi_2980);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2978)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_2980))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2979))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2980))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2979))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_2980))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2979))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_2978))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1148(F->up, rt_g_lit("rt_entry", 8), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2972)).access_path_)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P140)rt_nil_check(F->x_2978))), rt_g_lit(");", 2)));
}
f_define_465(F->up, F->y_2972, G_NV((*(P174)rt_nil_check(F->e_1164)).line_));
ret_:

  return;
}

static void f_task_body_1167(struct f_greenc_1fr *up_, P174 e_1166) {
  struct f_task_body_1167fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1166 = e_1166;
F->y_2984 = NULL;
F->y_2984 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1166)).name_)));
F->b_2985 = NULL;
F->m_2986 = NULL;
F->z_2987 = NULL;
F->upp_2988 = NULL;
F->saved_2989 = NULL;
F->saved_2989 = F->up->cur_task_202;
if (f_is_generic_name_1257(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1166)).name_)))) {
f_attach_generic_body_1259(F->up, F->e_1166);
goto ret_;
}
if (((F->y_2984 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2984)).kind_) != ((rt_int)9LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1166)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1166)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_2985 = f_new_sym_470(F->up, ((rt_int)4LL), (*(P174)rt_nil_check(F->e_1166)).name_);
(*(P117)rt_nil_check(F->b_2985)).cname_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_)), rt_g_lit("body", 4)));
(*(P117)rt_nil_check(F->b_2985)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->b_2985)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->b_2985)).decl_ = F->e_1166;
if (((*(P117)rt_nil_check(F->y_2984)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_2985)).params_ = ({ R1829 *cell2990 = rt_alloc(sizeof(R1829)); *cell2990 = cp_R1829(({ R1829 ag2991; ag2991.name_ = f_mk_228(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_)))); ag2991.mode_ = ((rt_int)1LL); ag2991.t_ = F->up->ty_int_156; ag2991.c_ = NULL; ag2991.cfield_ = f_mk_228(F->up, rt_g_lit("index_", 6)); ag2991.dflt_ = NULL; ag2991.next_ = NULL; ag2991.dsym_ = NULL; ag2991; })); (P1828)cell2990; });
}
f_open_scope_466(F->up);
F->m_2986 = (*(P117)rt_nil_check(F->y_2984)).members_;
while ((F->m_2986 != NULL)) {
f_copy_sym_1054(F->up, F->m_2986, &F->z_2987);
f_define_465(F->up, F->z_2987, G_NV((*(P174)rt_nil_check(F->e_1166)).line_));
if (((((G_NV((*(P117)rt_nil_check(F->m_2986)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2986)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->m_2986)).access_path_ != NULL)) && f_same_task_427(F->up, (*(P117)rt_nil_check(F->m_2986)).members_, F->y_2984))) {
if ((G_NV((*(P117)rt_nil_check(F->y_2984)).level_) > ((rt_int)0LL))) {
F->upp_2988 = f_mk_228(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_2988 = f_mk_228(F->up, rt_g_lit("", 0));
}
if (((*(P117)rt_nil_check(F->y_2984)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_2985)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_2988)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2986)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P140)rt_nil_check(F->upp_2988))), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P117)rt_nil_check(F->b_2985)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_2988)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2986)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_2986 = (*(P117)rt_nil_check(F->m_2986)).mnext_;
}
L_end_2992: ;
F->up->cur_task_202 = F->y_2984;
f_subprogram_body_693(F->up, F->e_1166, F->b_2985);
F->up->cur_task_202 = F->saved_2989;
f_close_scope_467(F->up);
if ((((*(P117)rt_nil_check(F->y_2984)).c_ != NULL) && (G_NV((*(P117)rt_nil_check(F->b_2985)).level_) > ((rt_int)0LL)))) {
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2985)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P117)rt_nil_check(F->y_2984)).c_ != NULL)) {
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2985)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P117)rt_nil_check(F->b_2985)).level_) > ((rt_int)0LL))) {
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2985)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_253(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2984)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_2985)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1170(struct f_greenc_1fr *up_, P174 decls_1168, P140 *aw_1169) {
  struct f_task_awaits_1170fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1168 = decls_1168;
F->aw_1169 = aw_1169;
F->e_2993 = NULL;
F->e_2993 = F->decls_1168;
F->y_2994 = NULL;
F->p_2995 = NULL;
(*F->aw_1169) = f_mk_228(F->up, rt_g_lit("", 0));
while ((F->e_2993 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_2993)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P174)rt_nil_check(F->e_2993)).kind_) == ((rt_int)53LL)) && (G_NV((*(P174)rt_nil_check(F->e_2993)).ival_) == ((rt_int)50LL))))) {
F->y_2994 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_2993)).name_)));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_2994)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2994)).cname_)), rt_g_lit("decl", 4)), &F->p_2995);
(*F->aw_1169) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->aw_1169))), rt_g_lit(" rt_await_decl(&", 16)), (*(P140)rt_nil_check(F->p_2995))), rt_g_lit(");", 2)));
}
F->e_2993 = (*(P174)rt_nil_check(F->e_2993)).next_;
}
L_end_2996: ;
ret_:

  return;
}

static void f_task_failure_1172(struct f_greenc_1fr *up_, P174 s_1171) {
  struct f_task_failure_1172fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1171 = s_1171;
F->y_2997 = NULL;
F->y_2997 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1171)).tag_)));
F->a_2998 = NULL;
F->i_2999 = NULL;
F->it_3000 = NULL;
if (((*(P174)rt_nil_check(F->s_1171)).a_ != NULL)) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_1171)).a_, (*(P117)rt_nil_check(F->y_2997)).t_, &F->it_3000, &F->i_2999);
f_act_path_i_1141(F->up, F->y_2997, (*(P140)rt_nil_check(F->i_2999)), &F->a_2998);
} else {
f_act_path_1137(F->up, F->y_2997, &F->a_2998);
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P140)rt_nil_check(F->a_2998))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1176(struct f_greenc_1fr *up_, P174 e_1173, P117 *y_1174, P174 *ix_1175) {
  struct f_entry_sym_1176fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1173 = e_1173;
F->y_1174 = y_1174;
F->ix_1175 = ix_1175;
F->alias_3001 = NULL;
F->t_3002 = NULL;
(*F->ix_1175) = NULL;
F->up->fam_ix_205 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1173)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1176(F->up, (*(P174)rt_nil_check(F->e_1173)).a_, &(*F->y_1174), &(*F->ix_1175));
if (((*(P117)rt_nil_check((*F->y_1174))).c_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1173)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*F->y_1174))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_205 = (*(P174)rt_nil_check(F->e_1173)).b_;
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_1173)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3002 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).name_)));
if (((F->t_3002 != NULL) && ((G_NV((*(P117)rt_nil_check(F->t_3002)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->t_3002)).flags_) == ((rt_int)4LL))))) {
F->alias_3001 = f_nn_302(F->up, ((rt_int)9LL), G_NV((*(P174)rt_nil_check(F->e_1173)).line_));
as_R175(&(*(P174)rt_nil_check(F->alias_3001)), (*(P174)rt_nil_check(F->e_1173)));
(*(P174)rt_nil_check(F->alias_3001)).a_ = (*(P117)rt_nil_check(F->t_3002)).decl_;
f_entry_sym_1176(F->up, F->alias_3001, &(*F->y_1174), &(*F->ix_1175));
goto ret_;
}
}
if ((((G_NV((*(P174)rt_nil_check(F->e_1173)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3002 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).a_)).name_)));
if ((((F->t_3002 == NULL) || (G_NV((*(P117)rt_nil_check(F->t_3002)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->t_3002)).c_ == NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1173)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1174) = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).name_)), G_NV((*(P174)rt_nil_check(F->e_1173)).line_));
(*F->ix_1175) = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).a_)).b_;
if ((((*F->y_1174) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1174))).kind_) != ((rt_int)10LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1173)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_1173)).kind_) == ((rt_int)5LL))) {
(*F->y_1174) = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).name_)));
if (((*(P174)rt_nil_check(F->e_1173)).tag_ != NULL)) {
(*F->y_1174) = f_member_of_1049(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).name_)), G_NV((*(P174)rt_nil_check(F->e_1173)).line_));
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_1173)).kind_) == ((rt_int)9LL)) && f_is_package_1045(F->up, (*(P174)rt_nil_check(F->e_1173)).a_))) {
(*F->y_1174) = f_member_of_1049(F->up, f_path_of_345(F->up, (*(P174)rt_nil_check(F->e_1173)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1173)).name_)), G_NV((*(P174)rt_nil_check(F->e_1173)).line_));
} else {
(*F->y_1174) = NULL;
}
if ((((*F->y_1174) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1174))).kind_) != ((rt_int)10LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1173)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_entry_overload_1181(struct f_greenc_1fr *up_, P117 y_1177, P174 args_1178, rt_int line_1179, P117 *r_1180) {
  struct f_entry_overload_1181fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1177 = y_1177;
F->args_1178 = args_1178;
F->line_1179 = line_1179;
F->r_1180 = r_1180;
F->z_3003 = NULL;
F->found_3004 = NULL;
F->ok_3005 = INT_MIN;
(*F->r_1180) = F->y_1177;
if (((*(P117)rt_nil_check(F->y_1177)).members_ == NULL)) {
goto ret_;
}
F->z_3003 = (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1177)).members_)).members_;
while ((F->z_3003 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3003)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1177)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3003)).kind_) == ((rt_int)10LL)))) {
f_fits_1078(F->up, F->z_3003, F->args_1178, NULL, &F->ok_3005);
 (void)rt_range(F->ok_3005, 0, 1);
if ((G_NV(F->ok_3005) && (F->found_3004 == NULL))) {
F->found_3004 = F->z_3003;
} else if ((G_NV(F->ok_3005) && (!f_same_entity_1073(F->up, F->found_3004, F->z_3003)))) {
f_fail_249(F->up, F->line_1179, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the entry call of ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1177)).name_))), rt_g_lit(" is ambiguous (RM79 9.5, 6.6)", 29)));
}
}
F->z_3003 = (*(P117)rt_nil_check(F->z_3003)).mnext_;
}
L_end_3006: ;
if ((F->found_3004 != NULL)) {
(*F->r_1180) = F->found_3004;
}
ret_:

  return;
}

static void f_other_call_1186(struct f_greenc_1fr *up_, P174 e_1182, int is_stmt_1183, P122 *t_1184, P140 *r_1185) {
  struct f_other_call_1186fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1182 = e_1182;
F->is_stmt_1183 = is_stmt_1183;
F->t_1184 = t_1184;
F->r_1185 = r_1185;
F->y_3007 = NULL;
F->oy_3008 = NULL;
F->pm_3009 = NULL;
F->a_3010 = NULL;
F->parts_3011 = NULL;
F->v_3012 = NULL;
F->lv_3013 = NULL;
F->ent_3014 = NULL;
F->act_3015 = NULL;
F->i_3016 = NULL;
F->vt_3017 = NULL;
F->lt_3018 = NULL;
F->lc_3019 = NULL;
F->ro_3020 = INT_MIN;
F->ix_3021 = NULL;
F->fix_3022 = NULL;
F->args_node_3023 = NULL;
f_entry_sym_1176(F->up, (*(P174)rt_nil_check(F->e_1182)).a_, &F->y_3007, &F->ix_3021);
F->fix_3022 = F->up->fam_ix_205;
F->args_node_3023 = (*(P174)rt_nil_check(F->e_1182)).b_;
if (((*(P117)rt_nil_check(F->y_3007)).c_ == NULL)) {
f_entry_overload_1181(F->up, F->y_3007, F->args_node_3023, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), &F->oy_3008);
F->y_3007 = F->oy_3008;
}
if ((((*(P117)rt_nil_check(F->y_3007)).c_ != NULL) && (F->fix_3022 == NULL))) {
F->fix_3022 = (*(P174)rt_nil_check(F->e_1182)).b_;
F->args_node_3023 = NULL;
}
F->i_3016 = f_mk_228(F->up, rt_g_lit("", 0));
if ((F->ix_3021 != NULL)) {
f_gexpr_806(F->up, F->ix_3021, F->up->ty_int_156, &F->vt_3017, &F->i_3016);
} else if (((((*(P117)rt_nil_check(F->y_3007)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).members_)).c_ != NULL)) && ((*(P117)rt_nil_check(F->y_3007)).members_ != F->up->cur_task_202))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).name_))));
}
if ((!F->is_stmt_1183)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_217 != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_217)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1145(F->up, F->y_3007, (*(P140)rt_nil_check(F->i_3016)), &F->ent_3014);
if (((*(P117)rt_nil_check(F->y_3007)).c_ != NULL)) {
if ((F->fix_3022 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_806(F->up, F->fix_3022, NULL, &F->vt_3017, &F->v_3012);
f_entry_family_slot_1161(F->up, F->y_3007, (*(P140)rt_nil_check(F->ent_3014)), (*(P140)rt_nil_check(F->v_3012)), &F->ent_3014);
}
F->parts_3011 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3007)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_3009 = (*(P117)rt_nil_check(F->y_3007)).params_;
while ((F->pm_3009 != NULL)) {
F->a_3010 = f_actual_for_1004(F->up, F->args_node_3023, F->pm_3009, (*(P117)rt_nil_check(F->y_3007)).params_);
if (((F->a_3010 == NULL) && ((*(P1828)rt_nil_check(F->pm_3009)).dsym_ != NULL))) {
f_access_of_743(F->up, (*(P1828)rt_nil_check(F->pm_3009)).dsym_, &F->v_3012);
f_copy_code_624(F->up, (*(P1828)rt_nil_check(F->pm_3009)).t_, (*(P140)rt_nil_check(F->v_3012)), &F->lv_3013);
F->parts_3011 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3011)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3009)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lv_3013))), one_rt_gstr(59)));
} else if ((F->a_3010 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3009)).name_))));
} else if ((G_NV((*(P1828)rt_nil_check(F->pm_3009)).mode_) == ((rt_int)1LL))) {
f_gexpr_806(F->up, F->a_3010, (*(P1828)rt_nil_check(F->pm_3009)).t_, &F->vt_3017, &F->v_3012);
f_check_type_487(F->up, F->vt_3017, (*(P1828)rt_nil_check(F->pm_3009)).t_, G_NV((*(P174)rt_nil_check(F->e_1182)).line_));
F->parts_3011 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3011)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3009)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3012))), one_rt_gstr(59)));
} else {
f_lvalue_762(F->up, F->a_3010, &F->lv_3013, &F->lt_3018, &F->lc_3019, &F->ro_3020);
 (void)rt_range(F->ro_3020, 0, 1);
if (G_NV(F->ro_3020)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1182)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3009)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_487(F->up, F->lt_3018, (*(P1828)rt_nil_check(F->pm_3009)).t_, G_NV((*(P174)rt_nil_check(F->e_1182)).line_));
F->parts_3011 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3011)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3009)).cfield_))), rt_g_lit(" = &", 4)), (*(P140)rt_nil_check(F->lv_3013))), one_rt_gstr(59)));
}
F->pm_3009 = (*(P1828)rt_nil_check(F->pm_3009)).next_;
}
L_end_3024: ;
if ((((*(P117)rt_nil_check(F->y_3007)).members_ != NULL) && ((*(P117)rt_nil_check(F->y_3007)).members_ != F->up->cur_task_202))) {
if ((F->ix_3021 != NULL)) {
f_act_path_i_1141(F->up, (*(P117)rt_nil_check(F->y_3007)).members_, (*(P140)rt_nil_check(F->i_3016)), &F->act_3015);
} else {
f_act_path_1137(F->up, (*(P117)rt_nil_check(F->y_3007)).members_, &F->act_3015);
}
F->parts_3011 = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3011)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P140)rt_nil_check(F->act_3015))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1184) = F->up->ty_void_161;
(*F->r_1185) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3011)), rt_g_lit(" rt_entry_call(&", 16)), (*(P140)rt_nil_check(F->ent_3014))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1191(struct f_greenc_1fr *up_, P174 e_1187, P117 y_1188, P122 *t_1189, P140 *r_1190) {
  struct f_other_attr_1191fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1187 = e_1187;
F->y_1188 = y_1188;
F->t_1189 = t_1189;
F->r_1190 = r_1190;
F->a_3025 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1187)).name_)));
F->p_3026 = NULL;
if (((G_NV((*(P117)rt_nil_check(F->y_1188)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3025, rt_g_lit("INDEX", 5)))) {
if (((*(P117)rt_nil_check(F->y_1188)).c_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1187)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1188)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1129(F->up, F->y_1188, &F->p_3026);
(*F->t_1189) = F->up->ty_int_156;
if (((*(P117)rt_nil_check(F->y_1188)).t_ != NULL)) {
(*F->t_1189) = (*(P117)rt_nil_check(F->y_1188)).t_;
}
(*F->r_1190) = F->p_3026;
} else if (((G_NV((*(P117)rt_nil_check(F->y_1188)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3025, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1137(F->up, F->y_1188, &F->p_3026);
(*F->t_1189) = F->up->ty_bool_157;
(*F->r_1190) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3026))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1188)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3025, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1137(F->up, F->y_1188, &F->p_3026);
(*F->t_1189) = F->up->ty_int_156;
(*F->r_1190) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3026))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1188)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3025, rt_g_lit("CLOCK", 5)))) {
f_act_path_1137(F->up, F->y_1188, &F->p_3026);
(*F->t_1189) = F->up->ty_time_171;
(*F->r_1190) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3026))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1188)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3025, rt_g_lit("COUNT", 5)))) {
if (((*(P117)rt_nil_check(F->y_1188)).members_ != F->up->cur_task_202)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1187)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1145(F->up, F->y_1188, rt_g_lit("", 0), &F->p_3026);
(*F->t_1189) = F->up->ty_int_156;
(*F->r_1190) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->p_3026))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1187)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3025), rt_g_lit(" is not handled here", 20)));
(*F->t_1189) = F->up->ty_int_156;
(*F->r_1190) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1195(struct f_greenc_1fr *up_, P174 e_1192, P122 *t_1193, P140 *r_1194) {
  struct f_member_attr_1195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1192 = e_1192;
F->t_1193 = t_1193;
F->r_1194 = r_1194;
F->y_3027 = NULL;
F->ix_3028 = NULL;
F->i_3029 = NULL;
F->p_3030 = NULL;
F->vt_3031 = NULL;
f_task_of_1126(F->up, (*(P174)rt_nil_check(F->e_1192)).a_, &F->y_3027, &F->ix_3028);
f_gexpr_806(F->up, F->ix_3028, F->up->ty_int_156, &F->vt_3031, &F->i_3029);
f_act_path_i_1141(F->up, F->y_3027, (*(P140)rt_nil_check(F->i_3029)), &F->p_3030);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1193) = F->up->ty_bool_157;
(*F->r_1194) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3030))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1193) = F->up->ty_int_156;
(*F->r_1194) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3030))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), rt_g_lit("CLOCK", 5))) {
(*F->t_1193) = F->up->ty_time_171;
(*F->r_1194) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3030))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1192)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1193) = F->up->ty_int_156;
(*F->r_1194) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1201(struct f_greenc_1fr *up_, rt_gstr name_1196, P174 args_1197, rt_int line_1198, P122 *t_1199, P140 *r_1200) {
  struct f_task_builtin_1201fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1196 = cp_rt_gstr(name_1196);
F->args_1197 = args_1197;
F->line_1198 = line_1198;
F->t_1199 = t_1199;
F->r_1200 = r_1200;
F->vt_3032 = NULL;
F->v_3033 = NULL;
(*F->t_1199) = F->up->ty_void_161;
if (eq_rt_gstr(F->name_1196, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_806(F->up, F->args_1197, F->up->ty_int_156, &F->vt_3032, &F->v_3033);
(*F->r_1200) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P140)rt_nil_check(F->v_3033))), one_rt_gstr(41)));
} else {
f_fail_249(F->up, F->line_1198, cat_rt_gstr(F->name_1196, rt_g_lit(" is not declared", 16)));
(*F->r_1200) = NULL;
}
ret_:

  return;
}

static void f_accept_entry_1204(struct f_greenc_1fr *up_, P174 s_1202, P117 *r_1203) {
  struct f_accept_entry_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1202 = s_1202;
F->r_1203 = r_1203;
F->z_3034 = NULL;
F->found_3035 = NULL;
F->any_3036 = NULL;
F->ok_3037 = INT_MIN;
if (((F->up->func_sym_142 != NULL) && (F->up->cur_task_202 != NULL))) {
F->z_3034 = (*(P117)rt_nil_check(F->up->cur_task_202)).members_;
while ((F->z_3034 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_3034)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->z_3034)).kind_) == ((rt_int)3LL))) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3034)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1202)).line_), rt_g_lit("an accept statement cannot be in a visible subprogram of the task (RM79 9.5)", 76));
}
F->z_3034 = (*(P117)rt_nil_check(F->z_3034)).mnext_;
}
L_end_3038: ;
}
F->z_3034 = ({ A116 ix3039 = F->up->table_119; ix3039.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1202)).name_))), ix3039.lo, ix3039.hi) - ix3039.lo]; });
while ((F->z_3034 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3034)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1202)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3034)).kind_) == ((rt_int)10LL))) && f_same_task_427(F->up, (*(P117)rt_nil_check(F->z_3034)).members_, F->up->cur_task_202))) {
F->any_3036 = F->z_3034;
f_accept_conforms_1208(F->up, F->s_1202, F->z_3034, &F->ok_3037);
 (void)rt_range(F->ok_3037, 0, 1);
if ((G_NV(F->ok_3037) && (F->found_3035 == NULL))) {
F->found_3035 = F->z_3034;
}
}
F->z_3034 = (*(P117)rt_nil_check(F->z_3034)).chain_;
}
L_end_3040: ;
if (((F->found_3035 == NULL) && (F->any_3036 != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1202)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the formal part of accept ", 26), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1202)).name_))), rt_g_lit(" does not repeat that of the entry (RM79 9.5)", 45)));
}
(*F->r_1203) = F->found_3035;
ret_:

  return;
}

static void f_accept_conforms_1208(struct f_greenc_1fr *up_, P174 s_1205, P117 y_1206, int *ok_1207) {
  struct f_accept_conforms_1208fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1205 = s_1205;
F->y_1206 = y_1206;
F->ok_1207 = ok_1207;
F->f_3041 = NULL;
F->f_3041 = (*(P174)rt_nil_check(F->s_1205)).a_;
F->pm_3042 = NULL;
F->pm_3042 = (*(P117)rt_nil_check(F->y_1206)).params_;
F->t_3043 = NULL;
F->c_3044 = NULL;
(*F->ok_1207) = 1;
if ((F->f_3041 == NULL)) {
goto ret_;
}
while (((F->f_3041 != NULL) && (F->pm_3042 != NULL))) {
f_resolve_508(F->up, (*(P174)rt_nil_check(F->f_3041)).a_, &F->t_3043, &F->c_3044);
if (((!f_same_444(F->up, F->t_3043, (*(P1828)rt_nil_check(F->pm_3042)).t_)) || (G_NV((*(P174)rt_nil_check(F->f_3041)).ival_) != G_NV((*(P1828)rt_nil_check(F->pm_3042)).mode_)))) {
(*F->ok_1207) = 0;
goto ret_;
}
F->f_3041 = (*(P174)rt_nil_check(F->f_3041)).next_;
F->pm_3042 = (*(P1828)rt_nil_check(F->pm_3042)).next_;
}
L_end_3045: ;
(*F->ok_1207) = ((F->f_3041 == NULL) && (F->pm_3042 == NULL));
ret_:

  return;
}

static void f_gen_accept_1210(struct f_greenc_1fr *up_, P174 s_1209) {
  struct f_gen_accept_1210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1209 = s_1209;
F->y_3046 = NULL;
F->saved_ax_3047 = NULL;
F->ent_3048 = NULL;
F->ep_3049 = NULL;
F->xf_3050 = NULL;
F->x_3051 = NULL;
F->pm_3052 = NULL;
F->f_3053 = NULL;
F->f_3053 = (*(P174)rt_nil_check(F->s_1209)).a_;
F->p_3054 = NULL;
f_accept_entry_1204(F->up, F->s_1209, &F->y_3046);
if ((F->y_3046 == NULL)) {
F->y_3046 = f_lookup_entry_430(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1209)).name_)), F->up->cur_task_202);
}
if (((F->y_3046 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3046)).kind_) != ((rt_int)10LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1209)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1209)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_427(F->up, (*(P117)rt_nil_check(F->y_3046)).members_, F->up->cur_task_202))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1209)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1145(F->up, F->y_3046, rt_g_lit("", 0), &F->ent_3048);
f_member_slot_1214(F->up, F->y_3046, F->s_1209, &F->ent_3048);
if ((G_NV((*(P174)rt_nil_check(F->s_1209)).flag_) == ((rt_int)0LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_231(F->up, rt_g_lit("ep", 2), &F->ep_3049);
f_new_name_231(F->up, rt_g_lit("xf", 2), &F->xf_3050);
f_new_name_231(F->up, rt_g_lit("x", 1), &F->x_3051);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3046)).cname_))), rt_g_lit("p *", 3)), (*(P140)rt_nil_check(F->ep_3049))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit(");", 2)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P140)rt_nil_check(F->xf_3050))), one_rt_gstr(59)));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->xf_3050))), rt_g_lit(")) {", 4)));
f_push_cleanup_699(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3050))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_466(F->up);
F->pm_3052 = (*(P117)rt_nil_check(F->y_3046)).params_;
while ((F->pm_3052 != NULL)) {
if ((G_NV((*(P1828)rt_nil_check(F->pm_3052)).mode_) == ((rt_int)1LL))) {
F->p_3054 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P1828)rt_nil_check(F->pm_3052)).name_);
(*(P117)rt_nil_check(F->p_3054)).ro_ = 1;
(*(P117)rt_nil_check(F->p_3054)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->ep_3049))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3052)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3054 = f_new_sym_470(F->up, ((rt_int)1LL), (*(P1828)rt_nil_check(F->pm_3052)).name_);
(*(P117)rt_nil_check(F->p_3054)).access_path_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->ep_3049))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1828)rt_nil_check(F->pm_3052)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3053 != NULL)) {
(*(P117)rt_nil_check(F->p_3054)).name_ = (*(P174)rt_nil_check(F->f_3053)).name_;
F->f_3053 = (*(P174)rt_nil_check(F->f_3053)).next_;
}
(*(P117)rt_nil_check(F->p_3054)).t_ = (*(P1828)rt_nil_check(F->pm_3052)).t_;
(*(P117)rt_nil_check(F->p_3054)).c_ = (*(P1828)rt_nil_check(F->pm_3052)).c_;
f_define_465(F->up, F->p_3054, G_NV((*(P174)rt_nil_check(F->s_1209)).line_));
F->pm_3052 = (*(P1828)rt_nil_check(F->pm_3052)).next_;
}
L_end_3055: ;
F->up->accept_depth_203 = rt_add(G_NV(F->up->accept_depth_203), ((rt_int)1LL));
F->saved_ax_3047 = F->up->accept_exits_149;
F->up->accept_exits_149 = F->up->exits_145;
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_1209)).b_);
F->up->accept_exits_149 = F->saved_ax_3047;
F->up->accept_depth_203 = rt_sub(G_NV(F->up->accept_depth_203), ((rt_int)1LL));
f_close_scope_467(F->up);
f_pop_cleanup_700(F->up);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3050))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit(", 0, 0);", 8)));
f_emit_255(F->up, rt_g_lit("} else {", 8));
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3050))), rt_g_lit("); int ", 7)), (*(P140)rt_nil_check(F->x_3051))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P140)rt_nil_check(F->ent_3048))), rt_g_lit(", 1, ", 5)), rt_g_lit("rt_g_partner_exc(", 17)), (*(P140)rt_nil_check(F->x_3051))), rt_g_lit(")); rt_raise(", 13)), (*(P140)rt_nil_check(F->x_3051))), rt_g_lit(");", 2)));
f_emit_255(F->up, rt_g_lit("}", 1));
f_emit_255(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1214(struct f_greenc_1fr *up_, P117 y_1211, P174 s_1212, P140 *ent_1213) {
  struct f_member_slot_1214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1211 = y_1211;
F->s_1212 = s_1212;
F->ent_1213 = ent_1213;
F->vt_3056 = NULL;
F->v_3057 = NULL;
if (((*(P117)rt_nil_check(F->y_1211)).c_ != NULL)) {
if (((*(P174)rt_nil_check(F->s_1212)).c_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1212)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1211)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1211)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->s_1212)).c_, NULL, &F->vt_3056, &F->v_3057);
f_entry_family_slot_1161(F->up, F->y_1211, (*(P140)rt_nil_check((*F->ent_1213))), (*(P140)rt_nil_check(F->v_3057)), &(*F->ent_1213));
} else if (((*(P174)rt_nil_check(F->s_1212)).c_ != NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1212)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1211)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1217(struct f_greenc_1fr *up_, P174 e_1215, P140 *r_1216) {
  struct f_gen_delay_ticks_1217fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1215 = e_1215;
F->r_1216 = r_1216;
F->vt_3058 = NULL;
F->v_3059 = NULL;
f_gexpr_806(F->up, F->e_1215, F->up->ty_time_171, &F->vt_3058, &F->v_3059);
f_check_type_487(F->up, F->vt_3058, F->up->ty_time_171, G_NV((*(P174)rt_nil_check(F->e_1215)).line_));
(*F->r_1216) = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P140)rt_nil_check(F->v_3059))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1219(struct f_greenc_1fr *up_, P174 s_1218) {
  struct f_gen_select_1219fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1218 = s_1218;
F->alt_3060 = NULL;
F->alt_3060 = (*(P174)rt_nil_check(F->s_1218)).a_;
F->n_3061 = INT64_MIN;
F->n_3061 = ((rt_int)0LL);
F->i_3062 = INT64_MIN;
F->has_delay_3063 = INT_MIN;
F->has_delay_3063 = 0;
F->has_accept_3064 = INT_MIN;
F->has_accept_3064 = 0;
F->al_3065 = NULL;
F->w_3066 = NULL;
F->g_3067 = NULL;
F->ent_3068 = NULL;
F->ticks_3069 = NULL;
F->vt_3070 = NULL;
F->y_3071 = NULL;
f_new_name_231(F->up, rt_g_lit("al", 2), &F->al_3065);
f_new_name_231(F->up, rt_g_lit("w", 1), &F->w_3066);
while ((F->alt_3060 != NULL)) {
F->n_3061 = rt_add(G_NV(F->n_3061), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3063 = 1;
} else {
F->has_accept_3064 = 1;
}
F->alt_3060 = (*(P174)rt_nil_check(F->alt_3060)).next_;
}
L_end_3072: ;
if (((G_NV((*(P174)rt_nil_check(F->s_1218)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3063))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1218)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3064))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1218)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P140)rt_nil_check(F->al_3065))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3061), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3060 = (*(P174)rt_nil_check(F->s_1218)).a_;
F->i_3062 = ((rt_int)0LL);
while ((F->alt_3060 != NULL)) {
F->g_3067 = f_mk_228(F->up, rt_g_lit("1", 1));
if (((*(P174)rt_nil_check(F->alt_3060)).a_ != NULL)) {
f_condition_846(F->up, (*(P174)rt_nil_check(F->alt_3060)).a_, F->up->ty_bool_157, &F->vt_3070, &F->g_3067);
f_check_type_487(F->up, F->vt_3070, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->alt_3060)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).kind_) == ((rt_int)34LL))) {
f_accept_entry_1204(F->up, (*(P174)rt_nil_check(F->alt_3060)).b_, &F->y_3071);
if ((F->y_3071 == NULL)) {
F->y_3071 = f_lookup_entry_430(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).name_)), F->up->cur_task_202);
}
if (((F->y_3071 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3071)).kind_) != ((rt_int)10LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->alt_3060)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1145(F->up, F->y_3071, rt_g_lit("", 0), &F->ent_3068);
f_member_slot_1214(F->up, F->y_3071, (*(P174)rt_nil_check(F->alt_3060)).b_, &F->ent_3068);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3065)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3062)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P140)rt_nil_check(F->g_3067))), rt_g_lit("), &", 4)), (*(P140)rt_nil_check(F->ent_3068))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1217(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).a_, &F->ticks_3069);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3065)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3062)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P140)rt_nil_check(F->g_3067))), rt_g_lit("), NULL, NULL, ", 15)), (*(P140)rt_nil_check(F->ticks_3069))), rt_g_lit("};", 2)));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P140)rt_nil_check(F->al_3065))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3062)))), rt_g_lit("].open;", 7)));
F->i_3062 = rt_add(G_NV(F->i_3062), ((rt_int)1LL));
F->alt_3060 = (*(P174)rt_nil_check(F->alt_3060)).next_;
}
L_end_3073: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1218)).flag_) == ((rt_int)1LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3065)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3061)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3061 = rt_add(G_NV(F->n_3061), ((rt_int)1LL));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_246(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_246(F->up)), rt_g_lit("));", 3)));
}
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->w_3066))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3061)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->al_3065))), rt_g_lit(");", 2)));
F->alt_3060 = (*(P174)rt_nil_check(F->s_1218)).a_;
F->i_3062 = ((rt_int)0LL);
while ((F->alt_3060 != NULL)) {
if ((G_NV(F->i_3062) == ((rt_int)0LL))) {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->w_3066))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->w_3066))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3062)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3060)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1210(F->up, (*(P174)rt_nil_check(F->alt_3060)).b_);
}
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->alt_3060)).c_);
F->i_3062 = rt_add(G_NV(F->i_3062), ((rt_int)1LL));
F->alt_3060 = (*(P174)rt_nil_check(F->alt_3060)).next_;
}
L_end_3074: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1218)).flag_) == ((rt_int)1LL))) {
f_emit_255(F->up, rt_g_lit("} else {", 8));
f_gen_statements_695(F->up, (*(P174)rt_nil_check(F->s_1218)).b_);
}
f_emit_255(F->up, rt_g_lit("}", 1));
f_emit_255(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1224(struct f_greenc_1fr *up_, P117 y_1220, P174 ix_1221, P140 *lo_1222, P140 *hi_1223) {
  struct f_family_range_1224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1220 = y_1220;
F->ix_1221 = ix_1221;
F->lo_1222 = lo_1222;
F->hi_1223 = hi_1223;
F->vt_3075 = NULL;
if ((F->ix_1221 == NULL)) {
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1220)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1220)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1222));
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_1220)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1220)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1223));
} else if ((G_NV((*(P174)rt_nil_check(F->ix_1221)).kind_) == ((rt_int)14LL))) {
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->ix_1221)).a_, F->up->ty_int_156, &F->vt_3075, &(*F->lo_1222));
f_gexpr_806(F->up, (*(P174)rt_nil_check(F->ix_1221)).b_, F->up->ty_int_156, &F->vt_3075, &(*F->hi_1223));
} else {
f_gexpr_806(F->up, F->ix_1221, F->up->ty_int_156, &F->vt_3075, &(*F->lo_1222));
(*F->hi_1223) = (*F->lo_1222);
}
ret_:

  return;
}

static void f_task_statement_gen_1226(struct f_greenc_1fr *up_, P174 s_1225) {
  struct f_task_statement_gen_1226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1225 = s_1225;
F->n_3076 = NULL;
F->ix_3077 = NULL;
F->y_3078 = NULL;
F->a_3079 = NULL;
F->d_3080 = NULL;
F->l_3081 = NULL;
F->ticks_3082 = NULL;
F->lo_3083 = NULL;
F->hi_3084 = NULL;
{ rt_int sel3085 = G_NV((*(P174)rt_nil_check(F->s_1225)).kind_);
if (0 || sel3085 == ((rt_int)32LL)) {
f_gen_delay_ticks_1217(F->up, (*(P174)rt_nil_check(F->s_1225)).a_, &F->ticks_3082);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P140)rt_nil_check(F->ticks_3082))), rt_g_lit(");", 2)));
} else if (0 || sel3085 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_203) > ((rt_int)0LL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1225)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3076 = (*(P174)rt_nil_check(F->s_1225)).a_;
while ((F->n_3076 != NULL)) {
f_task_of_1126(F->up, F->n_3076, &F->y_3078, &F->ix_3077);
f_path_at_1120(F->up, G_NV((*(P117)rt_nil_check(F->y_3078)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3078)).cname_)), rt_g_lit("decl", 4)), &F->d_3080);
if ((G_NV((*(P117)rt_nil_check(F->y_3078)).level_) > ((rt_int)0LL))) {
f_link_to_746(F->up, G_NV((*(P117)rt_nil_check(F->y_3078)).level_), &F->l_3081);
} else {
F->l_3081 = f_mk_228(F->up, rt_g_lit("NULL", 4));
}
if (((*(P117)rt_nil_check(F->y_3078)).c_ == NULL)) {
f_act_path_1137(F->up, F->y_3078, &F->a_3079);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P140)rt_nil_check(F->a_3079))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3080))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3078)).cname_))), rt_g_lit("run, ", 5)), (*(P140)rt_nil_check(F->l_3081))), rt_g_lit(");", 2)));
} else {
f_family_range_1224(F->up, F->y_3078, F->ix_3077, &F->lo_3083, &F->hi_3084);
f_act_path_i_1141(F->up, F->y_3078, rt_g_lit("k_", 2), &F->a_3079);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3083))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3084))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P140)rt_nil_check(F->l_3081))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P140)rt_nil_check(F->a_3079))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3080))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3078)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3076 = (*(P174)rt_nil_check(F->n_3076)).next_;
}
L_end_3086: ;
} else if (0 || sel3085 == ((rt_int)34LL)) {
f_gen_accept_1210(F->up, F->s_1225);
} else if (0 || sel3085 == ((rt_int)35LL)) {
f_gen_select_1219(F->up, F->s_1225);
} else if (0 || sel3085 == ((rt_int)36LL)) {
F->n_3076 = (*(P174)rt_nil_check(F->s_1225)).a_;
while ((F->n_3076 != NULL)) {
f_task_of_1126(F->up, F->n_3076, &F->y_3078, &F->ix_3077);
if (((*(P117)rt_nil_check(F->y_3078)).c_ == NULL)) {
f_act_path_1137(F->up, F->y_3078, &F->a_3079);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P140)rt_nil_check(F->a_3079))), rt_g_lit(");", 2)));
} else {
f_family_range_1224(F->up, F->y_3078, F->ix_3077, &F->lo_3083, &F->hi_3084);
f_act_path_i_1141(F->up, F->y_3078, rt_g_lit("k_", 2), &F->a_3079);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3083))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3084))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P140)rt_nil_check(F->a_3079))), rt_g_lit(");", 2)));
}
F->n_3076 = (*(P174)rt_nil_check(F->n_3076)).next_;
}
L_end_3087: ;
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->s_1225)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P174 f_root_name_1228(struct f_greenc_1fr *up_, P174 e_1227) {
  struct f_root_name_1228fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1227 = e_1227;
if ((G_NV((*(P174)rt_nil_check(F->e_1227)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1227;
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1227)).kind_) == ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check(F->e_1227)).kind_) == ((rt_int)8LL))) || (G_NV((*(P174)rt_nil_check(F->e_1227)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1228(F->up, (*(P174)rt_nil_check(F->e_1227)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1231(struct f_greenc_1fr *up_, P174 target_1229, rt_int line_1230) {
  struct f_check_pure_target_1231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1229 = target_1229;
F->line_1230 = line_1230;
F->n_3088 = NULL;
F->y_3089 = NULL;
if ((F->up->pure_sym_217 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_221)) {
f_fail_249(F->up, F->line_1230, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_217)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3088 = f_root_name_1228(F->up, F->target_1229);
if ((F->n_3088 != NULL)) {
F->y_3089 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3088)).name_)));
if ((((F->y_3089 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_3089)).kind_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->y_3089)).depth_) < G_NV(F->up->pure_depth_218)))) {
f_fail_249(F->up, F->line_1230, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_217)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3088)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1234(struct f_greenc_1fr *up_, P174 d_1232, rt_gstr name_1233) {
  struct f_assigns_nonlocal_1234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1232 = d_1232;
F->name_1233 = cp_rt_gstr(name_1233);
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->d_1232)).d_, F->d_1232, F->name_1233)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1241(F->up, (*(P174)rt_nil_check(F->d_1232)).e_, F->d_1232, F->name_1233);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1237(struct f_greenc_1fr *up_, P174 d_1235, rt_gstr name_1236) {
  struct f_declares_1237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1235 = d_1235;
F->name_1236 = cp_rt_gstr(name_1236);
F->p_3090 = NULL;
F->p_3090 = (*(P174)rt_nil_check(F->d_1235)).a_;
F->e_3091 = NULL;
F->e_3091 = (*(P174)rt_nil_check(F->d_1235)).c_;
while ((F->p_3090 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3090)).name_)), F->name_1236)) {
F->result_ = 1;
goto ret_;
}
F->p_3090 = (*(P174)rt_nil_check(F->p_3090)).next_;
}
L_end_3092: ;
while ((F->e_3091 != NULL)) {
if ((((*(P174)rt_nil_check(F->e_3091)).name_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3091)).name_)), F->name_1236))) {
F->result_ = 1;
goto ret_;
}
F->e_3091 = (*(P174)rt_nil_check(F->e_3091)).next_;
}
L_end_3093: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1241(struct f_greenc_1fr *up_, P174 h_1238, P174 d_1239, rt_gstr name_1240) {
  struct f_scan_handlers_1241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1238 = h_1238;
F->d_1239 = d_1239;
F->name_1240 = cp_rt_gstr(name_1240);
F->p_3094 = NULL;
F->p_3094 = F->h_1238;
while ((F->p_3094 != NULL)) {
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->p_3094)).b_, F->d_1239, F->name_1240)) {
F->result_ = 1;
goto ret_;
}
F->p_3094 = (*(P174)rt_nil_check(F->p_3094)).next_;
}
L_end_3095: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1245(struct f_greenc_1fr *up_, P174 stmts_1242, P174 d_1243, rt_gstr name_1244) {
  struct f_scan_assigns_1245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1242 = stmts_1242;
F->d_1243 = d_1243;
F->name_1244 = cp_rt_gstr(name_1244);
F->s_3096 = NULL;
F->s_3096 = F->stmts_1242;
F->a_3097 = NULL;
F->r_3098 = NULL;
while ((F->s_3096 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_3096)).kind_) == ((rt_int)20LL))) {
F->r_3098 = f_root_name_1228(F->up, (*(P174)rt_nil_check(F->s_3096)).a_);
if ((((F->r_3098 != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_3098)).name_)), F->name_1244)) && (!f_declares_1237(F->up, F->d_1243, F->name_1244)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3096)).kind_) == ((rt_int)22LL))) {
F->a_3097 = (*(P174)rt_nil_check(F->s_3096)).a_;
while ((F->a_3097 != NULL)) {
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->a_3097)).b_, F->d_1243, F->name_1244)) {
F->result_ = 1;
goto ret_;
}
F->a_3097 = (*(P174)rt_nil_check(F->a_3097)).next_;
}
L_end_3100: ;
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->s_3096)).b_, F->d_1243, F->name_1244)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3096)).kind_) == ((rt_int)23LL))) {
F->a_3097 = (*(P174)rt_nil_check(F->s_3096)).b_;
while ((F->a_3097 != NULL)) {
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->a_3097)).b_, F->d_1243, F->name_1244)) {
F->result_ = 1;
goto ret_;
}
F->a_3097 = (*(P174)rt_nil_check(F->a_3097)).next_;
}
L_end_3101: ;
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->s_3096)).c_, F->d_1243, F->name_1244)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3096)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->s_3096)).b_, F->d_1243, F->name_1244)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3096)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1245(F->up, (*(P174)rt_nil_check(F->s_3096)).b_, F->d_1243, F->name_1244) || f_scan_handlers_1241(F->up, (*(P174)rt_nil_check(F->s_3096)).c_, F->d_1243, F->name_1244))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3096 = (*(P174)rt_nil_check(F->s_3096)).next_;
}
L_end_3099: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1248(struct f_greenc_1fr *up_, P174 e_1246, P117 y_1247) {
  struct f_check_call_rules_1248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1246 = e_1246;
F->y_1247 = y_1247;
F->z_3102 = NULL;
F->s_3103 = NULL;
if ((((F->up->pure_sym_217 != NULL) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1247)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P117)rt_nil_check(F->y_1247)).vrp_))) && (G_NV((*(P117)rt_nil_check(F->y_1247)).depth_) < G_NV(F->up->pure_depth_218)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1246)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_217)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1247)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P117)rt_nil_check(F->y_1247)).vrp_)) || (G_NV(F->up->trial_155) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_219))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1246)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1247)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3103 = F->up->scope_stack_121;
while ((F->s_3103 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_3103)).kind_) == ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->s_3103)).depth_) <= G_NV((*(P117)rt_nil_check(F->y_1247)).depth_))) && (f_lookup_424(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3103)).name_))) == F->s_3103)) && f_assigns_nonlocal_1234(F->up, (*(P117)rt_nil_check(F->y_1247)).decl_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3103)).name_))))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1246)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1247)).name_))), rt_g_lit(" assigns ", 9)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3103)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3103 = (*(P117)rt_nil_check(F->s_3103)).stack_;
}
L_end_3104: ;
ret_:

  return;
}

static void f_generic_p_1250(struct f_greenc_1fr *up_, P174 *res_1249) {
  struct f_generic_p_1250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1249 = res_1249;
F->x_3105 = NULL;
F->p_3106 = NULL;
F->head_3107 = NULL;
F->tail_3108 = NULL;
F->names_3109 = NULL;
F->st_3110 = NULL;
F->def_3111 = NULL;
F->sub_3112 = NULL;
F->def_name_text_3113 = NULL;
F->more_3114 = INT_MIN;
F->more_3114 = 1;
f_expect_kw_324(F->up, rt_g_lit("GENERIC", 7));
F->x_3105 = f_nn_302(F->up, ((rt_int)54LL), f_cur_line_309(F->up));
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
while (G_NV(F->more_3114)) {
if (f_at_kw_311(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_322(F->up);
}
if (f_at_kw_311(F->up, rt_g_lit("TYPE", 4))) {
f_skip_322(F->up);
F->p_3106 = f_nn_302(F->up, ((rt_int)47LL), f_cur_line_309(F->up));
(*(P174)rt_nil_check(F->p_3106)).ival_ = ((rt_int)10LL);
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->p_3106)).name_);
f_append_306(F->up, &F->head_3107, &F->tail_3108, F->p_3106);
} else if ((f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_311(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3106 = f_nn_302(F->up, ((rt_int)47LL), f_cur_line_309(F->up));
(*(P174)rt_nil_check(F->p_3106)).ival_ = ((rt_int)11LL);
if (f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3112 = f_nn_302(F->up, ((rt_int)44LL), f_cur_line_309(F->up));
} else {
F->sub_3112 = f_nn_302(F->up, ((rt_int)45LL), f_cur_line_309(F->up));
}
f_skip_322(F->up);
f_designator_389(F->up, &(*(P174)rt_nil_check(F->sub_3112)).name_);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_formal_part_387(F->up, &(*(P174)rt_nil_check(F->sub_3112)).a_);
}
if (f_at_kw_311(F->up, rt_g_lit("RETURN", 6))) {
f_skip_322(F->up);
f_subtype_ind_366(F->up, &(*(P174)rt_nil_check(F->sub_3112)).b_);
}
(*(P174)rt_nil_check(F->sub_3112)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3106)).name_ = (*(P174)rt_nil_check(F->sub_3112)).name_;
(*(P174)rt_nil_check(F->p_3106)).a_ = F->sub_3112;
if (f_at_kw_311(F->up, rt_g_lit("IS", 2))) {
f_skip_322(F->up);
if (f_at_kind_315(F->up, ((rt_int)6LL))) {
f_designator_389(F->up, &F->def_name_text_3113);
(*(P174)rt_nil_check(F->p_3106)).b_ = f_nn_302(F->up, ((rt_int)5LL), f_cur_line_309(F->up));
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->p_3106)).b_)).name_ = F->def_name_text_3113;
} else {
f_name_p_360(F->up, &(*(P174)rt_nil_check(F->p_3106)).b_);
}
}
f_append_306(F->up, &F->head_3107, &F->tail_3108, F->p_3106);
} else {
f_id_list_332(F->up, &F->names_3109);
f_expect_op_326(F->up, rt_g_lit(":", 1));
if (f_at_kw_311(F->up, rt_g_lit("IN", 2))) {
f_skip_322(F->up);
}
f_subtype_ind_366(F->up, &F->st_3110);
F->def_3111 = NULL;
if (f_at_op_313(F->up, rt_g_lit(":=", 2))) {
f_skip_322(F->up);
f_expr_339(F->up, &F->def_3111);
}
while ((F->names_3109 != NULL)) {
F->p_3106 = f_nn_302(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_3109)).line_));
(*(P174)rt_nil_check(F->p_3106)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3106)).name_ = (*(P174)rt_nil_check(F->names_3109)).name_;
(*(P174)rt_nil_check(F->p_3106)).a_ = F->st_3110;
(*(P174)rt_nil_check(F->p_3106)).b_ = F->def_3111;
f_append_306(F->up, &F->head_3107, &F->tail_3108, F->p_3106);
F->names_3109 = (*(P174)rt_nil_check(F->names_3109)).next_;
}
L_end_3116: ;
}
F->more_3114 = f_at_op_313(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3114)) {
f_skip_322(F->up);
}
}
L_end_3115: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_311(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_311(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_391(F->up, &(*(P174)rt_nil_check(F->x_3105)).b_);
} else if (f_at_kw_311(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_397(F->up, &(*(P174)rt_nil_check(F->x_3105)).b_);
} else if (f_at_kw_311(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1106(F->up, &(*(P174)rt_nil_check(F->x_3105)).b_);
} else {
f_perror_321(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P174)rt_nil_check(F->x_3105)).a_ = F->head_3107;
(*(P174)rt_nil_check(F->x_3105)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3105)).b_)).name_;
(*F->res_1249) = F->x_3105;
ret_:

  return;
}

static void f_instantiation_1253(struct f_greenc_1fr *up_, P174 x_1251, P174 *res_1252) {
  struct f_instantiation_1253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1251 = x_1251;
F->res_1252 = res_1252;
F->i_3117 = NULL;
F->head_3118 = NULL;
F->tail_3119 = NULL;
F->a_3120 = NULL;
F->formal_3121 = NULL;
F->mark_3122 = INT64_MIN;
F->more_3123 = INT_MIN;
F->more_3123 = 1;
f_expect_kw_324(F->up, rt_g_lit("IS", 2));
f_expect_kw_324(F->up, rt_g_lit("NEW", 3));
F->i_3117 = f_nn_302(F->up, ((rt_int)53LL), G_NV((*(P174)rt_nil_check(F->x_1251)).line_));
(*(P174)rt_nil_check(F->i_3117)).name_ = (*(P174)rt_nil_check(F->x_1251)).name_;
(*(P174)rt_nil_check(F->i_3117)).ival_ = G_NV((*(P174)rt_nil_check(F->x_1251)).kind_);
f_expect_id_328(F->up, &(*(P174)rt_nil_check(F->i_3117)).tag_);
if (f_at_op_313(F->up, rt_g_lit("(", 1))) {
f_skip_322(F->up);
while (G_NV(F->more_3123)) {
F->formal_3121 = NULL;
F->mark_3122 = ((rt_int)0LL);
if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_328(F->up, &F->formal_3121);
f_skip_322(F->up);
F->mark_3122 = ((rt_int)5LL);
} else if (((f_at_kind_315(F->up, ((rt_int)1LL)) && (f_kind_at_317(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_319(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_328(F->up, &F->formal_3121);
f_skip_322(F->up);
F->mark_3122 = ((rt_int)1LL);
}
if ((f_at_kind_315(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3122) == ((rt_int)5LL)))) {
F->a_3120 = f_nn_302(F->up, ((rt_int)5LL), f_cur_line_309(F->up));
f_designator_389(F->up, &(*(P174)rt_nil_check(F->a_3120)).name_);
} else {
f_expr_339(F->up, &F->a_3120);
}
(*(P174)rt_nil_check(F->a_3120)).formal_ = F->formal_3121;
(*(P174)rt_nil_check(F->a_3120)).flag_ = G_NV(F->mark_3122);
f_append_306(F->up, &F->head_3118, &F->tail_3119, F->a_3120);
F->more_3123 = f_at_op_313(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3123)) {
f_skip_322(F->up);
}
}
L_end_3124: ;
f_expect_op_326(F->up, rt_g_lit(")", 1));
}
f_expect_op_326(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->i_3117)).a_ = F->head_3118;
(*F->res_1252) = F->i_3117;
ret_:

  return;
}

static void f_generic_decl_1255(struct f_greenc_1fr *up_, P174 e_1254) {
  struct f_generic_decl_1255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1254 = e_1254;
F->y_3125 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1254)).kind_) == ((rt_int)54LL))) {
F->y_3125 = f_new_sym_470(F->up, ((rt_int)11LL), (*(P174)rt_nil_check(F->e_1254)).name_);
(*(P117)rt_nil_check(F->y_3125)).decl_ = F->e_1254;
f_define_465(F->up, F->y_3125, G_NV((*(P174)rt_nil_check(F->e_1254)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->e_1254)).kind_) == ((rt_int)53LL))) {
f_instantiate_1276(F->up, F->e_1254);
} else {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1254)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1257(struct f_greenc_1fr *up_, rt_gstr n_1256) {
  struct f_is_generic_name_1257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1256 = cp_rt_gstr(n_1256);
F->y_3126 = NULL;
F->y_3126 = f_lookup_424(F->up, F->n_1256);
if ((F->y_3126 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_3126)).depth_) != G_NV(F->up->depth_120))) {
F->result_ = 0;
goto ret_;
}
if ((!(F->y_3126 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3126)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1259(struct f_greenc_1fr *up_, P174 e_1258) {
  struct f_attach_generic_body_1259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1258 = e_1258;
F->y_3127 = NULL;
F->y_3127 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1258)).name_)));
(*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3127)).decl_)).c_ = F->e_1258;
F->up->generic_contexts_148 = ({ R147 *cell3128 = rt_alloc(sizeof(R147)); *cell3128 = cp_R147(({ R147 ag3129; ag3129.body_node_ = F->e_1258; ag3129.visible_ = F->up->scope_stack_121; ag3129.next_ = F->up->generic_contexts_148; ag3129; })); (P146)cell3128; });
ret_:

  return;
}

static void f_restore_generic_context_1262(struct f_greenc_1fr *up_, P174 body_node_1260, rt_int line_1261) {
  struct f_restore_generic_context_1262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1260 = body_node_1260;
F->line_1261 = line_1261;
F->ctx_3130 = NULL;
F->ctx_3130 = F->up->generic_contexts_148;
F->m_3131 = NULL;
F->z_3132 = NULL;
F->seen_3133 = INT_MIN;
while (((F->ctx_3130 != NULL) && ((*(P146)rt_nil_check(F->ctx_3130)).body_node_ != F->body_node_1260))) {
F->ctx_3130 = (*(P146)rt_nil_check(F->ctx_3130)).next_;
}
L_end_3134: ;
if ((F->ctx_3130 == NULL)) {
goto ret_;
}
F->m_3131 = (*(P146)rt_nil_check(F->ctx_3130)).visible_;
while ((F->m_3131 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->m_3131)).level_) <= ((rt_int)0LL)) && (G_NV((*(P117)rt_nil_check(F->m_3131)).kind_) != ((rt_int)11LL)))) {
F->z_3132 = ({ A116 ix3136 = F->up->table_119; ix3136.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3131)).name_))), ix3136.lo, ix3136.hi) - ix3136.lo]; });
F->seen_3133 = 0;
while ((F->z_3132 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->z_3132)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3132)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3131)).name_))))) {
F->seen_3133 = 1;
}
F->z_3132 = (*(P117)rt_nil_check(F->z_3132)).chain_;
}
L_end_3137: ;
if ((!G_NV(F->seen_3133))) {
f_copy_sym_1054(F->up, F->m_3131, &F->z_3132);
f_define_465(F->up, F->z_3132, F->line_1261);
}
}
F->m_3131 = (*(P117)rt_nil_check(F->m_3131)).stack_;
}
L_end_3135: ;
ret_:

  return;
}

static P174 f_gactual_1266(struct f_greenc_1fr *up_, P174 args_1263, rt_int nth_1264, rt_gstr name_1265) {
  struct f_gactual_1266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1263 = args_1263;
F->nth_1264 = nth_1264;
F->name_1265 = cp_rt_gstr(name_1265);
F->a_3138 = NULL;
F->a_3138 = F->args_1263;
F->i_3139 = INT64_MIN;
F->i_3139 = ((rt_int)1LL);
while ((F->a_3138 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_3138)).formal_ == NULL) && (G_NV(F->i_3139) == F->nth_1264))) {
F->result_ = F->a_3138;
goto ret_;
}
if ((((*(P174)rt_nil_check(F->a_3138)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3138)).formal_)), F->name_1265))) {
F->result_ = F->a_3138;
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_3138)).formal_ == NULL)) {
F->i_3139 = rt_add(G_NV(F->i_3139), ((rt_int)1LL));
}
F->a_3138 = (*(P174)rt_nil_check(F->a_3138)).next_;
}
L_end_3140: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1270(struct f_greenc_1fr *up_, P174 n_1267, P140 name_1268, P174 *r_1269) {
  struct f_copy_node_1270fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1267 = n_1267;
F->name_1268 = name_1268;
F->r_1269 = r_1269;
(*F->r_1269) = f_nn_302(F->up, G_NV((*(P174)rt_nil_check(F->n_1267)).kind_), G_NV((*(P174)rt_nil_check(F->n_1267)).line_));
as_R175(&(*(P174)rt_nil_check((*F->r_1269))), (*(P174)rt_nil_check(F->n_1267)));
(*(P174)rt_nil_check((*F->r_1269))).name_ = F->name_1268;
(*(P174)rt_nil_check((*F->r_1269))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1274(struct f_greenc_1fr *up_, P117 y_1271, rt_gstr name_1272, P117 fs_1273) {
  struct f_matches_formal_1274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1271 = y_1271;
F->name_1272 = cp_rt_gstr(name_1272);
F->fs_1273 = fs_1273;
if (((!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1271)).name_)), F->name_1272)) || ((G_NV((*(P117)rt_nil_check(F->y_1271)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_1271)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_456(F->up, (*(P117)rt_nil_check(F->y_1271)).params_, (*(P117)rt_nil_check(F->fs_1273)).params_) && f_same_444(F->up, (*(P117)rt_nil_check(F->y_1271)).result_, (*(P117)rt_nil_check(F->fs_1273)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_instantiate_1276(struct f_greenc_1fr *up_, P174 e_1275) {
  struct f_instantiate_1276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1275 = e_1275;
F->g_3141 = NULL;
F->g_3141 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).tag_)));
F->gd_3142 = NULL;
F->pat_3143 = NULL;
F->f_3144 = NULL;
F->a_3145 = NULL;
F->cn_3146 = NULL;
F->y_3147 = NULL;
F->z_3148 = NULL;
F->fs_3149 = NULL;
F->nth_3150 = INT64_MIN;
F->nth_3150 = ((rt_int)1LL);
F->t_3151 = NULL;
F->vt_3152 = NULL;
F->c_3153 = NULL;
F->v_3154 = NULL;
F->acc_3155 = NULL;
F->x_3156 = NULL;
F->ok_3157 = INT_MIN;
if (((F->g_3141 == NULL) || (G_NV((*(P117)rt_nil_check(F->g_3141)).kind_) != ((rt_int)11LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3142 = (*(P117)rt_nil_check(F->g_3141)).decl_;
F->pat_3143 = (*(P174)rt_nil_check(F->gd_3142)).b_;
f_open_scope_466(F->up);
F->f_3144 = (*(P174)rt_nil_check(F->gd_3142)).a_;
while ((F->f_3144 != NULL)) {
F->a_3145 = f_gactual_1266(F->up, (*(P174)rt_nil_check(F->e_1275)).a_, G_NV(F->nth_3150), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_)));
F->nth_3150 = rt_add(G_NV(F->nth_3150), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check(F->f_3144)).ival_) == ((rt_int)10LL))) {
if (((F->a_3145 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3145)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_))));
}
F->y_3147 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3145)).name_)));
if (((F->y_3147 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3147)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3145)).name_)), rt_g_lit(" is not a type", 14)));
}
f_copy_sym_1054(F->up, F->y_3147, &F->z_3148);
(*(P117)rt_nil_check(F->z_3148)).name_ = (*(P174)rt_nil_check(F->f_3144)).name_;
f_define_465(F->up, F->z_3148, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->f_3144)).ival_) == ((rt_int)11LL))) {
if ((F->a_3145 == NULL)) {
F->a_3145 = (*(P174)rt_nil_check(F->f_3144)).b_;
}
if (((F->a_3145 == NULL) || (G_NV((*(P174)rt_nil_check(F->a_3145)).kind_) != ((rt_int)5LL)))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_))));
}
f_build_subprogram_651(F->up, (*(P174)rt_nil_check(F->f_3144)).a_, &F->fs_3149);
F->y_3147 = ({ A116 ix3159 = F->up->table_119; ix3159.p[rt_index(f_hash_417(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3145)).name_))), ix3159.lo, ix3159.hi) - ix3159.lo]; });
while (((F->y_3147 != NULL) && (!f_matches_formal_1274(F->up, F->y_3147, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3145)).name_)), F->fs_3149)))) {
F->y_3147 = (*(P117)rt_nil_check(F->y_3147)).chain_;
}
L_end_3160: ;
if ((F->y_3147 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3145)).name_))), rt_g_lit(" matches generic parameter ", 27)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_))));
}
f_copy_sym_1054(F->up, F->y_3147, &F->z_3148);
(*(P117)rt_nil_check(F->z_3148)).name_ = (*(P174)rt_nil_check(F->f_3144)).name_;
f_define_465(F->up, F->z_3148, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
} else {
if ((F->a_3145 == NULL)) {
F->a_3145 = (*(P174)rt_nil_check(F->f_3144)).b_;
}
if ((F->a_3145 == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_))));
}
f_resolve_508(F->up, (*(P174)rt_nil_check(F->f_3144)).a_, &F->t_3151, &F->c_3153);
f_gexpr_806(F->up, F->a_3145, F->t_3151, &F->vt_3152, &F->v_3154);
f_check_type_487(F->up, F->vt_3152, F->t_3151, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
F->z_3148 = f_new_sym_470(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->f_3144)).name_);
f_storage_639(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3144)).name_)), F->t_3151, &F->acc_3155);
f_copy_code_624(F->up, F->t_3151, (*(P140)rt_nil_check(F->v_3154)), &F->x_3156);
f_emit_255(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_3155)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_3156))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_3148)).t_ = F->t_3151;
(*(P117)rt_nil_check(F->z_3148)).c_ = F->c_3153;
(*(P117)rt_nil_check(F->z_3148)).ro_ = 1;
if ((G_NV((*(P122)rt_nil_check(F->t_3151)).kind_) == ((rt_int)1LL))) {
f_manifest_504(F->up, F->a_3145, &(*(P117)rt_nil_check(F->z_3148)).mvalue_, &F->ok_3157);
 (void)rt_range(F->ok_3157, 0, 1);
(*(P117)rt_nil_check(F->z_3148)).hasmv_ = G_NV(F->ok_3157);
}
f_bind_642(F->up, F->z_3148, F->acc_3155);
f_define_465(F->up, F->z_3148, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
}
F->f_3144 = (*(P174)rt_nil_check(F->f_3144)).next_;
}
L_end_3158: ;
if (((*(P174)rt_nil_check(F->gd_3142)).c_ != NULL)) {
f_restore_generic_context_1262(F->up, (*(P174)rt_nil_check(F->gd_3142)).c_, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
}
if (((G_NV((*(P174)rt_nil_check(F->pat_3143)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->pat_3143)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->pat_3143)).ival_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->gd_3142)).c_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3143 = (*(P174)rt_nil_check(F->gd_3142)).c_;
}
f_copy_node_1270(F->up, F->pat_3143, (*(P174)rt_nil_check(F->e_1275)).name_, &F->cn_3146);
f_build_subprogram_651(F->up, F->cn_3146, &F->y_3147);
f_define_465(F->up, F->y_3147, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
f_subprogram_body_693(F->up, F->cn_3146, F->y_3147);
} else if ((G_NV((*(P174)rt_nil_check(F->pat_3143)).kind_) == ((rt_int)48LL))) {
f_copy_node_1270(F->up, F->pat_3143, (*(P174)rt_nil_check(F->e_1275)).name_, &F->cn_3146);
f_package_spec_1059(F->up, F->cn_3146);
F->y_3147 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).name_)));
if (((*(P174)rt_nil_check(F->gd_3142)).c_ != NULL)) {
f_copy_node_1270(F->up, (*(P174)rt_nil_check(F->gd_3142)).c_, (*(P174)rt_nil_check(F->e_1275)).name_, &F->cn_3146);
f_package_body_1064(F->up, F->cn_3146);
}
} else {
f_copy_node_1270(F->up, F->pat_3143, (*(P174)rt_nil_check(F->e_1275)).name_, &F->cn_3146);
f_task_spec_1163(F->up, F->cn_3146);
F->y_3147 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).name_)));
if (((*(P174)rt_nil_check(F->gd_3142)).c_ == NULL)) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->e_1275)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1275)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1270(F->up, (*(P174)rt_nil_check(F->gd_3142)).c_, (*(P174)rt_nil_check(F->e_1275)).name_, &F->cn_3146);
f_task_body_1167(F->up, F->cn_3146);
}
f_close_scope_467(F->up);
f_define_465(F->up, F->y_3147, G_NV((*(P174)rt_nil_check(F->e_1275)).line_));
ret_:

  return;
}

static void f_predef_type_1281(struct f_greenc_1fr *up_, rt_gstr name_1277, P122 t_1278, rt_gstr lo_1279, rt_gstr hi_1280) {
  struct f_predef_type_1281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1277 = cp_rt_gstr(name_1277);
F->t_1278 = t_1278;
F->lo_1279 = cp_rt_gstr(lo_1279);
F->hi_1280 = cp_rt_gstr(hi_1280);
F->y_3161 = NULL;
F->y_3161 = f_new_sym_470(F->up, ((rt_int)5LL), f_mk_228(F->up, F->name_1277));
(*(P117)rt_nil_check(F->y_3161)).t_ = F->t_1278;
if ((({ rt_gstr at3162 = F->lo_1279; at3162.hi >= at3162.lo ? at3162.hi - at3162.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P117)rt_nil_check(F->y_3161)).c_ = f_new_cons_473(F->up);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3161)).c_)).lo_ = f_mk_228(F->up, F->lo_1279);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3161)).c_)).hi_ = f_mk_228(F->up, F->hi_1280);
if (((({ rt_gstr at3163 = F->hi_1280; at3163.hi >= at3163.lo ? at3163.hi - at3163.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_235(F->up, G_NV(({ rt_gstr ix3167 = F->hi_1280; ix3167.p[rt_index(({ rt_gstr at3166 = F->hi_1280; at3166.lo; }), ix3167.lo, ix3167.hi) - ix3167.lo]; }))))) {
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3161)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1279));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3161)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1280));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3161)).c_)).hasm_ = 1;
}
}
f_define_465(F->up, F->y_3161, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1285(struct f_greenc_1fr *up_, rt_gstr name_1282, P122 t_1283, rt_gstr code_text_1284) {
  struct f_predef_const_1285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1282 = cp_rt_gstr(name_1282);
F->t_1283 = t_1283;
F->code_text_1284 = cp_rt_gstr(code_text_1284);
F->y_3168 = NULL;
F->y_3168 = f_new_sym_470(F->up, ((rt_int)2LL), f_mk_228(F->up, F->name_1282));
(*(P117)rt_nil_check(F->y_3168)).t_ = F->t_1283;
(*(P117)rt_nil_check(F->y_3168)).ro_ = 1;
(*(P117)rt_nil_check(F->y_3168)).access_path_ = f_mk_228(F->up, F->code_text_1284);
f_define_465(F->up, F->y_3168, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1287(struct f_greenc_1fr *up_, rt_gstr name_1286) {
  struct f_predef_exc_1287fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1286 = cp_rt_gstr(name_1286);
F->y_3169 = NULL;
F->y_3169 = f_new_sym_470(F->up, ((rt_int)6LL), f_mk_228(F->up, F->name_1286));
(*(P117)rt_nil_check(F->y_3169)).cname_ = f_mk_228(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_246(F->up)), F->name_1286), f_q_246(F->up)), one_rt_gstr(41)));
f_define_465(F->up, F->y_3169, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1291(struct f_greenc_1fr *up_, rt_gstr name_1288, P122 t_1289, rt_int v_1290) {
  struct f_predef_lit_1291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1288 = cp_rt_gstr(name_1288);
F->t_1289 = t_1289;
F->v_1290 = v_1290;
F->y_3170 = NULL;
F->y_3170 = f_new_sym_470(F->up, ((rt_int)7LL), f_mk_228(F->up, F->name_1288));
(*(P117)rt_nil_check(F->y_3170)).t_ = F->t_1289;
(*(P117)rt_nil_check(F->y_3170)).result_ = F->t_1289;
(*(P117)rt_nil_check(F->y_3170)).mvalue_ = F->v_1290;
(*(P117)rt_nil_check(F->y_3170)).hasmv_ = 1;
f_define_465(F->up, F->y_3170, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1292(struct f_greenc_1fr *up_) {
  struct f_predefine_1292fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3171 = NULL;
F->control_3172 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3173 = INT64_MIN;
F->start_3173 = ((rt_int)1LL);
F->code_no_3174 = INT64_MIN;
F->code_no_3174 = ((rt_int)0LL);
f_predef_type_1281(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_156, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_156, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1281(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_156, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1281(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_157, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1281(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_159, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1281(F->up, rt_g_lit("STRING", 6), F->up->ty_string_160, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_158, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1281(F->up, rt_g_lit("TIME", 4), F->up->ty_time_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1291(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_157, ((rt_int)0LL));
f_predef_lit_1291(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_157, ((rt_int)1LL));
{ rt_int lo3178 = ((rt_int)1LL), hi3179 = ({ rt_gstr at3176 = F->control_3172; at3176.hi >= at3176.lo ? at3176.hi - at3176.lo + 1 : (rt_int)0; });
for (rt_int it3180 = lo3178; it3180 <= hi3179; it3180++) {
F->i_3177 = it3180;
if ((G_NV(({ rt_gstr ix3181 = F->control_3172; ix3181.p[rt_index(F->i_3177, ix3181.lo, ix3181.hi) - ix3181.lo]; })) == 32)) {
f_predef_const_1285(F->up, ({ rt_gstr sl3183 = F->control_3172; rt_int l_ = G_NV(F->start_3173), h_ = rt_sub(F->i_3177, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3183.lo, sl3183.hi); rt_index(h_, sl3183.lo, sl3183.hi); } sl3183.p += l_ - sl3183.lo; sl3183.lo = l_; sl3183.hi = h_; sl3183; }), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3174))));
F->code_no_3174 = rt_add(G_NV(F->code_no_3174), ((rt_int)1LL));
F->start_3173 = rt_add(F->i_3177, ((rt_int)1LL));
}
}
}
L_end_3175: ;
f_predef_const_1285(F->up, rt_g_lit("DEL", 3), F->up->ty_char_159, rt_g_lit("127", 3));
f_predef_const_1285(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_159, rt_g_lit("33", 2));
f_predef_const_1285(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_159, rt_g_lit("36", 2));
f_predef_const_1285(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_159, rt_g_lit("63", 2));
f_predef_const_1285(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_159, rt_g_lit("64", 2));
f_predef_const_1285(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_159, rt_g_lit("91", 2));
f_predef_const_1285(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_159, rt_g_lit("92", 2));
f_predef_const_1285(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_159, rt_g_lit("93", 2));
f_predef_const_1285(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_159, rt_g_lit("94", 2));
f_predef_const_1285(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_159, rt_g_lit("96", 2));
f_predef_const_1285(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_159, rt_g_lit("123", 3));
f_predef_const_1285(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_159, rt_g_lit("125", 3));
f_predef_const_1285(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_159, rt_g_lit("126", 3));
{ rt_int lo3186 = ((rt_int)0LL), hi3187 = ((rt_int)25LL);
for (rt_int it3188 = lo3186; it3188 <= hi3187; it3188++) {
F->i_3185 = it3188;
f_predef_const_1285(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3185) - 1), 0, 127))), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3185))));
}
}
L_end_3184: ;
f_predef_const_1285(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_160, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_246(F->up)), rt_g_lit("\\n", 2)), f_q_246(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1285(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_171, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1287(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1287(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1287(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1287(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1287(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1287(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1287(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1287(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1287(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1287(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1287(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1287(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1287(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1287(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1287(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1287(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3171 = f_new_sym_470(F->up, ((rt_int)8LL), f_mk_228(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_465(F->up, F->y_3171, ((rt_int)0LL));
(*(P117)rt_nil_check(F->y_3171)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_prelude_1293(struct f_greenc_1fr *up_) {
  struct f_prelude_1293fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_lex_line_277(F->up, rt_g_lit("generic task SIGNAL is entry SEND; entry WAIT; end SIGNAL;", 58));
f_lex_line_277(F->up, rt_g_lit("task body SIGNAL is RECEIVED : BOOLEAN := FALSE; begin loop select accept SEND;", 79));
f_lex_line_277(F->up, rt_g_lit("RECEIVED := TRUE; or when RECEIVED => accept WAIT; RECEIVED := FALSE; end select;", 81));
f_lex_line_277(F->up, rt_g_lit("end loop; end SIGNAL;", 21));
f_lex_line_277(F->up, rt_g_lit("generic task SEMAPHORE is entry P; entry V; end SEMAPHORE;", 58));
f_lex_line_277(F->up, rt_g_lit("task body SEMAPHORE is begin loop accept P; accept V; end loop; end SEMAPHORE;", 78));
ret_:

  return;
}

static void f_translate_1295(struct f_greenc_1fr *up_, P174 u_1294) {
  struct f_translate_1295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1294 = u_1294;
F->p_3189 = NULL;
F->p_3189 = F->up->prelude_units_212;
F->y_3190 = NULL;
while ((F->p_3189 != NULL)) {
f_decl_element_655(F->up, F->p_3189);
F->p_3189 = (*(P174)rt_nil_check(F->p_3189)).next_;
}
L_end_3191: ;
F->p_3189 = F->u_1294;
f_open_scope_466(F->up);
while ((F->p_3189 != NULL)) {
F->up->barriers_200 = NULL;
F->y_3190 = f_lookup_424(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3189)).name_)));
if ((((((G_NV((*(P174)rt_nil_check(F->p_3189)).kind_) == ((rt_int)49LL)) || (G_NV((*(P174)rt_nil_check(F->p_3189)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->p_3189)).kind_) == ((rt_int)44LL))) || (G_NV((*(P174)rt_nil_check(F->p_3189)).kind_) == ((rt_int)45LL))) && (F->y_3190 != NULL))) {
if ((((*(P117)rt_nil_check(F->y_3190)).decl_ != NULL) && ((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3190)).decl_)).formal_ != NULL))) {
(*(P174)rt_nil_check(F->p_3189)).formal_ = f_mk_228(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3189)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3190)).decl_)).formal_))));
}
}
f_push_barrier_671(F->up, F->p_3189, ((rt_int)1LL));
if (((*(P174)rt_nil_check(F->p_3189)).next_ == NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3189)).kind_) != ((rt_int)44LL)) || ((*(P174)rt_nil_check(F->p_3189)).a_ != NULL))) {
f_fail_249(F->up, G_NV((*(P174)rt_nil_check(F->p_3189)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_651(F->up, F->p_3189, &F->y_3190);
f_define_465(F->up, F->y_3190, G_NV((*(P174)rt_nil_check(F->p_3189)).line_));
f_subprogram_body_693(F->up, F->p_3189, F->y_3190);
F->up->main_name_222 = (*(P117)rt_nil_check(F->y_3190)).cname_;
} else {
f_decl_element_655(F->up, F->p_3189);
}
F->p_3189 = (*(P174)rt_nil_check(F->p_3189)).next_;
}
L_end_3192: ;
ret_:

  return;
}

static void f_print_program_1296(struct f_greenc_1fr *up_) {
  struct f_print_program_1296fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_633(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_246(F->up)), rt_g_lit("paleo.h", 7)), f_q_246(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_257(F->up, F->up->out_types_128);
f_print_buffer_257(F->up, F->up->out_frames_129);
f_print_buffer_257(F->up, F->up->out_helpers_130);
f_print_buffer_257(F->up, F->up->out_protos_131);
f_print_buffer_257(F->up, F->up->out_globals_132);
f_print_buffer_257(F->up, F->up->out_funcs_133);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_257(F->up, F->up->out_excs_135);
f_print_buffer_257(F->up, F->up->out_init_134);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->up->main_name_222))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_257(F->up, F->up->out_awaits_209);
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
F->y_conflict_105 = ((rt_int)12LL);
F->f_const_obj_106 = ((rt_int)1LL);
F->f_deferred_107 = ((rt_int)2LL);
F->toks_112.lo = ((rt_int)1LL); F->toks_112.hi = ((rt_int)1000000LL);
F->toks_112.lo2 = 1; F->toks_112.hi2 = 1;
F->toks_112.p = rt_alloc(sizeof(P110) * (size_t)G_CNT(F->toks_112));
F->ntoks_113 = INT64_MIN;
F->ntoks_113 = ((rt_int)0LL);
F->tpos_114 = INT64_MIN;
F->tpos_114 = ((rt_int)1LL);
F->src_line_115 = INT64_MIN;
F->src_line_115 = ((rt_int)0LL);
F->table_119.lo = ((rt_int)0LL); F->table_119.hi = ((rt_int)4092LL);
F->table_119.lo2 = 1; F->table_119.hi2 = 1;
F->table_119.p = rt_alloc(sizeof(P117) * (size_t)G_CNT(F->table_119));
F->depth_120 = INT64_MIN;
F->depth_120 = ((rt_int)0LL);
F->scope_stack_121 = NULL;
F->all_types_124 = NULL;
F->serial_125 = INT64_MIN;
F->serial_125 = ((rt_int)0LL);
F->out_types_128 = NULL;
F->out_frames_129 = NULL;
F->out_helpers_130 = NULL;
F->out_protos_131 = NULL;
F->out_globals_132 = NULL;
F->out_funcs_133 = NULL;
F->out_init_134 = NULL;
F->out_excs_135 = NULL;
F->code_136 = NULL;
F->fields_buf_137 = NULL;
F->in_func_138 = INT_MIN;
F->in_func_138 = 0;
F->cur_level_139 = INT64_MIN;
F->cur_level_139 = ((rt_int)0LL);
F->st_field_141 = NULL;
F->func_sym_142 = NULL;
F->exits_145 = NULL;
F->generic_contexts_148 = NULL;
F->accept_exits_149 = NULL;
F->frames_150 = INT64_MIN;
F->frames_150 = ((rt_int)0LL);
F->handlers_153 = NULL;
F->cleanups_154 = NULL;
F->trial_155 = INT64_MIN;
F->trial_155 = ((rt_int)0LL);
F->ty_int_156 = NULL;
F->ty_bool_157 = NULL;
F->ty_float_158 = NULL;
F->ty_char_159 = NULL;
F->ty_string_160 = NULL;
F->ty_void_161 = NULL;
F->ty_nil_162 = NULL;
F->ty_univ_163 = NULL;
F->ty_act_164 = NULL;
F->ty_tdecl_165 = NULL;
F->ty_entry_166 = NULL;
F->ty_short_167 = NULL;
F->ty_long_168 = NULL;
F->ty_sfloat_169 = NULL;
F->ty_lfloat_170 = NULL;
F->ty_time_171 = NULL;
F->ty_ufixed_172 = NULL;
F->completing_173 = NULL;
F->anon_node_176 = NULL;
F->anon_typ_177 = NULL;
F->anon_cons_180 = NULL;
F->agg_bounds_181 = NULL;
F->disc_syms_182 = NULL;
F->unit_names_184.lo = ((rt_int)1LL); F->unit_names_184.hi = ((rt_int)1000LL);
F->unit_names_184.lo2 = 1; F->unit_names_184.hi2 = 1;
F->unit_names_184.p = rt_alloc(sizeof(P140) * (size_t)G_CNT(F->unit_names_184));
F->unit_depths_186.lo = ((rt_int)1LL); F->unit_depths_186.hi = ((rt_int)1000LL);
F->unit_depths_186.lo2 = 1; F->unit_depths_186.hi2 = 1;
F->unit_depths_186.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->unit_depths_186));
for (rt_int i187 = 0; i187 < G_CNT(F->unit_depths_186); i187++) F->unit_depths_186.p[i187] = INT64_MIN;
F->nunits_188 = INT64_MIN;
F->nunits_188 = ((rt_int)0LL);
F->body_labels_191 = NULL;
F->body_gotos_192 = NULL;
F->segments_193 = INT64_MIN;
F->segments_193 = ((rt_int)0LL);
F->handler_exits_194 = NULL;
F->handler_depth_195 = INT64_MIN;
F->handler_depth_195 = ((rt_int)0LL);
F->post_checks_196 = NULL;
F->env_names_197 = NULL;
F->barriers_200 = NULL;
F->text_io_qualified_201 = INT_MIN;
F->text_io_qualified_201 = 0;
F->cur_task_202 = NULL;
F->accept_depth_203 = INT64_MIN;
F->accept_depth_203 = ((rt_int)0LL);
F->famarg_done_204 = INT_MIN;
F->famarg_done_204 = 0;
F->fam_ix_205 = NULL;
F->call_task_ix_206 = NULL;
F->saw_interface_207 = INT_MIN;
F->saw_interface_207 = 0;
F->defer_entry_structs_208 = INT_MIN;
F->defer_entry_structs_208 = 0;
F->out_awaits_209 = NULL;
F->no_cons_210 = NULL;
F->units_211 = NULL;
F->prelude_units_212 = NULL;
F->pkg_stack_213 = NULL;
F->cur_pkg_214 = NULL;
F->prefix_hint_215 = NULL;
F->call_want_216 = NULL;
F->pure_sym_217 = NULL;
F->pure_depth_218 = INT64_MIN;
F->pure_depth_218 = ((rt_int)0LL);
F->vrp_ok_219 = INT_MIN;
F->vrp_ok_219 = 0;
F->in_lv_path_220 = INT_MIN;
F->in_lv_path_220 = 0;
F->last_deref_221 = INT_MIN;
F->last_deref_221 = 0;
F->main_name_222 = NULL;
F->conf_system_223 = NULL;
F->conf_storage_unit_224 = INT64_MIN;
F->conf_storage_unit_224 = ((rt_int)8LL);
F->conf_memory_size_225 = INT64_MIN;
F->conf_memory_size_225 = ((rt_int)1048576LL);
F->conf_optimize_226 = NULL;
F->env_names_197 = f_mk_228(F, rt_g_lit("", 0));
F->out_types_128 = f_new_buffer_250(F);
F->out_frames_129 = f_new_buffer_250(F);
F->out_helpers_130 = f_new_buffer_250(F);
F->out_protos_131 = f_new_buffer_250(F);
F->out_globals_132 = f_new_buffer_250(F);
F->out_funcs_133 = f_new_buffer_250(F);
F->out_init_134 = f_new_buffer_250(F);
F->out_excs_135 = f_new_buffer_250(F);
F->code_136 = F->out_init_134;
F->no_cons_210 = f_new_cons_473(F);
F->ty_int_156 = f_new_typ_472(F, ((rt_int)1LL));
F->ty_bool_157 = f_new_typ_472(F, ((rt_int)2LL));
F->ty_float_158 = f_new_typ_472(F, ((rt_int)3LL));
F->ty_char_159 = f_new_typ_472(F, ((rt_int)11LL));
F->ty_string_160 = f_new_typ_472(F, ((rt_int)6LL));
(*(P122)rt_nil_check(F->ty_string_160)).name_ = f_mk_228(F, rt_g_lit("STRING", 6));
(*(P122)rt_nil_check(F->ty_string_160)).cname_ = f_mk_228(F, rt_g_lit("rt_gstr", 7));
(*(P122)rt_nil_check(F->ty_string_160)).dims_ = ((rt_int)1LL);
(*(P122)rt_nil_check(F->ty_string_160)).elem_ = F->ty_char_159;
(*(P122)rt_nil_check(F->ty_string_160)).tcons_ = f_new_cons_473(F);
(*(P178)rt_nil_check((*(P122)rt_nil_check(F->ty_string_160)).tcons_)).lo_ = f_mk_228(F, rt_g_lit("1", 1));
F->ty_void_161 = f_new_typ_472(F, ((rt_int)9LL));
F->ty_nil_162 = f_new_typ_472(F, ((rt_int)10LL));
F->ty_act_164 = f_new_typ_472(F, ((rt_int)13LL));
F->ty_tdecl_165 = f_new_typ_472(F, ((rt_int)14LL));
F->ty_entry_166 = f_new_typ_472(F, ((rt_int)15LL));
(*(P122)rt_nil_check(F->ty_int_156)).name_ = f_mk_228(F, rt_g_lit("INTEGER", 7));
(*(P122)rt_nil_check(F->ty_string_160)).idx_ = F->ty_int_156;
(*(P122)rt_nil_check(F->ty_string_160)).next_ = F->all_types_124;
F->all_types_124 = F->ty_string_160;
(*(P122)rt_nil_check(F->ty_float_158)).name_ = f_mk_228(F, rt_g_lit("FLOAT", 5));
(*(P122)rt_nil_check(F->ty_float_158)).ndigits_ = ((rt_int)15LL);
F->ty_short_167 = f_new_typ_472(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_short_167)).name_ = f_mk_228(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_168 = f_new_typ_472(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_long_168)).name_ = f_mk_228(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_169 = f_new_typ_472(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_sfloat_169)).name_ = f_mk_228(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P122)rt_nil_check(F->ty_sfloat_169)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_170 = f_new_typ_472(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_lfloat_170)).name_ = f_mk_228(F, rt_g_lit("LONG_FLOAT", 10));
(*(P122)rt_nil_check(F->ty_lfloat_170)).ndigits_ = ((rt_int)15LL);
F->ty_time_171 = f_new_typ_472(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_time_171)).name_ = f_mk_228(F, rt_g_lit("TIME", 4));
(*(P122)rt_nil_check(F->ty_time_171)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_172 = f_new_typ_472(F, ((rt_int)16LL));
(*(P122)rt_nil_check(F->ty_ufixed_172)).name_ = f_mk_228(F, rt_g_lit("universal fixed", 15));
F->out_awaits_209 = f_new_buffer_250(F);
f_predefine_1292(F);
f_prelude_1293(F);
f_add_token_266(F, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
f_compilation_415(F, &F->prelude_units_212);
F->ntoks_113 = ((rt_int)0LL);
F->tpos_114 = ((rt_int)1LL);
F->src_line_115 = ((rt_int)0LL);
f_read_source_299(F);
f_compilation_415(F, &F->units_211);
if ((F->units_211 == NULL)) {
f_fail_249(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1295(F, F->units_211);
f_print_program_1296(F);
ret_:

  return;
}

static void as_A2588(A2588 *d, A2588 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2588 cp_A2588(A2588 s) {
  A2588 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2588(A2588 a, A2588 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2588 cat_A2588(A2588 a, A2588 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2588 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2588 one_A2588(rt_int e) {
  A2588 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2585(A2585 *d, A2585 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2585 cp_A2585(A2585 s) {
  A2585 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2585(A2585 a, A2585 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2585 cat_A2585(A2585 a, A2585 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2585 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2585 one_A2585(rt_int e) {
  A2585 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2580(A2580 *d, A2580 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2580 cp_A2580(A2580 s) {
  A2580 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2580(A2580 a, A2580 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2580 and_A2580(A2580 a, A2580 b) { A2580 r = cp_A2580(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2580 or_A2580(A2580 a, A2580 b) { A2580 r = cp_A2580(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2580 xor_A2580(A2580 a, A2580 b) { A2580 r = cp_A2580(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2580 not_A2580(A2580 a) { A2580 r = cp_A2580(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2580 cat_A2580(A2580 a, A2580 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2580 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2580 one_A2580(int e) {
  A2580 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2255(A2255 *d, A2255 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2255 cp_A2255(A2255 s) {
  A2255 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2255(A2255 a, A2255 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2255 cat_A2255(A2255 a, A2255 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2255 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2255 one_A2255(rt_int e) {
  A2255 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R1972(R1972 *d, R1972 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R1972 cp_R1972(R1972 s) {
  R1972 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1972(R1972 a, R1972 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1851(R1851 *d, R1851 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1851 cp_R1851(R1851 s) {
  R1851 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1851(R1851 a, R1851 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1847(R1847 *d, R1847 s) {
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
static R1847 cp_R1847(R1847 s) {
  R1847 d = s;
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
static int eq_R1847(R1847 a, R1847 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1829(R1829 *d, R1829 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1829 cp_R1829(R1829 s) {
  R1829 d = s;
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
static int eq_R1829(R1829 a, R1829 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_) && (a.dsym_ == b.dsym_);
}
static void as_R199(R199 *d, R199 s) {
  d->limit_ = s.limit_;
  d->keep_ = s.keep_;
  d->allowed_ = s.allowed_;
  d->next_ = s.next_;
}
static R199 cp_R199(R199 s) {
  R199 d = s;
  d.limit_ = s.limit_;
  d.keep_ = s.keep_;
  d.allowed_ = s.allowed_;
  d.next_ = s.next_;
  return d;
}
static int eq_R199(R199 a, R199 b) {
  return 1 && (a.limit_ == b.limit_) && (a.keep_ == b.keep_) && (a.allowed_ == b.allowed_) && (a.next_ == b.next_);
}
static void as_R190(R190 *d, R190 s) {
  d->name_ = s.name_;
  d->cname_ = s.cname_;
  d->path_ = s.path_;
  d->frames_ = s.frames_;
  d->line_ = s.line_;
  d->next_ = s.next_;
}
static R190 cp_R190(R190 s) {
  R190 d = s;
  d.name_ = s.name_;
  d.cname_ = s.cname_;
  d.path_ = s.path_;
  d.frames_ = s.frames_;
  d.line_ = s.line_;
  d.next_ = s.next_;
  return d;
}
static int eq_R190(R190 a, R190 b) {
  return 1 && (a.name_ == b.name_) && (a.cname_ == b.cname_) && (a.path_ == b.path_) && (a.frames_ == b.frames_) && (a.line_ == b.line_) && (a.next_ == b.next_);
}
static void as_A185(A185 *d, A185 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A185 cp_A185(A185 s) {
  A185 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A185(A185 a, A185 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A185 cat_A185(A185 a, A185 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A185 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A185 one_A185(rt_int e) {
  A185 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A183(A183 *d, A183 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A183 cp_A183(A183 s) {
  A183 d = s; d.p = rt_alloc(sizeof(P140) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A183(A183 a, A183 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A183 cat_A183(A183 a, A183 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A183 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P140) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A183 one_A183(P140 e) {
  A183 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P140)); r.p[0] = e;
  return r;
}
static void as_R179(R179 *d, R179 s) {
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
static R179 cp_R179(R179 s) {
  R179 d = s;
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
static int eq_R179(R179 a, R179 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_) && (a.inner_ == b.inner_) && (a.dv_ == b.dv_);
}
static void as_R175(R175 *d, R175 s) {
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
static R175 cp_R175(R175 s) {
  R175 d = s;
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
static int eq_R175(R175 a, R175 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R152(R152 *d, R152 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R152 cp_R152(R152 s) {
  R152 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R152(R152 a, R152 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R147(R147 *d, R147 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R147 cp_R147(R147 s) {
  R147 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R147(R147 a, R147 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R144(R144 *d, R144 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R144 cp_R144(R144 s) {
  R144 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R144(R144 a, R144 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R127(R127 *d, R127 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R127 cp_R127(R127 s) {
  R127 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R127(R127 a, R127 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R123(R123 *d, R123 s) {
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
static R123 cp_R123(R123 s) {
  R123 d = s;
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
static int eq_R123(R123 a, R123 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_);
}
static void as_R118(R118 *d, R118 s) {
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
static R118 cp_R118(R118 s) {
  R118 d = s;
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
static int eq_R118(R118 a, R118 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_) && (a.flags_ == b.flags_);
}
static void as_A116(A116 *d, A116 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A116 cp_A116(A116 s) {
  A116 d = s; d.p = rt_alloc(sizeof(P117) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A116(A116 a, A116 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A116 cat_A116(A116 a, A116 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A116 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P117) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A116 one_A116(P117 e) {
  A116 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P117)); r.p[0] = e;
  return r;
}
static void as_R111(R111 *d, R111 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R111 cp_R111(R111 s) {
  R111 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R111(R111 a, R111 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A109(A109 *d, A109 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A109 cp_A109(A109 s) {
  A109 d = s; d.p = rt_alloc(sizeof(P110) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A109(A109 a, A109 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A109 cat_A109(A109 a, A109 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A109 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P110) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A109 one_A109(P110 e) {
  A109 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P110)); r.p[0] = e;
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
  ex_compile_error_108 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
