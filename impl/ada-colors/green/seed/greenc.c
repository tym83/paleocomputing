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
typedef struct A202 A202;
struct A202 { rt_int lo, hi, lo2, hi2; P140 *p; };
typedef struct R205 R205;
typedef struct R205 *P204;
struct R127 { int dummy_; P151 head_; P151 tail_; };
struct R152 { int dummy_; P140 s_; P151 next_; };
struct R111 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P140 s_; };
struct R175 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P140 name_; P140 tag_; P174 a_; P174 b_; P174 c_; P174 d_; P174 e_; P174 next_; P140 formal_; };
struct R205 { int dummy_; P174 u_; rt_int first_; rt_int last_; P140 env_; P204 next_; };
typedef struct R1921 R1921;
typedef struct R1921 *P1920;
struct R118 { int dummy_; rt_int kind_; P140 name_; P122 t_; P178 c_; P140 access_path_; P140 cname_; int ro_; rt_int mvalue_; int hasmv_; P174 decl_; P1920 params_; P122 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P117 members_; P117 mnext_; P117 chain_; P117 stack_; rt_int flags_; };
typedef struct R1939 R1939;
typedef struct R1939 *P1938;
struct R123 { int dummy_; rt_int kind_; P140 name_; P174 lits_; P122 elem_; P122 idx_; P178 elemcons_; P178 tcons_; P1938 fields_; P122 target_; P174 decl_; P140 cname_; int forward_; int defined_; int priv_; P122 next_; P122 idx2_; P140 littab_; P122 parent_; rt_int ndigits_; P140 fdelta_; P140 fsmall_; rt_int dims_; int is_restricted_; P122 view_of_; };
typedef struct R1943 R1943;
typedef struct R1943 *P1942;
struct R179 { int dummy_; P140 lo_; P140 hi_; P140 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P140 lo2_; P140 hi2_; P140 acc_; P178 inner_; P1942 dv_; };
struct R1943 { int dummy_; P140 name_; P140 v_; P1942 next_; };
struct R1921 { int dummy_; P140 name_; rt_int mode_; P122 t_; P178 c_; P140 cfield_; P174 dflt_; P1920 next_; P117 dsym_; };
typedef struct R2064 R2064;
typedef struct R2064 *P2063;
struct R2064 { int dummy_; P140 disc_; P174 arm_; P174 variant_; P2063 next_; };
struct R1939 { int dummy_; P140 name_; P122 t_; P178 c_; P1938 next_; P174 dflt_; int is_const_; int is_discr_; P117 dsym_; P2063 guard_; P140 cond_; int dyn_; };
struct R199 { int dummy_; rt_int limit_; rt_int keep_; P140 allowed_; P198 next_; };
struct R190 { int dummy_; P140 name_; P140 cname_; P140 path_; rt_int frames_; rt_int line_; P189 next_; };
typedef struct A2378 A2378;
struct A2378 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P140 match_; P140 label_; rt_int depth_; int is_loop_; P143 next_; };
typedef struct A2697 A2697;
struct A2697 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2702 A2702;
struct A2702 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2705 A2705;
struct A2705 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R147 { int dummy_; P174 body_node_; P117 visible_; P146 next_; };
struct f_mk_237fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_236;
 P140 result_;
 rt_gstr r_1372;
};
struct f_new_name_240fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_238;
 P140 *res_239;
};
struct f_is_letter_242fr { int dummy;
 struct f_greenc_1fr *up;
 int c_241;
 int result_;
};
struct f_is_digit_244fr { int dummy;
 struct f_greenc_1fr *up;
 int c_243;
 int result_;
};
struct f_upper_246fr { int dummy;
 struct f_greenc_1fr *up;
 int c_245;
 int result_;
};
struct f_lower_s_248fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_247;
 rt_gstr result_;
 rt_gstr r_1376;
 rt_int i_1379;
};
struct f_upper_s_250fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_249;
 rt_gstr result_;
 rt_gstr r_1387;
 rt_int i_1390;
};
struct f_is_operator_252fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_251;
 int result_;
};
struct f_c_field_254fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_253;
 rt_gstr result_;
};
struct f_q_255fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_258fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_256;
 rt_gstr msg_257;
};
struct f_new_buffer_259fr { int dummy;
 struct f_greenc_1fr *up;
 P126 result_;
};
struct f_put_to_262fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_260;
 rt_gstr s_261;
 P151 l_1399;
};
struct f_emit_264fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_263;
};
struct f_print_buffer_266fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_265;
 P151 l_1402;
};
struct f_splice_269fr { int dummy;
 struct f_greenc_1fr *up;
 P126 a_267;
 P126 b_268;
};
struct f_is_reserved_271fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_270;
 int result_;
};
struct f_add_token_275fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_272;
 rt_gstr s_273;
 rt_int ival_274;
};
struct f_digit_value_277fr { int dummy;
 struct f_greenc_1fr *up;
 int c_276;
 rt_int result_;
};
struct f_digit_in_280fr { int dummy;
 struct f_greenc_1fr *up;
 int c_278;
 rt_int base_279;
 rt_int result_;
 rt_int d_1410;
};
struct f_accumulate_284fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_281;
 rt_int base_282;
 rt_int d_283;
};
struct f_lex_line_286fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_285;
 rt_int i_1411;
 rt_int j_1412;
 rt_int n_1413;
 int c_1415;
 int quote_1416;
 rt_int v_1417;
 rt_int d_1418;
 rt_gstr buf_1419;
 rt_int bl_1421;
 rt_int base_1463;
 rt_gstr two_1507;
};
struct f_exponent_ahead_289fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_287;
 rt_int j_288;
 int result_;
};
struct f_exponent_294fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_290;
 rt_int *j_291;
 rt_gstr *buf_292;
 rt_int *bl_293;
};
struct f_include_open_297fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_295;
 rt_int *length_296;
};
struct f_include_char_300fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_298;
 int *c_299;
};
struct f_check_include_301fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1554;
};
struct f_include_text_303fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_302;
 rt_gstr t_1565;
 rt_int saved_line_1567;
 rt_int from_1568;
 rt_int k_1570;
 rt_int k_1577;
};
struct f_include_line_307fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_304;
 rt_int from_305;
 rt_int to_306;
 rt_gstr l_1582;
 rt_int k_1585;
};
struct f_read_source_308fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1593;
 rt_int bl_1595;
 int c_1596;
};
struct f_nn_311fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_309;
 rt_int line_310;
 P174 result_;
};
struct f_append_315fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *head_312;
 P174 *tail_313;
 P174 x_314;
};
struct f_list_len_317fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_316;
 rt_int result_;
 rt_int n_1612;
 P174 p_1613;
};
struct f_cur_line_318fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_320fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_319;
 int result_;
};
struct f_at_op_322fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_321;
 int result_;
};
struct f_at_kind_324fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_323;
 int result_;
};
struct f_kind_at_326fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_325;
 rt_int result_;
};
struct f_text_at_328fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_327;
 rt_gstr result_;
};
struct f_perror_330fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_329;
};
struct f_skip_331fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_333fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_332;
};
struct f_expect_op_335fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_334;
};
struct f_expect_id_337fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_336;
};
struct f_name_node_339fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_338;
 P174 x_1628;
};
struct f_id_list_341fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_340;
 P174 head_1629;
 P174 tail_1630;
 P174 x_1631;
};
struct f_binop_346fr { int dummy;
 struct f_greenc_1fr *up;
 P140 op_342;
 P174 l_343;
 P174 r_344;
 rt_int line_345;
 P174 result_;
 P174 x_1633;
};
struct f_expr_348fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_347;
 P174 l_1634;
 P174 r_1635;
 P140 op_1636;
 P140 first_op_1637;
 rt_int line_1638;
 int short_1639;
 int first_short_1640;
};
struct f_is_rel_350fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_349;
 int result_;
};
struct f_relation_352fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_351;
 P174 l_1643;
 P174 r_1644;
 P174 lo_1645;
 P174 hi_1646;
 P174 t_1647;
 P140 op_1648;
 rt_int line_1649;
 int neg_1650;
};
struct f_path_of_354fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_353;
 rt_gstr result_;
};
struct f_simple_expr_356fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_355;
 P174 l_1654;
 P174 r_1655;
 P140 op_1656;
 rt_int line_1657;
};
struct f_term_358fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_357;
 P174 l_1661;
 P174 r_1662;
 P140 op_1663;
 rt_int line_1664;
};
struct f_factor_360fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_359;
 P174 l_1667;
 P174 r_1668;
 P140 op_1669;
 rt_int line_1670;
};
struct f_primary_362fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_361;
 P174 x_1672;
 rt_int line_1673;
};
struct f_agg_or_paren_364fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_363;
 rt_int line_1678;
 P174 items_1679;
 P174 itail_1680;
 P174 it_1681;
 P174 first_1682;
 P174 keys_1683;
 P174 ktail_1684;
 P174 lab_1685;
 P174 x_1686;
 int more_1687;
};
struct f_choice_token_366fr { int dummy;
 struct f_greenc_1fr *up;
 P110 t_365;
 int result_;
};
struct f_aggregate_ahead_367fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1690;
 rt_int k_1691;
 P110 t_1694;
};
struct f_name_p_369fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_368;
 P174 p_1696;
 P174 x_1697;
 P174 args_1698;
 P174 atail_1699;
 P174 lo_1700;
 P174 r_1701;
 rt_int line_1702;
 int more_1703;
 P140 formal_1707;
 rt_int mark_1708;
};
struct f_component_list_371fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_370;
 P174 comps_1715;
 P174 ctail_1716;
 P174 names_1717;
 P174 st_1718;
 P174 def_1719;
 P174 cm_1720;
 P174 v_1721;
 P174 arm_1722;
 P174 atail_1723;
 P174 labs_1724;
 P174 ltail_1725;
 P174 l_1726;
 int is_c_1727;
};
struct f_discrete_range_p_373fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_372;
 P174 lo_1732;
 P174 r_1733;
 rt_int line_1734;
};
struct f_subtype_ind_375fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_374;
 P140 f_1735;
 P174 x_1736;
 P174 r_1737;
 P174 args_1738;
 P174 atail_1739;
 P174 lo_1740;
 rt_int line_1741;
 int more_1742;
};
struct f_type_spec_377fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_376;
 P174 x_1745;
};
struct f_type_def_379fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_378;
 P174 x_1746;
 P174 lits_1747;
 P174 ltail_1748;
 P174 l_1749;
 P174 idx_1750;
 P174 itail_1751;
 P174 r_1752;
 P174 comps_1753;
 P174 ctail_1754;
 P174 names_1755;
 P174 st_1756;
 P174 def_1757;
 P174 cm_1758;
 rt_int line_1759;
 int more_1760;
};
struct f_pragma_p_381fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_380;
 P174 x_1764;
 P174 a_1765;
 P174 head_1766;
 P174 tail_1767;
};
struct f_check_pragma_383fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_382;
 rt_gstr p_1769;
 rt_int n_1770;
 P174 a_1771;
};
struct f_visibility_p_385fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_384;
 P174 names_1773;
 P140 v_1774;
};
struct f_unit_p_387fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_386;
 P140 v_1776;
 P174 x_1777;
};
struct f_skip_representation_388fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_390fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_389;
 P174 head_1782;
 P174 tail_1783;
 P174 x_1784;
 P174 names_1785;
};
struct f_object_decl_392fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_391;
 P174 head_1787;
 P174 tail_1788;
 P174 names_1789;
 P174 st_1790;
 P174 init_1791;
 P174 x_1792;
 rt_int line_1793;
 int is_const_1794;
};
struct f_type_decl_394fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_393;
 P174 x_1797;
 rt_int line_1798;
};
struct f_formal_part_396fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_395;
 P174 head_1799;
 P174 tail_1800;
 P174 names_1801;
 P174 st_1802;
 P174 def_1803;
 P174 p_1804;
 rt_int mode_1805;
 int more_1806;
};
struct f_designator_398fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_397;
};
struct f_subprogram_400fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_399;
 P174 x_1813;
 rt_int line_1814;
 int is_proc_1815;
};
struct f_body_part_402fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_401;
};
struct f_parse_handlers_404fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_403;
 P174 head_1817;
 P174 tail_1818;
 P174 h_1819;
 P174 names_1820;
 P174 ntail_1821;
 P174 n_1822;
};
struct f_package_p_406fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_405;
 P174 x_1826;
 rt_int line_1827;
};
struct f_at_statements_end_407fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_409fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_408;
 P174 head_1828;
 P174 tail_1829;
 P174 x_1830;
};
struct f_statement_411fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_410;
 P174 l_1832;
 P174 x_1833;
 P140 label_1834;
};
struct f_labelled_statement_414fr { int dummy;
 struct f_greenc_1fr *up;
 P140 label_412;
 P174 *res_413;
 P174 x_1835;
 P174 t_1836;
 rt_int line_1837;
};
struct f_task_statement_416fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_415;
};
struct f_if_stmt_418fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_417;
 P174 x_1841;
 P174 arm_1842;
 P174 head_1843;
 P174 tail_1844;
 int go_1845;
};
struct f_case_stmt_420fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_419;
 P174 x_1847;
 P174 arm_1848;
 P174 head_1849;
 P174 tail_1850;
 P174 labs_1851;
 P174 ltail_1852;
 P174 l_1853;
 int others_arm_1854;
};
struct f_loop_stmt_422fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_421;
 P174 x_1857;
 P174 r_1858;
 rt_int line_1859;
};
struct f_compilation_424fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_423;
 rt_int first_1860;
 P174 head_1861;
 P174 tail_1862;
 P174 x_1863;
};
struct f_hash_426fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_425;
 rt_int result_;
 rt_int h_1870;
 rt_int i_1873;
};
struct f_listed_429fr { int dummy;
 struct f_greenc_1fr *up;
 P140 list_427;
 rt_gstr name_428;
 int result_;
 rt_gstr l_1878;
 rt_int n_1879;
 rt_int i_1884;
};
struct f_visible_sym_431fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_430;
 int result_;
 P198 b_1891;
};
struct f_lookup_433fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_432;
 P117 result_;
 P117 y_1893;
};
struct f_same_task_436fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_434;
 P117 b_435;
 int result_;
};
struct f_lookup_entry_439fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_437;
 P117 owner_438;
 P117 result_;
 P117 y_1896;
};
struct f_lookup_at_442fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_440;
 rt_int d_441;
 P117 result_;
 P117 y_1899;
};
struct f_enclosing_depth_444fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_443;
 rt_int result_;
 rt_int i_1903;
};
struct f_push_unit_446fr { int dummy;
 struct f_greenc_1fr *up;
 P140 name_445;
};
struct f_lookup_decl_448fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_447;
 P117 result_;
 P117 y_1911;
};
struct f_overloadable_450fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_449;
 int result_;
};
struct f_same_453fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_451;
 P122 b_452;
 int result_;
};
struct f_base_view_455fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_454;
 P122 result_;
 P122 r_1914;
};
struct f_root_457fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_456;
 P122 result_;
 P122 r_1916;
};
struct f_derived_from_460fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_458;
 P122 b_459;
 int result_;
 P122 r_1918;
};
struct f_is_numeric_462fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_461;
 int result_;
};
struct f_is_discrete_464fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_463;
 int result_;
};
struct f_same_types_467fr { int dummy;
 struct f_greenc_1fr *up;
 P1920 a_465;
 P1920 b_466;
 int result_;
 P1920 x_1922;
 P1920 y_1923;
};
struct f_same_signature_470fr { int dummy;
 struct f_greenc_1fr *up;
 P1920 a_468;
 P1920 b_469;
 int result_;
 P1920 x_1925;
 P1920 y_1926;
};
struct f_distinct_overload_473fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_471;
 P117 z_472;
 int result_;
};
struct f_define_476fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_474;
 rt_int line_475;
 rt_int h_1928;
 P117 z_1929;
};
struct f_open_scope_477fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_478fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_481fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_479;
 P140 name_480;
 P117 result_;
};
struct f_new_typ_483fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_482;
 P122 result_;
};
struct f_new_cons_484fr { int dummy;
 struct f_greenc_1fr *up;
 P178 result_;
};
struct f_bounded_486fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_485;
 int result_;
};
struct f_bounded_hi_488fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_487;
 int result_;
};
struct f_static_bounds_490fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_489;
 int result_;
};
struct f_discriminated_492fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_491;
 int result_;
};
struct f_kind_name_494fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_493;
 rt_gstr result_;
};
struct f_check_type_498fr { int dummy;
 struct f_greenc_1fr *up;
 P122 got_495;
 P122 want_496;
 rt_int line_497;
};
struct f_field_count_500fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_499;
 rt_int result_;
 rt_int n_1947;
 P1938 f_1948;
};
struct f_ctype_503fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_501;
 P140 *r_502;
 P140 s_1950;
};
struct f_field_decls_506fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_504;
 P140 *r_505;
 P1938 f_1952;
 P140 s_1953;
 P140 ct_1954;
};
struct f_declare_ctype_508fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_507;
 P140 ct_1956;
 P140 s_1957;
 P122 target_1958;
};
struct f_lit_index_511fr { int dummy;
 struct f_greenc_1fr *up;
 P174 lits_509;
 rt_gstr name_510;
 rt_int result_;
 rt_int i_1959;
 P174 l_1960;
};
struct f_manifest_515fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_512;
 rt_int *v_513;
 int *ok_514;
 rt_int a_1962;
 rt_int b_1963;
 int ok2_1964;
 P117 y_1965;
};
struct f_resolve_519fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_516;
 P122 *t_517;
 P178 *c_518;
 P117 y_1966;
 P122 dummy_1967;
 P140 code_1968;
 int ok_1969;
 P174 r_1970;
};
struct f_constraint_list_523fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_520;
 P122 t_521;
 P178 c_522;
 P174 r_1971;
 P122 arrt_1972;
 P178 cc_1973;
 P122 it_1974;
};
struct f_discriminant_constraint_527fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_524;
 P122 t_525;
 P178 c_526;
 P174 a_1976;
 P1938 f_1977;
 P122 vt_1978;
 P140 v_1979;
 P1942 d_1980;
 P1942 tail_1981;
};
struct f_discrete_bounds_533fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_528;
 P122 want_529;
 P122 *t_530;
 P140 *lo_531;
 P140 *hi_532;
 P178 c_1989;
 P117 y_1990;
};
struct f_range_of_537fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_534;
 P122 t_535;
 P178 c_536;
 P122 dummy_1991;
 int ok_1992;
};
struct f_fresh_typ_541fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_538;
 P140 name_539;
 P122 *t_540;
 P122 ph_1993;
};
struct f_inherit_545fr { int dummy;
 struct f_greenc_1fr *up;
 P122 parent_542;
 P122 t_543;
 rt_int line_544;
 P117 s_1994;
 P117 z_1995;
 P1920 p_1996;
 P1920 q_1997;
 P1920 tail_1998;
 int uses_1999;
 P117 news_2000;
};
struct f_derive_literals_548fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_546;
 rt_int line_547;
 P174 l_2007;
 rt_int n_2008;
 P117 y_2009;
};
struct f_type_definition_553fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_549;
 P140 name_550;
 P122 *t_551;
 P178 *c_552;
 P122 dummy_2011;
 P122 it_2012;
 P178 ic_2013;
 P174 l_2014;
 P174 comp_2015;
 P1938 f_2016;
 P1938 tail_2017;
 int ok_2018;
 rt_int n_2019;
 P117 y_2020;
};
struct f_array_type_560fr { int dummy;
 struct f_greenc_1fr *up;
 P174 idx_554;
 P174 comp_555;
 P140 name_556;
 rt_int line_557;
 P122 *t_558;
 P178 *c_559;
 P174 l_2024;
 P178 rowc_2025;
 P178 ic_2026;
 P122 it_2027;
};
struct f_static_range_564fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_561;
 P174 h_562;
 P178 c_563;
 int ok_2028;
 int ok2_2029;
};
struct f_component_place_570fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_565;
 P1938 f_566;
 rt_gstr a_567;
 rt_gstr ct_568;
 P140 *r_569;
 P140 bits_2032;
};
struct f_no_value_572fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_571;
 rt_gstr result_;
};
struct f_restricted_here_574fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_573;
 int result_;
};
struct f_elem_ctype_577fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_575;
 P140 *r_576;
};
struct f_first_index_580fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_578;
 P140 *r_579;
};
struct f_is_string_582fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_581;
 int result_;
};
struct f_subst_585fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_583;
 rt_gstr r_584;
 rt_gstr result_;
 rt_int i_2036;
};
struct f_mentions_record_587fr { int dummy;
 struct f_greenc_1fr *up;
 P140 s_586;
 int result_;
 rt_int i_2050;
};
struct f_subst_cons_591fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_588;
 rt_gstr r_589;
 P178 *res_590;
};
struct f_remove_sym_593fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_592;
 rt_int h_2056;
 P117 p_2057;
};
struct f_record_components_598fr { int dummy;
 struct f_greenc_1fr *up;
 P174 list_594;
 P122 t_595;
 P2063 g_596;
 rt_int line_597;
 P174 comp_2065;
 P1938 f_2066;
 P1938 tail_2067;
 P1938 df_2068;
 P174 prev_2069;
 P122 pt_2070;
 P122 vt_2071;
 P178 pc_2072;
 P117 y_2073;
 P140 acc_2074;
 P140 v_2075;
 P140 x_2076;
 P174 arm_2077;
 P2063 g2_2078;
};
struct f_guard_cond_602fr { int dummy;
 struct f_greenc_1fr *up;
 P2063 g_599;
 P122 t_600;
 P140 *r_601;
 P174 a_2088;
 P174 l_2089;
 P1938 df_2090;
 P140 x_2091;
 P140 d_2092;
 P122 dt_2093;
 P122 vt_2094;
 P140 lo_2095;
 P140 hi_2096;
};
struct f_arm_test_607fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_603;
 P140 dname_604;
 rt_gstr d_605;
 P140 *x_606;
 P174 l_2098;
 P117 y_2099;
 P122 dt_2100;
 P122 vt_2101;
 P140 lo_2102;
 P140 hi_2103;
};
struct f_derived_type_612fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_608;
 P140 name_609;
 P122 *t_610;
 P178 *c_611;
 P122 pt_2105;
 P140 ct_2106;
 P122 ph_2107;
};
struct f_real_type_617fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_613;
 P140 name_614;
 P122 *t_615;
 P178 *c_616;
 P122 dt_2108;
 P140 dv_2109;
 rt_int n_2110;
 int ok_2111;
};
struct f_finish_ptr_619fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_618;
 P178 c_2112;
};
struct f_init_storage_623fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_620;
 P122 t_621;
 P178 c_622;
 P178 ec_2113;
 P178 fc_2114;
 P1942 d_2115;
 P140 ct_2116;
 P140 i_2117;
 P140 v_2118;
 P140 x_2119;
 P122 vt_2120;
 P1938 f_2121;
};
struct f_composite_625fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_624;
 int result_;
};
struct f_assign_code_631fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_626;
 P122 t_627;
 rt_gstr v_628;
 P178 c_629;
 P140 *r_630;
 P140 ct_2125;
 P140 x_2126;
 P1942 d_2127;
};
struct f_copy_code_635fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_632;
 rt_gstr v_633;
 P140 *r_634;
 P140 ct_2129;
};
struct f_eq_code_640fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_636;
 rt_gstr a_637;
 rt_gstr b_638;
 P140 *r_639;
 P140 ct_2130;
};
struct f_seen_name_643fr { int dummy;
 struct f_greenc_1fr *up;
 P151 l_641;
 rt_gstr s_642;
 int result_;
 P151 p_2131;
};
struct f_emit_helpers_644fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_2133;
 P140 et_2134;
 P151 done_2135;
 P151 l_2136;
};
struct f_helper_bodies_646fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_645;
 P140 c_2140;
 P126 b_2141;
 P140 ct_2142;
 P140 et_2143;
 P140 x_2144;
 P140 y_2145;
 P140 conds_2146;
 P1938 f_2147;
};
struct f_storage_650fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_647;
 P122 t_648;
 P140 *access_code_649;
 P140 ct_2150;
 P140 g_2151;
};
struct f_bind_653fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_651;
 P140 access_code_652;
};
struct f_declare_subprograms_655fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_654;
 P174 e_2152;
};
struct f_generic_before_658fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_656;
 P174 e_657;
 int result_;
 P174 p_2154;
};
struct f_declare_one_660fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_659;
 P117 y_2156;
 P117 z_2157;
};
struct f_elaborate_defaults_662fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_661;
 P1920 pm_2161;
 P122 vt_2162;
 P140 v_2163;
 P140 acc_2164;
 P140 x_2165;
 P117 z_2166;
};
struct f_build_subprogram_665fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_663;
 P117 *y_664;
 P174 p_2168;
 P1920 pm_2169;
 P1920 tail_2170;
 P178 rc_2171;
 rt_int k_2172;
};
struct f_decl_elements_667fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_666;
 P174 e_2176;
 int declared_2177;
};
struct f_decl_element_669fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_668;
 P198 saved_2179;
};
struct f_decl_element_1_671fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_670;
 P174 pd_2180;
 P117 y_2181;
 P117 z_2182;
 P122 t_2183;
 P122 vt_2184;
 P178 c_2185;
 P140 acc_2186;
 P140 v_2187;
 P140 x_2188;
 int ok_2189;
};
struct f_pragma_decl_673fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_672;
};
struct f_resolve_object_type_677fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_674;
 P122 *t_675;
 P178 *c_676;
};
struct f_find_subunit_680fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_678;
 P174 *r_679;
 P174 u_2191;
 rt_int k_2192;
};
struct f_stub_682fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_681;
 P174 sub_2195;
 P198 saved_2196;
 rt_int k_2197;
 rt_int d_2198;
 P140 first_name_2199;
 P140 list_2200;
 P117 y_2201;
 rt_int i_2203;
};
struct f_rename_subprogram_684fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_683;
 P117 newy_2220;
 P117 y_2221;
 P117 z_2222;
 P117 cand_2223;
 P174 ix_2224;
 P1920 p_2225;
 P1920 q_2226;
 P1920 tail_2227;
};
struct f_rename_module_687fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_685;
 P174 target_686;
 P117 y_2236;
 P117 z_2237;
};
struct f_push_barrier_690fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_688;
 rt_int limit_689;
 P198 b_2238;
 P140 first_name_2239;
 rt_int k_2240;
};
struct f_other_decl_692fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_691;
};
struct f_scan_labels_695fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_693;
 rt_gstr path_694;
 P174 s_2248;
 P174 a_2249;
 P189 l_2250;
 P140 c_2251;
};
struct f_scan_guarded_699fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_696;
 P174 hs_697;
 rt_gstr path_698;
 P174 h_2261;
};
struct f_count_g_701fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_700;
 rt_int result_;
 rt_int n_2263;
 rt_int i_2267;
};
struct f_label_body_704fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_702;
 P174 hs_703;
 P189 l_2272;
 P189 g_2273;
 P140 gp_2274;
 P140 lp_2275;
 rt_int i_2286;
};
struct f_gen_label_707fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_705;
 int goto_it_706;
 P189 l_2292;
};
struct f_is_foreign_709fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_708;
 int result_;
};
struct f_subprogram_body_712fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_710;
 P117 y_711;
 P126 saved_code_2294;
 P126 saved_fields_2295;
 int saved_in_2296;
 P117 saved_sym_2297;
 P143 saved_exits_2298;
 rt_int saved_frames_2299;
 P151 saved_handlers_2300;
 P151 saved_cleanups_2301;
 P189 saved_labels_2302;
 P143 saved_hx_2303;
 rt_int saved_hd_2304;
 P117 saved_pure_2305;
 P140 aw_2306;
 rt_int saved_pdepth_2307;
 P140 args_2308;
 P140 head_2309;
 P140 frame_2310;
 P140 parent_2311;
 P140 ct_2312;
 P140 x_2313;
 P1920 pm_2314;
 P117 p_2315;
};
struct f_gen_statements_714fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_713;
 P174 s_2321;
};
struct f_pop_frames_716fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_715;
 rt_int i_2323;
 P151 c_2324;
};
struct f_push_cleanup_718fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_717;
};
struct f_pop_cleanup_719fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_724fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_720;
 P174 stmts_721;
 P174 hs_722;
 rt_int line_723;
 P143 saved_hx_2328;
 P140 f_2329;
 P140 x_2330;
 P174 h_2331;
 P174 n_2332;
 int first_2333;
 int has_others_2334;
 P140 conds_2335;
};
struct f_exc_id_728fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_725;
 rt_int line_726;
 P140 *r_727;
 P117 y_2340;
};
struct f_gen_statement_730fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_729;
 P122 t_2341;
 P122 vt_2342;
 P178 c_2343;
 P140 lv_2344;
 P140 v_2345;
 P140 x_2346;
 int ro_2347;
};
struct f_slice_assign_732fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_731;
 P140 lv_2349;
 P140 v_2350;
 P140 sl_2351;
 P140 x_2352;
 P122 t_2353;
 P122 st_2354;
 P122 vt_2355;
 P178 c_2356;
 int ro_2357;
};
struct f_gen_call_734fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_733;
 P174 c_2358;
 P122 t_2359;
 P140 v_2360;
};
struct f_gen_if_736fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_735;
 P174 a_2361;
 int first_2362;
 P122 t_2363;
 P140 v_2364;
};
struct f_gen_case_738fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_737;
 P122 st_2366;
 P122 vt_2367;
 int first_2368;
 P174 a_2369;
 P174 lab_2370;
 P140 sel_2371;
 P140 tmp_2372;
 P140 ct_2373;
 P140 conds_2374;
 P140 v_2375;
 P140 lo_2376;
 P140 hi_2377;
 A2378 clo_2379;
 A2378 chi_2381;
 rt_int nc_2383;
 rt_int vlo_2384;
 rt_int vhi_2385;
 rt_int total_2386;
 int ok_2387;
 int ok2_2388;
 P117 y_2389;
 rt_int k_2393;
 rt_int k_2402;
};
struct f_selector_range_744fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_739;
 P122 t_740;
 rt_int *lo_741;
 rt_int *hi_742;
 int *ok_743;
 P117 y_2410;
};
struct f_push_exit_748fr { int dummy;
 struct f_greenc_1fr *up;
 P140 match_745;
 int is_loop_746;
 P140 *label_747;
};
struct f_gen_loop_750fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_749;
 P122 t_2413;
 P122 vt_2414;
 P178 c_2415;
 P140 label_2416;
 P140 cond_2417;
 P140 acc_2418;
 P140 lov_2419;
 P140 hiv_2420;
 P140 it_2421;
 P117 y_2422;
 P174 r_2423;
};
struct f_gen_block_752fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_751;
 P140 label_2424;
 P140 aw_2425;
};
struct f_exit_matches_755fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_753;
 P143 x_754;
 int result_;
};
struct f_gen_exit_757fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_756;
 P143 x_2426;
 P122 t_2427;
 P140 v_2428;
};
struct f_gen_return_759fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_758;
 P122 vt_2430;
 P140 v_2431;
 P140 x_2432;
};
struct f_access_of_762fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_760;
 P140 *r_761;
 P140 p_2433;
 rt_int i_2435;
};
struct f_link_to_765fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_763;
 P140 *r_764;
 rt_int i_2440;
};
struct f_c_ident_767fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_766;
 rt_gstr result_;
};
struct f_deref_771fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_768;
 P122 t_769;
 P140 *r_770;
 P140 ct_2444;
};
struct f_is_object_773fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_772;
 int result_;
 P117 y_2445;
};
struct f_is_const_access_775fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_774;
 int result_;
 P117 y_2446;
};
struct f_lvalue_781fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_776;
 P140 *code_out_777;
 P122 *t_778;
 P178 *c_779;
 int *ro_780;
 int cp_2447;
 P174 ex_2448;
 P117 y_2449;
 P140 base_2450;
 P122 bt_2451;
 P178 bc_2452;
};
struct f_select_on_790fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_782;
 P122 bt_783;
 P174 e_784;
 int *ro_785;
 int lv_786;
 P140 *code_out_787;
 P122 *t_788;
 P178 *c_789;
 P1938 f_2453;
 P140 d_2454;
 P140 ct_2455;
 P140 tmp_2456;
};
struct f_index_on_799fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_791;
 P122 bt_792;
 P174 e_793;
 int *ro_794;
 int lv_795;
 P140 *code_out_796;
 P122 *t_797;
 P178 *c_798;
 P174 a_2458;
 P122 arrt_2459;
 P140 acc_2460;
 P122 it_2461;
 P140 i_2462;
 P140 lo_2463;
 P140 hi_2464;
 P140 d_2465;
 P140 ct_2466;
 P140 tmp_2467;
};
struct f_type_attribute_802fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_800;
 rt_gstr name_801;
 int result_;
 P117 y_2469;
 P1920 p_2471;
};
struct f_is_type_name_804fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_803;
 int result_;
 P117 y_2474;
};
struct f_is_char_lit_806fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_805;
 int result_;
};
struct f_is_enum_lit_808fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_807;
 int result_;
 P117 y_2476;
};
struct f_c_string_810fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_809;
 rt_gstr result_;
 rt_int n_2477;
 rt_int i_2480;
 rt_gstr r_2489;
 rt_int j_2491;
 rt_int i_2495;
};
struct f_is_literal_812fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_811;
 int result_;
};
struct f_range_bounds_820fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_813;
 P174 h_814;
 P122 want_815;
 rt_int line_816;
 P122 *t_817;
 P140 *lo_818;
 P140 *hi_819;
 P122 w_2506;
 P122 t2_2507;
};
struct f_gexpr_825fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_821;
 P122 want_822;
 P122 *t_823;
 P140 *r_824;
 int saved_lv_2508;
 P122 w_2509;
};
struct f_gexpr_1_830fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_826;
 P122 want_827;
 P122 *t_828;
 P140 *r_829;
 P117 y_2510;
 P122 bt_2511;
 P178 c_2512;
 int ro_2513;
 P140 base_2514;
 P140 a_2515;
 P174 nm_2516;
 P174 c2_2517;
};
struct f_string_aggregate_835fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_831;
 P122 want_832;
 P122 *t_833;
 P140 *r_834;
 P174 ag_2521;
 P174 it_2522;
 P174 tail_2523;
 P174 l_2524;
 rt_int k_2527;
};
struct f_char_literal_840fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_836;
 P122 want_837;
 P122 *t_838;
 P140 *r_839;
 rt_int i_2533;
};
struct f_expanded_843fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_841;
 P174 *r_842;
 P117 y_2536;
 rt_int d_2537;
};
struct f_gen_name_848fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_844;
 P122 want_845;
 P122 *t_846;
 P140 *r_847;
 P117 y_2538;
 P117 z_2539;
 P174 call_2540;
};
struct f_gen_unop_853fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_849;
 P122 want_850;
 P122 *t_851;
 P140 *r_852;
 P140 a_2543;
 P140 x_2544;
 int done_2545;
};
struct f_short_int_855fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_854;
 int result_;
};
struct f_float_kind_857fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_856;
 rt_gstr result_;
};
struct f_membership_860fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_858;
 P140 *r_859;
 P122 ta_2546;
 P122 tb_2547;
 P122 tt_2548;
 P140 a_2549;
 P140 lo_2550;
 P140 hi_2551;
 P140 ct_2552;
 P178 c_2553;
 P1942 d_2554;
};
struct f_condition_865fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_861;
 P122 want_862;
 P122 *t_863;
 P140 *r_864;
 P140 a_2556;
 P140 b_2557;
 P122 tb_2558;
};
struct f_catenation_870fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_866;
 P122 want_867;
 P122 *t_868;
 P140 *r_869;
 P122 arrt_2559;
 P122 ta_2560;
 P122 tb_2561;
 P140 a_2562;
 P140 b_2563;
 P140 ct_2564;
};
struct f_cat_operand_875fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_871;
 P122 arrt_872;
 rt_int line_873;
 P140 *r_874;
 P122 tx_2565;
 P140 ct_2566;
};
struct f_arithmetic_880fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_876;
 P122 want_877;
 P122 *t_878;
 P140 *r_879;
 rt_gstr op_2567;
 P122 ta_2568;
 P122 tb_2569;
 P122 hint_2570;
 P140 a_2571;
 P140 b_2572;
};
struct f_fixed_operation_888fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_881;
 P122 ta_882;
 P122 tb_883;
 rt_gstr a_884;
 rt_gstr b_885;
 P122 *t_886;
 P140 *r_887;
 rt_gstr op_2573;
};
struct f_gen_binop_893fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_889;
 P122 want_890;
 P122 *t_891;
 P140 *r_892;
 rt_gstr op_2574;
 P122 ta_2575;
 P122 tb_2576;
 P122 hint_2577;
 P122 ct_2578;
 P140 a_2579;
 P140 b_2580;
 P140 x_2581;
 P140 dummy_2582;
 int done_2583;
};
struct f_conversion_898fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_894;
 P117 y_895;
 P122 *t_896;
 P140 *r_897;
 P122 aty_2584;
 P140 a_2585;
 P174 ag_2586;
 P174 it_2587;
 P174 tail_2588;
 P174 arg_2589;
};
struct f_constrain_902fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_899;
 P122 t_900;
 P140 *r_901;
 P140 ct_2591;
 P140 tmp_2592;
};
struct f_array_conversion_909fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_903;
 P122 t_904;
 P122 aty_905;
 P178 c_906;
 rt_gstr a_907;
 P140 *r_908;
 P122 x_2593;
 P122 y_2594;
 P140 ct_2595;
 P140 act_2596;
 P140 et_2597;
 P140 tmp_2598;
 P140 s_2599;
 rt_int k_2601;
};
struct f_gen_attr_914fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_910;
 P122 want_911;
 P122 *t_912;
 P140 *r_913;
 rt_gstr a_2605;
 P117 y_2606;
 P122 tt_2607;
 P122 aty_2608;
 P140 v_2609;
 P140 d_2610;
 P178 c_2611;
 rt_int n_2612;
 int ro_2613;
};
struct f_type_bits_918fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_915;
 P178 c_916;
 P140 *r_917;
 P140 ct_2614;
};
struct f_object_bits_922fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_919;
 rt_gstr v_920;
 P140 *r_921;
 P140 ct_2615;
 P140 et_2616;
};
struct f_numeric_attr_928fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_923;
 P122 tt_924;
 P178 c_925;
 P122 *t_926;
 P140 *r_927;
 rt_gstr a_2617;
 int short_2618;
};
struct f_component_attr_932fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_929;
 P122 *t_930;
 P140 *r_931;
 P122 bt_2619;
 P140 v_2620;
 P140 ct_2621;
 P1938 f_2622;
};
struct f_config_attr_936fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_933;
 P122 *t_934;
 P140 *r_935;
 rt_gstr a_2624;
 rt_gstr p_2625;
 P140 nm_2626;
};
struct f_attr_dim_940fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_937;
 P122 arrt_938;
 rt_int *n_939;
 int ok_2629;
};
struct f_object_array_attr_946fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_941;
 P122 arrt_942;
 rt_gstr v_943;
 P122 *t_944;
 P140 *r_945;
 rt_int n_2630;
 P122 it_2631;
 P140 ct_2632;
 P140 tmp_2633;
 P140 p_2634;
 P140 lo_2635;
 P140 hi_2636;
 rt_int k_2638;
 rt_int k_2643;
};
struct f_type_array_attr_952fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_947;
 P122 arrt_948;
 P178 c_949;
 P122 *t_950;
 P140 *r_951;
 rt_int n_2647;
 P122 it_2648;
 P178 cc_2649;
 rt_int k_2651;
};
struct f_lit_table_955fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_953;
 P140 *r_954;
 P174 l_2655;
 P140 s_2656;
};
struct f_val_rep_961fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_956;
 P122 tt_957;
 P178 c_958;
 P122 *t_959;
 P140 *r_960;
 P122 aty_2659;
 P140 v_2660;
 P140 lt_2661;
 rt_int n_2662;
};
struct f_allocator_966fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_962;
 P122 want_963;
 P122 *t_964;
 P140 *r_965;
 P117 y_2663;
 P122 target_2664;
 P122 vt_2665;
 P140 ct_2666;
 P140 pt_2667;
 P140 cell_2668;
 P140 v_2669;
 P140 x_2670;
};
struct f_aggregate_971fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_967;
 P122 want_968;
 P122 *t_969;
 P140 *r_970;
 P140 b_2671;
};
struct f_captured_974fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_972;
 P140 *r_973;
 P151 l_2672;
};
struct f_field_at_977fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_975;
 rt_int k_976;
 P1938 result_;
 P1938 f_2674;
 rt_int i_2676;
};
struct f_names_field_980fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_978;
 P1938 f_979;
 int result_;
};
struct f_item_for_985fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_981;
 P122 rt_982;
 rt_int k_983;
 rt_int p_984;
 P174 result_;
 P174 it_2680;
 P174 lab_2681;
 rt_int n_2682;
};
struct f_arm_holds_989fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_986;
 rt_int v_987;
 int *res_988;
 P174 l_2685;
 rt_int lo_2686;
 rt_int hi_2687;
 int ok_2688;
};
struct f_record_aggregate_993fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_990;
 P122 rt_991;
 P140 *r_992;
 P174 it_2690;
 P174 lab_2691;
 P174 vn_2692;
 P174 a_2693;
 P1938 f_2694;
 P2063 g_2695;
 rt_int n_2696;
 A2697 done_2698;
 A2697 active_2700;
 A2702 dvs_2703;
 A2705 order_2706;
 rt_int norder_2708;
 rt_int nung_2709;
 rt_int k_2710;
 rt_int d_2711;
 rt_int npos_2712;
 P126 saved_2713;
 P140 ct_2714;
 P140 tmp_2715;
 P140 parts_2716;
 int named_2717;
 int ok_2718;
 int holds_2719;
 rt_int i_2721;
 rt_int p_2730;
 rt_int i_2749;
 rt_int i_2766;
 rt_int i_2777;
};
struct f_field_index_996fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_994;
 rt_gstr name_995;
 rt_int result_;
 P1938 f_2783;
 rt_int k_2784;
};
struct f_agg_component_1002fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_997;
 P122 rt_998;
 rt_int k_999;
 P174 v_1000;
 rt_int line_1001;
 P1938 f_2786;
 P122 vt_2787;
 P140 x_2788;
 P140 y_2789;
 rt_int i_2791;
};
struct f_static_choice_1006fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1003;
 rt_int *v_1004;
 int *ok_1005;
};
struct f_array_aggregate_1011fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1007;
 P122 arrt_1008;
 P140 bounds_1009;
 P140 *r_1010;
 P174 it_2796;
 P174 lab_2797;
 P174 others_it_2798;
 rt_int np_2799;
 rt_int nnamed_2800;
 rt_int clo_2801;
 rt_int chi_2802;
 rt_int v1_2803;
 rt_int v2_2804;
 int all_static_2805;
 int ok_2806;
 int ok2_2807;
 int first_choice_2808;
 P122 vt_2809;
 P140 ct_2810;
 P140 et_2811;
 P140 tmp_2812;
 P140 lo_2813;
 P140 hi_2814;
 P140 v_2815;
 P140 x_2816;
 P140 parts_2817;
 P140 fill_2818;
 P140 rowb_2819;
 P140 key_2820;
 P140 khi_2821;
 P126 saved_2822;
};
struct f_element_store_1015fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1012;
 P122 arrt_1013;
 rt_gstr v_1014;
 P140 x_2827;
};
struct f_check_choices_1019fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1016;
 P122 arrt_1017;
 int has_others_1018;
 P174 a_2828;
 P174 b_2829;
 P174 lab_2830;
 P174 lab2_2831;
 rt_int lo1_2832;
 rt_int hi1_2833;
 rt_int lo2_2834;
 rt_int hi2_2835;
 rt_int count_2836;
 int ok_2837;
};
struct f_actual_for_1023fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1020;
 P1920 pm_1021;
 P1920 first_1022;
 P174 result_;
 P174 a_2842;
 P1920 p_2843;
};
struct f_gcall_1028fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1024;
 int is_stmt_1025;
 P122 *t_1026;
 P140 *r_1027;
 P174 fn_2846;
 P174 nm_2847;
 P117 y_2848;
 P140 args_2849;
 P140 lv_2850;
 P140 v_2851;
 P140 ct_2852;
 P140 x_2853;
 P174 a_2854;
 P1920 pm_2855;
 P122 lt_2856;
 P122 vt_2857;
 P178 lc_2858;
 int ro_2859;
};
struct f_out_check_1032fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1029;
 P122 t_1030;
 P178 c_1031;
};
struct f_var_path_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1033;
 P140 *r_1034;
 P122 pt_2860;
 P140 v_2861;
 P126 saved_2862;
};
struct f_paths_overlap_1038fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1036;
 rt_gstr r_1037;
 int result_;
 rt_int i_2866;
 rt_int j_2868;
};
struct f_mentions_1041fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1039;
 rt_gstr name_1040;
 int result_;
 P174 p_2890;
};
struct f_mentions_one_1044fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1042;
 rt_gstr name_1043;
 int result_;
};
struct f_check_aliasing_1048fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1045;
 P117 y_1046;
 P174 a_1047;
 P174 b_2892;
 P140 p_2893;
 P140 q_2894;
 P174 r_2895;
 P117 v_2896;
};
struct f_gcall_with_1053fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1049;
 P117 y_1050;
 P122 *t_1051;
 P140 *r_1052;
 P140 args_2898;
 P140 lv_2899;
 P140 v_2900;
 P140 x1_2901;
 P140 x2_2902;
 P174 a_2903;
 P1920 pm_2904;
 P122 lt_2905;
 P122 vt_2906;
 P178 lc_2907;
 int ro_2908;
};
struct f_builtin_1060fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1054;
 P174 args_1055;
 rt_int line_1056;
 int is_stmt_1057;
 P122 *t_1058;
 P140 *r_1059;
 P122 aty_2911;
 P122 lt_2912;
 P140 a_2913;
 P140 w_2914;
 P140 lv_2915;
 P178 lc_2916;
 int ro_2917;
};
struct f_lookup_path_1062fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1061;
 P117 result_;
 P117 y_2918;
 P117 m_2919;
 rt_int i_2923;
};
struct f_is_package_1064fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1063;
 int result_;
 P117 y_2935;
};
struct f_member_of_1068fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1065;
 rt_gstr name_1066;
 rt_int line_1067;
 P117 result_;
 P117 y_2936;
 P117 m_2937;
};
struct f_inside_package_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1069;
 int result_;
 P151 l_2939;
};
struct f_copy_sym_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1071;
 P117 *z_1072;
};
struct f_complete_private_1076fr { int dummy;
 struct f_greenc_1fr *up;
 P122 ph_1074;
 P122 full_1075;
 P140 n_2943;
 P174 p_2944;
};
struct f_package_spec_1078fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1077;
 P117 y_2945;
 P117 m_2946;
 P117 z_2947;
 P174 saved_2948;
 P117 first_private_2949;
};
struct f_hidden_from_1081fr { int dummy;
 struct f_greenc_1fr *up;
 P117 m_1079;
 P117 first_private_1080;
 int result_;
 P117 p_2953;
};
struct f_package_body_1083fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1082;
 P189 saved_labels_2955;
 P117 y_2956;
 P117 m_2957;
 P117 z_2958;
 P174 saved_2959;
};
struct f_use_visible_1085fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1084;
 int result_;
};
struct f_use_clause_1087fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1086;
 P174 n_2966;
 P117 y_2967;
 P117 m_2968;
 P117 z_2969;
 P117 old_2970;
 int clash_2971;
};
struct f_usable_over_1089fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1088;
 int result_;
};
struct f_same_entity_1092fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1090;
 P117 b_1091;
 int result_;
};
struct f_fits_1097fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1093;
 P174 args_1094;
 P122 want_1095;
 int *ok_1096;
 P1920 pm_2976;
 P174 a_2977;
 P122 t_2978;
 P178 c_2979;
 P140 v_2980;
 int ro_2981;
 P126 saved_2982;
 rt_int used_2983;
};
struct f_is_builtin_1099fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1098;
 int result_;
};
struct f_resolve_overload_1106fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1100;
 P174 args_1101;
 int is_stmt_1102;
 P122 want_1103;
 rt_int line_1104;
 P117 *y_1105;
 P117 z_2988;
 P117 w_2989;
 P117 first_2990;
 P117 found_2991;
 rt_int n_2992;
 int ok_2993;
 int hidden_2994;
 rt_int pass_2996;
};
struct f_same_profile_1109fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1107;
 P117 b_1108;
 int result_;
};
struct f_resolve_member_overload_1117fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1110;
 rt_gstr name_1111;
 P174 args_1112;
 int is_stmt_1113;
 P122 want_1114;
 rt_int line_1115;
 P117 *y_1116;
 P117 pk_3006;
 P117 z_3007;
 P117 found_3008;
 rt_int n_3009;
 int ok_3010;
 rt_int pass_3012;
};
struct f_user_operator_1123fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1118;
 P122 want_1119;
 P122 *t_1120;
 P140 *r_1121;
 int *done_1122;
 P140 op_3017;
 int negate_3018;
 P117 y_3019;
 P174 call_3020;
 P174 fname_3021;
 P174 l_3022;
 P174 rt_3023;
 int ok_3024;
};
struct f_task_p_1125fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1124;
 P174 x_3027;
 P174 r_3028;
 rt_int line_3029;
};
struct f_entry_p_1127fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1126;
 P174 x_3030;
};
struct f_accept_p_1129fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1128;
 P174 x_3031;
};
struct f_delay_p_1131fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1130;
 P174 x_3032;
};
struct f_designators_1133fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1132;
 P174 head_3033;
 P174 tail_3034;
 P174 n_3035;
};
struct f_parse_task_statement_1135fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1134;
 P174 x_3037;
 P174 alt_3038;
 P174 head_3039;
 P174 tail_3040;
 rt_int line_3041;
};
struct f_path_at_1139fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1136;
 rt_gstr field_1137;
 P140 *r_1138;
 rt_int i_3044;
};
struct f_is_task_name_1141fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1140;
 int result_;
 P117 y_3048;
};
struct f_task_of_1145fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1142;
 P117 *y_1143;
 P174 *ix_1144;
 P174 n_3049;
 P117 a_3050;
};
struct f_own_index_1148fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1146;
 P140 *r_1147;
 P117 y_3051;
};
struct f_member_1153fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1149;
 rt_gstr arr_1150;
 rt_gstr i_1151;
 P140 *r_1152;
 P140 lo_3052;
 P140 hi_3053;
};
struct f_act_path_1156fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1154;
 P140 *r_1155;
 P140 i_3054;
};
struct f_act_path_i_1160fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1157;
 rt_gstr i_1158;
 P140 *r_1159;
};
struct f_entry_path_1164fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1161;
 rt_gstr i_1162;
 P140 *r_1163;
 P140 own_3055;
};
struct f_declare_slot_1167fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1165;
 rt_gstr field_1166;
};
struct f_task_decl_1169fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1168;
};
struct f_family_arg_struct_1170fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1175fr { int dummy;
 struct f_greenc_1fr *up;
 P174 b_1171;
 P117 y_1172;
 P140 x_1173;
 int per_member_1174;
 P140 lo_3057;
 P140 hi_3058;
 P140 v_3059;
 P140 d_3060;
 P140 mlo_3061;
 P140 mhi_3062;
 P122 vt_3063;
 P178 c_3064;
};
struct f_entry_family_slot_1180fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1176;
 rt_gstr base_1177;
 rt_gstr i_1178;
 P140 *r_1179;
 P140 lo_3065;
 P140 hi_3066;
};
struct f_task_spec_1182fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1181;
 int has_procs_3067;
 int saved_defer_3068;
 P140 fields_3069;
 P140 ct_3070;
 P1920 pm_3071;
 P140 fp_3072;
 P140 flo_3073;
 P140 fhi_3074;
 P117 y_3075;
 P117 m_3076;
 P117 z_3077;
 P117 saved_3078;
 P140 d_3079;
 P140 v_3080;
 P140 p_3081;
 P140 p2_3082;
 P122 vt_3083;
 P174 r_3084;
};
struct f_entry_decl_1184fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1183;
 P117 y_3089;
 P174 p_3090;
 P1920 pm_3091;
 P1920 tail_3092;
 P140 fields_3093;
 P140 ct_3094;
 P140 x_3095;
 P140 lo_3096;
 P140 hi_3097;
};
struct f_task_body_1186fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1185;
 P117 y_3101;
 P117 b_3102;
 P117 m_3103;
 P117 z_3104;
 P140 upp_3105;
 P117 saved_3106;
};
struct f_task_awaits_1189fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_1187;
 P140 *aw_1188;
 P174 e_3110;
 P117 y_3111;
 P140 p_3112;
};
struct f_task_failure_1191fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1190;
 P117 y_3114;
 P140 a_3115;
 P140 i_3116;
 P122 it_3117;
};
struct f_entry_sym_1195fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1192;
 P117 *y_1193;
 P174 *ix_1194;
 P174 alias_3118;
 P117 t_3119;
};
struct f_entry_overload_1200fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1196;
 P174 args_1197;
 rt_int line_1198;
 P117 *r_1199;
 P117 z_3120;
 P117 found_3121;
 int ok_3122;
};
struct f_other_call_1205fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1201;
 int is_stmt_1202;
 P122 *t_1203;
 P140 *r_1204;
 P117 y_3124;
 P117 oy_3125;
 P1920 pm_3126;
 P174 a_3127;
 P140 parts_3128;
 P140 v_3129;
 P140 lv_3130;
 P140 ent_3131;
 P140 act_3132;
 P140 i_3133;
 P122 vt_3134;
 P122 lt_3135;
 P178 lc_3136;
 int ro_3137;
 P174 ix_3138;
 P174 fix_3139;
 P174 args_node_3140;
};
struct f_other_attr_1210fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1206;
 P117 y_1207;
 P122 *t_1208;
 P140 *r_1209;
 rt_gstr a_3142;
 P140 p_3143;
};
struct f_member_attr_1214fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1211;
 P122 *t_1212;
 P140 *r_1213;
 P117 y_3144;
 P174 ix_3145;
 P140 i_3146;
 P140 p_3147;
 P122 vt_3148;
};
struct f_task_builtin_1220fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1215;
 P174 args_1216;
 rt_int line_1217;
 P122 *t_1218;
 P140 *r_1219;
 P122 vt_3149;
 P140 v_3150;
};
struct f_accept_entry_1223fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1221;
 P117 *r_1222;
 P117 z_3151;
 P117 found_3152;
 P117 any_3153;
 int ok_3154;
};
struct f_accept_conforms_1227fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1224;
 P117 y_1225;
 int *ok_1226;
 P174 f_3158;
 P1920 pm_3159;
 P122 t_3160;
 P178 c_3161;
};
struct f_gen_accept_1229fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1228;
 P117 y_3163;
 P143 saved_ax_3164;
 P140 ent_3165;
 P140 ep_3166;
 P140 xf_3167;
 P140 x_3168;
 P1920 pm_3169;
 P174 f_3170;
 P117 p_3171;
};
struct f_member_slot_1233fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1230;
 P174 s_1231;
 P140 *ent_1232;
 P122 vt_3173;
 P140 v_3174;
};
struct f_gen_delay_ticks_1236fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1234;
 P140 *r_1235;
 P122 vt_3175;
 P140 v_3176;
};
struct f_gen_select_1238fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1237;
 P174 alt_3177;
 rt_int n_3178;
 rt_int i_3179;
 int has_delay_3180;
 int has_accept_3181;
 P140 al_3182;
 P140 w_3183;
 P140 g_3184;
 P140 ent_3185;
 P140 ticks_3186;
 P122 vt_3187;
 P117 y_3188;
};
struct f_family_range_1243fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1239;
 P174 ix_1240;
 P140 *lo_1241;
 P140 *hi_1242;
 P122 vt_3192;
};
struct f_task_statement_gen_1245fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1244;
 P174 n_3193;
 P174 ix_3194;
 P117 y_3195;
 P140 a_3196;
 P140 d_3197;
 P140 l_3198;
 P140 ticks_3199;
 P140 lo_3200;
 P140 hi_3201;
};
struct f_root_name_1247fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1246;
 P174 result_;
};
struct f_check_pure_target_1250fr { int dummy;
 struct f_greenc_1fr *up;
 P174 target_1248;
 rt_int line_1249;
 P174 n_3205;
 P117 y_3206;
};
struct f_assigns_nonlocal_1253fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1251;
 rt_gstr name_1252;
 int result_;
};
struct f_declares_1256fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1254;
 rt_gstr name_1255;
 int result_;
 P174 p_3207;
 P174 e_3208;
};
struct f_scan_handlers_1260fr { int dummy;
 struct f_greenc_1fr *up;
 P174 h_1257;
 P174 d_1258;
 rt_gstr name_1259;
 int result_;
 P174 p_3211;
};
struct f_scan_assigns_1264fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_1261;
 P174 d_1262;
 rt_gstr name_1263;
 int result_;
 P174 s_3213;
 P174 a_3214;
 P174 r_3215;
};
struct f_check_call_rules_1267fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1265;
 P117 y_1266;
 P117 z_3219;
 P117 s_3220;
};
struct f_generic_p_1269fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1268;
 P174 x_3222;
 P174 p_3223;
 P174 head_3224;
 P174 tail_3225;
 P174 names_3226;
 P174 st_3227;
 P174 def_3228;
 P174 sub_3229;
 P140 def_name_text_3230;
 int more_3231;
 int restr_3232;
 rt_int mode_3233;
};
struct f_instantiation_1272fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1270;
 P174 *res_1271;
 P174 i_3236;
 P174 head_3237;
 P174 tail_3238;
 P174 a_3239;
 P140 formal_3240;
 rt_int mark_3241;
 int more_3242;
};
struct f_generic_decl_1274fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1273;
 P117 y_3245;
};
struct f_is_generic_name_1276fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1275;
 int result_;
 P117 y_3246;
};
struct f_instantiates_1279fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1277;
 rt_gstr name_1278;
 int result_;
 P174 p_3247;
};
struct f_attach_generic_body_1281fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1280;
 P117 y_3249;
};
struct f_restore_generic_context_1285fr { int dummy;
 struct f_greenc_1fr *up;
 P174 body_node_1282;
 rt_int line_1283;
 rt_gstr inst_1284;
 P146 ctx_3252;
 P117 m_3253;
 P117 z_3254;
 int seen_3255;
};
struct f_gactual_1289fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1286;
 rt_int nth_1287;
 rt_gstr name_1288;
 P174 result_;
 P174 a_3260;
 rt_int i_3261;
};
struct f_copy_node_1293fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1290;
 P140 name_1291;
 P174 *r_1292;
};
struct f_matches_formal_1297fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1294;
 rt_gstr name_1295;
 P117 fs_1296;
 int result_;
};
struct f_actual_type_1300fr { int dummy;
 struct f_greenc_1fr *up;
 P174 a_1298;
 P117 *y_1299;
};
struct f_actual_subprogram_1305fr { int dummy;
 struct f_greenc_1fr *up;
 P174 f_1301;
 P174 a_1302;
 rt_int line_1303;
 P117 *r_1304;
 P117 fs_3263;
 P117 y_3264;
 P140 name_3265;
 P117 m_3266;
};
struct f_wrap_operation_1311fr { int dummy;
 struct f_greenc_1fr *up;
 P174 f_1306;
 rt_gstr op_1307;
 P140 type_name_1308;
 rt_int line_1309;
 P117 *r_1310;
 P174 w_3272;
 P174 p_3273;
 P174 q_3274;
 P174 qt_3275;
 P174 ret_3276;
 P174 x_3277;
 P174 a1_3278;
 P174 a2_3279;
 P140 wname_3280;
 rt_int n_3281;
 P117 y_3282;
};
struct f_actual_mark_1314fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_1312;
 P174 *r_1313;
};
struct f_instantiate_1316fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1315;
 P117 g_3284;
 P174 gd_3285;
 P174 pat_3286;
 P174 f_3287;
 P174 a_3288;
 P174 cn_3289;
 P174 rn_3290;
 P117 y_3291;
 P117 z_3292;
 P117 fs_3293;
 rt_int nth_3294;
 P122 t_3295;
 P122 vt_3296;
 P178 c_3297;
 P140 v_3298;
 P140 acc_3299;
 P140 x_3300;
 int ok_3301;
};
struct f_predef_type_1321fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1317;
 P122 t_1318;
 rt_gstr lo_1319;
 rt_gstr hi_1320;
 P117 y_3303;
};
struct f_predef_const_1325fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1322;
 P122 t_1323;
 rt_gstr code_text_1324;
 P117 y_3310;
};
struct f_predef_exc_1327fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1326;
 P117 y_3311;
};
struct f_predef_lit_1331fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1328;
 P122 t_1329;
 rt_int v_1330;
 P117 y_3312;
};
struct f_predefine_1332fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_3313;
 rt_gstr control_3314;
 rt_int start_3315;
 rt_int code_no_3316;
 rt_int i_3319;
 rt_int i_3327;
};
struct f_lib_open_1335fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1333;
 rt_int *length_1334;
};
struct f_lib_store_1338fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1336;
 rt_gstr contents_1337;
};
struct f_unit_key_1341fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1339;
 P140 *r_1340;
 rt_int k_3331;
};
struct f_lib_enabled_1343fr { int dummy;
 struct f_greenc_1fr *up;
 int *yes_1342;
};
struct f_store_units_1344fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_3339;
 P140 k_3340;
 int yes_3341;
};
struct f_store_span_1347fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_1345;
 rt_gstr key_1346;
 rt_int n_3343;
 P140 head_3344;
 rt_int l_3352;
 rt_gstr t_3359;
 rt_int k_3361;
 rt_int l_3365;
};
struct f_lib_load_1350fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1348;
 P174 *r_1349;
 rt_int n_3376;
 rt_int saved_line_3377;
 rt_int saved_pos_3378;
 rt_int from_3379;
};
struct f_defined_unit_1353fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1351;
 P174 before_1352;
 int result_;
 P174 u_3380;
};
struct f_library_units_1354fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_3383;
 P174 prev_3384;
 P174 l_3385;
 P174 ltail_3386;
 rt_int i_3387;
 rt_int j_3388;
 P140 n_3389;
 P140 f_3390;
 int changed_3391;
};
struct f_load_unit_1357fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1355;
 P174 *r_1356;
 P174 s_3404;
 P174 b_3405;
 P174 t_3406;
};
struct f_prelude_1358fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_used_units_1361fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1359;
 P140 *r_1360;
 P174 p_3408;
 P174 main_3409;
 int changed_3410;
};
struct f_add_names_1365fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *r_1362;
 rt_gstr list_1363;
 int *changed_1364;
 rt_int i_3422;
 rt_int j_3424;
};
struct f_translate_1367fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1366;
 P174 p_3435;
 P140 used_3436;
 P117 y_3437;
};
struct f_last_unit_1369fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1368;
 int result_;
 P174 q_3444;
};
struct f_print_program_1370fr { int dummy;
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
 A202 src_lines_203;
 P204 spans_206;
 int compiling_source_207;
 P140 loaded_208;
 P140 cur_comp_unit_209;
 rt_int in_instance_210;
 P117 cur_task_211;
 rt_int accept_depth_212;
 int famarg_done_213;
 P174 fam_ix_214;
 P174 call_task_ix_215;
 int saw_interface_216;
 int defer_entry_structs_217;
 P126 out_awaits_218;
 P178 no_cons_219;
 P174 units_220;
 P174 prelude_units_221;
 P151 pkg_stack_222;
 P174 cur_pkg_223;
 P140 prefix_hint_224;
 P122 call_want_225;
 P117 pure_sym_226;
 rt_int pure_depth_227;
 int vrp_ok_228;
 int in_lv_path_229;
 int last_deref_230;
 P140 main_name_231;
 P140 conf_system_232;
 rt_int conf_storage_unit_233;
 rt_int conf_memory_size_234;
 P140 conf_optimize_235;
};
static void as_A2705(A2705 *d, A2705 s);
static A2705 cp_A2705(A2705 s);
static int eq_A2705(A2705 a, A2705 b);
static A2705 cat_A2705(A2705 a, A2705 b);
static A2705 one_A2705(rt_int e);
static void as_A2702(A2702 *d, A2702 s);
static A2702 cp_A2702(A2702 s);
static int eq_A2702(A2702 a, A2702 b);
static A2702 cat_A2702(A2702 a, A2702 b);
static A2702 one_A2702(rt_int e);
static void as_A2697(A2697 *d, A2697 s);
static A2697 cp_A2697(A2697 s);
static int eq_A2697(A2697 a, A2697 b);
static A2697 cat_A2697(A2697 a, A2697 b);
static A2697 one_A2697(int e);
static A2697 and_A2697(A2697 a, A2697 b);
static A2697 or_A2697(A2697 a, A2697 b);
static A2697 xor_A2697(A2697 a, A2697 b);
static A2697 not_A2697(A2697 a);
static void as_A2378(A2378 *d, A2378 s);
static A2378 cp_A2378(A2378 s);
static int eq_A2378(A2378 a, A2378 b);
static A2378 cat_A2378(A2378 a, A2378 b);
static A2378 one_A2378(rt_int e);
static void as_R2064(R2064 *d, R2064 s);
static R2064 cp_R2064(R2064 s);
static int eq_R2064(R2064 a, R2064 b);
static void as_R1943(R1943 *d, R1943 s);
static R1943 cp_R1943(R1943 s);
static int eq_R1943(R1943 a, R1943 b);
static void as_R1939(R1939 *d, R1939 s);
static R1939 cp_R1939(R1939 s);
static int eq_R1939(R1939 a, R1939 b);
static void as_R1921(R1921 *d, R1921 s);
static R1921 cp_R1921(R1921 s);
static int eq_R1921(R1921 a, R1921 b);
static void as_R205(R205 *d, R205 s);
static R205 cp_R205(R205 s);
static int eq_R205(R205 a, R205 b);
static void as_A202(A202 *d, A202 s);
static A202 cp_A202(A202 s);
static int eq_A202(A202 a, A202 b);
static A202 cat_A202(A202 a, A202 b);
static A202 one_A202(P140 e);
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
static P140 f_mk_237(struct f_greenc_1fr *up_, rt_gstr s_236);
static void f_new_name_240(struct f_greenc_1fr *up_, rt_gstr base_238, P140 *res_239);
static int f_is_letter_242(struct f_greenc_1fr *up_, int c_241);
static int f_is_digit_244(struct f_greenc_1fr *up_, int c_243);
static int f_upper_246(struct f_greenc_1fr *up_, int c_245);
static rt_gstr f_lower_s_248(struct f_greenc_1fr *up_, rt_gstr s_247);
static rt_gstr f_upper_s_250(struct f_greenc_1fr *up_, rt_gstr s_249);
static int f_is_operator_252(struct f_greenc_1fr *up_, rt_gstr s_251);
static rt_gstr f_c_field_254(struct f_greenc_1fr *up_, rt_gstr s_253);
static rt_gstr f_q_255(struct f_greenc_1fr *up_);
static void f_fail_258(struct f_greenc_1fr *up_, rt_int line_256, rt_gstr msg_257);
static P126 f_new_buffer_259(struct f_greenc_1fr *up_);
static void f_put_to_262(struct f_greenc_1fr *up_, P126 b_260, rt_gstr s_261);
static void f_emit_264(struct f_greenc_1fr *up_, rt_gstr s_263);
static void f_print_buffer_266(struct f_greenc_1fr *up_, P126 b_265);
static void f_splice_269(struct f_greenc_1fr *up_, P126 a_267, P126 b_268);
static int f_is_reserved_271(struct f_greenc_1fr *up_, rt_gstr w_270);
static void f_add_token_275(struct f_greenc_1fr *up_, rt_int kind_272, rt_gstr s_273, rt_int ival_274);
static rt_int f_digit_value_277(struct f_greenc_1fr *up_, int c_276);
static rt_int f_digit_in_280(struct f_greenc_1fr *up_, int c_278, rt_int base_279);
static void f_accumulate_284(struct f_greenc_1fr *up_, rt_int *v_281, rt_int base_282, rt_int d_283);
static void f_lex_line_286(struct f_greenc_1fr *up_, rt_gstr line_285);
static int f_exponent_ahead_289(struct f_greenc_1fr *up_, rt_gstr line_287, rt_int j_288);
static void f_exponent_294(struct f_greenc_1fr *up_, rt_gstr line_290, rt_int *j_291, rt_gstr *buf_292, rt_int *bl_293);
static void f_include_open_297(struct f_greenc_1fr *up_, rt_gstr name_295, rt_int *length_296);
static void f_include_char_300(struct f_greenc_1fr *up_, rt_int i_298, int *c_299);
static void f_check_include_301(struct f_greenc_1fr *up_);
static void f_include_text_303(struct f_greenc_1fr *up_, rt_int n_302);
static void f_include_line_307(struct f_greenc_1fr *up_, rt_gstr t_304, rt_int from_305, rt_int to_306);
static void f_read_source_308(struct f_greenc_1fr *up_);
static P174 f_nn_311(struct f_greenc_1fr *up_, rt_int kind_309, rt_int line_310);
static void f_append_315(struct f_greenc_1fr *up_, P174 *head_312, P174 *tail_313, P174 x_314);
static rt_int f_list_len_317(struct f_greenc_1fr *up_, P174 l_316);
static rt_int f_cur_line_318(struct f_greenc_1fr *up_);
static int f_at_kw_320(struct f_greenc_1fr *up_, rt_gstr w_319);
static int f_at_op_322(struct f_greenc_1fr *up_, rt_gstr w_321);
static int f_at_kind_324(struct f_greenc_1fr *up_, rt_int k_323);
static rt_int f_kind_at_326(struct f_greenc_1fr *up_, rt_int k_325);
static rt_gstr f_text_at_328(struct f_greenc_1fr *up_, rt_int k_327);
static void f_perror_330(struct f_greenc_1fr *up_, rt_gstr msg_329);
static void f_skip_331(struct f_greenc_1fr *up_);
static void f_expect_kw_333(struct f_greenc_1fr *up_, rt_gstr w_332);
static void f_expect_op_335(struct f_greenc_1fr *up_, rt_gstr w_334);
static void f_expect_id_337(struct f_greenc_1fr *up_, P140 *res_336);
static void f_name_node_339(struct f_greenc_1fr *up_, P174 *res_338);
static void f_id_list_341(struct f_greenc_1fr *up_, P174 *res_340);
static P174 f_binop_346(struct f_greenc_1fr *up_, P140 op_342, P174 l_343, P174 r_344, rt_int line_345);
static void f_expr_348(struct f_greenc_1fr *up_, P174 *res_347);
static int f_is_rel_350(struct f_greenc_1fr *up_, rt_gstr s_349);
static void f_relation_352(struct f_greenc_1fr *up_, P174 *res_351);
static rt_gstr f_path_of_354(struct f_greenc_1fr *up_, P174 e_353);
static void f_simple_expr_356(struct f_greenc_1fr *up_, P174 *res_355);
static void f_term_358(struct f_greenc_1fr *up_, P174 *res_357);
static void f_factor_360(struct f_greenc_1fr *up_, P174 *res_359);
static void f_primary_362(struct f_greenc_1fr *up_, P174 *res_361);
static void f_agg_or_paren_364(struct f_greenc_1fr *up_, P174 *res_363);
static int f_choice_token_366(struct f_greenc_1fr *up_, P110 t_365);
static int f_aggregate_ahead_367(struct f_greenc_1fr *up_);
static void f_name_p_369(struct f_greenc_1fr *up_, P174 *res_368);
static void f_component_list_371(struct f_greenc_1fr *up_, P174 *res_370);
static void f_discrete_range_p_373(struct f_greenc_1fr *up_, P174 *res_372);
static void f_subtype_ind_375(struct f_greenc_1fr *up_, P174 *res_374);
static void f_type_spec_377(struct f_greenc_1fr *up_, P174 *res_376);
static void f_type_def_379(struct f_greenc_1fr *up_, P174 *res_378);
static void f_pragma_p_381(struct f_greenc_1fr *up_, P174 *res_380);
static void f_check_pragma_383(struct f_greenc_1fr *up_, P174 x_382);
static void f_visibility_p_385(struct f_greenc_1fr *up_, P140 *res_384);
static void f_unit_p_387(struct f_greenc_1fr *up_, P174 *res_386);
static void f_skip_representation_388(struct f_greenc_1fr *up_);
static void f_decl_part_390(struct f_greenc_1fr *up_, P174 *res_389);
static void f_object_decl_392(struct f_greenc_1fr *up_, P174 *res_391);
static void f_type_decl_394(struct f_greenc_1fr *up_, P174 *res_393);
static void f_formal_part_396(struct f_greenc_1fr *up_, P174 *res_395);
static void f_designator_398(struct f_greenc_1fr *up_, P140 *res_397);
static void f_subprogram_400(struct f_greenc_1fr *up_, P174 *res_399);
static void f_body_part_402(struct f_greenc_1fr *up_, P174 x_401);
static void f_parse_handlers_404(struct f_greenc_1fr *up_, P174 *res_403);
static void f_package_p_406(struct f_greenc_1fr *up_, P174 *res_405);
static int f_at_statements_end_407(struct f_greenc_1fr *up_);
static void f_statements_409(struct f_greenc_1fr *up_, P174 *res_408);
static void f_statement_411(struct f_greenc_1fr *up_, P174 *res_410);
static void f_labelled_statement_414(struct f_greenc_1fr *up_, P140 label_412, P174 *res_413);
static void f_task_statement_416(struct f_greenc_1fr *up_, P174 *res_415);
static void f_if_stmt_418(struct f_greenc_1fr *up_, P174 *res_417);
static void f_case_stmt_420(struct f_greenc_1fr *up_, P174 *res_419);
static void f_loop_stmt_422(struct f_greenc_1fr *up_, P174 *res_421);
static void f_compilation_424(struct f_greenc_1fr *up_, P174 *res_423);
static rt_int f_hash_426(struct f_greenc_1fr *up_, rt_gstr s_425);
static int f_listed_429(struct f_greenc_1fr *up_, P140 list_427, rt_gstr name_428);
static int f_visible_sym_431(struct f_greenc_1fr *up_, P117 y_430);
static P117 f_lookup_433(struct f_greenc_1fr *up_, rt_gstr name_432);
static int f_same_task_436(struct f_greenc_1fr *up_, P117 a_434, P117 b_435);
static P117 f_lookup_entry_439(struct f_greenc_1fr *up_, rt_gstr name_437, P117 owner_438);
static P117 f_lookup_at_442(struct f_greenc_1fr *up_, rt_gstr name_440, rt_int d_441);
static rt_int f_enclosing_depth_444(struct f_greenc_1fr *up_, rt_gstr name_443);
static void f_push_unit_446(struct f_greenc_1fr *up_, P140 name_445);
static P117 f_lookup_decl_448(struct f_greenc_1fr *up_, P174 d_447);
static int f_overloadable_450(struct f_greenc_1fr *up_, P117 y_449);
static int f_same_453(struct f_greenc_1fr *up_, P122 a_451, P122 b_452);
static P122 f_base_view_455(struct f_greenc_1fr *up_, P122 t_454);
static P122 f_root_457(struct f_greenc_1fr *up_, P122 t_456);
static int f_derived_from_460(struct f_greenc_1fr *up_, P122 a_458, P122 b_459);
static int f_is_numeric_462(struct f_greenc_1fr *up_, P122 t_461);
static int f_is_discrete_464(struct f_greenc_1fr *up_, P122 t_463);
static int f_same_types_467(struct f_greenc_1fr *up_, P1920 a_465, P1920 b_466);
static int f_same_signature_470(struct f_greenc_1fr *up_, P1920 a_468, P1920 b_469);
static int f_distinct_overload_473(struct f_greenc_1fr *up_, P117 y_471, P117 z_472);
static void f_define_476(struct f_greenc_1fr *up_, P117 y_474, rt_int line_475);
static void f_open_scope_477(struct f_greenc_1fr *up_);
static void f_close_scope_478(struct f_greenc_1fr *up_);
static P117 f_new_sym_481(struct f_greenc_1fr *up_, rt_int kind_479, P140 name_480);
static P122 f_new_typ_483(struct f_greenc_1fr *up_, rt_int kind_482);
static P178 f_new_cons_484(struct f_greenc_1fr *up_);
static int f_bounded_486(struct f_greenc_1fr *up_, P178 c_485);
static int f_bounded_hi_488(struct f_greenc_1fr *up_, P178 c_487);
static int f_static_bounds_490(struct f_greenc_1fr *up_, P178 c_489);
static int f_discriminated_492(struct f_greenc_1fr *up_, P178 c_491);
static rt_gstr f_kind_name_494(struct f_greenc_1fr *up_, P122 t_493);
static void f_check_type_498(struct f_greenc_1fr *up_, P122 got_495, P122 want_496, rt_int line_497);
static rt_int f_field_count_500(struct f_greenc_1fr *up_, P122 t_499);
static void f_ctype_503(struct f_greenc_1fr *up_, P122 t_501, P140 *r_502);
static void f_field_decls_506(struct f_greenc_1fr *up_, P122 t_504, P140 *r_505);
static void f_declare_ctype_508(struct f_greenc_1fr *up_, P122 t_507);
static rt_int f_lit_index_511(struct f_greenc_1fr *up_, P174 lits_509, rt_gstr name_510);
static void f_manifest_515(struct f_greenc_1fr *up_, P174 e_512, rt_int *v_513, int *ok_514);
static void f_resolve_519(struct f_greenc_1fr *up_, P174 st_516, P122 *t_517, P178 *c_518);
static void f_constraint_list_523(struct f_greenc_1fr *up_, P174 st_520, P122 t_521, P178 c_522);
static void f_discriminant_constraint_527(struct f_greenc_1fr *up_, P174 st_524, P122 t_525, P178 c_526);
static void f_discrete_bounds_533(struct f_greenc_1fr *up_, P174 r_528, P122 want_529, P122 *t_530, P140 *lo_531, P140 *hi_532);
static void f_range_of_537(struct f_greenc_1fr *up_, P174 r_534, P122 t_535, P178 c_536);
static void f_fresh_typ_541(struct f_greenc_1fr *up_, rt_int kind_538, P140 name_539, P122 *t_540);
static void f_inherit_545(struct f_greenc_1fr *up_, P122 parent_542, P122 t_543, rt_int line_544);
static void f_derive_literals_548(struct f_greenc_1fr *up_, P122 t_546, rt_int line_547);
static void f_type_definition_553(struct f_greenc_1fr *up_, P174 d_549, P140 name_550, P122 *t_551, P178 *c_552);
static void f_array_type_560(struct f_greenc_1fr *up_, P174 idx_554, P174 comp_555, P140 name_556, rt_int line_557, P122 *t_558, P178 *c_559);
static void f_static_range_564(struct f_greenc_1fr *up_, P174 l_561, P174 h_562, P178 c_563);
static void f_component_place_570(struct f_greenc_1fr *up_, P122 rt_565, P1938 f_566, rt_gstr a_567, rt_gstr ct_568, P140 *r_569);
static rt_gstr f_no_value_572(struct f_greenc_1fr *up_, P122 t_571);
static int f_restricted_here_574(struct f_greenc_1fr *up_, P122 t_573);
static void f_elem_ctype_577(struct f_greenc_1fr *up_, P122 t_575, P140 *r_576);
static void f_first_index_580(struct f_greenc_1fr *up_, P122 t_578, P140 *r_579);
static int f_is_string_582(struct f_greenc_1fr *up_, P122 t_581);
static rt_gstr f_subst_585(struct f_greenc_1fr *up_, rt_gstr s_583, rt_gstr r_584);
static int f_mentions_record_587(struct f_greenc_1fr *up_, P140 s_586);
static void f_subst_cons_591(struct f_greenc_1fr *up_, P178 c_588, rt_gstr r_589, P178 *res_590);
static void f_remove_sym_593(struct f_greenc_1fr *up_, P117 y_592);
static void f_record_components_598(struct f_greenc_1fr *up_, P174 list_594, P122 t_595, P2063 g_596, rt_int line_597);
static void f_guard_cond_602(struct f_greenc_1fr *up_, P2063 g_599, P122 t_600, P140 *r_601);
static void f_arm_test_607(struct f_greenc_1fr *up_, P174 arm_603, P140 dname_604, rt_gstr d_605, P140 *x_606);
static void f_derived_type_612(struct f_greenc_1fr *up_, P174 d_608, P140 name_609, P122 *t_610, P178 *c_611);
static void f_real_type_617(struct f_greenc_1fr *up_, P174 d_613, P140 name_614, P122 *t_615, P178 *c_616);
static void f_finish_ptr_619(struct f_greenc_1fr *up_, P122 t_618);
static void f_init_storage_623(struct f_greenc_1fr *up_, rt_gstr lval_620, P122 t_621, P178 c_622);
static int f_composite_625(struct f_greenc_1fr *up_, P122 t_624);
static void f_assign_code_631(struct f_greenc_1fr *up_, rt_gstr lval_626, P122 t_627, rt_gstr v_628, P178 c_629, P140 *r_630);
static void f_copy_code_635(struct f_greenc_1fr *up_, P122 t_632, rt_gstr v_633, P140 *r_634);
static void f_eq_code_640(struct f_greenc_1fr *up_, P122 t_636, rt_gstr a_637, rt_gstr b_638, P140 *r_639);
static int f_seen_name_643(struct f_greenc_1fr *up_, P151 l_641, rt_gstr s_642);
static void f_emit_helpers_644(struct f_greenc_1fr *up_);
static void f_helper_bodies_646(struct f_greenc_1fr *up_, P122 t_645);
static void f_storage_650(struct f_greenc_1fr *up_, rt_gstr name_647, P122 t_648, P140 *access_code_649);
static void f_bind_653(struct f_greenc_1fr *up_, P117 y_651, P140 access_code_652);
static void f_declare_subprograms_655(struct f_greenc_1fr *up_, P174 from_654);
static int f_generic_before_658(struct f_greenc_1fr *up_, P174 from_656, P174 e_657);
static void f_declare_one_660(struct f_greenc_1fr *up_, P174 e_659);
static void f_elaborate_defaults_662(struct f_greenc_1fr *up_, P117 y_661);
static void f_build_subprogram_665(struct f_greenc_1fr *up_, P174 d_663, P117 *y_664);
static void f_decl_elements_667(struct f_greenc_1fr *up_, P174 decls_666);
static void f_decl_element_669(struct f_greenc_1fr *up_, P174 e_668);
static void f_decl_element_1_671(struct f_greenc_1fr *up_, P174 e_670);
static void f_pragma_decl_673(struct f_greenc_1fr *up_, P174 e_672);
static void f_resolve_object_type_677(struct f_greenc_1fr *up_, P174 st_674, P122 *t_675, P178 *c_676);
static void f_find_subunit_680(struct f_greenc_1fr *up_, P174 e_678, P174 *r_679);
static void f_stub_682(struct f_greenc_1fr *up_, P174 e_681);
static void f_rename_subprogram_684(struct f_greenc_1fr *up_, P174 e_683);
static void f_rename_module_687(struct f_greenc_1fr *up_, P174 e_685, P174 target_686);
static void f_push_barrier_690(struct f_greenc_1fr *up_, P174 e_688, rt_int limit_689);
static void f_other_decl_692(struct f_greenc_1fr *up_, P174 e_691);
static void f_scan_labels_695(struct f_greenc_1fr *up_, P174 stmts_693, rt_gstr path_694);
static void f_scan_guarded_699(struct f_greenc_1fr *up_, P174 stmts_696, P174 hs_697, rt_gstr path_698);
static rt_int f_count_g_701(struct f_greenc_1fr *up_, rt_gstr p_700);
static void f_label_body_704(struct f_greenc_1fr *up_, P174 stmts_702, P174 hs_703);
static void f_gen_label_707(struct f_greenc_1fr *up_, P174 s_705, int goto_it_706);
static int f_is_foreign_709(struct f_greenc_1fr *up_, P174 d_708);
static void f_subprogram_body_712(struct f_greenc_1fr *up_, P174 d_710, P117 y_711);
static void f_gen_statements_714(struct f_greenc_1fr *up_, P174 stmts_713);
static void f_pop_frames_716(struct f_greenc_1fr *up_, rt_int upto_715);
static void f_push_cleanup_718(struct f_greenc_1fr *up_, rt_gstr s_717);
static void f_pop_cleanup_719(struct f_greenc_1fr *up_);
static void f_guarded_724(struct f_greenc_1fr *up_, P174 decls_720, P174 stmts_721, P174 hs_722, rt_int line_723);
static void f_exc_id_728(struct f_greenc_1fr *up_, rt_gstr name_725, rt_int line_726, P140 *r_727);
static void f_gen_statement_730(struct f_greenc_1fr *up_, P174 s_729);
static void f_slice_assign_732(struct f_greenc_1fr *up_, P174 s_731);
static void f_gen_call_734(struct f_greenc_1fr *up_, P174 s_733);
static void f_gen_if_736(struct f_greenc_1fr *up_, P174 s_735);
static void f_gen_case_738(struct f_greenc_1fr *up_, P174 s_737);
static void f_selector_range_744(struct f_greenc_1fr *up_, P174 e_739, P122 t_740, rt_int *lo_741, rt_int *hi_742, int *ok_743);
static void f_push_exit_748(struct f_greenc_1fr *up_, P140 match_745, int is_loop_746, P140 *label_747);
static void f_gen_loop_750(struct f_greenc_1fr *up_, P174 s_749);
static void f_gen_block_752(struct f_greenc_1fr *up_, P174 s_751);
static int f_exit_matches_755(struct f_greenc_1fr *up_, P174 s_753, P143 x_754);
static void f_gen_exit_757(struct f_greenc_1fr *up_, P174 s_756);
static void f_gen_return_759(struct f_greenc_1fr *up_, P174 s_758);
static void f_access_of_762(struct f_greenc_1fr *up_, P117 y_760, P140 *r_761);
static void f_link_to_765(struct f_greenc_1fr *up_, rt_int l_763, P140 *r_764);
static rt_gstr f_c_ident_767(struct f_greenc_1fr *up_, rt_gstr s_766);
static void f_deref_771(struct f_greenc_1fr *up_, rt_gstr base_768, P122 t_769, P140 *r_770);
static int f_is_object_773(struct f_greenc_1fr *up_, P174 e_772);
static int f_is_const_access_775(struct f_greenc_1fr *up_, P174 e_774);
static void f_lvalue_781(struct f_greenc_1fr *up_, P174 e_776, P140 *code_out_777, P122 *t_778, P178 *c_779, int *ro_780);
static void f_select_on_790(struct f_greenc_1fr *up_, rt_gstr base_782, P122 bt_783, P174 e_784, int *ro_785, int lv_786, P140 *code_out_787, P122 *t_788, P178 *c_789);
static void f_index_on_799(struct f_greenc_1fr *up_, rt_gstr base_791, P122 bt_792, P174 e_793, int *ro_794, int lv_795, P140 *code_out_796, P122 *t_797, P178 *c_798);
static int f_type_attribute_802(struct f_greenc_1fr *up_, P122 t_800, rt_gstr name_801);
static int f_is_type_name_804(struct f_greenc_1fr *up_, rt_gstr n_803);
static int f_is_char_lit_806(struct f_greenc_1fr *up_, P174 e_805);
static int f_is_enum_lit_808(struct f_greenc_1fr *up_, P174 e_807);
static rt_gstr f_c_string_810(struct f_greenc_1fr *up_, rt_gstr s_809);
static int f_is_literal_812(struct f_greenc_1fr *up_, P174 e_811);
static void f_range_bounds_820(struct f_greenc_1fr *up_, P174 l_813, P174 h_814, P122 want_815, rt_int line_816, P122 *t_817, P140 *lo_818, P140 *hi_819);
static void f_gexpr_825(struct f_greenc_1fr *up_, P174 e_821, P122 want_822, P122 *t_823, P140 *r_824);
static void f_gexpr_1_830(struct f_greenc_1fr *up_, P174 e_826, P122 want_827, P122 *t_828, P140 *r_829);
static void f_string_aggregate_835(struct f_greenc_1fr *up_, P174 e_831, P122 want_832, P122 *t_833, P140 *r_834);
static void f_char_literal_840(struct f_greenc_1fr *up_, P174 e_836, P122 want_837, P122 *t_838, P140 *r_839);
static void f_expanded_843(struct f_greenc_1fr *up_, P174 e_841, P174 *r_842);
static void f_gen_name_848(struct f_greenc_1fr *up_, P174 e_844, P122 want_845, P122 *t_846, P140 *r_847);
static void f_gen_unop_853(struct f_greenc_1fr *up_, P174 e_849, P122 want_850, P122 *t_851, P140 *r_852);
static int f_short_int_855(struct f_greenc_1fr *up_, P122 t_854);
static rt_gstr f_float_kind_857(struct f_greenc_1fr *up_, P122 t_856);
static void f_membership_860(struct f_greenc_1fr *up_, P174 e_858, P140 *r_859);
static void f_condition_865(struct f_greenc_1fr *up_, P174 e_861, P122 want_862, P122 *t_863, P140 *r_864);
static void f_catenation_870(struct f_greenc_1fr *up_, P174 e_866, P122 want_867, P122 *t_868, P140 *r_869);
static void f_cat_operand_875(struct f_greenc_1fr *up_, P174 x_871, P122 arrt_872, rt_int line_873, P140 *r_874);
static void f_arithmetic_880(struct f_greenc_1fr *up_, P174 e_876, P122 want_877, P122 *t_878, P140 *r_879);
static void f_fixed_operation_888(struct f_greenc_1fr *up_, P174 e_881, P122 ta_882, P122 tb_883, rt_gstr a_884, rt_gstr b_885, P122 *t_886, P140 *r_887);
static void f_gen_binop_893(struct f_greenc_1fr *up_, P174 e_889, P122 want_890, P122 *t_891, P140 *r_892);
static void f_conversion_898(struct f_greenc_1fr *up_, P174 e_894, P117 y_895, P122 *t_896, P140 *r_897);
static void f_constrain_902(struct f_greenc_1fr *up_, P117 y_899, P122 t_900, P140 *r_901);
static void f_array_conversion_909(struct f_greenc_1fr *up_, P174 e_903, P122 t_904, P122 aty_905, P178 c_906, rt_gstr a_907, P140 *r_908);
static void f_gen_attr_914(struct f_greenc_1fr *up_, P174 e_910, P122 want_911, P122 *t_912, P140 *r_913);
static void f_type_bits_918(struct f_greenc_1fr *up_, P122 t_915, P178 c_916, P140 *r_917);
static void f_object_bits_922(struct f_greenc_1fr *up_, P122 t_919, rt_gstr v_920, P140 *r_921);
static void f_numeric_attr_928(struct f_greenc_1fr *up_, P174 e_923, P122 tt_924, P178 c_925, P122 *t_926, P140 *r_927);
static void f_component_attr_932(struct f_greenc_1fr *up_, P174 e_929, P122 *t_930, P140 *r_931);
static void f_config_attr_936(struct f_greenc_1fr *up_, P174 e_933, P122 *t_934, P140 *r_935);
static void f_attr_dim_940(struct f_greenc_1fr *up_, P174 e_937, P122 arrt_938, rt_int *n_939);
static void f_object_array_attr_946(struct f_greenc_1fr *up_, P174 e_941, P122 arrt_942, rt_gstr v_943, P122 *t_944, P140 *r_945);
static void f_type_array_attr_952(struct f_greenc_1fr *up_, P174 e_947, P122 arrt_948, P178 c_949, P122 *t_950, P140 *r_951);
static void f_lit_table_955(struct f_greenc_1fr *up_, P122 t_953, P140 *r_954);
static void f_val_rep_961(struct f_greenc_1fr *up_, P174 e_956, P122 tt_957, P178 c_958, P122 *t_959, P140 *r_960);
static void f_allocator_966(struct f_greenc_1fr *up_, P174 e_962, P122 want_963, P122 *t_964, P140 *r_965);
static void f_aggregate_971(struct f_greenc_1fr *up_, P174 e_967, P122 want_968, P122 *t_969, P140 *r_970);
static void f_captured_974(struct f_greenc_1fr *up_, P126 b_972, P140 *r_973);
static P1938 f_field_at_977(struct f_greenc_1fr *up_, P122 rt_975, rt_int k_976);
static int f_names_field_980(struct f_greenc_1fr *up_, P174 x_978, P1938 f_979);
static P174 f_item_for_985(struct f_greenc_1fr *up_, P174 e_981, P122 rt_982, rt_int k_983, rt_int p_984);
static void f_arm_holds_989(struct f_greenc_1fr *up_, P174 arm_986, rt_int v_987, int *res_988);
static void f_record_aggregate_993(struct f_greenc_1fr *up_, P174 e_990, P122 rt_991, P140 *r_992);
static rt_int f_field_index_996(struct f_greenc_1fr *up_, P122 rt_994, rt_gstr name_995);
static void f_agg_component_1002(struct f_greenc_1fr *up_, rt_gstr tmp_997, P122 rt_998, rt_int k_999, P174 v_1000, rt_int line_1001);
static void f_static_choice_1006(struct f_greenc_1fr *up_, P174 x_1003, rt_int *v_1004, int *ok_1005);
static void f_array_aggregate_1011(struct f_greenc_1fr *up_, P174 e_1007, P122 arrt_1008, P140 bounds_1009, P140 *r_1010);
static void f_element_store_1015(struct f_greenc_1fr *up_, rt_gstr lv_1012, P122 arrt_1013, rt_gstr v_1014);
static void f_check_choices_1019(struct f_greenc_1fr *up_, P174 e_1016, P122 arrt_1017, int has_others_1018);
static P174 f_actual_for_1023(struct f_greenc_1fr *up_, P174 args_1020, P1920 pm_1021, P1920 first_1022);
static void f_gcall_1028(struct f_greenc_1fr *up_, P174 e_1024, int is_stmt_1025, P122 *t_1026, P140 *r_1027);
static void f_out_check_1032(struct f_greenc_1fr *up_, rt_gstr lv_1029, P122 t_1030, P178 c_1031);
static void f_var_path_1035(struct f_greenc_1fr *up_, P174 e_1033, P140 *r_1034);
static int f_paths_overlap_1038(struct f_greenc_1fr *up_, rt_gstr p_1036, rt_gstr r_1037);
static int f_mentions_1041(struct f_greenc_1fr *up_, P174 n_1039, rt_gstr name_1040);
static int f_mentions_one_1044(struct f_greenc_1fr *up_, P174 n_1042, rt_gstr name_1043);
static void f_check_aliasing_1048(struct f_greenc_1fr *up_, P174 e_1045, P117 y_1046, P174 a_1047);
static void f_gcall_with_1053(struct f_greenc_1fr *up_, P174 e_1049, P117 y_1050, P122 *t_1051, P140 *r_1052);
static void f_builtin_1060(struct f_greenc_1fr *up_, rt_gstr name_1054, P174 args_1055, rt_int line_1056, int is_stmt_1057, P122 *t_1058, P140 *r_1059);
static P117 f_lookup_path_1062(struct f_greenc_1fr *up_, rt_gstr p_1061);
static int f_is_package_1064(struct f_greenc_1fr *up_, P174 e_1063);
static P117 f_member_of_1068(struct f_greenc_1fr *up_, rt_gstr p_1065, rt_gstr name_1066, rt_int line_1067);
static int f_inside_package_1070(struct f_greenc_1fr *up_, P174 p_1069);
static void f_copy_sym_1073(struct f_greenc_1fr *up_, P117 y_1071, P117 *z_1072);
static void f_complete_private_1076(struct f_greenc_1fr *up_, P122 ph_1074, P122 full_1075);
static void f_package_spec_1078(struct f_greenc_1fr *up_, P174 e_1077);
static int f_hidden_from_1081(struct f_greenc_1fr *up_, P117 m_1079, P117 first_private_1080);
static void f_package_body_1083(struct f_greenc_1fr *up_, P174 e_1082);
static int f_use_visible_1085(struct f_greenc_1fr *up_, P117 old_1084);
static void f_use_clause_1087(struct f_greenc_1fr *up_, P174 e_1086);
static int f_usable_over_1089(struct f_greenc_1fr *up_, P117 old_1088);
static int f_same_entity_1092(struct f_greenc_1fr *up_, P117 a_1090, P117 b_1091);
static void f_fits_1097(struct f_greenc_1fr *up_, P117 y_1093, P174 args_1094, P122 want_1095, int *ok_1096);
static int f_is_builtin_1099(struct f_greenc_1fr *up_, rt_gstr n_1098);
static void f_resolve_overload_1106(struct f_greenc_1fr *up_, rt_gstr name_1100, P174 args_1101, int is_stmt_1102, P122 want_1103, rt_int line_1104, P117 *y_1105);
static int f_same_profile_1109(struct f_greenc_1fr *up_, P117 a_1107, P117 b_1108);
static void f_resolve_member_overload_1117(struct f_greenc_1fr *up_, rt_gstr p_1110, rt_gstr name_1111, P174 args_1112, int is_stmt_1113, P122 want_1114, rt_int line_1115, P117 *y_1116);
static void f_user_operator_1123(struct f_greenc_1fr *up_, P174 e_1118, P122 want_1119, P122 *t_1120, P140 *r_1121, int *done_1122);
static void f_task_p_1125(struct f_greenc_1fr *up_, P174 *res_1124);
static void f_entry_p_1127(struct f_greenc_1fr *up_, P174 *res_1126);
static void f_accept_p_1129(struct f_greenc_1fr *up_, P174 *res_1128);
static void f_delay_p_1131(struct f_greenc_1fr *up_, P174 *res_1130);
static void f_designators_1133(struct f_greenc_1fr *up_, P174 *res_1132);
static void f_parse_task_statement_1135(struct f_greenc_1fr *up_, P174 *res_1134);
static void f_path_at_1139(struct f_greenc_1fr *up_, rt_int level_1136, rt_gstr field_1137, P140 *r_1138);
static int f_is_task_name_1141(struct f_greenc_1fr *up_, rt_gstr n_1140);
static void f_task_of_1145(struct f_greenc_1fr *up_, P174 e_1142, P117 *y_1143, P174 *ix_1144);
static void f_own_index_1148(struct f_greenc_1fr *up_, P117 t_1146, P140 *r_1147);
static void f_member_1153(struct f_greenc_1fr *up_, P117 y_1149, rt_gstr arr_1150, rt_gstr i_1151, P140 *r_1152);
static void f_act_path_1156(struct f_greenc_1fr *up_, P117 y_1154, P140 *r_1155);
static void f_act_path_i_1160(struct f_greenc_1fr *up_, P117 y_1157, rt_gstr i_1158, P140 *r_1159);
static void f_entry_path_1164(struct f_greenc_1fr *up_, P117 y_1161, rt_gstr i_1162, P140 *r_1163);
static void f_declare_slot_1167(struct f_greenc_1fr *up_, rt_gstr ctype_name_1165, rt_gstr field_1166);
static void f_task_decl_1169(struct f_greenc_1fr *up_, P174 e_1168);
static void f_family_arg_struct_1170(struct f_greenc_1fr *up_);
static void f_family_bounds_1175(struct f_greenc_1fr *up_, P174 b_1171, P117 y_1172, P140 x_1173, int per_member_1174);
static void f_entry_family_slot_1180(struct f_greenc_1fr *up_, P117 y_1176, rt_gstr base_1177, rt_gstr i_1178, P140 *r_1179);
static void f_task_spec_1182(struct f_greenc_1fr *up_, P174 e_1181);
static void f_entry_decl_1184(struct f_greenc_1fr *up_, P174 e_1183);
static void f_task_body_1186(struct f_greenc_1fr *up_, P174 e_1185);
static void f_task_awaits_1189(struct f_greenc_1fr *up_, P174 decls_1187, P140 *aw_1188);
static void f_task_failure_1191(struct f_greenc_1fr *up_, P174 s_1190);
static void f_entry_sym_1195(struct f_greenc_1fr *up_, P174 e_1192, P117 *y_1193, P174 *ix_1194);
static void f_entry_overload_1200(struct f_greenc_1fr *up_, P117 y_1196, P174 args_1197, rt_int line_1198, P117 *r_1199);
static void f_other_call_1205(struct f_greenc_1fr *up_, P174 e_1201, int is_stmt_1202, P122 *t_1203, P140 *r_1204);
static void f_other_attr_1210(struct f_greenc_1fr *up_, P174 e_1206, P117 y_1207, P122 *t_1208, P140 *r_1209);
static void f_member_attr_1214(struct f_greenc_1fr *up_, P174 e_1211, P122 *t_1212, P140 *r_1213);
static void f_task_builtin_1220(struct f_greenc_1fr *up_, rt_gstr name_1215, P174 args_1216, rt_int line_1217, P122 *t_1218, P140 *r_1219);
static void f_accept_entry_1223(struct f_greenc_1fr *up_, P174 s_1221, P117 *r_1222);
static void f_accept_conforms_1227(struct f_greenc_1fr *up_, P174 s_1224, P117 y_1225, int *ok_1226);
static void f_gen_accept_1229(struct f_greenc_1fr *up_, P174 s_1228);
static void f_member_slot_1233(struct f_greenc_1fr *up_, P117 y_1230, P174 s_1231, P140 *ent_1232);
static void f_gen_delay_ticks_1236(struct f_greenc_1fr *up_, P174 e_1234, P140 *r_1235);
static void f_gen_select_1238(struct f_greenc_1fr *up_, P174 s_1237);
static void f_family_range_1243(struct f_greenc_1fr *up_, P117 y_1239, P174 ix_1240, P140 *lo_1241, P140 *hi_1242);
static void f_task_statement_gen_1245(struct f_greenc_1fr *up_, P174 s_1244);
static P174 f_root_name_1247(struct f_greenc_1fr *up_, P174 e_1246);
static void f_check_pure_target_1250(struct f_greenc_1fr *up_, P174 target_1248, rt_int line_1249);
static int f_assigns_nonlocal_1253(struct f_greenc_1fr *up_, P174 d_1251, rt_gstr name_1252);
static int f_declares_1256(struct f_greenc_1fr *up_, P174 d_1254, rt_gstr name_1255);
static int f_scan_handlers_1260(struct f_greenc_1fr *up_, P174 h_1257, P174 d_1258, rt_gstr name_1259);
static int f_scan_assigns_1264(struct f_greenc_1fr *up_, P174 stmts_1261, P174 d_1262, rt_gstr name_1263);
static void f_check_call_rules_1267(struct f_greenc_1fr *up_, P174 e_1265, P117 y_1266);
static void f_generic_p_1269(struct f_greenc_1fr *up_, P174 *res_1268);
static void f_instantiation_1272(struct f_greenc_1fr *up_, P174 x_1270, P174 *res_1271);
static void f_generic_decl_1274(struct f_greenc_1fr *up_, P174 e_1273);
static int f_is_generic_name_1276(struct f_greenc_1fr *up_, rt_gstr n_1275);
static int f_instantiates_1279(struct f_greenc_1fr *up_, P174 n_1277, rt_gstr name_1278);
static void f_attach_generic_body_1281(struct f_greenc_1fr *up_, P174 e_1280);
static void f_restore_generic_context_1285(struct f_greenc_1fr *up_, P174 body_node_1282, rt_int line_1283, rt_gstr inst_1284);
static P174 f_gactual_1289(struct f_greenc_1fr *up_, P174 args_1286, rt_int nth_1287, rt_gstr name_1288);
static void f_copy_node_1293(struct f_greenc_1fr *up_, P174 n_1290, P140 name_1291, P174 *r_1292);
static int f_matches_formal_1297(struct f_greenc_1fr *up_, P117 y_1294, rt_gstr name_1295, P117 fs_1296);
static void f_actual_type_1300(struct f_greenc_1fr *up_, P174 a_1298, P117 *y_1299);
static void f_actual_subprogram_1305(struct f_greenc_1fr *up_, P174 f_1301, P174 a_1302, rt_int line_1303, P117 *r_1304);
static void f_wrap_operation_1311(struct f_greenc_1fr *up_, P174 f_1306, rt_gstr op_1307, P140 type_name_1308, rt_int line_1309, P117 *r_1310);
static void f_actual_mark_1314(struct f_greenc_1fr *up_, P174 st_1312, P174 *r_1313);
static void f_instantiate_1316(struct f_greenc_1fr *up_, P174 e_1315);
static void f_predef_type_1321(struct f_greenc_1fr *up_, rt_gstr name_1317, P122 t_1318, rt_gstr lo_1319, rt_gstr hi_1320);
static void f_predef_const_1325(struct f_greenc_1fr *up_, rt_gstr name_1322, P122 t_1323, rt_gstr code_text_1324);
static void f_predef_exc_1327(struct f_greenc_1fr *up_, rt_gstr name_1326);
static void f_predef_lit_1331(struct f_greenc_1fr *up_, rt_gstr name_1328, P122 t_1329, rt_int v_1330);
static void f_predefine_1332(struct f_greenc_1fr *up_);
static void f_lib_open_1335(struct f_greenc_1fr *up_, rt_gstr key_1333, rt_int *length_1334);
static void f_lib_store_1338(struct f_greenc_1fr *up_, rt_gstr key_1336, rt_gstr contents_1337);
static void f_unit_key_1341(struct f_greenc_1fr *up_, P174 u_1339, P140 *r_1340);
static void f_lib_enabled_1343(struct f_greenc_1fr *up_, int *yes_1342);
static void f_store_units_1344(struct f_greenc_1fr *up_);
static void f_store_span_1347(struct f_greenc_1fr *up_, P204 s_1345, rt_gstr key_1346);
static void f_lib_load_1350(struct f_greenc_1fr *up_, rt_gstr key_1348, P174 *r_1349);
static int f_defined_unit_1353(struct f_greenc_1fr *up_, rt_gstr name_1351, P174 before_1352);
static void f_library_units_1354(struct f_greenc_1fr *up_);
static void f_load_unit_1357(struct f_greenc_1fr *up_, rt_gstr name_1355, P174 *r_1356);
static void f_prelude_1358(struct f_greenc_1fr *up_);
static void f_used_units_1361(struct f_greenc_1fr *up_, P174 u_1359, P140 *r_1360);
static void f_add_names_1365(struct f_greenc_1fr *up_, P140 *r_1362, rt_gstr list_1363, int *changed_1364);
static void f_translate_1367(struct f_greenc_1fr *up_, P174 u_1366);
static int f_last_unit_1369(struct f_greenc_1fr *up_, P174 p_1368);
static void f_print_program_1370(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_108;
static P140 f_mk_237(struct f_greenc_1fr *up_, rt_gstr s_236) {
  struct f_mk_237fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_236 = cp_rt_gstr(s_236);
F->r_1372.lo = ((rt_int)1LL); F->r_1372.hi = ({ rt_gstr at1371 = F->s_236; at1371.hi >= at1371.lo ? at1371.hi - at1371.lo + 1 : (rt_int)0; });
F->r_1372.lo2 = 1; F->r_1372.hi2 = 1;
F->r_1372.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1372));
memset(F->r_1372.p, 0xFF, (size_t)G_CNT(F->r_1372));
as_rt_gstr(&F->r_1372, F->s_236);
F->result_ = ({ rt_gstr *cell1374 = rt_alloc(sizeof(rt_gstr)); *cell1374 = cp_rt_gstr(F->r_1372); (P140)cell1374; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_240(struct f_greenc_1fr *up_, rt_gstr base_238, P140 *res_239) {
  struct f_new_name_240fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_238 = cp_rt_gstr(base_238);
F->res_239 = res_239;
F->up->serial_125 = rt_add(G_NV(F->up->serial_125), ((rt_int)1LL));
(*F->res_239) = ({ rt_gstr *cell1375 = rt_alloc(sizeof(rt_gstr)); *cell1375 = cp_rt_gstr(cat_rt_gstr(F->base_238, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_125))))); (P140)cell1375; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_242(struct f_greenc_1fr *up_, int c_241) {
  struct f_is_letter_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_241 = c_241;
F->result_ = (((F->c_241 >= 65) && (F->c_241 <= 90)) || ((F->c_241 >= 97) && (F->c_241 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_244(struct f_greenc_1fr *up_, int c_243) {
  struct f_is_digit_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_243 = c_243;
F->result_ = ((F->c_243 >= 48) && (F->c_243 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_246(struct f_greenc_1fr *up_, int c_245) {
  struct f_upper_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_245 = c_245;
if (((F->c_245 >= 97) && (F->c_245 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_245) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_245, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_248(struct f_greenc_1fr *up_, rt_gstr s_247) {
  struct f_lower_s_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_247 = cp_rt_gstr(s_247);
F->r_1376 = cp_rt_gstr(F->s_247);
{ rt_int lo1380 = ((rt_int)1LL), hi1381 = ({ rt_gstr at1378 = F->s_247; at1378.hi >= at1378.lo ? at1378.hi - at1378.lo + 1 : (rt_int)0; });
for (rt_int it1382 = lo1380; it1382 <= hi1381; it1382++) {
F->i_1379 = it1382;
if (((G_NV(({ rt_gstr ix1383 = F->r_1376; ix1383.p[rt_index(F->i_1379, ix1383.lo, ix1383.hi) - ix1383.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1384 = F->r_1376; ix1384.p[rt_index(F->i_1379, ix1384.lo, ix1384.hi) - ix1384.lo]; })) <= 90))) {
(*({ rt_gstr *ix1385 = &(F->r_1376); &ix1385->p[rt_index(F->i_1379, ix1385->lo, ix1385->hi) - ix1385->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1386 = F->r_1376; ix1386.p[rt_index(F->i_1379, ix1386.lo, ix1386.hi) - ix1386.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1377: ;
F->result_ = F->r_1376;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_250(struct f_greenc_1fr *up_, rt_gstr s_249) {
  struct f_upper_s_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_249 = cp_rt_gstr(s_249);
F->r_1387 = cp_rt_gstr(F->s_249);
{ rt_int lo1391 = ((rt_int)1LL), hi1392 = ({ rt_gstr at1389 = F->s_249; at1389.hi >= at1389.lo ? at1389.hi - at1389.lo + 1 : (rt_int)0; });
for (rt_int it1393 = lo1391; it1393 <= hi1392; it1393++) {
F->i_1390 = it1393;
(*({ rt_gstr *ix1394 = &(F->r_1387); &ix1394->p[rt_index(F->i_1390, ix1394->lo, ix1394->hi) - ix1394->lo]; })) = f_upper_246(F->up, G_NV(({ rt_gstr ix1396 = F->r_1387; ix1396.p[rt_index(F->i_1390, ix1396.lo, ix1396.hi) - ix1396.lo]; })));
}
}
L_end_1388: ;
F->result_ = F->r_1387;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_252(struct f_greenc_1fr *up_, rt_gstr s_251) {
  struct f_is_operator_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_251 = cp_rt_gstr(s_251);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_251, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_251, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_251, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_251, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_251, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_251, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_251, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_251, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_251, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_251, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_251, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_254(struct f_greenc_1fr *up_, rt_gstr s_253) {
  struct f_c_field_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_253 = cp_rt_gstr(s_253);
F->result_ = cat_rt_gstr(f_lower_s_248(F->up, F->s_253), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_255(struct f_greenc_1fr *up_) {
  struct f_q_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_258(struct f_greenc_1fr *up_, rt_int line_256, rt_gstr msg_257) {
  struct f_fail_258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_256 = line_256;
F->msg_257 = cp_rt_gstr(msg_257);
if ((G_NV(F->up->trial_155) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_256))), rt_g_lit(": ", 2)), F->msg_257)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_108);
ret_:

  return;
}

static P126 f_new_buffer_259(struct f_greenc_1fr *up_) {
  struct f_new_buffer_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R127 *cell1397 = rt_alloc(sizeof(R127)); *cell1397 = cp_R127(({ R127 ag1398; ag1398.head_ = NULL; ag1398.tail_ = NULL; ag1398; })); (P126)cell1397; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_262(struct f_greenc_1fr *up_, P126 b_260, rt_gstr s_261) {
  struct f_put_to_262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_260 = b_260;
F->s_261 = cp_rt_gstr(s_261);
F->l_1399 = NULL;
F->l_1399 = ({ R152 *cell1400 = rt_alloc(sizeof(R152)); *cell1400 = cp_R152(({ R152 ag1401; ag1401.s_ = NULL; ag1401.next_ = NULL; ag1401; })); (P151)cell1400; });
(*(P151)rt_nil_check(F->l_1399)).s_ = f_mk_237(F->up, F->s_261);
if (((*(P126)rt_nil_check(F->b_260)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->b_260)).head_ = F->l_1399;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->b_260)).tail_)).next_ = F->l_1399;
}
(*(P126)rt_nil_check(F->b_260)).tail_ = F->l_1399;
ret_:

  return;
}

static void f_emit_264(struct f_greenc_1fr *up_, rt_gstr s_263) {
  struct f_emit_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_263 = cp_rt_gstr(s_263);
f_put_to_262(F->up, F->up->code_136, F->s_263);
ret_:

  return;
}

static void f_print_buffer_266(struct f_greenc_1fr *up_, P126 b_265) {
  struct f_print_buffer_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_265 = b_265;
F->l_1402 = NULL;
F->l_1402 = (*(P126)rt_nil_check(F->b_265)).head_;
while ((F->l_1402 != NULL)) {
rt_g_put(rt_g_g2s((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_1402)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1402 = (*(P151)rt_nil_check(F->l_1402)).next_;
}
L_end_1403: ;
ret_:

  return;
}

static void f_splice_269(struct f_greenc_1fr *up_, P126 a_267, P126 b_268) {
  struct f_splice_269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_267 = a_267;
F->b_268 = b_268;
if (((*(P126)rt_nil_check(F->b_268)).head_ == NULL)) {
goto ret_;
}
if (((*(P126)rt_nil_check(F->a_267)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->a_267)).head_ = (*(P126)rt_nil_check(F->b_268)).head_;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->a_267)).tail_)).next_ = (*(P126)rt_nil_check(F->b_268)).head_;
}
(*(P126)rt_nil_check(F->a_267)).tail_ = (*(P126)rt_nil_check(F->b_268)).tail_;
(*(P126)rt_nil_check(F->b_268)).head_ = NULL;
(*(P126)rt_nil_check(F->b_268)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_271(struct f_greenc_1fr *up_, rt_gstr w_270) {
  struct f_is_reserved_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_270 = cp_rt_gstr(w_270);
{ rt_int sel1405 = ({ rt_gstr at1404 = F->w_270; at1404.hi >= at1404.lo ? at1404.hi - at1404.lo + 1 : (rt_int)0; });
if (0 || sel1405 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_270, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_270, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_270, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_270, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_270, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_270, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_270, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_270, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_270, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_270, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_270, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_270, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_270, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_270, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_270, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_270, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_270, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_270, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_270, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_270, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_270, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_270, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_270, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_270, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_270, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_270, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_270, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_270, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1405 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_270, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_275(struct f_greenc_1fr *up_, rt_int kind_272, rt_gstr s_273, rt_int ival_274) {
  struct f_add_token_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_272 = kind_272;
F->s_273 = cp_rt_gstr(s_273);
F->ival_274 = ival_274;
F->up->ntoks_113 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*({ A109 *ix1406 = &(F->up->toks_112); &ix1406->p[rt_index(G_NV(F->up->ntoks_113), ix1406->lo, ix1406->hi) - ix1406->lo]; })) = ({ R111 *cell1407 = rt_alloc(sizeof(R111)); *cell1407 = cp_R111(({ R111 ag1408; ag1408.kind_ = F->kind_272; ag1408.line_ = G_NV(F->up->src_line_115); ag1408.ival_ = F->ival_274; ag1408.s_ = NULL; ag1408; })); (P110)cell1407; });
(*(P110)rt_nil_check((*({ A109 *ix1409 = &(F->up->toks_112); &ix1409->p[rt_index(G_NV(F->up->ntoks_113), ix1409->lo, ix1409->hi) - ix1409->lo]; })))).s_ = f_mk_237(F->up, F->s_273);
ret_:

  return;
}

static rt_int f_digit_value_277(struct f_greenc_1fr *up_, int c_276) {
  struct f_digit_value_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_276 = c_276;
if (f_is_digit_244(F->up, F->c_276)) {
F->result_ = rt_sub(((rt_int)(F->c_276) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_246(F->up, F->c_276)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_280(struct f_greenc_1fr *up_, int c_278, rt_int base_279) {
  struct f_digit_in_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_278 = c_278;
F->base_279 = base_279;
F->d_1410 = INT64_MIN;
if (f_is_digit_244(F->up, F->c_278)) {
F->d_1410 = rt_sub(((rt_int)(F->c_278) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_246(F->up, F->c_278) >= 65) && (f_upper_246(F->up, F->c_278) <= 70))) {
F->d_1410 = rt_add(rt_sub(((rt_int)(f_upper_246(F->up, F->c_278)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1410) >= F->base_279)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1410);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_284(struct f_greenc_1fr *up_, rt_int *v_281, rt_int base_282, rt_int d_283) {
  struct f_accumulate_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_281 = v_281;
F->base_282 = base_282;
F->d_283 = d_283;
if ((G_NV((*F->v_281)) > rt_quot(rt_sub(INT64_MAX, F->d_283), F->base_282))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_281) = rt_add(rt_mul(G_NV((*F->v_281)), F->base_282), F->d_283);
ret_:

  return;
}

static void f_lex_line_286(struct f_greenc_1fr *up_, rt_gstr line_285) {
  struct f_lex_line_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_285 = cp_rt_gstr(line_285);
F->i_1411 = INT64_MIN;
F->i_1411 = ((rt_int)1LL);
F->j_1412 = INT64_MIN;
F->j_1412 = ((rt_int)0LL);
F->n_1413 = INT64_MIN;
F->n_1413 = ({ rt_gstr at1414 = F->line_285; at1414.hi >= at1414.lo ? at1414.hi - at1414.lo + 1 : (rt_int)0; });
F->c_1415 = INT_MIN;
F->quote_1416 = INT_MIN;
F->v_1417 = INT64_MIN;
F->d_1418 = INT64_MIN;
F->buf_1419.lo = ((rt_int)1LL); F->buf_1419.hi = ((rt_int)1000LL);
F->buf_1419.lo2 = 1; F->buf_1419.hi2 = 1;
F->buf_1419.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1419));
memset(F->buf_1419.p, 0xFF, (size_t)G_CNT(F->buf_1419));
F->bl_1421 = INT64_MIN;
while ((G_NV(F->i_1411) <= G_NV(F->n_1413))) {
F->c_1415 = rt_range(G_NV(({ rt_gstr ix1423 = F->line_285; ix1423.p[rt_index(G_NV(F->i_1411), ix1423.lo, ix1423.hi) - ix1423.lo]; })), 0, 127);
if (((((G_NV(F->c_1415) == 32) || (G_NV(F->c_1415) == 9)) || (G_NV(F->c_1415) == 13)) || (G_NV(F->c_1415) == 12))) {
F->i_1411 = rt_add(G_NV(F->i_1411), ((rt_int)1LL));
} else if ((((G_NV(F->c_1415) == 45) && (G_NV(F->i_1411) < G_NV(F->n_1413))) && (G_NV(({ rt_gstr ix1424 = F->line_285; ix1424.p[rt_index(rt_add(G_NV(F->i_1411), ((rt_int)1LL)), ix1424.lo, ix1424.hi) - ix1424.lo]; })) == 45))) {
F->i_1411 = rt_add(G_NV(F->n_1413), ((rt_int)1LL));
} else if (f_is_letter_242(F->up, G_NV(F->c_1415))) {
F->j_1412 = G_NV(F->i_1411);
F->bl_1421 = ((rt_int)0LL);
while (((G_NV(F->j_1412) <= G_NV(F->n_1413)) && ((f_is_letter_242(F->up, G_NV(({ rt_gstr ix1427 = F->line_285; ix1427.p[rt_index(G_NV(F->j_1412), ix1427.lo, ix1427.hi) - ix1427.lo]; }))) || f_is_digit_244(F->up, G_NV(({ rt_gstr ix1429 = F->line_285; ix1429.p[rt_index(G_NV(F->j_1412), ix1429.lo, ix1429.hi) - ix1429.lo]; })))) || (G_NV(({ rt_gstr ix1430 = F->line_285; ix1430.p[rt_index(G_NV(F->j_1412), ix1430.lo, ix1430.hi) - ix1430.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1431 = F->line_285; ix1431.p[rt_index(G_NV(F->j_1412), ix1431.lo, ix1431.hi) - ix1431.lo]; })) == 95)) {
if (((G_NV(F->j_1412) == G_NV(F->n_1413)) || (!(f_is_letter_242(F->up, G_NV(({ rt_gstr ix1433 = F->line_285; ix1433.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1433.lo, ix1433.hi) - ix1433.lo]; }))) || f_is_digit_244(F->up, G_NV(({ rt_gstr ix1435 = F->line_285; ix1435.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1435.lo, ix1435.hi) - ix1435.lo]; }))))))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1421 = rt_add(G_NV(F->bl_1421), ((rt_int)1LL));
(*({ rt_gstr *ix1436 = &(F->buf_1419); &ix1436->p[rt_index(G_NV(F->bl_1421), ix1436->lo, ix1436->hi) - ix1436->lo]; })) = f_upper_246(F->up, G_NV(({ rt_gstr ix1438 = F->line_285; ix1438.p[rt_index(G_NV(F->j_1412), ix1438.lo, ix1438.hi) - ix1438.lo]; })));
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
}
L_end_1425: ;
if (f_is_reserved_271(F->up, ({ rt_gstr sl1440 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1440.lo, sl1440.hi); rt_index(h_, sl1440.lo, sl1440.hi); } sl1440.p += l_ - sl1440.lo; sl1440.lo = l_; sl1440.hi = h_; sl1440; }))) {
f_add_token_275(F->up, ((rt_int)2LL), ({ rt_gstr sl1442 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1442.lo, sl1442.hi); rt_index(h_, sl1442.lo, sl1442.hi); } sl1442.p += l_ - sl1442.lo; sl1442.lo = l_; sl1442.hi = h_; sl1442; }), ((rt_int)0LL));
} else {
f_add_token_275(F->up, ((rt_int)1LL), ({ rt_gstr sl1444 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1444.lo, sl1444.hi); rt_index(h_, sl1444.lo, sl1444.hi); } sl1444.p += l_ - sl1444.lo; sl1444.lo = l_; sl1444.hi = h_; sl1444; }), ((rt_int)0LL));
}
F->i_1411 = G_NV(F->j_1412);
} else if (f_is_digit_244(F->up, G_NV(F->c_1415))) {
F->j_1412 = G_NV(F->i_1411);
F->v_1417 = ((rt_int)0LL);
F->bl_1421 = ((rt_int)0LL);
while (((G_NV(F->j_1412) <= G_NV(F->n_1413)) && (f_is_digit_244(F->up, G_NV(({ rt_gstr ix1447 = F->line_285; ix1447.p[rt_index(G_NV(F->j_1412), ix1447.lo, ix1447.hi) - ix1447.lo]; }))) || (G_NV(({ rt_gstr ix1448 = F->line_285; ix1448.p[rt_index(G_NV(F->j_1412), ix1448.lo, ix1448.hi) - ix1448.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1449 = F->line_285; ix1449.p[rt_index(G_NV(F->j_1412), ix1449.lo, ix1449.hi) - ix1449.lo]; })) == 95)) {
if (((G_NV(F->j_1412) == G_NV(F->n_1413)) || (!f_is_digit_244(F->up, G_NV(({ rt_gstr ix1451 = F->line_285; ix1451.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1451.lo, ix1451.hi) - ix1451.lo]; })))))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_284(F->up, &F->v_1417, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1453 = F->line_285; ix1453.p[rt_index(G_NV(F->j_1412), ix1453.lo, ix1453.hi) - ix1453.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1421 = rt_add(G_NV(F->bl_1421), ((rt_int)1LL));
(*({ rt_gstr *ix1454 = &(F->buf_1419); &ix1454->p[rt_index(G_NV(F->bl_1421), ix1454->lo, ix1454->hi) - ix1454->lo]; })) = G_NV(({ rt_gstr ix1455 = F->line_285; ix1455.p[rt_index(G_NV(F->j_1412), ix1455.lo, ix1455.hi) - ix1455.lo]; }));
}
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
}
L_end_1445: ;
if (((G_NV(F->j_1412) < G_NV(F->n_1413)) && ((G_NV(({ rt_gstr ix1456 = F->line_285; ix1456.p[rt_index(G_NV(F->j_1412), ix1456.lo, ix1456.hi) - ix1456.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1457 = F->line_285; ix1457.p[rt_index(G_NV(F->j_1412), ix1457.lo, ix1457.hi) - ix1457.lo]; })) == 58) && (f_is_digit_244(F->up, G_NV(({ rt_gstr ix1459 = F->line_285; ix1459.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1459.lo, ix1459.hi) - ix1459.lo]; }))) || f_is_letter_242(F->up, G_NV(({ rt_gstr ix1461 = F->line_285; ix1461.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1461.lo, ix1461.hi) - ix1461.lo]; })))))))) {
{
F->base_1463 = INT64_MIN;
F->base_1463 = G_NV(F->v_1417);
if (((G_NV(F->base_1463) < ((rt_int)2LL)) || (G_NV(F->base_1463) > ((rt_int)16LL)))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1417 = ((rt_int)0LL);
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
if (((G_NV(F->j_1412) > G_NV(F->n_1413)) || (f_digit_in_280(F->up, G_NV(({ rt_gstr ix1465 = F->line_285; ix1465.p[rt_index(G_NV(F->j_1412), ix1465.lo, ix1465.hi) - ix1465.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1412) <= G_NV(F->n_1413)) && ((f_is_letter_242(F->up, G_NV(({ rt_gstr ix1468 = F->line_285; ix1468.p[rt_index(G_NV(F->j_1412), ix1468.lo, ix1468.hi) - ix1468.lo]; }))) || f_is_digit_244(F->up, G_NV(({ rt_gstr ix1470 = F->line_285; ix1470.p[rt_index(G_NV(F->j_1412), ix1470.lo, ix1470.hi) - ix1470.lo]; })))) || (G_NV(({ rt_gstr ix1471 = F->line_285; ix1471.p[rt_index(G_NV(F->j_1412), ix1471.lo, ix1471.hi) - ix1471.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1472 = F->line_285; ix1472.p[rt_index(G_NV(F->j_1412), ix1472.lo, ix1472.hi) - ix1472.lo]; })) == 95)) {
if (((G_NV(F->j_1412) == G_NV(F->n_1413)) || (f_digit_in_280(F->up, G_NV(({ rt_gstr ix1474 = F->line_285; ix1474.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1474.lo, ix1474.hi) - ix1474.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1418 = f_digit_in_280(F->up, G_NV(({ rt_gstr ix1476 = F->line_285; ix1476.p[rt_index(G_NV(F->j_1412), ix1476.lo, ix1476.hi) - ix1476.lo]; })), G_NV(F->base_1463));
if ((G_NV(F->d_1418) < ((rt_int)0LL))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1478 = F->line_285; ix1478.p[rt_index(G_NV(F->j_1412), ix1478.lo, ix1478.hi) - ix1478.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1463)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_284(F->up, &F->v_1417, G_NV(F->base_1463), G_NV(F->d_1418));
}
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
}
L_end_1466: ;

}
L_end_1462: ;
f_add_token_275(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1417))), G_NV(F->v_1417));
} else if (((G_NV(F->j_1412) < G_NV(F->n_1413)) && ((G_NV(({ rt_gstr ix1479 = F->line_285; ix1479.p[rt_index(G_NV(F->j_1412), ix1479.lo, ix1479.hi) - ix1479.lo]; })) == 46) && f_is_digit_244(F->up, G_NV(({ rt_gstr ix1481 = F->line_285; ix1481.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1481.lo, ix1481.hi) - ix1481.lo]; })))))) {
F->bl_1421 = rt_add(G_NV(F->bl_1421), ((rt_int)1LL));
(*({ rt_gstr *ix1482 = &(F->buf_1419); &ix1482->p[rt_index(G_NV(F->bl_1421), ix1482->lo, ix1482->hi) - ix1482->lo]; })) = 46;
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
while (((G_NV(F->j_1412) <= G_NV(F->n_1413)) && (f_is_digit_244(F->up, G_NV(({ rt_gstr ix1485 = F->line_285; ix1485.p[rt_index(G_NV(F->j_1412), ix1485.lo, ix1485.hi) - ix1485.lo]; }))) || (G_NV(({ rt_gstr ix1486 = F->line_285; ix1486.p[rt_index(G_NV(F->j_1412), ix1486.lo, ix1486.hi) - ix1486.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1487 = F->line_285; ix1487.p[rt_index(G_NV(F->j_1412), ix1487.lo, ix1487.hi) - ix1487.lo]; })) != 95)) {
F->bl_1421 = rt_add(G_NV(F->bl_1421), ((rt_int)1LL));
(*({ rt_gstr *ix1488 = &(F->buf_1419); &ix1488->p[rt_index(G_NV(F->bl_1421), ix1488->lo, ix1488->hi) - ix1488->lo]; })) = G_NV(({ rt_gstr ix1489 = F->line_285; ix1489.p[rt_index(G_NV(F->j_1412), ix1489.lo, ix1489.hi) - ix1489.lo]; }));
} else if (((G_NV(F->j_1412) == G_NV(F->n_1413)) || (!f_is_digit_244(F->up, G_NV(({ rt_gstr ix1491 = F->line_285; ix1491.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1491.lo, ix1491.hi) - ix1491.lo]; })))))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
}
L_end_1483: ;
if (f_exponent_ahead_289(F->up, F->line_285, G_NV(F->j_1412))) {
f_exponent_294(F->up, F->line_285, &F->j_1412, &F->buf_1419, &F->bl_1421);

}
f_add_token_275(F->up, ((rt_int)5LL), ({ rt_gstr sl1493 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1493.lo, sl1493.hi); rt_index(h_, sl1493.lo, sl1493.hi); } sl1493.p += l_ - sl1493.lo; sl1493.lo = l_; sl1493.hi = h_; sl1493; }), ((rt_int)0LL));
} else if (f_exponent_ahead_289(F->up, F->line_285, G_NV(F->j_1412))) {
f_exponent_294(F->up, F->line_285, &F->j_1412, &F->buf_1419, &F->bl_1421);

f_add_token_275(F->up, ((rt_int)5LL), ({ rt_gstr sl1495 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1495.lo, sl1495.hi); rt_index(h_, sl1495.lo, sl1495.hi); } sl1495.p += l_ - sl1495.lo; sl1495.lo = l_; sl1495.hi = h_; sl1495; }), ((rt_int)0LL));
} else {
f_add_token_275(F->up, ((rt_int)4LL), ({ rt_gstr sl1497 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1497.lo, sl1497.hi); rt_index(h_, sl1497.lo, sl1497.hi); } sl1497.p += l_ - sl1497.lo; sl1497.lo = l_; sl1497.hi = h_; sl1497; }), G_NV(F->v_1417));
}
F->i_1411 = G_NV(F->j_1412);
} else if (((G_NV(F->c_1415) == 34) || (G_NV(F->c_1415) == 37))) {
F->quote_1416 = rt_range(G_NV(F->c_1415), 0, 127);
F->j_1412 = rt_add(G_NV(F->i_1411), ((rt_int)1LL));
F->bl_1421 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1412) > G_NV(F->n_1413))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1499 = F->line_285; ix1499.p[rt_index(G_NV(F->j_1412), ix1499.lo, ix1499.hi) - ix1499.lo]; })) == G_NV(F->quote_1416))) {
if (((G_NV(F->j_1412) == G_NV(F->n_1413)) || (G_NV(({ rt_gstr ix1500 = F->line_285; ix1500.p[rt_index(rt_add(G_NV(F->j_1412), ((rt_int)1LL)), ix1500.lo, ix1500.hi) - ix1500.lo]; })) != G_NV(F->quote_1416)))) {
goto L_end_1498;
}
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
} else if (((G_NV(F->quote_1416) == 37) && (G_NV(({ rt_gstr ix1501 = F->line_285; ix1501.p[rt_index(G_NV(F->j_1412), ix1501.lo, ix1501.hi) - ix1501.lo]; })) == 34))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1421 = rt_add(G_NV(F->bl_1421), ((rt_int)1LL));
(*({ rt_gstr *ix1502 = &(F->buf_1419); &ix1502->p[rt_index(G_NV(F->bl_1421), ix1502->lo, ix1502->hi) - ix1502->lo]; })) = G_NV(({ rt_gstr ix1503 = F->line_285; ix1503.p[rt_index(G_NV(F->j_1412), ix1503.lo, ix1503.hi) - ix1503.lo]; }));
F->j_1412 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
}
L_end_1498: ;
f_add_token_275(F->up, ((rt_int)6LL), ({ rt_gstr sl1505 = F->buf_1419; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1421); if (l_ <= h_) { rt_index(l_, sl1505.lo, sl1505.hi); rt_index(h_, sl1505.lo, sl1505.hi); } sl1505.p += l_ - sl1505.lo; sl1505.lo = l_; sl1505.hi = h_; sl1505; }), ((rt_int)0LL));
F->i_1411 = rt_add(G_NV(F->j_1412), ((rt_int)1LL));
} else {
{
F->two_1507.lo = ((rt_int)1LL); F->two_1507.hi = ((rt_int)3LL);
F->two_1507.lo2 = 1; F->two_1507.hi2 = 1;
F->two_1507.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1507));
memset(F->two_1507.p, 0xFF, (size_t)G_CNT(F->two_1507));
as_rt_gstr(&F->two_1507, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1509 = &(F->two_1507); &ix1509->p[rt_index(((rt_int)1LL), ix1509->lo, ix1509->hi) - ix1509->lo]; })) = G_NV(F->c_1415);
if ((G_NV(F->i_1411) < G_NV(F->n_1413))) {
(*({ rt_gstr *ix1510 = &(F->two_1507); &ix1510->p[rt_index(((rt_int)2LL), ix1510->lo, ix1510->hi) - ix1510->lo]; })) = G_NV(({ rt_gstr ix1511 = F->line_285; ix1511.p[rt_index(rt_add(G_NV(F->i_1411), ((rt_int)1LL)), ix1511.lo, ix1511.hi) - ix1511.lo]; }));
}
if ((rt_add(G_NV(F->i_1411), ((rt_int)1LL)) < G_NV(F->n_1413))) {
(*({ rt_gstr *ix1512 = &(F->two_1507); &ix1512->p[rt_index(((rt_int)3LL), ix1512->lo, ix1512->hi) - ix1512->lo]; })) = G_NV(({ rt_gstr ix1513 = F->line_285; ix1513.p[rt_index(rt_add(G_NV(F->i_1411), ((rt_int)2LL)), ix1513.lo, ix1513.hi) - ix1513.lo]; }));
}
if (eq_rt_gstr(F->two_1507, rt_g_lit(":=:", 3))) {
f_add_token_275(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1411 = rt_add(G_NV(F->i_1411), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1514 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1514.lo, sl1514.hi); rt_index(h_, sl1514.lo, sl1514.hi); } sl1514.p += l_ - sl1514.lo; sl1514.lo = l_; sl1514.hi = h_; sl1514; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1515 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1515.lo, sl1515.hi); rt_index(h_, sl1515.lo, sl1515.hi); } sl1515.p += l_ - sl1515.lo; sl1515.lo = l_; sl1515.hi = h_; sl1515; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1516 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1516.lo, sl1516.hi); rt_index(h_, sl1516.lo, sl1516.hi); } sl1516.p += l_ - sl1516.lo; sl1516.lo = l_; sl1516.hi = h_; sl1516; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1517 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1517.lo, sl1517.hi); rt_index(h_, sl1517.lo, sl1517.hi); } sl1517.p += l_ - sl1517.lo; sl1517.lo = l_; sl1517.hi = h_; sl1517; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1518 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1518.lo, sl1518.hi); rt_index(h_, sl1518.lo, sl1518.hi); } sl1518.p += l_ - sl1518.lo; sl1518.lo = l_; sl1518.hi = h_; sl1518; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1519 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1519.lo, sl1519.hi); rt_index(h_, sl1519.lo, sl1519.hi); } sl1519.p += l_ - sl1519.lo; sl1519.lo = l_; sl1519.hi = h_; sl1519; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1520 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1520.lo, sl1520.hi); rt_index(h_, sl1520.lo, sl1520.hi); } sl1520.p += l_ - sl1520.lo; sl1520.lo = l_; sl1520.hi = h_; sl1520; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1521 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1521.lo, sl1521.hi); rt_index(h_, sl1521.lo, sl1521.hi); } sl1521.p += l_ - sl1521.lo; sl1521.lo = l_; sl1521.hi = h_; sl1521; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1522 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1522.lo, sl1522.hi); rt_index(h_, sl1522.lo, sl1522.hi); } sl1522.p += l_ - sl1522.lo; sl1522.lo = l_; sl1522.hi = h_; sl1522; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1523 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1523.lo, sl1523.hi); rt_index(h_, sl1523.lo, sl1523.hi); } sl1523.p += l_ - sl1523.lo; sl1523.lo = l_; sl1523.hi = h_; sl1523; }), rt_g_lit(">>", 2)))) {
f_add_token_275(F->up, ((rt_int)3LL), ({ rt_gstr sl1525 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1525.lo, sl1525.hi); rt_index(h_, sl1525.lo, sl1525.hi); } sl1525.p += l_ - sl1525.lo; sl1525.lo = l_; sl1525.hi = h_; sl1525; }), ((rt_int)0LL));
F->i_1411 = rt_add(G_NV(F->i_1411), ((rt_int)2LL));
} else if ((G_NV(F->c_1415) == 33)) {
f_add_token_275(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1411 = rt_add(G_NV(F->i_1411), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1415) == 38) || (G_NV(F->c_1415) == 39)) || (G_NV(F->c_1415) == 40)) || (G_NV(F->c_1415) == 41)) || (G_NV(F->c_1415) == 42)) || (G_NV(F->c_1415) == 43)) || (G_NV(F->c_1415) == 44)) || (G_NV(F->c_1415) == 45)) || (G_NV(F->c_1415) == 46)) || (G_NV(F->c_1415) == 47)) || (G_NV(F->c_1415) == 58)) || (G_NV(F->c_1415) == 59)) || (G_NV(F->c_1415) == 60)) || (G_NV(F->c_1415) == 61)) || (G_NV(F->c_1415) == 62)) || (G_NV(F->c_1415) == 124))) {
f_add_token_275(F->up, ((rt_int)3LL), ({ rt_gstr sl1527 = F->two_1507; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1527.lo, sl1527.hi); rt_index(h_, sl1527.lo, sl1527.hi); } sl1527.p += l_ - sl1527.lo; sl1527.lo = l_; sl1527.hi = h_; sl1527; }), ((rt_int)0LL));
F->i_1411 = rt_add(G_NV(F->i_1411), ((rt_int)1LL));
if ((G_NV(F->c_1415) == 59)) {
f_check_include_301(F->up);
}
} else {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("unexpected character", 20));
}

}
L_end_1506: ;
}
}
L_end_1422: ;
ret_:

  return;
}

static int f_exponent_ahead_289(struct f_greenc_1fr *up_, rt_gstr line_287, rt_int j_288) {
  struct f_exponent_ahead_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_287 = cp_rt_gstr(line_287);
F->j_288 = j_288;
if ((F->j_288 >= ({ rt_gstr at1528 = F->line_287; at1528.hi >= at1528.lo ? at1528.hi - at1528.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1529 = F->line_287; ix1529.p[rt_index(F->j_288, ix1529.lo, ix1529.hi) - ix1529.lo]; })) != 69) && (G_NV(({ rt_gstr ix1530 = F->line_287; ix1530.p[rt_index(F->j_288, ix1530.lo, ix1530.hi) - ix1530.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_244(F->up, G_NV(({ rt_gstr ix1532 = F->line_287; ix1532.p[rt_index(rt_add(F->j_288, ((rt_int)1LL)), ix1532.lo, ix1532.hi) - ix1532.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_288, ((rt_int)1LL)) >= ({ rt_gstr at1533 = F->line_287; at1533.hi >= at1533.lo ? at1533.hi - at1533.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1534 = F->line_287; ix1534.p[rt_index(rt_add(F->j_288, ((rt_int)1LL)), ix1534.lo, ix1534.hi) - ix1534.lo]; })) == 43) || (G_NV(({ rt_gstr ix1535 = F->line_287; ix1535.p[rt_index(rt_add(F->j_288, ((rt_int)1LL)), ix1535.lo, ix1535.hi) - ix1535.lo]; })) == 45)) && f_is_digit_244(F->up, G_NV(({ rt_gstr ix1537 = F->line_287; ix1537.p[rt_index(rt_add(F->j_288, ((rt_int)2LL)), ix1537.lo, ix1537.hi) - ix1537.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_294(struct f_greenc_1fr *up_, rt_gstr line_290, rt_int *j_291, rt_gstr *buf_292, rt_int *bl_293) {
  struct f_exponent_294fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_290 = cp_rt_gstr(line_290);
F->j_291 = j_291;
F->buf_292 = buf_292;
F->bl_293 = bl_293;
(*F->bl_293) = rt_add(G_NV((*F->bl_293)), ((rt_int)1LL));
(*({ rt_gstr *ix1538 = &((*F->buf_292)); &ix1538->p[rt_index(G_NV((*F->bl_293)), ix1538->lo, ix1538->hi) - ix1538->lo]; })) = 69;
(*F->j_291) = rt_add(G_NV((*F->j_291)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1539 = F->line_290; ix1539.p[rt_index(G_NV((*F->j_291)), ix1539.lo, ix1539.hi) - ix1539.lo]; })) == 43) || (G_NV(({ rt_gstr ix1540 = F->line_290; ix1540.p[rt_index(G_NV((*F->j_291)), ix1540.lo, ix1540.hi) - ix1540.lo]; })) == 45))) {
(*F->bl_293) = rt_add(G_NV((*F->bl_293)), ((rt_int)1LL));
(*({ rt_gstr *ix1541 = &((*F->buf_292)); &ix1541->p[rt_index(G_NV((*F->bl_293)), ix1541->lo, ix1541->hi) - ix1541->lo]; })) = G_NV(({ rt_gstr ix1542 = F->line_290; ix1542.p[rt_index(G_NV((*F->j_291)), ix1542.lo, ix1542.hi) - ix1542.lo]; }));
(*F->j_291) = rt_add(G_NV((*F->j_291)), ((rt_int)1LL));
}
while (((G_NV((*F->j_291)) <= ({ rt_gstr at1544 = F->line_290; at1544.hi >= at1544.lo ? at1544.hi - at1544.lo + 1 : (rt_int)0; })) && (f_is_digit_244(F->up, G_NV(({ rt_gstr ix1546 = F->line_290; ix1546.p[rt_index(G_NV((*F->j_291)), ix1546.lo, ix1546.hi) - ix1546.lo]; }))) || (G_NV(({ rt_gstr ix1547 = F->line_290; ix1547.p[rt_index(G_NV((*F->j_291)), ix1547.lo, ix1547.hi) - ix1547.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1548 = F->line_290; ix1548.p[rt_index(G_NV((*F->j_291)), ix1548.lo, ix1548.hi) - ix1548.lo]; })) != 95)) {
(*F->bl_293) = rt_add(G_NV((*F->bl_293)), ((rt_int)1LL));
(*({ rt_gstr *ix1549 = &((*F->buf_292)); &ix1549->p[rt_index(G_NV((*F->bl_293)), ix1549->lo, ix1549->hi) - ix1549->lo]; })) = G_NV(({ rt_gstr ix1550 = F->line_290; ix1550.p[rt_index(G_NV((*F->j_291)), ix1550.lo, ix1550.hi) - ix1550.lo]; }));
} else if (((G_NV((*F->j_291)) == ({ rt_gstr at1551 = F->line_290; at1551.hi >= at1551.lo ? at1551.hi - at1551.lo + 1 : (rt_int)0; })) || (!f_is_digit_244(F->up, G_NV(({ rt_gstr ix1553 = F->line_290; ix1553.p[rt_index(rt_add(G_NV((*F->j_291)), ((rt_int)1LL)), ix1553.lo, ix1553.hi) - ix1553.lo]; })))))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_291) = rt_add(G_NV((*F->j_291)), ((rt_int)1LL));
}
L_end_1543: ;
ret_:

  return;
}

static void f_include_open_297(struct f_greenc_1fr *up_, rt_gstr name_295, rt_int *length_296) {
  struct f_include_open_297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_295 = cp_rt_gstr(name_295);
F->length_296 = length_296;
rt_g_include_open(rt_g_g2s(F->name_295), F->length_296);
ret_:

  return;
}

static void f_include_char_300(struct f_greenc_1fr *up_, rt_int i_298, int *c_299) {
  struct f_include_char_300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_298 = i_298;
F->c_299 = c_299;
rt_g_include_char(F->i_298, F->c_299);
ret_:

  return;
}

static void f_check_include_301(struct f_greenc_1fr *up_) {
  struct f_check_include_301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1554 = INT64_MIN;
if ((G_NV(F->up->ntoks_113) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P110)rt_nil_check(({ A109 ix1555 = F->up->toks_112; ix1555.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1555.lo, ix1555.hi) - ix1555.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P110)rt_nil_check(({ A109 ix1556 = F->up->toks_112; ix1556.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1556.lo, ix1556.hi) - ix1556.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1557 = F->up->toks_112; ix1557.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1557.lo, ix1557.hi) - ix1557.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1558 = F->up->toks_112; ix1558.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)4LL)), ix1558.lo, ix1558.hi) - ix1558.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1559 = F->up->toks_112; ix1559.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)3LL)), ix1559.lo, ix1559.hi) - ix1559.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1560 = F->up->toks_112; ix1560.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)1LL)), ix1560.lo, ix1560.hi) - ix1560.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_297(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1562 = F->up->toks_112; ix1562.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1562.lo, ix1562.hi) - ix1562.lo]; }))).s_)), &F->n_1554);
if ((G_NV(F->n_1554) < ((rt_int)0LL))) {
f_fail_258(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1564 = F->up->toks_112; ix1564.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1564.lo, ix1564.hi) - ix1564.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_113 = rt_sub(G_NV(F->up->ntoks_113), ((rt_int)6LL));
f_include_text_303(F->up, G_NV(F->n_1554));
ret_:

  return;
}

static void f_include_text_303(struct f_greenc_1fr *up_, rt_int n_302) {
  struct f_include_text_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_302 = n_302;
F->t_1565.lo = ((rt_int)1LL); F->t_1565.hi = rt_add(F->n_302, ((rt_int)1LL));
F->t_1565.lo2 = 1; F->t_1565.hi2 = 1;
F->t_1565.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1565));
memset(F->t_1565.p, 0xFF, (size_t)G_CNT(F->t_1565));
F->saved_line_1567 = INT64_MIN;
F->saved_line_1567 = G_NV(F->up->src_line_115);
F->from_1568 = INT64_MIN;
F->from_1568 = ((rt_int)1LL);
{ rt_int lo1571 = ((rt_int)1LL), hi1572 = F->n_302;
for (rt_int it1573 = lo1571; it1573 <= hi1572; it1573++) {
F->k_1570 = it1573;
f_include_char_300(F->up, F->k_1570, &(*({ rt_gstr *ix1575 = &(F->t_1565); &ix1575->p[rt_index(F->k_1570, ix1575->lo, ix1575->hi) - ix1575->lo]; })));
}
}
L_end_1569: ;
F->up->src_line_115 = ((rt_int)0LL);
{ rt_int lo1578 = ((rt_int)1LL), hi1579 = F->n_302;
for (rt_int it1580 = lo1578; it1580 <= hi1579; it1580++) {
F->k_1577 = it1580;
if ((G_NV(({ rt_gstr ix1581 = F->t_1565; ix1581.p[rt_index(F->k_1577, ix1581.lo, ix1581.hi) - ix1581.lo]; })) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_307(F->up, F->t_1565, G_NV(F->from_1568), rt_sub(F->k_1577, ((rt_int)1LL)));
F->from_1568 = rt_add(F->k_1577, ((rt_int)1LL));
}
}
}
L_end_1576: ;
if ((G_NV(F->from_1568) <= F->n_302)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_307(F->up, F->t_1565, G_NV(F->from_1568), F->n_302);
}
F->up->src_line_115 = G_NV(F->saved_line_1567);
ret_:

  return;
}

static void f_include_line_307(struct f_greenc_1fr *up_, rt_gstr t_304, rt_int from_305, rt_int to_306) {
  struct f_include_line_307fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_304 = cp_rt_gstr(t_304);
F->from_305 = from_305;
F->to_306 = to_306;
F->l_1582.lo = ((rt_int)1LL); F->l_1582.hi = rt_add(rt_sub(F->to_306, F->from_305), ((rt_int)1LL));
F->l_1582.lo2 = 1; F->l_1582.hi2 = 1;
F->l_1582.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1582));
memset(F->l_1582.p, 0xFF, (size_t)G_CNT(F->l_1582));
{ rt_int lo1586 = F->from_305, hi1587 = F->to_306;
for (rt_int it1588 = lo1586; it1588 <= hi1587; it1588++) {
F->k_1585 = it1588;
(*({ rt_gstr *ix1589 = &(F->l_1582); &ix1589->p[rt_index(rt_add(rt_sub(F->k_1585, F->from_305), ((rt_int)1LL)), ix1589->lo, ix1589->hi) - ix1589->lo]; })) = G_NV(({ rt_gstr ix1590 = F->t_304; ix1590.p[rt_index(F->k_1585, ix1590.lo, ix1590.hi) - ix1590.lo]; }));
}
}
L_end_1584: ;
f_lex_line_286(F->up, F->l_1582);
ret_:

  return;
}

static void f_read_source_308(struct f_greenc_1fr *up_) {
  struct f_read_source_308fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1591;
if (RT_TRY(xf1591)) {
F->buf_1593.lo = ((rt_int)1LL); F->buf_1593.hi = ((rt_int)10000LL);
F->buf_1593.lo2 = 1; F->buf_1593.hi2 = 1;
F->buf_1593.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1593));
memset(F->buf_1593.p, 0xFF, (size_t)G_CNT(F->buf_1593));
F->bl_1595 = INT64_MIN;
F->bl_1595 = ((rt_int)0LL);
F->c_1596 = INT_MIN;
for (;;) {
(F->c_1596 = rt_g_getc());
if ((G_NV(F->c_1596) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1598 = &(F->up->src_lines_203); &ix1598->p[rt_index(G_NV(F->up->src_line_115), ix1598->lo, ix1598->hi) - ix1598->lo]; })) = f_mk_237(F->up, ({ rt_gstr sl1600 = F->buf_1593; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1595); if (l_ <= h_) { rt_index(l_, sl1600.lo, sl1600.hi); rt_index(h_, sl1600.lo, sl1600.hi); } sl1600.p += l_ - sl1600.lo; sl1600.lo = l_; sl1600.hi = h_; sl1600; }));
}
f_lex_line_286(F->up, ({ rt_gstr sl1602 = F->buf_1593; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1595); if (l_ <= h_) { rt_index(l_, sl1602.lo, sl1602.hi); rt_index(h_, sl1602.lo, sl1602.hi); } sl1602.p += l_ - sl1602.lo; sl1602.lo = l_; sl1602.hi = h_; sl1602; }));
F->bl_1595 = ((rt_int)0LL);
} else {
F->bl_1595 = rt_add(G_NV(F->bl_1595), ((rt_int)1LL));
(*({ rt_gstr *ix1603 = &(F->buf_1593); &ix1603->p[rt_index(G_NV(F->bl_1595), ix1603->lo, ix1603->hi) - ix1603->lo]; })) = G_NV(F->c_1596);
}
}
L_end_1597: ;
RT_POP(xf1591);
} else {
RT_POP(xf1591);
int x1592 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1592);
if (0 || x1592 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1595) > ((rt_int)0LL))) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1604 = &(F->up->src_lines_203); &ix1604->p[rt_index(G_NV(F->up->src_line_115), ix1604->lo, ix1604->hi) - ix1604->lo]; })) = f_mk_237(F->up, ({ rt_gstr sl1606 = F->buf_1593; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1595); if (l_ <= h_) { rt_index(l_, sl1606.lo, sl1606.hi); rt_index(h_, sl1606.lo, sl1606.hi); } sl1606.p += l_ - sl1606.lo; sl1606.lo = l_; sl1606.hi = h_; sl1606; }));
}
f_lex_line_286(F->up, ({ rt_gstr sl1608 = F->buf_1593; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1595); if (l_ <= h_) { rt_index(l_, sl1608.lo, sl1608.hi); rt_index(h_, sl1608.lo, sl1608.hi); } sl1608.p += l_ - sl1608.lo; sl1608.lo = l_; sl1608.hi = h_; sl1608; }));
}
f_add_token_275(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1592);
}
}
}
ret_:

  return;
}

static P174 f_nn_311(struct f_greenc_1fr *up_, rt_int kind_309, rt_int line_310) {
  struct f_nn_311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_309 = kind_309;
F->line_310 = line_310;
F->result_ = ({ R175 *cell1609 = rt_alloc(sizeof(R175)); *cell1609 = cp_R175(({ R175 ag1610; ag1610.kind_ = F->kind_309; ag1610.line_ = F->line_310; ag1610.ival_ = ((rt_int)0LL); ag1610.flag_ = ((rt_int)0LL); ag1610.name_ = NULL; ag1610.tag_ = NULL; ag1610.a_ = NULL; ag1610.b_ = NULL; ag1610.c_ = NULL; ag1610.d_ = NULL; ag1610.e_ = NULL; ag1610.next_ = NULL; ag1610.formal_ = NULL; ag1610; })); (P174)cell1609; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_315(struct f_greenc_1fr *up_, P174 *head_312, P174 *tail_313, P174 x_314) {
  struct f_append_315fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_312 = head_312;
F->tail_313 = tail_313;
F->x_314 = x_314;
if ((F->x_314 == NULL)) {
goto ret_;
}
if (((*F->head_312) == NULL)) {
(*F->head_312) = F->x_314;
} else {
(*(P174)rt_nil_check((*F->tail_313))).next_ = F->x_314;
}
(*F->tail_313) = F->x_314;
while (((*(P174)rt_nil_check((*F->tail_313))).next_ != NULL)) {
(*F->tail_313) = (*(P174)rt_nil_check((*F->tail_313))).next_;
}
L_end_1611: ;
ret_:

  return;
}

static rt_int f_list_len_317(struct f_greenc_1fr *up_, P174 l_316) {
  struct f_list_len_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_316 = l_316;
F->n_1612 = INT64_MIN;
F->n_1612 = ((rt_int)0LL);
F->p_1613 = NULL;
F->p_1613 = F->l_316;
while ((F->p_1613 != NULL)) {
F->n_1612 = rt_add(G_NV(F->n_1612), ((rt_int)1LL));
F->p_1613 = (*(P174)rt_nil_check(F->p_1613)).next_;
}
L_end_1614: ;
F->result_ = G_NV(F->n_1612);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_318(struct f_greenc_1fr *up_) {
  struct f_cur_line_318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1615 = F->up->toks_112; ix1615.p[rt_index(G_NV(F->up->tpos_114), ix1615.lo, ix1615.hi) - ix1615.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_320(struct f_greenc_1fr *up_, rt_gstr w_319) {
  struct f_at_kw_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_319 = cp_rt_gstr(w_319);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1616 = F->up->toks_112; ix1616.p[rt_index(G_NV(F->up->tpos_114), ix1616.lo, ix1616.hi) - ix1616.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1617 = F->up->toks_112; ix1617.p[rt_index(G_NV(F->up->tpos_114), ix1617.lo, ix1617.hi) - ix1617.lo]; }))).s_)), F->w_319);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_322(struct f_greenc_1fr *up_, rt_gstr w_321) {
  struct f_at_op_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_321 = cp_rt_gstr(w_321);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1618 = F->up->toks_112; ix1618.p[rt_index(G_NV(F->up->tpos_114), ix1618.lo, ix1618.hi) - ix1618.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1619 = F->up->toks_112; ix1619.p[rt_index(G_NV(F->up->tpos_114), ix1619.lo, ix1619.hi) - ix1619.lo]; }))).s_)), F->w_321);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_324(struct f_greenc_1fr *up_, rt_int k_323) {
  struct f_at_kind_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_323 = k_323;
F->result_ = (G_NV((*(P110)rt_nil_check(({ A109 ix1620 = F->up->toks_112; ix1620.p[rt_index(G_NV(F->up->tpos_114), ix1620.lo, ix1620.hi) - ix1620.lo]; }))).kind_) == F->k_323);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_326(struct f_greenc_1fr *up_, rt_int k_325) {
  struct f_kind_at_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_325 = k_325;
if ((rt_add(G_NV(F->up->tpos_114), F->k_325) > G_NV(F->up->ntoks_113))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1621 = F->up->toks_112; ix1621.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_325), ix1621.lo, ix1621.hi) - ix1621.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_328(struct f_greenc_1fr *up_, rt_int k_327) {
  struct f_text_at_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_327 = k_327;
if ((rt_add(G_NV(F->up->tpos_114), F->k_327) > G_NV(F->up->ntoks_113))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1622 = F->up->toks_112; ix1622.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_327), ix1622.lo, ix1622.hi) - ix1622.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_330(struct f_greenc_1fr *up_, rt_gstr msg_329) {
  struct f_perror_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_329 = cp_rt_gstr(msg_329);
f_fail_258(F->up, G_NV((*(P110)rt_nil_check(({ A109 ix1625 = F->up->toks_112; ix1625.p[rt_index(G_NV(F->up->tpos_114), ix1625.lo, ix1625.hi) - ix1625.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_329, rt_g_lit(" (at ", 5)), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1626 = F->up->toks_112; ix1626.p[rt_index(G_NV(F->up->tpos_114), ix1626.lo, ix1626.hi) - ix1626.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_331(struct f_greenc_1fr *up_) {
  struct f_skip_331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_333(struct f_greenc_1fr *up_, rt_gstr w_332) {
  struct f_expect_kw_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_332 = cp_rt_gstr(w_332);
if ((!f_at_kw_320(F->up, F->w_332))) {
f_perror_330(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_332));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_335(struct f_greenc_1fr *up_, rt_gstr w_334) {
  struct f_expect_op_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_334 = cp_rt_gstr(w_334);
if ((!f_at_op_322(F->up, F->w_334))) {
f_perror_330(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_334));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_337(struct f_greenc_1fr *up_, P140 *res_336) {
  struct f_expect_id_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_336 = res_336;
if ((!f_at_kind_324(F->up, ((rt_int)1LL)))) {
f_perror_330(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
(*F->res_336) = (*(P110)rt_nil_check(({ A109 ix1627 = F->up->toks_112; ix1627.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1627.lo, ix1627.hi) - ix1627.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_339(struct f_greenc_1fr *up_, P174 *res_338) {
  struct f_name_node_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_338 = res_338;
F->x_1628 = NULL;
F->x_1628 = f_nn_311(F->up, ((rt_int)5LL), f_cur_line_318(F->up));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1628)).name_);
(*F->res_338) = F->x_1628;
goto ret_;
ret_:

  return;
}

static void f_id_list_341(struct f_greenc_1fr *up_, P174 *res_340) {
  struct f_id_list_341fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_340 = res_340;
F->head_1629 = NULL;
F->tail_1630 = NULL;
F->x_1631 = NULL;
f_name_node_339(F->up, &F->x_1631);
f_append_315(F->up, &F->head_1629, &F->tail_1630, F->x_1631);
while (f_at_op_322(F->up, rt_g_lit(",", 1))) {
f_skip_331(F->up);
f_name_node_339(F->up, &F->x_1631);
f_append_315(F->up, &F->head_1629, &F->tail_1630, F->x_1631);
}
L_end_1632: ;
(*F->res_340) = F->head_1629;
goto ret_;
ret_:

  return;
}

static P174 f_binop_346(struct f_greenc_1fr *up_, P140 op_342, P174 l_343, P174 r_344, rt_int line_345) {
  struct f_binop_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_342 = op_342;
F->l_343 = l_343;
F->r_344 = r_344;
F->line_345 = line_345;
F->x_1633 = NULL;
F->x_1633 = f_nn_311(F->up, ((rt_int)7LL), F->line_345);
(*(P174)rt_nil_check(F->x_1633)).name_ = F->op_342;
(*(P174)rt_nil_check(F->x_1633)).a_ = F->l_343;
(*(P174)rt_nil_check(F->x_1633)).b_ = F->r_344;
F->result_ = F->x_1633;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_348(struct f_greenc_1fr *up_, P174 *res_347) {
  struct f_expr_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->l_1634 = NULL;
F->r_1635 = NULL;
F->op_1636 = NULL;
F->first_op_1637 = NULL;
F->line_1638 = INT64_MIN;
F->short_1639 = INT_MIN;
F->short_1639 = 0;
F->first_short_1640 = INT_MIN;
F->first_short_1640 = 0;
f_relation_352(F->up, &F->l_1634);
while (((f_at_kw_320(F->up, rt_g_lit("AND", 3)) || f_at_kw_320(F->up, rt_g_lit("OR", 2))) || f_at_kw_320(F->up, rt_g_lit("XOR", 3)))) {
F->op_1636 = (*(P110)rt_nil_check(({ A109 ix1642 = F->up->toks_112; ix1642.p[rt_index(G_NV(F->up->tpos_114), ix1642.lo, ix1642.hi) - ix1642.lo]; }))).s_;
F->line_1638 = f_cur_line_318(F->up);
f_skip_331(F->up);
F->short_1639 = 0;
if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1636)), rt_g_lit("AND", 3)) && f_at_kw_320(F->up, rt_g_lit("THEN", 4)))) {
f_skip_331(F->up);
F->short_1639 = 1;
} else if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1636)), rt_g_lit("OR", 2)) && f_at_kw_320(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_331(F->up);
F->short_1639 = 1;
}
if ((F->first_op_1637 == NULL)) {
F->first_op_1637 = F->op_1636;
F->first_short_1640 = G_NV(F->short_1639);
} else if (((!eq_rt_gstr((*(P140)rt_nil_check(F->first_op_1637)), (*(P140)rt_nil_check(F->op_1636)))) || (G_NV(F->first_short_1640) != G_NV(F->short_1639)))) {
f_fail_258(F->up, G_NV(F->line_1638), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_352(F->up, &F->r_1635);
F->l_1634 = f_binop_346(F->up, F->op_1636, F->l_1634, F->r_1635, G_NV(F->line_1638));
if (G_NV(F->short_1639)) {
(*(P174)rt_nil_check(F->l_1634)).ival_ = ((rt_int)1LL);
}
}
L_end_1641: ;
(*F->res_347) = F->l_1634;
goto ret_;
ret_:

  return;
}

static int f_is_rel_350(struct f_greenc_1fr *up_, rt_gstr s_349) {
  struct f_is_rel_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_349 = cp_rt_gstr(s_349);
F->result_ = (((((eq_rt_gstr(F->s_349, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_349, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_349, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_349, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_349, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_349, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_352(struct f_greenc_1fr *up_, P174 *res_351) {
  struct f_relation_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_351 = res_351;
F->l_1643 = NULL;
F->r_1644 = NULL;
F->lo_1645 = NULL;
F->hi_1646 = NULL;
F->t_1647 = NULL;
F->op_1648 = NULL;
F->line_1649 = INT64_MIN;
F->line_1649 = f_cur_line_318(F->up);
F->neg_1650 = INT_MIN;
F->neg_1650 = 0;
f_simple_expr_356(F->up, &F->l_1643);
if ((f_at_kind_324(F->up, ((rt_int)3LL)) && f_is_rel_350(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1652 = F->up->toks_112; ix1652.p[rt_index(G_NV(F->up->tpos_114), ix1652.lo, ix1652.hi) - ix1652.lo]; }))).s_))))) {
F->op_1648 = (*(P110)rt_nil_check(({ A109 ix1653 = F->up->toks_112; ix1653.p[rt_index(G_NV(F->up->tpos_114), ix1653.lo, ix1653.hi) - ix1653.lo]; }))).s_;
f_skip_331(F->up);
f_simple_expr_356(F->up, &F->r_1644);
F->l_1643 = f_binop_346(F->up, F->op_1648, F->l_1643, F->r_1644, G_NV(F->line_1649));
(*F->res_351) = F->l_1643;
goto ret_;
}
if (((f_at_kw_320(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_331(F->up);
F->neg_1650 = 1;
}
if (f_at_kw_320(F->up, rt_g_lit("IN", 2))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &F->lo_1645);
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &F->hi_1646);
F->t_1647 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1649));
(*(P174)rt_nil_check(F->t_1647)).a_ = F->lo_1645;
(*(P174)rt_nil_check(F->t_1647)).b_ = F->hi_1646;
} else if (((G_NV((*(P174)rt_nil_check(F->lo_1645)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->lo_1645)).kind_) == ((rt_int)9LL)))) {
F->t_1647 = f_nn_311(F->up, ((rt_int)80LL), G_NV(F->line_1649));
(*(P174)rt_nil_check(F->t_1647)).name_ = (*(P174)rt_nil_check(F->lo_1645)).name_;
if ((G_NV((*(P174)rt_nil_check(F->lo_1645)).kind_) == ((rt_int)9LL))) {
(*(P174)rt_nil_check(F->t_1647)).tag_ = f_mk_237(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->lo_1645)).a_));
}
if (f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) {
f_skip_331(F->up);
F->r_1644 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1649));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1644)).a_);
f_expect_op_335(F->up, rt_g_lit("..", 2));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1644)).b_);
(*(P174)rt_nil_check(F->t_1647)).a_ = F->r_1644;
(*(P174)rt_nil_check(F->t_1647)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_320(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_320(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->t_1647)).b_);
(*(P174)rt_nil_check(F->t_1647)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_330(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1648 = f_mk_237(F->up, rt_g_lit("IN", 2));
F->l_1643 = f_binop_346(F->up, F->op_1648, F->l_1643, F->t_1647, G_NV(F->line_1649));
if (G_NV(F->neg_1650)) {
F->t_1647 = f_nn_311(F->up, ((rt_int)6LL), G_NV(F->line_1649));
(*(P174)rt_nil_check(F->t_1647)).name_ = f_mk_237(F->up, rt_g_lit("NOT", 3));
(*(P174)rt_nil_check(F->t_1647)).a_ = F->l_1643;
(*F->res_351) = F->t_1647;
goto ret_;
}
}
(*F->res_351) = F->l_1643;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_354(struct f_greenc_1fr *up_, P174 e_353) {
  struct f_path_of_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_353 = e_353;
if ((G_NV((*(P174)rt_nil_check(F->e_353)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_354(F->up, (*(P174)rt_nil_check(F->e_353)).a_), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_353)).name_)));
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_353)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_356(struct f_greenc_1fr *up_, P174 *res_355) {
  struct f_simple_expr_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_355 = res_355;
F->l_1654 = NULL;
F->r_1655 = NULL;
F->op_1656 = NULL;
F->line_1657 = INT64_MIN;
F->line_1657 = f_cur_line_318(F->up);
if (((f_at_op_322(F->up, rt_g_lit("+", 1)) || f_at_op_322(F->up, rt_g_lit("-", 1))) || f_at_kw_320(F->up, rt_g_lit("NOT", 3)))) {
F->op_1656 = (*(P110)rt_nil_check(({ A109 ix1658 = F->up->toks_112; ix1658.p[rt_index(G_NV(F->up->tpos_114), ix1658.lo, ix1658.hi) - ix1658.lo]; }))).s_;
f_skip_331(F->up);
f_term_358(F->up, &F->r_1655);
F->l_1654 = f_nn_311(F->up, ((rt_int)6LL), G_NV(F->line_1657));
(*(P174)rt_nil_check(F->l_1654)).name_ = F->op_1656;
(*(P174)rt_nil_check(F->l_1654)).a_ = F->r_1655;
} else {
f_term_358(F->up, &F->l_1654);
}
while (((f_at_op_322(F->up, rt_g_lit("+", 1)) || f_at_op_322(F->up, rt_g_lit("-", 1))) || f_at_op_322(F->up, rt_g_lit("&", 1)))) {
F->op_1656 = (*(P110)rt_nil_check(({ A109 ix1660 = F->up->toks_112; ix1660.p[rt_index(G_NV(F->up->tpos_114), ix1660.lo, ix1660.hi) - ix1660.lo]; }))).s_;
f_skip_331(F->up);
f_term_358(F->up, &F->r_1655);
F->l_1654 = f_binop_346(F->up, F->op_1656, F->l_1654, F->r_1655, G_NV(F->line_1657));
}
L_end_1659: ;
(*F->res_355) = F->l_1654;
goto ret_;
ret_:

  return;
}

static void f_term_358(struct f_greenc_1fr *up_, P174 *res_357) {
  struct f_term_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_357 = res_357;
F->l_1661 = NULL;
F->r_1662 = NULL;
F->op_1663 = NULL;
F->line_1664 = INT64_MIN;
F->line_1664 = f_cur_line_318(F->up);
f_factor_360(F->up, &F->l_1661);
while (((f_at_op_322(F->up, rt_g_lit("*", 1)) || f_at_op_322(F->up, rt_g_lit("/", 1))) || f_at_kw_320(F->up, rt_g_lit("MOD", 3)))) {
F->op_1663 = (*(P110)rt_nil_check(({ A109 ix1666 = F->up->toks_112; ix1666.p[rt_index(G_NV(F->up->tpos_114), ix1666.lo, ix1666.hi) - ix1666.lo]; }))).s_;
f_skip_331(F->up);
f_factor_360(F->up, &F->r_1662);
F->l_1661 = f_binop_346(F->up, F->op_1663, F->l_1661, F->r_1662, G_NV(F->line_1664));
}
L_end_1665: ;
(*F->res_357) = F->l_1661;
goto ret_;
ret_:

  return;
}

static void f_factor_360(struct f_greenc_1fr *up_, P174 *res_359) {
  struct f_factor_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_359 = res_359;
F->l_1667 = NULL;
F->r_1668 = NULL;
F->op_1669 = NULL;
F->line_1670 = INT64_MIN;
F->line_1670 = f_cur_line_318(F->up);
f_primary_362(F->up, &F->l_1667);
if (f_at_op_322(F->up, rt_g_lit("**", 2))) {
F->op_1669 = (*(P110)rt_nil_check(({ A109 ix1671 = F->up->toks_112; ix1671.p[rt_index(G_NV(F->up->tpos_114), ix1671.lo, ix1671.hi) - ix1671.lo]; }))).s_;
f_skip_331(F->up);
f_primary_362(F->up, &F->r_1668);
F->l_1667 = f_binop_346(F->up, F->op_1669, F->l_1667, F->r_1668, G_NV(F->line_1670));
}
(*F->res_359) = F->l_1667;
goto ret_;
ret_:

  return;
}

static void f_primary_362(struct f_greenc_1fr *up_, P174 *res_361) {
  struct f_primary_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_361 = res_361;
F->x_1672 = NULL;
F->line_1673 = INT64_MIN;
F->line_1673 = f_cur_line_318(F->up);
if (f_at_kind_324(F->up, ((rt_int)4LL))) {
F->x_1672 = f_nn_311(F->up, ((rt_int)1LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->x_1672)).ival_ = G_NV((*(P110)rt_nil_check(({ A109 ix1674 = F->up->toks_112; ix1674.p[rt_index(G_NV(F->up->tpos_114), ix1674.lo, ix1674.hi) - ix1674.lo]; }))).ival_);
(*(P174)rt_nil_check(F->x_1672)).name_ = (*(P110)rt_nil_check(({ A109 ix1675 = F->up->toks_112; ix1675.p[rt_index(G_NV(F->up->tpos_114), ix1675.lo, ix1675.hi) - ix1675.lo]; }))).s_;
f_skip_331(F->up);
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_kind_324(F->up, ((rt_int)5LL))) {
F->x_1672 = f_nn_311(F->up, ((rt_int)2LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->x_1672)).name_ = (*(P110)rt_nil_check(({ A109 ix1676 = F->up->toks_112; ix1676.p[rt_index(G_NV(F->up->tpos_114), ix1676.lo, ix1676.hi) - ix1676.lo]; }))).s_;
f_skip_331(F->up);
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_kind_324(F->up, ((rt_int)6LL))) {
F->x_1672 = f_nn_311(F->up, ((rt_int)3LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->x_1672)).name_ = (*(P110)rt_nil_check(({ A109 ix1677 = F->up->toks_112; ix1677.p[rt_index(G_NV(F->up->tpos_114), ix1677.lo, ix1677.hi) - ix1677.lo]; }))).s_;
f_skip_331(F->up);
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("NULL", 4))) {
f_skip_331(F->up);
F->x_1672 = f_nn_311(F->up, ((rt_int)4LL), G_NV(F->line_1673));
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("NEW", 3))) {
f_skip_331(F->up);
F->x_1672 = f_nn_311(F->up, ((rt_int)11LL), G_NV(F->line_1673));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1672)).name_);
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_364(F->up, &(*(P174)rt_nil_check(F->x_1672)).a_);
}
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_364(F->up, &F->x_1672);
(*F->res_361) = F->x_1672;
goto ret_;
}
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_name_p_369(F->up, &F->x_1672);
(*F->res_361) = F->x_1672;
goto ret_;
}
f_perror_330(F->up, rt_g_lit("expected an expression", 22));
(*F->res_361) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_364(struct f_greenc_1fr *up_, P174 *res_363) {
  struct f_agg_or_paren_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_363 = res_363;
F->line_1678 = INT64_MIN;
F->line_1678 = f_cur_line_318(F->up);
F->items_1679 = NULL;
F->itail_1680 = NULL;
F->it_1681 = NULL;
F->first_1682 = NULL;
F->keys_1683 = NULL;
F->ktail_1684 = NULL;
F->lab_1685 = NULL;
F->x_1686 = NULL;
F->more_1687 = INT_MIN;
F->more_1687 = 1;
f_expect_op_335(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1687)) {
F->it_1681 = f_nn_311(F->up, ((rt_int)13LL), G_NV(F->line_1678));
if (f_at_kw_320(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit("=>", 2));
F->lab_1685 = f_nn_311(F->up, ((rt_int)61LL), G_NV(F->line_1678));
(*(P174)rt_nil_check(F->lab_1685)).flag_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->it_1681)).a_ = F->lab_1685;
f_expr_348(F->up, &(*(P174)rt_nil_check(F->it_1681)).b_);
} else {
f_expr_348(F->up, &F->first_1682);
if (((f_at_op_322(F->up, rt_g_lit("..", 2)) || f_at_op_322(F->up, rt_g_lit("|", 1))) || f_at_op_322(F->up, rt_g_lit("=>", 2)))) {
F->keys_1683 = NULL;
F->ktail_1684 = NULL;
for (;;) {
F->lab_1685 = f_nn_311(F->up, ((rt_int)61LL), G_NV(F->line_1678));
(*(P174)rt_nil_check(F->lab_1685)).a_ = F->first_1682;
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->lab_1685)).b_);
}
f_append_315(F->up, &F->keys_1683, &F->ktail_1684, F->lab_1685);
if ((!f_at_op_322(F->up, rt_g_lit("|", 1)))) {
goto L_end_1689;
}
f_skip_331(F->up);
f_simple_expr_356(F->up, &F->first_1682);
}
L_end_1689: ;
f_expect_op_335(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->it_1681)).a_ = F->keys_1683;
f_expr_348(F->up, &(*(P174)rt_nil_check(F->it_1681)).b_);
} else {
(*(P174)rt_nil_check(F->it_1681)).b_ = F->first_1682;
}
}
f_append_315(F->up, &F->items_1679, &F->itail_1680, F->it_1681);
F->more_1687 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1687)) {
f_skip_331(F->up);
}
}
L_end_1688: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
if ((((*(P174)rt_nil_check(F->items_1679)).next_ == NULL) && ((*(P174)rt_nil_check(F->items_1679)).a_ == NULL))) {
F->x_1686 = f_nn_311(F->up, ((rt_int)15LL), G_NV(F->line_1678));
(*(P174)rt_nil_check(F->x_1686)).a_ = (*(P174)rt_nil_check(F->items_1679)).b_;
(*F->res_363) = F->x_1686;
goto ret_;
}
F->x_1686 = f_nn_311(F->up, ((rt_int)12LL), G_NV(F->line_1678));
(*(P174)rt_nil_check(F->x_1686)).a_ = F->items_1679;
(*F->res_363) = F->x_1686;
goto ret_;
ret_:

  return;
}

static int f_choice_token_366(struct f_greenc_1fr *up_, P110 t_365) {
  struct f_choice_token_366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_365 = t_365;
if ((G_NV((*(P110)rt_nil_check(F->t_365)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_365)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_365)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P110)rt_nil_check(F->t_365)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_365)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_367(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1690 = INT64_MIN;
F->d_1690 = ((rt_int)0LL);
F->k_1691 = INT64_MIN;
F->k_1691 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1691)) > G_NV(F->up->ntoks_113))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1694 = NULL;
F->t_1694 = ({ A109 ix1695 = F->up->toks_112; ix1695.p[rt_index(rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1691)), ix1695.lo, ix1695.hi) - ix1695.lo]; });
if (((G_NV((*(P110)rt_nil_check(F->t_1694)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1694)).s_)), rt_g_lit("(", 1)))) {
F->d_1690 = rt_add(G_NV(F->d_1690), ((rt_int)1LL));
} else if (((G_NV((*(P110)rt_nil_check(F->t_1694)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1694)).s_)), rt_g_lit(")", 1)))) {
F->d_1690 = rt_sub(G_NV(F->d_1690), ((rt_int)1LL));
if ((G_NV(F->d_1690) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1690) == ((rt_int)1LL)) && f_choice_token_366(F->up, F->t_1694))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P110)rt_nil_check(F->t_1694)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1694)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1693: ;
F->k_1691 = rt_add(G_NV(F->k_1691), ((rt_int)1LL));
}
L_end_1692: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_369(struct f_greenc_1fr *up_, P174 *res_368) {
  struct f_name_p_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
F->p_1696 = NULL;
F->x_1697 = NULL;
F->args_1698 = NULL;
F->atail_1699 = NULL;
F->lo_1700 = NULL;
F->r_1701 = NULL;
F->line_1702 = INT64_MIN;
F->line_1702 = f_cur_line_318(F->up);
F->more_1703 = INT_MIN;
f_name_node_339(F->up, &F->p_1696);
for (;;) {
if ((f_at_op_322(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_367(F->up))) {
F->x_1697 = f_nn_311(F->up, ((rt_int)8LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1697)).a_ = F->p_1696;
f_agg_or_paren_364(F->up, &(*(P174)rt_nil_check(F->x_1697)).b_);
(*(P174)rt_nil_check(F->x_1697)).flag_ = ((rt_int)9LL);
F->p_1696 = F->x_1697;
} else if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
F->args_1698 = NULL;
F->atail_1699 = NULL;
if ((!f_at_op_322(F->up, rt_g_lit(")", 1)))) {
F->more_1703 = 1;
while (G_NV(F->more_1703)) {
{
F->formal_1707 = NULL;
F->mark_1708 = INT64_MIN;
F->mark_1708 = ((rt_int)0LL);
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1707 = (*(P110)rt_nil_check(({ A109 ix1709 = F->up->toks_112; ix1709.p[rt_index(G_NV(F->up->tpos_114), ix1709.lo, ix1709.hi) - ix1709.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1708 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1708 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1708 = ((rt_int)2LL);
} else {
F->mark_1708 = ((rt_int)4LL);
}
f_skip_331(F->up);
f_skip_331(F->up);
}
f_expr_348(F->up, &F->lo_1700);
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
F->r_1701 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->r_1701)).a_ = F->lo_1700;
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1701)).b_);
F->lo_1700 = F->r_1701;
}
(*(P174)rt_nil_check(F->lo_1700)).formal_ = F->formal_1707;
(*(P174)rt_nil_check(F->lo_1700)).flag_ = G_NV(F->mark_1708);
f_append_315(F->up, &F->args_1698, &F->atail_1699, F->lo_1700);

}
L_end_1706: ;
F->more_1703 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1703)) {
f_skip_331(F->up);
}
}
L_end_1705: ;
}
f_expect_op_335(F->up, rt_g_lit(")", 1));
F->x_1697 = f_nn_311(F->up, ((rt_int)8LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1697)).a_ = F->p_1696;
(*(P174)rt_nil_check(F->x_1697)).b_ = F->args_1698;
F->p_1696 = F->x_1697;
} else if (f_at_op_322(F->up, rt_g_lit(".", 1))) {
f_skip_331(F->up);
F->x_1697 = f_nn_311(F->up, ((rt_int)9LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1697)).a_ = F->p_1696;
if (f_at_kw_320(F->up, rt_g_lit("ALL", 3))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1697)).name_ = f_mk_237(F->up, rt_g_lit("ALL", 3));
} else if (f_at_kind_324(F->up, ((rt_int)6LL))) {
(*(P174)rt_nil_check(F->x_1697)).name_ = f_mk_237(F->up, f_upper_s_250(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1713 = F->up->toks_112; ix1713.p[rt_index(G_NV(F->up->tpos_114), ix1713.lo, ix1713.hi) - ix1713.lo]; }))).s_))));
f_skip_331(F->up);
} else {
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1697)).name_);
}
F->p_1696 = F->x_1697;
} else if (f_at_op_322(F->up, rt_g_lit("'", 1))) {
f_skip_331(F->up);
F->x_1697 = f_nn_311(F->up, ((rt_int)10LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1697)).a_ = F->p_1696;
(*(P174)rt_nil_check(F->x_1697)).name_ = (*(P110)rt_nil_check(({ A109 ix1714 = F->up->toks_112; ix1714.p[rt_index(G_NV(F->up->tpos_114), ix1714.lo, ix1714.hi) - ix1714.lo]; }))).s_;
f_skip_331(F->up);
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1697)).b_);
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
F->p_1696 = F->x_1697;
} else {
(*F->res_368) = F->p_1696;
goto ret_;
}
}
L_end_1704: ;
ret_:

  return;
}

static void f_component_list_371(struct f_greenc_1fr *up_, P174 *res_370) {
  struct f_component_list_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->comps_1715 = NULL;
F->ctail_1716 = NULL;
F->names_1717 = NULL;
F->st_1718 = NULL;
F->def_1719 = NULL;
F->cm_1720 = NULL;
F->v_1721 = NULL;
F->arm_1722 = NULL;
F->atail_1723 = NULL;
F->labs_1724 = NULL;
F->ltail_1725 = NULL;
F->l_1726 = NULL;
F->is_c_1727 = INT_MIN;
for (;;) {
if (f_at_kw_320(F->up, rt_g_lit("NULL", 4))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_320(F->up, rt_g_lit("CASE", 4))) {
F->v_1721 = f_nn_311(F->up, ((rt_int)23LL), f_cur_line_318(F->up));
f_skip_331(F->up);
f_name_node_339(F->up, &(*(P174)rt_nil_check(F->v_1721)).a_);
f_expect_kw_333(F->up, rt_g_lit("OF", 2));
F->atail_1723 = NULL;
while (f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) {
f_skip_331(F->up);
F->arm_1722 = f_nn_311(F->up, ((rt_int)60LL), f_cur_line_318(F->up));
F->labs_1724 = NULL;
F->ltail_1725 = NULL;
for (;;) {
if (f_at_kw_320(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->arm_1722)).flag_ = ((rt_int)1LL);
} else {
F->l_1726 = f_nn_311(F->up, ((rt_int)61LL), f_cur_line_318(F->up));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->l_1726)).a_);
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->l_1726)).b_);
}
f_append_315(F->up, &F->labs_1724, &F->ltail_1725, F->l_1726);
}
if ((!f_at_op_322(F->up, rt_g_lit("|", 1)))) {
goto L_end_1730;
}
f_skip_331(F->up);
}
L_end_1730: ;
f_expect_op_335(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->arm_1722)).a_ = F->labs_1724;
f_component_list_371(F->up, &(*(P174)rt_nil_check(F->arm_1722)).b_);
f_append_315(F->up, &(*(P174)rt_nil_check(F->v_1721)).b_, &F->atail_1723, F->arm_1722);
}
L_end_1729: ;
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("CASE", 4));
f_expect_op_335(F->up, rt_g_lit(";", 1));
f_append_315(F->up, &F->comps_1715, &F->ctail_1716, F->v_1721);
} else if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_id_list_341(F->up, &F->names_1717);
f_expect_op_335(F->up, rt_g_lit(":", 1));
F->is_c_1727 = 0;
if (f_at_kw_320(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_331(F->up);
F->is_c_1727 = 1;
}
f_type_spec_377(F->up, &F->st_1718);
F->def_1719 = NULL;
if (f_at_op_322(F->up, rt_g_lit(":=", 2))) {
f_skip_331(F->up);
f_expr_348(F->up, &F->def_1719);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
while ((F->names_1717 != NULL)) {
F->cm_1720 = f_nn_311(F->up, ((rt_int)63LL), G_NV((*(P174)rt_nil_check(F->names_1717)).line_));
(*(P174)rt_nil_check(F->cm_1720)).name_ = (*(P174)rt_nil_check(F->names_1717)).name_;
(*(P174)rt_nil_check(F->cm_1720)).a_ = F->st_1718;
(*(P174)rt_nil_check(F->cm_1720)).b_ = F->def_1719;
if (G_NV(F->is_c_1727)) {
(*(P174)rt_nil_check(F->cm_1720)).flag_ = ((rt_int)1LL);
}
f_append_315(F->up, &F->comps_1715, &F->ctail_1716, F->cm_1720);
F->names_1717 = (*(P174)rt_nil_check(F->names_1717)).next_;
}
L_end_1731: ;
} else {
(*F->res_370) = F->comps_1715;
goto ret_;
}
}
L_end_1728: ;
ret_:

  return;
}

static void f_discrete_range_p_373(struct f_greenc_1fr *up_, P174 *res_372) {
  struct f_discrete_range_p_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->lo_1732 = NULL;
F->r_1733 = NULL;
F->line_1734 = INT64_MIN;
F->line_1734 = f_cur_line_318(F->up);
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_375(F->up, &(*F->res_372));
goto ret_;
}
if ((((((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_326(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_326(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_375(F->up, &(*F->res_372));
goto ret_;
}
f_simple_expr_356(F->up, &F->lo_1732);
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
F->r_1733 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1734));
(*(P174)rt_nil_check(F->r_1733)).a_ = F->lo_1732;
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1733)).b_);
(*F->res_372) = F->r_1733;
goto ret_;
}
(*F->res_372) = F->lo_1732;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_375(struct f_greenc_1fr *up_, P174 *res_374) {
  struct f_subtype_ind_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->f_1735 = NULL;
F->x_1736 = NULL;
F->r_1737 = NULL;
F->args_1738 = NULL;
F->atail_1739 = NULL;
F->lo_1740 = NULL;
F->line_1741 = INT64_MIN;
F->line_1741 = f_cur_line_318(F->up);
F->more_1742 = INT_MIN;
F->more_1742 = 1;
F->x_1736 = f_nn_311(F->up, ((rt_int)80LL), G_NV(F->line_1741));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1736)).name_);
while (f_at_op_322(F->up, rt_g_lit(".", 1))) {
f_skip_331(F->up);
if (((*(P174)rt_nil_check(F->x_1736)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->x_1736)).tag_ = (*(P174)rt_nil_check(F->x_1736)).name_;
} else {
(*(P174)rt_nil_check(F->x_1736)).tag_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1736)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1736)).name_))));
}
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1736)).name_);
}
L_end_1743: ;
if (f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) {
f_skip_331(F->up);
F->r_1737 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1741));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1737)).a_);
f_expect_op_335(F->up, rt_g_lit("..", 2));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1737)).b_);
(*(P174)rt_nil_check(F->x_1736)).a_ = F->r_1737;
(*(P174)rt_nil_check(F->x_1736)).flag_ = ((rt_int)1LL);
} else if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
while (G_NV(F->more_1742)) {
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_337(F->up, &F->f_1735);
f_skip_331(F->up);
f_expr_348(F->up, &F->lo_1740);
(*(P174)rt_nil_check(F->lo_1740)).formal_ = F->f_1735;
} else {
f_discrete_range_p_373(F->up, &F->lo_1740);
}
f_append_315(F->up, &F->args_1738, &F->atail_1739, F->lo_1740);
F->more_1742 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1742)) {
f_skip_331(F->up);
}
}
L_end_1744: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1736)).a_ = F->args_1738;
(*(P174)rt_nil_check(F->x_1736)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_320(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_320(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->x_1736)).b_);
(*(P174)rt_nil_check(F->x_1736)).flag_ = ((rt_int)3LL);
if (f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) {
f_skip_331(F->up);
F->r_1737 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1741));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1737)).a_);
f_expect_op_335(F->up, rt_g_lit("..", 2));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1737)).b_);
(*(P174)rt_nil_check(F->x_1736)).a_ = F->r_1737;
}
}
(*F->res_374) = F->x_1736;
goto ret_;
ret_:

  return;
}

static void f_type_spec_377(struct f_greenc_1fr *up_, P174 *res_376) {
  struct f_type_spec_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->x_1745 = NULL;
if ((((((((f_at_op_322(F->up, rt_g_lit("(", 1)) || f_at_kw_320(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_320(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_320(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_320(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_320(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_320(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_379(F->up, &F->x_1745);
} else {
f_subtype_ind_375(F->up, &F->x_1745);
}
(*F->res_376) = F->x_1745;
goto ret_;
ret_:

  return;
}

static void f_type_def_379(struct f_greenc_1fr *up_, P174 *res_378) {
  struct f_type_def_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_378 = res_378;
F->x_1746 = NULL;
F->lits_1747 = NULL;
F->ltail_1748 = NULL;
F->l_1749 = NULL;
F->idx_1750 = NULL;
F->itail_1751 = NULL;
F->r_1752 = NULL;
F->comps_1753 = NULL;
F->ctail_1754 = NULL;
F->names_1755 = NULL;
F->st_1756 = NULL;
F->def_1757 = NULL;
F->cm_1758 = NULL;
F->line_1759 = INT64_MIN;
F->line_1759 = f_cur_line_318(F->up);
F->more_1760 = INT_MIN;
F->more_1760 = 1;
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)70LL), G_NV(F->line_1759));
while (G_NV(F->more_1760)) {
if (f_at_kind_324(F->up, ((rt_int)6LL))) {
F->l_1749 = f_nn_311(F->up, ((rt_int)3LL), G_NV(F->line_1759));
(*(P174)rt_nil_check(F->l_1749)).name_ = (*(P110)rt_nil_check(({ A109 ix1762 = F->up->toks_112; ix1762.p[rt_index(G_NV(F->up->tpos_114), ix1762.lo, ix1762.hi) - ix1762.lo]; }))).s_;
f_skip_331(F->up);
} else {
f_name_node_339(F->up, &F->l_1749);
}
f_append_315(F->up, &F->lits_1747, &F->ltail_1748, F->l_1749);
F->more_1760 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1760)) {
f_skip_331(F->up);
}
}
L_end_1761: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1746)).a_ = F->lits_1747;
(*F->res_378) = F->x_1746;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)71LL), G_NV(F->line_1759));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
f_expect_op_335(F->up, rt_g_lit("..", 2));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->x_1746)).b_);
(*F->res_378) = F->x_1746;
goto ret_;
}
if ((f_at_kw_320(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_320(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1746 = f_nn_311(F->up, ((rt_int)72LL), G_NV(F->line_1759));
(*(P174)rt_nil_check(F->x_1746)).flag_ = ((rt_int)1LL);
if (f_at_kw_320(F->up, rt_g_lit("DELTA", 5))) {
(*(P174)rt_nil_check(F->x_1746)).flag_ = ((rt_int)2LL);
}
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
if (f_at_kw_320(F->up, rt_g_lit("RANGE", 5))) {
f_skip_331(F->up);
F->r_1752 = f_nn_311(F->up, ((rt_int)14LL), G_NV(F->line_1759));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1752)).a_);
f_expect_op_335(F->up, rt_g_lit("..", 2));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->r_1752)).b_);
(*(P174)rt_nil_check(F->x_1746)).b_ = F->r_1752;
}
(*F->res_378) = F->x_1746;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)73LL), G_NV(F->line_1759));
f_expect_op_335(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1760)) {
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1749 = f_nn_311(F->up, ((rt_int)80LL), G_NV(F->line_1759));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->l_1749)).name_);
(*(P174)rt_nil_check(F->x_1746)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_373(F->up, &F->l_1749);
if (((G_NV((*(P174)rt_nil_check(F->l_1749)).kind_) != ((rt_int)14LL)) && (G_NV((*(P174)rt_nil_check(F->l_1749)).kind_) != ((rt_int)80LL)))) {
f_perror_330(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_315(F->up, &F->idx_1750, &F->itail_1751, F->l_1749);
F->more_1760 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1760)) {
f_skip_331(F->up);
}
}
L_end_1763: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
f_expect_kw_333(F->up, rt_g_lit("OF", 2));
(*(P174)rt_nil_check(F->x_1746)).a_ = F->idx_1750;
f_type_spec_377(F->up, &(*(P174)rt_nil_check(F->x_1746)).b_);
(*F->res_378) = F->x_1746;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("RECORD", 6))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)74LL), G_NV(F->line_1759));
f_component_list_371(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("RECORD", 6));
(*F->res_378) = F->x_1746;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)75LL), G_NV(F->line_1759));
f_type_spec_377(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
(*F->res_378) = F->x_1746;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("NEW", 3))) {
f_skip_331(F->up);
F->x_1746 = f_nn_311(F->up, ((rt_int)76LL), G_NV(F->line_1759));
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->x_1746)).a_);
(*F->res_378) = F->x_1746;
goto ret_;
}
f_perror_330(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_378) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_381(struct f_greenc_1fr *up_, P174 *res_380) {
  struct f_pragma_p_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_380 = res_380;
F->x_1764 = NULL;
F->a_1765 = NULL;
F->head_1766 = NULL;
F->tail_1767 = NULL;
F->x_1764 = f_nn_311(F->up, ((rt_int)56LL), f_cur_line_318(F->up));
f_expect_kw_333(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1764)).name_);
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
for (;;) {
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_name_node_339(F->up, &F->a_1765);
} else if (((f_at_kind_324(F->up, ((rt_int)6LL)) || f_at_kind_324(F->up, ((rt_int)4LL))) || f_at_kind_324(F->up, ((rt_int)5LL)))) {
f_primary_362(F->up, &F->a_1765);
} else {
f_perror_330(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_315(F->up, &F->head_1766, &F->tail_1767, F->a_1765);
if ((!f_at_op_322(F->up, rt_g_lit(",", 1)))) {
goto L_end_1768;
}
f_skip_331(F->up);
}
L_end_1768: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1764)).a_ = F->head_1766;
f_check_pragma_383(F->up, F->x_1764);
(*F->res_380) = F->x_1764;
ret_:

  return;
}

static void f_check_pragma_383(struct f_greenc_1fr *up_, P174 x_382) {
  struct f_check_pragma_383fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_382 = x_382;
F->p_1769 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_382)).name_)));
F->n_1770 = INT64_MIN;
F->n_1770 = f_list_len_317(F->up, (*(P174)rt_nil_check(F->x_382)).a_);
F->a_1771 = NULL;
F->a_1771 = (*(P174)rt_nil_check(F->x_382)).a_;
if ((eq_rt_gstr(F->p_1769, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1769, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1770) != ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1769), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1769, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1769, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1769, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1769, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1769, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1770) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1771)).kind_) != ((rt_int)5LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1769), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1769, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1769, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1769, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1771)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1769, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_235 = (*(P174)rt_nil_check(F->a_1771)).name_;
} else if (eq_rt_gstr(F->p_1769, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_232 = (*(P174)rt_nil_check(F->a_1771)).name_;
}
} else if ((eq_rt_gstr(F->p_1769, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1769, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1770) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1771)).kind_) != ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1769), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1769, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_233 = G_NV((*(P174)rt_nil_check(F->a_1771)).ival_);
} else {
F->up->conf_memory_size_234 = G_NV((*(P174)rt_nil_check(F->a_1771)).ival_);
}
} else if ((eq_rt_gstr(F->p_1769, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1769, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1770) == ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1769), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1771 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->a_1771)).kind_) != ((rt_int)5LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1769), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1771 = (*(P174)rt_nil_check(F->a_1771)).next_;
}
L_end_1772: ;
} else if (eq_rt_gstr(F->p_1769, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1770) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1771)).kind_) != ((rt_int)3LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->x_382)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_385(struct f_greenc_1fr *up_, P140 *res_384) {
  struct f_visibility_p_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_384 = res_384;
F->names_1773 = NULL;
F->v_1774 = NULL;
F->v_1774 = f_mk_237(F->up, rt_g_lit(",", 1));
f_expect_kw_333(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
f_id_list_341(F->up, &F->names_1773);
f_expect_op_335(F->up, rt_g_lit(")", 1));
while ((F->names_1773 != NULL)) {
F->v_1774 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_1774)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->names_1773)).name_))), one_rt_gstr(44)));
F->names_1773 = (*(P174)rt_nil_check(F->names_1773)).next_;
}
L_end_1775: ;
}
(*F->res_384) = F->v_1774;
ret_:

  return;
}

static void f_unit_p_387(struct f_greenc_1fr *up_, P174 *res_386) {
  struct f_unit_p_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_386 = res_386;
F->v_1776 = NULL;
F->x_1777 = NULL;
if (f_at_kw_320(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_385(F->up, &F->v_1776);
}
if (f_at_kw_320(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_331(F->up);
if (((F->v_1776 == NULL) || (({ rt_gstr at1778 = (*(P140)rt_nil_check(F->v_1776)); at1778.hi >= at1778.lo ? at1778.hi - at1778.lo + 1 : (rt_int)0; }) < ((rt_int)2LL)))) {
f_perror_330(F->up, rt_g_lit("a subunit names its enclosing unit first in its visibility list (RM79 10.2)", 75));
}
f_unit_p_387(F->up, &F->x_1777);
if (((((G_NV((*(P174)rt_nil_check(F->x_1777)).kind_) != ((rt_int)44LL)) && (G_NV((*(P174)rt_nil_check(F->x_1777)).kind_) != ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->x_1777)).kind_) != ((rt_int)49LL))) && (G_NV((*(P174)rt_nil_check(F->x_1777)).kind_) != ((rt_int)51LL)))) {
f_perror_330(F->up, rt_g_lit("a subunit is a subprogram body or a module body (RM79 10.2)", 59));
}
(*(P174)rt_nil_check(F->x_1777)).formal_ = f_mk_237(F->up, cat_rt_gstr(one_rt_gstr(33), (*(P140)rt_nil_check(F->v_1776))));
(*F->res_386) = F->x_1777;
goto ret_;
}
if ((f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_320(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_400(F->up, &F->x_1777);
} else if (f_at_kw_320(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_406(F->up, &F->x_1777);
} else if (f_at_kw_320(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1125(F->up, &F->x_1777);
} else if (f_at_kw_320(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1269(F->up, &F->x_1777);
} else {
f_perror_330(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1777 != NULL)) {
(*(P174)rt_nil_check(F->x_1777)).formal_ = F->v_1776;
}
(*F->res_386) = F->x_1777;
ret_:

  return;
}

static void f_skip_representation_388(struct f_greenc_1fr *up_) {
  struct f_skip_representation_388fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_320(F->up, rt_g_lit("USE", 3)))) {
f_skip_331(F->up);
}
L_end_1779: ;
f_skip_331(F->up);
if (f_at_kw_320(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_320(F->up, rt_g_lit("END", 3)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_331(F->up);
}
L_end_1780: ;
f_skip_331(F->up);
f_skip_331(F->up);
}
while ((!f_at_op_322(F->up, rt_g_lit(";", 1)))) {
f_skip_331(F->up);
}
L_end_1781: ;
f_skip_331(F->up);
ret_:

  return;
}

static void f_decl_part_390(struct f_greenc_1fr *up_, P174 *res_389) {
  struct f_decl_part_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_389 = res_389;
F->head_1782 = NULL;
F->tail_1783 = NULL;
F->x_1784 = NULL;
F->names_1785 = NULL;
for (;;) {
if (f_at_kw_320(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_381(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("USE", 3))) {
f_skip_331(F->up);
F->x_1784 = f_nn_311(F->up, ((rt_int)55LL), f_cur_line_318(F->up));
f_id_list_341(F->up, &(*(P174)rt_nil_check(F->x_1784)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (((f_at_kw_320(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_331(F->up);
f_type_decl_394(F->up, &F->x_1784);
if (((F->x_1784 == NULL) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1784)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_330(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P174)rt_nil_check(F->x_1784)).flag_ = ((rt_int)9LL);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_387(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_388(F->up);
} else if ((f_at_kw_320(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_320(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_394(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if ((f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_320(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_400(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_406(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1125(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1269(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (f_at_kw_320(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1127(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_392(F->up, &F->x_1784);
f_append_315(F->up, &F->head_1782, &F->tail_1783, F->x_1784);
} else {
(*F->res_389) = F->head_1782;
goto ret_;
}
}
L_end_1786: ;
ret_:

  return;
}

static void f_object_decl_392(struct f_greenc_1fr *up_, P174 *res_391) {
  struct f_object_decl_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_391 = res_391;
F->head_1787 = NULL;
F->tail_1788 = NULL;
F->names_1789 = NULL;
F->st_1790 = NULL;
F->init_1791 = NULL;
F->x_1792 = NULL;
F->line_1793 = INT64_MIN;
F->line_1793 = f_cur_line_318(F->up);
F->is_const_1794 = INT_MIN;
F->is_const_1794 = 0;
f_id_list_341(F->up, &F->names_1789);
f_expect_op_335(F->up, rt_g_lit(":", 1));
if (f_at_kw_320(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_331(F->up);
if (f_at_kw_320(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_331(F->up);
F->x_1792 = f_nn_311(F->up, ((rt_int)46LL), G_NV(F->line_1793));
(*(P174)rt_nil_check(F->x_1792)).name_ = (*(P174)rt_nil_check(F->names_1789)).name_;
f_name_p_369(F->up, &(*(P174)rt_nil_check(F->x_1792)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_391) = F->x_1792;
goto ret_;
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
while ((F->names_1789 != NULL)) {
F->x_1792 = f_nn_311(F->up, ((rt_int)46LL), G_NV(F->line_1793));
(*(P174)rt_nil_check(F->x_1792)).name_ = (*(P174)rt_nil_check(F->names_1789)).name_;
f_append_315(F->up, &F->head_1787, &F->tail_1788, F->x_1792);
F->names_1789 = (*(P174)rt_nil_check(F->names_1789)).next_;
}
L_end_1795: ;
(*F->res_391) = F->head_1787;
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_331(F->up);
F->is_const_1794 = 1;
}
f_type_spec_377(F->up, &F->st_1790);
if ((f_at_kw_320(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1794)))) {
f_skip_331(F->up);
F->x_1792 = f_nn_311(F->up, ((rt_int)40LL), G_NV(F->line_1793));
(*(P174)rt_nil_check(F->x_1792)).name_ = (*(P174)rt_nil_check(F->names_1789)).name_;
(*(P174)rt_nil_check(F->x_1792)).a_ = F->st_1790;
(*(P174)rt_nil_check(F->x_1792)).flag_ = ((rt_int)2LL);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1792)).b_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_391) = F->x_1792;
goto ret_;
}
if (f_at_op_322(F->up, rt_g_lit(":=", 2))) {
f_skip_331(F->up);
f_expr_348(F->up, &F->init_1791);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
while ((F->names_1789 != NULL)) {
if (G_NV(F->is_const_1794)) {
F->x_1792 = f_nn_311(F->up, ((rt_int)41LL), G_NV(F->line_1793));
} else {
F->x_1792 = f_nn_311(F->up, ((rt_int)40LL), G_NV(F->line_1793));
}
(*(P174)rt_nil_check(F->x_1792)).name_ = (*(P174)rt_nil_check(F->names_1789)).name_;
(*(P174)rt_nil_check(F->x_1792)).a_ = F->st_1790;
(*(P174)rt_nil_check(F->x_1792)).b_ = F->init_1791;
f_append_315(F->up, &F->head_1787, &F->tail_1788, F->x_1792);
F->names_1789 = (*(P174)rt_nil_check(F->names_1789)).next_;
}
L_end_1796: ;
(*F->res_391) = F->head_1787;
goto ret_;
ret_:

  return;
}

static void f_type_decl_394(struct f_greenc_1fr *up_, P174 *res_393) {
  struct f_type_decl_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_393 = res_393;
F->x_1797 = NULL;
F->line_1798 = INT64_MIN;
F->line_1798 = f_cur_line_318(F->up);
if (f_at_kw_320(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_331(F->up);
F->x_1797 = f_nn_311(F->up, ((rt_int)43LL), G_NV(F->line_1798));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1797)).name_);
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->x_1797)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_393) = F->x_1797;
goto ret_;
}
f_expect_kw_333(F->up, rt_g_lit("TYPE", 4));
F->x_1797 = f_nn_311(F->up, ((rt_int)42LL), G_NV(F->line_1798));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1797)).name_);
if (f_at_op_322(F->up, rt_g_lit(";", 1))) {
f_skip_331(F->up);
(*F->res_393) = NULL;
goto ret_;
}
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
if (f_at_kw_320(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1797)).a_ = f_nn_311(F->up, ((rt_int)77LL), G_NV(F->line_1798));
} else {
f_type_def_379(F->up, &(*(P174)rt_nil_check(F->x_1797)).a_);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_393) = F->x_1797;
goto ret_;
ret_:

  return;
}

static void f_formal_part_396(struct f_greenc_1fr *up_, P174 *res_395) {
  struct f_formal_part_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_395 = res_395;
F->head_1799 = NULL;
F->tail_1800 = NULL;
F->names_1801 = NULL;
F->st_1802 = NULL;
F->def_1803 = NULL;
F->p_1804 = NULL;
F->mode_1805 = INT64_MIN;
F->more_1806 = INT_MIN;
F->more_1806 = 1;
f_expect_op_335(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1806)) {
f_id_list_341(F->up, &F->names_1801);
f_expect_op_335(F->up, rt_g_lit(":", 1));
F->mode_1805 = ((rt_int)1LL);
if (f_at_kw_320(F->up, rt_g_lit("IN", 2))) {
f_skip_331(F->up);
if (f_at_kw_320(F->up, rt_g_lit("OUT", 3))) {
f_skip_331(F->up);
F->mode_1805 = ((rt_int)2LL);
}
} else if (f_at_kw_320(F->up, rt_g_lit("OUT", 3))) {
f_skip_331(F->up);
F->mode_1805 = ((rt_int)3LL);
}
f_subtype_ind_375(F->up, &F->st_1802);
F->def_1803 = NULL;
if (f_at_op_322(F->up, rt_g_lit(":=", 2))) {
f_skip_331(F->up);
f_expr_348(F->up, &F->def_1803);
}
while ((F->names_1801 != NULL)) {
F->p_1804 = f_nn_311(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_1801)).line_));
(*(P174)rt_nil_check(F->p_1804)).name_ = (*(P174)rt_nil_check(F->names_1801)).name_;
(*(P174)rt_nil_check(F->p_1804)).ival_ = G_NV(F->mode_1805);
(*(P174)rt_nil_check(F->p_1804)).a_ = F->st_1802;
(*(P174)rt_nil_check(F->p_1804)).b_ = F->def_1803;
f_append_315(F->up, &F->head_1799, &F->tail_1800, F->p_1804);
F->names_1801 = (*(P174)rt_nil_check(F->names_1801)).next_;
}
L_end_1808: ;
F->more_1806 = f_at_op_322(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1806)) {
f_skip_331(F->up);
}
}
L_end_1807: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
(*F->res_395) = F->head_1799;
goto ret_;
ret_:

  return;
}

static void f_designator_398(struct f_greenc_1fr *up_, P140 *res_397) {
  struct f_designator_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_397 = res_397;
if (f_at_kind_324(F->up, ((rt_int)6LL))) {
f_skip_331(F->up);
(*F->res_397) = f_mk_237(F->up, f_upper_s_250(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1812 = F->up->toks_112; ix1812.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1812.lo, ix1812.hi) - ix1812.lo]; }))).s_))));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->res_397))), rt_g_lit("/=", 2))) {
f_perror_330(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_252(F->up, (*(P140)rt_nil_check((*F->res_397)))))) {
f_perror_330(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->res_397))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_337(F->up, &(*F->res_397));
goto ret_;
ret_:

  return;
}

static void f_subprogram_400(struct f_greenc_1fr *up_, P174 *res_399) {
  struct f_subprogram_400fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_399 = res_399;
F->x_1813 = NULL;
F->line_1814 = INT64_MIN;
F->line_1814 = f_cur_line_318(F->up);
F->is_proc_1815 = INT_MIN;
F->is_proc_1815 = f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_331(F->up);
if (G_NV(F->is_proc_1815)) {
F->x_1813 = f_nn_311(F->up, ((rt_int)44LL), G_NV(F->line_1814));
} else {
F->x_1813 = f_nn_311(F->up, ((rt_int)45LL), G_NV(F->line_1814));
}
f_designator_398(F->up, &(*(P174)rt_nil_check(F->x_1813)).name_);
if (((f_at_kw_320(F->up, rt_g_lit("IS", 2)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1272(F->up, F->x_1813, &(*F->res_399));
goto ret_;
}
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_formal_part_396(F->up, &(*(P174)rt_nil_check(F->x_1813)).a_);
}
if (f_at_kw_320(F->up, rt_g_lit("RETURN", 6))) {
f_skip_331(F->up);
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->x_1813)).b_);
if (G_NV(F->is_proc_1815)) {
(*(P174)rt_nil_check(F->x_1813)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1815))) {
f_perror_330(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_320(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1813)).ival_ = ((rt_int)2LL);
f_name_p_369(F->up, &(*(P174)rt_nil_check(F->x_1813)).c_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_399) = F->x_1813;
goto ret_;
}
if (f_at_op_322(F->up, rt_g_lit(";", 1))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1813)).ival_ = ((rt_int)1LL);
(*F->res_399) = F->x_1813;
goto ret_;
}
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
if (f_at_kw_320(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1813)).ival_ = ((rt_int)3LL);
(*F->res_399) = F->x_1813;
goto ret_;
}
f_body_part_402(F->up, F->x_1813);
if ((f_at_kind_324(F->up, ((rt_int)1LL)) || f_at_kind_324(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1816 = F->up->toks_112; ix1816.p[rt_index(G_NV(F->up->tpos_114), ix1816.lo, ix1816.hi) - ix1816.lo]; }))).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1813)).name_))))) {
f_perror_330(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1813)).name_))));
}
f_skip_331(F->up);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_399) = F->x_1813;
goto ret_;
ret_:

  return;
}

static void f_body_part_402(struct f_greenc_1fr *up_, P174 x_401) {
  struct f_body_part_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_401 = x_401;
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_401)).c_);
if (f_at_kw_320(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_331(F->up);
F->up->saw_interface_216 = 0;
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_401)).d_);
if ((G_NV(F->up->saw_interface_216) && ((*(P174)rt_nil_check(F->x_401)).d_ == NULL))) {
(*(P174)rt_nil_check(F->x_401)).tag_ = f_mk_237(F->up, rt_g_lit("INTERFACE", 9));
}
F->up->saw_interface_216 = 0;
}
if (f_at_kw_320(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_404(F->up, &(*(P174)rt_nil_check(F->x_401)).e_);
}
f_expect_kw_333(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_404(struct f_greenc_1fr *up_, P174 *res_403) {
  struct f_parse_handlers_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_403 = res_403;
F->head_1817 = NULL;
F->tail_1818 = NULL;
F->h_1819 = NULL;
F->names_1820 = NULL;
F->ntail_1821 = NULL;
F->n_1822 = NULL;
f_expect_kw_333(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) {
f_skip_331(F->up);
F->h_1819 = f_nn_311(F->up, ((rt_int)62LL), f_cur_line_318(F->up));
F->names_1820 = NULL;
F->ntail_1821 = NULL;
for (;;) {
if (f_at_kw_320(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_331(F->up);
F->n_1822 = f_nn_311(F->up, ((rt_int)5LL), f_cur_line_318(F->up));
(*(P174)rt_nil_check(F->n_1822)).name_ = f_mk_237(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_339(F->up, &F->n_1822);
while (f_at_op_322(F->up, rt_g_lit(".", 1))) {
f_skip_331(F->up);
if (((*(P174)rt_nil_check(F->n_1822)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->n_1822)).tag_ = (*(P174)rt_nil_check(F->n_1822)).name_;
} else {
(*(P174)rt_nil_check(F->n_1822)).tag_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1822)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1822)).name_))));
}
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->n_1822)).name_);
}
L_end_1825: ;
}
f_append_315(F->up, &F->names_1820, &F->ntail_1821, F->n_1822);
if ((!f_at_op_322(F->up, rt_g_lit("|", 1)))) {
goto L_end_1824;
}
f_skip_331(F->up);
}
L_end_1824: ;
f_expect_op_335(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->h_1819)).a_ = F->names_1820;
f_statements_409(F->up, &(*(P174)rt_nil_check(F->h_1819)).b_);
f_append_315(F->up, &F->head_1817, &F->tail_1818, F->h_1819);
}
L_end_1823: ;
(*F->res_403) = F->head_1817;
goto ret_;
ret_:

  return;
}

static void f_package_p_406(struct f_greenc_1fr *up_, P174 *res_405) {
  struct f_package_p_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_405 = res_405;
F->x_1826 = NULL;
F->line_1827 = INT64_MIN;
F->line_1827 = f_cur_line_318(F->up);
f_expect_kw_333(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_320(F->up, rt_g_lit("BODY", 4))) {
f_skip_331(F->up);
F->x_1826 = f_nn_311(F->up, ((rt_int)49LL), G_NV(F->line_1827));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1826)).name_);
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
if (f_at_kw_320(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1826)).flag_ = ((rt_int)4LL);
(*F->res_405) = F->x_1826;
goto ret_;
}
f_body_part_402(F->up, F->x_1826);
} else {
F->x_1826 = f_nn_311(F->up, ((rt_int)48LL), G_NV(F->line_1827));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1826)).name_);
if (((f_at_kw_320(F->up, rt_g_lit("IS", 2)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1272(F->up, F->x_1826, &(*F->res_405));
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1826)).flag_ = ((rt_int)3LL);
f_name_p_369(F->up, &(*(P174)rt_nil_check(F->x_1826)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_405) = F->x_1826;
goto ret_;
}
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_1826)).c_);
if (f_at_kw_320(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_331(F->up);
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_1826)).d_);
}
f_expect_kw_333(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_skip_331(F->up);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_405) = F->x_1826;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_407(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_407fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_320(F->up, rt_g_lit("END", 3)) || f_at_kw_320(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_320(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_320(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_320(F->up, rt_g_lit("OR", 2))) || f_at_kind_324(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_409(struct f_greenc_1fr *up_, P174 *res_408) {
  struct f_statements_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_408 = res_408;
F->head_1828 = NULL;
F->tail_1829 = NULL;
F->x_1830 = NULL;
while ((!f_at_statements_end_407(F->up))) {
if (f_at_kw_320(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_381(F->up, &F->x_1830);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1830)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_216 = 1;
}
} else {
f_statement_411(F->up, &F->x_1830);
f_append_315(F->up, &F->head_1828, &F->tail_1829, F->x_1830);
}
}
L_end_1831: ;
(*F->res_408) = F->head_1828;
goto ret_;
ret_:

  return;
}

static void f_statement_411(struct f_greenc_1fr *up_, P174 *res_410) {
  struct f_statement_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_410 = res_410;
F->l_1832 = NULL;
F->x_1833 = NULL;
F->label_1834 = NULL;
if (f_at_op_322(F->up, rt_g_lit("<<", 2))) {
F->l_1832 = f_nn_311(F->up, ((rt_int)57LL), f_cur_line_318(F->up));
f_skip_331(F->up);
f_expect_id_337(F->up, &F->label_1834);
f_expect_op_335(F->up, rt_g_lit(">>", 2));
(*(P174)rt_nil_check(F->l_1832)).name_ = F->label_1834;
if (f_at_op_322(F->up, rt_g_lit("<<", 2))) {
f_statement_411(F->up, &F->x_1833);
} else {
f_labelled_statement_414(F->up, F->label_1834, &F->x_1833);
}
(*(P174)rt_nil_check(F->l_1832)).next_ = F->x_1833;
(*F->res_410) = F->l_1832;
goto ret_;
}
f_labelled_statement_414(F->up, NULL, &(*F->res_410));
ret_:

  return;
}

static void f_labelled_statement_414(struct f_greenc_1fr *up_, P140 label_412, P174 *res_413) {
  struct f_labelled_statement_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_412 = label_412;
F->res_413 = res_413;
F->x_1835 = NULL;
F->t_1836 = NULL;
F->line_1837 = INT64_MIN;
F->line_1837 = f_cur_line_318(F->up);
if (f_at_kw_320(F->up, rt_g_lit("NULL", 4))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit(";", 1));
F->x_1835 = f_nn_311(F->up, ((rt_int)31LL), G_NV(F->line_1837));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_418(F->up, &F->x_1835);
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_420(F->up, &F->x_1835);
(*F->res_413) = F->x_1835;
goto ret_;
} else if (((f_at_kw_320(F->up, rt_g_lit("FOR", 3)) || f_at_kw_320(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_320(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_422(F->up, &F->x_1835);
(*(P174)rt_nil_check(F->x_1835)).tag_ = F->label_412;
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
if (((F->label_412 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1838 = F->up->toks_112; ix1838.p[rt_index(G_NV(F->up->tpos_114), ix1838.lo, ix1838.hi) - ix1838.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_412)))))) {
f_perror_330(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_331(F->up);
} else if ((F->label_412 != NULL)) {
f_perror_330(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P140)rt_nil_check(F->label_412))), rt_g_lit(" ends with end loop ", 20)), (*(P140)rt_nil_check(F->label_412))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if ((f_at_kw_320(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_320(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1835 = f_nn_311(F->up, ((rt_int)25LL), G_NV(F->line_1837));
(*(P174)rt_nil_check(F->x_1835)).tag_ = F->label_412;
if (f_at_kw_320(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_331(F->up);
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_1835)).a_);
}
f_expect_kw_333(F->up, rt_g_lit("BEGIN", 5));
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_1835)).b_);
if (f_at_kw_320(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_404(F->up, &(*(P174)rt_nil_check(F->x_1835)).c_);
}
f_expect_kw_333(F->up, rt_g_lit("END", 3));
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
if (((F->label_412 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1839 = F->up->toks_112; ix1839.p[rt_index(G_NV(F->up->tpos_114), ix1839.lo, ix1839.hi) - ix1839.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_412)))))) {
f_perror_330(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_331(F->up);
} else if ((F->label_412 != NULL)) {
f_perror_330(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P140)rt_nil_check(F->label_412))), rt_g_lit(" ends with end ", 15)), (*(P140)rt_nil_check(F->label_412))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("EXIT", 4))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)26LL), G_NV(F->line_1837));
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1835)).name_);
}
if (f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) {
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1835)).a_);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("RETURN", 6))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)27LL), G_NV(F->line_1837));
if ((!f_at_op_322(F->up, rt_g_lit(";", 1)))) {
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1835)).a_);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("RAISE", 5))) {
f_skip_331(F->up);
if (f_at_op_322(F->up, rt_g_lit(";", 1))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)29LL), G_NV(F->line_1837));
(*F->res_413) = F->x_1835;
goto ret_;
}
F->x_1835 = f_nn_311(F->up, ((rt_int)28LL), G_NV(F->line_1837));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1835)).name_);
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1835)).a_);
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
while (f_at_op_322(F->up, rt_g_lit(".", 1))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1835)).tag_ = (*(P174)rt_nil_check(F->x_1835)).name_;
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1835)).name_);
}
L_end_1840: ;
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)30LL), G_NV(F->line_1837));
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1835)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
} else if (f_at_kw_320(F->up, rt_g_lit("GOTO", 4))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)58LL), G_NV(F->line_1837));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1835)).name_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
}
f_task_statement_416(F->up, &F->x_1835);
if ((F->x_1835 != NULL)) {
(*F->res_413) = F->x_1835;
goto ret_;
}
f_name_p_369(F->up, &F->t_1836);
if (f_at_op_322(F->up, rt_g_lit(":=", 2))) {
f_skip_331(F->up);
F->x_1835 = f_nn_311(F->up, ((rt_int)20LL), G_NV(F->line_1837));
(*(P174)rt_nil_check(F->x_1835)).a_ = F->t_1836;
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1835)).b_);
} else {
F->x_1835 = f_nn_311(F->up, ((rt_int)21LL), G_NV(F->line_1837));
(*(P174)rt_nil_check(F->x_1835)).a_ = F->t_1836;
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_413) = F->x_1835;
goto ret_;
ret_:

  return;
}

static void f_task_statement_416(struct f_greenc_1fr *up_, P174 *res_415) {
  struct f_task_statement_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_415 = res_415;
f_parse_task_statement_1135(F->up, &(*F->res_415));
ret_:

  return;
}

static void f_if_stmt_418(struct f_greenc_1fr *up_, P174 *res_417) {
  struct f_if_stmt_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_417 = res_417;
F->x_1841 = NULL;
F->arm_1842 = NULL;
F->head_1843 = NULL;
F->tail_1844 = NULL;
F->go_1845 = INT_MIN;
F->go_1845 = 1;
F->x_1841 = f_nn_311(F->up, ((rt_int)22LL), f_cur_line_318(F->up));
f_skip_331(F->up);
F->arm_1842 = f_nn_311(F->up, ((rt_int)60LL), f_cur_line_318(F->up));
f_expr_348(F->up, &(*(P174)rt_nil_check(F->arm_1842)).a_);
f_expect_kw_333(F->up, rt_g_lit("THEN", 4));
f_statements_409(F->up, &(*(P174)rt_nil_check(F->arm_1842)).b_);
f_append_315(F->up, &F->head_1843, &F->tail_1844, F->arm_1842);
while (G_NV(F->go_1845)) {
if (f_at_kw_320(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_331(F->up);
F->arm_1842 = f_nn_311(F->up, ((rt_int)60LL), f_cur_line_318(F->up));
f_expr_348(F->up, &(*(P174)rt_nil_check(F->arm_1842)).a_);
f_expect_kw_333(F->up, rt_g_lit("THEN", 4));
f_statements_409(F->up, &(*(P174)rt_nil_check(F->arm_1842)).b_);
f_append_315(F->up, &F->head_1843, &F->tail_1844, F->arm_1842);
} else if (f_at_kw_320(F->up, rt_g_lit("ELSE", 4))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1841)).flag_ = ((rt_int)1LL);
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_1841)).b_);
} else {
F->go_1845 = 0;
}
}
L_end_1846: ;
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("IF", 2));
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1841)).a_ = F->head_1843;
(*F->res_417) = F->x_1841;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_420(struct f_greenc_1fr *up_, P174 *res_419) {
  struct f_case_stmt_420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_419 = res_419;
F->x_1847 = NULL;
F->arm_1848 = NULL;
F->head_1849 = NULL;
F->tail_1850 = NULL;
F->labs_1851 = NULL;
F->ltail_1852 = NULL;
F->l_1853 = NULL;
F->others_arm_1854 = INT_MIN;
F->x_1847 = f_nn_311(F->up, ((rt_int)23LL), f_cur_line_318(F->up));
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1847)).a_);
f_expect_kw_333(F->up, rt_g_lit("OF", 2));
while (f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) {
f_skip_331(F->up);
F->labs_1851 = NULL;
F->ltail_1852 = NULL;
F->others_arm_1854 = 0;
for (;;) {
if (f_at_kw_320(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_331(F->up);
F->others_arm_1854 = 1;
} else {
F->l_1853 = f_nn_311(F->up, ((rt_int)61LL), f_cur_line_318(F->up));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->l_1853)).a_);
if (f_at_op_322(F->up, rt_g_lit("..", 2))) {
f_skip_331(F->up);
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->l_1853)).b_);
}
f_append_315(F->up, &F->labs_1851, &F->ltail_1852, F->l_1853);
}
if ((!f_at_op_322(F->up, rt_g_lit("|", 1)))) {
goto L_end_1856;
}
f_skip_331(F->up);
}
L_end_1856: ;
f_expect_op_335(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1854)) {
(*(P174)rt_nil_check(F->x_1847)).flag_ = ((rt_int)1LL);
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_1847)).c_);
if ((!f_at_kw_320(F->up, rt_g_lit("END", 3)))) {
f_perror_330(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1848 = f_nn_311(F->up, ((rt_int)60LL), f_cur_line_318(F->up));
(*(P174)rt_nil_check(F->arm_1848)).a_ = F->labs_1851;
f_statements_409(F->up, &(*(P174)rt_nil_check(F->arm_1848)).b_);
f_append_315(F->up, &F->head_1849, &F->tail_1850, F->arm_1848);
}
}
L_end_1855: ;
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("CASE", 4));
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1847)).b_ = F->head_1849;
(*F->res_419) = F->x_1847;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_422(struct f_greenc_1fr *up_, P174 *res_421) {
  struct f_loop_stmt_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_421 = res_421;
F->x_1857 = NULL;
F->r_1858 = NULL;
F->line_1859 = INT64_MIN;
F->line_1859 = f_cur_line_318(F->up);
F->x_1857 = f_nn_311(F->up, ((rt_int)24LL), G_NV(F->line_1859));
if (f_at_kw_320(F->up, rt_g_lit("FOR", 3))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1857)).flag_ = ((rt_int)2LL);
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_1857)).name_);
f_expect_kw_333(F->up, rt_g_lit("IN", 2));
if (f_at_kw_320(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1857)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->x_1857)).a_);
} else {
f_discrete_range_p_373(F->up, &(*(P174)rt_nil_check(F->x_1857)).a_);
}
} else if (f_at_kw_320(F->up, rt_g_lit("WHILE", 5))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_1857)).flag_ = ((rt_int)1LL);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_1857)).a_);
}
f_expect_kw_333(F->up, rt_g_lit("LOOP", 4));
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_1857)).b_);
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("LOOP", 4));
(*F->res_421) = F->x_1857;
goto ret_;
ret_:

  return;
}

static void f_compilation_424(struct f_greenc_1fr *up_, P174 *res_423) {
  struct f_compilation_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_423 = res_423;
F->first_1860 = INT64_MIN;
F->head_1861 = NULL;
F->tail_1862 = NULL;
F->x_1863 = NULL;
while ((!f_at_kind_324(F->up, ((rt_int)0LL)))) {
if (f_at_kw_320(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_381(F->up, &F->x_1863);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1863)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1863 = (*(P174)rt_nil_check(F->x_1863)).a_;
while ((F->x_1863 != NULL)) {
F->up->env_names_197 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->env_names_197)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1863)).name_))), one_rt_gstr(44)));
F->x_1863 = (*(P174)rt_nil_check(F->x_1863)).next_;
}
L_end_1865: ;
}
} else {
if ((!(((((f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_320(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_320(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_320(F->up, rt_g_lit("TASK", 4))) || f_at_kw_320(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_320(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_330(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
F->first_1860 = G_NV((*(P110)rt_nil_check(({ A109 ix1866 = F->up->toks_112; ix1866.p[rt_index(G_NV(F->up->tpos_114), ix1866.lo, ix1866.hi) - ix1866.lo]; }))).line_);
f_unit_p_387(F->up, &F->x_1863);
if (((*(P174)rt_nil_check(F->x_1863)).formal_ == NULL)) {
(*(P174)rt_nil_check(F->x_1863)).formal_ = f_mk_237(F->up, rt_g_lit(",", 1));
}
if (G_NV(F->up->compiling_source_207)) {
F->up->spans_206 = ({ R205 *cell1867 = rt_alloc(sizeof(R205)); *cell1867 = cp_R205(({ R205 ag1868; ag1868.u_ = F->x_1863; ag1868.first_ = G_NV(F->first_1860); ag1868.last_ = G_NV((*(P110)rt_nil_check(({ A109 ix1869 = F->up->toks_112; ix1869.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1869.lo, ix1869.hi) - ix1869.lo]; }))).line_); ag1868.env_ = F->up->env_names_197; ag1868.next_ = F->up->spans_206; ag1868; })); (P204)cell1867; });
}
(*(P174)rt_nil_check(F->x_1863)).formal_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1863)).formal_)), (*(P140)rt_nil_check(F->up->env_names_197))));
f_append_315(F->up, &F->head_1861, &F->tail_1862, F->x_1863);
}
}
L_end_1864: ;
(*F->res_423) = F->head_1861;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_426(struct f_greenc_1fr *up_, rt_gstr s_425) {
  struct f_hash_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_425 = cp_rt_gstr(s_425);
F->h_1870 = INT64_MIN;
F->h_1870 = ((rt_int)0LL);
{ rt_int lo1874 = ((rt_int)1LL), hi1875 = ({ rt_gstr at1872 = F->s_425; at1872.hi >= at1872.lo ? at1872.hi - at1872.lo + 1 : (rt_int)0; });
for (rt_int it1876 = lo1874; it1876 <= hi1875; it1876++) {
F->i_1873 = it1876;
F->h_1870 = rt_rem(rt_add(rt_mul(G_NV(F->h_1870), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1877 = F->s_425; ix1877.p[rt_index(F->i_1873, ix1877.lo, ix1877.hi) - ix1877.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1871: ;
F->result_ = G_NV(F->h_1870);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_429(struct f_greenc_1fr *up_, P140 list_427, rt_gstr name_428) {
  struct f_listed_429fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_427 = list_427;
F->name_428 = cp_rt_gstr(name_428);
F->l_1878 = cp_rt_gstr((*(P140)rt_nil_check(F->list_427)));
F->n_1879 = INT64_MIN;
F->n_1879 = ({ rt_gstr at1880 = F->name_428; at1880.hi >= at1880.lo ? at1880.hi - at1880.lo + 1 : (rt_int)0; });
{ rt_int lo1885 = ({ rt_gstr at1882 = F->l_1878; at1882.lo; }), hi1886 = rt_sub(rt_sub(({ rt_gstr at1883 = F->l_1878; at1883.hi; }), G_NV(F->n_1879)), ((rt_int)1LL));
for (rt_int it1887 = lo1885; it1887 <= hi1886; it1887++) {
F->i_1884 = it1887;
if (((G_NV(({ rt_gstr ix1888 = F->l_1878; ix1888.p[rt_index(F->i_1884, ix1888.lo, ix1888.hi) - ix1888.lo]; })) == 44) && (G_NV(({ rt_gstr ix1889 = F->l_1878; ix1889.p[rt_index(rt_add(rt_add(F->i_1884, G_NV(F->n_1879)), ((rt_int)1LL)), ix1889.lo, ix1889.hi) - ix1889.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1890 = F->l_1878; rt_int l_ = rt_add(F->i_1884, ((rt_int)1LL)), h_ = rt_add(F->i_1884, G_NV(F->n_1879)); if (l_ <= h_) { rt_index(l_, sl1890.lo, sl1890.hi); rt_index(h_, sl1890.lo, sl1890.hi); } sl1890.p += l_ - sl1890.lo; sl1890.lo = l_; sl1890.hi = h_; sl1890; }), F->name_428)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1881: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_431(struct f_greenc_1fr *up_, P117 y_430) {
  struct f_visible_sym_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_430 = y_430;
F->b_1891 = NULL;
F->b_1891 = F->up->barriers_200;
if ((G_NV((*(P117)rt_nil_check(F->y_430)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1891 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->y_430)).depth_) <= G_NV((*(P198)rt_nil_check(F->b_1891)).limit_)) && (G_NV((*(P117)rt_nil_check(F->y_430)).depth_) != G_NV((*(P198)rt_nil_check(F->b_1891)).keep_)))) {
if ((!f_listed_429(F->up, (*(P198)rt_nil_check(F->b_1891)).allowed_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_430)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1891 = (*(P198)rt_nil_check(F->b_1891)).next_;
}
L_end_1892: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_433(struct f_greenc_1fr *up_, rt_gstr name_432) {
  struct f_lookup_433fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_432 = cp_rt_gstr(name_432);
F->y_1893 = NULL;
F->y_1893 = ({ A116 ix1894 = F->up->table_119; ix1894.p[rt_index(f_hash_426(F->up, F->name_432), ix1894.lo, ix1894.hi) - ix1894.lo]; });
while ((F->y_1893 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1893)).name_)), F->name_432) && f_visible_sym_431(F->up, F->y_1893))) {
F->result_ = F->y_1893;
goto ret_;
}
F->y_1893 = (*(P117)rt_nil_check(F->y_1893)).chain_;
}
L_end_1895: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_436(struct f_greenc_1fr *up_, P117 a_434, P117 b_435) {
  struct f_same_task_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_434 = a_434;
F->b_435 = b_435;
if ((F->a_434 == F->b_435)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_434 == NULL) || (F->b_435 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_434)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_435)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_entry_439(struct f_greenc_1fr *up_, rt_gstr name_437, P117 owner_438) {
  struct f_lookup_entry_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_437 = cp_rt_gstr(name_437);
F->owner_438 = owner_438;
F->y_1896 = NULL;
F->y_1896 = ({ A116 ix1897 = F->up->table_119; ix1897.p[rt_index(f_hash_426(F->up, F->name_437), ix1897.lo, ix1897.hi) - ix1897.lo]; });
while ((F->y_1896 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1896)).name_)), F->name_437) && (G_NV((*(P117)rt_nil_check(F->y_1896)).kind_) == ((rt_int)10LL))) && f_same_task_436(F->up, (*(P117)rt_nil_check(F->y_1896)).members_, F->owner_438))) {
F->result_ = F->y_1896;
goto ret_;
}
F->y_1896 = (*(P117)rt_nil_check(F->y_1896)).chain_;
}
L_end_1898: ;
F->result_ = f_lookup_433(F->up, F->name_437);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_at_442(struct f_greenc_1fr *up_, rt_gstr name_440, rt_int d_441) {
  struct f_lookup_at_442fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_440 = cp_rt_gstr(name_440);
F->d_441 = d_441;
F->y_1899 = NULL;
F->y_1899 = ({ A116 ix1900 = F->up->table_119; ix1900.p[rt_index(f_hash_426(F->up, F->name_440), ix1900.lo, ix1900.hi) - ix1900.lo]; });
while ((F->y_1899 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1899)).name_)), F->name_440) && (G_NV((*(P117)rt_nil_check(F->y_1899)).depth_) == F->d_441))) {
F->result_ = F->y_1899;
goto ret_;
}
F->y_1899 = (*(P117)rt_nil_check(F->y_1899)).chain_;
}
L_end_1901: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_444(struct f_greenc_1fr *up_, rt_gstr name_443) {
  struct f_enclosing_depth_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_443 = cp_rt_gstr(name_443);
{ rt_int lo1904 = ((rt_int)1LL), hi1905 = G_NV(F->up->nunits_188);
for (rt_int it1906 = hi1905; it1906 >= lo1904; it1906--) {
F->i_1903 = it1906;
if (eq_rt_gstr((*(P140)rt_nil_check(({ A183 ix1907 = F->up->unit_names_184; ix1907.p[rt_index(F->i_1903, ix1907.lo, ix1907.hi) - ix1907.lo]; }))), F->name_443)) {
F->result_ = G_NV(({ A185 ix1908 = F->up->unit_depths_186; ix1908.p[rt_index(F->i_1903, ix1908.lo, ix1908.hi) - ix1908.lo]; }));
goto ret_;
}
}
}
L_end_1902: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_446(struct f_greenc_1fr *up_, P140 name_445) {
  struct f_push_unit_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_445 = name_445;
F->up->nunits_188 = rt_add(G_NV(F->up->nunits_188), ((rt_int)1LL));
(*({ A183 *ix1909 = &(F->up->unit_names_184); &ix1909->p[rt_index(G_NV(F->up->nunits_188), ix1909->lo, ix1909->hi) - ix1909->lo]; })) = F->name_445;
(*({ A185 *ix1910 = &(F->up->unit_depths_186); &ix1910->p[rt_index(G_NV(F->up->nunits_188), ix1910->lo, ix1910->hi) - ix1910->lo]; })) = G_NV(F->up->depth_120);
ret_:

  return;
}

static P117 f_lookup_decl_448(struct f_greenc_1fr *up_, P174 d_447) {
  struct f_lookup_decl_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_447 = d_447;
F->y_1911 = NULL;
F->y_1911 = ({ A116 ix1912 = F->up->table_119; ix1912.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_447)).name_))), ix1912.lo, ix1912.hi) - ix1912.lo]; });
while ((F->y_1911 != NULL)) {
if (((*(P117)rt_nil_check(F->y_1911)).decl_ == F->d_447)) {
F->result_ = F->y_1911;
goto ret_;
}
F->y_1911 = (*(P117)rt_nil_check(F->y_1911)).chain_;
}
L_end_1913: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_450(struct f_greenc_1fr *up_, P117 y_449) {
  struct f_overloadable_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_449 = y_449;
F->result_ = ((((G_NV((*(P117)rt_nil_check(F->y_449)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_449)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_449)).kind_) == ((rt_int)7LL))) || (G_NV((*(P117)rt_nil_check(F->y_449)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_453(struct f_greenc_1fr *up_, P122 a_451, P122 b_452) {
  struct f_same_453fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_451 = a_451;
F->b_452 = b_452;
if (((F->a_451 == NULL) || (F->b_452 == NULL))) {
F->result_ = (F->a_451 == F->b_452);
goto ret_;
} else if ((((*(P122)rt_nil_check(F->a_451)).view_of_ != NULL) || ((*(P122)rt_nil_check(F->b_452)).view_of_ != NULL))) {
F->result_ = (f_base_view_455(F->up, F->a_451) == f_base_view_455(F->up, F->b_452));
goto ret_;
}
F->result_ = (F->a_451 == F->b_452);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_base_view_455(struct f_greenc_1fr *up_, P122 t_454) {
  struct f_base_view_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_454 = t_454;
F->r_1914 = NULL;
F->r_1914 = F->t_454;
while (((*(P122)rt_nil_check(F->r_1914)).view_of_ != NULL)) {
F->r_1914 = (*(P122)rt_nil_check(F->r_1914)).view_of_;
}
L_end_1915: ;
F->result_ = F->r_1914;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_root_457(struct f_greenc_1fr *up_, P122 t_456) {
  struct f_root_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_456 = t_456;
F->r_1916 = NULL;
F->r_1916 = F->t_456;
while (((*(P122)rt_nil_check(F->r_1916)).parent_ != NULL)) {
F->r_1916 = (*(P122)rt_nil_check(F->r_1916)).parent_;
}
L_end_1917: ;
F->result_ = F->r_1916;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_460(struct f_greenc_1fr *up_, P122 a_458, P122 b_459) {
  struct f_derived_from_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_458 = a_458;
F->b_459 = b_459;
F->r_1918 = NULL;
F->r_1918 = F->a_458;
while ((F->r_1918 != NULL)) {
if ((F->r_1918 == F->b_459)) {
F->result_ = 1;
goto ret_;
}
F->r_1918 = (*(P122)rt_nil_check(F->r_1918)).parent_;
}
L_end_1919: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_462(struct f_greenc_1fr *up_, P122 t_461) {
  struct f_is_numeric_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_461 = t_461;
if (((*(P122)rt_nil_check(F->t_461)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_210) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_numeric_462(F->up, (*(P122)rt_nil_check(F->t_461)).view_of_);
goto ret_;
}
F->result_ = (((G_NV((*(P122)rt_nil_check(F->t_461)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_461)).kind_) == ((rt_int)3LL))) || (G_NV((*(P122)rt_nil_check(F->t_461)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_464(struct f_greenc_1fr *up_, P122 t_463) {
  struct f_is_discrete_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_463 = t_463;
if (((*(P122)rt_nil_check(F->t_463)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_210) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_discrete_464(F->up, (*(P122)rt_nil_check(F->t_463)).view_of_);
goto ret_;
}
F->result_ = ((((G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_467(struct f_greenc_1fr *up_, P1920 a_465, P1920 b_466) {
  struct f_same_types_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_465 = a_465;
F->b_466 = b_466;
F->x_1922 = NULL;
F->x_1922 = F->a_465;
F->y_1923 = NULL;
F->y_1923 = F->b_466;
while (((F->x_1922 != NULL) && (F->y_1923 != NULL))) {
if (((!f_same_453(F->up, (*(P1920)rt_nil_check(F->x_1922)).t_, (*(P1920)rt_nil_check(F->y_1923)).t_)) || (G_NV((*(P1920)rt_nil_check(F->x_1922)).mode_) != G_NV((*(P1920)rt_nil_check(F->y_1923)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1922 = (*(P1920)rt_nil_check(F->x_1922)).next_;
F->y_1923 = (*(P1920)rt_nil_check(F->y_1923)).next_;
}
L_end_1924: ;
F->result_ = ((F->x_1922 == NULL) && (F->y_1923 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_470(struct f_greenc_1fr *up_, P1920 a_468, P1920 b_469) {
  struct f_same_signature_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_468 = a_468;
F->b_469 = b_469;
F->x_1925 = NULL;
F->x_1925 = F->a_468;
F->y_1926 = NULL;
F->y_1926 = F->b_469;
while (((F->x_1925 != NULL) && (F->y_1926 != NULL))) {
if ((((!f_same_453(F->up, (*(P1920)rt_nil_check(F->x_1925)).t_, (*(P1920)rt_nil_check(F->y_1926)).t_)) || (G_NV((*(P1920)rt_nil_check(F->x_1925)).mode_) != G_NV((*(P1920)rt_nil_check(F->y_1926)).mode_))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P1920)rt_nil_check(F->x_1925)).name_)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->y_1926)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1925 = (*(P1920)rt_nil_check(F->x_1925)).next_;
F->y_1926 = (*(P1920)rt_nil_check(F->y_1926)).next_;
}
L_end_1927: ;
F->result_ = ((F->x_1925 == NULL) && (F->y_1926 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_473(struct f_greenc_1fr *up_, P117 y_471, P117 z_472) {
  struct f_distinct_overload_473fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_471 = y_471;
F->z_472 = z_472;
if ((!(f_overloadable_450(F->up, F->y_471) && f_overloadable_450(F->up, F->z_472)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_471)).kind_) != G_NV((*(P117)rt_nil_check(F->z_472)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_470(F->up, (*(P117)rt_nil_check(F->y_471)).params_, (*(P117)rt_nil_check(F->z_472)).params_)) || (!f_same_453(F->up, (*(P117)rt_nil_check(F->y_471)).result_, (*(P117)rt_nil_check(F->z_472)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_476(struct f_greenc_1fr *up_, P117 y_474, rt_int line_475) {
  struct f_define_476fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_474 = y_474;
F->line_475 = line_475;
F->h_1928 = INT64_MIN;
F->h_1928 = f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_474)).name_)));
F->z_1929 = NULL;
F->z_1929 = ({ A116 ix1930 = F->up->table_119; ix1930.p[rt_index(G_NV(F->h_1928), ix1930.lo, ix1930.hi) - ix1930.lo]; });
while ((F->z_1929 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_1929)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_1929)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_474)).name_)))) && (!f_distinct_overload_473(F->up, F->y_474, F->z_1929)))) {
f_fail_258(F->up, F->line_475, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_474)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1929 = (*(P117)rt_nil_check(F->z_1929)).chain_;
}
L_end_1931: ;
(*(P117)rt_nil_check(F->y_474)).depth_ = G_NV(F->up->depth_120);
(*(P117)rt_nil_check(F->y_474)).chain_ = ({ A116 ix1932 = F->up->table_119; ix1932.p[rt_index(G_NV(F->h_1928), ix1932.lo, ix1932.hi) - ix1932.lo]; });
(*({ A116 *ix1933 = &(F->up->table_119); &ix1933->p[rt_index(G_NV(F->h_1928), ix1933->lo, ix1933->hi) - ix1933->lo]; })) = F->y_474;
(*(P117)rt_nil_check(F->y_474)).stack_ = F->up->scope_stack_121;
F->up->scope_stack_121 = F->y_474;
ret_:

  return;
}

static void f_open_scope_477(struct f_greenc_1fr *up_) {
  struct f_open_scope_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_478(struct f_greenc_1fr *up_) {
  struct f_close_scope_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_121 != NULL) && (G_NV((*(P117)rt_nil_check(F->up->scope_stack_121)).depth_) == G_NV(F->up->depth_120)))) {
(*({ A116 *ix1935 = &(F->up->table_119); &ix1935->p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->scope_stack_121)).name_))), ix1935->lo, ix1935->hi) - ix1935->lo]; })) = (*(P117)rt_nil_check(F->up->scope_stack_121)).chain_;
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->up->scope_stack_121)).stack_;
}
L_end_1934: ;
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static P117 f_new_sym_481(struct f_greenc_1fr *up_, rt_int kind_479, P140 name_480) {
  struct f_new_sym_481fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_479 = kind_479;
F->name_480 = name_480;
F->result_ = ({ R118 *cell1936 = rt_alloc(sizeof(R118)); *cell1936 = cp_R118(({ R118 ag1937; ag1937.kind_ = F->kind_479; ag1937.name_ = F->name_480; ag1937.t_ = NULL; ag1937.c_ = NULL; ag1937.access_path_ = NULL; ag1937.cname_ = NULL; ag1937.ro_ = 0; ag1937.mvalue_ = ((rt_int)0LL); ag1937.hasmv_ = 0; ag1937.decl_ = NULL; ag1937.params_ = NULL; ag1937.result_ = NULL; ag1937.depth_ = ((rt_int)0LL); ag1937.level_ = ((rt_int)0LL); ag1937.byref_ = 0; ag1937.vrp_ = 0; ag1937.hidden_ = 0; ag1937.from_use_ = 0; ag1937.members_ = NULL; ag1937.mnext_ = NULL; ag1937.chain_ = NULL; ag1937.stack_ = NULL; ag1937.flags_ = ((rt_int)0LL); ag1937; })); (P117)cell1936; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_new_typ_483(struct f_greenc_1fr *up_, rt_int kind_482) {
  struct f_new_typ_483fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_482 = kind_482;
F->result_ = ({ R123 *cell1940 = rt_alloc(sizeof(R123)); *cell1940 = cp_R123(({ R123 ag1941; ag1941.kind_ = F->kind_482; ag1941.name_ = NULL; ag1941.lits_ = NULL; ag1941.elem_ = NULL; ag1941.idx_ = NULL; ag1941.elemcons_ = NULL; ag1941.tcons_ = NULL; ag1941.fields_ = NULL; ag1941.target_ = NULL; ag1941.decl_ = NULL; ag1941.cname_ = NULL; ag1941.forward_ = 0; ag1941.defined_ = 0; ag1941.priv_ = 0; ag1941.next_ = NULL; ag1941.idx2_ = NULL; ag1941.littab_ = NULL; ag1941.parent_ = NULL; ag1941.ndigits_ = ((rt_int)0LL); ag1941.fdelta_ = NULL; ag1941.fsmall_ = NULL; ag1941.dims_ = ((rt_int)0LL); ag1941.is_restricted_ = 0; ag1941.view_of_ = NULL; ag1941; })); (P122)cell1940; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P178 f_new_cons_484(struct f_greenc_1fr *up_) {
  struct f_new_cons_484fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R179 *cell1944 = rt_alloc(sizeof(R179)); *cell1944 = cp_R179(({ R179 ag1945; ag1945.lo_ = NULL; ag1945.hi_ = NULL; ag1945.slen_ = NULL; ag1945.mlo_ = ((rt_int)0LL); ag1945.mhi_ = ((rt_int)0LL); ag1945.hasm_ = 0; ag1945.lo2_ = NULL; ag1945.hi2_ = NULL; ag1945.acc_ = NULL; ag1945.inner_ = NULL; ag1945.dv_ = NULL; ag1945; })); (P178)cell1944; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_486(struct f_greenc_1fr *up_, P178 c_485) {
  struct f_bounded_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_485 = c_485;
if ((F->c_485 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_485)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_488(struct f_greenc_1fr *up_, P178 c_487) {
  struct f_bounded_hi_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_487 = c_487;
if ((F->c_487 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_487)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_490(struct f_greenc_1fr *up_, P178 c_489) {
  struct f_static_bounds_490fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_489 = c_489;
if ((F->c_489 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P178)rt_nil_check(F->c_489)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_492(struct f_greenc_1fr *up_, P178 c_491) {
  struct f_discriminated_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_491 = c_491;
if ((F->c_491 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_491)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_494(struct f_greenc_1fr *up_, P122 t_493) {
  struct f_kind_name_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_493 = t_493;
if (((*(P122)rt_nil_check(F->t_493)).name_ != NULL)) {
F->result_ = (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_493)).name_));
goto ret_;
}
{ rt_int sel1946 = G_NV((*(P122)rt_nil_check(F->t_493)).kind_);
if (0 || sel1946 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1946 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1946 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1946 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1946 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1946 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1946 == ((rt_int)16LL)) {
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

static void f_check_type_498(struct f_greenc_1fr *up_, P122 got_495, P122 want_496, rt_int line_497) {
  struct f_check_type_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_495 = got_495;
F->want_496 = want_496;
F->line_497 = line_497;
if ((F->want_496 == NULL)) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->got_495)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->want_496)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_453(F->up, F->got_495, F->want_496))) {
f_fail_258(F->up, F->line_497, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_494(F->up, F->got_495)), rt_g_lit(" where ", 7)), f_kind_name_494(F->up, F->want_496)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_500(struct f_greenc_1fr *up_, P122 t_499) {
  struct f_field_count_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_499 = t_499;
F->n_1947 = INT64_MIN;
F->n_1947 = ((rt_int)0LL);
F->f_1948 = NULL;
F->f_1948 = (*(P122)rt_nil_check(F->t_499)).fields_;
while ((F->f_1948 != NULL)) {
F->n_1947 = rt_add(G_NV(F->n_1947), ((rt_int)1LL));
F->f_1948 = (*(P1938)rt_nil_check(F->f_1948)).next_;
}
L_end_1949: ;
F->result_ = G_NV(F->n_1947);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_503(struct f_greenc_1fr *up_, P122 t_501, P140 *r_502) {
  struct f_ctype_503fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_501 = t_501;
F->r_502 = r_502;
F->s_1950 = NULL;
{ rt_int sel1951 = G_NV((*(P122)rt_nil_check(F->t_501)).kind_);
if (0 || sel1951 == ((rt_int)1LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1951 == ((rt_int)2LL) || sel1951 == ((rt_int)4LL) || sel1951 == ((rt_int)11LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("int", 3));
} else if (0 || sel1951 == ((rt_int)3LL) || sel1951 == ((rt_int)16LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("double", 6));
} else if (0 || sel1951 == ((rt_int)5LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1951 == ((rt_int)9LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("void", 4));
} else if (0 || sel1951 == ((rt_int)13LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1951 == ((rt_int)14LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1951 == ((rt_int)15LL)) {
(*F->r_502) = f_mk_237(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P122)rt_nil_check(F->t_501)).view_of_ != NULL)) {
f_ctype_503(F->up, (*(P122)rt_nil_check(F->t_501)).view_of_, &F->s_1950);
(*(P122)rt_nil_check(F->t_501)).cname_ = F->s_1950;
} else if (((*(P122)rt_nil_check(F->t_501)).cname_ == NULL)) {
f_declare_ctype_508(F->up, F->t_501);
} else if ((((G_NV((*(P122)rt_nil_check(F->t_501)).kind_) == ((rt_int)7LL)) && G_NV((*(P122)rt_nil_check(F->t_501)).forward_)) && (!G_NV((*(P122)rt_nil_check(F->t_501)).defined_)))) {
(*(P122)rt_nil_check(F->t_501)).defined_ = 1;
f_field_decls_506(F->up, F->t_501, &F->s_1950);
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_501)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1950))), rt_g_lit(" };", 3)));
}
(*F->r_502) = (*(P122)rt_nil_check(F->t_501)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_506(struct f_greenc_1fr *up_, P122 t_504, P140 *r_505) {
  struct f_field_decls_506fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_504 = t_504;
F->r_505 = r_505;
F->f_1952 = NULL;
F->f_1952 = (*(P122)rt_nil_check(F->t_504)).fields_;
F->s_1953 = NULL;
F->ct_1954 = NULL;
F->s_1953 = f_mk_237(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1952 != NULL)) {
f_ctype_503(F->up, (*(P1938)rt_nil_check(F->f_1952)).t_, &F->ct_1954);
F->s_1953 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->s_1953)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_1954))), one_rt_gstr(32)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_1952)).name_)))), one_rt_gstr(59)));
F->f_1952 = (*(P1938)rt_nil_check(F->f_1952)).next_;
}
L_end_1955: ;
(*F->r_505) = F->s_1953;
ret_:

  return;
}

static void f_declare_ctype_508(struct f_greenc_1fr *up_, P122 t_507) {
  struct f_declare_ctype_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_507 = t_507;
F->ct_1956 = NULL;
F->s_1957 = NULL;
F->target_1958 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_507)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_619(F->up, F->t_507);
}
if ((G_NV((*(P122)rt_nil_check(F->t_507)).kind_) == ((rt_int)6LL))) {
f_new_name_240(F->up, rt_g_lit("A", 1), &(*(P122)rt_nil_check(F->t_507)).cname_);
} else if ((G_NV((*(P122)rt_nil_check(F->t_507)).kind_) == ((rt_int)7LL))) {
f_new_name_240(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->t_507)).cname_);
} else {
f_new_name_240(F->up, rt_g_lit("P", 1), &(*(P122)rt_nil_check(F->t_507)).cname_);
}
(*(P122)rt_nil_check(F->t_507)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->t_507;
if ((G_NV((*(P122)rt_nil_check(F->t_507)).kind_) == ((rt_int)8LL))) {
F->target_1958 = (*(P122)rt_nil_check(F->t_507)).target_;
if ((F->target_1958 == NULL)) {
f_fail_258(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_494(F->up, F->t_507)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P122)rt_nil_check(F->target_1958)).kind_) == ((rt_int)7LL))) {
if (((*(P122)rt_nil_check(F->target_1958)).cname_ == NULL)) {
f_new_name_240(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->target_1958)).cname_);
(*(P122)rt_nil_check(F->target_1958)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->target_1958;
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1958)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1958)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->target_1958)).forward_ = 1;
}
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1958)).cname_))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_503(F->up, F->target_1958, &F->ct_1956);
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P140)rt_nil_check(F->ct_1956))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_507)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_507)).elem_, &F->ct_1956);
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(59)));
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P140)rt_nil_check(F->ct_1956))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->t_507)).defined_ = 1;
f_field_decls_506(F->up, F->t_507, &F->s_1957);
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_507)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1957))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_511(struct f_greenc_1fr *up_, P174 lits_509, rt_gstr name_510) {
  struct f_lit_index_511fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_509 = lits_509;
F->name_510 = cp_rt_gstr(name_510);
F->i_1959 = INT64_MIN;
F->i_1959 = ((rt_int)0LL);
F->l_1960 = NULL;
F->l_1960 = F->lits_509;
while ((F->l_1960 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_1960)).name_)), F->name_510)) {
F->result_ = G_NV(F->i_1959);
goto ret_;
}
F->i_1959 = rt_add(G_NV(F->i_1959), ((rt_int)1LL));
F->l_1960 = (*(P174)rt_nil_check(F->l_1960)).next_;
}
L_end_1961: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_515(struct f_greenc_1fr *up_, P174 e_512, rt_int *v_513, int *ok_514) {
  struct f_manifest_515fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_512 = e_512;
F->v_513 = v_513;
F->ok_514 = ok_514;
F->a_1962 = INT64_MIN;
F->b_1963 = INT64_MIN;
F->ok2_1964 = INT_MIN;
F->y_1965 = NULL;
(*F->ok_514) = 0;
(*F->v_513) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)1LL))) {
(*F->ok_514) = 1;
(*F->v_513) = G_NV((*(P174)rt_nil_check(F->e_512)).ival_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)15LL))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_512)).a_, &(*F->v_513), &(*F->ok_514));
 (void)rt_range((*F->ok_514), 0, 1);
} else if (((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("-", 1)))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_512)).a_, &F->a_1962, &(*F->ok_514));
 (void)rt_range((*F->ok_514), 0, 1);
(*F->v_513) = rt_neg(G_NV(F->a_1962));
} else if (((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("*", 1))))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_512)).a_, &F->a_1962, &(*F->ok_514));
 (void)rt_range((*F->ok_514), 0, 1);
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_512)).b_, &F->b_1963, &F->ok2_1964);
 (void)rt_range(F->ok2_1964, 0, 1);
(*F->ok_514) = (G_NV((*F->ok_514)) && G_NV(F->ok2_1964));
if (G_NV((*F->ok_514))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("+", 1))) {
(*F->v_513) = rt_add(G_NV(F->a_1962), G_NV(F->b_1963));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("-", 1))) {
(*F->v_513) = rt_sub(G_NV(F->a_1962), G_NV(F->b_1963));
} else {
(*F->v_513) = rt_mul(G_NV(F->a_1962), G_NV(F->b_1963));
}
}
} else if ((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)5LL))) {
F->y_1965 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)));
if ((((F->y_1965 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1965)).hasmv_))) {
(*F->ok_514) = 1;
(*F->v_513) = G_NV((*(P117)rt_nil_check(F->y_1965)).mvalue_);
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->e_512)).a_))) {
F->y_1965 = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->e_512)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), G_NV((*(P174)rt_nil_check(F->e_512)).line_));
if ((((F->y_1965 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1965)).hasmv_))) {
(*F->ok_514) = 1;
(*F->v_513) = G_NV((*(P117)rt_nil_check(F->y_1965)).mvalue_);
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)10LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_512)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1965 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_512)).a_)).name_)));
if (((((F->y_1965 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1965)).c_ != NULL)) && G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1965)).c_)).hasm_))) {
(*F->ok_514) = 1;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_512)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_513) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1965)).c_)).mlo_);
} else {
(*F->v_513) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1965)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_512)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_512)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_317(F->up, (*(P174)rt_nil_check(F->e_512)).b_) == ((rt_int)1LL)))) {
F->y_1965 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_512)).a_)).name_)));
if (((((F->y_1965 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1965)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1965)).t_ != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1965)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_512)).b_, &(*F->v_513), &(*F->ok_514));
 (void)rt_range((*F->ok_514), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_519(struct f_greenc_1fr *up_, P174 st_516, P122 *t_517, P178 *c_518) {
  struct f_resolve_519fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_516 = st_516;
F->t_517 = t_517;
F->c_518 = c_518;
F->y_1966 = NULL;
F->dummy_1967 = NULL;
F->code_1968 = NULL;
F->ok_1969 = INT_MIN;
F->r_1970 = NULL;
(*F->c_518) = f_new_cons_484(F->up);
if ((G_NV((*(P174)rt_nil_check(F->st_516)).kind_) != ((rt_int)80LL))) {
f_type_definition_553(F->up, F->st_516, NULL, &(*F->t_517), &(*F->c_518));
goto ret_;
}
if (((*(P174)rt_nil_check(F->st_516)).tag_ != NULL)) {
F->y_1966 = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_516)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_516)).name_)), G_NV((*(P174)rt_nil_check(F->st_516)).line_));
} else {
F->y_1966 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_516)).name_)));
}
if (((F->y_1966 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1966)).kind_) != ((rt_int)5LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_516)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_516)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_517) = (*(P117)rt_nil_check(F->y_1966)).t_;
if (((*(P117)rt_nil_check(F->y_1966)).c_ != NULL)) {
(*(P178)rt_nil_check((*F->c_518))).lo_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).lo_;
(*(P178)rt_nil_check((*F->c_518))).hi_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).hi_;
(*(P178)rt_nil_check((*F->c_518))).slen_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).slen_;
(*(P178)rt_nil_check((*F->c_518))).mlo_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).mlo_);
(*(P178)rt_nil_check((*F->c_518))).mhi_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).mhi_);
(*(P178)rt_nil_check((*F->c_518))).hasm_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).hasm_);
(*(P178)rt_nil_check((*F->c_518))).acc_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).acc_;
(*(P178)rt_nil_check((*F->c_518))).inner_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).inner_;
(*(P178)rt_nil_check((*F->c_518))).dv_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1966)).c_)).dv_;
}
if (((*F->t_517) == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_516)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_516)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P174)rt_nil_check(F->st_516)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_517))).kind_) != ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check((*F->t_517))).kind_) != ((rt_int)16LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_516)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->st_516)).b_, NULL, &F->dummy_1967, &(*(P178)rt_nil_check((*F->c_518))).acc_);
}
if (((G_NV((*(P174)rt_nil_check(F->st_516)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P174)rt_nil_check(F->st_516)).flag_) == ((rt_int)3LL)) && ((*(P174)rt_nil_check(F->st_516)).a_ != NULL)))) {
F->r_1970 = (*(P174)rt_nil_check(F->st_516)).a_;
if (((!f_is_numeric_462(F->up, (*F->t_517))) && (!f_is_discrete_464(F->up, (*F->t_517))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_516)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_537(F->up, F->r_1970, (*F->t_517), (*F->c_518));
} else if ((G_NV((*(P174)rt_nil_check(F->st_516)).flag_) == ((rt_int)2LL))) {
f_constraint_list_523(F->up, F->st_516, (*F->t_517), (*F->c_518));
}
ret_:

  return;
}

static void f_constraint_list_523(struct f_greenc_1fr *up_, P174 st_520, P122 t_521, P178 c_522) {
  struct f_constraint_list_523fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_520 = st_520;
F->t_521 = t_521;
F->c_522 = c_522;
F->r_1971 = NULL;
F->r_1971 = (*(P174)rt_nil_check(F->st_520)).a_;
F->arrt_1972 = NULL;
F->arrt_1972 = F->t_521;
F->cc_1973 = NULL;
F->cc_1973 = F->c_522;
F->it_1974 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_521)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_527(F->up, F->st_520, F->t_521, F->c_522);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->t_521)).kind_) != ((rt_int)6LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_520)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_317(F->up, F->r_1971) != G_NV((*(P122)rt_nil_check(F->t_521)).dims_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_520)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->t_521)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1971 != NULL)) {
if (((*(P174)rt_nil_check(F->r_1971)).formal_ != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_520)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_533(F->up, F->r_1971, (*(P122)rt_nil_check(F->arrt_1972)).idx_, &F->it_1974, &(*(P178)rt_nil_check(F->cc_1973)).lo_, &(*(P178)rt_nil_check(F->cc_1973)).hi_);
f_check_type_498(F->up, F->it_1974, (*(P122)rt_nil_check(F->arrt_1972)).idx_, G_NV((*(P174)rt_nil_check(F->st_520)).line_));
(*(P178)rt_nil_check(F->cc_1973)).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1973)).mhi_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1973)).hasm_ = 0;
F->r_1971 = (*(P174)rt_nil_check(F->r_1971)).next_;
if ((F->r_1971 != NULL)) {
(*(P178)rt_nil_check(F->cc_1973)).inner_ = f_new_cons_484(F->up);
F->cc_1973 = (*(P178)rt_nil_check(F->cc_1973)).inner_;
F->arrt_1972 = (*(P122)rt_nil_check(F->arrt_1972)).elem_;
}
}
L_end_1975: ;
ret_:

  return;
}

static void f_discriminant_constraint_527(struct f_greenc_1fr *up_, P174 st_524, P122 t_525, P178 c_526) {
  struct f_discriminant_constraint_527fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_524 = st_524;
F->t_525 = t_525;
F->c_526 = c_526;
F->a_1976 = NULL;
F->a_1976 = (*(P174)rt_nil_check(F->st_524)).a_;
F->f_1977 = NULL;
F->f_1977 = (*(P122)rt_nil_check(F->t_525)).fields_;
F->vt_1978 = NULL;
F->v_1979 = NULL;
F->d_1980 = NULL;
F->tail_1981 = NULL;
(*(P178)rt_nil_check(F->c_526)).dv_ = NULL;
while ((F->a_1976 != NULL)) {
if (((*(P174)rt_nil_check(F->a_1976)).formal_ != NULL)) {
F->f_1977 = (*(P122)rt_nil_check(F->t_525)).fields_;
while (((F->f_1977 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_1977)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1976)).formal_)))))) {
F->f_1977 = (*(P1938)rt_nil_check(F->f_1977)).next_;
}
L_end_1983: ;
} else {
while (((F->f_1977 != NULL) && (!G_NV((*(P1938)rt_nil_check(F->f_1977)).is_discr_)))) {
F->f_1977 = (*(P1938)rt_nil_check(F->f_1977)).next_;
}
L_end_1984: ;
}
if (((F->f_1977 == NULL) || (!G_NV((*(P1938)rt_nil_check(F->f_1977)).is_discr_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_524)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_494(F->up, F->t_525)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_825(F->up, F->a_1976, (*(P1938)rt_nil_check(F->f_1977)).t_, &F->vt_1978, &F->v_1979);
f_check_type_498(F->up, F->vt_1978, (*(P1938)rt_nil_check(F->f_1977)).t_, G_NV((*(P174)rt_nil_check(F->st_524)).line_));
F->d_1980 = ({ R1943 *cell1985 = rt_alloc(sizeof(R1943)); *cell1985 = cp_R1943(({ R1943 ag1986; ag1986.name_ = (*(P1938)rt_nil_check(F->f_1977)).name_; ag1986.v_ = F->v_1979; ag1986.next_ = NULL; ag1986; })); (P1942)cell1985; });
if ((F->tail_1981 == NULL)) {
(*(P178)rt_nil_check(F->c_526)).dv_ = F->d_1980;
} else {
(*(P1942)rt_nil_check(F->tail_1981)).next_ = F->d_1980;
}
F->tail_1981 = F->d_1980;
if (((*(P174)rt_nil_check(F->a_1976)).formal_ == NULL)) {
F->f_1977 = (*(P1938)rt_nil_check(F->f_1977)).next_;
}
F->a_1976 = (*(P174)rt_nil_check(F->a_1976)).next_;
}
L_end_1982: ;
F->f_1977 = (*(P122)rt_nil_check(F->t_525)).fields_;
while ((F->f_1977 != NULL)) {
if (G_NV((*(P1938)rt_nil_check(F->f_1977)).is_discr_)) {
F->d_1980 = (*(P178)rt_nil_check(F->c_526)).dv_;
while (((F->d_1980 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_1980)).name_)), (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_1977)).name_)))))) {
F->d_1980 = (*(P1942)rt_nil_check(F->d_1980)).next_;
}
L_end_1988: ;
if ((F->d_1980 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->st_524)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_1977)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_1977 = (*(P1938)rt_nil_check(F->f_1977)).next_;
}
L_end_1987: ;
ret_:

  return;
}

static void f_discrete_bounds_533(struct f_greenc_1fr *up_, P174 r_528, P122 want_529, P122 *t_530, P140 *lo_531, P140 *hi_532) {
  struct f_discrete_bounds_533fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_528 = r_528;
F->want_529 = want_529;
F->t_530 = t_530;
F->lo_531 = lo_531;
F->hi_532 = hi_532;
F->c_1989 = NULL;
F->y_1990 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->r_528)).kind_) == ((rt_int)14LL))) {
f_range_bounds_820(F->up, (*(P174)rt_nil_check(F->r_528)).a_, (*(P174)rt_nil_check(F->r_528)).b_, F->want_529, G_NV((*(P174)rt_nil_check(F->r_528)).line_), &(*F->t_530), &(*F->lo_531), &(*F->hi_532));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->r_528)).kind_) == ((rt_int)5LL))) {
F->y_1990 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_528)).name_)));
if (((F->y_1990 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1990)).kind_) != ((rt_int)5LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->r_528)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P174)rt_nil_check(F->r_528)).kind_) != ((rt_int)80LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->r_528)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P174)rt_nil_check(F->r_528)).kind_) == ((rt_int)5LL))) {
(*F->t_530) = (*(P117)rt_nil_check(F->y_1990)).t_;
F->c_1989 = (*(P117)rt_nil_check(F->y_1990)).c_;
} else {
f_resolve_519(F->up, F->r_528, &(*F->t_530), &F->c_1989);
}
if (((F->c_1989 == NULL) || ((*(P178)rt_nil_check(F->c_1989)).lo_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->r_528)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_531) = (*(P178)rt_nil_check(F->c_1989)).lo_;
(*F->hi_532) = (*(P178)rt_nil_check(F->c_1989)).hi_;
ret_:

  return;
}

static void f_range_of_537(struct f_greenc_1fr *up_, P174 r_534, P122 t_535, P178 c_536) {
  struct f_range_of_537fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_534 = r_534;
F->t_535 = t_535;
F->c_536 = c_536;
F->dummy_1991 = NULL;
F->ok_1992 = INT_MIN;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->r_534)).a_, F->t_535, &F->dummy_1991, &(*(P178)rt_nil_check(F->c_536)).lo_);
f_check_type_498(F->up, F->dummy_1991, F->t_535, G_NV((*(P174)rt_nil_check(F->r_534)).line_));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->r_534)).b_, F->t_535, &F->dummy_1991, &(*(P178)rt_nil_check(F->c_536)).hi_);
f_check_type_498(F->up, F->dummy_1991, F->t_535, G_NV((*(P174)rt_nil_check(F->r_534)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_535)).kind_) == ((rt_int)16LL))) {
(*(P178)rt_nil_check(F->c_536)).lo_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_536)).lo_))), one_rt_gstr(41)));
(*(P178)rt_nil_check(F->c_536)).hi_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_536)).hi_))), one_rt_gstr(41)));
}
f_manifest_515(F->up, (*(P174)rt_nil_check(F->r_534)).a_, &(*(P178)rt_nil_check(F->c_536)).mlo_, &F->ok_1992);
 (void)rt_range(F->ok_1992, 0, 1);
(*(P178)rt_nil_check(F->c_536)).hasm_ = G_NV(F->ok_1992);
f_manifest_515(F->up, (*(P174)rt_nil_check(F->r_534)).b_, &(*(P178)rt_nil_check(F->c_536)).mhi_, &F->ok_1992);
 (void)rt_range(F->ok_1992, 0, 1);
(*(P178)rt_nil_check(F->c_536)).hasm_ = (G_NV((*(P178)rt_nil_check(F->c_536)).hasm_) && G_NV(F->ok_1992));
ret_:

  return;
}

static void f_fresh_typ_541(struct f_greenc_1fr *up_, rt_int kind_538, P140 name_539, P122 *t_540) {
  struct f_fresh_typ_541fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_538 = kind_538;
F->name_539 = name_539;
F->t_540 = t_540;
F->ph_1993 = NULL;
F->ph_1993 = F->up->completing_173;
F->up->completing_173 = NULL;
if ((F->ph_1993 == NULL)) {
(*F->t_540) = f_new_typ_483(F->up, F->kind_538);
(*(P122)rt_nil_check((*F->t_540))).name_ = F->name_539;
goto ret_;
}
as_R123(&(*(P122)rt_nil_check(F->ph_1993)), (*(P122)rt_nil_check(f_new_typ_483(F->up, F->kind_538))));
(*(P122)rt_nil_check(F->ph_1993)).name_ = F->name_539;
(*F->t_540) = F->ph_1993;
ret_:

  return;
}

static void f_inherit_545(struct f_greenc_1fr *up_, P122 parent_542, P122 t_543, rt_int line_544) {
  struct f_inherit_545fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_542 = parent_542;
F->t_543 = t_543;
F->line_544 = line_544;
F->s_1994 = NULL;
F->s_1994 = F->up->scope_stack_121;
F->z_1995 = NULL;
F->p_1996 = NULL;
F->q_1997 = NULL;
F->tail_1998 = NULL;
F->uses_1999 = INT_MIN;
F->news_2000 = NULL;
while ((F->s_1994 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_1994)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->s_1994)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->s_1994)).hidden_))) && ((*(P117)rt_nil_check(F->s_1994)).members_ == NULL))) {
F->uses_1999 = f_same_453(F->up, (*(P117)rt_nil_check(F->s_1994)).result_, F->parent_542);
F->p_1996 = (*(P117)rt_nil_check(F->s_1994)).params_;
while ((F->p_1996 != NULL)) {
F->uses_1999 = (G_NV(F->uses_1999) || f_same_453(F->up, (*(P1920)rt_nil_check(F->p_1996)).t_, F->parent_542));
F->p_1996 = (*(P1920)rt_nil_check(F->p_1996)).next_;
}
L_end_2002: ;
if (G_NV(F->uses_1999)) {
f_copy_sym_1073(F->up, F->s_1994, &F->z_1995);
(*(P117)rt_nil_check(F->z_1995)).params_ = NULL;
F->tail_1998 = NULL;
F->p_1996 = (*(P117)rt_nil_check(F->s_1994)).params_;
while ((F->p_1996 != NULL)) {
F->q_1997 = ({ R1921 *cell2004 = rt_alloc(sizeof(R1921)); *cell2004 = cp_R1921(({ R1921 ag2005; ag2005.name_ = (*(P1920)rt_nil_check(F->p_1996)).name_; ag2005.mode_ = G_NV((*(P1920)rt_nil_check(F->p_1996)).mode_); ag2005.t_ = (*(P1920)rt_nil_check(F->p_1996)).t_; ag2005.c_ = (*(P1920)rt_nil_check(F->p_1996)).c_; ag2005.cfield_ = (*(P1920)rt_nil_check(F->p_1996)).cfield_; ag2005.dflt_ = (*(P1920)rt_nil_check(F->p_1996)).dflt_; ag2005.next_ = NULL; ag2005.dsym_ = (*(P1920)rt_nil_check(F->p_1996)).dsym_; ag2005; })); (P1920)cell2004; });
if (f_same_453(F->up, (*(P1920)rt_nil_check(F->q_1997)).t_, F->parent_542)) {
(*(P1920)rt_nil_check(F->q_1997)).t_ = F->t_543;
}
if ((F->tail_1998 == NULL)) {
(*(P117)rt_nil_check(F->z_1995)).params_ = F->q_1997;
} else {
(*(P1920)rt_nil_check(F->tail_1998)).next_ = F->q_1997;
}
F->tail_1998 = F->q_1997;
F->p_1996 = (*(P1920)rt_nil_check(F->p_1996)).next_;
}
L_end_2003: ;
if (f_same_453(F->up, (*(P117)rt_nil_check(F->z_1995)).result_, F->parent_542)) {
(*(P117)rt_nil_check(F->z_1995)).result_ = F->t_543;
}
(*(P117)rt_nil_check(F->z_1995)).chain_ = F->news_2000;
F->news_2000 = F->z_1995;
}
}
F->s_1994 = (*(P117)rt_nil_check(F->s_1994)).stack_;
}
L_end_2001: ;
while ((F->news_2000 != NULL)) {
F->z_1995 = F->news_2000;
F->news_2000 = (*(P117)rt_nil_check(F->news_2000)).chain_;
(*(P117)rt_nil_check(F->z_1995)).chain_ = NULL;
f_define_476(F->up, F->z_1995, F->line_544);
}
L_end_2006: ;
ret_:

  return;
}

static void f_derive_literals_548(struct f_greenc_1fr *up_, P122 t_546, rt_int line_547) {
  struct f_derive_literals_548fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_546 = t_546;
F->line_547 = line_547;
F->l_2007 = NULL;
F->l_2007 = (*(P122)rt_nil_check(F->t_546)).lits_;
F->n_2008 = INT64_MIN;
F->n_2008 = ((rt_int)0LL);
F->y_2009 = NULL;
while ((F->l_2007 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_2007)).kind_) == ((rt_int)5LL))) {
F->y_2009 = f_new_sym_481(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_2007)).name_);
(*(P117)rt_nil_check(F->y_2009)).t_ = F->t_546;
(*(P117)rt_nil_check(F->y_2009)).result_ = F->t_546;
(*(P117)rt_nil_check(F->y_2009)).mvalue_ = G_NV(F->n_2008);
(*(P117)rt_nil_check(F->y_2009)).hasmv_ = 1;
f_define_476(F->up, F->y_2009, F->line_547);
}
F->n_2008 = rt_add(G_NV(F->n_2008), ((rt_int)1LL));
F->l_2007 = (*(P174)rt_nil_check(F->l_2007)).next_;
}
L_end_2010: ;
ret_:

  return;
}

static void f_type_definition_553(struct f_greenc_1fr *up_, P174 d_549, P140 name_550, P122 *t_551, P178 *c_552) {
  struct f_type_definition_553fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_549 = d_549;
F->name_550 = name_550;
F->t_551 = t_551;
F->c_552 = c_552;
F->dummy_2011 = NULL;
F->it_2012 = NULL;
F->ic_2013 = NULL;
F->l_2014 = NULL;
F->comp_2015 = NULL;
F->f_2016 = NULL;
F->tail_2017 = NULL;
F->ok_2018 = INT_MIN;
F->n_2019 = INT64_MIN;
F->y_2020 = NULL;
(*F->c_552) = f_new_cons_484(F->up);
{ rt_int sel2021 = G_NV((*(P174)rt_nil_check(F->d_549)).kind_);
if (0 || sel2021 == ((rt_int)70LL)) {
f_fresh_typ_541(F->up, ((rt_int)4LL), F->name_550, &(*F->t_551));
(*(P122)rt_nil_check((*F->t_551))).lits_ = (*(P174)rt_nil_check(F->d_549)).a_;
F->l_2014 = (*(P174)rt_nil_check(F->d_549)).a_;
F->n_2019 = ((rt_int)0LL);
while ((F->l_2014 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_2014)).kind_) == ((rt_int)5LL))) {
F->y_2020 = f_new_sym_481(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_2014)).name_);
(*(P117)rt_nil_check(F->y_2020)).t_ = (*F->t_551);
(*(P117)rt_nil_check(F->y_2020)).result_ = (*F->t_551);
(*(P117)rt_nil_check(F->y_2020)).mvalue_ = G_NV(F->n_2019);
(*(P117)rt_nil_check(F->y_2020)).hasmv_ = 1;
f_define_476(F->up, F->y_2020, G_NV((*(P174)rt_nil_check(F->l_2014)).line_));
}
F->n_2019 = rt_add(G_NV(F->n_2019), ((rt_int)1LL));
F->l_2014 = (*(P174)rt_nil_check(F->l_2014)).next_;
}
L_end_2022: ;
(*(P178)rt_nil_check((*F->c_552))).lo_ = f_mk_237(F->up, rt_g_lit("0", 1));
(*(P178)rt_nil_check((*F->c_552))).hi_ = f_mk_237(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_2019), ((rt_int)1LL)))));
(*(P178)rt_nil_check((*F->c_552))).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check((*F->c_552))).mhi_ = rt_sub(G_NV(F->n_2019), ((rt_int)1LL));
(*(P178)rt_nil_check((*F->c_552))).hasm_ = 1;
} else if (0 || sel2021 == ((rt_int)71LL)) {
f_fresh_typ_541(F->up, ((rt_int)1LL), F->name_550, &(*F->t_551));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->d_549)).a_, F->up->ty_int_156, &F->dummy_2011, &(*(P178)rt_nil_check((*F->c_552))).lo_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_2011)).kind_) != ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_549)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->d_549)).b_, F->up->ty_int_156, &F->dummy_2011, &(*(P178)rt_nil_check((*F->c_552))).hi_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_2011)).kind_) != ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_549)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_515(F->up, (*(P174)rt_nil_check(F->d_549)).a_, &(*(P178)rt_nil_check((*F->c_552))).mlo_, &F->ok_2018);
 (void)rt_range(F->ok_2018, 0, 1);
(*(P178)rt_nil_check((*F->c_552))).hasm_ = G_NV(F->ok_2018);
f_manifest_515(F->up, (*(P174)rt_nil_check(F->d_549)).b_, &(*(P178)rt_nil_check((*F->c_552))).mhi_, &F->ok_2018);
 (void)rt_range(F->ok_2018, 0, 1);
(*(P178)rt_nil_check((*F->c_552))).hasm_ = (G_NV((*(P178)rt_nil_check((*F->c_552))).hasm_) && G_NV(F->ok_2018));
(*(P122)rt_nil_check((*F->t_551))).parent_ = F->up->ty_int_156;
(*(P122)rt_nil_check((*F->t_551))).tcons_ = (*F->c_552);
if ((G_NV((*(P178)rt_nil_check((*F->c_552))).hasm_) && ((G_NV((*(P178)rt_nil_check((*F->c_552))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P178)rt_nil_check((*F->c_552))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P122)rt_nil_check((*F->t_551))).parent_ = F->up->ty_short_167;
}
f_inherit_545(F->up, (*(P122)rt_nil_check((*F->t_551))).parent_, (*F->t_551), G_NV((*(P174)rt_nil_check(F->d_549)).line_));
} else if (0 || sel2021 == ((rt_int)72LL)) {
f_real_type_617(F->up, F->d_549, F->name_550, &(*F->t_551), &(*F->c_552));
} else if (0 || sel2021 == ((rt_int)73LL)) {
f_array_type_560(F->up, (*(P174)rt_nil_check(F->d_549)).a_, (*(P174)rt_nil_check(F->d_549)).b_, F->name_550, G_NV((*(P174)rt_nil_check(F->d_549)).line_), &(*F->t_551), &(*F->c_552));
} else if (0 || sel2021 == ((rt_int)74LL)) {
f_fresh_typ_541(F->up, ((rt_int)7LL), F->name_550, &(*F->t_551));
F->up->disc_syms_182 = NULL;
f_record_components_598(F->up, (*(P174)rt_nil_check(F->d_549)).a_, (*F->t_551), NULL, G_NV((*(P174)rt_nil_check(F->d_549)).line_));
while ((F->up->disc_syms_182 != NULL)) {
f_remove_sym_593(F->up, F->up->disc_syms_182);
F->up->disc_syms_182 = (*(P117)rt_nil_check(F->up->disc_syms_182)).mnext_;
}
L_end_2023: ;
} else if (0 || sel2021 == ((rt_int)75LL)) {
f_fresh_typ_541(F->up, ((rt_int)8LL), F->name_550, &(*F->t_551));
(*(P122)rt_nil_check((*F->t_551))).decl_ = (*(P174)rt_nil_check(F->d_549)).a_;
if (((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_549)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_549)).a_)).name_))) != NULL)) && (G_NV((*(P117)rt_nil_check(f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_549)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_549)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_619(F->up, (*F->t_551));
}
} else if (0 || sel2021 == ((rt_int)76LL)) {
f_derived_type_612(F->up, F->d_549, F->name_550, &(*F->t_551), &(*F->c_552));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_549)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_560(struct f_greenc_1fr *up_, P174 idx_554, P174 comp_555, P140 name_556, rt_int line_557, P122 *t_558, P178 *c_559) {
  struct f_array_type_560fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_554 = idx_554;
F->comp_555 = comp_555;
F->name_556 = name_556;
F->line_557 = line_557;
F->t_558 = t_558;
F->c_559 = c_559;
F->l_2024 = NULL;
F->l_2024 = F->idx_554;
F->rowc_2025 = NULL;
F->ic_2026 = NULL;
F->it_2027 = NULL;
(*F->c_559) = f_new_cons_484(F->up);
f_fresh_typ_541(F->up, ((rt_int)6LL), F->name_556, &(*F->t_558));
(*(P122)rt_nil_check((*F->t_558))).dims_ = f_list_len_317(F->up, F->idx_554);
if (((*(P174)rt_nil_check(F->idx_554)).next_ == NULL)) {
f_resolve_519(F->up, F->comp_555, &(*(P122)rt_nil_check((*F->t_558))).elem_, &(*(P122)rt_nil_check((*F->t_558))).elemcons_);
} else {
if (((G_NV((*(P174)rt_nil_check(F->idx_554)).kind_) == ((rt_int)14LL)) != (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->idx_554)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_258(F->up, F->line_557, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_560(F->up, (*(P174)rt_nil_check(F->idx_554)).next_, F->comp_555, NULL, F->line_557, &(*(P122)rt_nil_check((*F->t_558))).elem_, &F->rowc_2025);
if (((*(P178)rt_nil_check(F->rowc_2025)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_558))).elemcons_ = F->rowc_2025;
}
}
if ((G_NV((*(P174)rt_nil_check(F->l_2024)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_533(F->up, F->l_2024, NULL, &(*(P122)rt_nil_check((*F->t_558))).idx_, &(*(P178)rt_nil_check((*F->c_559))).lo_, &(*(P178)rt_nil_check((*F->c_559))).hi_);
f_static_range_564(F->up, (*(P174)rt_nil_check(F->l_2024)).a_, (*(P174)rt_nil_check(F->l_2024)).b_, (*F->c_559));
} else if (((G_NV((*(P174)rt_nil_check(F->l_2024)).kind_) == ((rt_int)80LL)) && (G_NV((*(P174)rt_nil_check(F->l_2024)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_533(F->up, F->l_2024, NULL, &(*(P122)rt_nil_check((*F->t_558))).idx_, &(*(P178)rt_nil_check((*F->c_559))).lo_, &(*(P178)rt_nil_check((*F->c_559))).hi_);
} else {
f_resolve_519(F->up, F->l_2024, &(*(P122)rt_nil_check((*F->t_558))).idx_, &F->ic_2026);
if (((((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_558))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_558))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_558))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P178)rt_nil_check(F->ic_2026)).hasm_) && ((rt_sub(G_NV((*(P178)rt_nil_check(F->ic_2026)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_2026)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P178)rt_nil_check(F->ic_2026)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_2026)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P178)rt_nil_check((*F->c_559))).lo_ = (*(P178)rt_nil_check(F->ic_2026)).lo_;
(*(P178)rt_nil_check((*F->c_559))).hi_ = (*(P178)rt_nil_check(F->ic_2026)).hi_;
(*(P178)rt_nil_check((*F->c_559))).mlo_ = G_NV((*(P178)rt_nil_check(F->ic_2026)).mlo_);
(*(P178)rt_nil_check((*F->c_559))).mhi_ = G_NV((*(P178)rt_nil_check(F->ic_2026)).mhi_);
(*(P178)rt_nil_check((*F->c_559))).hasm_ = G_NV((*(P178)rt_nil_check(F->ic_2026)).hasm_);
} else if (((*(P178)rt_nil_check(F->ic_2026)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_558))).tcons_ = f_new_cons_484(F->up);
(*(P178)rt_nil_check((*(P122)rt_nil_check((*F->t_558))).tcons_)).lo_ = (*(P178)rt_nil_check(F->ic_2026)).lo_;
}
}
if ((!f_is_discrete_464(F->up, (*(P122)rt_nil_check((*F->t_558))).idx_))) {
f_fail_258(F->up, F->line_557, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P122)rt_nil_check((*F->t_558))).dims_) > ((rt_int)1LL))) {
(*(P178)rt_nil_check((*F->c_559))).inner_ = F->rowc_2025;
if ((((*(P178)rt_nil_check((*F->c_559))).lo_ == NULL) != ((*(P178)rt_nil_check(F->rowc_2025)).lo_ == NULL))) {
(*(P178)rt_nil_check((*F->c_559))).lo_ = NULL;
(*(P178)rt_nil_check((*F->c_559))).hi_ = NULL;
(*(P178)rt_nil_check((*F->c_559))).inner_ = NULL;
(*(P122)rt_nil_check((*F->t_558))).elemcons_ = NULL;
}
}
if (((*(P178)rt_nil_check((*F->c_559))).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_558))).tcons_ = (*F->c_559);
}
ret_:

  return;
}

static void f_static_range_564(struct f_greenc_1fr *up_, P174 l_561, P174 h_562, P178 c_563) {
  struct f_static_range_564fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_561 = l_561;
F->h_562 = h_562;
F->c_563 = c_563;
F->ok_2028 = INT_MIN;
F->ok2_2029 = INT_MIN;
f_manifest_515(F->up, F->l_561, &(*(P178)rt_nil_check(F->c_563)).mlo_, &F->ok_2028);
 (void)rt_range(F->ok_2028, 0, 1);
f_manifest_515(F->up, F->h_562, &(*(P178)rt_nil_check(F->c_563)).mhi_, &F->ok2_2029);
 (void)rt_range(F->ok2_2029, 0, 1);
if ((f_is_char_lit_806(F->up, F->l_561) && f_is_char_lit_806(F->up, F->h_562))) {
(*(P178)rt_nil_check(F->c_563)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2030 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_561)).name_)); ix2030.p[rt_index(((rt_int)1LL), ix2030.lo, ix2030.hi) - ix2030.lo]; }))) + 1), ((rt_int)1LL));
(*(P178)rt_nil_check(F->c_563)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2031 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->h_562)).name_)); ix2031.p[rt_index(((rt_int)1LL), ix2031.lo, ix2031.hi) - ix2031.lo]; }))) + 1), ((rt_int)1LL));
F->ok_2028 = 1;
F->ok2_2029 = 1;
}
(*(P178)rt_nil_check(F->c_563)).hasm_ = (G_NV(F->ok_2028) && G_NV(F->ok2_2029));
ret_:

  return;
}

static void f_component_place_570(struct f_greenc_1fr *up_, P122 rt_565, P1938 f_566, rt_gstr a_567, rt_gstr ct_568, P140 *r_569) {
  struct f_component_place_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_565 = rt_565;
F->f_566 = f_566;
F->a_567 = cp_rt_gstr(a_567);
F->ct_568 = cp_rt_gstr(ct_568);
F->r_569 = r_569;
F->bits_2032 = NULL;
if (eq_rt_gstr(F->a_567, rt_g_lit("POSITION", 8))) {
(*F->r_569) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_568), rt_g_lit(", ", 2)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_566)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_567, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_569) = f_mk_237(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_569) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_568), rt_g_lit(" *)0)->", 7)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_566)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_572(struct f_greenc_1fr *up_, P122 t_571) {
  struct f_no_value_572fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_571 = t_571;
if (((G_NV((*(P122)rt_nil_check(F->t_571)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_571)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P122)rt_nil_check(F->t_571)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_574(struct f_greenc_1fr *up_, P122 t_573) {
  struct f_restricted_here_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_573 = t_573;
if ((!G_NV((*(P122)rt_nil_check(F->t_573)).is_restricted_))) {
F->result_ = 0;
goto ret_;
} else if (((*(P122)rt_nil_check(F->t_573)).view_of_ != NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (!f_inside_package_1070(F->up, (*(P122)rt_nil_check(F->t_573)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_577(struct f_greenc_1fr *up_, P122 t_575, P140 *r_576) {
  struct f_elem_ctype_577fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_575 = t_575;
F->r_576 = r_576;
if ((G_NV((*(P122)rt_nil_check(F->t_575)).kind_) == ((rt_int)11LL))) {
(*F->r_576) = f_mk_237(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_503(F->up, F->t_575, &(*F->r_576));
}
ret_:

  return;
}

static void f_first_index_580(struct f_greenc_1fr *up_, P122 t_578, P140 *r_579) {
  struct f_first_index_580fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_578 = t_578;
F->r_579 = r_579;
if ((((*(P122)rt_nil_check(F->t_578)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_578)).tcons_)).lo_ != NULL))) {
(*F->r_579) = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_578)).tcons_)).lo_;
} else if ((((*(P122)rt_nil_check(F->t_578)).idx_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_578)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_579) = f_mk_237(F->up, rt_g_lit("1", 1));
} else {
(*F->r_579) = f_mk_237(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_582(struct f_greenc_1fr *up_, P122 t_581) {
  struct f_is_string_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_581 = t_581;
if ((!(F->t_581 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P122)rt_nil_check(F->t_581)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_460(F->up, F->t_581, F->up->ty_string_160);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_585(struct f_greenc_1fr *up_, rt_gstr s_583, rt_gstr r_584) {
  struct f_subst_585fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_583 = cp_rt_gstr(s_583);
F->r_584 = cp_rt_gstr(r_584);
{ rt_int lo2037 = ({ rt_gstr at2034 = F->s_583; at2034.lo; }), hi2038 = rt_sub(({ rt_gstr at2035 = F->s_583; at2035.hi; }), ((rt_int)1LL));
for (rt_int it2039 = lo2037; it2039 <= hi2038; it2039++) {
F->i_2036 = it2039;
if (((G_NV(({ rt_gstr ix2040 = F->s_583; ix2040.p[rt_index(F->i_2036, ix2040.lo, ix2040.hi) - ix2040.lo]; })) == 64) && (G_NV(({ rt_gstr ix2041 = F->s_583; ix2041.p[rt_index(rt_add(F->i_2036, ((rt_int)1LL)), ix2041.lo, ix2041.hi) - ix2041.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl2043 = F->s_583; rt_int l_ = ({ rt_gstr at2042 = F->s_583; at2042.lo; }), h_ = rt_sub(F->i_2036, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2043.lo, sl2043.hi); rt_index(h_, sl2043.lo, sl2043.hi); } sl2043.p += l_ - sl2043.lo; sl2043.lo = l_; sl2043.hi = h_; sl2043; }), F->r_584), f_subst_585(F->up, ({ rt_gstr sl2047 = F->s_583; rt_int l_ = rt_add(F->i_2036, ((rt_int)2LL)), h_ = ({ rt_gstr at2046 = F->s_583; at2046.hi; }); if (l_ <= h_) { rt_index(l_, sl2047.lo, sl2047.hi); rt_index(h_, sl2047.lo, sl2047.hi); } sl2047.p += l_ - sl2047.lo; sl2047.lo = l_; sl2047.hi = h_; sl2047; }), F->r_584));
goto ret_;
}
}
}
L_end_2033: ;
F->result_ = F->s_583;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_587(struct f_greenc_1fr *up_, P140 s_586) {
  struct f_mentions_record_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_586 = s_586;
if ((F->s_586 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo2051 = ((rt_int)1LL), hi2052 = rt_sub(({ rt_gstr at2049 = (*(P140)rt_nil_check(F->s_586)); at2049.hi >= at2049.lo ? at2049.hi - at2049.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it2053 = lo2051; it2053 <= hi2052; it2053++) {
F->i_2050 = it2053;
if (((G_NV(({ rt_gstr ix2054 = (*(P140)rt_nil_check(F->s_586)); ix2054.p[rt_index(F->i_2050, ix2054.lo, ix2054.hi) - ix2054.lo]; })) == 64) && (G_NV(({ rt_gstr ix2055 = (*(P140)rt_nil_check(F->s_586)); ix2055.p[rt_index(rt_add(F->i_2050, ((rt_int)1LL)), ix2055.lo, ix2055.hi) - ix2055.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_2048: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_591(struct f_greenc_1fr *up_, P178 c_588, rt_gstr r_589, P178 *res_590) {
  struct f_subst_cons_591fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_588 = c_588;
F->r_589 = cp_rt_gstr(r_589);
F->res_590 = res_590;
if (((F->c_588 == NULL) || (!(f_mentions_record_587(F->up, (*(P178)rt_nil_check(F->c_588)).lo_) || f_mentions_record_587(F->up, (*(P178)rt_nil_check(F->c_588)).hi_))))) {
(*F->res_590) = F->c_588;
goto ret_;
}
(*F->res_590) = f_new_cons_484(F->up);
as_R179(&(*(P178)rt_nil_check((*F->res_590))), (*(P178)rt_nil_check(F->c_588)));
(*(P178)rt_nil_check((*F->res_590))).lo_ = f_mk_237(F->up, f_subst_585(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_588)).lo_)), F->r_589));
(*(P178)rt_nil_check((*F->res_590))).hi_ = f_mk_237(F->up, f_subst_585(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_588)).hi_)), F->r_589));
ret_:

  return;
}

static void f_remove_sym_593(struct f_greenc_1fr *up_, P117 y_592) {
  struct f_remove_sym_593fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_592 = y_592;
F->h_2056 = INT64_MIN;
F->h_2056 = f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_592)).name_)));
F->p_2057 = NULL;
if ((({ A116 ix2058 = F->up->table_119; ix2058.p[rt_index(G_NV(F->h_2056), ix2058.lo, ix2058.hi) - ix2058.lo]; }) == F->y_592)) {
(*({ A116 *ix2059 = &(F->up->table_119); &ix2059->p[rt_index(G_NV(F->h_2056), ix2059->lo, ix2059->hi) - ix2059->lo]; })) = (*(P117)rt_nil_check(F->y_592)).chain_;
} else {
F->p_2057 = ({ A116 ix2060 = F->up->table_119; ix2060.p[rt_index(G_NV(F->h_2056), ix2060.lo, ix2060.hi) - ix2060.lo]; });
while (((F->p_2057 != NULL) && ((*(P117)rt_nil_check(F->p_2057)).chain_ != F->y_592))) {
F->p_2057 = (*(P117)rt_nil_check(F->p_2057)).chain_;
}
L_end_2061: ;
if ((F->p_2057 != NULL)) {
(*(P117)rt_nil_check(F->p_2057)).chain_ = (*(P117)rt_nil_check(F->y_592)).chain_;
}
}
if ((F->up->scope_stack_121 == F->y_592)) {
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->y_592)).stack_;
} else {
F->p_2057 = F->up->scope_stack_121;
while (((F->p_2057 != NULL) && ((*(P117)rt_nil_check(F->p_2057)).stack_ != F->y_592))) {
F->p_2057 = (*(P117)rt_nil_check(F->p_2057)).stack_;
}
L_end_2062: ;
if ((F->p_2057 != NULL)) {
(*(P117)rt_nil_check(F->p_2057)).stack_ = (*(P117)rt_nil_check(F->y_592)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_598(struct f_greenc_1fr *up_, P174 list_594, P122 t_595, P2063 g_596, rt_int line_597) {
  struct f_record_components_598fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_594 = list_594;
F->t_595 = t_595;
F->g_596 = g_596;
F->line_597 = line_597;
F->comp_2065 = NULL;
F->comp_2065 = F->list_594;
F->f_2066 = NULL;
F->tail_2067 = NULL;
F->df_2068 = NULL;
F->prev_2069 = NULL;
F->pt_2070 = NULL;
F->vt_2071 = NULL;
F->pc_2072 = NULL;
F->y_2073 = NULL;
F->acc_2074 = NULL;
F->v_2075 = NULL;
F->x_2076 = NULL;
F->arm_2077 = NULL;
F->g2_2078 = NULL;
F->tail_2067 = (*(P122)rt_nil_check(F->t_595)).fields_;
while (((F->tail_2067 != NULL) && ((*(P1938)rt_nil_check(F->tail_2067)).next_ != NULL))) {
F->tail_2067 = (*(P1938)rt_nil_check(F->tail_2067)).next_;
}
L_end_2079: ;
while ((F->comp_2065 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->comp_2065)).kind_) == ((rt_int)23LL))) {
F->df_2068 = (*(P122)rt_nil_check(F->t_595)).fields_;
while (((F->df_2068 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->df_2068)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2065)).a_)).name_)))))) {
F->df_2068 = (*(P1938)rt_nil_check(F->df_2068)).next_;
}
L_end_2081: ;
if (((F->df_2068 == NULL) || (!G_NV((*(P1938)rt_nil_check(F->df_2068)).is_discr_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2065)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_464(F->up, (*(P1938)rt_nil_check(F->df_2068)).t_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_2077 = (*(P174)rt_nil_check(F->comp_2065)).b_;
while ((F->arm_2077 != NULL)) {
F->g2_2078 = ({ R2064 *cell2083 = rt_alloc(sizeof(R2064)); *cell2083 = cp_R2064(({ R2064 ag2084; ag2084.disc_ = (*(P1938)rt_nil_check(F->df_2068)).name_; ag2084.arm_ = F->arm_2077; ag2084.variant_ = F->comp_2065; ag2084.next_ = F->g_596; ag2084; })); (P2063)cell2083; });
f_record_components_598(F->up, (*(P174)rt_nil_check(F->arm_2077)).b_, F->t_595, F->g2_2078, F->line_597);
F->arm_2077 = (*(P174)rt_nil_check(F->arm_2077)).next_;
}
L_end_2082: ;
F->tail_2067 = (*(P122)rt_nil_check(F->t_595)).fields_;
while (((F->tail_2067 != NULL) && ((*(P1938)rt_nil_check(F->tail_2067)).next_ != NULL))) {
F->tail_2067 = (*(P1938)rt_nil_check(F->tail_2067)).next_;
}
L_end_2085: ;
} else {
if ((f_field_index_996(F->up, F->t_595, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2065)).name_))) != ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2065)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_2066 = ({ R1939 *cell2086 = rt_alloc(sizeof(R1939)); *cell2086 = cp_R1939(({ R1939 ag2087; ag2087.name_ = (*(P174)rt_nil_check(F->comp_2065)).name_; ag2087.t_ = NULL; ag2087.c_ = NULL; ag2087.next_ = NULL; ag2087.dflt_ = (*(P174)rt_nil_check(F->comp_2065)).b_; ag2087.is_const_ = (G_NV((*(P174)rt_nil_check(F->comp_2065)).flag_) == ((rt_int)1LL)); ag2087.is_discr_ = 0; ag2087.dsym_ = NULL; ag2087.guard_ = F->g_596; ag2087.cond_ = NULL; ag2087.dyn_ = 0; ag2087; })); (P1938)cell2086; });
if ((((*(P174)rt_nil_check(F->comp_2065)).a_ == F->prev_2069) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2065)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1938)rt_nil_check(F->f_2066)).t_ = F->pt_2070;
(*(P1938)rt_nil_check(F->f_2066)).c_ = F->pc_2072;
} else {
f_resolve_519(F->up, (*(P174)rt_nil_check(F->comp_2065)).a_, &(*(P1938)rt_nil_check(F->f_2066)).t_, &(*(P1938)rt_nil_check(F->f_2066)).c_);
}
F->prev_2069 = (*(P174)rt_nil_check(F->comp_2065)).a_;
F->pt_2070 = (*(P1938)rt_nil_check(F->f_2066)).t_;
F->pc_2072 = (*(P1938)rt_nil_check(F->f_2066)).c_;
if ((((*(P1938)rt_nil_check(F->f_2066)).c_ != NULL) && (f_mentions_record_587(F->up, (*(P178)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).c_)).lo_) || f_mentions_record_587(F->up, (*(P178)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).c_)).hi_)))) {
(*(P1938)rt_nil_check(F->f_2066)).dyn_ = 1;
if ((G_NV((*(P122)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P122)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).t_)).tcons_ == (*(P1938)rt_nil_check(F->f_2066)).c_)) {
(*(P122)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).t_)).tcons_ = NULL;
}
}
if ((F->g_596 != NULL)) {
f_guard_cond_602(F->up, F->g_596, (*(P1938)rt_nil_check(F->f_2066)).t_, &F->x_2076);
(*(P1938)rt_nil_check(F->f_2066)).cond_ = F->x_2076;
}
if (((*(P174)rt_nil_check(F->comp_2065)).b_ != NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->comp_2065)).b_, (*(P1938)rt_nil_check(F->f_2066)).t_, &F->vt_2071, &F->v_2075);
f_check_type_498(F->up, F->vt_2071, (*(P1938)rt_nil_check(F->f_2066)).t_, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_));
F->y_2073 = f_new_sym_481(F->up, ((rt_int)2LL), f_mk_237(F->up, rt_g_lit("dflt", 4)));
f_storage_650(F->up, rt_g_lit("dflt", 4), (*(P1938)rt_nil_check(F->f_2066)).t_, &F->acc_2074);
(*(P117)rt_nil_check(F->y_2073)).t_ = (*(P1938)rt_nil_check(F->f_2066)).t_;
(*(P117)rt_nil_check(F->y_2073)).c_ = (*(P1938)rt_nil_check(F->f_2066)).c_;
f_bind_653(F->up, F->y_2073, F->acc_2074);
if ((f_composite_625(F->up, (*(P1938)rt_nil_check(F->f_2066)).t_) && (!f_bounded_486(F->up, (*(P1938)rt_nil_check(F->f_2066)).c_)))) {
f_copy_code_635(F->up, (*(P1938)rt_nil_check(F->f_2066)).t_, (*(P140)rt_nil_check(F->v_2075)), &F->x_2076);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2074)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2076))), one_rt_gstr(59)));
} else {
f_init_storage_623(F->up, (*(P140)rt_nil_check(F->acc_2074)), (*(P1938)rt_nil_check(F->f_2066)).t_, (*(P1938)rt_nil_check(F->f_2066)).c_);
f_assign_code_631(F->up, (*(P140)rt_nil_check(F->acc_2074)), (*(P1938)rt_nil_check(F->f_2066)).t_, (*(P140)rt_nil_check(F->v_2075)), (*(P1938)rt_nil_check(F->f_2066)).c_, &F->x_2076);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2076)));
}
(*(P1938)rt_nil_check(F->f_2066)).dsym_ = F->y_2073;
} else if (G_NV((*(P1938)rt_nil_check(F->f_2066)).is_const_)) {
(*(P1938)rt_nil_check(F->f_2066)).is_discr_ = 1;
F->y_2073 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P1938)rt_nil_check(F->f_2066)).name_);
(*(P117)rt_nil_check(F->y_2073)).t_ = (*(P1938)rt_nil_check(F->f_2066)).t_;
(*(P117)rt_nil_check(F->y_2073)).c_ = (*(P1938)rt_nil_check(F->f_2066)).c_;
(*(P117)rt_nil_check(F->y_2073)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2073)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2066)).name_)))), one_rt_gstr(41)));
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
f_define_476(F->up, F->y_2073, G_NV((*(P174)rt_nil_check(F->comp_2065)).line_));
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
(*(P117)rt_nil_check(F->y_2073)).mnext_ = F->up->disc_syms_182;
F->up->disc_syms_182 = F->y_2073;
}
if ((F->tail_2067 == NULL)) {
(*(P122)rt_nil_check(F->t_595)).fields_ = F->f_2066;
} else {
(*(P1938)rt_nil_check(F->tail_2067)).next_ = F->f_2066;
}
F->tail_2067 = F->f_2066;
}
F->comp_2065 = (*(P174)rt_nil_check(F->comp_2065)).next_;
}
L_end_2080: ;
ret_:

  return;
}

static void f_guard_cond_602(struct f_greenc_1fr *up_, P2063 g_599, P122 t_600, P140 *r_601) {
  struct f_guard_cond_602fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_599 = g_599;
F->t_600 = t_600;
F->r_601 = r_601;
F->a_2088 = NULL;
F->l_2089 = NULL;
F->df_2090 = NULL;
F->x_2091 = NULL;
F->d_2092 = NULL;
F->dt_2093 = NULL;
F->vt_2094 = NULL;
F->lo_2095 = NULL;
F->hi_2096 = NULL;
(*F->r_601) = f_mk_237(F->up, rt_g_lit("1", 1));
if ((F->g_599 == NULL)) {
goto ret_;
}
F->d_2092 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P2063)rt_nil_check(F->g_599)).disc_)))), one_rt_gstr(41)));
F->df_2090 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P2063)rt_nil_check(F->g_599)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_2091 = f_mk_237(F->up, rt_g_lit("0", 1));
F->a_2088 = (*(P174)rt_nil_check((*(P2063)rt_nil_check(F->g_599)).variant_)).b_;
while ((F->a_2088 != NULL)) {
if ((F->a_2088 != (*(P2063)rt_nil_check(F->g_599)).arm_)) {
f_arm_test_607(F->up, F->a_2088, (*(P2063)rt_nil_check(F->g_599)).disc_, (*(P140)rt_nil_check(F->d_2092)), &F->x_2091);
}
F->a_2088 = (*(P174)rt_nil_check(F->a_2088)).next_;
}
L_end_2097: ;
F->x_2091 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P140)rt_nil_check(F->x_2091))), one_rt_gstr(41)));
} else {
F->x_2091 = f_mk_237(F->up, rt_g_lit("0", 1));
f_arm_test_607(F->up, (*(P2063)rt_nil_check(F->g_599)).arm_, (*(P2063)rt_nil_check(F->g_599)).disc_, (*(P140)rt_nil_check(F->d_2092)), &F->x_2091);
}
f_guard_cond_602(F->up, (*(P2063)rt_nil_check(F->g_599)).next_, F->t_600, &(*F->r_601));
(*F->r_601) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*F->r_601)))), rt_g_lit(" && (", 5)), (*(P140)rt_nil_check(F->x_2091))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_607(struct f_greenc_1fr *up_, P174 arm_603, P140 dname_604, rt_gstr d_605, P140 *x_606) {
  struct f_arm_test_607fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_603 = arm_603;
F->dname_604 = dname_604;
F->d_605 = cp_rt_gstr(d_605);
F->x_606 = x_606;
F->l_2098 = NULL;
F->l_2098 = (*(P174)rt_nil_check(F->arm_603)).a_;
F->y_2099 = NULL;
F->y_2099 = f_lookup_433(F->up, (*(P140)rt_nil_check(F->dname_604)));
F->dt_2100 = NULL;
F->vt_2101 = NULL;
F->lo_2102 = NULL;
F->hi_2103 = NULL;
F->dt_2100 = (*(P117)rt_nil_check(F->y_2099)).t_;
while ((F->l_2098 != NULL)) {
if (((*(P174)rt_nil_check(F->l_2098)).b_ == NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->l_2098)).a_, F->dt_2100, &F->vt_2101, &F->lo_2102);
f_check_type_498(F->up, F->vt_2101, F->dt_2100, G_NV((*(P174)rt_nil_check(F->l_2098)).line_));
(*F->x_606) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_606))), rt_g_lit(" || ", 4)), F->d_605), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->lo_2102))));
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->l_2098)).a_, F->dt_2100, &F->vt_2101, &F->lo_2102);
f_check_type_498(F->up, F->vt_2101, F->dt_2100, G_NV((*(P174)rt_nil_check(F->l_2098)).line_));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->l_2098)).b_, F->dt_2100, &F->vt_2101, &F->hi_2103);
f_check_type_498(F->up, F->vt_2101, F->dt_2100, G_NV((*(P174)rt_nil_check(F->l_2098)).line_));
(*F->x_606) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_606))), rt_g_lit(" || (", 5)), F->d_605), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2102))), rt_g_lit(" && ", 4)), F->d_605), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2103))), one_rt_gstr(41)));
}
F->l_2098 = (*(P174)rt_nil_check(F->l_2098)).next_;
}
L_end_2104: ;
ret_:

  return;
}

static void f_derived_type_612(struct f_greenc_1fr *up_, P174 d_608, P140 name_609, P122 *t_610, P178 *c_611) {
  struct f_derived_type_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_608 = d_608;
F->name_609 = name_609;
F->t_610 = t_610;
F->c_611 = c_611;
F->pt_2105 = NULL;
F->ct_2106 = NULL;
F->ph_2107 = NULL;
F->ph_2107 = F->up->completing_173;
F->up->completing_173 = NULL;
f_resolve_519(F->up, (*(P174)rt_nil_check(F->d_608)).a_, &F->pt_2105, &(*F->c_611));
if (((G_NV((*(P122)rt_nil_check(F->pt_2105)).kind_) == ((rt_int)9LL)) && G_NV((*(P122)rt_nil_check(F->pt_2105)).priv_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_608)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_625(F->up, F->pt_2105) || (G_NV((*(P122)rt_nil_check(F->pt_2105)).kind_) == ((rt_int)8LL)))) {
f_ctype_503(F->up, F->pt_2105, &F->ct_2106);
}
if ((F->ph_2107 == NULL)) {
(*F->t_610) = f_new_typ_483(F->up, G_NV((*(P122)rt_nil_check(F->pt_2105)).kind_));
} else {
(*F->t_610) = F->ph_2107;
}
as_R123(&(*(P122)rt_nil_check((*F->t_610))), (*(P122)rt_nil_check(F->pt_2105)));
(*(P122)rt_nil_check((*F->t_610))).name_ = F->name_609;
(*(P122)rt_nil_check((*F->t_610))).parent_ = F->pt_2105;
(*(P122)rt_nil_check((*F->t_610))).next_ = NULL;
if ((G_NV((*(P122)rt_nil_check((*F->t_610))).kind_) == ((rt_int)4LL))) {
f_derive_literals_548(F->up, (*F->t_610), G_NV((*(P174)rt_nil_check(F->d_608)).line_));
}
f_inherit_545(F->up, F->pt_2105, (*F->t_610), G_NV((*(P174)rt_nil_check(F->d_608)).line_));
ret_:

  return;
}

static void f_real_type_617(struct f_greenc_1fr *up_, P174 d_613, P140 name_614, P122 *t_615, P178 *c_616) {
  struct f_real_type_617fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_613 = d_613;
F->name_614 = name_614;
F->t_615 = t_615;
F->c_616 = c_616;
F->dt_2108 = NULL;
F->dv_2109 = NULL;
F->n_2110 = INT64_MIN;
F->ok_2111 = INT_MIN;
(*F->c_616) = f_new_cons_484(F->up);
if ((G_NV((*(P174)rt_nil_check(F->d_613)).flag_) == ((rt_int)1LL))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->d_613)).a_, &F->n_2110, &F->ok_2111);
 (void)rt_range(F->ok_2111, 0, 1);
if ((!G_NV(F->ok_2111))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_613)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2110) < ((rt_int)1LL)) || (G_NV(F->n_2110) > ((rt_int)15LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_613)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2110)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_541(F->up, ((rt_int)3LL), F->name_614, &(*F->t_615));
(*(P122)rt_nil_check((*F->t_615))).ndigits_ = G_NV(F->n_2110);
if ((G_NV(F->n_2110) <= ((rt_int)6LL))) {
(*(P122)rt_nil_check((*F->t_615))).parent_ = F->up->ty_sfloat_169;
} else {
(*(P122)rt_nil_check((*F->t_615))).parent_ = F->up->ty_float_158;
}
} else {
if (((*(P174)rt_nil_check(F->d_613)).b_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_613)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->d_613)).a_, F->up->ty_float_158, &F->dt_2108, &F->dv_2109);
if ((G_NV((*(P122)rt_nil_check(F->dt_2108)).kind_) != ((rt_int)3LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_613)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_541(F->up, ((rt_int)16LL), F->name_614, &(*F->t_615));
(*(P122)rt_nil_check((*F->t_615))).fdelta_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->dv_2109))), one_rt_gstr(41)));
(*(P122)rt_nil_check((*F->t_615))).fsmall_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P140)rt_nil_check(F->dv_2109))), one_rt_gstr(41)));
}
if (((*(P174)rt_nil_check(F->d_613)).b_ != NULL)) {
f_range_of_537(F->up, (*(P174)rt_nil_check(F->d_613)).b_, (*F->t_615), (*F->c_616));
}
if (((*(P122)rt_nil_check((*F->t_615))).parent_ != NULL)) {
f_inherit_545(F->up, (*(P122)rt_nil_check((*F->t_615))).parent_, (*F->t_615), G_NV((*(P174)rt_nil_check(F->d_613)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_619(struct f_greenc_1fr *up_, P122 t_618) {
  struct f_finish_ptr_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_618 = t_618;
F->c_2112 = NULL;
if ((((*(P122)rt_nil_check(F->t_618)).target_ == NULL) && ((*(P122)rt_nil_check(F->t_618)).decl_ != NULL))) {
f_resolve_519(F->up, (*(P122)rt_nil_check(F->t_618)).decl_, &(*(P122)rt_nil_check(F->t_618)).target_, &F->c_2112);
if ((((*(P122)rt_nil_check(F->t_618)).target_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_618)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check((*(P122)rt_nil_check(F->t_618)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_623(struct f_greenc_1fr *up_, rt_gstr lval_620, P122 t_621, P178 c_622) {
  struct f_init_storage_623fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_620 = cp_rt_gstr(lval_620);
F->t_621 = t_621;
F->c_622 = c_622;
F->ec_2113 = NULL;
F->fc_2114 = NULL;
F->d_2115 = NULL;
F->ct_2116 = NULL;
F->i_2117 = NULL;
F->v_2118 = NULL;
F->x_2119 = NULL;
F->vt_2120 = NULL;
F->f_2121 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_621)).kind_) == ((rt_int)8LL))) {
f_emit_264(F->up, cat_rt_gstr(F->lval_620, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_462(F->up, F->t_621) || f_is_discrete_464(F->up, F->t_621))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(" = ", 3)), f_no_value_572(F->up, F->t_621)), one_rt_gstr(59)));
} else if ((G_NV((*(P122)rt_nil_check(F->t_621)).kind_) == ((rt_int)6LL))) {
if (((F->c_622 == NULL) || ((*(P178)rt_nil_check(F->c_622)).lo_ == NULL))) {
f_fail_258(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_621)).elem_, &F->ct_2116);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_622)).lo_))), rt_g_lit("; ", 2)), F->lval_620), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_622)).hi_))), one_rt_gstr(59)));
F->ec_2113 = (*(P122)rt_nil_check(F->t_621)).elemcons_;
if (((G_NV((*(P122)rt_nil_check(F->t_621)).dims_) > ((rt_int)1LL)) && f_bounded_486(F->up, (*(P178)rt_nil_check(F->c_622)).inner_))) {
F->ec_2113 = (*(P178)rt_nil_check(F->c_622)).inner_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_621)).dims_) > ((rt_int)1LL)) && f_bounded_486(F->up, F->ec_2113))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2113)).lo_))), rt_g_lit("; ", 2)), F->lval_620), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2113)).hi_))), one_rt_gstr(59)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(".lo2 = 1; ", 10)), F->lval_620), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->ct_2116))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_620), rt_g_lit("));", 3)));
if ((f_is_numeric_462(F->up, (*(P122)rt_nil_check(F->t_621)).elem_) || f_is_discrete_464(F->up, (*(P122)rt_nil_check(F->t_621)).elem_))) {
f_new_name_240(F->up, rt_g_lit("i", 1), &F->i_2117);
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_621)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_620), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_620), rt_g_lit("));", 3)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit(" < G_CNT(", 9)), F->lval_620), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit("++) ", 4)), F->lval_620), rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit("] = ", 4)), f_no_value_572(F->up, (*(P122)rt_nil_check(F->t_621)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_621)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_621)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_240(F->up, rt_g_lit("i", 1), &F->i_2117);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit(" < G_CNT(", 9)), F->lval_620), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2117))), rt_g_lit("++) {", 5)));
f_init_storage_623(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2117))), one_rt_gstr(93)), (*(P122)rt_nil_check(F->t_621)).elem_, F->ec_2113);
f_emit_264(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_621)).kind_) == ((rt_int)7LL))) {
if ((F->c_622 != NULL)) {
F->d_2115 = (*(P178)rt_nil_check(F->c_622)).dv_;
while ((F->d_2115 != NULL)) {
F->f_2121 = (*(P122)rt_nil_check(F->t_621)).fields_;
while ((!eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)), (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2115)).name_))))) {
F->f_2121 = (*(P1938)rt_nil_check(F->f_2121)).next_;
}
L_end_2123: ;
f_assign_code_631(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_620, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), (*(P1938)rt_nil_check(F->f_2121)).t_, (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2115)).v_)), (*(P1938)rt_nil_check(F->f_2121)).c_, &F->x_2119);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2119)));
F->d_2115 = (*(P1942)rt_nil_check(F->d_2115)).next_;
}
L_end_2122: ;
}
F->f_2121 = (*(P122)rt_nil_check(F->t_621)).fields_;
while ((F->f_2121 != NULL)) {
f_subst_cons_591(F->up, (*(P1938)rt_nil_check(F->f_2121)).c_, F->lval_620, &F->fc_2114);
if ((G_NV((*(P1938)rt_nil_check(F->f_2121)).dyn_) && (!f_discriminated_492(F->up, F->c_622)))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_620, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_620), one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_620), one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_620), one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_620), one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1938)rt_nil_check(F->f_2121)).is_discr_))) {
f_init_storage_623(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_620, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), (*(P1938)rt_nil_check(F->f_2121)).t_, F->fc_2114);
}
if (((*(P1938)rt_nil_check(F->f_2121)).dsym_ != NULL)) {
f_access_of_762(F->up, (*(P1938)rt_nil_check(F->f_2121)).dsym_, &F->v_2118);
f_assign_code_631(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_620, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2121)).name_)))), (*(P1938)rt_nil_check(F->f_2121)).t_, (*(P140)rt_nil_check(F->v_2118)), F->fc_2114, &F->x_2119);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2119)));
}
F->f_2121 = (*(P1938)rt_nil_check(F->f_2121)).next_;
}
L_end_2124: ;
}
ret_:

  return;
}

static int f_composite_625(struct f_greenc_1fr *up_, P122 t_624) {
  struct f_composite_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_624 = t_624;
F->result_ = ((G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check(F->t_624)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_631(struct f_greenc_1fr *up_, rt_gstr lval_626, P122 t_627, rt_gstr v_628, P178 c_629, P140 *r_630) {
  struct f_assign_code_631fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_626 = cp_rt_gstr(lval_626);
F->t_627 = t_627;
F->v_628 = cp_rt_gstr(v_628);
F->c_629 = c_629;
F->r_630 = r_630;
F->ct_2125 = NULL;
F->x_2126 = NULL;
F->d_2127 = NULL;
if (((G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)7LL)) && f_discriminated_492(F->up, F->c_629))) {
f_ctype_503(F->up, F->t_627, &F->ct_2125);
F->x_2126 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2125))), rt_g_lit(" dv_ = ", 7)), F->v_628), one_rt_gstr(59)));
F->d_2127 = (*(P178)rt_nil_check(F->c_629)).dv_;
while ((F->d_2127 != NULL)) {
F->x_2126 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2126)), rt_g_lit(" if (dv_.", 9)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2127)).name_)))), rt_g_lit(" != (", 5)), (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2127)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2127 = (*(P1942)rt_nil_check(F->d_2127)).next_;
}
L_end_2128: ;
(*F->r_630) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2126)), rt_g_lit(" as_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_627)).cname_))), rt_g_lit("(&", 2)), F->lval_626), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_625(F->up, F->t_627)) {
f_ctype_503(F->up, F->t_627, &F->ct_2125);
(*F->r_630) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_627)).cname_))), rt_g_lit("(&", 2)), F->lval_626), rt_g_lit(", ", 2)), F->v_628), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)11LL))) && f_bounded_486(F->up, F->c_629))) {
(*F->r_630) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_626, rt_g_lit(" = rt_range(", 12)), F->v_628), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_629)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_629)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_627)).kind_) == ((rt_int)16LL))) && f_bounded_486(F->up, F->c_629))) {
(*F->r_630) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_626, rt_g_lit(" = rt_frange(", 13)), F->v_628), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_629)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_629)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_630) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_626, rt_g_lit(" = ", 3)), F->v_628), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_635(struct f_greenc_1fr *up_, P122 t_632, rt_gstr v_633, P140 *r_634) {
  struct f_copy_code_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_632 = t_632;
F->v_633 = cp_rt_gstr(v_633);
F->r_634 = r_634;
F->ct_2129 = NULL;
if (f_composite_625(F->up, F->t_632)) {
f_ctype_503(F->up, F->t_632, &F->ct_2129);
(*F->r_634) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_632)).cname_))), one_rt_gstr(40)), F->v_633), one_rt_gstr(41)));
} else {
(*F->r_634) = f_mk_237(F->up, F->v_633);
}
ret_:

  return;
}

static void f_eq_code_640(struct f_greenc_1fr *up_, P122 t_636, rt_gstr a_637, rt_gstr b_638, P140 *r_639) {
  struct f_eq_code_640fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_636 = t_636;
F->a_637 = cp_rt_gstr(a_637);
F->b_638 = cp_rt_gstr(b_638);
F->r_639 = r_639;
F->ct_2130 = NULL;
if (f_composite_625(F->up, F->t_636)) {
f_ctype_503(F->up, F->t_636, &F->ct_2130);
(*F->r_639) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_636)).cname_))), one_rt_gstr(40)), F->a_637), rt_g_lit(", ", 2)), F->b_638), one_rt_gstr(41)));
} else {
(*F->r_639) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_637), rt_g_lit(" == ", 4)), F->b_638), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_643(struct f_greenc_1fr *up_, P151 l_641, rt_gstr s_642) {
  struct f_seen_name_643fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_641 = l_641;
F->s_642 = cp_rt_gstr(s_642);
F->p_2131 = NULL;
F->p_2131 = F->l_641;
while ((F->p_2131 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->p_2131)).s_)), F->s_642)) {
F->result_ = 1;
goto ret_;
}
F->p_2131 = (*(P151)rt_nil_check(F->p_2131)).next_;
}
L_end_2132: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_644(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_644fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2133 = NULL;
F->t_2133 = F->up->all_types_124;
F->et_2134 = NULL;
F->done_2135 = NULL;
F->l_2136 = NULL;
while ((F->t_2133 != NULL)) {
if ((f_composite_625(F->up, F->t_2133) && (!f_seen_name_643(F->up, F->done_2135, (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_)))))) {
F->l_2136 = ({ R152 *cell2138 = rt_alloc(sizeof(R152)); *cell2138 = cp_R152(({ R152 ag2139; ag2139.s_ = (*(P122)rt_nil_check(F->t_2133)).cname_; ag2139.next_ = F->done_2135; ag2139; })); (P151)cell2138; });
F->done_2135 = F->l_2136;
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P122)rt_nil_check(F->t_2133)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->t_2133)).dims_) == ((rt_int)1LL)))) {
f_ctype_503(F->up, (*(P122)rt_nil_check(F->t_2133)).elem_, &F->et_2134);
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2134))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_262(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2133)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_646(F->up, F->t_2133);
}
F->t_2133 = (*(P122)rt_nil_check(F->t_2133)).next_;
}
L_end_2137: ;
ret_:

  return;
}

static void f_helper_bodies_646(struct f_greenc_1fr *up_, P122 t_645) {
  struct f_helper_bodies_646fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_645 = t_645;
F->c_2140 = NULL;
F->c_2140 = (*(P122)rt_nil_check(F->t_645)).cname_;
F->b_2141 = NULL;
F->b_2141 = F->up->out_funcs_133;
F->ct_2142 = NULL;
F->et_2143 = NULL;
F->x_2144 = NULL;
F->y_2145 = NULL;
F->conds_2146 = NULL;
F->f_2147 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_645)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, &F->ct_2142);
f_assign_code_631(F->up, rt_g_lit("d->p[i]", 7), (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2144);
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" s) {", 5)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit(");", 2)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P140)rt_nil_check(F->x_2144))), rt_g_lit(" }", 2)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2144);
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" s) {", 5)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P140)rt_nil_check(F->ct_2142))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P140)rt_nil_check(F->x_2144))), one_rt_gstr(59)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  return d;", 11));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
f_eq_code_640(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2144);
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) {", 5)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P140)rt_nil_check(F->x_2144))), rt_g_lit(")) return 0;", 12)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  return 1;", 11));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
if (((G_NV((*(P122)rt_nil_check(F->t_645)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_645)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a) { ", 6)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P122)rt_nil_check(F->t_645)).dims_) == ((rt_int)1LL))) {
f_ctype_503(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, &F->et_2143);
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2144);
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2145);
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) {", 5)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2142))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P140)rt_nil_check(F->x_2144))), one_rt_gstr(59)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P140)rt_nil_check(F->y_2145))), one_rt_gstr(59)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  return r;", 11));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->t_645)).elem_, rt_g_lit("e", 1), &F->x_2144);
f_first_index_580(F->up, F->t_645, &F->y_2145);
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2143))), rt_g_lit(" e) {", 5)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P140)rt_nil_check(F->y_2145))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2142))), rt_g_lit(")); r.p[0] = ", 13)), (*(P140)rt_nil_check(F->x_2144))), one_rt_gstr(59)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("  return r;", 11));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
}
} else {
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" s) {", 5)));
F->f_2147 = (*(P122)rt_nil_check(F->t_645)).fields_;
while ((F->f_2147 != NULL)) {
if ((G_NV((*(P1938)rt_nil_check(F->f_2147)).dyn_) || ((*(P1938)rt_nil_check(F->f_2147)).cond_ != NULL))) {
f_copy_code_635(F->up, (*(P1938)rt_nil_check(F->f_2147)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), &F->x_2144);
F->x_2144 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2144))), one_rt_gstr(59)));
if (((*(P1938)rt_nil_check(F->f_2147)).cond_ != NULL)) {
F->x_2144 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_585(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2144))));
}
} else {
f_assign_code_631(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), (*(P1938)rt_nil_check(F->f_2147)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), NULL, &F->x_2144);
}
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2144))));
F->f_2147 = (*(P1938)rt_nil_check(F->f_2147)).next_;
}
L_end_2148: ;
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" s) {", 5)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" d = s;", 7)));
F->conds_2146 = f_mk_237(F->up, rt_g_lit("1", 1));
F->f_2147 = (*(P122)rt_nil_check(F->t_645)).fields_;
while ((F->f_2147 != NULL)) {
f_copy_code_635(F->up, (*(P1938)rt_nil_check(F->f_2147)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), &F->x_2144);
F->x_2144 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2144))), one_rt_gstr(59)));
f_eq_code_640(F->up, (*(P1938)rt_nil_check(F->f_2147)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).name_)))), &F->y_2145);
if (((*(P1938)rt_nil_check(F->f_2147)).cond_ != NULL)) {
F->x_2144 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_585(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2144))));
F->y_2145 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_585(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2147)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P140)rt_nil_check(F->y_2145))), one_rt_gstr(41)));
}
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2144))));
F->conds_2146 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2146)), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->y_2145))));
F->f_2147 = (*(P1938)rt_nil_check(F->f_2147)).next_;
}
L_end_2149: ;
f_put_to_262(F->up, F->b_2141, rt_g_lit("  return d;", 11));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2140))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2140))), rt_g_lit(" b) {", 5)));
f_put_to_262(F->up, F->b_2141, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P140)rt_nil_check(F->conds_2146))), one_rt_gstr(59)));
f_put_to_262(F->up, F->b_2141, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_650(struct f_greenc_1fr *up_, rt_gstr name_647, P122 t_648, P140 *access_code_649) {
  struct f_storage_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_647 = cp_rt_gstr(name_647);
F->t_648 = t_648;
F->access_code_649 = access_code_649;
F->ct_2150 = NULL;
F->g_2151 = NULL;
f_ctype_503(F->up, F->t_648, &F->ct_2150);
if ((!G_NV(F->up->in_func_138))) {
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_248(F->up, F->name_647)), one_rt_gstr(95)), &F->g_2151);
f_put_to_262(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2150))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2151))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2151;
(*F->access_code_649) = F->g_2151;
} else {
f_new_name_240(F->up, cat_rt_gstr(f_lower_s_248(F->up, F->name_647), one_rt_gstr(95)), &F->g_2151);
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2150))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2151))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2151;
(*F->access_code_649) = f_mk_237(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->g_2151))));
}
ret_:

  return;
}

static void f_bind_653(struct f_greenc_1fr *up_, P117 y_651, P140 access_code_652) {
  struct f_bind_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_651 = y_651;
F->access_code_652 = access_code_652;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_651)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_651)).access_path_ = F->up->st_field_141;
} else {
(*(P117)rt_nil_check(F->y_651)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_651)).access_path_ = F->access_code_652;
}
ret_:

  return;
}

static void f_declare_subprograms_655(struct f_greenc_1fr *up_, P174 from_654) {
  struct f_declare_subprograms_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_654 = from_654;
F->e_2152 = NULL;
F->e_2152 = F->from_654;
while ((F->e_2152 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2152)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2152)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_2152)).ival_) == ((rt_int)0LL)) || (G_NV((*(P174)rt_nil_check(F->e_2152)).ival_) == ((rt_int)3LL))))) {
if ((!f_generic_before_658(F->up, F->from_654, F->e_2152))) {
f_declare_one_660(F->up, F->e_2152);
}
}
F->e_2152 = (*(P174)rt_nil_check(F->e_2152)).next_;
}
L_end_2153: ;
ret_:

  return;
}

static int f_generic_before_658(struct f_greenc_1fr *up_, P174 from_656, P174 e_657) {
  struct f_generic_before_658fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_656 = from_656;
F->e_657 = e_657;
F->p_2154 = NULL;
F->p_2154 = F->from_656;
while (((F->p_2154 != NULL) && (F->p_2154 != F->e_657))) {
if (((G_NV((*(P174)rt_nil_check(F->p_2154)).kind_) == ((rt_int)54LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2154)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_657)).name_))))) {
F->result_ = 1;
goto ret_;
}
F->p_2154 = (*(P174)rt_nil_check(F->p_2154)).next_;
}
L_end_2155: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_declare_one_660(struct f_greenc_1fr *up_, P174 e_659) {
  struct f_declare_one_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_659 = e_659;
F->y_2156 = NULL;
F->z_2157 = NULL;
if (f_is_generic_name_1276(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_659)).name_)))) {
goto ret_;
}
f_build_subprogram_665(F->up, F->e_659, &F->y_2156);
F->z_2157 = ({ A116 ix2158 = F->up->table_119; ix2158.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2156)).name_))), ix2158.lo, ix2158.hi) - ix2158.lo]; });
while ((F->z_2157 != NULL)) {
if (((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2157)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2156)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2157)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2157)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2157)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2157)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->z_2157)).depth_) == G_NV(F->up->depth_120))) && f_same_signature_470(F->up, (*(P117)rt_nil_check(F->z_2157)).params_, (*(P117)rt_nil_check(F->y_2156)).params_)) && f_same_453(F->up, (*(P117)rt_nil_check(F->z_2157)).result_, (*(P117)rt_nil_check(F->y_2156)).result_))) {
(*(P117)rt_nil_check(F->z_2157)).decl_ = F->e_659;
goto ret_;
}
F->z_2157 = (*(P117)rt_nil_check(F->z_2157)).chain_;
}
L_end_2159: ;
if ((F->up->cur_task_211 != NULL)) {
F->z_2157 = (*(P117)rt_nil_check(F->up->cur_task_211)).members_;
while ((F->z_2157 != NULL)) {
if ((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2157)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2156)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2157)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2157)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2157)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2157)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_470(F->up, (*(P117)rt_nil_check(F->z_2157)).params_, (*(P117)rt_nil_check(F->y_2156)).params_)) && f_same_453(F->up, (*(P117)rt_nil_check(F->z_2157)).result_, (*(P117)rt_nil_check(F->y_2156)).result_))) {
(*(P117)rt_nil_check(F->y_2156)).cname_ = (*(P117)rt_nil_check(F->z_2157)).cname_;
(*(P117)rt_nil_check(F->z_2157)).decl_ = F->e_659;
goto L_end_2160;
}
F->z_2157 = (*(P117)rt_nil_check(F->z_2157)).mnext_;
}
L_end_2160: ;
}
f_define_476(F->up, F->y_2156, G_NV((*(P174)rt_nil_check(F->e_659)).line_));
f_elaborate_defaults_662(F->up, F->y_2156);
ret_:

  return;
}

static void f_elaborate_defaults_662(struct f_greenc_1fr *up_, P117 y_661) {
  struct f_elaborate_defaults_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_661 = y_661;
F->pm_2161 = NULL;
F->pm_2161 = (*(P117)rt_nil_check(F->y_661)).params_;
F->vt_2162 = NULL;
F->v_2163 = NULL;
F->acc_2164 = NULL;
F->x_2165 = NULL;
F->z_2166 = NULL;
while ((F->pm_2161 != NULL)) {
if (((*(P1920)rt_nil_check(F->pm_2161)).dflt_ != NULL)) {
if ((G_NV((*(P1920)rt_nil_check(F->pm_2161)).mode_) != ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check((*(P1920)rt_nil_check(F->pm_2161)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_825(F->up, (*(P1920)rt_nil_check(F->pm_2161)).dflt_, (*(P1920)rt_nil_check(F->pm_2161)).t_, &F->vt_2162, &F->v_2163);
f_check_type_498(F->up, F->vt_2162, (*(P1920)rt_nil_check(F->pm_2161)).t_, G_NV((*(P174)rt_nil_check((*(P1920)rt_nil_check(F->pm_2161)).dflt_)).line_));
F->z_2166 = f_new_sym_481(F->up, ((rt_int)2LL), f_mk_237(F->up, rt_g_lit("dflt", 4)));
f_storage_650(F->up, rt_g_lit("dflt", 4), (*(P1920)rt_nil_check(F->pm_2161)).t_, &F->acc_2164);
(*(P117)rt_nil_check(F->z_2166)).t_ = (*(P1920)rt_nil_check(F->pm_2161)).t_;
(*(P117)rt_nil_check(F->z_2166)).c_ = (*(P1920)rt_nil_check(F->pm_2161)).c_;
f_bind_653(F->up, F->z_2166, F->acc_2164);
f_copy_code_635(F->up, (*(P1920)rt_nil_check(F->pm_2161)).t_, (*(P140)rt_nil_check(F->v_2163)), &F->x_2165);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2164)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2165))), one_rt_gstr(59)));
(*(P1920)rt_nil_check(F->pm_2161)).dsym_ = F->z_2166;
}
F->pm_2161 = (*(P1920)rt_nil_check(F->pm_2161)).next_;
}
L_end_2167: ;
ret_:

  return;
}

static void f_build_subprogram_665(struct f_greenc_1fr *up_, P174 d_663, P117 *y_664) {
  struct f_build_subprogram_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_663 = d_663;
F->y_664 = y_664;
F->p_2168 = NULL;
F->p_2168 = (*(P174)rt_nil_check(F->d_663)).a_;
F->pm_2169 = NULL;
F->tail_2170 = NULL;
F->rc_2171 = NULL;
F->k_2172 = INT64_MIN;
F->k_2172 = ((rt_int)4LL);
if ((G_NV((*(P174)rt_nil_check(F->d_663)).kind_) == ((rt_int)45LL))) {
F->k_2172 = ((rt_int)3LL);
}
(*F->y_664) = f_new_sym_481(F->up, G_NV(F->k_2172), (*(P174)rt_nil_check(F->d_663)).name_);
while ((F->p_2168 != NULL)) {
F->pm_2169 = ({ R1921 *cell2174 = rt_alloc(sizeof(R1921)); *cell2174 = cp_R1921(({ R1921 ag2175; ag2175.name_ = (*(P174)rt_nil_check(F->p_2168)).name_; ag2175.mode_ = G_NV((*(P174)rt_nil_check(F->p_2168)).ival_); ag2175.t_ = NULL; ag2175.c_ = NULL; ag2175.cfield_ = NULL; ag2175.dflt_ = (*(P174)rt_nil_check(F->p_2168)).b_; ag2175.next_ = NULL; ag2175.dsym_ = NULL; ag2175; })); (P1920)cell2174; });
f_resolve_519(F->up, (*(P174)rt_nil_check(F->p_2168)).a_, &(*(P1920)rt_nil_check(F->pm_2169)).t_, &(*(P1920)rt_nil_check(F->pm_2169)).c_);
f_new_name_240(F->up, cat_rt_gstr(f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2168)).name_))), one_rt_gstr(95)), &(*(P1920)rt_nil_check(F->pm_2169)).cfield_);
if (((G_NV((*(P174)rt_nil_check(F->d_663)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1920)rt_nil_check(F->pm_2169)).mode_) != ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->p_2168)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P174)rt_nil_check(F->d_663)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1920)rt_nil_check(F->pm_2169)).mode_) != ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->p_2168)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2170 == NULL)) {
(*(P117)rt_nil_check((*F->y_664))).params_ = F->pm_2169;
} else {
(*(P1920)rt_nil_check(F->tail_2170)).next_ = F->pm_2169;
}
F->tail_2170 = F->pm_2169;
F->p_2168 = (*(P174)rt_nil_check(F->p_2168)).next_;
}
L_end_2173: ;
(*(P117)rt_nil_check((*F->y_664))).result_ = F->up->ty_void_161;
if (((*(P174)rt_nil_check(F->d_663)).b_ != NULL)) {
f_resolve_519(F->up, (*(P174)rt_nil_check(F->d_663)).b_, &(*(P117)rt_nil_check((*F->y_664))).result_, &F->rc_2171);
(*(P117)rt_nil_check((*F->y_664))).c_ = F->rc_2171;
}
if ((f_is_rel_350(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_663)).name_))) && ((*(P117)rt_nil_check((*F->y_664))).result_ != F->up->ty_bool_157))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->d_663)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_663)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P117)rt_nil_check((*F->y_664))).vrp_ = (G_NV((*(P174)rt_nil_check(F->d_663)).flag_) == ((rt_int)1LL));
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_767(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_663)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check((*F->y_664))).cname_);
(*(P117)rt_nil_check((*F->y_664))).decl_ = F->d_663;
(*(P117)rt_nil_check((*F->y_664))).level_ = G_NV(F->up->cur_level_139);
ret_:

  return;
}

static void f_decl_elements_667(struct f_greenc_1fr *up_, P174 decls_666) {
  struct f_decl_elements_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_666 = decls_666;
F->e_2176 = NULL;
F->e_2176 = F->decls_666;
F->declared_2177 = INT_MIN;
F->declared_2177 = 0;
F->up->anon_node_176 = NULL;
while ((F->e_2176 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) != ((rt_int)40LL)) && (G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) != ((rt_int)41LL))) || ((*(P174)rt_nil_check(F->e_2176)).a_ != F->up->anon_node_176))) {
F->up->anon_node_176 = NULL;
}
if (((((G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2176)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2177)))) {
f_declare_subprograms_655(F->up, F->e_2176);
F->declared_2177 = 1;
}
f_decl_element_669(F->up, F->e_2176);
F->e_2176 = (*(P174)rt_nil_check(F->e_2176)).next_;
}
L_end_2178: ;
ret_:

  return;
}

static void f_decl_element_669(struct f_greenc_1fr *up_, P174 e_668) {
  struct f_decl_element_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_668 = e_668;
F->saved_2179 = NULL;
F->saved_2179 = F->up->barriers_200;
if ((((*(P174)rt_nil_check(F->e_668)).formal_ != NULL) && (((((((G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)45LL))) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->e_668)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_690(F->up, F->e_668, G_NV(F->up->depth_120));
f_decl_element_1_671(F->up, F->e_668);
F->up->barriers_200 = F->saved_2179;
goto ret_;
}
f_decl_element_1_671(F->up, F->e_668);
ret_:

  return;
}

static void f_decl_element_1_671(struct f_greenc_1fr *up_, P174 e_670) {
  struct f_decl_element_1_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_670 = e_670;
F->pd_2180 = NULL;
F->y_2181 = NULL;
F->z_2182 = NULL;
F->t_2183 = NULL;
F->vt_2184 = NULL;
F->c_2185 = NULL;
F->acc_2186 = NULL;
F->v_2187 = NULL;
F->x_2188 = NULL;
F->ok_2189 = INT_MIN;
{ rt_int sel2190 = G_NV((*(P174)rt_nil_check(F->e_670)).kind_);
if (0 || sel2190 == ((rt_int)42LL)) {
F->y_2181 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)));
if ((((((((F->y_2181 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2181)).kind_) == ((rt_int)5LL))) && (G_NV((*(P117)rt_nil_check(F->y_2181)).depth_) == G_NV(F->up->depth_120))) && ((*(P117)rt_nil_check(F->y_2181)).t_ != NULL)) && G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).priv_)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_173 = (*(P117)rt_nil_check(F->y_2181)).t_;
F->x_2188 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).name_;
F->pd_2180 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).decl_;
F->ok_2189 = G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).is_restricted_);
f_type_definition_553(F->up, (*(P174)rt_nil_check(F->e_670)).a_, (*(P174)rt_nil_check(F->e_670)).name_, &F->t_2183, &F->c_2185);
F->up->completing_173 = NULL;
if ((F->t_2183 != (*(P117)rt_nil_check(F->y_2181)).t_)) {
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)), (*(P122)rt_nil_check(F->t_2183)));
}
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).name_ = F->x_2188;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).decl_ = F->pd_2180;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).is_restricted_ = G_NV(F->ok_2189);
(*(P117)rt_nil_check(F->y_2181)).c_ = F->c_2185;
} else {
F->y_2181 = f_new_sym_481(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_670)).name_);
(*(P117)rt_nil_check(F->y_2181)).decl_ = F->e_670;
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).kind_) == ((rt_int)77LL))) {
(*(P117)rt_nil_check(F->y_2181)).t_ = f_new_typ_483(F->up, ((rt_int)9LL));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).name_ = (*(P174)rt_nil_check(F->e_670)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).decl_ = F->up->cur_pkg_223;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->e_670)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_553(F->up, (*(P174)rt_nil_check(F->e_670)).a_, (*(P174)rt_nil_check(F->e_670)).name_, &(*(P117)rt_nil_check(F->y_2181)).t_, &(*(P117)rt_nil_check(F->y_2181)).c_);
}
}
} else if (0 || sel2190 == ((rt_int)43LL)) {
F->y_2181 = f_new_sym_481(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_670)).name_);
f_resolve_519(F->up, (*(P174)rt_nil_check(F->e_670)).a_, &(*(P117)rt_nil_check(F->y_2181)).t_, &(*(P117)rt_nil_check(F->y_2181)).c_);
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
} else if (0 || sel2190 == ((rt_int)40LL)) {
f_resolve_object_type_677(F->up, (*(P174)rt_nil_check(F->e_670)).a_, &F->t_2183, &F->c_2185);
F->y_2181 = f_new_sym_481(F->up, ((rt_int)1LL), (*(P174)rt_nil_check(F->e_670)).name_);
if ((G_NV((*(P174)rt_nil_check(F->e_670)).flag_) == ((rt_int)2LL))) {
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->e_670)).b_, &F->v_2187, &F->vt_2184, &F->c_2185, &(*(P117)rt_nil_check(F->y_2181)).ro_);
 (void)rt_range((*(P117)rt_nil_check(F->y_2181)).ro_, 0, 1);
f_check_type_498(F->up, F->vt_2184, F->t_2183, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_ctype_503(F->up, F->t_2183, &F->acc_2186);
f_new_name_240(F->up, cat_rt_gstr(f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_))), one_rt_gstr(95)), &F->x_2188);
if (G_NV(F->up->in_func_138)) {
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->acc_2186))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(59)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->x_2188))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2187))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2181)).byref_ = 1;
(*(P117)rt_nil_check(F->y_2181)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_2181)).access_path_ = F->x_2188;
} else {
f_put_to_262(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->acc_2186))), rt_g_lit(" *g_", 4)), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(59)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P140)rt_nil_check(F->x_2188))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2187))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2181)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_2181)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(41)));
}
(*(P117)rt_nil_check(F->y_2181)).t_ = F->vt_2184;
(*(P117)rt_nil_check(F->y_2181)).c_ = F->c_2185;
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
goto ret_;
}
if ((((G_NV((*(P122)rt_nil_check(F->t_2183)).kind_) == ((rt_int)6LL)) && (!f_bounded_486(F->up, F->c_2185))) && ((*(P174)rt_nil_check(F->e_670)).b_ != NULL))) {
F->up->vrp_ok_228 = 1;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_670)).b_, F->t_2183, &F->vt_2184, &F->v_2187);
F->up->vrp_ok_228 = 0;
f_check_type_498(F->up, F->vt_2184, F->t_2183, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)), F->t_2183, &F->acc_2186);
f_copy_code_635(F->up, F->t_2183, (*(P140)rt_nil_check(F->v_2187)), &F->x_2188);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2186)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(59)));
} else {
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)), F->t_2183, &F->acc_2186);
f_init_storage_623(F->up, (*(P140)rt_nil_check(F->acc_2186)), F->t_2183, F->c_2185);
if (((*(P174)rt_nil_check(F->e_670)).b_ != NULL)) {
if (f_restricted_here_574(F->up, F->t_2183)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_670)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_775(F->up, (*(P174)rt_nil_check(F->e_670)).b_)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_670)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_228 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2183)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->acc_2186;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_670)).b_, F->t_2183, &F->vt_2184, &F->v_2187);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_228 = 0;
f_check_type_498(F->up, F->vt_2184, F->t_2183, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_assign_code_631(F->up, (*(P140)rt_nil_check(F->acc_2186)), F->t_2183, (*(P140)rt_nil_check(F->v_2187)), F->c_2185, &F->x_2188);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2188)));
}
}
(*(P117)rt_nil_check(F->y_2181)).t_ = F->t_2183;
(*(P117)rt_nil_check(F->y_2181)).c_ = F->c_2185;
f_bind_653(F->up, F->y_2181, F->acc_2186);
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
} else if (0 || sel2190 == ((rt_int)41LL)) {
f_resolve_object_type_677(F->up, (*(P174)rt_nil_check(F->e_670)).a_, &F->t_2183, &F->c_2185);
F->z_2182 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)));
if (((*(P174)rt_nil_check(F->e_670)).b_ == NULL)) {
if (((F->up->cur_pkg_223 == NULL) || (!(G_NV((*(P122)rt_nil_check(F->t_2183)).priv_) && (G_NV((*(P122)rt_nil_check(F->t_2183)).kind_) == ((rt_int)9LL)))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_670)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2181 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_670)).name_);
(*(P117)rt_nil_check(F->y_2181)).t_ = F->t_2183;
(*(P117)rt_nil_check(F->y_2181)).c_ = F->c_2185;
(*(P117)rt_nil_check(F->y_2181)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2181)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
goto ret_;
}
if (((((F->z_2182 != NULL) && (G_NV((*(P117)rt_nil_check(F->z_2182)).depth_) == G_NV(F->up->depth_120))) && (G_NV((*(P117)rt_nil_check(F->z_2182)).kind_) == ((rt_int)2LL))) && (G_NV((*(P117)rt_nil_check(F->z_2182)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_498(F->up, F->t_2183, (*(P117)rt_nil_check(F->z_2182)).t_, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_670)).b_, F->t_2183, &F->vt_2184, &F->v_2187);
f_check_type_498(F->up, F->vt_2184, F->t_2183, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)), F->t_2183, &F->acc_2186);
f_bind_653(F->up, F->z_2182, F->acc_2186);
f_copy_code_635(F->up, F->t_2183, (*(P140)rt_nil_check(F->v_2187)), &F->x_2188);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2186)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_2182)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2181 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_670)).name_);
(*(P117)rt_nil_check(F->y_2181)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_228 = 1;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_670)).b_, F->t_2183, &F->vt_2184, &F->v_2187);
F->up->vrp_ok_228 = 0;
f_check_type_498(F->up, F->vt_2184, F->t_2183, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_2183)).kind_) == ((rt_int)1LL))) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_670)).b_, &(*(P117)rt_nil_check(F->y_2181)).mvalue_, &F->ok_2189);
 (void)rt_range(F->ok_2189, 0, 1);
(*(P117)rt_nil_check(F->y_2181)).hasmv_ = G_NV(F->ok_2189);
}
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)), F->t_2183, &F->acc_2186);
f_copy_code_635(F->up, F->t_2183, (*(P140)rt_nil_check(F->v_2187)), &F->x_2188);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2186)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2188))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->y_2181)).t_ = F->t_2183;
(*(P117)rt_nil_check(F->y_2181)).c_ = F->c_2185;
(*(P117)rt_nil_check(F->y_2181)).ro_ = 1;
f_bind_653(F->up, F->y_2181, F->acc_2186);
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
} else if (0 || sel2190 == ((rt_int)46LL)) {
if (((*(P174)rt_nil_check(F->e_670)).a_ != NULL)) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).a_))) {
F->y_2181 = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_670)).line_));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2181 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_670)).a_)).name_)));
} else {
F->y_2181 = NULL;
}
if (((F->y_2181 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2181)).kind_) != ((rt_int)6LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_670)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1073(F->up, F->y_2181, &F->z_2182);
(*(P117)rt_nil_check(F->z_2182)).name_ = (*(P174)rt_nil_check(F->e_670)).name_;
f_define_476(F->up, F->z_2182, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
goto ret_;
}
F->y_2181 = f_new_sym_481(F->up, ((rt_int)6LL), (*(P174)rt_nil_check(F->e_670)).name_);
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2181)).cname_);
f_put_to_262(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).cname_))), one_rt_gstr(59)));
f_put_to_262(F->up, F->up->out_excs_135, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2181)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_255(F->up)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_))), f_q_255(F->up)), rt_g_lit(");", 2)));
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
} else if (0 || sel2190 == ((rt_int)44LL) || sel2190 == ((rt_int)45LL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_670)).ival_) == ((rt_int)0LL)) && f_is_generic_name_1276(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_670)).name_))))) {
f_attach_generic_body_1281(F->up, F->e_670);
} else if ((G_NV((*(P174)rt_nil_check(F->e_670)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_684(F->up, F->e_670);
} else if ((G_NV((*(P174)rt_nil_check(F->e_670)).ival_) == ((rt_int)3LL))) {
f_stub_682(F->up, F->e_670);
} else if ((G_NV((*(P174)rt_nil_check(F->e_670)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_665(F->up, F->e_670, &F->y_2181);
f_define_476(F->up, F->y_2181, G_NV((*(P174)rt_nil_check(F->e_670)).line_));
f_elaborate_defaults_662(F->up, F->y_2181);
} else {
f_subprogram_body_712(F->up, F->e_670, f_lookup_decl_448(F->up, F->e_670));
}
} else if (0 || sel2190 == ((rt_int)55LL)) {
f_use_clause_1087(F->up, F->e_670);
} else if (0 || sel2190 == ((rt_int)56LL)) {
f_pragma_decl_673(F->up, F->e_670);
} else {
f_other_decl_692(F->up, F->e_670);
}
}
ret_:

  return;
}

static void f_pragma_decl_673(struct f_greenc_1fr *up_, P174 e_672) {
  struct f_pragma_decl_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_672 = e_672;
ret_:

  return;
}

static void f_resolve_object_type_677(struct f_greenc_1fr *up_, P174 st_674, P122 *t_675, P178 *c_676) {
  struct f_resolve_object_type_677fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_674 = st_674;
F->t_675 = t_675;
F->c_676 = c_676;
if (((G_NV((*(P174)rt_nil_check(F->st_674)).kind_) != ((rt_int)80LL)) && (F->st_674 == F->up->anon_node_176))) {
(*F->t_675) = F->up->anon_typ_177;
(*F->c_676) = F->up->anon_cons_180;
goto ret_;
}
f_resolve_519(F->up, F->st_674, &(*F->t_675), &(*F->c_676));
if ((G_NV((*(P174)rt_nil_check(F->st_674)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_176 = F->st_674;
F->up->anon_typ_177 = (*F->t_675);
F->up->anon_cons_180 = (*F->c_676);
}
ret_:

  return;
}

static void f_find_subunit_680(struct f_greenc_1fr *up_, P174 e_678, P174 *r_679) {
  struct f_find_subunit_680fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_678 = e_678;
F->r_679 = r_679;
F->u_2191 = NULL;
F->u_2191 = F->up->units_220;
F->k_2192 = INT64_MIN;
(*F->r_679) = NULL;
while ((F->u_2191 != NULL)) {
if (((((*(P174)rt_nil_check(F->u_2191)).formal_ != NULL) && (G_NV(({ rt_gstr ix2194 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2191)).formal_)); ix2194.p[rt_index(((rt_int)1LL), ix2194.lo, ix2194.hi) - ix2194.lo]; })) == 33)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2191)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_678)).name_))))) {
if (((G_NV((*(P174)rt_nil_check(F->u_2191)).kind_) == G_NV((*(P174)rt_nil_check(F->e_678)).kind_)) || (((G_NV((*(P174)rt_nil_check(F->u_2191)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_2191)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_678)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_678)).kind_) == ((rt_int)45LL)))))) {
(*F->r_679) = F->u_2191;
goto ret_;
}
}
F->u_2191 = (*(P174)rt_nil_check(F->u_2191)).next_;
}
L_end_2193: ;
ret_:

  return;
}

static void f_stub_682(struct f_greenc_1fr *up_, P174 e_681) {
  struct f_stub_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_681 = e_681;
F->sub_2195 = NULL;
F->saved_2196 = NULL;
F->saved_2196 = F->up->barriers_200;
F->k_2197 = INT64_MIN;
F->d_2198 = INT64_MIN;
F->first_name_2199 = NULL;
F->list_2200 = NULL;
F->y_2201 = NULL;
f_find_subunit_680(F->up, F->e_681, &F->sub_2195);
if ((F->sub_2195 == NULL)) {
{ rt_int lo2204 = ((rt_int)1LL), hi2205 = G_NV(F->up->nunits_188);
for (rt_int it2206 = hi2205; it2206 >= lo2204; it2206--) {
F->i_2203 = it2206;
if ((F->sub_2195 == NULL)) {
f_lib_load_1350(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(({ A183 ix2208 = F->up->unit_names_184; ix2208.p[rt_index(F->i_2203, ix2208.lo, ix2208.hi) - ix2208.lo]; }))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_681)).name_))), rt_g_lit(".sub", 4)), &F->sub_2195);
}
}
}
L_end_2202: ;
if ((F->sub_2195 == NULL)) {
f_lib_load_1350(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->cur_comp_unit_209)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_681)).name_))), rt_g_lit(".sub", 4)), &F->sub_2195);
}
if ((F->sub_2195 != NULL)) {
(*(P174)rt_nil_check(F->sub_2195)).next_ = F->up->units_220;
F->up->units_220 = F->sub_2195;
}
}
if ((F->sub_2195 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_681)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the subunit of ", 15), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_681)).name_))), rt_g_lit(" is neither in this compilation nor in the ", 43)), rt_g_lit("program library (RM79 10.2)", 27)));
}
F->list_2200 = f_mk_237(F->up, ({ rt_gstr sl2212 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2195)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at2211 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2195)).formal_)); at2211.hi >= at2211.lo ? at2211.hi - at2211.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2212.lo, sl2212.hi); rt_index(h_, sl2212.lo, sl2212.hi); } sl2212.p += l_ - sl2212.lo; sl2212.lo = l_; sl2212.hi = h_; sl2212; }));
(*(P174)rt_nil_check(F->sub_2195)).formal_ = f_mk_237(F->up, cat_rt_gstr(one_rt_gstr(35), (*(P140)rt_nil_check(F->list_2200))));
F->k_2197 = ((rt_int)2LL);
while (((G_NV(F->k_2197) <= ({ rt_gstr at2214 = (*(P140)rt_nil_check(F->list_2200)); at2214.hi >= at2214.lo ? at2214.hi - at2214.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2215 = (*(P140)rt_nil_check(F->list_2200)); ix2215.p[rt_index(G_NV(F->k_2197), ix2215.lo, ix2215.hi) - ix2215.lo]; })) != 44))) {
F->k_2197 = rt_add(G_NV(F->k_2197), ((rt_int)1LL));
}
L_end_2213: ;
F->first_name_2199 = f_mk_237(F->up, ({ rt_gstr sl2217 = (*(P140)rt_nil_check(F->list_2200)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2197), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2217.lo, sl2217.hi); rt_index(h_, sl2217.lo, sl2217.hi); } sl2217.p += l_ - sl2217.lo; sl2217.lo = l_; sl2217.hi = h_; sl2217; }));
F->d_2198 = f_enclosing_depth_444(F->up, (*(P140)rt_nil_check(F->first_name_2199)));
if ((G_NV(F->d_2198) < ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->sub_2195)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the first name in the visibility list of subunit ", 49), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2195)).name_))), rt_g_lit(" is an enclosing unit (RM79 10.2)", 33)));
}
F->up->barriers_200 = ({ R199 *cell2218 = rt_alloc(sizeof(R199)); *cell2218 = cp_R199(({ R199 ag2219; ag2219.limit_ = rt_sub(G_NV(F->d_2198), ((rt_int)1LL)); ag2219.keep_ = rt_neg(((rt_int)1LL)); ag2219.allowed_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->list_2200)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2195)).name_))), one_rt_gstr(44))); ag2219.next_ = NULL; ag2219; })); (P198)cell2218; });
if (((G_NV((*(P174)rt_nil_check(F->e_681)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_681)).kind_) == ((rt_int)45LL)))) {
F->y_2201 = f_lookup_decl_448(F->up, F->e_681);
f_subprogram_body_712(F->up, F->sub_2195, F->y_2201);
} else if ((G_NV((*(P174)rt_nil_check(F->e_681)).kind_) == ((rt_int)49LL))) {
f_package_body_1083(F->up, F->sub_2195);
} else {
f_task_body_1186(F->up, F->sub_2195);
}
F->up->barriers_200 = F->saved_2196;
ret_:

  return;
}

static void f_rename_subprogram_684(struct f_greenc_1fr *up_, P174 e_683) {
  struct f_rename_subprogram_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_683 = e_683;
F->newy_2220 = NULL;
F->y_2221 = NULL;
F->z_2222 = NULL;
F->cand_2223 = NULL;
F->ix_2224 = NULL;
F->p_2225 = NULL;
F->q_2226 = NULL;
F->tail_2227 = NULL;
f_build_subprogram_665(F->up, F->e_683, &F->newy_2220);
F->y_2221 = NULL;
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).a_)))) {
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2223 = ({ A116 ix2228 = F->up->table_119; ix2228.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).name_))), ix2228.lo, ix2228.hi) - ix2228.lo]; });
while ((F->cand_2223 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2223)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)10LL)))) && f_visible_sym_431(F->up, F->cand_2223))) {
if (((f_same_types_467(F->up, (*(P117)rt_nil_check(F->cand_2223)).params_, (*(P117)rt_nil_check(F->newy_2220)).params_) && f_same_453(F->up, (*(P117)rt_nil_check(F->cand_2223)).result_, (*(P117)rt_nil_check(F->newy_2220)).result_)) && (F->y_2221 == NULL))) {
F->y_2221 = F->cand_2223;
}
}
F->cand_2223 = (*(P117)rt_nil_check(F->cand_2223)).chain_;
}
L_end_2229: ;
} else {
F->cand_2223 = (*(P117)rt_nil_check(f_lookup_path_1062(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).a_)))).members_;
while ((F->cand_2223 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2223)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2223)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P117)rt_nil_check(F->cand_2223)).hidden_)))) {
if (((f_same_types_467(F->up, (*(P117)rt_nil_check(F->cand_2223)).params_, (*(P117)rt_nil_check(F->newy_2220)).params_) && f_same_453(F->up, (*(P117)rt_nil_check(F->cand_2223)).result_, (*(P117)rt_nil_check(F->newy_2220)).result_)) && (F->y_2221 == NULL))) {
F->y_2221 = F->cand_2223;
}
}
F->cand_2223 = (*(P117)rt_nil_check(F->cand_2223)).mnext_;
}
L_end_2230: ;
}
}
if (((F->y_2221 == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1195(F->up, (*(P174)rt_nil_check(F->e_683)).c_, &F->y_2221, &F->ix_2224);
if (((F->ix_2224 != NULL) || ((*(P117)rt_nil_check(F->y_2221)).c_ != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_683)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_467(F->up, (*(P117)rt_nil_check(F->y_2221)).params_, (*(P117)rt_nil_check(F->newy_2220)).params_)) || (G_NV((*(P174)rt_nil_check(F->e_683)).kind_) != ((rt_int)44LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_683)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2221 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_683)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_683)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1073(F->up, F->y_2221, &F->z_2222);
(*(P117)rt_nil_check(F->z_2222)).name_ = (*(P174)rt_nil_check(F->e_683)).name_;
(*(P117)rt_nil_check(F->z_2222)).decl_ = (*(P117)rt_nil_check(F->y_2221)).decl_;
(*(P117)rt_nil_check(F->z_2222)).params_ = NULL;
F->p_2225 = (*(P117)rt_nil_check(F->y_2221)).params_;
F->q_2226 = (*(P117)rt_nil_check(F->newy_2220)).params_;
while ((F->p_2225 != NULL)) {
if ((F->tail_2227 == NULL)) {
(*(P117)rt_nil_check(F->z_2222)).params_ = ({ R1921 *cell2232 = rt_alloc(sizeof(R1921)); *cell2232 = cp_R1921(({ R1921 ag2233; ag2233.name_ = (*(P1920)rt_nil_check(F->q_2226)).name_; ag2233.mode_ = G_NV((*(P1920)rt_nil_check(F->p_2225)).mode_); ag2233.t_ = (*(P1920)rt_nil_check(F->p_2225)).t_; ag2233.c_ = (*(P1920)rt_nil_check(F->p_2225)).c_; ag2233.cfield_ = (*(P1920)rt_nil_check(F->p_2225)).cfield_; ag2233.dflt_ = (*(P1920)rt_nil_check(F->q_2226)).dflt_; ag2233.next_ = NULL; ag2233.dsym_ = NULL; ag2233; })); (P1920)cell2232; });
F->tail_2227 = (*(P117)rt_nil_check(F->z_2222)).params_;
} else {
(*(P1920)rt_nil_check(F->tail_2227)).next_ = ({ R1921 *cell2234 = rt_alloc(sizeof(R1921)); *cell2234 = cp_R1921(({ R1921 ag2235; ag2235.name_ = (*(P1920)rt_nil_check(F->q_2226)).name_; ag2235.mode_ = G_NV((*(P1920)rt_nil_check(F->p_2225)).mode_); ag2235.t_ = (*(P1920)rt_nil_check(F->p_2225)).t_; ag2235.c_ = (*(P1920)rt_nil_check(F->p_2225)).c_; ag2235.cfield_ = (*(P1920)rt_nil_check(F->p_2225)).cfield_; ag2235.dflt_ = (*(P1920)rt_nil_check(F->q_2226)).dflt_; ag2235.next_ = NULL; ag2235.dsym_ = NULL; ag2235; })); (P1920)cell2234; });
F->tail_2227 = (*(P1920)rt_nil_check(F->tail_2227)).next_;
}
F->p_2225 = (*(P1920)rt_nil_check(F->p_2225)).next_;
F->q_2226 = (*(P1920)rt_nil_check(F->q_2226)).next_;
}
L_end_2231: ;
f_define_476(F->up, F->z_2222, G_NV((*(P174)rt_nil_check(F->e_683)).line_));
f_elaborate_defaults_662(F->up, F->z_2222);
ret_:

  return;
}

static void f_rename_module_687(struct f_greenc_1fr *up_, P174 e_685, P174 target_686) {
  struct f_rename_module_687fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_685 = e_685;
F->target_686 = target_686;
F->y_2236 = NULL;
F->z_2237 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->target_686)).kind_) == ((rt_int)8LL))) {
F->y_2236 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_686)).a_)).name_)));
if ((((F->y_2236 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2236)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->y_2236)).c_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_686)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1073(F->up, F->y_2236, &F->z_2237);
(*(P117)rt_nil_check(F->z_2237)).name_ = (*(P174)rt_nil_check(F->e_685)).name_;
(*(P117)rt_nil_check(F->z_2237)).flags_ = ((rt_int)4LL);
(*(P117)rt_nil_check(F->z_2237)).decl_ = F->target_686;
f_define_476(F->up, F->z_2237, G_NV((*(P174)rt_nil_check(F->e_685)).line_));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->target_686)).kind_) == ((rt_int)5LL))) {
F->y_2236 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->target_686)).name_)));
} else if ((G_NV((*(P174)rt_nil_check(F->target_686)).kind_) == ((rt_int)9LL))) {
F->y_2236 = f_lookup_path_1062(F->up, f_path_of_354(F->up, F->target_686));
}
if (((F->y_2236 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2236)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2236)).kind_) != ((rt_int)9LL))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2236)).kind_) == ((rt_int)9LL)) != (G_NV((*(P174)rt_nil_check(F->e_685)).kind_) == ((rt_int)50LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1073(F->up, F->y_2236, &F->z_2237);
(*(P117)rt_nil_check(F->z_2237)).name_ = (*(P174)rt_nil_check(F->e_685)).name_;
f_define_476(F->up, F->z_2237, G_NV((*(P174)rt_nil_check(F->e_685)).line_));
ret_:

  return;
}

static void f_push_barrier_690(struct f_greenc_1fr *up_, P174 e_688, rt_int limit_689) {
  struct f_push_barrier_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_688 = e_688;
F->limit_689 = limit_689;
F->b_2238 = NULL;
F->first_name_2239 = NULL;
F->k_2240 = INT64_MIN;
F->b_2238 = ({ R199 *cell2241 = rt_alloc(sizeof(R199)); *cell2241 = cp_R199(({ R199 ag2242; ag2242.limit_ = F->limit_689; ag2242.keep_ = rt_neg(((rt_int)1LL)); ag2242.allowed_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_688)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_688)).name_))), one_rt_gstr(44))); ag2242.next_ = F->up->barriers_200; ag2242; })); (P198)cell2241; });
F->k_2240 = ((rt_int)2LL);
while (((G_NV(F->k_2240) <= ({ rt_gstr at2244 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_688)).formal_)); at2244.hi >= at2244.lo ? at2244.hi - at2244.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2245 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_688)).formal_)); ix2245.p[rt_index(G_NV(F->k_2240), ix2245.lo, ix2245.hi) - ix2245.lo]; })) != 44))) {
F->k_2240 = rt_add(G_NV(F->k_2240), ((rt_int)1LL));
}
L_end_2243: ;
if ((G_NV(F->k_2240) > ((rt_int)2LL))) {
F->first_name_2239 = f_mk_237(F->up, ({ rt_gstr sl2247 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_688)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2240), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2247.lo, sl2247.hi); rt_index(h_, sl2247.lo, sl2247.hi); } sl2247.p += l_ - sl2247.lo; sl2247.lo = l_; sl2247.hi = h_; sl2247; }));
(*(P198)rt_nil_check(F->b_2238)).keep_ = f_enclosing_depth_444(F->up, (*(P140)rt_nil_check(F->first_name_2239)));
}
F->up->barriers_200 = F->b_2238;
ret_:

  return;
}

static void f_other_decl_692(struct f_greenc_1fr *up_, P174 e_691) {
  struct f_other_decl_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_691 = e_691;
if (((G_NV((*(P174)rt_nil_check(F->e_691)).kind_) == ((rt_int)48LL)) && (G_NV((*(P174)rt_nil_check(F->e_691)).flag_) == ((rt_int)3LL)))) {
f_rename_module_687(F->up, F->e_691, (*(P174)rt_nil_check(F->e_691)).a_);
} else if (((G_NV((*(P174)rt_nil_check(F->e_691)).kind_) == ((rt_int)50LL)) && (G_NV((*(P174)rt_nil_check(F->e_691)).flag_) == ((rt_int)3LL)))) {
f_rename_module_687(F->up, F->e_691, (*(P174)rt_nil_check(F->e_691)).b_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_691)).kind_) == ((rt_int)48LL))) {
f_package_spec_1078(F->up, F->e_691);
} else if ((G_NV((*(P174)rt_nil_check(F->e_691)).kind_) == ((rt_int)49LL))) {
f_package_body_1083(F->up, F->e_691);
} else {
f_task_decl_1169(F->up, F->e_691);
}
ret_:

  return;
}

static void f_scan_labels_695(struct f_greenc_1fr *up_, P174 stmts_693, rt_gstr path_694) {
  struct f_scan_labels_695fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_693 = stmts_693;
F->path_694 = cp_rt_gstr(path_694);
F->s_2248 = NULL;
F->s_2248 = F->stmts_693;
F->a_2249 = NULL;
F->l_2250 = NULL;
F->c_2251 = NULL;
while ((F->s_2248 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)57LL))) {
F->l_2250 = F->up->body_labels_191;
while ((F->l_2250 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2250)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2248)).name_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_2248)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2248)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2250 = (*(P189)rt_nil_check(F->l_2250)).next_;
}
L_end_2253: ;
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2248)).name_)))), one_rt_gstr(95)), &F->c_2251);
F->up->body_labels_191 = ({ R190 *cell2254 = rt_alloc(sizeof(R190)); *cell2254 = cp_R190(({ R190 ag2255; ag2255.name_ = (*(P174)rt_nil_check(F->s_2248)).name_; ag2255.cname_ = F->c_2251; ag2255.path_ = f_mk_237(F->up, F->path_694); ag2255.frames_ = ((rt_int)0LL); ag2255.line_ = G_NV((*(P174)rt_nil_check(F->s_2248)).line_); ag2255.next_ = F->up->body_labels_191; ag2255; })); (P189)cell2254; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_192 = ({ R190 *cell2256 = rt_alloc(sizeof(R190)); *cell2256 = cp_R190(({ R190 ag2257; ag2257.name_ = (*(P174)rt_nil_check(F->s_2248)).name_; ag2257.cname_ = NULL; ag2257.path_ = f_mk_237(F->up, F->path_694); ag2257.frames_ = ((rt_int)0LL); ag2257.line_ = G_NV((*(P174)rt_nil_check(F->s_2248)).line_); ag2257.next_ = F->up->body_gotos_192; ag2257; })); (P189)cell2256; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)22LL))) {
F->a_2249 = (*(P174)rt_nil_check(F->s_2248)).a_;
while ((F->a_2249 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->a_2249)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2249 = (*(P174)rt_nil_check(F->a_2249)).next_;
}
L_end_2258: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->s_2248)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)23LL))) {
F->a_2249 = (*(P174)rt_nil_check(F->s_2248)).b_;
while ((F->a_2249 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->a_2249)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2249 = (*(P174)rt_nil_check(F->a_2249)).next_;
}
L_end_2259: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->s_2248)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)24LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->s_2248)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_699(F->up, (*(P174)rt_nil_check(F->s_2248)).b_, (*(P174)rt_nil_check(F->s_2248)).c_, F->path_694);
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)34LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->s_2248)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2248)).kind_) == ((rt_int)35LL))) {
F->a_2249 = (*(P174)rt_nil_check(F->s_2248)).a_;
while ((F->a_2249 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2249)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_695(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2249)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->a_2249)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2249 = (*(P174)rt_nil_check(F->a_2249)).next_;
}
L_end_2260: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->s_2248)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_694, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
F->s_2248 = (*(P174)rt_nil_check(F->s_2248)).next_;
}
L_end_2252: ;
ret_:

  return;
}

static void f_scan_guarded_699(struct f_greenc_1fr *up_, P174 stmts_696, P174 hs_697, rt_gstr path_698) {
  struct f_scan_guarded_699fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_696 = stmts_696;
F->hs_697 = hs_697;
F->path_698 = cp_rt_gstr(path_698);
F->h_2261 = NULL;
F->h_2261 = F->hs_697;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((F->hs_697 == NULL)) {
f_scan_labels_695(F->up, F->stmts_696, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_698, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else {
f_scan_labels_695(F->up, F->stmts_696, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_698, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
while ((F->h_2261 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_695(F->up, (*(P174)rt_nil_check(F->h_2261)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_698, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->h_2261 = (*(P174)rt_nil_check(F->h_2261)).next_;
}
L_end_2262: ;
ret_:

  return;
}

static rt_int f_count_g_701(struct f_greenc_1fr *up_, rt_gstr p_700) {
  struct f_count_g_701fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_700 = cp_rt_gstr(p_700);
F->n_2263 = INT64_MIN;
F->n_2263 = ((rt_int)0LL);
{ rt_int lo2268 = ({ rt_gstr at2265 = F->p_700; at2265.lo; }), hi2269 = ({ rt_gstr at2266 = F->p_700; at2266.hi; });
for (rt_int it2270 = lo2268; it2270 <= hi2269; it2270++) {
F->i_2267 = it2270;
if ((G_NV(({ rt_gstr ix2271 = F->p_700; ix2271.p[rt_index(F->i_2267, ix2271.lo, ix2271.hi) - ix2271.lo]; })) == 103)) {
F->n_2263 = rt_add(G_NV(F->n_2263), ((rt_int)1LL));
}
}
}
L_end_2264: ;
F->result_ = G_NV(F->n_2263);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_704(struct f_greenc_1fr *up_, P174 stmts_702, P174 hs_703) {
  struct f_label_body_704fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_702 = stmts_702;
F->hs_703 = hs_703;
F->l_2272 = NULL;
F->g_2273 = NULL;
F->gp_2274 = NULL;
F->lp_2275 = NULL;
F->up->body_labels_191 = NULL;
F->up->body_gotos_192 = NULL;
F->up->segments_193 = ((rt_int)0LL);
f_scan_guarded_699(F->up, F->stmts_702, F->hs_703, rt_g_lit("/", 1));
F->l_2272 = F->up->body_labels_191;
while ((F->l_2272 != NULL)) {
(*(P189)rt_nil_check(F->l_2272)).frames_ = rt_add(G_NV(F->up->frames_150), f_count_g_701(F->up, (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2272)).path_))));
F->l_2272 = (*(P189)rt_nil_check(F->l_2272)).next_;
}
L_end_2276: ;
F->g_2273 = F->up->body_gotos_192;
while ((F->g_2273 != NULL)) {
F->l_2272 = F->up->body_labels_191;
while (((F->l_2272 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2272)).name_)), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2273)).name_)))))) {
F->l_2272 = (*(P189)rt_nil_check(F->l_2272)).next_;
}
L_end_2278: ;
if ((F->l_2272 == NULL)) {
f_fail_258(F->up, G_NV((*(P189)rt_nil_check(F->g_2273)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2273)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2274 = (*(P189)rt_nil_check(F->g_2273)).path_;
F->lp_2275 = (*(P189)rt_nil_check(F->l_2272)).path_;
if ((({ rt_gstr at2279 = (*(P140)rt_nil_check(F->lp_2275)); at2279.hi >= at2279.lo ? at2279.hi - at2279.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2280 = (*(P140)rt_nil_check(F->gp_2274)); at2280.hi >= at2280.lo ? at2280.hi - at2280.lo + 1 : (rt_int)0; }))) {
f_fail_258(F->up, G_NV((*(P189)rt_nil_check(F->g_2273)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2282 = (*(P140)rt_nil_check(F->gp_2274)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2281 = (*(P140)rt_nil_check(F->lp_2275)); at2281.hi >= at2281.lo ? at2281.hi - at2281.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2282.lo, sl2282.hi); rt_index(h_, sl2282.lo, sl2282.hi); } sl2282.p += l_ - sl2282.lo; sl2282.lo = l_; sl2282.hi = h_; sl2282; }), (*(P140)rt_nil_check(F->lp_2275))))) {
f_fail_258(F->up, G_NV((*(P189)rt_nil_check(F->g_2273)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2287 = rt_add(({ rt_gstr at2284 = (*(P140)rt_nil_check(F->lp_2275)); at2284.hi >= at2284.lo ? at2284.hi - at2284.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2288 = ({ rt_gstr at2285 = (*(P140)rt_nil_check(F->gp_2274)); at2285.hi >= at2285.lo ? at2285.hi - at2285.lo + 1 : (rt_int)0; });
for (rt_int it2289 = lo2287; it2289 <= hi2288; it2289++) {
F->i_2286 = it2289;
if (((G_NV(({ rt_gstr ix2290 = (*(P140)rt_nil_check(F->gp_2274)); ix2290.p[rt_index(F->i_2286, ix2290.lo, ix2290.hi) - ix2290.lo]; })) == 104) || (G_NV(({ rt_gstr ix2291 = (*(P140)rt_nil_check(F->gp_2274)); ix2291.p[rt_index(F->i_2286, ix2291.lo, ix2291.hi) - ix2291.lo]; })) == 97))) {
f_fail_258(F->up, G_NV((*(P189)rt_nil_check(F->g_2273)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2283: ;
F->g_2273 = (*(P189)rt_nil_check(F->g_2273)).next_;
}
L_end_2277: ;
ret_:

  return;
}

static void f_gen_label_707(struct f_greenc_1fr *up_, P174 s_705, int goto_it_706) {
  struct f_gen_label_707fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_705 = s_705;
F->goto_it_706 = goto_it_706;
F->l_2292 = NULL;
F->l_2292 = F->up->body_labels_191;
while (((F->l_2292 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2292)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_705)).name_)))))) {
F->l_2292 = (*(P189)rt_nil_check(F->l_2292)).next_;
}
L_end_2293: ;
if ((F->l_2292 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_705)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_705)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_706) {
f_pop_frames_716(F->up, G_NV((*(P189)rt_nil_check(F->l_2292)).frames_));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2292)).cname_))), one_rt_gstr(59)));
} else {
f_emit_264(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2292)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_709(struct f_greenc_1fr *up_, P174 d_708) {
  struct f_is_foreign_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_708 = d_708;
if (((*(P174)rt_nil_check(F->d_708)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_708)).tag_)), rt_g_lit("INTERFACE", 9));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subprogram_body_712(struct f_greenc_1fr *up_, P174 d_710, P117 y_711) {
  struct f_subprogram_body_712fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_710 = d_710;
F->y_711 = y_711;
F->saved_code_2294 = NULL;
F->saved_code_2294 = F->up->code_136;
F->saved_fields_2295 = NULL;
F->saved_fields_2295 = F->up->fields_buf_137;
F->saved_in_2296 = INT_MIN;
F->saved_in_2296 = G_NV(F->up->in_func_138);
F->saved_sym_2297 = NULL;
F->saved_sym_2297 = F->up->func_sym_142;
F->saved_exits_2298 = NULL;
F->saved_exits_2298 = F->up->exits_145;
F->saved_frames_2299 = INT64_MIN;
F->saved_frames_2299 = G_NV(F->up->frames_150);
F->saved_handlers_2300 = NULL;
F->saved_handlers_2300 = F->up->handlers_153;
F->saved_cleanups_2301 = NULL;
F->saved_cleanups_2301 = F->up->cleanups_154;
F->saved_labels_2302 = NULL;
F->saved_labels_2302 = F->up->body_labels_191;
F->saved_hx_2303 = NULL;
F->saved_hx_2303 = F->up->handler_exits_194;
F->saved_hd_2304 = INT64_MIN;
F->saved_hd_2304 = G_NV(F->up->handler_depth_195);
F->saved_pure_2305 = NULL;
F->saved_pure_2305 = F->up->pure_sym_226;
F->aw_2306 = NULL;
F->saved_pdepth_2307 = INT64_MIN;
F->saved_pdepth_2307 = G_NV(F->up->pure_depth_227);
F->args_2308 = NULL;
F->head_2309 = NULL;
F->frame_2310 = NULL;
F->parent_2311 = NULL;
F->ct_2312 = NULL;
F->x_2313 = NULL;
F->pm_2314 = NULL;
F->pm_2314 = (*(P117)rt_nil_check(F->y_711)).params_;
F->p_2315 = NULL;
F->frame_2310 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_711)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_138)) {
F->parent_2311 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_136 = f_new_buffer_259(F->up);
F->up->fields_buf_137 = f_new_buffer_259(F->up);
F->up->in_func_138 = 1;
F->up->func_sym_142 = F->y_711;
F->up->exits_145 = NULL;
F->up->frames_150 = ((rt_int)0LL);
F->up->handlers_153 = NULL;
F->up->cleanups_154 = NULL;
F->up->handler_exits_194 = NULL;
F->up->handler_depth_195 = ((rt_int)0LL);
F->up->cur_level_139 = rt_add(G_NV(F->up->cur_level_139), ((rt_int)1LL));
F->args_2308 = f_mk_237(F->up, rt_g_lit("", 0));
f_open_scope_477(F->up);
f_push_unit_446(F->up, (*(P174)rt_nil_check(F->d_710)).name_);
if (((G_NV((*(P117)rt_nil_check(F->y_711)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P117)rt_nil_check(F->y_711)).vrp_)))) {
F->up->pure_sym_226 = F->y_711;
F->up->pure_depth_227 = G_NV(F->up->depth_120);
}
if ((F->parent_2311 != NULL)) {
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P140)rt_nil_check(F->parent_2311))), rt_g_lit(" *up;", 5)));
F->args_2308 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->parent_2311))), rt_g_lit(" *up_", 5)));
f_emit_264(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2314 != NULL)) {
f_ctype_503(F->up, (*(P1920)rt_nil_check(F->pm_2314)).t_, &F->ct_2312);
if ((({ rt_gstr at2317 = (*(P140)rt_nil_check(F->args_2308)); at2317.hi >= at2317.lo ? at2317.hi - at2317.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2308 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2308)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1920)rt_nil_check(F->pm_2314)).mode_) == ((rt_int)1LL))) {
F->p_2315 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P1920)rt_nil_check(F->pm_2314)).name_);
(*(P117)rt_nil_check(F->p_2315)).ro_ = 1;
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2312))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), one_rt_gstr(59)));
F->args_2308 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2308)), (*(P140)rt_nil_check(F->ct_2312))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))));
f_copy_code_635(F->up, (*(P1920)rt_nil_check(F->pm_2314)).t_, (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_)), &F->x_2313);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2313))), one_rt_gstr(59)));
} else {
F->p_2315 = f_new_sym_481(F->up, ((rt_int)1LL), (*(P1920)rt_nil_check(F->pm_2314)).name_);
(*(P117)rt_nil_check(F->p_2315)).byref_ = 1;
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2312))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), one_rt_gstr(59)));
F->args_2308 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2308)), (*(P140)rt_nil_check(F->ct_2312))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), one_rt_gstr(59)));
}
(*(P117)rt_nil_check(F->p_2315)).access_path_ = (*(P1920)rt_nil_check(F->pm_2314)).cfield_;
(*(P117)rt_nil_check(F->p_2315)).t_ = (*(P1920)rt_nil_check(F->pm_2314)).t_;
(*(P117)rt_nil_check(F->p_2315)).c_ = (*(P1920)rt_nil_check(F->pm_2314)).c_;
(*(P117)rt_nil_check(F->p_2315)).level_ = G_NV(F->up->cur_level_139);
f_define_476(F->up, F->p_2315, G_NV((*(P174)rt_nil_check(F->d_710)).line_));
F->pm_2314 = (*(P1920)rt_nil_check(F->pm_2314)).next_;
}
L_end_2316: ;
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_711)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_503(F->up, (*(P117)rt_nil_check(F->y_711)).result_, &F->ct_2312);
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2312))), rt_g_lit(" result_;", 9)));
}
if ((f_is_foreign_709(F->up, F->d_710) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_711)).result_)).kind_) == ((rt_int)9LL)))) {
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->d_710)).c_);
F->x_2313 = f_mk_237(F->up, rt_g_lit("", 0));
F->pm_2314 = (*(P117)rt_nil_check(F->y_711)).params_;
while ((F->pm_2314 != NULL)) {
if ((({ rt_gstr at2319 = (*(P140)rt_nil_check(F->x_2313)); at2319.hi >= at2319.lo ? at2319.hi - at2319.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2313 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2313)), rt_g_lit(", ", 2)));
}
if ((f_is_string_582(F->up, (*(P1920)rt_nil_check(F->pm_2314)).t_) && (G_NV((*(P1920)rt_nil_check(F->pm_2314)).mode_) == ((rt_int)1LL)))) {
F->x_2313 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2313)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2313 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2313)), rt_g_lit("F->", 3)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2314)).cfield_))));
}
F->pm_2314 = (*(P1920)rt_nil_check(F->pm_2314)).next_;
}
L_end_2318: ;
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_710)).name_)))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2313))), rt_g_lit(");", 2)));
} else {
f_label_body_704(F->up, (*(P174)rt_nil_check(F->d_710)).d_, (*(P174)rt_nil_check(F->d_710)).e_);
f_guarded_724(F->up, (*(P174)rt_nil_check(F->d_710)).c_, (*(P174)rt_nil_check(F->d_710)).d_, (*(P174)rt_nil_check(F->d_710)).e_, G_NV((*(P174)rt_nil_check(F->d_710)).line_));
}
f_task_awaits_1189(F->up, (*(P174)rt_nil_check(F->d_710)).c_, &F->aw_2306);
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_478(F->up);
F->up->cur_level_139 = rt_sub(G_NV(F->up->cur_level_139), ((rt_int)1LL));
if ((({ rt_gstr at2320 = (*(P140)rt_nil_check(F->args_2308)); at2320.hi >= at2320.lo ? at2320.hi - at2320.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2308 = f_mk_237(F->up, rt_g_lit("void", 4));
}
f_ctype_503(F->up, (*(P117)rt_nil_check(F->y_711)).result_, &F->ct_2312);
F->head_2309 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2312))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_711)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2308))), one_rt_gstr(41)));
f_put_to_262(F->up, F->up->out_protos_131, cat_rt_gstr((*(P140)rt_nil_check(F->head_2309)), one_rt_gstr(59)));
f_put_to_262(F->up, F->up->out_frames_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->frame_2310))), rt_g_lit(" { int dummy;", 13)));
f_splice_269(F->up, F->up->out_frames_129, F->up->fields_buf_137);
f_put_to_262(F->up, F->up->out_frames_129, rt_g_lit("};", 2));
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr((*(P140)rt_nil_check(F->head_2309)), rt_g_lit(" {", 2)));
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P140)rt_nil_check(F->frame_2310))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P117)rt_nil_check(F->y_711)).kind_) == ((rt_int)4LL)) && ((*(P117)rt_nil_check(F->y_711)).access_path_ != NULL))) {
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_711)).access_path_))));
}
f_splice_269(F->up, F->up->out_funcs_133, F->up->code_136);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_711)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_262(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2306)));
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_262(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2306)));
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("  return;", 9));
}
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("}", 1));
f_put_to_262(F->up, F->up->out_funcs_133, rt_g_lit("", 0));
F->up->code_136 = F->saved_code_2294;
F->up->fields_buf_137 = F->saved_fields_2295;
F->up->in_func_138 = G_NV(F->saved_in_2296);
F->up->func_sym_142 = F->saved_sym_2297;
F->up->exits_145 = F->saved_exits_2298;
F->up->frames_150 = G_NV(F->saved_frames_2299);
F->up->handlers_153 = F->saved_handlers_2300;
F->up->cleanups_154 = F->saved_cleanups_2301;
F->up->pure_sym_226 = F->saved_pure_2305;
F->up->pure_depth_227 = G_NV(F->saved_pdepth_2307);
F->up->body_labels_191 = F->saved_labels_2302;
F->up->handler_exits_194 = F->saved_hx_2303;
F->up->handler_depth_195 = G_NV(F->saved_hd_2304);
ret_:

  return;
}

static void f_gen_statements_714(struct f_greenc_1fr *up_, P174 stmts_713) {
  struct f_gen_statements_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_713 = stmts_713;
F->s_2321 = NULL;
F->s_2321 = F->stmts_713;
while ((F->s_2321 != NULL)) {
f_gen_statement_730(F->up, F->s_2321);
F->s_2321 = (*(P174)rt_nil_check(F->s_2321)).next_;
}
L_end_2322: ;
ret_:

  return;
}

static void f_pop_frames_716(struct f_greenc_1fr *up_, rt_int upto_715) {
  struct f_pop_frames_716fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_715 = upto_715;
F->i_2323 = INT64_MIN;
F->i_2323 = G_NV(F->up->frames_150);
F->c_2324 = NULL;
F->c_2324 = F->up->cleanups_154;
while ((G_NV(F->i_2323) > F->upto_715)) {
f_emit_264(F->up, (*(P140)rt_nil_check((*(P151)rt_nil_check(F->c_2324)).s_)));
F->c_2324 = (*(P151)rt_nil_check(F->c_2324)).next_;
F->i_2323 = rt_sub(G_NV(F->i_2323), ((rt_int)1LL));
}
L_end_2325: ;
ret_:

  return;
}

static void f_push_cleanup_718(struct f_greenc_1fr *up_, rt_gstr s_717) {
  struct f_push_cleanup_718fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_717 = cp_rt_gstr(s_717);
F->up->cleanups_154 = ({ R152 *cell2326 = rt_alloc(sizeof(R152)); *cell2326 = cp_R152(({ R152 ag2327; ag2327.s_ = NULL; ag2327.next_ = F->up->cleanups_154; ag2327; })); (P151)cell2326; });
(*(P151)rt_nil_check(F->up->cleanups_154)).s_ = f_mk_237(F->up, F->s_717);
F->up->frames_150 = rt_add(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_719(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_154 = (*(P151)rt_nil_check(F->up->cleanups_154)).next_;
F->up->frames_150 = rt_sub(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_724(struct f_greenc_1fr *up_, P174 decls_720, P174 stmts_721, P174 hs_722, rt_int line_723) {
  struct f_guarded_724fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_720 = decls_720;
F->stmts_721 = stmts_721;
F->hs_722 = hs_722;
F->line_723 = line_723;
F->saved_hx_2328 = NULL;
F->f_2329 = NULL;
F->x_2330 = NULL;
F->h_2331 = NULL;
F->n_2332 = NULL;
F->first_2333 = INT_MIN;
F->first_2333 = 1;
F->has_others_2334 = INT_MIN;
F->has_others_2334 = 0;
F->conds_2335 = NULL;
if ((F->hs_722 == NULL)) {
f_decl_elements_667(F->up, F->decls_720);
f_gen_statements_714(F->up, F->stmts_721);
goto ret_;
}
f_new_name_240(F->up, rt_g_lit("xf", 2), &F->f_2329);
f_new_name_240(F->up, rt_g_lit("x", 1), &F->x_2330);
f_push_cleanup_718(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2329))), rt_g_lit(");", 2)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P140)rt_nil_check(F->f_2329))), one_rt_gstr(59)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->f_2329))), rt_g_lit(")) {", 4)));
f_decl_elements_667(F->up, F->decls_720);
f_gen_statements_714(F->up, F->stmts_721);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2329))), rt_g_lit(");", 2)));
f_emit_264(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_719(F->up);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2329))), rt_g_lit(");", 2)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->x_2330))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P140)rt_nil_check(F->x_2330))), rt_g_lit(");", 2)));
F->up->handlers_153 = ({ R152 *cell2336 = rt_alloc(sizeof(R152)); *cell2336 = cp_R152(({ R152 ag2337; ag2337.s_ = F->x_2330; ag2337.next_ = F->up->handlers_153; ag2337; })); (P151)cell2336; });
F->h_2331 = F->hs_722;
while ((F->h_2331 != NULL)) {
F->n_2332 = (*(P174)rt_nil_check(F->h_2331)).a_;
F->conds_2335 = f_mk_237(F->up, rt_g_lit("0", 1));
while ((F->n_2332 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2332)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2334 = 1;
F->conds_2335 = f_mk_237(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_224 = (*(P174)rt_nil_check(F->n_2332)).tag_;
f_exc_id_728(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2332)).name_)), G_NV((*(P174)rt_nil_check(F->h_2331)).line_), &F->f_2329);
F->conds_2335 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2335)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->x_2330))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->f_2329))));
}
F->n_2332 = (*(P174)rt_nil_check(F->n_2332)).next_;
}
L_end_2339: ;
if (G_NV(F->first_2333)) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2335))), rt_g_lit(") {", 3)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2335))), rt_g_lit(") {", 3)));
}
F->first_2333 = 0;
F->saved_hx_2328 = F->up->handler_exits_194;
F->up->handler_exits_194 = F->up->exits_145;
F->up->handler_depth_195 = rt_add(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->h_2331)).b_);
F->up->handler_depth_195 = rt_sub(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
F->up->handler_exits_194 = F->saved_hx_2328;
F->h_2331 = (*(P174)rt_nil_check(F->h_2331)).next_;
}
L_end_2338: ;
if ((!G_NV(F->has_others_2334))) {
f_emit_264(F->up, rt_g_lit("} else {", 8));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2330))), rt_g_lit(");", 2)));
}
f_emit_264(F->up, rt_g_lit("}", 1));
F->up->handlers_153 = (*(P151)rt_nil_check(F->up->handlers_153)).next_;
f_emit_264(F->up, rt_g_lit("}", 1));
f_emit_264(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_728(struct f_greenc_1fr *up_, rt_gstr name_725, rt_int line_726, P140 *r_727) {
  struct f_exc_id_728fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_725 = cp_rt_gstr(name_725);
F->line_726 = line_726;
F->r_727 = r_727;
F->y_2340 = NULL;
F->y_2340 = f_lookup_433(F->up, F->name_725);
if ((F->up->prefix_hint_224 != NULL)) {
F->y_2340 = f_member_of_1068(F->up, (*(P140)rt_nil_check(F->up->prefix_hint_224)), F->name_725, F->line_726);
F->up->prefix_hint_224 = NULL;
}
if (((F->y_2340 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2340)).kind_) != ((rt_int)6LL)))) {
f_fail_258(F->up, F->line_726, cat_rt_gstr(F->name_725, rt_g_lit(" is not an exception", 20)));
}
(*F->r_727) = (*(P117)rt_nil_check(F->y_2340)).cname_;
ret_:

  return;
}

static void f_gen_statement_730(struct f_greenc_1fr *up_, P174 s_729) {
  struct f_gen_statement_730fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_729 = s_729;
F->t_2341 = NULL;
F->vt_2342 = NULL;
F->c_2343 = NULL;
F->lv_2344 = NULL;
F->v_2345 = NULL;
F->x_2346 = NULL;
F->ro_2347 = INT_MIN;
{ rt_int sel2348 = G_NV((*(P174)rt_nil_check(F->s_729)).kind_);
if (0 || sel2348 == ((rt_int)20LL)) {
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_729)).a_)).kind_) == ((rt_int)8LL)) && ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_729)).a_)).b_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_729)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_729)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_732(F->up, F->s_729);
goto ret_;
}
F->up->in_lv_path_229 = 1;
F->up->last_deref_230 = 0;
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->s_729)).a_, &F->lv_2344, &F->t_2341, &F->c_2343, &F->ro_2347);
 (void)rt_range(F->ro_2347, 0, 1);
F->up->in_lv_path_229 = 0;
if (G_NV(F->ro_2347)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1250(F->up, (*(P174)rt_nil_check(F->s_729)).a_, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
if (f_restricted_here_574(F->up, F->t_2341)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_775(F->up, (*(P174)rt_nil_check(F->s_729)).b_)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_228 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2341)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_729)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->lv_2344;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_729)).b_, F->t_2341, &F->vt_2342, &F->v_2345);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_228 = 0;
f_check_type_498(F->up, F->vt_2342, F->t_2341, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
f_assign_code_631(F->up, (*(P140)rt_nil_check(F->lv_2344)), F->t_2341, (*(P140)rt_nil_check(F->v_2345)), F->c_2343, &F->x_2346);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2346)));
} else if (0 || sel2348 == ((rt_int)21LL)) {
F->up->vrp_ok_228 = 1;
f_gen_call_734(F->up, F->s_729);
F->up->vrp_ok_228 = 0;
} else if (0 || sel2348 == ((rt_int)22LL)) {
f_gen_if_736(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)23LL)) {
f_gen_case_738(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)24LL)) {
f_gen_loop_750(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)25LL)) {
f_gen_block_752(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)26LL)) {
f_gen_exit_757(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)27LL)) {
f_gen_return_759(F->up, F->s_729);
} else if (0 || sel2348 == ((rt_int)28LL)) {
if (((((*(P174)rt_nil_check(F->s_729)).tag_ != NULL) && f_is_task_name_1141(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_729)).tag_)))) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_729)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1191(F->up, F->s_729);
} else {
F->up->prefix_hint_224 = (*(P174)rt_nil_check(F->s_729)).tag_;
f_exc_id_728(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_729)).name_)), G_NV((*(P174)rt_nil_check(F->s_729)).line_), &F->x_2346);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2346))), rt_g_lit(");", 2)));
}
} else if (0 || sel2348 == ((rt_int)29LL)) {
if ((F->up->handlers_153 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_729)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->up->handlers_153)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2348 == ((rt_int)30LL)) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->s_729)).a_, F->up->ty_bool_157, &F->vt_2342, &F->v_2345);
f_check_type_498(F->up, F->vt_2342, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_729)).line_));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P140)rt_nil_check(F->v_2345))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2348 == ((rt_int)31LL)) {
} else if (0 || sel2348 == ((rt_int)57LL)) {
f_gen_label_707(F->up, F->s_729, 0);
} else if (0 || sel2348 == ((rt_int)58LL)) {
f_gen_label_707(F->up, F->s_729, 1);
} else {
f_task_statement_gen_1245(F->up, F->s_729);
}
}
ret_:

  return;
}

static void f_slice_assign_732(struct f_greenc_1fr *up_, P174 s_731) {
  struct f_slice_assign_732fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_731 = s_731;
F->lv_2349 = NULL;
F->v_2350 = NULL;
F->sl_2351 = NULL;
F->x_2352 = NULL;
F->t_2353 = NULL;
F->st_2354 = NULL;
F->vt_2355 = NULL;
F->c_2356 = NULL;
F->ro_2357 = INT_MIN;
F->up->in_lv_path_229 = 1;
F->up->last_deref_230 = 0;
f_lvalue_781(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_731)).a_)).a_, &F->lv_2349, &F->t_2353, &F->c_2356, &F->ro_2357);
 (void)rt_range(F->ro_2357, 0, 1);
F->up->in_lv_path_229 = 0;
if (G_NV(F->ro_2357)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_731)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1250(F->up, (*(P174)rt_nil_check(F->s_731)).a_, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
F->ro_2357 = 0;
f_index_on_799(F->up, (*(P140)rt_nil_check(F->lv_2349)), F->t_2353, (*(P174)rt_nil_check(F->s_731)).a_, &F->ro_2357, 0, &F->sl_2351, &F->st_2354, &F->c_2356);
 (void)rt_range(F->ro_2357, 0, 1);
F->up->vrp_ok_228 = 1;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_731)).b_, F->st_2354, &F->vt_2355, &F->v_2350);
F->up->vrp_ok_228 = 0;
f_check_type_498(F->up, F->vt_2355, F->st_2354, G_NV((*(P174)rt_nil_check(F->s_731)).line_));
f_ctype_503(F->up, F->st_2354, &F->x_2352);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2352))), rt_g_lit(" sl_ = ", 7)), (*(P140)rt_nil_check(F->sl_2351))), rt_g_lit("; as_", 5)), (*(P140)rt_nil_check(F->x_2352))), rt_g_lit("(&sl_, ", 7)), (*(P140)rt_nil_check(F->v_2350))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_734(struct f_greenc_1fr *up_, P174 s_733) {
  struct f_gen_call_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_733 = s_733;
F->c_2358 = NULL;
F->c_2358 = (*(P174)rt_nil_check(F->s_733)).a_;
F->t_2359 = NULL;
F->v_2360 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->c_2358)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->c_2358)).kind_) == ((rt_int)9LL)))) {
F->c_2358 = f_nn_311(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->s_733)).line_));
(*(P174)rt_nil_check(F->c_2358)).a_ = (*(P174)rt_nil_check(F->s_733)).a_;
}
if ((G_NV((*(P174)rt_nil_check(F->c_2358)).kind_) != ((rt_int)8LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_733)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_196 = NULL;
f_gcall_1028(F->up, F->c_2358, 1, &F->t_2359, &F->v_2360);
f_emit_264(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->v_2360)), one_rt_gstr(59)));
if ((F->up->post_checks_196 != NULL)) {
f_emit_264(F->up, (*(P140)rt_nil_check(F->up->post_checks_196)));
F->up->post_checks_196 = NULL;
}
ret_:

  return;
}

static void f_gen_if_736(struct f_greenc_1fr *up_, P174 s_735) {
  struct f_gen_if_736fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_735 = s_735;
F->a_2361 = NULL;
F->a_2361 = (*(P174)rt_nil_check(F->s_735)).a_;
F->first_2362 = INT_MIN;
F->first_2362 = 1;
F->t_2363 = NULL;
F->v_2364 = NULL;
while ((F->a_2361 != NULL)) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->a_2361)).a_, F->up->ty_bool_157, &F->t_2363, &F->v_2364);
f_check_type_498(F->up, F->t_2363, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_735)).line_));
if (G_NV(F->first_2362)) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2364))), rt_g_lit(") {", 3)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->v_2364))), rt_g_lit(") {", 3)));
}
F->first_2362 = 0;
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->a_2361)).b_);
F->a_2361 = (*(P174)rt_nil_check(F->a_2361)).next_;
}
L_end_2365: ;
if ((G_NV((*(P174)rt_nil_check(F->s_735)).flag_) == ((rt_int)1LL))) {
f_emit_264(F->up, rt_g_lit("} else {", 8));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_735)).b_);
}
f_emit_264(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_738(struct f_greenc_1fr *up_, P174 s_737) {
  struct f_gen_case_738fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_737 = s_737;
F->st_2366 = NULL;
F->vt_2367 = NULL;
F->first_2368 = INT_MIN;
F->first_2368 = 1;
F->a_2369 = NULL;
F->a_2369 = (*(P174)rt_nil_check(F->s_737)).b_;
F->lab_2370 = NULL;
F->sel_2371 = NULL;
F->tmp_2372 = NULL;
F->ct_2373 = NULL;
F->conds_2374 = NULL;
F->v_2375 = NULL;
F->lo_2376 = NULL;
F->hi_2377 = NULL;
F->clo_2379.lo = ((rt_int)1LL); F->clo_2379.hi = ((rt_int)2000LL);
F->clo_2379.lo2 = 1; F->clo_2379.hi2 = 1;
F->clo_2379.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2379));
for (rt_int i2380 = 0; i2380 < G_CNT(F->clo_2379); i2380++) F->clo_2379.p[i2380] = INT64_MIN;
F->chi_2381.lo = ((rt_int)1LL); F->chi_2381.hi = ((rt_int)2000LL);
F->chi_2381.lo2 = 1; F->chi_2381.hi2 = 1;
F->chi_2381.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2381));
for (rt_int i2382 = 0; i2382 < G_CNT(F->chi_2381); i2382++) F->chi_2381.p[i2382] = INT64_MIN;
F->nc_2383 = INT64_MIN;
F->nc_2383 = ((rt_int)0LL);
F->vlo_2384 = INT64_MIN;
F->vhi_2385 = INT64_MIN;
F->total_2386 = INT64_MIN;
F->ok_2387 = INT_MIN;
F->ok2_2388 = INT_MIN;
F->y_2389 = NULL;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_737)).a_, NULL, &F->st_2366, &F->sel_2371);
if ((!f_is_discrete_464(F->up, F->st_2366))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_240(F->up, rt_g_lit("sel", 3), &F->tmp_2372);
f_ctype_503(F->up, F->st_2366, &F->ct_2373);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2373))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->sel_2371))), one_rt_gstr(59)));
while ((F->a_2369 != NULL)) {
F->lab_2370 = (*(P174)rt_nil_check(F->a_2369)).a_;
F->conds_2374 = f_mk_237(F->up, rt_g_lit("0", 1));
while ((F->lab_2370 != NULL)) {
F->y_2389 = NULL;
if ((((*(P174)rt_nil_check(F->lab_2370)).b_ == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2370)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2389 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2370)).a_)).name_)));
if (((F->y_2389 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2389)).kind_) != ((rt_int)5LL)))) {
F->y_2389 = NULL;
}
}
if ((F->y_2389 != NULL)) {
f_check_type_498(F->up, (*(P117)rt_nil_check(F->y_2389)).t_, F->st_2366, G_NV((*(P174)rt_nil_check(F->s_737)).line_));
if ((!f_static_bounds_490(F->up, (*(P117)rt_nil_check(F->y_2389)).c_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2370)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2384 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2389)).c_)).mlo_);
F->vhi_2385 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2389)).c_)).mhi_);
F->conds_2374 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2374)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2389)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2389)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P174)rt_nil_check(F->lab_2370)).b_ == NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->lab_2370)).a_, F->st_2366, &F->vt_2367, &F->v_2375);
f_check_type_498(F->up, F->vt_2367, F->st_2366, G_NV((*(P174)rt_nil_check(F->s_737)).line_));
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2370)).a_, &F->vlo_2384, &F->ok_2387);
 (void)rt_range(F->ok_2387, 0, 1);
if ((!G_NV(F->ok_2387))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2385 = G_NV(F->vlo_2384);
F->conds_2374 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2374)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->v_2375))));
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->lab_2370)).a_, F->st_2366, &F->vt_2367, &F->lo_2376);
f_check_type_498(F->up, F->vt_2367, F->st_2366, G_NV((*(P174)rt_nil_check(F->s_737)).line_));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->lab_2370)).b_, F->st_2366, &F->vt_2367, &F->hi_2377);
f_check_type_498(F->up, F->vt_2367, F->st_2366, G_NV((*(P174)rt_nil_check(F->s_737)).line_));
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2370)).a_, &F->vlo_2384, &F->ok_2387);
 (void)rt_range(F->ok_2387, 0, 1);
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2370)).b_, &F->vhi_2385, &F->ok2_2388);
 (void)rt_range(F->ok2_2388, 0, 1);
if ((!(G_NV(F->ok_2387) && G_NV(F->ok2_2388)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2374 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2374)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2376))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2372))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2377))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2384) <= G_NV(F->vhi_2385))) {
{ rt_int lo2394 = ((rt_int)1LL), hi2395 = G_NV(F->nc_2383);
for (rt_int it2396 = lo2394; it2396 <= hi2395; it2396++) {
F->k_2393 = it2396;
if (((G_NV(F->vlo_2384) <= G_NV(({ A2378 ix2397 = F->chi_2381; ix2397.p[rt_index(F->k_2393, ix2397.lo, ix2397.hi) - ix2397.lo]; }))) && (G_NV(({ A2378 ix2398 = F->clo_2379; ix2398.p[rt_index(F->k_2393, ix2398.lo, ix2398.hi) - ix2398.lo]; })) <= G_NV(F->vhi_2385)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2392: ;
if ((G_NV(F->nc_2383) < ((rt_int)2000LL))) {
F->nc_2383 = rt_add(G_NV(F->nc_2383), ((rt_int)1LL));
(*({ A2378 *ix2399 = &(F->clo_2379); &ix2399->p[rt_index(G_NV(F->nc_2383), ix2399->lo, ix2399->hi) - ix2399->lo]; })) = G_NV(F->vlo_2384);
(*({ A2378 *ix2400 = &(F->chi_2381); &ix2400->p[rt_index(G_NV(F->nc_2383), ix2400->lo, ix2400->hi) - ix2400->lo]; })) = G_NV(F->vhi_2385);
}
}
F->lab_2370 = (*(P174)rt_nil_check(F->lab_2370)).next_;
}
L_end_2391: ;
if (G_NV(F->first_2368)) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2374))), rt_g_lit(") {", 3)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2374))), rt_g_lit(") {", 3)));
}
F->first_2368 = 0;
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->a_2369)).b_);
F->a_2369 = (*(P174)rt_nil_check(F->a_2369)).next_;
}
L_end_2390: ;
if ((G_NV((*(P174)rt_nil_check(F->s_737)).flag_) != ((rt_int)1LL))) {
f_selector_range_744(F->up, (*(P174)rt_nil_check(F->s_737)).a_, F->st_2366, &F->vlo_2384, &F->vhi_2385, &F->ok_2387);
 (void)rt_range(F->ok_2387, 0, 1);
if ((!G_NV(F->ok_2387))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_494(F->up, F->st_2366)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2386 = ((rt_int)0LL);
{ rt_int lo2403 = ((rt_int)1LL), hi2404 = G_NV(F->nc_2383);
for (rt_int it2405 = lo2403; it2405 <= hi2404; it2405++) {
F->k_2402 = it2405;
if (((G_NV(({ A2378 ix2406 = F->clo_2379; ix2406.p[rt_index(F->k_2402, ix2406.lo, ix2406.hi) - ix2406.lo]; })) < G_NV(F->vlo_2384)) || (G_NV(({ A2378 ix2407 = F->chi_2381; ix2407.p[rt_index(F->k_2402, ix2407.lo, ix2407.hi) - ix2407.lo]; })) > G_NV(F->vhi_2385)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_494(F->up, F->st_2366)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2386 = rt_add(G_NV(F->total_2386), rt_add(rt_sub(G_NV(({ A2378 ix2408 = F->chi_2381; ix2408.p[rt_index(F->k_2402, ix2408.lo, ix2408.hi) - ix2408.lo]; })), G_NV(({ A2378 ix2409 = F->clo_2379; ix2409.p[rt_index(F->k_2402, ix2409.lo, ix2409.hi) - ix2409.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2401: ;
if ((G_NV(F->total_2386) != rt_add(rt_sub(G_NV(F->vhi_2385), G_NV(F->vlo_2384)), ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_737)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_494(F->up, F->st_2366)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2368)) {
f_emit_264(F->up, rt_g_lit("{", 1));
} else {
f_emit_264(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P174)rt_nil_check(F->s_737)).flag_) == ((rt_int)1LL))) {
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_737)).c_);
} else {
f_emit_264(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_264(F->up, rt_g_lit("}", 1));
f_emit_264(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_744(struct f_greenc_1fr *up_, P174 e_739, P122 t_740, rt_int *lo_741, rt_int *hi_742, int *ok_743) {
  struct f_selector_range_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_739 = e_739;
F->t_740 = t_740;
F->lo_741 = lo_741;
F->hi_742 = hi_742;
F->ok_743 = ok_743;
F->y_2410 = NULL;
(*F->ok_743) = 0;
(*F->lo_741) = ((rt_int)0LL);
(*F->hi_742) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_739)).kind_) == ((rt_int)5LL))) {
F->y_2410 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_739)).name_)));
if ((((F->y_2410 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2410)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2410)).kind_) == ((rt_int)2LL)))) && f_static_bounds_490(F->up, (*(P117)rt_nil_check(F->y_2410)).c_))) {
(*F->lo_741) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2410)).c_)).mlo_);
(*F->hi_742) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2410)).c_)).mhi_);
(*F->ok_743) = 1;
goto ret_;
}
}
if ((G_NV((*(P122)rt_nil_check(F->t_740)).kind_) == ((rt_int)2LL))) {
(*F->hi_742) = ((rt_int)1LL);
(*F->ok_743) = 1;
} else if (((G_NV((*(P122)rt_nil_check(F->t_740)).kind_) == ((rt_int)11LL)) && ((*(P122)rt_nil_check(F->t_740)).tcons_ == NULL))) {
(*F->hi_742) = ((rt_int)127LL);
(*F->ok_743) = 1;
} else if ((G_NV((*(P122)rt_nil_check(F->t_740)).kind_) == ((rt_int)4LL))) {
(*F->hi_742) = rt_sub(f_list_len_317(F->up, (*(P122)rt_nil_check(F->t_740)).lits_), ((rt_int)1LL));
(*F->ok_743) = 1;
} else if (f_static_bounds_490(F->up, (*(P122)rt_nil_check(F->t_740)).tcons_)) {
(*F->lo_741) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_740)).tcons_)).mlo_);
(*F->hi_742) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_740)).tcons_)).mhi_);
(*F->ok_743) = 1;
}
ret_:

  return;
}

static void f_push_exit_748(struct f_greenc_1fr *up_, P140 match_745, int is_loop_746, P140 *label_747) {
  struct f_push_exit_748fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_745 = match_745;
F->is_loop_746 = is_loop_746;
F->label_747 = label_747;
f_new_name_240(F->up, rt_g_lit("L_end_", 6), &(*F->label_747));
F->up->exits_145 = ({ R144 *cell2411 = rt_alloc(sizeof(R144)); *cell2411 = cp_R144(({ R144 ag2412; ag2412.match_ = F->match_745; ag2412.label_ = (*F->label_747); ag2412.depth_ = G_NV(F->up->frames_150); ag2412.is_loop_ = F->is_loop_746; ag2412.next_ = F->up->exits_145; ag2412; })); (P143)cell2411; });
ret_:

  return;
}

static void f_gen_loop_750(struct f_greenc_1fr *up_, P174 s_749) {
  struct f_gen_loop_750fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_749 = s_749;
F->t_2413 = NULL;
F->vt_2414 = NULL;
F->c_2415 = NULL;
F->label_2416 = NULL;
F->cond_2417 = NULL;
F->acc_2418 = NULL;
F->lov_2419 = NULL;
F->hiv_2420 = NULL;
F->it_2421 = NULL;
F->y_2422 = NULL;
F->r_2423 = NULL;
f_push_exit_748(F->up, (*(P174)rt_nil_check(F->s_749)).tag_, 1, &F->label_2416);
if ((G_NV((*(P174)rt_nil_check(F->s_749)).flag_) == ((rt_int)0LL))) {
f_emit_264(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_749)).b_);
f_emit_264(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P174)rt_nil_check(F->s_749)).flag_) == ((rt_int)1LL))) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->s_749)).a_, F->up->ty_bool_157, &F->vt_2414, &F->cond_2417);
f_check_type_498(F->up, F->vt_2414, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_749)).line_));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P140)rt_nil_check(F->cond_2417))), rt_g_lit(") {", 3)));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_749)).b_);
f_emit_264(F->up, rt_g_lit("}", 1));
} else {
F->r_2423 = (*(P174)rt_nil_check(F->s_749)).a_;
F->c_2415 = f_new_cons_484(F->up);
if ((G_NV((*(P174)rt_nil_check(F->r_2423)).kind_) == ((rt_int)14LL))) {
f_range_bounds_820(F->up, (*(P174)rt_nil_check(F->r_2423)).a_, (*(P174)rt_nil_check(F->r_2423)).b_, NULL, G_NV((*(P174)rt_nil_check(F->s_749)).line_), &F->t_2413, &(*(P178)rt_nil_check(F->c_2415)).lo_, &(*(P178)rt_nil_check(F->c_2415)).hi_);
} else {
f_resolve_519(F->up, F->r_2423, &F->t_2413, &F->c_2415);
if (((*(P178)rt_nil_check(F->c_2415)).lo_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_749)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P122)rt_nil_check(F->t_2413)).kind_) != ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->t_2413)).kind_) != ((rt_int)4LL))) && (G_NV((*(P122)rt_nil_check(F->t_2413)).kind_) != ((rt_int)11LL))) && (G_NV((*(P122)rt_nil_check(F->t_2413)).kind_) != ((rt_int)2LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_749)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_749)).name_)), F->t_2413, &F->acc_2418);
f_new_name_240(F->up, rt_g_lit("lo", 2), &F->lov_2419);
f_new_name_240(F->up, rt_g_lit("hi", 2), &F->hiv_2420);
f_new_name_240(F->up, rt_g_lit("it", 2), &F->it_2421);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P140)rt_nil_check(F->lov_2419))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2415)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hiv_2420))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2415)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P174)rt_nil_check(F->s_749)).ival_) == ((rt_int)1LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->hiv_2420))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lov_2419))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit("--) {", 5)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lov_2419))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hiv_2420))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2421))), rt_g_lit("++) {", 5)));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2418)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->it_2421))), one_rt_gstr(59)));
f_open_scope_477(F->up);
F->y_2422 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->s_749)).name_);
(*(P117)rt_nil_check(F->y_2422)).t_ = F->t_2413;
(*(P117)rt_nil_check(F->y_2422)).ro_ = 1;
f_bind_653(F->up, F->y_2422, F->acc_2418);
f_define_476(F->up, F->y_2422, G_NV((*(P174)rt_nil_check(F->s_749)).line_));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_749)).b_);
f_close_scope_478(F->up);
f_emit_264(F->up, rt_g_lit("}", 1));
f_emit_264(F->up, rt_g_lit("}", 1));
}
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_264(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2416)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_752(struct f_greenc_1fr *up_, P174 s_751) {
  struct f_gen_block_752fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_751 = s_751;
F->label_2424 = NULL;
F->aw_2425 = NULL;
f_push_exit_748(F->up, (*(P174)rt_nil_check(F->s_751)).tag_, 0, &F->label_2424);
f_emit_264(F->up, rt_g_lit("{", 1));
f_open_scope_477(F->up);
if (((*(P174)rt_nil_check(F->s_751)).tag_ != NULL)) {
f_push_unit_446(F->up, (*(P174)rt_nil_check(F->s_751)).tag_);
}
f_guarded_724(F->up, (*(P174)rt_nil_check(F->s_751)).a_, (*(P174)rt_nil_check(F->s_751)).b_, (*(P174)rt_nil_check(F->s_751)).c_, G_NV((*(P174)rt_nil_check(F->s_751)).line_));
f_task_awaits_1189(F->up, (*(P174)rt_nil_check(F->s_751)).a_, &F->aw_2425);
f_emit_264(F->up, (*(P140)rt_nil_check(F->aw_2425)));
if (((*(P174)rt_nil_check(F->s_751)).tag_ != NULL)) {
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
}
f_close_scope_478(F->up);
f_emit_264(F->up, rt_g_lit("}", 1));
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_264(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2424)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_755(struct f_greenc_1fr *up_, P174 s_753, P143 x_754) {
  struct f_exit_matches_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_753 = s_753;
F->x_754 = x_754;
if (((*(P174)rt_nil_check(F->s_753)).name_ == NULL)) {
F->result_ = G_NV((*(P143)rt_nil_check(F->x_754)).is_loop_);
goto ret_;
} else if (((*(P143)rt_nil_check(F->x_754)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_754)).match_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_753)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_757(struct f_greenc_1fr *up_, P174 s_756) {
  struct f_gen_exit_757fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_756 = s_756;
F->x_2426 = NULL;
F->x_2426 = F->up->exits_145;
F->t_2427 = NULL;
F->v_2428 = NULL;
while ((F->x_2426 != NULL)) {
if (((G_NV(F->up->accept_depth_212) > ((rt_int)0LL)) && (F->x_2426 == F->up->accept_exits_149))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_756)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_195) > ((rt_int)0LL)) && (F->x_2426 == F->up->handler_exits_194))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_756)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_755(F->up, F->s_756, F->x_2426)) {
if ((!G_NV((*(P143)rt_nil_check(F->x_2426)).is_loop_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_756)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_756)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P174)rt_nil_check(F->s_756)).a_ != NULL)) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->s_756)).a_, F->up->ty_bool_157, &F->t_2427, &F->v_2428);
f_check_type_498(F->up, F->t_2427, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_756)).line_));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2428))), rt_g_lit(") {", 3)));
}
f_pop_frames_716(F->up, G_NV((*(P143)rt_nil_check(F->x_2426)).depth_));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_2426)).label_))), one_rt_gstr(59)));
if (((*(P174)rt_nil_check(F->s_756)).a_ != NULL)) {
f_emit_264(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2426 = (*(P143)rt_nil_check(F->x_2426)).next_;
}
L_end_2429: ;
if (((*(P174)rt_nil_check(F->s_756)).name_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_756)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_756)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_756)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_759(struct f_greenc_1fr *up_, P174 s_758) {
  struct f_gen_return_759fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_758 = s_758;
F->vt_2430 = NULL;
F->v_2431 = NULL;
F->x_2432 = NULL;
if ((!G_NV(F->up->in_func_138))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_758)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_212) > ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_758)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P174)rt_nil_check(F->s_758)).a_ != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_758)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_716(F->up, ((rt_int)0LL));
f_emit_264(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P174)rt_nil_check(F->s_758)).a_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_758)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_758)).a_, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, &F->vt_2430, &F->v_2431);
f_check_type_498(F->up, F->vt_2430, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, G_NV((*(P174)rt_nil_check(F->s_758)).line_));
if (((f_is_numeric_462(F->up, F->vt_2430) || f_is_discrete_464(F->up, F->vt_2430)) && f_bounded_486(F->up, (*(P117)rt_nil_check(F->up->func_sym_142)).c_))) {
f_assign_code_631(F->up, rt_g_lit("F->result_", 10), F->vt_2430, (*(P140)rt_nil_check(F->v_2431)), (*(P117)rt_nil_check(F->up->func_sym_142)).c_, &F->x_2432);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2432)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->v_2431))), one_rt_gstr(59)));
}
f_pop_frames_716(F->up, ((rt_int)0LL));
f_emit_264(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_762(struct f_greenc_1fr *up_, P117 y_760, P140 *r_761) {
  struct f_access_of_762fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_760 = y_760;
F->r_761 = r_761;
F->p_2433 = NULL;
if ((G_NV((*(P117)rt_nil_check(F->y_760)).level_) <= ((rt_int)0LL))) {
(*F->r_761) = (*(P117)rt_nil_check(F->y_760)).access_path_;
goto ret_;
}
F->p_2433 = f_mk_237(F->up, rt_g_lit("F", 1));
{ rt_int lo2436 = ((rt_int)1LL), hi2437 = rt_sub(G_NV(F->up->cur_level_139), G_NV((*(P117)rt_nil_check(F->y_760)).level_));
for (rt_int it2438 = lo2436; it2438 <= hi2437; it2438++) {
F->i_2435 = it2438;
F->p_2433 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2433)), rt_g_lit("->up", 4)));
}
}
L_end_2434: ;
if (G_NV((*(P117)rt_nil_check(F->y_760)).byref_)) {
(*F->r_761) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->p_2433))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_760)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_761) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2433)), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_760)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_765(struct f_greenc_1fr *up_, rt_int l_763, P140 *r_764) {
  struct f_link_to_765fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_763 = l_763;
F->r_764 = r_764;
(*F->r_764) = f_mk_237(F->up, rt_g_lit("F", 1));
{ rt_int lo2441 = ((rt_int)1LL), hi2442 = rt_sub(G_NV(F->up->cur_level_139), F->l_763);
for (rt_int it2443 = lo2441; it2443 <= hi2442; it2443++) {
F->i_2440 = it2443;
(*F->r_764) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_764))), rt_g_lit("->up", 4)));
}
}
L_end_2439: ;
ret_:

  return;
}

static rt_gstr f_c_ident_767(struct f_greenc_1fr *up_, rt_gstr s_766) {
  struct f_c_ident_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_766 = cp_rt_gstr(s_766);
if (eq_rt_gstr(F->s_766, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_766, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_248(F->up, F->s_766);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_771(struct f_greenc_1fr *up_, rt_gstr base_768, P122 t_769, P140 *r_770) {
  struct f_deref_771fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_768 = cp_rt_gstr(base_768);
F->t_769 = t_769;
F->r_770 = r_770;
F->ct_2444 = NULL;
if (G_NV(F->up->in_lv_path_229)) {
F->up->last_deref_230 = 1;
}
f_ctype_503(F->up, F->t_769, &F->ct_2444);
(*F->r_770) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P140)rt_nil_check(F->ct_2444))), rt_g_lit(")rt_nil_check(", 14)), F->base_768), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_773(struct f_greenc_1fr *up_, P174 e_772) {
  struct f_is_object_773fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_772 = e_772;
F->y_2445 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_772)).kind_) == ((rt_int)5LL))) {
F->y_2445 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_772)).name_)));
if ((!(F->y_2445 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2445)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2445)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_772)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_773(F->up, (*(P174)rt_nil_check(F->e_772)).a_);
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_772)).kind_) == ((rt_int)8LL))) {
if ((((*(P174)rt_nil_check(F->e_772)).b_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_772)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_773(F->up, (*(P174)rt_nil_check(F->e_772)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_775(struct f_greenc_1fr *up_, P174 e_774) {
  struct f_is_const_access_775fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_774 = e_774;
F->y_2446 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_774)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2446 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_774)).name_)));
if ((F->y_2446 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P117)rt_nil_check(F->y_2446)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P117)rt_nil_check(F->y_2446)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P117)rt_nil_check(F->y_2446)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2446)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_781(struct f_greenc_1fr *up_, P174 e_776, P140 *code_out_777, P122 *t_778, P178 *c_779, int *ro_780) {
  struct f_lvalue_781fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_776 = e_776;
F->code_out_777 = code_out_777;
F->t_778 = t_778;
F->c_779 = c_779;
F->ro_780 = ro_780;
F->cp_2447 = INT_MIN;
F->ex_2448 = NULL;
F->y_2449 = NULL;
F->base_2450 = NULL;
F->bt_2451 = NULL;
F->bc_2452 = NULL;
f_expanded_843(F->up, F->e_776, &F->ex_2448);
if ((F->ex_2448 != NULL)) {
f_lvalue_781(F->up, F->ex_2448, &(*F->code_out_777), &(*F->t_778), &(*F->c_779), &(*F->ro_780));
 (void)rt_range((*F->ro_780), 0, 1);
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->e_776)).a_)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_776)).ival_) > ((rt_int)0LL))) {
F->y_2449 = f_lookup_at_442(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_776)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)9LL))) {
F->y_2449 = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->e_776)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)), G_NV((*(P174)rt_nil_check(F->e_776)).line_));
} else {
F->y_2449 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)));
}
if ((F->y_2449 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_776)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2449)).kind_) == ((rt_int)12LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_776)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2449)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2449)).kind_) != ((rt_int)2LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_776)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_776)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_762(F->up, F->y_2449, &(*F->code_out_777));
(*F->t_778) = (*(P117)rt_nil_check(F->y_2449)).t_;
(*F->c_779) = (*(P117)rt_nil_check(F->y_2449)).c_;
(*F->ro_780) = G_NV((*(P117)rt_nil_check(F->y_2449)).ro_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)15LL))) {
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->e_776)).a_, &(*F->code_out_777), &(*F->t_778), &(*F->c_779), &(*F->ro_780));
 (void)rt_range((*F->ro_780), 0, 1);
} else if ((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)9LL))) {
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->e_776)).a_, &F->base_2450, &F->bt_2451, &F->bc_2452, &(*F->ro_780));
 (void)rt_range((*F->ro_780), 0, 1);
F->cp_2447 = ((G_NV((*(P122)rt_nil_check(F->bt_2451)).kind_) == ((rt_int)8LL)) && f_is_const_access_775(F->up, (*(P174)rt_nil_check(F->e_776)).a_));
f_select_on_790(F->up, (*(P140)rt_nil_check(F->base_2450)), F->bt_2451, F->e_776, &(*F->ro_780), 1, &(*F->code_out_777), &(*F->t_778), &(*F->c_779));
 (void)rt_range((*F->ro_780), 0, 1);
(*F->ro_780) = (G_NV((*F->ro_780)) || G_NV(F->cp_2447));
} else if ((G_NV((*(P174)rt_nil_check(F->e_776)).kind_) == ((rt_int)8LL))) {
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->e_776)).a_, &F->base_2450, &F->bt_2451, &F->bc_2452, &(*F->ro_780));
 (void)rt_range((*F->ro_780), 0, 1);
F->cp_2447 = ((G_NV((*(P122)rt_nil_check(F->bt_2451)).kind_) == ((rt_int)8LL)) && f_is_const_access_775(F->up, (*(P174)rt_nil_check(F->e_776)).a_));
f_index_on_799(F->up, (*(P140)rt_nil_check(F->base_2450)), F->bt_2451, F->e_776, &(*F->ro_780), 1, &(*F->code_out_777), &(*F->t_778), &(*F->c_779));
 (void)rt_range((*F->ro_780), 0, 1);
(*F->ro_780) = (G_NV((*F->ro_780)) || G_NV(F->cp_2447));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_776)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_790(struct f_greenc_1fr *up_, rt_gstr base_782, P122 bt_783, P174 e_784, int *ro_785, int lv_786, P140 *code_out_787, P122 *t_788, P178 *c_789) {
  struct f_select_on_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_782 = cp_rt_gstr(base_782);
F->bt_783 = bt_783;
F->e_784 = e_784;
F->ro_785 = ro_785;
F->lv_786 = lv_786;
F->code_out_787 = code_out_787;
F->t_788 = t_788;
F->c_789 = c_789;
F->f_2453 = NULL;
F->d_2454 = NULL;
F->ct_2455 = NULL;
F->tmp_2456 = NULL;
(*F->c_789) = F->up->no_cons_219;
if ((G_NV((*(P122)rt_nil_check(F->bt_783)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_619(F->up, F->bt_783);
f_deref_771(F->up, F->base_782, F->bt_783, &F->d_2454);
(*F->ro_785) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_787) = F->d_2454;
(*F->t_788) = (*(P122)rt_nil_check(F->bt_783)).target_;
goto ret_;
}
f_select_on_790(F->up, (*(P140)rt_nil_check(F->d_2454)), (*(P122)rt_nil_check(F->bt_783)).target_, F->e_784, &(*F->ro_785), 1, &(*F->code_out_787), &(*F->t_788), &(*F->c_789));
 (void)rt_range((*F->ro_785), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_783)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P122)rt_nil_check(F->bt_783)).priv_) && (!f_inside_package_1070(F->up, (*(P122)rt_nil_check(F->bt_783)).decl_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_784)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_494(F->up, F->bt_783)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2453 = (*(P122)rt_nil_check(F->bt_783)).fields_;
while ((F->f_2453 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2453)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_)))) {
f_subst_cons_591(F->up, (*(P1938)rt_nil_check(F->f_2453)).c_, F->base_782, &(*F->c_789));
(*F->code_out_787) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(F->base_782, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_)))));
(*F->t_788) = (*(P1938)rt_nil_check(F->f_2453)).t_;
if (G_NV((*(P1938)rt_nil_check(F->f_2453)).is_const_)) {
(*F->ro_785) = 1;
}
if (((*(P1938)rt_nil_check(F->f_2453)).cond_ != NULL)) {
f_ctype_503(F->up, F->bt_783, &F->ct_2455);
f_new_name_240(F->up, rt_g_lit("vr", 2), &F->tmp_2456);
if (F->lv_786) {
(*F->code_out_787) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2455))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2456))), rt_g_lit(" = &(", 5)), F->base_782), rt_g_lit("); if (!(", 9)), f_subst_585(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2453)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->tmp_2456))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P140)rt_nil_check(F->tmp_2456))), rt_g_lit("->", 2)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_787) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2455))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2456))), rt_g_lit(" = ", 3)), F->base_782), rt_g_lit("; if (!(", 8)), f_subst_585(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2453)).cond_)), (*(P140)rt_nil_check(F->tmp_2456)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P140)rt_nil_check(F->tmp_2456))), one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2453 = (*(P1938)rt_nil_check(F->f_2453)).next_;
}
L_end_2457: ;
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_784)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_494(F->up, F->bt_783), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_))));
}
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_784)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_784)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_799(struct f_greenc_1fr *up_, rt_gstr base_791, P122 bt_792, P174 e_793, int *ro_794, int lv_795, P140 *code_out_796, P122 *t_797, P178 *c_798) {
  struct f_index_on_799fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_791 = cp_rt_gstr(base_791);
F->bt_792 = bt_792;
F->e_793 = e_793;
F->ro_794 = ro_794;
F->lv_795 = lv_795;
F->code_out_796 = code_out_796;
F->t_797 = t_797;
F->c_798 = c_798;
F->a_2458 = NULL;
F->a_2458 = (*(P174)rt_nil_check(F->e_793)).b_;
F->arrt_2459 = NULL;
F->arrt_2459 = F->bt_792;
F->acc_2460 = NULL;
F->acc_2460 = f_mk_237(F->up, F->base_791);
F->it_2461 = NULL;
F->i_2462 = NULL;
F->lo_2463 = NULL;
F->hi_2464 = NULL;
F->d_2465 = NULL;
F->ct_2466 = NULL;
F->tmp_2467 = NULL;
(*F->c_798) = F->up->no_cons_219;
if ((G_NV((*(P122)rt_nil_check(F->bt_792)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_619(F->up, F->bt_792);
f_deref_771(F->up, F->base_791, F->bt_792, &F->d_2465);
(*F->ro_794) = 0;
f_index_on_799(F->up, (*(P140)rt_nil_check(F->d_2465)), (*(P122)rt_nil_check(F->bt_792)).target_, F->e_793, &(*F->ro_794), F->lv_795, &(*F->code_out_796), &(*F->t_797), &(*F->c_798));
 (void)rt_range((*F->ro_794), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_792)).kind_) != ((rt_int)6LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2458 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P174)rt_nil_check(F->a_2458)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check(F->a_2458)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P174)rt_nil_check(F->a_2458)).kind_) == ((rt_int)5LL)) && f_is_type_name_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2458)).name_)))))) {
if ((((*(P174)rt_nil_check(F->a_2458)).next_ != NULL) || (G_NV((*(P122)rt_nil_check(F->bt_792)).dims_) != ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_533(F->up, F->a_2458, (*(P122)rt_nil_check(F->bt_792)).idx_, &F->it_2461, &F->lo_2463, &F->hi_2464);
f_check_type_498(F->up, F->it_2461, (*(P122)rt_nil_check(F->bt_792)).idx_, G_NV((*(P174)rt_nil_check(F->e_793)).line_));
f_ctype_503(F->up, F->bt_792, &F->d_2465);
f_new_name_240(F->up, rt_g_lit("sl", 2), &F->tmp_2467);
(*F->code_out_796) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->d_2465))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(" = ", 3)), F->base_791), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check(F->lo_2463))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check(F->hi_2464))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".hi); } ", 8)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".p += l_ - ", 11)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo; ", 5)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit("; })", 4)));
(*F->t_797) = F->bt_792;
(*F->ro_794) = 1;
goto ret_;
}
if ((f_list_len_317(F->up, F->a_2458) > G_NV((*(P122)rt_nil_check(F->bt_792)).dims_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_494(F->up, F->bt_792)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2458 != NULL)) {
f_gexpr_825(F->up, F->a_2458, (*(P122)rt_nil_check(F->arrt_2459)).idx_, &F->it_2461, &F->i_2462);
f_check_type_498(F->up, F->it_2461, (*(P122)rt_nil_check(F->arrt_2459)).idx_, G_NV((*(P174)rt_nil_check(F->e_793)).line_));
f_ctype_503(F->up, F->arrt_2459, &F->ct_2466);
f_new_name_240(F->up, rt_g_lit("ix", 2), &F->tmp_2467);
if (F->lv_795) {
F->acc_2460 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2466))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->acc_2460))), rt_g_lit("); &", 4)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit("->p[rt_index(", 13)), (*(P140)rt_nil_check(F->i_2462))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit("->lo, ", 6)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit("->hi) - ", 8)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2460 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2466))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->acc_2460))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".p[rt_index(", 12)), (*(P140)rt_nil_check(F->i_2462))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2467))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_798) = (*(P122)rt_nil_check(F->arrt_2459)).elemcons_;
F->arrt_2459 = (*(P122)rt_nil_check(F->arrt_2459)).elem_;
F->a_2458 = (*(P174)rt_nil_check(F->a_2458)).next_;
}
L_end_2468: ;
(*F->code_out_796) = F->acc_2460;
(*F->t_797) = F->arrt_2459;
if ((!F->lv_795)) {
(*F->ro_794) = 1;
}
ret_:

  return;
}

static int f_type_attribute_802(struct f_greenc_1fr *up_, P122 t_800, rt_gstr name_801) {
  struct f_type_attribute_802fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_800 = t_800;
F->name_801 = cp_rt_gstr(name_801);
F->y_2469 = NULL;
F->y_2469 = ({ A116 ix2470 = F->up->table_119; ix2470.p[rt_index(f_hash_426(F->up, F->name_801), ix2470.lo, ix2470.hi) - ix2470.lo]; });
F->p_2471 = NULL;
while ((F->y_2469 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2469)).name_)), F->name_801) && ((G_NV((*(P117)rt_nil_check(F->y_2469)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2469)).kind_) == ((rt_int)4LL))))) {
if (f_same_453(F->up, (*(P117)rt_nil_check(F->y_2469)).result_, F->t_800)) {
F->result_ = 1;
goto ret_;
}
F->p_2471 = (*(P117)rt_nil_check(F->y_2469)).params_;
while ((F->p_2471 != NULL)) {
if (f_same_453(F->up, (*(P1920)rt_nil_check(F->p_2471)).t_, F->t_800)) {
F->result_ = 1;
goto ret_;
}
F->p_2471 = (*(P1920)rt_nil_check(F->p_2471)).next_;
}
L_end_2473: ;
}
F->y_2469 = (*(P117)rt_nil_check(F->y_2469)).chain_;
}
L_end_2472: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_804(struct f_greenc_1fr *up_, rt_gstr n_803) {
  struct f_is_type_name_804fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_803 = cp_rt_gstr(n_803);
F->y_2474 = NULL;
F->y_2474 = f_lookup_433(F->up, F->n_803);
if ((!(F->y_2474 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2474)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_806(struct f_greenc_1fr *up_, P174 e_805) {
  struct f_is_char_lit_806fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_805 = e_805;
if ((!(G_NV((*(P174)rt_nil_check(F->e_805)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2475 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_805)).name_)); at2475.hi >= at2475.lo ? at2475.hi - at2475.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_808(struct f_greenc_1fr *up_, P174 e_807) {
  struct f_is_enum_lit_808fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_807 = e_807;
F->y_2476 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_807)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2476 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_807)).name_)));
if ((!(F->y_2476 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2476)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_810(struct f_greenc_1fr *up_, rt_gstr s_809) {
  struct f_c_string_810fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_809 = cp_rt_gstr(s_809);
F->n_2477 = INT64_MIN;
F->n_2477 = ((rt_int)0LL);
{ rt_int lo2481 = ((rt_int)1LL), hi2482 = ({ rt_gstr at2479 = F->s_809; at2479.hi >= at2479.lo ? at2479.hi - at2479.lo + 1 : (rt_int)0; });
for (rt_int it2483 = lo2481; it2483 <= hi2482; it2483++) {
F->i_2480 = it2483;
if ((((G_NV(({ rt_gstr ix2484 = F->s_809; ix2484.p[rt_index(F->i_2480, ix2484.lo, ix2484.hi) - ix2484.lo]; })) == 34) || (G_NV(({ rt_gstr ix2485 = F->s_809; ix2485.p[rt_index(F->i_2480, ix2485.lo, ix2485.hi) - ix2485.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2486 = F->s_809; ix2486.p[rt_index(F->i_2480, ix2486.lo, ix2486.hi) - ix2486.lo]; })) == 63))) {
F->n_2477 = rt_add(G_NV(F->n_2477), ((rt_int)1LL));
}
}
}
L_end_2478: ;
{
F->r_2489.lo = ((rt_int)1LL); F->r_2489.hi = rt_add(rt_add(({ rt_gstr at2488 = F->s_809; at2488.hi >= at2488.lo ? at2488.hi - at2488.lo + 1 : (rt_int)0; }), G_NV(F->n_2477)), ((rt_int)2LL));
F->r_2489.lo2 = 1; F->r_2489.hi2 = 1;
F->r_2489.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2489));
memset(F->r_2489.p, 0xFF, (size_t)G_CNT(F->r_2489));
F->j_2491 = INT64_MIN;
F->j_2491 = ((rt_int)1LL);
(*({ rt_gstr *ix2492 = &(F->r_2489); &ix2492->p[rt_index(((rt_int)1LL), ix2492->lo, ix2492->hi) - ix2492->lo]; })) = 34;
{ rt_int lo2496 = ((rt_int)1LL), hi2497 = ({ rt_gstr at2494 = F->s_809; at2494.hi >= at2494.lo ? at2494.hi - at2494.lo + 1 : (rt_int)0; });
for (rt_int it2498 = lo2496; it2498 <= hi2497; it2498++) {
F->i_2495 = it2498;
F->j_2491 = rt_add(G_NV(F->j_2491), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2499 = F->s_809; ix2499.p[rt_index(F->i_2495, ix2499.lo, ix2499.hi) - ix2499.lo]; })) == 34) || (G_NV(({ rt_gstr ix2500 = F->s_809; ix2500.p[rt_index(F->i_2495, ix2500.lo, ix2500.hi) - ix2500.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2501 = F->s_809; ix2501.p[rt_index(F->i_2495, ix2501.lo, ix2501.hi) - ix2501.lo]; })) == 63))) {
(*({ rt_gstr *ix2502 = &(F->r_2489); &ix2502->p[rt_index(G_NV(F->j_2491), ix2502->lo, ix2502->hi) - ix2502->lo]; })) = 92;
F->j_2491 = rt_add(G_NV(F->j_2491), ((rt_int)1LL));
}
(*({ rt_gstr *ix2503 = &(F->r_2489); &ix2503->p[rt_index(G_NV(F->j_2491), ix2503->lo, ix2503->hi) - ix2503->lo]; })) = G_NV(({ rt_gstr ix2504 = F->s_809; ix2504.p[rt_index(F->i_2495, ix2504.lo, ix2504.hi) - ix2504.lo]; }));
}
}
L_end_2493: ;
(*({ rt_gstr *ix2505 = &(F->r_2489); &ix2505->p[rt_index(rt_add(G_NV(F->j_2491), ((rt_int)1LL)), ix2505->lo, ix2505->hi) - ix2505->lo]; })) = 34;
F->result_ = F->r_2489;
goto ret_;

}
L_end_2487: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_812(struct f_greenc_1fr *up_, P174 e_811) {
  struct f_is_literal_812fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_811 = e_811;
if ((((G_NV((*(P174)rt_nil_check(F->e_811)).kind_) == ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->e_811)).kind_) == ((rt_int)2LL))) || f_is_char_lit_806(F->up, F->e_811))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_811)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P174)rt_nil_check(F->e_811)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_811)).a_);
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_811)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_811)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_811)).a_) && f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_811)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_820(struct f_greenc_1fr *up_, P174 l_813, P174 h_814, P122 want_815, rt_int line_816, P122 *t_817, P140 *lo_818, P140 *hi_819) {
  struct f_range_bounds_820fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_813 = l_813;
F->h_814 = h_814;
F->want_815 = want_815;
F->line_816 = line_816;
F->t_817 = t_817;
F->lo_818 = lo_818;
F->hi_819 = hi_819;
F->w_2506 = NULL;
F->w_2506 = F->want_815;
F->t2_2507 = NULL;
if ((((F->w_2506 == NULL) && f_is_char_lit_806(F->up, F->l_813)) && f_is_char_lit_806(F->up, F->h_814))) {
F->w_2506 = F->up->ty_char_159;
}
if ((((F->w_2506 == NULL) && f_is_literal_812(F->up, F->l_813)) && (!f_is_literal_812(F->up, F->h_814)))) {
f_gexpr_825(F->up, F->h_814, NULL, &(*F->t_817), &(*F->hi_819));
f_gexpr_825(F->up, F->l_813, (*F->t_817), &F->t2_2507, &(*F->lo_818));
f_check_type_498(F->up, F->t2_2507, (*F->t_817), F->line_816);
} else {
f_gexpr_825(F->up, F->l_813, F->w_2506, &(*F->t_817), &(*F->lo_818));
f_gexpr_825(F->up, F->h_814, (*F->t_817), &F->t2_2507, &(*F->hi_819));
f_check_type_498(F->up, F->t2_2507, (*F->t_817), F->line_816);
}
ret_:

  return;
}

static void f_gexpr_825(struct f_greenc_1fr *up_, P174 e_821, P122 want_822, P122 *t_823, P140 *r_824) {
  struct f_gexpr_825fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_821 = e_821;
F->want_822 = want_822;
F->t_823 = t_823;
F->r_824 = r_824;
F->saved_lv_2508 = INT_MIN;
F->saved_lv_2508 = G_NV(F->up->in_lv_path_229);
F->w_2509 = NULL;
F->w_2509 = F->want_822;
F->up->in_lv_path_229 = 0;
if (((F->w_2509 != NULL) && (((*(P122)rt_nil_check(F->w_2509)).view_of_ != NULL) && (G_NV(F->up->in_instance_210) == ((rt_int)0LL))))) {
F->w_2509 = f_base_view_455(F->up, F->w_2509);
}
f_gexpr_1_830(F->up, F->e_821, F->w_2509, &(*F->t_823), &(*F->r_824));
F->up->in_lv_path_229 = G_NV(F->saved_lv_2508);
ret_:

  return;
}

static void f_gexpr_1_830(struct f_greenc_1fr *up_, P174 e_826, P122 want_827, P122 *t_828, P140 *r_829) {
  struct f_gexpr_1_830fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_826 = e_826;
F->want_827 = want_827;
F->t_828 = t_828;
F->r_829 = r_829;
F->y_2510 = NULL;
F->bt_2511 = NULL;
F->c_2512 = NULL;
F->ro_2513 = INT_MIN;
F->base_2514 = NULL;
F->a_2515 = NULL;
F->nm_2516 = NULL;
F->c2_2517 = NULL;
(*F->t_828) = F->up->ty_int_156;
{ rt_int sel2518 = G_NV((*(P174)rt_nil_check(F->e_826)).kind_);
if (0 || sel2518 == ((rt_int)1LL)) {
if (((F->want_827 != NULL) && ((G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)1LL)) && ((*(P122)rt_nil_check(F->want_827)).view_of_ == NULL)))) {
(*F->t_828) = F->want_827;
}
(*F->r_829) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check(F->e_826)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2518 == ((rt_int)2LL)) {
(*F->t_828) = F->up->ty_float_158;
(*F->r_829) = (*(P174)rt_nil_check(F->e_826)).name_;
if (((F->want_827 != NULL) && ((G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)3LL)) && ((*(P122)rt_nil_check(F->want_827)).view_of_ == NULL)))) {
(*F->t_828) = F->want_827;
} else if ((((F->want_827 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)16LL))) && ((*(P122)rt_nil_check(F->want_827)).fsmall_ != NULL))) {
(*F->t_828) = F->want_827;
(*F->r_829) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_826)).name_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->want_827)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2518 == ((rt_int)3LL)) {
if (((f_is_char_lit_806(F->up, F->e_826) && (F->want_827 != NULL)) && (((G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)4LL))) && ((*(P122)rt_nil_check(F->want_827)).view_of_ == NULL)))) {
f_char_literal_840(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if ((((((F->want_827 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_827)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_827)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_827)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_827)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_582(F->up, F->want_827)))) {
f_string_aggregate_835(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else {
(*F->t_828) = F->up->ty_string_160;
if (((F->want_827 != NULL) && f_is_string_582(F->up, F->want_827))) {
(*F->t_828) = F->want_827;
}
(*F->r_829) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_810(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_826)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2520 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_826)).name_)); at2520.hi >= at2520.lo ? at2520.hi - at2520.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2518 == ((rt_int)4LL)) {
(*F->t_828) = F->up->ty_nil_162;
(*F->r_829) = f_mk_237(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2518 == ((rt_int)15LL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_826)).a_, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)5LL)) {
f_gen_name_848(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)6LL)) {
f_gen_unop_853(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)7LL)) {
f_gen_binop_893(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)8LL)) {
f_expanded_843(F->up, (*(P174)rt_nil_check(F->e_826)).a_, &F->nm_2516);
if ((F->nm_2516 != NULL)) {
F->c2_2517 = f_nn_311(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_826)).line_));
as_R175(&(*(P174)rt_nil_check(F->c2_2517)), (*(P174)rt_nil_check(F->e_826)));
(*(P174)rt_nil_check(F->c2_2517)).a_ = F->nm_2516;
f_gexpr_825(F->up, F->c2_2517, F->want_827, &(*F->t_828), &(*F->r_829));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2510 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).name_)));
if (((F->y_2510 == NULL) || (((G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_225 = F->want_827;
f_gcall_1028(F->up, F->e_826, 0, &(*F->t_828), &(*F->r_829));
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)5LL))) {
f_conversion_898(F->up, F->e_826, F->y_2510, &(*F->t_828), &(*F->r_829));
goto ret_;
}
} else if (((((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1141(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).a_)).name_)))) && (f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_826)).line_)) != NULL)) && (G_NV((*(P117)rt_nil_check(f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_826)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_225 = F->want_827;
f_gcall_1028(F->up, F->e_826, 0, &(*F->t_828), &(*F->r_829));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_)).name_))))) {
F->up->call_want_225 = F->want_827;
f_gcall_1028(F->up, F->e_826, 0, &(*F->t_828), &(*F->r_829));
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_))) {
F->y_2510 = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_826)).line_));
if (((F->y_2510 != NULL) && (((G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_225 = F->want_827;
f_gcall_1028(F->up, F->e_826, 0, &(*F->t_828), &(*F->r_829));
goto ret_;
}
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_826)).a_, NULL, &F->bt_2511, &F->base_2514);
F->ro_2513 = 1;
f_index_on_799(F->up, (*(P140)rt_nil_check(F->base_2514)), F->bt_2511, F->e_826, &F->ro_2513, 0, &(*F->r_829), &(*F->t_828), &F->c_2512);
 (void)rt_range(F->ro_2513, 0, 1);
if ((f_is_numeric_462(F->up, (*F->t_828)) || f_is_discrete_464(F->up, (*F->t_828)))) {
(*F->r_829) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_829)))), one_rt_gstr(41)));
}
} else if (0 || sel2518 == ((rt_int)9LL)) {
f_expanded_843(F->up, F->e_826, &F->nm_2516);
if ((F->nm_2516 != NULL)) {
f_gen_name_848(F->up, F->nm_2516, F->want_827, &(*F->t_828), &(*F->r_829));
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_826)).a_)).name_))))) {
F->nm_2516 = f_nn_311(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_826)).line_));
(*(P174)rt_nil_check(F->nm_2516)).a_ = F->e_826;
F->up->call_want_225 = F->want_827;
f_gcall_1028(F->up, F->nm_2516, 0, &(*F->t_828), &(*F->r_829));
goto ret_;
}
if (f_is_package_1064(F->up, (*(P174)rt_nil_check(F->e_826)).a_)) {
F->nm_2516 = f_nn_311(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_826)).line_));
(*(P174)rt_nil_check(F->nm_2516)).name_ = (*(P174)rt_nil_check(F->e_826)).name_;
(*(P174)rt_nil_check(F->nm_2516)).tag_ = f_mk_237(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->e_826)).a_));
f_gen_name_848(F->up, F->nm_2516, F->want_827, &(*F->t_828), &(*F->r_829));
goto ret_;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_826)).a_, NULL, &F->bt_2511, &F->base_2514);
F->ro_2513 = 1;
f_select_on_790(F->up, (*(P140)rt_nil_check(F->base_2514)), F->bt_2511, F->e_826, &F->ro_2513, 0, &(*F->r_829), &(*F->t_828), &F->c_2512);
 (void)rt_range(F->ro_2513, 0, 1);
if ((f_is_numeric_462(F->up, (*F->t_828)) || f_is_discrete_464(F->up, (*F->t_828)))) {
(*F->r_829) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_829)))), one_rt_gstr(41)));
}
} else if (0 || sel2518 == ((rt_int)10LL)) {
f_gen_attr_914(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)11LL)) {
f_allocator_966(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else if (0 || sel2518 == ((rt_int)12LL)) {
f_aggregate_971(F->up, F->e_826, F->want_827, &(*F->t_828), &(*F->r_829));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_826)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_835(struct f_greenc_1fr *up_, P174 e_831, P122 want_832, P122 *t_833, P140 *r_834) {
  struct f_string_aggregate_835fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_831 = e_831;
F->want_832 = want_832;
F->t_833 = t_833;
F->r_834 = r_834;
F->ag_2521 = NULL;
F->it_2522 = NULL;
F->tail_2523 = NULL;
F->l_2524 = NULL;
F->ag_2521 = f_nn_311(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_831)).line_));
{ rt_int lo2528 = ((rt_int)1LL), hi2529 = ({ rt_gstr at2526 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_831)).name_)); at2526.hi >= at2526.lo ? at2526.hi - at2526.lo + 1 : (rt_int)0; });
for (rt_int it2530 = lo2528; it2530 <= hi2529; it2530++) {
F->k_2527 = it2530;
F->l_2524 = f_nn_311(F->up, ((rt_int)3LL), G_NV((*(P174)rt_nil_check(F->e_831)).line_));
(*(P174)rt_nil_check(F->l_2524)).name_ = f_mk_237(F->up, ({ rt_gstr sl2532 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_831)).name_)); rt_int l_ = F->k_2527, h_ = F->k_2527; if (l_ <= h_) { rt_index(l_, sl2532.lo, sl2532.hi); rt_index(h_, sl2532.lo, sl2532.hi); } sl2532.p += l_ - sl2532.lo; sl2532.lo = l_; sl2532.hi = h_; sl2532; }));
F->it_2522 = f_nn_311(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_831)).line_));
(*(P174)rt_nil_check(F->it_2522)).b_ = F->l_2524;
if ((F->tail_2523 == NULL)) {
(*(P174)rt_nil_check(F->ag_2521)).a_ = F->it_2522;
} else {
(*(P174)rt_nil_check(F->tail_2523)).next_ = F->it_2522;
}
F->tail_2523 = F->it_2522;
}
}
L_end_2525: ;
if (((*(P174)rt_nil_check(F->ag_2521)).a_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_831)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_494(F->up, F->want_832)));
}
f_aggregate_971(F->up, F->ag_2521, F->want_832, &(*F->t_833), &(*F->r_834));
ret_:

  return;
}

static void f_char_literal_840(struct f_greenc_1fr *up_, P174 e_836, P122 want_837, P122 *t_838, P140 *r_839) {
  struct f_char_literal_840fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_836 = e_836;
F->want_837 = want_837;
F->t_838 = t_838;
F->r_839 = r_839;
F->i_2533 = INT64_MIN;
if ((G_NV((*(P122)rt_nil_check(F->want_837)).kind_) == ((rt_int)11LL))) {
(*F->t_838) = F->want_837;
(*F->r_839) = f_mk_237(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2535 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_836)).name_)); ix2535.p[rt_index(((rt_int)1LL), ix2535.lo, ix2535.hi) - ix2535.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2533 = f_lit_index_511(F->up, (*(P122)rt_nil_check(F->want_837)).lits_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_836)).name_)));
if ((G_NV(F->i_2533) < ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_836)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_836)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_494(F->up, F->want_837)));
}
(*F->t_838) = F->want_837;
(*F->r_839) = f_mk_237(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2533))));
ret_:

  return;
}

static void f_expanded_843(struct f_greenc_1fr *up_, P174 e_841, P174 *r_842) {
  struct f_expanded_843fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_841 = e_841;
F->r_842 = r_842;
F->y_2536 = NULL;
F->d_2537 = INT64_MIN;
(*F->r_842) = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_841)).kind_) != ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_841)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2537 = f_enclosing_depth_444(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_841)).a_)).name_)));
if ((G_NV(F->d_2537) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2536 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_841)).a_)).name_)));
if (((F->y_2536 != NULL) && ((((G_NV((*(P117)rt_nil_check(F->y_2536)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2536)).kind_) == ((rt_int)2LL))) || (G_NV((*(P117)rt_nil_check(F->y_2536)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2536)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_442(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_841)).name_)), G_NV(F->d_2537)) == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_841)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_841)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_841)).a_)).name_))));
}
(*F->r_842) = f_nn_311(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_841)).line_));
(*(P174)rt_nil_check((*F->r_842))).name_ = (*(P174)rt_nil_check(F->e_841)).name_;
(*(P174)rt_nil_check((*F->r_842))).ival_ = rt_add(G_NV(F->d_2537), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_848(struct f_greenc_1fr *up_, P174 e_844, P122 want_845, P122 *t_846, P140 *r_847) {
  struct f_gen_name_848fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_844 = e_844;
F->want_845 = want_845;
F->t_846 = t_846;
F->r_847 = r_847;
F->y_2538 = NULL;
F->y_2538 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)));
F->z_2539 = NULL;
F->call_2540 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_844)).ival_) > ((rt_int)0LL))) {
F->y_2538 = f_lookup_at_442(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_844)).ival_), ((rt_int)1LL)));
}
if (((*(P174)rt_nil_check(F->e_844)).tag_ != NULL)) {
F->y_2538 = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), G_NV((*(P174)rt_nil_check(F->e_844)).line_));
}
if ((F->y_2538 == NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit("GET", 3)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)12LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)2LL)) && G_NV((*(P117)rt_nil_check(F->y_2538)).hasmv_))) {
(*F->t_846) = (*(P117)rt_nil_check(F->y_2538)).t_;
(*F->r_847) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2538)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->y_2538)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2538)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)2LL)))) {
(*F->t_846) = (*(P117)rt_nil_check(F->y_2538)).t_;
f_access_of_762(F->up, F->y_2538, &(*F->r_847));
if (((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)1LL)) && (f_is_numeric_462(F->up, (*F->t_846)) || f_is_discrete_464(F->up, (*F->t_846))))) {
(*F->r_847) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_847)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)7LL))) {
F->z_2539 = F->y_2538;
if ((F->want_845 != NULL)) {
while ((F->z_2539 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2539)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2539)).kind_) == ((rt_int)7LL))) && f_same_453(F->up, (*(P117)rt_nil_check(F->z_2539)).t_, F->want_845))) {
goto L_end_2541;
}
F->z_2539 = (*(P117)rt_nil_check(F->z_2539)).chain_;
}
L_end_2541: ;
if ((F->z_2539 == NULL)) {
F->z_2539 = F->y_2538;
}
} else {
F->z_2539 = (*(P117)rt_nil_check(F->y_2538)).chain_;
while ((F->z_2539 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2539)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2539)).kind_) == ((rt_int)7LL))) && (!f_same_453(F->up, (*(P117)rt_nil_check(F->z_2539)).t_, (*(P117)rt_nil_check(F->y_2538)).t_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2539 = (*(P117)rt_nil_check(F->z_2539)).chain_;
}
L_end_2542: ;
F->z_2539 = F->y_2538;
}
(*F->t_846) = (*(P117)rt_nil_check(F->z_2539)).t_;
(*F->r_847) = f_mk_237(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->z_2539)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2538)).kind_) == ((rt_int)10LL)))) {
F->call_2540 = f_nn_311(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_844)).line_));
(*(P174)rt_nil_check(F->call_2540)).a_ = F->e_844;
F->up->call_want_225 = F->want_845;
f_gcall_1028(F->up, F->call_2540, 0, &(*F->t_846), &(*F->r_847));
goto ret_;
}
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_844)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_844)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_853(struct f_greenc_1fr *up_, P174 e_849, P122 want_850, P122 *t_851, P140 *r_852) {
  struct f_gen_unop_853fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_849 = e_849;
F->want_850 = want_850;
F->t_851 = t_851;
F->r_852 = r_852;
F->a_2543 = NULL;
F->x_2544 = NULL;
F->done_2545 = INT_MIN;
f_user_operator_1123(F->up, F->e_849, F->want_850, &(*F->t_851), &(*F->r_852), &F->done_2545);
 (void)rt_range(F->done_2545, 0, 1);
if (G_NV(F->done_2545)) {
goto ret_;
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_849)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_849)).a_, F->want_850, &(*F->t_851), &F->a_2543);
if (((G_NV((*(P122)rt_nil_check((*F->t_851))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check((*F->t_851))).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_851))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_503(F->up, (*F->t_851), &F->x_2544);
(*F->r_852) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P140)rt_nil_check(F->x_2544))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2543))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check((*F->t_851))).kind_) != ((rt_int)2LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_849)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_852) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->a_2543))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_849)).a_, F->want_850, &(*F->t_851), &F->a_2543);
if ((!f_is_numeric_462(F->up, (*F->t_851)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_849)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_849)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_849)).name_)), rt_g_lit("+", 1))) {
(*F->r_852) = F->a_2543;
} else if (((G_NV((*(P122)rt_nil_check((*F->t_851))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_851))).kind_) == ((rt_int)16LL)))) {
(*F->r_852) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P140)rt_nil_check(F->a_2543))), one_rt_gstr(41)));
} else {
(*F->r_852) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P140)rt_nil_check(F->a_2543))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_855(struct f_greenc_1fr *up_, P122 t_854) {
  struct f_short_int_855fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_854 = t_854;
if ((!(G_NV((*(P122)rt_nil_check(F->t_854)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_457(F->up, F->t_854) == F->up->ty_short_167);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_857(struct f_greenc_1fr *up_, P122 t_856) {
  struct f_float_kind_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_856 = t_856;
if ((f_root_457(F->up, F->t_856) == F->up->ty_sfloat_169)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_860(struct f_greenc_1fr *up_, P174 e_858, P140 *r_859) {
  struct f_membership_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_858 = e_858;
F->r_859 = r_859;
F->ta_2546 = NULL;
F->tb_2547 = NULL;
F->tt_2548 = NULL;
F->a_2549 = NULL;
F->lo_2550 = NULL;
F->hi_2551 = NULL;
F->ct_2552 = NULL;
F->c_2553 = NULL;
F->d_2554 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_858)).a_)) {
f_range_bounds_820(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).b_)).b_, NULL, G_NV((*(P174)rt_nil_check(F->e_858)).line_), &F->tt_2548, &F->lo_2550, &F->hi_2551);
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_858)).a_, F->tt_2548, &F->ta_2546, &F->a_2549);
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_858)).a_, NULL, &F->ta_2546, &F->a_2549);
f_range_bounds_820(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).b_)).b_, F->ta_2546, G_NV((*(P174)rt_nil_check(F->e_858)).line_), &F->tt_2548, &F->lo_2550, &F->hi_2551);
}
f_check_type_498(F->up, F->tt_2548, F->ta_2546, G_NV((*(P174)rt_nil_check(F->e_858)).line_));
if (((!f_is_numeric_462(F->up, F->ta_2546)) && (!f_is_discrete_464(F->up, F->ta_2546)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_858)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_503(F->up, F->ta_2546, &F->ct_2552);
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2552))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2549))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check(F->lo_2550))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check(F->hi_2551))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_519(F->up, (*(P174)rt_nil_check(F->e_858)).b_, &F->tt_2548, &F->c_2553);
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_858)).a_, F->tt_2548, &F->ta_2546, &F->a_2549);
f_check_type_498(F->up, F->ta_2546, F->tt_2548, G_NV((*(P174)rt_nil_check(F->e_858)).line_));
f_ctype_503(F->up, F->ta_2546, &F->ct_2552);
if (((f_is_numeric_462(F->up, F->ta_2546) || f_is_discrete_464(F->up, F->ta_2546)) && ((*(P178)rt_nil_check(F->c_2553)).lo_ != NULL))) {
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2552))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2549))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2553)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2553)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) == ((rt_int)6LL)) && ((*(P178)rt_nil_check(F->c_2553)).lo_ != NULL))) {
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2552))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2549))), rt_g_lit("; m_.lo == ", 11)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2553)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2553)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2546)).kind_) == ((rt_int)7LL)) && f_discriminated_492(F->up, F->c_2553))) {
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2552))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2549))), rt_g_lit("; 1", 3)));
F->d_2554 = (*(P178)rt_nil_check(F->c_2553)).dv_;
while ((F->d_2554 != NULL)) {
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_859))), rt_g_lit(" && m_.", 7)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2554)).name_)))), rt_g_lit(" == (", 5)), (*(P140)rt_nil_check((*(P1942)rt_nil_check(F->d_2554)).v_))), one_rt_gstr(41)));
F->d_2554 = (*(P1942)rt_nil_check(F->d_2554)).next_;
}
L_end_2555: ;
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_859))), rt_g_lit("; })", 4)));
} else {
(*F->r_859) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P140)rt_nil_check(F->a_2549))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_865(struct f_greenc_1fr *up_, P174 e_861, P122 want_862, P122 *t_863, P140 *r_864) {
  struct f_condition_865fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_861 = e_861;
F->want_862 = want_862;
F->t_863 = t_863;
F->r_864 = r_864;
F->a_2556 = NULL;
F->b_2557 = NULL;
F->tb_2558 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_861)).kind_) == ((rt_int)7LL)) && (G_NV((*(P174)rt_nil_check(F->e_861)).ival_) == ((rt_int)1LL)))) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->e_861)).a_, F->up->ty_bool_157, &(*F->t_863), &F->a_2556);
f_check_type_498(F->up, (*F->t_863), F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_861)).line_));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_861)).b_, F->up->ty_bool_157, &F->tb_2558, &F->b_2557);
f_check_type_498(F->up, F->tb_2558, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_861)).line_));
(*F->t_863) = F->up->ty_bool_157;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit("AND", 3))) {
(*F->r_864) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2556))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2557))), one_rt_gstr(41)));
} else {
(*F->r_864) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2556))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2557))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_825(F->up, F->e_861, F->up->ty_bool_157, &(*F->t_863), &(*F->r_864));
ret_:

  return;
}

static void f_catenation_870(struct f_greenc_1fr *up_, P174 e_866, P122 want_867, P122 *t_868, P140 *r_869) {
  struct f_catenation_870fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_866 = e_866;
F->want_867 = want_867;
F->t_868 = t_868;
F->r_869 = r_869;
F->arrt_2559 = NULL;
F->ta_2560 = NULL;
F->tb_2561 = NULL;
F->a_2562 = NULL;
F->b_2563 = NULL;
F->ct_2564 = NULL;
if ((((F->want_867 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_867)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_867)).dims_) == ((rt_int)1LL)))) {
F->arrt_2559 = F->want_867;
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_866)).a_, NULL, &F->ta_2560, &F->a_2562);
if (((G_NV((*(P122)rt_nil_check(F->ta_2560)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->ta_2560)).dims_) == ((rt_int)1LL)))) {
F->arrt_2559 = F->ta_2560;
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_866)).b_, NULL, &F->tb_2561, &F->b_2563);
if (((G_NV((*(P122)rt_nil_check(F->tb_2561)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2561)).dims_) == ((rt_int)1LL)))) {
F->arrt_2559 = F->tb_2561;
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2560)).kind_) == ((rt_int)11LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2561)).kind_) == ((rt_int)11LL)))) {
F->arrt_2559 = F->up->ty_string_160;
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_866)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_503(F->up, F->arrt_2559, &F->ct_2564);
f_cat_operand_875(F->up, (*(P174)rt_nil_check(F->e_866)).a_, F->arrt_2559, G_NV((*(P174)rt_nil_check(F->e_866)).line_), &F->a_2562);
f_cat_operand_875(F->up, (*(P174)rt_nil_check(F->e_866)).b_, F->arrt_2559, G_NV((*(P174)rt_nil_check(F->e_866)).line_), &F->b_2563);
(*F->t_868) = F->arrt_2559;
(*F->r_869) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P140)rt_nil_check(F->ct_2564))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2562))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2563))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_875(struct f_greenc_1fr *up_, P174 x_871, P122 arrt_872, rt_int line_873, P140 *r_874) {
  struct f_cat_operand_875fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_871 = x_871;
F->arrt_872 = arrt_872;
F->line_873 = line_873;
F->r_874 = r_874;
F->tx_2565 = NULL;
F->ct_2566 = NULL;
if ((f_is_char_lit_806(F->up, F->x_871) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->arrt_872)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_825(F->up, F->x_871, (*(P122)rt_nil_check(F->arrt_872)).elem_, &F->tx_2565, &(*F->r_874));
} else {
f_gexpr_825(F->up, F->x_871, F->arrt_872, &F->tx_2565, &(*F->r_874));
}
if (f_same_453(F->up, F->tx_2565, F->arrt_872)) {
goto ret_;
}
if (f_same_453(F->up, F->tx_2565, (*(P122)rt_nil_check(F->arrt_872)).elem_)) {
f_ctype_503(F->up, F->arrt_872, &F->ct_2566);
(*F->r_874) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P140)rt_nil_check(F->ct_2566))), one_rt_gstr(40)), (*(P140)rt_nil_check((*F->r_874)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_258(F->up, F->line_873, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_494(F->up, F->tx_2565)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_494(F->up, F->arrt_872)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_880(struct f_greenc_1fr *up_, P174 e_876, P122 want_877, P122 *t_878, P140 *r_879) {
  struct f_arithmetic_880fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_876 = e_876;
F->want_877 = want_877;
F->t_878 = t_878;
F->r_879 = r_879;
F->op_2567 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_876)).name_)));
F->ta_2568 = NULL;
F->tb_2569 = NULL;
F->hint_2570 = NULL;
F->a_2571 = NULL;
F->b_2572 = NULL;
if (eq_rt_gstr(F->op_2567, rt_g_lit("**", 2))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).a_, F->want_877, &F->ta_2568, &F->a_2571);
F->hint_2570 = F->up->ty_int_156;
if ((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)1LL))) {
F->hint_2570 = F->ta_2568;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).b_, F->hint_2570, &F->tb_2569, &F->b_2572);
if ((G_NV((*(P122)rt_nil_check(F->tb_2569)).kind_) != ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_876)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_878) = F->ta_2568;
if ((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)1LL))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)3LL))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), rt_g_lit(", ", 2)), f_float_kind_857(F->up, F->ta_2568)), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_876)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_876)).a_) && (!f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_876)).b_)))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).b_, F->want_877, &F->tb_2569, &F->b_2572);
F->hint_2570 = F->tb_2569;
if (((G_NV((*(P122)rt_nil_check(F->tb_2569)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2567, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2567, rt_g_lit("/", 1))))) {
F->hint_2570 = F->up->ty_int_156;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).a_, F->hint_2570, &F->ta_2568, &F->a_2571);
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).a_, F->want_877, &F->ta_2568, &F->a_2571);
F->hint_2570 = F->ta_2568;
if (((((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2567, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2567, rt_g_lit("/", 1)))) && f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_876)).b_)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_876)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2570 = F->up->ty_int_156;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_876)).b_, F->hint_2570, &F->tb_2569, &F->b_2572);
}
if (((!f_is_numeric_462(F->up, F->ta_2568)) || (!f_is_numeric_462(F->up, F->tb_2569)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_876)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2567), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_494(F->up, F->ta_2568)), rt_g_lit(" and ", 5)), f_kind_name_494(F->up, F->tb_2569)));
}
if (((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)16LL)) || (G_NV((*(P122)rt_nil_check(F->tb_2569)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_888(F->up, F->e_876, F->ta_2568, F->tb_2569, (*(P140)rt_nil_check(F->a_2571)), (*(P140)rt_nil_check(F->b_2572)), &(*F->t_878), &(*F->r_879));
goto ret_;
}
f_check_type_498(F->up, F->tb_2569, F->ta_2568, G_NV((*(P174)rt_nil_check(F->e_876)).line_));
(*F->t_878) = F->ta_2568;
if ((G_NV((*(P122)rt_nil_check(F->ta_2568)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2567, rt_g_lit("+", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), rt_g_lit(", ", 2)), f_float_kind_857(F->up, F->ta_2568)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("-", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), rt_g_lit(", ", 2)), f_float_kind_857(F->up, F->ta_2568)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("*", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), rt_g_lit(", ", 2)), f_float_kind_857(F->up, F->ta_2568)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("/", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), rt_g_lit(", ", 2)), f_float_kind_857(F->up, F->ta_2568)), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_876)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2567), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2567, rt_g_lit("+", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("-", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("*", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("/", 1))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2567, rt_g_lit("MOD", 3))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P140)rt_nil_check(F->a_2571))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2572))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_876)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2567), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_855(F->up, (*F->t_878))) {
(*F->r_879) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_879)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_888(struct f_greenc_1fr *up_, P174 e_881, P122 ta_882, P122 tb_883, rt_gstr a_884, rt_gstr b_885, P122 *t_886, P140 *r_887) {
  struct f_fixed_operation_888fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_881 = e_881;
F->ta_882 = ta_882;
F->tb_883 = tb_883;
F->a_884 = cp_rt_gstr(a_884);
F->b_885 = cp_rt_gstr(b_885);
F->t_886 = t_886;
F->r_887 = r_887;
F->op_2573 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_881)).name_)));
if ((eq_rt_gstr(F->op_2573, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2573, rt_g_lit("-", 1)))) {
f_check_type_498(F->up, F->tb_883, F->ta_882, G_NV((*(P174)rt_nil_check(F->e_881)).line_));
(*F->t_886) = F->ta_882;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_884), one_rt_gstr(32)), F->op_2573), one_rt_gstr(32)), F->b_885), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2573, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_882)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_883)).kind_) == ((rt_int)16LL)))) {
(*F->t_886) = F->up->ty_ufixed_172;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_884), rt_g_lit(" * ", 3)), F->b_885), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2573, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_882)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_883)).kind_) == ((rt_int)16LL)))) {
(*F->t_886) = F->up->ty_ufixed_172;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_884), rt_g_lit(", ", 2)), F->b_885), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2573, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_882)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_883)).kind_) == ((rt_int)1LL)))) {
(*F->t_886) = F->ta_882;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_884), rt_g_lit(" * (double)(", 12)), F->b_885), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2573, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_882)).kind_) == ((rt_int)1LL))) && (G_NV((*(P122)rt_nil_check(F->tb_883)).kind_) == ((rt_int)16LL)))) {
(*F->t_886) = F->tb_883;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_884), rt_g_lit(") * ", 4)), F->b_885), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2573, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_882)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_883)).kind_) == ((rt_int)1LL)))) {
(*F->t_886) = F->ta_882;
(*F->r_887) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_884), rt_g_lit(", (double)(", 11)), F->b_885), rt_g_lit("), 0), ", 7)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->ta_882)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_881)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2573), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_893(struct f_greenc_1fr *up_, P174 e_889, P122 want_890, P122 *t_891, P140 *r_892) {
  struct f_gen_binop_893fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_889 = e_889;
F->want_890 = want_890;
F->t_891 = t_891;
F->r_892 = r_892;
F->op_2574 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_889)).name_)));
F->ta_2575 = NULL;
F->tb_2576 = NULL;
F->hint_2577 = NULL;
F->ct_2578 = NULL;
F->a_2579 = NULL;
F->b_2580 = NULL;
F->x_2581 = NULL;
F->dummy_2582 = NULL;
F->done_2583 = INT_MIN;
(*F->t_891) = F->up->ty_bool_157;
f_user_operator_1123(F->up, F->e_889, F->want_890, &(*F->t_891), &(*F->r_892), &F->done_2583);
 (void)rt_range(F->done_2583, 0, 1);
if (G_NV(F->done_2583)) {
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_889)).ival_) == ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_889)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2574, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2574, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2574, rt_g_lit("XOR", 3)))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_889)).a_, F->want_890, &F->ta_2575, &F->a_2579);
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_889)).b_, F->ta_2575, &F->tb_2576, &F->b_2580);
f_check_type_498(F->up, F->tb_2576, F->ta_2575, G_NV((*(P174)rt_nil_check(F->e_889)).line_));
(*F->t_891) = F->ta_2575;
if (((G_NV((*(P122)rt_nil_check(F->ta_2575)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check(F->ta_2575)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->ta_2575)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_503(F->up, F->ta_2575, &F->x_2581);
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_248(F->up, F->op_2574), one_rt_gstr(95)), (*(P140)rt_nil_check(F->x_2581))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2575)).kind_) != ((rt_int)2LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_889)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2574), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2574, rt_g_lit("AND", 3))) {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2574, rt_g_lit("OR", 2))) {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
} else {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2574, rt_g_lit("IN", 2))) {
f_membership_860(F->up, F->e_889, &(*F->r_892));
goto ret_;
}
if (eq_rt_gstr(F->op_2574, rt_g_lit("&", 1))) {
f_catenation_870(F->up, F->e_889, F->want_890, &(*F->t_891), &(*F->r_892));
goto ret_;
}
if (f_is_rel_350(F->up, F->op_2574)) {
if (((((f_is_literal_812(F->up, (*(P174)rt_nil_check(F->e_889)).a_) || f_is_enum_lit_808(F->up, (*(P174)rt_nil_check(F->e_889)).a_)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_889)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_889)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_889)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_889)).b_, NULL, &F->hint_2577, &F->dummy_2582);
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_889)).a_, F->hint_2577, &F->ta_2575, &F->a_2579);
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_889)).b_, F->ta_2575, &F->tb_2576, &F->b_2580);
F->ct_2578 = F->ta_2575;
if (((G_NV((*(P122)rt_nil_check(F->ta_2575)).kind_) != ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2576)).kind_) != ((rt_int)10LL)))) {
f_check_type_498(F->up, F->tb_2576, F->ta_2575, G_NV((*(P174)rt_nil_check(F->e_889)).line_));
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2575)).kind_) == ((rt_int)10LL))) {
F->ct_2578 = F->tb_2576;
}
if (((eq_rt_gstr(F->op_2574, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2574, rt_g_lit("/=", 2))) && f_restricted_here_574(F->up, F->ct_2578))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_889)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2574, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2574, rt_g_lit("/=", 2)))) && (!f_is_numeric_462(F->up, F->ct_2578))) && (!f_is_discrete_464(F->up, F->ct_2578)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_889)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2574), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_494(F->up, F->ct_2578)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_625(F->up, F->ct_2578)) {
f_eq_code_640(F->up, F->ct_2578, (*(P140)rt_nil_check(F->a_2579)), (*(P140)rt_nil_check(F->b_2580)), &F->x_2581);
if (eq_rt_gstr(F->op_2574, rt_g_lit("=", 1))) {
(*F->r_892) = F->x_2581;
} else if (eq_rt_gstr(F->op_2574, rt_g_lit("/=", 2))) {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->x_2581))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_889)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2574, rt_g_lit("=", 1))) {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2574, rt_g_lit("/=", 2))) {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
} else {
(*F->r_892) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2579))), one_rt_gstr(32)), F->op_2574), one_rt_gstr(32)), (*(P140)rt_nil_check(F->b_2580))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_880(F->up, F->e_889, F->want_890, &(*F->t_891), &(*F->r_892));
ret_:

  return;
}

static void f_conversion_898(struct f_greenc_1fr *up_, P174 e_894, P117 y_895, P122 *t_896, P140 *r_897) {
  struct f_conversion_898fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_894 = e_894;
F->y_895 = y_895;
F->t_896 = t_896;
F->r_897 = r_897;
F->aty_2584 = NULL;
F->a_2585 = NULL;
F->ag_2586 = NULL;
F->it_2587 = NULL;
F->tail_2588 = NULL;
F->arg_2589 = NULL;
(*F->t_896) = (*(P117)rt_nil_check(F->y_895)).t_;
if (((G_NV((*(P174)rt_nil_check(F->e_894)).flag_) == ((rt_int)9LL)) || (f_list_len_317(F->up, (*(P174)rt_nil_check(F->e_894)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_894)).flag_) == ((rt_int)9LL))) {
F->ag_2586 = (*(P174)rt_nil_check(F->e_894)).b_;
} else {
F->ag_2586 = f_nn_311(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_894)).line_));
F->arg_2589 = (*(P174)rt_nil_check(F->e_894)).b_;
while ((F->arg_2589 != NULL)) {
F->it_2587 = f_nn_311(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_894)).line_));
(*(P174)rt_nil_check(F->it_2587)).b_ = F->arg_2589;
if (((*(P174)rt_nil_check(F->arg_2589)).formal_ != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_894)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2588 == NULL)) {
(*(P174)rt_nil_check(F->ag_2586)).a_ = F->it_2587;
} else {
(*(P174)rt_nil_check(F->tail_2588)).next_ = F->it_2587;
}
F->tail_2588 = F->it_2587;
F->arg_2589 = (*(P174)rt_nil_check(F->arg_2589)).next_;
}
L_end_2590: ;
}
if ((G_NV((*(P174)rt_nil_check(F->ag_2586)).kind_) != ((rt_int)12LL))) {
f_gexpr_825(F->up, F->ag_2586, (*F->t_896), &F->aty_2584, &(*F->r_897));
f_check_type_498(F->up, F->aty_2584, (*F->t_896), G_NV((*(P174)rt_nil_check(F->e_894)).line_));
} else {
f_aggregate_971(F->up, F->ag_2586, (*F->t_896), &F->aty_2584, &(*F->r_897));
}
f_constrain_902(F->up, F->y_895, (*F->t_896), &(*F->r_897));
goto ret_;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_894)).b_, (*F->t_896), &F->aty_2584, &F->a_2585);
if ((((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2584)).kind_) == ((rt_int)6LL))) && (!f_same_453(F->up, (*F->t_896), F->aty_2584)))) {
f_array_conversion_909(F->up, F->e_894, (*F->t_896), F->aty_2584, (*(P117)rt_nil_check(F->y_895)).c_, (*(P140)rt_nil_check(F->a_2585)), &(*F->r_897));
goto ret_;
}
if ((f_is_numeric_462(F->up, (*F->t_896)) && f_is_numeric_462(F->up, F->aty_2584))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2584)).kind_) != ((rt_int)1LL)))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P140)rt_nil_check(F->a_2585))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2584)).kind_) == ((rt_int)1LL)))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P140)rt_nil_check(F->a_2585))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check((*F->t_896))).fsmall_ != NULL))) {
if ((G_NV((*(P122)rt_nil_check(F->aty_2584)).kind_) == ((rt_int)1LL))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P140)rt_nil_check(F->a_2585))), rt_g_lit("), ", 3)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_896))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check(F->a_2585))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_896))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_897) = F->a_2585;
}
} else if (((f_same_453(F->up, F->aty_2584, (*F->t_896)) || f_derived_from_460(F->up, F->aty_2584, (*F->t_896))) || f_derived_from_460(F->up, (*F->t_896), F->aty_2584))) {
(*F->r_897) = F->a_2585;
} else {
f_check_type_498(F->up, F->aty_2584, (*F->t_896), G_NV((*(P174)rt_nil_check(F->e_894)).line_));
(*F->r_897) = F->a_2585;
}
if (((((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)11LL))) && f_bounded_486(F->up, (*(P117)rt_nil_check(F->y_895)).c_))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_897)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_895)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_895)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_896))).kind_) == ((rt_int)16LL))) && f_bounded_486(F->up, (*(P117)rt_nil_check(F->y_895)).c_))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P140)rt_nil_check((*F->r_897)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_895)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_895)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_855(F->up, (*F->t_896))) {
(*F->r_897) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_897)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_902(struct f_greenc_1fr *up_, P117 y_899, P122 t_900, P140 *r_901) {
  struct f_constrain_902fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_899 = y_899;
F->t_900 = t_900;
F->r_901 = r_901;
F->ct_2591 = NULL;
F->tmp_2592 = NULL;
if ((((*(P117)rt_nil_check(F->y_899)).c_ == NULL) || ((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_899)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_900)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_488(F->up, (*(P122)rt_nil_check(F->t_900)).tcons_)))) {
f_ctype_503(F->up, F->t_900, &F->ct_2591);
f_new_name_240(F->up, rt_g_lit("q", 1), &F->tmp_2592);
(*F->r_901) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2591))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2592))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*F->r_901)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_899)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_899)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2592))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2592))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2592))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2592))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_909(struct f_greenc_1fr *up_, P174 e_903, P122 t_904, P122 aty_905, P178 c_906, rt_gstr a_907, P140 *r_908) {
  struct f_array_conversion_909fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_903 = e_903;
F->t_904 = t_904;
F->aty_905 = aty_905;
F->c_906 = c_906;
F->a_907 = cp_rt_gstr(a_907);
F->r_908 = r_908;
F->x_2593 = NULL;
F->y_2594 = NULL;
F->ct_2595 = NULL;
F->act_2596 = NULL;
F->et_2597 = NULL;
F->tmp_2598 = NULL;
F->s_2599 = NULL;
F->x_2593 = F->t_904;
F->y_2594 = F->aty_905;
if ((G_NV((*(P122)rt_nil_check(F->t_904)).dims_) != G_NV((*(P122)rt_nil_check(F->aty_905)).dims_))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2602 = ((rt_int)1LL), hi2603 = G_NV((*(P122)rt_nil_check(F->t_904)).dims_);
for (rt_int it2604 = lo2602; it2604 <= hi2603; it2604++) {
F->k_2601 = it2604;
if ((!((f_same_453(F->up, (*(P122)rt_nil_check(F->x_2593)).idx_, (*(P122)rt_nil_check(F->y_2594)).idx_) || f_derived_from_460(F->up, (*(P122)rt_nil_check(F->x_2593)).idx_, (*(P122)rt_nil_check(F->y_2594)).idx_)) || f_derived_from_460(F->up, (*(P122)rt_nil_check(F->y_2594)).idx_, (*(P122)rt_nil_check(F->x_2593)).idx_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_494(F->up, F->aty_905)), rt_g_lit(" to ", 4)), f_kind_name_494(F->up, F->t_904)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2593 = (*(P122)rt_nil_check(F->x_2593)).elem_;
F->y_2594 = (*(P122)rt_nil_check(F->y_2594)).elem_;
}
}
L_end_2600: ;
if ((!((f_same_453(F->up, F->x_2593, F->y_2594) || f_derived_from_460(F->up, F->x_2593, F->y_2594)) || f_derived_from_460(F->up, F->y_2594, F->x_2593)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_903)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_494(F->up, F->aty_905)), rt_g_lit(" to ", 4)), f_kind_name_494(F->up, F->t_904)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_503(F->up, F->t_904, &F->ct_2595);
f_ctype_503(F->up, F->aty_905, &F->act_2596);
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_904)).elem_, &F->et_2597);
f_new_name_240(F->up, rt_g_lit("cv", 2), &F->tmp_2598);
(*F->r_908) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->act_2596))), rt_g_lit(" s_ = ", 6)), F->a_907), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->ct_2595))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit(".p = (", 6)), (*(P140)rt_nil_check(F->et_2597))), rt_g_lit(" *)s_.p; ", 9)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("; })", 4)));
if ((((*(P122)rt_nil_check(F->t_904)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_904)).tcons_)).hi_ != NULL))) {
(*F->r_908) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2595))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("x = ", 4)), (*(P140)rt_nil_check((*F->r_908)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_904)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_904)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_255(F->up)), rt_g_lit("array length", 12)), f_q_255(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("x.lo = l_; ", 11)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("x.hi = h_; ", 11)), (*(P140)rt_nil_check(F->tmp_2598))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_914(struct f_greenc_1fr *up_, P174 e_910, P122 want_911, P122 *t_912, P140 *r_913) {
  struct f_gen_attr_914fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_910 = e_910;
F->want_911 = want_911;
F->t_912 = t_912;
F->r_913 = r_913;
F->a_2605 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_910)).name_)));
F->y_2606 = NULL;
F->tt_2607 = NULL;
F->aty_2608 = NULL;
F->v_2609 = NULL;
F->d_2610 = NULL;
F->c_2611 = NULL;
F->n_2612 = INT64_MIN;
F->ro_2613 = INT_MIN;
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1141(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_)).name_))))) {
f_member_attr_1214(F->up, F->e_910, &(*F->t_912), &(*F->r_913));
goto ret_;
}
if ((eq_rt_gstr(F->a_2605, rt_g_lit("ADDRESS", 7)) && f_is_object_773(F->up, (*(P174)rt_nil_check(F->e_910)).a_))) {
f_lvalue_781(F->up, (*(P174)rt_nil_check(F->e_910)).a_, &F->v_2609, &F->aty_2608, &F->c_2611, &F->ro_2613);
 (void)rt_range(F->ro_2613, 0, 1);
(*F->t_912) = F->up->ty_int_156;
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2605, rt_g_lit("COUNT", 5)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2606 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_)).name_)));
if ((((F->y_2606 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)10LL))) && ((*(P117)rt_nil_check(F->y_2606)).c_ != NULL))) {
if ((!f_same_task_436(F->up, (*(P117)rt_nil_check(F->y_2606)).members_, F->up->cur_task_211))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1164(F->up, F->y_2606, rt_g_lit("", 0), &F->v_2609);
f_gexpr_825(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).b_, NULL, &F->aty_2608, &F->d_2610);
f_entry_family_slot_1180(F->up, F->y_2606, (*(P140)rt_nil_check(F->v_2609)), (*(P140)rt_nil_check(F->d_2610)), &F->v_2609);
(*F->t_912) = F->up->ty_int_156;
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->v_2609))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_))) {
F->y_2606 = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_910)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2606 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)));
if (((F->y_2606 == NULL) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_936(F->up, F->e_910, &(*F->t_912), &(*F->r_913));
goto ret_;
}
if (((eq_rt_gstr(F->a_2605, rt_g_lit("ADDRESS", 7)) && (F->y_2606 != NULL)) && ((((G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)3LL))) || (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)9LL))))) {
(*F->t_912) = F->up->ty_int_156;
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_426(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2606)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2606)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2606 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2605, rt_g_lit("CLOCK", 5)))) {
(*F->t_912) = F->up->ty_time_171;
(*F->r_913) = f_mk_237(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2606 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_910)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2605, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2605, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_912) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2605, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2606 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) == ((rt_int)5LL)))) {
F->tt_2607 = (*(P117)rt_nil_check(F->y_2606)).t_;
F->c_2611 = (*(P117)rt_nil_check(F->y_2606)).c_;
if (eq_rt_gstr(F->a_2605, rt_g_lit("SIZE", 4))) {
(*F->t_912) = F->up->ty_int_156;
f_type_bits_918(F->up, F->tt_2607, F->c_2611, &(*F->r_913));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2605, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2605, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2605, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2605, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2605, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2605, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2605, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2605, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2605, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_928(F->up, F->e_910, F->tt_2607, F->c_2611, &(*F->t_912), &(*F->r_913));
goto ret_;
}
if (eq_rt_gstr(F->a_2605, rt_g_lit("ORD", 3))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_910)).b_, F->tt_2607, &F->aty_2608, &F->v_2609);
f_check_type_498(F->up, F->aty_2608, F->tt_2607, G_NV((*(P174)rt_nil_check(F->e_910)).line_));
(*F->t_912) = F->up->ty_int_156;
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2605, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2605, rt_g_lit("REP", 3)))) {
f_val_rep_961(F->up, F->e_910, F->tt_2607, F->c_2611, &(*F->t_912), &(*F->r_913));
goto ret_;
} else if ((eq_rt_gstr(F->a_2605, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2605, rt_g_lit("PRED", 4)))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_910)).b_, F->tt_2607, &F->aty_2608, &F->v_2609);
(*F->t_912) = F->tt_2607;
if ((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2605, rt_g_lit("SUCC", 4))) {
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2605, rt_g_lit("SUCC", 4))) {
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit(" + 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2611)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2611)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_913) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2609))), rt_g_lit(" - 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2611)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2611)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2605, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2605, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_952(F->up, F->e_910, F->tt_2607, F->c_2611, &(*F->t_912), &(*F->r_913));
goto ret_;
} else if ((eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2605, rt_g_lit("LAST", 4)))) {
(*F->t_912) = F->tt_2607;
if (f_bounded_486(F->up, F->c_2611)) {
if (eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5))) {
(*F->r_913) = (*(P178)rt_nil_check(F->c_2611)).lo_;
} else {
(*F->r_913) = (*(P178)rt_nil_check(F->c_2611)).hi_;
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5))) {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)3LL)) && (f_root_457(F->up, F->tt_2607) == F->up->ty_sfloat_169))) {
if (eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5))) {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5))) {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_913) = f_mk_237(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2605));
}
goto ret_;
}
f_other_attr_1210(F->up, F->e_910, F->y_2606, &(*F->t_912), &(*F->r_913));
goto ret_;
}
if (((F->y_2606 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2606)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1210(F->up, F->e_910, F->y_2606, &(*F->t_912), &(*F->r_913));
goto ret_;
}
if (((eq_rt_gstr(F->a_2605, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2605, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2605, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_932(F->up, F->e_910, &(*F->t_912), &(*F->r_913));
goto ret_;
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_910)).a_, NULL, &F->tt_2607, &F->v_2609);
if (eq_rt_gstr(F->a_2605, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) != ((rt_int)8LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_912) = F->up->ty_int_156;
(*F->r_913) = f_mk_237(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2605, rt_g_lit("SIZE", 4))) {
(*F->t_912) = F->up->ty_int_156;
f_object_bits_922(F->up, F->tt_2607, (*(P140)rt_nil_check(F->v_2609)), &(*F->r_913));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_619(F->up, F->tt_2607);
f_deref_771(F->up, (*(P140)rt_nil_check(F->v_2609)), F->tt_2607, &F->d_2610);
F->v_2609 = F->d_2610;
F->tt_2607 = (*(P122)rt_nil_check(F->tt_2607)).target_;
}
(*F->t_912) = F->up->ty_int_156;
if (((G_NV((*(P122)rt_nil_check(F->tt_2607)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2605, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2605, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2605, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_946(F->up, F->e_910, F->tt_2607, (*(P140)rt_nil_check(F->v_2609)), &(*F->t_912), &(*F->r_913));
goto ret_;
}
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_910)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2605), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_918(struct f_greenc_1fr *up_, P122 t_915, P178 c_916, P140 *r_917) {
  struct f_type_bits_918fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_915 = t_915;
F->c_916 = c_916;
F->r_917 = r_917;
F->ct_2614 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_486(F->up, F->c_916))) {
f_fail_258(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_915)).elem_, &F->ct_2614);
(*F->r_917) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_916)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_916)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P140)rt_nil_check(F->ct_2614))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)2LL)))) {
(*F->r_917) = f_mk_237(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_317(F->up, (*(P122)rt_nil_check(F->t_915)).lits_) <= ((rt_int)256LL))) {
(*F->r_917) = f_mk_237(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_917) = f_mk_237(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)1LL)) && (f_root_457(F->up, F->t_915) == F->up->ty_short_167))) {
(*F->r_917) = f_mk_237(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P122)rt_nil_check(F->t_915)).kind_) == ((rt_int)3LL)) && (f_root_457(F->up, F->t_915) == F->up->ty_sfloat_169))) {
(*F->r_917) = f_mk_237(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_503(F->up, F->t_915, &F->ct_2614);
(*F->r_917) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P140)rt_nil_check(F->ct_2614))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_922(struct f_greenc_1fr *up_, P122 t_919, rt_gstr v_920, P140 *r_921) {
  struct f_object_bits_922fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_919 = t_919;
F->v_920 = cp_rt_gstr(v_920);
F->r_921 = r_921;
F->ct_2615 = NULL;
F->et_2616 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_919)).kind_) == ((rt_int)6LL))) {
f_ctype_503(F->up, F->t_919, &F->ct_2615);
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->t_919)).elem_, &F->et_2616);
(*F->r_921) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2615))), rt_g_lit(" sz_ = ", 7)), F->v_920), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P140)rt_nil_check(F->et_2616))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_918(F->up, F->t_919, NULL, &(*F->r_921));
(*F->r_921) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_920), rt_g_lit("); ", 3)), (*(P140)rt_nil_check((*F->r_921)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_928(struct f_greenc_1fr *up_, P174 e_923, P122 tt_924, P178 c_925, P122 *t_926, P140 *r_927) {
  struct f_numeric_attr_928fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_923 = e_923;
F->tt_924 = tt_924;
F->c_925 = c_925;
F->t_926 = t_926;
F->r_927 = r_927;
F->a_2617 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_923)).name_)));
F->short_2618 = INT_MIN;
F->short_2618 = (f_root_457(F->up, F->tt_924) == F->up->ty_sfloat_169);
(*F->t_926) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2617, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_924)).kind_) != ((rt_int)8LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_462(F->up, F->tt_924))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_924)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2617, rt_g_lit("DIGITS", 6))) {
if (((F->c_925 != NULL) && ((*(P178)rt_nil_check(F->c_925)).acc_ != NULL))) {
(*F->r_927) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_927) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->tt_924)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2618)) {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2618)) {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2618)) {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("SMALL", 5))) {
(*F->t_926) = F->tt_924;
if (G_NV(F->short_2618)) {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("LARGE", 5))) {
(*F->t_926) = F->tt_924;
if (G_NV(F->short_2618)) {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_927) = f_mk_237(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_924)).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check(F->tt_924)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2617, rt_g_lit("DELTA", 5))) {
(*F->t_926) = F->tt_924;
if (((F->c_925 != NULL) && ((*(P178)rt_nil_check(F->c_925)).acc_ != NULL))) {
(*F->r_927) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_927) = (*(P122)rt_nil_check(F->tt_924)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("SMALL", 5))) {
(*F->t_926) = F->tt_924;
(*F->r_927) = (*(P122)rt_nil_check(F->tt_924)).fsmall_;
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("LARGE", 5))) {
(*F->t_926) = F->tt_924;
(*F->r_927) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_924)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2617, rt_g_lit("BITS", 4))) {
(*F->r_927) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_924)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_925)).hi_))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), cat_rt_gstr(F->a_2617, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_923)).line_), cat_rt_gstr(F->a_2617, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_932(struct f_greenc_1fr *up_, P174 e_929, P122 *t_930, P140 *r_931) {
  struct f_component_attr_932fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_929 = e_929;
F->t_930 = t_930;
F->r_931 = r_931;
F->bt_2619 = NULL;
F->v_2620 = NULL;
F->ct_2621 = NULL;
F->f_2622 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_929)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_929)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_929)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_929)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_929)).a_)).a_, NULL, &F->bt_2619, &F->v_2620);
if ((G_NV((*(P122)rt_nil_check(F->bt_2619)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_619(F->up, F->bt_2619);
F->bt_2619 = (*(P122)rt_nil_check(F->bt_2619)).target_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_2619)).kind_) != ((rt_int)7LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_929)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_929)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2622 = (*(P122)rt_nil_check(F->bt_2619)).fields_;
while (((F->f_2622 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2622)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_929)).a_)).name_)))))) {
F->f_2622 = (*(P1938)rt_nil_check(F->f_2622)).next_;
}
L_end_2623: ;
if ((F->f_2622 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_929)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_494(F->up, F->bt_2619), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_929)).a_)).name_))));
}
f_ctype_503(F->up, F->bt_2619, &F->ct_2621);
(*F->t_930) = F->up->ty_int_156;
f_component_place_570(F->up, F->bt_2619, F->f_2622, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_929)).name_)), (*(P140)rt_nil_check(F->ct_2621)), &(*F->r_931));
ret_:

  return;
}

static void f_config_attr_936(struct f_greenc_1fr *up_, P174 e_933, P122 *t_934, P140 *r_935) {
  struct f_config_attr_936fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_933 = e_933;
F->t_934 = t_934;
F->r_935 = r_935;
F->a_2624 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_933)).name_)));
F->p_2625 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_933)).a_)).name_)));
F->nm_2626 = NULL;
F->nm_2626 = F->up->conf_system_232;
(*F->t_934) = F->up->ty_int_156;
if (eq_rt_gstr(F->p_2625, rt_g_lit("OPTION", 6))) {
(*F->t_934) = F->up->ty_bool_157;
if (eq_rt_gstr(F->a_2624, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_235 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_235)), rt_g_lit("TIME", 4)))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("1", 1));
} else {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_235 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_235)), rt_g_lit("SPACE", 5)))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("1", 1));
} else {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_933)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("CLOCK", 5))) {
(*F->t_934) = F->up->ty_time_171;
(*F->r_935) = f_mk_237(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("NAME", 4))) {
if ((F->nm_2626 == NULL)) {
F->nm_2626 = f_mk_237(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_934) = F->up->ty_string_160;
(*F->r_935) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_810(F->up, (*(P140)rt_nil_check(F->nm_2626)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2628 = (*(P140)rt_nil_check(F->nm_2626)); at2628.hi >= at2628.lo ? at2628.hi - at2628.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_935) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_233)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_935) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_234)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("MAX_INT", 7))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2624, rt_g_lit("MIN_INT", 7))) {
(*F->r_935) = f_mk_237(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_933)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2624), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_940(struct f_greenc_1fr *up_, P174 e_937, P122 arrt_938, rt_int *n_939) {
  struct f_attr_dim_940fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_937 = e_937;
F->arrt_938 = arrt_938;
F->n_939 = n_939;
F->ok_2629 = INT_MIN;
(*F->n_939) = ((rt_int)1LL);
if (((*(P174)rt_nil_check(F->e_937)).b_ != NULL)) {
f_manifest_515(F->up, (*(P174)rt_nil_check(F->e_937)).b_, &(*F->n_939), &F->ok_2629);
 (void)rt_range(F->ok_2629, 0, 1);
if ((!G_NV(F->ok_2629))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_937)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_937)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_939)) < ((rt_int)1LL)) || (G_NV((*F->n_939)) > G_NV((*(P122)rt_nil_check(F->arrt_938)).dims_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_937)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_494(F->up, F->arrt_938), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_939))))));
}
ret_:

  return;
}

static void f_object_array_attr_946(struct f_greenc_1fr *up_, P174 e_941, P122 arrt_942, rt_gstr v_943, P122 *t_944, P140 *r_945) {
  struct f_object_array_attr_946fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_941 = e_941;
F->arrt_942 = arrt_942;
F->v_943 = cp_rt_gstr(v_943);
F->t_944 = t_944;
F->r_945 = r_945;
F->n_2630 = INT64_MIN;
F->it_2631 = NULL;
F->it_2631 = F->arrt_942;
F->ct_2632 = NULL;
F->tmp_2633 = NULL;
F->p_2634 = NULL;
F->lo_2635 = NULL;
F->hi_2636 = NULL;
f_attr_dim_940(F->up, F->e_941, F->arrt_942, &F->n_2630);
f_ctype_503(F->up, F->arrt_942, &F->ct_2632);
f_new_name_240(F->up, rt_g_lit("at", 2), &F->tmp_2633);
F->p_2634 = F->tmp_2633;
{ rt_int lo2639 = ((rt_int)2LL), hi2640 = G_NV(F->n_2630);
for (rt_int it2641 = lo2639; it2641 <= hi2640; it2641++) {
F->k_2638 = it2641;
F->it_2631 = (*(P122)rt_nil_check(F->it_2631)).elem_;
}
}
L_end_2637: ;
if ((G_NV(F->n_2630) == ((rt_int)1LL))) {
F->lo_2635 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2634)), rt_g_lit(".lo", 3)));
F->hi_2636 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2634)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2644 = ((rt_int)3LL), hi2645 = G_NV(F->n_2630);
for (rt_int it2646 = lo2644; it2646 <= hi2645; it2646++) {
F->k_2643 = it2646;
F->p_2634 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2634)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2642: ;
F->lo_2635 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2634)), rt_g_lit(".lo2", 4)));
F->hi_2636 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2634)), rt_g_lit(".hi2", 4)));
}
(*F->t_944) = (*(P122)rt_nil_check(F->it_2631)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_941)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_945) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2632))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2633))), rt_g_lit(" = ", 3)), F->v_943), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->lo_2635))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_941)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_945) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2632))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2633))), rt_g_lit(" = ", 3)), F->v_943), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2636))), rt_g_lit("; })", 4)));
} else {
(*F->t_944) = F->up->ty_int_156;
(*F->r_945) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2632))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2633))), rt_g_lit(" = ", 3)), F->v_943), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2636))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2635))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2636))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2635))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_952(struct f_greenc_1fr *up_, P174 e_947, P122 arrt_948, P178 c_949, P122 *t_950, P140 *r_951) {
  struct f_type_array_attr_952fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_947 = e_947;
F->arrt_948 = arrt_948;
F->c_949 = c_949;
F->t_950 = t_950;
F->r_951 = r_951;
F->n_2647 = INT64_MIN;
F->it_2648 = NULL;
F->it_2648 = F->arrt_948;
F->cc_2649 = NULL;
F->cc_2649 = F->c_949;
f_attr_dim_940(F->up, F->e_947, F->arrt_948, &F->n_2647);
{ rt_int lo2652 = ((rt_int)2LL), hi2653 = G_NV(F->n_2647);
for (rt_int it2654 = lo2652; it2654 <= hi2653; it2654++) {
F->k_2651 = it2654;
F->it_2648 = (*(P122)rt_nil_check(F->it_2648)).elem_;
if ((F->cc_2649 != NULL)) {
F->cc_2649 = (*(P178)rt_nil_check(F->cc_2649)).inner_;
}
}
}
L_end_2650: ;
if (((F->cc_2649 == NULL) || ((*(P178)rt_nil_check(F->cc_2649)).lo_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_947)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_494(F->up, F->arrt_948)), rt_g_lit(" are not known here: ", 21)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_947)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_950) = (*(P122)rt_nil_check(F->it_2648)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_947)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_951) = (*(P178)rt_nil_check(F->cc_2649)).lo_;
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_947)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_951) = (*(P178)rt_nil_check(F->cc_2649)).hi_;
} else {
(*F->t_950) = F->up->ty_int_156;
(*F->r_951) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2649)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2649)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_955(struct f_greenc_1fr *up_, P122 t_953, P140 *r_954) {
  struct f_lit_table_955fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_953 = t_953;
F->r_954 = r_954;
F->l_2655 = NULL;
F->l_2655 = (*(P122)rt_nil_check(F->t_953)).lits_;
F->s_2656 = NULL;
F->s_2656 = f_mk_237(F->up, rt_g_lit("", 0));
if (((*(P122)rt_nil_check(F->t_953)).littab_ == NULL)) {
f_new_name_240(F->up, rt_g_lit("lits", 4), &(*(P122)rt_nil_check(F->t_953)).littab_);
while ((F->l_2655 != NULL)) {
if ((({ rt_gstr at2658 = (*(P140)rt_nil_check(F->s_2656)); at2658.hi >= at2658.lo ? at2658.hi - at2658.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2656 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2656)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P174)rt_nil_check(F->l_2655)).kind_) == ((rt_int)3LL))) {
F->s_2656 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2656)), f_c_string_810(F->up, cat_rt_gstr(cat_rt_gstr(f_q_255(F->up), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2655)).name_))), f_q_255(F->up)))));
} else {
F->s_2656 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2656)), f_c_string_810(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2655)).name_)))));
}
F->l_2655 = (*(P174)rt_nil_check(F->l_2655)).next_;
}
L_end_2657: ;
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_953)).littab_))), rt_g_lit("[] = {", 6)), (*(P140)rt_nil_check(F->s_2656))), rt_g_lit("};", 2)));
}
(*F->r_954) = (*(P122)rt_nil_check(F->t_953)).littab_;
ret_:

  return;
}

static void f_val_rep_961(struct f_greenc_1fr *up_, P174 e_956, P122 tt_957, P178 c_958, P122 *t_959, P140 *r_960) {
  struct f_val_rep_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_956 = e_956;
F->tt_957 = tt_957;
F->c_958 = c_958;
F->t_959 = t_959;
F->r_960 = r_960;
F->aty_2659 = NULL;
F->v_2660 = NULL;
F->lt_2661 = NULL;
F->n_2662 = INT64_MIN;
if (((*(P174)rt_nil_check(F->e_956)).b_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_956)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_956)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_956)).b_, F->tt_957, &F->aty_2659, &F->v_2660);
f_check_type_498(F->up, F->aty_2659, F->tt_957, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
(*F->t_959) = F->up->ty_string_160;
if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)1LL))) {
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)3LL))) {
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)2LL))) {
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)11LL))) {
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)4LL))) {
f_lit_table_955(F->up, F->tt_957, &F->lt_2661);
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2661))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_317(F->up, (*(P122)rt_nil_check(F->tt_957)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P140)rt_nil_check((*F->r_960)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_959) = F->tt_957;
if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)1LL))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_956)).b_, F->up->ty_string_160, &F->aty_2659, &F->v_2660);
f_check_type_498(F->up, F->aty_2659, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit("))", 2)));
if (f_bounded_486(F->up, F->c_958)) {
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_960)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_958)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_958)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)3LL))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_956)).b_, F->up->ty_string_160, &F->aty_2659, &F->v_2660);
f_check_type_498(F->up, F->aty_2659, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)2LL)) || (G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)4LL)))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_956)).b_, NULL, &F->aty_2659, &F->v_2660);
if (f_is_string_582(F->up, F->aty_2659)) {
F->v_2660 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)2LL))) {
F->v_2660 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_957)).kind_) == ((rt_int)11LL))) {
F->v_2660 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P140)rt_nil_check(F->v_2660))), one_rt_gstr(41)));
} else {
f_lit_table_955(F->up, F->tt_957, &F->lt_2661);
F->v_2660 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2661))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_317(F->up, (*(P122)rt_nil_check(F->tt_957)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_498(F->up, F->aty_2659, F->up->ty_int_156, G_NV((*(P174)rt_nil_check(F->e_956)).line_));
F->v_2660 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit(" - 1)", 5)));
}
(*F->r_960) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2660))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_958)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_958)).hi_))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_956)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_966(struct f_greenc_1fr *up_, P174 e_962, P122 want_963, P122 *t_964, P140 *r_965) {
  struct f_allocator_966fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_962 = e_962;
F->want_963 = want_963;
F->t_964 = t_964;
F->r_965 = r_965;
F->y_2663 = NULL;
F->y_2663 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_962)).name_)));
F->target_2664 = NULL;
F->vt_2665 = NULL;
F->ct_2666 = NULL;
F->pt_2667 = NULL;
F->cell_2668 = NULL;
F->v_2669 = NULL;
F->x_2670 = NULL;
if (((F->want_963 == NULL) || (G_NV((*(P122)rt_nil_check(F->want_963)).kind_) != ((rt_int)8LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_962)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2663 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2663)).kind_) != ((rt_int)5LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_962)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_962)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_619(F->up, F->want_963);
F->target_2664 = (*(P122)rt_nil_check(F->want_963)).target_;
if ((!f_same_453(F->up, (*(P117)rt_nil_check(F->y_2663)).t_, F->want_963))) {
f_check_type_498(F->up, (*(P117)rt_nil_check(F->y_2663)).t_, F->target_2664, G_NV((*(P174)rt_nil_check(F->e_962)).line_));
}
f_ctype_503(F->up, F->target_2664, &F->ct_2666);
f_ctype_503(F->up, F->want_963, &F->pt_2667);
f_new_name_240(F->up, rt_g_lit("cell", 4), &F->cell_2668);
if (((*(P174)rt_nil_check(F->e_962)).a_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_962)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_226 != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_962)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_962)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_971(F->up, (*(P174)rt_nil_check(F->e_962)).a_, F->target_2664, &F->vt_2665, &F->v_2669);
} else {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_962)).a_, F->target_2664, &F->vt_2665, &F->v_2669);
}
f_check_type_498(F->up, F->vt_2665, F->target_2664, G_NV((*(P174)rt_nil_check(F->e_962)).line_));
f_copy_code_635(F->up, F->target_2664, (*(P140)rt_nil_check(F->v_2669)), &F->x_2670);
(*F->t_964) = F->want_963;
(*F->r_965) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2666))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->cell_2668))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P140)rt_nil_check(F->ct_2666))), rt_g_lit(")); *", 5)), (*(P140)rt_nil_check(F->cell_2668))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2670))), rt_g_lit("; (", 3)), (*(P140)rt_nil_check(F->pt_2667))), one_rt_gstr(41)), (*(P140)rt_nil_check(F->cell_2668))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_971(struct f_greenc_1fr *up_, P174 e_967, P122 want_968, P122 *t_969, P140 *r_970) {
  struct f_aggregate_971fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_967 = e_967;
F->want_968 = want_968;
F->t_969 = t_969;
F->r_970 = r_970;
F->b_2671 = NULL;
F->b_2671 = F->up->agg_bounds_181;
F->up->agg_bounds_181 = NULL;
if ((F->want_968 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_967)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_969) = F->want_968;
if ((G_NV((*(P122)rt_nil_check(F->want_968)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_993(F->up, F->e_967, F->want_968, &(*F->r_970));
} else if ((G_NV((*(P122)rt_nil_check(F->want_968)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_1011(F->up, F->e_967, F->want_968, F->b_2671, &(*F->r_970));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_967)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_494(F->up, F->want_968)));
}
ret_:

  return;
}

static void f_captured_974(struct f_greenc_1fr *up_, P126 b_972, P140 *r_973) {
  struct f_captured_974fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_972 = b_972;
F->r_973 = r_973;
F->l_2672 = NULL;
F->l_2672 = (*(P126)rt_nil_check(F->b_972)).head_;
(*F->r_973) = f_mk_237(F->up, rt_g_lit("", 0));
while ((F->l_2672 != NULL)) {
(*F->r_973) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_973))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2672)).s_))));
F->l_2672 = (*(P151)rt_nil_check(F->l_2672)).next_;
}
L_end_2673: ;
ret_:

  return;
}

static P1938 f_field_at_977(struct f_greenc_1fr *up_, P122 rt_975, rt_int k_976) {
  struct f_field_at_977fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_975 = rt_975;
F->k_976 = k_976;
F->f_2674 = NULL;
F->f_2674 = (*(P122)rt_nil_check(F->rt_975)).fields_;
{ rt_int lo2677 = ((rt_int)2LL), hi2678 = F->k_976;
for (rt_int it2679 = lo2677; it2679 <= hi2678; it2679++) {
F->i_2676 = it2679;
F->f_2674 = (*(P1938)rt_nil_check(F->f_2674)).next_;
}
}
L_end_2675: ;
F->result_ = F->f_2674;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_980(struct f_greenc_1fr *up_, P174 x_978, P1938 f_979) {
  struct f_names_field_980fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_978 = x_978;
F->f_979 = f_979;
if ((G_NV((*(P174)rt_nil_check(F->x_978)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_978)).name_)), (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_979)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P174 f_item_for_985(struct f_greenc_1fr *up_, P174 e_981, P122 rt_982, rt_int k_983, rt_int p_984) {
  struct f_item_for_985fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_981 = e_981;
F->rt_982 = rt_982;
F->k_983 = k_983;
F->p_984 = p_984;
F->it_2680 = NULL;
F->it_2680 = (*(P174)rt_nil_check(F->e_981)).a_;
F->lab_2681 = NULL;
F->n_2682 = INT64_MIN;
F->n_2682 = ((rt_int)0LL);
while ((F->it_2680 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2680)).a_ == NULL)) {
F->n_2682 = rt_add(G_NV(F->n_2682), ((rt_int)1LL));
if ((G_NV(F->n_2682) == F->p_984)) {
F->result_ = (*(P174)rt_nil_check(F->it_2680)).b_;
goto ret_;
}
} else {
F->lab_2681 = (*(P174)rt_nil_check(F->it_2680)).a_;
while ((F->lab_2681 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->lab_2681)).flag_) == ((rt_int)1LL)) || f_names_field_980(F->up, (*(P174)rt_nil_check(F->lab_2681)).a_, f_field_at_977(F->up, F->rt_982, F->k_983)))) {
F->result_ = (*(P174)rt_nil_check(F->it_2680)).b_;
goto ret_;
}
F->lab_2681 = (*(P174)rt_nil_check(F->lab_2681)).next_;
}
L_end_2684: ;
}
F->it_2680 = (*(P174)rt_nil_check(F->it_2680)).next_;
}
L_end_2683: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_989(struct f_greenc_1fr *up_, P174 arm_986, rt_int v_987, int *res_988) {
  struct f_arm_holds_989fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_986 = arm_986;
F->v_987 = v_987;
F->res_988 = res_988;
F->l_2685 = NULL;
F->l_2685 = (*(P174)rt_nil_check(F->arm_986)).a_;
F->lo_2686 = INT64_MIN;
F->hi_2687 = INT64_MIN;
F->ok_2688 = INT_MIN;
(*F->res_988) = 0;
while ((F->l_2685 != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->l_2685)).a_, &F->lo_2686, &F->ok_2688);
 (void)rt_range(F->ok_2688, 0, 1);
F->hi_2687 = G_NV(F->lo_2686);
if (((*(P174)rt_nil_check(F->l_2685)).b_ != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->l_2685)).b_, &F->hi_2687, &F->ok_2688);
 (void)rt_range(F->ok_2688, 0, 1);
}
if (((F->v_987 >= G_NV(F->lo_2686)) && (F->v_987 <= G_NV(F->hi_2687)))) {
(*F->res_988) = 1;
}
F->l_2685 = (*(P174)rt_nil_check(F->l_2685)).next_;
}
L_end_2689: ;
ret_:

  return;
}

static void f_record_aggregate_993(struct f_greenc_1fr *up_, P174 e_990, P122 rt_991, P140 *r_992) {
  struct f_record_aggregate_993fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_990 = e_990;
F->rt_991 = rt_991;
F->r_992 = r_992;
F->it_2690 = NULL;
F->it_2690 = (*(P174)rt_nil_check(F->e_990)).a_;
F->lab_2691 = NULL;
F->vn_2692 = NULL;
F->a_2693 = NULL;
F->f_2694 = NULL;
F->g_2695 = NULL;
F->n_2696 = INT64_MIN;
F->n_2696 = f_field_count_500(F->up, F->rt_991);
F->done_2698.lo = ((rt_int)1LL); F->done_2698.hi = ((rt_int)200LL);
F->done_2698.lo2 = 1; F->done_2698.hi2 = 1;
F->done_2698.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2698));
for (rt_int i2699 = 0; i2699 < G_CNT(F->done_2698); i2699++) F->done_2698.p[i2699] = INT_MIN;
F->active_2700.lo = ((rt_int)1LL); F->active_2700.hi = ((rt_int)200LL);
F->active_2700.lo2 = 1; F->active_2700.hi2 = 1;
F->active_2700.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2700));
for (rt_int i2701 = 0; i2701 < G_CNT(F->active_2700); i2701++) F->active_2700.p[i2701] = INT_MIN;
F->dvs_2703.lo = ((rt_int)1LL); F->dvs_2703.hi = ((rt_int)200LL);
F->dvs_2703.lo2 = 1; F->dvs_2703.hi2 = 1;
F->dvs_2703.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2703));
for (rt_int i2704 = 0; i2704 < G_CNT(F->dvs_2703); i2704++) F->dvs_2703.p[i2704] = INT64_MIN;
F->order_2706.lo = ((rt_int)1LL); F->order_2706.hi = ((rt_int)200LL);
F->order_2706.lo2 = 1; F->order_2706.hi2 = 1;
F->order_2706.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2706));
for (rt_int i2707 = 0; i2707 < G_CNT(F->order_2706); i2707++) F->order_2706.p[i2707] = INT64_MIN;
F->norder_2708 = INT64_MIN;
F->norder_2708 = ((rt_int)0LL);
F->nung_2709 = INT64_MIN;
F->nung_2709 = ((rt_int)0LL);
F->k_2710 = INT64_MIN;
F->k_2710 = ((rt_int)0LL);
F->d_2711 = INT64_MIN;
F->d_2711 = ((rt_int)0LL);
F->npos_2712 = INT64_MIN;
F->npos_2712 = ((rt_int)0LL);
F->saved_2713 = NULL;
F->saved_2713 = F->up->code_136;
F->ct_2714 = NULL;
F->tmp_2715 = NULL;
F->parts_2716 = NULL;
F->named_2717 = INT_MIN;
F->named_2717 = 0;
F->ok_2718 = INT_MIN;
F->ok_2718 = 0;
F->holds_2719 = INT_MIN;
F->holds_2719 = 0;
if ((G_NV((*(P122)rt_nil_check(F->rt_991)).priv_) && (!f_inside_package_1070(F->up, (*(P122)rt_nil_check(F->rt_991)).decl_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_494(F->up, F->rt_991)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2696) > ((rt_int)200LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2694 = (*(P122)rt_nil_check(F->rt_991)).fields_;
{ rt_int lo2722 = ((rt_int)1LL), hi2723 = G_NV(F->n_2696);
for (rt_int it2724 = lo2722; it2724 <= hi2723; it2724++) {
F->i_2721 = it2724;
(*({ A2697 *ix2725 = &(F->done_2698); &ix2725->p[rt_index(F->i_2721, ix2725->lo, ix2725->hi) - ix2725->lo]; })) = 0;
(*({ A2697 *ix2726 = &(F->active_2700); &ix2726->p[rt_index(F->i_2721, ix2726->lo, ix2726->hi) - ix2726->lo]; })) = ((*(P1938)rt_nil_check(F->f_2694)).guard_ == NULL);
if (G_NV(({ A2697 ix2727 = F->active_2700; ix2727.p[rt_index(F->i_2721, ix2727.lo, ix2727.hi) - ix2727.lo]; }))) {
F->norder_2708 = rt_add(G_NV(F->norder_2708), ((rt_int)1LL));
(*({ A2705 *ix2728 = &(F->order_2706); &ix2728->p[rt_index(G_NV(F->norder_2708), ix2728->lo, ix2728->hi) - ix2728->lo]; })) = F->i_2721;
}
F->f_2694 = (*(P1938)rt_nil_check(F->f_2694)).next_;
}
}
L_end_2720: ;
F->nung_2709 = G_NV(F->norder_2708);
{ rt_int lo2731 = ((rt_int)1LL), hi2732 = G_NV(F->nung_2709);
for (rt_int it2733 = lo2731; it2733 <= hi2732; it2733++) {
F->p_2730 = it2733;
F->f_2694 = f_field_at_977(F->up, F->rt_991, G_NV(({ A2705 ix2735 = F->order_2706; ix2735.p[rt_index(F->p_2730, ix2735.lo, ix2735.hi) - ix2735.lo]; })));
if (G_NV((*(P1938)rt_nil_check(F->f_2694)).is_discr_)) {
F->vn_2692 = f_item_for_985(F->up, F->e_990, F->rt_991, G_NV(({ A2705 ix2737 = F->order_2706; ix2737.p[rt_index(F->p_2730, ix2737.lo, ix2737.hi) - ix2737.lo]; })), F->p_2730);
if ((F->vn_2692 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2694)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_1006(F->up, F->vn_2692, &(*({ A2702 *ix2741 = &(F->dvs_2703); &ix2741->p[rt_index(G_NV(({ A2705 ix2740 = F->order_2706; ix2740.p[rt_index(F->p_2730, ix2740.lo, ix2740.hi) - ix2740.lo]; })), ix2741->lo, ix2741->hi) - ix2741->lo]; })), &F->ok_2718);
 (void)rt_range(F->ok_2718, 0, 1);
if (((!G_NV(F->ok_2718)) && f_is_enum_lit_808(F->up, F->vn_2692))) {
F->ok_2718 = 1;
(*({ A2702 *ix2743 = &(F->dvs_2703); &ix2743->p[rt_index(G_NV(({ A2705 ix2742 = F->order_2706; ix2742.p[rt_index(F->p_2730, ix2742.lo, ix2742.hi) - ix2742.lo]; })), ix2743->lo, ix2743->hi) - ix2743->lo]; })) = G_NV((*(P117)rt_nil_check(f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->vn_2692)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2718)) && ((*(P122)rt_nil_check(F->rt_991)).fields_ != NULL))) {
F->g_2695 = NULL;
F->d_2711 = ((rt_int)0LL);
F->a_2693 = NULL;
F->f_2694 = (*(P122)rt_nil_check(F->rt_991)).fields_;
while ((F->f_2694 != NULL)) {
F->g_2695 = (*(P1938)rt_nil_check(F->f_2694)).guard_;
while ((F->g_2695 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P2063)rt_nil_check(F->g_2695)).disc_)), (*(P140)rt_nil_check((*(P1938)rt_nil_check(f_field_at_977(F->up, F->rt_991, G_NV(({ A2705 ix2747 = F->order_2706; ix2747.p[rt_index(F->p_2730, ix2747.lo, ix2747.hi) - ix2747.lo]; }))))).name_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P140)rt_nil_check((*(P2063)rt_nil_check(F->g_2695)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2695 = (*(P2063)rt_nil_check(F->g_2695)).next_;
}
L_end_2745: ;
F->f_2694 = (*(P1938)rt_nil_check(F->f_2694)).next_;
}
L_end_2744: ;
}
}
}
}
L_end_2729: ;
F->f_2694 = (*(P122)rt_nil_check(F->rt_991)).fields_;
{ rt_int lo2750 = ((rt_int)1LL), hi2751 = G_NV(F->n_2696);
for (rt_int it2752 = lo2750; it2752 <= hi2751; it2752++) {
F->i_2749 = it2752;
if (((*(P1938)rt_nil_check(F->f_2694)).guard_ != NULL)) {
F->holds_2719 = 1;
F->g_2695 = (*(P1938)rt_nil_check(F->f_2694)).guard_;
while ((F->g_2695 != NULL)) {
F->d_2711 = f_field_index_996(F->up, F->rt_991, (*(P140)rt_nil_check((*(P2063)rt_nil_check(F->g_2695)).disc_)));
if ((G_NV((*(P174)rt_nil_check((*(P2063)rt_nil_check(F->g_2695)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2693 = (*(P174)rt_nil_check((*(P2063)rt_nil_check(F->g_2695)).variant_)).b_;
while ((F->a_2693 != NULL)) {
if ((F->a_2693 != (*(P2063)rt_nil_check(F->g_2695)).arm_)) {
f_arm_holds_989(F->up, F->a_2693, G_NV(({ A2702 ix2756 = F->dvs_2703; ix2756.p[rt_index(G_NV(F->d_2711), ix2756.lo, ix2756.hi) - ix2756.lo]; })), &F->ok_2718);
 (void)rt_range(F->ok_2718, 0, 1);
if (G_NV(F->ok_2718)) {
F->holds_2719 = 0;
}
}
F->a_2693 = (*(P174)rt_nil_check(F->a_2693)).next_;
}
L_end_2754: ;
} else {
f_arm_holds_989(F->up, (*(P2063)rt_nil_check(F->g_2695)).arm_, G_NV(({ A2702 ix2758 = F->dvs_2703; ix2758.p[rt_index(G_NV(F->d_2711), ix2758.lo, ix2758.hi) - ix2758.lo]; })), &F->ok_2718);
 (void)rt_range(F->ok_2718, 0, 1);
if ((!G_NV(F->ok_2718))) {
F->holds_2719 = 0;
}
}
F->g_2695 = (*(P2063)rt_nil_check(F->g_2695)).next_;
}
L_end_2753: ;
if (G_NV(F->holds_2719)) {
(*({ A2697 *ix2759 = &(F->active_2700); &ix2759->p[rt_index(F->i_2749, ix2759->lo, ix2759->hi) - ix2759->lo]; })) = 1;
F->norder_2708 = rt_add(G_NV(F->norder_2708), ((rt_int)1LL));
(*({ A2705 *ix2760 = &(F->order_2706); &ix2760->p[rt_index(G_NV(F->norder_2708), ix2760->lo, ix2760->hi) - ix2760->lo]; })) = F->i_2749;
}
}
F->f_2694 = (*(P1938)rt_nil_check(F->f_2694)).next_;
}
}
L_end_2748: ;
f_ctype_503(F->up, F->rt_991, &F->ct_2714);
f_new_name_240(F->up, rt_g_lit("ag", 2), &F->tmp_2715);
F->up->code_136 = f_new_buffer_259(F->up);
while ((F->it_2690 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2690)).a_ == NULL)) {
if (G_NV(F->named_2717)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2712 = rt_add(G_NV(F->npos_2712), ((rt_int)1LL));
if ((G_NV(F->npos_2712) > G_NV(F->norder_2708))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_494(F->up, F->rt_991)));
}
F->k_2710 = G_NV(({ A2705 ix2762 = F->order_2706; ix2762.p[rt_index(G_NV(F->npos_2712), ix2762.lo, ix2762.hi) - ix2762.lo]; }));
f_agg_component_1002(F->up, (*(P140)rt_nil_check(F->tmp_2715)), F->rt_991, G_NV(F->k_2710), (*(P174)rt_nil_check(F->it_2690)).b_, G_NV((*(P174)rt_nil_check(F->e_990)).line_));
(*({ A2697 *ix2763 = &(F->done_2698); &ix2763->p[rt_index(G_NV(F->k_2710), ix2763->lo, ix2763->hi) - ix2763->lo]; })) = 1;
} else {
F->named_2717 = 1;
F->lab_2691 = (*(P174)rt_nil_check(F->it_2690)).a_;
while ((F->lab_2691 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->lab_2691)).flag_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->it_2690)).next_ != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2767 = ((rt_int)1LL), hi2768 = G_NV(F->n_2696);
for (rt_int it2769 = lo2767; it2769 <= hi2768; it2769++) {
F->i_2766 = it2769;
if ((G_NV(({ A2697 ix2770 = F->active_2700; ix2770.p[rt_index(F->i_2766, ix2770.lo, ix2770.hi) - ix2770.lo]; })) && (!G_NV(({ A2697 ix2771 = F->done_2698; ix2771.p[rt_index(F->i_2766, ix2771.lo, ix2771.hi) - ix2771.lo]; }))))) {
f_agg_component_1002(F->up, (*(P140)rt_nil_check(F->tmp_2715)), F->rt_991, F->i_2766, (*(P174)rt_nil_check(F->it_2690)).b_, G_NV((*(P174)rt_nil_check(F->e_990)).line_));
(*({ A2697 *ix2772 = &(F->done_2698); &ix2772->p[rt_index(F->i_2766, ix2772->lo, ix2772->hi) - ix2772->lo]; })) = 1;
}
}
}
L_end_2765: ;
} else {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2691)).a_)).kind_) != ((rt_int)5LL)) || ((*(P174)rt_nil_check(F->lab_2691)).b_ != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2710 = f_field_index_996(F->up, F->rt_991, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2691)).a_)).name_)));
if ((G_NV(F->k_2710) == ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_494(F->up, F->rt_991), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2691)).a_)).name_))));
}
if ((!G_NV(({ A2697 ix2773 = F->active_2700; ix2773.p[rt_index(G_NV(F->k_2710), ix2773.lo, ix2773.hi) - ix2773.lo]; })))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2691)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2697 ix2774 = F->done_2698; ix2774.p[rt_index(G_NV(F->k_2710), ix2774.lo, ix2774.hi) - ix2774.lo]; }))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2691)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_1002(F->up, (*(P140)rt_nil_check(F->tmp_2715)), F->rt_991, G_NV(F->k_2710), (*(P174)rt_nil_check(F->it_2690)).b_, G_NV((*(P174)rt_nil_check(F->e_990)).line_));
(*({ A2697 *ix2775 = &(F->done_2698); &ix2775->p[rt_index(G_NV(F->k_2710), ix2775->lo, ix2775->hi) - ix2775->lo]; })) = 1;
}
F->lab_2691 = (*(P174)rt_nil_check(F->lab_2691)).next_;
}
L_end_2764: ;
}
F->it_2690 = (*(P174)rt_nil_check(F->it_2690)).next_;
}
L_end_2761: ;
F->f_2694 = (*(P122)rt_nil_check(F->rt_991)).fields_;
{ rt_int lo2778 = ((rt_int)1LL), hi2779 = G_NV(F->n_2696);
for (rt_int it2780 = lo2778; it2780 <= hi2779; it2780++) {
F->i_2777 = it2780;
if ((G_NV(({ A2697 ix2781 = F->active_2700; ix2781.p[rt_index(F->i_2777, ix2781.lo, ix2781.hi) - ix2781.lo]; })) && (!G_NV(({ A2697 ix2782 = F->done_2698; ix2782.p[rt_index(F->i_2777, ix2782.lo, ix2782.hi) - ix2782.lo]; }))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_990)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_494(F->up, F->rt_991)), rt_g_lit(": ", 2)), (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2694)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2694 = (*(P1938)rt_nil_check(F->f_2694)).next_;
}
}
L_end_2776: ;
f_captured_974(F->up, F->up->code_136, &F->parts_2716);
F->up->code_136 = F->saved_2713;
(*F->r_992) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2714))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2715))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2716))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2715))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_996(struct f_greenc_1fr *up_, P122 rt_994, rt_gstr name_995) {
  struct f_field_index_996fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_994 = rt_994;
F->name_995 = cp_rt_gstr(name_995);
F->f_2783 = NULL;
F->f_2783 = (*(P122)rt_nil_check(F->rt_994)).fields_;
F->k_2784 = INT64_MIN;
F->k_2784 = ((rt_int)1LL);
while ((F->f_2783 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2783)).name_)), F->name_995)) {
F->result_ = G_NV(F->k_2784);
goto ret_;
}
F->k_2784 = rt_add(G_NV(F->k_2784), ((rt_int)1LL));
F->f_2783 = (*(P1938)rt_nil_check(F->f_2783)).next_;
}
L_end_2785: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_1002(struct f_greenc_1fr *up_, rt_gstr tmp_997, P122 rt_998, rt_int k_999, P174 v_1000, rt_int line_1001) {
  struct f_agg_component_1002fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_997 = cp_rt_gstr(tmp_997);
F->rt_998 = rt_998;
F->k_999 = k_999;
F->v_1000 = v_1000;
F->line_1001 = line_1001;
F->f_2786 = NULL;
F->f_2786 = (*(P122)rt_nil_check(F->rt_998)).fields_;
F->vt_2787 = NULL;
F->x_2788 = NULL;
F->y_2789 = NULL;
{ rt_int lo2792 = ((rt_int)2LL), hi2793 = F->k_999;
for (rt_int it2794 = lo2792; it2794 <= hi2793; it2794++) {
F->i_2791 = it2794;
F->f_2786 = (*(P1938)rt_nil_check(F->f_2786)).next_;
}
}
L_end_2790: ;
f_gexpr_825(F->up, F->v_1000, (*(P1938)rt_nil_check(F->f_2786)).t_, &F->vt_2787, &F->x_2788);
f_check_type_498(F->up, F->vt_2787, (*(P1938)rt_nil_check(F->f_2786)).t_, F->line_1001);
if (((G_NV((*(P122)rt_nil_check((*(P1938)rt_nil_check(F->f_2786)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_486(F->up, (*(P1938)rt_nil_check(F->f_2786)).c_)))) {
f_copy_code_635(F->up, (*(P1938)rt_nil_check(F->f_2786)).t_, (*(P140)rt_nil_check(F->x_2788)), &F->y_2789);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_997, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2786)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->y_2789))), one_rt_gstr(59)));
} else {
if (f_composite_625(F->up, (*(P1938)rt_nil_check(F->f_2786)).t_)) {
f_init_storage_623(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_997, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2786)).name_)))), (*(P1938)rt_nil_check(F->f_2786)).t_, (*(P1938)rt_nil_check(F->f_2786)).c_);
}
f_assign_code_631(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_997, one_rt_gstr(46)), f_c_field_254(F->up, (*(P140)rt_nil_check((*(P1938)rt_nil_check(F->f_2786)).name_)))), (*(P1938)rt_nil_check(F->f_2786)).t_, (*(P140)rt_nil_check(F->x_2788)), (*(P1938)rt_nil_check(F->f_2786)).c_, &F->y_2789);
f_emit_264(F->up, (*(P140)rt_nil_check(F->y_2789)));
}
ret_:

  return;
}

static void f_static_choice_1006(struct f_greenc_1fr *up_, P174 x_1003, rt_int *v_1004, int *ok_1005) {
  struct f_static_choice_1006fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1003 = x_1003;
F->v_1004 = v_1004;
F->ok_1005 = ok_1005;
if (f_is_char_lit_806(F->up, F->x_1003)) {
(*F->ok_1005) = 1;
(*F->v_1004) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2795 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1003)).name_)); ix2795.p[rt_index(((rt_int)1LL), ix2795.lo, ix2795.hi) - ix2795.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_515(F->up, F->x_1003, &(*F->v_1004), &(*F->ok_1005));
 (void)rt_range((*F->ok_1005), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_1011(struct f_greenc_1fr *up_, P174 e_1007, P122 arrt_1008, P140 bounds_1009, P140 *r_1010) {
  struct f_array_aggregate_1011fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1007 = e_1007;
F->arrt_1008 = arrt_1008;
F->bounds_1009 = bounds_1009;
F->r_1010 = r_1010;
F->it_2796 = NULL;
F->it_2796 = (*(P174)rt_nil_check(F->e_1007)).a_;
F->lab_2797 = NULL;
F->others_it_2798 = NULL;
F->np_2799 = INT64_MIN;
F->np_2799 = ((rt_int)0LL);
F->nnamed_2800 = INT64_MIN;
F->nnamed_2800 = ((rt_int)0LL);
F->clo_2801 = INT64_MIN;
F->clo_2801 = ((rt_int)0LL);
F->chi_2802 = INT64_MIN;
F->chi_2802 = ((rt_int)0LL);
F->v1_2803 = INT64_MIN;
F->v1_2803 = ((rt_int)0LL);
F->v2_2804 = INT64_MIN;
F->v2_2804 = ((rt_int)0LL);
F->all_static_2805 = INT_MIN;
F->all_static_2805 = 1;
F->ok_2806 = INT_MIN;
F->ok_2806 = 1;
F->ok2_2807 = INT_MIN;
F->ok2_2807 = 1;
F->first_choice_2808 = INT_MIN;
F->first_choice_2808 = 1;
F->vt_2809 = NULL;
F->ct_2810 = NULL;
F->et_2811 = NULL;
F->tmp_2812 = NULL;
F->lo_2813 = NULL;
F->hi_2814 = NULL;
F->v_2815 = NULL;
F->x_2816 = NULL;
F->parts_2817 = NULL;
F->fill_2818 = NULL;
F->rowb_2819 = NULL;
F->key_2820 = NULL;
F->khi_2821 = NULL;
F->saved_2822 = NULL;
F->saved_2822 = F->up->code_136;
f_ctype_503(F->up, F->arrt_1008, &F->ct_2810);
f_elem_ctype_577(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, &F->et_2811);
f_new_name_240(F->up, rt_g_lit("ag", 2), &F->tmp_2812);
while ((F->it_2796 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2796)).a_ == NULL)) {
if (((G_NV(F->nnamed_2800) > ((rt_int)0LL)) || (F->others_it_2798 != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1007)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2799 = rt_add(G_NV(F->np_2799), ((rt_int)1LL));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2796)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P174)rt_nil_check(F->it_2796)).next_ != NULL) || ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2796)).a_)).next_ != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1007)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2798 = F->it_2796;
} else {
F->nnamed_2800 = rt_add(G_NV(F->nnamed_2800), ((rt_int)1LL));
F->lab_2797 = (*(P174)rt_nil_check(F->it_2796)).a_;
while ((F->lab_2797 != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2797)).a_, &F->v1_2803, &F->ok_2806);
 (void)rt_range(F->ok_2806, 0, 1);
F->v2_2804 = G_NV(F->v1_2803);
if (((*(P174)rt_nil_check(F->lab_2797)).b_ != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2797)).b_, &F->v2_2804, &F->ok2_2807);
 (void)rt_range(F->ok2_2807, 0, 1);
F->ok_2806 = (G_NV(F->ok_2806) && G_NV(F->ok2_2807));
}
if ((!G_NV(F->ok_2806))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1007)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2808) || (G_NV(F->v1_2803) < G_NV(F->clo_2801)))) {
F->clo_2801 = G_NV(F->v1_2803);
}
if ((G_NV(F->first_choice_2808) || (G_NV(F->v2_2804) > G_NV(F->chi_2802)))) {
F->chi_2802 = G_NV(F->v2_2804);
}
F->first_choice_2808 = 0;
F->lab_2797 = (*(P174)rt_nil_check(F->lab_2797)).next_;
}
L_end_2824: ;
}
F->it_2796 = (*(P174)rt_nil_check(F->it_2796)).next_;
}
L_end_2823: ;
if (((G_NV(F->np_2799) > ((rt_int)0LL)) && (G_NV(F->nnamed_2800) > ((rt_int)0LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1007)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2800) > ((rt_int)0LL))) {
f_check_choices_1019(F->up, F->e_1007, F->arrt_1008, (F->others_it_2798 != NULL));
}
if (((F->others_it_2798 == NULL) && (G_NV(F->np_2799) > ((rt_int)0LL)))) {
f_first_index_580(F->up, F->arrt_1008, &F->lo_2813);
F->hi_2814 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lo_2813))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2799), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2798 == NULL) && (G_NV(F->nnamed_2800) > ((rt_int)0LL)))) {
F->lo_2813 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2801)))), rt_g_lit("LL)", 3)));
F->hi_2814 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2802)))), rt_g_lit("LL)", 3)));
} else if ((((*(P122)rt_nil_check(F->arrt_1008)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1008)).tcons_)).hi_ != NULL))) {
F->lo_2813 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1008)).tcons_)).lo_;
F->hi_2814 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1008)).tcons_)).hi_;
} else if ((F->bounds_1009 != NULL)) {
F->lo_2813 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1009))), rt_g_lit(").lo", 4)));
F->hi_2814 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1009))), rt_g_lit(").hi", 4)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1007)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P122)rt_nil_check(F->arrt_1008)).dims_) > ((rt_int)1LL)) && (F->bounds_1009 != NULL))) {
F->rowb_2819 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P140)rt_nil_check(F->bounds_1009))), rt_g_lit(").lo2, (", 8)), (*(P140)rt_nil_check(F->bounds_1009))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_136 = f_new_buffer_259(F->up);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2812)), rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check(F->lo_2813))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check(F->hi_2814))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2812)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->et_2811))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2799) > ((rt_int)0LL)) && (F->others_it_2798 == NULL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2799)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2799) > ((rt_int)0LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2799)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2798 != NULL)) {
F->up->agg_bounds_181 = F->rowb_2819;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->others_it_2798)).b_, (*(P122)rt_nil_check(F->arrt_1008)).elem_, &F->vt_2809, &F->v_2815);
F->up->agg_bounds_181 = NULL;
f_check_type_498(F->up, F->vt_2809, (*(P122)rt_nil_check(F->arrt_1008)).elem_, G_NV((*(P174)rt_nil_check(F->e_1007)).line_));
f_ctype_503(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, &F->x_2816);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2816))), rt_g_lit(" o_ = ", 6)), (*(P140)rt_nil_check(F->v_2815))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit("); k_++) {", 10)));
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, rt_g_lit("o_", 2), &F->x_2816);
f_element_store_1015(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2812)), rt_g_lit(".p[k_]", 6)), F->arrt_1008, (*(P140)rt_nil_check(F->x_2816)));
f_emit_264(F->up, rt_g_lit("} }", 3));
}
F->it_2796 = (*(P174)rt_nil_check(F->e_1007)).a_;
F->np_2799 = ((rt_int)0LL);
while (((F->it_2796 != NULL) && (F->it_2796 != F->others_it_2798))) {
F->up->agg_bounds_181 = F->rowb_2819;
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->it_2796)).b_, (*(P122)rt_nil_check(F->arrt_1008)).elem_, &F->vt_2809, &F->v_2815);
F->up->agg_bounds_181 = NULL;
f_check_type_498(F->up, F->vt_2809, (*(P122)rt_nil_check(F->arrt_1008)).elem_, G_NV((*(P174)rt_nil_check(F->e_1007)).line_));
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, (*(P140)rt_nil_check(F->v_2815)), &F->x_2816);
if (((*(P174)rt_nil_check(F->it_2796)).a_ == NULL)) {
f_element_store_1015(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2812)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2799)))), one_rt_gstr(93)), F->arrt_1008, (*(P140)rt_nil_check(F->x_2816)));
F->np_2799 = rt_add(G_NV(F->np_2799), ((rt_int)1LL));
} else {
f_new_name_240(F->up, rt_g_lit("av", 2), &F->v_2815);
f_ctype_503(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, &F->parts_2817);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->parts_2817))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->v_2815))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2816))), one_rt_gstr(59)));
F->lab_2797 = (*(P174)rt_nil_check(F->it_2796)).a_;
while ((F->lab_2797 != NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->lab_2797)).a_, (*(P122)rt_nil_check(F->arrt_1008)).idx_, &F->vt_2809, &F->key_2820);
f_check_type_498(F->up, F->vt_2809, (*(P122)rt_nil_check(F->arrt_1008)).idx_, G_NV((*(P174)rt_nil_check(F->e_1007)).line_));
F->khi_2821 = F->key_2820;
if (((*(P174)rt_nil_check(F->lab_2797)).b_ != NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->lab_2797)).b_, (*(P122)rt_nil_check(F->arrt_1008)).idx_, &F->vt_2809, &F->khi_2821);
f_check_type_498(F->up, F->vt_2809, (*(P122)rt_nil_check(F->arrt_1008)).idx_, G_NV((*(P174)rt_nil_check(F->e_1007)).line_));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->key_2820))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->khi_2821))), rt_g_lit("; k_++) {", 9)));
f_copy_code_635(F->up, (*(P122)rt_nil_check(F->arrt_1008)).elem_, (*(P140)rt_nil_check(F->v_2815)), &F->x_2816);
f_element_store_1015(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2812)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".lo]", 4)), F->arrt_1008, (*(P140)rt_nil_check(F->x_2816)));
f_emit_264(F->up, rt_g_lit("}", 1));
F->lab_2797 = (*(P174)rt_nil_check(F->lab_2797)).next_;
}
L_end_2826: ;
f_emit_264(F->up, rt_g_lit("}", 1));
}
F->it_2796 = (*(P174)rt_nil_check(F->it_2796)).next_;
}
L_end_2825: ;
if ((G_NV((*(P122)rt_nil_check(F->arrt_1008)).dims_) > ((rt_int)1LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(") > 0) { ", 9)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".p[0].lo; ", 10)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_974(F->up, F->up->code_136, &F->parts_2817);
F->up->code_136 = F->saved_2822;
(*F->r_1010) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2810))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2812))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2817))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2812))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_1015(struct f_greenc_1fr *up_, rt_gstr lv_1012, P122 arrt_1013, rt_gstr v_1014) {
  struct f_element_store_1015fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1012 = cp_rt_gstr(lv_1012);
F->arrt_1013 = arrt_1013;
F->v_1014 = cp_rt_gstr(v_1014);
F->x_2827 = NULL;
if (((((*(P122)rt_nil_check(F->arrt_1013)).elemcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1013)).elemcons_)).lo_ != NULL)) && (!f_composite_625(F->up, (*(P122)rt_nil_check(F->arrt_1013)).elem_)))) {
f_assign_code_631(F->up, F->lv_1012, (*(P122)rt_nil_check(F->arrt_1013)).elem_, F->v_1014, (*(P122)rt_nil_check(F->arrt_1013)).elemcons_, &F->x_2827);
f_emit_264(F->up, (*(P140)rt_nil_check(F->x_2827)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_1012, rt_g_lit(" = ", 3)), F->v_1014), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_1019(struct f_greenc_1fr *up_, P174 e_1016, P122 arrt_1017, int has_others_1018) {
  struct f_check_choices_1019fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1016 = e_1016;
F->arrt_1017 = arrt_1017;
F->has_others_1018 = has_others_1018;
F->a_2828 = NULL;
F->b_2829 = NULL;
F->lab_2830 = NULL;
F->lab2_2831 = NULL;
F->lo1_2832 = INT64_MIN;
F->lo1_2832 = ((rt_int)0LL);
F->hi1_2833 = INT64_MIN;
F->hi1_2833 = ((rt_int)0LL);
F->lo2_2834 = INT64_MIN;
F->lo2_2834 = ((rt_int)0LL);
F->hi2_2835 = INT64_MIN;
F->hi2_2835 = ((rt_int)0LL);
F->count_2836 = INT64_MIN;
F->count_2836 = ((rt_int)0LL);
F->ok_2837 = INT_MIN;
F->a_2828 = (*(P174)rt_nil_check(F->e_1016)).a_;
while ((F->a_2828 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2828)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2828)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2830 = (*(P174)rt_nil_check(F->a_2828)).a_;
while ((F->lab_2830 != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2830)).a_, &F->lo1_2832, &F->ok_2837);
 (void)rt_range(F->ok_2837, 0, 1);
F->hi1_2833 = G_NV(F->lo1_2832);
if (((*(P174)rt_nil_check(F->lab_2830)).b_ != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab_2830)).b_, &F->hi1_2833, &F->ok_2837);
 (void)rt_range(F->ok_2837, 0, 1);
}
if ((G_NV(F->hi1_2833) >= G_NV(F->lo1_2832))) {
F->count_2836 = rt_add(G_NV(F->count_2836), rt_add(rt_sub(G_NV(F->hi1_2833), G_NV(F->lo1_2832)), ((rt_int)1LL)));
}
F->b_2829 = F->a_2828;
F->lab2_2831 = (*(P174)rt_nil_check(F->lab_2830)).next_;
while ((F->b_2829 != NULL)) {
if ((((*(P174)rt_nil_check(F->b_2829)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->b_2829)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2829 != F->a_2828)) {
F->lab2_2831 = (*(P174)rt_nil_check(F->b_2829)).a_;
}
while ((F->lab2_2831 != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab2_2831)).a_, &F->lo2_2834, &F->ok_2837);
 (void)rt_range(F->ok_2837, 0, 1);
F->hi2_2835 = G_NV(F->lo2_2834);
if (((*(P174)rt_nil_check(F->lab2_2831)).b_ != NULL)) {
f_static_choice_1006(F->up, (*(P174)rt_nil_check(F->lab2_2831)).b_, &F->hi2_2835, &F->ok_2837);
 (void)rt_range(F->ok_2837, 0, 1);
}
if (((((G_NV(F->lo1_2832) <= G_NV(F->hi1_2833)) && (G_NV(F->lo2_2834) <= G_NV(F->hi2_2835))) && (G_NV(F->lo1_2832) <= G_NV(F->hi2_2835))) && (G_NV(F->lo2_2834) <= G_NV(F->hi1_2833)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1016)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2831 = (*(P174)rt_nil_check(F->lab2_2831)).next_;
}
L_end_2841: ;
}
F->b_2829 = (*(P174)rt_nil_check(F->b_2829)).next_;
F->lab2_2831 = NULL;
}
L_end_2840: ;
F->lab_2830 = (*(P174)rt_nil_check(F->lab_2830)).next_;
}
L_end_2839: ;
}
F->a_2828 = (*(P174)rt_nil_check(F->a_2828)).next_;
}
L_end_2838: ;
if (((!F->has_others_1018) && f_static_bounds_490(F->up, (*(P122)rt_nil_check(F->arrt_1017)).tcons_))) {
if ((G_NV(F->count_2836) != rt_add(rt_sub(G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1017)).tcons_)).mhi_), G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1017)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1016)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_494(F->up, F->arrt_1017)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P174 f_actual_for_1023(struct f_greenc_1fr *up_, P174 args_1020, P1920 pm_1021, P1920 first_1022) {
  struct f_actual_for_1023fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1020 = args_1020;
F->pm_1021 = pm_1021;
F->first_1022 = first_1022;
F->a_2842 = NULL;
F->a_2842 = F->args_1020;
F->p_2843 = NULL;
F->p_2843 = F->first_1022;
while (((F->a_2842 != NULL) && ((*(P174)rt_nil_check(F->a_2842)).formal_ == NULL))) {
if ((F->p_2843 == F->pm_1021)) {
F->result_ = F->a_2842;
goto ret_;
}
F->p_2843 = (*(P1920)rt_nil_check(F->p_2843)).next_;
F->a_2842 = (*(P174)rt_nil_check(F->a_2842)).next_;
}
L_end_2844: ;
while ((F->a_2842 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2842)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2842)).formal_)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_1021)).name_))))) {
F->result_ = F->a_2842;
goto ret_;
}
F->a_2842 = (*(P174)rt_nil_check(F->a_2842)).next_;
}
L_end_2845: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1028(struct f_greenc_1fr *up_, P174 e_1024, int is_stmt_1025, P122 *t_1026, P140 *r_1027) {
  struct f_gcall_1028fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1024 = e_1024;
F->is_stmt_1025 = is_stmt_1025;
F->t_1026 = t_1026;
F->r_1027 = r_1027;
F->fn_2846 = NULL;
F->fn_2846 = (*(P174)rt_nil_check(F->e_1024)).a_;
F->nm_2847 = NULL;
F->y_2848 = NULL;
F->args_2849 = NULL;
F->lv_2850 = NULL;
F->v_2851 = NULL;
F->ct_2852 = NULL;
F->x_2853 = NULL;
F->a_2854 = NULL;
F->pm_2855 = NULL;
F->lt_2856 = NULL;
F->vt_2857 = NULL;
F->lc_2858 = NULL;
F->ro_2859 = INT_MIN;
f_expanded_843(F->up, F->fn_2846, &F->nm_2847);
if ((F->nm_2847 != NULL)) {
F->fn_2846 = F->nm_2847;
} else if ((((G_NV((*(P174)rt_nil_check(F->fn_2846)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_804(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).name_))))) {
if ((!f_type_attribute_802(F->up, (*(P117)rt_nil_check(f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).name_))))).t_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2847 = f_nn_311(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2846)).line_));
(*(P174)rt_nil_check(F->nm_2847)).name_ = (*(P174)rt_nil_check(F->fn_2846)).name_;
F->fn_2846 = F->nm_2847;
} else if (((G_NV((*(P174)rt_nil_check(F->fn_2846)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->fn_2846)).a_))) {
F->nm_2847 = f_nn_311(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2846)).line_));
(*(P174)rt_nil_check(F->nm_2847)).name_ = (*(P174)rt_nil_check(F->fn_2846)).name_;
(*(P174)rt_nil_check(F->nm_2847)).tag_ = f_mk_237(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->fn_2846)).a_));
F->fn_2846 = F->nm_2847;
} else if (((((G_NV((*(P174)rt_nil_check(F->fn_2846)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1141(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).a_)).name_))))) {
F->y_2848 = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2846)).line_));
if (((F->y_2848 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1117(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), (*(P174)rt_nil_check(F->e_1024)).b_, F->is_stmt_1025, F->up->call_want_225, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), &F->y_2848);
F->up->call_task_ix_215 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).a_)).b_;
if ((F->is_stmt_1025 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2848)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1053(F->up, F->e_1024, F->y_2848, &(*F->t_1026), &(*F->r_1027));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->fn_2846)).kind_) != ((rt_int)5LL))) {
f_other_call_1205(F->up, F->e_1024, F->is_stmt_1025, &(*F->t_1026), &(*F->r_1027));
goto ret_;
}
F->y_2848 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)));
if (((*(P174)rt_nil_check(F->fn_2846)).tag_ != NULL)) {
F->y_2848 = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2846)).line_));
}
if ((F->y_2848 == NULL)) {
if (((*(P174)rt_nil_check(F->fn_2846)).tag_ != NULL)) {
F->up->text_io_qualified_201 = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1060(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), (*(P174)rt_nil_check(F->e_1024)).b_, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), F->is_stmt_1025, &(*F->t_1026), &(*F->r_1027));
F->up->text_io_qualified_201 = 0;
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)4LL))) && ((*(P174)rt_nil_check(F->fn_2846)).tag_ == NULL))) {
f_resolve_overload_1106(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), (*(P174)rt_nil_check(F->e_1024)).b_, F->is_stmt_1025, F->up->call_want_225, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), &F->y_2848);
if ((F->y_2848 == NULL)) {
f_builtin_1060(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), (*(P174)rt_nil_check(F->e_1024)).b_, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), F->is_stmt_1025, &(*F->t_1026), &(*F->r_1027));
goto ret_;
}
} else if (((G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1117(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), (*(P174)rt_nil_check(F->e_1024)).b_, F->is_stmt_1025, F->up->call_want_225, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), &F->y_2848);
}
if ((G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) == ((rt_int)10LL))) {
f_other_call_1205(F->up, F->e_1024, F->is_stmt_1025, &(*F->t_1026), &(*F->r_1027));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_2848)).kind_) != ((rt_int)4LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1025 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2848)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1025) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2848)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1024)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2846)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1053(F->up, F->e_1024, F->y_2848, &(*F->t_1026), &(*F->r_1027));
ret_:

  return;
}

static void f_out_check_1032(struct f_greenc_1fr *up_, rt_gstr lv_1029, P122 t_1030, P178 c_1031) {
  struct f_out_check_1032fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1029 = cp_rt_gstr(lv_1029);
F->t_1030 = t_1030;
F->c_1031 = c_1031;
if ((!f_bounded_486(F->up, F->c_1031))) {
goto ret_;
}
if ((F->up->post_checks_196 == NULL)) {
F->up->post_checks_196 = f_mk_237(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P122)rt_nil_check(F->t_1030)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_1030)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_196 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1029), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1031)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1031)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_464(F->up, F->t_1030)) {
F->up->post_checks_196 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1029), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1031)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1031)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1035(struct f_greenc_1fr *up_, P174 e_1033, P140 *r_1034) {
  struct f_var_path_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1033 = e_1033;
F->r_1034 = r_1034;
F->pt_2860 = NULL;
F->v_2861 = NULL;
F->saved_2862 = NULL;
F->saved_2862 = F->up->code_136;
if ((G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) == ((rt_int)5LL))) {
(*F->r_1034) = (*(P174)rt_nil_check(F->e_1033)).name_;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) == ((rt_int)15LL))) {
f_var_path_1035(F->up, (*(P174)rt_nil_check(F->e_1033)).a_, &(*F->r_1034));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) != ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1033)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1034) = f_mk_237(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2860 = NULL;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_259(F->up);
{
{ rt_frame xf2864;
if (RT_TRY(xf2864)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->e_1033)).a_, NULL, &F->pt_2860, &F->v_2861);
RT_POP(xf2864);
} else {
RT_POP(xf2864);
int x2865 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2865);
if (0 || x2865 == ex_compile_error_108) {
F->pt_2860 = NULL;
} else {
rt_raise(x2865);
}
}
}

}
L_end_2863: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2862;
if (((F->pt_2860 == NULL) || (G_NV((*(P122)rt_nil_check(F->pt_2860)).kind_) == ((rt_int)8LL)))) {
(*F->r_1034) = f_mk_237(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1035(F->up, (*(P174)rt_nil_check(F->e_1033)).a_, &(*F->r_1034));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->r_1034))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1033)).kind_) == ((rt_int)9LL))) {
(*F->r_1034) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1034))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1033)).name_))));
} else if (((f_list_len_317(F->up, (*(P174)rt_nil_check(F->e_1033)).b_) == ((rt_int)1LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1033)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1034) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1034))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1033)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1034) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1034))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1038(struct f_greenc_1fr *up_, rt_gstr p_1036, rt_gstr r_1037) {
  struct f_paths_overlap_1038fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1036 = cp_rt_gstr(p_1036);
F->r_1037 = cp_rt_gstr(r_1037);
F->i_2866 = INT64_MIN;
F->i_2866 = ({ rt_gstr at2867 = F->p_1036; at2867.lo; });
F->j_2868 = INT64_MIN;
F->j_2868 = ({ rt_gstr at2869 = F->r_1037; at2869.lo; });
for (;;) {
if (((G_NV(F->i_2866) > ({ rt_gstr at2871 = F->p_1036; at2871.hi; })) || (G_NV(F->j_2868) > ({ rt_gstr at2872 = F->r_1037; at2872.hi; })))) {
if (((G_NV(F->i_2866) > ({ rt_gstr at2873 = F->p_1036; at2873.hi; })) && (G_NV(F->j_2868) > ({ rt_gstr at2874 = F->r_1037; at2874.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2866) > ({ rt_gstr at2875 = F->p_1036; at2875.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2876 = F->r_1037; ix2876.p[rt_index(G_NV(F->j_2868), ix2876.lo, ix2876.hi) - ix2876.lo]; })) == 46) || (G_NV(({ rt_gstr ix2877 = F->r_1037; ix2877.p[rt_index(G_NV(F->j_2868), ix2877.lo, ix2877.hi) - ix2877.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2878 = F->p_1036; ix2878.p[rt_index(G_NV(F->i_2866), ix2878.lo, ix2878.hi) - ix2878.lo]; })) == 46) || (G_NV(({ rt_gstr ix2879 = F->p_1036; ix2879.p[rt_index(G_NV(F->i_2866), ix2879.lo, ix2879.hi) - ix2879.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2880 = F->p_1036; ix2880.p[rt_index(G_NV(F->i_2866), ix2880.lo, ix2880.hi) - ix2880.lo]; })) == 40) && (G_NV(({ rt_gstr ix2881 = F->r_1037; ix2881.p[rt_index(G_NV(F->j_2868), ix2881.lo, ix2881.hi) - ix2881.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2882 = F->p_1036; ix2882.p[rt_index(rt_add(G_NV(F->i_2866), ((rt_int)1LL)), ix2882.lo, ix2882.hi) - ix2882.lo]; })) == 42) || (G_NV(({ rt_gstr ix2883 = F->r_1037; ix2883.p[rt_index(rt_add(G_NV(F->j_2868), ((rt_int)1LL)), ix2883.lo, ix2883.hi) - ix2883.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2885 = F->p_1036; ix2885.p[rt_index(G_NV(F->i_2866), ix2885.lo, ix2885.hi) - ix2885.lo]; })) != 41)) {
F->i_2866 = rt_add(G_NV(F->i_2866), ((rt_int)1LL));
}
L_end_2884: ;
while ((G_NV(({ rt_gstr ix2887 = F->r_1037; ix2887.p[rt_index(G_NV(F->j_2868), ix2887.lo, ix2887.hi) - ix2887.lo]; })) != 41)) {
F->j_2868 = rt_add(G_NV(F->j_2868), ((rt_int)1LL));
}
L_end_2886: ;
} else if ((G_NV(({ rt_gstr ix2888 = F->p_1036; ix2888.p[rt_index(G_NV(F->i_2866), ix2888.lo, ix2888.hi) - ix2888.lo]; })) != G_NV(({ rt_gstr ix2889 = F->r_1037; ix2889.p[rt_index(G_NV(F->j_2868), ix2889.lo, ix2889.hi) - ix2889.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2866 = rt_add(G_NV(F->i_2866), ((rt_int)1LL));
F->j_2868 = rt_add(G_NV(F->j_2868), ((rt_int)1LL));
}
L_end_2870: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1041(struct f_greenc_1fr *up_, P174 n_1039, rt_gstr name_1040) {
  struct f_mentions_1041fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1039 = n_1039;
F->name_1040 = cp_rt_gstr(name_1040);
F->p_2890 = NULL;
F->p_2890 = F->n_1039;
while ((F->p_2890 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_2890)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2890)).name_)), F->name_1040))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1041(F->up, (*(P174)rt_nil_check(F->p_2890)).a_, F->name_1040) || f_mentions_1041(F->up, (*(P174)rt_nil_check(F->p_2890)).b_, F->name_1040))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1041(F->up, (*(P174)rt_nil_check(F->p_2890)).c_, F->name_1040) || f_mentions_1041(F->up, (*(P174)rt_nil_check(F->p_2890)).d_, F->name_1040))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1041(F->up, (*(P174)rt_nil_check(F->p_2890)).e_, F->name_1040)) {
F->result_ = 1;
goto ret_;
}
F->p_2890 = (*(P174)rt_nil_check(F->p_2890)).next_;
}
L_end_2891: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1044(struct f_greenc_1fr *up_, P174 n_1042, rt_gstr name_1043) {
  struct f_mentions_one_1044fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1042 = n_1042;
F->name_1043 = cp_rt_gstr(name_1043);
if (((G_NV((*(P174)rt_nil_check(F->n_1042)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1042)).name_)), F->name_1043))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1041(F->up, (*(P174)rt_nil_check(F->n_1042)).a_, F->name_1043) || f_mentions_1041(F->up, (*(P174)rt_nil_check(F->n_1042)).b_, F->name_1043))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1041(F->up, (*(P174)rt_nil_check(F->n_1042)).c_, F->name_1043) || f_mentions_1041(F->up, (*(P174)rt_nil_check(F->n_1042)).d_, F->name_1043)) || f_mentions_1041(F->up, (*(P174)rt_nil_check(F->n_1042)).e_, F->name_1043));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1048(struct f_greenc_1fr *up_, P174 e_1045, P117 y_1046, P174 a_1047) {
  struct f_check_aliasing_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1045 = e_1045;
F->y_1046 = y_1046;
F->a_1047 = a_1047;
F->b_2892 = NULL;
F->b_2892 = (*(P174)rt_nil_check(F->e_1045)).b_;
F->p_2893 = NULL;
F->q_2894 = NULL;
F->r_2895 = NULL;
F->r_2895 = f_root_name_1247(F->up, F->a_1047);
F->v_2896 = NULL;
if ((F->r_2895 == NULL)) {
goto ret_;
}
f_var_path_1035(F->up, F->a_1047, &F->p_2893);
while ((F->b_2892 != NULL)) {
if (((F->b_2892 != F->a_1047) && (!eq_rt_gstr((*(P140)rt_nil_check(F->p_2893)), rt_g_lit("\?", 1))))) {
f_var_path_1035(F->up, F->b_2892, &F->q_2894);
if (((!eq_rt_gstr((*(P140)rt_nil_check(F->q_2894)), rt_g_lit("\?", 1))) && f_paths_overlap_1038(F->up, (*(P140)rt_nil_check(F->p_2893)), (*(P140)rt_nil_check(F->q_2894))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2892 = (*(P174)rt_nil_check(F->b_2892)).next_;
}
L_end_2897: ;
F->v_2896 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_)));
if (((((F->v_2896 != NULL) && (G_NV((*(P117)rt_nil_check(F->v_2896)).kind_) == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->y_1046)).decl_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1256(F->up, (*(P117)rt_nil_check(F->y_1046)).decl_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_)))))) {
if (((f_mentions_1041(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_))) || f_mentions_1041(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_)))) || f_mentions_1041(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).decl_)).e_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2895)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1046)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1053(struct f_greenc_1fr *up_, P174 e_1049, P117 y_1050, P122 *t_1051, P140 *r_1052) {
  struct f_gcall_with_1053fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1049 = e_1049;
F->y_1050 = y_1050;
F->t_1051 = t_1051;
F->r_1052 = r_1052;
F->args_2898 = NULL;
F->lv_2899 = NULL;
F->v_2900 = NULL;
F->x1_2901 = NULL;
F->x2_2902 = NULL;
F->a_2903 = NULL;
F->pm_2904 = NULL;
F->lt_2905 = NULL;
F->vt_2906 = NULL;
F->lc_2907 = NULL;
F->ro_2908 = INT_MIN;
f_check_call_rules_1267(F->up, F->e_1049, F->y_1050);
F->args_2898 = f_mk_237(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P117)rt_nil_check(F->y_1050)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1050)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1050)).access_path_ != NULL)) && ((*(P117)rt_nil_check(F->y_1050)).members_ != NULL)) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_215 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1049)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).name_))));
}
f_gexpr_825(F->up, F->up->call_task_ix_215, (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).t_, &F->vt_2906, &F->v_2900);
F->up->call_task_ix_215 = NULL;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).access_path_)), &F->lv_2899);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2901);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2902);
F->lv_2899 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lv_2899)), rt_g_lit("[rt_index(", 10)), (*(P140)rt_nil_check(F->v_2900))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x1_2901))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x2_2902))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->x1_2901))), one_rt_gstr(93)));
f_act_path_i_1160(F->up, (*(P117)rt_nil_check(F->y_1050)).members_, (*(P140)rt_nil_check(F->v_2900)), &F->x1_2901);
F->args_2898 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2899))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2901))), one_rt_gstr(41)));
} else if ((((G_NV((*(P117)rt_nil_check(F->y_1050)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1050)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1050)).access_path_ != NULL))) {
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).access_path_)), &F->lv_2899);
if (f_same_task_436(F->up, (*(P117)rt_nil_check(F->y_1050)).members_, F->up->cur_task_211)) {
F->args_2898 = F->lv_2899;
} else {
f_act_path_1156(F->up, (*(P117)rt_nil_check(F->y_1050)).members_, &F->x1_2901);
F->args_2898 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2899))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2901))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P117)rt_nil_check(F->y_1050)).level_) > ((rt_int)0LL))) {
f_link_to_765(F->up, G_NV((*(P117)rt_nil_check(F->y_1050)).level_), &F->args_2898);
}
F->pm_2904 = (*(P117)rt_nil_check(F->y_1050)).params_;
while ((F->pm_2904 != NULL)) {
F->a_2903 = f_actual_for_1023(F->up, (*(P174)rt_nil_check(F->e_1049)).b_, F->pm_2904, (*(P117)rt_nil_check(F->y_1050)).params_);
if ((({ rt_gstr at2910 = (*(P140)rt_nil_check(F->args_2898)); at2910.hi >= at2910.lo ? at2910.hi - at2910.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2898 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2898)), rt_g_lit(", ", 2)));
}
if ((F->a_2903 == NULL)) {
if ((((*(P1920)rt_nil_check(F->pm_2904)).dflt_ == NULL) || (G_NV((*(P1920)rt_nil_check(F->pm_2904)).mode_) != ((rt_int)1LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1049)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).name_))));
}
if (((*(P1920)rt_nil_check(F->pm_2904)).dsym_ != NULL)) {
f_access_of_762(F->up, (*(P1920)rt_nil_check(F->pm_2904)).dsym_, &F->v_2900);
f_copy_code_635(F->up, (*(P1920)rt_nil_check(F->pm_2904)).t_, (*(P140)rt_nil_check(F->v_2900)), &F->x1_2901);
F->v_2900 = F->x1_2901;
} else {
f_gexpr_825(F->up, (*(P1920)rt_nil_check(F->pm_2904)).dflt_, (*(P1920)rt_nil_check(F->pm_2904)).t_, &F->vt_2906, &F->v_2900);
}
F->args_2898 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2898)), (*(P140)rt_nil_check(F->v_2900))));
} else {
if ((((G_NV((*(P174)rt_nil_check(F->a_2903)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2903)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2903)).flag_) != G_NV((*(P1920)rt_nil_check(F->pm_2904)).mode_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1049)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1920)rt_nil_check(F->pm_2904)).mode_) == ((rt_int)1LL))) {
f_gexpr_825(F->up, F->a_2903, (*(P1920)rt_nil_check(F->pm_2904)).t_, &F->vt_2906, &F->v_2900);
f_check_type_498(F->up, F->vt_2906, (*(P1920)rt_nil_check(F->pm_2904)).t_, G_NV((*(P174)rt_nil_check(F->e_1049)).line_));
if (((((*(P1920)rt_nil_check(F->pm_2904)).c_ != NULL) && ((*(P178)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).c_)).lo_ != NULL)) && ((G_NV((*(P122)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2900 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2900))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2898 = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2898)), (*(P140)rt_nil_check(F->v_2900))));
} else {
f_lvalue_781(F->up, F->a_2903, &F->lv_2899, &F->lt_2905, &F->lc_2907, &F->ro_2908);
 (void)rt_range(F->ro_2908, 0, 1);
if (G_NV(F->ro_2908)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1049)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_2904)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1250(F->up, F->a_2903, G_NV((*(P174)rt_nil_check(F->e_1049)).line_));
f_check_type_498(F->up, F->lt_2905, (*(P1920)rt_nil_check(F->pm_2904)).t_, G_NV((*(P174)rt_nil_check(F->e_1049)).line_));
F->args_2898 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2898)), one_rt_gstr(38)), (*(P140)rt_nil_check(F->lv_2899))));
f_check_aliasing_1048(F->up, F->e_1049, F->y_1050, F->a_2903);
f_out_check_1032(F->up, (*(P140)rt_nil_check(F->lv_2899)), F->lt_2905, F->lc_2907);
}
}
F->pm_2904 = (*(P1920)rt_nil_check(F->pm_2904)).next_;
}
L_end_2909: ;
if (((f_list_len_317(F->up, (*(P174)rt_nil_check(F->e_1049)).b_) > ((rt_int)0LL)) && ((*(P117)rt_nil_check(F->y_1050)).params_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1049)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1051) = (*(P117)rt_nil_check(F->y_1050)).result_;
(*F->r_1052) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1050)).cname_)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2898))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1060(struct f_greenc_1fr *up_, rt_gstr name_1054, P174 args_1055, rt_int line_1056, int is_stmt_1057, P122 *t_1058, P140 *r_1059) {
  struct f_builtin_1060fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1054 = cp_rt_gstr(name_1054);
F->args_1055 = args_1055;
F->line_1056 = line_1056;
F->is_stmt_1057 = is_stmt_1057;
F->t_1058 = t_1058;
F->r_1059 = r_1059;
F->aty_2911 = NULL;
F->lt_2912 = NULL;
F->a_2913 = NULL;
F->w_2914 = NULL;
F->lv_2915 = NULL;
F->lc_2916 = NULL;
F->ro_2917 = INT_MIN;
(*F->t_1058) = F->up->ty_void_161;
if ((((eq_rt_gstr(F->name_1054, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1054, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_201))) && (f_lookup_433(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_258(F->up, F->line_1056, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1054, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1054), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_226 != NULL) && (eq_rt_gstr(F->name_1054, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1054, rt_g_lit("GET", 3))))) {
f_fail_258(F->up, F->line_1056, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1054), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1054, rt_g_lit("PUT", 3))) {
if ((F->args_1055 == NULL)) {
f_fail_258(F->up, F->line_1056, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_825(F->up, F->args_1055, NULL, &F->aty_2911, &F->a_2913);
F->w_2914 = f_mk_237(F->up, rt_g_lit("0", 1));
if (((*(P174)rt_nil_check(F->args_1055)).next_ != NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->args_1055)).next_, F->up->ty_int_156, &F->lt_2912, &F->w_2914);
}
if (f_is_string_582(F->up, F->aty_2911)) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P140)rt_nil_check(F->a_2913))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2911)).kind_) == ((rt_int)11LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P140)rt_nil_check(F->a_2913))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2911)).kind_) == ((rt_int)1LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P140)rt_nil_check(F->a_2913))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2914))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2911)).kind_) == ((rt_int)2LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P140)rt_nil_check(F->a_2913))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2914))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2911)).kind_) == ((rt_int)16LL))) {
f_fail_258(F->up, F->line_1056, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2911)).kind_) == ((rt_int)3LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P140)rt_nil_check(F->a_2913))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2914))), rt_g_lit(", 0)", 4)));
} else {
f_fail_258(F->up, F->line_1056, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1054, rt_g_lit("GET", 3))) {
f_lvalue_781(F->up, F->args_1055, &F->lv_2915, &F->lt_2912, &F->lc_2916, &F->ro_2917);
 (void)rt_range(F->ro_2917, 0, 1);
if ((G_NV((*(P122)rt_nil_check(F->lt_2912)).kind_) == ((rt_int)11LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2915))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2912)).kind_) == ((rt_int)1LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2915))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2912)).kind_) == ((rt_int)3LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2915))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_258(F->up, F->line_1056, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1054, rt_g_lit("ABS", 3))) {
f_gexpr_825(F->up, F->args_1055, NULL, &(*F->t_1058), &F->a_2913);
if ((G_NV((*(P122)rt_nil_check((*F->t_1058))).kind_) == ((rt_int)1LL))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P140)rt_nil_check(F->a_2913))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_1058))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_1058))).kind_) == ((rt_int)16LL)))) {
(*F->r_1059) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->a_2913))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, F->line_1056, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1220(F->up, F->name_1054, F->args_1055, F->line_1056, &(*F->t_1058), &(*F->r_1059));
}
ret_:

  return;
}

static P117 f_lookup_path_1062(struct f_greenc_1fr *up_, rt_gstr p_1061) {
  struct f_lookup_path_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1061 = cp_rt_gstr(p_1061);
F->y_2918 = NULL;
F->m_2919 = NULL;
{ rt_int lo2924 = ({ rt_gstr at2921 = F->p_1061; at2921.lo; }), hi2925 = ({ rt_gstr at2922 = F->p_1061; at2922.hi; });
for (rt_int it2926 = hi2925; it2926 >= lo2924; it2926--) {
F->i_2923 = it2926;
if ((G_NV(({ rt_gstr ix2927 = F->p_1061; ix2927.p[rt_index(F->i_2923, ix2927.lo, ix2927.hi) - ix2927.lo]; })) == 46)) {
F->y_2918 = f_lookup_path_1062(F->up, ({ rt_gstr sl2931 = F->p_1061; rt_int l_ = ({ rt_gstr at2930 = F->p_1061; at2930.lo; }), h_ = rt_sub(F->i_2923, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2931.lo, sl2931.hi); rt_index(h_, sl2931.lo, sl2931.hi); } sl2931.p += l_ - sl2931.lo; sl2931.lo = l_; sl2931.hi = h_; sl2931; }));
if ((F->y_2918 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P117)rt_nil_check(F->y_2918)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2918)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2919 = (*(P117)rt_nil_check(F->y_2918)).members_;
while ((F->m_2919 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2919)).name_)), ({ rt_gstr sl2934 = F->p_1061; rt_int l_ = rt_add(F->i_2923, ((rt_int)1LL)), h_ = ({ rt_gstr at2933 = F->p_1061; at2933.hi; }); if (l_ <= h_) { rt_index(l_, sl2934.lo, sl2934.hi); rt_index(h_, sl2934.lo, sl2934.hi); } sl2934.p += l_ - sl2934.lo; sl2934.lo = l_; sl2934.hi = h_; sl2934; })) && (!G_NV((*(P117)rt_nil_check(F->m_2919)).hidden_)))) {
F->result_ = F->m_2919;
goto ret_;
}
F->m_2919 = (*(P117)rt_nil_check(F->m_2919)).mnext_;
}
L_end_2932: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2920: ;
F->result_ = f_lookup_433(F->up, F->p_1061);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1064(struct f_greenc_1fr *up_, P174 e_1063) {
  struct f_is_package_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1063 = e_1063;
F->y_2935 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_1063)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check(F->e_1063)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1063)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1063)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2935 = f_lookup_path_1062(F->up, f_path_of_354(F->up, F->e_1063));
if ((!(F->y_2935 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2935)).kind_) == ((rt_int)8LL)) || (G_NV((*(P117)rt_nil_check(F->y_2935)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_member_of_1068(struct f_greenc_1fr *up_, rt_gstr p_1065, rt_gstr name_1066, rt_int line_1067) {
  struct f_member_of_1068fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1065 = cp_rt_gstr(p_1065);
F->name_1066 = cp_rt_gstr(name_1066);
F->line_1067 = line_1067;
F->y_2936 = NULL;
F->y_2936 = f_lookup_path_1062(F->up, F->p_1065);
F->m_2937 = NULL;
if (((F->y_2936 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2936)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2936)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2937 = (*(P117)rt_nil_check(F->y_2936)).members_;
while ((F->m_2937 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2937)).name_)), F->name_1066) && (!G_NV((*(P117)rt_nil_check(F->m_2937)).hidden_)))) {
F->result_ = F->m_2937;
goto ret_;
}
F->m_2937 = (*(P117)rt_nil_check(F->m_2937)).mnext_;
}
L_end_2938: ;
if ((G_NV((*(P117)rt_nil_check(F->y_2936)).kind_) == ((rt_int)9LL))) {
F->m_2937 = f_lookup_entry_439(F->up, F->name_1066, F->y_2936);
if ((((F->m_2937 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2937)).kind_) == ((rt_int)10LL))) && f_same_task_436(F->up, (*(P117)rt_nil_check(F->m_2937)).members_, F->y_2936))) {
F->result_ = F->m_2937;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1070(struct f_greenc_1fr *up_, P174 p_1069) {
  struct f_inside_package_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1069 = p_1069;
F->l_2939 = NULL;
F->l_2939 = F->up->pkg_stack_222;
if ((F->p_1069 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2939 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2939)).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_1069)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2939 = (*(P151)rt_nil_check(F->l_2939)).next_;
}
L_end_2940: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1073(struct f_greenc_1fr *up_, P117 y_1071, P117 *z_1072) {
  struct f_copy_sym_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1071 = y_1071;
F->z_1072 = z_1072;
(*F->z_1072) = ({ R118 *cell2941 = rt_alloc(sizeof(R118)); *cell2941 = cp_R118(({ R118 ag2942; ag2942.kind_ = G_NV((*(P117)rt_nil_check(F->y_1071)).kind_); ag2942.name_ = (*(P117)rt_nil_check(F->y_1071)).name_; ag2942.t_ = (*(P117)rt_nil_check(F->y_1071)).t_; ag2942.c_ = (*(P117)rt_nil_check(F->y_1071)).c_; ag2942.access_path_ = (*(P117)rt_nil_check(F->y_1071)).access_path_; ag2942.cname_ = (*(P117)rt_nil_check(F->y_1071)).cname_; ag2942.ro_ = G_NV((*(P117)rt_nil_check(F->y_1071)).ro_); ag2942.mvalue_ = G_NV((*(P117)rt_nil_check(F->y_1071)).mvalue_); ag2942.hasmv_ = G_NV((*(P117)rt_nil_check(F->y_1071)).hasmv_); ag2942.decl_ = (*(P117)rt_nil_check(F->y_1071)).decl_; ag2942.params_ = (*(P117)rt_nil_check(F->y_1071)).params_; ag2942.result_ = (*(P117)rt_nil_check(F->y_1071)).result_; ag2942.depth_ = ((rt_int)0LL); ag2942.level_ = G_NV((*(P117)rt_nil_check(F->y_1071)).level_); ag2942.byref_ = G_NV((*(P117)rt_nil_check(F->y_1071)).byref_); ag2942.vrp_ = G_NV((*(P117)rt_nil_check(F->y_1071)).vrp_); ag2942.hidden_ = G_NV((*(P117)rt_nil_check(F->y_1071)).hidden_); ag2942.from_use_ = 0; ag2942.members_ = (*(P117)rt_nil_check(F->y_1071)).members_; ag2942.mnext_ = NULL; ag2942.chain_ = NULL; ag2942.stack_ = NULL; ag2942.flags_ = G_NV((*(P117)rt_nil_check(F->y_1071)).flags_); ag2942; })); (P117)cell2941; });
ret_:

  return;
}

static void f_complete_private_1076(struct f_greenc_1fr *up_, P122 ph_1074, P122 full_1075) {
  struct f_complete_private_1076fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1074 = ph_1074;
F->full_1075 = full_1075;
F->n_2943 = NULL;
F->n_2943 = (*(P122)rt_nil_check(F->ph_1074)).name_;
F->p_2944 = NULL;
F->p_2944 = (*(P122)rt_nil_check(F->ph_1074)).decl_;
as_R123(&(*(P122)rt_nil_check(F->ph_1074)), (*(P122)rt_nil_check(F->full_1075)));
(*(P122)rt_nil_check(F->ph_1074)).name_ = F->n_2943;
(*(P122)rt_nil_check(F->ph_1074)).priv_ = 1;
(*(P122)rt_nil_check(F->ph_1074)).decl_ = F->p_2944;
ret_:

  return;
}

static void f_package_spec_1078(struct f_greenc_1fr *up_, P174 e_1077) {
  struct f_package_spec_1078fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1077 = e_1077;
F->y_2945 = NULL;
F->m_2946 = NULL;
F->z_2947 = NULL;
F->saved_2948 = NULL;
F->saved_2948 = F->up->cur_pkg_223;
F->first_private_2949 = NULL;
F->y_2945 = f_new_sym_481(F->up, ((rt_int)8LL), (*(P174)rt_nil_check(F->e_1077)).name_);
(*(P117)rt_nil_check(F->y_2945)).decl_ = F->e_1077;
F->up->pkg_stack_222 = ({ R152 *cell2950 = rt_alloc(sizeof(R152)); *cell2950 = cp_R152(({ R152 ag2951; ag2951.s_ = (*(P174)rt_nil_check(F->e_1077)).name_; ag2951.next_ = F->up->pkg_stack_222; ag2951; })); (P151)cell2950; });
F->up->cur_pkg_223 = F->e_1077;
f_open_scope_477(F->up);
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->e_1077)).c_);
F->first_private_2949 = F->up->scope_stack_121;
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->e_1077)).d_);
F->m_2946 = F->up->scope_stack_121;
while (((F->m_2946 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2946)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2946)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->m_2946)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1077)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2946)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1073(F->up, F->m_2946, &F->z_2947);
(*(P117)rt_nil_check(F->z_2947)).hidden_ = (f_hidden_from_1081(F->up, F->m_2946, F->first_private_2949) || G_NV((*(P117)rt_nil_check(F->m_2946)).from_use_));
(*(P117)rt_nil_check(F->z_2947)).mnext_ = (*(P117)rt_nil_check(F->y_2945)).members_;
(*(P117)rt_nil_check(F->y_2945)).members_ = F->z_2947;
F->m_2946 = (*(P117)rt_nil_check(F->m_2946)).stack_;
}
L_end_2952: ;
f_close_scope_478(F->up);
F->up->pkg_stack_222 = (*(P151)rt_nil_check(F->up->pkg_stack_222)).next_;
F->up->cur_pkg_223 = F->saved_2948;
f_define_476(F->up, F->y_2945, G_NV((*(P174)rt_nil_check(F->e_1077)).line_));
ret_:

  return;
}

static int f_hidden_from_1081(struct f_greenc_1fr *up_, P117 m_1079, P117 first_private_1080) {
  struct f_hidden_from_1081fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1079 = m_1079;
F->first_private_1080 = first_private_1080;
F->p_2953 = NULL;
F->p_2953 = F->up->scope_stack_121;
while ((F->p_2953 != NULL)) {
if ((F->p_2953 == F->first_private_1080)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2953 == F->m_1079)) {
F->result_ = 1;
goto ret_;
}
F->p_2953 = (*(P117)rt_nil_check(F->p_2953)).stack_;
}
L_end_2954: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1083(struct f_greenc_1fr *up_, P174 e_1082) {
  struct f_package_body_1083fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1082 = e_1082;
F->saved_labels_2955 = NULL;
F->y_2956 = NULL;
F->y_2956 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1082)).name_)));
F->m_2957 = NULL;
F->z_2958 = NULL;
F->saved_2959 = NULL;
F->saved_2959 = F->up->cur_pkg_223;
if ((G_NV((*(P174)rt_nil_check(F->e_1082)).flag_) == ((rt_int)4LL))) {
f_stub_682(F->up, F->e_1082);
goto ret_;
}
if (f_is_generic_name_1276(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1082)).name_)))) {
f_attach_generic_body_1281(F->up, F->e_1082);
goto ret_;
}
if (((F->y_2956 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2956)).kind_) != ((rt_int)8LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1082)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1082)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_222 = ({ R152 *cell2960 = rt_alloc(sizeof(R152)); *cell2960 = cp_R152(({ R152 ag2961; ag2961.s_ = (*(P174)rt_nil_check(F->e_1082)).name_; ag2961.next_ = F->up->pkg_stack_222; ag2961; })); (P151)cell2960; });
F->up->cur_pkg_223 = (*(P117)rt_nil_check(F->y_2956)).decl_;
f_open_scope_477(F->up);
f_push_unit_446(F->up, (*(P174)rt_nil_check(F->e_1082)).name_);
F->m_2957 = (*(P117)rt_nil_check(F->y_2956)).members_;
while ((F->m_2957 != NULL)) {
f_copy_sym_1073(F->up, F->m_2957, &F->z_2958);
(*(P117)rt_nil_check(F->z_2958)).hidden_ = 0;
f_define_476(F->up, F->z_2958, G_NV((*(P174)rt_nil_check(F->e_1082)).line_));
F->m_2957 = (*(P117)rt_nil_check(F->m_2957)).mnext_;
}
L_end_2962: ;
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->e_1082)).c_);
F->m_2957 = (*(P117)rt_nil_check(F->y_2956)).members_;
while ((F->m_2957 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_2957)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_2957)).kind_) == ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2957)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_2958 = ({ A116 ix2964 = F->up->table_119; ix2964.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2957)).name_))), ix2964.lo, ix2964.hi) - ix2964.lo]; });
while ((F->z_2958 != NULL)) {
if (((*(P117)rt_nil_check(F->z_2958)).cname_ == (*(P117)rt_nil_check(F->m_2957)).cname_)) {
(*(P117)rt_nil_check(F->m_2957)).decl_ = (*(P117)rt_nil_check(F->z_2958)).decl_;
}
F->z_2958 = (*(P117)rt_nil_check(F->z_2958)).chain_;
}
L_end_2965: ;
if ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_2957)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1082)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2957)).name_))), rt_g_lit(" in package body ", 17)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1082)).name_))));
}
}
F->m_2957 = (*(P117)rt_nil_check(F->m_2957)).mnext_;
}
L_end_2963: ;
F->saved_labels_2955 = F->up->body_labels_191;
f_label_body_704(F->up, (*(P174)rt_nil_check(F->e_1082)).d_, (*(P174)rt_nil_check(F->e_1082)).e_);
f_guarded_724(F->up, NULL, (*(P174)rt_nil_check(F->e_1082)).d_, (*(P174)rt_nil_check(F->e_1082)).e_, G_NV((*(P174)rt_nil_check(F->e_1082)).line_));
F->up->body_labels_191 = F->saved_labels_2955;
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_478(F->up);
F->up->pkg_stack_222 = (*(P151)rt_nil_check(F->up->pkg_stack_222)).next_;
F->up->cur_pkg_223 = F->saved_2959;
ret_:

  return;
}

static int f_use_visible_1085(struct f_greenc_1fr *up_, P117 old_1084) {
  struct f_use_visible_1085fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1084 = old_1084;
if ((F->old_1084 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P117)rt_nil_check(F->old_1084)).depth_) < G_NV(F->up->depth_120)) && (G_NV((*(P117)rt_nil_check(F->old_1084)).kind_) != ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->old_1084)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1087(struct f_greenc_1fr *up_, P174 e_1086) {
  struct f_use_clause_1087fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1086 = e_1086;
F->n_2966 = NULL;
F->n_2966 = (*(P174)rt_nil_check(F->e_1086)).a_;
F->y_2967 = NULL;
F->m_2968 = NULL;
F->z_2969 = NULL;
F->old_2970 = NULL;
F->clash_2971 = INT_MIN;
while ((F->n_2966 != NULL)) {
F->y_2967 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2966)).name_)));
if ((F->y_2967 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->n_2966)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2966)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_2967)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2967)).kind_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->n_2966)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2966)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2967)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P117)rt_nil_check(F->y_2967)).members_ == NULL))) {
F->z_2969 = f_new_sym_481(F->up, ((rt_int)2LL), f_mk_237(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P117)rt_nil_check(F->z_2969)).t_ = F->up->ty_void_161;
f_define_476(F->up, F->z_2969, G_NV((*(P174)rt_nil_check(F->n_2966)).line_));
} else {
F->m_2968 = (*(P117)rt_nil_check(F->y_2967)).members_;
while ((F->m_2968 != NULL)) {
if ((!G_NV((*(P117)rt_nil_check(F->m_2968)).hidden_))) {
F->old_2970 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2968)).name_)));
if ((!f_overloadable_450(F->up, F->m_2968))) {
if ((F->old_2970 == NULL)) {
f_copy_sym_1073(F->up, F->m_2968, &F->z_2969);
(*(P117)rt_nil_check(F->z_2969)).from_use_ = 1;
f_define_476(F->up, F->z_2969, G_NV((*(P174)rt_nil_check(F->n_2966)).line_));
} else if (((G_NV((*(P117)rt_nil_check(F->old_2970)).from_use_) && (G_NV((*(P117)rt_nil_check(F->old_2970)).depth_) == G_NV(F->up->depth_120))) && (!f_same_entity_1092(F->up, F->old_2970, F->m_2968)))) {
(*(P117)rt_nil_check(F->old_2970)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_2971 = 0;
F->z_2969 = ({ A116 ix2974 = F->up->table_119; ix2974.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2968)).name_))), ix2974.lo, ix2974.hi) - ix2974.lo]; });
while ((F->z_2969 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2969)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2968)).name_))) && f_overloadable_450(F->up, F->z_2969)) && f_visible_sym_431(F->up, F->z_2969))) {
if (f_same_entity_1092(F->up, F->z_2969, F->m_2968)) {
F->clash_2971 = 1;
} else if (((((!G_NV((*(P117)rt_nil_check(F->z_2969)).from_use_)) && f_same_types_467(F->up, (*(P117)rt_nil_check(F->z_2969)).params_, (*(P117)rt_nil_check(F->m_2968)).params_)) && f_same_453(F->up, (*(P117)rt_nil_check(F->z_2969)).result_, (*(P117)rt_nil_check(F->m_2968)).result_)) && ((G_NV((*(P117)rt_nil_check(F->z_2969)).kind_) != ((rt_int)7LL)) || f_same_453(F->up, (*(P117)rt_nil_check(F->z_2969)).t_, (*(P117)rt_nil_check(F->m_2968)).t_)))) {
F->clash_2971 = 1;
}
}
F->z_2969 = (*(P117)rt_nil_check(F->z_2969)).chain_;
}
L_end_2975: ;
if (((!G_NV(F->clash_2971)) && f_usable_over_1089(F->up, F->old_2970))) {
f_copy_sym_1073(F->up, F->m_2968, &F->z_2969);
(*(P117)rt_nil_check(F->z_2969)).from_use_ = 1;
f_define_476(F->up, F->z_2969, G_NV((*(P174)rt_nil_check(F->n_2966)).line_));
}
}
}
F->m_2968 = (*(P117)rt_nil_check(F->m_2968)).mnext_;
}
L_end_2973: ;
}
F->n_2966 = (*(P174)rt_nil_check(F->n_2966)).next_;
}
L_end_2972: ;
ret_:

  return;
}

static int f_usable_over_1089(struct f_greenc_1fr *up_, P117 old_1088) {
  struct f_usable_over_1089fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1088 = old_1088;
if ((F->old_1088 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_450(F->up, F->old_1088) || G_NV((*(P117)rt_nil_check(F->old_1088)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1092(struct f_greenc_1fr *up_, P117 a_1090, P117 b_1091) {
  struct f_same_entity_1092fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1090 = a_1090;
F->b_1091 = b_1091;
if ((G_NV((*(P117)rt_nil_check(F->a_1090)).kind_) != G_NV((*(P117)rt_nil_check(F->b_1091)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1090)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1091)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1090)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1091)).cname_)));
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1090)).access_path_ != NULL) && ((*(P117)rt_nil_check(F->b_1091)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1090)).access_path_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1091)).access_path_)));
goto ret_;
}
F->result_ = (((*(P117)rt_nil_check(F->a_1090)).t_ == (*(P117)rt_nil_check(F->b_1091)).t_) && ((*(P117)rt_nil_check(F->a_1090)).decl_ == (*(P117)rt_nil_check(F->b_1091)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1097(struct f_greenc_1fr *up_, P117 y_1093, P174 args_1094, P122 want_1095, int *ok_1096) {
  struct f_fits_1097fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1093 = y_1093;
F->args_1094 = args_1094;
F->want_1095 = want_1095;
F->ok_1096 = ok_1096;
F->pm_2976 = NULL;
F->pm_2976 = (*(P117)rt_nil_check(F->y_1093)).params_;
F->a_2977 = NULL;
F->t_2978 = NULL;
F->c_2979 = NULL;
F->v_2980 = NULL;
F->ro_2981 = INT_MIN;
F->saved_2982 = NULL;
F->saved_2982 = F->up->code_136;
F->used_2983 = INT64_MIN;
F->used_2983 = ((rt_int)0LL);
(*F->ok_1096) = 1;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_259(F->up);
{
{ rt_frame xf2985;
if (RT_TRY(xf2985)) {
while ((G_NV((*F->ok_1096)) && (F->pm_2976 != NULL))) {
F->a_2977 = f_actual_for_1023(F->up, F->args_1094, F->pm_2976, (*(P117)rt_nil_check(F->y_1093)).params_);
if ((F->a_2977 == NULL)) {
(*F->ok_1096) = ((*(P1920)rt_nil_check(F->pm_2976)).dflt_ != NULL);
} else {
F->used_2983 = rt_add(G_NV(F->used_2983), ((rt_int)1LL));
if ((((G_NV((*(P174)rt_nil_check(F->a_2977)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2977)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2977)).flag_) != G_NV((*(P1920)rt_nil_check(F->pm_2976)).mode_)))) {
(*F->ok_1096) = 0;
} else if ((G_NV((*(P1920)rt_nil_check(F->pm_2976)).mode_) == ((rt_int)1LL))) {
f_gexpr_825(F->up, F->a_2977, (*(P1920)rt_nil_check(F->pm_2976)).t_, &F->t_2978, &F->v_2980);
(*F->ok_1096) = (f_same_453(F->up, F->t_2978, (*(P1920)rt_nil_check(F->pm_2976)).t_) || ((G_NV((*(P122)rt_nil_check(F->t_2978)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check((*(P1920)rt_nil_check(F->pm_2976)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_781(F->up, F->a_2977, &F->v_2980, &F->t_2978, &F->c_2979, &F->ro_2981);
 (void)rt_range(F->ro_2981, 0, 1);
(*F->ok_1096) = f_same_453(F->up, F->t_2978, (*(P1920)rt_nil_check(F->pm_2976)).t_);
}
}
F->pm_2976 = (*(P1920)rt_nil_check(F->pm_2976)).next_;
}
L_end_2987: ;
if ((G_NV(F->used_2983) != f_list_len_317(F->up, F->args_1094))) {
(*F->ok_1096) = 0;
}
if (((G_NV((*F->ok_1096)) && (F->want_1095 != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1093)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1096) = (f_same_453(F->up, (*(P117)rt_nil_check(F->y_1093)).result_, F->want_1095) || (G_NV((*(P122)rt_nil_check(F->want_1095)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf2985);
} else {
RT_POP(xf2985);
int x2986 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2986);
if (0 || x2986 == ex_compile_error_108) {
(*F->ok_1096) = 0;
} else {
rt_raise(x2986);
}
}
}

}
L_end_2984: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2982;
ret_:

  return;
}

static int f_is_builtin_1099(struct f_greenc_1fr *up_, rt_gstr n_1098) {
  struct f_is_builtin_1099fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1098 = cp_rt_gstr(n_1098);
F->result_ = (((eq_rt_gstr(F->n_1098, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1098, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1098, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1098, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1106(struct f_greenc_1fr *up_, rt_gstr name_1100, P174 args_1101, int is_stmt_1102, P122 want_1103, rt_int line_1104, P117 *y_1105) {
  struct f_resolve_overload_1106fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1100 = cp_rt_gstr(name_1100);
F->args_1101 = args_1101;
F->is_stmt_1102 = is_stmt_1102;
F->want_1103 = want_1103;
F->line_1104 = line_1104;
F->y_1105 = y_1105;
F->z_2988 = NULL;
F->w_2989 = NULL;
F->first_2990 = NULL;
F->found_2991 = NULL;
F->n_2992 = INT64_MIN;
F->n_2992 = ((rt_int)0LL);
F->ok_2993 = INT_MIN;
F->hidden_2994 = INT_MIN;
{ rt_int lo2997 = ((rt_int)1LL), hi2998 = ((rt_int)2LL);
for (rt_int it2999 = lo2997; it2999 <= hi2998; it2999++) {
F->pass_2996 = it2999;
F->z_2988 = ({ A116 ix3000 = F->up->table_119; ix3000.p[rt_index(f_hash_426(F->up, F->name_1100), ix3000.lo, ix3000.hi) - ix3000.lo]; });
F->n_2992 = ((rt_int)0LL);
F->found_2991 = NULL;
while ((F->z_2988 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2988)).name_)), F->name_1100) && ((G_NV((*(P117)rt_nil_check(F->z_2988)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2988)).kind_) == ((rt_int)4LL)))) && f_visible_sym_431(F->up, F->z_2988))) {
if ((F->first_2990 == NULL)) {
F->first_2990 = F->z_2988;
}
F->hidden_2994 = 0;
F->w_2989 = ({ A116 ix3002 = F->up->table_119; ix3002.p[rt_index(f_hash_426(F->up, F->name_1100), ix3002.lo, ix3002.hi) - ix3002.lo]; });
while ((F->w_2989 != F->z_2988)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->w_2989)).name_)), F->name_1100) && ((G_NV((*(P117)rt_nil_check(F->w_2989)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->w_2989)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1109(F->up, F->w_2989, F->z_2988)) {
F->hidden_2994 = 1;
}
}
F->w_2989 = (*(P117)rt_nil_check(F->w_2989)).chain_;
}
L_end_3003: ;
if (((!G_NV(F->hidden_2994)) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_2988)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1102))) {
if ((F->pass_2996 == ((rt_int)1LL))) {
f_fits_1097(F->up, F->z_2988, F->args_1101, F->want_1103, &F->ok_2993);
 (void)rt_range(F->ok_2993, 0, 1);
} else {
f_fits_1097(F->up, F->z_2988, F->args_1101, NULL, &F->ok_2993);
 (void)rt_range(F->ok_2993, 0, 1);
}
if (G_NV(F->ok_2993)) {
if ((F->found_2991 != NULL)) {
f_fail_258(F->up, F->line_1104, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1100), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_2991 = F->z_2988;
}
}
}
F->z_2988 = (*(P117)rt_nil_check(F->z_2988)).chain_;
}
L_end_3001: ;
if ((F->found_2991 != NULL)) {
(*F->y_1105) = F->found_2991;
goto ret_;
}
}
}
L_end_2995: ;
if (f_is_builtin_1099(F->up, F->name_1100)) {
(*F->y_1105) = NULL;
goto ret_;
}
F->z_2988 = ({ A116 ix3004 = F->up->table_119; ix3004.p[rt_index(f_hash_426(F->up, F->name_1100), ix3004.lo, ix3004.hi) - ix3004.lo]; });
while ((F->z_2988 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2988)).name_)), F->name_1100) && ((G_NV((*(P117)rt_nil_check(F->z_2988)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2988)).kind_) == ((rt_int)4LL))))) {
F->n_2992 = rt_add(G_NV(F->n_2992), ((rt_int)1LL));
}
F->z_2988 = (*(P117)rt_nil_check(F->z_2988)).chain_;
}
L_end_3005: ;
if ((G_NV(F->n_2992) > ((rt_int)1LL))) {
f_fail_258(F->up, F->line_1104, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1100), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1105) = F->first_2990;
ret_:

  return;
}

static int f_same_profile_1109(struct f_greenc_1fr *up_, P117 a_1107, P117 b_1108) {
  struct f_same_profile_1109fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1107 = a_1107;
F->b_1108 = b_1108;
if (((!f_same_types_467(F->up, (*(P117)rt_nil_check(F->a_1107)).params_, (*(P117)rt_nil_check(F->b_1108)).params_)) || (!f_same_453(F->up, (*(P117)rt_nil_check(F->a_1107)).result_, (*(P117)rt_nil_check(F->b_1108)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1107)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1108)).cname_ != NULL))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1107)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1108)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_470(F->up, (*(P117)rt_nil_check(F->a_1107)).params_, (*(P117)rt_nil_check(F->b_1108)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1117(struct f_greenc_1fr *up_, rt_gstr p_1110, rt_gstr name_1111, P174 args_1112, int is_stmt_1113, P122 want_1114, rt_int line_1115, P117 *y_1116) {
  struct f_resolve_member_overload_1117fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1110 = cp_rt_gstr(p_1110);
F->name_1111 = cp_rt_gstr(name_1111);
F->args_1112 = args_1112;
F->is_stmt_1113 = is_stmt_1113;
F->want_1114 = want_1114;
F->line_1115 = line_1115;
F->y_1116 = y_1116;
F->pk_3006 = NULL;
F->pk_3006 = f_lookup_path_1062(F->up, F->p_1110);
F->z_3007 = NULL;
F->found_3008 = NULL;
F->n_3009 = INT64_MIN;
F->n_3009 = ((rt_int)0LL);
F->ok_3010 = INT_MIN;
if ((F->pk_3006 == NULL)) {
goto ret_;
}
{ rt_int lo3013 = ((rt_int)1LL), hi3014 = ((rt_int)2LL);
for (rt_int it3015 = lo3013; it3015 <= hi3014; it3015++) {
F->pass_3012 = it3015;
F->z_3007 = (*(P117)rt_nil_check(F->pk_3006)).members_;
F->n_3009 = ((rt_int)0LL);
F->found_3008 = NULL;
while ((F->z_3007 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3007)).name_)), F->name_1111) && ((G_NV((*(P117)rt_nil_check(F->z_3007)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_3007)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P117)rt_nil_check(F->z_3007)).hidden_)))) {
F->n_3009 = rt_add(G_NV(F->n_3009), ((rt_int)1LL));
if (((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3007)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1113)) {
if ((F->pass_3012 == ((rt_int)1LL))) {
f_fits_1097(F->up, F->z_3007, F->args_1112, F->want_1114, &F->ok_3010);
 (void)rt_range(F->ok_3010, 0, 1);
} else {
f_fits_1097(F->up, F->z_3007, F->args_1112, NULL, &F->ok_3010);
 (void)rt_range(F->ok_3010, 0, 1);
}
if (G_NV(F->ok_3010)) {
if (((F->found_3008 != NULL) && (!f_same_profile_1109(F->up, F->found_3008, F->z_3007)))) {
f_fail_258(F->up, F->line_1115, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1111), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_3008 = F->z_3007;
}
}
}
F->z_3007 = (*(P117)rt_nil_check(F->z_3007)).mnext_;
}
L_end_3016: ;
if ((F->found_3008 != NULL)) {
(*F->y_1116) = F->found_3008;
goto ret_;
}
}
}
L_end_3011: ;
if ((G_NV(F->n_3009) > ((rt_int)1LL))) {
f_fail_258(F->up, F->line_1115, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1111), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1123(struct f_greenc_1fr *up_, P174 e_1118, P122 want_1119, P122 *t_1120, P140 *r_1121, int *done_1122) {
  struct f_user_operator_1123fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1118 = e_1118;
F->want_1119 = want_1119;
F->t_1120 = t_1120;
F->r_1121 = r_1121;
F->done_1122 = done_1122;
F->op_3017 = NULL;
F->op_3017 = (*(P174)rt_nil_check(F->e_1118)).name_;
F->negate_3018 = INT_MIN;
F->negate_3018 = 0;
F->y_3019 = NULL;
F->call_3020 = NULL;
F->fname_3021 = NULL;
F->l_3022 = NULL;
F->rt_3023 = NULL;
F->ok_3024 = INT_MIN;
(*F->done_1122) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check(F->op_3017)), rt_g_lit("/=", 2))) {
F->op_3017 = f_mk_237(F->up, rt_g_lit("=", 1));
F->negate_3018 = 1;
}
if ((f_lookup_433(F->up, (*(P140)rt_nil_check(F->op_3017))) == NULL)) {
goto ret_;
}
F->l_3022 = f_nn_311(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).a_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).a_)).line_));
as_R175(&(*(P174)rt_nil_check(F->l_3022)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).a_)));
(*(P174)rt_nil_check(F->l_3022)).next_ = NULL;
(*(P174)rt_nil_check(F->l_3022)).formal_ = NULL;
(*(P174)rt_nil_check(F->l_3022)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_1118)).kind_) == ((rt_int)7LL))) {
F->rt_3023 = f_nn_311(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).b_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).b_)).line_));
as_R175(&(*(P174)rt_nil_check(F->rt_3023)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1118)).b_)));
(*(P174)rt_nil_check(F->rt_3023)).next_ = NULL;
(*(P174)rt_nil_check(F->rt_3023)).formal_ = NULL;
(*(P174)rt_nil_check(F->rt_3023)).flag_ = ((rt_int)0LL);
(*(P174)rt_nil_check(F->l_3022)).next_ = F->rt_3023;
}
F->y_3019 = ({ A116 ix3025 = F->up->table_119; ix3025.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check(F->op_3017))), ix3025.lo, ix3025.hi) - ix3025.lo]; });
while ((F->y_3019 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3019)).name_)), (*(P140)rt_nil_check(F->op_3017))) && (G_NV((*(P117)rt_nil_check(F->y_3019)).kind_) == ((rt_int)3LL))) && f_visible_sym_431(F->up, F->y_3019))) {
f_fits_1097(F->up, F->y_3019, F->l_3022, NULL, &F->ok_3024);
 (void)rt_range(F->ok_3024, 0, 1);
if (G_NV(F->ok_3024)) {
F->fname_3021 = f_nn_311(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_1118)).line_));
(*(P174)rt_nil_check(F->fname_3021)).name_ = F->op_3017;
F->call_3020 = f_nn_311(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_1118)).line_));
(*(P174)rt_nil_check(F->call_3020)).a_ = F->fname_3021;
(*(P174)rt_nil_check(F->call_3020)).b_ = F->l_3022;
F->up->call_want_225 = NULL;
f_gcall_with_1053(F->up, F->call_3020, F->y_3019, &(*F->t_1120), &(*F->r_1121));
if (G_NV(F->negate_3018)) {
(*F->r_1121) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check((*F->r_1121)))), one_rt_gstr(41)));
}
(*F->done_1122) = 1;
goto ret_;
}
}
F->y_3019 = (*(P117)rt_nil_check(F->y_3019)).chain_;
}
L_end_3026: ;
ret_:

  return;
}

static void f_task_p_1125(struct f_greenc_1fr *up_, P174 *res_1124) {
  struct f_task_p_1125fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1124 = res_1124;
F->x_3027 = NULL;
F->r_3028 = NULL;
F->line_3029 = INT64_MIN;
F->line_3029 = f_cur_line_318(F->up);
f_expect_kw_333(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_320(F->up, rt_g_lit("BODY", 4))) {
f_skip_331(F->up);
F->x_3027 = f_nn_311(F->up, ((rt_int)51LL), G_NV(F->line_3029));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_3027)).name_);
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
if (f_at_kw_320(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_331(F->up);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_3027)).flag_ = ((rt_int)4LL);
(*F->res_1124) = F->x_3027;
goto ret_;
}
f_body_part_402(F->up, F->x_3027);
} else {
F->x_3027 = f_nn_311(F->up, ((rt_int)50LL), G_NV(F->line_3029));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_3027)).name_);
if (((f_at_kw_320(F->up, rt_g_lit("IS", 2)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1272(F->up, F->x_3027, &(*F->res_1124));
goto ret_;
}
if (f_at_kw_320(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_3027)).flag_ = ((rt_int)3LL);
f_name_p_369(F->up, &(*(P174)rt_nil_check(F->x_3027)).b_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1124) = F->x_3027;
goto ret_;
}
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
f_discrete_range_p_373(F->up, &(*(P174)rt_nil_check(F->x_3027)).a_);
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3027)).a_)).kind_) == ((rt_int)5LL))) {
F->r_3028 = f_nn_311(F->up, ((rt_int)80LL), G_NV(F->line_3029));
(*(P174)rt_nil_check(F->r_3028)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3027)).a_)).name_;
(*(P174)rt_nil_check(F->x_3027)).a_ = F->r_3028;
}
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_320(F->up, rt_g_lit("IS", 2))) {
f_skip_331(F->up);
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_3027)).c_);
if (f_at_kw_320(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_331(F->up);
f_decl_part_390(F->up, &(*(P174)rt_nil_check(F->x_3027)).d_);
}
f_expect_kw_333(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_skip_331(F->up);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1124) = F->x_3027;
ret_:

  return;
}

static void f_entry_p_1127(struct f_greenc_1fr *up_, P174 *res_1126) {
  struct f_entry_p_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1126 = res_1126;
F->x_3030 = NULL;
f_expect_kw_333(F->up, rt_g_lit("ENTRY", 5));
F->x_3030 = f_nn_311(F->up, ((rt_int)52LL), f_cur_line_318(F->up));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_3030)).name_);
if ((f_at_op_322(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_331(F->up);
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->x_3030)).b_);
} else {
f_discrete_range_p_373(F->up, &(*(P174)rt_nil_check(F->x_3030)).b_);
}
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_formal_part_396(F->up, &(*(P174)rt_nil_check(F->x_3030)).a_);
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1126) = F->x_3030;
ret_:

  return;
}

static void f_accept_p_1129(struct f_greenc_1fr *up_, P174 *res_1128) {
  struct f_accept_p_1129fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1128 = res_1128;
F->x_3031 = NULL;
f_expect_kw_333(F->up, rt_g_lit("ACCEPT", 6));
F->x_3031 = f_nn_311(F->up, ((rt_int)34LL), f_cur_line_318(F->up));
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->x_3031)).name_);
if ((f_at_op_322(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_328(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->x_3031)).c_);
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_formal_part_396(F->up, &(*(P174)rt_nil_check(F->x_3031)).a_);
}
if (f_at_kw_320(F->up, rt_g_lit("DO", 2))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_3031)).flag_ = ((rt_int)1LL);
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_3031)).b_);
f_expect_kw_333(F->up, rt_g_lit("END", 3));
if (f_at_kind_324(F->up, ((rt_int)1LL))) {
f_skip_331(F->up);
}
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1128) = F->x_3031;
ret_:

  return;
}

static void f_delay_p_1131(struct f_greenc_1fr *up_, P174 *res_1130) {
  struct f_delay_p_1131fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1130 = res_1130;
F->x_3032 = NULL;
f_expect_kw_333(F->up, rt_g_lit("DELAY", 5));
F->x_3032 = f_nn_311(F->up, ((rt_int)32LL), f_cur_line_318(F->up));
f_simple_expr_356(F->up, &(*(P174)rt_nil_check(F->x_3032)).a_);
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1130) = F->x_3032;
ret_:

  return;
}

static void f_designators_1133(struct f_greenc_1fr *up_, P174 *res_1132) {
  struct f_designators_1133fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1132 = res_1132;
F->head_3033 = NULL;
F->tail_3034 = NULL;
F->n_3035 = NULL;
for (;;) {
f_name_p_369(F->up, &F->n_3035);
f_append_315(F->up, &F->head_3033, &F->tail_3034, F->n_3035);
if ((!f_at_op_322(F->up, rt_g_lit(",", 1)))) {
goto L_end_3036;
}
f_skip_331(F->up);
}
L_end_3036: ;
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*F->res_1132) = F->head_3033;
ret_:

  return;
}

static void f_parse_task_statement_1135(struct f_greenc_1fr *up_, P174 *res_1134) {
  struct f_parse_task_statement_1135fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1134 = res_1134;
F->x_3037 = NULL;
F->alt_3038 = NULL;
F->head_3039 = NULL;
F->tail_3040 = NULL;
F->line_3041 = INT64_MIN;
F->line_3041 = f_cur_line_318(F->up);
(*F->res_1134) = NULL;
if (f_at_kw_320(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_331(F->up);
F->x_3037 = f_nn_311(F->up, ((rt_int)33LL), G_NV(F->line_3041));
f_designators_1133(F->up, &(*(P174)rt_nil_check(F->x_3037)).a_);
(*F->res_1134) = F->x_3037;
} else if (f_at_kw_320(F->up, rt_g_lit("ABORT", 5))) {
f_skip_331(F->up);
F->x_3037 = f_nn_311(F->up, ((rt_int)36LL), G_NV(F->line_3041));
f_designators_1133(F->up, &(*(P174)rt_nil_check(F->x_3037)).a_);
(*F->res_1134) = F->x_3037;
} else if (f_at_kw_320(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1131(F->up, &(*F->res_1134));
} else if (f_at_kw_320(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1129(F->up, &(*F->res_1134));
} else if (f_at_kw_320(F->up, rt_g_lit("SELECT", 6))) {
f_skip_331(F->up);
F->x_3037 = f_nn_311(F->up, ((rt_int)35LL), G_NV(F->line_3041));
for (;;) {
F->alt_3038 = f_nn_311(F->up, ((rt_int)64LL), f_cur_line_318(F->up));
if (f_at_kw_320(F->up, rt_g_lit("WHEN", 4))) {
f_skip_331(F->up);
f_expr_348(F->up, &(*(P174)rt_nil_check(F->alt_3038)).a_);
f_expect_op_335(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_320(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1129(F->up, &(*(P174)rt_nil_check(F->alt_3038)).b_);
} else if (f_at_kw_320(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1131(F->up, &(*(P174)rt_nil_check(F->alt_3038)).b_);
} else {
f_perror_330(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_409(F->up, &(*(P174)rt_nil_check(F->alt_3038)).c_);
f_append_315(F->up, &F->head_3039, &F->tail_3040, F->alt_3038);
if ((!f_at_kw_320(F->up, rt_g_lit("OR", 2)))) {
goto L_end_3042;
}
f_skip_331(F->up);
}
L_end_3042: ;
if (f_at_kw_320(F->up, rt_g_lit("ELSE", 4))) {
f_skip_331(F->up);
(*(P174)rt_nil_check(F->x_3037)).flag_ = ((rt_int)1LL);
f_statements_409(F->up, &(*(P174)rt_nil_check(F->x_3037)).b_);
}
f_expect_kw_333(F->up, rt_g_lit("END", 3));
f_expect_kw_333(F->up, rt_g_lit("SELECT", 6));
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_3037)).a_ = F->head_3039;
(*F->res_1134) = F->x_3037;
}
ret_:

  return;
}

static void f_path_at_1139(struct f_greenc_1fr *up_, rt_int level_1136, rt_gstr field_1137, P140 *r_1138) {
  struct f_path_at_1139fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1136 = level_1136;
F->field_1137 = cp_rt_gstr(field_1137);
F->r_1138 = r_1138;
if ((F->level_1136 <= ((rt_int)0LL))) {
(*F->r_1138) = f_mk_237(F->up, F->field_1137);
goto ret_;
}
(*F->r_1138) = f_mk_237(F->up, rt_g_lit("F", 1));
{ rt_int lo3045 = ((rt_int)1LL), hi3046 = rt_sub(G_NV(F->up->cur_level_139), F->level_1136);
for (rt_int it3047 = lo3045; it3047 <= hi3046; it3047++) {
F->i_3044 = it3047;
(*F->r_1138) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1138))), rt_g_lit("->up", 4)));
}
}
L_end_3043: ;
(*F->r_1138) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1138))), rt_g_lit("->", 2)), F->field_1137));
ret_:

  return;
}

static int f_is_task_name_1141(struct f_greenc_1fr *up_, rt_gstr n_1140) {
  struct f_is_task_name_1141fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1140 = cp_rt_gstr(n_1140);
F->y_3048 = NULL;
F->y_3048 = f_lookup_433(F->up, F->n_1140);
if ((!(F->y_3048 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3048)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1145(struct f_greenc_1fr *up_, P174 e_1142, P117 *y_1143, P174 *ix_1144) {
  struct f_task_of_1145fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1142 = e_1142;
F->y_1143 = y_1143;
F->ix_1144 = ix_1144;
F->n_3049 = NULL;
F->n_3049 = F->e_1142;
F->a_3050 = NULL;
(*F->ix_1144) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1142)).kind_) == ((rt_int)5LL))) {
F->a_3050 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1142)).name_)));
if (((F->a_3050 != NULL) && ((G_NV((*(P117)rt_nil_check(F->a_3050)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->a_3050)).flags_) == ((rt_int)4LL))))) {
f_task_of_1145(F->up, (*(P117)rt_nil_check(F->a_3050)).decl_, &(*F->y_1143), &(*F->ix_1144));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->e_1142)).kind_) == ((rt_int)8LL))) {
F->n_3049 = (*(P174)rt_nil_check(F->e_1142)).a_;
(*F->ix_1144) = (*(P174)rt_nil_check(F->e_1142)).b_;
}
if ((G_NV((*(P174)rt_nil_check(F->n_3049)).kind_) != ((rt_int)5LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1142)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1143) = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3049)).name_)));
if ((((*F->y_1143) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1143))).kind_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1142)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3049)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1144) != NULL) && ((*(P117)rt_nil_check((*F->y_1143))).c_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1142)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3049)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1148(struct f_greenc_1fr *up_, P117 t_1146, P140 *r_1147) {
  struct f_own_index_1148fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1146 = t_1146;
F->r_1147 = r_1147;
F->y_3051 = NULL;
F->y_3051 = f_lookup_433(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->t_1146)).cname_))));
if ((F->y_3051 == NULL)) {
f_fail_258(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_762(F->up, F->y_3051, &(*F->r_1147));
ret_:

  return;
}

static void f_member_1153(struct f_greenc_1fr *up_, P117 y_1149, rt_gstr arr_1150, rt_gstr i_1151, P140 *r_1152) {
  struct f_member_1153fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1149 = y_1149;
F->arr_1150 = cp_rt_gstr(arr_1150);
F->i_1151 = cp_rt_gstr(i_1151);
F->r_1152 = r_1152;
F->lo_3052 = NULL;
F->hi_3053 = NULL;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1149)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1149)).cname_)), rt_g_lit("lo", 2)), &F->lo_3052);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1149)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1149)).cname_)), rt_g_lit("hi", 2)), &F->hi_3053);
(*F->r_1152) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1150, rt_g_lit("[rt_index(", 10)), F->i_1151), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3052))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3053))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3052))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1156(struct f_greenc_1fr *up_, P117 y_1154, P140 *r_1155) {
  struct f_act_path_1156fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1154 = y_1154;
F->r_1155 = r_1155;
F->i_3054 = NULL;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1154)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1154)).cname_)), rt_g_lit("act", 3)), &(*F->r_1155));
if (((*(P117)rt_nil_check(F->y_1154)).c_ != NULL)) {
f_own_index_1148(F->up, F->y_1154, &F->i_3054);
f_member_1153(F->up, F->y_1154, (*(P140)rt_nil_check((*F->r_1155))), (*(P140)rt_nil_check(F->i_3054)), &(*F->r_1155));
}
ret_:

  return;
}

static void f_act_path_i_1160(struct f_greenc_1fr *up_, P117 y_1157, rt_gstr i_1158, P140 *r_1159) {
  struct f_act_path_i_1160fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1157 = y_1157;
F->i_1158 = cp_rt_gstr(i_1158);
F->r_1159 = r_1159;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1157)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1157)).cname_)), rt_g_lit("act", 3)), &(*F->r_1159));
f_member_1153(F->up, F->y_1157, (*(P140)rt_nil_check((*F->r_1159))), F->i_1158, &(*F->r_1159));
ret_:

  return;
}

static void f_entry_path_1164(struct f_greenc_1fr *up_, P117 y_1161, rt_gstr i_1162, P140 *r_1163) {
  struct f_entry_path_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1161 = y_1161;
F->i_1162 = cp_rt_gstr(i_1162);
F->r_1163 = r_1163;
F->own_3055 = NULL;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1161)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1161)).access_path_)), &(*F->r_1163));
if (((((*(P117)rt_nil_check(F->y_1161)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1161)).members_)).c_ != NULL)) && (!G_NV((*(P117)rt_nil_check(F->y_1161)).ro_)))) {
if ((({ rt_gstr at3056 = F->i_1162; at3056.hi >= at3056.lo ? at3056.hi - at3056.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1148(F->up, (*(P117)rt_nil_check(F->y_1161)).members_, &F->own_3055);
f_member_1153(F->up, (*(P117)rt_nil_check(F->y_1161)).members_, (*(P140)rt_nil_check((*F->r_1163))), (*(P140)rt_nil_check(F->own_3055)), &(*F->r_1163));
} else {
f_member_1153(F->up, (*(P117)rt_nil_check(F->y_1161)).members_, (*(P140)rt_nil_check((*F->r_1163))), F->i_1162, &(*F->r_1163));
}
}
ret_:

  return;
}

static void f_declare_slot_1167(struct f_greenc_1fr *up_, rt_gstr ctype_name_1165, rt_gstr field_1166) {
  struct f_declare_slot_1167fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1165 = cp_rt_gstr(ctype_name_1165);
F->field_1166 = cp_rt_gstr(field_1166);
if (G_NV(F->up->in_func_138)) {
f_put_to_262(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1165), one_rt_gstr(32)), F->field_1166), one_rt_gstr(59)));
} else {
f_put_to_262(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1165), one_rt_gstr(32)), F->field_1166), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1169(struct f_greenc_1fr *up_, P174 e_1168) {
  struct f_task_decl_1169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1168 = e_1168;
if ((G_NV((*(P174)rt_nil_check(F->e_1168)).kind_) == ((rt_int)50LL))) {
f_task_spec_1182(F->up, F->e_1168);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1168)).kind_) == ((rt_int)51LL))) {
f_task_body_1186(F->up, F->e_1168);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1168)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1184(F->up, F->e_1168);
} else {
f_generic_decl_1274(F->up, F->e_1168);
}
ret_:

  return;
}

static void f_family_arg_struct_1170(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1170fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_213))) {
F->up->famarg_done_213 = 1;
f_put_to_262(F->up, F->up->out_types_128, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1175(struct f_greenc_1fr *up_, P174 b_1171, P117 y_1172, P140 x_1173, int per_member_1174) {
  struct f_family_bounds_1175fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1171 = b_1171;
F->y_1172 = y_1172;
F->x_1173 = x_1173;
F->per_member_1174 = per_member_1174;
F->lo_3057 = NULL;
F->hi_3058 = NULL;
F->v_3059 = NULL;
F->d_3060 = NULL;
F->mlo_3061 = NULL;
F->mhi_3062 = NULL;
F->vt_3063 = NULL;
F->c_3064 = NULL;
(*(P117)rt_nil_check(F->y_1172)).c_ = f_new_cons_484(F->up);
if (F->per_member_1174) {
f_declare_slot_1167(F->up, rt_g_lit("rt_entry **", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).access_path_)));
} else {
f_declare_slot_1167(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).access_path_)));
}
f_declare_slot_1167(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1167(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1172)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).cname_)), rt_g_lit("flo", 3)), &F->lo_3057);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1172)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1172)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3058);
f_discrete_bounds_533(F->up, F->b_1171, NULL, &F->vt_3063, &F->v_3059, &F->d_3060);
(*(P117)rt_nil_check(F->y_1172)).t_ = F->vt_3063;
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lo_3057)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3059))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3060))), one_rt_gstr(59)));
if (F->per_member_1174) {
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("lo", 2)), &F->mlo_3061);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("hi", 2)), &F->mhi_3062);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1173)), rt_g_lit(" = rt_alloc(sizeof(rt_entry *) * (size_t)(", 42)), (*(P140)rt_nil_check(F->mhi_3062))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->mlo_3061))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->mhi_3062))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3061))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int m_ = 0; m_ <= ", 26), (*(P140)rt_nil_check(F->mhi_3062))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3061))), rt_g_lit("; m_++) { ", 10)), (*(P140)rt_nil_check(F->x_1173))), rt_g_lit("[m_] = rt_alloc(sizeof(rt_entry) * (size_t)(", 44)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit(" + 1 : 1)); for (rt_int k_ = 0; k_ <= ", 38)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1173))), rt_g_lit("[m_][k_]); }", 12)));
goto ret_;
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1173)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3058))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3057))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1173))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1180(struct f_greenc_1fr *up_, P117 y_1176, rt_gstr base_1177, rt_gstr i_1178, P140 *r_1179) {
  struct f_entry_family_slot_1180fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1176 = y_1176;
F->base_1177 = cp_rt_gstr(base_1177);
F->i_1178 = cp_rt_gstr(i_1178);
F->r_1179 = r_1179;
F->lo_3065 = NULL;
F->hi_3066 = NULL;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1176)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1176)).cname_)), rt_g_lit("flo", 3)), &F->lo_3065);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1176)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1176)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3066);
(*F->r_1179) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1177, rt_g_lit("[rt_index(", 10)), F->i_1178), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3065))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3066))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3065))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1182(struct f_greenc_1fr *up_, P174 e_1181) {
  struct f_task_spec_1182fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1181 = e_1181;
F->has_procs_3067 = INT_MIN;
F->has_procs_3067 = 0;
F->saved_defer_3068 = INT_MIN;
F->fields_3069 = NULL;
F->ct_3070 = NULL;
F->pm_3071 = NULL;
F->fp_3072 = NULL;
F->flo_3073 = NULL;
F->fhi_3074 = NULL;
F->y_3075 = NULL;
F->m_3076 = NULL;
F->z_3077 = NULL;
F->saved_3078 = NULL;
F->saved_3078 = F->up->cur_task_211;
F->d_3079 = NULL;
F->v_3080 = NULL;
F->p_3081 = NULL;
F->p2_3082 = NULL;
F->vt_3083 = NULL;
F->r_3084 = NULL;
F->y_3075 = f_new_sym_481(F->up, ((rt_int)9LL), (*(P174)rt_nil_check(F->e_1181)).name_);
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1181)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3075)).cname_);
(*(P117)rt_nil_check(F->y_3075)).decl_ = F->e_1181;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3075)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3075)).access_path_ = (*(P117)rt_nil_check(F->y_3075)).cname_;
f_declare_slot_1167(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("decl", 4)));
if (((*(P174)rt_nil_check(F->e_1181)).a_ != NULL)) {
(*(P117)rt_nil_check(F->y_3075)).c_ = f_new_cons_484(F->up);
f_declare_slot_1167(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1167(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1167(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_533(F->up, (*(P174)rt_nil_check(F->e_1181)).a_, NULL, &F->vt_3083, &F->v_3080, &F->d_3079);
(*(P117)rt_nil_check(F->y_3075)).t_ = F->vt_3083;
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("lo", 2)), &F->p_3081);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_3081)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3080))), one_rt_gstr(59)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("hi", 2)), &F->p2_3082);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p2_3082)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3079))), one_rt_gstr(59)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("act", 3)), &F->v_3080);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_3080)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P140)rt_nil_check(F->p2_3082))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->p_3081))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->p2_3082))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->p_3081))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1170(F->up);
} else {
f_declare_slot_1167(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_262(F->up, F->up->out_protos_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_138))) {
f_put_to_262(F->up, F->up->out_awaits_218, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_))), rt_g_lit("decl);", 6)));
}
F->r_3084 = (*(P174)rt_nil_check(F->e_1181)).c_;
while ((F->r_3084 != NULL)) {
if (((((G_NV((*(P174)rt_nil_check(F->r_3084)).kind_) == ((rt_int)40LL)) || (G_NV((*(P174)rt_nil_check(F->r_3084)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->r_3084)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->r_3084)).kind_) == ((rt_int)50LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->r_3084)).line_), cat_rt_gstr(rt_g_lit("the visible part of a task holds entries, subprograms, types, constants and ", 76), rt_g_lit("exceptions, not variables or modules (RM79 9.1)", 47)));
}
F->r_3084 = (*(P174)rt_nil_check(F->r_3084)).next_;
}
L_end_3085: ;
f_open_scope_477(F->up);
F->up->cur_task_211 = F->y_3075;
F->saved_defer_3068 = G_NV(F->up->defer_entry_structs_217);
F->up->defer_entry_structs_217 = 1;
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->e_1181)).c_);
f_decl_elements_667(F->up, (*(P174)rt_nil_check(F->e_1181)).d_);
F->up->defer_entry_structs_217 = G_NV(F->saved_defer_3068);
F->m_3076 = F->up->scope_stack_121;
while (((F->m_3076 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3076)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_3076)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P117)rt_nil_check(F->m_3076)).from_use_)))) {
F->fields_3069 = f_mk_237(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_3071 = (*(P117)rt_nil_check(F->m_3076)).params_;
while ((F->pm_3071 != NULL)) {
f_ctype_503(F->up, (*(P1920)rt_nil_check(F->pm_3071)).t_, &F->ct_3070);
if ((G_NV((*(P1920)rt_nil_check(F->pm_3071)).mode_) == ((rt_int)1LL))) {
F->fields_3069 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3069)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3070))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3071)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3069 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3069)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3070))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3071)).cfield_))), one_rt_gstr(59)));
}
F->pm_3071 = (*(P1920)rt_nil_check(F->pm_3071)).next_;
}
L_end_3087: ;
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3076)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3069))), rt_g_lit(" };", 3)));
}
F->m_3076 = (*(P117)rt_nil_check(F->m_3076)).stack_;
}
L_end_3086: ;
F->m_3076 = F->up->scope_stack_121;
while (((F->m_3076 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3076)).depth_) == G_NV(F->up->depth_120)))) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3076)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3076)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->m_3076)).from_use_)))) {
if (((!G_NV(F->has_procs_3067)) && ((*(P117)rt_nil_check(F->y_3075)).c_ != NULL))) {
f_declare_slot_1167(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frames", 6)), &F->fp_3072);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("lo", 2)), &F->flo_3073);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("hi", 2)), &F->fhi_3074);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fp_3072)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P140)rt_nil_check(F->fhi_3074))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->flo_3073))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->fhi_3074))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->flo_3073))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_3067 = 1;
} else if ((!G_NV(F->has_procs_3067))) {
f_declare_slot_1167(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3075)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frame", 5)), &F->fp_3072);
f_emit_264(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->fp_3072)), rt_g_lit(" = NULL;", 8)));
F->has_procs_3067 = 1;
}
if (((*(P117)rt_nil_check(F->y_3075)).c_ != NULL)) {
(*(P117)rt_nil_check(F->m_3076)).access_path_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P117)rt_nil_check(F->m_3076)).access_path_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3075)).cname_)), rt_g_lit("frame", 5)));
}
(*(P117)rt_nil_check(F->m_3076)).members_ = F->y_3075;
}
f_copy_sym_1073(F->up, F->m_3076, &F->z_3077);
(*(P117)rt_nil_check(F->z_3077)).hidden_ = G_NV((*(P117)rt_nil_check(F->m_3076)).from_use_);
(*(P117)rt_nil_check(F->z_3077)).mnext_ = (*(P117)rt_nil_check(F->y_3075)).members_;
(*(P117)rt_nil_check(F->y_3075)).members_ = F->z_3077;
F->m_3076 = (*(P117)rt_nil_check(F->m_3076)).stack_;
}
L_end_3088: ;
f_close_scope_478(F->up);
F->up->cur_task_211 = F->saved_3078;
f_define_476(F->up, F->y_3075, G_NV((*(P174)rt_nil_check(F->e_1181)).line_));
ret_:

  return;
}

static void f_entry_decl_1184(struct f_greenc_1fr *up_, P174 e_1183) {
  struct f_entry_decl_1184fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1183 = e_1183;
F->y_3089 = NULL;
F->p_3090 = NULL;
F->p_3090 = (*(P174)rt_nil_check(F->e_1183)).a_;
F->pm_3091 = NULL;
F->tail_3092 = NULL;
F->fields_3093 = NULL;
F->ct_3094 = NULL;
F->x_3095 = NULL;
F->lo_3096 = NULL;
F->hi_3097 = NULL;
if ((F->up->cur_task_211 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1183)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_3089 = f_new_sym_481(F->up, ((rt_int)10LL), (*(P174)rt_nil_check(F->e_1183)).name_);
f_new_name_240(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_248(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1183)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3089)).cname_);
F->fields_3093 = f_mk_237(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_3090 != NULL)) {
F->pm_3091 = ({ R1921 *cell3099 = rt_alloc(sizeof(R1921)); *cell3099 = cp_R1921(({ R1921 ag3100; ag3100.name_ = (*(P174)rt_nil_check(F->p_3090)).name_; ag3100.mode_ = G_NV((*(P174)rt_nil_check(F->p_3090)).ival_); ag3100.t_ = NULL; ag3100.c_ = NULL; ag3100.cfield_ = NULL; ag3100.dflt_ = (*(P174)rt_nil_check(F->p_3090)).b_; ag3100.next_ = NULL; ag3100.dsym_ = NULL; ag3100; })); (P1920)cell3099; });
f_resolve_519(F->up, (*(P174)rt_nil_check(F->p_3090)).a_, &(*(P1920)rt_nil_check(F->pm_3091)).t_, &(*(P1920)rt_nil_check(F->pm_3091)).c_);
(*(P1920)rt_nil_check(F->pm_3091)).cfield_ = f_mk_237(F->up, f_c_field_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3090)).name_))));
f_ctype_503(F->up, (*(P1920)rt_nil_check(F->pm_3091)).t_, &F->ct_3094);
if ((G_NV((*(P1920)rt_nil_check(F->pm_3091)).mode_) == ((rt_int)1LL))) {
F->fields_3093 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3093)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3094))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3091)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3093 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3093)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3094))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3091)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_3092 == NULL)) {
(*(P117)rt_nil_check(F->y_3089)).params_ = F->pm_3091;
} else {
(*(P1920)rt_nil_check(F->tail_3092)).next_ = F->pm_3091;
}
F->tail_3092 = F->pm_3091;
F->p_3090 = (*(P174)rt_nil_check(F->p_3090)).next_;
}
L_end_3098: ;
if ((!G_NV(F->up->defer_entry_structs_217))) {
f_put_to_262(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3089)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3093))), rt_g_lit(" };", 3)));
}
(*(P117)rt_nil_check(F->y_3089)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->y_3089)).decl_ = F->e_1183;
(*(P117)rt_nil_check(F->y_3089)).members_ = F->up->cur_task_211;
f_elaborate_defaults_662(F->up, F->y_3089);
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3089)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3089)).access_path_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3089)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3089)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3089)).access_path_)), &F->x_3095);
(*(P117)rt_nil_check(F->y_3089)).ro_ = ((((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && G_NV(F->up->in_func_138)) && (G_NV(F->up->cur_level_139) > G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_)));
if (((*(P174)rt_nil_check(F->e_1183)).b_ != NULL)) {
f_family_bounds_1175(F->up, (*(P174)rt_nil_check(F->e_1183)).b_, F->y_3089, F->x_3095, (((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3089)).ro_))));
} else if ((((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3089)).ro_)))) {
f_declare_slot_1167(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3089)).access_path_)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("lo", 2)), &F->lo_3096);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("hi", 2)), &F->hi_3097);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_3095)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3097))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3096))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3097))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3096))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3097))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3096))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_3095))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1167(F->up, rt_g_lit("rt_entry", 8), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3089)).access_path_)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P140)rt_nil_check(F->x_3095))), rt_g_lit(");", 2)));
}
f_define_476(F->up, F->y_3089, G_NV((*(P174)rt_nil_check(F->e_1183)).line_));
ret_:

  return;
}

static void f_task_body_1186(struct f_greenc_1fr *up_, P174 e_1185) {
  struct f_task_body_1186fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1185 = e_1185;
F->y_3101 = NULL;
F->y_3101 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1185)).name_)));
F->b_3102 = NULL;
F->m_3103 = NULL;
F->z_3104 = NULL;
F->upp_3105 = NULL;
F->saved_3106 = NULL;
F->saved_3106 = F->up->cur_task_211;
if ((G_NV((*(P174)rt_nil_check(F->e_1185)).flag_) == ((rt_int)4LL))) {
f_stub_682(F->up, F->e_1185);
goto ret_;
}
if (f_is_generic_name_1276(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1185)).name_)))) {
f_attach_generic_body_1281(F->up, F->e_1185);
goto ret_;
}
if (((F->y_3101 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3101)).kind_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1185)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1185)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_3102 = f_new_sym_481(F->up, ((rt_int)4LL), (*(P174)rt_nil_check(F->e_1185)).name_);
(*(P117)rt_nil_check(F->b_3102)).cname_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_)), rt_g_lit("body", 4)));
(*(P117)rt_nil_check(F->b_3102)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->b_3102)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->b_3102)).decl_ = F->e_1185;
if (((*(P117)rt_nil_check(F->y_3101)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3102)).params_ = ({ R1921 *cell3107 = rt_alloc(sizeof(R1921)); *cell3107 = cp_R1921(({ R1921 ag3108; ag3108.name_ = f_mk_237(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_)))); ag3108.mode_ = ((rt_int)1LL); ag3108.t_ = F->up->ty_int_156; ag3108.c_ = NULL; ag3108.cfield_ = f_mk_237(F->up, rt_g_lit("index_", 6)); ag3108.dflt_ = NULL; ag3108.next_ = NULL; ag3108.dsym_ = NULL; ag3108; })); (P1920)cell3107; });
}
f_open_scope_477(F->up);
F->m_3103 = (*(P117)rt_nil_check(F->y_3101)).members_;
while ((F->m_3103 != NULL)) {
f_copy_sym_1073(F->up, F->m_3103, &F->z_3104);
f_define_476(F->up, F->z_3104, G_NV((*(P174)rt_nil_check(F->e_1185)).line_));
if (((((G_NV((*(P117)rt_nil_check(F->m_3103)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3103)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->m_3103)).access_path_ != NULL)) && f_same_task_436(F->up, (*(P117)rt_nil_check(F->m_3103)).members_, F->y_3101))) {
if ((G_NV((*(P117)rt_nil_check(F->y_3101)).level_) > ((rt_int)0LL))) {
F->upp_3105 = f_mk_237(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_3105 = f_mk_237(F->up, rt_g_lit("", 0));
}
if (((*(P117)rt_nil_check(F->y_3101)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3102)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3105)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3103)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P140)rt_nil_check(F->upp_3105))), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P117)rt_nil_check(F->b_3102)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3105)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3103)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_3103 = (*(P117)rt_nil_check(F->m_3103)).mnext_;
}
L_end_3109: ;
F->up->cur_task_211 = F->y_3101;
f_subprogram_body_712(F->up, F->e_1185, F->b_3102);
F->up->cur_task_211 = F->saved_3106;
f_close_scope_478(F->up);
if ((((*(P117)rt_nil_check(F->y_3101)).c_ != NULL) && (G_NV((*(P117)rt_nil_check(F->b_3102)).level_) > ((rt_int)0LL)))) {
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3102)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P117)rt_nil_check(F->y_3101)).c_ != NULL)) {
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3102)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P117)rt_nil_check(F->b_3102)).level_) > ((rt_int)0LL))) {
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3102)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_262(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3101)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3102)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1189(struct f_greenc_1fr *up_, P174 decls_1187, P140 *aw_1188) {
  struct f_task_awaits_1189fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1187 = decls_1187;
F->aw_1188 = aw_1188;
F->e_3110 = NULL;
F->e_3110 = F->decls_1187;
F->y_3111 = NULL;
F->p_3112 = NULL;
(*F->aw_1188) = f_mk_237(F->up, rt_g_lit("", 0));
while ((F->e_3110 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_3110)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P174)rt_nil_check(F->e_3110)).kind_) == ((rt_int)53LL)) && (G_NV((*(P174)rt_nil_check(F->e_3110)).ival_) == ((rt_int)50LL))))) {
F->y_3111 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3110)).name_)));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3111)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3111)).cname_)), rt_g_lit("decl", 4)), &F->p_3112);
(*F->aw_1188) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->aw_1188))), rt_g_lit(" rt_await_decl(&", 16)), (*(P140)rt_nil_check(F->p_3112))), rt_g_lit(");", 2)));
}
F->e_3110 = (*(P174)rt_nil_check(F->e_3110)).next_;
}
L_end_3113: ;
ret_:

  return;
}

static void f_task_failure_1191(struct f_greenc_1fr *up_, P174 s_1190) {
  struct f_task_failure_1191fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1190 = s_1190;
F->y_3114 = NULL;
F->y_3114 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1190)).tag_)));
F->a_3115 = NULL;
F->i_3116 = NULL;
F->it_3117 = NULL;
if (((*(P174)rt_nil_check(F->s_1190)).a_ != NULL)) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_1190)).a_, (*(P117)rt_nil_check(F->y_3114)).t_, &F->it_3117, &F->i_3116);
f_act_path_i_1160(F->up, F->y_3114, (*(P140)rt_nil_check(F->i_3116)), &F->a_3115);
} else {
f_act_path_1156(F->up, F->y_3114, &F->a_3115);
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P140)rt_nil_check(F->a_3115))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1195(struct f_greenc_1fr *up_, P174 e_1192, P117 *y_1193, P174 *ix_1194) {
  struct f_entry_sym_1195fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1192 = e_1192;
F->y_1193 = y_1193;
F->ix_1194 = ix_1194;
F->alias_3118 = NULL;
F->t_3119 = NULL;
(*F->ix_1194) = NULL;
F->up->fam_ix_214 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1192)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1195(F->up, (*(P174)rt_nil_check(F->e_1192)).a_, &(*F->y_1193), &(*F->ix_1194));
if (((*(P117)rt_nil_check((*F->y_1193))).c_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1192)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*F->y_1193))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_214 = (*(P174)rt_nil_check(F->e_1192)).b_;
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_1192)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3119 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).name_)));
if (((F->t_3119 != NULL) && ((G_NV((*(P117)rt_nil_check(F->t_3119)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->t_3119)).flags_) == ((rt_int)4LL))))) {
F->alias_3118 = f_nn_311(F->up, ((rt_int)9LL), G_NV((*(P174)rt_nil_check(F->e_1192)).line_));
as_R175(&(*(P174)rt_nil_check(F->alias_3118)), (*(P174)rt_nil_check(F->e_1192)));
(*(P174)rt_nil_check(F->alias_3118)).a_ = (*(P117)rt_nil_check(F->t_3119)).decl_;
f_entry_sym_1195(F->up, F->alias_3118, &(*F->y_1193), &(*F->ix_1194));
goto ret_;
}
}
if ((((G_NV((*(P174)rt_nil_check(F->e_1192)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3119 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).a_)).name_)));
if ((((F->t_3119 == NULL) || (G_NV((*(P117)rt_nil_check(F->t_3119)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->t_3119)).c_ == NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1192)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1193) = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), G_NV((*(P174)rt_nil_check(F->e_1192)).line_));
(*F->ix_1194) = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).a_)).b_;
if ((((*F->y_1193) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1193))).kind_) != ((rt_int)10LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1192)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_1192)).kind_) == ((rt_int)5LL))) {
(*F->y_1193) = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)));
if (((*(P174)rt_nil_check(F->e_1192)).tag_ != NULL)) {
(*F->y_1193) = f_member_of_1068(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), G_NV((*(P174)rt_nil_check(F->e_1192)).line_));
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_1192)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->e_1192)).a_))) {
(*F->y_1193) = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->e_1192)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1192)).name_)), G_NV((*(P174)rt_nil_check(F->e_1192)).line_));
} else {
(*F->y_1193) = NULL;
}
if ((((*F->y_1193) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1193))).kind_) != ((rt_int)10LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1192)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_entry_overload_1200(struct f_greenc_1fr *up_, P117 y_1196, P174 args_1197, rt_int line_1198, P117 *r_1199) {
  struct f_entry_overload_1200fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1196 = y_1196;
F->args_1197 = args_1197;
F->line_1198 = line_1198;
F->r_1199 = r_1199;
F->z_3120 = NULL;
F->found_3121 = NULL;
F->ok_3122 = INT_MIN;
(*F->r_1199) = F->y_1196;
if (((*(P117)rt_nil_check(F->y_1196)).members_ == NULL)) {
goto ret_;
}
F->z_3120 = (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).members_)).members_;
while ((F->z_3120 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3120)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3120)).kind_) == ((rt_int)10LL)))) {
f_fits_1097(F->up, F->z_3120, F->args_1197, NULL, &F->ok_3122);
 (void)rt_range(F->ok_3122, 0, 1);
if ((G_NV(F->ok_3122) && (F->found_3121 == NULL))) {
F->found_3121 = F->z_3120;
} else if ((G_NV(F->ok_3122) && (!f_same_entity_1092(F->up, F->found_3121, F->z_3120)))) {
f_fail_258(F->up, F->line_1198, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the entry call of ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1196)).name_))), rt_g_lit(" is ambiguous (RM79 9.5, 6.6)", 29)));
}
}
F->z_3120 = (*(P117)rt_nil_check(F->z_3120)).mnext_;
}
L_end_3123: ;
if ((F->found_3121 != NULL)) {
(*F->r_1199) = F->found_3121;
}
ret_:

  return;
}

static void f_other_call_1205(struct f_greenc_1fr *up_, P174 e_1201, int is_stmt_1202, P122 *t_1203, P140 *r_1204) {
  struct f_other_call_1205fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1201 = e_1201;
F->is_stmt_1202 = is_stmt_1202;
F->t_1203 = t_1203;
F->r_1204 = r_1204;
F->y_3124 = NULL;
F->oy_3125 = NULL;
F->pm_3126 = NULL;
F->a_3127 = NULL;
F->parts_3128 = NULL;
F->v_3129 = NULL;
F->lv_3130 = NULL;
F->ent_3131 = NULL;
F->act_3132 = NULL;
F->i_3133 = NULL;
F->vt_3134 = NULL;
F->lt_3135 = NULL;
F->lc_3136 = NULL;
F->ro_3137 = INT_MIN;
F->ix_3138 = NULL;
F->fix_3139 = NULL;
F->args_node_3140 = NULL;
f_entry_sym_1195(F->up, (*(P174)rt_nil_check(F->e_1201)).a_, &F->y_3124, &F->ix_3138);
F->fix_3139 = F->up->fam_ix_214;
F->args_node_3140 = (*(P174)rt_nil_check(F->e_1201)).b_;
if (((*(P117)rt_nil_check(F->y_3124)).c_ == NULL)) {
f_entry_overload_1200(F->up, F->y_3124, F->args_node_3140, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), &F->oy_3125);
F->y_3124 = F->oy_3125;
}
if ((((*(P117)rt_nil_check(F->y_3124)).c_ != NULL) && (F->fix_3139 == NULL))) {
F->fix_3139 = (*(P174)rt_nil_check(F->e_1201)).b_;
F->args_node_3140 = NULL;
}
F->i_3133 = f_mk_237(F->up, rt_g_lit("", 0));
if ((F->ix_3138 != NULL)) {
f_gexpr_825(F->up, F->ix_3138, F->up->ty_int_156, &F->vt_3134, &F->i_3133);
} else if (((((*(P117)rt_nil_check(F->y_3124)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).members_)).c_ != NULL)) && ((*(P117)rt_nil_check(F->y_3124)).members_ != F->up->cur_task_211))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).name_))));
}
if ((!F->is_stmt_1202)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_226 != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_226)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1164(F->up, F->y_3124, (*(P140)rt_nil_check(F->i_3133)), &F->ent_3131);
if (((*(P117)rt_nil_check(F->y_3124)).c_ != NULL)) {
if ((F->fix_3139 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_825(F->up, F->fix_3139, NULL, &F->vt_3134, &F->v_3129);
f_entry_family_slot_1180(F->up, F->y_3124, (*(P140)rt_nil_check(F->ent_3131)), (*(P140)rt_nil_check(F->v_3129)), &F->ent_3131);
}
F->parts_3128 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3124)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_3126 = (*(P117)rt_nil_check(F->y_3124)).params_;
while ((F->pm_3126 != NULL)) {
F->a_3127 = f_actual_for_1023(F->up, F->args_node_3140, F->pm_3126, (*(P117)rt_nil_check(F->y_3124)).params_);
if (((F->a_3127 == NULL) && ((*(P1920)rt_nil_check(F->pm_3126)).dsym_ != NULL))) {
f_access_of_762(F->up, (*(P1920)rt_nil_check(F->pm_3126)).dsym_, &F->v_3129);
f_copy_code_635(F->up, (*(P1920)rt_nil_check(F->pm_3126)).t_, (*(P140)rt_nil_check(F->v_3129)), &F->lv_3130);
F->parts_3128 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3128)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3126)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lv_3130))), one_rt_gstr(59)));
} else if ((F->a_3127 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3126)).name_))));
} else if ((G_NV((*(P1920)rt_nil_check(F->pm_3126)).mode_) == ((rt_int)1LL))) {
f_gexpr_825(F->up, F->a_3127, (*(P1920)rt_nil_check(F->pm_3126)).t_, &F->vt_3134, &F->v_3129);
f_check_type_498(F->up, F->vt_3134, (*(P1920)rt_nil_check(F->pm_3126)).t_, G_NV((*(P174)rt_nil_check(F->e_1201)).line_));
F->parts_3128 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3128)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3126)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3129))), one_rt_gstr(59)));
} else {
f_lvalue_781(F->up, F->a_3127, &F->lv_3130, &F->lt_3135, &F->lc_3136, &F->ro_3137);
 (void)rt_range(F->ro_3137, 0, 1);
if (G_NV(F->ro_3137)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1201)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3126)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_498(F->up, F->lt_3135, (*(P1920)rt_nil_check(F->pm_3126)).t_, G_NV((*(P174)rt_nil_check(F->e_1201)).line_));
F->parts_3128 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3128)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3126)).cfield_))), rt_g_lit(" = &", 4)), (*(P140)rt_nil_check(F->lv_3130))), one_rt_gstr(59)));
}
F->pm_3126 = (*(P1920)rt_nil_check(F->pm_3126)).next_;
}
L_end_3141: ;
if ((((*(P117)rt_nil_check(F->y_3124)).members_ != NULL) && ((*(P117)rt_nil_check(F->y_3124)).members_ != F->up->cur_task_211))) {
if ((F->ix_3138 != NULL)) {
f_act_path_i_1160(F->up, (*(P117)rt_nil_check(F->y_3124)).members_, (*(P140)rt_nil_check(F->i_3133)), &F->act_3132);
} else {
f_act_path_1156(F->up, (*(P117)rt_nil_check(F->y_3124)).members_, &F->act_3132);
}
F->parts_3128 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3128)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P140)rt_nil_check(F->act_3132))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1203) = F->up->ty_void_161;
(*F->r_1204) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3128)), rt_g_lit(" rt_entry_call(&", 16)), (*(P140)rt_nil_check(F->ent_3131))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1210(struct f_greenc_1fr *up_, P174 e_1206, P117 y_1207, P122 *t_1208, P140 *r_1209) {
  struct f_other_attr_1210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1206 = e_1206;
F->y_1207 = y_1207;
F->t_1208 = t_1208;
F->r_1209 = r_1209;
F->a_3142 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1206)).name_)));
F->p_3143 = NULL;
if (((G_NV((*(P117)rt_nil_check(F->y_1207)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3142, rt_g_lit("INDEX", 5)))) {
if (((*(P117)rt_nil_check(F->y_1207)).c_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1206)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1207)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1148(F->up, F->y_1207, &F->p_3143);
(*F->t_1208) = F->up->ty_int_156;
if (((*(P117)rt_nil_check(F->y_1207)).t_ != NULL)) {
(*F->t_1208) = (*(P117)rt_nil_check(F->y_1207)).t_;
}
(*F->r_1209) = F->p_3143;
} else if (((G_NV((*(P117)rt_nil_check(F->y_1207)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3142, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1156(F->up, F->y_1207, &F->p_3143);
(*F->t_1208) = F->up->ty_bool_157;
(*F->r_1209) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3143))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1207)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3142, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1156(F->up, F->y_1207, &F->p_3143);
(*F->t_1208) = F->up->ty_int_156;
(*F->r_1209) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3143))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1207)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3142, rt_g_lit("CLOCK", 5)))) {
f_act_path_1156(F->up, F->y_1207, &F->p_3143);
(*F->t_1208) = F->up->ty_time_171;
(*F->r_1209) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3143))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1207)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3142, rt_g_lit("COUNT", 5)))) {
if (((*(P117)rt_nil_check(F->y_1207)).members_ != F->up->cur_task_211)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1206)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1164(F->up, F->y_1207, rt_g_lit("", 0), &F->p_3143);
(*F->t_1208) = F->up->ty_int_156;
(*F->r_1209) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->p_3143))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1206)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3142), rt_g_lit(" is not handled here", 20)));
(*F->t_1208) = F->up->ty_int_156;
(*F->r_1209) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1214(struct f_greenc_1fr *up_, P174 e_1211, P122 *t_1212, P140 *r_1213) {
  struct f_member_attr_1214fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1211 = e_1211;
F->t_1212 = t_1212;
F->r_1213 = r_1213;
F->y_3144 = NULL;
F->ix_3145 = NULL;
F->i_3146 = NULL;
F->p_3147 = NULL;
F->vt_3148 = NULL;
f_task_of_1145(F->up, (*(P174)rt_nil_check(F->e_1211)).a_, &F->y_3144, &F->ix_3145);
f_gexpr_825(F->up, F->ix_3145, F->up->ty_int_156, &F->vt_3148, &F->i_3146);
f_act_path_i_1160(F->up, F->y_3144, (*(P140)rt_nil_check(F->i_3146)), &F->p_3147);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1211)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1212) = F->up->ty_bool_157;
(*F->r_1213) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3147))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1211)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1212) = F->up->ty_int_156;
(*F->r_1213) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3147))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1211)).name_)), rt_g_lit("CLOCK", 5))) {
(*F->t_1212) = F->up->ty_time_171;
(*F->r_1213) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3147))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1211)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1211)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1212) = F->up->ty_int_156;
(*F->r_1213) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1220(struct f_greenc_1fr *up_, rt_gstr name_1215, P174 args_1216, rt_int line_1217, P122 *t_1218, P140 *r_1219) {
  struct f_task_builtin_1220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1215 = cp_rt_gstr(name_1215);
F->args_1216 = args_1216;
F->line_1217 = line_1217;
F->t_1218 = t_1218;
F->r_1219 = r_1219;
F->vt_3149 = NULL;
F->v_3150 = NULL;
(*F->t_1218) = F->up->ty_void_161;
if (eq_rt_gstr(F->name_1215, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_825(F->up, F->args_1216, F->up->ty_int_156, &F->vt_3149, &F->v_3150);
(*F->r_1219) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P140)rt_nil_check(F->v_3150))), one_rt_gstr(41)));
} else {
f_fail_258(F->up, F->line_1217, cat_rt_gstr(F->name_1215, rt_g_lit(" is not declared", 16)));
(*F->r_1219) = NULL;
}
ret_:

  return;
}

static void f_accept_entry_1223(struct f_greenc_1fr *up_, P174 s_1221, P117 *r_1222) {
  struct f_accept_entry_1223fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1221 = s_1221;
F->r_1222 = r_1222;
F->z_3151 = NULL;
F->found_3152 = NULL;
F->any_3153 = NULL;
F->ok_3154 = INT_MIN;
if (((F->up->func_sym_142 != NULL) && (F->up->cur_task_211 != NULL))) {
F->z_3151 = (*(P117)rt_nil_check(F->up->cur_task_211)).members_;
while ((F->z_3151 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_3151)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->z_3151)).kind_) == ((rt_int)3LL))) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3151)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1221)).line_), rt_g_lit("an accept statement cannot be in a visible subprogram of the task (RM79 9.5)", 76));
}
F->z_3151 = (*(P117)rt_nil_check(F->z_3151)).mnext_;
}
L_end_3155: ;
}
F->z_3151 = ({ A116 ix3156 = F->up->table_119; ix3156.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1221)).name_))), ix3156.lo, ix3156.hi) - ix3156.lo]; });
while ((F->z_3151 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3151)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1221)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3151)).kind_) == ((rt_int)10LL))) && f_same_task_436(F->up, (*(P117)rt_nil_check(F->z_3151)).members_, F->up->cur_task_211))) {
F->any_3153 = F->z_3151;
f_accept_conforms_1227(F->up, F->s_1221, F->z_3151, &F->ok_3154);
 (void)rt_range(F->ok_3154, 0, 1);
if ((G_NV(F->ok_3154) && (F->found_3152 == NULL))) {
F->found_3152 = F->z_3151;
}
}
F->z_3151 = (*(P117)rt_nil_check(F->z_3151)).chain_;
}
L_end_3157: ;
if (((F->found_3152 == NULL) && (F->any_3153 != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1221)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the formal part of accept ", 26), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1221)).name_))), rt_g_lit(" does not repeat that of the entry (RM79 9.5)", 45)));
}
(*F->r_1222) = F->found_3152;
ret_:

  return;
}

static void f_accept_conforms_1227(struct f_greenc_1fr *up_, P174 s_1224, P117 y_1225, int *ok_1226) {
  struct f_accept_conforms_1227fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1224 = s_1224;
F->y_1225 = y_1225;
F->ok_1226 = ok_1226;
F->f_3158 = NULL;
F->f_3158 = (*(P174)rt_nil_check(F->s_1224)).a_;
F->pm_3159 = NULL;
F->pm_3159 = (*(P117)rt_nil_check(F->y_1225)).params_;
F->t_3160 = NULL;
F->c_3161 = NULL;
(*F->ok_1226) = 1;
if ((F->f_3158 == NULL)) {
goto ret_;
}
while (((F->f_3158 != NULL) && (F->pm_3159 != NULL))) {
f_resolve_519(F->up, (*(P174)rt_nil_check(F->f_3158)).a_, &F->t_3160, &F->c_3161);
if (((!f_same_453(F->up, F->t_3160, (*(P1920)rt_nil_check(F->pm_3159)).t_)) || (G_NV((*(P174)rt_nil_check(F->f_3158)).ival_) != G_NV((*(P1920)rt_nil_check(F->pm_3159)).mode_)))) {
(*F->ok_1226) = 0;
goto ret_;
}
F->f_3158 = (*(P174)rt_nil_check(F->f_3158)).next_;
F->pm_3159 = (*(P1920)rt_nil_check(F->pm_3159)).next_;
}
L_end_3162: ;
(*F->ok_1226) = ((F->f_3158 == NULL) && (F->pm_3159 == NULL));
ret_:

  return;
}

static void f_gen_accept_1229(struct f_greenc_1fr *up_, P174 s_1228) {
  struct f_gen_accept_1229fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1228 = s_1228;
F->y_3163 = NULL;
F->saved_ax_3164 = NULL;
F->ent_3165 = NULL;
F->ep_3166 = NULL;
F->xf_3167 = NULL;
F->x_3168 = NULL;
F->pm_3169 = NULL;
F->f_3170 = NULL;
F->f_3170 = (*(P174)rt_nil_check(F->s_1228)).a_;
F->p_3171 = NULL;
f_accept_entry_1223(F->up, F->s_1228, &F->y_3163);
if ((F->y_3163 == NULL)) {
F->y_3163 = f_lookup_entry_439(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1228)).name_)), F->up->cur_task_211);
}
if (((F->y_3163 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3163)).kind_) != ((rt_int)10LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1228)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1228)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_436(F->up, (*(P117)rt_nil_check(F->y_3163)).members_, F->up->cur_task_211))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1228)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1164(F->up, F->y_3163, rt_g_lit("", 0), &F->ent_3165);
f_member_slot_1233(F->up, F->y_3163, F->s_1228, &F->ent_3165);
if ((G_NV((*(P174)rt_nil_check(F->s_1228)).flag_) == ((rt_int)0LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_240(F->up, rt_g_lit("ep", 2), &F->ep_3166);
f_new_name_240(F->up, rt_g_lit("xf", 2), &F->xf_3167);
f_new_name_240(F->up, rt_g_lit("x", 1), &F->x_3168);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3163)).cname_))), rt_g_lit("p *", 3)), (*(P140)rt_nil_check(F->ep_3166))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit(");", 2)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P140)rt_nil_check(F->xf_3167))), one_rt_gstr(59)));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->xf_3167))), rt_g_lit(")) {", 4)));
f_push_cleanup_718(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3167))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_477(F->up);
F->pm_3169 = (*(P117)rt_nil_check(F->y_3163)).params_;
while ((F->pm_3169 != NULL)) {
if ((G_NV((*(P1920)rt_nil_check(F->pm_3169)).mode_) == ((rt_int)1LL))) {
F->p_3171 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P1920)rt_nil_check(F->pm_3169)).name_);
(*(P117)rt_nil_check(F->p_3171)).ro_ = 1;
(*(P117)rt_nil_check(F->p_3171)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->ep_3166))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3169)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3171 = f_new_sym_481(F->up, ((rt_int)1LL), (*(P1920)rt_nil_check(F->pm_3169)).name_);
(*(P117)rt_nil_check(F->p_3171)).access_path_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->ep_3166))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1920)rt_nil_check(F->pm_3169)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3170 != NULL)) {
(*(P117)rt_nil_check(F->p_3171)).name_ = (*(P174)rt_nil_check(F->f_3170)).name_;
F->f_3170 = (*(P174)rt_nil_check(F->f_3170)).next_;
}
(*(P117)rt_nil_check(F->p_3171)).t_ = (*(P1920)rt_nil_check(F->pm_3169)).t_;
(*(P117)rt_nil_check(F->p_3171)).c_ = (*(P1920)rt_nil_check(F->pm_3169)).c_;
f_define_476(F->up, F->p_3171, G_NV((*(P174)rt_nil_check(F->s_1228)).line_));
F->pm_3169 = (*(P1920)rt_nil_check(F->pm_3169)).next_;
}
L_end_3172: ;
F->up->accept_depth_212 = rt_add(G_NV(F->up->accept_depth_212), ((rt_int)1LL));
F->saved_ax_3164 = F->up->accept_exits_149;
F->up->accept_exits_149 = F->up->exits_145;
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_1228)).b_);
F->up->accept_exits_149 = F->saved_ax_3164;
F->up->accept_depth_212 = rt_sub(G_NV(F->up->accept_depth_212), ((rt_int)1LL));
f_close_scope_478(F->up);
f_pop_cleanup_719(F->up);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3167))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit(", 0, 0);", 8)));
f_emit_264(F->up, rt_g_lit("} else {", 8));
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3167))), rt_g_lit("); int ", 7)), (*(P140)rt_nil_check(F->x_3168))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P140)rt_nil_check(F->ent_3165))), rt_g_lit(", 1, ", 5)), rt_g_lit("rt_g_partner_exc(", 17)), (*(P140)rt_nil_check(F->x_3168))), rt_g_lit(")); rt_raise(", 13)), (*(P140)rt_nil_check(F->x_3168))), rt_g_lit(");", 2)));
f_emit_264(F->up, rt_g_lit("}", 1));
f_emit_264(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1233(struct f_greenc_1fr *up_, P117 y_1230, P174 s_1231, P140 *ent_1232) {
  struct f_member_slot_1233fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1230 = y_1230;
F->s_1231 = s_1231;
F->ent_1232 = ent_1232;
F->vt_3173 = NULL;
F->v_3174 = NULL;
if (((*(P117)rt_nil_check(F->y_1230)).c_ != NULL)) {
if (((*(P174)rt_nil_check(F->s_1231)).c_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1231)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1230)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1230)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->s_1231)).c_, NULL, &F->vt_3173, &F->v_3174);
f_entry_family_slot_1180(F->up, F->y_1230, (*(P140)rt_nil_check((*F->ent_1232))), (*(P140)rt_nil_check(F->v_3174)), &(*F->ent_1232));
} else if (((*(P174)rt_nil_check(F->s_1231)).c_ != NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1231)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1230)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1236(struct f_greenc_1fr *up_, P174 e_1234, P140 *r_1235) {
  struct f_gen_delay_ticks_1236fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1234 = e_1234;
F->r_1235 = r_1235;
F->vt_3175 = NULL;
F->v_3176 = NULL;
f_gexpr_825(F->up, F->e_1234, F->up->ty_time_171, &F->vt_3175, &F->v_3176);
f_check_type_498(F->up, F->vt_3175, F->up->ty_time_171, G_NV((*(P174)rt_nil_check(F->e_1234)).line_));
(*F->r_1235) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P140)rt_nil_check(F->v_3176))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1238(struct f_greenc_1fr *up_, P174 s_1237) {
  struct f_gen_select_1238fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1237 = s_1237;
F->alt_3177 = NULL;
F->alt_3177 = (*(P174)rt_nil_check(F->s_1237)).a_;
F->n_3178 = INT64_MIN;
F->n_3178 = ((rt_int)0LL);
F->i_3179 = INT64_MIN;
F->has_delay_3180 = INT_MIN;
F->has_delay_3180 = 0;
F->has_accept_3181 = INT_MIN;
F->has_accept_3181 = 0;
F->al_3182 = NULL;
F->w_3183 = NULL;
F->g_3184 = NULL;
F->ent_3185 = NULL;
F->ticks_3186 = NULL;
F->vt_3187 = NULL;
F->y_3188 = NULL;
f_new_name_240(F->up, rt_g_lit("al", 2), &F->al_3182);
f_new_name_240(F->up, rt_g_lit("w", 1), &F->w_3183);
while ((F->alt_3177 != NULL)) {
F->n_3178 = rt_add(G_NV(F->n_3178), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3180 = 1;
} else {
F->has_accept_3181 = 1;
}
F->alt_3177 = (*(P174)rt_nil_check(F->alt_3177)).next_;
}
L_end_3189: ;
if (((G_NV((*(P174)rt_nil_check(F->s_1237)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3180))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1237)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3181))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1237)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P140)rt_nil_check(F->al_3182))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3178), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3177 = (*(P174)rt_nil_check(F->s_1237)).a_;
F->i_3179 = ((rt_int)0LL);
while ((F->alt_3177 != NULL)) {
F->g_3184 = f_mk_237(F->up, rt_g_lit("1", 1));
if (((*(P174)rt_nil_check(F->alt_3177)).a_ != NULL)) {
f_condition_865(F->up, (*(P174)rt_nil_check(F->alt_3177)).a_, F->up->ty_bool_157, &F->vt_3187, &F->g_3184);
f_check_type_498(F->up, F->vt_3187, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->alt_3177)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).kind_) == ((rt_int)34LL))) {
f_accept_entry_1223(F->up, (*(P174)rt_nil_check(F->alt_3177)).b_, &F->y_3188);
if ((F->y_3188 == NULL)) {
F->y_3188 = f_lookup_entry_439(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).name_)), F->up->cur_task_211);
}
if (((F->y_3188 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3188)).kind_) != ((rt_int)10LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->alt_3177)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1164(F->up, F->y_3188, rt_g_lit("", 0), &F->ent_3185);
f_member_slot_1233(F->up, F->y_3188, (*(P174)rt_nil_check(F->alt_3177)).b_, &F->ent_3185);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3182)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3179)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P140)rt_nil_check(F->g_3184))), rt_g_lit("), &", 4)), (*(P140)rt_nil_check(F->ent_3185))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1236(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).a_, &F->ticks_3186);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3182)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3179)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P140)rt_nil_check(F->g_3184))), rt_g_lit("), NULL, NULL, ", 15)), (*(P140)rt_nil_check(F->ticks_3186))), rt_g_lit("};", 2)));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P140)rt_nil_check(F->al_3182))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3179)))), rt_g_lit("].open;", 7)));
F->i_3179 = rt_add(G_NV(F->i_3179), ((rt_int)1LL));
F->alt_3177 = (*(P174)rt_nil_check(F->alt_3177)).next_;
}
L_end_3190: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1237)).flag_) == ((rt_int)1LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3182)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3178)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3178 = rt_add(G_NV(F->n_3178), ((rt_int)1LL));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_255(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_255(F->up)), rt_g_lit("));", 3)));
}
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->w_3183))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3178)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->al_3182))), rt_g_lit(");", 2)));
F->alt_3177 = (*(P174)rt_nil_check(F->s_1237)).a_;
F->i_3179 = ((rt_int)0LL);
while ((F->alt_3177 != NULL)) {
if ((G_NV(F->i_3179) == ((rt_int)0LL))) {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->w_3183))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->w_3183))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3179)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3177)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1229(F->up, (*(P174)rt_nil_check(F->alt_3177)).b_);
}
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->alt_3177)).c_);
F->i_3179 = rt_add(G_NV(F->i_3179), ((rt_int)1LL));
F->alt_3177 = (*(P174)rt_nil_check(F->alt_3177)).next_;
}
L_end_3191: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1237)).flag_) == ((rt_int)1LL))) {
f_emit_264(F->up, rt_g_lit("} else {", 8));
f_gen_statements_714(F->up, (*(P174)rt_nil_check(F->s_1237)).b_);
}
f_emit_264(F->up, rt_g_lit("}", 1));
f_emit_264(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1243(struct f_greenc_1fr *up_, P117 y_1239, P174 ix_1240, P140 *lo_1241, P140 *hi_1242) {
  struct f_family_range_1243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1239 = y_1239;
F->ix_1240 = ix_1240;
F->lo_1241 = lo_1241;
F->hi_1242 = hi_1242;
F->vt_3192 = NULL;
if ((F->ix_1240 == NULL)) {
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1239)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1239)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1241));
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_1239)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1239)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1242));
} else if ((G_NV((*(P174)rt_nil_check(F->ix_1240)).kind_) == ((rt_int)14LL))) {
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->ix_1240)).a_, F->up->ty_int_156, &F->vt_3192, &(*F->lo_1241));
f_gexpr_825(F->up, (*(P174)rt_nil_check(F->ix_1240)).b_, F->up->ty_int_156, &F->vt_3192, &(*F->hi_1242));
} else {
f_gexpr_825(F->up, F->ix_1240, F->up->ty_int_156, &F->vt_3192, &(*F->lo_1241));
(*F->hi_1242) = (*F->lo_1241);
}
ret_:

  return;
}

static void f_task_statement_gen_1245(struct f_greenc_1fr *up_, P174 s_1244) {
  struct f_task_statement_gen_1245fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1244 = s_1244;
F->n_3193 = NULL;
F->ix_3194 = NULL;
F->y_3195 = NULL;
F->a_3196 = NULL;
F->d_3197 = NULL;
F->l_3198 = NULL;
F->ticks_3199 = NULL;
F->lo_3200 = NULL;
F->hi_3201 = NULL;
{ rt_int sel3202 = G_NV((*(P174)rt_nil_check(F->s_1244)).kind_);
if (0 || sel3202 == ((rt_int)32LL)) {
f_gen_delay_ticks_1236(F->up, (*(P174)rt_nil_check(F->s_1244)).a_, &F->ticks_3199);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P140)rt_nil_check(F->ticks_3199))), rt_g_lit(");", 2)));
} else if (0 || sel3202 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_212) > ((rt_int)0LL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1244)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3193 = (*(P174)rt_nil_check(F->s_1244)).a_;
while ((F->n_3193 != NULL)) {
f_task_of_1145(F->up, F->n_3193, &F->y_3195, &F->ix_3194);
f_path_at_1139(F->up, G_NV((*(P117)rt_nil_check(F->y_3195)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3195)).cname_)), rt_g_lit("decl", 4)), &F->d_3197);
if ((G_NV((*(P117)rt_nil_check(F->y_3195)).level_) > ((rt_int)0LL))) {
f_link_to_765(F->up, G_NV((*(P117)rt_nil_check(F->y_3195)).level_), &F->l_3198);
} else {
F->l_3198 = f_mk_237(F->up, rt_g_lit("NULL", 4));
}
if (((*(P117)rt_nil_check(F->y_3195)).c_ == NULL)) {
f_act_path_1156(F->up, F->y_3195, &F->a_3196);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P140)rt_nil_check(F->a_3196))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3197))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3195)).cname_))), rt_g_lit("run, ", 5)), (*(P140)rt_nil_check(F->l_3198))), rt_g_lit(");", 2)));
} else {
f_family_range_1243(F->up, F->y_3195, F->ix_3194, &F->lo_3200, &F->hi_3201);
f_act_path_i_1160(F->up, F->y_3195, rt_g_lit("k_", 2), &F->a_3196);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3200))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3201))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P140)rt_nil_check(F->l_3198))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P140)rt_nil_check(F->a_3196))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3197))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3195)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3193 = (*(P174)rt_nil_check(F->n_3193)).next_;
}
L_end_3203: ;
} else if (0 || sel3202 == ((rt_int)34LL)) {
f_gen_accept_1229(F->up, F->s_1244);
} else if (0 || sel3202 == ((rt_int)35LL)) {
f_gen_select_1238(F->up, F->s_1244);
} else if (0 || sel3202 == ((rt_int)36LL)) {
F->n_3193 = (*(P174)rt_nil_check(F->s_1244)).a_;
while ((F->n_3193 != NULL)) {
f_task_of_1145(F->up, F->n_3193, &F->y_3195, &F->ix_3194);
if (((*(P117)rt_nil_check(F->y_3195)).c_ == NULL)) {
f_act_path_1156(F->up, F->y_3195, &F->a_3196);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P140)rt_nil_check(F->a_3196))), rt_g_lit(");", 2)));
} else {
f_family_range_1243(F->up, F->y_3195, F->ix_3194, &F->lo_3200, &F->hi_3201);
f_act_path_i_1160(F->up, F->y_3195, rt_g_lit("k_", 2), &F->a_3196);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3200))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3201))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P140)rt_nil_check(F->a_3196))), rt_g_lit(");", 2)));
}
F->n_3193 = (*(P174)rt_nil_check(F->n_3193)).next_;
}
L_end_3204: ;
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->s_1244)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P174 f_root_name_1247(struct f_greenc_1fr *up_, P174 e_1246) {
  struct f_root_name_1247fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1246 = e_1246;
if ((G_NV((*(P174)rt_nil_check(F->e_1246)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1246;
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1246)).kind_) == ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check(F->e_1246)).kind_) == ((rt_int)8LL))) || (G_NV((*(P174)rt_nil_check(F->e_1246)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1247(F->up, (*(P174)rt_nil_check(F->e_1246)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1250(struct f_greenc_1fr *up_, P174 target_1248, rt_int line_1249) {
  struct f_check_pure_target_1250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1248 = target_1248;
F->line_1249 = line_1249;
F->n_3205 = NULL;
F->y_3206 = NULL;
if ((F->up->pure_sym_226 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_230)) {
f_fail_258(F->up, F->line_1249, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_226)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3205 = f_root_name_1247(F->up, F->target_1248);
if ((F->n_3205 != NULL)) {
F->y_3206 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3205)).name_)));
if ((((F->y_3206 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_3206)).kind_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->y_3206)).depth_) < G_NV(F->up->pure_depth_227)))) {
f_fail_258(F->up, F->line_1249, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_226)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3205)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1253(struct f_greenc_1fr *up_, P174 d_1251, rt_gstr name_1252) {
  struct f_assigns_nonlocal_1253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1251 = d_1251;
F->name_1252 = cp_rt_gstr(name_1252);
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->d_1251)).d_, F->d_1251, F->name_1252)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1260(F->up, (*(P174)rt_nil_check(F->d_1251)).e_, F->d_1251, F->name_1252);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1256(struct f_greenc_1fr *up_, P174 d_1254, rt_gstr name_1255) {
  struct f_declares_1256fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1254 = d_1254;
F->name_1255 = cp_rt_gstr(name_1255);
F->p_3207 = NULL;
F->p_3207 = (*(P174)rt_nil_check(F->d_1254)).a_;
F->e_3208 = NULL;
F->e_3208 = (*(P174)rt_nil_check(F->d_1254)).c_;
while ((F->p_3207 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3207)).name_)), F->name_1255)) {
F->result_ = 1;
goto ret_;
}
F->p_3207 = (*(P174)rt_nil_check(F->p_3207)).next_;
}
L_end_3209: ;
while ((F->e_3208 != NULL)) {
if ((((*(P174)rt_nil_check(F->e_3208)).name_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3208)).name_)), F->name_1255))) {
F->result_ = 1;
goto ret_;
}
F->e_3208 = (*(P174)rt_nil_check(F->e_3208)).next_;
}
L_end_3210: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1260(struct f_greenc_1fr *up_, P174 h_1257, P174 d_1258, rt_gstr name_1259) {
  struct f_scan_handlers_1260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1257 = h_1257;
F->d_1258 = d_1258;
F->name_1259 = cp_rt_gstr(name_1259);
F->p_3211 = NULL;
F->p_3211 = F->h_1257;
while ((F->p_3211 != NULL)) {
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->p_3211)).b_, F->d_1258, F->name_1259)) {
F->result_ = 1;
goto ret_;
}
F->p_3211 = (*(P174)rt_nil_check(F->p_3211)).next_;
}
L_end_3212: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1264(struct f_greenc_1fr *up_, P174 stmts_1261, P174 d_1262, rt_gstr name_1263) {
  struct f_scan_assigns_1264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1261 = stmts_1261;
F->d_1262 = d_1262;
F->name_1263 = cp_rt_gstr(name_1263);
F->s_3213 = NULL;
F->s_3213 = F->stmts_1261;
F->a_3214 = NULL;
F->r_3215 = NULL;
while ((F->s_3213 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_3213)).kind_) == ((rt_int)20LL))) {
F->r_3215 = f_root_name_1247(F->up, (*(P174)rt_nil_check(F->s_3213)).a_);
if ((((F->r_3215 != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_3215)).name_)), F->name_1263)) && (!f_declares_1256(F->up, F->d_1262, F->name_1263)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3213)).kind_) == ((rt_int)22LL))) {
F->a_3214 = (*(P174)rt_nil_check(F->s_3213)).a_;
while ((F->a_3214 != NULL)) {
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->a_3214)).b_, F->d_1262, F->name_1263)) {
F->result_ = 1;
goto ret_;
}
F->a_3214 = (*(P174)rt_nil_check(F->a_3214)).next_;
}
L_end_3217: ;
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->s_3213)).b_, F->d_1262, F->name_1263)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3213)).kind_) == ((rt_int)23LL))) {
F->a_3214 = (*(P174)rt_nil_check(F->s_3213)).b_;
while ((F->a_3214 != NULL)) {
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->a_3214)).b_, F->d_1262, F->name_1263)) {
F->result_ = 1;
goto ret_;
}
F->a_3214 = (*(P174)rt_nil_check(F->a_3214)).next_;
}
L_end_3218: ;
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->s_3213)).c_, F->d_1262, F->name_1263)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3213)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->s_3213)).b_, F->d_1262, F->name_1263)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3213)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1264(F->up, (*(P174)rt_nil_check(F->s_3213)).b_, F->d_1262, F->name_1263) || f_scan_handlers_1260(F->up, (*(P174)rt_nil_check(F->s_3213)).c_, F->d_1262, F->name_1263))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3213 = (*(P174)rt_nil_check(F->s_3213)).next_;
}
L_end_3216: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1267(struct f_greenc_1fr *up_, P174 e_1265, P117 y_1266) {
  struct f_check_call_rules_1267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1265 = e_1265;
F->y_1266 = y_1266;
F->z_3219 = NULL;
F->s_3220 = NULL;
if ((((F->up->pure_sym_226 != NULL) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1266)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P117)rt_nil_check(F->y_1266)).vrp_))) && (G_NV((*(P117)rt_nil_check(F->y_1266)).depth_) < G_NV(F->up->pure_depth_227)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1265)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_226)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1266)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P117)rt_nil_check(F->y_1266)).vrp_)) || (G_NV(F->up->trial_155) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_228))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1265)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1266)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3220 = F->up->scope_stack_121;
while ((F->s_3220 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_3220)).kind_) == ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->s_3220)).depth_) <= G_NV((*(P117)rt_nil_check(F->y_1266)).depth_))) && (f_lookup_433(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3220)).name_))) == F->s_3220)) && f_assigns_nonlocal_1253(F->up, (*(P117)rt_nil_check(F->y_1266)).decl_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3220)).name_))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1265)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1266)).name_))), rt_g_lit(" assigns ", 9)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3220)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3220 = (*(P117)rt_nil_check(F->s_3220)).stack_;
}
L_end_3221: ;
ret_:

  return;
}

static void f_generic_p_1269(struct f_greenc_1fr *up_, P174 *res_1268) {
  struct f_generic_p_1269fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1268 = res_1268;
F->x_3222 = NULL;
F->p_3223 = NULL;
F->head_3224 = NULL;
F->tail_3225 = NULL;
F->names_3226 = NULL;
F->st_3227 = NULL;
F->def_3228 = NULL;
F->sub_3229 = NULL;
F->def_name_text_3230 = NULL;
F->more_3231 = INT_MIN;
F->more_3231 = 1;
F->restr_3232 = INT_MIN;
F->mode_3233 = INT64_MIN;
f_expect_kw_333(F->up, rt_g_lit("GENERIC", 7));
F->x_3222 = f_nn_311(F->up, ((rt_int)54LL), f_cur_line_318(F->up));
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
while (G_NV(F->more_3231)) {
F->restr_3232 = 0;
if (f_at_kw_320(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_331(F->up);
F->restr_3232 = 1;
}
if (f_at_kw_320(F->up, rt_g_lit("TYPE", 4))) {
f_skip_331(F->up);
F->p_3223 = f_nn_311(F->up, ((rt_int)47LL), f_cur_line_318(F->up));
(*(P174)rt_nil_check(F->p_3223)).ival_ = ((rt_int)10LL);
if (G_NV(F->restr_3232)) {
(*(P174)rt_nil_check(F->p_3223)).flag_ = ((rt_int)9LL);
}
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->p_3223)).name_);
f_append_315(F->up, &F->head_3224, &F->tail_3225, F->p_3223);
} else if ((f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_320(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3223 = f_nn_311(F->up, ((rt_int)47LL), f_cur_line_318(F->up));
(*(P174)rt_nil_check(F->p_3223)).ival_ = ((rt_int)11LL);
if (f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3229 = f_nn_311(F->up, ((rt_int)44LL), f_cur_line_318(F->up));
} else {
F->sub_3229 = f_nn_311(F->up, ((rt_int)45LL), f_cur_line_318(F->up));
}
f_skip_331(F->up);
f_designator_398(F->up, &(*(P174)rt_nil_check(F->sub_3229)).name_);
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_formal_part_396(F->up, &(*(P174)rt_nil_check(F->sub_3229)).a_);
}
if (f_at_kw_320(F->up, rt_g_lit("RETURN", 6))) {
f_skip_331(F->up);
f_subtype_ind_375(F->up, &(*(P174)rt_nil_check(F->sub_3229)).b_);
}
(*(P174)rt_nil_check(F->sub_3229)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3223)).name_ = (*(P174)rt_nil_check(F->sub_3229)).name_;
(*(P174)rt_nil_check(F->p_3223)).a_ = F->sub_3229;
if (f_at_kw_320(F->up, rt_g_lit("IS", 2))) {
f_skip_331(F->up);
if (f_at_kind_324(F->up, ((rt_int)6LL))) {
f_designator_398(F->up, &F->def_name_text_3230);
(*(P174)rt_nil_check(F->p_3223)).b_ = f_nn_311(F->up, ((rt_int)5LL), f_cur_line_318(F->up));
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->p_3223)).b_)).name_ = F->def_name_text_3230;
} else {
f_name_p_369(F->up, &(*(P174)rt_nil_check(F->p_3223)).b_);
}
}
f_append_315(F->up, &F->head_3224, &F->tail_3225, F->p_3223);
} else {
f_id_list_341(F->up, &F->names_3226);
f_expect_op_335(F->up, rt_g_lit(":", 1));
F->mode_3233 = ((rt_int)1LL);
if (f_at_kw_320(F->up, rt_g_lit("IN", 2))) {
f_skip_331(F->up);
if (f_at_kw_320(F->up, rt_g_lit("OUT", 3))) {
f_skip_331(F->up);
F->mode_3233 = ((rt_int)2LL);
}
} else if (f_at_kw_320(F->up, rt_g_lit("OUT", 3))) {
f_skip_331(F->up);
F->mode_3233 = ((rt_int)3LL);
}
f_subtype_ind_375(F->up, &F->st_3227);
F->def_3228 = NULL;
if (f_at_op_322(F->up, rt_g_lit(":=", 2))) {
f_skip_331(F->up);
f_expr_348(F->up, &F->def_3228);
}
while ((F->names_3226 != NULL)) {
F->p_3223 = f_nn_311(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_3226)).line_));
(*(P174)rt_nil_check(F->p_3223)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3223)).flag_ = G_NV(F->mode_3233);
(*(P174)rt_nil_check(F->p_3223)).name_ = (*(P174)rt_nil_check(F->names_3226)).name_;
(*(P174)rt_nil_check(F->p_3223)).a_ = F->st_3227;
(*(P174)rt_nil_check(F->p_3223)).b_ = F->def_3228;
f_append_315(F->up, &F->head_3224, &F->tail_3225, F->p_3223);
F->names_3226 = (*(P174)rt_nil_check(F->names_3226)).next_;
}
L_end_3235: ;
}
F->more_3231 = f_at_op_322(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3231)) {
f_skip_331(F->up);
}
}
L_end_3234: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_320(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_320(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_400(F->up, &(*(P174)rt_nil_check(F->x_3222)).b_);
} else if (f_at_kw_320(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_406(F->up, &(*(P174)rt_nil_check(F->x_3222)).b_);
} else if (f_at_kw_320(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1125(F->up, &(*(P174)rt_nil_check(F->x_3222)).b_);
} else {
f_perror_330(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P174)rt_nil_check(F->x_3222)).a_ = F->head_3224;
(*(P174)rt_nil_check(F->x_3222)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3222)).b_)).name_;
(*F->res_1268) = F->x_3222;
ret_:

  return;
}

static void f_instantiation_1272(struct f_greenc_1fr *up_, P174 x_1270, P174 *res_1271) {
  struct f_instantiation_1272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1270 = x_1270;
F->res_1271 = res_1271;
F->i_3236 = NULL;
F->head_3237 = NULL;
F->tail_3238 = NULL;
F->a_3239 = NULL;
F->formal_3240 = NULL;
F->mark_3241 = INT64_MIN;
F->more_3242 = INT_MIN;
F->more_3242 = 1;
f_expect_kw_333(F->up, rt_g_lit("IS", 2));
f_expect_kw_333(F->up, rt_g_lit("NEW", 3));
F->i_3236 = f_nn_311(F->up, ((rt_int)53LL), G_NV((*(P174)rt_nil_check(F->x_1270)).line_));
(*(P174)rt_nil_check(F->i_3236)).name_ = (*(P174)rt_nil_check(F->x_1270)).name_;
(*(P174)rt_nil_check(F->i_3236)).ival_ = G_NV((*(P174)rt_nil_check(F->x_1270)).kind_);
f_expect_id_337(F->up, &(*(P174)rt_nil_check(F->i_3236)).tag_);
while (f_at_op_322(F->up, rt_g_lit(".", 1))) {
f_skip_331(F->up);
f_expect_id_337(F->up, &F->formal_3240);
(*(P174)rt_nil_check(F->i_3236)).tag_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->i_3236)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check(F->formal_3240))));
}
L_end_3243: ;
if (f_at_op_322(F->up, rt_g_lit("(", 1))) {
f_skip_331(F->up);
while (G_NV(F->more_3242)) {
F->formal_3240 = NULL;
F->mark_3241 = ((rt_int)0LL);
if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_337(F->up, &F->formal_3240);
f_skip_331(F->up);
F->mark_3241 = ((rt_int)5LL);
} else if (((f_at_kind_324(F->up, ((rt_int)1LL)) && (f_kind_at_326(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_328(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_337(F->up, &F->formal_3240);
if (f_at_op_322(F->up, rt_g_lit("=:", 2))) {
F->mark_3241 = ((rt_int)3LL);
} else if (f_at_op_322(F->up, rt_g_lit(":=:", 3))) {
F->mark_3241 = ((rt_int)2LL);
} else {
F->mark_3241 = ((rt_int)1LL);
}
f_skip_331(F->up);
}
if ((f_at_kind_324(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3241) == ((rt_int)5LL)))) {
F->a_3239 = f_nn_311(F->up, ((rt_int)5LL), f_cur_line_318(F->up));
f_designator_398(F->up, &(*(P174)rt_nil_check(F->a_3239)).name_);
} else {
f_expr_348(F->up, &F->a_3239);
}
(*(P174)rt_nil_check(F->a_3239)).formal_ = F->formal_3240;
(*(P174)rt_nil_check(F->a_3239)).flag_ = G_NV(F->mark_3241);
f_append_315(F->up, &F->head_3237, &F->tail_3238, F->a_3239);
F->more_3242 = f_at_op_322(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3242)) {
f_skip_331(F->up);
}
}
L_end_3244: ;
f_expect_op_335(F->up, rt_g_lit(")", 1));
}
f_expect_op_335(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->i_3236)).a_ = F->head_3237;
(*F->res_1271) = F->i_3236;
ret_:

  return;
}

static void f_generic_decl_1274(struct f_greenc_1fr *up_, P174 e_1273) {
  struct f_generic_decl_1274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1273 = e_1273;
F->y_3245 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1273)).kind_) == ((rt_int)54LL))) {
F->y_3245 = f_new_sym_481(F->up, ((rt_int)11LL), (*(P174)rt_nil_check(F->e_1273)).name_);
(*(P117)rt_nil_check(F->y_3245)).decl_ = F->e_1273;
f_define_476(F->up, F->y_3245, G_NV((*(P174)rt_nil_check(F->e_1273)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->e_1273)).kind_) == ((rt_int)53LL))) {
f_instantiate_1316(F->up, F->e_1273);
} else {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1273)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1276(struct f_greenc_1fr *up_, rt_gstr n_1275) {
  struct f_is_generic_name_1276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1275 = cp_rt_gstr(n_1275);
F->y_3246 = NULL;
F->y_3246 = f_lookup_433(F->up, F->n_1275);
if ((F->y_3246 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_3246)).depth_) != G_NV(F->up->depth_120))) {
F->result_ = 0;
goto ret_;
}
if ((!(F->y_3246 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3246)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_instantiates_1279(struct f_greenc_1fr *up_, P174 n_1277, rt_gstr name_1278) {
  struct f_instantiates_1279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1277 = n_1277;
F->name_1278 = cp_rt_gstr(name_1278);
F->p_3247 = NULL;
F->p_3247 = F->n_1277;
while ((F->p_3247 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3247)).kind_) == ((rt_int)53LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3247)).tag_)), F->name_1278))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->p_3247)).a_, F->name_1278) || f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->p_3247)).b_, F->name_1278))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->p_3247)).c_, F->name_1278) || f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->p_3247)).d_, F->name_1278))) {
F->result_ = 1;
goto ret_;
} else if (f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->p_3247)).e_, F->name_1278)) {
F->result_ = 1;
goto ret_;
}
F->p_3247 = (*(P174)rt_nil_check(F->p_3247)).next_;
}
L_end_3248: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1281(struct f_greenc_1fr *up_, P174 e_1280) {
  struct f_attach_generic_body_1281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1280 = e_1280;
F->y_3249 = NULL;
F->y_3249 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1280)).name_)));
if ((f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->e_1280)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1280)).name_))) || f_instantiates_1279(F->up, (*(P174)rt_nil_check(F->e_1280)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1280)).name_))))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1280)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("generic ", 8), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1280)).name_))), rt_g_lit(" cannot be instantiated in its own body (RM79 12.2)", 51)));
}
(*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3249)).decl_)).c_ = F->e_1280;
F->up->generic_contexts_148 = ({ R147 *cell3250 = rt_alloc(sizeof(R147)); *cell3250 = cp_R147(({ R147 ag3251; ag3251.body_node_ = F->e_1280; ag3251.visible_ = F->up->scope_stack_121; ag3251.next_ = F->up->generic_contexts_148; ag3251; })); (P146)cell3250; });
ret_:

  return;
}

static void f_restore_generic_context_1285(struct f_greenc_1fr *up_, P174 body_node_1282, rt_int line_1283, rt_gstr inst_1284) {
  struct f_restore_generic_context_1285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1282 = body_node_1282;
F->line_1283 = line_1283;
F->inst_1284 = cp_rt_gstr(inst_1284);
F->ctx_3252 = NULL;
F->ctx_3252 = F->up->generic_contexts_148;
F->m_3253 = NULL;
F->z_3254 = NULL;
F->seen_3255 = INT_MIN;
while (((F->ctx_3252 != NULL) && ((*(P146)rt_nil_check(F->ctx_3252)).body_node_ != F->body_node_1282))) {
F->ctx_3252 = (*(P146)rt_nil_check(F->ctx_3252)).next_;
}
L_end_3256: ;
if ((F->ctx_3252 == NULL)) {
goto ret_;
}
F->m_3253 = (*(P146)rt_nil_check(F->ctx_3252)).visible_;
while ((F->m_3253 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3253)).depth_) > ((rt_int)0LL)) && (G_NV((*(P117)rt_nil_check(F->m_3253)).kind_) != ((rt_int)11LL))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3253)).name_)), F->inst_1284)))) {
F->z_3254 = ({ A116 ix3258 = F->up->table_119; ix3258.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3253)).name_))), ix3258.lo, ix3258.hi) - ix3258.lo]; });
F->seen_3255 = 0;
while ((F->z_3254 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->z_3254)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3254)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3253)).name_))))) {
if ((!f_distinct_overload_473(F->up, F->z_3254, F->m_3253))) {
F->seen_3255 = 1;
}
}
F->z_3254 = (*(P117)rt_nil_check(F->z_3254)).chain_;
}
L_end_3259: ;
if ((!G_NV(F->seen_3255))) {
f_copy_sym_1073(F->up, F->m_3253, &F->z_3254);
f_define_476(F->up, F->z_3254, F->line_1283);
}
}
F->m_3253 = (*(P117)rt_nil_check(F->m_3253)).stack_;
}
L_end_3257: ;
ret_:

  return;
}

static P174 f_gactual_1289(struct f_greenc_1fr *up_, P174 args_1286, rt_int nth_1287, rt_gstr name_1288) {
  struct f_gactual_1289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1286 = args_1286;
F->nth_1287 = nth_1287;
F->name_1288 = cp_rt_gstr(name_1288);
F->a_3260 = NULL;
F->a_3260 = F->args_1286;
F->i_3261 = INT64_MIN;
F->i_3261 = ((rt_int)1LL);
while ((F->a_3260 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_3260)).formal_ == NULL) && (G_NV(F->i_3261) == F->nth_1287))) {
F->result_ = F->a_3260;
goto ret_;
}
if ((((*(P174)rt_nil_check(F->a_3260)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3260)).formal_)), F->name_1288))) {
F->result_ = F->a_3260;
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_3260)).formal_ == NULL)) {
F->i_3261 = rt_add(G_NV(F->i_3261), ((rt_int)1LL));
}
F->a_3260 = (*(P174)rt_nil_check(F->a_3260)).next_;
}
L_end_3262: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1293(struct f_greenc_1fr *up_, P174 n_1290, P140 name_1291, P174 *r_1292) {
  struct f_copy_node_1293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1290 = n_1290;
F->name_1291 = name_1291;
F->r_1292 = r_1292;
(*F->r_1292) = f_nn_311(F->up, G_NV((*(P174)rt_nil_check(F->n_1290)).kind_), G_NV((*(P174)rt_nil_check(F->n_1290)).line_));
as_R175(&(*(P174)rt_nil_check((*F->r_1292))), (*(P174)rt_nil_check(F->n_1290)));
(*(P174)rt_nil_check((*F->r_1292))).name_ = F->name_1291;
(*(P174)rt_nil_check((*F->r_1292))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1297(struct f_greenc_1fr *up_, P117 y_1294, rt_gstr name_1295, P117 fs_1296) {
  struct f_matches_formal_1297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1294 = y_1294;
F->name_1295 = cp_rt_gstr(name_1295);
F->fs_1296 = fs_1296;
if (((!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1294)).name_)), F->name_1295)) || ((G_NV((*(P117)rt_nil_check(F->y_1294)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_1294)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_467(F->up, (*(P117)rt_nil_check(F->y_1294)).params_, (*(P117)rt_nil_check(F->fs_1296)).params_) && f_same_453(F->up, (*(P117)rt_nil_check(F->y_1294)).result_, (*(P117)rt_nil_check(F->fs_1296)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_actual_type_1300(struct f_greenc_1fr *up_, P174 a_1298, P117 *y_1299) {
  struct f_actual_type_1300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1298 = a_1298;
F->y_1299 = y_1299;
(*F->y_1299) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->a_1298)).kind_) == ((rt_int)5LL))) {
(*F->y_1299) = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1298)).name_)));
} else if (((G_NV((*(P174)rt_nil_check(F->a_1298)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->a_1298)).a_))) {
(*F->y_1299) = f_member_of_1068(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->a_1298)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1298)).name_)), G_NV((*(P174)rt_nil_check(F->a_1298)).line_));
}
if ((((*F->y_1299) != NULL) && (G_NV((*(P117)rt_nil_check((*F->y_1299))).kind_) != ((rt_int)5LL)))) {
(*F->y_1299) = NULL;
}
ret_:

  return;
}

static void f_actual_subprogram_1305(struct f_greenc_1fr *up_, P174 f_1301, P174 a_1302, rt_int line_1303, P117 *r_1304) {
  struct f_actual_subprogram_1305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1301 = f_1301;
F->a_1302 = a_1302;
F->line_1303 = line_1303;
F->r_1304 = r_1304;
F->fs_3263 = NULL;
F->y_3264 = NULL;
F->name_3265 = NULL;
F->m_3266 = NULL;
(*F->r_1304) = NULL;
f_build_subprogram_665(F->up, (*(P174)rt_nil_check(F->f_1301)).a_, &F->fs_3263);
if ((G_NV((*(P174)rt_nil_check(F->a_1302)).kind_) == ((rt_int)3LL))) {
F->name_3265 = f_mk_237(F->up, f_upper_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_))));
F->y_3264 = ({ A116 ix3267 = F->up->table_119; ix3267.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check(F->name_3265))), ix3267.lo, ix3267.hi) - ix3267.lo]; });
while (((F->y_3264 != NULL) && (!f_matches_formal_1297(F->up, F->y_3264, (*(P140)rt_nil_check(F->name_3265)), F->fs_3263)))) {
F->y_3264 = (*(P117)rt_nil_check(F->y_3264)).chain_;
}
L_end_3268: ;
(*F->r_1304) = F->y_3264;
if ((((*F->r_1304) == NULL) && f_is_operator_252(F->up, (*(P140)rt_nil_check(F->name_3265))))) {
f_wrap_operation_1311(F->up, F->f_1301, (*(P140)rt_nil_check(F->name_3265)), NULL, F->line_1303, &(*F->r_1304));
}
} else if ((G_NV((*(P174)rt_nil_check(F->a_1302)).kind_) == ((rt_int)5LL))) {
F->name_3265 = (*(P174)rt_nil_check(F->a_1302)).name_;
F->y_3264 = ({ A116 ix3269 = F->up->table_119; ix3269.p[rt_index(f_hash_426(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_))), ix3269.lo, ix3269.hi) - ix3269.lo]; });
while (((F->y_3264 != NULL) && (!f_matches_formal_1297(F->up, F->y_3264, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)), F->fs_3263)))) {
F->y_3264 = (*(P117)rt_nil_check(F->y_3264)).chain_;
}
L_end_3270: ;
(*F->r_1304) = F->y_3264;
if ((((*F->r_1304) == NULL) && f_is_operator_252(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_))))) {
f_wrap_operation_1311(F->up, F->f_1301, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)), NULL, F->line_1303, &(*F->r_1304));
}
} else if (((G_NV((*(P174)rt_nil_check(F->a_1302)).kind_) == ((rt_int)9LL)) && f_is_package_1064(F->up, (*(P174)rt_nil_check(F->a_1302)).a_))) {
F->m_3266 = (*(P117)rt_nil_check(f_lookup_path_1062(F->up, f_path_of_354(F->up, (*(P174)rt_nil_check(F->a_1302)).a_)))).members_;
while (((F->m_3266 != NULL) && (!(f_matches_formal_1297(F->up, F->m_3266, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)), F->fs_3263) && (!G_NV((*(P117)rt_nil_check(F->m_3266)).hidden_)))))) {
F->m_3266 = (*(P117)rt_nil_check(F->m_3266)).mnext_;
}
L_end_3271: ;
(*F->r_1304) = F->m_3266;
} else if (((G_NV((*(P174)rt_nil_check(F->a_1302)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).a_)).kind_) == ((rt_int)5LL)))) {
if (f_is_operator_252(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)))) {
f_wrap_operation_1311(F->up, F->f_1301, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)), NULL, F->line_1303, &(*F->r_1304));
} else {
f_wrap_operation_1311(F->up, F->f_1301, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).name_)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_1302)).a_)).name_, F->line_1303, &(*F->r_1304));
}
}
if (((*F->r_1304) == NULL)) {
f_fail_258(F->up, F->line_1303, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram matches generic parameter ", 40), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_1301)).name_))), rt_g_lit(" (RM79 12.2)", 12)));
}
ret_:

  return;
}

static void f_wrap_operation_1311(struct f_greenc_1fr *up_, P174 f_1306, rt_gstr op_1307, P140 type_name_1308, rt_int line_1309, P117 *r_1310) {
  struct f_wrap_operation_1311fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1306 = f_1306;
F->op_1307 = cp_rt_gstr(op_1307);
F->type_name_1308 = type_name_1308;
F->line_1309 = line_1309;
F->r_1310 = r_1310;
F->w_3272 = NULL;
F->p_3273 = NULL;
F->q_3274 = NULL;
F->qt_3275 = NULL;
F->ret_3276 = NULL;
F->x_3277 = NULL;
F->a1_3278 = NULL;
F->a2_3279 = NULL;
F->wname_3280 = NULL;
F->n_3281 = INT64_MIN;
F->n_3281 = ((rt_int)0LL);
F->y_3282 = NULL;
f_new_name_240(F->up, rt_g_lit("$W", 2), &F->wname_3280);
f_copy_node_1293(F->up, (*(P174)rt_nil_check(F->f_1306)).a_, F->wname_3280, &F->w_3272);
if ((G_NV((*(P174)rt_nil_check(F->w_3272)).kind_) != ((rt_int)45LL))) {
f_fail_258(F->up, F->line_1309, rt_g_lit("an operator or an attribute is the actual of a formal function (RM79 12.2)", 74));
}
F->p_3273 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->f_1306)).a_)).a_;
while ((F->p_3273 != NULL)) {
f_copy_node_1293(F->up, F->p_3273, (*(P174)rt_nil_check(F->p_3273)).name_, &F->q_3274);
f_actual_mark_1314(F->up, (*(P174)rt_nil_check(F->p_3273)).a_, &(*(P174)rt_nil_check(F->q_3274)).a_);
if ((F->qt_3275 == NULL)) {
(*(P174)rt_nil_check(F->w_3272)).a_ = F->q_3274;
} else {
(*(P174)rt_nil_check(F->qt_3275)).next_ = F->q_3274;
}
F->qt_3275 = F->q_3274;
F->n_3281 = rt_add(G_NV(F->n_3281), ((rt_int)1LL));
F->p_3273 = (*(P174)rt_nil_check(F->p_3273)).next_;
}
L_end_3283: ;
f_actual_mark_1314(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->f_1306)).a_)).b_, &(*(P174)rt_nil_check(F->w_3272)).b_);
F->a1_3278 = f_nn_311(F->up, ((rt_int)5LL), F->line_1309);
(*(P174)rt_nil_check(F->a1_3278)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->w_3272)).a_)).name_;
if ((F->type_name_1308 != NULL)) {
F->x_3277 = f_nn_311(F->up, ((rt_int)10LL), F->line_1309);
(*(P174)rt_nil_check(F->x_3277)).a_ = f_nn_311(F->up, ((rt_int)5LL), F->line_1309);
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3277)).a_)).name_ = f_mk_237(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check(F->type_name_1308))));
(*(P174)rt_nil_check(F->x_3277)).name_ = f_mk_237(F->up, F->op_1307);
(*(P174)rt_nil_check(F->x_3277)).b_ = F->a1_3278;
} else if ((G_NV(F->n_3281) == ((rt_int)2LL))) {
F->a2_3279 = f_nn_311(F->up, ((rt_int)5LL), F->line_1309);
(*(P174)rt_nil_check(F->a2_3279)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->w_3272)).a_)).next_)).name_;
F->x_3277 = f_binop_346(F->up, f_mk_237(F->up, F->op_1307), F->a1_3278, F->a2_3279, F->line_1309);
} else {
F->x_3277 = f_nn_311(F->up, ((rt_int)6LL), F->line_1309);
(*(P174)rt_nil_check(F->x_3277)).name_ = f_mk_237(F->up, F->op_1307);
(*(P174)rt_nil_check(F->x_3277)).a_ = F->a1_3278;
}
F->ret_3276 = f_nn_311(F->up, ((rt_int)27LL), F->line_1309);
(*(P174)rt_nil_check(F->ret_3276)).a_ = F->x_3277;
(*(P174)rt_nil_check(F->w_3272)).d_ = F->ret_3276;
(*(P174)rt_nil_check(F->w_3272)).c_ = NULL;
(*(P174)rt_nil_check(F->w_3272)).e_ = NULL;
(*(P174)rt_nil_check(F->w_3272)).ival_ = ((rt_int)0LL);
f_build_subprogram_665(F->up, F->w_3272, &F->y_3282);
f_define_476(F->up, F->y_3282, F->line_1309);
f_subprogram_body_712(F->up, F->w_3272, F->y_3282);
(*F->r_1310) = F->y_3282;
ret_:

  return;
}

static void f_actual_mark_1314(struct f_greenc_1fr *up_, P174 st_1312, P174 *r_1313) {
  struct f_actual_mark_1314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_1312 = st_1312;
F->r_1313 = r_1313;
(*F->r_1313) = F->st_1312;
if ((((F->st_1312 != NULL) && (G_NV((*(P174)rt_nil_check(F->st_1312)).kind_) == ((rt_int)80LL))) && ((*(P174)rt_nil_check(F->st_1312)).tag_ == NULL))) {
if ((f_lookup_433(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_1312)).name_)))) != NULL)) {
f_copy_node_1293(F->up, F->st_1312, f_mk_237(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_1312)).name_)))), &(*F->r_1313));
}
}
ret_:

  return;
}

static void f_instantiate_1316(struct f_greenc_1fr *up_, P174 e_1315) {
  struct f_instantiate_1316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1315 = e_1315;
F->g_3284 = NULL;
F->g_3284 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).tag_)));
F->gd_3285 = NULL;
F->pat_3286 = NULL;
F->f_3287 = NULL;
F->a_3288 = NULL;
F->cn_3289 = NULL;
F->rn_3290 = NULL;
F->y_3291 = NULL;
F->z_3292 = NULL;
F->fs_3293 = NULL;
F->nth_3294 = INT64_MIN;
F->nth_3294 = ((rt_int)1LL);
F->t_3295 = NULL;
F->vt_3296 = NULL;
F->c_3297 = NULL;
F->v_3298 = NULL;
F->acc_3299 = NULL;
F->x_3300 = NULL;
F->ok_3301 = INT_MIN;
F->g_3284 = f_lookup_path_1062(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).tag_)));
if (((F->g_3284 == NULL) || (G_NV((*(P117)rt_nil_check(F->g_3284)).kind_) != ((rt_int)11LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3285 = (*(P117)rt_nil_check(F->g_3284)).decl_;
F->pat_3286 = (*(P174)rt_nil_check(F->gd_3285)).b_;
f_open_scope_477(F->up);
F->up->in_instance_210 = rt_add(G_NV(F->up->in_instance_210), ((rt_int)1LL));
F->f_3287 = (*(P174)rt_nil_check(F->gd_3285)).a_;
while ((F->f_3287 != NULL)) {
F->a_3288 = f_gactual_1289(F->up, (*(P174)rt_nil_check(F->e_1315)).a_, G_NV(F->nth_3294), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_)));
F->nth_3294 = rt_add(G_NV(F->nth_3294), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check(F->f_3287)).ival_) == ((rt_int)10LL))) {
if ((F->a_3288 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
}
f_actual_type_1300(F->up, F->a_3288, &F->y_3291);
if ((F->y_3291 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3291)).t_)).is_restricted_) && (G_NV((*(P174)rt_nil_check(F->f_3287)).flag_) != ((rt_int)9LL)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a restricted type does not match the formal type ", 49), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))), rt_g_lit(", which is not restricted (RM79 12.2)", 37)));
}
f_copy_sym_1073(F->up, F->y_3291, &F->z_3292);
(*(P117)rt_nil_check(F->z_3292)).name_ = f_mk_237(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
f_define_476(F->up, F->z_3292, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
f_copy_sym_1073(F->up, F->y_3291, &F->z_3292);
(*(P117)rt_nil_check(F->z_3292)).name_ = (*(P174)rt_nil_check(F->f_3287)).name_;
(*(P117)rt_nil_check(F->z_3292)).t_ = f_new_typ_483(F->up, G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3291)).t_)).kind_));
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3292)).t_)), (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3291)).t_)));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3292)).t_)).view_of_ = (*(P117)rt_nil_check(F->y_3291)).t_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3292)).t_)).name_ = (*(P174)rt_nil_check(F->f_3287)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3292)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->f_3287)).flag_) == ((rt_int)9LL));
f_define_476(F->up, F->z_3292, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->f_3287)).ival_) == ((rt_int)11LL))) {
if ((F->a_3288 == NULL)) {
F->a_3288 = (*(P174)rt_nil_check(F->f_3287)).b_;
}
if ((F->a_3288 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
}
f_actual_subprogram_1305(F->up, F->f_3287, F->a_3288, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), &F->y_3291);
f_copy_sym_1073(F->up, F->y_3291, &F->z_3292);
(*(P117)rt_nil_check(F->z_3292)).name_ = (*(P174)rt_nil_check(F->f_3287)).name_;
f_define_476(F->up, F->z_3292, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
} else if (((G_NV((*(P174)rt_nil_check(F->f_3287)).flag_) == ((rt_int)3LL)) || (G_NV((*(P174)rt_nil_check(F->f_3287)).flag_) == ((rt_int)2LL)))) {
if ((F->a_3288 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(rt_g_lit("no actual variable for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
}
if (((G_NV((*(P174)rt_nil_check(F->a_3288)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_3288)).flag_) != G_NV((*(P174)rt_nil_check(F->f_3287)).flag_)))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))), rt_g_lit(" does not match its mode (RM79 12.2)", 36)));
}
F->rn_3290 = f_nn_311(F->up, ((rt_int)40LL), G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
(*(P174)rt_nil_check(F->rn_3290)).name_ = (*(P174)rt_nil_check(F->f_3287)).name_;
(*(P174)rt_nil_check(F->rn_3290)).a_ = (*(P174)rt_nil_check(F->f_3287)).a_;
(*(P174)rt_nil_check(F->rn_3290)).flag_ = ((rt_int)2LL);
(*(P174)rt_nil_check(F->rn_3290)).b_ = F->a_3288;
f_decl_element_669(F->up, F->rn_3290);
} else {
if ((F->a_3288 == NULL)) {
F->a_3288 = (*(P174)rt_nil_check(F->f_3287)).b_;
}
if ((F->a_3288 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_))));
}
f_resolve_519(F->up, (*(P174)rt_nil_check(F->f_3287)).a_, &F->t_3295, &F->c_3297);
f_gexpr_825(F->up, F->a_3288, F->t_3295, &F->vt_3296, &F->v_3298);
f_check_type_498(F->up, F->vt_3296, F->t_3295, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
F->z_3292 = f_new_sym_481(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->f_3287)).name_);
f_storage_650(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3287)).name_)), F->t_3295, &F->acc_3299);
f_copy_code_635(F->up, F->t_3295, (*(P140)rt_nil_check(F->v_3298)), &F->x_3300);
f_emit_264(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_3299)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_3300))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_3292)).t_ = F->t_3295;
(*(P117)rt_nil_check(F->z_3292)).c_ = F->c_3297;
(*(P117)rt_nil_check(F->z_3292)).ro_ = 1;
if ((G_NV((*(P122)rt_nil_check(F->t_3295)).kind_) == ((rt_int)1LL))) {
f_manifest_515(F->up, F->a_3288, &(*(P117)rt_nil_check(F->z_3292)).mvalue_, &F->ok_3301);
 (void)rt_range(F->ok_3301, 0, 1);
(*(P117)rt_nil_check(F->z_3292)).hasmv_ = G_NV(F->ok_3301);
}
f_bind_653(F->up, F->z_3292, F->acc_3299);
f_define_476(F->up, F->z_3292, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
}
F->f_3287 = (*(P174)rt_nil_check(F->f_3287)).next_;
}
L_end_3302: ;
if (((*(P174)rt_nil_check(F->gd_3285)).c_ != NULL)) {
f_restore_generic_context_1285(F->up, (*(P174)rt_nil_check(F->gd_3285)).c_, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).name_)));
}
if (((G_NV((*(P174)rt_nil_check(F->pat_3286)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->pat_3286)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->pat_3286)).ival_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->gd_3285)).c_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3286 = (*(P174)rt_nil_check(F->gd_3285)).c_;
}
f_copy_node_1293(F->up, F->pat_3286, (*(P174)rt_nil_check(F->e_1315)).name_, &F->cn_3289);
f_build_subprogram_665(F->up, F->cn_3289, &F->y_3291);
f_define_476(F->up, F->y_3291, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
f_subprogram_body_712(F->up, F->cn_3289, F->y_3291);
} else if ((G_NV((*(P174)rt_nil_check(F->pat_3286)).kind_) == ((rt_int)48LL))) {
f_copy_node_1293(F->up, F->pat_3286, (*(P174)rt_nil_check(F->e_1315)).name_, &F->cn_3289);
f_package_spec_1078(F->up, F->cn_3289);
F->y_3291 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).name_)));
if (((*(P174)rt_nil_check(F->gd_3285)).c_ != NULL)) {
f_copy_node_1293(F->up, (*(P174)rt_nil_check(F->gd_3285)).c_, (*(P174)rt_nil_check(F->e_1315)).name_, &F->cn_3289);
f_package_body_1083(F->up, F->cn_3289);
}
} else {
f_copy_node_1293(F->up, F->pat_3286, (*(P174)rt_nil_check(F->e_1315)).name_, &F->cn_3289);
f_task_spec_1182(F->up, F->cn_3289);
F->y_3291 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).name_)));
if (((*(P174)rt_nil_check(F->gd_3285)).c_ == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->e_1315)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1315)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1293(F->up, (*(P174)rt_nil_check(F->gd_3285)).c_, (*(P174)rt_nil_check(F->e_1315)).name_, &F->cn_3289);
f_task_body_1186(F->up, F->cn_3289);
}
F->up->in_instance_210 = rt_sub(G_NV(F->up->in_instance_210), ((rt_int)1LL));
f_close_scope_478(F->up);
f_define_476(F->up, F->y_3291, G_NV((*(P174)rt_nil_check(F->e_1315)).line_));
ret_:

  return;
}

static void f_predef_type_1321(struct f_greenc_1fr *up_, rt_gstr name_1317, P122 t_1318, rt_gstr lo_1319, rt_gstr hi_1320) {
  struct f_predef_type_1321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1317 = cp_rt_gstr(name_1317);
F->t_1318 = t_1318;
F->lo_1319 = cp_rt_gstr(lo_1319);
F->hi_1320 = cp_rt_gstr(hi_1320);
F->y_3303 = NULL;
F->y_3303 = f_new_sym_481(F->up, ((rt_int)5LL), f_mk_237(F->up, F->name_1317));
(*(P117)rt_nil_check(F->y_3303)).t_ = F->t_1318;
if ((({ rt_gstr at3304 = F->lo_1319; at3304.hi >= at3304.lo ? at3304.hi - at3304.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P117)rt_nil_check(F->y_3303)).c_ = f_new_cons_484(F->up);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3303)).c_)).lo_ = f_mk_237(F->up, F->lo_1319);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3303)).c_)).hi_ = f_mk_237(F->up, F->hi_1320);
if (((({ rt_gstr at3305 = F->hi_1320; at3305.hi >= at3305.lo ? at3305.hi - at3305.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_244(F->up, G_NV(({ rt_gstr ix3309 = F->hi_1320; ix3309.p[rt_index(({ rt_gstr at3308 = F->hi_1320; at3308.lo; }), ix3309.lo, ix3309.hi) - ix3309.lo]; }))))) {
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3303)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1319));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3303)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1320));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3303)).c_)).hasm_ = 1;
}
}
f_define_476(F->up, F->y_3303, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1325(struct f_greenc_1fr *up_, rt_gstr name_1322, P122 t_1323, rt_gstr code_text_1324) {
  struct f_predef_const_1325fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1322 = cp_rt_gstr(name_1322);
F->t_1323 = t_1323;
F->code_text_1324 = cp_rt_gstr(code_text_1324);
F->y_3310 = NULL;
F->y_3310 = f_new_sym_481(F->up, ((rt_int)2LL), f_mk_237(F->up, F->name_1322));
(*(P117)rt_nil_check(F->y_3310)).t_ = F->t_1323;
(*(P117)rt_nil_check(F->y_3310)).ro_ = 1;
(*(P117)rt_nil_check(F->y_3310)).access_path_ = f_mk_237(F->up, F->code_text_1324);
f_define_476(F->up, F->y_3310, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1327(struct f_greenc_1fr *up_, rt_gstr name_1326) {
  struct f_predef_exc_1327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1326 = cp_rt_gstr(name_1326);
F->y_3311 = NULL;
F->y_3311 = f_new_sym_481(F->up, ((rt_int)6LL), f_mk_237(F->up, F->name_1326));
(*(P117)rt_nil_check(F->y_3311)).cname_ = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_255(F->up)), F->name_1326), f_q_255(F->up)), one_rt_gstr(41)));
f_define_476(F->up, F->y_3311, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1331(struct f_greenc_1fr *up_, rt_gstr name_1328, P122 t_1329, rt_int v_1330) {
  struct f_predef_lit_1331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1328 = cp_rt_gstr(name_1328);
F->t_1329 = t_1329;
F->v_1330 = v_1330;
F->y_3312 = NULL;
F->y_3312 = f_new_sym_481(F->up, ((rt_int)7LL), f_mk_237(F->up, F->name_1328));
(*(P117)rt_nil_check(F->y_3312)).t_ = F->t_1329;
(*(P117)rt_nil_check(F->y_3312)).result_ = F->t_1329;
(*(P117)rt_nil_check(F->y_3312)).mvalue_ = F->v_1330;
(*(P117)rt_nil_check(F->y_3312)).hasmv_ = 1;
f_define_476(F->up, F->y_3312, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1332(struct f_greenc_1fr *up_) {
  struct f_predefine_1332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3313 = NULL;
F->control_3314 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3315 = INT64_MIN;
F->start_3315 = ((rt_int)1LL);
F->code_no_3316 = INT64_MIN;
F->code_no_3316 = ((rt_int)0LL);
f_predef_type_1321(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_156, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_156, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1321(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_156, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1321(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_157, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1321(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_159, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1321(F->up, rt_g_lit("STRING", 6), F->up->ty_string_160, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_158, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1321(F->up, rt_g_lit("TIME", 4), F->up->ty_time_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1331(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_157, ((rt_int)0LL));
f_predef_lit_1331(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_157, ((rt_int)1LL));
{ rt_int lo3320 = ((rt_int)1LL), hi3321 = ({ rt_gstr at3318 = F->control_3314; at3318.hi >= at3318.lo ? at3318.hi - at3318.lo + 1 : (rt_int)0; });
for (rt_int it3322 = lo3320; it3322 <= hi3321; it3322++) {
F->i_3319 = it3322;
if ((G_NV(({ rt_gstr ix3323 = F->control_3314; ix3323.p[rt_index(F->i_3319, ix3323.lo, ix3323.hi) - ix3323.lo]; })) == 32)) {
f_predef_const_1325(F->up, ({ rt_gstr sl3325 = F->control_3314; rt_int l_ = G_NV(F->start_3315), h_ = rt_sub(F->i_3319, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3325.lo, sl3325.hi); rt_index(h_, sl3325.lo, sl3325.hi); } sl3325.p += l_ - sl3325.lo; sl3325.lo = l_; sl3325.hi = h_; sl3325; }), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3316))));
F->code_no_3316 = rt_add(G_NV(F->code_no_3316), ((rt_int)1LL));
F->start_3315 = rt_add(F->i_3319, ((rt_int)1LL));
}
}
}
L_end_3317: ;
f_predef_const_1325(F->up, rt_g_lit("DEL", 3), F->up->ty_char_159, rt_g_lit("127", 3));
f_predef_const_1325(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_159, rt_g_lit("33", 2));
f_predef_const_1325(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_159, rt_g_lit("36", 2));
f_predef_const_1325(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_159, rt_g_lit("63", 2));
f_predef_const_1325(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_159, rt_g_lit("64", 2));
f_predef_const_1325(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_159, rt_g_lit("91", 2));
f_predef_const_1325(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_159, rt_g_lit("92", 2));
f_predef_const_1325(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_159, rt_g_lit("93", 2));
f_predef_const_1325(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_159, rt_g_lit("94", 2));
f_predef_const_1325(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_159, rt_g_lit("96", 2));
f_predef_const_1325(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_159, rt_g_lit("123", 3));
f_predef_const_1325(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_159, rt_g_lit("125", 3));
f_predef_const_1325(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_159, rt_g_lit("126", 3));
{ rt_int lo3328 = ((rt_int)0LL), hi3329 = ((rt_int)25LL);
for (rt_int it3330 = lo3328; it3330 <= hi3329; it3330++) {
F->i_3327 = it3330;
f_predef_const_1325(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3327) - 1), 0, 127))), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3327))));
}
}
L_end_3326: ;
f_predef_const_1325(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_160, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_255(F->up)), rt_g_lit("\\n", 2)), f_q_255(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1325(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_171, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1327(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1327(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1327(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1327(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1327(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1327(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1327(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1327(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1327(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1327(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1327(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1327(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1327(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1327(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1327(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1327(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3313 = f_new_sym_481(F->up, ((rt_int)8LL), f_mk_237(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_476(F->up, F->y_3313, ((rt_int)0LL));
(*(P117)rt_nil_check(F->y_3313)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_lib_open_1335(struct f_greenc_1fr *up_, rt_gstr key_1333, rt_int *length_1334) {
  struct f_lib_open_1335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1333 = cp_rt_gstr(key_1333);
F->length_1334 = length_1334;
rt_g_lib_open(rt_g_g2s(F->key_1333), F->length_1334);
ret_:

  return;
}

static void f_lib_store_1338(struct f_greenc_1fr *up_, rt_gstr key_1336, rt_gstr contents_1337) {
  struct f_lib_store_1338fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1336 = cp_rt_gstr(key_1336);
F->contents_1337 = cp_rt_gstr(contents_1337);
rt_g_lib_store(rt_g_g2s(F->key_1336), rt_g_g2s(F->contents_1337));
ret_:

  return;
}

static void f_unit_key_1341(struct f_greenc_1fr *up_, P174 u_1339, P140 *r_1340) {
  struct f_unit_key_1341fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1339 = u_1339;
F->r_1340 = r_1340;
F->k_3331 = INT64_MIN;
F->k_3331 = ((rt_int)2LL);
if ((((*(P174)rt_nil_check(F->u_1339)).formal_ != NULL) && ((G_NV(({ rt_gstr ix3332 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).formal_)); ix3332.p[rt_index(((rt_int)1LL), ix3332.lo, ix3332.hi) - ix3332.lo]; })) == 33) || (G_NV(({ rt_gstr ix3333 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).formal_)); ix3333.p[rt_index(((rt_int)1LL), ix3333.lo, ix3333.hi) - ix3333.lo]; })) == 35)))) {
while (((G_NV(F->k_3331) < ({ rt_gstr at3335 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).formal_)); at3335.hi >= at3335.lo ? at3335.hi - at3335.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3336 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).formal_)); ix3336.p[rt_index(rt_add(G_NV(F->k_3331), ((rt_int)1LL)), ix3336.lo, ix3336.hi) - ix3336.lo]; })) != 44))) {
F->k_3331 = rt_add(G_NV(F->k_3331), ((rt_int)1LL));
}
L_end_3334: ;
(*F->r_1340) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl3338 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).formal_)); rt_int l_ = ((rt_int)3LL), h_ = G_NV(F->k_3331); if (l_ <= h_) { rt_index(l_, sl3338.lo, sl3338.hi); rt_index(h_, sl3338.lo, sl3338.hi); } sl3338.p += l_ - sl3338.lo; sl3338.lo = l_; sl3338.hi = h_; sl3338; }), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).name_))), rt_g_lit(".sub", 4)));
} else if ((((((G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)48LL)) || (G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)54LL))) || (G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)53LL))) || (((G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_1339)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->u_1339)).ival_) == ((rt_int)1LL))))) {
(*F->r_1340) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).name_)), rt_g_lit(".spec", 5)));
} else {
(*F->r_1340) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1339)).name_)), rt_g_lit(".body", 5)));
}
ret_:

  return;
}

static void f_lib_enabled_1343(struct f_greenc_1fr *up_, int *yes_1342) {
  struct f_lib_enabled_1343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->yes_1342 = yes_1342;
rt_g_lib_enabled(F->yes_1342);
ret_:

  return;
}

static void f_store_units_1344(struct f_greenc_1fr *up_) {
  struct f_store_units_1344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_3339 = NULL;
F->s_3339 = F->up->spans_206;
F->k_3340 = NULL;
F->yes_3341 = INT_MIN;
f_lib_enabled_1343(F->up, &F->yes_3341);
 (void)rt_range(F->yes_3341, 0, 1);
if ((!G_NV(F->yes_3341))) {
goto ret_;
}
while ((F->s_3339 != NULL)) {
f_unit_key_1341(F->up, (*(P204)rt_nil_check(F->s_3339)).u_, &F->k_3340);
f_store_span_1347(F->up, F->s_3339, (*(P140)rt_nil_check(F->k_3340)));
F->s_3339 = (*(P204)rt_nil_check(F->s_3339)).next_;
}
L_end_3342: ;
ret_:

  return;
}

static void f_store_span_1347(struct f_greenc_1fr *up_, P204 s_1345, rt_gstr key_1346) {
  struct f_store_span_1347fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1345 = s_1345;
F->key_1346 = cp_rt_gstr(key_1346);
F->n_3343 = INT64_MIN;
F->n_3343 = ((rt_int)0LL);
F->head_3344 = NULL;
F->head_3344 = f_mk_237(F->up, rt_g_lit("", 0));
if ((({ rt_gstr at3345 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1345)).env_)); at3345.hi >= at3345.lo ? at3345.hi - at3345.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->head_3344 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ENVIRONMENT(", 19), ({ rt_gstr sl3349 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1345)).env_)); rt_int l_ = ((rt_int)1LL), h_ = rt_sub(({ rt_gstr at3348 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1345)).env_)); at3348.hi >= at3348.lo ? at3348.hi - at3348.lo + 1 : (rt_int)0; }), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3349.lo, sl3349.hi); rt_index(h_, sl3349.lo, sl3349.hi); } sl3349.p += l_ - sl3349.lo; sl3349.lo = l_; sl3349.hi = h_; sl3349; })), rt_g_lit(");", 2)), one_rt_gstr(10)));
}
F->n_3343 = ({ rt_gstr at3350 = (*(P140)rt_nil_check(F->head_3344)); at3350.hi >= at3350.lo ? at3350.hi - at3350.lo + 1 : (rt_int)0; });
{ rt_int lo3353 = G_NV((*(P204)rt_nil_check(F->s_1345)).first_), hi3354 = G_NV((*(P204)rt_nil_check(F->s_1345)).last_);
for (rt_int it3355 = lo3353; it3355 <= hi3354; it3355++) {
F->l_3352 = it3355;
F->n_3343 = rt_add(rt_add(G_NV(F->n_3343), ({ rt_gstr at3357 = (*(P140)rt_nil_check(({ A202 ix3356 = F->up->src_lines_203; ix3356.p[rt_index(F->l_3352, ix3356.lo, ix3356.hi) - ix3356.lo]; }))); at3357.hi >= at3357.lo ? at3357.hi - at3357.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
}
}
L_end_3351: ;
{
F->t_3359.lo = ((rt_int)1LL); F->t_3359.hi = G_NV(F->n_3343);
F->t_3359.lo2 = 1; F->t_3359.hi2 = 1;
F->t_3359.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_3359));
memset(F->t_3359.p, 0xFF, (size_t)G_CNT(F->t_3359));
F->k_3361 = INT64_MIN;
F->k_3361 = ({ rt_gstr at3362 = (*(P140)rt_nil_check(F->head_3344)); at3362.hi >= at3362.lo ? at3362.hi - at3362.lo + 1 : (rt_int)0; });
{ rt_gstr sl_ = ({ rt_gstr sl3363 = F->t_3359; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->k_3361); if (l_ <= h_) { rt_index(l_, sl3363.lo, sl3363.hi); rt_index(h_, sl3363.lo, sl3363.hi); } sl3363.p += l_ - sl3363.lo; sl3363.lo = l_; sl3363.hi = h_; sl3363; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(F->head_3344))); }
{ rt_int lo3366 = G_NV((*(P204)rt_nil_check(F->s_1345)).first_), hi3367 = G_NV((*(P204)rt_nil_check(F->s_1345)).last_);
for (rt_int it3368 = lo3366; it3368 <= hi3367; it3368++) {
F->l_3365 = it3368;
{ rt_gstr sl_ = ({ rt_gstr sl3371 = F->t_3359; rt_int l_ = rt_add(G_NV(F->k_3361), ((rt_int)1LL)), h_ = rt_add(G_NV(F->k_3361), ({ rt_gstr at3370 = (*(P140)rt_nil_check(({ A202 ix3369 = F->up->src_lines_203; ix3369.p[rt_index(F->l_3365, ix3369.lo, ix3369.hi) - ix3369.lo]; }))); at3370.hi >= at3370.lo ? at3370.hi - at3370.lo + 1 : (rt_int)0; })); if (l_ <= h_) { rt_index(l_, sl3371.lo, sl3371.hi); rt_index(h_, sl3371.lo, sl3371.hi); } sl3371.p += l_ - sl3371.lo; sl3371.lo = l_; sl3371.hi = h_; sl3371; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(({ A202 ix3372 = F->up->src_lines_203; ix3372.p[rt_index(F->l_3365, ix3372.lo, ix3372.hi) - ix3372.lo]; })))); }
F->k_3361 = rt_add(rt_add(G_NV(F->k_3361), ({ rt_gstr at3374 = (*(P140)rt_nil_check(({ A202 ix3373 = F->up->src_lines_203; ix3373.p[rt_index(F->l_3365, ix3373.lo, ix3373.hi) - ix3373.lo]; }))); at3374.hi >= at3374.lo ? at3374.hi - at3374.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
(*({ rt_gstr *ix3375 = &(F->t_3359); &ix3375->p[rt_index(G_NV(F->k_3361), ix3375->lo, ix3375->hi) - ix3375->lo]; })) = 10;
}
}
L_end_3364: ;
f_lib_store_1338(F->up, F->key_1346, F->t_3359);

}
L_end_3358: ;
ret_:

  return;
}

static void f_lib_load_1350(struct f_greenc_1fr *up_, rt_gstr key_1348, P174 *r_1349) {
  struct f_lib_load_1350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1348 = cp_rt_gstr(key_1348);
F->r_1349 = r_1349;
F->n_3376 = INT64_MIN;
F->saved_line_3377 = INT64_MIN;
F->saved_line_3377 = G_NV(F->up->src_line_115);
F->saved_pos_3378 = INT64_MIN;
F->saved_pos_3378 = G_NV(F->up->tpos_114);
F->from_3379 = INT64_MIN;
(*F->r_1349) = NULL;
f_lib_open_1335(F->up, F->key_1348, &F->n_3376);
if ((G_NV(F->n_3376) < ((rt_int)0LL))) {
goto ret_;
}
F->from_3379 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
f_include_text_303(F->up, G_NV(F->n_3376));
f_add_token_275(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_114 = G_NV(F->from_3379);
f_compilation_424(F->up, &(*F->r_1349));
F->up->tpos_114 = G_NV(F->saved_pos_3378);
F->up->src_line_115 = G_NV(F->saved_line_3377);
ret_:

  return;
}

static int f_defined_unit_1353(struct f_greenc_1fr *up_, rt_gstr name_1351, P174 before_1352) {
  struct f_defined_unit_1353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1351 = cp_rt_gstr(name_1351);
F->before_1352 = before_1352;
F->u_3380 = NULL;
F->u_3380 = F->up->units_220;
if (f_listed_429(F->up, F->up->loaded_208, F->name_1351)) {
F->result_ = 1;
goto ret_;
}
while (((F->u_3380 != NULL) && (F->u_3380 != F->before_1352))) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3380)).name_)), F->name_1351) && (G_NV(({ rt_gstr ix3382 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3380)).formal_)); ix3382.p[rt_index(((rt_int)1LL), ix3382.lo, ix3382.hi) - ix3382.lo]; })) != 33))) {
F->result_ = 1;
goto ret_;
}
F->u_3380 = (*(P174)rt_nil_check(F->u_3380)).next_;
}
L_end_3381: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_library_units_1354(struct f_greenc_1fr *up_) {
  struct f_library_units_1354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_3383 = NULL;
F->prev_3384 = NULL;
F->l_3385 = NULL;
F->ltail_3386 = NULL;
F->i_3387 = INT64_MIN;
F->j_3388 = INT64_MIN;
F->n_3389 = NULL;
F->f_3390 = NULL;
F->changed_3391 = INT_MIN;
F->changed_3391 = 1;
while (G_NV(F->changed_3391)) {
F->changed_3391 = 0;
F->p_3383 = F->up->units_220;
F->prev_3384 = NULL;
while (((F->p_3383 != NULL) && (!G_NV(F->changed_3391)))) {
F->f_3390 = (*(P174)rt_nil_check(F->p_3383)).formal_;
F->i_3387 = ((rt_int)1LL);
if (((G_NV(({ rt_gstr ix3394 = (*(P140)rt_nil_check(F->f_3390)); ix3394.p[rt_index(((rt_int)1LL), ix3394.lo, ix3394.hi) - ix3394.lo]; })) == 33) || (G_NV(({ rt_gstr ix3395 = (*(P140)rt_nil_check(F->f_3390)); ix3395.p[rt_index(((rt_int)1LL), ix3395.lo, ix3395.hi) - ix3395.lo]; })) == 35))) {
F->i_3387 = ((rt_int)2LL);
}
while (((G_NV(F->i_3387) < ({ rt_gstr at3397 = (*(P140)rt_nil_check(F->f_3390)); at3397.hi >= at3397.lo ? at3397.hi - at3397.lo + 1 : (rt_int)0; })) && (!G_NV(F->changed_3391)))) {
F->j_3388 = rt_add(G_NV(F->i_3387), ((rt_int)1LL));
while (((G_NV(F->j_3388) <= ({ rt_gstr at3399 = (*(P140)rt_nil_check(F->f_3390)); at3399.hi >= at3399.lo ? at3399.hi - at3399.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3400 = (*(P140)rt_nil_check(F->f_3390)); ix3400.p[rt_index(G_NV(F->j_3388), ix3400.lo, ix3400.hi) - ix3400.lo]; })) != 44))) {
F->j_3388 = rt_add(G_NV(F->j_3388), ((rt_int)1LL));
}
L_end_3398: ;
if ((G_NV(F->j_3388) > rt_add(G_NV(F->i_3387), ((rt_int)1LL)))) {
F->n_3389 = f_mk_237(F->up, ({ rt_gstr sl3402 = (*(P140)rt_nil_check(F->f_3390)); rt_int l_ = rt_add(G_NV(F->i_3387), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3388), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3402.lo, sl3402.hi); rt_index(h_, sl3402.lo, sl3402.hi); } sl3402.p += l_ - sl3402.lo; sl3402.lo = l_; sl3402.hi = h_; sl3402; }));
if (((f_lookup_433(F->up, (*(P140)rt_nil_check(F->n_3389))) == NULL) && (!f_defined_unit_1353(F->up, (*(P140)rt_nil_check(F->n_3389)), F->p_3383)))) {
f_load_unit_1357(F->up, (*(P140)rt_nil_check(F->n_3389)), &F->l_3385);
if ((F->l_3385 == NULL)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->p_3383)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->n_3389)), rt_g_lit(", named by ", 11)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3383)).name_))), rt_g_lit(", is neither compiled before it nor in ", 39)), rt_g_lit("the program library (RM79 10.3)", 31)));
}
F->up->loaded_208 = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->loaded_208)), (*(P140)rt_nil_check(F->n_3389))), one_rt_gstr(44)));
F->ltail_3386 = F->l_3385;
while (((*(P174)rt_nil_check(F->ltail_3386)).next_ != NULL)) {
F->ltail_3386 = (*(P174)rt_nil_check(F->ltail_3386)).next_;
}
L_end_3403: ;
(*(P174)rt_nil_check(F->ltail_3386)).next_ = F->p_3383;
if ((F->prev_3384 == NULL)) {
F->up->units_220 = F->l_3385;
} else {
(*(P174)rt_nil_check(F->prev_3384)).next_ = F->l_3385;
}
F->changed_3391 = 1;
}
}
F->i_3387 = G_NV(F->j_3388);
}
L_end_3396: ;
F->prev_3384 = F->p_3383;
F->p_3383 = (*(P174)rt_nil_check(F->p_3383)).next_;
}
L_end_3393: ;
}
L_end_3392: ;
ret_:

  return;
}

static void f_load_unit_1357(struct f_greenc_1fr *up_, rt_gstr name_1355, P174 *r_1356) {
  struct f_load_unit_1357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1355 = cp_rt_gstr(name_1355);
F->r_1356 = r_1356;
F->s_3404 = NULL;
F->b_3405 = NULL;
F->t_3406 = NULL;
f_lib_load_1350(F->up, cat_rt_gstr(F->name_1355, rt_g_lit(".spec", 5)), &F->s_3404);
f_lib_load_1350(F->up, cat_rt_gstr(F->name_1355, rt_g_lit(".body", 5)), &F->b_3405);
if ((F->s_3404 == NULL)) {
(*F->r_1356) = F->b_3405;
goto ret_;
}
F->t_3406 = F->s_3404;
while (((*(P174)rt_nil_check(F->t_3406)).next_ != NULL)) {
F->t_3406 = (*(P174)rt_nil_check(F->t_3406)).next_;
}
L_end_3407: ;
(*(P174)rt_nil_check(F->t_3406)).next_ = F->b_3405;
(*F->r_1356) = F->s_3404;
ret_:

  return;
}

static void f_prelude_1358(struct f_greenc_1fr *up_) {
  struct f_prelude_1358fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_lex_line_286(F->up, rt_g_lit("generic task SIGNAL is entry SEND; entry WAIT; end SIGNAL;", 58));
f_lex_line_286(F->up, rt_g_lit("task body SIGNAL is RECEIVED : BOOLEAN := FALSE; begin loop select accept SEND;", 79));
f_lex_line_286(F->up, rt_g_lit("RECEIVED := TRUE; or when RECEIVED => accept WAIT; RECEIVED := FALSE; end select;", 81));
f_lex_line_286(F->up, rt_g_lit("end loop; end SIGNAL;", 21));
f_lex_line_286(F->up, rt_g_lit("generic task SEMAPHORE is entry P; entry V; end SEMAPHORE;", 58));
f_lex_line_286(F->up, rt_g_lit("task body SEMAPHORE is begin loop accept P; accept V; end loop; end SEMAPHORE;", 78));
ret_:

  return;
}

static void f_used_units_1361(struct f_greenc_1fr *up_, P174 u_1359, P140 *r_1360) {
  struct f_used_units_1361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1359 = u_1359;
F->r_1360 = r_1360;
F->p_3408 = NULL;
F->p_3408 = F->u_1359;
F->main_3409 = NULL;
F->changed_3410 = INT_MIN;
F->changed_3410 = 1;
while ((F->p_3408 != NULL)) {
if ((G_NV(({ rt_gstr ix3412 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)); ix3412.p[rt_index(((rt_int)1LL), ix3412.lo, ix3412.hi) - ix3412.lo]; })) != 33)) {
F->main_3409 = F->p_3408;
}
F->p_3408 = (*(P174)rt_nil_check(F->p_3408)).next_;
}
L_end_3411: ;
(*F->r_1360) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(44), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3409)).name_))), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3409)).formal_))));
F->p_3408 = F->u_1359;
while ((F->p_3408 != NULL)) {
if ((G_NV(({ rt_gstr ix3414 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)); ix3414.p[rt_index(((rt_int)1LL), ix3414.lo, ix3414.hi) - ix3414.lo]; })) == 33)) {
(*F->r_1360) = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1360))), ({ rt_gstr sl3418 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at3417 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)); at3417.hi >= at3417.lo ? at3417.hi - at3417.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl3418.lo, sl3418.hi); rt_index(h_, sl3418.lo, sl3418.hi); } sl3418.p += l_ - sl3418.lo; sl3418.lo = l_; sl3418.hi = h_; sl3418; })));
}
F->p_3408 = (*(P174)rt_nil_check(F->p_3408)).next_;
}
L_end_3413: ;
while (G_NV(F->changed_3410)) {
F->changed_3410 = 0;
F->p_3408 = F->u_1359;
while ((F->p_3408 != NULL)) {
if (((G_NV(({ rt_gstr ix3421 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)); ix3421.p[rt_index(((rt_int)1LL), ix3421.lo, ix3421.hi) - ix3421.lo]; })) != 33) && f_listed_429(F->up, (*F->r_1360), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).name_))))) {
f_add_names_1365(F->up, &(*F->r_1360), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3408)).formal_)), &F->changed_3410);
 (void)rt_range(F->changed_3410, 0, 1);
}
F->p_3408 = (*(P174)rt_nil_check(F->p_3408)).next_;
}
L_end_3420: ;
}
L_end_3419: ;
ret_:

  return;
}

static void f_add_names_1365(struct f_greenc_1fr *up_, P140 *r_1362, rt_gstr list_1363, int *changed_1364) {
  struct f_add_names_1365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1362 = r_1362;
F->list_1363 = cp_rt_gstr(list_1363);
F->changed_1364 = changed_1364;
F->i_3422 = INT64_MIN;
F->i_3422 = ({ rt_gstr at3423 = F->list_1363; at3423.lo; });
F->j_3424 = INT64_MIN;
F->j_3424 = ({ rt_gstr at3425 = F->list_1363; at3425.lo; });
while ((G_NV(F->i_3422) < ({ rt_gstr at3427 = F->list_1363; at3427.hi; }))) {
F->j_3424 = rt_add(G_NV(F->i_3422), ((rt_int)1LL));
while (((G_NV(F->j_3424) <= ({ rt_gstr at3429 = F->list_1363; at3429.hi; })) && (G_NV(({ rt_gstr ix3430 = F->list_1363; ix3430.p[rt_index(G_NV(F->j_3424), ix3430.lo, ix3430.hi) - ix3430.lo]; })) != 44))) {
F->j_3424 = rt_add(G_NV(F->j_3424), ((rt_int)1LL));
}
L_end_3428: ;
if ((G_NV(F->j_3424) > rt_add(G_NV(F->i_3422), ((rt_int)1LL)))) {
if ((!f_listed_429(F->up, (*F->r_1362), ({ rt_gstr sl3432 = F->list_1363; rt_int l_ = rt_add(G_NV(F->i_3422), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3424), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3432.lo, sl3432.hi); rt_index(h_, sl3432.lo, sl3432.hi); } sl3432.p += l_ - sl3432.lo; sl3432.lo = l_; sl3432.hi = h_; sl3432; })))) {
(*F->r_1362) = f_mk_237(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1362))), ({ rt_gstr sl3434 = F->list_1363; rt_int l_ = rt_add(G_NV(F->i_3422), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3424), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3434.lo, sl3434.hi); rt_index(h_, sl3434.lo, sl3434.hi); } sl3434.p += l_ - sl3434.lo; sl3434.lo = l_; sl3434.hi = h_; sl3434; })), one_rt_gstr(44)));
(*F->changed_1364) = 1;
}
}
F->i_3422 = G_NV(F->j_3424);
}
L_end_3426: ;
ret_:

  return;
}

static void f_translate_1367(struct f_greenc_1fr *up_, P174 u_1366) {
  struct f_translate_1367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1366 = u_1366;
F->p_3435 = NULL;
F->p_3435 = F->up->prelude_units_221;
F->used_3436 = NULL;
F->y_3437 = NULL;
while ((F->p_3435 != NULL)) {
f_decl_element_669(F->up, F->p_3435);
F->p_3435 = (*(P174)rt_nil_check(F->p_3435)).next_;
}
L_end_3438: ;
f_used_units_1361(F->up, F->u_1366, &F->used_3436);
F->p_3435 = F->u_1366;
f_open_scope_477(F->up);
while ((F->p_3435 != NULL)) {
F->up->barriers_200 = NULL;
F->up->cur_comp_unit_209 = (*(P174)rt_nil_check(F->p_3435)).name_;
F->y_3437 = f_lookup_433(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).name_)));
if ((((((G_NV((*(P174)rt_nil_check(F->p_3435)).kind_) == ((rt_int)49LL)) || (G_NV((*(P174)rt_nil_check(F->p_3435)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->p_3435)).kind_) == ((rt_int)44LL))) || (G_NV((*(P174)rt_nil_check(F->p_3435)).kind_) == ((rt_int)45LL))) && (F->y_3437 != NULL))) {
if ((((*(P117)rt_nil_check(F->y_3437)).decl_ != NULL) && ((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3437)).decl_)).formal_ != NULL))) {
(*(P174)rt_nil_check(F->p_3435)).formal_ = f_mk_237(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3437)).decl_)).formal_))));
}
}
f_push_barrier_690(F->up, F->p_3435, ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix3440 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).formal_)); ix3440.p[rt_index(((rt_int)1LL), ix3440.lo, ix3440.hi) - ix3440.lo]; })) == 33) || (G_NV(({ rt_gstr ix3441 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).formal_)); ix3441.p[rt_index(((rt_int)1LL), ix3441.lo, ix3441.hi) - ix3441.lo]; })) == 35))) {
} else if (f_last_unit_1369(F->up, F->p_3435)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3435)).kind_) != ((rt_int)44LL)) || ((*(P174)rt_nil_check(F->p_3435)).a_ != NULL))) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->p_3435)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_665(F->up, F->p_3435, &F->y_3437);
f_define_476(F->up, F->y_3437, G_NV((*(P174)rt_nil_check(F->p_3435)).line_));
f_subprogram_body_712(F->up, F->p_3435, F->y_3437);
F->up->main_name_231 = (*(P117)rt_nil_check(F->y_3437)).cname_;
} else if (f_listed_429(F->up, F->used_3436, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).name_)))) {
f_decl_element_669(F->up, F->p_3435);
} else {
F->up->code_136 = f_new_buffer_259(F->up);
f_decl_element_669(F->up, F->p_3435);
F->up->code_136 = F->up->out_init_134;
}
F->p_3435 = (*(P174)rt_nil_check(F->p_3435)).next_;
}
L_end_3439: ;
F->p_3435 = F->u_1366;
while ((F->p_3435 != NULL)) {
if ((G_NV(({ rt_gstr ix3443 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).formal_)); ix3443.p[rt_index(((rt_int)1LL), ix3443.lo, ix3443.hi) - ix3443.lo]; })) == 33)) {
f_fail_258(F->up, G_NV((*(P174)rt_nil_check(F->p_3435)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("subunit ", 8), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3435)).name_))), rt_g_lit(" has no body stub in an enclosing unit (RM79 10.2)", 50)));
}
F->p_3435 = (*(P174)rt_nil_check(F->p_3435)).next_;
}
L_end_3442: ;
ret_:

  return;
}

static int f_last_unit_1369(struct f_greenc_1fr *up_, P174 p_1368) {
  struct f_last_unit_1369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1368 = p_1368;
F->q_3444 = NULL;
F->q_3444 = (*(P174)rt_nil_check(F->p_1368)).next_;
while ((F->q_3444 != NULL)) {
if ((G_NV(({ rt_gstr ix3446 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->q_3444)).formal_)); ix3446.p[rt_index(((rt_int)1LL), ix3446.lo, ix3446.hi) - ix3446.lo]; })) != 33)) {
F->result_ = 0;
goto ret_;
}
F->q_3444 = (*(P174)rt_nil_check(F->q_3444)).next_;
}
L_end_3445: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_print_program_1370(struct f_greenc_1fr *up_) {
  struct f_print_program_1370fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_644(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_255(F->up)), rt_g_lit("paleo.h", 7)), f_q_255(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_266(F->up, F->up->out_types_128);
f_print_buffer_266(F->up, F->up->out_frames_129);
f_print_buffer_266(F->up, F->up->out_helpers_130);
f_print_buffer_266(F->up, F->up->out_protos_131);
f_print_buffer_266(F->up, F->up->out_globals_132);
f_print_buffer_266(F->up, F->up->out_funcs_133);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_266(F->up, F->up->out_excs_135);
f_print_buffer_266(F->up, F->up->out_init_134);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->up->main_name_231))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_266(F->up, F->up->out_awaits_218);
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
F->src_lines_203.lo = ((rt_int)1LL); F->src_lines_203.hi = ((rt_int)300000LL);
F->src_lines_203.lo2 = 1; F->src_lines_203.hi2 = 1;
F->src_lines_203.p = rt_alloc(sizeof(P140) * (size_t)G_CNT(F->src_lines_203));
F->spans_206 = NULL;
F->compiling_source_207 = INT_MIN;
F->compiling_source_207 = 0;
F->loaded_208 = NULL;
F->cur_comp_unit_209 = NULL;
F->in_instance_210 = INT64_MIN;
F->in_instance_210 = ((rt_int)0LL);
F->cur_task_211 = NULL;
F->accept_depth_212 = INT64_MIN;
F->accept_depth_212 = ((rt_int)0LL);
F->famarg_done_213 = INT_MIN;
F->famarg_done_213 = 0;
F->fam_ix_214 = NULL;
F->call_task_ix_215 = NULL;
F->saw_interface_216 = INT_MIN;
F->saw_interface_216 = 0;
F->defer_entry_structs_217 = INT_MIN;
F->defer_entry_structs_217 = 0;
F->out_awaits_218 = NULL;
F->no_cons_219 = NULL;
F->units_220 = NULL;
F->prelude_units_221 = NULL;
F->pkg_stack_222 = NULL;
F->cur_pkg_223 = NULL;
F->prefix_hint_224 = NULL;
F->call_want_225 = NULL;
F->pure_sym_226 = NULL;
F->pure_depth_227 = INT64_MIN;
F->pure_depth_227 = ((rt_int)0LL);
F->vrp_ok_228 = INT_MIN;
F->vrp_ok_228 = 0;
F->in_lv_path_229 = INT_MIN;
F->in_lv_path_229 = 0;
F->last_deref_230 = INT_MIN;
F->last_deref_230 = 0;
F->main_name_231 = NULL;
F->conf_system_232 = NULL;
F->conf_storage_unit_233 = INT64_MIN;
F->conf_storage_unit_233 = ((rt_int)8LL);
F->conf_memory_size_234 = INT64_MIN;
F->conf_memory_size_234 = ((rt_int)1048576LL);
F->conf_optimize_235 = NULL;
F->env_names_197 = f_mk_237(F, rt_g_lit("", 0));
F->out_types_128 = f_new_buffer_259(F);
F->out_frames_129 = f_new_buffer_259(F);
F->out_helpers_130 = f_new_buffer_259(F);
F->out_protos_131 = f_new_buffer_259(F);
F->out_globals_132 = f_new_buffer_259(F);
F->out_funcs_133 = f_new_buffer_259(F);
F->out_init_134 = f_new_buffer_259(F);
F->out_excs_135 = f_new_buffer_259(F);
F->code_136 = F->out_init_134;
F->no_cons_219 = f_new_cons_484(F);
F->ty_int_156 = f_new_typ_483(F, ((rt_int)1LL));
F->ty_bool_157 = f_new_typ_483(F, ((rt_int)2LL));
F->ty_float_158 = f_new_typ_483(F, ((rt_int)3LL));
F->ty_char_159 = f_new_typ_483(F, ((rt_int)11LL));
F->ty_string_160 = f_new_typ_483(F, ((rt_int)6LL));
(*(P122)rt_nil_check(F->ty_string_160)).name_ = f_mk_237(F, rt_g_lit("STRING", 6));
(*(P122)rt_nil_check(F->ty_string_160)).cname_ = f_mk_237(F, rt_g_lit("rt_gstr", 7));
(*(P122)rt_nil_check(F->ty_string_160)).dims_ = ((rt_int)1LL);
(*(P122)rt_nil_check(F->ty_string_160)).elem_ = F->ty_char_159;
(*(P122)rt_nil_check(F->ty_string_160)).tcons_ = f_new_cons_484(F);
(*(P178)rt_nil_check((*(P122)rt_nil_check(F->ty_string_160)).tcons_)).lo_ = f_mk_237(F, rt_g_lit("1", 1));
F->ty_void_161 = f_new_typ_483(F, ((rt_int)9LL));
F->ty_nil_162 = f_new_typ_483(F, ((rt_int)10LL));
F->ty_act_164 = f_new_typ_483(F, ((rt_int)13LL));
F->ty_tdecl_165 = f_new_typ_483(F, ((rt_int)14LL));
F->ty_entry_166 = f_new_typ_483(F, ((rt_int)15LL));
(*(P122)rt_nil_check(F->ty_int_156)).name_ = f_mk_237(F, rt_g_lit("INTEGER", 7));
(*(P122)rt_nil_check(F->ty_string_160)).idx_ = F->ty_int_156;
(*(P122)rt_nil_check(F->ty_string_160)).next_ = F->all_types_124;
F->all_types_124 = F->ty_string_160;
(*(P122)rt_nil_check(F->ty_float_158)).name_ = f_mk_237(F, rt_g_lit("FLOAT", 5));
(*(P122)rt_nil_check(F->ty_float_158)).ndigits_ = ((rt_int)15LL);
F->ty_short_167 = f_new_typ_483(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_short_167)).name_ = f_mk_237(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_168 = f_new_typ_483(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_long_168)).name_ = f_mk_237(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_169 = f_new_typ_483(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_sfloat_169)).name_ = f_mk_237(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P122)rt_nil_check(F->ty_sfloat_169)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_170 = f_new_typ_483(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_lfloat_170)).name_ = f_mk_237(F, rt_g_lit("LONG_FLOAT", 10));
(*(P122)rt_nil_check(F->ty_lfloat_170)).ndigits_ = ((rt_int)15LL);
F->ty_time_171 = f_new_typ_483(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_time_171)).name_ = f_mk_237(F, rt_g_lit("TIME", 4));
(*(P122)rt_nil_check(F->ty_time_171)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_172 = f_new_typ_483(F, ((rt_int)16LL));
(*(P122)rt_nil_check(F->ty_ufixed_172)).name_ = f_mk_237(F, rt_g_lit("universal fixed", 15));
F->out_awaits_218 = f_new_buffer_259(F);
f_predefine_1332(F);
f_prelude_1358(F);
f_add_token_275(F, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
f_compilation_424(F, &F->prelude_units_221);
F->ntoks_113 = ((rt_int)0LL);
F->tpos_114 = ((rt_int)1LL);
F->src_line_115 = ((rt_int)0LL);
f_read_source_308(F);
F->compiling_source_207 = 1;
f_compilation_424(F, &F->units_220);
F->compiling_source_207 = 0;
F->loaded_208 = f_mk_237(F, rt_g_lit(",", 1));
f_library_units_1354(F);
if ((F->units_220 == NULL)) {
f_fail_258(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1367(F, F->units_220);
f_store_units_1344(F);
f_print_program_1370(F);
ret_:

  return;
}

static void as_A2705(A2705 *d, A2705 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2705 cp_A2705(A2705 s) {
  A2705 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2705(A2705 a, A2705 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2705 cat_A2705(A2705 a, A2705 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2705 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2705 one_A2705(rt_int e) {
  A2705 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2702(A2702 *d, A2702 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2702 cp_A2702(A2702 s) {
  A2702 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2702(A2702 a, A2702 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2702 cat_A2702(A2702 a, A2702 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2702 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2702 one_A2702(rt_int e) {
  A2702 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2697(A2697 *d, A2697 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2697 cp_A2697(A2697 s) {
  A2697 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2697(A2697 a, A2697 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2697 and_A2697(A2697 a, A2697 b) { A2697 r = cp_A2697(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2697 or_A2697(A2697 a, A2697 b) { A2697 r = cp_A2697(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2697 xor_A2697(A2697 a, A2697 b) { A2697 r = cp_A2697(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2697 not_A2697(A2697 a) { A2697 r = cp_A2697(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2697 cat_A2697(A2697 a, A2697 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2697 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2697 one_A2697(int e) {
  A2697 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2378(A2378 *d, A2378 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2378 cp_A2378(A2378 s) {
  A2378 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2378(A2378 a, A2378 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2378 cat_A2378(A2378 a, A2378 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2378 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2378 one_A2378(rt_int e) {
  A2378 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R2064(R2064 *d, R2064 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R2064 cp_R2064(R2064 s) {
  R2064 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2064(R2064 a, R2064 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1943(R1943 *d, R1943 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1943 cp_R1943(R1943 s) {
  R1943 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1943(R1943 a, R1943 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1939(R1939 *d, R1939 s) {
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
static R1939 cp_R1939(R1939 s) {
  R1939 d = s;
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
static int eq_R1939(R1939 a, R1939 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1921(R1921 *d, R1921 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1921 cp_R1921(R1921 s) {
  R1921 d = s;
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
static int eq_R1921(R1921 a, R1921 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_) && (a.dsym_ == b.dsym_);
}
static void as_R205(R205 *d, R205 s) {
  d->u_ = s.u_;
  d->first_ = s.first_;
  d->last_ = s.last_;
  d->env_ = s.env_;
  d->next_ = s.next_;
}
static R205 cp_R205(R205 s) {
  R205 d = s;
  d.u_ = s.u_;
  d.first_ = s.first_;
  d.last_ = s.last_;
  d.env_ = s.env_;
  d.next_ = s.next_;
  return d;
}
static int eq_R205(R205 a, R205 b) {
  return 1 && (a.u_ == b.u_) && (a.first_ == b.first_) && (a.last_ == b.last_) && (a.env_ == b.env_) && (a.next_ == b.next_);
}
static void as_A202(A202 *d, A202 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A202 cp_A202(A202 s) {
  A202 d = s; d.p = rt_alloc(sizeof(P140) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A202(A202 a, A202 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A202 cat_A202(A202 a, A202 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A202 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P140) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A202 one_A202(P140 e) {
  A202 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P140)); r.p[0] = e;
  return r;
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
  d->view_of_ = s.view_of_;
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
  d.view_of_ = s.view_of_;
  return d;
}
static int eq_R123(R123 a, R123 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_) && (a.view_of_ == b.view_of_);
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
