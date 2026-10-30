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
typedef struct R1945 R1945;
typedef struct R1945 *P1944;
struct R118 { int dummy_; rt_int kind_; P140 name_; P122 t_; P178 c_; P140 access_path_; P140 cname_; int ro_; rt_int mvalue_; int hasmv_; P174 decl_; P1944 params_; P122 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P117 members_; P117 mnext_; P117 chain_; P117 stack_; rt_int flags_; };
typedef struct R1963 R1963;
typedef struct R1963 *P1962;
struct R123 { int dummy_; rt_int kind_; P140 name_; P174 lits_; P122 elem_; P122 idx_; P178 elemcons_; P178 tcons_; P1962 fields_; P122 target_; P174 decl_; P140 cname_; int forward_; int defined_; int priv_; P122 next_; P122 idx2_; P140 littab_; P122 parent_; rt_int ndigits_; P140 fdelta_; P140 fsmall_; rt_int dims_; int is_restricted_; P122 view_of_; };
typedef struct R1967 R1967;
typedef struct R1967 *P1966;
struct R179 { int dummy_; P140 lo_; P140 hi_; P140 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P140 lo2_; P140 hi2_; P140 acc_; P178 inner_; P1966 dv_; };
struct R1967 { int dummy_; P140 name_; P140 v_; P1966 next_; };
struct R1945 { int dummy_; P140 name_; rt_int mode_; P122 t_; P178 c_; P140 cfield_; P174 dflt_; P1944 next_; P117 dsym_; };
typedef struct R2088 R2088;
typedef struct R2088 *P2087;
struct R2088 { int dummy_; P140 disc_; P174 arm_; P174 variant_; P2087 next_; };
struct R1963 { int dummy_; P140 name_; P122 t_; P178 c_; P1962 next_; P174 dflt_; int is_const_; int is_discr_; P117 dsym_; P2087 guard_; P140 cond_; int dyn_; };
struct R199 { int dummy_; rt_int limit_; rt_int keep_; P140 allowed_; P198 next_; };
struct R190 { int dummy_; P140 name_; P140 cname_; P140 path_; rt_int frames_; rt_int line_; P189 next_; };
typedef struct A2419 A2419;
struct A2419 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R144 { int dummy_; P140 match_; P140 label_; rt_int depth_; int is_loop_; P143 next_; };
typedef struct A2742 A2742;
struct A2742 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2747 A2747;
struct A2747 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2750 A2750;
struct A2750 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R147 { int dummy_; P174 body_node_; P117 visible_; P146 next_; };
struct f_mk_239fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_238;
 P140 result_;
 rt_gstr r_1396;
};
struct f_new_name_242fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_240;
 P140 *res_241;
};
struct f_is_letter_244fr { int dummy;
 struct f_greenc_1fr *up;
 int c_243;
 int result_;
};
struct f_is_digit_246fr { int dummy;
 struct f_greenc_1fr *up;
 int c_245;
 int result_;
};
struct f_upper_248fr { int dummy;
 struct f_greenc_1fr *up;
 int c_247;
 int result_;
};
struct f_lower_s_250fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_249;
 rt_gstr result_;
 rt_gstr r_1400;
 rt_int i_1403;
};
struct f_upper_s_252fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_251;
 rt_gstr result_;
 rt_gstr r_1411;
 rt_int i_1414;
};
struct f_is_operator_254fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_253;
 int result_;
};
struct f_c_field_256fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_255;
 rt_gstr result_;
};
struct f_q_257fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_260fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_258;
 rt_gstr msg_259;
};
struct f_new_buffer_261fr { int dummy;
 struct f_greenc_1fr *up;
 P126 result_;
};
struct f_put_to_264fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_262;
 rt_gstr s_263;
 P151 l_1423;
};
struct f_emit_266fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_265;
};
struct f_print_buffer_268fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_267;
 P151 l_1426;
};
struct f_splice_271fr { int dummy;
 struct f_greenc_1fr *up;
 P126 a_269;
 P126 b_270;
};
struct f_is_reserved_273fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_272;
 int result_;
};
struct f_add_token_277fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_274;
 rt_gstr s_275;
 rt_int ival_276;
};
struct f_digit_value_279fr { int dummy;
 struct f_greenc_1fr *up;
 int c_278;
 rt_int result_;
};
struct f_digit_in_282fr { int dummy;
 struct f_greenc_1fr *up;
 int c_280;
 rt_int base_281;
 rt_int result_;
 rt_int d_1434;
};
struct f_accumulate_286fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_283;
 rt_int base_284;
 rt_int d_285;
};
struct f_lex_line_288fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_287;
 rt_int i_1435;
 rt_int j_1436;
 rt_int n_1437;
 int c_1439;
 int quote_1440;
 rt_int v_1441;
 rt_int d_1442;
 rt_gstr buf_1443;
 rt_int bl_1445;
 rt_int base_1487;
 rt_gstr two_1531;
};
struct f_exponent_ahead_291fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_289;
 rt_int j_290;
 int result_;
};
struct f_exponent_296fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_292;
 rt_int *j_293;
 rt_gstr *buf_294;
 rt_int *bl_295;
};
struct f_include_open_299fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_297;
 rt_int *length_298;
};
struct f_include_char_302fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_300;
 int *c_301;
};
struct f_check_include_303fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1578;
};
struct f_include_text_305fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_304;
 rt_gstr t_1589;
 rt_int saved_line_1591;
 rt_int from_1592;
 rt_int k_1594;
 rt_int k_1601;
};
struct f_include_line_309fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_306;
 rt_int from_307;
 rt_int to_308;
 rt_gstr l_1606;
 rt_int k_1609;
};
struct f_read_source_310fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1617;
 rt_int bl_1619;
 int c_1620;
};
struct f_nn_313fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_311;
 rt_int line_312;
 P174 result_;
};
struct f_append_317fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *head_314;
 P174 *tail_315;
 P174 x_316;
};
struct f_list_len_319fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_318;
 rt_int result_;
 rt_int n_1636;
 P174 p_1637;
};
struct f_cur_line_320fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_322fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_321;
 int result_;
};
struct f_at_op_324fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_323;
 int result_;
};
struct f_at_kind_326fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_325;
 int result_;
};
struct f_kind_at_328fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_327;
 rt_int result_;
};
struct f_text_at_330fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_329;
 rt_gstr result_;
};
struct f_perror_332fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_331;
};
struct f_skip_333fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_335fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_334;
};
struct f_expect_op_337fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_336;
};
struct f_expect_id_339fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_338;
};
struct f_name_node_341fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_340;
 P174 x_1652;
};
struct f_id_list_343fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_342;
 P174 head_1653;
 P174 tail_1654;
 P174 x_1655;
};
struct f_binop_348fr { int dummy;
 struct f_greenc_1fr *up;
 P140 op_344;
 P174 l_345;
 P174 r_346;
 rt_int line_347;
 P174 result_;
 P174 x_1657;
};
struct f_expr_350fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_349;
 P174 l_1658;
 P174 r_1659;
 P140 op_1660;
 P140 first_op_1661;
 rt_int line_1662;
 int short_1663;
 int first_short_1664;
};
struct f_is_rel_352fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_351;
 int result_;
};
struct f_relation_354fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_353;
 P174 l_1667;
 P174 r_1668;
 P174 lo_1669;
 P174 hi_1670;
 P174 t_1671;
 P140 op_1672;
 rt_int line_1673;
 int neg_1674;
};
struct f_path_of_356fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_355;
 rt_gstr result_;
};
struct f_simple_expr_358fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_357;
 P174 l_1678;
 P174 r_1679;
 P140 op_1680;
 rt_int line_1681;
};
struct f_term_360fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_359;
 P174 l_1685;
 P174 r_1686;
 P140 op_1687;
 rt_int line_1688;
};
struct f_factor_362fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_361;
 P174 l_1691;
 P174 r_1692;
 P140 op_1693;
 rt_int line_1694;
};
struct f_primary_364fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_363;
 P174 x_1696;
 rt_int line_1697;
};
struct f_agg_or_paren_366fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_365;
 rt_int line_1702;
 P174 items_1703;
 P174 itail_1704;
 P174 it_1705;
 P174 first_1706;
 P174 keys_1707;
 P174 ktail_1708;
 P174 lab_1709;
 P174 x_1710;
 int more_1711;
};
struct f_choice_token_368fr { int dummy;
 struct f_greenc_1fr *up;
 P110 t_367;
 int result_;
};
struct f_aggregate_ahead_369fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1714;
 rt_int k_1715;
 P110 t_1718;
};
struct f_name_p_371fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_370;
 P174 p_1720;
 P174 x_1721;
 P174 args_1722;
 P174 atail_1723;
 P174 lo_1724;
 P174 r_1725;
 rt_int line_1726;
 int more_1727;
 P140 formal_1731;
 rt_int mark_1732;
};
struct f_component_list_373fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_372;
 P174 comps_1739;
 P174 ctail_1740;
 P174 names_1741;
 P174 st_1742;
 P174 def_1743;
 P174 cm_1744;
 P174 v_1745;
 P174 arm_1746;
 P174 atail_1747;
 P174 labs_1748;
 P174 ltail_1749;
 P174 l_1750;
 int is_c_1751;
};
struct f_discrete_range_p_375fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_374;
 P174 lo_1756;
 P174 r_1757;
 rt_int line_1758;
};
struct f_subtype_ind_377fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_376;
 P140 f_1759;
 P174 x_1760;
 P174 r_1761;
 P174 args_1762;
 P174 atail_1763;
 P174 lo_1764;
 rt_int line_1765;
 int more_1766;
};
struct f_type_spec_379fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_378;
 P174 x_1769;
};
struct f_type_def_381fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_380;
 P174 x_1770;
 P174 lits_1771;
 P174 ltail_1772;
 P174 l_1773;
 P174 idx_1774;
 P174 itail_1775;
 P174 r_1776;
 P174 comps_1777;
 P174 ctail_1778;
 P174 names_1779;
 P174 st_1780;
 P174 def_1781;
 P174 cm_1782;
 rt_int line_1783;
 int more_1784;
};
struct f_pragma_p_383fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_382;
 P174 x_1788;
 P174 a_1789;
 P174 head_1790;
 P174 tail_1791;
};
struct f_check_pragma_385fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_384;
 rt_gstr p_1793;
 rt_int n_1794;
 P174 a_1795;
};
struct f_visibility_p_387fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_386;
 P174 names_1797;
 P140 v_1798;
};
struct f_unit_p_389fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_388;
 P140 v_1800;
 P174 x_1801;
};
struct f_skip_representation_390fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_decl_part_392fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_391;
 P174 head_1806;
 P174 tail_1807;
 P174 x_1808;
 P174 names_1809;
};
struct f_object_decl_394fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_393;
 P174 head_1811;
 P174 tail_1812;
 P174 names_1813;
 P174 st_1814;
 P174 init_1815;
 P174 x_1816;
 rt_int line_1817;
 int is_const_1818;
};
struct f_type_decl_396fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_395;
 P174 x_1821;
 rt_int line_1822;
};
struct f_formal_part_398fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_397;
 P174 head_1823;
 P174 tail_1824;
 P174 names_1825;
 P174 st_1826;
 P174 def_1827;
 P174 p_1828;
 rt_int mode_1829;
 int more_1830;
};
struct f_designator_400fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *res_399;
};
struct f_subprogram_402fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_401;
 P174 x_1837;
 rt_int line_1838;
 int is_proc_1839;
};
struct f_body_part_404fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_403;
};
struct f_parse_handlers_406fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_405;
 P174 head_1841;
 P174 tail_1842;
 P174 h_1843;
 P174 names_1844;
 P174 ntail_1845;
 P174 n_1846;
};
struct f_package_p_408fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_407;
 P174 x_1850;
 rt_int line_1851;
};
struct f_at_statements_end_409fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_411fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_410;
 P174 head_1852;
 P174 tail_1853;
 P174 x_1854;
};
struct f_statement_413fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_412;
 P174 l_1856;
 P174 x_1857;
 P140 label_1858;
};
struct f_labelled_statement_416fr { int dummy;
 struct f_greenc_1fr *up;
 P140 label_414;
 P174 *res_415;
 P174 x_1859;
 P174 t_1860;
 rt_int line_1861;
};
struct f_task_statement_418fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_417;
};
struct f_if_stmt_420fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_419;
 P174 x_1865;
 P174 arm_1866;
 P174 head_1867;
 P174 tail_1868;
 int go_1869;
};
struct f_case_stmt_422fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_421;
 P174 x_1871;
 P174 arm_1872;
 P174 head_1873;
 P174 tail_1874;
 P174 labs_1875;
 P174 ltail_1876;
 P174 l_1877;
 int others_arm_1878;
};
struct f_loop_stmt_424fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_423;
 P174 x_1881;
 P174 r_1882;
 rt_int line_1883;
};
struct f_compilation_426fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_425;
 rt_int first_1884;
 P174 head_1885;
 P174 tail_1886;
 P174 x_1887;
};
struct f_hash_428fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_427;
 rt_int result_;
 rt_int h_1894;
 rt_int i_1897;
};
struct f_listed_431fr { int dummy;
 struct f_greenc_1fr *up;
 P140 list_429;
 rt_gstr name_430;
 int result_;
 rt_gstr l_1902;
 rt_int n_1903;
 rt_int i_1908;
};
struct f_visible_sym_433fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_432;
 int result_;
 P198 b_1915;
};
struct f_lookup_435fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_434;
 P117 result_;
 P117 y_1917;
};
struct f_same_task_438fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_436;
 P117 b_437;
 int result_;
};
struct f_lookup_entry_441fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_439;
 P117 owner_440;
 P117 result_;
 P117 y_1920;
};
struct f_lookup_at_444fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_442;
 rt_int d_443;
 P117 result_;
 P117 y_1923;
};
struct f_enclosing_depth_446fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_445;
 rt_int result_;
 rt_int i_1927;
};
struct f_push_unit_448fr { int dummy;
 struct f_greenc_1fr *up;
 P140 name_447;
};
struct f_lookup_decl_450fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_449;
 P117 result_;
 P117 y_1935;
};
struct f_overloadable_452fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_451;
 int result_;
};
struct f_same_455fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_453;
 P122 b_454;
 int result_;
};
struct f_base_view_457fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_456;
 P122 result_;
 P122 r_1938;
};
struct f_root_459fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_458;
 P122 result_;
 P122 r_1940;
};
struct f_derived_from_462fr { int dummy;
 struct f_greenc_1fr *up;
 P122 a_460;
 P122 b_461;
 int result_;
 P122 r_1942;
};
struct f_is_numeric_464fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_463;
 int result_;
};
struct f_is_discrete_466fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_465;
 int result_;
};
struct f_same_types_469fr { int dummy;
 struct f_greenc_1fr *up;
 P1944 a_467;
 P1944 b_468;
 int result_;
 P1944 x_1946;
 P1944 y_1947;
};
struct f_same_signature_472fr { int dummy;
 struct f_greenc_1fr *up;
 P1944 a_470;
 P1944 b_471;
 int result_;
 P1944 x_1949;
 P1944 y_1950;
};
struct f_distinct_overload_475fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_473;
 P117 z_474;
 int result_;
};
struct f_define_478fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_476;
 rt_int line_477;
 rt_int h_1952;
 P117 z_1953;
};
struct f_open_scope_479fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_480fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_483fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_481;
 P140 name_482;
 P117 result_;
};
struct f_new_typ_485fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_484;
 P122 result_;
};
struct f_new_cons_486fr { int dummy;
 struct f_greenc_1fr *up;
 P178 result_;
};
struct f_bounded_488fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_487;
 int result_;
};
struct f_bounded_hi_490fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_489;
 int result_;
};
struct f_static_bounds_492fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_491;
 int result_;
};
struct f_discriminated_494fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_493;
 int result_;
};
struct f_kind_name_496fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_495;
 rt_gstr result_;
};
struct f_check_type_500fr { int dummy;
 struct f_greenc_1fr *up;
 P122 got_497;
 P122 want_498;
 rt_int line_499;
};
struct f_field_count_502fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_501;
 rt_int result_;
 rt_int n_1971;
 P1962 f_1972;
};
struct f_ctype_505fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_503;
 P140 *r_504;
 P140 s_1974;
};
struct f_field_decls_508fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_506;
 P140 *r_507;
 P1962 f_1976;
 P140 s_1977;
 P140 ct_1978;
};
struct f_declare_ctype_510fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_509;
 P140 ct_1980;
 P140 s_1981;
 P122 target_1982;
};
struct f_lit_index_513fr { int dummy;
 struct f_greenc_1fr *up;
 P174 lits_511;
 rt_gstr name_512;
 rt_int result_;
 rt_int i_1983;
 P174 l_1984;
};
struct f_manifest_517fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_514;
 rt_int *v_515;
 int *ok_516;
 rt_int a_1986;
 rt_int b_1987;
 int ok2_1988;
 P117 y_1989;
};
struct f_resolve_521fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_518;
 P122 *t_519;
 P178 *c_520;
 P117 y_1990;
 P122 dummy_1991;
 P140 code_1992;
 int ok_1993;
 P174 r_1994;
};
struct f_constraint_list_525fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_522;
 P122 t_523;
 P178 c_524;
 P174 r_1995;
 P122 arrt_1996;
 P178 cc_1997;
 P122 it_1998;
};
struct f_discriminant_constraint_529fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_526;
 P122 t_527;
 P178 c_528;
 P174 a_2000;
 P1962 f_2001;
 P122 vt_2002;
 P140 v_2003;
 P1966 d_2004;
 P1966 tail_2005;
};
struct f_discrete_bounds_535fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_530;
 P122 want_531;
 P122 *t_532;
 P140 *lo_533;
 P140 *hi_534;
 P178 c_2013;
 P117 y_2014;
};
struct f_range_of_539fr { int dummy;
 struct f_greenc_1fr *up;
 P174 r_536;
 P122 t_537;
 P178 c_538;
 P122 dummy_2015;
 int ok_2016;
};
struct f_fresh_typ_543fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_540;
 P140 name_541;
 P122 *t_542;
 P122 ph_2017;
};
struct f_inherit_547fr { int dummy;
 struct f_greenc_1fr *up;
 P122 parent_544;
 P122 t_545;
 rt_int line_546;
 P117 s_2018;
 P117 z_2019;
 P1944 p_2020;
 P1944 q_2021;
 P1944 tail_2022;
 int uses_2023;
 P117 news_2024;
};
struct f_derive_literals_550fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_548;
 rt_int line_549;
 P174 l_2031;
 rt_int n_2032;
 P117 y_2033;
};
struct f_type_definition_555fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_551;
 P140 name_552;
 P122 *t_553;
 P178 *c_554;
 P122 dummy_2035;
 P122 it_2036;
 P178 ic_2037;
 P174 l_2038;
 P174 comp_2039;
 P1962 f_2040;
 P1962 tail_2041;
 int ok_2042;
 rt_int n_2043;
 P117 y_2044;
};
struct f_array_type_562fr { int dummy;
 struct f_greenc_1fr *up;
 P174 idx_556;
 P174 comp_557;
 P140 name_558;
 rt_int line_559;
 P122 *t_560;
 P178 *c_561;
 P174 l_2048;
 P178 rowc_2049;
 P178 ic_2050;
 P122 it_2051;
};
struct f_static_range_566fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_563;
 P174 h_564;
 P178 c_565;
 int ok_2052;
 int ok2_2053;
};
struct f_component_place_572fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_567;
 P1962 f_568;
 rt_gstr a_569;
 rt_gstr ct_570;
 P140 *r_571;
 P140 bits_2056;
};
struct f_no_value_574fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_573;
 rt_gstr result_;
};
struct f_restricted_here_576fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_575;
 int result_;
};
struct f_elem_ctype_579fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_577;
 P140 *r_578;
};
struct f_first_index_582fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_580;
 P140 *r_581;
};
struct f_is_string_584fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_583;
 int result_;
};
struct f_subst_587fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_585;
 rt_gstr r_586;
 rt_gstr result_;
 rt_int i_2060;
};
struct f_mentions_record_589fr { int dummy;
 struct f_greenc_1fr *up;
 P140 s_588;
 int result_;
 rt_int i_2074;
};
struct f_subst_cons_593fr { int dummy;
 struct f_greenc_1fr *up;
 P178 c_590;
 rt_gstr r_591;
 P178 *res_592;
};
struct f_remove_sym_595fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_594;
 rt_int h_2080;
 P117 p_2081;
};
struct f_record_components_600fr { int dummy;
 struct f_greenc_1fr *up;
 P174 list_596;
 P122 t_597;
 P2087 g_598;
 rt_int line_599;
 P174 comp_2089;
 P1962 f_2090;
 P1962 tail_2091;
 P1962 df_2092;
 P174 prev_2093;
 P122 pt_2094;
 P122 vt_2095;
 P178 pc_2096;
 P117 y_2097;
 P140 acc_2098;
 P140 v_2099;
 P140 x_2100;
 P174 arm_2101;
 P2087 g2_2102;
};
struct f_guard_cond_604fr { int dummy;
 struct f_greenc_1fr *up;
 P2087 g_601;
 P122 t_602;
 P140 *r_603;
 P174 a_2112;
 P174 l_2113;
 P1962 df_2114;
 P140 x_2115;
 P140 d_2116;
 P122 dt_2117;
 P122 vt_2118;
 P140 lo_2119;
 P140 hi_2120;
};
struct f_arm_test_609fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_605;
 P140 dname_606;
 rt_gstr d_607;
 P140 *x_608;
 P174 l_2122;
 P117 y_2123;
 P122 dt_2124;
 P122 vt_2125;
 P140 lo_2126;
 P140 hi_2127;
};
struct f_derived_type_614fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_610;
 P140 name_611;
 P122 *t_612;
 P178 *c_613;
 P122 pt_2129;
 P140 ct_2130;
 P122 ph_2131;
};
struct f_real_type_619fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_615;
 P140 name_616;
 P122 *t_617;
 P178 *c_618;
 P122 dt_2132;
 P140 dv_2133;
 rt_int n_2134;
 int ok_2135;
};
struct f_finish_ptr_621fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_620;
 P178 c_2136;
};
struct f_init_storage_625fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_622;
 P122 t_623;
 P178 c_624;
 P178 ec_2137;
 P178 fc_2138;
 P1966 d_2139;
 P140 ct_2140;
 P140 i_2141;
 P140 v_2142;
 P140 x_2143;
 P122 vt_2144;
 P1962 f_2145;
};
struct f_composite_627fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_626;
 int result_;
};
struct f_assign_code_633fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_628;
 P122 t_629;
 rt_gstr v_630;
 P178 c_631;
 P140 *r_632;
 P140 ct_2149;
 P140 x_2150;
 P1966 d_2151;
};
struct f_copy_code_637fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_634;
 rt_gstr v_635;
 P140 *r_636;
 P140 ct_2153;
};
struct f_eq_code_642fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_638;
 rt_gstr a_639;
 rt_gstr b_640;
 P140 *r_641;
 P140 ct_2154;
};
struct f_seen_name_645fr { int dummy;
 struct f_greenc_1fr *up;
 P151 l_643;
 rt_gstr s_644;
 int result_;
 P151 p_2155;
};
struct f_emit_helpers_646fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_2157;
 P140 et_2158;
 P151 done_2159;
 P151 l_2160;
};
struct f_helper_bodies_648fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_647;
 P140 c_2164;
 P126 b_2165;
 P140 ct_2166;
 P140 et_2167;
 P140 x_2168;
 P140 y_2169;
 P140 conds_2170;
 P1962 f_2171;
};
struct f_storage_652fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_649;
 P122 t_650;
 P140 *access_code_651;
 P140 ct_2174;
 P140 g_2175;
};
struct f_bind_655fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_653;
 P140 access_code_654;
};
struct f_declare_subprograms_657fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_656;
 P174 e_2176;
};
struct f_generic_before_660fr { int dummy;
 struct f_greenc_1fr *up;
 P174 from_658;
 P174 e_659;
 int result_;
 P174 p_2178;
};
struct f_declare_one_662fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_661;
 P117 y_2180;
 P117 z_2181;
};
struct f_elaborate_defaults_664fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_663;
 P1944 pm_2185;
 P122 vt_2186;
 P140 v_2187;
 P140 acc_2188;
 P140 x_2189;
 P117 z_2190;
};
struct f_build_subprogram_667fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_665;
 P117 *y_666;
 P174 p_2192;
 P1944 pm_2193;
 P1944 tail_2194;
 P178 rc_2195;
 rt_int k_2196;
};
struct f_decl_elements_669fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_668;
 P174 e_2200;
 int declared_2201;
};
struct f_decl_element_671fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_670;
 P198 saved_2203;
};
struct f_decl_element_1_673fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_672;
 P174 pd_2204;
 P117 y_2205;
 P117 z_2206;
 P122 t_2207;
 P122 vt_2208;
 P178 c_2209;
 P140 acc_2210;
 P140 v_2211;
 P140 x_2212;
 int ok_2213;
};
struct f_pragma_decl_675fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_674;
};
struct f_resolve_object_type_679fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_676;
 P122 *t_677;
 P178 *c_678;
};
struct f_find_subunit_682fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_680;
 P174 *r_681;
 P174 u_2215;
 rt_int k_2216;
};
struct f_stub_684fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_683;
 P174 sub_2219;
 P198 saved_2220;
 rt_int k_2221;
 rt_int d_2222;
 P140 first_name_2223;
 P140 list_2224;
 P117 y_2225;
 rt_int i_2227;
};
struct f_rename_subprogram_686fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_685;
 P117 newy_2244;
 P117 y_2245;
 P117 z_2246;
 P117 cand_2247;
 P174 ix_2248;
 P1944 p_2249;
 P1944 q_2250;
 P1944 tail_2251;
};
struct f_rename_module_689fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_687;
 P174 target_688;
 P117 y_2260;
 P117 z_2261;
};
struct f_push_barrier_692fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_690;
 rt_int limit_691;
 P198 b_2262;
 P140 first_name_2263;
 rt_int k_2264;
};
struct f_other_decl_694fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_693;
};
struct f_scan_labels_697fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_695;
 rt_gstr path_696;
 P174 s_2272;
 P174 a_2273;
 P189 l_2274;
 P140 c_2275;
};
struct f_scan_guarded_701fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_698;
 P174 hs_699;
 rt_gstr path_700;
 P174 h_2285;
};
struct f_count_g_703fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_702;
 rt_int result_;
 rt_int n_2287;
 rt_int i_2291;
};
struct f_label_body_706fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_704;
 P174 hs_705;
 P189 l_2296;
 P189 g_2297;
 P140 gp_2298;
 P140 lp_2299;
 rt_int i_2310;
};
struct f_gen_label_709fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_707;
 int goto_it_708;
 P189 l_2316;
};
struct f_is_foreign_711fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_710;
 int result_;
};
struct f_foreign_call_715fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_712;
 P117 y_713;
 P140 *r_714;
 rt_gstr lang_2322;
 rt_gstr n_2323;
 P1944 pm_2324;
 P140 x_2325;
 P140 ct_2326;
 int all_real_2327;
};
struct f_unsafe_bits_721fr { int dummy;
 struct f_greenc_1fr *up;
 P122 s_716;
 P122 t_717;
 rt_gstr v_718;
 rt_gstr ct_719;
 P140 *r_720;
};
struct f_code_type_723fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_722;
 P117 result_;
 P174 c_2330;
 P117 y_2331;
};
struct f_check_code_body_726fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_724;
 P117 y_725;
 P174 s_2332;
 rt_int n_2333;
 rt_int k_2334;
};
struct f_subprogram_body_729fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_727;
 P117 y_728;
 P174 saved_body_2336;
 P126 saved_code_2337;
 P126 saved_fields_2338;
 int saved_in_2339;
 P117 saved_sym_2340;
 P143 saved_exits_2341;
 rt_int saved_frames_2342;
 P151 saved_handlers_2343;
 P151 saved_cleanups_2344;
 P189 saved_labels_2345;
 P143 saved_hx_2346;
 rt_int saved_hd_2347;
 P117 saved_pure_2348;
 P140 aw_2349;
 rt_int saved_pdepth_2350;
 P140 args_2351;
 P140 head_2352;
 P140 frame_2353;
 P140 parent_2354;
 P140 ct_2355;
 P140 x_2356;
 P1944 pm_2357;
 P117 p_2358;
};
struct f_gen_statements_731fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_730;
 P174 s_2362;
};
struct f_pop_frames_733fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_732;
 rt_int i_2364;
 P151 c_2365;
};
struct f_push_cleanup_735fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_734;
};
struct f_pop_cleanup_736fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_741fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_737;
 P174 stmts_738;
 P174 hs_739;
 rt_int line_740;
 P143 saved_hx_2369;
 P140 f_2370;
 P140 x_2371;
 P174 h_2372;
 P174 n_2373;
 int first_2374;
 int has_others_2375;
 P140 conds_2376;
};
struct f_exc_id_745fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_742;
 rt_int line_743;
 P140 *r_744;
 P117 y_2381;
};
struct f_gen_statement_747fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_746;
 P122 t_2382;
 P122 vt_2383;
 P178 c_2384;
 P140 lv_2385;
 P140 v_2386;
 P140 x_2387;
 int ro_2388;
};
struct f_slice_assign_749fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_748;
 P140 lv_2390;
 P140 v_2391;
 P140 sl_2392;
 P140 x_2393;
 P122 t_2394;
 P122 st_2395;
 P122 vt_2396;
 P178 c_2397;
 int ro_2398;
};
struct f_gen_call_751fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_750;
 P174 c_2399;
 P122 t_2400;
 P140 v_2401;
};
struct f_gen_if_753fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_752;
 P174 a_2402;
 int first_2403;
 P122 t_2404;
 P140 v_2405;
};
struct f_gen_case_755fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_754;
 P122 st_2407;
 P122 vt_2408;
 int first_2409;
 P174 a_2410;
 P174 lab_2411;
 P140 sel_2412;
 P140 tmp_2413;
 P140 ct_2414;
 P140 conds_2415;
 P140 v_2416;
 P140 lo_2417;
 P140 hi_2418;
 A2419 clo_2420;
 A2419 chi_2422;
 rt_int nc_2424;
 rt_int vlo_2425;
 rt_int vhi_2426;
 rt_int total_2427;
 int ok_2428;
 int ok2_2429;
 P117 y_2430;
 rt_int k_2434;
 rt_int k_2443;
};
struct f_selector_range_761fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_756;
 P122 t_757;
 rt_int *lo_758;
 rt_int *hi_759;
 int *ok_760;
 P117 y_2451;
};
struct f_push_exit_765fr { int dummy;
 struct f_greenc_1fr *up;
 P140 match_762;
 int is_loop_763;
 P140 *label_764;
};
struct f_gen_loop_767fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_766;
 P122 t_2454;
 P122 vt_2455;
 P178 c_2456;
 P140 label_2457;
 P140 cond_2458;
 P140 acc_2459;
 P140 lov_2460;
 P140 hiv_2461;
 P140 it_2462;
 P117 y_2463;
 P174 r_2464;
};
struct f_gen_block_769fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_768;
 P140 label_2465;
 P140 aw_2466;
};
struct f_exit_matches_772fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_770;
 P143 x_771;
 int result_;
};
struct f_gen_exit_774fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_773;
 P143 x_2467;
 P122 t_2468;
 P140 v_2469;
};
struct f_gen_return_776fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_775;
 P122 vt_2471;
 P140 v_2472;
 P140 x_2473;
};
struct f_access_of_779fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_777;
 P140 *r_778;
 P140 p_2474;
 rt_int i_2476;
};
struct f_link_to_782fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_780;
 P140 *r_781;
 rt_int i_2481;
};
struct f_c_ident_784fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_783;
 rt_gstr result_;
};
struct f_deref_788fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_785;
 P122 t_786;
 P140 *r_787;
 P140 ct_2485;
};
struct f_is_object_790fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_789;
 int result_;
 P117 y_2486;
};
struct f_is_const_access_792fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_791;
 int result_;
 P117 y_2487;
};
struct f_lvalue_798fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_793;
 P140 *code_out_794;
 P122 *t_795;
 P178 *c_796;
 int *ro_797;
 int cp_2488;
 P174 ex_2489;
 P117 y_2490;
 P140 base_2491;
 P122 bt_2492;
 P178 bc_2493;
};
struct f_select_on_807fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_799;
 P122 bt_800;
 P174 e_801;
 int *ro_802;
 int lv_803;
 P140 *code_out_804;
 P122 *t_805;
 P178 *c_806;
 P1962 f_2494;
 P140 d_2495;
 P140 ct_2496;
 P140 tmp_2497;
};
struct f_index_on_816fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_808;
 P122 bt_809;
 P174 e_810;
 int *ro_811;
 int lv_812;
 P140 *code_out_813;
 P122 *t_814;
 P178 *c_815;
 P174 a_2499;
 P122 arrt_2500;
 P140 acc_2501;
 P122 it_2502;
 P140 i_2503;
 P140 lo_2504;
 P140 hi_2505;
 P140 d_2506;
 P140 ct_2507;
 P140 tmp_2508;
};
struct f_type_attribute_819fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_817;
 rt_gstr name_818;
 int result_;
 P117 y_2510;
 P1944 p_2512;
};
struct f_is_type_name_821fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_820;
 int result_;
 P117 y_2515;
};
struct f_is_char_lit_823fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_822;
 int result_;
};
struct f_is_enum_lit_825fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_824;
 int result_;
 P117 y_2517;
};
struct f_c_string_827fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_826;
 rt_gstr result_;
 rt_int n_2518;
 rt_int i_2521;
 rt_gstr r_2530;
 rt_int j_2532;
 rt_int i_2536;
};
struct f_is_literal_829fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_828;
 int result_;
};
struct f_range_bounds_837fr { int dummy;
 struct f_greenc_1fr *up;
 P174 l_830;
 P174 h_831;
 P122 want_832;
 rt_int line_833;
 P122 *t_834;
 P140 *lo_835;
 P140 *hi_836;
 P122 w_2547;
 P122 t2_2548;
};
struct f_gexpr_842fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_838;
 P122 want_839;
 P122 *t_840;
 P140 *r_841;
 int saved_lv_2549;
 P122 w_2550;
};
struct f_gexpr_1_847fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_843;
 P122 want_844;
 P122 *t_845;
 P140 *r_846;
 P117 y_2551;
 P122 bt_2552;
 P178 c_2553;
 int ro_2554;
 P140 base_2555;
 P140 a_2556;
 P174 nm_2557;
 P174 c2_2558;
};
struct f_string_aggregate_852fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_848;
 P122 want_849;
 P122 *t_850;
 P140 *r_851;
 P174 ag_2562;
 P174 it_2563;
 P174 tail_2564;
 P174 l_2565;
 rt_int k_2568;
};
struct f_char_literal_857fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_853;
 P122 want_854;
 P122 *t_855;
 P140 *r_856;
 rt_int i_2574;
};
struct f_expanded_860fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_858;
 P174 *r_859;
 P117 y_2577;
 rt_int d_2578;
};
struct f_gen_name_865fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_861;
 P122 want_862;
 P122 *t_863;
 P140 *r_864;
 P117 y_2579;
 P117 z_2580;
 P174 call_2581;
};
struct f_gen_unop_870fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_866;
 P122 want_867;
 P122 *t_868;
 P140 *r_869;
 P140 a_2584;
 P140 x_2585;
 int done_2586;
};
struct f_short_int_872fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_871;
 int result_;
};
struct f_float_kind_874fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_873;
 rt_gstr result_;
};
struct f_membership_877fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_875;
 P140 *r_876;
 P122 ta_2587;
 P122 tb_2588;
 P122 tt_2589;
 P140 a_2590;
 P140 lo_2591;
 P140 hi_2592;
 P140 ct_2593;
 P178 c_2594;
 P1966 d_2595;
};
struct f_condition_882fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_878;
 P122 want_879;
 P122 *t_880;
 P140 *r_881;
 P140 a_2597;
 P140 b_2598;
 P122 tb_2599;
};
struct f_catenation_887fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_883;
 P122 want_884;
 P122 *t_885;
 P140 *r_886;
 P122 arrt_2600;
 P122 ta_2601;
 P122 tb_2602;
 P140 a_2603;
 P140 b_2604;
 P140 ct_2605;
};
struct f_cat_operand_892fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_888;
 P122 arrt_889;
 rt_int line_890;
 P140 *r_891;
 P122 tx_2606;
 P140 ct_2607;
};
struct f_arithmetic_897fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_893;
 P122 want_894;
 P122 *t_895;
 P140 *r_896;
 rt_gstr op_2608;
 P122 ta_2609;
 P122 tb_2610;
 P122 hint_2611;
 P140 a_2612;
 P140 b_2613;
};
struct f_fixed_operation_905fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_898;
 P122 ta_899;
 P122 tb_900;
 rt_gstr a_901;
 rt_gstr b_902;
 P122 *t_903;
 P140 *r_904;
 rt_gstr op_2614;
};
struct f_gen_binop_910fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_906;
 P122 want_907;
 P122 *t_908;
 P140 *r_909;
 rt_gstr op_2615;
 P122 ta_2616;
 P122 tb_2617;
 P122 hint_2618;
 P122 ct_2619;
 P140 a_2620;
 P140 b_2621;
 P140 x_2622;
 P140 dummy_2623;
 int done_2624;
};
struct f_code_statement_914fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_911;
 P117 y_912;
 P140 *r_913;
 P117 i_2625;
 P122 t_2626;
 P140 v_2627;
 P140 ct_2628;
};
struct f_conversion_919fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_915;
 P117 y_916;
 P122 *t_917;
 P140 *r_918;
 P122 aty_2629;
 P140 a_2630;
 P174 ag_2631;
 P174 it_2632;
 P174 tail_2633;
 P174 arg_2634;
};
struct f_constrain_923fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_920;
 P122 t_921;
 P140 *r_922;
 P140 ct_2636;
 P140 tmp_2637;
};
struct f_array_conversion_930fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_924;
 P122 t_925;
 P122 aty_926;
 P178 c_927;
 rt_gstr a_928;
 P140 *r_929;
 P122 x_2638;
 P122 y_2639;
 P140 ct_2640;
 P140 act_2641;
 P140 et_2642;
 P140 tmp_2643;
 P140 s_2644;
 rt_int k_2646;
};
struct f_gen_attr_935fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_931;
 P122 want_932;
 P122 *t_933;
 P140 *r_934;
 rt_gstr a_2650;
 P117 y_2651;
 P122 tt_2652;
 P122 aty_2653;
 P140 v_2654;
 P140 d_2655;
 P178 c_2656;
 rt_int n_2657;
 int ro_2658;
};
struct f_type_bits_939fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_936;
 P178 c_937;
 P140 *r_938;
 P140 ct_2659;
};
struct f_object_bits_943fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_940;
 rt_gstr v_941;
 P140 *r_942;
 P140 ct_2660;
 P140 et_2661;
};
struct f_numeric_attr_949fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_944;
 P122 tt_945;
 P178 c_946;
 P122 *t_947;
 P140 *r_948;
 rt_gstr a_2662;
 int short_2663;
};
struct f_component_attr_953fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_950;
 P122 *t_951;
 P140 *r_952;
 P122 bt_2664;
 P140 v_2665;
 P140 ct_2666;
 P1962 f_2667;
};
struct f_config_attr_957fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_954;
 P122 *t_955;
 P140 *r_956;
 rt_gstr a_2669;
 rt_gstr p_2670;
 P140 nm_2671;
};
struct f_attr_dim_961fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_958;
 P122 arrt_959;
 rt_int *n_960;
 int ok_2674;
};
struct f_object_array_attr_967fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_962;
 P122 arrt_963;
 rt_gstr v_964;
 P122 *t_965;
 P140 *r_966;
 rt_int n_2675;
 P122 it_2676;
 P140 ct_2677;
 P140 tmp_2678;
 P140 p_2679;
 P140 lo_2680;
 P140 hi_2681;
 rt_int k_2683;
 rt_int k_2688;
};
struct f_type_array_attr_973fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_968;
 P122 arrt_969;
 P178 c_970;
 P122 *t_971;
 P140 *r_972;
 rt_int n_2692;
 P122 it_2693;
 P178 cc_2694;
 rt_int k_2696;
};
struct f_lit_table_976fr { int dummy;
 struct f_greenc_1fr *up;
 P122 t_974;
 P140 *r_975;
 P174 l_2700;
 P140 s_2701;
};
struct f_val_rep_982fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_977;
 P122 tt_978;
 P178 c_979;
 P122 *t_980;
 P140 *r_981;
 P122 aty_2704;
 P140 v_2705;
 P140 lt_2706;
 rt_int n_2707;
};
struct f_allocator_987fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_983;
 P122 want_984;
 P122 *t_985;
 P140 *r_986;
 P117 y_2708;
 P122 target_2709;
 P122 vt_2710;
 P140 ct_2711;
 P140 pt_2712;
 P140 cell_2713;
 P140 v_2714;
 P140 x_2715;
};
struct f_aggregate_992fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_988;
 P122 want_989;
 P122 *t_990;
 P140 *r_991;
 P140 b_2716;
};
struct f_captured_995fr { int dummy;
 struct f_greenc_1fr *up;
 P126 b_993;
 P140 *r_994;
 P151 l_2717;
};
struct f_field_at_998fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_996;
 rt_int k_997;
 P1962 result_;
 P1962 f_2719;
 rt_int i_2721;
};
struct f_names_field_1001fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_999;
 P1962 f_1000;
 int result_;
};
struct f_item_for_1006fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1002;
 P122 rt_1003;
 rt_int k_1004;
 rt_int p_1005;
 P174 result_;
 P174 it_2725;
 P174 lab_2726;
 rt_int n_2727;
};
struct f_arm_holds_1010fr { int dummy;
 struct f_greenc_1fr *up;
 P174 arm_1007;
 rt_int v_1008;
 int *res_1009;
 P174 l_2730;
 rt_int lo_2731;
 rt_int hi_2732;
 int ok_2733;
};
struct f_record_aggregate_1014fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1011;
 P122 rt_1012;
 P140 *r_1013;
 P174 it_2735;
 P174 lab_2736;
 P174 vn_2737;
 P174 a_2738;
 P1962 f_2739;
 P2087 g_2740;
 rt_int n_2741;
 A2742 done_2743;
 A2742 active_2745;
 A2747 dvs_2748;
 A2750 order_2751;
 rt_int norder_2753;
 rt_int nung_2754;
 rt_int k_2755;
 rt_int d_2756;
 rt_int npos_2757;
 P126 saved_2758;
 P140 ct_2759;
 P140 tmp_2760;
 P140 parts_2761;
 int named_2762;
 int ok_2763;
 int holds_2764;
 rt_int i_2766;
 rt_int p_2775;
 rt_int i_2794;
 rt_int i_2811;
 rt_int i_2822;
};
struct f_field_index_1017fr { int dummy;
 struct f_greenc_1fr *up;
 P122 rt_1015;
 rt_gstr name_1016;
 rt_int result_;
 P1962 f_2828;
 rt_int k_2829;
};
struct f_agg_component_1023fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_1018;
 P122 rt_1019;
 rt_int k_1020;
 P174 v_1021;
 rt_int line_1022;
 P1962 f_2831;
 P122 vt_2832;
 P140 x_2833;
 P140 y_2834;
 rt_int i_2836;
};
struct f_static_choice_1027fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1024;
 rt_int *v_1025;
 int *ok_1026;
};
struct f_array_aggregate_1032fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1028;
 P122 arrt_1029;
 P140 bounds_1030;
 P140 *r_1031;
 P174 it_2841;
 P174 lab_2842;
 P174 others_it_2843;
 rt_int np_2844;
 rt_int nnamed_2845;
 rt_int clo_2846;
 rt_int chi_2847;
 rt_int v1_2848;
 rt_int v2_2849;
 int all_static_2850;
 int ok_2851;
 int ok2_2852;
 int first_choice_2853;
 P122 vt_2854;
 P140 ct_2855;
 P140 et_2856;
 P140 tmp_2857;
 P140 lo_2858;
 P140 hi_2859;
 P140 v_2860;
 P140 x_2861;
 P140 parts_2862;
 P140 fill_2863;
 P140 rowb_2864;
 P140 key_2865;
 P140 khi_2866;
 P126 saved_2867;
};
struct f_element_store_1036fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1033;
 P122 arrt_1034;
 rt_gstr v_1035;
 P140 x_2872;
};
struct f_check_choices_1040fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1037;
 P122 arrt_1038;
 int has_others_1039;
 P174 a_2873;
 P174 b_2874;
 P174 lab_2875;
 P174 lab2_2876;
 rt_int lo1_2877;
 rt_int hi1_2878;
 rt_int lo2_2879;
 rt_int hi2_2880;
 rt_int count_2881;
 int ok_2882;
};
struct f_actual_for_1044fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1041;
 P1944 pm_1042;
 P1944 first_1043;
 P174 result_;
 P174 a_2887;
 P1944 p_2888;
};
struct f_gcall_1049fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1045;
 int is_stmt_1046;
 P122 *t_1047;
 P140 *r_1048;
 P174 fn_2891;
 P174 nm_2892;
 P117 y_2893;
 P140 args_2894;
 P140 lv_2895;
 P140 v_2896;
 P140 ct_2897;
 P140 x_2898;
 P174 a_2899;
 P1944 pm_2900;
 P122 lt_2901;
 P122 vt_2902;
 P178 lc_2903;
 int ro_2904;
};
struct f_out_check_1053fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1050;
 P122 t_1051;
 P178 c_1052;
};
struct f_var_path_1056fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1054;
 P140 *r_1055;
 P122 pt_2905;
 P140 v_2906;
 P126 saved_2907;
};
struct f_paths_overlap_1059fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1057;
 rt_gstr r_1058;
 int result_;
 rt_int i_2911;
 rt_int j_2913;
};
struct f_mentions_1062fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1060;
 rt_gstr name_1061;
 int result_;
 P174 p_2935;
};
struct f_mentions_one_1065fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1063;
 rt_gstr name_1064;
 int result_;
};
struct f_check_aliasing_1069fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1066;
 P117 y_1067;
 P174 a_1068;
 P174 b_2937;
 P140 p_2938;
 P140 q_2939;
 P174 r_2940;
 P117 v_2941;
};
struct f_gcall_with_1074fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1070;
 P117 y_1071;
 P122 *t_1072;
 P140 *r_1073;
 P140 args_2943;
 P140 lv_2944;
 P140 v_2945;
 P140 x1_2946;
 P140 x2_2947;
 P174 a_2948;
 P1944 pm_2949;
 P122 lt_2950;
 P122 vt_2951;
 P178 lc_2952;
 int ro_2953;
};
struct f_builtin_1081fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1075;
 P174 args_1076;
 rt_int line_1077;
 int is_stmt_1078;
 P122 *t_1079;
 P140 *r_1080;
 P122 aty_2956;
 P122 lt_2957;
 P140 a_2958;
 P140 w_2959;
 P140 lv_2960;
 P178 lc_2961;
 int ro_2962;
};
struct f_lookup_path_1083fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1082;
 P117 result_;
 P117 y_2963;
 P117 m_2964;
 rt_int i_2968;
};
struct f_is_package_1085fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1084;
 int result_;
 P117 y_2980;
};
struct f_member_of_1089fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1086;
 rt_gstr name_1087;
 rt_int line_1088;
 P117 result_;
 P117 y_2981;
 P117 m_2982;
};
struct f_inside_package_1091fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1090;
 int result_;
 P151 l_2984;
};
struct f_copy_sym_1094fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1092;
 P117 *z_1093;
};
struct f_complete_private_1097fr { int dummy;
 struct f_greenc_1fr *up;
 P122 ph_1095;
 P122 full_1096;
 P140 n_2988;
 P174 p_2989;
};
struct f_package_spec_1099fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1098;
 P117 y_2990;
 P117 m_2991;
 P117 z_2992;
 P174 saved_2993;
 P117 first_private_2994;
};
struct f_hidden_from_1102fr { int dummy;
 struct f_greenc_1fr *up;
 P117 m_1100;
 P117 first_private_1101;
 int result_;
 P117 p_2998;
};
struct f_package_body_1104fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1103;
 P189 saved_labels_3000;
 P117 y_3001;
 P117 m_3002;
 P117 z_3003;
 P174 saved_3004;
};
struct f_use_visible_1106fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1105;
 int result_;
};
struct f_use_clause_1108fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1107;
 P174 n_3011;
 P117 y_3012;
 P117 m_3013;
 P117 z_3014;
 P117 old_3015;
 int clash_3016;
};
struct f_usable_over_1110fr { int dummy;
 struct f_greenc_1fr *up;
 P117 old_1109;
 int result_;
};
struct f_same_entity_1113fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1111;
 P117 b_1112;
 int result_;
};
struct f_fits_1118fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1114;
 P174 args_1115;
 P122 want_1116;
 int *ok_1117;
 P1944 pm_3021;
 P174 a_3022;
 P122 t_3023;
 P178 c_3024;
 P140 v_3025;
 int ro_3026;
 P126 saved_3027;
 rt_int used_3028;
};
struct f_is_builtin_1120fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1119;
 int result_;
};
struct f_resolve_overload_1127fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1121;
 P174 args_1122;
 int is_stmt_1123;
 P122 want_1124;
 rt_int line_1125;
 P117 *y_1126;
 P117 z_3033;
 P117 w_3034;
 P117 first_3035;
 P117 found_3036;
 rt_int n_3037;
 int ok_3038;
 int hidden_3039;
 rt_int pass_3041;
};
struct f_same_profile_1130fr { int dummy;
 struct f_greenc_1fr *up;
 P117 a_1128;
 P117 b_1129;
 int result_;
};
struct f_resolve_member_overload_1138fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1131;
 rt_gstr name_1132;
 P174 args_1133;
 int is_stmt_1134;
 P122 want_1135;
 rt_int line_1136;
 P117 *y_1137;
 P117 pk_3051;
 P117 z_3052;
 P117 found_3053;
 rt_int n_3054;
 int ok_3055;
 rt_int pass_3057;
};
struct f_user_operator_1144fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1139;
 P122 want_1140;
 P122 *t_1141;
 P140 *r_1142;
 int *done_1143;
 P140 op_3062;
 int negate_3063;
 P117 y_3064;
 P174 call_3065;
 P174 fname_3066;
 P174 l_3067;
 P174 rt_3068;
 int ok_3069;
};
struct f_task_p_1146fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1145;
 P174 x_3072;
 P174 r_3073;
 rt_int line_3074;
};
struct f_entry_p_1148fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1147;
 P174 x_3075;
};
struct f_accept_p_1150fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1149;
 P174 x_3076;
};
struct f_delay_p_1152fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1151;
 P174 x_3077;
};
struct f_designators_1154fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1153;
 P174 head_3078;
 P174 tail_3079;
 P174 n_3080;
};
struct f_parse_task_statement_1156fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1155;
 P174 x_3082;
 P174 alt_3083;
 P174 head_3084;
 P174 tail_3085;
 rt_int line_3086;
};
struct f_path_at_1160fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1157;
 rt_gstr field_1158;
 P140 *r_1159;
 rt_int i_3089;
};
struct f_is_task_name_1162fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1161;
 int result_;
 P117 y_3093;
};
struct f_task_of_1166fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1163;
 P117 *y_1164;
 P174 *ix_1165;
 P174 n_3094;
 P117 a_3095;
};
struct f_own_index_1169fr { int dummy;
 struct f_greenc_1fr *up;
 P117 t_1167;
 P140 *r_1168;
 P117 y_3096;
};
struct f_member_1174fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1170;
 rt_gstr arr_1171;
 rt_gstr i_1172;
 P140 *r_1173;
 P140 lo_3097;
 P140 hi_3098;
};
struct f_act_path_1177fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1175;
 P140 *r_1176;
 P140 i_3099;
};
struct f_act_path_i_1181fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1178;
 rt_gstr i_1179;
 P140 *r_1180;
};
struct f_entry_path_1185fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1182;
 rt_gstr i_1183;
 P140 *r_1184;
 P140 own_3100;
};
struct f_declare_slot_1188fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1186;
 rt_gstr field_1187;
};
struct f_task_decl_1190fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1189;
};
struct f_family_arg_struct_1191fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1196fr { int dummy;
 struct f_greenc_1fr *up;
 P174 b_1192;
 P117 y_1193;
 P140 x_1194;
 int per_member_1195;
 P140 lo_3102;
 P140 hi_3103;
 P140 v_3104;
 P140 d_3105;
 P140 mlo_3106;
 P140 mhi_3107;
 P122 vt_3108;
 P178 c_3109;
};
struct f_entry_family_slot_1201fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1197;
 rt_gstr base_1198;
 rt_gstr i_1199;
 P140 *r_1200;
 P140 lo_3110;
 P140 hi_3111;
};
struct f_task_spec_1203fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1202;
 int has_procs_3112;
 int saved_defer_3113;
 P140 fields_3114;
 P140 ct_3115;
 P1944 pm_3116;
 P140 fp_3117;
 P140 flo_3118;
 P140 fhi_3119;
 P117 y_3120;
 P117 m_3121;
 P117 z_3122;
 P117 saved_3123;
 P140 d_3124;
 P140 v_3125;
 P140 p_3126;
 P140 p2_3127;
 P122 vt_3128;
 P174 r_3129;
};
struct f_entry_decl_1205fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1204;
 P117 y_3134;
 P174 p_3135;
 P1944 pm_3136;
 P1944 tail_3137;
 P140 fields_3138;
 P140 ct_3139;
 P140 x_3140;
 P140 lo_3141;
 P140 hi_3142;
};
struct f_task_body_1207fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1206;
 P117 y_3146;
 P117 b_3147;
 P117 m_3148;
 P117 z_3149;
 P140 upp_3150;
 P117 saved_3151;
};
struct f_task_awaits_1210fr { int dummy;
 struct f_greenc_1fr *up;
 P174 decls_1208;
 P140 *aw_1209;
 P174 e_3155;
 P117 y_3156;
 P140 p_3157;
};
struct f_task_failure_1212fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1211;
 P117 y_3159;
 P140 a_3160;
 P140 i_3161;
 P122 it_3162;
};
struct f_entry_sym_1216fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1213;
 P117 *y_1214;
 P174 *ix_1215;
 P174 alias_3163;
 P117 t_3164;
};
struct f_entry_overload_1221fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1217;
 P174 args_1218;
 rt_int line_1219;
 P117 *r_1220;
 P117 z_3165;
 P117 found_3166;
 int ok_3167;
};
struct f_other_call_1226fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1222;
 int is_stmt_1223;
 P122 *t_1224;
 P140 *r_1225;
 P117 y_3169;
 P117 oy_3170;
 P1944 pm_3171;
 P174 a_3172;
 P140 parts_3173;
 P140 v_3174;
 P140 lv_3175;
 P140 ent_3176;
 P140 act_3177;
 P140 i_3178;
 P122 vt_3179;
 P122 lt_3180;
 P178 lc_3181;
 int ro_3182;
 P174 ix_3183;
 P174 fix_3184;
 P174 args_node_3185;
};
struct f_other_attr_1231fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1227;
 P117 y_1228;
 P122 *t_1229;
 P140 *r_1230;
 rt_gstr a_3187;
 P140 p_3188;
};
struct f_member_attr_1235fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1232;
 P122 *t_1233;
 P140 *r_1234;
 P117 y_3189;
 P174 ix_3190;
 P140 i_3191;
 P140 p_3192;
 P122 vt_3193;
};
struct f_task_builtin_1241fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1236;
 P174 args_1237;
 rt_int line_1238;
 P122 *t_1239;
 P140 *r_1240;
 P122 vt_3194;
 P140 v_3195;
};
struct f_accept_entry_1244fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1242;
 P117 *r_1243;
 P117 z_3196;
 P117 found_3197;
 P117 any_3198;
 int ok_3199;
};
struct f_accept_conforms_1248fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1245;
 P117 y_1246;
 int *ok_1247;
 P174 f_3203;
 P1944 pm_3204;
 P122 t_3205;
 P178 c_3206;
};
struct f_gen_accept_1250fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1249;
 P117 y_3208;
 P143 saved_ax_3209;
 P140 ent_3210;
 P140 ep_3211;
 P140 xf_3212;
 P140 x_3213;
 P1944 pm_3214;
 P174 f_3215;
 P117 p_3216;
};
struct f_member_slot_1254fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1251;
 P174 s_1252;
 P140 *ent_1253;
 P122 vt_3218;
 P140 v_3219;
};
struct f_gen_delay_ticks_1257fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1255;
 P140 *r_1256;
 P122 vt_3220;
 P140 v_3221;
};
struct f_gen_select_1259fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1258;
 P174 alt_3222;
 rt_int n_3223;
 rt_int i_3224;
 int has_delay_3225;
 int has_accept_3226;
 P140 al_3227;
 P140 w_3228;
 P140 g_3229;
 P140 ent_3230;
 P140 ticks_3231;
 P122 vt_3232;
 P117 y_3233;
};
struct f_family_range_1264fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1260;
 P174 ix_1261;
 P140 *lo_1262;
 P140 *hi_1263;
 P122 vt_3237;
};
struct f_task_statement_gen_1266fr { int dummy;
 struct f_greenc_1fr *up;
 P174 s_1265;
 P174 n_3238;
 P174 ix_3239;
 P117 y_3240;
 P140 a_3241;
 P140 d_3242;
 P140 l_3243;
 P140 ticks_3244;
 P140 lo_3245;
 P140 hi_3246;
};
struct f_root_name_1268fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1267;
 P174 result_;
};
struct f_check_pure_target_1271fr { int dummy;
 struct f_greenc_1fr *up;
 P174 target_1269;
 rt_int line_1270;
 P174 n_3250;
 P117 y_3251;
};
struct f_assigns_nonlocal_1274fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1272;
 rt_gstr name_1273;
 int result_;
};
struct f_declares_1277fr { int dummy;
 struct f_greenc_1fr *up;
 P174 d_1275;
 rt_gstr name_1276;
 int result_;
 P174 p_3252;
 P174 e_3253;
};
struct f_scan_handlers_1281fr { int dummy;
 struct f_greenc_1fr *up;
 P174 h_1278;
 P174 d_1279;
 rt_gstr name_1280;
 int result_;
 P174 p_3256;
};
struct f_scan_assigns_1285fr { int dummy;
 struct f_greenc_1fr *up;
 P174 stmts_1282;
 P174 d_1283;
 rt_gstr name_1284;
 int result_;
 P174 s_3258;
 P174 a_3259;
 P174 r_3260;
};
struct f_check_call_rules_1288fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1286;
 P117 y_1287;
 P117 z_3264;
 P117 s_3265;
};
struct f_generic_p_1290fr { int dummy;
 struct f_greenc_1fr *up;
 P174 *res_1289;
 P174 x_3267;
 P174 p_3268;
 P174 head_3269;
 P174 tail_3270;
 P174 names_3271;
 P174 st_3272;
 P174 def_3273;
 P174 sub_3274;
 P140 def_name_text_3275;
 int more_3276;
 int restr_3277;
 rt_int mode_3278;
};
struct f_instantiation_1293fr { int dummy;
 struct f_greenc_1fr *up;
 P174 x_1291;
 P174 *res_1292;
 P174 i_3281;
 P174 head_3282;
 P174 tail_3283;
 P174 a_3284;
 P140 formal_3285;
 rt_int mark_3286;
 int more_3287;
};
struct f_generic_decl_1295fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1294;
 P117 y_3290;
};
struct f_is_generic_name_1297fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1296;
 int result_;
 P117 y_3291;
};
struct f_instantiates_1300fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1298;
 rt_gstr name_1299;
 int result_;
 P174 p_3292;
};
struct f_attach_generic_body_1302fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1301;
 P117 y_3294;
};
struct f_restore_generic_context_1306fr { int dummy;
 struct f_greenc_1fr *up;
 P174 body_node_1303;
 rt_int line_1304;
 rt_gstr inst_1305;
 P146 ctx_3297;
 P117 m_3298;
 P117 z_3299;
 int seen_3300;
};
struct f_gactual_1310fr { int dummy;
 struct f_greenc_1fr *up;
 P174 args_1307;
 rt_int nth_1308;
 rt_gstr name_1309;
 P174 result_;
 P174 a_3305;
 rt_int i_3306;
};
struct f_copy_node_1314fr { int dummy;
 struct f_greenc_1fr *up;
 P174 n_1311;
 P140 name_1312;
 P174 *r_1313;
};
struct f_matches_formal_1318fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_1315;
 rt_gstr name_1316;
 P117 fs_1317;
 int result_;
};
struct f_actual_type_1321fr { int dummy;
 struct f_greenc_1fr *up;
 P174 a_1319;
 P117 *y_1320;
};
struct f_actual_subprogram_1326fr { int dummy;
 struct f_greenc_1fr *up;
 P174 f_1322;
 P174 a_1323;
 rt_int line_1324;
 P117 *r_1325;
 P117 fs_3308;
 P117 y_3309;
 P140 name_3310;
 P117 m_3311;
};
struct f_wrap_operation_1332fr { int dummy;
 struct f_greenc_1fr *up;
 P174 f_1327;
 rt_gstr op_1328;
 P140 type_name_1329;
 rt_int line_1330;
 P117 *r_1331;
 P174 w_3317;
 P174 p_3318;
 P174 q_3319;
 P174 qt_3320;
 P174 ret_3321;
 P174 x_3322;
 P174 a1_3323;
 P174 a2_3324;
 P140 wname_3325;
 rt_int n_3326;
 P117 y_3327;
};
struct f_actual_mark_1335fr { int dummy;
 struct f_greenc_1fr *up;
 P174 st_1333;
 P174 *r_1334;
};
struct f_instantiate_1337fr { int dummy;
 struct f_greenc_1fr *up;
 P174 e_1336;
 P117 g_3329;
 P174 gd_3330;
 P174 pat_3331;
 P174 f_3332;
 P174 a_3333;
 P174 cn_3334;
 P174 rn_3335;
 P117 y_3336;
 P117 z_3337;
 P117 fs_3338;
 rt_int nth_3339;
 P122 t_3340;
 P122 vt_3341;
 P178 c_3342;
 P140 v_3343;
 P140 acc_3344;
 P140 x_3345;
 int ok_3346;
};
struct f_predef_type_1342fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1338;
 P122 t_1339;
 rt_gstr lo_1340;
 rt_gstr hi_1341;
 P117 y_3348;
};
struct f_predef_const_1346fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1343;
 P122 t_1344;
 rt_gstr code_text_1345;
 P117 y_3355;
};
struct f_predef_exc_1348fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1347;
 P117 y_3356;
};
struct f_predef_lit_1352fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1349;
 P122 t_1350;
 rt_int v_1351;
 P117 y_3357;
};
struct f_predefine_1353fr { int dummy;
 struct f_greenc_1fr *up;
 P117 y_3358;
 rt_gstr control_3359;
 rt_int start_3360;
 rt_int code_no_3361;
 rt_int i_3364;
 rt_int i_3372;
};
struct f_lib_open_1356fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1354;
 rt_int *length_1355;
};
struct f_lib_store_1359fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1357;
 rt_gstr contents_1358;
};
struct f_unit_key_1362fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1360;
 P140 *r_1361;
 rt_int k_3376;
};
struct f_lib_enabled_1364fr { int dummy;
 struct f_greenc_1fr *up;
 int *yes_1363;
};
struct f_store_units_1365fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_3384;
 P140 k_3385;
 int yes_3386;
};
struct f_store_span_1368fr { int dummy;
 struct f_greenc_1fr *up;
 P204 s_1366;
 rt_gstr key_1367;
 rt_int n_3388;
 P140 head_3389;
 rt_int l_3397;
 rt_gstr t_3404;
 rt_int k_3406;
 rt_int l_3410;
};
struct f_lib_load_1371fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1369;
 P174 *r_1370;
 rt_int n_3421;
 rt_int saved_line_3422;
 rt_int saved_pos_3423;
 rt_int from_3424;
};
struct f_defined_unit_1374fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1372;
 P174 before_1373;
 int result_;
 P174 u_3425;
};
struct f_library_units_1375fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_3428;
 P174 prev_3429;
 P174 l_3430;
 P174 ltail_3431;
 rt_int i_3432;
 rt_int j_3433;
 P140 n_3434;
 P140 f_3435;
 int changed_3436;
};
struct f_load_unit_1378fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1376;
 P174 *r_1377;
 P174 s_3449;
 P174 b_3450;
 P174 t_3451;
};
struct f_predefined_unit_1381fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1379;
 P174 *r_1380;
 rt_int saved_pos_3453;
 rt_int from_3454;
};
struct f_prelude_1382fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_used_units_1385fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1383;
 P140 *r_1384;
 P174 p_3455;
 P174 main_3456;
 int changed_3457;
};
struct f_add_names_1389fr { int dummy;
 struct f_greenc_1fr *up;
 P140 *r_1386;
 rt_gstr list_1387;
 int *changed_1388;
 rt_int i_3469;
 rt_int j_3471;
};
struct f_translate_1391fr { int dummy;
 struct f_greenc_1fr *up;
 P174 u_1390;
 P174 p_3482;
 P140 used_3483;
 P117 y_3484;
};
struct f_last_unit_1393fr { int dummy;
 struct f_greenc_1fr *up;
 P174 p_1392;
 int result_;
 P174 q_3491;
};
struct f_print_program_1394fr { int dummy;
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
 P174 cur_body_217;
 P140 saw_lang_218;
 int defer_entry_structs_219;
 P126 out_awaits_220;
 P178 no_cons_221;
 P174 units_222;
 P174 prelude_units_223;
 P151 pkg_stack_224;
 P174 cur_pkg_225;
 P140 prefix_hint_226;
 P122 call_want_227;
 P117 pure_sym_228;
 rt_int pure_depth_229;
 int vrp_ok_230;
 int in_lv_path_231;
 int last_deref_232;
 P140 main_name_233;
 P140 conf_system_234;
 rt_int conf_storage_unit_235;
 rt_int conf_memory_size_236;
 P140 conf_optimize_237;
};
static void as_A2750(A2750 *d, A2750 s);
static A2750 cp_A2750(A2750 s);
static int eq_A2750(A2750 a, A2750 b);
static A2750 cat_A2750(A2750 a, A2750 b);
static A2750 one_A2750(rt_int e);
static void as_A2747(A2747 *d, A2747 s);
static A2747 cp_A2747(A2747 s);
static int eq_A2747(A2747 a, A2747 b);
static A2747 cat_A2747(A2747 a, A2747 b);
static A2747 one_A2747(rt_int e);
static void as_A2742(A2742 *d, A2742 s);
static A2742 cp_A2742(A2742 s);
static int eq_A2742(A2742 a, A2742 b);
static A2742 cat_A2742(A2742 a, A2742 b);
static A2742 one_A2742(int e);
static A2742 and_A2742(A2742 a, A2742 b);
static A2742 or_A2742(A2742 a, A2742 b);
static A2742 xor_A2742(A2742 a, A2742 b);
static A2742 not_A2742(A2742 a);
static void as_A2419(A2419 *d, A2419 s);
static A2419 cp_A2419(A2419 s);
static int eq_A2419(A2419 a, A2419 b);
static A2419 cat_A2419(A2419 a, A2419 b);
static A2419 one_A2419(rt_int e);
static void as_R2088(R2088 *d, R2088 s);
static R2088 cp_R2088(R2088 s);
static int eq_R2088(R2088 a, R2088 b);
static void as_R1967(R1967 *d, R1967 s);
static R1967 cp_R1967(R1967 s);
static int eq_R1967(R1967 a, R1967 b);
static void as_R1963(R1963 *d, R1963 s);
static R1963 cp_R1963(R1963 s);
static int eq_R1963(R1963 a, R1963 b);
static void as_R1945(R1945 *d, R1945 s);
static R1945 cp_R1945(R1945 s);
static int eq_R1945(R1945 a, R1945 b);
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
static P140 f_mk_239(struct f_greenc_1fr *up_, rt_gstr s_238);
static void f_new_name_242(struct f_greenc_1fr *up_, rt_gstr base_240, P140 *res_241);
static int f_is_letter_244(struct f_greenc_1fr *up_, int c_243);
static int f_is_digit_246(struct f_greenc_1fr *up_, int c_245);
static int f_upper_248(struct f_greenc_1fr *up_, int c_247);
static rt_gstr f_lower_s_250(struct f_greenc_1fr *up_, rt_gstr s_249);
static rt_gstr f_upper_s_252(struct f_greenc_1fr *up_, rt_gstr s_251);
static int f_is_operator_254(struct f_greenc_1fr *up_, rt_gstr s_253);
static rt_gstr f_c_field_256(struct f_greenc_1fr *up_, rt_gstr s_255);
static rt_gstr f_q_257(struct f_greenc_1fr *up_);
static void f_fail_260(struct f_greenc_1fr *up_, rt_int line_258, rt_gstr msg_259);
static P126 f_new_buffer_261(struct f_greenc_1fr *up_);
static void f_put_to_264(struct f_greenc_1fr *up_, P126 b_262, rt_gstr s_263);
static void f_emit_266(struct f_greenc_1fr *up_, rt_gstr s_265);
static void f_print_buffer_268(struct f_greenc_1fr *up_, P126 b_267);
static void f_splice_271(struct f_greenc_1fr *up_, P126 a_269, P126 b_270);
static int f_is_reserved_273(struct f_greenc_1fr *up_, rt_gstr w_272);
static void f_add_token_277(struct f_greenc_1fr *up_, rt_int kind_274, rt_gstr s_275, rt_int ival_276);
static rt_int f_digit_value_279(struct f_greenc_1fr *up_, int c_278);
static rt_int f_digit_in_282(struct f_greenc_1fr *up_, int c_280, rt_int base_281);
static void f_accumulate_286(struct f_greenc_1fr *up_, rt_int *v_283, rt_int base_284, rt_int d_285);
static void f_lex_line_288(struct f_greenc_1fr *up_, rt_gstr line_287);
static int f_exponent_ahead_291(struct f_greenc_1fr *up_, rt_gstr line_289, rt_int j_290);
static void f_exponent_296(struct f_greenc_1fr *up_, rt_gstr line_292, rt_int *j_293, rt_gstr *buf_294, rt_int *bl_295);
static void f_include_open_299(struct f_greenc_1fr *up_, rt_gstr name_297, rt_int *length_298);
static void f_include_char_302(struct f_greenc_1fr *up_, rt_int i_300, int *c_301);
static void f_check_include_303(struct f_greenc_1fr *up_);
static void f_include_text_305(struct f_greenc_1fr *up_, rt_int n_304);
static void f_include_line_309(struct f_greenc_1fr *up_, rt_gstr t_306, rt_int from_307, rt_int to_308);
static void f_read_source_310(struct f_greenc_1fr *up_);
static P174 f_nn_313(struct f_greenc_1fr *up_, rt_int kind_311, rt_int line_312);
static void f_append_317(struct f_greenc_1fr *up_, P174 *head_314, P174 *tail_315, P174 x_316);
static rt_int f_list_len_319(struct f_greenc_1fr *up_, P174 l_318);
static rt_int f_cur_line_320(struct f_greenc_1fr *up_);
static int f_at_kw_322(struct f_greenc_1fr *up_, rt_gstr w_321);
static int f_at_op_324(struct f_greenc_1fr *up_, rt_gstr w_323);
static int f_at_kind_326(struct f_greenc_1fr *up_, rt_int k_325);
static rt_int f_kind_at_328(struct f_greenc_1fr *up_, rt_int k_327);
static rt_gstr f_text_at_330(struct f_greenc_1fr *up_, rt_int k_329);
static void f_perror_332(struct f_greenc_1fr *up_, rt_gstr msg_331);
static void f_skip_333(struct f_greenc_1fr *up_);
static void f_expect_kw_335(struct f_greenc_1fr *up_, rt_gstr w_334);
static void f_expect_op_337(struct f_greenc_1fr *up_, rt_gstr w_336);
static void f_expect_id_339(struct f_greenc_1fr *up_, P140 *res_338);
static void f_name_node_341(struct f_greenc_1fr *up_, P174 *res_340);
static void f_id_list_343(struct f_greenc_1fr *up_, P174 *res_342);
static P174 f_binop_348(struct f_greenc_1fr *up_, P140 op_344, P174 l_345, P174 r_346, rt_int line_347);
static void f_expr_350(struct f_greenc_1fr *up_, P174 *res_349);
static int f_is_rel_352(struct f_greenc_1fr *up_, rt_gstr s_351);
static void f_relation_354(struct f_greenc_1fr *up_, P174 *res_353);
static rt_gstr f_path_of_356(struct f_greenc_1fr *up_, P174 e_355);
static void f_simple_expr_358(struct f_greenc_1fr *up_, P174 *res_357);
static void f_term_360(struct f_greenc_1fr *up_, P174 *res_359);
static void f_factor_362(struct f_greenc_1fr *up_, P174 *res_361);
static void f_primary_364(struct f_greenc_1fr *up_, P174 *res_363);
static void f_agg_or_paren_366(struct f_greenc_1fr *up_, P174 *res_365);
static int f_choice_token_368(struct f_greenc_1fr *up_, P110 t_367);
static int f_aggregate_ahead_369(struct f_greenc_1fr *up_);
static void f_name_p_371(struct f_greenc_1fr *up_, P174 *res_370);
static void f_component_list_373(struct f_greenc_1fr *up_, P174 *res_372);
static void f_discrete_range_p_375(struct f_greenc_1fr *up_, P174 *res_374);
static void f_subtype_ind_377(struct f_greenc_1fr *up_, P174 *res_376);
static void f_type_spec_379(struct f_greenc_1fr *up_, P174 *res_378);
static void f_type_def_381(struct f_greenc_1fr *up_, P174 *res_380);
static void f_pragma_p_383(struct f_greenc_1fr *up_, P174 *res_382);
static void f_check_pragma_385(struct f_greenc_1fr *up_, P174 x_384);
static void f_visibility_p_387(struct f_greenc_1fr *up_, P140 *res_386);
static void f_unit_p_389(struct f_greenc_1fr *up_, P174 *res_388);
static void f_skip_representation_390(struct f_greenc_1fr *up_);
static void f_decl_part_392(struct f_greenc_1fr *up_, P174 *res_391);
static void f_object_decl_394(struct f_greenc_1fr *up_, P174 *res_393);
static void f_type_decl_396(struct f_greenc_1fr *up_, P174 *res_395);
static void f_formal_part_398(struct f_greenc_1fr *up_, P174 *res_397);
static void f_designator_400(struct f_greenc_1fr *up_, P140 *res_399);
static void f_subprogram_402(struct f_greenc_1fr *up_, P174 *res_401);
static void f_body_part_404(struct f_greenc_1fr *up_, P174 x_403);
static void f_parse_handlers_406(struct f_greenc_1fr *up_, P174 *res_405);
static void f_package_p_408(struct f_greenc_1fr *up_, P174 *res_407);
static int f_at_statements_end_409(struct f_greenc_1fr *up_);
static void f_statements_411(struct f_greenc_1fr *up_, P174 *res_410);
static void f_statement_413(struct f_greenc_1fr *up_, P174 *res_412);
static void f_labelled_statement_416(struct f_greenc_1fr *up_, P140 label_414, P174 *res_415);
static void f_task_statement_418(struct f_greenc_1fr *up_, P174 *res_417);
static void f_if_stmt_420(struct f_greenc_1fr *up_, P174 *res_419);
static void f_case_stmt_422(struct f_greenc_1fr *up_, P174 *res_421);
static void f_loop_stmt_424(struct f_greenc_1fr *up_, P174 *res_423);
static void f_compilation_426(struct f_greenc_1fr *up_, P174 *res_425);
static rt_int f_hash_428(struct f_greenc_1fr *up_, rt_gstr s_427);
static int f_listed_431(struct f_greenc_1fr *up_, P140 list_429, rt_gstr name_430);
static int f_visible_sym_433(struct f_greenc_1fr *up_, P117 y_432);
static P117 f_lookup_435(struct f_greenc_1fr *up_, rt_gstr name_434);
static int f_same_task_438(struct f_greenc_1fr *up_, P117 a_436, P117 b_437);
static P117 f_lookup_entry_441(struct f_greenc_1fr *up_, rt_gstr name_439, P117 owner_440);
static P117 f_lookup_at_444(struct f_greenc_1fr *up_, rt_gstr name_442, rt_int d_443);
static rt_int f_enclosing_depth_446(struct f_greenc_1fr *up_, rt_gstr name_445);
static void f_push_unit_448(struct f_greenc_1fr *up_, P140 name_447);
static P117 f_lookup_decl_450(struct f_greenc_1fr *up_, P174 d_449);
static int f_overloadable_452(struct f_greenc_1fr *up_, P117 y_451);
static int f_same_455(struct f_greenc_1fr *up_, P122 a_453, P122 b_454);
static P122 f_base_view_457(struct f_greenc_1fr *up_, P122 t_456);
static P122 f_root_459(struct f_greenc_1fr *up_, P122 t_458);
static int f_derived_from_462(struct f_greenc_1fr *up_, P122 a_460, P122 b_461);
static int f_is_numeric_464(struct f_greenc_1fr *up_, P122 t_463);
static int f_is_discrete_466(struct f_greenc_1fr *up_, P122 t_465);
static int f_same_types_469(struct f_greenc_1fr *up_, P1944 a_467, P1944 b_468);
static int f_same_signature_472(struct f_greenc_1fr *up_, P1944 a_470, P1944 b_471);
static int f_distinct_overload_475(struct f_greenc_1fr *up_, P117 y_473, P117 z_474);
static void f_define_478(struct f_greenc_1fr *up_, P117 y_476, rt_int line_477);
static void f_open_scope_479(struct f_greenc_1fr *up_);
static void f_close_scope_480(struct f_greenc_1fr *up_);
static P117 f_new_sym_483(struct f_greenc_1fr *up_, rt_int kind_481, P140 name_482);
static P122 f_new_typ_485(struct f_greenc_1fr *up_, rt_int kind_484);
static P178 f_new_cons_486(struct f_greenc_1fr *up_);
static int f_bounded_488(struct f_greenc_1fr *up_, P178 c_487);
static int f_bounded_hi_490(struct f_greenc_1fr *up_, P178 c_489);
static int f_static_bounds_492(struct f_greenc_1fr *up_, P178 c_491);
static int f_discriminated_494(struct f_greenc_1fr *up_, P178 c_493);
static rt_gstr f_kind_name_496(struct f_greenc_1fr *up_, P122 t_495);
static void f_check_type_500(struct f_greenc_1fr *up_, P122 got_497, P122 want_498, rt_int line_499);
static rt_int f_field_count_502(struct f_greenc_1fr *up_, P122 t_501);
static void f_ctype_505(struct f_greenc_1fr *up_, P122 t_503, P140 *r_504);
static void f_field_decls_508(struct f_greenc_1fr *up_, P122 t_506, P140 *r_507);
static void f_declare_ctype_510(struct f_greenc_1fr *up_, P122 t_509);
static rt_int f_lit_index_513(struct f_greenc_1fr *up_, P174 lits_511, rt_gstr name_512);
static void f_manifest_517(struct f_greenc_1fr *up_, P174 e_514, rt_int *v_515, int *ok_516);
static void f_resolve_521(struct f_greenc_1fr *up_, P174 st_518, P122 *t_519, P178 *c_520);
static void f_constraint_list_525(struct f_greenc_1fr *up_, P174 st_522, P122 t_523, P178 c_524);
static void f_discriminant_constraint_529(struct f_greenc_1fr *up_, P174 st_526, P122 t_527, P178 c_528);
static void f_discrete_bounds_535(struct f_greenc_1fr *up_, P174 r_530, P122 want_531, P122 *t_532, P140 *lo_533, P140 *hi_534);
static void f_range_of_539(struct f_greenc_1fr *up_, P174 r_536, P122 t_537, P178 c_538);
static void f_fresh_typ_543(struct f_greenc_1fr *up_, rt_int kind_540, P140 name_541, P122 *t_542);
static void f_inherit_547(struct f_greenc_1fr *up_, P122 parent_544, P122 t_545, rt_int line_546);
static void f_derive_literals_550(struct f_greenc_1fr *up_, P122 t_548, rt_int line_549);
static void f_type_definition_555(struct f_greenc_1fr *up_, P174 d_551, P140 name_552, P122 *t_553, P178 *c_554);
static void f_array_type_562(struct f_greenc_1fr *up_, P174 idx_556, P174 comp_557, P140 name_558, rt_int line_559, P122 *t_560, P178 *c_561);
static void f_static_range_566(struct f_greenc_1fr *up_, P174 l_563, P174 h_564, P178 c_565);
static void f_component_place_572(struct f_greenc_1fr *up_, P122 rt_567, P1962 f_568, rt_gstr a_569, rt_gstr ct_570, P140 *r_571);
static rt_gstr f_no_value_574(struct f_greenc_1fr *up_, P122 t_573);
static int f_restricted_here_576(struct f_greenc_1fr *up_, P122 t_575);
static void f_elem_ctype_579(struct f_greenc_1fr *up_, P122 t_577, P140 *r_578);
static void f_first_index_582(struct f_greenc_1fr *up_, P122 t_580, P140 *r_581);
static int f_is_string_584(struct f_greenc_1fr *up_, P122 t_583);
static rt_gstr f_subst_587(struct f_greenc_1fr *up_, rt_gstr s_585, rt_gstr r_586);
static int f_mentions_record_589(struct f_greenc_1fr *up_, P140 s_588);
static void f_subst_cons_593(struct f_greenc_1fr *up_, P178 c_590, rt_gstr r_591, P178 *res_592);
static void f_remove_sym_595(struct f_greenc_1fr *up_, P117 y_594);
static void f_record_components_600(struct f_greenc_1fr *up_, P174 list_596, P122 t_597, P2087 g_598, rt_int line_599);
static void f_guard_cond_604(struct f_greenc_1fr *up_, P2087 g_601, P122 t_602, P140 *r_603);
static void f_arm_test_609(struct f_greenc_1fr *up_, P174 arm_605, P140 dname_606, rt_gstr d_607, P140 *x_608);
static void f_derived_type_614(struct f_greenc_1fr *up_, P174 d_610, P140 name_611, P122 *t_612, P178 *c_613);
static void f_real_type_619(struct f_greenc_1fr *up_, P174 d_615, P140 name_616, P122 *t_617, P178 *c_618);
static void f_finish_ptr_621(struct f_greenc_1fr *up_, P122 t_620);
static void f_init_storage_625(struct f_greenc_1fr *up_, rt_gstr lval_622, P122 t_623, P178 c_624);
static int f_composite_627(struct f_greenc_1fr *up_, P122 t_626);
static void f_assign_code_633(struct f_greenc_1fr *up_, rt_gstr lval_628, P122 t_629, rt_gstr v_630, P178 c_631, P140 *r_632);
static void f_copy_code_637(struct f_greenc_1fr *up_, P122 t_634, rt_gstr v_635, P140 *r_636);
static void f_eq_code_642(struct f_greenc_1fr *up_, P122 t_638, rt_gstr a_639, rt_gstr b_640, P140 *r_641);
static int f_seen_name_645(struct f_greenc_1fr *up_, P151 l_643, rt_gstr s_644);
static void f_emit_helpers_646(struct f_greenc_1fr *up_);
static void f_helper_bodies_648(struct f_greenc_1fr *up_, P122 t_647);
static void f_storage_652(struct f_greenc_1fr *up_, rt_gstr name_649, P122 t_650, P140 *access_code_651);
static void f_bind_655(struct f_greenc_1fr *up_, P117 y_653, P140 access_code_654);
static void f_declare_subprograms_657(struct f_greenc_1fr *up_, P174 from_656);
static int f_generic_before_660(struct f_greenc_1fr *up_, P174 from_658, P174 e_659);
static void f_declare_one_662(struct f_greenc_1fr *up_, P174 e_661);
static void f_elaborate_defaults_664(struct f_greenc_1fr *up_, P117 y_663);
static void f_build_subprogram_667(struct f_greenc_1fr *up_, P174 d_665, P117 *y_666);
static void f_decl_elements_669(struct f_greenc_1fr *up_, P174 decls_668);
static void f_decl_element_671(struct f_greenc_1fr *up_, P174 e_670);
static void f_decl_element_1_673(struct f_greenc_1fr *up_, P174 e_672);
static void f_pragma_decl_675(struct f_greenc_1fr *up_, P174 e_674);
static void f_resolve_object_type_679(struct f_greenc_1fr *up_, P174 st_676, P122 *t_677, P178 *c_678);
static void f_find_subunit_682(struct f_greenc_1fr *up_, P174 e_680, P174 *r_681);
static void f_stub_684(struct f_greenc_1fr *up_, P174 e_683);
static void f_rename_subprogram_686(struct f_greenc_1fr *up_, P174 e_685);
static void f_rename_module_689(struct f_greenc_1fr *up_, P174 e_687, P174 target_688);
static void f_push_barrier_692(struct f_greenc_1fr *up_, P174 e_690, rt_int limit_691);
static void f_other_decl_694(struct f_greenc_1fr *up_, P174 e_693);
static void f_scan_labels_697(struct f_greenc_1fr *up_, P174 stmts_695, rt_gstr path_696);
static void f_scan_guarded_701(struct f_greenc_1fr *up_, P174 stmts_698, P174 hs_699, rt_gstr path_700);
static rt_int f_count_g_703(struct f_greenc_1fr *up_, rt_gstr p_702);
static void f_label_body_706(struct f_greenc_1fr *up_, P174 stmts_704, P174 hs_705);
static void f_gen_label_709(struct f_greenc_1fr *up_, P174 s_707, int goto_it_708);
static int f_is_foreign_711(struct f_greenc_1fr *up_, P174 d_710);
static void f_foreign_call_715(struct f_greenc_1fr *up_, P174 d_712, P117 y_713, P140 *r_714);
static void f_unsafe_bits_721(struct f_greenc_1fr *up_, P122 s_716, P122 t_717, rt_gstr v_718, rt_gstr ct_719, P140 *r_720);
static P117 f_code_type_723(struct f_greenc_1fr *up_, P174 s_722);
static void f_check_code_body_726(struct f_greenc_1fr *up_, P174 d_724, P117 y_725);
static void f_subprogram_body_729(struct f_greenc_1fr *up_, P174 d_727, P117 y_728);
static void f_gen_statements_731(struct f_greenc_1fr *up_, P174 stmts_730);
static void f_pop_frames_733(struct f_greenc_1fr *up_, rt_int upto_732);
static void f_push_cleanup_735(struct f_greenc_1fr *up_, rt_gstr s_734);
static void f_pop_cleanup_736(struct f_greenc_1fr *up_);
static void f_guarded_741(struct f_greenc_1fr *up_, P174 decls_737, P174 stmts_738, P174 hs_739, rt_int line_740);
static void f_exc_id_745(struct f_greenc_1fr *up_, rt_gstr name_742, rt_int line_743, P140 *r_744);
static void f_gen_statement_747(struct f_greenc_1fr *up_, P174 s_746);
static void f_slice_assign_749(struct f_greenc_1fr *up_, P174 s_748);
static void f_gen_call_751(struct f_greenc_1fr *up_, P174 s_750);
static void f_gen_if_753(struct f_greenc_1fr *up_, P174 s_752);
static void f_gen_case_755(struct f_greenc_1fr *up_, P174 s_754);
static void f_selector_range_761(struct f_greenc_1fr *up_, P174 e_756, P122 t_757, rt_int *lo_758, rt_int *hi_759, int *ok_760);
static void f_push_exit_765(struct f_greenc_1fr *up_, P140 match_762, int is_loop_763, P140 *label_764);
static void f_gen_loop_767(struct f_greenc_1fr *up_, P174 s_766);
static void f_gen_block_769(struct f_greenc_1fr *up_, P174 s_768);
static int f_exit_matches_772(struct f_greenc_1fr *up_, P174 s_770, P143 x_771);
static void f_gen_exit_774(struct f_greenc_1fr *up_, P174 s_773);
static void f_gen_return_776(struct f_greenc_1fr *up_, P174 s_775);
static void f_access_of_779(struct f_greenc_1fr *up_, P117 y_777, P140 *r_778);
static void f_link_to_782(struct f_greenc_1fr *up_, rt_int l_780, P140 *r_781);
static rt_gstr f_c_ident_784(struct f_greenc_1fr *up_, rt_gstr s_783);
static void f_deref_788(struct f_greenc_1fr *up_, rt_gstr base_785, P122 t_786, P140 *r_787);
static int f_is_object_790(struct f_greenc_1fr *up_, P174 e_789);
static int f_is_const_access_792(struct f_greenc_1fr *up_, P174 e_791);
static void f_lvalue_798(struct f_greenc_1fr *up_, P174 e_793, P140 *code_out_794, P122 *t_795, P178 *c_796, int *ro_797);
static void f_select_on_807(struct f_greenc_1fr *up_, rt_gstr base_799, P122 bt_800, P174 e_801, int *ro_802, int lv_803, P140 *code_out_804, P122 *t_805, P178 *c_806);
static void f_index_on_816(struct f_greenc_1fr *up_, rt_gstr base_808, P122 bt_809, P174 e_810, int *ro_811, int lv_812, P140 *code_out_813, P122 *t_814, P178 *c_815);
static int f_type_attribute_819(struct f_greenc_1fr *up_, P122 t_817, rt_gstr name_818);
static int f_is_type_name_821(struct f_greenc_1fr *up_, rt_gstr n_820);
static int f_is_char_lit_823(struct f_greenc_1fr *up_, P174 e_822);
static int f_is_enum_lit_825(struct f_greenc_1fr *up_, P174 e_824);
static rt_gstr f_c_string_827(struct f_greenc_1fr *up_, rt_gstr s_826);
static int f_is_literal_829(struct f_greenc_1fr *up_, P174 e_828);
static void f_range_bounds_837(struct f_greenc_1fr *up_, P174 l_830, P174 h_831, P122 want_832, rt_int line_833, P122 *t_834, P140 *lo_835, P140 *hi_836);
static void f_gexpr_842(struct f_greenc_1fr *up_, P174 e_838, P122 want_839, P122 *t_840, P140 *r_841);
static void f_gexpr_1_847(struct f_greenc_1fr *up_, P174 e_843, P122 want_844, P122 *t_845, P140 *r_846);
static void f_string_aggregate_852(struct f_greenc_1fr *up_, P174 e_848, P122 want_849, P122 *t_850, P140 *r_851);
static void f_char_literal_857(struct f_greenc_1fr *up_, P174 e_853, P122 want_854, P122 *t_855, P140 *r_856);
static void f_expanded_860(struct f_greenc_1fr *up_, P174 e_858, P174 *r_859);
static void f_gen_name_865(struct f_greenc_1fr *up_, P174 e_861, P122 want_862, P122 *t_863, P140 *r_864);
static void f_gen_unop_870(struct f_greenc_1fr *up_, P174 e_866, P122 want_867, P122 *t_868, P140 *r_869);
static int f_short_int_872(struct f_greenc_1fr *up_, P122 t_871);
static rt_gstr f_float_kind_874(struct f_greenc_1fr *up_, P122 t_873);
static void f_membership_877(struct f_greenc_1fr *up_, P174 e_875, P140 *r_876);
static void f_condition_882(struct f_greenc_1fr *up_, P174 e_878, P122 want_879, P122 *t_880, P140 *r_881);
static void f_catenation_887(struct f_greenc_1fr *up_, P174 e_883, P122 want_884, P122 *t_885, P140 *r_886);
static void f_cat_operand_892(struct f_greenc_1fr *up_, P174 x_888, P122 arrt_889, rt_int line_890, P140 *r_891);
static void f_arithmetic_897(struct f_greenc_1fr *up_, P174 e_893, P122 want_894, P122 *t_895, P140 *r_896);
static void f_fixed_operation_905(struct f_greenc_1fr *up_, P174 e_898, P122 ta_899, P122 tb_900, rt_gstr a_901, rt_gstr b_902, P122 *t_903, P140 *r_904);
static void f_gen_binop_910(struct f_greenc_1fr *up_, P174 e_906, P122 want_907, P122 *t_908, P140 *r_909);
static void f_code_statement_914(struct f_greenc_1fr *up_, P174 e_911, P117 y_912, P140 *r_913);
static void f_conversion_919(struct f_greenc_1fr *up_, P174 e_915, P117 y_916, P122 *t_917, P140 *r_918);
static void f_constrain_923(struct f_greenc_1fr *up_, P117 y_920, P122 t_921, P140 *r_922);
static void f_array_conversion_930(struct f_greenc_1fr *up_, P174 e_924, P122 t_925, P122 aty_926, P178 c_927, rt_gstr a_928, P140 *r_929);
static void f_gen_attr_935(struct f_greenc_1fr *up_, P174 e_931, P122 want_932, P122 *t_933, P140 *r_934);
static void f_type_bits_939(struct f_greenc_1fr *up_, P122 t_936, P178 c_937, P140 *r_938);
static void f_object_bits_943(struct f_greenc_1fr *up_, P122 t_940, rt_gstr v_941, P140 *r_942);
static void f_numeric_attr_949(struct f_greenc_1fr *up_, P174 e_944, P122 tt_945, P178 c_946, P122 *t_947, P140 *r_948);
static void f_component_attr_953(struct f_greenc_1fr *up_, P174 e_950, P122 *t_951, P140 *r_952);
static void f_config_attr_957(struct f_greenc_1fr *up_, P174 e_954, P122 *t_955, P140 *r_956);
static void f_attr_dim_961(struct f_greenc_1fr *up_, P174 e_958, P122 arrt_959, rt_int *n_960);
static void f_object_array_attr_967(struct f_greenc_1fr *up_, P174 e_962, P122 arrt_963, rt_gstr v_964, P122 *t_965, P140 *r_966);
static void f_type_array_attr_973(struct f_greenc_1fr *up_, P174 e_968, P122 arrt_969, P178 c_970, P122 *t_971, P140 *r_972);
static void f_lit_table_976(struct f_greenc_1fr *up_, P122 t_974, P140 *r_975);
static void f_val_rep_982(struct f_greenc_1fr *up_, P174 e_977, P122 tt_978, P178 c_979, P122 *t_980, P140 *r_981);
static void f_allocator_987(struct f_greenc_1fr *up_, P174 e_983, P122 want_984, P122 *t_985, P140 *r_986);
static void f_aggregate_992(struct f_greenc_1fr *up_, P174 e_988, P122 want_989, P122 *t_990, P140 *r_991);
static void f_captured_995(struct f_greenc_1fr *up_, P126 b_993, P140 *r_994);
static P1962 f_field_at_998(struct f_greenc_1fr *up_, P122 rt_996, rt_int k_997);
static int f_names_field_1001(struct f_greenc_1fr *up_, P174 x_999, P1962 f_1000);
static P174 f_item_for_1006(struct f_greenc_1fr *up_, P174 e_1002, P122 rt_1003, rt_int k_1004, rt_int p_1005);
static void f_arm_holds_1010(struct f_greenc_1fr *up_, P174 arm_1007, rt_int v_1008, int *res_1009);
static void f_record_aggregate_1014(struct f_greenc_1fr *up_, P174 e_1011, P122 rt_1012, P140 *r_1013);
static rt_int f_field_index_1017(struct f_greenc_1fr *up_, P122 rt_1015, rt_gstr name_1016);
static void f_agg_component_1023(struct f_greenc_1fr *up_, rt_gstr tmp_1018, P122 rt_1019, rt_int k_1020, P174 v_1021, rt_int line_1022);
static void f_static_choice_1027(struct f_greenc_1fr *up_, P174 x_1024, rt_int *v_1025, int *ok_1026);
static void f_array_aggregate_1032(struct f_greenc_1fr *up_, P174 e_1028, P122 arrt_1029, P140 bounds_1030, P140 *r_1031);
static void f_element_store_1036(struct f_greenc_1fr *up_, rt_gstr lv_1033, P122 arrt_1034, rt_gstr v_1035);
static void f_check_choices_1040(struct f_greenc_1fr *up_, P174 e_1037, P122 arrt_1038, int has_others_1039);
static P174 f_actual_for_1044(struct f_greenc_1fr *up_, P174 args_1041, P1944 pm_1042, P1944 first_1043);
static void f_gcall_1049(struct f_greenc_1fr *up_, P174 e_1045, int is_stmt_1046, P122 *t_1047, P140 *r_1048);
static void f_out_check_1053(struct f_greenc_1fr *up_, rt_gstr lv_1050, P122 t_1051, P178 c_1052);
static void f_var_path_1056(struct f_greenc_1fr *up_, P174 e_1054, P140 *r_1055);
static int f_paths_overlap_1059(struct f_greenc_1fr *up_, rt_gstr p_1057, rt_gstr r_1058);
static int f_mentions_1062(struct f_greenc_1fr *up_, P174 n_1060, rt_gstr name_1061);
static int f_mentions_one_1065(struct f_greenc_1fr *up_, P174 n_1063, rt_gstr name_1064);
static void f_check_aliasing_1069(struct f_greenc_1fr *up_, P174 e_1066, P117 y_1067, P174 a_1068);
static void f_gcall_with_1074(struct f_greenc_1fr *up_, P174 e_1070, P117 y_1071, P122 *t_1072, P140 *r_1073);
static void f_builtin_1081(struct f_greenc_1fr *up_, rt_gstr name_1075, P174 args_1076, rt_int line_1077, int is_stmt_1078, P122 *t_1079, P140 *r_1080);
static P117 f_lookup_path_1083(struct f_greenc_1fr *up_, rt_gstr p_1082);
static int f_is_package_1085(struct f_greenc_1fr *up_, P174 e_1084);
static P117 f_member_of_1089(struct f_greenc_1fr *up_, rt_gstr p_1086, rt_gstr name_1087, rt_int line_1088);
static int f_inside_package_1091(struct f_greenc_1fr *up_, P174 p_1090);
static void f_copy_sym_1094(struct f_greenc_1fr *up_, P117 y_1092, P117 *z_1093);
static void f_complete_private_1097(struct f_greenc_1fr *up_, P122 ph_1095, P122 full_1096);
static void f_package_spec_1099(struct f_greenc_1fr *up_, P174 e_1098);
static int f_hidden_from_1102(struct f_greenc_1fr *up_, P117 m_1100, P117 first_private_1101);
static void f_package_body_1104(struct f_greenc_1fr *up_, P174 e_1103);
static int f_use_visible_1106(struct f_greenc_1fr *up_, P117 old_1105);
static void f_use_clause_1108(struct f_greenc_1fr *up_, P174 e_1107);
static int f_usable_over_1110(struct f_greenc_1fr *up_, P117 old_1109);
static int f_same_entity_1113(struct f_greenc_1fr *up_, P117 a_1111, P117 b_1112);
static void f_fits_1118(struct f_greenc_1fr *up_, P117 y_1114, P174 args_1115, P122 want_1116, int *ok_1117);
static int f_is_builtin_1120(struct f_greenc_1fr *up_, rt_gstr n_1119);
static void f_resolve_overload_1127(struct f_greenc_1fr *up_, rt_gstr name_1121, P174 args_1122, int is_stmt_1123, P122 want_1124, rt_int line_1125, P117 *y_1126);
static int f_same_profile_1130(struct f_greenc_1fr *up_, P117 a_1128, P117 b_1129);
static void f_resolve_member_overload_1138(struct f_greenc_1fr *up_, rt_gstr p_1131, rt_gstr name_1132, P174 args_1133, int is_stmt_1134, P122 want_1135, rt_int line_1136, P117 *y_1137);
static void f_user_operator_1144(struct f_greenc_1fr *up_, P174 e_1139, P122 want_1140, P122 *t_1141, P140 *r_1142, int *done_1143);
static void f_task_p_1146(struct f_greenc_1fr *up_, P174 *res_1145);
static void f_entry_p_1148(struct f_greenc_1fr *up_, P174 *res_1147);
static void f_accept_p_1150(struct f_greenc_1fr *up_, P174 *res_1149);
static void f_delay_p_1152(struct f_greenc_1fr *up_, P174 *res_1151);
static void f_designators_1154(struct f_greenc_1fr *up_, P174 *res_1153);
static void f_parse_task_statement_1156(struct f_greenc_1fr *up_, P174 *res_1155);
static void f_path_at_1160(struct f_greenc_1fr *up_, rt_int level_1157, rt_gstr field_1158, P140 *r_1159);
static int f_is_task_name_1162(struct f_greenc_1fr *up_, rt_gstr n_1161);
static void f_task_of_1166(struct f_greenc_1fr *up_, P174 e_1163, P117 *y_1164, P174 *ix_1165);
static void f_own_index_1169(struct f_greenc_1fr *up_, P117 t_1167, P140 *r_1168);
static void f_member_1174(struct f_greenc_1fr *up_, P117 y_1170, rt_gstr arr_1171, rt_gstr i_1172, P140 *r_1173);
static void f_act_path_1177(struct f_greenc_1fr *up_, P117 y_1175, P140 *r_1176);
static void f_act_path_i_1181(struct f_greenc_1fr *up_, P117 y_1178, rt_gstr i_1179, P140 *r_1180);
static void f_entry_path_1185(struct f_greenc_1fr *up_, P117 y_1182, rt_gstr i_1183, P140 *r_1184);
static void f_declare_slot_1188(struct f_greenc_1fr *up_, rt_gstr ctype_name_1186, rt_gstr field_1187);
static void f_task_decl_1190(struct f_greenc_1fr *up_, P174 e_1189);
static void f_family_arg_struct_1191(struct f_greenc_1fr *up_);
static void f_family_bounds_1196(struct f_greenc_1fr *up_, P174 b_1192, P117 y_1193, P140 x_1194, int per_member_1195);
static void f_entry_family_slot_1201(struct f_greenc_1fr *up_, P117 y_1197, rt_gstr base_1198, rt_gstr i_1199, P140 *r_1200);
static void f_task_spec_1203(struct f_greenc_1fr *up_, P174 e_1202);
static void f_entry_decl_1205(struct f_greenc_1fr *up_, P174 e_1204);
static void f_task_body_1207(struct f_greenc_1fr *up_, P174 e_1206);
static void f_task_awaits_1210(struct f_greenc_1fr *up_, P174 decls_1208, P140 *aw_1209);
static void f_task_failure_1212(struct f_greenc_1fr *up_, P174 s_1211);
static void f_entry_sym_1216(struct f_greenc_1fr *up_, P174 e_1213, P117 *y_1214, P174 *ix_1215);
static void f_entry_overload_1221(struct f_greenc_1fr *up_, P117 y_1217, P174 args_1218, rt_int line_1219, P117 *r_1220);
static void f_other_call_1226(struct f_greenc_1fr *up_, P174 e_1222, int is_stmt_1223, P122 *t_1224, P140 *r_1225);
static void f_other_attr_1231(struct f_greenc_1fr *up_, P174 e_1227, P117 y_1228, P122 *t_1229, P140 *r_1230);
static void f_member_attr_1235(struct f_greenc_1fr *up_, P174 e_1232, P122 *t_1233, P140 *r_1234);
static void f_task_builtin_1241(struct f_greenc_1fr *up_, rt_gstr name_1236, P174 args_1237, rt_int line_1238, P122 *t_1239, P140 *r_1240);
static void f_accept_entry_1244(struct f_greenc_1fr *up_, P174 s_1242, P117 *r_1243);
static void f_accept_conforms_1248(struct f_greenc_1fr *up_, P174 s_1245, P117 y_1246, int *ok_1247);
static void f_gen_accept_1250(struct f_greenc_1fr *up_, P174 s_1249);
static void f_member_slot_1254(struct f_greenc_1fr *up_, P117 y_1251, P174 s_1252, P140 *ent_1253);
static void f_gen_delay_ticks_1257(struct f_greenc_1fr *up_, P174 e_1255, P140 *r_1256);
static void f_gen_select_1259(struct f_greenc_1fr *up_, P174 s_1258);
static void f_family_range_1264(struct f_greenc_1fr *up_, P117 y_1260, P174 ix_1261, P140 *lo_1262, P140 *hi_1263);
static void f_task_statement_gen_1266(struct f_greenc_1fr *up_, P174 s_1265);
static P174 f_root_name_1268(struct f_greenc_1fr *up_, P174 e_1267);
static void f_check_pure_target_1271(struct f_greenc_1fr *up_, P174 target_1269, rt_int line_1270);
static int f_assigns_nonlocal_1274(struct f_greenc_1fr *up_, P174 d_1272, rt_gstr name_1273);
static int f_declares_1277(struct f_greenc_1fr *up_, P174 d_1275, rt_gstr name_1276);
static int f_scan_handlers_1281(struct f_greenc_1fr *up_, P174 h_1278, P174 d_1279, rt_gstr name_1280);
static int f_scan_assigns_1285(struct f_greenc_1fr *up_, P174 stmts_1282, P174 d_1283, rt_gstr name_1284);
static void f_check_call_rules_1288(struct f_greenc_1fr *up_, P174 e_1286, P117 y_1287);
static void f_generic_p_1290(struct f_greenc_1fr *up_, P174 *res_1289);
static void f_instantiation_1293(struct f_greenc_1fr *up_, P174 x_1291, P174 *res_1292);
static void f_generic_decl_1295(struct f_greenc_1fr *up_, P174 e_1294);
static int f_is_generic_name_1297(struct f_greenc_1fr *up_, rt_gstr n_1296);
static int f_instantiates_1300(struct f_greenc_1fr *up_, P174 n_1298, rt_gstr name_1299);
static void f_attach_generic_body_1302(struct f_greenc_1fr *up_, P174 e_1301);
static void f_restore_generic_context_1306(struct f_greenc_1fr *up_, P174 body_node_1303, rt_int line_1304, rt_gstr inst_1305);
static P174 f_gactual_1310(struct f_greenc_1fr *up_, P174 args_1307, rt_int nth_1308, rt_gstr name_1309);
static void f_copy_node_1314(struct f_greenc_1fr *up_, P174 n_1311, P140 name_1312, P174 *r_1313);
static int f_matches_formal_1318(struct f_greenc_1fr *up_, P117 y_1315, rt_gstr name_1316, P117 fs_1317);
static void f_actual_type_1321(struct f_greenc_1fr *up_, P174 a_1319, P117 *y_1320);
static void f_actual_subprogram_1326(struct f_greenc_1fr *up_, P174 f_1322, P174 a_1323, rt_int line_1324, P117 *r_1325);
static void f_wrap_operation_1332(struct f_greenc_1fr *up_, P174 f_1327, rt_gstr op_1328, P140 type_name_1329, rt_int line_1330, P117 *r_1331);
static void f_actual_mark_1335(struct f_greenc_1fr *up_, P174 st_1333, P174 *r_1334);
static void f_instantiate_1337(struct f_greenc_1fr *up_, P174 e_1336);
static void f_predef_type_1342(struct f_greenc_1fr *up_, rt_gstr name_1338, P122 t_1339, rt_gstr lo_1340, rt_gstr hi_1341);
static void f_predef_const_1346(struct f_greenc_1fr *up_, rt_gstr name_1343, P122 t_1344, rt_gstr code_text_1345);
static void f_predef_exc_1348(struct f_greenc_1fr *up_, rt_gstr name_1347);
static void f_predef_lit_1352(struct f_greenc_1fr *up_, rt_gstr name_1349, P122 t_1350, rt_int v_1351);
static void f_predefine_1353(struct f_greenc_1fr *up_);
static void f_lib_open_1356(struct f_greenc_1fr *up_, rt_gstr key_1354, rt_int *length_1355);
static void f_lib_store_1359(struct f_greenc_1fr *up_, rt_gstr key_1357, rt_gstr contents_1358);
static void f_unit_key_1362(struct f_greenc_1fr *up_, P174 u_1360, P140 *r_1361);
static void f_lib_enabled_1364(struct f_greenc_1fr *up_, int *yes_1363);
static void f_store_units_1365(struct f_greenc_1fr *up_);
static void f_store_span_1368(struct f_greenc_1fr *up_, P204 s_1366, rt_gstr key_1367);
static void f_lib_load_1371(struct f_greenc_1fr *up_, rt_gstr key_1369, P174 *r_1370);
static int f_defined_unit_1374(struct f_greenc_1fr *up_, rt_gstr name_1372, P174 before_1373);
static void f_library_units_1375(struct f_greenc_1fr *up_);
static void f_load_unit_1378(struct f_greenc_1fr *up_, rt_gstr name_1376, P174 *r_1377);
static void f_predefined_unit_1381(struct f_greenc_1fr *up_, rt_gstr name_1379, P174 *r_1380);
static void f_prelude_1382(struct f_greenc_1fr *up_);
static void f_used_units_1385(struct f_greenc_1fr *up_, P174 u_1383, P140 *r_1384);
static void f_add_names_1389(struct f_greenc_1fr *up_, P140 *r_1386, rt_gstr list_1387, int *changed_1388);
static void f_translate_1391(struct f_greenc_1fr *up_, P174 u_1390);
static int f_last_unit_1393(struct f_greenc_1fr *up_, P174 p_1392);
static void f_print_program_1394(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_108;
static P140 f_mk_239(struct f_greenc_1fr *up_, rt_gstr s_238) {
  struct f_mk_239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_238 = cp_rt_gstr(s_238);
F->r_1396.lo = ((rt_int)1LL); F->r_1396.hi = ({ rt_gstr at1395 = F->s_238; at1395.hi >= at1395.lo ? at1395.hi - at1395.lo + 1 : (rt_int)0; });
F->r_1396.lo2 = 1; F->r_1396.hi2 = 1;
F->r_1396.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1396));
memset(F->r_1396.p, 0xFF, (size_t)G_CNT(F->r_1396));
as_rt_gstr(&F->r_1396, F->s_238);
F->result_ = ({ rt_gstr *cell1398 = rt_alloc(sizeof(rt_gstr)); *cell1398 = cp_rt_gstr(F->r_1396); (P140)cell1398; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_242(struct f_greenc_1fr *up_, rt_gstr base_240, P140 *res_241) {
  struct f_new_name_242fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_240 = cp_rt_gstr(base_240);
F->res_241 = res_241;
F->up->serial_125 = rt_add(G_NV(F->up->serial_125), ((rt_int)1LL));
(*F->res_241) = ({ rt_gstr *cell1399 = rt_alloc(sizeof(rt_gstr)); *cell1399 = cp_rt_gstr(cat_rt_gstr(F->base_240, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_125))))); (P140)cell1399; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_244(struct f_greenc_1fr *up_, int c_243) {
  struct f_is_letter_244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_243 = c_243;
F->result_ = (((F->c_243 >= 65) && (F->c_243 <= 90)) || ((F->c_243 >= 97) && (F->c_243 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_246(struct f_greenc_1fr *up_, int c_245) {
  struct f_is_digit_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_245 = c_245;
F->result_ = ((F->c_245 >= 48) && (F->c_245 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_248(struct f_greenc_1fr *up_, int c_247) {
  struct f_upper_248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_247 = c_247;
if (((F->c_247 >= 97) && (F->c_247 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_247) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_247, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_250(struct f_greenc_1fr *up_, rt_gstr s_249) {
  struct f_lower_s_250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_249 = cp_rt_gstr(s_249);
F->r_1400 = cp_rt_gstr(F->s_249);
{ rt_int lo1404 = ((rt_int)1LL), hi1405 = ({ rt_gstr at1402 = F->s_249; at1402.hi >= at1402.lo ? at1402.hi - at1402.lo + 1 : (rt_int)0; });
for (rt_int it1406 = lo1404; it1406 <= hi1405; it1406++) {
F->i_1403 = it1406;
if (((G_NV(({ rt_gstr ix1407 = F->r_1400; ix1407.p[rt_index(F->i_1403, ix1407.lo, ix1407.hi) - ix1407.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1408 = F->r_1400; ix1408.p[rt_index(F->i_1403, ix1408.lo, ix1408.hi) - ix1408.lo]; })) <= 90))) {
(*({ rt_gstr *ix1409 = &(F->r_1400); &ix1409->p[rt_index(F->i_1403, ix1409->lo, ix1409->hi) - ix1409->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1410 = F->r_1400; ix1410.p[rt_index(F->i_1403, ix1410.lo, ix1410.hi) - ix1410.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1401: ;
F->result_ = F->r_1400;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_252(struct f_greenc_1fr *up_, rt_gstr s_251) {
  struct f_upper_s_252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_251 = cp_rt_gstr(s_251);
F->r_1411 = cp_rt_gstr(F->s_251);
{ rt_int lo1415 = ((rt_int)1LL), hi1416 = ({ rt_gstr at1413 = F->s_251; at1413.hi >= at1413.lo ? at1413.hi - at1413.lo + 1 : (rt_int)0; });
for (rt_int it1417 = lo1415; it1417 <= hi1416; it1417++) {
F->i_1414 = it1417;
(*({ rt_gstr *ix1418 = &(F->r_1411); &ix1418->p[rt_index(F->i_1414, ix1418->lo, ix1418->hi) - ix1418->lo]; })) = f_upper_248(F->up, G_NV(({ rt_gstr ix1420 = F->r_1411; ix1420.p[rt_index(F->i_1414, ix1420.lo, ix1420.hi) - ix1420.lo]; })));
}
}
L_end_1412: ;
F->result_ = F->r_1411;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_254(struct f_greenc_1fr *up_, rt_gstr s_253) {
  struct f_is_operator_254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_253 = cp_rt_gstr(s_253);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_253, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_253, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_253, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_253, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_253, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_253, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_253, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_253, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_253, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_253, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_253, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_256(struct f_greenc_1fr *up_, rt_gstr s_255) {
  struct f_c_field_256fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_255 = cp_rt_gstr(s_255);
F->result_ = cat_rt_gstr(f_lower_s_250(F->up, F->s_255), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_257(struct f_greenc_1fr *up_) {
  struct f_q_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_260(struct f_greenc_1fr *up_, rt_int line_258, rt_gstr msg_259) {
  struct f_fail_260fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_258 = line_258;
F->msg_259 = cp_rt_gstr(msg_259);
if ((G_NV(F->up->trial_155) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_258))), rt_g_lit(": ", 2)), F->msg_259)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_108);
ret_:

  return;
}

static P126 f_new_buffer_261(struct f_greenc_1fr *up_) {
  struct f_new_buffer_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R127 *cell1421 = rt_alloc(sizeof(R127)); *cell1421 = cp_R127(({ R127 ag1422; ag1422.head_ = NULL; ag1422.tail_ = NULL; ag1422; })); (P126)cell1421; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_264(struct f_greenc_1fr *up_, P126 b_262, rt_gstr s_263) {
  struct f_put_to_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_262 = b_262;
F->s_263 = cp_rt_gstr(s_263);
F->l_1423 = NULL;
F->l_1423 = ({ R152 *cell1424 = rt_alloc(sizeof(R152)); *cell1424 = cp_R152(({ R152 ag1425; ag1425.s_ = NULL; ag1425.next_ = NULL; ag1425; })); (P151)cell1424; });
(*(P151)rt_nil_check(F->l_1423)).s_ = f_mk_239(F->up, F->s_263);
if (((*(P126)rt_nil_check(F->b_262)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->b_262)).head_ = F->l_1423;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->b_262)).tail_)).next_ = F->l_1423;
}
(*(P126)rt_nil_check(F->b_262)).tail_ = F->l_1423;
ret_:

  return;
}

static void f_emit_266(struct f_greenc_1fr *up_, rt_gstr s_265) {
  struct f_emit_266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_265 = cp_rt_gstr(s_265);
f_put_to_264(F->up, F->up->code_136, F->s_265);
ret_:

  return;
}

static void f_print_buffer_268(struct f_greenc_1fr *up_, P126 b_267) {
  struct f_print_buffer_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_267 = b_267;
F->l_1426 = NULL;
F->l_1426 = (*(P126)rt_nil_check(F->b_267)).head_;
while ((F->l_1426 != NULL)) {
rt_g_put(rt_g_g2s((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_1426)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1426 = (*(P151)rt_nil_check(F->l_1426)).next_;
}
L_end_1427: ;
ret_:

  return;
}

static void f_splice_271(struct f_greenc_1fr *up_, P126 a_269, P126 b_270) {
  struct f_splice_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_269 = a_269;
F->b_270 = b_270;
if (((*(P126)rt_nil_check(F->b_270)).head_ == NULL)) {
goto ret_;
}
if (((*(P126)rt_nil_check(F->a_269)).tail_ == NULL)) {
(*(P126)rt_nil_check(F->a_269)).head_ = (*(P126)rt_nil_check(F->b_270)).head_;
} else {
(*(P151)rt_nil_check((*(P126)rt_nil_check(F->a_269)).tail_)).next_ = (*(P126)rt_nil_check(F->b_270)).head_;
}
(*(P126)rt_nil_check(F->a_269)).tail_ = (*(P126)rt_nil_check(F->b_270)).tail_;
(*(P126)rt_nil_check(F->b_270)).head_ = NULL;
(*(P126)rt_nil_check(F->b_270)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_273(struct f_greenc_1fr *up_, rt_gstr w_272) {
  struct f_is_reserved_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_272 = cp_rt_gstr(w_272);
{ rt_int sel1429 = ({ rt_gstr at1428 = F->w_272; at1428.hi >= at1428.lo ? at1428.hi - at1428.lo + 1 : (rt_int)0; });
if (0 || sel1429 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_272, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_272, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_272, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_272, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_272, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_272, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_272, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_272, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_272, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_272, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_272, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_272, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_272, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_272, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_272, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_272, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_272, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_272, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_272, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_272, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_272, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_272, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_272, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_272, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_272, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_272, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_272, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_272, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1429 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_272, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_277(struct f_greenc_1fr *up_, rt_int kind_274, rt_gstr s_275, rt_int ival_276) {
  struct f_add_token_277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_274 = kind_274;
F->s_275 = cp_rt_gstr(s_275);
F->ival_276 = ival_276;
F->up->ntoks_113 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*({ A109 *ix1430 = &(F->up->toks_112); &ix1430->p[rt_index(G_NV(F->up->ntoks_113), ix1430->lo, ix1430->hi) - ix1430->lo]; })) = ({ R111 *cell1431 = rt_alloc(sizeof(R111)); *cell1431 = cp_R111(({ R111 ag1432; ag1432.kind_ = F->kind_274; ag1432.line_ = G_NV(F->up->src_line_115); ag1432.ival_ = F->ival_276; ag1432.s_ = NULL; ag1432; })); (P110)cell1431; });
(*(P110)rt_nil_check((*({ A109 *ix1433 = &(F->up->toks_112); &ix1433->p[rt_index(G_NV(F->up->ntoks_113), ix1433->lo, ix1433->hi) - ix1433->lo]; })))).s_ = f_mk_239(F->up, F->s_275);
ret_:

  return;
}

static rt_int f_digit_value_279(struct f_greenc_1fr *up_, int c_278) {
  struct f_digit_value_279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_278 = c_278;
if (f_is_digit_246(F->up, F->c_278)) {
F->result_ = rt_sub(((rt_int)(F->c_278) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_248(F->up, F->c_278)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_282(struct f_greenc_1fr *up_, int c_280, rt_int base_281) {
  struct f_digit_in_282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_280 = c_280;
F->base_281 = base_281;
F->d_1434 = INT64_MIN;
if (f_is_digit_246(F->up, F->c_280)) {
F->d_1434 = rt_sub(((rt_int)(F->c_280) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_248(F->up, F->c_280) >= 65) && (f_upper_248(F->up, F->c_280) <= 70))) {
F->d_1434 = rt_add(rt_sub(((rt_int)(f_upper_248(F->up, F->c_280)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1434) >= F->base_281)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1434);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_286(struct f_greenc_1fr *up_, rt_int *v_283, rt_int base_284, rt_int d_285) {
  struct f_accumulate_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_283 = v_283;
F->base_284 = base_284;
F->d_285 = d_285;
if ((G_NV((*F->v_283)) > rt_quot(rt_sub(INT64_MAX, F->d_285), F->base_284))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_283) = rt_add(rt_mul(G_NV((*F->v_283)), F->base_284), F->d_285);
ret_:

  return;
}

static void f_lex_line_288(struct f_greenc_1fr *up_, rt_gstr line_287) {
  struct f_lex_line_288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_287 = cp_rt_gstr(line_287);
F->i_1435 = INT64_MIN;
F->i_1435 = ((rt_int)1LL);
F->j_1436 = INT64_MIN;
F->j_1436 = ((rt_int)0LL);
F->n_1437 = INT64_MIN;
F->n_1437 = ({ rt_gstr at1438 = F->line_287; at1438.hi >= at1438.lo ? at1438.hi - at1438.lo + 1 : (rt_int)0; });
F->c_1439 = INT_MIN;
F->quote_1440 = INT_MIN;
F->v_1441 = INT64_MIN;
F->d_1442 = INT64_MIN;
F->buf_1443.lo = ((rt_int)1LL); F->buf_1443.hi = ((rt_int)1000LL);
F->buf_1443.lo2 = 1; F->buf_1443.hi2 = 1;
F->buf_1443.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1443));
memset(F->buf_1443.p, 0xFF, (size_t)G_CNT(F->buf_1443));
F->bl_1445 = INT64_MIN;
while ((G_NV(F->i_1435) <= G_NV(F->n_1437))) {
F->c_1439 = rt_range(G_NV(({ rt_gstr ix1447 = F->line_287; ix1447.p[rt_index(G_NV(F->i_1435), ix1447.lo, ix1447.hi) - ix1447.lo]; })), 0, 127);
if (((((G_NV(F->c_1439) == 32) || (G_NV(F->c_1439) == 9)) || (G_NV(F->c_1439) == 13)) || (G_NV(F->c_1439) == 12))) {
F->i_1435 = rt_add(G_NV(F->i_1435), ((rt_int)1LL));
} else if ((((G_NV(F->c_1439) == 45) && (G_NV(F->i_1435) < G_NV(F->n_1437))) && (G_NV(({ rt_gstr ix1448 = F->line_287; ix1448.p[rt_index(rt_add(G_NV(F->i_1435), ((rt_int)1LL)), ix1448.lo, ix1448.hi) - ix1448.lo]; })) == 45))) {
F->i_1435 = rt_add(G_NV(F->n_1437), ((rt_int)1LL));
} else if (f_is_letter_244(F->up, G_NV(F->c_1439))) {
F->j_1436 = G_NV(F->i_1435);
F->bl_1445 = ((rt_int)0LL);
while (((G_NV(F->j_1436) <= G_NV(F->n_1437)) && ((f_is_letter_244(F->up, G_NV(({ rt_gstr ix1451 = F->line_287; ix1451.p[rt_index(G_NV(F->j_1436), ix1451.lo, ix1451.hi) - ix1451.lo]; }))) || f_is_digit_246(F->up, G_NV(({ rt_gstr ix1453 = F->line_287; ix1453.p[rt_index(G_NV(F->j_1436), ix1453.lo, ix1453.hi) - ix1453.lo]; })))) || (G_NV(({ rt_gstr ix1454 = F->line_287; ix1454.p[rt_index(G_NV(F->j_1436), ix1454.lo, ix1454.hi) - ix1454.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1455 = F->line_287; ix1455.p[rt_index(G_NV(F->j_1436), ix1455.lo, ix1455.hi) - ix1455.lo]; })) == 95)) {
if (((G_NV(F->j_1436) == G_NV(F->n_1437)) || (!(f_is_letter_244(F->up, G_NV(({ rt_gstr ix1457 = F->line_287; ix1457.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1457.lo, ix1457.hi) - ix1457.lo]; }))) || f_is_digit_246(F->up, G_NV(({ rt_gstr ix1459 = F->line_287; ix1459.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1459.lo, ix1459.hi) - ix1459.lo]; }))))))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1445 = rt_add(G_NV(F->bl_1445), ((rt_int)1LL));
(*({ rt_gstr *ix1460 = &(F->buf_1443); &ix1460->p[rt_index(G_NV(F->bl_1445), ix1460->lo, ix1460->hi) - ix1460->lo]; })) = f_upper_248(F->up, G_NV(({ rt_gstr ix1462 = F->line_287; ix1462.p[rt_index(G_NV(F->j_1436), ix1462.lo, ix1462.hi) - ix1462.lo]; })));
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
}
L_end_1449: ;
if (f_is_reserved_273(F->up, ({ rt_gstr sl1464 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1464.lo, sl1464.hi); rt_index(h_, sl1464.lo, sl1464.hi); } sl1464.p += l_ - sl1464.lo; sl1464.lo = l_; sl1464.hi = h_; sl1464; }))) {
f_add_token_277(F->up, ((rt_int)2LL), ({ rt_gstr sl1466 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1466.lo, sl1466.hi); rt_index(h_, sl1466.lo, sl1466.hi); } sl1466.p += l_ - sl1466.lo; sl1466.lo = l_; sl1466.hi = h_; sl1466; }), ((rt_int)0LL));
} else {
f_add_token_277(F->up, ((rt_int)1LL), ({ rt_gstr sl1468 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1468.lo, sl1468.hi); rt_index(h_, sl1468.lo, sl1468.hi); } sl1468.p += l_ - sl1468.lo; sl1468.lo = l_; sl1468.hi = h_; sl1468; }), ((rt_int)0LL));
}
F->i_1435 = G_NV(F->j_1436);
} else if (f_is_digit_246(F->up, G_NV(F->c_1439))) {
F->j_1436 = G_NV(F->i_1435);
F->v_1441 = ((rt_int)0LL);
F->bl_1445 = ((rt_int)0LL);
while (((G_NV(F->j_1436) <= G_NV(F->n_1437)) && (f_is_digit_246(F->up, G_NV(({ rt_gstr ix1471 = F->line_287; ix1471.p[rt_index(G_NV(F->j_1436), ix1471.lo, ix1471.hi) - ix1471.lo]; }))) || (G_NV(({ rt_gstr ix1472 = F->line_287; ix1472.p[rt_index(G_NV(F->j_1436), ix1472.lo, ix1472.hi) - ix1472.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1473 = F->line_287; ix1473.p[rt_index(G_NV(F->j_1436), ix1473.lo, ix1473.hi) - ix1473.lo]; })) == 95)) {
if (((G_NV(F->j_1436) == G_NV(F->n_1437)) || (!f_is_digit_246(F->up, G_NV(({ rt_gstr ix1475 = F->line_287; ix1475.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1475.lo, ix1475.hi) - ix1475.lo]; })))))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_286(F->up, &F->v_1441, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1477 = F->line_287; ix1477.p[rt_index(G_NV(F->j_1436), ix1477.lo, ix1477.hi) - ix1477.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1445 = rt_add(G_NV(F->bl_1445), ((rt_int)1LL));
(*({ rt_gstr *ix1478 = &(F->buf_1443); &ix1478->p[rt_index(G_NV(F->bl_1445), ix1478->lo, ix1478->hi) - ix1478->lo]; })) = G_NV(({ rt_gstr ix1479 = F->line_287; ix1479.p[rt_index(G_NV(F->j_1436), ix1479.lo, ix1479.hi) - ix1479.lo]; }));
}
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
}
L_end_1469: ;
if (((G_NV(F->j_1436) < G_NV(F->n_1437)) && ((G_NV(({ rt_gstr ix1480 = F->line_287; ix1480.p[rt_index(G_NV(F->j_1436), ix1480.lo, ix1480.hi) - ix1480.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1481 = F->line_287; ix1481.p[rt_index(G_NV(F->j_1436), ix1481.lo, ix1481.hi) - ix1481.lo]; })) == 58) && (f_is_digit_246(F->up, G_NV(({ rt_gstr ix1483 = F->line_287; ix1483.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1483.lo, ix1483.hi) - ix1483.lo]; }))) || f_is_letter_244(F->up, G_NV(({ rt_gstr ix1485 = F->line_287; ix1485.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1485.lo, ix1485.hi) - ix1485.lo]; })))))))) {
{
F->base_1487 = INT64_MIN;
F->base_1487 = G_NV(F->v_1441);
if (((G_NV(F->base_1487) < ((rt_int)2LL)) || (G_NV(F->base_1487) > ((rt_int)16LL)))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1441 = ((rt_int)0LL);
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
if (((G_NV(F->j_1436) > G_NV(F->n_1437)) || (f_digit_in_282(F->up, G_NV(({ rt_gstr ix1489 = F->line_287; ix1489.p[rt_index(G_NV(F->j_1436), ix1489.lo, ix1489.hi) - ix1489.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1436) <= G_NV(F->n_1437)) && ((f_is_letter_244(F->up, G_NV(({ rt_gstr ix1492 = F->line_287; ix1492.p[rt_index(G_NV(F->j_1436), ix1492.lo, ix1492.hi) - ix1492.lo]; }))) || f_is_digit_246(F->up, G_NV(({ rt_gstr ix1494 = F->line_287; ix1494.p[rt_index(G_NV(F->j_1436), ix1494.lo, ix1494.hi) - ix1494.lo]; })))) || (G_NV(({ rt_gstr ix1495 = F->line_287; ix1495.p[rt_index(G_NV(F->j_1436), ix1495.lo, ix1495.hi) - ix1495.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1496 = F->line_287; ix1496.p[rt_index(G_NV(F->j_1436), ix1496.lo, ix1496.hi) - ix1496.lo]; })) == 95)) {
if (((G_NV(F->j_1436) == G_NV(F->n_1437)) || (f_digit_in_282(F->up, G_NV(({ rt_gstr ix1498 = F->line_287; ix1498.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1498.lo, ix1498.hi) - ix1498.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1442 = f_digit_in_282(F->up, G_NV(({ rt_gstr ix1500 = F->line_287; ix1500.p[rt_index(G_NV(F->j_1436), ix1500.lo, ix1500.hi) - ix1500.lo]; })), G_NV(F->base_1487));
if ((G_NV(F->d_1442) < ((rt_int)0LL))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1502 = F->line_287; ix1502.p[rt_index(G_NV(F->j_1436), ix1502.lo, ix1502.hi) - ix1502.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1487)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_286(F->up, &F->v_1441, G_NV(F->base_1487), G_NV(F->d_1442));
}
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
}
L_end_1490: ;

}
L_end_1486: ;
f_add_token_277(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1441))), G_NV(F->v_1441));
} else if (((G_NV(F->j_1436) < G_NV(F->n_1437)) && ((G_NV(({ rt_gstr ix1503 = F->line_287; ix1503.p[rt_index(G_NV(F->j_1436), ix1503.lo, ix1503.hi) - ix1503.lo]; })) == 46) && f_is_digit_246(F->up, G_NV(({ rt_gstr ix1505 = F->line_287; ix1505.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1505.lo, ix1505.hi) - ix1505.lo]; })))))) {
F->bl_1445 = rt_add(G_NV(F->bl_1445), ((rt_int)1LL));
(*({ rt_gstr *ix1506 = &(F->buf_1443); &ix1506->p[rt_index(G_NV(F->bl_1445), ix1506->lo, ix1506->hi) - ix1506->lo]; })) = 46;
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
while (((G_NV(F->j_1436) <= G_NV(F->n_1437)) && (f_is_digit_246(F->up, G_NV(({ rt_gstr ix1509 = F->line_287; ix1509.p[rt_index(G_NV(F->j_1436), ix1509.lo, ix1509.hi) - ix1509.lo]; }))) || (G_NV(({ rt_gstr ix1510 = F->line_287; ix1510.p[rt_index(G_NV(F->j_1436), ix1510.lo, ix1510.hi) - ix1510.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1511 = F->line_287; ix1511.p[rt_index(G_NV(F->j_1436), ix1511.lo, ix1511.hi) - ix1511.lo]; })) != 95)) {
F->bl_1445 = rt_add(G_NV(F->bl_1445), ((rt_int)1LL));
(*({ rt_gstr *ix1512 = &(F->buf_1443); &ix1512->p[rt_index(G_NV(F->bl_1445), ix1512->lo, ix1512->hi) - ix1512->lo]; })) = G_NV(({ rt_gstr ix1513 = F->line_287; ix1513.p[rt_index(G_NV(F->j_1436), ix1513.lo, ix1513.hi) - ix1513.lo]; }));
} else if (((G_NV(F->j_1436) == G_NV(F->n_1437)) || (!f_is_digit_246(F->up, G_NV(({ rt_gstr ix1515 = F->line_287; ix1515.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1515.lo, ix1515.hi) - ix1515.lo]; })))))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
}
L_end_1507: ;
if (f_exponent_ahead_291(F->up, F->line_287, G_NV(F->j_1436))) {
f_exponent_296(F->up, F->line_287, &F->j_1436, &F->buf_1443, &F->bl_1445);

}
f_add_token_277(F->up, ((rt_int)5LL), ({ rt_gstr sl1517 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1517.lo, sl1517.hi); rt_index(h_, sl1517.lo, sl1517.hi); } sl1517.p += l_ - sl1517.lo; sl1517.lo = l_; sl1517.hi = h_; sl1517; }), ((rt_int)0LL));
} else if (f_exponent_ahead_291(F->up, F->line_287, G_NV(F->j_1436))) {
f_exponent_296(F->up, F->line_287, &F->j_1436, &F->buf_1443, &F->bl_1445);

f_add_token_277(F->up, ((rt_int)5LL), ({ rt_gstr sl1519 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1519.lo, sl1519.hi); rt_index(h_, sl1519.lo, sl1519.hi); } sl1519.p += l_ - sl1519.lo; sl1519.lo = l_; sl1519.hi = h_; sl1519; }), ((rt_int)0LL));
} else {
f_add_token_277(F->up, ((rt_int)4LL), ({ rt_gstr sl1521 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1521.lo, sl1521.hi); rt_index(h_, sl1521.lo, sl1521.hi); } sl1521.p += l_ - sl1521.lo; sl1521.lo = l_; sl1521.hi = h_; sl1521; }), G_NV(F->v_1441));
}
F->i_1435 = G_NV(F->j_1436);
} else if (((G_NV(F->c_1439) == 34) || (G_NV(F->c_1439) == 37))) {
F->quote_1440 = rt_range(G_NV(F->c_1439), 0, 127);
F->j_1436 = rt_add(G_NV(F->i_1435), ((rt_int)1LL));
F->bl_1445 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1436) > G_NV(F->n_1437))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1523 = F->line_287; ix1523.p[rt_index(G_NV(F->j_1436), ix1523.lo, ix1523.hi) - ix1523.lo]; })) == G_NV(F->quote_1440))) {
if (((G_NV(F->j_1436) == G_NV(F->n_1437)) || (G_NV(({ rt_gstr ix1524 = F->line_287; ix1524.p[rt_index(rt_add(G_NV(F->j_1436), ((rt_int)1LL)), ix1524.lo, ix1524.hi) - ix1524.lo]; })) != G_NV(F->quote_1440)))) {
goto L_end_1522;
}
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
} else if (((G_NV(F->quote_1440) == 37) && (G_NV(({ rt_gstr ix1525 = F->line_287; ix1525.p[rt_index(G_NV(F->j_1436), ix1525.lo, ix1525.hi) - ix1525.lo]; })) == 34))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1445 = rt_add(G_NV(F->bl_1445), ((rt_int)1LL));
(*({ rt_gstr *ix1526 = &(F->buf_1443); &ix1526->p[rt_index(G_NV(F->bl_1445), ix1526->lo, ix1526->hi) - ix1526->lo]; })) = G_NV(({ rt_gstr ix1527 = F->line_287; ix1527.p[rt_index(G_NV(F->j_1436), ix1527.lo, ix1527.hi) - ix1527.lo]; }));
F->j_1436 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
}
L_end_1522: ;
f_add_token_277(F->up, ((rt_int)6LL), ({ rt_gstr sl1529 = F->buf_1443; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1445); if (l_ <= h_) { rt_index(l_, sl1529.lo, sl1529.hi); rt_index(h_, sl1529.lo, sl1529.hi); } sl1529.p += l_ - sl1529.lo; sl1529.lo = l_; sl1529.hi = h_; sl1529; }), ((rt_int)0LL));
F->i_1435 = rt_add(G_NV(F->j_1436), ((rt_int)1LL));
} else {
{
F->two_1531.lo = ((rt_int)1LL); F->two_1531.hi = ((rt_int)3LL);
F->two_1531.lo2 = 1; F->two_1531.hi2 = 1;
F->two_1531.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1531));
memset(F->two_1531.p, 0xFF, (size_t)G_CNT(F->two_1531));
as_rt_gstr(&F->two_1531, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1533 = &(F->two_1531); &ix1533->p[rt_index(((rt_int)1LL), ix1533->lo, ix1533->hi) - ix1533->lo]; })) = G_NV(F->c_1439);
if ((G_NV(F->i_1435) < G_NV(F->n_1437))) {
(*({ rt_gstr *ix1534 = &(F->two_1531); &ix1534->p[rt_index(((rt_int)2LL), ix1534->lo, ix1534->hi) - ix1534->lo]; })) = G_NV(({ rt_gstr ix1535 = F->line_287; ix1535.p[rt_index(rt_add(G_NV(F->i_1435), ((rt_int)1LL)), ix1535.lo, ix1535.hi) - ix1535.lo]; }));
}
if ((rt_add(G_NV(F->i_1435), ((rt_int)1LL)) < G_NV(F->n_1437))) {
(*({ rt_gstr *ix1536 = &(F->two_1531); &ix1536->p[rt_index(((rt_int)3LL), ix1536->lo, ix1536->hi) - ix1536->lo]; })) = G_NV(({ rt_gstr ix1537 = F->line_287; ix1537.p[rt_index(rt_add(G_NV(F->i_1435), ((rt_int)2LL)), ix1537.lo, ix1537.hi) - ix1537.lo]; }));
}
if (eq_rt_gstr(F->two_1531, rt_g_lit(":=:", 3))) {
f_add_token_277(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1435 = rt_add(G_NV(F->i_1435), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1538 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1538.lo, sl1538.hi); rt_index(h_, sl1538.lo, sl1538.hi); } sl1538.p += l_ - sl1538.lo; sl1538.lo = l_; sl1538.hi = h_; sl1538; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1539 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1539.lo, sl1539.hi); rt_index(h_, sl1539.lo, sl1539.hi); } sl1539.p += l_ - sl1539.lo; sl1539.lo = l_; sl1539.hi = h_; sl1539; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1540 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1540.lo, sl1540.hi); rt_index(h_, sl1540.lo, sl1540.hi); } sl1540.p += l_ - sl1540.lo; sl1540.lo = l_; sl1540.hi = h_; sl1540; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1541 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1541.lo, sl1541.hi); rt_index(h_, sl1541.lo, sl1541.hi); } sl1541.p += l_ - sl1541.lo; sl1541.lo = l_; sl1541.hi = h_; sl1541; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1542 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1542.lo, sl1542.hi); rt_index(h_, sl1542.lo, sl1542.hi); } sl1542.p += l_ - sl1542.lo; sl1542.lo = l_; sl1542.hi = h_; sl1542; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1543 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1543.lo, sl1543.hi); rt_index(h_, sl1543.lo, sl1543.hi); } sl1543.p += l_ - sl1543.lo; sl1543.lo = l_; sl1543.hi = h_; sl1543; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1544 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1544.lo, sl1544.hi); rt_index(h_, sl1544.lo, sl1544.hi); } sl1544.p += l_ - sl1544.lo; sl1544.lo = l_; sl1544.hi = h_; sl1544; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1545 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1545.lo, sl1545.hi); rt_index(h_, sl1545.lo, sl1545.hi); } sl1545.p += l_ - sl1545.lo; sl1545.lo = l_; sl1545.hi = h_; sl1545; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1546 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1546.lo, sl1546.hi); rt_index(h_, sl1546.lo, sl1546.hi); } sl1546.p += l_ - sl1546.lo; sl1546.lo = l_; sl1546.hi = h_; sl1546; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1547 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1547.lo, sl1547.hi); rt_index(h_, sl1547.lo, sl1547.hi); } sl1547.p += l_ - sl1547.lo; sl1547.lo = l_; sl1547.hi = h_; sl1547; }), rt_g_lit(">>", 2)))) {
f_add_token_277(F->up, ((rt_int)3LL), ({ rt_gstr sl1549 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1549.lo, sl1549.hi); rt_index(h_, sl1549.lo, sl1549.hi); } sl1549.p += l_ - sl1549.lo; sl1549.lo = l_; sl1549.hi = h_; sl1549; }), ((rt_int)0LL));
F->i_1435 = rt_add(G_NV(F->i_1435), ((rt_int)2LL));
} else if ((G_NV(F->c_1439) == 33)) {
f_add_token_277(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1435 = rt_add(G_NV(F->i_1435), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1439) == 38) || (G_NV(F->c_1439) == 39)) || (G_NV(F->c_1439) == 40)) || (G_NV(F->c_1439) == 41)) || (G_NV(F->c_1439) == 42)) || (G_NV(F->c_1439) == 43)) || (G_NV(F->c_1439) == 44)) || (G_NV(F->c_1439) == 45)) || (G_NV(F->c_1439) == 46)) || (G_NV(F->c_1439) == 47)) || (G_NV(F->c_1439) == 58)) || (G_NV(F->c_1439) == 59)) || (G_NV(F->c_1439) == 60)) || (G_NV(F->c_1439) == 61)) || (G_NV(F->c_1439) == 62)) || (G_NV(F->c_1439) == 124))) {
f_add_token_277(F->up, ((rt_int)3LL), ({ rt_gstr sl1551 = F->two_1531; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1551.lo, sl1551.hi); rt_index(h_, sl1551.lo, sl1551.hi); } sl1551.p += l_ - sl1551.lo; sl1551.lo = l_; sl1551.hi = h_; sl1551; }), ((rt_int)0LL));
F->i_1435 = rt_add(G_NV(F->i_1435), ((rt_int)1LL));
if ((G_NV(F->c_1439) == 59)) {
f_check_include_303(F->up);
}
} else {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("unexpected character", 20));
}

}
L_end_1530: ;
}
}
L_end_1446: ;
ret_:

  return;
}

static int f_exponent_ahead_291(struct f_greenc_1fr *up_, rt_gstr line_289, rt_int j_290) {
  struct f_exponent_ahead_291fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_289 = cp_rt_gstr(line_289);
F->j_290 = j_290;
if ((F->j_290 >= ({ rt_gstr at1552 = F->line_289; at1552.hi >= at1552.lo ? at1552.hi - at1552.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1553 = F->line_289; ix1553.p[rt_index(F->j_290, ix1553.lo, ix1553.hi) - ix1553.lo]; })) != 69) && (G_NV(({ rt_gstr ix1554 = F->line_289; ix1554.p[rt_index(F->j_290, ix1554.lo, ix1554.hi) - ix1554.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_246(F->up, G_NV(({ rt_gstr ix1556 = F->line_289; ix1556.p[rt_index(rt_add(F->j_290, ((rt_int)1LL)), ix1556.lo, ix1556.hi) - ix1556.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_290, ((rt_int)1LL)) >= ({ rt_gstr at1557 = F->line_289; at1557.hi >= at1557.lo ? at1557.hi - at1557.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1558 = F->line_289; ix1558.p[rt_index(rt_add(F->j_290, ((rt_int)1LL)), ix1558.lo, ix1558.hi) - ix1558.lo]; })) == 43) || (G_NV(({ rt_gstr ix1559 = F->line_289; ix1559.p[rt_index(rt_add(F->j_290, ((rt_int)1LL)), ix1559.lo, ix1559.hi) - ix1559.lo]; })) == 45)) && f_is_digit_246(F->up, G_NV(({ rt_gstr ix1561 = F->line_289; ix1561.p[rt_index(rt_add(F->j_290, ((rt_int)2LL)), ix1561.lo, ix1561.hi) - ix1561.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_296(struct f_greenc_1fr *up_, rt_gstr line_292, rt_int *j_293, rt_gstr *buf_294, rt_int *bl_295) {
  struct f_exponent_296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_292 = cp_rt_gstr(line_292);
F->j_293 = j_293;
F->buf_294 = buf_294;
F->bl_295 = bl_295;
(*F->bl_295) = rt_add(G_NV((*F->bl_295)), ((rt_int)1LL));
(*({ rt_gstr *ix1562 = &((*F->buf_294)); &ix1562->p[rt_index(G_NV((*F->bl_295)), ix1562->lo, ix1562->hi) - ix1562->lo]; })) = 69;
(*F->j_293) = rt_add(G_NV((*F->j_293)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1563 = F->line_292; ix1563.p[rt_index(G_NV((*F->j_293)), ix1563.lo, ix1563.hi) - ix1563.lo]; })) == 43) || (G_NV(({ rt_gstr ix1564 = F->line_292; ix1564.p[rt_index(G_NV((*F->j_293)), ix1564.lo, ix1564.hi) - ix1564.lo]; })) == 45))) {
(*F->bl_295) = rt_add(G_NV((*F->bl_295)), ((rt_int)1LL));
(*({ rt_gstr *ix1565 = &((*F->buf_294)); &ix1565->p[rt_index(G_NV((*F->bl_295)), ix1565->lo, ix1565->hi) - ix1565->lo]; })) = G_NV(({ rt_gstr ix1566 = F->line_292; ix1566.p[rt_index(G_NV((*F->j_293)), ix1566.lo, ix1566.hi) - ix1566.lo]; }));
(*F->j_293) = rt_add(G_NV((*F->j_293)), ((rt_int)1LL));
}
while (((G_NV((*F->j_293)) <= ({ rt_gstr at1568 = F->line_292; at1568.hi >= at1568.lo ? at1568.hi - at1568.lo + 1 : (rt_int)0; })) && (f_is_digit_246(F->up, G_NV(({ rt_gstr ix1570 = F->line_292; ix1570.p[rt_index(G_NV((*F->j_293)), ix1570.lo, ix1570.hi) - ix1570.lo]; }))) || (G_NV(({ rt_gstr ix1571 = F->line_292; ix1571.p[rt_index(G_NV((*F->j_293)), ix1571.lo, ix1571.hi) - ix1571.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1572 = F->line_292; ix1572.p[rt_index(G_NV((*F->j_293)), ix1572.lo, ix1572.hi) - ix1572.lo]; })) != 95)) {
(*F->bl_295) = rt_add(G_NV((*F->bl_295)), ((rt_int)1LL));
(*({ rt_gstr *ix1573 = &((*F->buf_294)); &ix1573->p[rt_index(G_NV((*F->bl_295)), ix1573->lo, ix1573->hi) - ix1573->lo]; })) = G_NV(({ rt_gstr ix1574 = F->line_292; ix1574.p[rt_index(G_NV((*F->j_293)), ix1574.lo, ix1574.hi) - ix1574.lo]; }));
} else if (((G_NV((*F->j_293)) == ({ rt_gstr at1575 = F->line_292; at1575.hi >= at1575.lo ? at1575.hi - at1575.lo + 1 : (rt_int)0; })) || (!f_is_digit_246(F->up, G_NV(({ rt_gstr ix1577 = F->line_292; ix1577.p[rt_index(rt_add(G_NV((*F->j_293)), ((rt_int)1LL)), ix1577.lo, ix1577.hi) - ix1577.lo]; })))))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_293) = rt_add(G_NV((*F->j_293)), ((rt_int)1LL));
}
L_end_1567: ;
ret_:

  return;
}

static void f_include_open_299(struct f_greenc_1fr *up_, rt_gstr name_297, rt_int *length_298) {
  struct f_include_open_299fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_297 = cp_rt_gstr(name_297);
F->length_298 = length_298;
rt_g_include_open(rt_g_g2s(F->name_297), F->length_298);
ret_:

  return;
}

static void f_include_char_302(struct f_greenc_1fr *up_, rt_int i_300, int *c_301) {
  struct f_include_char_302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_300 = i_300;
F->c_301 = c_301;
rt_g_include_char(F->i_300, F->c_301);
ret_:

  return;
}

static void f_check_include_303(struct f_greenc_1fr *up_) {
  struct f_check_include_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1578 = INT64_MIN;
if ((G_NV(F->up->ntoks_113) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P110)rt_nil_check(({ A109 ix1579 = F->up->toks_112; ix1579.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1579.lo, ix1579.hi) - ix1579.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P110)rt_nil_check(({ A109 ix1580 = F->up->toks_112; ix1580.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1580.lo, ix1580.hi) - ix1580.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1581 = F->up->toks_112; ix1581.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)5LL)), ix1581.lo, ix1581.hi) - ix1581.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1582 = F->up->toks_112; ix1582.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)4LL)), ix1582.lo, ix1582.hi) - ix1582.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1583 = F->up->toks_112; ix1583.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)3LL)), ix1583.lo, ix1583.hi) - ix1583.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1584 = F->up->toks_112; ix1584.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)1LL)), ix1584.lo, ix1584.hi) - ix1584.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_299(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1586 = F->up->toks_112; ix1586.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1586.lo, ix1586.hi) - ix1586.lo]; }))).s_)), &F->n_1578);
if ((G_NV(F->n_1578) < ((rt_int)0LL))) {
f_fail_260(F->up, G_NV(F->up->src_line_115), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1588 = F->up->toks_112; ix1588.p[rt_index(rt_sub(G_NV(F->up->ntoks_113), ((rt_int)2LL)), ix1588.lo, ix1588.hi) - ix1588.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_113 = rt_sub(G_NV(F->up->ntoks_113), ((rt_int)6LL));
f_include_text_305(F->up, G_NV(F->n_1578));
ret_:

  return;
}

static void f_include_text_305(struct f_greenc_1fr *up_, rt_int n_304) {
  struct f_include_text_305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_304 = n_304;
F->t_1589.lo = ((rt_int)1LL); F->t_1589.hi = rt_add(F->n_304, ((rt_int)1LL));
F->t_1589.lo2 = 1; F->t_1589.hi2 = 1;
F->t_1589.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1589));
memset(F->t_1589.p, 0xFF, (size_t)G_CNT(F->t_1589));
F->saved_line_1591 = INT64_MIN;
F->saved_line_1591 = G_NV(F->up->src_line_115);
F->from_1592 = INT64_MIN;
F->from_1592 = ((rt_int)1LL);
{ rt_int lo1595 = ((rt_int)1LL), hi1596 = F->n_304;
for (rt_int it1597 = lo1595; it1597 <= hi1596; it1597++) {
F->k_1594 = it1597;
f_include_char_302(F->up, F->k_1594, &(*({ rt_gstr *ix1599 = &(F->t_1589); &ix1599->p[rt_index(F->k_1594, ix1599->lo, ix1599->hi) - ix1599->lo]; })));
}
}
L_end_1593: ;
F->up->src_line_115 = ((rt_int)0LL);
{ rt_int lo1602 = ((rt_int)1LL), hi1603 = F->n_304;
for (rt_int it1604 = lo1602; it1604 <= hi1603; it1604++) {
F->k_1601 = it1604;
if ((G_NV(({ rt_gstr ix1605 = F->t_1589; ix1605.p[rt_index(F->k_1601, ix1605.lo, ix1605.hi) - ix1605.lo]; })) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_309(F->up, F->t_1589, G_NV(F->from_1592), rt_sub(F->k_1601, ((rt_int)1LL)));
F->from_1592 = rt_add(F->k_1601, ((rt_int)1LL));
}
}
}
L_end_1600: ;
if ((G_NV(F->from_1592) <= F->n_304)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
f_include_line_309(F->up, F->t_1589, G_NV(F->from_1592), F->n_304);
}
F->up->src_line_115 = G_NV(F->saved_line_1591);
ret_:

  return;
}

static void f_include_line_309(struct f_greenc_1fr *up_, rt_gstr t_306, rt_int from_307, rt_int to_308) {
  struct f_include_line_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_306 = cp_rt_gstr(t_306);
F->from_307 = from_307;
F->to_308 = to_308;
F->l_1606.lo = ((rt_int)1LL); F->l_1606.hi = rt_add(rt_sub(F->to_308, F->from_307), ((rt_int)1LL));
F->l_1606.lo2 = 1; F->l_1606.hi2 = 1;
F->l_1606.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1606));
memset(F->l_1606.p, 0xFF, (size_t)G_CNT(F->l_1606));
{ rt_int lo1610 = F->from_307, hi1611 = F->to_308;
for (rt_int it1612 = lo1610; it1612 <= hi1611; it1612++) {
F->k_1609 = it1612;
(*({ rt_gstr *ix1613 = &(F->l_1606); &ix1613->p[rt_index(rt_add(rt_sub(F->k_1609, F->from_307), ((rt_int)1LL)), ix1613->lo, ix1613->hi) - ix1613->lo]; })) = G_NV(({ rt_gstr ix1614 = F->t_306; ix1614.p[rt_index(F->k_1609, ix1614.lo, ix1614.hi) - ix1614.lo]; }));
}
}
L_end_1608: ;
f_lex_line_288(F->up, F->l_1606);
ret_:

  return;
}

static void f_read_source_310(struct f_greenc_1fr *up_) {
  struct f_read_source_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1615;
if (RT_TRY(xf1615)) {
F->buf_1617.lo = ((rt_int)1LL); F->buf_1617.hi = ((rt_int)10000LL);
F->buf_1617.lo2 = 1; F->buf_1617.hi2 = 1;
F->buf_1617.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1617));
memset(F->buf_1617.p, 0xFF, (size_t)G_CNT(F->buf_1617));
F->bl_1619 = INT64_MIN;
F->bl_1619 = ((rt_int)0LL);
F->c_1620 = INT_MIN;
for (;;) {
(F->c_1620 = rt_g_getc());
if ((G_NV(F->c_1620) == 10)) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1622 = &(F->up->src_lines_203); &ix1622->p[rt_index(G_NV(F->up->src_line_115), ix1622->lo, ix1622->hi) - ix1622->lo]; })) = f_mk_239(F->up, ({ rt_gstr sl1624 = F->buf_1617; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1619); if (l_ <= h_) { rt_index(l_, sl1624.lo, sl1624.hi); rt_index(h_, sl1624.lo, sl1624.hi); } sl1624.p += l_ - sl1624.lo; sl1624.lo = l_; sl1624.hi = h_; sl1624; }));
}
f_lex_line_288(F->up, ({ rt_gstr sl1626 = F->buf_1617; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1619); if (l_ <= h_) { rt_index(l_, sl1626.lo, sl1626.hi); rt_index(h_, sl1626.lo, sl1626.hi); } sl1626.p += l_ - sl1626.lo; sl1626.lo = l_; sl1626.hi = h_; sl1626; }));
F->bl_1619 = ((rt_int)0LL);
} else {
F->bl_1619 = rt_add(G_NV(F->bl_1619), ((rt_int)1LL));
(*({ rt_gstr *ix1627 = &(F->buf_1617); &ix1627->p[rt_index(G_NV(F->bl_1619), ix1627->lo, ix1627->hi) - ix1627->lo]; })) = G_NV(F->c_1620);
}
}
L_end_1621: ;
RT_POP(xf1615);
} else {
RT_POP(xf1615);
int x1616 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1616);
if (0 || x1616 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1619) > ((rt_int)0LL))) {
F->up->src_line_115 = rt_add(G_NV(F->up->src_line_115), ((rt_int)1LL));
if ((G_NV(F->up->src_line_115) <= ((rt_int)300000LL))) {
(*({ A202 *ix1628 = &(F->up->src_lines_203); &ix1628->p[rt_index(G_NV(F->up->src_line_115), ix1628->lo, ix1628->hi) - ix1628->lo]; })) = f_mk_239(F->up, ({ rt_gstr sl1630 = F->buf_1617; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1619); if (l_ <= h_) { rt_index(l_, sl1630.lo, sl1630.hi); rt_index(h_, sl1630.lo, sl1630.hi); } sl1630.p += l_ - sl1630.lo; sl1630.lo = l_; sl1630.hi = h_; sl1630; }));
}
f_lex_line_288(F->up, ({ rt_gstr sl1632 = F->buf_1617; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1619); if (l_ <= h_) { rt_index(l_, sl1632.lo, sl1632.hi); rt_index(h_, sl1632.lo, sl1632.hi); } sl1632.p += l_ - sl1632.lo; sl1632.lo = l_; sl1632.hi = h_; sl1632; }));
}
f_add_token_277(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1616);
}
}
}
ret_:

  return;
}

static P174 f_nn_313(struct f_greenc_1fr *up_, rt_int kind_311, rt_int line_312) {
  struct f_nn_313fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_311 = kind_311;
F->line_312 = line_312;
F->result_ = ({ R175 *cell1633 = rt_alloc(sizeof(R175)); *cell1633 = cp_R175(({ R175 ag1634; ag1634.kind_ = F->kind_311; ag1634.line_ = F->line_312; ag1634.ival_ = ((rt_int)0LL); ag1634.flag_ = ((rt_int)0LL); ag1634.name_ = NULL; ag1634.tag_ = NULL; ag1634.a_ = NULL; ag1634.b_ = NULL; ag1634.c_ = NULL; ag1634.d_ = NULL; ag1634.e_ = NULL; ag1634.next_ = NULL; ag1634.formal_ = NULL; ag1634; })); (P174)cell1633; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_317(struct f_greenc_1fr *up_, P174 *head_314, P174 *tail_315, P174 x_316) {
  struct f_append_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_314 = head_314;
F->tail_315 = tail_315;
F->x_316 = x_316;
if ((F->x_316 == NULL)) {
goto ret_;
}
if (((*F->head_314) == NULL)) {
(*F->head_314) = F->x_316;
} else {
(*(P174)rt_nil_check((*F->tail_315))).next_ = F->x_316;
}
(*F->tail_315) = F->x_316;
while (((*(P174)rt_nil_check((*F->tail_315))).next_ != NULL)) {
(*F->tail_315) = (*(P174)rt_nil_check((*F->tail_315))).next_;
}
L_end_1635: ;
ret_:

  return;
}

static rt_int f_list_len_319(struct f_greenc_1fr *up_, P174 l_318) {
  struct f_list_len_319fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_318 = l_318;
F->n_1636 = INT64_MIN;
F->n_1636 = ((rt_int)0LL);
F->p_1637 = NULL;
F->p_1637 = F->l_318;
while ((F->p_1637 != NULL)) {
F->n_1636 = rt_add(G_NV(F->n_1636), ((rt_int)1LL));
F->p_1637 = (*(P174)rt_nil_check(F->p_1637)).next_;
}
L_end_1638: ;
F->result_ = G_NV(F->n_1636);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_320(struct f_greenc_1fr *up_) {
  struct f_cur_line_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1639 = F->up->toks_112; ix1639.p[rt_index(G_NV(F->up->tpos_114), ix1639.lo, ix1639.hi) - ix1639.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_322(struct f_greenc_1fr *up_, rt_gstr w_321) {
  struct f_at_kw_322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_321 = cp_rt_gstr(w_321);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1640 = F->up->toks_112; ix1640.p[rt_index(G_NV(F->up->tpos_114), ix1640.lo, ix1640.hi) - ix1640.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1641 = F->up->toks_112; ix1641.p[rt_index(G_NV(F->up->tpos_114), ix1641.lo, ix1641.hi) - ix1641.lo]; }))).s_)), F->w_321);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_324(struct f_greenc_1fr *up_, rt_gstr w_323) {
  struct f_at_op_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_323 = cp_rt_gstr(w_323);
if ((!(G_NV((*(P110)rt_nil_check(({ A109 ix1642 = F->up->toks_112; ix1642.p[rt_index(G_NV(F->up->tpos_114), ix1642.lo, ix1642.hi) - ix1642.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1643 = F->up->toks_112; ix1643.p[rt_index(G_NV(F->up->tpos_114), ix1643.lo, ix1643.hi) - ix1643.lo]; }))).s_)), F->w_323);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_326(struct f_greenc_1fr *up_, rt_int k_325) {
  struct f_at_kind_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_325 = k_325;
F->result_ = (G_NV((*(P110)rt_nil_check(({ A109 ix1644 = F->up->toks_112; ix1644.p[rt_index(G_NV(F->up->tpos_114), ix1644.lo, ix1644.hi) - ix1644.lo]; }))).kind_) == F->k_325);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_328(struct f_greenc_1fr *up_, rt_int k_327) {
  struct f_kind_at_328fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_327 = k_327;
if ((rt_add(G_NV(F->up->tpos_114), F->k_327) > G_NV(F->up->ntoks_113))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P110)rt_nil_check(({ A109 ix1645 = F->up->toks_112; ix1645.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_327), ix1645.lo, ix1645.hi) - ix1645.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_330(struct f_greenc_1fr *up_, rt_int k_329) {
  struct f_text_at_330fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_329 = k_329;
if ((rt_add(G_NV(F->up->tpos_114), F->k_329) > G_NV(F->up->ntoks_113))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1646 = F->up->toks_112; ix1646.p[rt_index(rt_add(G_NV(F->up->tpos_114), F->k_329), ix1646.lo, ix1646.hi) - ix1646.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_332(struct f_greenc_1fr *up_, rt_gstr msg_331) {
  struct f_perror_332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_331 = cp_rt_gstr(msg_331);
f_fail_260(F->up, G_NV((*(P110)rt_nil_check(({ A109 ix1649 = F->up->toks_112; ix1649.p[rt_index(G_NV(F->up->tpos_114), ix1649.lo, ix1649.hi) - ix1649.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_331, rt_g_lit(" (at ", 5)), (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1650 = F->up->toks_112; ix1650.p[rt_index(G_NV(F->up->tpos_114), ix1650.lo, ix1650.hi) - ix1650.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_333(struct f_greenc_1fr *up_) {
  struct f_skip_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_335(struct f_greenc_1fr *up_, rt_gstr w_334) {
  struct f_expect_kw_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_334 = cp_rt_gstr(w_334);
if ((!f_at_kw_322(F->up, F->w_334))) {
f_perror_332(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_334));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_337(struct f_greenc_1fr *up_, rt_gstr w_336) {
  struct f_expect_op_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_336 = cp_rt_gstr(w_336);
if ((!f_at_op_324(F->up, F->w_336))) {
f_perror_332(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_336));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_339(struct f_greenc_1fr *up_, P140 *res_338) {
  struct f_expect_id_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_338 = res_338;
if ((!f_at_kind_326(F->up, ((rt_int)1LL)))) {
f_perror_332(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_114 = rt_add(G_NV(F->up->tpos_114), ((rt_int)1LL));
(*F->res_338) = (*(P110)rt_nil_check(({ A109 ix1651 = F->up->toks_112; ix1651.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1651.lo, ix1651.hi) - ix1651.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_341(struct f_greenc_1fr *up_, P174 *res_340) {
  struct f_name_node_341fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_340 = res_340;
F->x_1652 = NULL;
F->x_1652 = f_nn_313(F->up, ((rt_int)5LL), f_cur_line_320(F->up));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1652)).name_);
(*F->res_340) = F->x_1652;
goto ret_;
ret_:

  return;
}

static void f_id_list_343(struct f_greenc_1fr *up_, P174 *res_342) {
  struct f_id_list_343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_342 = res_342;
F->head_1653 = NULL;
F->tail_1654 = NULL;
F->x_1655 = NULL;
f_name_node_341(F->up, &F->x_1655);
f_append_317(F->up, &F->head_1653, &F->tail_1654, F->x_1655);
while (f_at_op_324(F->up, rt_g_lit(",", 1))) {
f_skip_333(F->up);
f_name_node_341(F->up, &F->x_1655);
f_append_317(F->up, &F->head_1653, &F->tail_1654, F->x_1655);
}
L_end_1656: ;
(*F->res_342) = F->head_1653;
goto ret_;
ret_:

  return;
}

static P174 f_binop_348(struct f_greenc_1fr *up_, P140 op_344, P174 l_345, P174 r_346, rt_int line_347) {
  struct f_binop_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_344 = op_344;
F->l_345 = l_345;
F->r_346 = r_346;
F->line_347 = line_347;
F->x_1657 = NULL;
F->x_1657 = f_nn_313(F->up, ((rt_int)7LL), F->line_347);
(*(P174)rt_nil_check(F->x_1657)).name_ = F->op_344;
(*(P174)rt_nil_check(F->x_1657)).a_ = F->l_345;
(*(P174)rt_nil_check(F->x_1657)).b_ = F->r_346;
F->result_ = F->x_1657;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_350(struct f_greenc_1fr *up_, P174 *res_349) {
  struct f_expr_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->l_1658 = NULL;
F->r_1659 = NULL;
F->op_1660 = NULL;
F->first_op_1661 = NULL;
F->line_1662 = INT64_MIN;
F->short_1663 = INT_MIN;
F->short_1663 = 0;
F->first_short_1664 = INT_MIN;
F->first_short_1664 = 0;
f_relation_354(F->up, &F->l_1658);
while (((f_at_kw_322(F->up, rt_g_lit("AND", 3)) || f_at_kw_322(F->up, rt_g_lit("OR", 2))) || f_at_kw_322(F->up, rt_g_lit("XOR", 3)))) {
F->op_1660 = (*(P110)rt_nil_check(({ A109 ix1666 = F->up->toks_112; ix1666.p[rt_index(G_NV(F->up->tpos_114), ix1666.lo, ix1666.hi) - ix1666.lo]; }))).s_;
F->line_1662 = f_cur_line_320(F->up);
f_skip_333(F->up);
F->short_1663 = 0;
if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1660)), rt_g_lit("AND", 3)) && f_at_kw_322(F->up, rt_g_lit("THEN", 4)))) {
f_skip_333(F->up);
F->short_1663 = 1;
} else if ((eq_rt_gstr((*(P140)rt_nil_check(F->op_1660)), rt_g_lit("OR", 2)) && f_at_kw_322(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_333(F->up);
F->short_1663 = 1;
}
if ((F->first_op_1661 == NULL)) {
F->first_op_1661 = F->op_1660;
F->first_short_1664 = G_NV(F->short_1663);
} else if (((!eq_rt_gstr((*(P140)rt_nil_check(F->first_op_1661)), (*(P140)rt_nil_check(F->op_1660)))) || (G_NV(F->first_short_1664) != G_NV(F->short_1663)))) {
f_fail_260(F->up, G_NV(F->line_1662), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_354(F->up, &F->r_1659);
F->l_1658 = f_binop_348(F->up, F->op_1660, F->l_1658, F->r_1659, G_NV(F->line_1662));
if (G_NV(F->short_1663)) {
(*(P174)rt_nil_check(F->l_1658)).ival_ = ((rt_int)1LL);
}
}
L_end_1665: ;
(*F->res_349) = F->l_1658;
goto ret_;
ret_:

  return;
}

static int f_is_rel_352(struct f_greenc_1fr *up_, rt_gstr s_351) {
  struct f_is_rel_352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_351 = cp_rt_gstr(s_351);
F->result_ = (((((eq_rt_gstr(F->s_351, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_351, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_351, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_351, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_351, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_351, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_354(struct f_greenc_1fr *up_, P174 *res_353) {
  struct f_relation_354fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_353 = res_353;
F->l_1667 = NULL;
F->r_1668 = NULL;
F->lo_1669 = NULL;
F->hi_1670 = NULL;
F->t_1671 = NULL;
F->op_1672 = NULL;
F->line_1673 = INT64_MIN;
F->line_1673 = f_cur_line_320(F->up);
F->neg_1674 = INT_MIN;
F->neg_1674 = 0;
f_simple_expr_358(F->up, &F->l_1667);
if ((f_at_kind_326(F->up, ((rt_int)3LL)) && f_is_rel_352(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1676 = F->up->toks_112; ix1676.p[rt_index(G_NV(F->up->tpos_114), ix1676.lo, ix1676.hi) - ix1676.lo]; }))).s_))))) {
F->op_1672 = (*(P110)rt_nil_check(({ A109 ix1677 = F->up->toks_112; ix1677.p[rt_index(G_NV(F->up->tpos_114), ix1677.lo, ix1677.hi) - ix1677.lo]; }))).s_;
f_skip_333(F->up);
f_simple_expr_358(F->up, &F->r_1668);
F->l_1667 = f_binop_348(F->up, F->op_1672, F->l_1667, F->r_1668, G_NV(F->line_1673));
(*F->res_353) = F->l_1667;
goto ret_;
}
if (((f_at_kw_322(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_333(F->up);
F->neg_1674 = 1;
}
if (f_at_kw_322(F->up, rt_g_lit("IN", 2))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &F->lo_1669);
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &F->hi_1670);
F->t_1671 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->t_1671)).a_ = F->lo_1669;
(*(P174)rt_nil_check(F->t_1671)).b_ = F->hi_1670;
} else if (((G_NV((*(P174)rt_nil_check(F->lo_1669)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->lo_1669)).kind_) == ((rt_int)9LL)))) {
F->t_1671 = f_nn_313(F->up, ((rt_int)80LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->t_1671)).name_ = (*(P174)rt_nil_check(F->lo_1669)).name_;
if ((G_NV((*(P174)rt_nil_check(F->lo_1669)).kind_) == ((rt_int)9LL))) {
(*(P174)rt_nil_check(F->t_1671)).tag_ = f_mk_239(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->lo_1669)).a_));
}
if (f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) {
f_skip_333(F->up);
F->r_1668 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1673));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1668)).a_);
f_expect_op_337(F->up, rt_g_lit("..", 2));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1668)).b_);
(*(P174)rt_nil_check(F->t_1671)).a_ = F->r_1668;
(*(P174)rt_nil_check(F->t_1671)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_322(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_322(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->t_1671)).b_);
(*(P174)rt_nil_check(F->t_1671)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_332(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1672 = f_mk_239(F->up, rt_g_lit("IN", 2));
F->l_1667 = f_binop_348(F->up, F->op_1672, F->l_1667, F->t_1671, G_NV(F->line_1673));
if (G_NV(F->neg_1674)) {
F->t_1671 = f_nn_313(F->up, ((rt_int)6LL), G_NV(F->line_1673));
(*(P174)rt_nil_check(F->t_1671)).name_ = f_mk_239(F->up, rt_g_lit("NOT", 3));
(*(P174)rt_nil_check(F->t_1671)).a_ = F->l_1667;
(*F->res_353) = F->t_1671;
goto ret_;
}
}
(*F->res_353) = F->l_1667;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_356(struct f_greenc_1fr *up_, P174 e_355) {
  struct f_path_of_356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_355 = e_355;
if ((G_NV((*(P174)rt_nil_check(F->e_355)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_356(F->up, (*(P174)rt_nil_check(F->e_355)).a_), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_355)).name_)));
goto ret_;
}
F->result_ = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_355)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_358(struct f_greenc_1fr *up_, P174 *res_357) {
  struct f_simple_expr_358fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_357 = res_357;
F->l_1678 = NULL;
F->r_1679 = NULL;
F->op_1680 = NULL;
F->line_1681 = INT64_MIN;
F->line_1681 = f_cur_line_320(F->up);
if (((f_at_op_324(F->up, rt_g_lit("+", 1)) || f_at_op_324(F->up, rt_g_lit("-", 1))) || f_at_kw_322(F->up, rt_g_lit("NOT", 3)))) {
F->op_1680 = (*(P110)rt_nil_check(({ A109 ix1682 = F->up->toks_112; ix1682.p[rt_index(G_NV(F->up->tpos_114), ix1682.lo, ix1682.hi) - ix1682.lo]; }))).s_;
f_skip_333(F->up);
f_term_360(F->up, &F->r_1679);
F->l_1678 = f_nn_313(F->up, ((rt_int)6LL), G_NV(F->line_1681));
(*(P174)rt_nil_check(F->l_1678)).name_ = F->op_1680;
(*(P174)rt_nil_check(F->l_1678)).a_ = F->r_1679;
} else {
f_term_360(F->up, &F->l_1678);
}
while (((f_at_op_324(F->up, rt_g_lit("+", 1)) || f_at_op_324(F->up, rt_g_lit("-", 1))) || f_at_op_324(F->up, rt_g_lit("&", 1)))) {
F->op_1680 = (*(P110)rt_nil_check(({ A109 ix1684 = F->up->toks_112; ix1684.p[rt_index(G_NV(F->up->tpos_114), ix1684.lo, ix1684.hi) - ix1684.lo]; }))).s_;
f_skip_333(F->up);
f_term_360(F->up, &F->r_1679);
F->l_1678 = f_binop_348(F->up, F->op_1680, F->l_1678, F->r_1679, G_NV(F->line_1681));
}
L_end_1683: ;
(*F->res_357) = F->l_1678;
goto ret_;
ret_:

  return;
}

static void f_term_360(struct f_greenc_1fr *up_, P174 *res_359) {
  struct f_term_360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_359 = res_359;
F->l_1685 = NULL;
F->r_1686 = NULL;
F->op_1687 = NULL;
F->line_1688 = INT64_MIN;
F->line_1688 = f_cur_line_320(F->up);
f_factor_362(F->up, &F->l_1685);
while (((f_at_op_324(F->up, rt_g_lit("*", 1)) || f_at_op_324(F->up, rt_g_lit("/", 1))) || f_at_kw_322(F->up, rt_g_lit("MOD", 3)))) {
F->op_1687 = (*(P110)rt_nil_check(({ A109 ix1690 = F->up->toks_112; ix1690.p[rt_index(G_NV(F->up->tpos_114), ix1690.lo, ix1690.hi) - ix1690.lo]; }))).s_;
f_skip_333(F->up);
f_factor_362(F->up, &F->r_1686);
F->l_1685 = f_binop_348(F->up, F->op_1687, F->l_1685, F->r_1686, G_NV(F->line_1688));
}
L_end_1689: ;
(*F->res_359) = F->l_1685;
goto ret_;
ret_:

  return;
}

static void f_factor_362(struct f_greenc_1fr *up_, P174 *res_361) {
  struct f_factor_362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_361 = res_361;
F->l_1691 = NULL;
F->r_1692 = NULL;
F->op_1693 = NULL;
F->line_1694 = INT64_MIN;
F->line_1694 = f_cur_line_320(F->up);
f_primary_364(F->up, &F->l_1691);
if (f_at_op_324(F->up, rt_g_lit("**", 2))) {
F->op_1693 = (*(P110)rt_nil_check(({ A109 ix1695 = F->up->toks_112; ix1695.p[rt_index(G_NV(F->up->tpos_114), ix1695.lo, ix1695.hi) - ix1695.lo]; }))).s_;
f_skip_333(F->up);
f_primary_364(F->up, &F->r_1692);
F->l_1691 = f_binop_348(F->up, F->op_1693, F->l_1691, F->r_1692, G_NV(F->line_1694));
}
(*F->res_361) = F->l_1691;
goto ret_;
ret_:

  return;
}

static void f_primary_364(struct f_greenc_1fr *up_, P174 *res_363) {
  struct f_primary_364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_363 = res_363;
F->x_1696 = NULL;
F->line_1697 = INT64_MIN;
F->line_1697 = f_cur_line_320(F->up);
if (f_at_kind_326(F->up, ((rt_int)4LL))) {
F->x_1696 = f_nn_313(F->up, ((rt_int)1LL), G_NV(F->line_1697));
(*(P174)rt_nil_check(F->x_1696)).ival_ = G_NV((*(P110)rt_nil_check(({ A109 ix1698 = F->up->toks_112; ix1698.p[rt_index(G_NV(F->up->tpos_114), ix1698.lo, ix1698.hi) - ix1698.lo]; }))).ival_);
(*(P174)rt_nil_check(F->x_1696)).name_ = (*(P110)rt_nil_check(({ A109 ix1699 = F->up->toks_112; ix1699.p[rt_index(G_NV(F->up->tpos_114), ix1699.lo, ix1699.hi) - ix1699.lo]; }))).s_;
f_skip_333(F->up);
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_kind_326(F->up, ((rt_int)5LL))) {
F->x_1696 = f_nn_313(F->up, ((rt_int)2LL), G_NV(F->line_1697));
(*(P174)rt_nil_check(F->x_1696)).name_ = (*(P110)rt_nil_check(({ A109 ix1700 = F->up->toks_112; ix1700.p[rt_index(G_NV(F->up->tpos_114), ix1700.lo, ix1700.hi) - ix1700.lo]; }))).s_;
f_skip_333(F->up);
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_kind_326(F->up, ((rt_int)6LL))) {
F->x_1696 = f_nn_313(F->up, ((rt_int)3LL), G_NV(F->line_1697));
(*(P174)rt_nil_check(F->x_1696)).name_ = (*(P110)rt_nil_check(({ A109 ix1701 = F->up->toks_112; ix1701.p[rt_index(G_NV(F->up->tpos_114), ix1701.lo, ix1701.hi) - ix1701.lo]; }))).s_;
f_skip_333(F->up);
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("NULL", 4))) {
f_skip_333(F->up);
F->x_1696 = f_nn_313(F->up, ((rt_int)4LL), G_NV(F->line_1697));
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("NEW", 3))) {
f_skip_333(F->up);
F->x_1696 = f_nn_313(F->up, ((rt_int)11LL), G_NV(F->line_1697));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1696)).name_);
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_366(F->up, &(*(P174)rt_nil_check(F->x_1696)).a_);
}
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_366(F->up, &F->x_1696);
(*F->res_363) = F->x_1696;
goto ret_;
}
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_name_p_371(F->up, &F->x_1696);
(*F->res_363) = F->x_1696;
goto ret_;
}
f_perror_332(F->up, rt_g_lit("expected an expression", 22));
(*F->res_363) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_366(struct f_greenc_1fr *up_, P174 *res_365) {
  struct f_agg_or_paren_366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_365 = res_365;
F->line_1702 = INT64_MIN;
F->line_1702 = f_cur_line_320(F->up);
F->items_1703 = NULL;
F->itail_1704 = NULL;
F->it_1705 = NULL;
F->first_1706 = NULL;
F->keys_1707 = NULL;
F->ktail_1708 = NULL;
F->lab_1709 = NULL;
F->x_1710 = NULL;
F->more_1711 = INT_MIN;
F->more_1711 = 1;
f_expect_op_337(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1711)) {
F->it_1705 = f_nn_313(F->up, ((rt_int)13LL), G_NV(F->line_1702));
if (f_at_kw_322(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit("=>", 2));
F->lab_1709 = f_nn_313(F->up, ((rt_int)61LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->lab_1709)).flag_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->it_1705)).a_ = F->lab_1709;
f_expr_350(F->up, &(*(P174)rt_nil_check(F->it_1705)).b_);
} else {
f_expr_350(F->up, &F->first_1706);
if (((f_at_op_324(F->up, rt_g_lit("..", 2)) || f_at_op_324(F->up, rt_g_lit("|", 1))) || f_at_op_324(F->up, rt_g_lit("=>", 2)))) {
F->keys_1707 = NULL;
F->ktail_1708 = NULL;
for (;;) {
F->lab_1709 = f_nn_313(F->up, ((rt_int)61LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->lab_1709)).a_ = F->first_1706;
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->lab_1709)).b_);
}
f_append_317(F->up, &F->keys_1707, &F->ktail_1708, F->lab_1709);
if ((!f_at_op_324(F->up, rt_g_lit("|", 1)))) {
goto L_end_1713;
}
f_skip_333(F->up);
f_simple_expr_358(F->up, &F->first_1706);
}
L_end_1713: ;
f_expect_op_337(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->it_1705)).a_ = F->keys_1707;
f_expr_350(F->up, &(*(P174)rt_nil_check(F->it_1705)).b_);
} else {
(*(P174)rt_nil_check(F->it_1705)).b_ = F->first_1706;
}
}
f_append_317(F->up, &F->items_1703, &F->itail_1704, F->it_1705);
F->more_1711 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1711)) {
f_skip_333(F->up);
}
}
L_end_1712: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
if ((((*(P174)rt_nil_check(F->items_1703)).next_ == NULL) && ((*(P174)rt_nil_check(F->items_1703)).a_ == NULL))) {
F->x_1710 = f_nn_313(F->up, ((rt_int)15LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1710)).a_ = (*(P174)rt_nil_check(F->items_1703)).b_;
(*F->res_365) = F->x_1710;
goto ret_;
}
F->x_1710 = f_nn_313(F->up, ((rt_int)12LL), G_NV(F->line_1702));
(*(P174)rt_nil_check(F->x_1710)).a_ = F->items_1703;
(*F->res_365) = F->x_1710;
goto ret_;
ret_:

  return;
}

static int f_choice_token_368(struct f_greenc_1fr *up_, P110 t_367) {
  struct f_choice_token_368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_367 = t_367;
if ((G_NV((*(P110)rt_nil_check(F->t_367)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_367)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_367)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P110)rt_nil_check(F->t_367)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_367)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_369(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1714 = INT64_MIN;
F->d_1714 = ((rt_int)0LL);
F->k_1715 = INT64_MIN;
F->k_1715 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1715)) > G_NV(F->up->ntoks_113))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1718 = NULL;
F->t_1718 = ({ A109 ix1719 = F->up->toks_112; ix1719.p[rt_index(rt_add(G_NV(F->up->tpos_114), G_NV(F->k_1715)), ix1719.lo, ix1719.hi) - ix1719.lo]; });
if (((G_NV((*(P110)rt_nil_check(F->t_1718)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1718)).s_)), rt_g_lit("(", 1)))) {
F->d_1714 = rt_add(G_NV(F->d_1714), ((rt_int)1LL));
} else if (((G_NV((*(P110)rt_nil_check(F->t_1718)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1718)).s_)), rt_g_lit(")", 1)))) {
F->d_1714 = rt_sub(G_NV(F->d_1714), ((rt_int)1LL));
if ((G_NV(F->d_1714) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1714) == ((rt_int)1LL)) && f_choice_token_368(F->up, F->t_1718))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P110)rt_nil_check(F->t_1718)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(F->t_1718)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1717: ;
F->k_1715 = rt_add(G_NV(F->k_1715), ((rt_int)1LL));
}
L_end_1716: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_371(struct f_greenc_1fr *up_, P174 *res_370) {
  struct f_name_p_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->p_1720 = NULL;
F->x_1721 = NULL;
F->args_1722 = NULL;
F->atail_1723 = NULL;
F->lo_1724 = NULL;
F->r_1725 = NULL;
F->line_1726 = INT64_MIN;
F->line_1726 = f_cur_line_320(F->up);
F->more_1727 = INT_MIN;
f_name_node_341(F->up, &F->p_1720);
for (;;) {
if ((f_at_op_324(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_369(F->up))) {
F->x_1721 = f_nn_313(F->up, ((rt_int)8LL), G_NV(F->line_1726));
(*(P174)rt_nil_check(F->x_1721)).a_ = F->p_1720;
f_agg_or_paren_366(F->up, &(*(P174)rt_nil_check(F->x_1721)).b_);
(*(P174)rt_nil_check(F->x_1721)).flag_ = ((rt_int)9LL);
F->p_1720 = F->x_1721;
} else if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
F->args_1722 = NULL;
F->atail_1723 = NULL;
if ((!f_at_op_324(F->up, rt_g_lit(")", 1)))) {
F->more_1727 = 1;
while (G_NV(F->more_1727)) {
{
F->formal_1731 = NULL;
F->mark_1732 = INT64_MIN;
F->mark_1732 = ((rt_int)0LL);
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1731 = (*(P110)rt_nil_check(({ A109 ix1733 = F->up->toks_112; ix1733.p[rt_index(G_NV(F->up->tpos_114), ix1733.lo, ix1733.hi) - ix1733.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1732 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1732 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1732 = ((rt_int)2LL);
} else {
F->mark_1732 = ((rt_int)4LL);
}
f_skip_333(F->up);
f_skip_333(F->up);
}
f_expr_350(F->up, &F->lo_1724);
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
F->r_1725 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1726));
(*(P174)rt_nil_check(F->r_1725)).a_ = F->lo_1724;
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1725)).b_);
F->lo_1724 = F->r_1725;
}
(*(P174)rt_nil_check(F->lo_1724)).formal_ = F->formal_1731;
(*(P174)rt_nil_check(F->lo_1724)).flag_ = G_NV(F->mark_1732);
f_append_317(F->up, &F->args_1722, &F->atail_1723, F->lo_1724);

}
L_end_1730: ;
F->more_1727 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1727)) {
f_skip_333(F->up);
}
}
L_end_1729: ;
}
f_expect_op_337(F->up, rt_g_lit(")", 1));
F->x_1721 = f_nn_313(F->up, ((rt_int)8LL), G_NV(F->line_1726));
(*(P174)rt_nil_check(F->x_1721)).a_ = F->p_1720;
(*(P174)rt_nil_check(F->x_1721)).b_ = F->args_1722;
F->p_1720 = F->x_1721;
} else if (f_at_op_324(F->up, rt_g_lit(".", 1))) {
f_skip_333(F->up);
F->x_1721 = f_nn_313(F->up, ((rt_int)9LL), G_NV(F->line_1726));
(*(P174)rt_nil_check(F->x_1721)).a_ = F->p_1720;
if (f_at_kw_322(F->up, rt_g_lit("ALL", 3))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1721)).name_ = f_mk_239(F->up, rt_g_lit("ALL", 3));
} else if (f_at_kind_326(F->up, ((rt_int)6LL))) {
(*(P174)rt_nil_check(F->x_1721)).name_ = f_mk_239(F->up, f_upper_s_252(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1737 = F->up->toks_112; ix1737.p[rt_index(G_NV(F->up->tpos_114), ix1737.lo, ix1737.hi) - ix1737.lo]; }))).s_))));
f_skip_333(F->up);
} else {
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1721)).name_);
}
F->p_1720 = F->x_1721;
} else if (f_at_op_324(F->up, rt_g_lit("'", 1))) {
f_skip_333(F->up);
F->x_1721 = f_nn_313(F->up, ((rt_int)10LL), G_NV(F->line_1726));
(*(P174)rt_nil_check(F->x_1721)).a_ = F->p_1720;
(*(P174)rt_nil_check(F->x_1721)).name_ = (*(P110)rt_nil_check(({ A109 ix1738 = F->up->toks_112; ix1738.p[rt_index(G_NV(F->up->tpos_114), ix1738.lo, ix1738.hi) - ix1738.lo]; }))).s_;
f_skip_333(F->up);
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1721)).b_);
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
F->p_1720 = F->x_1721;
} else {
(*F->res_370) = F->p_1720;
goto ret_;
}
}
L_end_1728: ;
ret_:

  return;
}

static void f_component_list_373(struct f_greenc_1fr *up_, P174 *res_372) {
  struct f_component_list_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->comps_1739 = NULL;
F->ctail_1740 = NULL;
F->names_1741 = NULL;
F->st_1742 = NULL;
F->def_1743 = NULL;
F->cm_1744 = NULL;
F->v_1745 = NULL;
F->arm_1746 = NULL;
F->atail_1747 = NULL;
F->labs_1748 = NULL;
F->ltail_1749 = NULL;
F->l_1750 = NULL;
F->is_c_1751 = INT_MIN;
for (;;) {
if (f_at_kw_322(F->up, rt_g_lit("NULL", 4))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_322(F->up, rt_g_lit("CASE", 4))) {
F->v_1745 = f_nn_313(F->up, ((rt_int)23LL), f_cur_line_320(F->up));
f_skip_333(F->up);
f_name_node_341(F->up, &(*(P174)rt_nil_check(F->v_1745)).a_);
f_expect_kw_335(F->up, rt_g_lit("OF", 2));
F->atail_1747 = NULL;
while (f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) {
f_skip_333(F->up);
F->arm_1746 = f_nn_313(F->up, ((rt_int)60LL), f_cur_line_320(F->up));
F->labs_1748 = NULL;
F->ltail_1749 = NULL;
for (;;) {
if (f_at_kw_322(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->arm_1746)).flag_ = ((rt_int)1LL);
} else {
F->l_1750 = f_nn_313(F->up, ((rt_int)61LL), f_cur_line_320(F->up));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->l_1750)).a_);
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->l_1750)).b_);
}
f_append_317(F->up, &F->labs_1748, &F->ltail_1749, F->l_1750);
}
if ((!f_at_op_324(F->up, rt_g_lit("|", 1)))) {
goto L_end_1754;
}
f_skip_333(F->up);
}
L_end_1754: ;
f_expect_op_337(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->arm_1746)).a_ = F->labs_1748;
f_component_list_373(F->up, &(*(P174)rt_nil_check(F->arm_1746)).b_);
f_append_317(F->up, &(*(P174)rt_nil_check(F->v_1745)).b_, &F->atail_1747, F->arm_1746);
}
L_end_1753: ;
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("CASE", 4));
f_expect_op_337(F->up, rt_g_lit(";", 1));
f_append_317(F->up, &F->comps_1739, &F->ctail_1740, F->v_1745);
} else if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_id_list_343(F->up, &F->names_1741);
f_expect_op_337(F->up, rt_g_lit(":", 1));
F->is_c_1751 = 0;
if (f_at_kw_322(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_333(F->up);
F->is_c_1751 = 1;
}
f_type_spec_379(F->up, &F->st_1742);
F->def_1743 = NULL;
if (f_at_op_324(F->up, rt_g_lit(":=", 2))) {
f_skip_333(F->up);
f_expr_350(F->up, &F->def_1743);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
while ((F->names_1741 != NULL)) {
F->cm_1744 = f_nn_313(F->up, ((rt_int)63LL), G_NV((*(P174)rt_nil_check(F->names_1741)).line_));
(*(P174)rt_nil_check(F->cm_1744)).name_ = (*(P174)rt_nil_check(F->names_1741)).name_;
(*(P174)rt_nil_check(F->cm_1744)).a_ = F->st_1742;
(*(P174)rt_nil_check(F->cm_1744)).b_ = F->def_1743;
if (G_NV(F->is_c_1751)) {
(*(P174)rt_nil_check(F->cm_1744)).flag_ = ((rt_int)1LL);
}
f_append_317(F->up, &F->comps_1739, &F->ctail_1740, F->cm_1744);
F->names_1741 = (*(P174)rt_nil_check(F->names_1741)).next_;
}
L_end_1755: ;
} else {
(*F->res_372) = F->comps_1739;
goto ret_;
}
}
L_end_1752: ;
ret_:

  return;
}

static void f_discrete_range_p_375(struct f_greenc_1fr *up_, P174 *res_374) {
  struct f_discrete_range_p_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_374 = res_374;
F->lo_1756 = NULL;
F->r_1757 = NULL;
F->line_1758 = INT64_MIN;
F->line_1758 = f_cur_line_320(F->up);
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_377(F->up, &(*F->res_374));
goto ret_;
}
if ((((((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_328(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_328(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_377(F->up, &(*F->res_374));
goto ret_;
}
f_simple_expr_358(F->up, &F->lo_1756);
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
F->r_1757 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1758));
(*(P174)rt_nil_check(F->r_1757)).a_ = F->lo_1756;
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1757)).b_);
(*F->res_374) = F->r_1757;
goto ret_;
}
(*F->res_374) = F->lo_1756;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_377(struct f_greenc_1fr *up_, P174 *res_376) {
  struct f_subtype_ind_377fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_376 = res_376;
F->f_1759 = NULL;
F->x_1760 = NULL;
F->r_1761 = NULL;
F->args_1762 = NULL;
F->atail_1763 = NULL;
F->lo_1764 = NULL;
F->line_1765 = INT64_MIN;
F->line_1765 = f_cur_line_320(F->up);
F->more_1766 = INT_MIN;
F->more_1766 = 1;
F->x_1760 = f_nn_313(F->up, ((rt_int)80LL), G_NV(F->line_1765));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1760)).name_);
while (f_at_op_324(F->up, rt_g_lit(".", 1))) {
f_skip_333(F->up);
if (((*(P174)rt_nil_check(F->x_1760)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->x_1760)).tag_ = (*(P174)rt_nil_check(F->x_1760)).name_;
} else {
(*(P174)rt_nil_check(F->x_1760)).tag_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1760)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1760)).name_))));
}
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1760)).name_);
}
L_end_1767: ;
if (f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) {
f_skip_333(F->up);
F->r_1761 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1765));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1761)).a_);
f_expect_op_337(F->up, rt_g_lit("..", 2));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1761)).b_);
(*(P174)rt_nil_check(F->x_1760)).a_ = F->r_1761;
(*(P174)rt_nil_check(F->x_1760)).flag_ = ((rt_int)1LL);
} else if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
while (G_NV(F->more_1766)) {
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_339(F->up, &F->f_1759);
f_skip_333(F->up);
f_expr_350(F->up, &F->lo_1764);
(*(P174)rt_nil_check(F->lo_1764)).formal_ = F->f_1759;
} else {
f_discrete_range_p_375(F->up, &F->lo_1764);
}
f_append_317(F->up, &F->args_1762, &F->atail_1763, F->lo_1764);
F->more_1766 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1766)) {
f_skip_333(F->up);
}
}
L_end_1768: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1760)).a_ = F->args_1762;
(*(P174)rt_nil_check(F->x_1760)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_322(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_322(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->x_1760)).b_);
(*(P174)rt_nil_check(F->x_1760)).flag_ = ((rt_int)3LL);
if (f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) {
f_skip_333(F->up);
F->r_1761 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1765));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1761)).a_);
f_expect_op_337(F->up, rt_g_lit("..", 2));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1761)).b_);
(*(P174)rt_nil_check(F->x_1760)).a_ = F->r_1761;
}
}
(*F->res_376) = F->x_1760;
goto ret_;
ret_:

  return;
}

static void f_type_spec_379(struct f_greenc_1fr *up_, P174 *res_378) {
  struct f_type_spec_379fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_378 = res_378;
F->x_1769 = NULL;
if ((((((((f_at_op_324(F->up, rt_g_lit("(", 1)) || f_at_kw_322(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_322(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_322(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_322(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_322(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_322(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_381(F->up, &F->x_1769);
} else {
f_subtype_ind_377(F->up, &F->x_1769);
}
(*F->res_378) = F->x_1769;
goto ret_;
ret_:

  return;
}

static void f_type_def_381(struct f_greenc_1fr *up_, P174 *res_380) {
  struct f_type_def_381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_380 = res_380;
F->x_1770 = NULL;
F->lits_1771 = NULL;
F->ltail_1772 = NULL;
F->l_1773 = NULL;
F->idx_1774 = NULL;
F->itail_1775 = NULL;
F->r_1776 = NULL;
F->comps_1777 = NULL;
F->ctail_1778 = NULL;
F->names_1779 = NULL;
F->st_1780 = NULL;
F->def_1781 = NULL;
F->cm_1782 = NULL;
F->line_1783 = INT64_MIN;
F->line_1783 = f_cur_line_320(F->up);
F->more_1784 = INT_MIN;
F->more_1784 = 1;
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)70LL), G_NV(F->line_1783));
while (G_NV(F->more_1784)) {
if (f_at_kind_326(F->up, ((rt_int)6LL))) {
F->l_1773 = f_nn_313(F->up, ((rt_int)3LL), G_NV(F->line_1783));
(*(P174)rt_nil_check(F->l_1773)).name_ = (*(P110)rt_nil_check(({ A109 ix1786 = F->up->toks_112; ix1786.p[rt_index(G_NV(F->up->tpos_114), ix1786.lo, ix1786.hi) - ix1786.lo]; }))).s_;
f_skip_333(F->up);
} else {
f_name_node_341(F->up, &F->l_1773);
}
f_append_317(F->up, &F->lits_1771, &F->ltail_1772, F->l_1773);
F->more_1784 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1784)) {
f_skip_333(F->up);
}
}
L_end_1785: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
(*(P174)rt_nil_check(F->x_1770)).a_ = F->lits_1771;
(*F->res_380) = F->x_1770;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)71LL), G_NV(F->line_1783));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->x_1770)).a_);
f_expect_op_337(F->up, rt_g_lit("..", 2));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->x_1770)).b_);
(*F->res_380) = F->x_1770;
goto ret_;
}
if ((f_at_kw_322(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_322(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1770 = f_nn_313(F->up, ((rt_int)72LL), G_NV(F->line_1783));
(*(P174)rt_nil_check(F->x_1770)).flag_ = ((rt_int)1LL);
if (f_at_kw_322(F->up, rt_g_lit("DELTA", 5))) {
(*(P174)rt_nil_check(F->x_1770)).flag_ = ((rt_int)2LL);
}
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->x_1770)).a_);
if (f_at_kw_322(F->up, rt_g_lit("RANGE", 5))) {
f_skip_333(F->up);
F->r_1776 = f_nn_313(F->up, ((rt_int)14LL), G_NV(F->line_1783));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1776)).a_);
f_expect_op_337(F->up, rt_g_lit("..", 2));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->r_1776)).b_);
(*(P174)rt_nil_check(F->x_1770)).b_ = F->r_1776;
}
(*F->res_380) = F->x_1770;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)73LL), G_NV(F->line_1783));
f_expect_op_337(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1784)) {
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1773 = f_nn_313(F->up, ((rt_int)80LL), G_NV(F->line_1783));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->l_1773)).name_);
(*(P174)rt_nil_check(F->x_1770)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_375(F->up, &F->l_1773);
if (((G_NV((*(P174)rt_nil_check(F->l_1773)).kind_) != ((rt_int)14LL)) && (G_NV((*(P174)rt_nil_check(F->l_1773)).kind_) != ((rt_int)80LL)))) {
f_perror_332(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_317(F->up, &F->idx_1774, &F->itail_1775, F->l_1773);
F->more_1784 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1784)) {
f_skip_333(F->up);
}
}
L_end_1787: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
f_expect_kw_335(F->up, rt_g_lit("OF", 2));
(*(P174)rt_nil_check(F->x_1770)).a_ = F->idx_1774;
f_type_spec_379(F->up, &(*(P174)rt_nil_check(F->x_1770)).b_);
(*F->res_380) = F->x_1770;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("RECORD", 6))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)74LL), G_NV(F->line_1783));
f_component_list_373(F->up, &(*(P174)rt_nil_check(F->x_1770)).a_);
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("RECORD", 6));
(*F->res_380) = F->x_1770;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)75LL), G_NV(F->line_1783));
f_type_spec_379(F->up, &(*(P174)rt_nil_check(F->x_1770)).a_);
(*F->res_380) = F->x_1770;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("NEW", 3))) {
f_skip_333(F->up);
F->x_1770 = f_nn_313(F->up, ((rt_int)76LL), G_NV(F->line_1783));
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->x_1770)).a_);
(*F->res_380) = F->x_1770;
goto ret_;
}
f_perror_332(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_380) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_383(struct f_greenc_1fr *up_, P174 *res_382) {
  struct f_pragma_p_383fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_382 = res_382;
F->x_1788 = NULL;
F->a_1789 = NULL;
F->head_1790 = NULL;
F->tail_1791 = NULL;
F->x_1788 = f_nn_313(F->up, ((rt_int)56LL), f_cur_line_320(F->up));
f_expect_kw_335(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1788)).name_);
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
for (;;) {
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_name_node_341(F->up, &F->a_1789);
} else if (((f_at_kind_326(F->up, ((rt_int)6LL)) || f_at_kind_326(F->up, ((rt_int)4LL))) || f_at_kind_326(F->up, ((rt_int)5LL)))) {
f_primary_364(F->up, &F->a_1789);
} else {
f_perror_332(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_317(F->up, &F->head_1790, &F->tail_1791, F->a_1789);
if ((!f_at_op_324(F->up, rt_g_lit(",", 1)))) {
goto L_end_1792;
}
f_skip_333(F->up);
}
L_end_1792: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1788)).a_ = F->head_1790;
f_check_pragma_385(F->up, F->x_1788);
(*F->res_382) = F->x_1788;
ret_:

  return;
}

static void f_check_pragma_385(struct f_greenc_1fr *up_, P174 x_384) {
  struct f_check_pragma_385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_384 = x_384;
F->p_1793 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_384)).name_)));
F->n_1794 = INT64_MIN;
F->n_1794 = f_list_len_319(F->up, (*(P174)rt_nil_check(F->x_384)).a_);
F->a_1795 = NULL;
F->a_1795 = (*(P174)rt_nil_check(F->x_384)).a_;
if ((eq_rt_gstr(F->p_1793, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1793, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1794) != ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1793), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1793, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1793, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1793, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1793, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1793, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1794) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1795)).kind_) != ((rt_int)5LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1793), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1793, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1793, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1793, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1795)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1793, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_237 = (*(P174)rt_nil_check(F->a_1795)).name_;
} else if (eq_rt_gstr(F->p_1793, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_234 = (*(P174)rt_nil_check(F->a_1795)).name_;
}
} else if ((eq_rt_gstr(F->p_1793, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1793, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1794) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1795)).kind_) != ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1793), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1793, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_235 = G_NV((*(P174)rt_nil_check(F->a_1795)).ival_);
} else {
F->up->conf_memory_size_236 = G_NV((*(P174)rt_nil_check(F->a_1795)).ival_);
}
} else if ((eq_rt_gstr(F->p_1793, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1793, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1794) == ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1793), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1795 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->a_1795)).kind_) != ((rt_int)5LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1793), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1795 = (*(P174)rt_nil_check(F->a_1795)).next_;
}
L_end_1796: ;
} else if (eq_rt_gstr(F->p_1793, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1794) != ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->a_1795)).kind_) != ((rt_int)3LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->x_384)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_387(struct f_greenc_1fr *up_, P140 *res_386) {
  struct f_visibility_p_387fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_386 = res_386;
F->names_1797 = NULL;
F->v_1798 = NULL;
F->v_1798 = f_mk_239(F->up, rt_g_lit(",", 1));
f_expect_kw_335(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
f_id_list_343(F->up, &F->names_1797);
f_expect_op_337(F->up, rt_g_lit(")", 1));
while ((F->names_1797 != NULL)) {
F->v_1798 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_1798)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->names_1797)).name_))), one_rt_gstr(44)));
F->names_1797 = (*(P174)rt_nil_check(F->names_1797)).next_;
}
L_end_1799: ;
}
(*F->res_386) = F->v_1798;
ret_:

  return;
}

static void f_unit_p_389(struct f_greenc_1fr *up_, P174 *res_388) {
  struct f_unit_p_389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_388 = res_388;
F->v_1800 = NULL;
F->x_1801 = NULL;
if (f_at_kw_322(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_387(F->up, &F->v_1800);
}
if (f_at_kw_322(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_333(F->up);
if (((F->v_1800 == NULL) || (({ rt_gstr at1802 = (*(P140)rt_nil_check(F->v_1800)); at1802.hi >= at1802.lo ? at1802.hi - at1802.lo + 1 : (rt_int)0; }) < ((rt_int)2LL)))) {
f_perror_332(F->up, rt_g_lit("a subunit names its enclosing unit first in its visibility list (RM79 10.2)", 75));
}
f_unit_p_389(F->up, &F->x_1801);
if (((((G_NV((*(P174)rt_nil_check(F->x_1801)).kind_) != ((rt_int)44LL)) && (G_NV((*(P174)rt_nil_check(F->x_1801)).kind_) != ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->x_1801)).kind_) != ((rt_int)49LL))) && (G_NV((*(P174)rt_nil_check(F->x_1801)).kind_) != ((rt_int)51LL)))) {
f_perror_332(F->up, rt_g_lit("a subunit is a subprogram body or a module body (RM79 10.2)", 59));
}
(*(P174)rt_nil_check(F->x_1801)).formal_ = f_mk_239(F->up, cat_rt_gstr(one_rt_gstr(33), (*(P140)rt_nil_check(F->v_1800))));
(*F->res_388) = F->x_1801;
goto ret_;
}
if ((f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_322(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_402(F->up, &F->x_1801);
} else if (f_at_kw_322(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_408(F->up, &F->x_1801);
} else if (f_at_kw_322(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1146(F->up, &F->x_1801);
} else if (f_at_kw_322(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1290(F->up, &F->x_1801);
} else {
f_perror_332(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1801 != NULL)) {
(*(P174)rt_nil_check(F->x_1801)).formal_ = F->v_1800;
}
(*F->res_388) = F->x_1801;
ret_:

  return;
}

static void f_skip_representation_390(struct f_greenc_1fr *up_) {
  struct f_skip_representation_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
while ((!f_at_kw_322(F->up, rt_g_lit("USE", 3)))) {
f_skip_333(F->up);
}
L_end_1803: ;
f_skip_333(F->up);
if (f_at_kw_322(F->up, rt_g_lit("RECORD", 6))) {
while ((!((f_at_kw_322(F->up, rt_g_lit("END", 3)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("RECORD", 6))))) {
f_skip_333(F->up);
}
L_end_1804: ;
f_skip_333(F->up);
f_skip_333(F->up);
}
while ((!f_at_op_324(F->up, rt_g_lit(";", 1)))) {
f_skip_333(F->up);
}
L_end_1805: ;
f_skip_333(F->up);
ret_:

  return;
}

static void f_decl_part_392(struct f_greenc_1fr *up_, P174 *res_391) {
  struct f_decl_part_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_391 = res_391;
F->head_1806 = NULL;
F->tail_1807 = NULL;
F->x_1808 = NULL;
F->names_1809 = NULL;
for (;;) {
if (f_at_kw_322(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_383(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("USE", 3))) {
f_skip_333(F->up);
F->x_1808 = f_nn_313(F->up, ((rt_int)55LL), f_cur_line_320(F->up));
f_id_list_343(F->up, &(*(P174)rt_nil_check(F->x_1808)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (((f_at_kw_322(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_333(F->up);
f_type_decl_396(F->up, &F->x_1808);
if (((F->x_1808 == NULL) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1808)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_332(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P174)rt_nil_check(F->x_1808)).flag_ = ((rt_int)9LL);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_389(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("FOR", 3))) {
f_skip_representation_390(F->up);
} else if ((f_at_kw_322(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_322(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_396(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if ((f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_322(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_402(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_408(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1146(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1290(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (f_at_kw_322(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1148(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_394(F->up, &F->x_1808);
f_append_317(F->up, &F->head_1806, &F->tail_1807, F->x_1808);
} else {
(*F->res_391) = F->head_1806;
goto ret_;
}
}
L_end_1810: ;
ret_:

  return;
}

static void f_object_decl_394(struct f_greenc_1fr *up_, P174 *res_393) {
  struct f_object_decl_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_393 = res_393;
F->head_1811 = NULL;
F->tail_1812 = NULL;
F->names_1813 = NULL;
F->st_1814 = NULL;
F->init_1815 = NULL;
F->x_1816 = NULL;
F->line_1817 = INT64_MIN;
F->line_1817 = f_cur_line_320(F->up);
F->is_const_1818 = INT_MIN;
F->is_const_1818 = 0;
f_id_list_343(F->up, &F->names_1813);
f_expect_op_337(F->up, rt_g_lit(":", 1));
if (f_at_kw_322(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_333(F->up);
if (f_at_kw_322(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_333(F->up);
F->x_1816 = f_nn_313(F->up, ((rt_int)46LL), G_NV(F->line_1817));
(*(P174)rt_nil_check(F->x_1816)).name_ = (*(P174)rt_nil_check(F->names_1813)).name_;
f_name_p_371(F->up, &(*(P174)rt_nil_check(F->x_1816)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_393) = F->x_1816;
goto ret_;
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
while ((F->names_1813 != NULL)) {
F->x_1816 = f_nn_313(F->up, ((rt_int)46LL), G_NV(F->line_1817));
(*(P174)rt_nil_check(F->x_1816)).name_ = (*(P174)rt_nil_check(F->names_1813)).name_;
f_append_317(F->up, &F->head_1811, &F->tail_1812, F->x_1816);
F->names_1813 = (*(P174)rt_nil_check(F->names_1813)).next_;
}
L_end_1819: ;
(*F->res_393) = F->head_1811;
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_333(F->up);
F->is_const_1818 = 1;
}
f_type_spec_379(F->up, &F->st_1814);
if ((f_at_kw_322(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1818)))) {
f_skip_333(F->up);
F->x_1816 = f_nn_313(F->up, ((rt_int)40LL), G_NV(F->line_1817));
(*(P174)rt_nil_check(F->x_1816)).name_ = (*(P174)rt_nil_check(F->names_1813)).name_;
(*(P174)rt_nil_check(F->x_1816)).a_ = F->st_1814;
(*(P174)rt_nil_check(F->x_1816)).flag_ = ((rt_int)2LL);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1816)).b_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_393) = F->x_1816;
goto ret_;
}
if (f_at_op_324(F->up, rt_g_lit(":=", 2))) {
f_skip_333(F->up);
f_expr_350(F->up, &F->init_1815);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
while ((F->names_1813 != NULL)) {
if (G_NV(F->is_const_1818)) {
F->x_1816 = f_nn_313(F->up, ((rt_int)41LL), G_NV(F->line_1817));
} else {
F->x_1816 = f_nn_313(F->up, ((rt_int)40LL), G_NV(F->line_1817));
}
(*(P174)rt_nil_check(F->x_1816)).name_ = (*(P174)rt_nil_check(F->names_1813)).name_;
(*(P174)rt_nil_check(F->x_1816)).a_ = F->st_1814;
(*(P174)rt_nil_check(F->x_1816)).b_ = F->init_1815;
f_append_317(F->up, &F->head_1811, &F->tail_1812, F->x_1816);
F->names_1813 = (*(P174)rt_nil_check(F->names_1813)).next_;
}
L_end_1820: ;
(*F->res_393) = F->head_1811;
goto ret_;
ret_:

  return;
}

static void f_type_decl_396(struct f_greenc_1fr *up_, P174 *res_395) {
  struct f_type_decl_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_395 = res_395;
F->x_1821 = NULL;
F->line_1822 = INT64_MIN;
F->line_1822 = f_cur_line_320(F->up);
if (f_at_kw_322(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_333(F->up);
F->x_1821 = f_nn_313(F->up, ((rt_int)43LL), G_NV(F->line_1822));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1821)).name_);
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->x_1821)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_395) = F->x_1821;
goto ret_;
}
f_expect_kw_335(F->up, rt_g_lit("TYPE", 4));
F->x_1821 = f_nn_313(F->up, ((rt_int)42LL), G_NV(F->line_1822));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1821)).name_);
if (f_at_op_324(F->up, rt_g_lit(";", 1))) {
f_skip_333(F->up);
(*F->res_395) = NULL;
goto ret_;
}
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
if (f_at_kw_322(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1821)).a_ = f_nn_313(F->up, ((rt_int)77LL), G_NV(F->line_1822));
} else {
f_type_def_381(F->up, &(*(P174)rt_nil_check(F->x_1821)).a_);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_395) = F->x_1821;
goto ret_;
ret_:

  return;
}

static void f_formal_part_398(struct f_greenc_1fr *up_, P174 *res_397) {
  struct f_formal_part_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_397 = res_397;
F->head_1823 = NULL;
F->tail_1824 = NULL;
F->names_1825 = NULL;
F->st_1826 = NULL;
F->def_1827 = NULL;
F->p_1828 = NULL;
F->mode_1829 = INT64_MIN;
F->more_1830 = INT_MIN;
F->more_1830 = 1;
f_expect_op_337(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1830)) {
f_id_list_343(F->up, &F->names_1825);
f_expect_op_337(F->up, rt_g_lit(":", 1));
F->mode_1829 = ((rt_int)1LL);
if (f_at_kw_322(F->up, rt_g_lit("IN", 2))) {
f_skip_333(F->up);
if (f_at_kw_322(F->up, rt_g_lit("OUT", 3))) {
f_skip_333(F->up);
F->mode_1829 = ((rt_int)2LL);
}
} else if (f_at_kw_322(F->up, rt_g_lit("OUT", 3))) {
f_skip_333(F->up);
F->mode_1829 = ((rt_int)3LL);
}
f_subtype_ind_377(F->up, &F->st_1826);
F->def_1827 = NULL;
if (f_at_op_324(F->up, rt_g_lit(":=", 2))) {
f_skip_333(F->up);
f_expr_350(F->up, &F->def_1827);
}
while ((F->names_1825 != NULL)) {
F->p_1828 = f_nn_313(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_1825)).line_));
(*(P174)rt_nil_check(F->p_1828)).name_ = (*(P174)rt_nil_check(F->names_1825)).name_;
(*(P174)rt_nil_check(F->p_1828)).ival_ = G_NV(F->mode_1829);
(*(P174)rt_nil_check(F->p_1828)).a_ = F->st_1826;
(*(P174)rt_nil_check(F->p_1828)).b_ = F->def_1827;
f_append_317(F->up, &F->head_1823, &F->tail_1824, F->p_1828);
F->names_1825 = (*(P174)rt_nil_check(F->names_1825)).next_;
}
L_end_1832: ;
F->more_1830 = f_at_op_324(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1830)) {
f_skip_333(F->up);
}
}
L_end_1831: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
(*F->res_397) = F->head_1823;
goto ret_;
ret_:

  return;
}

static void f_designator_400(struct f_greenc_1fr *up_, P140 *res_399) {
  struct f_designator_400fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_399 = res_399;
if (f_at_kind_326(F->up, ((rt_int)6LL))) {
f_skip_333(F->up);
(*F->res_399) = f_mk_239(F->up, f_upper_s_252(F->up, (*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1836 = F->up->toks_112; ix1836.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1836.lo, ix1836.hi) - ix1836.lo]; }))).s_))));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->res_399))), rt_g_lit("/=", 2))) {
f_perror_332(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_254(F->up, (*(P140)rt_nil_check((*F->res_399)))))) {
f_perror_332(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->res_399))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_339(F->up, &(*F->res_399));
goto ret_;
ret_:

  return;
}

static void f_subprogram_402(struct f_greenc_1fr *up_, P174 *res_401) {
  struct f_subprogram_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_401 = res_401;
F->x_1837 = NULL;
F->line_1838 = INT64_MIN;
F->line_1838 = f_cur_line_320(F->up);
F->is_proc_1839 = INT_MIN;
F->is_proc_1839 = f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_333(F->up);
if (G_NV(F->is_proc_1839)) {
F->x_1837 = f_nn_313(F->up, ((rt_int)44LL), G_NV(F->line_1838));
} else {
F->x_1837 = f_nn_313(F->up, ((rt_int)45LL), G_NV(F->line_1838));
}
f_designator_400(F->up, &(*(P174)rt_nil_check(F->x_1837)).name_);
if (((f_at_kw_322(F->up, rt_g_lit("IS", 2)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1293(F->up, F->x_1837, &(*F->res_401));
goto ret_;
}
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_formal_part_398(F->up, &(*(P174)rt_nil_check(F->x_1837)).a_);
}
if (f_at_kw_322(F->up, rt_g_lit("RETURN", 6))) {
f_skip_333(F->up);
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->x_1837)).b_);
if (G_NV(F->is_proc_1839)) {
(*(P174)rt_nil_check(F->x_1837)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1839))) {
f_perror_332(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_322(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1837)).ival_ = ((rt_int)2LL);
f_name_p_371(F->up, &(*(P174)rt_nil_check(F->x_1837)).c_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_401) = F->x_1837;
goto ret_;
}
if (f_at_op_324(F->up, rt_g_lit(";", 1))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1837)).ival_ = ((rt_int)1LL);
(*F->res_401) = F->x_1837;
goto ret_;
}
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
if (f_at_kw_322(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1837)).ival_ = ((rt_int)3LL);
(*F->res_401) = F->x_1837;
goto ret_;
}
f_body_part_404(F->up, F->x_1837);
if ((f_at_kind_326(F->up, ((rt_int)1LL)) || f_at_kind_326(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1840 = F->up->toks_112; ix1840.p[rt_index(G_NV(F->up->tpos_114), ix1840.lo, ix1840.hi) - ix1840.lo]; }))).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1837)).name_))))) {
f_perror_332(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1837)).name_))));
}
f_skip_333(F->up);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_401) = F->x_1837;
goto ret_;
ret_:

  return;
}

static void f_body_part_404(struct f_greenc_1fr *up_, P174 x_403) {
  struct f_body_part_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_403 = x_403;
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_403)).c_);
if (f_at_kw_322(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_333(F->up);
F->up->saw_interface_216 = 0;
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_403)).d_);
if ((G_NV(F->up->saw_interface_216) && ((*(P174)rt_nil_check(F->x_403)).d_ == NULL))) {
(*(P174)rt_nil_check(F->x_403)).tag_ = f_mk_239(F->up, cat_rt_gstr(rt_g_lit("INTERFACE ", 10), (*(P140)rt_nil_check(F->up->saw_lang_218))));
}
F->up->saw_interface_216 = 0;
}
if (f_at_kw_322(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_406(F->up, &(*(P174)rt_nil_check(F->x_403)).e_);
}
f_expect_kw_335(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_406(struct f_greenc_1fr *up_, P174 *res_405) {
  struct f_parse_handlers_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_405 = res_405;
F->head_1841 = NULL;
F->tail_1842 = NULL;
F->h_1843 = NULL;
F->names_1844 = NULL;
F->ntail_1845 = NULL;
F->n_1846 = NULL;
f_expect_kw_335(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) {
f_skip_333(F->up);
F->h_1843 = f_nn_313(F->up, ((rt_int)62LL), f_cur_line_320(F->up));
F->names_1844 = NULL;
F->ntail_1845 = NULL;
for (;;) {
if (f_at_kw_322(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_333(F->up);
F->n_1846 = f_nn_313(F->up, ((rt_int)5LL), f_cur_line_320(F->up));
(*(P174)rt_nil_check(F->n_1846)).name_ = f_mk_239(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_341(F->up, &F->n_1846);
while (f_at_op_324(F->up, rt_g_lit(".", 1))) {
f_skip_333(F->up);
if (((*(P174)rt_nil_check(F->n_1846)).tag_ == NULL)) {
(*(P174)rt_nil_check(F->n_1846)).tag_ = (*(P174)rt_nil_check(F->n_1846)).name_;
} else {
(*(P174)rt_nil_check(F->n_1846)).tag_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1846)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1846)).name_))));
}
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->n_1846)).name_);
}
L_end_1849: ;
}
f_append_317(F->up, &F->names_1844, &F->ntail_1845, F->n_1846);
if ((!f_at_op_324(F->up, rt_g_lit("|", 1)))) {
goto L_end_1848;
}
f_skip_333(F->up);
}
L_end_1848: ;
f_expect_op_337(F->up, rt_g_lit("=>", 2));
(*(P174)rt_nil_check(F->h_1843)).a_ = F->names_1844;
f_statements_411(F->up, &(*(P174)rt_nil_check(F->h_1843)).b_);
f_append_317(F->up, &F->head_1841, &F->tail_1842, F->h_1843);
}
L_end_1847: ;
(*F->res_405) = F->head_1841;
goto ret_;
ret_:

  return;
}

static void f_package_p_408(struct f_greenc_1fr *up_, P174 *res_407) {
  struct f_package_p_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_407 = res_407;
F->x_1850 = NULL;
F->line_1851 = INT64_MIN;
F->line_1851 = f_cur_line_320(F->up);
f_expect_kw_335(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_322(F->up, rt_g_lit("BODY", 4))) {
f_skip_333(F->up);
F->x_1850 = f_nn_313(F->up, ((rt_int)49LL), G_NV(F->line_1851));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1850)).name_);
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
if (f_at_kw_322(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1850)).flag_ = ((rt_int)4LL);
(*F->res_407) = F->x_1850;
goto ret_;
}
f_body_part_404(F->up, F->x_1850);
} else {
F->x_1850 = f_nn_313(F->up, ((rt_int)48LL), G_NV(F->line_1851));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1850)).name_);
if (((f_at_kw_322(F->up, rt_g_lit("IS", 2)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1293(F->up, F->x_1850, &(*F->res_407));
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1850)).flag_ = ((rt_int)3LL);
f_name_p_371(F->up, &(*(P174)rt_nil_check(F->x_1850)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_407) = F->x_1850;
goto ret_;
}
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_1850)).c_);
if (f_at_kw_322(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_333(F->up);
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_1850)).d_);
}
f_expect_kw_335(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_skip_333(F->up);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_407) = F->x_1850;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_409(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_322(F->up, rt_g_lit("END", 3)) || f_at_kw_322(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_322(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_322(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_322(F->up, rt_g_lit("OR", 2))) || f_at_kind_326(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_411(struct f_greenc_1fr *up_, P174 *res_410) {
  struct f_statements_411fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_410 = res_410;
F->head_1852 = NULL;
F->tail_1853 = NULL;
F->x_1854 = NULL;
while ((!f_at_statements_end_409(F->up))) {
if (f_at_kw_322(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_383(F->up, &F->x_1854);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1854)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_216 = 1;
F->up->saw_lang_218 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_1854)).a_)).name_;
}
} else {
f_statement_413(F->up, &F->x_1854);
f_append_317(F->up, &F->head_1852, &F->tail_1853, F->x_1854);
}
}
L_end_1855: ;
(*F->res_410) = F->head_1852;
goto ret_;
ret_:

  return;
}

static void f_statement_413(struct f_greenc_1fr *up_, P174 *res_412) {
  struct f_statement_413fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_412 = res_412;
F->l_1856 = NULL;
F->x_1857 = NULL;
F->label_1858 = NULL;
if (f_at_op_324(F->up, rt_g_lit("<<", 2))) {
F->l_1856 = f_nn_313(F->up, ((rt_int)57LL), f_cur_line_320(F->up));
f_skip_333(F->up);
f_expect_id_339(F->up, &F->label_1858);
f_expect_op_337(F->up, rt_g_lit(">>", 2));
(*(P174)rt_nil_check(F->l_1856)).name_ = F->label_1858;
if (f_at_op_324(F->up, rt_g_lit("<<", 2))) {
f_statement_413(F->up, &F->x_1857);
} else {
f_labelled_statement_416(F->up, F->label_1858, &F->x_1857);
}
(*(P174)rt_nil_check(F->l_1856)).next_ = F->x_1857;
(*F->res_412) = F->l_1856;
goto ret_;
}
f_labelled_statement_416(F->up, NULL, &(*F->res_412));
ret_:

  return;
}

static void f_labelled_statement_416(struct f_greenc_1fr *up_, P140 label_414, P174 *res_415) {
  struct f_labelled_statement_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_414 = label_414;
F->res_415 = res_415;
F->x_1859 = NULL;
F->t_1860 = NULL;
F->line_1861 = INT64_MIN;
F->line_1861 = f_cur_line_320(F->up);
if (f_at_kw_322(F->up, rt_g_lit("NULL", 4))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit(";", 1));
F->x_1859 = f_nn_313(F->up, ((rt_int)31LL), G_NV(F->line_1861));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_420(F->up, &F->x_1859);
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_422(F->up, &F->x_1859);
(*F->res_415) = F->x_1859;
goto ret_;
} else if (((f_at_kw_322(F->up, rt_g_lit("FOR", 3)) || f_at_kw_322(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_322(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_424(F->up, &F->x_1859);
(*(P174)rt_nil_check(F->x_1859)).tag_ = F->label_414;
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
if (((F->label_414 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1862 = F->up->toks_112; ix1862.p[rt_index(G_NV(F->up->tpos_114), ix1862.lo, ix1862.hi) - ix1862.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_414)))))) {
f_perror_332(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_333(F->up);
} else if ((F->label_414 != NULL)) {
f_perror_332(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P140)rt_nil_check(F->label_414))), rt_g_lit(" ends with end loop ", 20)), (*(P140)rt_nil_check(F->label_414))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if ((f_at_kw_322(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_322(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1859 = f_nn_313(F->up, ((rt_int)25LL), G_NV(F->line_1861));
(*(P174)rt_nil_check(F->x_1859)).tag_ = F->label_414;
if (f_at_kw_322(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_333(F->up);
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_1859)).a_);
}
f_expect_kw_335(F->up, rt_g_lit("BEGIN", 5));
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_1859)).b_);
if (f_at_kw_322(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_406(F->up, &(*(P174)rt_nil_check(F->x_1859)).c_);
}
f_expect_kw_335(F->up, rt_g_lit("END", 3));
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
if (((F->label_414 == NULL) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P110)rt_nil_check(({ A109 ix1863 = F->up->toks_112; ix1863.p[rt_index(G_NV(F->up->tpos_114), ix1863.lo, ix1863.hi) - ix1863.lo]; }))).s_)), (*(P140)rt_nil_check(F->label_414)))))) {
f_perror_332(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_333(F->up);
} else if ((F->label_414 != NULL)) {
f_perror_332(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P140)rt_nil_check(F->label_414))), rt_g_lit(" ends with end ", 15)), (*(P140)rt_nil_check(F->label_414))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("EXIT", 4))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)26LL), G_NV(F->line_1861));
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1859)).name_);
}
if (f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) {
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1859)).a_);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("RETURN", 6))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)27LL), G_NV(F->line_1861));
if ((!f_at_op_324(F->up, rt_g_lit(";", 1)))) {
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1859)).a_);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("RAISE", 5))) {
f_skip_333(F->up);
if (f_at_op_324(F->up, rt_g_lit(";", 1))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)29LL), G_NV(F->line_1861));
(*F->res_415) = F->x_1859;
goto ret_;
}
F->x_1859 = f_nn_313(F->up, ((rt_int)28LL), G_NV(F->line_1861));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1859)).name_);
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1859)).a_);
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
while (f_at_op_324(F->up, rt_g_lit(".", 1))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1859)).tag_ = (*(P174)rt_nil_check(F->x_1859)).name_;
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1859)).name_);
}
L_end_1864: ;
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)30LL), G_NV(F->line_1861));
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1859)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
} else if (f_at_kw_322(F->up, rt_g_lit("GOTO", 4))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)58LL), G_NV(F->line_1861));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1859)).name_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
}
f_task_statement_418(F->up, &F->x_1859);
if ((F->x_1859 != NULL)) {
(*F->res_415) = F->x_1859;
goto ret_;
}
f_name_p_371(F->up, &F->t_1860);
if (f_at_op_324(F->up, rt_g_lit(":=", 2))) {
f_skip_333(F->up);
F->x_1859 = f_nn_313(F->up, ((rt_int)20LL), G_NV(F->line_1861));
(*(P174)rt_nil_check(F->x_1859)).a_ = F->t_1860;
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1859)).b_);
} else {
F->x_1859 = f_nn_313(F->up, ((rt_int)21LL), G_NV(F->line_1861));
(*(P174)rt_nil_check(F->x_1859)).a_ = F->t_1860;
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1859;
goto ret_;
ret_:

  return;
}

static void f_task_statement_418(struct f_greenc_1fr *up_, P174 *res_417) {
  struct f_task_statement_418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_417 = res_417;
f_parse_task_statement_1156(F->up, &(*F->res_417));
ret_:

  return;
}

static void f_if_stmt_420(struct f_greenc_1fr *up_, P174 *res_419) {
  struct f_if_stmt_420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_419 = res_419;
F->x_1865 = NULL;
F->arm_1866 = NULL;
F->head_1867 = NULL;
F->tail_1868 = NULL;
F->go_1869 = INT_MIN;
F->go_1869 = 1;
F->x_1865 = f_nn_313(F->up, ((rt_int)22LL), f_cur_line_320(F->up));
f_skip_333(F->up);
F->arm_1866 = f_nn_313(F->up, ((rt_int)60LL), f_cur_line_320(F->up));
f_expr_350(F->up, &(*(P174)rt_nil_check(F->arm_1866)).a_);
f_expect_kw_335(F->up, rt_g_lit("THEN", 4));
f_statements_411(F->up, &(*(P174)rt_nil_check(F->arm_1866)).b_);
f_append_317(F->up, &F->head_1867, &F->tail_1868, F->arm_1866);
while (G_NV(F->go_1869)) {
if (f_at_kw_322(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_333(F->up);
F->arm_1866 = f_nn_313(F->up, ((rt_int)60LL), f_cur_line_320(F->up));
f_expr_350(F->up, &(*(P174)rt_nil_check(F->arm_1866)).a_);
f_expect_kw_335(F->up, rt_g_lit("THEN", 4));
f_statements_411(F->up, &(*(P174)rt_nil_check(F->arm_1866)).b_);
f_append_317(F->up, &F->head_1867, &F->tail_1868, F->arm_1866);
} else if (f_at_kw_322(F->up, rt_g_lit("ELSE", 4))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1865)).flag_ = ((rt_int)1LL);
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_1865)).b_);
} else {
F->go_1869 = 0;
}
}
L_end_1870: ;
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("IF", 2));
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1865)).a_ = F->head_1867;
(*F->res_419) = F->x_1865;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_422(struct f_greenc_1fr *up_, P174 *res_421) {
  struct f_case_stmt_422fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_421 = res_421;
F->x_1871 = NULL;
F->arm_1872 = NULL;
F->head_1873 = NULL;
F->tail_1874 = NULL;
F->labs_1875 = NULL;
F->ltail_1876 = NULL;
F->l_1877 = NULL;
F->others_arm_1878 = INT_MIN;
F->x_1871 = f_nn_313(F->up, ((rt_int)23LL), f_cur_line_320(F->up));
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1871)).a_);
f_expect_kw_335(F->up, rt_g_lit("OF", 2));
while (f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) {
f_skip_333(F->up);
F->labs_1875 = NULL;
F->ltail_1876 = NULL;
F->others_arm_1878 = 0;
for (;;) {
if (f_at_kw_322(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_333(F->up);
F->others_arm_1878 = 1;
} else {
F->l_1877 = f_nn_313(F->up, ((rt_int)61LL), f_cur_line_320(F->up));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->l_1877)).a_);
if (f_at_op_324(F->up, rt_g_lit("..", 2))) {
f_skip_333(F->up);
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->l_1877)).b_);
}
f_append_317(F->up, &F->labs_1875, &F->ltail_1876, F->l_1877);
}
if ((!f_at_op_324(F->up, rt_g_lit("|", 1)))) {
goto L_end_1880;
}
f_skip_333(F->up);
}
L_end_1880: ;
f_expect_op_337(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1878)) {
(*(P174)rt_nil_check(F->x_1871)).flag_ = ((rt_int)1LL);
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_1871)).c_);
if ((!f_at_kw_322(F->up, rt_g_lit("END", 3)))) {
f_perror_332(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1872 = f_nn_313(F->up, ((rt_int)60LL), f_cur_line_320(F->up));
(*(P174)rt_nil_check(F->arm_1872)).a_ = F->labs_1875;
f_statements_411(F->up, &(*(P174)rt_nil_check(F->arm_1872)).b_);
f_append_317(F->up, &F->head_1873, &F->tail_1874, F->arm_1872);
}
}
L_end_1879: ;
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("CASE", 4));
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_1871)).b_ = F->head_1873;
(*F->res_421) = F->x_1871;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_424(struct f_greenc_1fr *up_, P174 *res_423) {
  struct f_loop_stmt_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_423 = res_423;
F->x_1881 = NULL;
F->r_1882 = NULL;
F->line_1883 = INT64_MIN;
F->line_1883 = f_cur_line_320(F->up);
F->x_1881 = f_nn_313(F->up, ((rt_int)24LL), G_NV(F->line_1883));
if (f_at_kw_322(F->up, rt_g_lit("FOR", 3))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1881)).flag_ = ((rt_int)2LL);
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_1881)).name_);
f_expect_kw_335(F->up, rt_g_lit("IN", 2));
if (f_at_kw_322(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1881)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->x_1881)).a_);
} else {
f_discrete_range_p_375(F->up, &(*(P174)rt_nil_check(F->x_1881)).a_);
}
} else if (f_at_kw_322(F->up, rt_g_lit("WHILE", 5))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_1881)).flag_ = ((rt_int)1LL);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_1881)).a_);
}
f_expect_kw_335(F->up, rt_g_lit("LOOP", 4));
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_1881)).b_);
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("LOOP", 4));
(*F->res_423) = F->x_1881;
goto ret_;
ret_:

  return;
}

static void f_compilation_426(struct f_greenc_1fr *up_, P174 *res_425) {
  struct f_compilation_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_425 = res_425;
F->first_1884 = INT64_MIN;
F->head_1885 = NULL;
F->tail_1886 = NULL;
F->x_1887 = NULL;
while ((!f_at_kind_326(F->up, ((rt_int)0LL)))) {
if (f_at_kw_322(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_383(F->up, &F->x_1887);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1887)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1887 = (*(P174)rt_nil_check(F->x_1887)).a_;
while ((F->x_1887 != NULL)) {
F->up->env_names_197 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->env_names_197)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1887)).name_))), one_rt_gstr(44)));
F->x_1887 = (*(P174)rt_nil_check(F->x_1887)).next_;
}
L_end_1889: ;
}
} else {
if ((!(((((f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_322(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_322(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_322(F->up, rt_g_lit("TASK", 4))) || f_at_kw_322(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_322(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_332(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
F->first_1884 = G_NV((*(P110)rt_nil_check(({ A109 ix1890 = F->up->toks_112; ix1890.p[rt_index(G_NV(F->up->tpos_114), ix1890.lo, ix1890.hi) - ix1890.lo]; }))).line_);
f_unit_p_389(F->up, &F->x_1887);
if (((*(P174)rt_nil_check(F->x_1887)).formal_ == NULL)) {
(*(P174)rt_nil_check(F->x_1887)).formal_ = f_mk_239(F->up, rt_g_lit(",", 1));
}
if (G_NV(F->up->compiling_source_207)) {
F->up->spans_206 = ({ R205 *cell1891 = rt_alloc(sizeof(R205)); *cell1891 = cp_R205(({ R205 ag1892; ag1892.u_ = F->x_1887; ag1892.first_ = G_NV(F->first_1884); ag1892.last_ = G_NV((*(P110)rt_nil_check(({ A109 ix1893 = F->up->toks_112; ix1893.p[rt_index(rt_sub(G_NV(F->up->tpos_114), ((rt_int)1LL)), ix1893.lo, ix1893.hi) - ix1893.lo]; }))).line_); ag1892.env_ = F->up->env_names_197; ag1892.next_ = F->up->spans_206; ag1892; })); (P204)cell1891; });
}
(*(P174)rt_nil_check(F->x_1887)).formal_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1887)).formal_)), (*(P140)rt_nil_check(F->up->env_names_197))));
f_append_317(F->up, &F->head_1885, &F->tail_1886, F->x_1887);
}
}
L_end_1888: ;
(*F->res_425) = F->head_1885;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_428(struct f_greenc_1fr *up_, rt_gstr s_427) {
  struct f_hash_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_427 = cp_rt_gstr(s_427);
F->h_1894 = INT64_MIN;
F->h_1894 = ((rt_int)0LL);
{ rt_int lo1898 = ((rt_int)1LL), hi1899 = ({ rt_gstr at1896 = F->s_427; at1896.hi >= at1896.lo ? at1896.hi - at1896.lo + 1 : (rt_int)0; });
for (rt_int it1900 = lo1898; it1900 <= hi1899; it1900++) {
F->i_1897 = it1900;
F->h_1894 = rt_rem(rt_add(rt_mul(G_NV(F->h_1894), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1901 = F->s_427; ix1901.p[rt_index(F->i_1897, ix1901.lo, ix1901.hi) - ix1901.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1895: ;
F->result_ = G_NV(F->h_1894);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_431(struct f_greenc_1fr *up_, P140 list_429, rt_gstr name_430) {
  struct f_listed_431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_429 = list_429;
F->name_430 = cp_rt_gstr(name_430);
F->l_1902 = cp_rt_gstr((*(P140)rt_nil_check(F->list_429)));
F->n_1903 = INT64_MIN;
F->n_1903 = ({ rt_gstr at1904 = F->name_430; at1904.hi >= at1904.lo ? at1904.hi - at1904.lo + 1 : (rt_int)0; });
{ rt_int lo1909 = ({ rt_gstr at1906 = F->l_1902; at1906.lo; }), hi1910 = rt_sub(rt_sub(({ rt_gstr at1907 = F->l_1902; at1907.hi; }), G_NV(F->n_1903)), ((rt_int)1LL));
for (rt_int it1911 = lo1909; it1911 <= hi1910; it1911++) {
F->i_1908 = it1911;
if (((G_NV(({ rt_gstr ix1912 = F->l_1902; ix1912.p[rt_index(F->i_1908, ix1912.lo, ix1912.hi) - ix1912.lo]; })) == 44) && (G_NV(({ rt_gstr ix1913 = F->l_1902; ix1913.p[rt_index(rt_add(rt_add(F->i_1908, G_NV(F->n_1903)), ((rt_int)1LL)), ix1913.lo, ix1913.hi) - ix1913.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1914 = F->l_1902; rt_int l_ = rt_add(F->i_1908, ((rt_int)1LL)), h_ = rt_add(F->i_1908, G_NV(F->n_1903)); if (l_ <= h_) { rt_index(l_, sl1914.lo, sl1914.hi); rt_index(h_, sl1914.lo, sl1914.hi); } sl1914.p += l_ - sl1914.lo; sl1914.lo = l_; sl1914.hi = h_; sl1914; }), F->name_430)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1905: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_433(struct f_greenc_1fr *up_, P117 y_432) {
  struct f_visible_sym_433fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_432 = y_432;
F->b_1915 = NULL;
F->b_1915 = F->up->barriers_200;
if ((G_NV((*(P117)rt_nil_check(F->y_432)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1915 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->y_432)).depth_) <= G_NV((*(P198)rt_nil_check(F->b_1915)).limit_)) && (G_NV((*(P117)rt_nil_check(F->y_432)).depth_) != G_NV((*(P198)rt_nil_check(F->b_1915)).keep_)))) {
if ((!f_listed_431(F->up, (*(P198)rt_nil_check(F->b_1915)).allowed_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_432)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1915 = (*(P198)rt_nil_check(F->b_1915)).next_;
}
L_end_1916: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_435(struct f_greenc_1fr *up_, rt_gstr name_434) {
  struct f_lookup_435fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_434 = cp_rt_gstr(name_434);
F->y_1917 = NULL;
F->y_1917 = ({ A116 ix1918 = F->up->table_119; ix1918.p[rt_index(f_hash_428(F->up, F->name_434), ix1918.lo, ix1918.hi) - ix1918.lo]; });
while ((F->y_1917 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1917)).name_)), F->name_434) && f_visible_sym_433(F->up, F->y_1917))) {
F->result_ = F->y_1917;
goto ret_;
}
F->y_1917 = (*(P117)rt_nil_check(F->y_1917)).chain_;
}
L_end_1919: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_438(struct f_greenc_1fr *up_, P117 a_436, P117 b_437) {
  struct f_same_task_438fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_436 = a_436;
F->b_437 = b_437;
if ((F->a_436 == F->b_437)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_436 == NULL) || (F->b_437 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_436)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_437)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_entry_441(struct f_greenc_1fr *up_, rt_gstr name_439, P117 owner_440) {
  struct f_lookup_entry_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_439 = cp_rt_gstr(name_439);
F->owner_440 = owner_440;
F->y_1920 = NULL;
F->y_1920 = ({ A116 ix1921 = F->up->table_119; ix1921.p[rt_index(f_hash_428(F->up, F->name_439), ix1921.lo, ix1921.hi) - ix1921.lo]; });
while ((F->y_1920 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1920)).name_)), F->name_439) && (G_NV((*(P117)rt_nil_check(F->y_1920)).kind_) == ((rt_int)10LL))) && f_same_task_438(F->up, (*(P117)rt_nil_check(F->y_1920)).members_, F->owner_440))) {
F->result_ = F->y_1920;
goto ret_;
}
F->y_1920 = (*(P117)rt_nil_check(F->y_1920)).chain_;
}
L_end_1922: ;
F->result_ = f_lookup_435(F->up, F->name_439);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_lookup_at_444(struct f_greenc_1fr *up_, rt_gstr name_442, rt_int d_443) {
  struct f_lookup_at_444fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_442 = cp_rt_gstr(name_442);
F->d_443 = d_443;
F->y_1923 = NULL;
F->y_1923 = ({ A116 ix1924 = F->up->table_119; ix1924.p[rt_index(f_hash_428(F->up, F->name_442), ix1924.lo, ix1924.hi) - ix1924.lo]; });
while ((F->y_1923 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1923)).name_)), F->name_442) && (G_NV((*(P117)rt_nil_check(F->y_1923)).depth_) == F->d_443))) {
F->result_ = F->y_1923;
goto ret_;
}
F->y_1923 = (*(P117)rt_nil_check(F->y_1923)).chain_;
}
L_end_1925: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_446(struct f_greenc_1fr *up_, rt_gstr name_445) {
  struct f_enclosing_depth_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_445 = cp_rt_gstr(name_445);
{ rt_int lo1928 = ((rt_int)1LL), hi1929 = G_NV(F->up->nunits_188);
for (rt_int it1930 = hi1929; it1930 >= lo1928; it1930--) {
F->i_1927 = it1930;
if (eq_rt_gstr((*(P140)rt_nil_check(({ A183 ix1931 = F->up->unit_names_184; ix1931.p[rt_index(F->i_1927, ix1931.lo, ix1931.hi) - ix1931.lo]; }))), F->name_445)) {
F->result_ = G_NV(({ A185 ix1932 = F->up->unit_depths_186; ix1932.p[rt_index(F->i_1927, ix1932.lo, ix1932.hi) - ix1932.lo]; }));
goto ret_;
}
}
}
L_end_1926: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_448(struct f_greenc_1fr *up_, P140 name_447) {
  struct f_push_unit_448fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_447 = name_447;
F->up->nunits_188 = rt_add(G_NV(F->up->nunits_188), ((rt_int)1LL));
(*({ A183 *ix1933 = &(F->up->unit_names_184); &ix1933->p[rt_index(G_NV(F->up->nunits_188), ix1933->lo, ix1933->hi) - ix1933->lo]; })) = F->name_447;
(*({ A185 *ix1934 = &(F->up->unit_depths_186); &ix1934->p[rt_index(G_NV(F->up->nunits_188), ix1934->lo, ix1934->hi) - ix1934->lo]; })) = G_NV(F->up->depth_120);
ret_:

  return;
}

static P117 f_lookup_decl_450(struct f_greenc_1fr *up_, P174 d_449) {
  struct f_lookup_decl_450fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_449 = d_449;
F->y_1935 = NULL;
F->y_1935 = ({ A116 ix1936 = F->up->table_119; ix1936.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_449)).name_))), ix1936.lo, ix1936.hi) - ix1936.lo]; });
while ((F->y_1935 != NULL)) {
if (((*(P117)rt_nil_check(F->y_1935)).decl_ == F->d_449)) {
F->result_ = F->y_1935;
goto ret_;
}
F->y_1935 = (*(P117)rt_nil_check(F->y_1935)).chain_;
}
L_end_1937: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_452(struct f_greenc_1fr *up_, P117 y_451) {
  struct f_overloadable_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_451 = y_451;
F->result_ = ((((G_NV((*(P117)rt_nil_check(F->y_451)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_451)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_451)).kind_) == ((rt_int)7LL))) || (G_NV((*(P117)rt_nil_check(F->y_451)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_455(struct f_greenc_1fr *up_, P122 a_453, P122 b_454) {
  struct f_same_455fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_453 = a_453;
F->b_454 = b_454;
if (((F->a_453 == NULL) || (F->b_454 == NULL))) {
F->result_ = (F->a_453 == F->b_454);
goto ret_;
} else if ((((*(P122)rt_nil_check(F->a_453)).view_of_ != NULL) || ((*(P122)rt_nil_check(F->b_454)).view_of_ != NULL))) {
F->result_ = (f_base_view_457(F->up, F->a_453) == f_base_view_457(F->up, F->b_454));
goto ret_;
}
F->result_ = (F->a_453 == F->b_454);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_base_view_457(struct f_greenc_1fr *up_, P122 t_456) {
  struct f_base_view_457fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_456 = t_456;
F->r_1938 = NULL;
F->r_1938 = F->t_456;
while (((*(P122)rt_nil_check(F->r_1938)).view_of_ != NULL)) {
F->r_1938 = (*(P122)rt_nil_check(F->r_1938)).view_of_;
}
L_end_1939: ;
F->result_ = F->r_1938;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_root_459(struct f_greenc_1fr *up_, P122 t_458) {
  struct f_root_459fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_458 = t_458;
F->r_1940 = NULL;
F->r_1940 = F->t_458;
while (((*(P122)rt_nil_check(F->r_1940)).parent_ != NULL)) {
F->r_1940 = (*(P122)rt_nil_check(F->r_1940)).parent_;
}
L_end_1941: ;
F->result_ = F->r_1940;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_462(struct f_greenc_1fr *up_, P122 a_460, P122 b_461) {
  struct f_derived_from_462fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_460 = a_460;
F->b_461 = b_461;
F->r_1942 = NULL;
F->r_1942 = F->a_460;
while ((F->r_1942 != NULL)) {
if ((F->r_1942 == F->b_461)) {
F->result_ = 1;
goto ret_;
}
F->r_1942 = (*(P122)rt_nil_check(F->r_1942)).parent_;
}
L_end_1943: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_464(struct f_greenc_1fr *up_, P122 t_463) {
  struct f_is_numeric_464fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_463 = t_463;
if (((*(P122)rt_nil_check(F->t_463)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_210) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_numeric_464(F->up, (*(P122)rt_nil_check(F->t_463)).view_of_);
goto ret_;
}
F->result_ = (((G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)3LL))) || (G_NV((*(P122)rt_nil_check(F->t_463)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_466(struct f_greenc_1fr *up_, P122 t_465) {
  struct f_is_discrete_466fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_465 = t_465;
if (((*(P122)rt_nil_check(F->t_465)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_210) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_discrete_466(F->up, (*(P122)rt_nil_check(F->t_465)).view_of_);
goto ret_;
}
F->result_ = ((((G_NV((*(P122)rt_nil_check(F->t_465)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_465)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_465)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->t_465)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_469(struct f_greenc_1fr *up_, P1944 a_467, P1944 b_468) {
  struct f_same_types_469fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_467 = a_467;
F->b_468 = b_468;
F->x_1946 = NULL;
F->x_1946 = F->a_467;
F->y_1947 = NULL;
F->y_1947 = F->b_468;
while (((F->x_1946 != NULL) && (F->y_1947 != NULL))) {
if (((!f_same_455(F->up, (*(P1944)rt_nil_check(F->x_1946)).t_, (*(P1944)rt_nil_check(F->y_1947)).t_)) || (G_NV((*(P1944)rt_nil_check(F->x_1946)).mode_) != G_NV((*(P1944)rt_nil_check(F->y_1947)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_1946 = (*(P1944)rt_nil_check(F->x_1946)).next_;
F->y_1947 = (*(P1944)rt_nil_check(F->y_1947)).next_;
}
L_end_1948: ;
F->result_ = ((F->x_1946 == NULL) && (F->y_1947 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_472(struct f_greenc_1fr *up_, P1944 a_470, P1944 b_471) {
  struct f_same_signature_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_470 = a_470;
F->b_471 = b_471;
F->x_1949 = NULL;
F->x_1949 = F->a_470;
F->y_1950 = NULL;
F->y_1950 = F->b_471;
while (((F->x_1949 != NULL) && (F->y_1950 != NULL))) {
if ((((!f_same_455(F->up, (*(P1944)rt_nil_check(F->x_1949)).t_, (*(P1944)rt_nil_check(F->y_1950)).t_)) || (G_NV((*(P1944)rt_nil_check(F->x_1949)).mode_) != G_NV((*(P1944)rt_nil_check(F->y_1950)).mode_))) || (!eq_rt_gstr((*(P140)rt_nil_check((*(P1944)rt_nil_check(F->x_1949)).name_)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->y_1950)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_1949 = (*(P1944)rt_nil_check(F->x_1949)).next_;
F->y_1950 = (*(P1944)rt_nil_check(F->y_1950)).next_;
}
L_end_1951: ;
F->result_ = ((F->x_1949 == NULL) && (F->y_1950 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_475(struct f_greenc_1fr *up_, P117 y_473, P117 z_474) {
  struct f_distinct_overload_475fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_473 = y_473;
F->z_474 = z_474;
if ((!(f_overloadable_452(F->up, F->y_473) && f_overloadable_452(F->up, F->z_474)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_473)).kind_) != G_NV((*(P117)rt_nil_check(F->z_474)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_472(F->up, (*(P117)rt_nil_check(F->y_473)).params_, (*(P117)rt_nil_check(F->z_474)).params_)) || (!f_same_455(F->up, (*(P117)rt_nil_check(F->y_473)).result_, (*(P117)rt_nil_check(F->z_474)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_478(struct f_greenc_1fr *up_, P117 y_476, rt_int line_477) {
  struct f_define_478fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_476 = y_476;
F->line_477 = line_477;
F->h_1952 = INT64_MIN;
F->h_1952 = f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_476)).name_)));
F->z_1953 = NULL;
F->z_1953 = ({ A116 ix1954 = F->up->table_119; ix1954.p[rt_index(G_NV(F->h_1952), ix1954.lo, ix1954.hi) - ix1954.lo]; });
while ((F->z_1953 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_1953)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_1953)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_476)).name_)))) && (!f_distinct_overload_475(F->up, F->y_476, F->z_1953)))) {
f_fail_260(F->up, F->line_477, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_476)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_1953 = (*(P117)rt_nil_check(F->z_1953)).chain_;
}
L_end_1955: ;
(*(P117)rt_nil_check(F->y_476)).depth_ = G_NV(F->up->depth_120);
(*(P117)rt_nil_check(F->y_476)).chain_ = ({ A116 ix1956 = F->up->table_119; ix1956.p[rt_index(G_NV(F->h_1952), ix1956.lo, ix1956.hi) - ix1956.lo]; });
(*({ A116 *ix1957 = &(F->up->table_119); &ix1957->p[rt_index(G_NV(F->h_1952), ix1957->lo, ix1957->hi) - ix1957->lo]; })) = F->y_476;
(*(P117)rt_nil_check(F->y_476)).stack_ = F->up->scope_stack_121;
F->up->scope_stack_121 = F->y_476;
ret_:

  return;
}

static void f_open_scope_479(struct f_greenc_1fr *up_) {
  struct f_open_scope_479fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_480(struct f_greenc_1fr *up_) {
  struct f_close_scope_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_121 != NULL) && (G_NV((*(P117)rt_nil_check(F->up->scope_stack_121)).depth_) == G_NV(F->up->depth_120)))) {
(*({ A116 *ix1959 = &(F->up->table_119); &ix1959->p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->scope_stack_121)).name_))), ix1959->lo, ix1959->hi) - ix1959->lo]; })) = (*(P117)rt_nil_check(F->up->scope_stack_121)).chain_;
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->up->scope_stack_121)).stack_;
}
L_end_1958: ;
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
ret_:

  return;
}

static P117 f_new_sym_483(struct f_greenc_1fr *up_, rt_int kind_481, P140 name_482) {
  struct f_new_sym_483fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_481 = kind_481;
F->name_482 = name_482;
F->result_ = ({ R118 *cell1960 = rt_alloc(sizeof(R118)); *cell1960 = cp_R118(({ R118 ag1961; ag1961.kind_ = F->kind_481; ag1961.name_ = F->name_482; ag1961.t_ = NULL; ag1961.c_ = NULL; ag1961.access_path_ = NULL; ag1961.cname_ = NULL; ag1961.ro_ = 0; ag1961.mvalue_ = ((rt_int)0LL); ag1961.hasmv_ = 0; ag1961.decl_ = NULL; ag1961.params_ = NULL; ag1961.result_ = NULL; ag1961.depth_ = ((rt_int)0LL); ag1961.level_ = ((rt_int)0LL); ag1961.byref_ = 0; ag1961.vrp_ = 0; ag1961.hidden_ = 0; ag1961.from_use_ = 0; ag1961.members_ = NULL; ag1961.mnext_ = NULL; ag1961.chain_ = NULL; ag1961.stack_ = NULL; ag1961.flags_ = ((rt_int)0LL); ag1961; })); (P117)cell1960; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P122 f_new_typ_485(struct f_greenc_1fr *up_, rt_int kind_484) {
  struct f_new_typ_485fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_484 = kind_484;
F->result_ = ({ R123 *cell1964 = rt_alloc(sizeof(R123)); *cell1964 = cp_R123(({ R123 ag1965; ag1965.kind_ = F->kind_484; ag1965.name_ = NULL; ag1965.lits_ = NULL; ag1965.elem_ = NULL; ag1965.idx_ = NULL; ag1965.elemcons_ = NULL; ag1965.tcons_ = NULL; ag1965.fields_ = NULL; ag1965.target_ = NULL; ag1965.decl_ = NULL; ag1965.cname_ = NULL; ag1965.forward_ = 0; ag1965.defined_ = 0; ag1965.priv_ = 0; ag1965.next_ = NULL; ag1965.idx2_ = NULL; ag1965.littab_ = NULL; ag1965.parent_ = NULL; ag1965.ndigits_ = ((rt_int)0LL); ag1965.fdelta_ = NULL; ag1965.fsmall_ = NULL; ag1965.dims_ = ((rt_int)0LL); ag1965.is_restricted_ = 0; ag1965.view_of_ = NULL; ag1965; })); (P122)cell1964; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P178 f_new_cons_486(struct f_greenc_1fr *up_) {
  struct f_new_cons_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R179 *cell1968 = rt_alloc(sizeof(R179)); *cell1968 = cp_R179(({ R179 ag1969; ag1969.lo_ = NULL; ag1969.hi_ = NULL; ag1969.slen_ = NULL; ag1969.mlo_ = ((rt_int)0LL); ag1969.mhi_ = ((rt_int)0LL); ag1969.hasm_ = 0; ag1969.lo2_ = NULL; ag1969.hi2_ = NULL; ag1969.acc_ = NULL; ag1969.inner_ = NULL; ag1969.dv_ = NULL; ag1969; })); (P178)cell1968; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_488(struct f_greenc_1fr *up_, P178 c_487) {
  struct f_bounded_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_487 = c_487;
if ((F->c_487 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_487)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_490(struct f_greenc_1fr *up_, P178 c_489) {
  struct f_bounded_hi_490fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_489 = c_489;
if ((F->c_489 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_489)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_492(struct f_greenc_1fr *up_, P178 c_491) {
  struct f_static_bounds_492fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_491 = c_491;
if ((F->c_491 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P178)rt_nil_check(F->c_491)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_494(struct f_greenc_1fr *up_, P178 c_493) {
  struct f_discriminated_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_493 = c_493;
if ((F->c_493 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P178)rt_nil_check(F->c_493)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_496(struct f_greenc_1fr *up_, P122 t_495) {
  struct f_kind_name_496fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_495 = t_495;
if (((*(P122)rt_nil_check(F->t_495)).name_ != NULL)) {
F->result_ = (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_495)).name_));
goto ret_;
}
{ rt_int sel1970 = G_NV((*(P122)rt_nil_check(F->t_495)).kind_);
if (0 || sel1970 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel1970 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel1970 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel1970 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel1970 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel1970 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel1970 == ((rt_int)16LL)) {
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

static void f_check_type_500(struct f_greenc_1fr *up_, P122 got_497, P122 want_498, rt_int line_499) {
  struct f_check_type_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_497 = got_497;
F->want_498 = want_498;
F->line_499 = line_499;
if ((F->want_498 == NULL)) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->got_497)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->want_498)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_455(F->up, F->got_497, F->want_498))) {
f_fail_260(F->up, F->line_499, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_496(F->up, F->got_497)), rt_g_lit(" where ", 7)), f_kind_name_496(F->up, F->want_498)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_502(struct f_greenc_1fr *up_, P122 t_501) {
  struct f_field_count_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_501 = t_501;
F->n_1971 = INT64_MIN;
F->n_1971 = ((rt_int)0LL);
F->f_1972 = NULL;
F->f_1972 = (*(P122)rt_nil_check(F->t_501)).fields_;
while ((F->f_1972 != NULL)) {
F->n_1971 = rt_add(G_NV(F->n_1971), ((rt_int)1LL));
F->f_1972 = (*(P1962)rt_nil_check(F->f_1972)).next_;
}
L_end_1973: ;
F->result_ = G_NV(F->n_1971);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_505(struct f_greenc_1fr *up_, P122 t_503, P140 *r_504) {
  struct f_ctype_505fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_503 = t_503;
F->r_504 = r_504;
F->s_1974 = NULL;
{ rt_int sel1975 = G_NV((*(P122)rt_nil_check(F->t_503)).kind_);
if (0 || sel1975 == ((rt_int)1LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel1975 == ((rt_int)2LL) || sel1975 == ((rt_int)4LL) || sel1975 == ((rt_int)11LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("int", 3));
} else if (0 || sel1975 == ((rt_int)3LL) || sel1975 == ((rt_int)16LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("double", 6));
} else if (0 || sel1975 == ((rt_int)5LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel1975 == ((rt_int)9LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("void", 4));
} else if (0 || sel1975 == ((rt_int)13LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel1975 == ((rt_int)14LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel1975 == ((rt_int)15LL)) {
(*F->r_504) = f_mk_239(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P122)rt_nil_check(F->t_503)).view_of_ != NULL)) {
f_ctype_505(F->up, (*(P122)rt_nil_check(F->t_503)).view_of_, &F->s_1974);
(*(P122)rt_nil_check(F->t_503)).cname_ = F->s_1974;
} else if (((*(P122)rt_nil_check(F->t_503)).cname_ == NULL)) {
f_declare_ctype_510(F->up, F->t_503);
} else if ((((G_NV((*(P122)rt_nil_check(F->t_503)).kind_) == ((rt_int)7LL)) && G_NV((*(P122)rt_nil_check(F->t_503)).forward_)) && (!G_NV((*(P122)rt_nil_check(F->t_503)).defined_)))) {
(*(P122)rt_nil_check(F->t_503)).defined_ = 1;
f_field_decls_508(F->up, F->t_503, &F->s_1974);
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_503)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1974))), rt_g_lit(" };", 3)));
}
(*F->r_504) = (*(P122)rt_nil_check(F->t_503)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_508(struct f_greenc_1fr *up_, P122 t_506, P140 *r_507) {
  struct f_field_decls_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_506 = t_506;
F->r_507 = r_507;
F->f_1976 = NULL;
F->f_1976 = (*(P122)rt_nil_check(F->t_506)).fields_;
F->s_1977 = NULL;
F->ct_1978 = NULL;
F->s_1977 = f_mk_239(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_1976 != NULL)) {
f_ctype_505(F->up, (*(P1962)rt_nil_check(F->f_1976)).t_, &F->ct_1978);
F->s_1977 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->s_1977)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_1978))), one_rt_gstr(32)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_1976)).name_)))), one_rt_gstr(59)));
F->f_1976 = (*(P1962)rt_nil_check(F->f_1976)).next_;
}
L_end_1979: ;
(*F->r_507) = F->s_1977;
ret_:

  return;
}

static void f_declare_ctype_510(struct f_greenc_1fr *up_, P122 t_509) {
  struct f_declare_ctype_510fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_509 = t_509;
F->ct_1980 = NULL;
F->s_1981 = NULL;
F->target_1982 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_621(F->up, F->t_509);
}
if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)6LL))) {
f_new_name_242(F->up, rt_g_lit("A", 1), &(*(P122)rt_nil_check(F->t_509)).cname_);
} else if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)7LL))) {
f_new_name_242(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->t_509)).cname_);
} else {
f_new_name_242(F->up, rt_g_lit("P", 1), &(*(P122)rt_nil_check(F->t_509)).cname_);
}
(*(P122)rt_nil_check(F->t_509)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->t_509;
if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)8LL))) {
F->target_1982 = (*(P122)rt_nil_check(F->t_509)).target_;
if ((F->target_1982 == NULL)) {
f_fail_260(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_496(F->up, F->t_509)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P122)rt_nil_check(F->target_1982)).kind_) == ((rt_int)7LL))) {
if (((*(P122)rt_nil_check(F->target_1982)).cname_ == NULL)) {
f_new_name_242(F->up, rt_g_lit("R", 1), &(*(P122)rt_nil_check(F->target_1982)).cname_);
(*(P122)rt_nil_check(F->target_1982)).next_ = F->up->all_types_124;
F->up->all_types_124 = F->target_1982;
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1982)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1982)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->target_1982)).forward_ = 1;
}
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->target_1982)).cname_))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_505(F->up, F->target_1982, &F->ct_1980);
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P140)rt_nil_check(F->ct_1980))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_509)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_509)).elem_, &F->ct_1980);
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(59)));
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P140)rt_nil_check(F->ct_1980))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), one_rt_gstr(59)));
(*(P122)rt_nil_check(F->t_509)).defined_ = 1;
f_field_decls_508(F->up, F->t_509, &F->s_1981);
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_509)).cname_))), rt_g_lit(" {", 2)), (*(P140)rt_nil_check(F->s_1981))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_513(struct f_greenc_1fr *up_, P174 lits_511, rt_gstr name_512) {
  struct f_lit_index_513fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_511 = lits_511;
F->name_512 = cp_rt_gstr(name_512);
F->i_1983 = INT64_MIN;
F->i_1983 = ((rt_int)0LL);
F->l_1984 = NULL;
F->l_1984 = F->lits_511;
while ((F->l_1984 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_1984)).name_)), F->name_512)) {
F->result_ = G_NV(F->i_1983);
goto ret_;
}
F->i_1983 = rt_add(G_NV(F->i_1983), ((rt_int)1LL));
F->l_1984 = (*(P174)rt_nil_check(F->l_1984)).next_;
}
L_end_1985: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_517(struct f_greenc_1fr *up_, P174 e_514, rt_int *v_515, int *ok_516) {
  struct f_manifest_517fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_514 = e_514;
F->v_515 = v_515;
F->ok_516 = ok_516;
F->a_1986 = INT64_MIN;
F->b_1987 = INT64_MIN;
F->ok2_1988 = INT_MIN;
F->y_1989 = NULL;
(*F->ok_516) = 0;
(*F->v_515) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)1LL))) {
(*F->ok_516) = 1;
(*F->v_515) = G_NV((*(P174)rt_nil_check(F->e_514)).ival_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)15LL))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_514)).a_, &(*F->v_515), &(*F->ok_516));
 (void)rt_range((*F->ok_516), 0, 1);
} else if (((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("-", 1)))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_514)).a_, &F->a_1986, &(*F->ok_516));
 (void)rt_range((*F->ok_516), 0, 1);
(*F->v_515) = rt_neg(G_NV(F->a_1986));
} else if (((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("*", 1))))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_514)).a_, &F->a_1986, &(*F->ok_516));
 (void)rt_range((*F->ok_516), 0, 1);
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_514)).b_, &F->b_1987, &F->ok2_1988);
 (void)rt_range(F->ok2_1988, 0, 1);
(*F->ok_516) = (G_NV((*F->ok_516)) && G_NV(F->ok2_1988));
if (G_NV((*F->ok_516))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("+", 1))) {
(*F->v_515) = rt_add(G_NV(F->a_1986), G_NV(F->b_1987));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("-", 1))) {
(*F->v_515) = rt_sub(G_NV(F->a_1986), G_NV(F->b_1987));
} else {
(*F->v_515) = rt_mul(G_NV(F->a_1986), G_NV(F->b_1987));
}
}
} else if ((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)5LL))) {
F->y_1989 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)));
if ((((F->y_1989 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1989)).hasmv_))) {
(*F->ok_516) = 1;
(*F->v_515) = G_NV((*(P117)rt_nil_check(F->y_1989)).mvalue_);
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->e_514)).a_))) {
F->y_1989 = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->e_514)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), G_NV((*(P174)rt_nil_check(F->e_514)).line_));
if ((((F->y_1989 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)2LL)) || (G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)7LL)))) && G_NV((*(P117)rt_nil_check(F->y_1989)).hasmv_))) {
(*F->ok_516) = 1;
(*F->v_515) = G_NV((*(P117)rt_nil_check(F->y_1989)).mvalue_);
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)10LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_514)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("LAST", 4))))) {
F->y_1989 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_514)).a_)).name_)));
if (((((F->y_1989 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1989)).c_ != NULL)) && G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1989)).c_)).hasm_))) {
(*F->ok_516) = 1;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_514)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_515) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1989)).c_)).mlo_);
} else {
(*F->v_515) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1989)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P174)rt_nil_check(F->e_514)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_514)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_319(F->up, (*(P174)rt_nil_check(F->e_514)).b_) == ((rt_int)1LL)))) {
F->y_1989 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_514)).a_)).name_)));
if (((((F->y_1989 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_1989)).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(F->y_1989)).t_ != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1989)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_514)).b_, &(*F->v_515), &(*F->ok_516));
 (void)rt_range((*F->ok_516), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_521(struct f_greenc_1fr *up_, P174 st_518, P122 *t_519, P178 *c_520) {
  struct f_resolve_521fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_518 = st_518;
F->t_519 = t_519;
F->c_520 = c_520;
F->y_1990 = NULL;
F->dummy_1991 = NULL;
F->code_1992 = NULL;
F->ok_1993 = INT_MIN;
F->r_1994 = NULL;
(*F->c_520) = f_new_cons_486(F->up);
if ((G_NV((*(P174)rt_nil_check(F->st_518)).kind_) != ((rt_int)80LL))) {
f_type_definition_555(F->up, F->st_518, NULL, &(*F->t_519), &(*F->c_520));
goto ret_;
}
if (((*(P174)rt_nil_check(F->st_518)).tag_ != NULL)) {
F->y_1990 = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_518)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_518)).name_)), G_NV((*(P174)rt_nil_check(F->st_518)).line_));
} else {
F->y_1990 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_518)).name_)));
}
if (((F->y_1990 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_1990)).kind_) != ((rt_int)5LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_518)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_518)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_519) = (*(P117)rt_nil_check(F->y_1990)).t_;
if (((*(P117)rt_nil_check(F->y_1990)).c_ != NULL)) {
(*(P178)rt_nil_check((*F->c_520))).lo_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).lo_;
(*(P178)rt_nil_check((*F->c_520))).hi_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).hi_;
(*(P178)rt_nil_check((*F->c_520))).slen_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).slen_;
(*(P178)rt_nil_check((*F->c_520))).mlo_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).mlo_);
(*(P178)rt_nil_check((*F->c_520))).mhi_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).mhi_);
(*(P178)rt_nil_check((*F->c_520))).hasm_ = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).hasm_);
(*(P178)rt_nil_check((*F->c_520))).acc_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).acc_;
(*(P178)rt_nil_check((*F->c_520))).inner_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).inner_;
(*(P178)rt_nil_check((*F->c_520))).dv_ = (*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_1990)).c_)).dv_;
}
if (((*F->t_519) == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_518)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_518)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P174)rt_nil_check(F->st_518)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_519))).kind_) != ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check((*F->t_519))).kind_) != ((rt_int)16LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_518)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->st_518)).b_, NULL, &F->dummy_1991, &(*(P178)rt_nil_check((*F->c_520))).acc_);
}
if (((G_NV((*(P174)rt_nil_check(F->st_518)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P174)rt_nil_check(F->st_518)).flag_) == ((rt_int)3LL)) && ((*(P174)rt_nil_check(F->st_518)).a_ != NULL)))) {
F->r_1994 = (*(P174)rt_nil_check(F->st_518)).a_;
if (((!f_is_numeric_464(F->up, (*F->t_519))) && (!f_is_discrete_466(F->up, (*F->t_519))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_518)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_539(F->up, F->r_1994, (*F->t_519), (*F->c_520));
} else if ((G_NV((*(P174)rt_nil_check(F->st_518)).flag_) == ((rt_int)2LL))) {
f_constraint_list_525(F->up, F->st_518, (*F->t_519), (*F->c_520));
}
ret_:

  return;
}

static void f_constraint_list_525(struct f_greenc_1fr *up_, P174 st_522, P122 t_523, P178 c_524) {
  struct f_constraint_list_525fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_522 = st_522;
F->t_523 = t_523;
F->c_524 = c_524;
F->r_1995 = NULL;
F->r_1995 = (*(P174)rt_nil_check(F->st_522)).a_;
F->arrt_1996 = NULL;
F->arrt_1996 = F->t_523;
F->cc_1997 = NULL;
F->cc_1997 = F->c_524;
F->it_1998 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_523)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_529(F->up, F->st_522, F->t_523, F->c_524);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->t_523)).kind_) != ((rt_int)6LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_522)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_319(F->up, F->r_1995) != G_NV((*(P122)rt_nil_check(F->t_523)).dims_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_522)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->t_523)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_1995 != NULL)) {
if (((*(P174)rt_nil_check(F->r_1995)).formal_ != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_522)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_535(F->up, F->r_1995, (*(P122)rt_nil_check(F->arrt_1996)).idx_, &F->it_1998, &(*(P178)rt_nil_check(F->cc_1997)).lo_, &(*(P178)rt_nil_check(F->cc_1997)).hi_);
f_check_type_500(F->up, F->it_1998, (*(P122)rt_nil_check(F->arrt_1996)).idx_, G_NV((*(P174)rt_nil_check(F->st_522)).line_));
(*(P178)rt_nil_check(F->cc_1997)).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1997)).mhi_ = ((rt_int)0LL);
(*(P178)rt_nil_check(F->cc_1997)).hasm_ = 0;
F->r_1995 = (*(P174)rt_nil_check(F->r_1995)).next_;
if ((F->r_1995 != NULL)) {
(*(P178)rt_nil_check(F->cc_1997)).inner_ = f_new_cons_486(F->up);
F->cc_1997 = (*(P178)rt_nil_check(F->cc_1997)).inner_;
F->arrt_1996 = (*(P122)rt_nil_check(F->arrt_1996)).elem_;
}
}
L_end_1999: ;
ret_:

  return;
}

static void f_discriminant_constraint_529(struct f_greenc_1fr *up_, P174 st_526, P122 t_527, P178 c_528) {
  struct f_discriminant_constraint_529fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_526 = st_526;
F->t_527 = t_527;
F->c_528 = c_528;
F->a_2000 = NULL;
F->a_2000 = (*(P174)rt_nil_check(F->st_526)).a_;
F->f_2001 = NULL;
F->f_2001 = (*(P122)rt_nil_check(F->t_527)).fields_;
F->vt_2002 = NULL;
F->v_2003 = NULL;
F->d_2004 = NULL;
F->tail_2005 = NULL;
(*(P178)rt_nil_check(F->c_528)).dv_ = NULL;
while ((F->a_2000 != NULL)) {
if (((*(P174)rt_nil_check(F->a_2000)).formal_ != NULL)) {
F->f_2001 = (*(P122)rt_nil_check(F->t_527)).fields_;
while (((F->f_2001 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2001)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2000)).formal_)))))) {
F->f_2001 = (*(P1962)rt_nil_check(F->f_2001)).next_;
}
L_end_2007: ;
} else {
while (((F->f_2001 != NULL) && (!G_NV((*(P1962)rt_nil_check(F->f_2001)).is_discr_)))) {
F->f_2001 = (*(P1962)rt_nil_check(F->f_2001)).next_;
}
L_end_2008: ;
}
if (((F->f_2001 == NULL) || (!G_NV((*(P1962)rt_nil_check(F->f_2001)).is_discr_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_526)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_496(F->up, F->t_527)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_842(F->up, F->a_2000, (*(P1962)rt_nil_check(F->f_2001)).t_, &F->vt_2002, &F->v_2003);
f_check_type_500(F->up, F->vt_2002, (*(P1962)rt_nil_check(F->f_2001)).t_, G_NV((*(P174)rt_nil_check(F->st_526)).line_));
F->d_2004 = ({ R1967 *cell2009 = rt_alloc(sizeof(R1967)); *cell2009 = cp_R1967(({ R1967 ag2010; ag2010.name_ = (*(P1962)rt_nil_check(F->f_2001)).name_; ag2010.v_ = F->v_2003; ag2010.next_ = NULL; ag2010; })); (P1966)cell2009; });
if ((F->tail_2005 == NULL)) {
(*(P178)rt_nil_check(F->c_528)).dv_ = F->d_2004;
} else {
(*(P1966)rt_nil_check(F->tail_2005)).next_ = F->d_2004;
}
F->tail_2005 = F->d_2004;
if (((*(P174)rt_nil_check(F->a_2000)).formal_ == NULL)) {
F->f_2001 = (*(P1962)rt_nil_check(F->f_2001)).next_;
}
F->a_2000 = (*(P174)rt_nil_check(F->a_2000)).next_;
}
L_end_2006: ;
F->f_2001 = (*(P122)rt_nil_check(F->t_527)).fields_;
while ((F->f_2001 != NULL)) {
if (G_NV((*(P1962)rt_nil_check(F->f_2001)).is_discr_)) {
F->d_2004 = (*(P178)rt_nil_check(F->c_528)).dv_;
while (((F->d_2004 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2004)).name_)), (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2001)).name_)))))) {
F->d_2004 = (*(P1966)rt_nil_check(F->d_2004)).next_;
}
L_end_2012: ;
if ((F->d_2004 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->st_526)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2001)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_2001 = (*(P1962)rt_nil_check(F->f_2001)).next_;
}
L_end_2011: ;
ret_:

  return;
}

static void f_discrete_bounds_535(struct f_greenc_1fr *up_, P174 r_530, P122 want_531, P122 *t_532, P140 *lo_533, P140 *hi_534) {
  struct f_discrete_bounds_535fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_530 = r_530;
F->want_531 = want_531;
F->t_532 = t_532;
F->lo_533 = lo_533;
F->hi_534 = hi_534;
F->c_2013 = NULL;
F->y_2014 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->r_530)).kind_) == ((rt_int)14LL))) {
f_range_bounds_837(F->up, (*(P174)rt_nil_check(F->r_530)).a_, (*(P174)rt_nil_check(F->r_530)).b_, F->want_531, G_NV((*(P174)rt_nil_check(F->r_530)).line_), &(*F->t_532), &(*F->lo_533), &(*F->hi_534));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->r_530)).kind_) == ((rt_int)5LL))) {
F->y_2014 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_530)).name_)));
if (((F->y_2014 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2014)).kind_) != ((rt_int)5LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->r_530)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P174)rt_nil_check(F->r_530)).kind_) != ((rt_int)80LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->r_530)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P174)rt_nil_check(F->r_530)).kind_) == ((rt_int)5LL))) {
(*F->t_532) = (*(P117)rt_nil_check(F->y_2014)).t_;
F->c_2013 = (*(P117)rt_nil_check(F->y_2014)).c_;
} else {
f_resolve_521(F->up, F->r_530, &(*F->t_532), &F->c_2013);
}
if (((F->c_2013 == NULL) || ((*(P178)rt_nil_check(F->c_2013)).lo_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->r_530)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_533) = (*(P178)rt_nil_check(F->c_2013)).lo_;
(*F->hi_534) = (*(P178)rt_nil_check(F->c_2013)).hi_;
ret_:

  return;
}

static void f_range_of_539(struct f_greenc_1fr *up_, P174 r_536, P122 t_537, P178 c_538) {
  struct f_range_of_539fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_536 = r_536;
F->t_537 = t_537;
F->c_538 = c_538;
F->dummy_2015 = NULL;
F->ok_2016 = INT_MIN;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->r_536)).a_, F->t_537, &F->dummy_2015, &(*(P178)rt_nil_check(F->c_538)).lo_);
f_check_type_500(F->up, F->dummy_2015, F->t_537, G_NV((*(P174)rt_nil_check(F->r_536)).line_));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->r_536)).b_, F->t_537, &F->dummy_2015, &(*(P178)rt_nil_check(F->c_538)).hi_);
f_check_type_500(F->up, F->dummy_2015, F->t_537, G_NV((*(P174)rt_nil_check(F->r_536)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_537)).kind_) == ((rt_int)16LL))) {
(*(P178)rt_nil_check(F->c_538)).lo_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_538)).lo_))), one_rt_gstr(41)));
(*(P178)rt_nil_check(F->c_538)).hi_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_538)).hi_))), one_rt_gstr(41)));
}
f_manifest_517(F->up, (*(P174)rt_nil_check(F->r_536)).a_, &(*(P178)rt_nil_check(F->c_538)).mlo_, &F->ok_2016);
 (void)rt_range(F->ok_2016, 0, 1);
(*(P178)rt_nil_check(F->c_538)).hasm_ = G_NV(F->ok_2016);
f_manifest_517(F->up, (*(P174)rt_nil_check(F->r_536)).b_, &(*(P178)rt_nil_check(F->c_538)).mhi_, &F->ok_2016);
 (void)rt_range(F->ok_2016, 0, 1);
(*(P178)rt_nil_check(F->c_538)).hasm_ = (G_NV((*(P178)rt_nil_check(F->c_538)).hasm_) && G_NV(F->ok_2016));
ret_:

  return;
}

static void f_fresh_typ_543(struct f_greenc_1fr *up_, rt_int kind_540, P140 name_541, P122 *t_542) {
  struct f_fresh_typ_543fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_540 = kind_540;
F->name_541 = name_541;
F->t_542 = t_542;
F->ph_2017 = NULL;
F->ph_2017 = F->up->completing_173;
F->up->completing_173 = NULL;
if ((F->ph_2017 == NULL)) {
(*F->t_542) = f_new_typ_485(F->up, F->kind_540);
(*(P122)rt_nil_check((*F->t_542))).name_ = F->name_541;
goto ret_;
}
as_R123(&(*(P122)rt_nil_check(F->ph_2017)), (*(P122)rt_nil_check(f_new_typ_485(F->up, F->kind_540))));
(*(P122)rt_nil_check(F->ph_2017)).name_ = F->name_541;
(*F->t_542) = F->ph_2017;
ret_:

  return;
}

static void f_inherit_547(struct f_greenc_1fr *up_, P122 parent_544, P122 t_545, rt_int line_546) {
  struct f_inherit_547fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_544 = parent_544;
F->t_545 = t_545;
F->line_546 = line_546;
F->s_2018 = NULL;
F->s_2018 = F->up->scope_stack_121;
F->z_2019 = NULL;
F->p_2020 = NULL;
F->q_2021 = NULL;
F->tail_2022 = NULL;
F->uses_2023 = INT_MIN;
F->news_2024 = NULL;
while ((F->s_2018 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_2018)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->s_2018)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->s_2018)).hidden_))) && ((*(P117)rt_nil_check(F->s_2018)).members_ == NULL))) {
F->uses_2023 = f_same_455(F->up, (*(P117)rt_nil_check(F->s_2018)).result_, F->parent_544);
F->p_2020 = (*(P117)rt_nil_check(F->s_2018)).params_;
while ((F->p_2020 != NULL)) {
F->uses_2023 = (G_NV(F->uses_2023) || f_same_455(F->up, (*(P1944)rt_nil_check(F->p_2020)).t_, F->parent_544));
F->p_2020 = (*(P1944)rt_nil_check(F->p_2020)).next_;
}
L_end_2026: ;
if (G_NV(F->uses_2023)) {
f_copy_sym_1094(F->up, F->s_2018, &F->z_2019);
(*(P117)rt_nil_check(F->z_2019)).params_ = NULL;
F->tail_2022 = NULL;
F->p_2020 = (*(P117)rt_nil_check(F->s_2018)).params_;
while ((F->p_2020 != NULL)) {
F->q_2021 = ({ R1945 *cell2028 = rt_alloc(sizeof(R1945)); *cell2028 = cp_R1945(({ R1945 ag2029; ag2029.name_ = (*(P1944)rt_nil_check(F->p_2020)).name_; ag2029.mode_ = G_NV((*(P1944)rt_nil_check(F->p_2020)).mode_); ag2029.t_ = (*(P1944)rt_nil_check(F->p_2020)).t_; ag2029.c_ = (*(P1944)rt_nil_check(F->p_2020)).c_; ag2029.cfield_ = (*(P1944)rt_nil_check(F->p_2020)).cfield_; ag2029.dflt_ = (*(P1944)rt_nil_check(F->p_2020)).dflt_; ag2029.next_ = NULL; ag2029.dsym_ = (*(P1944)rt_nil_check(F->p_2020)).dsym_; ag2029; })); (P1944)cell2028; });
if (f_same_455(F->up, (*(P1944)rt_nil_check(F->q_2021)).t_, F->parent_544)) {
(*(P1944)rt_nil_check(F->q_2021)).t_ = F->t_545;
}
if ((F->tail_2022 == NULL)) {
(*(P117)rt_nil_check(F->z_2019)).params_ = F->q_2021;
} else {
(*(P1944)rt_nil_check(F->tail_2022)).next_ = F->q_2021;
}
F->tail_2022 = F->q_2021;
F->p_2020 = (*(P1944)rt_nil_check(F->p_2020)).next_;
}
L_end_2027: ;
if (f_same_455(F->up, (*(P117)rt_nil_check(F->z_2019)).result_, F->parent_544)) {
(*(P117)rt_nil_check(F->z_2019)).result_ = F->t_545;
}
(*(P117)rt_nil_check(F->z_2019)).chain_ = F->news_2024;
F->news_2024 = F->z_2019;
}
}
F->s_2018 = (*(P117)rt_nil_check(F->s_2018)).stack_;
}
L_end_2025: ;
while ((F->news_2024 != NULL)) {
F->z_2019 = F->news_2024;
F->news_2024 = (*(P117)rt_nil_check(F->news_2024)).chain_;
(*(P117)rt_nil_check(F->z_2019)).chain_ = NULL;
f_define_478(F->up, F->z_2019, F->line_546);
}
L_end_2030: ;
ret_:

  return;
}

static void f_derive_literals_550(struct f_greenc_1fr *up_, P122 t_548, rt_int line_549) {
  struct f_derive_literals_550fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_548 = t_548;
F->line_549 = line_549;
F->l_2031 = NULL;
F->l_2031 = (*(P122)rt_nil_check(F->t_548)).lits_;
F->n_2032 = INT64_MIN;
F->n_2032 = ((rt_int)0LL);
F->y_2033 = NULL;
while ((F->l_2031 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_2031)).kind_) == ((rt_int)5LL))) {
F->y_2033 = f_new_sym_483(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_2031)).name_);
(*(P117)rt_nil_check(F->y_2033)).t_ = F->t_548;
(*(P117)rt_nil_check(F->y_2033)).result_ = F->t_548;
(*(P117)rt_nil_check(F->y_2033)).mvalue_ = G_NV(F->n_2032);
(*(P117)rt_nil_check(F->y_2033)).hasmv_ = 1;
f_define_478(F->up, F->y_2033, F->line_549);
}
F->n_2032 = rt_add(G_NV(F->n_2032), ((rt_int)1LL));
F->l_2031 = (*(P174)rt_nil_check(F->l_2031)).next_;
}
L_end_2034: ;
ret_:

  return;
}

static void f_type_definition_555(struct f_greenc_1fr *up_, P174 d_551, P140 name_552, P122 *t_553, P178 *c_554) {
  struct f_type_definition_555fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_551 = d_551;
F->name_552 = name_552;
F->t_553 = t_553;
F->c_554 = c_554;
F->dummy_2035 = NULL;
F->it_2036 = NULL;
F->ic_2037 = NULL;
F->l_2038 = NULL;
F->comp_2039 = NULL;
F->f_2040 = NULL;
F->tail_2041 = NULL;
F->ok_2042 = INT_MIN;
F->n_2043 = INT64_MIN;
F->y_2044 = NULL;
(*F->c_554) = f_new_cons_486(F->up);
{ rt_int sel2045 = G_NV((*(P174)rt_nil_check(F->d_551)).kind_);
if (0 || sel2045 == ((rt_int)70LL)) {
f_fresh_typ_543(F->up, ((rt_int)4LL), F->name_552, &(*F->t_553));
(*(P122)rt_nil_check((*F->t_553))).lits_ = (*(P174)rt_nil_check(F->d_551)).a_;
F->l_2038 = (*(P174)rt_nil_check(F->d_551)).a_;
F->n_2043 = ((rt_int)0LL);
while ((F->l_2038 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->l_2038)).kind_) == ((rt_int)5LL))) {
F->y_2044 = f_new_sym_483(F->up, ((rt_int)7LL), (*(P174)rt_nil_check(F->l_2038)).name_);
(*(P117)rt_nil_check(F->y_2044)).t_ = (*F->t_553);
(*(P117)rt_nil_check(F->y_2044)).result_ = (*F->t_553);
(*(P117)rt_nil_check(F->y_2044)).mvalue_ = G_NV(F->n_2043);
(*(P117)rt_nil_check(F->y_2044)).hasmv_ = 1;
f_define_478(F->up, F->y_2044, G_NV((*(P174)rt_nil_check(F->l_2038)).line_));
}
F->n_2043 = rt_add(G_NV(F->n_2043), ((rt_int)1LL));
F->l_2038 = (*(P174)rt_nil_check(F->l_2038)).next_;
}
L_end_2046: ;
(*(P178)rt_nil_check((*F->c_554))).lo_ = f_mk_239(F->up, rt_g_lit("0", 1));
(*(P178)rt_nil_check((*F->c_554))).hi_ = f_mk_239(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_2043), ((rt_int)1LL)))));
(*(P178)rt_nil_check((*F->c_554))).mlo_ = ((rt_int)0LL);
(*(P178)rt_nil_check((*F->c_554))).mhi_ = rt_sub(G_NV(F->n_2043), ((rt_int)1LL));
(*(P178)rt_nil_check((*F->c_554))).hasm_ = 1;
} else if (0 || sel2045 == ((rt_int)71LL)) {
f_fresh_typ_543(F->up, ((rt_int)1LL), F->name_552, &(*F->t_553));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->d_551)).a_, F->up->ty_int_156, &F->dummy_2035, &(*(P178)rt_nil_check((*F->c_554))).lo_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_2035)).kind_) != ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_551)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->d_551)).b_, F->up->ty_int_156, &F->dummy_2035, &(*(P178)rt_nil_check((*F->c_554))).hi_);
if ((G_NV((*(P122)rt_nil_check(F->dummy_2035)).kind_) != ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_551)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_517(F->up, (*(P174)rt_nil_check(F->d_551)).a_, &(*(P178)rt_nil_check((*F->c_554))).mlo_, &F->ok_2042);
 (void)rt_range(F->ok_2042, 0, 1);
(*(P178)rt_nil_check((*F->c_554))).hasm_ = G_NV(F->ok_2042);
f_manifest_517(F->up, (*(P174)rt_nil_check(F->d_551)).b_, &(*(P178)rt_nil_check((*F->c_554))).mhi_, &F->ok_2042);
 (void)rt_range(F->ok_2042, 0, 1);
(*(P178)rt_nil_check((*F->c_554))).hasm_ = (G_NV((*(P178)rt_nil_check((*F->c_554))).hasm_) && G_NV(F->ok_2042));
(*(P122)rt_nil_check((*F->t_553))).parent_ = F->up->ty_int_156;
(*(P122)rt_nil_check((*F->t_553))).tcons_ = (*F->c_554);
if ((G_NV((*(P178)rt_nil_check((*F->c_554))).hasm_) && ((G_NV((*(P178)rt_nil_check((*F->c_554))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P178)rt_nil_check((*F->c_554))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P122)rt_nil_check((*F->t_553))).parent_ = F->up->ty_short_167;
}
f_inherit_547(F->up, (*(P122)rt_nil_check((*F->t_553))).parent_, (*F->t_553), G_NV((*(P174)rt_nil_check(F->d_551)).line_));
} else if (0 || sel2045 == ((rt_int)72LL)) {
f_real_type_619(F->up, F->d_551, F->name_552, &(*F->t_553), &(*F->c_554));
} else if (0 || sel2045 == ((rt_int)73LL)) {
f_array_type_562(F->up, (*(P174)rt_nil_check(F->d_551)).a_, (*(P174)rt_nil_check(F->d_551)).b_, F->name_552, G_NV((*(P174)rt_nil_check(F->d_551)).line_), &(*F->t_553), &(*F->c_554));
} else if (0 || sel2045 == ((rt_int)74LL)) {
f_fresh_typ_543(F->up, ((rt_int)7LL), F->name_552, &(*F->t_553));
F->up->disc_syms_182 = NULL;
f_record_components_600(F->up, (*(P174)rt_nil_check(F->d_551)).a_, (*F->t_553), NULL, G_NV((*(P174)rt_nil_check(F->d_551)).line_));
while ((F->up->disc_syms_182 != NULL)) {
f_remove_sym_595(F->up, F->up->disc_syms_182);
F->up->disc_syms_182 = (*(P117)rt_nil_check(F->up->disc_syms_182)).mnext_;
}
L_end_2047: ;
} else if (0 || sel2045 == ((rt_int)75LL)) {
f_fresh_typ_543(F->up, ((rt_int)8LL), F->name_552, &(*F->t_553));
(*(P122)rt_nil_check((*F->t_553))).decl_ = (*(P174)rt_nil_check(F->d_551)).a_;
if (((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_551)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_551)).a_)).name_))) != NULL)) && (G_NV((*(P117)rt_nil_check(f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_551)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P117)rt_nil_check(f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->d_551)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_621(F->up, (*F->t_553));
}
} else if (0 || sel2045 == ((rt_int)76LL)) {
f_derived_type_614(F->up, F->d_551, F->name_552, &(*F->t_553), &(*F->c_554));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_551)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_562(struct f_greenc_1fr *up_, P174 idx_556, P174 comp_557, P140 name_558, rt_int line_559, P122 *t_560, P178 *c_561) {
  struct f_array_type_562fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_556 = idx_556;
F->comp_557 = comp_557;
F->name_558 = name_558;
F->line_559 = line_559;
F->t_560 = t_560;
F->c_561 = c_561;
F->l_2048 = NULL;
F->l_2048 = F->idx_556;
F->rowc_2049 = NULL;
F->ic_2050 = NULL;
F->it_2051 = NULL;
(*F->c_561) = f_new_cons_486(F->up);
f_fresh_typ_543(F->up, ((rt_int)6LL), F->name_558, &(*F->t_560));
(*(P122)rt_nil_check((*F->t_560))).dims_ = f_list_len_319(F->up, F->idx_556);
if (((*(P174)rt_nil_check(F->idx_556)).next_ == NULL)) {
f_resolve_521(F->up, F->comp_557, &(*(P122)rt_nil_check((*F->t_560))).elem_, &(*(P122)rt_nil_check((*F->t_560))).elemcons_);
} else {
if (((G_NV((*(P174)rt_nil_check(F->idx_556)).kind_) == ((rt_int)14LL)) != (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->idx_556)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_260(F->up, F->line_559, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_562(F->up, (*(P174)rt_nil_check(F->idx_556)).next_, F->comp_557, NULL, F->line_559, &(*(P122)rt_nil_check((*F->t_560))).elem_, &F->rowc_2049);
if (((*(P178)rt_nil_check(F->rowc_2049)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_560))).elemcons_ = F->rowc_2049;
}
}
if ((G_NV((*(P174)rt_nil_check(F->l_2048)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_535(F->up, F->l_2048, NULL, &(*(P122)rt_nil_check((*F->t_560))).idx_, &(*(P178)rt_nil_check((*F->c_561))).lo_, &(*(P178)rt_nil_check((*F->c_561))).hi_);
f_static_range_566(F->up, (*(P174)rt_nil_check(F->l_2048)).a_, (*(P174)rt_nil_check(F->l_2048)).b_, (*F->c_561));
} else if (((G_NV((*(P174)rt_nil_check(F->l_2048)).kind_) == ((rt_int)80LL)) && (G_NV((*(P174)rt_nil_check(F->l_2048)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_535(F->up, F->l_2048, NULL, &(*(P122)rt_nil_check((*F->t_560))).idx_, &(*(P178)rt_nil_check((*F->c_561))).lo_, &(*(P178)rt_nil_check((*F->c_561))).hi_);
} else {
f_resolve_521(F->up, F->l_2048, &(*(P122)rt_nil_check((*F->t_560))).idx_, &F->ic_2050);
if (((((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_560))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_560))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_560))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P178)rt_nil_check(F->ic_2050)).hasm_) && ((rt_sub(G_NV((*(P178)rt_nil_check(F->ic_2050)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_2050)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P178)rt_nil_check(F->ic_2050)).mhi_), G_NV((*(P178)rt_nil_check(F->ic_2050)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P178)rt_nil_check((*F->c_561))).lo_ = (*(P178)rt_nil_check(F->ic_2050)).lo_;
(*(P178)rt_nil_check((*F->c_561))).hi_ = (*(P178)rt_nil_check(F->ic_2050)).hi_;
(*(P178)rt_nil_check((*F->c_561))).mlo_ = G_NV((*(P178)rt_nil_check(F->ic_2050)).mlo_);
(*(P178)rt_nil_check((*F->c_561))).mhi_ = G_NV((*(P178)rt_nil_check(F->ic_2050)).mhi_);
(*(P178)rt_nil_check((*F->c_561))).hasm_ = G_NV((*(P178)rt_nil_check(F->ic_2050)).hasm_);
} else if (((*(P178)rt_nil_check(F->ic_2050)).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_560))).tcons_ = f_new_cons_486(F->up);
(*(P178)rt_nil_check((*(P122)rt_nil_check((*F->t_560))).tcons_)).lo_ = (*(P178)rt_nil_check(F->ic_2050)).lo_;
}
}
if ((!f_is_discrete_466(F->up, (*(P122)rt_nil_check((*F->t_560))).idx_))) {
f_fail_260(F->up, F->line_559, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P122)rt_nil_check((*F->t_560))).dims_) > ((rt_int)1LL))) {
(*(P178)rt_nil_check((*F->c_561))).inner_ = F->rowc_2049;
if ((((*(P178)rt_nil_check((*F->c_561))).lo_ == NULL) != ((*(P178)rt_nil_check(F->rowc_2049)).lo_ == NULL))) {
(*(P178)rt_nil_check((*F->c_561))).lo_ = NULL;
(*(P178)rt_nil_check((*F->c_561))).hi_ = NULL;
(*(P178)rt_nil_check((*F->c_561))).inner_ = NULL;
(*(P122)rt_nil_check((*F->t_560))).elemcons_ = NULL;
}
}
if (((*(P178)rt_nil_check((*F->c_561))).lo_ != NULL)) {
(*(P122)rt_nil_check((*F->t_560))).tcons_ = (*F->c_561);
}
ret_:

  return;
}

static void f_static_range_566(struct f_greenc_1fr *up_, P174 l_563, P174 h_564, P178 c_565) {
  struct f_static_range_566fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_563 = l_563;
F->h_564 = h_564;
F->c_565 = c_565;
F->ok_2052 = INT_MIN;
F->ok2_2053 = INT_MIN;
f_manifest_517(F->up, F->l_563, &(*(P178)rt_nil_check(F->c_565)).mlo_, &F->ok_2052);
 (void)rt_range(F->ok_2052, 0, 1);
f_manifest_517(F->up, F->h_564, &(*(P178)rt_nil_check(F->c_565)).mhi_, &F->ok2_2053);
 (void)rt_range(F->ok2_2053, 0, 1);
if ((f_is_char_lit_823(F->up, F->l_563) && f_is_char_lit_823(F->up, F->h_564))) {
(*(P178)rt_nil_check(F->c_565)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2054 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_563)).name_)); ix2054.p[rt_index(((rt_int)1LL), ix2054.lo, ix2054.hi) - ix2054.lo]; }))) + 1), ((rt_int)1LL));
(*(P178)rt_nil_check(F->c_565)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2055 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->h_564)).name_)); ix2055.p[rt_index(((rt_int)1LL), ix2055.lo, ix2055.hi) - ix2055.lo]; }))) + 1), ((rt_int)1LL));
F->ok_2052 = 1;
F->ok2_2053 = 1;
}
(*(P178)rt_nil_check(F->c_565)).hasm_ = (G_NV(F->ok_2052) && G_NV(F->ok2_2053));
ret_:

  return;
}

static void f_component_place_572(struct f_greenc_1fr *up_, P122 rt_567, P1962 f_568, rt_gstr a_569, rt_gstr ct_570, P140 *r_571) {
  struct f_component_place_572fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_567 = rt_567;
F->f_568 = f_568;
F->a_569 = cp_rt_gstr(a_569);
F->ct_570 = cp_rt_gstr(ct_570);
F->r_571 = r_571;
F->bits_2056 = NULL;
if (eq_rt_gstr(F->a_569, rt_g_lit("POSITION", 8))) {
(*F->r_571) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_570), rt_g_lit(", ", 2)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_568)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_569, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_571) = f_mk_239(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_571) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_570), rt_g_lit(" *)0)->", 7)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_568)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_574(struct f_greenc_1fr *up_, P122 t_573) {
  struct f_no_value_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_573 = t_573;
if (((G_NV((*(P122)rt_nil_check(F->t_573)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_573)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P122)rt_nil_check(F->t_573)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_576(struct f_greenc_1fr *up_, P122 t_575) {
  struct f_restricted_here_576fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_575 = t_575;
if ((!G_NV((*(P122)rt_nil_check(F->t_575)).is_restricted_))) {
F->result_ = 0;
goto ret_;
} else if (((*(P122)rt_nil_check(F->t_575)).view_of_ != NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (!f_inside_package_1091(F->up, (*(P122)rt_nil_check(F->t_575)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_579(struct f_greenc_1fr *up_, P122 t_577, P140 *r_578) {
  struct f_elem_ctype_579fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_577 = t_577;
F->r_578 = r_578;
if ((G_NV((*(P122)rt_nil_check(F->t_577)).kind_) == ((rt_int)11LL))) {
(*F->r_578) = f_mk_239(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_505(F->up, F->t_577, &(*F->r_578));
}
ret_:

  return;
}

static void f_first_index_582(struct f_greenc_1fr *up_, P122 t_580, P140 *r_581) {
  struct f_first_index_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_580 = t_580;
F->r_581 = r_581;
if ((((*(P122)rt_nil_check(F->t_580)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_580)).tcons_)).lo_ != NULL))) {
(*F->r_581) = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_580)).tcons_)).lo_;
} else if ((((*(P122)rt_nil_check(F->t_580)).idx_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_580)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_581) = f_mk_239(F->up, rt_g_lit("1", 1));
} else {
(*F->r_581) = f_mk_239(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_584(struct f_greenc_1fr *up_, P122 t_583) {
  struct f_is_string_584fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_583 = t_583;
if ((!(F->t_583 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P122)rt_nil_check(F->t_583)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_462(F->up, F->t_583, F->up->ty_string_160);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_587(struct f_greenc_1fr *up_, rt_gstr s_585, rt_gstr r_586) {
  struct f_subst_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_585 = cp_rt_gstr(s_585);
F->r_586 = cp_rt_gstr(r_586);
{ rt_int lo2061 = ({ rt_gstr at2058 = F->s_585; at2058.lo; }), hi2062 = rt_sub(({ rt_gstr at2059 = F->s_585; at2059.hi; }), ((rt_int)1LL));
for (rt_int it2063 = lo2061; it2063 <= hi2062; it2063++) {
F->i_2060 = it2063;
if (((G_NV(({ rt_gstr ix2064 = F->s_585; ix2064.p[rt_index(F->i_2060, ix2064.lo, ix2064.hi) - ix2064.lo]; })) == 64) && (G_NV(({ rt_gstr ix2065 = F->s_585; ix2065.p[rt_index(rt_add(F->i_2060, ((rt_int)1LL)), ix2065.lo, ix2065.hi) - ix2065.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl2067 = F->s_585; rt_int l_ = ({ rt_gstr at2066 = F->s_585; at2066.lo; }), h_ = rt_sub(F->i_2060, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2067.lo, sl2067.hi); rt_index(h_, sl2067.lo, sl2067.hi); } sl2067.p += l_ - sl2067.lo; sl2067.lo = l_; sl2067.hi = h_; sl2067; }), F->r_586), f_subst_587(F->up, ({ rt_gstr sl2071 = F->s_585; rt_int l_ = rt_add(F->i_2060, ((rt_int)2LL)), h_ = ({ rt_gstr at2070 = F->s_585; at2070.hi; }); if (l_ <= h_) { rt_index(l_, sl2071.lo, sl2071.hi); rt_index(h_, sl2071.lo, sl2071.hi); } sl2071.p += l_ - sl2071.lo; sl2071.lo = l_; sl2071.hi = h_; sl2071; }), F->r_586));
goto ret_;
}
}
}
L_end_2057: ;
F->result_ = F->s_585;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_589(struct f_greenc_1fr *up_, P140 s_588) {
  struct f_mentions_record_589fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_588 = s_588;
if ((F->s_588 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo2075 = ((rt_int)1LL), hi2076 = rt_sub(({ rt_gstr at2073 = (*(P140)rt_nil_check(F->s_588)); at2073.hi >= at2073.lo ? at2073.hi - at2073.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it2077 = lo2075; it2077 <= hi2076; it2077++) {
F->i_2074 = it2077;
if (((G_NV(({ rt_gstr ix2078 = (*(P140)rt_nil_check(F->s_588)); ix2078.p[rt_index(F->i_2074, ix2078.lo, ix2078.hi) - ix2078.lo]; })) == 64) && (G_NV(({ rt_gstr ix2079 = (*(P140)rt_nil_check(F->s_588)); ix2079.p[rt_index(rt_add(F->i_2074, ((rt_int)1LL)), ix2079.lo, ix2079.hi) - ix2079.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_2072: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_593(struct f_greenc_1fr *up_, P178 c_590, rt_gstr r_591, P178 *res_592) {
  struct f_subst_cons_593fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_590 = c_590;
F->r_591 = cp_rt_gstr(r_591);
F->res_592 = res_592;
if (((F->c_590 == NULL) || (!(f_mentions_record_589(F->up, (*(P178)rt_nil_check(F->c_590)).lo_) || f_mentions_record_589(F->up, (*(P178)rt_nil_check(F->c_590)).hi_))))) {
(*F->res_592) = F->c_590;
goto ret_;
}
(*F->res_592) = f_new_cons_486(F->up);
as_R179(&(*(P178)rt_nil_check((*F->res_592))), (*(P178)rt_nil_check(F->c_590)));
(*(P178)rt_nil_check((*F->res_592))).lo_ = f_mk_239(F->up, f_subst_587(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_590)).lo_)), F->r_591));
(*(P178)rt_nil_check((*F->res_592))).hi_ = f_mk_239(F->up, f_subst_587(F->up, (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_590)).hi_)), F->r_591));
ret_:

  return;
}

static void f_remove_sym_595(struct f_greenc_1fr *up_, P117 y_594) {
  struct f_remove_sym_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_594 = y_594;
F->h_2080 = INT64_MIN;
F->h_2080 = f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_594)).name_)));
F->p_2081 = NULL;
if ((({ A116 ix2082 = F->up->table_119; ix2082.p[rt_index(G_NV(F->h_2080), ix2082.lo, ix2082.hi) - ix2082.lo]; }) == F->y_594)) {
(*({ A116 *ix2083 = &(F->up->table_119); &ix2083->p[rt_index(G_NV(F->h_2080), ix2083->lo, ix2083->hi) - ix2083->lo]; })) = (*(P117)rt_nil_check(F->y_594)).chain_;
} else {
F->p_2081 = ({ A116 ix2084 = F->up->table_119; ix2084.p[rt_index(G_NV(F->h_2080), ix2084.lo, ix2084.hi) - ix2084.lo]; });
while (((F->p_2081 != NULL) && ((*(P117)rt_nil_check(F->p_2081)).chain_ != F->y_594))) {
F->p_2081 = (*(P117)rt_nil_check(F->p_2081)).chain_;
}
L_end_2085: ;
if ((F->p_2081 != NULL)) {
(*(P117)rt_nil_check(F->p_2081)).chain_ = (*(P117)rt_nil_check(F->y_594)).chain_;
}
}
if ((F->up->scope_stack_121 == F->y_594)) {
F->up->scope_stack_121 = (*(P117)rt_nil_check(F->y_594)).stack_;
} else {
F->p_2081 = F->up->scope_stack_121;
while (((F->p_2081 != NULL) && ((*(P117)rt_nil_check(F->p_2081)).stack_ != F->y_594))) {
F->p_2081 = (*(P117)rt_nil_check(F->p_2081)).stack_;
}
L_end_2086: ;
if ((F->p_2081 != NULL)) {
(*(P117)rt_nil_check(F->p_2081)).stack_ = (*(P117)rt_nil_check(F->y_594)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_600(struct f_greenc_1fr *up_, P174 list_596, P122 t_597, P2087 g_598, rt_int line_599) {
  struct f_record_components_600fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_596 = list_596;
F->t_597 = t_597;
F->g_598 = g_598;
F->line_599 = line_599;
F->comp_2089 = NULL;
F->comp_2089 = F->list_596;
F->f_2090 = NULL;
F->tail_2091 = NULL;
F->df_2092 = NULL;
F->prev_2093 = NULL;
F->pt_2094 = NULL;
F->vt_2095 = NULL;
F->pc_2096 = NULL;
F->y_2097 = NULL;
F->acc_2098 = NULL;
F->v_2099 = NULL;
F->x_2100 = NULL;
F->arm_2101 = NULL;
F->g2_2102 = NULL;
F->tail_2091 = (*(P122)rt_nil_check(F->t_597)).fields_;
while (((F->tail_2091 != NULL) && ((*(P1962)rt_nil_check(F->tail_2091)).next_ != NULL))) {
F->tail_2091 = (*(P1962)rt_nil_check(F->tail_2091)).next_;
}
L_end_2103: ;
while ((F->comp_2089 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->comp_2089)).kind_) == ((rt_int)23LL))) {
F->df_2092 = (*(P122)rt_nil_check(F->t_597)).fields_;
while (((F->df_2092 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->df_2092)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2089)).a_)).name_)))))) {
F->df_2092 = (*(P1962)rt_nil_check(F->df_2092)).next_;
}
L_end_2105: ;
if (((F->df_2092 == NULL) || (!G_NV((*(P1962)rt_nil_check(F->df_2092)).is_discr_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2089)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_466(F->up, (*(P1962)rt_nil_check(F->df_2092)).t_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_2101 = (*(P174)rt_nil_check(F->comp_2089)).b_;
while ((F->arm_2101 != NULL)) {
F->g2_2102 = ({ R2088 *cell2107 = rt_alloc(sizeof(R2088)); *cell2107 = cp_R2088(({ R2088 ag2108; ag2108.disc_ = (*(P1962)rt_nil_check(F->df_2092)).name_; ag2108.arm_ = F->arm_2101; ag2108.variant_ = F->comp_2089; ag2108.next_ = F->g_598; ag2108; })); (P2087)cell2107; });
f_record_components_600(F->up, (*(P174)rt_nil_check(F->arm_2101)).b_, F->t_597, F->g2_2102, F->line_599);
F->arm_2101 = (*(P174)rt_nil_check(F->arm_2101)).next_;
}
L_end_2106: ;
F->tail_2091 = (*(P122)rt_nil_check(F->t_597)).fields_;
while (((F->tail_2091 != NULL) && ((*(P1962)rt_nil_check(F->tail_2091)).next_ != NULL))) {
F->tail_2091 = (*(P1962)rt_nil_check(F->tail_2091)).next_;
}
L_end_2109: ;
} else {
if ((f_field_index_1017(F->up, F->t_597, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2089)).name_))) != ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->comp_2089)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_2090 = ({ R1963 *cell2110 = rt_alloc(sizeof(R1963)); *cell2110 = cp_R1963(({ R1963 ag2111; ag2111.name_ = (*(P174)rt_nil_check(F->comp_2089)).name_; ag2111.t_ = NULL; ag2111.c_ = NULL; ag2111.next_ = NULL; ag2111.dflt_ = (*(P174)rt_nil_check(F->comp_2089)).b_; ag2111.is_const_ = (G_NV((*(P174)rt_nil_check(F->comp_2089)).flag_) == ((rt_int)1LL)); ag2111.is_discr_ = 0; ag2111.dsym_ = NULL; ag2111.guard_ = F->g_598; ag2111.cond_ = NULL; ag2111.dyn_ = 0; ag2111; })); (P1962)cell2110; });
if ((((*(P174)rt_nil_check(F->comp_2089)).a_ == F->prev_2093) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->comp_2089)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P1962)rt_nil_check(F->f_2090)).t_ = F->pt_2094;
(*(P1962)rt_nil_check(F->f_2090)).c_ = F->pc_2096;
} else {
f_resolve_521(F->up, (*(P174)rt_nil_check(F->comp_2089)).a_, &(*(P1962)rt_nil_check(F->f_2090)).t_, &(*(P1962)rt_nil_check(F->f_2090)).c_);
}
F->prev_2093 = (*(P174)rt_nil_check(F->comp_2089)).a_;
F->pt_2094 = (*(P1962)rt_nil_check(F->f_2090)).t_;
F->pc_2096 = (*(P1962)rt_nil_check(F->f_2090)).c_;
if ((((*(P1962)rt_nil_check(F->f_2090)).c_ != NULL) && (f_mentions_record_589(F->up, (*(P178)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).c_)).lo_) || f_mentions_record_589(F->up, (*(P178)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).c_)).hi_)))) {
(*(P1962)rt_nil_check(F->f_2090)).dyn_ = 1;
if ((G_NV((*(P122)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P122)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).t_)).tcons_ == (*(P1962)rt_nil_check(F->f_2090)).c_)) {
(*(P122)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).t_)).tcons_ = NULL;
}
}
if ((F->g_598 != NULL)) {
f_guard_cond_604(F->up, F->g_598, (*(P1962)rt_nil_check(F->f_2090)).t_, &F->x_2100);
(*(P1962)rt_nil_check(F->f_2090)).cond_ = F->x_2100;
}
if (((*(P174)rt_nil_check(F->comp_2089)).b_ != NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->comp_2089)).b_, (*(P1962)rt_nil_check(F->f_2090)).t_, &F->vt_2095, &F->v_2099);
f_check_type_500(F->up, F->vt_2095, (*(P1962)rt_nil_check(F->f_2090)).t_, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_));
F->y_2097 = f_new_sym_483(F->up, ((rt_int)2LL), f_mk_239(F->up, rt_g_lit("dflt", 4)));
f_storage_652(F->up, rt_g_lit("dflt", 4), (*(P1962)rt_nil_check(F->f_2090)).t_, &F->acc_2098);
(*(P117)rt_nil_check(F->y_2097)).t_ = (*(P1962)rt_nil_check(F->f_2090)).t_;
(*(P117)rt_nil_check(F->y_2097)).c_ = (*(P1962)rt_nil_check(F->f_2090)).c_;
f_bind_655(F->up, F->y_2097, F->acc_2098);
if ((f_composite_627(F->up, (*(P1962)rt_nil_check(F->f_2090)).t_) && (!f_bounded_488(F->up, (*(P1962)rt_nil_check(F->f_2090)).c_)))) {
f_copy_code_637(F->up, (*(P1962)rt_nil_check(F->f_2090)).t_, (*(P140)rt_nil_check(F->v_2099)), &F->x_2100);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2098)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2100))), one_rt_gstr(59)));
} else {
f_init_storage_625(F->up, (*(P140)rt_nil_check(F->acc_2098)), (*(P1962)rt_nil_check(F->f_2090)).t_, (*(P1962)rt_nil_check(F->f_2090)).c_);
f_assign_code_633(F->up, (*(P140)rt_nil_check(F->acc_2098)), (*(P1962)rt_nil_check(F->f_2090)).t_, (*(P140)rt_nil_check(F->v_2099)), (*(P1962)rt_nil_check(F->f_2090)).c_, &F->x_2100);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2100)));
}
(*(P1962)rt_nil_check(F->f_2090)).dsym_ = F->y_2097;
} else if (G_NV((*(P1962)rt_nil_check(F->f_2090)).is_const_)) {
(*(P1962)rt_nil_check(F->f_2090)).is_discr_ = 1;
F->y_2097 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P1962)rt_nil_check(F->f_2090)).name_);
(*(P117)rt_nil_check(F->y_2097)).t_ = (*(P1962)rt_nil_check(F->f_2090)).t_;
(*(P117)rt_nil_check(F->y_2097)).c_ = (*(P1962)rt_nil_check(F->f_2090)).c_;
(*(P117)rt_nil_check(F->y_2097)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2097)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2090)).name_)))), one_rt_gstr(41)));
F->up->depth_120 = rt_add(G_NV(F->up->depth_120), ((rt_int)1LL));
f_define_478(F->up, F->y_2097, G_NV((*(P174)rt_nil_check(F->comp_2089)).line_));
F->up->depth_120 = rt_sub(G_NV(F->up->depth_120), ((rt_int)1LL));
(*(P117)rt_nil_check(F->y_2097)).mnext_ = F->up->disc_syms_182;
F->up->disc_syms_182 = F->y_2097;
}
if ((F->tail_2091 == NULL)) {
(*(P122)rt_nil_check(F->t_597)).fields_ = F->f_2090;
} else {
(*(P1962)rt_nil_check(F->tail_2091)).next_ = F->f_2090;
}
F->tail_2091 = F->f_2090;
}
F->comp_2089 = (*(P174)rt_nil_check(F->comp_2089)).next_;
}
L_end_2104: ;
ret_:

  return;
}

static void f_guard_cond_604(struct f_greenc_1fr *up_, P2087 g_601, P122 t_602, P140 *r_603) {
  struct f_guard_cond_604fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_601 = g_601;
F->t_602 = t_602;
F->r_603 = r_603;
F->a_2112 = NULL;
F->l_2113 = NULL;
F->df_2114 = NULL;
F->x_2115 = NULL;
F->d_2116 = NULL;
F->dt_2117 = NULL;
F->vt_2118 = NULL;
F->lo_2119 = NULL;
F->hi_2120 = NULL;
(*F->r_603) = f_mk_239(F->up, rt_g_lit("1", 1));
if ((F->g_601 == NULL)) {
goto ret_;
}
F->d_2116 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P2087)rt_nil_check(F->g_601)).disc_)))), one_rt_gstr(41)));
F->df_2114 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P2087)rt_nil_check(F->g_601)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_2115 = f_mk_239(F->up, rt_g_lit("0", 1));
F->a_2112 = (*(P174)rt_nil_check((*(P2087)rt_nil_check(F->g_601)).variant_)).b_;
while ((F->a_2112 != NULL)) {
if ((F->a_2112 != (*(P2087)rt_nil_check(F->g_601)).arm_)) {
f_arm_test_609(F->up, F->a_2112, (*(P2087)rt_nil_check(F->g_601)).disc_, (*(P140)rt_nil_check(F->d_2116)), &F->x_2115);
}
F->a_2112 = (*(P174)rt_nil_check(F->a_2112)).next_;
}
L_end_2121: ;
F->x_2115 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P140)rt_nil_check(F->x_2115))), one_rt_gstr(41)));
} else {
F->x_2115 = f_mk_239(F->up, rt_g_lit("0", 1));
f_arm_test_609(F->up, (*(P2087)rt_nil_check(F->g_601)).arm_, (*(P2087)rt_nil_check(F->g_601)).disc_, (*(P140)rt_nil_check(F->d_2116)), &F->x_2115);
}
f_guard_cond_604(F->up, (*(P2087)rt_nil_check(F->g_601)).next_, F->t_602, &(*F->r_603));
(*F->r_603) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*F->r_603)))), rt_g_lit(" && (", 5)), (*(P140)rt_nil_check(F->x_2115))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_609(struct f_greenc_1fr *up_, P174 arm_605, P140 dname_606, rt_gstr d_607, P140 *x_608) {
  struct f_arm_test_609fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_605 = arm_605;
F->dname_606 = dname_606;
F->d_607 = cp_rt_gstr(d_607);
F->x_608 = x_608;
F->l_2122 = NULL;
F->l_2122 = (*(P174)rt_nil_check(F->arm_605)).a_;
F->y_2123 = NULL;
F->y_2123 = f_lookup_435(F->up, (*(P140)rt_nil_check(F->dname_606)));
F->dt_2124 = NULL;
F->vt_2125 = NULL;
F->lo_2126 = NULL;
F->hi_2127 = NULL;
F->dt_2124 = (*(P117)rt_nil_check(F->y_2123)).t_;
while ((F->l_2122 != NULL)) {
if (((*(P174)rt_nil_check(F->l_2122)).b_ == NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->l_2122)).a_, F->dt_2124, &F->vt_2125, &F->lo_2126);
f_check_type_500(F->up, F->vt_2125, F->dt_2124, G_NV((*(P174)rt_nil_check(F->l_2122)).line_));
(*F->x_608) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_608))), rt_g_lit(" || ", 4)), F->d_607), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->lo_2126))));
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->l_2122)).a_, F->dt_2124, &F->vt_2125, &F->lo_2126);
f_check_type_500(F->up, F->vt_2125, F->dt_2124, G_NV((*(P174)rt_nil_check(F->l_2122)).line_));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->l_2122)).b_, F->dt_2124, &F->vt_2125, &F->hi_2127);
f_check_type_500(F->up, F->vt_2125, F->dt_2124, G_NV((*(P174)rt_nil_check(F->l_2122)).line_));
(*F->x_608) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->x_608))), rt_g_lit(" || (", 5)), F->d_607), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2126))), rt_g_lit(" && ", 4)), F->d_607), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2127))), one_rt_gstr(41)));
}
F->l_2122 = (*(P174)rt_nil_check(F->l_2122)).next_;
}
L_end_2128: ;
ret_:

  return;
}

static void f_derived_type_614(struct f_greenc_1fr *up_, P174 d_610, P140 name_611, P122 *t_612, P178 *c_613) {
  struct f_derived_type_614fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_610 = d_610;
F->name_611 = name_611;
F->t_612 = t_612;
F->c_613 = c_613;
F->pt_2129 = NULL;
F->ct_2130 = NULL;
F->ph_2131 = NULL;
F->ph_2131 = F->up->completing_173;
F->up->completing_173 = NULL;
f_resolve_521(F->up, (*(P174)rt_nil_check(F->d_610)).a_, &F->pt_2129, &(*F->c_613));
if (((G_NV((*(P122)rt_nil_check(F->pt_2129)).kind_) == ((rt_int)9LL)) && G_NV((*(P122)rt_nil_check(F->pt_2129)).priv_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_610)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_627(F->up, F->pt_2129) || (G_NV((*(P122)rt_nil_check(F->pt_2129)).kind_) == ((rt_int)8LL)))) {
f_ctype_505(F->up, F->pt_2129, &F->ct_2130);
}
if ((F->ph_2131 == NULL)) {
(*F->t_612) = f_new_typ_485(F->up, G_NV((*(P122)rt_nil_check(F->pt_2129)).kind_));
} else {
(*F->t_612) = F->ph_2131;
}
as_R123(&(*(P122)rt_nil_check((*F->t_612))), (*(P122)rt_nil_check(F->pt_2129)));
(*(P122)rt_nil_check((*F->t_612))).name_ = F->name_611;
(*(P122)rt_nil_check((*F->t_612))).parent_ = F->pt_2129;
(*(P122)rt_nil_check((*F->t_612))).next_ = NULL;
if ((G_NV((*(P122)rt_nil_check((*F->t_612))).kind_) == ((rt_int)4LL))) {
f_derive_literals_550(F->up, (*F->t_612), G_NV((*(P174)rt_nil_check(F->d_610)).line_));
}
f_inherit_547(F->up, F->pt_2129, (*F->t_612), G_NV((*(P174)rt_nil_check(F->d_610)).line_));
ret_:

  return;
}

static void f_real_type_619(struct f_greenc_1fr *up_, P174 d_615, P140 name_616, P122 *t_617, P178 *c_618) {
  struct f_real_type_619fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_615 = d_615;
F->name_616 = name_616;
F->t_617 = t_617;
F->c_618 = c_618;
F->dt_2132 = NULL;
F->dv_2133 = NULL;
F->n_2134 = INT64_MIN;
F->ok_2135 = INT_MIN;
(*F->c_618) = f_new_cons_486(F->up);
if ((G_NV((*(P174)rt_nil_check(F->d_615)).flag_) == ((rt_int)1LL))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->d_615)).a_, &F->n_2134, &F->ok_2135);
 (void)rt_range(F->ok_2135, 0, 1);
if ((!G_NV(F->ok_2135))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_615)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2134) < ((rt_int)1LL)) || (G_NV(F->n_2134) > ((rt_int)15LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_615)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2134)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_543(F->up, ((rt_int)3LL), F->name_616, &(*F->t_617));
(*(P122)rt_nil_check((*F->t_617))).ndigits_ = G_NV(F->n_2134);
if ((G_NV(F->n_2134) <= ((rt_int)6LL))) {
(*(P122)rt_nil_check((*F->t_617))).parent_ = F->up->ty_sfloat_169;
} else {
(*(P122)rt_nil_check((*F->t_617))).parent_ = F->up->ty_float_158;
}
} else {
if (((*(P174)rt_nil_check(F->d_615)).b_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_615)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->d_615)).a_, F->up->ty_float_158, &F->dt_2132, &F->dv_2133);
if ((G_NV((*(P122)rt_nil_check(F->dt_2132)).kind_) != ((rt_int)3LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_615)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_543(F->up, ((rt_int)16LL), F->name_616, &(*F->t_617));
(*(P122)rt_nil_check((*F->t_617))).fdelta_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->dv_2133))), one_rt_gstr(41)));
(*(P122)rt_nil_check((*F->t_617))).fsmall_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P140)rt_nil_check(F->dv_2133))), one_rt_gstr(41)));
}
if (((*(P174)rt_nil_check(F->d_615)).b_ != NULL)) {
f_range_of_539(F->up, (*(P174)rt_nil_check(F->d_615)).b_, (*F->t_617), (*F->c_618));
}
if (((*(P122)rt_nil_check((*F->t_617))).parent_ != NULL)) {
f_inherit_547(F->up, (*(P122)rt_nil_check((*F->t_617))).parent_, (*F->t_617), G_NV((*(P174)rt_nil_check(F->d_615)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_621(struct f_greenc_1fr *up_, P122 t_620) {
  struct f_finish_ptr_621fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_620 = t_620;
F->c_2136 = NULL;
if ((((*(P122)rt_nil_check(F->t_620)).target_ == NULL) && ((*(P122)rt_nil_check(F->t_620)).decl_ != NULL))) {
f_resolve_521(F->up, (*(P122)rt_nil_check(F->t_620)).decl_, &(*(P122)rt_nil_check(F->t_620)).target_, &F->c_2136);
if ((((*(P122)rt_nil_check(F->t_620)).target_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_620)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check((*(P122)rt_nil_check(F->t_620)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_625(struct f_greenc_1fr *up_, rt_gstr lval_622, P122 t_623, P178 c_624) {
  struct f_init_storage_625fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_622 = cp_rt_gstr(lval_622);
F->t_623 = t_623;
F->c_624 = c_624;
F->ec_2137 = NULL;
F->fc_2138 = NULL;
F->d_2139 = NULL;
F->ct_2140 = NULL;
F->i_2141 = NULL;
F->v_2142 = NULL;
F->x_2143 = NULL;
F->vt_2144 = NULL;
F->f_2145 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_623)).kind_) == ((rt_int)8LL))) {
f_emit_266(F->up, cat_rt_gstr(F->lval_622, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_464(F->up, F->t_623) || f_is_discrete_466(F->up, F->t_623))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(" = ", 3)), f_no_value_574(F->up, F->t_623)), one_rt_gstr(59)));
} else if ((G_NV((*(P122)rt_nil_check(F->t_623)).kind_) == ((rt_int)6LL))) {
if (((F->c_624 == NULL) || ((*(P178)rt_nil_check(F->c_624)).lo_ == NULL))) {
f_fail_260(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_623)).elem_, &F->ct_2140);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_624)).lo_))), rt_g_lit("; ", 2)), F->lval_622), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_624)).hi_))), one_rt_gstr(59)));
F->ec_2137 = (*(P122)rt_nil_check(F->t_623)).elemcons_;
if (((G_NV((*(P122)rt_nil_check(F->t_623)).dims_) > ((rt_int)1LL)) && f_bounded_488(F->up, (*(P178)rt_nil_check(F->c_624)).inner_))) {
F->ec_2137 = (*(P178)rt_nil_check(F->c_624)).inner_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_623)).dims_) > ((rt_int)1LL)) && f_bounded_488(F->up, F->ec_2137))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2137)).lo_))), rt_g_lit("; ", 2)), F->lval_622), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->ec_2137)).hi_))), one_rt_gstr(59)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(".lo2 = 1; ", 10)), F->lval_622), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->ct_2140))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_622), rt_g_lit("));", 3)));
if ((f_is_numeric_464(F->up, (*(P122)rt_nil_check(F->t_623)).elem_) || f_is_discrete_466(F->up, (*(P122)rt_nil_check(F->t_623)).elem_))) {
f_new_name_242(F->up, rt_g_lit("i", 1), &F->i_2141);
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_623)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_622), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_622), rt_g_lit("));", 3)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit(" < G_CNT(", 9)), F->lval_622), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit("++) ", 4)), F->lval_622), rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit("] = ", 4)), f_no_value_574(F->up, (*(P122)rt_nil_check(F->t_623)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_623)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_623)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_242(F->up, rt_g_lit("i", 1), &F->i_2141);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit(" = 0; ", 6)), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit(" < G_CNT(", 9)), F->lval_622), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->i_2141))), rt_g_lit("++) {", 5)));
f_init_storage_625(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, rt_g_lit(".p[", 3)), (*(P140)rt_nil_check(F->i_2141))), one_rt_gstr(93)), (*(P122)rt_nil_check(F->t_623)).elem_, F->ec_2137);
f_emit_266(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P122)rt_nil_check(F->t_623)).kind_) == ((rt_int)7LL))) {
if ((F->c_624 != NULL)) {
F->d_2139 = (*(P178)rt_nil_check(F->c_624)).dv_;
while ((F->d_2139 != NULL)) {
F->f_2145 = (*(P122)rt_nil_check(F->t_623)).fields_;
while ((!eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)), (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2139)).name_))))) {
F->f_2145 = (*(P1962)rt_nil_check(F->f_2145)).next_;
}
L_end_2147: ;
f_assign_code_633(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_622, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), (*(P1962)rt_nil_check(F->f_2145)).t_, (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2139)).v_)), (*(P1962)rt_nil_check(F->f_2145)).c_, &F->x_2143);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2143)));
F->d_2139 = (*(P1966)rt_nil_check(F->d_2139)).next_;
}
L_end_2146: ;
}
F->f_2145 = (*(P122)rt_nil_check(F->t_623)).fields_;
while ((F->f_2145 != NULL)) {
f_subst_cons_593(F->up, (*(P1962)rt_nil_check(F->f_2145)).c_, F->lval_622, &F->fc_2138);
if ((G_NV((*(P1962)rt_nil_check(F->f_2145)).dyn_) && (!f_discriminated_494(F->up, F->c_624)))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_622, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_622), one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_622), one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_622), one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_622), one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P1962)rt_nil_check(F->f_2145)).is_discr_))) {
f_init_storage_625(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_622, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), (*(P1962)rt_nil_check(F->f_2145)).t_, F->fc_2138);
}
if (((*(P1962)rt_nil_check(F->f_2145)).dsym_ != NULL)) {
f_access_of_779(F->up, (*(P1962)rt_nil_check(F->f_2145)).dsym_, &F->v_2142);
f_assign_code_633(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_622, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2145)).name_)))), (*(P1962)rt_nil_check(F->f_2145)).t_, (*(P140)rt_nil_check(F->v_2142)), F->fc_2138, &F->x_2143);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2143)));
}
F->f_2145 = (*(P1962)rt_nil_check(F->f_2145)).next_;
}
L_end_2148: ;
}
ret_:

  return;
}

static int f_composite_627(struct f_greenc_1fr *up_, P122 t_626) {
  struct f_composite_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_626 = t_626;
F->result_ = ((G_NV((*(P122)rt_nil_check(F->t_626)).kind_) == ((rt_int)6LL)) || (G_NV((*(P122)rt_nil_check(F->t_626)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_633(struct f_greenc_1fr *up_, rt_gstr lval_628, P122 t_629, rt_gstr v_630, P178 c_631, P140 *r_632) {
  struct f_assign_code_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_628 = cp_rt_gstr(lval_628);
F->t_629 = t_629;
F->v_630 = cp_rt_gstr(v_630);
F->c_631 = c_631;
F->r_632 = r_632;
F->ct_2149 = NULL;
F->x_2150 = NULL;
F->d_2151 = NULL;
if (((G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)7LL)) && f_discriminated_494(F->up, F->c_631))) {
f_ctype_505(F->up, F->t_629, &F->ct_2149);
F->x_2150 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2149))), rt_g_lit(" dv_ = ", 7)), F->v_630), one_rt_gstr(59)));
F->d_2151 = (*(P178)rt_nil_check(F->c_631)).dv_;
while ((F->d_2151 != NULL)) {
F->x_2150 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2150)), rt_g_lit(" if (dv_.", 9)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2151)).name_)))), rt_g_lit(" != (", 5)), (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2151)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2151 = (*(P1966)rt_nil_check(F->d_2151)).next_;
}
L_end_2152: ;
(*F->r_632) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2150)), rt_g_lit(" as_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_629)).cname_))), rt_g_lit("(&", 2)), F->lval_628), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_627(F->up, F->t_629)) {
f_ctype_505(F->up, F->t_629, &F->ct_2149);
(*F->r_632) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_629)).cname_))), rt_g_lit("(&", 2)), F->lval_628), rt_g_lit(", ", 2)), F->v_630), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)11LL))) && f_bounded_488(F->up, F->c_631))) {
(*F->r_632) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_628, rt_g_lit(" = rt_range(", 12)), F->v_630), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_631)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_631)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_629)).kind_) == ((rt_int)16LL))) && f_bounded_488(F->up, F->c_631))) {
(*F->r_632) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_628, rt_g_lit(" = rt_frange(", 13)), F->v_630), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_631)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_631)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_632) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_628, rt_g_lit(" = ", 3)), F->v_630), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_637(struct f_greenc_1fr *up_, P122 t_634, rt_gstr v_635, P140 *r_636) {
  struct f_copy_code_637fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_634 = t_634;
F->v_635 = cp_rt_gstr(v_635);
F->r_636 = r_636;
F->ct_2153 = NULL;
if (f_composite_627(F->up, F->t_634)) {
f_ctype_505(F->up, F->t_634, &F->ct_2153);
(*F->r_636) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_634)).cname_))), one_rt_gstr(40)), F->v_635), one_rt_gstr(41)));
} else {
(*F->r_636) = f_mk_239(F->up, F->v_635);
}
ret_:

  return;
}

static void f_eq_code_642(struct f_greenc_1fr *up_, P122 t_638, rt_gstr a_639, rt_gstr b_640, P140 *r_641) {
  struct f_eq_code_642fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_638 = t_638;
F->a_639 = cp_rt_gstr(a_639);
F->b_640 = cp_rt_gstr(b_640);
F->r_641 = r_641;
F->ct_2154 = NULL;
if (f_composite_627(F->up, F->t_638)) {
f_ctype_505(F->up, F->t_638, &F->ct_2154);
(*F->r_641) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_638)).cname_))), one_rt_gstr(40)), F->a_639), rt_g_lit(", ", 2)), F->b_640), one_rt_gstr(41)));
} else {
(*F->r_641) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_639), rt_g_lit(" == ", 4)), F->b_640), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_645(struct f_greenc_1fr *up_, P151 l_643, rt_gstr s_644) {
  struct f_seen_name_645fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_643 = l_643;
F->s_644 = cp_rt_gstr(s_644);
F->p_2155 = NULL;
F->p_2155 = F->l_643;
while ((F->p_2155 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->p_2155)).s_)), F->s_644)) {
F->result_ = 1;
goto ret_;
}
F->p_2155 = (*(P151)rt_nil_check(F->p_2155)).next_;
}
L_end_2156: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_646(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_646fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2157 = NULL;
F->t_2157 = F->up->all_types_124;
F->et_2158 = NULL;
F->done_2159 = NULL;
F->l_2160 = NULL;
while ((F->t_2157 != NULL)) {
if ((f_composite_627(F->up, F->t_2157) && (!f_seen_name_645(F->up, F->done_2159, (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_)))))) {
F->l_2160 = ({ R152 *cell2162 = rt_alloc(sizeof(R152)); *cell2162 = cp_R152(({ R152 ag2163; ag2163.s_ = (*(P122)rt_nil_check(F->t_2157)).cname_; ag2163.next_ = F->done_2159; ag2163; })); (P151)cell2162; });
F->done_2159 = F->l_2160;
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P122)rt_nil_check(F->t_2157)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->t_2157)).dims_) == ((rt_int)1LL)))) {
f_ctype_505(F->up, (*(P122)rt_nil_check(F->t_2157)).elem_, &F->et_2158);
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2158))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_264(F->up, F->up->out_helpers_130, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_2157)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_648(F->up, F->t_2157);
}
F->t_2157 = (*(P122)rt_nil_check(F->t_2157)).next_;
}
L_end_2161: ;
ret_:

  return;
}

static void f_helper_bodies_648(struct f_greenc_1fr *up_, P122 t_647) {
  struct f_helper_bodies_648fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_647 = t_647;
F->c_2164 = NULL;
F->c_2164 = (*(P122)rt_nil_check(F->t_647)).cname_;
F->b_2165 = NULL;
F->b_2165 = F->up->out_funcs_133;
F->ct_2166 = NULL;
F->et_2167 = NULL;
F->x_2168 = NULL;
F->y_2169 = NULL;
F->conds_2170 = NULL;
F->f_2171 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_647)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, &F->ct_2166);
f_assign_code_633(F->up, rt_g_lit("d->p[i]", 7), (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2168);
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" s) {", 5)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit(");", 2)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P140)rt_nil_check(F->x_2168))), rt_g_lit(" }", 2)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2168);
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" s) {", 5)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P140)rt_nil_check(F->ct_2166))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P140)rt_nil_check(F->x_2168))), one_rt_gstr(59)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  return d;", 11));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
f_eq_code_642(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2168);
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) {", 5)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P140)rt_nil_check(F->x_2168))), rt_g_lit(")) return 0;", 12)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  return 1;", 11));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
if (((G_NV((*(P122)rt_nil_check(F->t_647)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->t_647)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" and_", 5)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" or_", 4)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" xor_", 5)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) { ", 6)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" not_", 5)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a) { ", 6)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r = cp_", 8)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P122)rt_nil_check(F->t_647)).dims_) == ((rt_int)1LL))) {
f_ctype_505(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, &F->et_2167);
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2168);
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2169);
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" cat_", 5)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) {", 5)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2166))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P140)rt_nil_check(F->x_2168))), one_rt_gstr(59)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P140)rt_nil_check(F->y_2169))), one_rt_gstr(59)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  return r;", 11));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->t_647)).elem_, rt_g_lit("e", 1), &F->x_2168);
f_first_index_582(F->up, F->t_647, &F->y_2169);
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" one_", 5)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->et_2167))), rt_g_lit(" e) {", 5)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P140)rt_nil_check(F->y_2169))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P140)rt_nil_check(F->ct_2166))), rt_g_lit(")); r.p[0] = ", 13)), (*(P140)rt_nil_check(F->x_2168))), one_rt_gstr(59)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("  return r;", 11));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
}
} else {
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" *d, ", 5)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" s) {", 5)));
F->f_2171 = (*(P122)rt_nil_check(F->t_647)).fields_;
while ((F->f_2171 != NULL)) {
if ((G_NV((*(P1962)rt_nil_check(F->f_2171)).dyn_) || ((*(P1962)rt_nil_check(F->f_2171)).cond_ != NULL))) {
f_copy_code_637(F->up, (*(P1962)rt_nil_check(F->f_2171)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), &F->x_2168);
F->x_2168 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2168))), one_rt_gstr(59)));
if (((*(P1962)rt_nil_check(F->f_2171)).cond_ != NULL)) {
F->x_2168 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_587(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2168))));
}
} else {
f_assign_code_633(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), (*(P1962)rt_nil_check(F->f_2171)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), NULL, &F->x_2168);
}
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2168))));
F->f_2171 = (*(P1962)rt_nil_check(F->f_2171)).next_;
}
L_end_2172: ;
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" cp_", 4)), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" s) {", 5)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" d = s;", 7)));
F->conds_2170 = f_mk_239(F->up, rt_g_lit("1", 1));
F->f_2171 = (*(P122)rt_nil_check(F->t_647)).fields_;
while ((F->f_2171 != NULL)) {
f_copy_code_637(F->up, (*(P1962)rt_nil_check(F->f_2171)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), &F->x_2168);
F->x_2168 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2168))), one_rt_gstr(59)));
f_eq_code_642(F->up, (*(P1962)rt_nil_check(F->f_2171)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).name_)))), &F->y_2169);
if (((*(P1962)rt_nil_check(F->f_2171)).cond_ != NULL)) {
F->x_2168 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_587(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P140)rt_nil_check(F->x_2168))));
F->y_2169 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_587(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2171)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P140)rt_nil_check(F->y_2169))), one_rt_gstr(41)));
}
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->x_2168))));
F->conds_2170 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2170)), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->y_2169))));
F->f_2171 = (*(P1962)rt_nil_check(F->f_2171)).next_;
}
L_end_2173: ;
f_put_to_264(F->up, F->b_2165, rt_g_lit("  return d;", 11));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P140)rt_nil_check(F->c_2164))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" a, ", 4)), (*(P140)rt_nil_check(F->c_2164))), rt_g_lit(" b) {", 5)));
f_put_to_264(F->up, F->b_2165, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P140)rt_nil_check(F->conds_2170))), one_rt_gstr(59)));
f_put_to_264(F->up, F->b_2165, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_652(struct f_greenc_1fr *up_, rt_gstr name_649, P122 t_650, P140 *access_code_651) {
  struct f_storage_652fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_649 = cp_rt_gstr(name_649);
F->t_650 = t_650;
F->access_code_651 = access_code_651;
F->ct_2174 = NULL;
F->g_2175 = NULL;
f_ctype_505(F->up, F->t_650, &F->ct_2174);
if ((!G_NV(F->up->in_func_138))) {
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_250(F->up, F->name_649)), one_rt_gstr(95)), &F->g_2175);
f_put_to_264(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2174))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2175))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2175;
(*F->access_code_651) = F->g_2175;
} else {
f_new_name_242(F->up, cat_rt_gstr(f_lower_s_250(F->up, F->name_649), one_rt_gstr(95)), &F->g_2175);
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2174))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->g_2175))), one_rt_gstr(59)));
F->up->st_field_141 = F->g_2175;
(*F->access_code_651) = f_mk_239(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->g_2175))));
}
ret_:

  return;
}

static void f_bind_655(struct f_greenc_1fr *up_, P117 y_653, P140 access_code_654) {
  struct f_bind_655fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_653 = y_653;
F->access_code_654 = access_code_654;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_653)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_653)).access_path_ = F->up->st_field_141;
} else {
(*(P117)rt_nil_check(F->y_653)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_653)).access_path_ = F->access_code_654;
}
ret_:

  return;
}

static void f_declare_subprograms_657(struct f_greenc_1fr *up_, P174 from_656) {
  struct f_declare_subprograms_657fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_656 = from_656;
F->e_2176 = NULL;
F->e_2176 = F->from_656;
while ((F->e_2176 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2176)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_2176)).ival_) == ((rt_int)0LL)) || (G_NV((*(P174)rt_nil_check(F->e_2176)).ival_) == ((rt_int)3LL))))) {
if ((!f_generic_before_660(F->up, F->from_656, F->e_2176))) {
f_declare_one_662(F->up, F->e_2176);
}
}
F->e_2176 = (*(P174)rt_nil_check(F->e_2176)).next_;
}
L_end_2177: ;
ret_:

  return;
}

static int f_generic_before_660(struct f_greenc_1fr *up_, P174 from_658, P174 e_659) {
  struct f_generic_before_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_658 = from_658;
F->e_659 = e_659;
F->p_2178 = NULL;
F->p_2178 = F->from_658;
while (((F->p_2178 != NULL) && (F->p_2178 != F->e_659))) {
if (((G_NV((*(P174)rt_nil_check(F->p_2178)).kind_) == ((rt_int)54LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2178)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_659)).name_))))) {
F->result_ = 1;
goto ret_;
}
F->p_2178 = (*(P174)rt_nil_check(F->p_2178)).next_;
}
L_end_2179: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_declare_one_662(struct f_greenc_1fr *up_, P174 e_661) {
  struct f_declare_one_662fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_661 = e_661;
F->y_2180 = NULL;
F->z_2181 = NULL;
if (f_is_generic_name_1297(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_661)).name_)))) {
goto ret_;
}
f_build_subprogram_667(F->up, F->e_661, &F->y_2180);
F->z_2181 = ({ A116 ix2182 = F->up->table_119; ix2182.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2180)).name_))), ix2182.lo, ix2182.hi) - ix2182.lo]; });
while ((F->z_2181 != NULL)) {
if (((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2181)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2180)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2181)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2181)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2181)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2181)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->z_2181)).depth_) == G_NV(F->up->depth_120))) && f_same_signature_472(F->up, (*(P117)rt_nil_check(F->z_2181)).params_, (*(P117)rt_nil_check(F->y_2180)).params_)) && f_same_455(F->up, (*(P117)rt_nil_check(F->z_2181)).result_, (*(P117)rt_nil_check(F->y_2180)).result_))) {
(*(P117)rt_nil_check(F->z_2181)).decl_ = F->e_661;
goto ret_;
}
F->z_2181 = (*(P117)rt_nil_check(F->z_2181)).chain_;
}
L_end_2183: ;
if ((F->up->cur_task_211 != NULL)) {
F->z_2181 = (*(P117)rt_nil_check(F->up->cur_task_211)).members_;
while ((F->z_2181 != NULL)) {
if ((((((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2181)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2180)).name_))) && ((G_NV((*(P117)rt_nil_check(F->z_2181)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_2181)).kind_) == ((rt_int)4LL)))) && ((*(P117)rt_nil_check(F->z_2181)).decl_ != NULL)) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->z_2181)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_472(F->up, (*(P117)rt_nil_check(F->z_2181)).params_, (*(P117)rt_nil_check(F->y_2180)).params_)) && f_same_455(F->up, (*(P117)rt_nil_check(F->z_2181)).result_, (*(P117)rt_nil_check(F->y_2180)).result_))) {
(*(P117)rt_nil_check(F->y_2180)).cname_ = (*(P117)rt_nil_check(F->z_2181)).cname_;
(*(P117)rt_nil_check(F->z_2181)).decl_ = F->e_661;
goto L_end_2184;
}
F->z_2181 = (*(P117)rt_nil_check(F->z_2181)).mnext_;
}
L_end_2184: ;
}
f_define_478(F->up, F->y_2180, G_NV((*(P174)rt_nil_check(F->e_661)).line_));
f_elaborate_defaults_664(F->up, F->y_2180);
ret_:

  return;
}

static void f_elaborate_defaults_664(struct f_greenc_1fr *up_, P117 y_663) {
  struct f_elaborate_defaults_664fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_663 = y_663;
F->pm_2185 = NULL;
F->pm_2185 = (*(P117)rt_nil_check(F->y_663)).params_;
F->vt_2186 = NULL;
F->v_2187 = NULL;
F->acc_2188 = NULL;
F->x_2189 = NULL;
F->z_2190 = NULL;
while ((F->pm_2185 != NULL)) {
if (((*(P1944)rt_nil_check(F->pm_2185)).dflt_ != NULL)) {
if ((G_NV((*(P1944)rt_nil_check(F->pm_2185)).mode_) != ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check((*(P1944)rt_nil_check(F->pm_2185)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_842(F->up, (*(P1944)rt_nil_check(F->pm_2185)).dflt_, (*(P1944)rt_nil_check(F->pm_2185)).t_, &F->vt_2186, &F->v_2187);
f_check_type_500(F->up, F->vt_2186, (*(P1944)rt_nil_check(F->pm_2185)).t_, G_NV((*(P174)rt_nil_check((*(P1944)rt_nil_check(F->pm_2185)).dflt_)).line_));
F->z_2190 = f_new_sym_483(F->up, ((rt_int)2LL), f_mk_239(F->up, rt_g_lit("dflt", 4)));
f_storage_652(F->up, rt_g_lit("dflt", 4), (*(P1944)rt_nil_check(F->pm_2185)).t_, &F->acc_2188);
(*(P117)rt_nil_check(F->z_2190)).t_ = (*(P1944)rt_nil_check(F->pm_2185)).t_;
(*(P117)rt_nil_check(F->z_2190)).c_ = (*(P1944)rt_nil_check(F->pm_2185)).c_;
f_bind_655(F->up, F->z_2190, F->acc_2188);
f_copy_code_637(F->up, (*(P1944)rt_nil_check(F->pm_2185)).t_, (*(P140)rt_nil_check(F->v_2187)), &F->x_2189);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2188)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2189))), one_rt_gstr(59)));
(*(P1944)rt_nil_check(F->pm_2185)).dsym_ = F->z_2190;
}
F->pm_2185 = (*(P1944)rt_nil_check(F->pm_2185)).next_;
}
L_end_2191: ;
ret_:

  return;
}

static void f_build_subprogram_667(struct f_greenc_1fr *up_, P174 d_665, P117 *y_666) {
  struct f_build_subprogram_667fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_665 = d_665;
F->y_666 = y_666;
F->p_2192 = NULL;
F->p_2192 = (*(P174)rt_nil_check(F->d_665)).a_;
F->pm_2193 = NULL;
F->tail_2194 = NULL;
F->rc_2195 = NULL;
F->k_2196 = INT64_MIN;
F->k_2196 = ((rt_int)4LL);
if ((G_NV((*(P174)rt_nil_check(F->d_665)).kind_) == ((rt_int)45LL))) {
F->k_2196 = ((rt_int)3LL);
}
(*F->y_666) = f_new_sym_483(F->up, G_NV(F->k_2196), (*(P174)rt_nil_check(F->d_665)).name_);
while ((F->p_2192 != NULL)) {
F->pm_2193 = ({ R1945 *cell2198 = rt_alloc(sizeof(R1945)); *cell2198 = cp_R1945(({ R1945 ag2199; ag2199.name_ = (*(P174)rt_nil_check(F->p_2192)).name_; ag2199.mode_ = G_NV((*(P174)rt_nil_check(F->p_2192)).ival_); ag2199.t_ = NULL; ag2199.c_ = NULL; ag2199.cfield_ = NULL; ag2199.dflt_ = (*(P174)rt_nil_check(F->p_2192)).b_; ag2199.next_ = NULL; ag2199.dsym_ = NULL; ag2199; })); (P1944)cell2198; });
f_resolve_521(F->up, (*(P174)rt_nil_check(F->p_2192)).a_, &(*(P1944)rt_nil_check(F->pm_2193)).t_, &(*(P1944)rt_nil_check(F->pm_2193)).c_);
f_new_name_242(F->up, cat_rt_gstr(f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2192)).name_))), one_rt_gstr(95)), &(*(P1944)rt_nil_check(F->pm_2193)).cfield_);
if (((G_NV((*(P174)rt_nil_check(F->d_665)).kind_) == ((rt_int)45LL)) && (G_NV((*(P1944)rt_nil_check(F->pm_2193)).mode_) != ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->p_2192)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P174)rt_nil_check(F->d_665)).flag_) == ((rt_int)1LL)) && (G_NV((*(P1944)rt_nil_check(F->pm_2193)).mode_) != ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->p_2192)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2194 == NULL)) {
(*(P117)rt_nil_check((*F->y_666))).params_ = F->pm_2193;
} else {
(*(P1944)rt_nil_check(F->tail_2194)).next_ = F->pm_2193;
}
F->tail_2194 = F->pm_2193;
F->p_2192 = (*(P174)rt_nil_check(F->p_2192)).next_;
}
L_end_2197: ;
(*(P117)rt_nil_check((*F->y_666))).result_ = F->up->ty_void_161;
if (((*(P174)rt_nil_check(F->d_665)).b_ != NULL)) {
f_resolve_521(F->up, (*(P174)rt_nil_check(F->d_665)).b_, &(*(P117)rt_nil_check((*F->y_666))).result_, &F->rc_2195);
(*(P117)rt_nil_check((*F->y_666))).c_ = F->rc_2195;
}
if ((f_is_rel_352(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_665)).name_))) && ((*(P117)rt_nil_check((*F->y_666))).result_ != F->up->ty_bool_157))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_665)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_665)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P117)rt_nil_check((*F->y_666))).vrp_ = (G_NV((*(P174)rt_nil_check(F->d_665)).flag_) == ((rt_int)1LL));
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_784(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_665)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check((*F->y_666))).cname_);
(*(P117)rt_nil_check((*F->y_666))).decl_ = F->d_665;
(*(P117)rt_nil_check((*F->y_666))).level_ = G_NV(F->up->cur_level_139);
ret_:

  return;
}

static void f_decl_elements_669(struct f_greenc_1fr *up_, P174 decls_668) {
  struct f_decl_elements_669fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_668 = decls_668;
F->e_2200 = NULL;
F->e_2200 = F->decls_668;
F->declared_2201 = INT_MIN;
F->declared_2201 = 0;
F->up->anon_node_176 = NULL;
while ((F->e_2200 != NULL)) {
if ((((G_NV((*(P174)rt_nil_check(F->e_2200)).kind_) != ((rt_int)40LL)) && (G_NV((*(P174)rt_nil_check(F->e_2200)).kind_) != ((rt_int)41LL))) || ((*(P174)rt_nil_check(F->e_2200)).a_ != F->up->anon_node_176))) {
F->up->anon_node_176 = NULL;
}
if (((((G_NV((*(P174)rt_nil_check(F->e_2200)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_2200)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->e_2200)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2201)))) {
f_declare_subprograms_657(F->up, F->e_2200);
F->declared_2201 = 1;
}
f_decl_element_671(F->up, F->e_2200);
F->e_2200 = (*(P174)rt_nil_check(F->e_2200)).next_;
}
L_end_2202: ;
ret_:

  return;
}

static void f_decl_element_671(struct f_greenc_1fr *up_, P174 e_670) {
  struct f_decl_element_671fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_670 = e_670;
F->saved_2203 = NULL;
F->saved_2203 = F->up->barriers_200;
if ((((*(P174)rt_nil_check(F->e_670)).formal_ != NULL) && (((((((G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)45LL))) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->e_670)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_692(F->up, F->e_670, G_NV(F->up->depth_120));
f_decl_element_1_673(F->up, F->e_670);
F->up->barriers_200 = F->saved_2203;
goto ret_;
}
f_decl_element_1_673(F->up, F->e_670);
ret_:

  return;
}

static void f_decl_element_1_673(struct f_greenc_1fr *up_, P174 e_672) {
  struct f_decl_element_1_673fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_672 = e_672;
F->pd_2204 = NULL;
F->y_2205 = NULL;
F->z_2206 = NULL;
F->t_2207 = NULL;
F->vt_2208 = NULL;
F->c_2209 = NULL;
F->acc_2210 = NULL;
F->v_2211 = NULL;
F->x_2212 = NULL;
F->ok_2213 = INT_MIN;
{ rt_int sel2214 = G_NV((*(P174)rt_nil_check(F->e_672)).kind_);
if (0 || sel2214 == ((rt_int)42LL)) {
F->y_2205 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)));
if ((((((((F->y_2205 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2205)).kind_) == ((rt_int)5LL))) && (G_NV((*(P117)rt_nil_check(F->y_2205)).depth_) == G_NV(F->up->depth_120))) && ((*(P117)rt_nil_check(F->y_2205)).t_ != NULL)) && G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).priv_)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_173 = (*(P117)rt_nil_check(F->y_2205)).t_;
F->x_2212 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).name_;
F->pd_2204 = (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).decl_;
F->ok_2213 = G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).is_restricted_);
f_type_definition_555(F->up, (*(P174)rt_nil_check(F->e_672)).a_, (*(P174)rt_nil_check(F->e_672)).name_, &F->t_2207, &F->c_2209);
F->up->completing_173 = NULL;
if ((F->t_2207 != (*(P117)rt_nil_check(F->y_2205)).t_)) {
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)), (*(P122)rt_nil_check(F->t_2207)));
}
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).name_ = F->x_2212;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).decl_ = F->pd_2204;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).is_restricted_ = G_NV(F->ok_2213);
(*(P117)rt_nil_check(F->y_2205)).c_ = F->c_2209;
} else {
F->y_2205 = f_new_sym_483(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_672)).name_);
(*(P117)rt_nil_check(F->y_2205)).decl_ = F->e_672;
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).kind_) == ((rt_int)77LL))) {
(*(P117)rt_nil_check(F->y_2205)).t_ = f_new_typ_485(F->up, ((rt_int)9LL));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).name_ = (*(P174)rt_nil_check(F->e_672)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).priv_ = 1;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).decl_ = F->up->cur_pkg_225;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->e_672)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_555(F->up, (*(P174)rt_nil_check(F->e_672)).a_, (*(P174)rt_nil_check(F->e_672)).name_, &(*(P117)rt_nil_check(F->y_2205)).t_, &(*(P117)rt_nil_check(F->y_2205)).c_);
}
}
} else if (0 || sel2214 == ((rt_int)43LL)) {
F->y_2205 = f_new_sym_483(F->up, ((rt_int)5LL), (*(P174)rt_nil_check(F->e_672)).name_);
f_resolve_521(F->up, (*(P174)rt_nil_check(F->e_672)).a_, &(*(P117)rt_nil_check(F->y_2205)).t_, &(*(P117)rt_nil_check(F->y_2205)).c_);
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
} else if (0 || sel2214 == ((rt_int)40LL)) {
f_resolve_object_type_679(F->up, (*(P174)rt_nil_check(F->e_672)).a_, &F->t_2207, &F->c_2209);
F->y_2205 = f_new_sym_483(F->up, ((rt_int)1LL), (*(P174)rt_nil_check(F->e_672)).name_);
if ((G_NV((*(P174)rt_nil_check(F->e_672)).flag_) == ((rt_int)2LL))) {
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->e_672)).b_, &F->v_2211, &F->vt_2208, &F->c_2209, &(*(P117)rt_nil_check(F->y_2205)).ro_);
 (void)rt_range((*(P117)rt_nil_check(F->y_2205)).ro_, 0, 1);
f_check_type_500(F->up, F->vt_2208, F->t_2207, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_ctype_505(F->up, F->t_2207, &F->acc_2210);
f_new_name_242(F->up, cat_rt_gstr(f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_))), one_rt_gstr(95)), &F->x_2212);
if (G_NV(F->up->in_func_138)) {
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->acc_2210))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(59)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check(F->x_2212))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2211))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2205)).byref_ = 1;
(*(P117)rt_nil_check(F->y_2205)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->y_2205)).access_path_ = F->x_2212;
} else {
f_put_to_264(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->acc_2210))), rt_g_lit(" *g_", 4)), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(59)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P140)rt_nil_check(F->x_2212))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->v_2211))), rt_g_lit(");", 2)));
(*(P117)rt_nil_check(F->y_2205)).level_ = ((rt_int)0LL);
(*(P117)rt_nil_check(F->y_2205)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(41)));
}
(*(P117)rt_nil_check(F->y_2205)).t_ = F->vt_2208;
(*(P117)rt_nil_check(F->y_2205)).c_ = F->c_2209;
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
goto ret_;
}
if ((((G_NV((*(P122)rt_nil_check(F->t_2207)).kind_) == ((rt_int)6LL)) && (!f_bounded_488(F->up, F->c_2209))) && ((*(P174)rt_nil_check(F->e_672)).b_ != NULL))) {
F->up->vrp_ok_230 = 1;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_672)).b_, F->t_2207, &F->vt_2208, &F->v_2211);
F->up->vrp_ok_230 = 0;
f_check_type_500(F->up, F->vt_2208, F->t_2207, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)), F->t_2207, &F->acc_2210);
f_copy_code_637(F->up, F->t_2207, (*(P140)rt_nil_check(F->v_2211)), &F->x_2212);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2210)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(59)));
} else {
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)), F->t_2207, &F->acc_2210);
f_init_storage_625(F->up, (*(P140)rt_nil_check(F->acc_2210)), F->t_2207, F->c_2209);
if (((*(P174)rt_nil_check(F->e_672)).b_ != NULL)) {
if (f_restricted_here_576(F->up, F->t_2207)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_672)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_792(F->up, (*(P174)rt_nil_check(F->e_672)).b_)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_672)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_230 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2207)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->acc_2210;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_672)).b_, F->t_2207, &F->vt_2208, &F->v_2211);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_230 = 0;
f_check_type_500(F->up, F->vt_2208, F->t_2207, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_assign_code_633(F->up, (*(P140)rt_nil_check(F->acc_2210)), F->t_2207, (*(P140)rt_nil_check(F->v_2211)), F->c_2209, &F->x_2212);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2212)));
}
}
(*(P117)rt_nil_check(F->y_2205)).t_ = F->t_2207;
(*(P117)rt_nil_check(F->y_2205)).c_ = F->c_2209;
f_bind_655(F->up, F->y_2205, F->acc_2210);
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
} else if (0 || sel2214 == ((rt_int)41LL)) {
f_resolve_object_type_679(F->up, (*(P174)rt_nil_check(F->e_672)).a_, &F->t_2207, &F->c_2209);
F->z_2206 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)));
if (((*(P174)rt_nil_check(F->e_672)).b_ == NULL)) {
if (((F->up->cur_pkg_225 == NULL) || (!(G_NV((*(P122)rt_nil_check(F->t_2207)).priv_) && (G_NV((*(P122)rt_nil_check(F->t_2207)).kind_) == ((rt_int)9LL)))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_672)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2205 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_672)).name_);
(*(P117)rt_nil_check(F->y_2205)).t_ = F->t_2207;
(*(P117)rt_nil_check(F->y_2205)).c_ = F->c_2209;
(*(P117)rt_nil_check(F->y_2205)).ro_ = 1;
(*(P117)rt_nil_check(F->y_2205)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
goto ret_;
}
if (((((F->z_2206 != NULL) && (G_NV((*(P117)rt_nil_check(F->z_2206)).depth_) == G_NV(F->up->depth_120))) && (G_NV((*(P117)rt_nil_check(F->z_2206)).kind_) == ((rt_int)2LL))) && (G_NV((*(P117)rt_nil_check(F->z_2206)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_500(F->up, F->t_2207, (*(P117)rt_nil_check(F->z_2206)).t_, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_672)).b_, F->t_2207, &F->vt_2208, &F->v_2211);
f_check_type_500(F->up, F->vt_2208, F->t_2207, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)), F->t_2207, &F->acc_2210);
f_bind_655(F->up, F->z_2206, F->acc_2210);
f_copy_code_637(F->up, F->t_2207, (*(P140)rt_nil_check(F->v_2211)), &F->x_2212);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2210)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_2206)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2205 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->e_672)).name_);
(*(P117)rt_nil_check(F->y_2205)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_230 = 1;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_672)).b_, F->t_2207, &F->vt_2208, &F->v_2211);
F->up->vrp_ok_230 = 0;
f_check_type_500(F->up, F->vt_2208, F->t_2207, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
if ((G_NV((*(P122)rt_nil_check(F->t_2207)).kind_) == ((rt_int)1LL))) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_672)).b_, &(*(P117)rt_nil_check(F->y_2205)).mvalue_, &F->ok_2213);
 (void)rt_range(F->ok_2213, 0, 1);
(*(P117)rt_nil_check(F->y_2205)).hasmv_ = G_NV(F->ok_2213);
}
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)), F->t_2207, &F->acc_2210);
f_copy_code_637(F->up, F->t_2207, (*(P140)rt_nil_check(F->v_2211)), &F->x_2212);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2210)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2212))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->y_2205)).t_ = F->t_2207;
(*(P117)rt_nil_check(F->y_2205)).c_ = F->c_2209;
(*(P117)rt_nil_check(F->y_2205)).ro_ = 1;
f_bind_655(F->up, F->y_2205, F->acc_2210);
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
} else if (0 || sel2214 == ((rt_int)46LL)) {
if (((*(P174)rt_nil_check(F->e_672)).a_ != NULL)) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).a_))) {
F->y_2205 = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_672)).line_));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2205 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_672)).a_)).name_)));
} else {
F->y_2205 = NULL;
}
if (((F->y_2205 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2205)).kind_) != ((rt_int)6LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_672)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1094(F->up, F->y_2205, &F->z_2206);
(*(P117)rt_nil_check(F->z_2206)).name_ = (*(P174)rt_nil_check(F->e_672)).name_;
f_define_478(F->up, F->z_2206, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
goto ret_;
}
F->y_2205 = f_new_sym_483(F->up, ((rt_int)6LL), (*(P174)rt_nil_check(F->e_672)).name_);
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_2205)).cname_);
f_put_to_264(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).cname_))), one_rt_gstr(59)));
f_put_to_264(F->up, F->up->out_excs_135, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2205)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_257(F->up)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_))), f_q_257(F->up)), rt_g_lit(");", 2)));
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
} else if (0 || sel2214 == ((rt_int)44LL) || sel2214 == ((rt_int)45LL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_672)).ival_) == ((rt_int)0LL)) && f_is_generic_name_1297(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_672)).name_))))) {
f_attach_generic_body_1302(F->up, F->e_672);
} else if ((G_NV((*(P174)rt_nil_check(F->e_672)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_686(F->up, F->e_672);
} else if ((G_NV((*(P174)rt_nil_check(F->e_672)).ival_) == ((rt_int)3LL))) {
f_stub_684(F->up, F->e_672);
} else if ((G_NV((*(P174)rt_nil_check(F->e_672)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_667(F->up, F->e_672, &F->y_2205);
f_define_478(F->up, F->y_2205, G_NV((*(P174)rt_nil_check(F->e_672)).line_));
f_elaborate_defaults_664(F->up, F->y_2205);
} else {
f_subprogram_body_729(F->up, F->e_672, f_lookup_decl_450(F->up, F->e_672));
}
} else if (0 || sel2214 == ((rt_int)55LL)) {
f_use_clause_1108(F->up, F->e_672);
} else if (0 || sel2214 == ((rt_int)56LL)) {
f_pragma_decl_675(F->up, F->e_672);
} else {
f_other_decl_694(F->up, F->e_672);
}
}
ret_:

  return;
}

static void f_pragma_decl_675(struct f_greenc_1fr *up_, P174 e_674) {
  struct f_pragma_decl_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_674 = e_674;
ret_:

  return;
}

static void f_resolve_object_type_679(struct f_greenc_1fr *up_, P174 st_676, P122 *t_677, P178 *c_678) {
  struct f_resolve_object_type_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_676 = st_676;
F->t_677 = t_677;
F->c_678 = c_678;
if (((G_NV((*(P174)rt_nil_check(F->st_676)).kind_) != ((rt_int)80LL)) && (F->st_676 == F->up->anon_node_176))) {
(*F->t_677) = F->up->anon_typ_177;
(*F->c_678) = F->up->anon_cons_180;
goto ret_;
}
f_resolve_521(F->up, F->st_676, &(*F->t_677), &(*F->c_678));
if ((G_NV((*(P174)rt_nil_check(F->st_676)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_176 = F->st_676;
F->up->anon_typ_177 = (*F->t_677);
F->up->anon_cons_180 = (*F->c_678);
}
ret_:

  return;
}

static void f_find_subunit_682(struct f_greenc_1fr *up_, P174 e_680, P174 *r_681) {
  struct f_find_subunit_682fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_680 = e_680;
F->r_681 = r_681;
F->u_2215 = NULL;
F->u_2215 = F->up->units_222;
F->k_2216 = INT64_MIN;
(*F->r_681) = NULL;
while ((F->u_2215 != NULL)) {
if (((((*(P174)rt_nil_check(F->u_2215)).formal_ != NULL) && (G_NV(({ rt_gstr ix2218 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2215)).formal_)); ix2218.p[rt_index(((rt_int)1LL), ix2218.lo, ix2218.hi) - ix2218.lo]; })) == 33)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_2215)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_680)).name_))))) {
if (((G_NV((*(P174)rt_nil_check(F->u_2215)).kind_) == G_NV((*(P174)rt_nil_check(F->e_680)).kind_)) || (((G_NV((*(P174)rt_nil_check(F->u_2215)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_2215)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P174)rt_nil_check(F->e_680)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_680)).kind_) == ((rt_int)45LL)))))) {
(*F->r_681) = F->u_2215;
goto ret_;
}
}
F->u_2215 = (*(P174)rt_nil_check(F->u_2215)).next_;
}
L_end_2217: ;
ret_:

  return;
}

static void f_stub_684(struct f_greenc_1fr *up_, P174 e_683) {
  struct f_stub_684fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_683 = e_683;
F->sub_2219 = NULL;
F->saved_2220 = NULL;
F->saved_2220 = F->up->barriers_200;
F->k_2221 = INT64_MIN;
F->d_2222 = INT64_MIN;
F->first_name_2223 = NULL;
F->list_2224 = NULL;
F->y_2225 = NULL;
f_find_subunit_682(F->up, F->e_683, &F->sub_2219);
if ((F->sub_2219 == NULL)) {
{ rt_int lo2228 = ((rt_int)1LL), hi2229 = G_NV(F->up->nunits_188);
for (rt_int it2230 = hi2229; it2230 >= lo2228; it2230--) {
F->i_2227 = it2230;
if ((F->sub_2219 == NULL)) {
f_lib_load_1371(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(({ A183 ix2232 = F->up->unit_names_184; ix2232.p[rt_index(F->i_2227, ix2232.lo, ix2232.hi) - ix2232.lo]; }))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_683)).name_))), rt_g_lit(".sub", 4)), &F->sub_2219);
}
}
}
L_end_2226: ;
if ((F->sub_2219 == NULL)) {
f_lib_load_1371(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->cur_comp_unit_209)), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_683)).name_))), rt_g_lit(".sub", 4)), &F->sub_2219);
}
if ((F->sub_2219 != NULL)) {
(*(P174)rt_nil_check(F->sub_2219)).next_ = F->up->units_222;
F->up->units_222 = F->sub_2219;
}
}
if ((F->sub_2219 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_683)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the subunit of ", 15), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_683)).name_))), rt_g_lit(" is neither in this compilation nor in the ", 43)), rt_g_lit("program library (RM79 10.2)", 27)));
}
F->list_2224 = f_mk_239(F->up, ({ rt_gstr sl2236 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2219)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at2235 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2219)).formal_)); at2235.hi >= at2235.lo ? at2235.hi - at2235.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2236.lo, sl2236.hi); rt_index(h_, sl2236.lo, sl2236.hi); } sl2236.p += l_ - sl2236.lo; sl2236.lo = l_; sl2236.hi = h_; sl2236; }));
(*(P174)rt_nil_check(F->sub_2219)).formal_ = f_mk_239(F->up, cat_rt_gstr(one_rt_gstr(35), (*(P140)rt_nil_check(F->list_2224))));
F->k_2221 = ((rt_int)2LL);
while (((G_NV(F->k_2221) <= ({ rt_gstr at2238 = (*(P140)rt_nil_check(F->list_2224)); at2238.hi >= at2238.lo ? at2238.hi - at2238.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2239 = (*(P140)rt_nil_check(F->list_2224)); ix2239.p[rt_index(G_NV(F->k_2221), ix2239.lo, ix2239.hi) - ix2239.lo]; })) != 44))) {
F->k_2221 = rt_add(G_NV(F->k_2221), ((rt_int)1LL));
}
L_end_2237: ;
F->first_name_2223 = f_mk_239(F->up, ({ rt_gstr sl2241 = (*(P140)rt_nil_check(F->list_2224)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2221), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2241.lo, sl2241.hi); rt_index(h_, sl2241.lo, sl2241.hi); } sl2241.p += l_ - sl2241.lo; sl2241.lo = l_; sl2241.hi = h_; sl2241; }));
F->d_2222 = f_enclosing_depth_446(F->up, (*(P140)rt_nil_check(F->first_name_2223)));
if ((G_NV(F->d_2222) < ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->sub_2219)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the first name in the visibility list of subunit ", 49), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2219)).name_))), rt_g_lit(" is an enclosing unit (RM79 10.2)", 33)));
}
F->up->barriers_200 = ({ R199 *cell2242 = rt_alloc(sizeof(R199)); *cell2242 = cp_R199(({ R199 ag2243; ag2243.limit_ = rt_sub(G_NV(F->d_2222), ((rt_int)1LL)); ag2243.keep_ = rt_neg(((rt_int)1LL)); ag2243.allowed_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->list_2224)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->sub_2219)).name_))), one_rt_gstr(44))); ag2243.next_ = NULL; ag2243; })); (P198)cell2242; });
if (((G_NV((*(P174)rt_nil_check(F->e_683)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->e_683)).kind_) == ((rt_int)45LL)))) {
F->y_2225 = f_lookup_decl_450(F->up, F->e_683);
f_subprogram_body_729(F->up, F->sub_2219, F->y_2225);
} else if ((G_NV((*(P174)rt_nil_check(F->e_683)).kind_) == ((rt_int)49LL))) {
f_package_body_1104(F->up, F->sub_2219);
} else {
f_task_body_1207(F->up, F->sub_2219);
}
F->up->barriers_200 = F->saved_2220;
ret_:

  return;
}

static void f_rename_subprogram_686(struct f_greenc_1fr *up_, P174 e_685) {
  struct f_rename_subprogram_686fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_685 = e_685;
F->newy_2244 = NULL;
F->y_2245 = NULL;
F->z_2246 = NULL;
F->cand_2247 = NULL;
F->ix_2248 = NULL;
F->p_2249 = NULL;
F->q_2250 = NULL;
F->tail_2251 = NULL;
f_build_subprogram_667(F->up, F->e_685, &F->newy_2244);
F->y_2245 = NULL;
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).a_)))) {
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2247 = ({ A116 ix2252 = F->up->table_119; ix2252.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).name_))), ix2252.lo, ix2252.hi) - ix2252.lo]; });
while ((F->cand_2247 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2247)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)10LL)))) && f_visible_sym_433(F->up, F->cand_2247))) {
if (((f_same_types_469(F->up, (*(P117)rt_nil_check(F->cand_2247)).params_, (*(P117)rt_nil_check(F->newy_2244)).params_) && f_same_455(F->up, (*(P117)rt_nil_check(F->cand_2247)).result_, (*(P117)rt_nil_check(F->newy_2244)).result_)) && (F->y_2245 == NULL))) {
F->y_2245 = F->cand_2247;
}
}
F->cand_2247 = (*(P117)rt_nil_check(F->cand_2247)).chain_;
}
L_end_2253: ;
} else {
F->cand_2247 = (*(P117)rt_nil_check(f_lookup_path_1083(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).a_)))).members_;
while ((F->cand_2247 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->cand_2247)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).name_))) && (((G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->cand_2247)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P117)rt_nil_check(F->cand_2247)).hidden_)))) {
if (((f_same_types_469(F->up, (*(P117)rt_nil_check(F->cand_2247)).params_, (*(P117)rt_nil_check(F->newy_2244)).params_) && f_same_455(F->up, (*(P117)rt_nil_check(F->cand_2247)).result_, (*(P117)rt_nil_check(F->newy_2244)).result_)) && (F->y_2245 == NULL))) {
F->y_2245 = F->cand_2247;
}
}
F->cand_2247 = (*(P117)rt_nil_check(F->cand_2247)).mnext_;
}
L_end_2254: ;
}
}
if (((F->y_2245 == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1216(F->up, (*(P174)rt_nil_check(F->e_685)).c_, &F->y_2245, &F->ix_2248);
if (((F->ix_2248 != NULL) || ((*(P117)rt_nil_check(F->y_2245)).c_ != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_469(F->up, (*(P117)rt_nil_check(F->y_2245)).params_, (*(P117)rt_nil_check(F->newy_2244)).params_)) || (G_NV((*(P174)rt_nil_check(F->e_685)).kind_) != ((rt_int)44LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2245 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_685)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_685)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1094(F->up, F->y_2245, &F->z_2246);
(*(P117)rt_nil_check(F->z_2246)).name_ = (*(P174)rt_nil_check(F->e_685)).name_;
(*(P117)rt_nil_check(F->z_2246)).decl_ = (*(P117)rt_nil_check(F->y_2245)).decl_;
(*(P117)rt_nil_check(F->z_2246)).params_ = NULL;
F->p_2249 = (*(P117)rt_nil_check(F->y_2245)).params_;
F->q_2250 = (*(P117)rt_nil_check(F->newy_2244)).params_;
while ((F->p_2249 != NULL)) {
if ((F->tail_2251 == NULL)) {
(*(P117)rt_nil_check(F->z_2246)).params_ = ({ R1945 *cell2256 = rt_alloc(sizeof(R1945)); *cell2256 = cp_R1945(({ R1945 ag2257; ag2257.name_ = (*(P1944)rt_nil_check(F->q_2250)).name_; ag2257.mode_ = G_NV((*(P1944)rt_nil_check(F->p_2249)).mode_); ag2257.t_ = (*(P1944)rt_nil_check(F->p_2249)).t_; ag2257.c_ = (*(P1944)rt_nil_check(F->p_2249)).c_; ag2257.cfield_ = (*(P1944)rt_nil_check(F->p_2249)).cfield_; ag2257.dflt_ = (*(P1944)rt_nil_check(F->q_2250)).dflt_; ag2257.next_ = NULL; ag2257.dsym_ = NULL; ag2257; })); (P1944)cell2256; });
F->tail_2251 = (*(P117)rt_nil_check(F->z_2246)).params_;
} else {
(*(P1944)rt_nil_check(F->tail_2251)).next_ = ({ R1945 *cell2258 = rt_alloc(sizeof(R1945)); *cell2258 = cp_R1945(({ R1945 ag2259; ag2259.name_ = (*(P1944)rt_nil_check(F->q_2250)).name_; ag2259.mode_ = G_NV((*(P1944)rt_nil_check(F->p_2249)).mode_); ag2259.t_ = (*(P1944)rt_nil_check(F->p_2249)).t_; ag2259.c_ = (*(P1944)rt_nil_check(F->p_2249)).c_; ag2259.cfield_ = (*(P1944)rt_nil_check(F->p_2249)).cfield_; ag2259.dflt_ = (*(P1944)rt_nil_check(F->q_2250)).dflt_; ag2259.next_ = NULL; ag2259.dsym_ = NULL; ag2259; })); (P1944)cell2258; });
F->tail_2251 = (*(P1944)rt_nil_check(F->tail_2251)).next_;
}
F->p_2249 = (*(P1944)rt_nil_check(F->p_2249)).next_;
F->q_2250 = (*(P1944)rt_nil_check(F->q_2250)).next_;
}
L_end_2255: ;
f_define_478(F->up, F->z_2246, G_NV((*(P174)rt_nil_check(F->e_685)).line_));
f_elaborate_defaults_664(F->up, F->z_2246);
ret_:

  return;
}

static void f_rename_module_689(struct f_greenc_1fr *up_, P174 e_687, P174 target_688) {
  struct f_rename_module_689fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_687 = e_687;
F->target_688 = target_688;
F->y_2260 = NULL;
F->z_2261 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->target_688)).kind_) == ((rt_int)8LL))) {
F->y_2260 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_688)).a_)).name_)));
if ((((F->y_2260 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2260)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->y_2260)).c_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_687)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->target_688)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1094(F->up, F->y_2260, &F->z_2261);
(*(P117)rt_nil_check(F->z_2261)).name_ = (*(P174)rt_nil_check(F->e_687)).name_;
(*(P117)rt_nil_check(F->z_2261)).flags_ = ((rt_int)4LL);
(*(P117)rt_nil_check(F->z_2261)).decl_ = F->target_688;
f_define_478(F->up, F->z_2261, G_NV((*(P174)rt_nil_check(F->e_687)).line_));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->target_688)).kind_) == ((rt_int)5LL))) {
F->y_2260 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->target_688)).name_)));
} else if ((G_NV((*(P174)rt_nil_check(F->target_688)).kind_) == ((rt_int)9LL))) {
F->y_2260 = f_lookup_path_1083(F->up, f_path_of_356(F->up, F->target_688));
}
if (((F->y_2260 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2260)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2260)).kind_) != ((rt_int)9LL))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_687)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2260)).kind_) == ((rt_int)9LL)) != (G_NV((*(P174)rt_nil_check(F->e_687)).kind_) == ((rt_int)50LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_687)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1094(F->up, F->y_2260, &F->z_2261);
(*(P117)rt_nil_check(F->z_2261)).name_ = (*(P174)rt_nil_check(F->e_687)).name_;
f_define_478(F->up, F->z_2261, G_NV((*(P174)rt_nil_check(F->e_687)).line_));
ret_:

  return;
}

static void f_push_barrier_692(struct f_greenc_1fr *up_, P174 e_690, rt_int limit_691) {
  struct f_push_barrier_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_690 = e_690;
F->limit_691 = limit_691;
F->b_2262 = NULL;
F->first_name_2263 = NULL;
F->k_2264 = INT64_MIN;
F->b_2262 = ({ R199 *cell2265 = rt_alloc(sizeof(R199)); *cell2265 = cp_R199(({ R199 ag2266; ag2266.limit_ = F->limit_691; ag2266.keep_ = rt_neg(((rt_int)1LL)); ag2266.allowed_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_690)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_690)).name_))), one_rt_gstr(44))); ag2266.next_ = F->up->barriers_200; ag2266; })); (P198)cell2265; });
F->k_2264 = ((rt_int)2LL);
while (((G_NV(F->k_2264) <= ({ rt_gstr at2268 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_690)).formal_)); at2268.hi >= at2268.lo ? at2268.hi - at2268.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2269 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_690)).formal_)); ix2269.p[rt_index(G_NV(F->k_2264), ix2269.lo, ix2269.hi) - ix2269.lo]; })) != 44))) {
F->k_2264 = rt_add(G_NV(F->k_2264), ((rt_int)1LL));
}
L_end_2267: ;
if ((G_NV(F->k_2264) > ((rt_int)2LL))) {
F->first_name_2263 = f_mk_239(F->up, ({ rt_gstr sl2271 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_690)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2264), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2271.lo, sl2271.hi); rt_index(h_, sl2271.lo, sl2271.hi); } sl2271.p += l_ - sl2271.lo; sl2271.lo = l_; sl2271.hi = h_; sl2271; }));
(*(P198)rt_nil_check(F->b_2262)).keep_ = f_enclosing_depth_446(F->up, (*(P140)rt_nil_check(F->first_name_2263)));
}
F->up->barriers_200 = F->b_2262;
ret_:

  return;
}

static void f_other_decl_694(struct f_greenc_1fr *up_, P174 e_693) {
  struct f_other_decl_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_693 = e_693;
if (((G_NV((*(P174)rt_nil_check(F->e_693)).kind_) == ((rt_int)48LL)) && (G_NV((*(P174)rt_nil_check(F->e_693)).flag_) == ((rt_int)3LL)))) {
f_rename_module_689(F->up, F->e_693, (*(P174)rt_nil_check(F->e_693)).a_);
} else if (((G_NV((*(P174)rt_nil_check(F->e_693)).kind_) == ((rt_int)50LL)) && (G_NV((*(P174)rt_nil_check(F->e_693)).flag_) == ((rt_int)3LL)))) {
f_rename_module_689(F->up, F->e_693, (*(P174)rt_nil_check(F->e_693)).b_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_693)).kind_) == ((rt_int)48LL))) {
f_package_spec_1099(F->up, F->e_693);
} else if ((G_NV((*(P174)rt_nil_check(F->e_693)).kind_) == ((rt_int)49LL))) {
f_package_body_1104(F->up, F->e_693);
} else {
f_task_decl_1190(F->up, F->e_693);
}
ret_:

  return;
}

static void f_scan_labels_697(struct f_greenc_1fr *up_, P174 stmts_695, rt_gstr path_696) {
  struct f_scan_labels_697fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_695 = stmts_695;
F->path_696 = cp_rt_gstr(path_696);
F->s_2272 = NULL;
F->s_2272 = F->stmts_695;
F->a_2273 = NULL;
F->l_2274 = NULL;
F->c_2275 = NULL;
while ((F->s_2272 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)57LL))) {
F->l_2274 = F->up->body_labels_191;
while ((F->l_2274 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2274)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2272)).name_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_2272)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2272)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2274 = (*(P189)rt_nil_check(F->l_2274)).next_;
}
L_end_2277: ;
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_2272)).name_)))), one_rt_gstr(95)), &F->c_2275);
F->up->body_labels_191 = ({ R190 *cell2278 = rt_alloc(sizeof(R190)); *cell2278 = cp_R190(({ R190 ag2279; ag2279.name_ = (*(P174)rt_nil_check(F->s_2272)).name_; ag2279.cname_ = F->c_2275; ag2279.path_ = f_mk_239(F->up, F->path_696); ag2279.frames_ = ((rt_int)0LL); ag2279.line_ = G_NV((*(P174)rt_nil_check(F->s_2272)).line_); ag2279.next_ = F->up->body_labels_191; ag2279; })); (P189)cell2278; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_192 = ({ R190 *cell2280 = rt_alloc(sizeof(R190)); *cell2280 = cp_R190(({ R190 ag2281; ag2281.name_ = (*(P174)rt_nil_check(F->s_2272)).name_; ag2281.cname_ = NULL; ag2281.path_ = f_mk_239(F->up, F->path_696); ag2281.frames_ = ((rt_int)0LL); ag2281.line_ = G_NV((*(P174)rt_nil_check(F->s_2272)).line_); ag2281.next_ = F->up->body_gotos_192; ag2281; })); (P189)cell2280; });
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)22LL))) {
F->a_2273 = (*(P174)rt_nil_check(F->s_2272)).a_;
while ((F->a_2273 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->a_2273)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2273 = (*(P174)rt_nil_check(F->a_2273)).next_;
}
L_end_2282: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->s_2272)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)23LL))) {
F->a_2273 = (*(P174)rt_nil_check(F->s_2272)).b_;
while ((F->a_2273 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->a_2273)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2273 = (*(P174)rt_nil_check(F->a_2273)).next_;
}
L_end_2283: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->s_2272)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)24LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->s_2272)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_701(F->up, (*(P174)rt_nil_check(F->s_2272)).b_, (*(P174)rt_nil_check(F->s_2272)).c_, F->path_696);
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)34LL))) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->s_2272)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else if ((G_NV((*(P174)rt_nil_check(F->s_2272)).kind_) == ((rt_int)35LL))) {
F->a_2273 = (*(P174)rt_nil_check(F->s_2272)).a_;
while ((F->a_2273 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2273)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_697(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2273)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->a_2273)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->a_2273 = (*(P174)rt_nil_check(F->a_2273)).next_;
}
L_end_2284: ;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->s_2272)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_696, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
F->s_2272 = (*(P174)rt_nil_check(F->s_2272)).next_;
}
L_end_2276: ;
ret_:

  return;
}

static void f_scan_guarded_701(struct f_greenc_1fr *up_, P174 stmts_698, P174 hs_699, rt_gstr path_700) {
  struct f_scan_guarded_701fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_698 = stmts_698;
F->hs_699 = hs_699;
F->path_700 = cp_rt_gstr(path_700);
F->h_2285 = NULL;
F->h_2285 = F->hs_699;
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
if ((F->hs_699 == NULL)) {
f_scan_labels_697(F->up, F->stmts_698, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_700, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
} else {
f_scan_labels_697(F->up, F->stmts_698, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_700, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
}
while ((F->h_2285 != NULL)) {
F->up->segments_193 = rt_add(G_NV(F->up->segments_193), ((rt_int)1LL));
f_scan_labels_697(F->up, (*(P174)rt_nil_check(F->h_2285)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_700, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_193)))), one_rt_gstr(47)));
F->h_2285 = (*(P174)rt_nil_check(F->h_2285)).next_;
}
L_end_2286: ;
ret_:

  return;
}

static rt_int f_count_g_703(struct f_greenc_1fr *up_, rt_gstr p_702) {
  struct f_count_g_703fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_702 = cp_rt_gstr(p_702);
F->n_2287 = INT64_MIN;
F->n_2287 = ((rt_int)0LL);
{ rt_int lo2292 = ({ rt_gstr at2289 = F->p_702; at2289.lo; }), hi2293 = ({ rt_gstr at2290 = F->p_702; at2290.hi; });
for (rt_int it2294 = lo2292; it2294 <= hi2293; it2294++) {
F->i_2291 = it2294;
if ((G_NV(({ rt_gstr ix2295 = F->p_702; ix2295.p[rt_index(F->i_2291, ix2295.lo, ix2295.hi) - ix2295.lo]; })) == 103)) {
F->n_2287 = rt_add(G_NV(F->n_2287), ((rt_int)1LL));
}
}
}
L_end_2288: ;
F->result_ = G_NV(F->n_2287);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_706(struct f_greenc_1fr *up_, P174 stmts_704, P174 hs_705) {
  struct f_label_body_706fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_704 = stmts_704;
F->hs_705 = hs_705;
F->l_2296 = NULL;
F->g_2297 = NULL;
F->gp_2298 = NULL;
F->lp_2299 = NULL;
F->up->body_labels_191 = NULL;
F->up->body_gotos_192 = NULL;
F->up->segments_193 = ((rt_int)0LL);
f_scan_guarded_701(F->up, F->stmts_704, F->hs_705, rt_g_lit("/", 1));
F->l_2296 = F->up->body_labels_191;
while ((F->l_2296 != NULL)) {
(*(P189)rt_nil_check(F->l_2296)).frames_ = rt_add(G_NV(F->up->frames_150), f_count_g_703(F->up, (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2296)).path_))));
F->l_2296 = (*(P189)rt_nil_check(F->l_2296)).next_;
}
L_end_2300: ;
F->g_2297 = F->up->body_gotos_192;
while ((F->g_2297 != NULL)) {
F->l_2296 = F->up->body_labels_191;
while (((F->l_2296 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2296)).name_)), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2297)).name_)))))) {
F->l_2296 = (*(P189)rt_nil_check(F->l_2296)).next_;
}
L_end_2302: ;
if ((F->l_2296 == NULL)) {
f_fail_260(F->up, G_NV((*(P189)rt_nil_check(F->g_2297)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->g_2297)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2298 = (*(P189)rt_nil_check(F->g_2297)).path_;
F->lp_2299 = (*(P189)rt_nil_check(F->l_2296)).path_;
if ((({ rt_gstr at2303 = (*(P140)rt_nil_check(F->lp_2299)); at2303.hi >= at2303.lo ? at2303.hi - at2303.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2304 = (*(P140)rt_nil_check(F->gp_2298)); at2304.hi >= at2304.lo ? at2304.hi - at2304.lo + 1 : (rt_int)0; }))) {
f_fail_260(F->up, G_NV((*(P189)rt_nil_check(F->g_2297)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2306 = (*(P140)rt_nil_check(F->gp_2298)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2305 = (*(P140)rt_nil_check(F->lp_2299)); at2305.hi >= at2305.lo ? at2305.hi - at2305.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2306.lo, sl2306.hi); rt_index(h_, sl2306.lo, sl2306.hi); } sl2306.p += l_ - sl2306.lo; sl2306.lo = l_; sl2306.hi = h_; sl2306; }), (*(P140)rt_nil_check(F->lp_2299))))) {
f_fail_260(F->up, G_NV((*(P189)rt_nil_check(F->g_2297)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2311 = rt_add(({ rt_gstr at2308 = (*(P140)rt_nil_check(F->lp_2299)); at2308.hi >= at2308.lo ? at2308.hi - at2308.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2312 = ({ rt_gstr at2309 = (*(P140)rt_nil_check(F->gp_2298)); at2309.hi >= at2309.lo ? at2309.hi - at2309.lo + 1 : (rt_int)0; });
for (rt_int it2313 = lo2311; it2313 <= hi2312; it2313++) {
F->i_2310 = it2313;
if (((G_NV(({ rt_gstr ix2314 = (*(P140)rt_nil_check(F->gp_2298)); ix2314.p[rt_index(F->i_2310, ix2314.lo, ix2314.hi) - ix2314.lo]; })) == 104) || (G_NV(({ rt_gstr ix2315 = (*(P140)rt_nil_check(F->gp_2298)); ix2315.p[rt_index(F->i_2310, ix2315.lo, ix2315.hi) - ix2315.lo]; })) == 97))) {
f_fail_260(F->up, G_NV((*(P189)rt_nil_check(F->g_2297)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2307: ;
F->g_2297 = (*(P189)rt_nil_check(F->g_2297)).next_;
}
L_end_2301: ;
ret_:

  return;
}

static void f_gen_label_709(struct f_greenc_1fr *up_, P174 s_707, int goto_it_708) {
  struct f_gen_label_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_707 = s_707;
F->goto_it_708 = goto_it_708;
F->l_2316 = NULL;
F->l_2316 = F->up->body_labels_191;
while (((F->l_2316 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2316)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_707)).name_)))))) {
F->l_2316 = (*(P189)rt_nil_check(F->l_2316)).next_;
}
L_end_2317: ;
if ((F->l_2316 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_707)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_707)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_708) {
f_pop_frames_733(F->up, G_NV((*(P189)rt_nil_check(F->l_2316)).frames_));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2316)).cname_))), one_rt_gstr(59)));
} else {
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P189)rt_nil_check(F->l_2316)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_711(struct f_greenc_1fr *up_, P174 d_710) {
  struct f_is_foreign_711fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_710 = d_710;
if (((*(P174)rt_nil_check(F->d_710)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((({ rt_gstr at2318 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_710)).tag_)); at2318.hi >= at2318.lo ? at2318.hi - at2318.lo + 1 : (rt_int)0; }) < ((rt_int)10LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr(({ rt_gstr sl2319 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_710)).tag_)); rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)10LL); if (l_ <= h_) { rt_index(l_, sl2319.lo, sl2319.hi); rt_index(h_, sl2319.lo, sl2319.hi); } sl2319.p += l_ - sl2319.lo; sl2319.lo = l_; sl2319.hi = h_; sl2319; }), rt_g_lit("INTERFACE ", 10));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_foreign_call_715(struct f_greenc_1fr *up_, P174 d_712, P117 y_713, P140 *r_714) {
  struct f_foreign_call_715fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_712 = d_712;
F->y_713 = y_713;
F->r_714 = r_714;
F->lang_2322 = cp_rt_gstr(({ rt_gstr sl2321 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_712)).tag_)); rt_int l_ = ((rt_int)11LL), h_ = ({ rt_gstr at2320 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_712)).tag_)); at2320.hi >= at2320.lo ? at2320.hi - at2320.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2321.lo, sl2321.hi); rt_index(h_, sl2321.lo, sl2321.hi); } sl2321.p += l_ - sl2321.lo; sl2321.lo = l_; sl2321.hi = h_; sl2321; }));
F->n_2323 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->d_712)).name_)));
F->pm_2324 = NULL;
F->pm_2324 = (*(P117)rt_nil_check(F->y_713)).params_;
F->x_2325 = NULL;
F->ct_2326 = NULL;
F->all_real_2327 = INT_MIN;
F->all_real_2327 = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_713)).result_)).kind_) == ((rt_int)3LL));
F->x_2325 = f_mk_239(F->up, rt_g_lit("", 0));
while ((F->pm_2324 != NULL)) {
if ((({ rt_gstr at2329 = (*(P140)rt_nil_check(F->x_2325)); at2329.hi >= at2329.lo ? at2329.hi - at2329.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2325 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2325)), rt_g_lit(", ", 2)));
}
if (((G_NV((*(P122)rt_nil_check((*(P1944)rt_nil_check(F->pm_2324)).t_)).kind_) != ((rt_int)3LL)) || (G_NV((*(P1944)rt_nil_check(F->pm_2324)).mode_) != ((rt_int)1LL)))) {
F->all_real_2327 = 0;
}
if ((f_is_string_584(F->up, (*(P1944)rt_nil_check(F->pm_2324)).t_) && (G_NV((*(P1944)rt_nil_check(F->pm_2324)).mode_) == ((rt_int)1LL)))) {
F->x_2325 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2325)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2324)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2325 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_2325)), rt_g_lit("F->", 3)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2324)).cfield_))));
}
F->pm_2324 = (*(P1944)rt_nil_check(F->pm_2324)).next_;
}
L_end_2328: ;
if ((eq_rt_gstr(F->lang_2322, rt_g_lit("UNSAFE_CONVERSION", 17)) && (((*(P117)rt_nil_check(F->y_713)).params_ != NULL) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_713)).result_)).kind_) != ((rt_int)9LL))))) {
f_ctype_505(F->up, (*(P117)rt_nil_check(F->y_713)).result_, &F->ct_2326);
f_unsafe_bits_721(F->up, (*(P1944)rt_nil_check((*(P117)rt_nil_check(F->y_713)).params_)).t_, (*(P117)rt_nil_check(F->y_713)).result_, cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1944)rt_nil_check((*(P117)rt_nil_check(F->y_713)).params_)).cfield_))), (*(P140)rt_nil_check(F->ct_2326)), &(*F->r_714));
} else if (eq_rt_gstr(F->lang_2322, rt_g_lit("C", 1))) {
(*F->r_714) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_250(F->up, F->n_2323)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2325))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->lang_2322, rt_g_lit("FORTRAN", 7))) {
if ((!G_NV(F->all_real_2327))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_712)).line_), rt_g_lit("the FORTRAN routines of this implementation take and return real values (RM79 13.9)", 83));
} else if ((((((((((((eq_rt_gstr(F->n_2323, rt_g_lit("SQRT", 4)) || eq_rt_gstr(F->n_2323, rt_g_lit("SIN", 3))) || eq_rt_gstr(F->n_2323, rt_g_lit("COS", 3))) || eq_rt_gstr(F->n_2323, rt_g_lit("TAN", 3))) || eq_rt_gstr(F->n_2323, rt_g_lit("ASIN", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("ACOS", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("ATAN", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("EXP", 3))) || eq_rt_gstr(F->n_2323, rt_g_lit("SINH", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("COSH", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("TANH", 4))) || eq_rt_gstr(F->n_2323, rt_g_lit("ATAN2", 5)))) {
(*F->r_714) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_250(F->up, F->n_2323), one_rt_gstr(40)), (*(P140)rt_nil_check(F->x_2325))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2323, rt_g_lit("ALOG", 4)) || eq_rt_gstr(F->n_2323, rt_g_lit("LOG", 3)))) {
(*F->r_714) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("log(", 4), (*(P140)rt_nil_check(F->x_2325))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2323, rt_g_lit("ALOG10", 6)) || eq_rt_gstr(F->n_2323, rt_g_lit("LOG10", 5)))) {
(*F->r_714) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("log10(", 6), (*(P140)rt_nil_check(F->x_2325))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2323, rt_g_lit("ABS", 3)) || eq_rt_gstr(F->n_2323, rt_g_lit("FABS", 4)))) {
(*F->r_714) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->x_2325))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_712)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the FORTRAN library of this implementation has no routine ", 58), F->n_2323), rt_g_lit("; it has SQRT, SIN, COS, TAN, ASIN, ACOS, ATAN, ATAN2, EXP, ALOG, ALOG10, SINH, COSH, ", 86)), rt_g_lit("TANH and ABS (RM79 13.9)", 24)));
}
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_712)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INTERFACE(", 17), F->lang_2322), rt_g_lit("): this implementation calls C and FORTRAN (RM79 13.9)", 54)));
}
ret_:

  return;
}

static void f_unsafe_bits_721(struct f_greenc_1fr *up_, P122 s_716, P122 t_717, rt_gstr v_718, rt_gstr ct_719, P140 *r_720) {
  struct f_unsafe_bits_721fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_716 = s_716;
F->t_717 = t_717;
F->v_718 = cp_rt_gstr(v_718);
F->ct_719 = cp_rt_gstr(ct_719);
F->r_720 = r_720;
(*F->r_720) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), F->ct_719), rt_g_lit(" r_; memset(&r_, 0, sizeof r_); __typeof__(", 43)), F->v_718), rt_g_lit(") s_ = ", 7)), F->v_718), rt_g_lit("; memcpy(&r_, &s_, sizeof r_ < sizeof s_ \? sizeof r_ : sizeof s_); r_; })", 73)));
ret_:

  return;
}

static P117 f_code_type_723(struct f_greenc_1fr *up_, P174 s_722) {
  struct f_code_type_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_722 = s_722;
F->c_2330 = NULL;
F->y_2331 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->s_722)).kind_) != ((rt_int)21LL))) {
F->result_ = NULL;
goto ret_;
}
F->c_2330 = (*(P174)rt_nil_check(F->s_722)).a_;
if ((G_NV((*(P174)rt_nil_check(F->c_2330)).kind_) != ((rt_int)8LL))) {
F->result_ = NULL;
goto ret_;
}
F->c_2330 = (*(P174)rt_nil_check(F->c_2330)).a_;
if ((G_NV((*(P174)rt_nil_check(F->c_2330)).kind_) == ((rt_int)5LL))) {
F->y_2331 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->c_2330)).name_)));
} else if (((G_NV((*(P174)rt_nil_check(F->c_2330)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->c_2330)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2331 = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->c_2330)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->c_2330)).name_)), ((rt_int)0LL));
}
if (((F->y_2331 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2331)).kind_) == ((rt_int)5LL)))) {
F->result_ = F->y_2331;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_code_body_726(struct f_greenc_1fr *up_, P174 d_724, P117 y_725) {
  struct f_check_code_body_726fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_724 = d_724;
F->y_725 = y_725;
F->s_2332 = NULL;
F->s_2332 = (*(P174)rt_nil_check(F->d_724)).d_;
F->n_2333 = INT64_MIN;
F->n_2333 = ((rt_int)0LL);
F->k_2334 = INT64_MIN;
F->k_2334 = ((rt_int)0LL);
while ((F->s_2332 != NULL)) {
F->n_2333 = rt_add(G_NV(F->n_2333), ((rt_int)1LL));
if ((f_code_type_723(F->up, F->s_2332) != NULL)) {
F->k_2334 = rt_add(G_NV(F->k_2334), ((rt_int)1LL));
}
F->s_2332 = (*(P174)rt_nil_check(F->s_2332)).next_;
}
L_end_2335: ;
if (((G_NV(F->k_2334) > ((rt_int)0LL)) && (((G_NV(F->k_2334) != G_NV(F->n_2333)) || ((*(P174)rt_nil_check(F->d_724)).e_ != NULL)) || (G_NV((*(P117)rt_nil_check(F->y_725)).kind_) != ((rt_int)4LL))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->d_724)).line_), rt_g_lit("a procedure that contains a code statement contains only code statements (RM79 13.8)", 84));
}
ret_:

  return;
}

static void f_subprogram_body_729(struct f_greenc_1fr *up_, P174 d_727, P117 y_728) {
  struct f_subprogram_body_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_727 = d_727;
F->y_728 = y_728;
F->saved_body_2336 = NULL;
F->saved_body_2336 = F->up->cur_body_217;
F->saved_code_2337 = NULL;
F->saved_code_2337 = F->up->code_136;
F->saved_fields_2338 = NULL;
F->saved_fields_2338 = F->up->fields_buf_137;
F->saved_in_2339 = INT_MIN;
F->saved_in_2339 = G_NV(F->up->in_func_138);
F->saved_sym_2340 = NULL;
F->saved_sym_2340 = F->up->func_sym_142;
F->saved_exits_2341 = NULL;
F->saved_exits_2341 = F->up->exits_145;
F->saved_frames_2342 = INT64_MIN;
F->saved_frames_2342 = G_NV(F->up->frames_150);
F->saved_handlers_2343 = NULL;
F->saved_handlers_2343 = F->up->handlers_153;
F->saved_cleanups_2344 = NULL;
F->saved_cleanups_2344 = F->up->cleanups_154;
F->saved_labels_2345 = NULL;
F->saved_labels_2345 = F->up->body_labels_191;
F->saved_hx_2346 = NULL;
F->saved_hx_2346 = F->up->handler_exits_194;
F->saved_hd_2347 = INT64_MIN;
F->saved_hd_2347 = G_NV(F->up->handler_depth_195);
F->saved_pure_2348 = NULL;
F->saved_pure_2348 = F->up->pure_sym_228;
F->aw_2349 = NULL;
F->saved_pdepth_2350 = INT64_MIN;
F->saved_pdepth_2350 = G_NV(F->up->pure_depth_229);
F->args_2351 = NULL;
F->head_2352 = NULL;
F->frame_2353 = NULL;
F->parent_2354 = NULL;
F->ct_2355 = NULL;
F->x_2356 = NULL;
F->pm_2357 = NULL;
F->pm_2357 = (*(P117)rt_nil_check(F->y_728)).params_;
F->p_2358 = NULL;
F->frame_2353 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_728)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_138)) {
F->parent_2354 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_136 = f_new_buffer_261(F->up);
F->up->fields_buf_137 = f_new_buffer_261(F->up);
F->up->in_func_138 = 1;
F->up->func_sym_142 = F->y_728;
F->up->exits_145 = NULL;
F->up->frames_150 = ((rt_int)0LL);
F->up->handlers_153 = NULL;
F->up->cleanups_154 = NULL;
F->up->handler_exits_194 = NULL;
F->up->handler_depth_195 = ((rt_int)0LL);
F->up->cur_level_139 = rt_add(G_NV(F->up->cur_level_139), ((rt_int)1LL));
F->args_2351 = f_mk_239(F->up, rt_g_lit("", 0));
f_open_scope_479(F->up);
f_push_unit_448(F->up, (*(P174)rt_nil_check(F->d_727)).name_);
if (((G_NV((*(P117)rt_nil_check(F->y_728)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P117)rt_nil_check(F->y_728)).vrp_)))) {
F->up->pure_sym_228 = F->y_728;
F->up->pure_depth_229 = G_NV(F->up->depth_120);
}
if ((F->parent_2354 != NULL)) {
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P140)rt_nil_check(F->parent_2354))), rt_g_lit(" *up;", 5)));
F->args_2351 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->parent_2354))), rt_g_lit(" *up_", 5)));
f_emit_266(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2357 != NULL)) {
f_ctype_505(F->up, (*(P1944)rt_nil_check(F->pm_2357)).t_, &F->ct_2355);
if ((({ rt_gstr at2360 = (*(P140)rt_nil_check(F->args_2351)); at2360.hi >= at2360.lo ? at2360.hi - at2360.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2351 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2351)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P1944)rt_nil_check(F->pm_2357)).mode_) == ((rt_int)1LL))) {
F->p_2358 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P1944)rt_nil_check(F->pm_2357)).name_);
(*(P117)rt_nil_check(F->p_2358)).ro_ = 1;
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2355))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))), one_rt_gstr(59)));
F->args_2351 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2351)), (*(P140)rt_nil_check(F->ct_2355))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))));
f_copy_code_637(F->up, (*(P1944)rt_nil_check(F->pm_2357)).t_, (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_)), &F->x_2356);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2356))), one_rt_gstr(59)));
} else {
F->p_2358 = f_new_sym_483(F->up, ((rt_int)1LL), (*(P1944)rt_nil_check(F->pm_2357)).name_);
(*(P117)rt_nil_check(F->p_2358)).byref_ = 1;
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2355))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))), one_rt_gstr(59)));
F->args_2351 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2351)), (*(P140)rt_nil_check(F->ct_2355))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2357)).cfield_))), one_rt_gstr(59)));
}
(*(P117)rt_nil_check(F->p_2358)).access_path_ = (*(P1944)rt_nil_check(F->pm_2357)).cfield_;
(*(P117)rt_nil_check(F->p_2358)).t_ = (*(P1944)rt_nil_check(F->pm_2357)).t_;
(*(P117)rt_nil_check(F->p_2358)).c_ = (*(P1944)rt_nil_check(F->pm_2357)).c_;
(*(P117)rt_nil_check(F->p_2358)).level_ = G_NV(F->up->cur_level_139);
f_define_478(F->up, F->p_2358, G_NV((*(P174)rt_nil_check(F->d_727)).line_));
F->pm_2357 = (*(P1944)rt_nil_check(F->pm_2357)).next_;
}
L_end_2359: ;
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_728)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_505(F->up, (*(P117)rt_nil_check(F->y_728)).result_, &F->ct_2355);
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P140)rt_nil_check(F->ct_2355))), rt_g_lit(" result_;", 9)));
}
if (f_is_foreign_711(F->up, F->d_727)) {
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->d_727)).c_);
f_foreign_call_715(F->up, F->d_727, F->y_728, &F->x_2356);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_728)).result_)).kind_) == ((rt_int)9LL))) {
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->x_2356)), one_rt_gstr(59)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->x_2356))), one_rt_gstr(59)));
f_emit_266(F->up, rt_g_lit("goto ret_;", 10));
}
} else {
F->up->cur_body_217 = F->d_727;
f_label_body_706(F->up, (*(P174)rt_nil_check(F->d_727)).d_, (*(P174)rt_nil_check(F->d_727)).e_);
f_guarded_741(F->up, (*(P174)rt_nil_check(F->d_727)).c_, (*(P174)rt_nil_check(F->d_727)).d_, (*(P174)rt_nil_check(F->d_727)).e_, G_NV((*(P174)rt_nil_check(F->d_727)).line_));
}
f_task_awaits_1210(F->up, (*(P174)rt_nil_check(F->d_727)).c_, &F->aw_2349);
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_480(F->up);
F->up->cur_level_139 = rt_sub(G_NV(F->up->cur_level_139), ((rt_int)1LL));
if ((({ rt_gstr at2361 = (*(P140)rt_nil_check(F->args_2351)); at2361.hi >= at2361.lo ? at2361.hi - at2361.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2351 = f_mk_239(F->up, rt_g_lit("void", 4));
}
f_ctype_505(F->up, (*(P117)rt_nil_check(F->y_728)).result_, &F->ct_2355);
F->head_2352 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P140)rt_nil_check(F->ct_2355))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_728)).cname_))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2351))), one_rt_gstr(41)));
f_put_to_264(F->up, F->up->out_protos_131, cat_rt_gstr((*(P140)rt_nil_check(F->head_2352)), one_rt_gstr(59)));
f_put_to_264(F->up, F->up->out_frames_129, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check(F->frame_2353))), rt_g_lit(" { int dummy;", 13)));
f_splice_271(F->up, F->up->out_frames_129, F->up->fields_buf_137);
f_put_to_264(F->up, F->up->out_frames_129, rt_g_lit("};", 2));
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr((*(P140)rt_nil_check(F->head_2352)), rt_g_lit(" {", 2)));
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P140)rt_nil_check(F->frame_2353))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P117)rt_nil_check(F->y_728)).kind_) == ((rt_int)4LL)) && ((*(P117)rt_nil_check(F->y_728)).access_path_ != NULL))) {
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_728)).access_path_))));
}
f_splice_271(F->up, F->up->out_funcs_133, F->up->code_136);
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_728)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_264(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2349)));
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("ret_:", 5));
f_put_to_264(F->up, F->up->out_funcs_133, (*(P140)rt_nil_check(F->aw_2349)));
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("  return;", 9));
}
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("}", 1));
f_put_to_264(F->up, F->up->out_funcs_133, rt_g_lit("", 0));
F->up->code_136 = F->saved_code_2337;
F->up->fields_buf_137 = F->saved_fields_2338;
F->up->in_func_138 = G_NV(F->saved_in_2339);
F->up->func_sym_142 = F->saved_sym_2340;
F->up->exits_145 = F->saved_exits_2341;
F->up->frames_150 = G_NV(F->saved_frames_2342);
F->up->handlers_153 = F->saved_handlers_2343;
F->up->cleanups_154 = F->saved_cleanups_2344;
F->up->pure_sym_228 = F->saved_pure_2348;
F->up->pure_depth_229 = G_NV(F->saved_pdepth_2350);
F->up->body_labels_191 = F->saved_labels_2345;
F->up->handler_exits_194 = F->saved_hx_2346;
F->up->handler_depth_195 = G_NV(F->saved_hd_2347);
F->up->cur_body_217 = F->saved_body_2336;
ret_:

  return;
}

static void f_gen_statements_731(struct f_greenc_1fr *up_, P174 stmts_730) {
  struct f_gen_statements_731fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_730 = stmts_730;
F->s_2362 = NULL;
F->s_2362 = F->stmts_730;
while ((F->s_2362 != NULL)) {
f_gen_statement_747(F->up, F->s_2362);
F->s_2362 = (*(P174)rt_nil_check(F->s_2362)).next_;
}
L_end_2363: ;
ret_:

  return;
}

static void f_pop_frames_733(struct f_greenc_1fr *up_, rt_int upto_732) {
  struct f_pop_frames_733fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_732 = upto_732;
F->i_2364 = INT64_MIN;
F->i_2364 = G_NV(F->up->frames_150);
F->c_2365 = NULL;
F->c_2365 = F->up->cleanups_154;
while ((G_NV(F->i_2364) > F->upto_732)) {
f_emit_266(F->up, (*(P140)rt_nil_check((*(P151)rt_nil_check(F->c_2365)).s_)));
F->c_2365 = (*(P151)rt_nil_check(F->c_2365)).next_;
F->i_2364 = rt_sub(G_NV(F->i_2364), ((rt_int)1LL));
}
L_end_2366: ;
ret_:

  return;
}

static void f_push_cleanup_735(struct f_greenc_1fr *up_, rt_gstr s_734) {
  struct f_push_cleanup_735fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_734 = cp_rt_gstr(s_734);
F->up->cleanups_154 = ({ R152 *cell2367 = rt_alloc(sizeof(R152)); *cell2367 = cp_R152(({ R152 ag2368; ag2368.s_ = NULL; ag2368.next_ = F->up->cleanups_154; ag2368; })); (P151)cell2367; });
(*(P151)rt_nil_check(F->up->cleanups_154)).s_ = f_mk_239(F->up, F->s_734);
F->up->frames_150 = rt_add(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_736(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_736fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_154 = (*(P151)rt_nil_check(F->up->cleanups_154)).next_;
F->up->frames_150 = rt_sub(G_NV(F->up->frames_150), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_741(struct f_greenc_1fr *up_, P174 decls_737, P174 stmts_738, P174 hs_739, rt_int line_740) {
  struct f_guarded_741fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_737 = decls_737;
F->stmts_738 = stmts_738;
F->hs_739 = hs_739;
F->line_740 = line_740;
F->saved_hx_2369 = NULL;
F->f_2370 = NULL;
F->x_2371 = NULL;
F->h_2372 = NULL;
F->n_2373 = NULL;
F->first_2374 = INT_MIN;
F->first_2374 = 1;
F->has_others_2375 = INT_MIN;
F->has_others_2375 = 0;
F->conds_2376 = NULL;
if ((F->hs_739 == NULL)) {
f_decl_elements_669(F->up, F->decls_737);
f_gen_statements_731(F->up, F->stmts_738);
goto ret_;
}
f_new_name_242(F->up, rt_g_lit("xf", 2), &F->f_2370);
f_new_name_242(F->up, rt_g_lit("x", 1), &F->x_2371);
f_push_cleanup_735(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2370))), rt_g_lit(");", 2)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P140)rt_nil_check(F->f_2370))), one_rt_gstr(59)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->f_2370))), rt_g_lit(")) {", 4)));
f_decl_elements_669(F->up, F->decls_737);
f_gen_statements_731(F->up, F->stmts_738);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2370))), rt_g_lit(");", 2)));
f_emit_266(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_736(F->up);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->f_2370))), rt_g_lit(");", 2)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->x_2371))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P140)rt_nil_check(F->x_2371))), rt_g_lit(");", 2)));
F->up->handlers_153 = ({ R152 *cell2377 = rt_alloc(sizeof(R152)); *cell2377 = cp_R152(({ R152 ag2378; ag2378.s_ = F->x_2371; ag2378.next_ = F->up->handlers_153; ag2378; })); (P151)cell2377; });
F->h_2372 = F->hs_739;
while ((F->h_2372 != NULL)) {
F->n_2373 = (*(P174)rt_nil_check(F->h_2372)).a_;
F->conds_2376 = f_mk_239(F->up, rt_g_lit("0", 1));
while ((F->n_2373 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2373)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2375 = 1;
F->conds_2376 = f_mk_239(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_226 = (*(P174)rt_nil_check(F->n_2373)).tag_;
f_exc_id_745(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_2373)).name_)), G_NV((*(P174)rt_nil_check(F->h_2372)).line_), &F->f_2370);
F->conds_2376 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2376)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->x_2371))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->f_2370))));
}
F->n_2373 = (*(P174)rt_nil_check(F->n_2373)).next_;
}
L_end_2380: ;
if (G_NV(F->first_2374)) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2376))), rt_g_lit(") {", 3)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2376))), rt_g_lit(") {", 3)));
}
F->first_2374 = 0;
F->saved_hx_2369 = F->up->handler_exits_194;
F->up->handler_exits_194 = F->up->exits_145;
F->up->handler_depth_195 = rt_add(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->h_2372)).b_);
F->up->handler_depth_195 = rt_sub(G_NV(F->up->handler_depth_195), ((rt_int)1LL));
F->up->handler_exits_194 = F->saved_hx_2369;
F->h_2372 = (*(P174)rt_nil_check(F->h_2372)).next_;
}
L_end_2379: ;
if ((!G_NV(F->has_others_2375))) {
f_emit_266(F->up, rt_g_lit("} else {", 8));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2371))), rt_g_lit(");", 2)));
}
f_emit_266(F->up, rt_g_lit("}", 1));
F->up->handlers_153 = (*(P151)rt_nil_check(F->up->handlers_153)).next_;
f_emit_266(F->up, rt_g_lit("}", 1));
f_emit_266(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_745(struct f_greenc_1fr *up_, rt_gstr name_742, rt_int line_743, P140 *r_744) {
  struct f_exc_id_745fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_742 = cp_rt_gstr(name_742);
F->line_743 = line_743;
F->r_744 = r_744;
F->y_2381 = NULL;
F->y_2381 = f_lookup_435(F->up, F->name_742);
if ((F->up->prefix_hint_226 != NULL)) {
F->y_2381 = f_member_of_1089(F->up, (*(P140)rt_nil_check(F->up->prefix_hint_226)), F->name_742, F->line_743);
F->up->prefix_hint_226 = NULL;
}
if (((F->y_2381 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2381)).kind_) != ((rt_int)6LL)))) {
f_fail_260(F->up, F->line_743, cat_rt_gstr(F->name_742, rt_g_lit(" is not an exception", 20)));
}
(*F->r_744) = (*(P117)rt_nil_check(F->y_2381)).cname_;
ret_:

  return;
}

static void f_gen_statement_747(struct f_greenc_1fr *up_, P174 s_746) {
  struct f_gen_statement_747fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_746 = s_746;
F->t_2382 = NULL;
F->vt_2383 = NULL;
F->c_2384 = NULL;
F->lv_2385 = NULL;
F->v_2386 = NULL;
F->x_2387 = NULL;
F->ro_2388 = INT_MIN;
{ rt_int sel2389 = G_NV((*(P174)rt_nil_check(F->s_746)).kind_);
if (0 || sel2389 == ((rt_int)20LL)) {
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_746)).a_)).kind_) == ((rt_int)8LL)) && ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_746)).a_)).b_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_746)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_746)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_749(F->up, F->s_746);
goto ret_;
}
F->up->in_lv_path_231 = 1;
F->up->last_deref_232 = 0;
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->s_746)).a_, &F->lv_2385, &F->t_2382, &F->c_2384, &F->ro_2388);
 (void)rt_range(F->ro_2388, 0, 1);
F->up->in_lv_path_231 = 0;
if (G_NV(F->ro_2388)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_746)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1271(F->up, (*(P174)rt_nil_check(F->s_746)).a_, G_NV((*(P174)rt_nil_check(F->s_746)).line_));
if (f_restricted_here_576(F->up, F->t_2382)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_746)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_792(F->up, (*(P174)rt_nil_check(F->s_746)).b_)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_746)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_230 = 1;
if (((G_NV((*(P122)rt_nil_check(F->t_2382)).kind_) == ((rt_int)6LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_746)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_181 = F->lv_2385;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_746)).b_, F->t_2382, &F->vt_2383, &F->v_2386);
F->up->agg_bounds_181 = NULL;
F->up->vrp_ok_230 = 0;
f_check_type_500(F->up, F->vt_2383, F->t_2382, G_NV((*(P174)rt_nil_check(F->s_746)).line_));
f_assign_code_633(F->up, (*(P140)rt_nil_check(F->lv_2385)), F->t_2382, (*(P140)rt_nil_check(F->v_2386)), F->c_2384, &F->x_2387);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2387)));
} else if (0 || sel2389 == ((rt_int)21LL)) {
F->up->vrp_ok_230 = 1;
f_gen_call_751(F->up, F->s_746);
F->up->vrp_ok_230 = 0;
} else if (0 || sel2389 == ((rt_int)22LL)) {
f_gen_if_753(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)23LL)) {
f_gen_case_755(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)24LL)) {
f_gen_loop_767(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)25LL)) {
f_gen_block_769(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)26LL)) {
f_gen_exit_774(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)27LL)) {
f_gen_return_776(F->up, F->s_746);
} else if (0 || sel2389 == ((rt_int)28LL)) {
if (((((*(P174)rt_nil_check(F->s_746)).tag_ != NULL) && f_is_task_name_1162(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_746)).tag_)))) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_746)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1212(F->up, F->s_746);
} else {
F->up->prefix_hint_226 = (*(P174)rt_nil_check(F->s_746)).tag_;
f_exc_id_745(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_746)).name_)), G_NV((*(P174)rt_nil_check(F->s_746)).line_), &F->x_2387);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check(F->x_2387))), rt_g_lit(");", 2)));
}
} else if (0 || sel2389 == ((rt_int)29LL)) {
if ((F->up->handlers_153 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_746)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->up->handlers_153)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2389 == ((rt_int)30LL)) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->s_746)).a_, F->up->ty_bool_157, &F->vt_2383, &F->v_2386);
f_check_type_500(F->up, F->vt_2383, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_746)).line_));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P140)rt_nil_check(F->v_2386))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2389 == ((rt_int)31LL)) {
} else if (0 || sel2389 == ((rt_int)57LL)) {
f_gen_label_709(F->up, F->s_746, 0);
} else if (0 || sel2389 == ((rt_int)58LL)) {
f_gen_label_709(F->up, F->s_746, 1);
} else {
f_task_statement_gen_1266(F->up, F->s_746);
}
}
ret_:

  return;
}

static void f_slice_assign_749(struct f_greenc_1fr *up_, P174 s_748) {
  struct f_slice_assign_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_748 = s_748;
F->lv_2390 = NULL;
F->v_2391 = NULL;
F->sl_2392 = NULL;
F->x_2393 = NULL;
F->t_2394 = NULL;
F->st_2395 = NULL;
F->vt_2396 = NULL;
F->c_2397 = NULL;
F->ro_2398 = INT_MIN;
F->up->in_lv_path_231 = 1;
F->up->last_deref_232 = 0;
f_lvalue_798(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->s_748)).a_)).a_, &F->lv_2390, &F->t_2394, &F->c_2397, &F->ro_2398);
 (void)rt_range(F->ro_2398, 0, 1);
F->up->in_lv_path_231 = 0;
if (G_NV(F->ro_2398)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_748)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1271(F->up, (*(P174)rt_nil_check(F->s_748)).a_, G_NV((*(P174)rt_nil_check(F->s_748)).line_));
F->ro_2398 = 0;
f_index_on_816(F->up, (*(P140)rt_nil_check(F->lv_2390)), F->t_2394, (*(P174)rt_nil_check(F->s_748)).a_, &F->ro_2398, 0, &F->sl_2392, &F->st_2395, &F->c_2397);
 (void)rt_range(F->ro_2398, 0, 1);
F->up->vrp_ok_230 = 1;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_748)).b_, F->st_2395, &F->vt_2396, &F->v_2391);
F->up->vrp_ok_230 = 0;
f_check_type_500(F->up, F->vt_2396, F->st_2395, G_NV((*(P174)rt_nil_check(F->s_748)).line_));
f_ctype_505(F->up, F->st_2395, &F->x_2393);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2393))), rt_g_lit(" sl_ = ", 7)), (*(P140)rt_nil_check(F->sl_2392))), rt_g_lit("; as_", 5)), (*(P140)rt_nil_check(F->x_2393))), rt_g_lit("(&sl_, ", 7)), (*(P140)rt_nil_check(F->v_2391))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_751(struct f_greenc_1fr *up_, P174 s_750) {
  struct f_gen_call_751fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_750 = s_750;
F->c_2399 = NULL;
F->c_2399 = (*(P174)rt_nil_check(F->s_750)).a_;
F->t_2400 = NULL;
F->v_2401 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->c_2399)).kind_) == ((rt_int)5LL)) || (G_NV((*(P174)rt_nil_check(F->c_2399)).kind_) == ((rt_int)9LL)))) {
F->c_2399 = f_nn_313(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->s_750)).line_));
(*(P174)rt_nil_check(F->c_2399)).a_ = (*(P174)rt_nil_check(F->s_750)).a_;
}
if ((G_NV((*(P174)rt_nil_check(F->c_2399)).kind_) != ((rt_int)8LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_750)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_196 = NULL;
f_gcall_1049(F->up, F->c_2399, 1, &F->t_2400, &F->v_2401);
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->v_2401)), one_rt_gstr(59)));
if ((F->up->post_checks_196 != NULL)) {
f_emit_266(F->up, (*(P140)rt_nil_check(F->up->post_checks_196)));
F->up->post_checks_196 = NULL;
}
ret_:

  return;
}

static void f_gen_if_753(struct f_greenc_1fr *up_, P174 s_752) {
  struct f_gen_if_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_752 = s_752;
F->a_2402 = NULL;
F->a_2402 = (*(P174)rt_nil_check(F->s_752)).a_;
F->first_2403 = INT_MIN;
F->first_2403 = 1;
F->t_2404 = NULL;
F->v_2405 = NULL;
while ((F->a_2402 != NULL)) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->a_2402)).a_, F->up->ty_bool_157, &F->t_2404, &F->v_2405);
f_check_type_500(F->up, F->t_2404, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_752)).line_));
if (G_NV(F->first_2403)) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2405))), rt_g_lit(") {", 3)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->v_2405))), rt_g_lit(") {", 3)));
}
F->first_2403 = 0;
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->a_2402)).b_);
F->a_2402 = (*(P174)rt_nil_check(F->a_2402)).next_;
}
L_end_2406: ;
if ((G_NV((*(P174)rt_nil_check(F->s_752)).flag_) == ((rt_int)1LL))) {
f_emit_266(F->up, rt_g_lit("} else {", 8));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_752)).b_);
}
f_emit_266(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_755(struct f_greenc_1fr *up_, P174 s_754) {
  struct f_gen_case_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_754 = s_754;
F->st_2407 = NULL;
F->vt_2408 = NULL;
F->first_2409 = INT_MIN;
F->first_2409 = 1;
F->a_2410 = NULL;
F->a_2410 = (*(P174)rt_nil_check(F->s_754)).b_;
F->lab_2411 = NULL;
F->sel_2412 = NULL;
F->tmp_2413 = NULL;
F->ct_2414 = NULL;
F->conds_2415 = NULL;
F->v_2416 = NULL;
F->lo_2417 = NULL;
F->hi_2418 = NULL;
F->clo_2420.lo = ((rt_int)1LL); F->clo_2420.hi = ((rt_int)2000LL);
F->clo_2420.lo2 = 1; F->clo_2420.hi2 = 1;
F->clo_2420.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2420));
for (rt_int i2421 = 0; i2421 < G_CNT(F->clo_2420); i2421++) F->clo_2420.p[i2421] = INT64_MIN;
F->chi_2422.lo = ((rt_int)1LL); F->chi_2422.hi = ((rt_int)2000LL);
F->chi_2422.lo2 = 1; F->chi_2422.hi2 = 1;
F->chi_2422.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2422));
for (rt_int i2423 = 0; i2423 < G_CNT(F->chi_2422); i2423++) F->chi_2422.p[i2423] = INT64_MIN;
F->nc_2424 = INT64_MIN;
F->nc_2424 = ((rt_int)0LL);
F->vlo_2425 = INT64_MIN;
F->vhi_2426 = INT64_MIN;
F->total_2427 = INT64_MIN;
F->ok_2428 = INT_MIN;
F->ok2_2429 = INT_MIN;
F->y_2430 = NULL;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_754)).a_, NULL, &F->st_2407, &F->sel_2412);
if ((!f_is_discrete_466(F->up, F->st_2407))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_242(F->up, rt_g_lit("sel", 3), &F->tmp_2413);
f_ctype_505(F->up, F->st_2407, &F->ct_2414);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->ct_2414))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->sel_2412))), one_rt_gstr(59)));
while ((F->a_2410 != NULL)) {
F->lab_2411 = (*(P174)rt_nil_check(F->a_2410)).a_;
F->conds_2415 = f_mk_239(F->up, rt_g_lit("0", 1));
while ((F->lab_2411 != NULL)) {
F->y_2430 = NULL;
if ((((*(P174)rt_nil_check(F->lab_2411)).b_ == NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2411)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2430 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2411)).a_)).name_)));
if (((F->y_2430 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2430)).kind_) != ((rt_int)5LL)))) {
F->y_2430 = NULL;
}
}
if ((F->y_2430 != NULL)) {
f_check_type_500(F->up, (*(P117)rt_nil_check(F->y_2430)).t_, F->st_2407, G_NV((*(P174)rt_nil_check(F->s_754)).line_));
if ((!f_static_bounds_492(F->up, (*(P117)rt_nil_check(F->y_2430)).c_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2411)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2425 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2430)).c_)).mlo_);
F->vhi_2426 = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2430)).c_)).mhi_);
F->conds_2415 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2415)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2430)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2430)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P174)rt_nil_check(F->lab_2411)).b_ == NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->lab_2411)).a_, F->st_2407, &F->vt_2408, &F->v_2416);
f_check_type_500(F->up, F->vt_2408, F->st_2407, G_NV((*(P174)rt_nil_check(F->s_754)).line_));
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2411)).a_, &F->vlo_2425, &F->ok_2428);
 (void)rt_range(F->ok_2428, 0, 1);
if ((!G_NV(F->ok_2428))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2426 = G_NV(F->vlo_2425);
F->conds_2415 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2415)), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->v_2416))));
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->lab_2411)).a_, F->st_2407, &F->vt_2408, &F->lo_2417);
f_check_type_500(F->up, F->vt_2408, F->st_2407, G_NV((*(P174)rt_nil_check(F->s_754)).line_));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->lab_2411)).b_, F->st_2407, &F->vt_2408, &F->hi_2418);
f_check_type_500(F->up, F->vt_2408, F->st_2407, G_NV((*(P174)rt_nil_check(F->s_754)).line_));
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2411)).a_, &F->vlo_2425, &F->ok_2428);
 (void)rt_range(F->ok_2428, 0, 1);
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2411)).b_, &F->vhi_2426, &F->ok2_2429);
 (void)rt_range(F->ok2_2429, 0, 1);
if ((!(G_NV(F->ok_2428) && G_NV(F->ok2_2429)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2415 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->conds_2415)), rt_g_lit(" || (", 5)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2417))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->tmp_2413))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hi_2418))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2425) <= G_NV(F->vhi_2426))) {
{ rt_int lo2435 = ((rt_int)1LL), hi2436 = G_NV(F->nc_2424);
for (rt_int it2437 = lo2435; it2437 <= hi2436; it2437++) {
F->k_2434 = it2437;
if (((G_NV(F->vlo_2425) <= G_NV(({ A2419 ix2438 = F->chi_2422; ix2438.p[rt_index(F->k_2434, ix2438.lo, ix2438.hi) - ix2438.lo]; }))) && (G_NV(({ A2419 ix2439 = F->clo_2420; ix2439.p[rt_index(F->k_2434, ix2439.lo, ix2439.hi) - ix2439.lo]; })) <= G_NV(F->vhi_2426)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2433: ;
if ((G_NV(F->nc_2424) < ((rt_int)2000LL))) {
F->nc_2424 = rt_add(G_NV(F->nc_2424), ((rt_int)1LL));
(*({ A2419 *ix2440 = &(F->clo_2420); &ix2440->p[rt_index(G_NV(F->nc_2424), ix2440->lo, ix2440->hi) - ix2440->lo]; })) = G_NV(F->vlo_2425);
(*({ A2419 *ix2441 = &(F->chi_2422); &ix2441->p[rt_index(G_NV(F->nc_2424), ix2441->lo, ix2441->hi) - ix2441->lo]; })) = G_NV(F->vhi_2426);
}
}
F->lab_2411 = (*(P174)rt_nil_check(F->lab_2411)).next_;
}
L_end_2432: ;
if (G_NV(F->first_2409)) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->conds_2415))), rt_g_lit(") {", 3)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->conds_2415))), rt_g_lit(") {", 3)));
}
F->first_2409 = 0;
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->a_2410)).b_);
F->a_2410 = (*(P174)rt_nil_check(F->a_2410)).next_;
}
L_end_2431: ;
if ((G_NV((*(P174)rt_nil_check(F->s_754)).flag_) != ((rt_int)1LL))) {
f_selector_range_761(F->up, (*(P174)rt_nil_check(F->s_754)).a_, F->st_2407, &F->vlo_2425, &F->vhi_2426, &F->ok_2428);
 (void)rt_range(F->ok_2428, 0, 1);
if ((!G_NV(F->ok_2428))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_496(F->up, F->st_2407)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2427 = ((rt_int)0LL);
{ rt_int lo2444 = ((rt_int)1LL), hi2445 = G_NV(F->nc_2424);
for (rt_int it2446 = lo2444; it2446 <= hi2445; it2446++) {
F->k_2443 = it2446;
if (((G_NV(({ A2419 ix2447 = F->clo_2420; ix2447.p[rt_index(F->k_2443, ix2447.lo, ix2447.hi) - ix2447.lo]; })) < G_NV(F->vlo_2425)) || (G_NV(({ A2419 ix2448 = F->chi_2422; ix2448.p[rt_index(F->k_2443, ix2448.lo, ix2448.hi) - ix2448.lo]; })) > G_NV(F->vhi_2426)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_496(F->up, F->st_2407)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2427 = rt_add(G_NV(F->total_2427), rt_add(rt_sub(G_NV(({ A2419 ix2449 = F->chi_2422; ix2449.p[rt_index(F->k_2443, ix2449.lo, ix2449.hi) - ix2449.lo]; })), G_NV(({ A2419 ix2450 = F->clo_2420; ix2450.p[rt_index(F->k_2443, ix2450.lo, ix2450.hi) - ix2450.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2442: ;
if ((G_NV(F->total_2427) != rt_add(rt_sub(G_NV(F->vhi_2426), G_NV(F->vlo_2425)), ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_754)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_496(F->up, F->st_2407)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2409)) {
f_emit_266(F->up, rt_g_lit("{", 1));
} else {
f_emit_266(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P174)rt_nil_check(F->s_754)).flag_) == ((rt_int)1LL))) {
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_754)).c_);
} else {
f_emit_266(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_266(F->up, rt_g_lit("}", 1));
f_emit_266(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_761(struct f_greenc_1fr *up_, P174 e_756, P122 t_757, rt_int *lo_758, rt_int *hi_759, int *ok_760) {
  struct f_selector_range_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_756 = e_756;
F->t_757 = t_757;
F->lo_758 = lo_758;
F->hi_759 = hi_759;
F->ok_760 = ok_760;
F->y_2451 = NULL;
(*F->ok_760) = 0;
(*F->lo_758) = ((rt_int)0LL);
(*F->hi_759) = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_756)).kind_) == ((rt_int)5LL))) {
F->y_2451 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_756)).name_)));
if ((((F->y_2451 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2451)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2451)).kind_) == ((rt_int)2LL)))) && f_static_bounds_492(F->up, (*(P117)rt_nil_check(F->y_2451)).c_))) {
(*F->lo_758) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2451)).c_)).mlo_);
(*F->hi_759) = G_NV((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_2451)).c_)).mhi_);
(*F->ok_760) = 1;
goto ret_;
}
}
if ((G_NV((*(P122)rt_nil_check(F->t_757)).kind_) == ((rt_int)2LL))) {
(*F->hi_759) = ((rt_int)1LL);
(*F->ok_760) = 1;
} else if (((G_NV((*(P122)rt_nil_check(F->t_757)).kind_) == ((rt_int)11LL)) && ((*(P122)rt_nil_check(F->t_757)).tcons_ == NULL))) {
(*F->hi_759) = ((rt_int)127LL);
(*F->ok_760) = 1;
} else if ((G_NV((*(P122)rt_nil_check(F->t_757)).kind_) == ((rt_int)4LL))) {
(*F->hi_759) = rt_sub(f_list_len_319(F->up, (*(P122)rt_nil_check(F->t_757)).lits_), ((rt_int)1LL));
(*F->ok_760) = 1;
} else if (f_static_bounds_492(F->up, (*(P122)rt_nil_check(F->t_757)).tcons_)) {
(*F->lo_758) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_757)).tcons_)).mlo_);
(*F->hi_759) = G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_757)).tcons_)).mhi_);
(*F->ok_760) = 1;
}
ret_:

  return;
}

static void f_push_exit_765(struct f_greenc_1fr *up_, P140 match_762, int is_loop_763, P140 *label_764) {
  struct f_push_exit_765fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_762 = match_762;
F->is_loop_763 = is_loop_763;
F->label_764 = label_764;
f_new_name_242(F->up, rt_g_lit("L_end_", 6), &(*F->label_764));
F->up->exits_145 = ({ R144 *cell2452 = rt_alloc(sizeof(R144)); *cell2452 = cp_R144(({ R144 ag2453; ag2453.match_ = F->match_762; ag2453.label_ = (*F->label_764); ag2453.depth_ = G_NV(F->up->frames_150); ag2453.is_loop_ = F->is_loop_763; ag2453.next_ = F->up->exits_145; ag2453; })); (P143)cell2452; });
ret_:

  return;
}

static void f_gen_loop_767(struct f_greenc_1fr *up_, P174 s_766) {
  struct f_gen_loop_767fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_766 = s_766;
F->t_2454 = NULL;
F->vt_2455 = NULL;
F->c_2456 = NULL;
F->label_2457 = NULL;
F->cond_2458 = NULL;
F->acc_2459 = NULL;
F->lov_2460 = NULL;
F->hiv_2461 = NULL;
F->it_2462 = NULL;
F->y_2463 = NULL;
F->r_2464 = NULL;
f_push_exit_765(F->up, (*(P174)rt_nil_check(F->s_766)).tag_, 1, &F->label_2457);
if ((G_NV((*(P174)rt_nil_check(F->s_766)).flag_) == ((rt_int)0LL))) {
f_emit_266(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_766)).b_);
f_emit_266(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P174)rt_nil_check(F->s_766)).flag_) == ((rt_int)1LL))) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->s_766)).a_, F->up->ty_bool_157, &F->vt_2455, &F->cond_2458);
f_check_type_500(F->up, F->vt_2455, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_766)).line_));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P140)rt_nil_check(F->cond_2458))), rt_g_lit(") {", 3)));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_766)).b_);
f_emit_266(F->up, rt_g_lit("}", 1));
} else {
F->r_2464 = (*(P174)rt_nil_check(F->s_766)).a_;
F->c_2456 = f_new_cons_486(F->up);
if ((G_NV((*(P174)rt_nil_check(F->r_2464)).kind_) == ((rt_int)14LL))) {
f_range_bounds_837(F->up, (*(P174)rt_nil_check(F->r_2464)).a_, (*(P174)rt_nil_check(F->r_2464)).b_, NULL, G_NV((*(P174)rt_nil_check(F->s_766)).line_), &F->t_2454, &(*(P178)rt_nil_check(F->c_2456)).lo_, &(*(P178)rt_nil_check(F->c_2456)).hi_);
} else {
f_resolve_521(F->up, F->r_2464, &F->t_2454, &F->c_2456);
if (((*(P178)rt_nil_check(F->c_2456)).lo_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_766)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P122)rt_nil_check(F->t_2454)).kind_) != ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->t_2454)).kind_) != ((rt_int)4LL))) && (G_NV((*(P122)rt_nil_check(F->t_2454)).kind_) != ((rt_int)11LL))) && (G_NV((*(P122)rt_nil_check(F->t_2454)).kind_) != ((rt_int)2LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_766)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_766)).name_)), F->t_2454, &F->acc_2459);
f_new_name_242(F->up, rt_g_lit("lo", 2), &F->lov_2460);
f_new_name_242(F->up, rt_g_lit("hi", 2), &F->hiv_2461);
f_new_name_242(F->up, rt_g_lit("it", 2), &F->it_2462);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P140)rt_nil_check(F->lov_2460))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2456)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hiv_2461))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2456)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P174)rt_nil_check(F->s_766)).ival_) == ((rt_int)1LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->hiv_2461))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lov_2460))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit("--) {", 5)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lov_2460))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit(" <= ", 4)), (*(P140)rt_nil_check(F->hiv_2461))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->it_2462))), rt_g_lit("++) {", 5)));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_2459)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->it_2462))), one_rt_gstr(59)));
f_open_scope_479(F->up);
F->y_2463 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->s_766)).name_);
(*(P117)rt_nil_check(F->y_2463)).t_ = F->t_2454;
(*(P117)rt_nil_check(F->y_2463)).ro_ = 1;
f_bind_655(F->up, F->y_2463, F->acc_2459);
f_define_478(F->up, F->y_2463, G_NV((*(P174)rt_nil_check(F->s_766)).line_));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_766)).b_);
f_close_scope_480(F->up);
f_emit_266(F->up, rt_g_lit("}", 1));
f_emit_266(F->up, rt_g_lit("}", 1));
}
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2457)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_769(struct f_greenc_1fr *up_, P174 s_768) {
  struct f_gen_block_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_768 = s_768;
F->label_2465 = NULL;
F->aw_2466 = NULL;
f_push_exit_765(F->up, (*(P174)rt_nil_check(F->s_768)).tag_, 0, &F->label_2465);
f_emit_266(F->up, rt_g_lit("{", 1));
f_open_scope_479(F->up);
if (((*(P174)rt_nil_check(F->s_768)).tag_ != NULL)) {
f_push_unit_448(F->up, (*(P174)rt_nil_check(F->s_768)).tag_);
}
f_guarded_741(F->up, (*(P174)rt_nil_check(F->s_768)).a_, (*(P174)rt_nil_check(F->s_768)).b_, (*(P174)rt_nil_check(F->s_768)).c_, G_NV((*(P174)rt_nil_check(F->s_768)).line_));
f_task_awaits_1210(F->up, (*(P174)rt_nil_check(F->s_768)).a_, &F->aw_2466);
f_emit_266(F->up, (*(P140)rt_nil_check(F->aw_2466)));
if (((*(P174)rt_nil_check(F->s_768)).tag_ != NULL)) {
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
}
f_close_scope_480(F->up);
f_emit_266(F->up, rt_g_lit("}", 1));
F->up->exits_145 = (*(P143)rt_nil_check(F->up->exits_145)).next_;
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->label_2465)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_772(struct f_greenc_1fr *up_, P174 s_770, P143 x_771) {
  struct f_exit_matches_772fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_770 = s_770;
F->x_771 = x_771;
if (((*(P174)rt_nil_check(F->s_770)).name_ == NULL)) {
F->result_ = G_NV((*(P143)rt_nil_check(F->x_771)).is_loop_);
goto ret_;
} else if (((*(P143)rt_nil_check(F->x_771)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_771)).match_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_770)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_774(struct f_greenc_1fr *up_, P174 s_773) {
  struct f_gen_exit_774fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_773 = s_773;
F->x_2467 = NULL;
F->x_2467 = F->up->exits_145;
F->t_2468 = NULL;
F->v_2469 = NULL;
while ((F->x_2467 != NULL)) {
if (((G_NV(F->up->accept_depth_212) > ((rt_int)0LL)) && (F->x_2467 == F->up->accept_exits_149))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_773)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_195) > ((rt_int)0LL)) && (F->x_2467 == F->up->handler_exits_194))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_773)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_772(F->up, F->s_773, F->x_2467)) {
if ((!G_NV((*(P143)rt_nil_check(F->x_2467)).is_loop_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_773)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_773)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P174)rt_nil_check(F->s_773)).a_ != NULL)) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->s_773)).a_, F->up->ty_bool_157, &F->t_2468, &F->v_2469);
f_check_type_500(F->up, F->t_2468, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->s_773)).line_));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->v_2469))), rt_g_lit(") {", 3)));
}
f_pop_frames_733(F->up, G_NV((*(P143)rt_nil_check(F->x_2467)).depth_));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P140)rt_nil_check((*(P143)rt_nil_check(F->x_2467)).label_))), one_rt_gstr(59)));
if (((*(P174)rt_nil_check(F->s_773)).a_ != NULL)) {
f_emit_266(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2467 = (*(P143)rt_nil_check(F->x_2467)).next_;
}
L_end_2470: ;
if (((*(P174)rt_nil_check(F->s_773)).name_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_773)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_773)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_773)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_776(struct f_greenc_1fr *up_, P174 s_775) {
  struct f_gen_return_776fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_775 = s_775;
F->vt_2471 = NULL;
F->v_2472 = NULL;
F->x_2473 = NULL;
if ((!G_NV(F->up->in_func_138))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_775)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_212) > ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_775)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P174)rt_nil_check(F->s_775)).a_ != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_775)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_733(F->up, ((rt_int)0LL));
f_emit_266(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P174)rt_nil_check(F->s_775)).a_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_775)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_775)).a_, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, &F->vt_2471, &F->v_2472);
f_check_type_500(F->up, F->vt_2471, (*(P117)rt_nil_check(F->up->func_sym_142)).result_, G_NV((*(P174)rt_nil_check(F->s_775)).line_));
if (((f_is_numeric_464(F->up, F->vt_2471) || f_is_discrete_466(F->up, F->vt_2471)) && f_bounded_488(F->up, (*(P117)rt_nil_check(F->up->func_sym_142)).c_))) {
f_assign_code_633(F->up, rt_g_lit("F->result_", 10), F->vt_2471, (*(P140)rt_nil_check(F->v_2472)), (*(P117)rt_nil_check(F->up->func_sym_142)).c_, &F->x_2473);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2473)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P140)rt_nil_check(F->v_2472))), one_rt_gstr(59)));
}
f_pop_frames_733(F->up, ((rt_int)0LL));
f_emit_266(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_779(struct f_greenc_1fr *up_, P117 y_777, P140 *r_778) {
  struct f_access_of_779fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_777 = y_777;
F->r_778 = r_778;
F->p_2474 = NULL;
if ((G_NV((*(P117)rt_nil_check(F->y_777)).level_) <= ((rt_int)0LL))) {
(*F->r_778) = (*(P117)rt_nil_check(F->y_777)).access_path_;
goto ret_;
}
F->p_2474 = f_mk_239(F->up, rt_g_lit("F", 1));
{ rt_int lo2477 = ((rt_int)1LL), hi2478 = rt_sub(G_NV(F->up->cur_level_139), G_NV((*(P117)rt_nil_check(F->y_777)).level_));
for (rt_int it2479 = lo2477; it2479 <= hi2478; it2479++) {
F->i_2476 = it2479;
F->p_2474 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2474)), rt_g_lit("->up", 4)));
}
}
L_end_2475: ;
if (G_NV((*(P117)rt_nil_check(F->y_777)).byref_)) {
(*F->r_778) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->p_2474))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_777)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_778) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_2474)), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_777)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_782(struct f_greenc_1fr *up_, rt_int l_780, P140 *r_781) {
  struct f_link_to_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_780 = l_780;
F->r_781 = r_781;
(*F->r_781) = f_mk_239(F->up, rt_g_lit("F", 1));
{ rt_int lo2482 = ((rt_int)1LL), hi2483 = rt_sub(G_NV(F->up->cur_level_139), F->l_780);
for (rt_int it2484 = lo2482; it2484 <= hi2483; it2484++) {
F->i_2481 = it2484;
(*F->r_781) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_781))), rt_g_lit("->up", 4)));
}
}
L_end_2480: ;
ret_:

  return;
}

static rt_gstr f_c_ident_784(struct f_greenc_1fr *up_, rt_gstr s_783) {
  struct f_c_ident_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_783 = cp_rt_gstr(s_783);
if (eq_rt_gstr(F->s_783, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_783, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_250(F->up, F->s_783);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_788(struct f_greenc_1fr *up_, rt_gstr base_785, P122 t_786, P140 *r_787) {
  struct f_deref_788fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_785 = cp_rt_gstr(base_785);
F->t_786 = t_786;
F->r_787 = r_787;
F->ct_2485 = NULL;
if (G_NV(F->up->in_lv_path_231)) {
F->up->last_deref_232 = 1;
}
f_ctype_505(F->up, F->t_786, &F->ct_2485);
(*F->r_787) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P140)rt_nil_check(F->ct_2485))), rt_g_lit(")rt_nil_check(", 14)), F->base_785), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_790(struct f_greenc_1fr *up_, P174 e_789) {
  struct f_is_object_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_789 = e_789;
F->y_2486 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_789)).kind_) == ((rt_int)5LL))) {
F->y_2486 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_789)).name_)));
if ((!(F->y_2486 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2486)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2486)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_789)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_790(F->up, (*(P174)rt_nil_check(F->e_789)).a_);
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_789)).kind_) == ((rt_int)8LL))) {
if ((((*(P174)rt_nil_check(F->e_789)).b_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_789)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_790(F->up, (*(P174)rt_nil_check(F->e_789)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_792(struct f_greenc_1fr *up_, P174 e_791) {
  struct f_is_const_access_792fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_791 = e_791;
F->y_2487 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_791)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2487 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_791)).name_)));
if ((F->y_2487 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P117)rt_nil_check(F->y_2487)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P117)rt_nil_check(F->y_2487)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P117)rt_nil_check(F->y_2487)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2487)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_798(struct f_greenc_1fr *up_, P174 e_793, P140 *code_out_794, P122 *t_795, P178 *c_796, int *ro_797) {
  struct f_lvalue_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_793 = e_793;
F->code_out_794 = code_out_794;
F->t_795 = t_795;
F->c_796 = c_796;
F->ro_797 = ro_797;
F->cp_2488 = INT_MIN;
F->ex_2489 = NULL;
F->y_2490 = NULL;
F->base_2491 = NULL;
F->bt_2492 = NULL;
F->bc_2493 = NULL;
f_expanded_860(F->up, F->e_793, &F->ex_2489);
if ((F->ex_2489 != NULL)) {
f_lvalue_798(F->up, F->ex_2489, &(*F->code_out_794), &(*F->t_795), &(*F->c_796), &(*F->ro_797));
 (void)rt_range((*F->ro_797), 0, 1);
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->e_793)).a_)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_793)).ival_) > ((rt_int)0LL))) {
F->y_2490 = f_lookup_at_444(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_793)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)9LL))) {
F->y_2490 = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->e_793)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)), G_NV((*(P174)rt_nil_check(F->e_793)).line_));
} else {
F->y_2490 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)));
}
if ((F->y_2490 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2490)).kind_) == ((rt_int)12LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2490)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2490)).kind_) != ((rt_int)2LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_793)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_779(F->up, F->y_2490, &(*F->code_out_794));
(*F->t_795) = (*(P117)rt_nil_check(F->y_2490)).t_;
(*F->c_796) = (*(P117)rt_nil_check(F->y_2490)).c_;
(*F->ro_797) = G_NV((*(P117)rt_nil_check(F->y_2490)).ro_);
} else if ((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)15LL))) {
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->e_793)).a_, &(*F->code_out_794), &(*F->t_795), &(*F->c_796), &(*F->ro_797));
 (void)rt_range((*F->ro_797), 0, 1);
} else if ((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)9LL))) {
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->e_793)).a_, &F->base_2491, &F->bt_2492, &F->bc_2493, &(*F->ro_797));
 (void)rt_range((*F->ro_797), 0, 1);
F->cp_2488 = ((G_NV((*(P122)rt_nil_check(F->bt_2492)).kind_) == ((rt_int)8LL)) && f_is_const_access_792(F->up, (*(P174)rt_nil_check(F->e_793)).a_));
f_select_on_807(F->up, (*(P140)rt_nil_check(F->base_2491)), F->bt_2492, F->e_793, &(*F->ro_797), 1, &(*F->code_out_794), &(*F->t_795), &(*F->c_796));
 (void)rt_range((*F->ro_797), 0, 1);
(*F->ro_797) = (G_NV((*F->ro_797)) || G_NV(F->cp_2488));
} else if ((G_NV((*(P174)rt_nil_check(F->e_793)).kind_) == ((rt_int)8LL))) {
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->e_793)).a_, &F->base_2491, &F->bt_2492, &F->bc_2493, &(*F->ro_797));
 (void)rt_range((*F->ro_797), 0, 1);
F->cp_2488 = ((G_NV((*(P122)rt_nil_check(F->bt_2492)).kind_) == ((rt_int)8LL)) && f_is_const_access_792(F->up, (*(P174)rt_nil_check(F->e_793)).a_));
f_index_on_816(F->up, (*(P140)rt_nil_check(F->base_2491)), F->bt_2492, F->e_793, &(*F->ro_797), 1, &(*F->code_out_794), &(*F->t_795), &(*F->c_796));
 (void)rt_range((*F->ro_797), 0, 1);
(*F->ro_797) = (G_NV((*F->ro_797)) || G_NV(F->cp_2488));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_793)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_807(struct f_greenc_1fr *up_, rt_gstr base_799, P122 bt_800, P174 e_801, int *ro_802, int lv_803, P140 *code_out_804, P122 *t_805, P178 *c_806) {
  struct f_select_on_807fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_799 = cp_rt_gstr(base_799);
F->bt_800 = bt_800;
F->e_801 = e_801;
F->ro_802 = ro_802;
F->lv_803 = lv_803;
F->code_out_804 = code_out_804;
F->t_805 = t_805;
F->c_806 = c_806;
F->f_2494 = NULL;
F->d_2495 = NULL;
F->ct_2496 = NULL;
F->tmp_2497 = NULL;
(*F->c_806) = F->up->no_cons_221;
if ((G_NV((*(P122)rt_nil_check(F->bt_800)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_621(F->up, F->bt_800);
f_deref_788(F->up, F->base_799, F->bt_800, &F->d_2495);
(*F->ro_802) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_804) = F->d_2495;
(*F->t_805) = (*(P122)rt_nil_check(F->bt_800)).target_;
goto ret_;
}
f_select_on_807(F->up, (*(P140)rt_nil_check(F->d_2495)), (*(P122)rt_nil_check(F->bt_800)).target_, F->e_801, &(*F->ro_802), 1, &(*F->code_out_804), &(*F->t_805), &(*F->c_806));
 (void)rt_range((*F->ro_802), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_800)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P122)rt_nil_check(F->bt_800)).priv_) && (!f_inside_package_1091(F->up, (*(P122)rt_nil_check(F->bt_800)).decl_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_801)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_496(F->up, F->bt_800)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2494 = (*(P122)rt_nil_check(F->bt_800)).fields_;
while ((F->f_2494 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2494)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)))) {
f_subst_cons_593(F->up, (*(P1962)rt_nil_check(F->f_2494)).c_, F->base_799, &(*F->c_806));
(*F->code_out_804) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(F->base_799, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)))));
(*F->t_805) = (*(P1962)rt_nil_check(F->f_2494)).t_;
if (G_NV((*(P1962)rt_nil_check(F->f_2494)).is_const_)) {
(*F->ro_802) = 1;
}
if (((*(P1962)rt_nil_check(F->f_2494)).cond_ != NULL)) {
f_ctype_505(F->up, F->bt_800, &F->ct_2496);
f_new_name_242(F->up, rt_g_lit("vr", 2), &F->tmp_2497);
if (F->lv_803) {
(*F->code_out_804) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2496))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2497))), rt_g_lit(" = &(", 5)), F->base_799), rt_g_lit("); if (!(", 9)), f_subst_587(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2494)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->tmp_2497))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P140)rt_nil_check(F->tmp_2497))), rt_g_lit("->", 2)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_804) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2496))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2497))), rt_g_lit(" = ", 3)), F->base_799), rt_g_lit("; if (!(", 8)), f_subst_587(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2494)).cond_)), (*(P140)rt_nil_check(F->tmp_2497)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P140)rt_nil_check(F->tmp_2497))), one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2494 = (*(P1962)rt_nil_check(F->f_2494)).next_;
}
L_end_2498: ;
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_801)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_496(F->up, F->bt_800), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_))));
}
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_801)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_801)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_816(struct f_greenc_1fr *up_, rt_gstr base_808, P122 bt_809, P174 e_810, int *ro_811, int lv_812, P140 *code_out_813, P122 *t_814, P178 *c_815) {
  struct f_index_on_816fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_808 = cp_rt_gstr(base_808);
F->bt_809 = bt_809;
F->e_810 = e_810;
F->ro_811 = ro_811;
F->lv_812 = lv_812;
F->code_out_813 = code_out_813;
F->t_814 = t_814;
F->c_815 = c_815;
F->a_2499 = NULL;
F->a_2499 = (*(P174)rt_nil_check(F->e_810)).b_;
F->arrt_2500 = NULL;
F->arrt_2500 = F->bt_809;
F->acc_2501 = NULL;
F->acc_2501 = f_mk_239(F->up, F->base_808);
F->it_2502 = NULL;
F->i_2503 = NULL;
F->lo_2504 = NULL;
F->hi_2505 = NULL;
F->d_2506 = NULL;
F->ct_2507 = NULL;
F->tmp_2508 = NULL;
(*F->c_815) = F->up->no_cons_221;
if ((G_NV((*(P122)rt_nil_check(F->bt_809)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_621(F->up, F->bt_809);
f_deref_788(F->up, F->base_808, F->bt_809, &F->d_2506);
(*F->ro_811) = 0;
f_index_on_816(F->up, (*(P140)rt_nil_check(F->d_2506)), (*(P122)rt_nil_check(F->bt_809)).target_, F->e_810, &(*F->ro_811), F->lv_812, &(*F->code_out_813), &(*F->t_814), &(*F->c_815));
 (void)rt_range((*F->ro_811), 0, 1);
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_809)).kind_) != ((rt_int)6LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_810)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2499 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_810)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P174)rt_nil_check(F->a_2499)).kind_) == ((rt_int)14LL)) || (G_NV((*(P174)rt_nil_check(F->a_2499)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P174)rt_nil_check(F->a_2499)).kind_) == ((rt_int)5LL)) && f_is_type_name_821(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2499)).name_)))))) {
if ((((*(P174)rt_nil_check(F->a_2499)).next_ != NULL) || (G_NV((*(P122)rt_nil_check(F->bt_809)).dims_) != ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_810)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_535(F->up, F->a_2499, (*(P122)rt_nil_check(F->bt_809)).idx_, &F->it_2502, &F->lo_2504, &F->hi_2505);
f_check_type_500(F->up, F->it_2502, (*(P122)rt_nil_check(F->bt_809)).idx_, G_NV((*(P174)rt_nil_check(F->e_810)).line_));
f_ctype_505(F->up, F->bt_809, &F->d_2506);
f_new_name_242(F->up, rt_g_lit("sl", 2), &F->tmp_2508);
(*F->code_out_813) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->d_2506))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(" = ", 3)), F->base_808), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check(F->lo_2504))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check(F->hi_2505))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".hi); } ", 8)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".p += l_ - ", 11)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo; ", 5)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit("; })", 4)));
(*F->t_814) = F->bt_809;
(*F->ro_811) = 1;
goto ret_;
}
if ((f_list_len_319(F->up, F->a_2499) > G_NV((*(P122)rt_nil_check(F->bt_809)).dims_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_810)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_496(F->up, F->bt_809)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2499 != NULL)) {
f_gexpr_842(F->up, F->a_2499, (*(P122)rt_nil_check(F->arrt_2500)).idx_, &F->it_2502, &F->i_2503);
f_check_type_500(F->up, F->it_2502, (*(P122)rt_nil_check(F->arrt_2500)).idx_, G_NV((*(P174)rt_nil_check(F->e_810)).line_));
f_ctype_505(F->up, F->arrt_2500, &F->ct_2507);
f_new_name_242(F->up, rt_g_lit("ix", 2), &F->tmp_2508);
if (F->lv_812) {
F->acc_2501 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P140)rt_nil_check(F->ct_2507))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(" = &(", 5)), (*(P140)rt_nil_check(F->acc_2501))), rt_g_lit("); &", 4)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit("->p[rt_index(", 13)), (*(P140)rt_nil_check(F->i_2503))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit("->lo, ", 6)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit("->hi) - ", 8)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2501 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2507))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->acc_2501))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".p[rt_index(", 12)), (*(P140)rt_nil_check(F->i_2503))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2508))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_815) = (*(P122)rt_nil_check(F->arrt_2500)).elemcons_;
F->arrt_2500 = (*(P122)rt_nil_check(F->arrt_2500)).elem_;
F->a_2499 = (*(P174)rt_nil_check(F->a_2499)).next_;
}
L_end_2509: ;
(*F->code_out_813) = F->acc_2501;
(*F->t_814) = F->arrt_2500;
if ((!F->lv_812)) {
(*F->ro_811) = 1;
}
ret_:

  return;
}

static int f_type_attribute_819(struct f_greenc_1fr *up_, P122 t_817, rt_gstr name_818) {
  struct f_type_attribute_819fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_817 = t_817;
F->name_818 = cp_rt_gstr(name_818);
F->y_2510 = NULL;
F->y_2510 = ({ A116 ix2511 = F->up->table_119; ix2511.p[rt_index(f_hash_428(F->up, F->name_818), ix2511.lo, ix2511.hi) - ix2511.lo]; });
F->p_2512 = NULL;
while ((F->y_2510 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2510)).name_)), F->name_818) && ((G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2510)).kind_) == ((rt_int)4LL))))) {
if (f_same_455(F->up, (*(P117)rt_nil_check(F->y_2510)).result_, F->t_817)) {
F->result_ = 1;
goto ret_;
}
F->p_2512 = (*(P117)rt_nil_check(F->y_2510)).params_;
while ((F->p_2512 != NULL)) {
if (f_same_455(F->up, (*(P1944)rt_nil_check(F->p_2512)).t_, F->t_817)) {
F->result_ = 1;
goto ret_;
}
F->p_2512 = (*(P1944)rt_nil_check(F->p_2512)).next_;
}
L_end_2514: ;
}
F->y_2510 = (*(P117)rt_nil_check(F->y_2510)).chain_;
}
L_end_2513: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_821(struct f_greenc_1fr *up_, rt_gstr n_820) {
  struct f_is_type_name_821fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_820 = cp_rt_gstr(n_820);
F->y_2515 = NULL;
F->y_2515 = f_lookup_435(F->up, F->n_820);
if ((!(F->y_2515 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2515)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_823(struct f_greenc_1fr *up_, P174 e_822) {
  struct f_is_char_lit_823fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_822 = e_822;
if ((!(G_NV((*(P174)rt_nil_check(F->e_822)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2516 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_822)).name_)); at2516.hi >= at2516.lo ? at2516.hi - at2516.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_825(struct f_greenc_1fr *up_, P174 e_824) {
  struct f_is_enum_lit_825fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_824 = e_824;
F->y_2517 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_824)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2517 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_824)).name_)));
if ((!(F->y_2517 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_2517)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_827(struct f_greenc_1fr *up_, rt_gstr s_826) {
  struct f_c_string_827fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_826 = cp_rt_gstr(s_826);
F->n_2518 = INT64_MIN;
F->n_2518 = ((rt_int)0LL);
{ rt_int lo2522 = ((rt_int)1LL), hi2523 = ({ rt_gstr at2520 = F->s_826; at2520.hi >= at2520.lo ? at2520.hi - at2520.lo + 1 : (rt_int)0; });
for (rt_int it2524 = lo2522; it2524 <= hi2523; it2524++) {
F->i_2521 = it2524;
if ((((G_NV(({ rt_gstr ix2525 = F->s_826; ix2525.p[rt_index(F->i_2521, ix2525.lo, ix2525.hi) - ix2525.lo]; })) == 34) || (G_NV(({ rt_gstr ix2526 = F->s_826; ix2526.p[rt_index(F->i_2521, ix2526.lo, ix2526.hi) - ix2526.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2527 = F->s_826; ix2527.p[rt_index(F->i_2521, ix2527.lo, ix2527.hi) - ix2527.lo]; })) == 63))) {
F->n_2518 = rt_add(G_NV(F->n_2518), ((rt_int)1LL));
}
}
}
L_end_2519: ;
{
F->r_2530.lo = ((rt_int)1LL); F->r_2530.hi = rt_add(rt_add(({ rt_gstr at2529 = F->s_826; at2529.hi >= at2529.lo ? at2529.hi - at2529.lo + 1 : (rt_int)0; }), G_NV(F->n_2518)), ((rt_int)2LL));
F->r_2530.lo2 = 1; F->r_2530.hi2 = 1;
F->r_2530.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2530));
memset(F->r_2530.p, 0xFF, (size_t)G_CNT(F->r_2530));
F->j_2532 = INT64_MIN;
F->j_2532 = ((rt_int)1LL);
(*({ rt_gstr *ix2533 = &(F->r_2530); &ix2533->p[rt_index(((rt_int)1LL), ix2533->lo, ix2533->hi) - ix2533->lo]; })) = 34;
{ rt_int lo2537 = ((rt_int)1LL), hi2538 = ({ rt_gstr at2535 = F->s_826; at2535.hi >= at2535.lo ? at2535.hi - at2535.lo + 1 : (rt_int)0; });
for (rt_int it2539 = lo2537; it2539 <= hi2538; it2539++) {
F->i_2536 = it2539;
F->j_2532 = rt_add(G_NV(F->j_2532), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2540 = F->s_826; ix2540.p[rt_index(F->i_2536, ix2540.lo, ix2540.hi) - ix2540.lo]; })) == 34) || (G_NV(({ rt_gstr ix2541 = F->s_826; ix2541.p[rt_index(F->i_2536, ix2541.lo, ix2541.hi) - ix2541.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2542 = F->s_826; ix2542.p[rt_index(F->i_2536, ix2542.lo, ix2542.hi) - ix2542.lo]; })) == 63))) {
(*({ rt_gstr *ix2543 = &(F->r_2530); &ix2543->p[rt_index(G_NV(F->j_2532), ix2543->lo, ix2543->hi) - ix2543->lo]; })) = 92;
F->j_2532 = rt_add(G_NV(F->j_2532), ((rt_int)1LL));
}
(*({ rt_gstr *ix2544 = &(F->r_2530); &ix2544->p[rt_index(G_NV(F->j_2532), ix2544->lo, ix2544->hi) - ix2544->lo]; })) = G_NV(({ rt_gstr ix2545 = F->s_826; ix2545.p[rt_index(F->i_2536, ix2545.lo, ix2545.hi) - ix2545.lo]; }));
}
}
L_end_2534: ;
(*({ rt_gstr *ix2546 = &(F->r_2530); &ix2546->p[rt_index(rt_add(G_NV(F->j_2532), ((rt_int)1LL)), ix2546->lo, ix2546->hi) - ix2546->lo]; })) = 34;
F->result_ = F->r_2530;
goto ret_;

}
L_end_2528: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_829(struct f_greenc_1fr *up_, P174 e_828) {
  struct f_is_literal_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_828 = e_828;
if ((((G_NV((*(P174)rt_nil_check(F->e_828)).kind_) == ((rt_int)1LL)) || (G_NV((*(P174)rt_nil_check(F->e_828)).kind_) == ((rt_int)2LL))) || f_is_char_lit_823(F->up, F->e_828))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_828)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P174)rt_nil_check(F->e_828)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_828)).a_);
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check(F->e_828)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_828)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_828)).a_) && f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_828)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_837(struct f_greenc_1fr *up_, P174 l_830, P174 h_831, P122 want_832, rt_int line_833, P122 *t_834, P140 *lo_835, P140 *hi_836) {
  struct f_range_bounds_837fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_830 = l_830;
F->h_831 = h_831;
F->want_832 = want_832;
F->line_833 = line_833;
F->t_834 = t_834;
F->lo_835 = lo_835;
F->hi_836 = hi_836;
F->w_2547 = NULL;
F->w_2547 = F->want_832;
F->t2_2548 = NULL;
if ((((F->w_2547 == NULL) && f_is_char_lit_823(F->up, F->l_830)) && f_is_char_lit_823(F->up, F->h_831))) {
F->w_2547 = F->up->ty_char_159;
}
if ((((F->w_2547 == NULL) && f_is_literal_829(F->up, F->l_830)) && (!f_is_literal_829(F->up, F->h_831)))) {
f_gexpr_842(F->up, F->h_831, NULL, &(*F->t_834), &(*F->hi_836));
f_gexpr_842(F->up, F->l_830, (*F->t_834), &F->t2_2548, &(*F->lo_835));
f_check_type_500(F->up, F->t2_2548, (*F->t_834), F->line_833);
} else {
f_gexpr_842(F->up, F->l_830, F->w_2547, &(*F->t_834), &(*F->lo_835));
f_gexpr_842(F->up, F->h_831, (*F->t_834), &F->t2_2548, &(*F->hi_836));
f_check_type_500(F->up, F->t2_2548, (*F->t_834), F->line_833);
}
ret_:

  return;
}

static void f_gexpr_842(struct f_greenc_1fr *up_, P174 e_838, P122 want_839, P122 *t_840, P140 *r_841) {
  struct f_gexpr_842fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_838 = e_838;
F->want_839 = want_839;
F->t_840 = t_840;
F->r_841 = r_841;
F->saved_lv_2549 = INT_MIN;
F->saved_lv_2549 = G_NV(F->up->in_lv_path_231);
F->w_2550 = NULL;
F->w_2550 = F->want_839;
F->up->in_lv_path_231 = 0;
if (((F->w_2550 != NULL) && (((*(P122)rt_nil_check(F->w_2550)).view_of_ != NULL) && (G_NV(F->up->in_instance_210) == ((rt_int)0LL))))) {
F->w_2550 = f_base_view_457(F->up, F->w_2550);
}
f_gexpr_1_847(F->up, F->e_838, F->w_2550, &(*F->t_840), &(*F->r_841));
F->up->in_lv_path_231 = G_NV(F->saved_lv_2549);
ret_:

  return;
}

static void f_gexpr_1_847(struct f_greenc_1fr *up_, P174 e_843, P122 want_844, P122 *t_845, P140 *r_846) {
  struct f_gexpr_1_847fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_843 = e_843;
F->want_844 = want_844;
F->t_845 = t_845;
F->r_846 = r_846;
F->y_2551 = NULL;
F->bt_2552 = NULL;
F->c_2553 = NULL;
F->ro_2554 = INT_MIN;
F->base_2555 = NULL;
F->a_2556 = NULL;
F->nm_2557 = NULL;
F->c2_2558 = NULL;
(*F->t_845) = F->up->ty_int_156;
{ rt_int sel2559 = G_NV((*(P174)rt_nil_check(F->e_843)).kind_);
if (0 || sel2559 == ((rt_int)1LL)) {
if (((F->want_844 != NULL) && ((G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)1LL)) && ((*(P122)rt_nil_check(F->want_844)).view_of_ == NULL)))) {
(*F->t_845) = F->want_844;
}
(*F->r_846) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check(F->e_843)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2559 == ((rt_int)2LL)) {
(*F->t_845) = F->up->ty_float_158;
(*F->r_846) = (*(P174)rt_nil_check(F->e_843)).name_;
if (((F->want_844 != NULL) && ((G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)3LL)) && ((*(P122)rt_nil_check(F->want_844)).view_of_ == NULL)))) {
(*F->t_845) = F->want_844;
} else if ((((F->want_844 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)16LL))) && ((*(P122)rt_nil_check(F->want_844)).fsmall_ != NULL))) {
(*F->t_845) = F->want_844;
(*F->r_846) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->want_844)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2559 == ((rt_int)3LL)) {
if (((f_is_char_lit_823(F->up, F->e_843) && (F->want_844 != NULL)) && (((G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)4LL))) && ((*(P122)rt_nil_check(F->want_844)).view_of_ == NULL)))) {
f_char_literal_857(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if ((((((F->want_844 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_844)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_844)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_844)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->want_844)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_584(F->up, F->want_844)))) {
f_string_aggregate_852(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else {
(*F->t_845) = F->up->ty_string_160;
if (((F->want_844 != NULL) && f_is_string_584(F->up, F->want_844))) {
(*F->t_845) = F->want_844;
}
(*F->r_846) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_827(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2561 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_843)).name_)); at2561.hi >= at2561.lo ? at2561.hi - at2561.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2559 == ((rt_int)4LL)) {
(*F->t_845) = F->up->ty_nil_162;
(*F->r_846) = f_mk_239(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2559 == ((rt_int)15LL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_843)).a_, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)5LL)) {
f_gen_name_865(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)6LL)) {
f_gen_unop_870(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)7LL)) {
f_gen_binop_910(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)8LL)) {
f_expanded_860(F->up, (*(P174)rt_nil_check(F->e_843)).a_, &F->nm_2557);
if ((F->nm_2557 != NULL)) {
F->c2_2558 = f_nn_313(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_843)).line_));
as_R175(&(*(P174)rt_nil_check(F->c2_2558)), (*(P174)rt_nil_check(F->e_843)));
(*(P174)rt_nil_check(F->c2_2558)).a_ = F->nm_2557;
f_gexpr_842(F->up, F->c2_2558, F->want_844, &(*F->t_845), &(*F->r_846));
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2551 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).name_)));
if (((F->y_2551 == NULL) || (((G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_227 = F->want_844;
f_gcall_1049(F->up, F->e_843, 0, &(*F->t_845), &(*F->r_846));
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)5LL))) {
f_conversion_919(F->up, F->e_843, F->y_2551, &(*F->t_845), &(*F->r_846));
goto ret_;
}
} else if (((((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1162(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).a_)).name_)))) && (f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_843)).line_)) != NULL)) && (G_NV((*(P117)rt_nil_check(f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_843)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_227 = F->want_844;
f_gcall_1049(F->up, F->e_843, 0, &(*F->t_845), &(*F->r_846));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_821(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_)).name_))))) {
F->up->call_want_227 = F->want_844;
f_gcall_1049(F->up, F->e_843, 0, &(*F->t_845), &(*F->r_846));
goto ret_;
} else if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_))) {
F->y_2551 = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_843)).line_));
if (((F->y_2551 != NULL) && (((G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2551)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_227 = F->want_844;
f_gcall_1049(F->up, F->e_843, 0, &(*F->t_845), &(*F->r_846));
goto ret_;
}
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_843)).a_, NULL, &F->bt_2552, &F->base_2555);
F->ro_2554 = 1;
f_index_on_816(F->up, (*(P140)rt_nil_check(F->base_2555)), F->bt_2552, F->e_843, &F->ro_2554, 0, &(*F->r_846), &(*F->t_845), &F->c_2553);
 (void)rt_range(F->ro_2554, 0, 1);
if ((f_is_numeric_464(F->up, (*F->t_845)) || f_is_discrete_466(F->up, (*F->t_845)))) {
(*F->r_846) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_846)))), one_rt_gstr(41)));
}
} else if (0 || sel2559 == ((rt_int)9LL)) {
f_expanded_860(F->up, F->e_843, &F->nm_2557);
if ((F->nm_2557 != NULL)) {
f_gen_name_865(F->up, F->nm_2557, F->want_844, &(*F->t_845), &(*F->r_846));
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_821(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_843)).a_)).name_))))) {
F->nm_2557 = f_nn_313(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_843)).line_));
(*(P174)rt_nil_check(F->nm_2557)).a_ = F->e_843;
F->up->call_want_227 = F->want_844;
f_gcall_1049(F->up, F->nm_2557, 0, &(*F->t_845), &(*F->r_846));
goto ret_;
}
if (f_is_package_1085(F->up, (*(P174)rt_nil_check(F->e_843)).a_)) {
F->nm_2557 = f_nn_313(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_843)).line_));
(*(P174)rt_nil_check(F->nm_2557)).name_ = (*(P174)rt_nil_check(F->e_843)).name_;
(*(P174)rt_nil_check(F->nm_2557)).tag_ = f_mk_239(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->e_843)).a_));
f_gen_name_865(F->up, F->nm_2557, F->want_844, &(*F->t_845), &(*F->r_846));
goto ret_;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_843)).a_, NULL, &F->bt_2552, &F->base_2555);
F->ro_2554 = 1;
f_select_on_807(F->up, (*(P140)rt_nil_check(F->base_2555)), F->bt_2552, F->e_843, &F->ro_2554, 0, &(*F->r_846), &(*F->t_845), &F->c_2553);
 (void)rt_range(F->ro_2554, 0, 1);
if ((f_is_numeric_464(F->up, (*F->t_845)) || f_is_discrete_466(F->up, (*F->t_845)))) {
(*F->r_846) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_846)))), one_rt_gstr(41)));
}
} else if (0 || sel2559 == ((rt_int)10LL)) {
f_gen_attr_935(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)11LL)) {
f_allocator_987(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else if (0 || sel2559 == ((rt_int)12LL)) {
f_aggregate_992(F->up, F->e_843, F->want_844, &(*F->t_845), &(*F->r_846));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_843)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_852(struct f_greenc_1fr *up_, P174 e_848, P122 want_849, P122 *t_850, P140 *r_851) {
  struct f_string_aggregate_852fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_848 = e_848;
F->want_849 = want_849;
F->t_850 = t_850;
F->r_851 = r_851;
F->ag_2562 = NULL;
F->it_2563 = NULL;
F->tail_2564 = NULL;
F->l_2565 = NULL;
F->ag_2562 = f_nn_313(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_848)).line_));
{ rt_int lo2569 = ((rt_int)1LL), hi2570 = ({ rt_gstr at2567 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_848)).name_)); at2567.hi >= at2567.lo ? at2567.hi - at2567.lo + 1 : (rt_int)0; });
for (rt_int it2571 = lo2569; it2571 <= hi2570; it2571++) {
F->k_2568 = it2571;
F->l_2565 = f_nn_313(F->up, ((rt_int)3LL), G_NV((*(P174)rt_nil_check(F->e_848)).line_));
(*(P174)rt_nil_check(F->l_2565)).name_ = f_mk_239(F->up, ({ rt_gstr sl2573 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_848)).name_)); rt_int l_ = F->k_2568, h_ = F->k_2568; if (l_ <= h_) { rt_index(l_, sl2573.lo, sl2573.hi); rt_index(h_, sl2573.lo, sl2573.hi); } sl2573.p += l_ - sl2573.lo; sl2573.lo = l_; sl2573.hi = h_; sl2573; }));
F->it_2563 = f_nn_313(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_848)).line_));
(*(P174)rt_nil_check(F->it_2563)).b_ = F->l_2565;
if ((F->tail_2564 == NULL)) {
(*(P174)rt_nil_check(F->ag_2562)).a_ = F->it_2563;
} else {
(*(P174)rt_nil_check(F->tail_2564)).next_ = F->it_2563;
}
F->tail_2564 = F->it_2563;
}
}
L_end_2566: ;
if (((*(P174)rt_nil_check(F->ag_2562)).a_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_848)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_496(F->up, F->want_849)));
}
f_aggregate_992(F->up, F->ag_2562, F->want_849, &(*F->t_850), &(*F->r_851));
ret_:

  return;
}

static void f_char_literal_857(struct f_greenc_1fr *up_, P174 e_853, P122 want_854, P122 *t_855, P140 *r_856) {
  struct f_char_literal_857fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_853 = e_853;
F->want_854 = want_854;
F->t_855 = t_855;
F->r_856 = r_856;
F->i_2574 = INT64_MIN;
if ((G_NV((*(P122)rt_nil_check(F->want_854)).kind_) == ((rt_int)11LL))) {
(*F->t_855) = F->want_854;
(*F->r_856) = f_mk_239(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2576 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_853)).name_)); ix2576.p[rt_index(((rt_int)1LL), ix2576.lo, ix2576.hi) - ix2576.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2574 = f_lit_index_513(F->up, (*(P122)rt_nil_check(F->want_854)).lits_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_853)).name_)));
if ((G_NV(F->i_2574) < ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_853)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_853)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_496(F->up, F->want_854)));
}
(*F->t_855) = F->want_854;
(*F->r_856) = f_mk_239(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2574))));
ret_:

  return;
}

static void f_expanded_860(struct f_greenc_1fr *up_, P174 e_858, P174 *r_859) {
  struct f_expanded_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_858 = e_858;
F->r_859 = r_859;
F->y_2577 = NULL;
F->d_2578 = INT64_MIN;
(*F->r_859) = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_858)).kind_) != ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2578 = f_enclosing_depth_446(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).a_)).name_)));
if ((G_NV(F->d_2578) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2577 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).a_)).name_)));
if (((F->y_2577 != NULL) && ((((G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)2LL))) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2577)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_444(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_858)).name_)), G_NV(F->d_2578)) == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_858)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_858)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_858)).a_)).name_))));
}
(*F->r_859) = f_nn_313(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_858)).line_));
(*(P174)rt_nil_check((*F->r_859))).name_ = (*(P174)rt_nil_check(F->e_858)).name_;
(*(P174)rt_nil_check((*F->r_859))).ival_ = rt_add(G_NV(F->d_2578), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_865(struct f_greenc_1fr *up_, P174 e_861, P122 want_862, P122 *t_863, P140 *r_864) {
  struct f_gen_name_865fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_861 = e_861;
F->want_862 = want_862;
F->t_863 = t_863;
F->r_864 = r_864;
F->y_2579 = NULL;
F->y_2579 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)));
F->z_2580 = NULL;
F->call_2581 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_861)).ival_) > ((rt_int)0LL))) {
F->y_2579 = f_lookup_at_444(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_sub(G_NV((*(P174)rt_nil_check(F->e_861)).ival_), ((rt_int)1LL)));
}
if (((*(P174)rt_nil_check(F->e_861)).tag_ != NULL)) {
F->y_2579 = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), G_NV((*(P174)rt_nil_check(F->e_861)).line_));
}
if ((F->y_2579 == NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit("GET", 3)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)12LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)2LL)) && G_NV((*(P117)rt_nil_check(F->y_2579)).hasmv_))) {
(*F->t_863) = (*(P117)rt_nil_check(F->y_2579)).t_;
(*F->r_864) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2579)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->y_2579)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2579)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)1LL)) || (G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)2LL)))) {
(*F->t_863) = (*(P117)rt_nil_check(F->y_2579)).t_;
f_access_of_779(F->up, F->y_2579, &(*F->r_864));
if (((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)1LL)) && (f_is_numeric_464(F->up, (*F->t_863)) || f_is_discrete_466(F->up, (*F->t_863))))) {
(*F->r_864) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P140)rt_nil_check((*F->r_864)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)7LL))) {
F->z_2580 = F->y_2579;
if ((F->want_862 != NULL)) {
while ((F->z_2580 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2580)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2580)).kind_) == ((rt_int)7LL))) && f_same_455(F->up, (*(P117)rt_nil_check(F->z_2580)).t_, F->want_862))) {
goto L_end_2582;
}
F->z_2580 = (*(P117)rt_nil_check(F->z_2580)).chain_;
}
L_end_2582: ;
if ((F->z_2580 == NULL)) {
F->z_2580 = F->y_2579;
}
} else {
F->z_2580 = (*(P117)rt_nil_check(F->y_2579)).chain_;
while ((F->z_2580 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_2580)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_2580)).kind_) == ((rt_int)7LL))) && (!f_same_455(F->up, (*(P117)rt_nil_check(F->z_2580)).t_, (*(P117)rt_nil_check(F->y_2579)).t_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2580 = (*(P117)rt_nil_check(F->z_2580)).chain_;
}
L_end_2583: ;
F->z_2580 = F->y_2579;
}
(*F->t_863) = (*(P117)rt_nil_check(F->z_2580)).t_;
(*F->r_864) = f_mk_239(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->z_2580)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)4LL))) || (G_NV((*(P117)rt_nil_check(F->y_2579)).kind_) == ((rt_int)10LL)))) {
F->call_2581 = f_nn_313(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_861)).line_));
(*(P174)rt_nil_check(F->call_2581)).a_ = F->e_861;
F->up->call_want_227 = F->want_862;
f_gcall_1049(F->up, F->call_2581, 0, &(*F->t_863), &(*F->r_864));
goto ret_;
}
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_861)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_861)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_870(struct f_greenc_1fr *up_, P174 e_866, P122 want_867, P122 *t_868, P140 *r_869) {
  struct f_gen_unop_870fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_866 = e_866;
F->want_867 = want_867;
F->t_868 = t_868;
F->r_869 = r_869;
F->a_2584 = NULL;
F->x_2585 = NULL;
F->done_2586 = INT_MIN;
f_user_operator_1144(F->up, F->e_866, F->want_867, &(*F->t_868), &(*F->r_869), &F->done_2586);
 (void)rt_range(F->done_2586, 0, 1);
if (G_NV(F->done_2586)) {
goto ret_;
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_866)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_866)).a_, F->want_867, &(*F->t_868), &F->a_2584);
if (((G_NV((*(P122)rt_nil_check((*F->t_868))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check((*F->t_868))).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check((*F->t_868))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_505(F->up, (*F->t_868), &F->x_2585);
(*F->r_869) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P140)rt_nil_check(F->x_2585))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2584))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check((*F->t_868))).kind_) != ((rt_int)2LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_866)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_869) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->a_2584))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_866)).a_, F->want_867, &(*F->t_868), &F->a_2584);
if ((!f_is_numeric_464(F->up, (*F->t_868)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_866)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_866)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_866)).name_)), rt_g_lit("+", 1))) {
(*F->r_869) = F->a_2584;
} else if (((G_NV((*(P122)rt_nil_check((*F->t_868))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_868))).kind_) == ((rt_int)16LL)))) {
(*F->r_869) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P140)rt_nil_check(F->a_2584))), one_rt_gstr(41)));
} else {
(*F->r_869) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P140)rt_nil_check(F->a_2584))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_872(struct f_greenc_1fr *up_, P122 t_871) {
  struct f_short_int_872fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_871 = t_871;
if ((!(G_NV((*(P122)rt_nil_check(F->t_871)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_459(F->up, F->t_871) == F->up->ty_short_167);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_874(struct f_greenc_1fr *up_, P122 t_873) {
  struct f_float_kind_874fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_873 = t_873;
if ((f_root_459(F->up, F->t_873) == F->up->ty_sfloat_169)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_877(struct f_greenc_1fr *up_, P174 e_875, P140 *r_876) {
  struct f_membership_877fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_875 = e_875;
F->r_876 = r_876;
F->ta_2587 = NULL;
F->tb_2588 = NULL;
F->tt_2589 = NULL;
F->a_2590 = NULL;
F->lo_2591 = NULL;
F->hi_2592 = NULL;
F->ct_2593 = NULL;
F->c_2594 = NULL;
F->d_2595 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_875)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_875)).a_)) {
f_range_bounds_837(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_875)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_875)).b_)).b_, NULL, G_NV((*(P174)rt_nil_check(F->e_875)).line_), &F->tt_2589, &F->lo_2591, &F->hi_2592);
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_875)).a_, F->tt_2589, &F->ta_2587, &F->a_2590);
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_875)).a_, NULL, &F->ta_2587, &F->a_2590);
f_range_bounds_837(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_875)).b_)).a_, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_875)).b_)).b_, F->ta_2587, G_NV((*(P174)rt_nil_check(F->e_875)).line_), &F->tt_2589, &F->lo_2591, &F->hi_2592);
}
f_check_type_500(F->up, F->tt_2589, F->ta_2587, G_NV((*(P174)rt_nil_check(F->e_875)).line_));
if (((!f_is_numeric_464(F->up, F->ta_2587)) && (!f_is_discrete_466(F->up, F->ta_2587)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_875)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_505(F->up, F->ta_2587, &F->ct_2593);
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2593))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2590))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check(F->lo_2591))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check(F->hi_2592))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_521(F->up, (*(P174)rt_nil_check(F->e_875)).b_, &F->tt_2589, &F->c_2594);
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_875)).a_, F->tt_2589, &F->ta_2587, &F->a_2590);
f_check_type_500(F->up, F->ta_2587, F->tt_2589, G_NV((*(P174)rt_nil_check(F->e_875)).line_));
f_ctype_505(F->up, F->ta_2587, &F->ct_2593);
if (((f_is_numeric_464(F->up, F->ta_2587) || f_is_discrete_466(F->up, F->ta_2587)) && ((*(P178)rt_nil_check(F->c_2594)).lo_ != NULL))) {
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2593))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2590))), rt_g_lit("; m_ >= ", 8)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2594)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2594)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2587)).kind_) == ((rt_int)6LL)) && ((*(P178)rt_nil_check(F->c_2594)).lo_ != NULL))) {
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2593))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2590))), rt_g_lit("; m_.lo == ", 11)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2594)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2594)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2587)).kind_) == ((rt_int)7LL)) && f_discriminated_494(F->up, F->c_2594))) {
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2593))), rt_g_lit(" m_ = ", 6)), (*(P140)rt_nil_check(F->a_2590))), rt_g_lit("; 1", 3)));
F->d_2595 = (*(P178)rt_nil_check(F->c_2594)).dv_;
while ((F->d_2595 != NULL)) {
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_876))), rt_g_lit(" && m_.", 7)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2595)).name_)))), rt_g_lit(" == (", 5)), (*(P140)rt_nil_check((*(P1966)rt_nil_check(F->d_2595)).v_))), one_rt_gstr(41)));
F->d_2595 = (*(P1966)rt_nil_check(F->d_2595)).next_;
}
L_end_2596: ;
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_876))), rt_g_lit("; })", 4)));
} else {
(*F->r_876) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P140)rt_nil_check(F->a_2590))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_882(struct f_greenc_1fr *up_, P174 e_878, P122 want_879, P122 *t_880, P140 *r_881) {
  struct f_condition_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_878 = e_878;
F->want_879 = want_879;
F->t_880 = t_880;
F->r_881 = r_881;
F->a_2597 = NULL;
F->b_2598 = NULL;
F->tb_2599 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_878)).kind_) == ((rt_int)7LL)) && (G_NV((*(P174)rt_nil_check(F->e_878)).ival_) == ((rt_int)1LL)))) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->e_878)).a_, F->up->ty_bool_157, &(*F->t_880), &F->a_2597);
f_check_type_500(F->up, (*F->t_880), F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_878)).line_));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_878)).b_, F->up->ty_bool_157, &F->tb_2599, &F->b_2598);
f_check_type_500(F->up, F->tb_2599, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->e_878)).line_));
(*F->t_880) = F->up->ty_bool_157;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_878)).name_)), rt_g_lit("AND", 3))) {
(*F->r_881) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2597))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2598))), one_rt_gstr(41)));
} else {
(*F->r_881) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2597))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2598))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_842(F->up, F->e_878, F->up->ty_bool_157, &(*F->t_880), &(*F->r_881));
ret_:

  return;
}

static void f_catenation_887(struct f_greenc_1fr *up_, P174 e_883, P122 want_884, P122 *t_885, P140 *r_886) {
  struct f_catenation_887fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_883 = e_883;
F->want_884 = want_884;
F->t_885 = t_885;
F->r_886 = r_886;
F->arrt_2600 = NULL;
F->ta_2601 = NULL;
F->tb_2602 = NULL;
F->a_2603 = NULL;
F->b_2604 = NULL;
F->ct_2605 = NULL;
if ((((F->want_884 != NULL) && (G_NV((*(P122)rt_nil_check(F->want_884)).kind_) == ((rt_int)6LL))) && (G_NV((*(P122)rt_nil_check(F->want_884)).dims_) == ((rt_int)1LL)))) {
F->arrt_2600 = F->want_884;
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_883)).a_, NULL, &F->ta_2601, &F->a_2603);
if (((G_NV((*(P122)rt_nil_check(F->ta_2601)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->ta_2601)).dims_) == ((rt_int)1LL)))) {
F->arrt_2600 = F->ta_2601;
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_883)).b_, NULL, &F->tb_2602, &F->b_2604);
if (((G_NV((*(P122)rt_nil_check(F->tb_2602)).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2602)).dims_) == ((rt_int)1LL)))) {
F->arrt_2600 = F->tb_2602;
} else if (((G_NV((*(P122)rt_nil_check(F->ta_2601)).kind_) == ((rt_int)11LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2602)).kind_) == ((rt_int)11LL)))) {
F->arrt_2600 = F->up->ty_string_160;
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_883)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_505(F->up, F->arrt_2600, &F->ct_2605);
f_cat_operand_892(F->up, (*(P174)rt_nil_check(F->e_883)).a_, F->arrt_2600, G_NV((*(P174)rt_nil_check(F->e_883)).line_), &F->a_2603);
f_cat_operand_892(F->up, (*(P174)rt_nil_check(F->e_883)).b_, F->arrt_2600, G_NV((*(P174)rt_nil_check(F->e_883)).line_), &F->b_2604);
(*F->t_885) = F->arrt_2600;
(*F->r_886) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P140)rt_nil_check(F->ct_2605))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2603))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2604))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_892(struct f_greenc_1fr *up_, P174 x_888, P122 arrt_889, rt_int line_890, P140 *r_891) {
  struct f_cat_operand_892fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_888 = x_888;
F->arrt_889 = arrt_889;
F->line_890 = line_890;
F->r_891 = r_891;
F->tx_2606 = NULL;
F->ct_2607 = NULL;
if ((f_is_char_lit_823(F->up, F->x_888) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->arrt_889)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_842(F->up, F->x_888, (*(P122)rt_nil_check(F->arrt_889)).elem_, &F->tx_2606, &(*F->r_891));
} else {
f_gexpr_842(F->up, F->x_888, F->arrt_889, &F->tx_2606, &(*F->r_891));
}
if (f_same_455(F->up, F->tx_2606, F->arrt_889)) {
goto ret_;
}
if (f_same_455(F->up, F->tx_2606, (*(P122)rt_nil_check(F->arrt_889)).elem_)) {
f_ctype_505(F->up, F->arrt_889, &F->ct_2607);
(*F->r_891) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P140)rt_nil_check(F->ct_2607))), one_rt_gstr(40)), (*(P140)rt_nil_check((*F->r_891)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_260(F->up, F->line_890, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_496(F->up, F->tx_2606)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_496(F->up, F->arrt_889)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_897(struct f_greenc_1fr *up_, P174 e_893, P122 want_894, P122 *t_895, P140 *r_896) {
  struct f_arithmetic_897fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_893 = e_893;
F->want_894 = want_894;
F->t_895 = t_895;
F->r_896 = r_896;
F->op_2608 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_893)).name_)));
F->ta_2609 = NULL;
F->tb_2610 = NULL;
F->hint_2611 = NULL;
F->a_2612 = NULL;
F->b_2613 = NULL;
if (eq_rt_gstr(F->op_2608, rt_g_lit("**", 2))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).a_, F->want_894, &F->ta_2609, &F->a_2612);
F->hint_2611 = F->up->ty_int_156;
if ((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)1LL))) {
F->hint_2611 = F->ta_2609;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).b_, F->hint_2611, &F->tb_2610, &F->b_2613);
if ((G_NV((*(P122)rt_nil_check(F->tb_2610)).kind_) != ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_893)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_895) = F->ta_2609;
if ((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)1LL))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)3LL))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), rt_g_lit(", ", 2)), f_float_kind_874(F->up, F->ta_2609)), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_893)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_893)).a_) && (!f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_893)).b_)))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).b_, F->want_894, &F->tb_2610, &F->b_2613);
F->hint_2611 = F->tb_2610;
if (((G_NV((*(P122)rt_nil_check(F->tb_2610)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2608, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2608, rt_g_lit("/", 1))))) {
F->hint_2611 = F->up->ty_int_156;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).a_, F->hint_2611, &F->ta_2609, &F->a_2612);
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).a_, F->want_894, &F->ta_2609, &F->a_2612);
F->hint_2611 = F->ta_2609;
if (((((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2608, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2608, rt_g_lit("/", 1)))) && f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_893)).b_)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_893)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2611 = F->up->ty_int_156;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_893)).b_, F->hint_2611, &F->tb_2610, &F->b_2613);
}
if (((!f_is_numeric_464(F->up, F->ta_2609)) || (!f_is_numeric_464(F->up, F->tb_2610)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_893)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2608), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_496(F->up, F->ta_2609)), rt_g_lit(" and ", 5)), f_kind_name_496(F->up, F->tb_2610)));
}
if (((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)16LL)) || (G_NV((*(P122)rt_nil_check(F->tb_2610)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_905(F->up, F->e_893, F->ta_2609, F->tb_2610, (*(P140)rt_nil_check(F->a_2612)), (*(P140)rt_nil_check(F->b_2613)), &(*F->t_895), &(*F->r_896));
goto ret_;
}
f_check_type_500(F->up, F->tb_2610, F->ta_2609, G_NV((*(P174)rt_nil_check(F->e_893)).line_));
(*F->t_895) = F->ta_2609;
if ((G_NV((*(P122)rt_nil_check(F->ta_2609)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2608, rt_g_lit("+", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), rt_g_lit(", ", 2)), f_float_kind_874(F->up, F->ta_2609)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("-", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), rt_g_lit(", ", 2)), f_float_kind_874(F->up, F->ta_2609)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("*", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), rt_g_lit(", ", 2)), f_float_kind_874(F->up, F->ta_2609)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("/", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), rt_g_lit(", ", 2)), f_float_kind_874(F->up, F->ta_2609)), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_893)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2608), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2608, rt_g_lit("+", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("-", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("*", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("/", 1))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2608, rt_g_lit("MOD", 3))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P140)rt_nil_check(F->a_2612))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2613))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_893)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2608), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_872(F->up, (*F->t_895))) {
(*F->r_896) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_896)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_905(struct f_greenc_1fr *up_, P174 e_898, P122 ta_899, P122 tb_900, rt_gstr a_901, rt_gstr b_902, P122 *t_903, P140 *r_904) {
  struct f_fixed_operation_905fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_898 = e_898;
F->ta_899 = ta_899;
F->tb_900 = tb_900;
F->a_901 = cp_rt_gstr(a_901);
F->b_902 = cp_rt_gstr(b_902);
F->t_903 = t_903;
F->r_904 = r_904;
F->op_2614 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_898)).name_)));
if ((eq_rt_gstr(F->op_2614, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2614, rt_g_lit("-", 1)))) {
f_check_type_500(F->up, F->tb_900, F->ta_899, G_NV((*(P174)rt_nil_check(F->e_898)).line_));
(*F->t_903) = F->ta_899;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_901), one_rt_gstr(32)), F->op_2614), one_rt_gstr(32)), F->b_902), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2614, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_899)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_900)).kind_) == ((rt_int)16LL)))) {
(*F->t_903) = F->up->ty_ufixed_172;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_901), rt_g_lit(" * ", 3)), F->b_902), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2614, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_899)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_900)).kind_) == ((rt_int)16LL)))) {
(*F->t_903) = F->up->ty_ufixed_172;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_901), rt_g_lit(", ", 2)), F->b_902), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2614, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_899)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_900)).kind_) == ((rt_int)1LL)))) {
(*F->t_903) = F->ta_899;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_901), rt_g_lit(" * (double)(", 12)), F->b_902), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2614, rt_g_lit("*", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_899)).kind_) == ((rt_int)1LL))) && (G_NV((*(P122)rt_nil_check(F->tb_900)).kind_) == ((rt_int)16LL)))) {
(*F->t_903) = F->tb_900;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_901), rt_g_lit(") * ", 4)), F->b_902), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2614, rt_g_lit("/", 1)) && (G_NV((*(P122)rt_nil_check(F->ta_899)).kind_) == ((rt_int)16LL))) && (G_NV((*(P122)rt_nil_check(F->tb_900)).kind_) == ((rt_int)1LL)))) {
(*F->t_903) = F->ta_899;
(*F->r_904) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_901), rt_g_lit(", (double)(", 11)), F->b_902), rt_g_lit("), 0), ", 7)), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->ta_899)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_898)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2614), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_910(struct f_greenc_1fr *up_, P174 e_906, P122 want_907, P122 *t_908, P140 *r_909) {
  struct f_gen_binop_910fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_906 = e_906;
F->want_907 = want_907;
F->t_908 = t_908;
F->r_909 = r_909;
F->op_2615 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_906)).name_)));
F->ta_2616 = NULL;
F->tb_2617 = NULL;
F->hint_2618 = NULL;
F->ct_2619 = NULL;
F->a_2620 = NULL;
F->b_2621 = NULL;
F->x_2622 = NULL;
F->dummy_2623 = NULL;
F->done_2624 = INT_MIN;
(*F->t_908) = F->up->ty_bool_157;
f_user_operator_1144(F->up, F->e_906, F->want_907, &(*F->t_908), &(*F->r_909), &F->done_2624);
 (void)rt_range(F->done_2624, 0, 1);
if (G_NV(F->done_2624)) {
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_906)).ival_) == ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_906)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2615, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2615, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2615, rt_g_lit("XOR", 3)))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_906)).a_, F->want_907, &F->ta_2616, &F->a_2620);
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_906)).b_, F->ta_2616, &F->tb_2617, &F->b_2621);
f_check_type_500(F->up, F->tb_2617, F->ta_2616, G_NV((*(P174)rt_nil_check(F->e_906)).line_));
(*F->t_908) = F->ta_2616;
if (((G_NV((*(P122)rt_nil_check(F->ta_2616)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P122)rt_nil_check(F->ta_2616)).dims_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check((*(P122)rt_nil_check(F->ta_2616)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_505(F->up, F->ta_2616, &F->x_2622);
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_250(F->up, F->op_2615), one_rt_gstr(95)), (*(P140)rt_nil_check(F->x_2622))), one_rt_gstr(40)), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2616)).kind_) != ((rt_int)2LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_906)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2615), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2615, rt_g_lit("AND", 3))) {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(" && ", 4)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2615, rt_g_lit("OR", 2))) {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(" || ", 4)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
} else {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2615, rt_g_lit("IN", 2))) {
f_membership_877(F->up, F->e_906, &(*F->r_909));
goto ret_;
}
if (eq_rt_gstr(F->op_2615, rt_g_lit("&", 1))) {
f_catenation_887(F->up, F->e_906, F->want_907, &(*F->t_908), &(*F->r_909));
goto ret_;
}
if (f_is_rel_352(F->up, F->op_2615)) {
if (((((f_is_literal_829(F->up, (*(P174)rt_nil_check(F->e_906)).a_) || f_is_enum_lit_825(F->up, (*(P174)rt_nil_check(F->e_906)).a_)) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_906)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_906)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_906)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_906)).b_, NULL, &F->hint_2618, &F->dummy_2623);
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_906)).a_, F->hint_2618, &F->ta_2616, &F->a_2620);
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_906)).b_, F->ta_2616, &F->tb_2617, &F->b_2621);
F->ct_2619 = F->ta_2616;
if (((G_NV((*(P122)rt_nil_check(F->ta_2616)).kind_) != ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check(F->tb_2617)).kind_) != ((rt_int)10LL)))) {
f_check_type_500(F->up, F->tb_2617, F->ta_2616, G_NV((*(P174)rt_nil_check(F->e_906)).line_));
}
if ((G_NV((*(P122)rt_nil_check(F->ta_2616)).kind_) == ((rt_int)10LL))) {
F->ct_2619 = F->tb_2617;
}
if (((eq_rt_gstr(F->op_2615, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2615, rt_g_lit("/=", 2))) && f_restricted_here_576(F->up, F->ct_2619))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_906)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2615, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2615, rt_g_lit("/=", 2)))) && (!f_is_numeric_464(F->up, F->ct_2619))) && (!f_is_discrete_466(F->up, F->ct_2619)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_906)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2615), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_496(F->up, F->ct_2619)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_627(F->up, F->ct_2619)) {
f_eq_code_642(F->up, F->ct_2619, (*(P140)rt_nil_check(F->a_2620)), (*(P140)rt_nil_check(F->b_2621)), &F->x_2622);
if (eq_rt_gstr(F->op_2615, rt_g_lit("=", 1))) {
(*F->r_909) = F->x_2622;
} else if (eq_rt_gstr(F->op_2615, rt_g_lit("/=", 2))) {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check(F->x_2622))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_906)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2615, rt_g_lit("=", 1))) {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(" == ", 4)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2615, rt_g_lit("/=", 2))) {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), rt_g_lit(" != ", 4)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
} else {
(*F->r_909) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->a_2620))), one_rt_gstr(32)), F->op_2615), one_rt_gstr(32)), (*(P140)rt_nil_check(F->b_2621))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_897(F->up, F->e_906, F->want_907, &(*F->t_908), &(*F->r_909));
ret_:

  return;
}

static void f_code_statement_914(struct f_greenc_1fr *up_, P174 e_911, P117 y_912, P140 *r_913) {
  struct f_code_statement_914fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_911 = e_911;
F->y_912 = y_912;
F->r_913 = r_913;
F->i_2625 = NULL;
F->t_2626 = NULL;
F->v_2627 = NULL;
F->ct_2628 = NULL;
if ((f_lookup_435(F->up, rt_g_lit("MACHINE_CODE", 12)) != NULL)) {
F->i_2625 = f_member_of_1089(F->up, rt_g_lit("MACHINE_CODE", 12), rt_g_lit("INSTRUCTION", 11), G_NV((*(P174)rt_nil_check(F->e_911)).line_));
}
if (((F->i_2625 == NULL) || ((*(P117)rt_nil_check(F->i_2625)).t_ != (*(P117)rt_nil_check(F->y_912)).t_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_911)).line_), cat_rt_gstr(rt_g_lit("a code statement is an aggregate of type MACHINE_CODE.INSTRUCTION, an instruction ", 82), rt_g_lit("of this machine (RM79 13.8)", 27)));
}
if (((F->up->cur_body_217 == NULL) || (F->up->func_sym_142 == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_911)).line_), rt_g_lit("a code statement stands in a procedure body of code statements only (RM79 13.8)", 79));
}
f_check_code_body_726(F->up, F->up->cur_body_217, F->up->func_sym_142);
f_conversion_919(F->up, F->e_911, F->y_912, &F->t_2626, &F->v_2627);
f_ctype_505(F->up, (*(P117)rt_nil_check(F->y_912)).t_, &F->ct_2628);
(*F->r_913) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2628))), rt_g_lit(" i_ = ", 6)), (*(P140)rt_nil_check(F->v_2627))), rt_g_lit("; rt_g_machine(i_.", 18)), f_c_field_256(F->up, rt_g_lit("OP", 2))), rt_g_lit(", i_.", 5)), f_c_field_256(F->up, rt_g_lit("R", 1))), rt_g_lit(", i_.", 5)), f_c_field_256(F->up, rt_g_lit("A", 1))), rt_g_lit("); })", 5)));
ret_:

  return;
}

static void f_conversion_919(struct f_greenc_1fr *up_, P174 e_915, P117 y_916, P122 *t_917, P140 *r_918) {
  struct f_conversion_919fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_915 = e_915;
F->y_916 = y_916;
F->t_917 = t_917;
F->r_918 = r_918;
F->aty_2629 = NULL;
F->a_2630 = NULL;
F->ag_2631 = NULL;
F->it_2632 = NULL;
F->tail_2633 = NULL;
F->arg_2634 = NULL;
(*F->t_917) = (*(P117)rt_nil_check(F->y_916)).t_;
if (((G_NV((*(P174)rt_nil_check(F->e_915)).flag_) == ((rt_int)9LL)) || (f_list_len_319(F->up, (*(P174)rt_nil_check(F->e_915)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->e_915)).flag_) == ((rt_int)9LL))) {
F->ag_2631 = (*(P174)rt_nil_check(F->e_915)).b_;
} else {
F->ag_2631 = f_nn_313(F->up, ((rt_int)12LL), G_NV((*(P174)rt_nil_check(F->e_915)).line_));
F->arg_2634 = (*(P174)rt_nil_check(F->e_915)).b_;
while ((F->arg_2634 != NULL)) {
F->it_2632 = f_nn_313(F->up, ((rt_int)13LL), G_NV((*(P174)rt_nil_check(F->e_915)).line_));
(*(P174)rt_nil_check(F->it_2632)).b_ = F->arg_2634;
if (((*(P174)rt_nil_check(F->arg_2634)).formal_ != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_915)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2633 == NULL)) {
(*(P174)rt_nil_check(F->ag_2631)).a_ = F->it_2632;
} else {
(*(P174)rt_nil_check(F->tail_2633)).next_ = F->it_2632;
}
F->tail_2633 = F->it_2632;
F->arg_2634 = (*(P174)rt_nil_check(F->arg_2634)).next_;
}
L_end_2635: ;
}
if ((G_NV((*(P174)rt_nil_check(F->ag_2631)).kind_) != ((rt_int)12LL))) {
f_gexpr_842(F->up, F->ag_2631, (*F->t_917), &F->aty_2629, &(*F->r_918));
f_check_type_500(F->up, F->aty_2629, (*F->t_917), G_NV((*(P174)rt_nil_check(F->e_915)).line_));
} else {
f_aggregate_992(F->up, F->ag_2631, (*F->t_917), &F->aty_2629, &(*F->r_918));
}
f_constrain_923(F->up, F->y_916, (*F->t_917), &(*F->r_918));
goto ret_;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_915)).b_, (*F->t_917), &F->aty_2629, &F->a_2630);
if ((((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)6LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2629)).kind_) == ((rt_int)6LL))) && (!f_same_455(F->up, (*F->t_917), F->aty_2629)))) {
f_array_conversion_930(F->up, F->e_915, (*F->t_917), F->aty_2629, (*(P117)rt_nil_check(F->y_916)).c_, (*(P140)rt_nil_check(F->a_2630)), &(*F->r_918));
goto ret_;
}
if ((f_is_numeric_464(F->up, (*F->t_917)) && f_is_numeric_464(F->up, F->aty_2629))) {
if (((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)1LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2629)).kind_) != ((rt_int)1LL)))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P140)rt_nil_check(F->a_2630))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)3LL)) && (G_NV((*(P122)rt_nil_check(F->aty_2629)).kind_) == ((rt_int)1LL)))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P140)rt_nil_check(F->a_2630))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check((*F->t_917))).fsmall_ != NULL))) {
if ((G_NV((*(P122)rt_nil_check(F->aty_2629)).kind_) == ((rt_int)1LL))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P140)rt_nil_check(F->a_2630))), rt_g_lit("), ", 3)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_917))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P140)rt_nil_check(F->a_2630))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P122)rt_nil_check((*F->t_917))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_918) = F->a_2630;
}
} else if (((f_same_455(F->up, F->aty_2629, (*F->t_917)) || f_derived_from_462(F->up, F->aty_2629, (*F->t_917))) || f_derived_from_462(F->up, (*F->t_917), F->aty_2629))) {
(*F->r_918) = F->a_2630;
} else {
f_check_type_500(F->up, F->aty_2629, (*F->t_917), G_NV((*(P174)rt_nil_check(F->e_915)).line_));
(*F->r_918) = F->a_2630;
}
if (((((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)4LL))) || (G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)11LL))) && f_bounded_488(F->up, (*(P117)rt_nil_check(F->y_916)).c_))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_918)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_916)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_916)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_917))).kind_) == ((rt_int)16LL))) && f_bounded_488(F->up, (*(P117)rt_nil_check(F->y_916)).c_))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P140)rt_nil_check((*F->r_918)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_916)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_916)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_872(F->up, (*F->t_917))) {
(*F->r_918) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P140)rt_nil_check((*F->r_918)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_923(struct f_greenc_1fr *up_, P117 y_920, P122 t_921, P140 *r_922) {
  struct f_constrain_923fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_920 = y_920;
F->t_921 = t_921;
F->r_922 = r_922;
F->ct_2636 = NULL;
F->tmp_2637 = NULL;
if ((((*(P117)rt_nil_check(F->y_920)).c_ == NULL) || ((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_920)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P122)rt_nil_check(F->t_921)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_490(F->up, (*(P122)rt_nil_check(F->t_921)).tcons_)))) {
f_ctype_505(F->up, F->t_921, &F->ct_2636);
f_new_name_242(F->up, rt_g_lit("q", 1), &F->tmp_2637);
(*F->r_922) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2636))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2637))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check((*F->r_922)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_920)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_920)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2637))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2637))), rt_g_lit(".lo = l_; ", 10)), (*(P140)rt_nil_check(F->tmp_2637))), rt_g_lit(".hi = h_; ", 10)), (*(P140)rt_nil_check(F->tmp_2637))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_930(struct f_greenc_1fr *up_, P174 e_924, P122 t_925, P122 aty_926, P178 c_927, rt_gstr a_928, P140 *r_929) {
  struct f_array_conversion_930fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_924 = e_924;
F->t_925 = t_925;
F->aty_926 = aty_926;
F->c_927 = c_927;
F->a_928 = cp_rt_gstr(a_928);
F->r_929 = r_929;
F->x_2638 = NULL;
F->y_2639 = NULL;
F->ct_2640 = NULL;
F->act_2641 = NULL;
F->et_2642 = NULL;
F->tmp_2643 = NULL;
F->s_2644 = NULL;
F->x_2638 = F->t_925;
F->y_2639 = F->aty_926;
if ((G_NV((*(P122)rt_nil_check(F->t_925)).dims_) != G_NV((*(P122)rt_nil_check(F->aty_926)).dims_))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_924)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2647 = ((rt_int)1LL), hi2648 = G_NV((*(P122)rt_nil_check(F->t_925)).dims_);
for (rt_int it2649 = lo2647; it2649 <= hi2648; it2649++) {
F->k_2646 = it2649;
if ((!((f_same_455(F->up, (*(P122)rt_nil_check(F->x_2638)).idx_, (*(P122)rt_nil_check(F->y_2639)).idx_) || f_derived_from_462(F->up, (*(P122)rt_nil_check(F->x_2638)).idx_, (*(P122)rt_nil_check(F->y_2639)).idx_)) || f_derived_from_462(F->up, (*(P122)rt_nil_check(F->y_2639)).idx_, (*(P122)rt_nil_check(F->x_2638)).idx_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_924)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_496(F->up, F->aty_926)), rt_g_lit(" to ", 4)), f_kind_name_496(F->up, F->t_925)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2638 = (*(P122)rt_nil_check(F->x_2638)).elem_;
F->y_2639 = (*(P122)rt_nil_check(F->y_2639)).elem_;
}
}
L_end_2645: ;
if ((!((f_same_455(F->up, F->x_2638, F->y_2639) || f_derived_from_462(F->up, F->x_2638, F->y_2639)) || f_derived_from_462(F->up, F->y_2639, F->x_2638)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_924)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_496(F->up, F->aty_926)), rt_g_lit(" to ", 4)), f_kind_name_496(F->up, F->t_925)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_505(F->up, F->t_925, &F->ct_2640);
f_ctype_505(F->up, F->aty_926, &F->act_2641);
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_925)).elem_, &F->et_2642);
f_new_name_242(F->up, rt_g_lit("cv", 2), &F->tmp_2643);
(*F->r_929) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->act_2641))), rt_g_lit(" s_ = ", 6)), F->a_928), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->ct_2640))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit(".p = (", 6)), (*(P140)rt_nil_check(F->et_2642))), rt_g_lit(" *)s_.p; ", 9)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("; })", 4)));
if ((((*(P122)rt_nil_check(F->t_925)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_925)).tcons_)).hi_ != NULL))) {
(*F->r_929) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2640))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("x = ", 4)), (*(P140)rt_nil_check((*F->r_929)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_925)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P122)rt_nil_check(F->t_925)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_257(F->up)), rt_g_lit("array length", 12)), f_q_257(F->up)), rt_g_lit("); ", 3)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("x.lo = l_; ", 11)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("x.hi = h_; ", 11)), (*(P140)rt_nil_check(F->tmp_2643))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_935(struct f_greenc_1fr *up_, P174 e_931, P122 want_932, P122 *t_933, P140 *r_934) {
  struct f_gen_attr_935fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_931 = e_931;
F->want_932 = want_932;
F->t_933 = t_933;
F->r_934 = r_934;
F->a_2650 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_931)).name_)));
F->y_2651 = NULL;
F->tt_2652 = NULL;
F->aty_2653 = NULL;
F->v_2654 = NULL;
F->d_2655 = NULL;
F->c_2656 = NULL;
F->n_2657 = INT64_MIN;
F->ro_2658 = INT_MIN;
if ((((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1162(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_)).name_))))) {
f_member_attr_1235(F->up, F->e_931, &(*F->t_933), &(*F->r_934));
goto ret_;
}
if ((eq_rt_gstr(F->a_2650, rt_g_lit("ADDRESS", 7)) && f_is_object_790(F->up, (*(P174)rt_nil_check(F->e_931)).a_))) {
f_lvalue_798(F->up, (*(P174)rt_nil_check(F->e_931)).a_, &F->v_2654, &F->aty_2653, &F->c_2656, &F->ro_2658);
 (void)rt_range(F->ro_2658, 0, 1);
(*F->t_933) = F->up->ty_int_156;
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2650, rt_g_lit("COUNT", 5)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2651 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_)).name_)));
if ((((F->y_2651 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)10LL))) && ((*(P117)rt_nil_check(F->y_2651)).c_ != NULL))) {
if ((!f_same_task_438(F->up, (*(P117)rt_nil_check(F->y_2651)).members_, F->up->cur_task_211))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1185(F->up, F->y_2651, rt_g_lit("", 0), &F->v_2654);
f_gexpr_842(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).b_, NULL, &F->aty_2653, &F->d_2655);
f_entry_family_slot_1201(F->up, F->y_2651, (*(P140)rt_nil_check(F->v_2654)), (*(P140)rt_nil_check(F->d_2655)), &F->v_2654);
(*F->t_933) = F->up->ty_int_156;
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->v_2654))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_))) {
F->y_2651 = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)), G_NV((*(P174)rt_nil_check(F->e_931)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2651 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)));
if (((F->y_2651 == NULL) && (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_957(F->up, F->e_931, &(*F->t_933), &(*F->r_934));
goto ret_;
}
if (((eq_rt_gstr(F->a_2650, rt_g_lit("ADDRESS", 7)) && (F->y_2651 != NULL)) && ((((G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)3LL))) || (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)8LL))) || (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)9LL))))) {
(*F->t_933) = F->up->ty_int_156;
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_428(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_2651)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P117)rt_nil_check(F->y_2651)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2651 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2650, rt_g_lit("CLOCK", 5)))) {
(*F->t_933) = F->up->ty_time_171;
(*F->r_934) = f_mk_239(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2651 == NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_931)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2650, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2650, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_933) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2650, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2651 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) == ((rt_int)5LL)))) {
F->tt_2652 = (*(P117)rt_nil_check(F->y_2651)).t_;
F->c_2656 = (*(P117)rt_nil_check(F->y_2651)).c_;
if (eq_rt_gstr(F->a_2650, rt_g_lit("SIZE", 4))) {
(*F->t_933) = F->up->ty_int_156;
f_type_bits_939(F->up, F->tt_2652, F->c_2656, &(*F->r_934));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2650, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2650, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2650, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2650, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2650, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2650, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2650, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2650, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2650, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_949(F->up, F->e_931, F->tt_2652, F->c_2656, &(*F->t_933), &(*F->r_934));
goto ret_;
}
if (eq_rt_gstr(F->a_2650, rt_g_lit("ORD", 3))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_931)).b_, F->tt_2652, &F->aty_2653, &F->v_2654);
f_check_type_500(F->up, F->aty_2653, F->tt_2652, G_NV((*(P174)rt_nil_check(F->e_931)).line_));
(*F->t_933) = F->up->ty_int_156;
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2650, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2650, rt_g_lit("REP", 3)))) {
f_val_rep_982(F->up, F->e_931, F->tt_2652, F->c_2656, &(*F->t_933), &(*F->r_934));
goto ret_;
} else if ((eq_rt_gstr(F->a_2650, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2650, rt_g_lit("PRED", 4)))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_931)).b_, F->tt_2652, &F->aty_2653, &F->v_2654);
(*F->t_933) = F->tt_2652;
if ((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2650, rt_g_lit("SUCC", 4))) {
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2650, rt_g_lit("SUCC", 4))) {
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit(" + 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2656)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2656)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_934) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2654))), rt_g_lit(" - 1, ", 6)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2656)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_2656)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2650, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2650, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_973(F->up, F->e_931, F->tt_2652, F->c_2656, &(*F->t_933), &(*F->r_934));
goto ret_;
} else if ((eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2650, rt_g_lit("LAST", 4)))) {
(*F->t_933) = F->tt_2652;
if (f_bounded_488(F->up, F->c_2656)) {
if (eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5))) {
(*F->r_934) = (*(P178)rt_nil_check(F->c_2656)).lo_;
} else {
(*F->r_934) = (*(P178)rt_nil_check(F->c_2656)).hi_;
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5))) {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)3LL)) && (f_root_459(F->up, F->tt_2652) == F->up->ty_sfloat_169))) {
if (eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5))) {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5))) {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_934) = f_mk_239(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2650));
}
goto ret_;
}
f_other_attr_1231(F->up, F->e_931, F->y_2651, &(*F->t_933), &(*F->r_934));
goto ret_;
}
if (((F->y_2651 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) != ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->y_2651)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1231(F->up, F->e_931, F->y_2651, &(*F->t_933), &(*F->r_934));
goto ret_;
}
if (((eq_rt_gstr(F->a_2650, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2650, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2650, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_953(F->up, F->e_931, &(*F->t_933), &(*F->r_934));
goto ret_;
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_931)).a_, NULL, &F->tt_2652, &F->v_2654);
if (eq_rt_gstr(F->a_2650, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) != ((rt_int)8LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_933) = F->up->ty_int_156;
(*F->r_934) = f_mk_239(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2650, rt_g_lit("SIZE", 4))) {
(*F->t_933) = F->up->ty_int_156;
f_object_bits_943(F->up, F->tt_2652, (*(P140)rt_nil_check(F->v_2654)), &(*F->r_934));
goto ret_;
}
if ((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_621(F->up, F->tt_2652);
f_deref_788(F->up, (*(P140)rt_nil_check(F->v_2654)), F->tt_2652, &F->d_2655);
F->v_2654 = F->d_2655;
F->tt_2652 = (*(P122)rt_nil_check(F->tt_2652)).target_;
}
(*F->t_933) = F->up->ty_int_156;
if (((G_NV((*(P122)rt_nil_check(F->tt_2652)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2650, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2650, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2650, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_967(F->up, F->e_931, F->tt_2652, (*(P140)rt_nil_check(F->v_2654)), &(*F->t_933), &(*F->r_934));
goto ret_;
}
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_931)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2650), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_939(struct f_greenc_1fr *up_, P122 t_936, P178 c_937, P140 *r_938) {
  struct f_type_bits_939fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_936 = t_936;
F->c_937 = c_937;
F->r_938 = r_938;
F->ct_2659 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_488(F->up, F->c_937))) {
f_fail_260(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_936)).elem_, &F->ct_2659);
(*F->r_938) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_937)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_937)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P140)rt_nil_check(F->ct_2659))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)11LL)) || (G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)2LL)))) {
(*F->r_938) = f_mk_239(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_319(F->up, (*(P122)rt_nil_check(F->t_936)).lits_) <= ((rt_int)256LL))) {
(*F->r_938) = f_mk_239(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_938) = f_mk_239(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)1LL)) && (f_root_459(F->up, F->t_936) == F->up->ty_short_167))) {
(*F->r_938) = f_mk_239(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P122)rt_nil_check(F->t_936)).kind_) == ((rt_int)3LL)) && (f_root_459(F->up, F->t_936) == F->up->ty_sfloat_169))) {
(*F->r_938) = f_mk_239(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_505(F->up, F->t_936, &F->ct_2659);
(*F->r_938) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P140)rt_nil_check(F->ct_2659))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_943(struct f_greenc_1fr *up_, P122 t_940, rt_gstr v_941, P140 *r_942) {
  struct f_object_bits_943fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_940 = t_940;
F->v_941 = cp_rt_gstr(v_941);
F->r_942 = r_942;
F->ct_2660 = NULL;
F->et_2661 = NULL;
if ((G_NV((*(P122)rt_nil_check(F->t_940)).kind_) == ((rt_int)6LL))) {
f_ctype_505(F->up, F->t_940, &F->ct_2660);
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->t_940)).elem_, &F->et_2661);
(*F->r_942) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2660))), rt_g_lit(" sz_ = ", 7)), F->v_941), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P140)rt_nil_check(F->et_2661))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_939(F->up, F->t_940, NULL, &(*F->r_942));
(*F->r_942) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_941), rt_g_lit("); ", 3)), (*(P140)rt_nil_check((*F->r_942)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_949(struct f_greenc_1fr *up_, P174 e_944, P122 tt_945, P178 c_946, P122 *t_947, P140 *r_948) {
  struct f_numeric_attr_949fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_944 = e_944;
F->tt_945 = tt_945;
F->c_946 = c_946;
F->t_947 = t_947;
F->r_948 = r_948;
F->a_2662 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_944)).name_)));
F->short_2663 = INT_MIN;
F->short_2663 = (f_root_459(F->up, F->tt_945) == F->up->ty_sfloat_169);
(*F->t_947) = F->up->ty_int_156;
if (eq_rt_gstr(F->a_2662, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P122)rt_nil_check(F->tt_945)).kind_) != ((rt_int)8LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_944)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_464(F->up, F->tt_945))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_944)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_945)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2662, rt_g_lit("DIGITS", 6))) {
if (((F->c_946 != NULL) && ((*(P178)rt_nil_check(F->c_946)).acc_ != NULL))) {
(*F->r_948) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_948) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P122)rt_nil_check(F->tt_945)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2663)) {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2663)) {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2663)) {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("SMALL", 5))) {
(*F->t_947) = F->tt_945;
if (G_NV(F->short_2663)) {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("LARGE", 5))) {
(*F->t_947) = F->tt_945;
if (G_NV(F->short_2663)) {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_948) = f_mk_239(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_944)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P122)rt_nil_check(F->tt_945)).kind_) == ((rt_int)16LL)) && ((*(P122)rt_nil_check(F->tt_945)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2662, rt_g_lit("DELTA", 5))) {
(*F->t_947) = F->tt_945;
if (((F->c_946 != NULL) && ((*(P178)rt_nil_check(F->c_946)).acc_ != NULL))) {
(*F->r_948) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_948) = (*(P122)rt_nil_check(F->tt_945)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("SMALL", 5))) {
(*F->t_947) = F->tt_945;
(*F->r_948) = (*(P122)rt_nil_check(F->tt_945)).fsmall_;
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("LARGE", 5))) {
(*F->t_947) = F->tt_945;
(*F->r_948) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_945)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2662, rt_g_lit("BITS", 4))) {
(*F->r_948) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->tt_945)).fsmall_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_946)).hi_))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_944)).line_), cat_rt_gstr(F->a_2662, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_944)).line_), cat_rt_gstr(F->a_2662, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_953(struct f_greenc_1fr *up_, P174 e_950, P122 *t_951, P140 *r_952) {
  struct f_component_attr_953fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_950 = e_950;
F->t_951 = t_951;
F->r_952 = r_952;
F->bt_2664 = NULL;
F->v_2665 = NULL;
F->ct_2666 = NULL;
F->f_2667 = NULL;
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_950)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_950)).a_)).a_, NULL, &F->bt_2664, &F->v_2665);
if ((G_NV((*(P122)rt_nil_check(F->bt_2664)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_621(F->up, F->bt_2664);
F->bt_2664 = (*(P122)rt_nil_check(F->bt_2664)).target_;
}
if ((G_NV((*(P122)rt_nil_check(F->bt_2664)).kind_) != ((rt_int)7LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2667 = (*(P122)rt_nil_check(F->bt_2664)).fields_;
while (((F->f_2667 != NULL) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2667)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_950)).a_)).name_)))))) {
F->f_2667 = (*(P1962)rt_nil_check(F->f_2667)).next_;
}
L_end_2668: ;
if ((F->f_2667 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_950)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_496(F->up, F->bt_2664), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_950)).a_)).name_))));
}
f_ctype_505(F->up, F->bt_2664, &F->ct_2666);
(*F->t_951) = F->up->ty_int_156;
f_component_place_572(F->up, F->bt_2664, F->f_2667, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_950)).name_)), (*(P140)rt_nil_check(F->ct_2666)), &(*F->r_952));
ret_:

  return;
}

static void f_config_attr_957(struct f_greenc_1fr *up_, P174 e_954, P122 *t_955, P140 *r_956) {
  struct f_config_attr_957fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_954 = e_954;
F->t_955 = t_955;
F->r_956 = r_956;
F->a_2669 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_954)).name_)));
F->p_2670 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_954)).a_)).name_)));
F->nm_2671 = NULL;
F->nm_2671 = F->up->conf_system_234;
(*F->t_955) = F->up->ty_int_156;
if (eq_rt_gstr(F->p_2670, rt_g_lit("OPTION", 6))) {
(*F->t_955) = F->up->ty_bool_157;
if (eq_rt_gstr(F->a_2669, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_237 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_237)), rt_g_lit("TIME", 4)))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("1", 1));
} else {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_237 != NULL) && eq_rt_gstr((*(P140)rt_nil_check(F->up->conf_optimize_237)), rt_g_lit("SPACE", 5)))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("1", 1));
} else {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_954)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("CLOCK", 5))) {
(*F->t_955) = F->up->ty_time_171;
(*F->r_956) = f_mk_239(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("NAME", 4))) {
if ((F->nm_2671 == NULL)) {
F->nm_2671 = f_mk_239(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_955) = F->up->ty_string_160;
(*F->r_956) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_827(F->up, (*(P140)rt_nil_check(F->nm_2671)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2673 = (*(P140)rt_nil_check(F->nm_2671)); at2673.hi >= at2673.lo ? at2673.hi - at2673.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_956) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_235)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_956) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_236)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("MAX_INT", 7))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2669, rt_g_lit("MIN_INT", 7))) {
(*F->r_956) = f_mk_239(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_954)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2669), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_961(struct f_greenc_1fr *up_, P174 e_958, P122 arrt_959, rt_int *n_960) {
  struct f_attr_dim_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_958 = e_958;
F->arrt_959 = arrt_959;
F->n_960 = n_960;
F->ok_2674 = INT_MIN;
(*F->n_960) = ((rt_int)1LL);
if (((*(P174)rt_nil_check(F->e_958)).b_ != NULL)) {
f_manifest_517(F->up, (*(P174)rt_nil_check(F->e_958)).b_, &(*F->n_960), &F->ok_2674);
 (void)rt_range(F->ok_2674, 0, 1);
if ((!G_NV(F->ok_2674))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_958)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_958)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_960)) < ((rt_int)1LL)) || (G_NV((*F->n_960)) > G_NV((*(P122)rt_nil_check(F->arrt_959)).dims_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_958)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_496(F->up, F->arrt_959), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_960))))));
}
ret_:

  return;
}

static void f_object_array_attr_967(struct f_greenc_1fr *up_, P174 e_962, P122 arrt_963, rt_gstr v_964, P122 *t_965, P140 *r_966) {
  struct f_object_array_attr_967fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_962 = e_962;
F->arrt_963 = arrt_963;
F->v_964 = cp_rt_gstr(v_964);
F->t_965 = t_965;
F->r_966 = r_966;
F->n_2675 = INT64_MIN;
F->it_2676 = NULL;
F->it_2676 = F->arrt_963;
F->ct_2677 = NULL;
F->tmp_2678 = NULL;
F->p_2679 = NULL;
F->lo_2680 = NULL;
F->hi_2681 = NULL;
f_attr_dim_961(F->up, F->e_962, F->arrt_963, &F->n_2675);
f_ctype_505(F->up, F->arrt_963, &F->ct_2677);
f_new_name_242(F->up, rt_g_lit("at", 2), &F->tmp_2678);
F->p_2679 = F->tmp_2678;
{ rt_int lo2684 = ((rt_int)2LL), hi2685 = G_NV(F->n_2675);
for (rt_int it2686 = lo2684; it2686 <= hi2685; it2686++) {
F->k_2683 = it2686;
F->it_2676 = (*(P122)rt_nil_check(F->it_2676)).elem_;
}
}
L_end_2682: ;
if ((G_NV(F->n_2675) == ((rt_int)1LL))) {
F->lo_2680 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2679)), rt_g_lit(".lo", 3)));
F->hi_2681 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2679)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2689 = ((rt_int)3LL), hi2690 = G_NV(F->n_2675);
for (rt_int it2691 = lo2689; it2691 <= hi2690; it2691++) {
F->k_2688 = it2691;
F->p_2679 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2679)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2687: ;
F->lo_2680 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2679)), rt_g_lit(".lo2", 4)));
F->hi_2681 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->p_2679)), rt_g_lit(".hi2", 4)));
}
(*F->t_965) = (*(P122)rt_nil_check(F->it_2676)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_962)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_966) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2677))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2678))), rt_g_lit(" = ", 3)), F->v_964), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->lo_2680))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_962)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_966) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2677))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2678))), rt_g_lit(" = ", 3)), F->v_964), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2681))), rt_g_lit("; })", 4)));
} else {
(*F->t_965) = F->up->ty_int_156;
(*F->r_966) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2677))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2678))), rt_g_lit(" = ", 3)), F->v_964), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_2681))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_2680))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_2681))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_2680))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_973(struct f_greenc_1fr *up_, P174 e_968, P122 arrt_969, P178 c_970, P122 *t_971, P140 *r_972) {
  struct f_type_array_attr_973fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_968 = e_968;
F->arrt_969 = arrt_969;
F->c_970 = c_970;
F->t_971 = t_971;
F->r_972 = r_972;
F->n_2692 = INT64_MIN;
F->it_2693 = NULL;
F->it_2693 = F->arrt_969;
F->cc_2694 = NULL;
F->cc_2694 = F->c_970;
f_attr_dim_961(F->up, F->e_968, F->arrt_969, &F->n_2692);
{ rt_int lo2697 = ((rt_int)2LL), hi2698 = G_NV(F->n_2692);
for (rt_int it2699 = lo2697; it2699 <= hi2698; it2699++) {
F->k_2696 = it2699;
F->it_2693 = (*(P122)rt_nil_check(F->it_2693)).elem_;
if ((F->cc_2694 != NULL)) {
F->cc_2694 = (*(P178)rt_nil_check(F->cc_2694)).inner_;
}
}
}
L_end_2695: ;
if (((F->cc_2694 == NULL) || ((*(P178)rt_nil_check(F->cc_2694)).lo_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_968)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_496(F->up, F->arrt_969)), rt_g_lit(" are not known here: ", 21)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_968)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_971) = (*(P122)rt_nil_check(F->it_2693)).idx_;
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_968)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_972) = (*(P178)rt_nil_check(F->cc_2694)).lo_;
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_968)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_972) = (*(P178)rt_nil_check(F->cc_2694)).hi_;
} else {
(*F->t_971) = F->up->ty_int_156;
(*F->r_972) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2694)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->cc_2694)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_976(struct f_greenc_1fr *up_, P122 t_974, P140 *r_975) {
  struct f_lit_table_976fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_974 = t_974;
F->r_975 = r_975;
F->l_2700 = NULL;
F->l_2700 = (*(P122)rt_nil_check(F->t_974)).lits_;
F->s_2701 = NULL;
F->s_2701 = f_mk_239(F->up, rt_g_lit("", 0));
if (((*(P122)rt_nil_check(F->t_974)).littab_ == NULL)) {
f_new_name_242(F->up, rt_g_lit("lits", 4), &(*(P122)rt_nil_check(F->t_974)).littab_);
while ((F->l_2700 != NULL)) {
if ((({ rt_gstr at2703 = (*(P140)rt_nil_check(F->s_2701)); at2703.hi >= at2703.lo ? at2703.hi - at2703.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2701 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2701)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P174)rt_nil_check(F->l_2700)).kind_) == ((rt_int)3LL))) {
F->s_2701 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2701)), f_c_string_827(F->up, cat_rt_gstr(cat_rt_gstr(f_q_257(F->up), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2700)).name_))), f_q_257(F->up)))));
} else {
F->s_2701 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->s_2701)), f_c_string_827(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->l_2700)).name_)))));
}
F->l_2700 = (*(P174)rt_nil_check(F->l_2700)).next_;
}
L_end_2702: ;
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P140)rt_nil_check((*(P122)rt_nil_check(F->t_974)).littab_))), rt_g_lit("[] = {", 6)), (*(P140)rt_nil_check(F->s_2701))), rt_g_lit("};", 2)));
}
(*F->r_975) = (*(P122)rt_nil_check(F->t_974)).littab_;
ret_:

  return;
}

static void f_val_rep_982(struct f_greenc_1fr *up_, P174 e_977, P122 tt_978, P178 c_979, P122 *t_980, P140 *r_981) {
  struct f_val_rep_982fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_977 = e_977;
F->tt_978 = tt_978;
F->c_979 = c_979;
F->t_980 = t_980;
F->r_981 = r_981;
F->aty_2704 = NULL;
F->v_2705 = NULL;
F->lt_2706 = NULL;
F->n_2707 = INT64_MIN;
if (((*(P174)rt_nil_check(F->e_977)).b_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_977)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_977)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_977)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_977)).b_, F->tt_978, &F->aty_2704, &F->v_2705);
f_check_type_500(F->up, F->aty_2704, F->tt_978, G_NV((*(P174)rt_nil_check(F->e_977)).line_));
(*F->t_980) = F->up->ty_string_160;
if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)1LL))) {
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)3LL))) {
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)2LL))) {
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)11LL))) {
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)4LL))) {
f_lit_table_976(F->up, F->tt_978, &F->lt_2706);
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2706))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_319(F->up, (*(P122)rt_nil_check(F->tt_978)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_977)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P140)rt_nil_check((*F->r_981)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_980) = F->tt_978;
if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)1LL))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_977)).b_, F->up->ty_string_160, &F->aty_2704, &F->v_2705);
f_check_type_500(F->up, F->aty_2704, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_977)).line_));
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit("))", 2)));
if (f_bounded_488(F->up, F->c_979)) {
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check((*F->r_981)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_979)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_979)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)3LL))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_977)).b_, F->up->ty_string_160, &F->aty_2704, &F->v_2705);
f_check_type_500(F->up, F->aty_2704, F->up->ty_string_160, G_NV((*(P174)rt_nil_check(F->e_977)).line_));
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)2LL)) || (G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)11LL))) || (G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)4LL)))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_977)).b_, NULL, &F->aty_2704, &F->v_2705);
if (f_is_string_584(F->up, F->aty_2704)) {
F->v_2705 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)2LL))) {
F->v_2705 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->tt_978)).kind_) == ((rt_int)11LL))) {
F->v_2705 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P140)rt_nil_check(F->v_2705))), one_rt_gstr(41)));
} else {
f_lit_table_976(F->up, F->tt_978, &F->lt_2706);
F->v_2705 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lt_2706))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_319(F->up, (*(P122)rt_nil_check(F->tt_978)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_500(F->up, F->aty_2704, F->up->ty_int_156, G_NV((*(P174)rt_nil_check(F->e_977)).line_));
F->v_2705 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit(" - 1)", 5)));
}
(*F->r_981) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2705))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_979)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_979)).hi_))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_977)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_987(struct f_greenc_1fr *up_, P174 e_983, P122 want_984, P122 *t_985, P140 *r_986) {
  struct f_allocator_987fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_983 = e_983;
F->want_984 = want_984;
F->t_985 = t_985;
F->r_986 = r_986;
F->y_2708 = NULL;
F->y_2708 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_983)).name_)));
F->target_2709 = NULL;
F->vt_2710 = NULL;
F->ct_2711 = NULL;
F->pt_2712 = NULL;
F->cell_2713 = NULL;
F->v_2714 = NULL;
F->x_2715 = NULL;
if (((F->want_984 == NULL) || (G_NV((*(P122)rt_nil_check(F->want_984)).kind_) != ((rt_int)8LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_983)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2708 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_2708)).kind_) != ((rt_int)5LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_983)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_983)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_621(F->up, F->want_984);
F->target_2709 = (*(P122)rt_nil_check(F->want_984)).target_;
if ((!f_same_455(F->up, (*(P117)rt_nil_check(F->y_2708)).t_, F->want_984))) {
f_check_type_500(F->up, (*(P117)rt_nil_check(F->y_2708)).t_, F->target_2709, G_NV((*(P174)rt_nil_check(F->e_983)).line_));
}
f_ctype_505(F->up, F->target_2709, &F->ct_2711);
f_ctype_505(F->up, F->want_984, &F->pt_2712);
f_new_name_242(F->up, rt_g_lit("cell", 4), &F->cell_2713);
if (((*(P174)rt_nil_check(F->e_983)).a_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_983)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_228 != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_983)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_983)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_992(F->up, (*(P174)rt_nil_check(F->e_983)).a_, F->target_2709, &F->vt_2710, &F->v_2714);
} else {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_983)).a_, F->target_2709, &F->vt_2710, &F->v_2714);
}
f_check_type_500(F->up, F->vt_2710, F->target_2709, G_NV((*(P174)rt_nil_check(F->e_983)).line_));
f_copy_code_637(F->up, F->target_2709, (*(P140)rt_nil_check(F->v_2714)), &F->x_2715);
(*F->t_985) = F->want_984;
(*F->r_986) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2711))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check(F->cell_2713))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P140)rt_nil_check(F->ct_2711))), rt_g_lit(")); *", 5)), (*(P140)rt_nil_check(F->cell_2713))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2715))), rt_g_lit("; (", 3)), (*(P140)rt_nil_check(F->pt_2712))), one_rt_gstr(41)), (*(P140)rt_nil_check(F->cell_2713))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_992(struct f_greenc_1fr *up_, P174 e_988, P122 want_989, P122 *t_990, P140 *r_991) {
  struct f_aggregate_992fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_988 = e_988;
F->want_989 = want_989;
F->t_990 = t_990;
F->r_991 = r_991;
F->b_2716 = NULL;
F->b_2716 = F->up->agg_bounds_181;
F->up->agg_bounds_181 = NULL;
if ((F->want_989 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_990) = F->want_989;
if ((G_NV((*(P122)rt_nil_check(F->want_989)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_1014(F->up, F->e_988, F->want_989, &(*F->r_991));
} else if ((G_NV((*(P122)rt_nil_check(F->want_989)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_1032(F->up, F->e_988, F->want_989, F->b_2716, &(*F->r_991));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_988)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_496(F->up, F->want_989)));
}
ret_:

  return;
}

static void f_captured_995(struct f_greenc_1fr *up_, P126 b_993, P140 *r_994) {
  struct f_captured_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_993 = b_993;
F->r_994 = r_994;
F->l_2717 = NULL;
F->l_2717 = (*(P126)rt_nil_check(F->b_993)).head_;
(*F->r_994) = f_mk_239(F->up, rt_g_lit("", 0));
while ((F->l_2717 != NULL)) {
(*F->r_994) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_994))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2717)).s_))));
F->l_2717 = (*(P151)rt_nil_check(F->l_2717)).next_;
}
L_end_2718: ;
ret_:

  return;
}

static P1962 f_field_at_998(struct f_greenc_1fr *up_, P122 rt_996, rt_int k_997) {
  struct f_field_at_998fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_996 = rt_996;
F->k_997 = k_997;
F->f_2719 = NULL;
F->f_2719 = (*(P122)rt_nil_check(F->rt_996)).fields_;
{ rt_int lo2722 = ((rt_int)2LL), hi2723 = F->k_997;
for (rt_int it2724 = lo2722; it2724 <= hi2723; it2724++) {
F->i_2721 = it2724;
F->f_2719 = (*(P1962)rt_nil_check(F->f_2719)).next_;
}
}
L_end_2720: ;
F->result_ = F->f_2719;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_1001(struct f_greenc_1fr *up_, P174 x_999, P1962 f_1000) {
  struct f_names_field_1001fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_999 = x_999;
F->f_1000 = f_1000;
if ((G_NV((*(P174)rt_nil_check(F->x_999)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_999)).name_)), (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_1000)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P174 f_item_for_1006(struct f_greenc_1fr *up_, P174 e_1002, P122 rt_1003, rt_int k_1004, rt_int p_1005) {
  struct f_item_for_1006fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1002 = e_1002;
F->rt_1003 = rt_1003;
F->k_1004 = k_1004;
F->p_1005 = p_1005;
F->it_2725 = NULL;
F->it_2725 = (*(P174)rt_nil_check(F->e_1002)).a_;
F->lab_2726 = NULL;
F->n_2727 = INT64_MIN;
F->n_2727 = ((rt_int)0LL);
while ((F->it_2725 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2725)).a_ == NULL)) {
F->n_2727 = rt_add(G_NV(F->n_2727), ((rt_int)1LL));
if ((G_NV(F->n_2727) == F->p_1005)) {
F->result_ = (*(P174)rt_nil_check(F->it_2725)).b_;
goto ret_;
}
} else {
F->lab_2726 = (*(P174)rt_nil_check(F->it_2725)).a_;
while ((F->lab_2726 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->lab_2726)).flag_) == ((rt_int)1LL)) || f_names_field_1001(F->up, (*(P174)rt_nil_check(F->lab_2726)).a_, f_field_at_998(F->up, F->rt_1003, F->k_1004)))) {
F->result_ = (*(P174)rt_nil_check(F->it_2725)).b_;
goto ret_;
}
F->lab_2726 = (*(P174)rt_nil_check(F->lab_2726)).next_;
}
L_end_2729: ;
}
F->it_2725 = (*(P174)rt_nil_check(F->it_2725)).next_;
}
L_end_2728: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_1010(struct f_greenc_1fr *up_, P174 arm_1007, rt_int v_1008, int *res_1009) {
  struct f_arm_holds_1010fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_1007 = arm_1007;
F->v_1008 = v_1008;
F->res_1009 = res_1009;
F->l_2730 = NULL;
F->l_2730 = (*(P174)rt_nil_check(F->arm_1007)).a_;
F->lo_2731 = INT64_MIN;
F->hi_2732 = INT64_MIN;
F->ok_2733 = INT_MIN;
(*F->res_1009) = 0;
while ((F->l_2730 != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->l_2730)).a_, &F->lo_2731, &F->ok_2733);
 (void)rt_range(F->ok_2733, 0, 1);
F->hi_2732 = G_NV(F->lo_2731);
if (((*(P174)rt_nil_check(F->l_2730)).b_ != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->l_2730)).b_, &F->hi_2732, &F->ok_2733);
 (void)rt_range(F->ok_2733, 0, 1);
}
if (((F->v_1008 >= G_NV(F->lo_2731)) && (F->v_1008 <= G_NV(F->hi_2732)))) {
(*F->res_1009) = 1;
}
F->l_2730 = (*(P174)rt_nil_check(F->l_2730)).next_;
}
L_end_2734: ;
ret_:

  return;
}

static void f_record_aggregate_1014(struct f_greenc_1fr *up_, P174 e_1011, P122 rt_1012, P140 *r_1013) {
  struct f_record_aggregate_1014fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1011 = e_1011;
F->rt_1012 = rt_1012;
F->r_1013 = r_1013;
F->it_2735 = NULL;
F->it_2735 = (*(P174)rt_nil_check(F->e_1011)).a_;
F->lab_2736 = NULL;
F->vn_2737 = NULL;
F->a_2738 = NULL;
F->f_2739 = NULL;
F->g_2740 = NULL;
F->n_2741 = INT64_MIN;
F->n_2741 = f_field_count_502(F->up, F->rt_1012);
F->done_2743.lo = ((rt_int)1LL); F->done_2743.hi = ((rt_int)200LL);
F->done_2743.lo2 = 1; F->done_2743.hi2 = 1;
F->done_2743.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2743));
for (rt_int i2744 = 0; i2744 < G_CNT(F->done_2743); i2744++) F->done_2743.p[i2744] = INT_MIN;
F->active_2745.lo = ((rt_int)1LL); F->active_2745.hi = ((rt_int)200LL);
F->active_2745.lo2 = 1; F->active_2745.hi2 = 1;
F->active_2745.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2745));
for (rt_int i2746 = 0; i2746 < G_CNT(F->active_2745); i2746++) F->active_2745.p[i2746] = INT_MIN;
F->dvs_2748.lo = ((rt_int)1LL); F->dvs_2748.hi = ((rt_int)200LL);
F->dvs_2748.lo2 = 1; F->dvs_2748.hi2 = 1;
F->dvs_2748.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2748));
for (rt_int i2749 = 0; i2749 < G_CNT(F->dvs_2748); i2749++) F->dvs_2748.p[i2749] = INT64_MIN;
F->order_2751.lo = ((rt_int)1LL); F->order_2751.hi = ((rt_int)200LL);
F->order_2751.lo2 = 1; F->order_2751.hi2 = 1;
F->order_2751.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2751));
for (rt_int i2752 = 0; i2752 < G_CNT(F->order_2751); i2752++) F->order_2751.p[i2752] = INT64_MIN;
F->norder_2753 = INT64_MIN;
F->norder_2753 = ((rt_int)0LL);
F->nung_2754 = INT64_MIN;
F->nung_2754 = ((rt_int)0LL);
F->k_2755 = INT64_MIN;
F->k_2755 = ((rt_int)0LL);
F->d_2756 = INT64_MIN;
F->d_2756 = ((rt_int)0LL);
F->npos_2757 = INT64_MIN;
F->npos_2757 = ((rt_int)0LL);
F->saved_2758 = NULL;
F->saved_2758 = F->up->code_136;
F->ct_2759 = NULL;
F->tmp_2760 = NULL;
F->parts_2761 = NULL;
F->named_2762 = INT_MIN;
F->named_2762 = 0;
F->ok_2763 = INT_MIN;
F->ok_2763 = 0;
F->holds_2764 = INT_MIN;
F->holds_2764 = 0;
if ((G_NV((*(P122)rt_nil_check(F->rt_1012)).priv_) && (!f_inside_package_1091(F->up, (*(P122)rt_nil_check(F->rt_1012)).decl_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_496(F->up, F->rt_1012)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2741) > ((rt_int)200LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2739 = (*(P122)rt_nil_check(F->rt_1012)).fields_;
{ rt_int lo2767 = ((rt_int)1LL), hi2768 = G_NV(F->n_2741);
for (rt_int it2769 = lo2767; it2769 <= hi2768; it2769++) {
F->i_2766 = it2769;
(*({ A2742 *ix2770 = &(F->done_2743); &ix2770->p[rt_index(F->i_2766, ix2770->lo, ix2770->hi) - ix2770->lo]; })) = 0;
(*({ A2742 *ix2771 = &(F->active_2745); &ix2771->p[rt_index(F->i_2766, ix2771->lo, ix2771->hi) - ix2771->lo]; })) = ((*(P1962)rt_nil_check(F->f_2739)).guard_ == NULL);
if (G_NV(({ A2742 ix2772 = F->active_2745; ix2772.p[rt_index(F->i_2766, ix2772.lo, ix2772.hi) - ix2772.lo]; }))) {
F->norder_2753 = rt_add(G_NV(F->norder_2753), ((rt_int)1LL));
(*({ A2750 *ix2773 = &(F->order_2751); &ix2773->p[rt_index(G_NV(F->norder_2753), ix2773->lo, ix2773->hi) - ix2773->lo]; })) = F->i_2766;
}
F->f_2739 = (*(P1962)rt_nil_check(F->f_2739)).next_;
}
}
L_end_2765: ;
F->nung_2754 = G_NV(F->norder_2753);
{ rt_int lo2776 = ((rt_int)1LL), hi2777 = G_NV(F->nung_2754);
for (rt_int it2778 = lo2776; it2778 <= hi2777; it2778++) {
F->p_2775 = it2778;
F->f_2739 = f_field_at_998(F->up, F->rt_1012, G_NV(({ A2750 ix2780 = F->order_2751; ix2780.p[rt_index(F->p_2775, ix2780.lo, ix2780.hi) - ix2780.lo]; })));
if (G_NV((*(P1962)rt_nil_check(F->f_2739)).is_discr_)) {
F->vn_2737 = f_item_for_1006(F->up, F->e_1011, F->rt_1012, G_NV(({ A2750 ix2782 = F->order_2751; ix2782.p[rt_index(F->p_2775, ix2782.lo, ix2782.hi) - ix2782.lo]; })), F->p_2775);
if ((F->vn_2737 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2739)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_1027(F->up, F->vn_2737, &(*({ A2747 *ix2786 = &(F->dvs_2748); &ix2786->p[rt_index(G_NV(({ A2750 ix2785 = F->order_2751; ix2785.p[rt_index(F->p_2775, ix2785.lo, ix2785.hi) - ix2785.lo]; })), ix2786->lo, ix2786->hi) - ix2786->lo]; })), &F->ok_2763);
 (void)rt_range(F->ok_2763, 0, 1);
if (((!G_NV(F->ok_2763)) && f_is_enum_lit_825(F->up, F->vn_2737))) {
F->ok_2763 = 1;
(*({ A2747 *ix2788 = &(F->dvs_2748); &ix2788->p[rt_index(G_NV(({ A2750 ix2787 = F->order_2751; ix2787.p[rt_index(F->p_2775, ix2787.lo, ix2787.hi) - ix2787.lo]; })), ix2788->lo, ix2788->hi) - ix2788->lo]; })) = G_NV((*(P117)rt_nil_check(f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->vn_2737)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2763)) && ((*(P122)rt_nil_check(F->rt_1012)).fields_ != NULL))) {
F->g_2740 = NULL;
F->d_2756 = ((rt_int)0LL);
F->a_2738 = NULL;
F->f_2739 = (*(P122)rt_nil_check(F->rt_1012)).fields_;
while ((F->f_2739 != NULL)) {
F->g_2740 = (*(P1962)rt_nil_check(F->f_2739)).guard_;
while ((F->g_2740 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P2087)rt_nil_check(F->g_2740)).disc_)), (*(P140)rt_nil_check((*(P1962)rt_nil_check(f_field_at_998(F->up, F->rt_1012, G_NV(({ A2750 ix2792 = F->order_2751; ix2792.p[rt_index(F->p_2775, ix2792.lo, ix2792.hi) - ix2792.lo]; }))))).name_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P140)rt_nil_check((*(P2087)rt_nil_check(F->g_2740)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2740 = (*(P2087)rt_nil_check(F->g_2740)).next_;
}
L_end_2790: ;
F->f_2739 = (*(P1962)rt_nil_check(F->f_2739)).next_;
}
L_end_2789: ;
}
}
}
}
L_end_2774: ;
F->f_2739 = (*(P122)rt_nil_check(F->rt_1012)).fields_;
{ rt_int lo2795 = ((rt_int)1LL), hi2796 = G_NV(F->n_2741);
for (rt_int it2797 = lo2795; it2797 <= hi2796; it2797++) {
F->i_2794 = it2797;
if (((*(P1962)rt_nil_check(F->f_2739)).guard_ != NULL)) {
F->holds_2764 = 1;
F->g_2740 = (*(P1962)rt_nil_check(F->f_2739)).guard_;
while ((F->g_2740 != NULL)) {
F->d_2756 = f_field_index_1017(F->up, F->rt_1012, (*(P140)rt_nil_check((*(P2087)rt_nil_check(F->g_2740)).disc_)));
if ((G_NV((*(P174)rt_nil_check((*(P2087)rt_nil_check(F->g_2740)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2738 = (*(P174)rt_nil_check((*(P2087)rt_nil_check(F->g_2740)).variant_)).b_;
while ((F->a_2738 != NULL)) {
if ((F->a_2738 != (*(P2087)rt_nil_check(F->g_2740)).arm_)) {
f_arm_holds_1010(F->up, F->a_2738, G_NV(({ A2747 ix2801 = F->dvs_2748; ix2801.p[rt_index(G_NV(F->d_2756), ix2801.lo, ix2801.hi) - ix2801.lo]; })), &F->ok_2763);
 (void)rt_range(F->ok_2763, 0, 1);
if (G_NV(F->ok_2763)) {
F->holds_2764 = 0;
}
}
F->a_2738 = (*(P174)rt_nil_check(F->a_2738)).next_;
}
L_end_2799: ;
} else {
f_arm_holds_1010(F->up, (*(P2087)rt_nil_check(F->g_2740)).arm_, G_NV(({ A2747 ix2803 = F->dvs_2748; ix2803.p[rt_index(G_NV(F->d_2756), ix2803.lo, ix2803.hi) - ix2803.lo]; })), &F->ok_2763);
 (void)rt_range(F->ok_2763, 0, 1);
if ((!G_NV(F->ok_2763))) {
F->holds_2764 = 0;
}
}
F->g_2740 = (*(P2087)rt_nil_check(F->g_2740)).next_;
}
L_end_2798: ;
if (G_NV(F->holds_2764)) {
(*({ A2742 *ix2804 = &(F->active_2745); &ix2804->p[rt_index(F->i_2794, ix2804->lo, ix2804->hi) - ix2804->lo]; })) = 1;
F->norder_2753 = rt_add(G_NV(F->norder_2753), ((rt_int)1LL));
(*({ A2750 *ix2805 = &(F->order_2751); &ix2805->p[rt_index(G_NV(F->norder_2753), ix2805->lo, ix2805->hi) - ix2805->lo]; })) = F->i_2794;
}
}
F->f_2739 = (*(P1962)rt_nil_check(F->f_2739)).next_;
}
}
L_end_2793: ;
f_ctype_505(F->up, F->rt_1012, &F->ct_2759);
f_new_name_242(F->up, rt_g_lit("ag", 2), &F->tmp_2760);
F->up->code_136 = f_new_buffer_261(F->up);
while ((F->it_2735 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2735)).a_ == NULL)) {
if (G_NV(F->named_2762)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2757 = rt_add(G_NV(F->npos_2757), ((rt_int)1LL));
if ((G_NV(F->npos_2757) > G_NV(F->norder_2753))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_496(F->up, F->rt_1012)));
}
F->k_2755 = G_NV(({ A2750 ix2807 = F->order_2751; ix2807.p[rt_index(G_NV(F->npos_2757), ix2807.lo, ix2807.hi) - ix2807.lo]; }));
f_agg_component_1023(F->up, (*(P140)rt_nil_check(F->tmp_2760)), F->rt_1012, G_NV(F->k_2755), (*(P174)rt_nil_check(F->it_2735)).b_, G_NV((*(P174)rt_nil_check(F->e_1011)).line_));
(*({ A2742 *ix2808 = &(F->done_2743); &ix2808->p[rt_index(G_NV(F->k_2755), ix2808->lo, ix2808->hi) - ix2808->lo]; })) = 1;
} else {
F->named_2762 = 1;
F->lab_2736 = (*(P174)rt_nil_check(F->it_2735)).a_;
while ((F->lab_2736 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->lab_2736)).flag_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->it_2735)).next_ != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2812 = ((rt_int)1LL), hi2813 = G_NV(F->n_2741);
for (rt_int it2814 = lo2812; it2814 <= hi2813; it2814++) {
F->i_2811 = it2814;
if ((G_NV(({ A2742 ix2815 = F->active_2745; ix2815.p[rt_index(F->i_2811, ix2815.lo, ix2815.hi) - ix2815.lo]; })) && (!G_NV(({ A2742 ix2816 = F->done_2743; ix2816.p[rt_index(F->i_2811, ix2816.lo, ix2816.hi) - ix2816.lo]; }))))) {
f_agg_component_1023(F->up, (*(P140)rt_nil_check(F->tmp_2760)), F->rt_1012, F->i_2811, (*(P174)rt_nil_check(F->it_2735)).b_, G_NV((*(P174)rt_nil_check(F->e_1011)).line_));
(*({ A2742 *ix2817 = &(F->done_2743); &ix2817->p[rt_index(F->i_2811, ix2817->lo, ix2817->hi) - ix2817->lo]; })) = 1;
}
}
}
L_end_2810: ;
} else {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2736)).a_)).kind_) != ((rt_int)5LL)) || ((*(P174)rt_nil_check(F->lab_2736)).b_ != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2755 = f_field_index_1017(F->up, F->rt_1012, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2736)).a_)).name_)));
if ((G_NV(F->k_2755) == ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_496(F->up, F->rt_1012), rt_g_lit(" has no component ", 18)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2736)).a_)).name_))));
}
if ((!G_NV(({ A2742 ix2818 = F->active_2745; ix2818.p[rt_index(G_NV(F->k_2755), ix2818.lo, ix2818.hi) - ix2818.lo]; })))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2736)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2742 ix2819 = F->done_2743; ix2819.p[rt_index(G_NV(F->k_2755), ix2819.lo, ix2819.hi) - ix2819.lo]; }))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->lab_2736)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_1023(F->up, (*(P140)rt_nil_check(F->tmp_2760)), F->rt_1012, G_NV(F->k_2755), (*(P174)rt_nil_check(F->it_2735)).b_, G_NV((*(P174)rt_nil_check(F->e_1011)).line_));
(*({ A2742 *ix2820 = &(F->done_2743); &ix2820->p[rt_index(G_NV(F->k_2755), ix2820->lo, ix2820->hi) - ix2820->lo]; })) = 1;
}
F->lab_2736 = (*(P174)rt_nil_check(F->lab_2736)).next_;
}
L_end_2809: ;
}
F->it_2735 = (*(P174)rt_nil_check(F->it_2735)).next_;
}
L_end_2806: ;
F->f_2739 = (*(P122)rt_nil_check(F->rt_1012)).fields_;
{ rt_int lo2823 = ((rt_int)1LL), hi2824 = G_NV(F->n_2741);
for (rt_int it2825 = lo2823; it2825 <= hi2824; it2825++) {
F->i_2822 = it2825;
if ((G_NV(({ A2742 ix2826 = F->active_2745; ix2826.p[rt_index(F->i_2822, ix2826.lo, ix2826.hi) - ix2826.lo]; })) && (!G_NV(({ A2742 ix2827 = F->done_2743; ix2827.p[rt_index(F->i_2822, ix2827.lo, ix2827.hi) - ix2827.lo]; }))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1011)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_496(F->up, F->rt_1012)), rt_g_lit(": ", 2)), (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2739)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2739 = (*(P1962)rt_nil_check(F->f_2739)).next_;
}
}
L_end_2821: ;
f_captured_995(F->up, F->up->code_136, &F->parts_2761);
F->up->code_136 = F->saved_2758;
(*F->r_1013) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2759))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2760))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2761))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2760))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_1017(struct f_greenc_1fr *up_, P122 rt_1015, rt_gstr name_1016) {
  struct f_field_index_1017fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_1015 = rt_1015;
F->name_1016 = cp_rt_gstr(name_1016);
F->f_2828 = NULL;
F->f_2828 = (*(P122)rt_nil_check(F->rt_1015)).fields_;
F->k_2829 = INT64_MIN;
F->k_2829 = ((rt_int)1LL);
while ((F->f_2828 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2828)).name_)), F->name_1016)) {
F->result_ = G_NV(F->k_2829);
goto ret_;
}
F->k_2829 = rt_add(G_NV(F->k_2829), ((rt_int)1LL));
F->f_2828 = (*(P1962)rt_nil_check(F->f_2828)).next_;
}
L_end_2830: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_1023(struct f_greenc_1fr *up_, rt_gstr tmp_1018, P122 rt_1019, rt_int k_1020, P174 v_1021, rt_int line_1022) {
  struct f_agg_component_1023fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_1018 = cp_rt_gstr(tmp_1018);
F->rt_1019 = rt_1019;
F->k_1020 = k_1020;
F->v_1021 = v_1021;
F->line_1022 = line_1022;
F->f_2831 = NULL;
F->f_2831 = (*(P122)rt_nil_check(F->rt_1019)).fields_;
F->vt_2832 = NULL;
F->x_2833 = NULL;
F->y_2834 = NULL;
{ rt_int lo2837 = ((rt_int)2LL), hi2838 = F->k_1020;
for (rt_int it2839 = lo2837; it2839 <= hi2838; it2839++) {
F->i_2836 = it2839;
F->f_2831 = (*(P1962)rt_nil_check(F->f_2831)).next_;
}
}
L_end_2835: ;
f_gexpr_842(F->up, F->v_1021, (*(P1962)rt_nil_check(F->f_2831)).t_, &F->vt_2832, &F->x_2833);
f_check_type_500(F->up, F->vt_2832, (*(P1962)rt_nil_check(F->f_2831)).t_, F->line_1022);
if (((G_NV((*(P122)rt_nil_check((*(P1962)rt_nil_check(F->f_2831)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_488(F->up, (*(P1962)rt_nil_check(F->f_2831)).c_)))) {
f_copy_code_637(F->up, (*(P1962)rt_nil_check(F->f_2831)).t_, (*(P140)rt_nil_check(F->x_2833)), &F->y_2834);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_1018, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2831)).name_)))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->y_2834))), one_rt_gstr(59)));
} else {
if (f_composite_627(F->up, (*(P1962)rt_nil_check(F->f_2831)).t_)) {
f_init_storage_625(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_1018, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2831)).name_)))), (*(P1962)rt_nil_check(F->f_2831)).t_, (*(P1962)rt_nil_check(F->f_2831)).c_);
}
f_assign_code_633(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_1018, one_rt_gstr(46)), f_c_field_256(F->up, (*(P140)rt_nil_check((*(P1962)rt_nil_check(F->f_2831)).name_)))), (*(P1962)rt_nil_check(F->f_2831)).t_, (*(P140)rt_nil_check(F->x_2833)), (*(P1962)rt_nil_check(F->f_2831)).c_, &F->y_2834);
f_emit_266(F->up, (*(P140)rt_nil_check(F->y_2834)));
}
ret_:

  return;
}

static void f_static_choice_1027(struct f_greenc_1fr *up_, P174 x_1024, rt_int *v_1025, int *ok_1026) {
  struct f_static_choice_1027fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1024 = x_1024;
F->v_1025 = v_1025;
F->ok_1026 = ok_1026;
if (f_is_char_lit_823(F->up, F->x_1024)) {
(*F->ok_1026) = 1;
(*F->v_1025) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2840 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->x_1024)).name_)); ix2840.p[rt_index(((rt_int)1LL), ix2840.lo, ix2840.hi) - ix2840.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_517(F->up, F->x_1024, &(*F->v_1025), &(*F->ok_1026));
 (void)rt_range((*F->ok_1026), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_1032(struct f_greenc_1fr *up_, P174 e_1028, P122 arrt_1029, P140 bounds_1030, P140 *r_1031) {
  struct f_array_aggregate_1032fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1028 = e_1028;
F->arrt_1029 = arrt_1029;
F->bounds_1030 = bounds_1030;
F->r_1031 = r_1031;
F->it_2841 = NULL;
F->it_2841 = (*(P174)rt_nil_check(F->e_1028)).a_;
F->lab_2842 = NULL;
F->others_it_2843 = NULL;
F->np_2844 = INT64_MIN;
F->np_2844 = ((rt_int)0LL);
F->nnamed_2845 = INT64_MIN;
F->nnamed_2845 = ((rt_int)0LL);
F->clo_2846 = INT64_MIN;
F->clo_2846 = ((rt_int)0LL);
F->chi_2847 = INT64_MIN;
F->chi_2847 = ((rt_int)0LL);
F->v1_2848 = INT64_MIN;
F->v1_2848 = ((rt_int)0LL);
F->v2_2849 = INT64_MIN;
F->v2_2849 = ((rt_int)0LL);
F->all_static_2850 = INT_MIN;
F->all_static_2850 = 1;
F->ok_2851 = INT_MIN;
F->ok_2851 = 1;
F->ok2_2852 = INT_MIN;
F->ok2_2852 = 1;
F->first_choice_2853 = INT_MIN;
F->first_choice_2853 = 1;
F->vt_2854 = NULL;
F->ct_2855 = NULL;
F->et_2856 = NULL;
F->tmp_2857 = NULL;
F->lo_2858 = NULL;
F->hi_2859 = NULL;
F->v_2860 = NULL;
F->x_2861 = NULL;
F->parts_2862 = NULL;
F->fill_2863 = NULL;
F->rowb_2864 = NULL;
F->key_2865 = NULL;
F->khi_2866 = NULL;
F->saved_2867 = NULL;
F->saved_2867 = F->up->code_136;
f_ctype_505(F->up, F->arrt_1029, &F->ct_2855);
f_elem_ctype_579(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, &F->et_2856);
f_new_name_242(F->up, rt_g_lit("ag", 2), &F->tmp_2857);
while ((F->it_2841 != NULL)) {
if (((*(P174)rt_nil_check(F->it_2841)).a_ == NULL)) {
if (((G_NV(F->nnamed_2845) > ((rt_int)0LL)) || (F->others_it_2843 != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1028)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2844 = rt_add(G_NV(F->np_2844), ((rt_int)1LL));
} else if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2841)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P174)rt_nil_check(F->it_2841)).next_ != NULL) || ((*(P174)rt_nil_check((*(P174)rt_nil_check(F->it_2841)).a_)).next_ != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1028)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2843 = F->it_2841;
} else {
F->nnamed_2845 = rt_add(G_NV(F->nnamed_2845), ((rt_int)1LL));
F->lab_2842 = (*(P174)rt_nil_check(F->it_2841)).a_;
while ((F->lab_2842 != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2842)).a_, &F->v1_2848, &F->ok_2851);
 (void)rt_range(F->ok_2851, 0, 1);
F->v2_2849 = G_NV(F->v1_2848);
if (((*(P174)rt_nil_check(F->lab_2842)).b_ != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2842)).b_, &F->v2_2849, &F->ok2_2852);
 (void)rt_range(F->ok2_2852, 0, 1);
F->ok_2851 = (G_NV(F->ok_2851) && G_NV(F->ok2_2852));
}
if ((!G_NV(F->ok_2851))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1028)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2853) || (G_NV(F->v1_2848) < G_NV(F->clo_2846)))) {
F->clo_2846 = G_NV(F->v1_2848);
}
if ((G_NV(F->first_choice_2853) || (G_NV(F->v2_2849) > G_NV(F->chi_2847)))) {
F->chi_2847 = G_NV(F->v2_2849);
}
F->first_choice_2853 = 0;
F->lab_2842 = (*(P174)rt_nil_check(F->lab_2842)).next_;
}
L_end_2869: ;
}
F->it_2841 = (*(P174)rt_nil_check(F->it_2841)).next_;
}
L_end_2868: ;
if (((G_NV(F->np_2844) > ((rt_int)0LL)) && (G_NV(F->nnamed_2845) > ((rt_int)0LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1028)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2845) > ((rt_int)0LL))) {
f_check_choices_1040(F->up, F->e_1028, F->arrt_1029, (F->others_it_2843 != NULL));
}
if (((F->others_it_2843 == NULL) && (G_NV(F->np_2844) > ((rt_int)0LL)))) {
f_first_index_582(F->up, F->arrt_1029, &F->lo_2858);
F->hi_2859 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lo_2858))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2844), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2843 == NULL) && (G_NV(F->nnamed_2845) > ((rt_int)0LL)))) {
F->lo_2858 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2846)))), rt_g_lit("LL)", 3)));
F->hi_2859 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2847)))), rt_g_lit("LL)", 3)));
} else if ((((*(P122)rt_nil_check(F->arrt_1029)).tcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1029)).tcons_)).hi_ != NULL))) {
F->lo_2858 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1029)).tcons_)).lo_;
F->hi_2859 = (*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1029)).tcons_)).hi_;
} else if ((F->bounds_1030 != NULL)) {
F->lo_2858 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1030))), rt_g_lit(").lo", 4)));
F->hi_2859 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->bounds_1030))), rt_g_lit(").hi", 4)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1028)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P122)rt_nil_check(F->arrt_1029)).dims_) > ((rt_int)1LL)) && (F->bounds_1030 != NULL))) {
F->rowb_2864 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P140)rt_nil_check(F->bounds_1030))), rt_g_lit(").lo2, (", 8)), (*(P140)rt_nil_check(F->bounds_1030))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_136 = f_new_buffer_261(F->up);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2857)), rt_g_lit(".lo = ", 6)), (*(P140)rt_nil_check(F->lo_2858))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".hi = ", 6)), (*(P140)rt_nil_check(F->hi_2859))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2857)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P140)rt_nil_check(F->et_2856))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2844) > ((rt_int)0LL)) && (F->others_it_2843 == NULL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2844)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2844) > ((rt_int)0LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2844)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2843 != NULL)) {
F->up->agg_bounds_181 = F->rowb_2864;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->others_it_2843)).b_, (*(P122)rt_nil_check(F->arrt_1029)).elem_, &F->vt_2854, &F->v_2860);
F->up->agg_bounds_181 = NULL;
f_check_type_500(F->up, F->vt_2854, (*(P122)rt_nil_check(F->arrt_1029)).elem_, G_NV((*(P174)rt_nil_check(F->e_1028)).line_));
f_ctype_505(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, &F->x_2861);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->x_2861))), rt_g_lit(" o_ = ", 6)), (*(P140)rt_nil_check(F->v_2860))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit("); k_++) {", 10)));
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, rt_g_lit("o_", 2), &F->x_2861);
f_element_store_1036(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2857)), rt_g_lit(".p[k_]", 6)), F->arrt_1029, (*(P140)rt_nil_check(F->x_2861)));
f_emit_266(F->up, rt_g_lit("} }", 3));
}
F->it_2841 = (*(P174)rt_nil_check(F->e_1028)).a_;
F->np_2844 = ((rt_int)0LL);
while (((F->it_2841 != NULL) && (F->it_2841 != F->others_it_2843))) {
F->up->agg_bounds_181 = F->rowb_2864;
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->it_2841)).b_, (*(P122)rt_nil_check(F->arrt_1029)).elem_, &F->vt_2854, &F->v_2860);
F->up->agg_bounds_181 = NULL;
f_check_type_500(F->up, F->vt_2854, (*(P122)rt_nil_check(F->arrt_1029)).elem_, G_NV((*(P174)rt_nil_check(F->e_1028)).line_));
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, (*(P140)rt_nil_check(F->v_2860)), &F->x_2861);
if (((*(P174)rt_nil_check(F->it_2841)).a_ == NULL)) {
f_element_store_1036(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2857)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2844)))), one_rt_gstr(93)), F->arrt_1029, (*(P140)rt_nil_check(F->x_2861)));
F->np_2844 = rt_add(G_NV(F->np_2844), ((rt_int)1LL));
} else {
f_new_name_242(F->up, rt_g_lit("av", 2), &F->v_2860);
f_ctype_505(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, &F->parts_2862);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P140)rt_nil_check(F->parts_2862))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->v_2860))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_2861))), one_rt_gstr(59)));
F->lab_2842 = (*(P174)rt_nil_check(F->it_2841)).a_;
while ((F->lab_2842 != NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->lab_2842)).a_, (*(P122)rt_nil_check(F->arrt_1029)).idx_, &F->vt_2854, &F->key_2865);
f_check_type_500(F->up, F->vt_2854, (*(P122)rt_nil_check(F->arrt_1029)).idx_, G_NV((*(P174)rt_nil_check(F->e_1028)).line_));
F->khi_2866 = F->key_2865;
if (((*(P174)rt_nil_check(F->lab_2842)).b_ != NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->lab_2842)).b_, (*(P122)rt_nil_check(F->arrt_1029)).idx_, &F->vt_2854, &F->khi_2866);
f_check_type_500(F->up, F->vt_2854, (*(P122)rt_nil_check(F->arrt_1029)).idx_, G_NV((*(P174)rt_nil_check(F->e_1028)).line_));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->key_2865))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->khi_2866))), rt_g_lit("; k_++) {", 9)));
f_copy_code_637(F->up, (*(P122)rt_nil_check(F->arrt_1029)).elem_, (*(P140)rt_nil_check(F->v_2860)), &F->x_2861);
f_element_store_1036(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->tmp_2857)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".lo, ", 5)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".hi) - ", 7)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".lo]", 4)), F->arrt_1029, (*(P140)rt_nil_check(F->x_2861)));
f_emit_266(F->up, rt_g_lit("}", 1));
F->lab_2842 = (*(P174)rt_nil_check(F->lab_2842)).next_;
}
L_end_2871: ;
f_emit_266(F->up, rt_g_lit("}", 1));
}
F->it_2841 = (*(P174)rt_nil_check(F->it_2841)).next_;
}
L_end_2870: ;
if ((G_NV((*(P122)rt_nil_check(F->arrt_1029)).dims_) > ((rt_int)1LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(") > 0) { ", 9)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".lo2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".p[0].lo; ", 10)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".hi2 = ", 7)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_995(F->up, F->up->code_136, &F->parts_2862);
F->up->code_136 = F->saved_2867;
(*F->r_1031) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P140)rt_nil_check(F->ct_2855))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2857))), one_rt_gstr(59)), (*(P140)rt_nil_check(F->parts_2862))), one_rt_gstr(32)), (*(P140)rt_nil_check(F->tmp_2857))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_1036(struct f_greenc_1fr *up_, rt_gstr lv_1033, P122 arrt_1034, rt_gstr v_1035) {
  struct f_element_store_1036fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1033 = cp_rt_gstr(lv_1033);
F->arrt_1034 = arrt_1034;
F->v_1035 = cp_rt_gstr(v_1035);
F->x_2872 = NULL;
if (((((*(P122)rt_nil_check(F->arrt_1034)).elemcons_ != NULL) && ((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1034)).elemcons_)).lo_ != NULL)) && (!f_composite_627(F->up, (*(P122)rt_nil_check(F->arrt_1034)).elem_)))) {
f_assign_code_633(F->up, F->lv_1033, (*(P122)rt_nil_check(F->arrt_1034)).elem_, F->v_1035, (*(P122)rt_nil_check(F->arrt_1034)).elemcons_, &F->x_2872);
f_emit_266(F->up, (*(P140)rt_nil_check(F->x_2872)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_1033, rt_g_lit(" = ", 3)), F->v_1035), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_1040(struct f_greenc_1fr *up_, P174 e_1037, P122 arrt_1038, int has_others_1039) {
  struct f_check_choices_1040fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1037 = e_1037;
F->arrt_1038 = arrt_1038;
F->has_others_1039 = has_others_1039;
F->a_2873 = NULL;
F->b_2874 = NULL;
F->lab_2875 = NULL;
F->lab2_2876 = NULL;
F->lo1_2877 = INT64_MIN;
F->lo1_2877 = ((rt_int)0LL);
F->hi1_2878 = INT64_MIN;
F->hi1_2878 = ((rt_int)0LL);
F->lo2_2879 = INT64_MIN;
F->lo2_2879 = ((rt_int)0LL);
F->hi2_2880 = INT64_MIN;
F->hi2_2880 = ((rt_int)0LL);
F->count_2881 = INT64_MIN;
F->count_2881 = ((rt_int)0LL);
F->ok_2882 = INT_MIN;
F->a_2873 = (*(P174)rt_nil_check(F->e_1037)).a_;
while ((F->a_2873 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2873)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_2873)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2875 = (*(P174)rt_nil_check(F->a_2873)).a_;
while ((F->lab_2875 != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2875)).a_, &F->lo1_2877, &F->ok_2882);
 (void)rt_range(F->ok_2882, 0, 1);
F->hi1_2878 = G_NV(F->lo1_2877);
if (((*(P174)rt_nil_check(F->lab_2875)).b_ != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab_2875)).b_, &F->hi1_2878, &F->ok_2882);
 (void)rt_range(F->ok_2882, 0, 1);
}
if ((G_NV(F->hi1_2878) >= G_NV(F->lo1_2877))) {
F->count_2881 = rt_add(G_NV(F->count_2881), rt_add(rt_sub(G_NV(F->hi1_2878), G_NV(F->lo1_2877)), ((rt_int)1LL)));
}
F->b_2874 = F->a_2873;
F->lab2_2876 = (*(P174)rt_nil_check(F->lab_2875)).next_;
while ((F->b_2874 != NULL)) {
if ((((*(P174)rt_nil_check(F->b_2874)).a_ != NULL) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->b_2874)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2874 != F->a_2873)) {
F->lab2_2876 = (*(P174)rt_nil_check(F->b_2874)).a_;
}
while ((F->lab2_2876 != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab2_2876)).a_, &F->lo2_2879, &F->ok_2882);
 (void)rt_range(F->ok_2882, 0, 1);
F->hi2_2880 = G_NV(F->lo2_2879);
if (((*(P174)rt_nil_check(F->lab2_2876)).b_ != NULL)) {
f_static_choice_1027(F->up, (*(P174)rt_nil_check(F->lab2_2876)).b_, &F->hi2_2880, &F->ok_2882);
 (void)rt_range(F->ok_2882, 0, 1);
}
if (((((G_NV(F->lo1_2877) <= G_NV(F->hi1_2878)) && (G_NV(F->lo2_2879) <= G_NV(F->hi2_2880))) && (G_NV(F->lo1_2877) <= G_NV(F->hi2_2880))) && (G_NV(F->lo2_2879) <= G_NV(F->hi1_2878)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1037)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2876 = (*(P174)rt_nil_check(F->lab2_2876)).next_;
}
L_end_2886: ;
}
F->b_2874 = (*(P174)rt_nil_check(F->b_2874)).next_;
F->lab2_2876 = NULL;
}
L_end_2885: ;
F->lab_2875 = (*(P174)rt_nil_check(F->lab_2875)).next_;
}
L_end_2884: ;
}
F->a_2873 = (*(P174)rt_nil_check(F->a_2873)).next_;
}
L_end_2883: ;
if (((!F->has_others_1039) && f_static_bounds_492(F->up, (*(P122)rt_nil_check(F->arrt_1038)).tcons_))) {
if ((G_NV(F->count_2881) != rt_add(rt_sub(G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1038)).tcons_)).mhi_), G_NV((*(P178)rt_nil_check((*(P122)rt_nil_check(F->arrt_1038)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1037)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_496(F->up, F->arrt_1038)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P174 f_actual_for_1044(struct f_greenc_1fr *up_, P174 args_1041, P1944 pm_1042, P1944 first_1043) {
  struct f_actual_for_1044fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1041 = args_1041;
F->pm_1042 = pm_1042;
F->first_1043 = first_1043;
F->a_2887 = NULL;
F->a_2887 = F->args_1041;
F->p_2888 = NULL;
F->p_2888 = F->first_1043;
while (((F->a_2887 != NULL) && ((*(P174)rt_nil_check(F->a_2887)).formal_ == NULL))) {
if ((F->p_2888 == F->pm_1042)) {
F->result_ = F->a_2887;
goto ret_;
}
F->p_2888 = (*(P1944)rt_nil_check(F->p_2888)).next_;
F->a_2887 = (*(P174)rt_nil_check(F->a_2887)).next_;
}
L_end_2889: ;
while ((F->a_2887 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_2887)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_2887)).formal_)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_1042)).name_))))) {
F->result_ = F->a_2887;
goto ret_;
}
F->a_2887 = (*(P174)rt_nil_check(F->a_2887)).next_;
}
L_end_2890: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1049(struct f_greenc_1fr *up_, P174 e_1045, int is_stmt_1046, P122 *t_1047, P140 *r_1048) {
  struct f_gcall_1049fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1045 = e_1045;
F->is_stmt_1046 = is_stmt_1046;
F->t_1047 = t_1047;
F->r_1048 = r_1048;
F->fn_2891 = NULL;
F->fn_2891 = (*(P174)rt_nil_check(F->e_1045)).a_;
F->nm_2892 = NULL;
F->y_2893 = NULL;
F->args_2894 = NULL;
F->lv_2895 = NULL;
F->v_2896 = NULL;
F->ct_2897 = NULL;
F->x_2898 = NULL;
F->a_2899 = NULL;
F->pm_2900 = NULL;
F->lt_2901 = NULL;
F->vt_2902 = NULL;
F->lc_2903 = NULL;
F->ro_2904 = INT_MIN;
f_expanded_860(F->up, F->fn_2891, &F->nm_2892);
if ((F->nm_2892 != NULL)) {
F->fn_2891 = F->nm_2892;
} else if ((((G_NV((*(P174)rt_nil_check(F->fn_2891)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_821(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).name_))))) {
if ((!f_type_attribute_819(F->up, (*(P117)rt_nil_check(f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).name_))))).t_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2892 = f_nn_313(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2891)).line_));
(*(P174)rt_nil_check(F->nm_2892)).name_ = (*(P174)rt_nil_check(F->fn_2891)).name_;
F->fn_2891 = F->nm_2892;
} else if (((G_NV((*(P174)rt_nil_check(F->fn_2891)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->fn_2891)).a_))) {
F->nm_2892 = f_nn_313(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->fn_2891)).line_));
(*(P174)rt_nil_check(F->nm_2892)).name_ = (*(P174)rt_nil_check(F->fn_2891)).name_;
(*(P174)rt_nil_check(F->nm_2892)).tag_ = f_mk_239(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->fn_2891)).a_));
F->fn_2891 = F->nm_2892;
} else if (((((G_NV((*(P174)rt_nil_check(F->fn_2891)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1162(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).a_)).name_))))) {
F->y_2893 = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2891)).line_));
if (((F->y_2893 != NULL) && ((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1138(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), (*(P174)rt_nil_check(F->e_1045)).b_, F->is_stmt_1046, F->up->call_want_227, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), &F->y_2893);
F->up->call_task_ix_215 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).a_)).b_;
if ((F->is_stmt_1046 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2893)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1074(F->up, F->e_1045, F->y_2893, &(*F->t_1047), &(*F->r_1048));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->fn_2891)).kind_) != ((rt_int)5LL))) {
f_other_call_1226(F->up, F->e_1045, F->is_stmt_1046, &(*F->t_1047), &(*F->r_1048));
goto ret_;
}
F->y_2893 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)));
if (((*(P174)rt_nil_check(F->fn_2891)).tag_ != NULL)) {
F->y_2893 = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), G_NV((*(P174)rt_nil_check(F->fn_2891)).line_));
}
if ((F->y_2893 == NULL)) {
if (((*(P174)rt_nil_check(F->fn_2891)).tag_ != NULL)) {
F->up->text_io_qualified_201 = eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1081(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), (*(P174)rt_nil_check(F->e_1045)).b_, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), F->is_stmt_1046, &(*F->t_1047), &(*F->r_1048));
F->up->text_io_qualified_201 = 0;
goto ret_;
}
if ((((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)4LL))) && ((*(P174)rt_nil_check(F->fn_2891)).tag_ == NULL))) {
f_resolve_overload_1127(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), (*(P174)rt_nil_check(F->e_1045)).b_, F->is_stmt_1046, F->up->call_want_227, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), &F->y_2893);
if ((F->y_2893 == NULL)) {
f_builtin_1081(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), (*(P174)rt_nil_check(F->e_1045)).b_, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), F->is_stmt_1046, &(*F->t_1047), &(*F->r_1048));
goto ret_;
}
} else if (((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1138(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), (*(P174)rt_nil_check(F->e_1045)).b_, F->is_stmt_1046, F->up->call_want_227, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), &F->y_2893);
}
if ((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)10LL))) {
f_other_call_1226(F->up, F->e_1045, F->is_stmt_1046, &(*F->t_1047), &(*F->r_1048));
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) == ((rt_int)5LL)) && F->is_stmt_1046)) {
f_code_statement_914(F->up, F->e_1045, F->y_2893, &(*F->r_1048));
(*F->t_1047) = F->up->ty_void_161;
goto ret_;
}
if (((G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_2893)).kind_) != ((rt_int)4LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1046 && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2893)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1046) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_2893)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1045)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->fn_2891)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1074(F->up, F->e_1045, F->y_2893, &(*F->t_1047), &(*F->r_1048));
ret_:

  return;
}

static void f_out_check_1053(struct f_greenc_1fr *up_, rt_gstr lv_1050, P122 t_1051, P178 c_1052) {
  struct f_out_check_1053fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1050 = cp_rt_gstr(lv_1050);
F->t_1051 = t_1051;
F->c_1052 = c_1052;
if ((!f_bounded_488(F->up, F->c_1052))) {
goto ret_;
}
if ((F->up->post_checks_196 == NULL)) {
F->up->post_checks_196 = f_mk_239(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P122)rt_nil_check(F->t_1051)).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check(F->t_1051)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_196 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1050), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1052)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1052)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_466(F->up, F->t_1051)) {
F->up->post_checks_196 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->post_checks_196)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1050), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1052)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check(F->c_1052)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1056(struct f_greenc_1fr *up_, P174 e_1054, P140 *r_1055) {
  struct f_var_path_1056fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1054 = e_1054;
F->r_1055 = r_1055;
F->pt_2905 = NULL;
F->v_2906 = NULL;
F->saved_2907 = NULL;
F->saved_2907 = F->up->code_136;
if ((G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) == ((rt_int)5LL))) {
(*F->r_1055) = (*(P174)rt_nil_check(F->e_1054)).name_;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) == ((rt_int)15LL))) {
f_var_path_1056(F->up, (*(P174)rt_nil_check(F->e_1054)).a_, &(*F->r_1055));
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) != ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1054)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1055) = f_mk_239(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2905 = NULL;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_261(F->up);
{
{ rt_frame xf2909;
if (RT_TRY(xf2909)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->e_1054)).a_, NULL, &F->pt_2905, &F->v_2906);
RT_POP(xf2909);
} else {
RT_POP(xf2909);
int x2910 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2910);
if (0 || x2910 == ex_compile_error_108) {
F->pt_2905 = NULL;
} else {
rt_raise(x2910);
}
}
}

}
L_end_2908: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_2907;
if (((F->pt_2905 == NULL) || (G_NV((*(P122)rt_nil_check(F->pt_2905)).kind_) == ((rt_int)8LL)))) {
(*F->r_1055) = f_mk_239(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1056(F->up, (*(P174)rt_nil_check(F->e_1054)).a_, &(*F->r_1055));
if (eq_rt_gstr((*(P140)rt_nil_check((*F->r_1055))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1054)).kind_) == ((rt_int)9LL))) {
(*F->r_1055) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1055))), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1054)).name_))));
} else if (((f_list_len_319(F->up, (*(P174)rt_nil_check(F->e_1054)).b_) == ((rt_int)1LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1054)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1055) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1055))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1054)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1055) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1055))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1059(struct f_greenc_1fr *up_, rt_gstr p_1057, rt_gstr r_1058) {
  struct f_paths_overlap_1059fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1057 = cp_rt_gstr(p_1057);
F->r_1058 = cp_rt_gstr(r_1058);
F->i_2911 = INT64_MIN;
F->i_2911 = ({ rt_gstr at2912 = F->p_1057; at2912.lo; });
F->j_2913 = INT64_MIN;
F->j_2913 = ({ rt_gstr at2914 = F->r_1058; at2914.lo; });
for (;;) {
if (((G_NV(F->i_2911) > ({ rt_gstr at2916 = F->p_1057; at2916.hi; })) || (G_NV(F->j_2913) > ({ rt_gstr at2917 = F->r_1058; at2917.hi; })))) {
if (((G_NV(F->i_2911) > ({ rt_gstr at2918 = F->p_1057; at2918.hi; })) && (G_NV(F->j_2913) > ({ rt_gstr at2919 = F->r_1058; at2919.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2911) > ({ rt_gstr at2920 = F->p_1057; at2920.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2921 = F->r_1058; ix2921.p[rt_index(G_NV(F->j_2913), ix2921.lo, ix2921.hi) - ix2921.lo]; })) == 46) || (G_NV(({ rt_gstr ix2922 = F->r_1058; ix2922.p[rt_index(G_NV(F->j_2913), ix2922.lo, ix2922.hi) - ix2922.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2923 = F->p_1057; ix2923.p[rt_index(G_NV(F->i_2911), ix2923.lo, ix2923.hi) - ix2923.lo]; })) == 46) || (G_NV(({ rt_gstr ix2924 = F->p_1057; ix2924.p[rt_index(G_NV(F->i_2911), ix2924.lo, ix2924.hi) - ix2924.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2925 = F->p_1057; ix2925.p[rt_index(G_NV(F->i_2911), ix2925.lo, ix2925.hi) - ix2925.lo]; })) == 40) && (G_NV(({ rt_gstr ix2926 = F->r_1058; ix2926.p[rt_index(G_NV(F->j_2913), ix2926.lo, ix2926.hi) - ix2926.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix2927 = F->p_1057; ix2927.p[rt_index(rt_add(G_NV(F->i_2911), ((rt_int)1LL)), ix2927.lo, ix2927.hi) - ix2927.lo]; })) == 42) || (G_NV(({ rt_gstr ix2928 = F->r_1058; ix2928.p[rt_index(rt_add(G_NV(F->j_2913), ((rt_int)1LL)), ix2928.lo, ix2928.hi) - ix2928.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix2930 = F->p_1057; ix2930.p[rt_index(G_NV(F->i_2911), ix2930.lo, ix2930.hi) - ix2930.lo]; })) != 41)) {
F->i_2911 = rt_add(G_NV(F->i_2911), ((rt_int)1LL));
}
L_end_2929: ;
while ((G_NV(({ rt_gstr ix2932 = F->r_1058; ix2932.p[rt_index(G_NV(F->j_2913), ix2932.lo, ix2932.hi) - ix2932.lo]; })) != 41)) {
F->j_2913 = rt_add(G_NV(F->j_2913), ((rt_int)1LL));
}
L_end_2931: ;
} else if ((G_NV(({ rt_gstr ix2933 = F->p_1057; ix2933.p[rt_index(G_NV(F->i_2911), ix2933.lo, ix2933.hi) - ix2933.lo]; })) != G_NV(({ rt_gstr ix2934 = F->r_1058; ix2934.p[rt_index(G_NV(F->j_2913), ix2934.lo, ix2934.hi) - ix2934.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2911 = rt_add(G_NV(F->i_2911), ((rt_int)1LL));
F->j_2913 = rt_add(G_NV(F->j_2913), ((rt_int)1LL));
}
L_end_2915: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1062(struct f_greenc_1fr *up_, P174 n_1060, rt_gstr name_1061) {
  struct f_mentions_1062fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1060 = n_1060;
F->name_1061 = cp_rt_gstr(name_1061);
F->p_2935 = NULL;
F->p_2935 = F->n_1060;
while ((F->p_2935 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_2935)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_2935)).name_)), F->name_1061))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1062(F->up, (*(P174)rt_nil_check(F->p_2935)).a_, F->name_1061) || f_mentions_1062(F->up, (*(P174)rt_nil_check(F->p_2935)).b_, F->name_1061))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1062(F->up, (*(P174)rt_nil_check(F->p_2935)).c_, F->name_1061) || f_mentions_1062(F->up, (*(P174)rt_nil_check(F->p_2935)).d_, F->name_1061))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1062(F->up, (*(P174)rt_nil_check(F->p_2935)).e_, F->name_1061)) {
F->result_ = 1;
goto ret_;
}
F->p_2935 = (*(P174)rt_nil_check(F->p_2935)).next_;
}
L_end_2936: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1065(struct f_greenc_1fr *up_, P174 n_1063, rt_gstr name_1064) {
  struct f_mentions_one_1065fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1063 = n_1063;
F->name_1064 = cp_rt_gstr(name_1064);
if (((G_NV((*(P174)rt_nil_check(F->n_1063)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_1063)).name_)), F->name_1064))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1062(F->up, (*(P174)rt_nil_check(F->n_1063)).a_, F->name_1064) || f_mentions_1062(F->up, (*(P174)rt_nil_check(F->n_1063)).b_, F->name_1064))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1062(F->up, (*(P174)rt_nil_check(F->n_1063)).c_, F->name_1064) || f_mentions_1062(F->up, (*(P174)rt_nil_check(F->n_1063)).d_, F->name_1064)) || f_mentions_1062(F->up, (*(P174)rt_nil_check(F->n_1063)).e_, F->name_1064));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1069(struct f_greenc_1fr *up_, P174 e_1066, P117 y_1067, P174 a_1068) {
  struct f_check_aliasing_1069fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1066 = e_1066;
F->y_1067 = y_1067;
F->a_1068 = a_1068;
F->b_2937 = NULL;
F->b_2937 = (*(P174)rt_nil_check(F->e_1066)).b_;
F->p_2938 = NULL;
F->q_2939 = NULL;
F->r_2940 = NULL;
F->r_2940 = f_root_name_1268(F->up, F->a_1068);
F->v_2941 = NULL;
if ((F->r_2940 == NULL)) {
goto ret_;
}
f_var_path_1056(F->up, F->a_1068, &F->p_2938);
while ((F->b_2937 != NULL)) {
if (((F->b_2937 != F->a_1068) && (!eq_rt_gstr((*(P140)rt_nil_check(F->p_2938)), rt_g_lit("\?", 1))))) {
f_var_path_1056(F->up, F->b_2937, &F->q_2939);
if (((!eq_rt_gstr((*(P140)rt_nil_check(F->q_2939)), rt_g_lit("\?", 1))) && f_paths_overlap_1059(F->up, (*(P140)rt_nil_check(F->p_2938)), (*(P140)rt_nil_check(F->q_2939))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1066)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_2937 = (*(P174)rt_nil_check(F->b_2937)).next_;
}
L_end_2942: ;
F->v_2941 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_)));
if (((((F->v_2941 != NULL) && (G_NV((*(P117)rt_nil_check(F->v_2941)).kind_) == ((rt_int)1LL))) && ((*(P117)rt_nil_check(F->y_1067)).decl_ != NULL)) && ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1277(F->up, (*(P117)rt_nil_check(F->y_1067)).decl_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_)))))) {
if (((f_mentions_1062(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_))) || f_mentions_1062(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_)))) || f_mentions_1062(F->up, (*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).decl_)).e_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1066)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_2940)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1067)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1074(struct f_greenc_1fr *up_, P174 e_1070, P117 y_1071, P122 *t_1072, P140 *r_1073) {
  struct f_gcall_with_1074fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1070 = e_1070;
F->y_1071 = y_1071;
F->t_1072 = t_1072;
F->r_1073 = r_1073;
F->args_2943 = NULL;
F->lv_2944 = NULL;
F->v_2945 = NULL;
F->x1_2946 = NULL;
F->x2_2947 = NULL;
F->a_2948 = NULL;
F->pm_2949 = NULL;
F->lt_2950 = NULL;
F->vt_2951 = NULL;
F->lc_2952 = NULL;
F->ro_2953 = INT_MIN;
f_check_call_rules_1288(F->up, F->e_1070, F->y_1071);
F->args_2943 = f_mk_239(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P117)rt_nil_check(F->y_1071)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1071)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1071)).access_path_ != NULL)) && ((*(P117)rt_nil_check(F->y_1071)).members_ != NULL)) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_215 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1070)).line_), cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).name_))));
}
f_gexpr_842(F->up, F->up->call_task_ix_215, (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).t_, &F->vt_2951, &F->v_2945);
F->up->call_task_ix_215 = NULL;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).access_path_)), &F->lv_2944);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_2946);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_2947);
F->lv_2944 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lv_2944)), rt_g_lit("[rt_index(", 10)), (*(P140)rt_nil_check(F->v_2945))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x1_2946))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->x2_2947))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->x1_2946))), one_rt_gstr(93)));
f_act_path_i_1181(F->up, (*(P117)rt_nil_check(F->y_1071)).members_, (*(P140)rt_nil_check(F->v_2945)), &F->x1_2946);
F->args_2943 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2944))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2946))), one_rt_gstr(41)));
} else if ((((G_NV((*(P117)rt_nil_check(F->y_1071)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->y_1071)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->y_1071)).access_path_ != NULL))) {
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).members_)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).access_path_)), &F->lv_2944);
if (f_same_task_438(F->up, (*(P117)rt_nil_check(F->y_1071)).members_, F->up->cur_task_211)) {
F->args_2943 = F->lv_2944;
} else {
f_act_path_1177(F->up, (*(P117)rt_nil_check(F->y_1071)).members_, &F->x1_2946);
F->args_2943 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P140)rt_nil_check(F->lv_2944))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->x1_2946))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P117)rt_nil_check(F->y_1071)).level_) > ((rt_int)0LL))) {
f_link_to_782(F->up, G_NV((*(P117)rt_nil_check(F->y_1071)).level_), &F->args_2943);
}
F->pm_2949 = (*(P117)rt_nil_check(F->y_1071)).params_;
while ((F->pm_2949 != NULL)) {
F->a_2948 = f_actual_for_1044(F->up, (*(P174)rt_nil_check(F->e_1070)).b_, F->pm_2949, (*(P117)rt_nil_check(F->y_1071)).params_);
if ((({ rt_gstr at2955 = (*(P140)rt_nil_check(F->args_2943)); at2955.hi >= at2955.lo ? at2955.hi - at2955.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2943 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2943)), rt_g_lit(", ", 2)));
}
if ((F->a_2948 == NULL)) {
if ((((*(P1944)rt_nil_check(F->pm_2949)).dflt_ == NULL) || (G_NV((*(P1944)rt_nil_check(F->pm_2949)).mode_) != ((rt_int)1LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1070)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).name_))));
}
if (((*(P1944)rt_nil_check(F->pm_2949)).dsym_ != NULL)) {
f_access_of_779(F->up, (*(P1944)rt_nil_check(F->pm_2949)).dsym_, &F->v_2945);
f_copy_code_637(F->up, (*(P1944)rt_nil_check(F->pm_2949)).t_, (*(P140)rt_nil_check(F->v_2945)), &F->x1_2946);
F->v_2945 = F->x1_2946;
} else {
f_gexpr_842(F->up, (*(P1944)rt_nil_check(F->pm_2949)).dflt_, (*(P1944)rt_nil_check(F->pm_2949)).t_, &F->vt_2951, &F->v_2945);
}
F->args_2943 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2943)), (*(P140)rt_nil_check(F->v_2945))));
} else {
if ((((G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_2948)).flag_) != G_NV((*(P1944)rt_nil_check(F->pm_2949)).mode_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1070)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P1944)rt_nil_check(F->pm_2949)).mode_) == ((rt_int)1LL))) {
f_gexpr_842(F->up, F->a_2948, (*(P1944)rt_nil_check(F->pm_2949)).t_, &F->vt_2951, &F->v_2945);
f_check_type_500(F->up, F->vt_2951, (*(P1944)rt_nil_check(F->pm_2949)).t_, G_NV((*(P174)rt_nil_check(F->e_1070)).line_));
if (((((*(P1944)rt_nil_check(F->pm_2949)).c_ != NULL) && ((*(P178)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).c_)).lo_ != NULL)) && ((G_NV((*(P122)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P122)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_2945 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P140)rt_nil_check(F->v_2945))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P178)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_2943 = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->args_2943)), (*(P140)rt_nil_check(F->v_2945))));
} else {
f_lvalue_798(F->up, F->a_2948, &F->lv_2944, &F->lt_2950, &F->lc_2952, &F->ro_2953);
 (void)rt_range(F->ro_2953, 0, 1);
if (G_NV(F->ro_2953)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1070)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_2949)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1271(F->up, F->a_2948, G_NV((*(P174)rt_nil_check(F->e_1070)).line_));
f_check_type_500(F->up, F->lt_2950, (*(P1944)rt_nil_check(F->pm_2949)).t_, G_NV((*(P174)rt_nil_check(F->e_1070)).line_));
F->args_2943 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->args_2943)), one_rt_gstr(38)), (*(P140)rt_nil_check(F->lv_2944))));
f_check_aliasing_1069(F->up, F->e_1070, F->y_1071, F->a_2948);
f_out_check_1053(F->up, (*(P140)rt_nil_check(F->lv_2944)), F->lt_2950, F->lc_2952);
}
}
F->pm_2949 = (*(P1944)rt_nil_check(F->pm_2949)).next_;
}
L_end_2954: ;
if (((f_list_len_319(F->up, (*(P174)rt_nil_check(F->e_1070)).b_) > ((rt_int)0LL)) && ((*(P117)rt_nil_check(F->y_1071)).params_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1070)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1072) = (*(P117)rt_nil_check(F->y_1071)).result_;
(*F->r_1073) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1071)).cname_)), one_rt_gstr(40)), (*(P140)rt_nil_check(F->args_2943))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1081(struct f_greenc_1fr *up_, rt_gstr name_1075, P174 args_1076, rt_int line_1077, int is_stmt_1078, P122 *t_1079, P140 *r_1080) {
  struct f_builtin_1081fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1075 = cp_rt_gstr(name_1075);
F->args_1076 = args_1076;
F->line_1077 = line_1077;
F->is_stmt_1078 = is_stmt_1078;
F->t_1079 = t_1079;
F->r_1080 = r_1080;
F->aty_2956 = NULL;
F->lt_2957 = NULL;
F->a_2958 = NULL;
F->w_2959 = NULL;
F->lv_2960 = NULL;
F->lc_2961 = NULL;
F->ro_2962 = INT_MIN;
(*F->t_1079) = F->up->ty_void_161;
if ((((eq_rt_gstr(F->name_1075, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1075, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_201))) && (f_lookup_435(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_260(F->up, F->line_1077, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1075, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1075), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_228 != NULL) && (eq_rt_gstr(F->name_1075, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1075, rt_g_lit("GET", 3))))) {
f_fail_260(F->up, F->line_1077, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1075), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1075, rt_g_lit("PUT", 3))) {
if ((F->args_1076 == NULL)) {
f_fail_260(F->up, F->line_1077, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_842(F->up, F->args_1076, NULL, &F->aty_2956, &F->a_2958);
F->w_2959 = f_mk_239(F->up, rt_g_lit("0", 1));
if (((*(P174)rt_nil_check(F->args_1076)).next_ != NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->args_1076)).next_, F->up->ty_int_156, &F->lt_2957, &F->w_2959);
}
if (f_is_string_584(F->up, F->aty_2956)) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P140)rt_nil_check(F->a_2958))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2956)).kind_) == ((rt_int)11LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P140)rt_nil_check(F->a_2958))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2956)).kind_) == ((rt_int)1LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P140)rt_nil_check(F->a_2958))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2959))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2956)).kind_) == ((rt_int)2LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P140)rt_nil_check(F->a_2958))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2959))), one_rt_gstr(41)));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2956)).kind_) == ((rt_int)16LL))) {
f_fail_260(F->up, F->line_1077, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P122)rt_nil_check(F->aty_2956)).kind_) == ((rt_int)3LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P140)rt_nil_check(F->a_2958))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->w_2959))), rt_g_lit(", 0)", 4)));
} else {
f_fail_260(F->up, F->line_1077, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1075, rt_g_lit("GET", 3))) {
f_lvalue_798(F->up, F->args_1076, &F->lv_2960, &F->lt_2957, &F->lc_2961, &F->ro_2962);
 (void)rt_range(F->ro_2962, 0, 1);
if ((G_NV((*(P122)rt_nil_check(F->lt_2957)).kind_) == ((rt_int)11LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2960))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2957)).kind_) == ((rt_int)1LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2960))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P122)rt_nil_check(F->lt_2957)).kind_) == ((rt_int)3LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->lv_2960))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_260(F->up, F->line_1077, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1075, rt_g_lit("ABS", 3))) {
f_gexpr_842(F->up, F->args_1076, NULL, &(*F->t_1079), &F->a_2958);
if ((G_NV((*(P122)rt_nil_check((*F->t_1079))).kind_) == ((rt_int)1LL))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P140)rt_nil_check(F->a_2958))), one_rt_gstr(41)));
} else if (((G_NV((*(P122)rt_nil_check((*F->t_1079))).kind_) == ((rt_int)3LL)) || (G_NV((*(P122)rt_nil_check((*F->t_1079))).kind_) == ((rt_int)16LL)))) {
(*F->r_1080) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P140)rt_nil_check(F->a_2958))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, F->line_1077, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1241(F->up, F->name_1075, F->args_1076, F->line_1077, &(*F->t_1079), &(*F->r_1080));
}
ret_:

  return;
}

static P117 f_lookup_path_1083(struct f_greenc_1fr *up_, rt_gstr p_1082) {
  struct f_lookup_path_1083fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1082 = cp_rt_gstr(p_1082);
F->y_2963 = NULL;
F->m_2964 = NULL;
{ rt_int lo2969 = ({ rt_gstr at2966 = F->p_1082; at2966.lo; }), hi2970 = ({ rt_gstr at2967 = F->p_1082; at2967.hi; });
for (rt_int it2971 = hi2970; it2971 >= lo2969; it2971--) {
F->i_2968 = it2971;
if ((G_NV(({ rt_gstr ix2972 = F->p_1082; ix2972.p[rt_index(F->i_2968, ix2972.lo, ix2972.hi) - ix2972.lo]; })) == 46)) {
F->y_2963 = f_lookup_path_1083(F->up, ({ rt_gstr sl2976 = F->p_1082; rt_int l_ = ({ rt_gstr at2975 = F->p_1082; at2975.lo; }), h_ = rt_sub(F->i_2968, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2976.lo, sl2976.hi); rt_index(h_, sl2976.lo, sl2976.hi); } sl2976.p += l_ - sl2976.lo; sl2976.lo = l_; sl2976.hi = h_; sl2976; }));
if ((F->y_2963 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P117)rt_nil_check(F->y_2963)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2963)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_2964 = (*(P117)rt_nil_check(F->y_2963)).members_;
while ((F->m_2964 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2964)).name_)), ({ rt_gstr sl2979 = F->p_1082; rt_int l_ = rt_add(F->i_2968, ((rt_int)1LL)), h_ = ({ rt_gstr at2978 = F->p_1082; at2978.hi; }); if (l_ <= h_) { rt_index(l_, sl2979.lo, sl2979.hi); rt_index(h_, sl2979.lo, sl2979.hi); } sl2979.p += l_ - sl2979.lo; sl2979.lo = l_; sl2979.hi = h_; sl2979; })) && (!G_NV((*(P117)rt_nil_check(F->m_2964)).hidden_)))) {
F->result_ = F->m_2964;
goto ret_;
}
F->m_2964 = (*(P117)rt_nil_check(F->m_2964)).mnext_;
}
L_end_2977: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_2965: ;
F->result_ = f_lookup_435(F->up, F->p_1082);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1085(struct f_greenc_1fr *up_, P174 e_1084) {
  struct f_is_package_1085fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1084 = e_1084;
F->y_2980 = NULL;
if (((G_NV((*(P174)rt_nil_check(F->e_1084)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check(F->e_1084)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P174)rt_nil_check(F->e_1084)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1084)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1084)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_2980 = f_lookup_path_1083(F->up, f_path_of_356(F->up, F->e_1084));
if ((!(F->y_2980 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P117)rt_nil_check(F->y_2980)).kind_) == ((rt_int)8LL)) || (G_NV((*(P117)rt_nil_check(F->y_2980)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P117 f_member_of_1089(struct f_greenc_1fr *up_, rt_gstr p_1086, rt_gstr name_1087, rt_int line_1088) {
  struct f_member_of_1089fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1086 = cp_rt_gstr(p_1086);
F->name_1087 = cp_rt_gstr(name_1087);
F->line_1088 = line_1088;
F->y_2981 = NULL;
F->y_2981 = f_lookup_path_1083(F->up, F->p_1086);
F->m_2982 = NULL;
if (((F->y_2981 == NULL) || ((G_NV((*(P117)rt_nil_check(F->y_2981)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_2981)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_2982 = (*(P117)rt_nil_check(F->y_2981)).members_;
while ((F->m_2982 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2982)).name_)), F->name_1087) && (!G_NV((*(P117)rt_nil_check(F->m_2982)).hidden_)))) {
F->result_ = F->m_2982;
goto ret_;
}
F->m_2982 = (*(P117)rt_nil_check(F->m_2982)).mnext_;
}
L_end_2983: ;
if ((G_NV((*(P117)rt_nil_check(F->y_2981)).kind_) == ((rt_int)9LL))) {
F->m_2982 = f_lookup_entry_441(F->up, F->name_1087, F->y_2981);
if ((((F->m_2982 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2982)).kind_) == ((rt_int)10LL))) && f_same_task_438(F->up, (*(P117)rt_nil_check(F->m_2982)).members_, F->y_2981))) {
F->result_ = F->m_2982;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1091(struct f_greenc_1fr *up_, P174 p_1090) {
  struct f_inside_package_1091fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1090 = p_1090;
F->l_2984 = NULL;
F->l_2984 = F->up->pkg_stack_224;
if ((F->p_1090 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_2984 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P151)rt_nil_check(F->l_2984)).s_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_1090)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_2984 = (*(P151)rt_nil_check(F->l_2984)).next_;
}
L_end_2985: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1094(struct f_greenc_1fr *up_, P117 y_1092, P117 *z_1093) {
  struct f_copy_sym_1094fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1092 = y_1092;
F->z_1093 = z_1093;
(*F->z_1093) = ({ R118 *cell2986 = rt_alloc(sizeof(R118)); *cell2986 = cp_R118(({ R118 ag2987; ag2987.kind_ = G_NV((*(P117)rt_nil_check(F->y_1092)).kind_); ag2987.name_ = (*(P117)rt_nil_check(F->y_1092)).name_; ag2987.t_ = (*(P117)rt_nil_check(F->y_1092)).t_; ag2987.c_ = (*(P117)rt_nil_check(F->y_1092)).c_; ag2987.access_path_ = (*(P117)rt_nil_check(F->y_1092)).access_path_; ag2987.cname_ = (*(P117)rt_nil_check(F->y_1092)).cname_; ag2987.ro_ = G_NV((*(P117)rt_nil_check(F->y_1092)).ro_); ag2987.mvalue_ = G_NV((*(P117)rt_nil_check(F->y_1092)).mvalue_); ag2987.hasmv_ = G_NV((*(P117)rt_nil_check(F->y_1092)).hasmv_); ag2987.decl_ = (*(P117)rt_nil_check(F->y_1092)).decl_; ag2987.params_ = (*(P117)rt_nil_check(F->y_1092)).params_; ag2987.result_ = (*(P117)rt_nil_check(F->y_1092)).result_; ag2987.depth_ = ((rt_int)0LL); ag2987.level_ = G_NV((*(P117)rt_nil_check(F->y_1092)).level_); ag2987.byref_ = G_NV((*(P117)rt_nil_check(F->y_1092)).byref_); ag2987.vrp_ = G_NV((*(P117)rt_nil_check(F->y_1092)).vrp_); ag2987.hidden_ = G_NV((*(P117)rt_nil_check(F->y_1092)).hidden_); ag2987.from_use_ = 0; ag2987.members_ = (*(P117)rt_nil_check(F->y_1092)).members_; ag2987.mnext_ = NULL; ag2987.chain_ = NULL; ag2987.stack_ = NULL; ag2987.flags_ = G_NV((*(P117)rt_nil_check(F->y_1092)).flags_); ag2987; })); (P117)cell2986; });
ret_:

  return;
}

static void f_complete_private_1097(struct f_greenc_1fr *up_, P122 ph_1095, P122 full_1096) {
  struct f_complete_private_1097fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1095 = ph_1095;
F->full_1096 = full_1096;
F->n_2988 = NULL;
F->n_2988 = (*(P122)rt_nil_check(F->ph_1095)).name_;
F->p_2989 = NULL;
F->p_2989 = (*(P122)rt_nil_check(F->ph_1095)).decl_;
as_R123(&(*(P122)rt_nil_check(F->ph_1095)), (*(P122)rt_nil_check(F->full_1096)));
(*(P122)rt_nil_check(F->ph_1095)).name_ = F->n_2988;
(*(P122)rt_nil_check(F->ph_1095)).priv_ = 1;
(*(P122)rt_nil_check(F->ph_1095)).decl_ = F->p_2989;
ret_:

  return;
}

static void f_package_spec_1099(struct f_greenc_1fr *up_, P174 e_1098) {
  struct f_package_spec_1099fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1098 = e_1098;
F->y_2990 = NULL;
F->m_2991 = NULL;
F->z_2992 = NULL;
F->saved_2993 = NULL;
F->saved_2993 = F->up->cur_pkg_225;
F->first_private_2994 = NULL;
F->y_2990 = f_new_sym_483(F->up, ((rt_int)8LL), (*(P174)rt_nil_check(F->e_1098)).name_);
(*(P117)rt_nil_check(F->y_2990)).decl_ = F->e_1098;
F->up->pkg_stack_224 = ({ R152 *cell2995 = rt_alloc(sizeof(R152)); *cell2995 = cp_R152(({ R152 ag2996; ag2996.s_ = (*(P174)rt_nil_check(F->e_1098)).name_; ag2996.next_ = F->up->pkg_stack_224; ag2996; })); (P151)cell2995; });
F->up->cur_pkg_225 = F->e_1098;
f_open_scope_479(F->up);
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->e_1098)).c_);
F->first_private_2994 = F->up->scope_stack_121;
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->e_1098)).d_);
F->m_2991 = F->up->scope_stack_121;
while (((F->m_2991 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_2991)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_2991)).kind_) == ((rt_int)2LL)) && (G_NV((*(P117)rt_nil_check(F->m_2991)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1098)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_2991)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1094(F->up, F->m_2991, &F->z_2992);
(*(P117)rt_nil_check(F->z_2992)).hidden_ = (f_hidden_from_1102(F->up, F->m_2991, F->first_private_2994) || G_NV((*(P117)rt_nil_check(F->m_2991)).from_use_));
(*(P117)rt_nil_check(F->z_2992)).mnext_ = (*(P117)rt_nil_check(F->y_2990)).members_;
(*(P117)rt_nil_check(F->y_2990)).members_ = F->z_2992;
F->m_2991 = (*(P117)rt_nil_check(F->m_2991)).stack_;
}
L_end_2997: ;
f_close_scope_480(F->up);
F->up->pkg_stack_224 = (*(P151)rt_nil_check(F->up->pkg_stack_224)).next_;
F->up->cur_pkg_225 = F->saved_2993;
f_define_478(F->up, F->y_2990, G_NV((*(P174)rt_nil_check(F->e_1098)).line_));
ret_:

  return;
}

static int f_hidden_from_1102(struct f_greenc_1fr *up_, P117 m_1100, P117 first_private_1101) {
  struct f_hidden_from_1102fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1100 = m_1100;
F->first_private_1101 = first_private_1101;
F->p_2998 = NULL;
F->p_2998 = F->up->scope_stack_121;
while ((F->p_2998 != NULL)) {
if ((F->p_2998 == F->first_private_1101)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_2998 == F->m_1100)) {
F->result_ = 1;
goto ret_;
}
F->p_2998 = (*(P117)rt_nil_check(F->p_2998)).stack_;
}
L_end_2999: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1104(struct f_greenc_1fr *up_, P174 e_1103) {
  struct f_package_body_1104fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1103 = e_1103;
F->saved_labels_3000 = NULL;
F->y_3001 = NULL;
F->y_3001 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1103)).name_)));
F->m_3002 = NULL;
F->z_3003 = NULL;
F->saved_3004 = NULL;
F->saved_3004 = F->up->cur_pkg_225;
if ((G_NV((*(P174)rt_nil_check(F->e_1103)).flag_) == ((rt_int)4LL))) {
f_stub_684(F->up, F->e_1103);
goto ret_;
}
if (f_is_generic_name_1297(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1103)).name_)))) {
f_attach_generic_body_1302(F->up, F->e_1103);
goto ret_;
}
if (((F->y_3001 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3001)).kind_) != ((rt_int)8LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1103)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1103)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_224 = ({ R152 *cell3005 = rt_alloc(sizeof(R152)); *cell3005 = cp_R152(({ R152 ag3006; ag3006.s_ = (*(P174)rt_nil_check(F->e_1103)).name_; ag3006.next_ = F->up->pkg_stack_224; ag3006; })); (P151)cell3005; });
F->up->cur_pkg_225 = (*(P117)rt_nil_check(F->y_3001)).decl_;
f_open_scope_479(F->up);
f_push_unit_448(F->up, (*(P174)rt_nil_check(F->e_1103)).name_);
F->m_3002 = (*(P117)rt_nil_check(F->y_3001)).members_;
while ((F->m_3002 != NULL)) {
f_copy_sym_1094(F->up, F->m_3002, &F->z_3003);
(*(P117)rt_nil_check(F->z_3003)).hidden_ = 0;
f_define_478(F->up, F->z_3003, G_NV((*(P174)rt_nil_check(F->e_1103)).line_));
F->m_3002 = (*(P117)rt_nil_check(F->m_3002)).mnext_;
}
L_end_3007: ;
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->e_1103)).c_);
F->m_3002 = (*(P117)rt_nil_check(F->y_3001)).members_;
while ((F->m_3002 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3002)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3002)).kind_) == ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_3002)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_3003 = ({ A116 ix3009 = F->up->table_119; ix3009.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3002)).name_))), ix3009.lo, ix3009.hi) - ix3009.lo]; });
while ((F->z_3003 != NULL)) {
if (((*(P117)rt_nil_check(F->z_3003)).cname_ == (*(P117)rt_nil_check(F->m_3002)).cname_)) {
(*(P117)rt_nil_check(F->m_3002)).decl_ = (*(P117)rt_nil_check(F->z_3003)).decl_;
}
F->z_3003 = (*(P117)rt_nil_check(F->z_3003)).chain_;
}
L_end_3010: ;
if ((G_NV((*(P174)rt_nil_check((*(P117)rt_nil_check(F->m_3002)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1103)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3002)).name_))), rt_g_lit(" in package body ", 17)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1103)).name_))));
}
}
F->m_3002 = (*(P117)rt_nil_check(F->m_3002)).mnext_;
}
L_end_3008: ;
F->saved_labels_3000 = F->up->body_labels_191;
f_label_body_706(F->up, (*(P174)rt_nil_check(F->e_1103)).d_, (*(P174)rt_nil_check(F->e_1103)).e_);
f_guarded_741(F->up, NULL, (*(P174)rt_nil_check(F->e_1103)).d_, (*(P174)rt_nil_check(F->e_1103)).e_, G_NV((*(P174)rt_nil_check(F->e_1103)).line_));
F->up->body_labels_191 = F->saved_labels_3000;
F->up->nunits_188 = rt_sub(G_NV(F->up->nunits_188), ((rt_int)1LL));
f_close_scope_480(F->up);
F->up->pkg_stack_224 = (*(P151)rt_nil_check(F->up->pkg_stack_224)).next_;
F->up->cur_pkg_225 = F->saved_3004;
ret_:

  return;
}

static int f_use_visible_1106(struct f_greenc_1fr *up_, P117 old_1105) {
  struct f_use_visible_1106fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1105 = old_1105;
if ((F->old_1105 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P117)rt_nil_check(F->old_1105)).depth_) < G_NV(F->up->depth_120)) && (G_NV((*(P117)rt_nil_check(F->old_1105)).kind_) != ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->old_1105)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1108(struct f_greenc_1fr *up_, P174 e_1107) {
  struct f_use_clause_1108fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1107 = e_1107;
F->n_3011 = NULL;
F->n_3011 = (*(P174)rt_nil_check(F->e_1107)).a_;
F->y_3012 = NULL;
F->m_3013 = NULL;
F->z_3014 = NULL;
F->old_3015 = NULL;
F->clash_3016 = INT_MIN;
while ((F->n_3011 != NULL)) {
F->y_3012 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3011)).name_)));
if ((F->y_3012 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->n_3011)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3011)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_3012)).kind_) != ((rt_int)8LL)) && (G_NV((*(P117)rt_nil_check(F->y_3012)).kind_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->n_3011)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3011)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3012)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P117)rt_nil_check(F->y_3012)).members_ == NULL))) {
F->z_3014 = f_new_sym_483(F->up, ((rt_int)2LL), f_mk_239(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P117)rt_nil_check(F->z_3014)).t_ = F->up->ty_void_161;
f_define_478(F->up, F->z_3014, G_NV((*(P174)rt_nil_check(F->n_3011)).line_));
} else {
F->m_3013 = (*(P117)rt_nil_check(F->y_3012)).members_;
while ((F->m_3013 != NULL)) {
if ((!G_NV((*(P117)rt_nil_check(F->m_3013)).hidden_))) {
F->old_3015 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3013)).name_)));
if ((!f_overloadable_452(F->up, F->m_3013))) {
if ((F->old_3015 == NULL)) {
f_copy_sym_1094(F->up, F->m_3013, &F->z_3014);
(*(P117)rt_nil_check(F->z_3014)).from_use_ = 1;
f_define_478(F->up, F->z_3014, G_NV((*(P174)rt_nil_check(F->n_3011)).line_));
} else if (((G_NV((*(P117)rt_nil_check(F->old_3015)).from_use_) && (G_NV((*(P117)rt_nil_check(F->old_3015)).depth_) == G_NV(F->up->depth_120))) && (!f_same_entity_1113(F->up, F->old_3015, F->m_3013)))) {
(*(P117)rt_nil_check(F->old_3015)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_3016 = 0;
F->z_3014 = ({ A116 ix3019 = F->up->table_119; ix3019.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3013)).name_))), ix3019.lo, ix3019.hi) - ix3019.lo]; });
while ((F->z_3014 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3014)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3013)).name_))) && f_overloadable_452(F->up, F->z_3014)) && f_visible_sym_433(F->up, F->z_3014))) {
if (f_same_entity_1113(F->up, F->z_3014, F->m_3013)) {
F->clash_3016 = 1;
} else if (((((!G_NV((*(P117)rt_nil_check(F->z_3014)).from_use_)) && f_same_types_469(F->up, (*(P117)rt_nil_check(F->z_3014)).params_, (*(P117)rt_nil_check(F->m_3013)).params_)) && f_same_455(F->up, (*(P117)rt_nil_check(F->z_3014)).result_, (*(P117)rt_nil_check(F->m_3013)).result_)) && ((G_NV((*(P117)rt_nil_check(F->z_3014)).kind_) != ((rt_int)7LL)) || f_same_455(F->up, (*(P117)rt_nil_check(F->z_3014)).t_, (*(P117)rt_nil_check(F->m_3013)).t_)))) {
F->clash_3016 = 1;
}
}
F->z_3014 = (*(P117)rt_nil_check(F->z_3014)).chain_;
}
L_end_3020: ;
if (((!G_NV(F->clash_3016)) && f_usable_over_1110(F->up, F->old_3015))) {
f_copy_sym_1094(F->up, F->m_3013, &F->z_3014);
(*(P117)rt_nil_check(F->z_3014)).from_use_ = 1;
f_define_478(F->up, F->z_3014, G_NV((*(P174)rt_nil_check(F->n_3011)).line_));
}
}
}
F->m_3013 = (*(P117)rt_nil_check(F->m_3013)).mnext_;
}
L_end_3018: ;
}
F->n_3011 = (*(P174)rt_nil_check(F->n_3011)).next_;
}
L_end_3017: ;
ret_:

  return;
}

static int f_usable_over_1110(struct f_greenc_1fr *up_, P117 old_1109) {
  struct f_usable_over_1110fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1109 = old_1109;
if ((F->old_1109 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_452(F->up, F->old_1109) || G_NV((*(P117)rt_nil_check(F->old_1109)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1113(struct f_greenc_1fr *up_, P117 a_1111, P117 b_1112) {
  struct f_same_entity_1113fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1111 = a_1111;
F->b_1112 = b_1112;
if ((G_NV((*(P117)rt_nil_check(F->a_1111)).kind_) != G_NV((*(P117)rt_nil_check(F->b_1112)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1111)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1112)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1111)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1112)).cname_)));
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1111)).access_path_ != NULL) && ((*(P117)rt_nil_check(F->b_1112)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1111)).access_path_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1112)).access_path_)));
goto ret_;
}
F->result_ = (((*(P117)rt_nil_check(F->a_1111)).t_ == (*(P117)rt_nil_check(F->b_1112)).t_) && ((*(P117)rt_nil_check(F->a_1111)).decl_ == (*(P117)rt_nil_check(F->b_1112)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1118(struct f_greenc_1fr *up_, P117 y_1114, P174 args_1115, P122 want_1116, int *ok_1117) {
  struct f_fits_1118fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1114 = y_1114;
F->args_1115 = args_1115;
F->want_1116 = want_1116;
F->ok_1117 = ok_1117;
F->pm_3021 = NULL;
F->pm_3021 = (*(P117)rt_nil_check(F->y_1114)).params_;
F->a_3022 = NULL;
F->t_3023 = NULL;
F->c_3024 = NULL;
F->v_3025 = NULL;
F->ro_3026 = INT_MIN;
F->saved_3027 = NULL;
F->saved_3027 = F->up->code_136;
F->used_3028 = INT64_MIN;
F->used_3028 = ((rt_int)0LL);
(*F->ok_1117) = 1;
F->up->trial_155 = rt_add(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = f_new_buffer_261(F->up);
{
{ rt_frame xf3030;
if (RT_TRY(xf3030)) {
while ((G_NV((*F->ok_1117)) && (F->pm_3021 != NULL))) {
F->a_3022 = f_actual_for_1044(F->up, F->args_1115, F->pm_3021, (*(P117)rt_nil_check(F->y_1114)).params_);
if ((F->a_3022 == NULL)) {
(*F->ok_1117) = ((*(P1944)rt_nil_check(F->pm_3021)).dflt_ != NULL);
} else {
F->used_3028 = rt_add(G_NV(F->used_3028), ((rt_int)1LL));
if ((((G_NV((*(P174)rt_nil_check(F->a_3022)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_3022)).flag_) != ((rt_int)4LL))) && (G_NV((*(P174)rt_nil_check(F->a_3022)).flag_) != G_NV((*(P1944)rt_nil_check(F->pm_3021)).mode_)))) {
(*F->ok_1117) = 0;
} else if ((G_NV((*(P1944)rt_nil_check(F->pm_3021)).mode_) == ((rt_int)1LL))) {
f_gexpr_842(F->up, F->a_3022, (*(P1944)rt_nil_check(F->pm_3021)).t_, &F->t_3023, &F->v_3025);
(*F->ok_1117) = (f_same_455(F->up, F->t_3023, (*(P1944)rt_nil_check(F->pm_3021)).t_) || ((G_NV((*(P122)rt_nil_check(F->t_3023)).kind_) == ((rt_int)10LL)) && (G_NV((*(P122)rt_nil_check((*(P1944)rt_nil_check(F->pm_3021)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_798(F->up, F->a_3022, &F->v_3025, &F->t_3023, &F->c_3024, &F->ro_3026);
 (void)rt_range(F->ro_3026, 0, 1);
(*F->ok_1117) = f_same_455(F->up, F->t_3023, (*(P1944)rt_nil_check(F->pm_3021)).t_);
}
}
F->pm_3021 = (*(P1944)rt_nil_check(F->pm_3021)).next_;
}
L_end_3032: ;
if ((G_NV(F->used_3028) != f_list_len_319(F->up, F->args_1115))) {
(*F->ok_1117) = 0;
}
if (((G_NV((*F->ok_1117)) && (F->want_1116 != NULL)) && (G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1114)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1117) = (f_same_455(F->up, (*(P117)rt_nil_check(F->y_1114)).result_, F->want_1116) || (G_NV((*(P122)rt_nil_check(F->want_1116)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf3030);
} else {
RT_POP(xf3030);
int x3031 = rt_xcur;
if (rt_g_aborted()) rt_raise(x3031);
if (0 || x3031 == ex_compile_error_108) {
(*F->ok_1117) = 0;
} else {
rt_raise(x3031);
}
}
}

}
L_end_3029: ;
F->up->trial_155 = rt_sub(G_NV(F->up->trial_155), ((rt_int)1LL));
F->up->code_136 = F->saved_3027;
ret_:

  return;
}

static int f_is_builtin_1120(struct f_greenc_1fr *up_, rt_gstr n_1119) {
  struct f_is_builtin_1120fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1119 = cp_rt_gstr(n_1119);
F->result_ = (((eq_rt_gstr(F->n_1119, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1119, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1119, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1119, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1127(struct f_greenc_1fr *up_, rt_gstr name_1121, P174 args_1122, int is_stmt_1123, P122 want_1124, rt_int line_1125, P117 *y_1126) {
  struct f_resolve_overload_1127fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1121 = cp_rt_gstr(name_1121);
F->args_1122 = args_1122;
F->is_stmt_1123 = is_stmt_1123;
F->want_1124 = want_1124;
F->line_1125 = line_1125;
F->y_1126 = y_1126;
F->z_3033 = NULL;
F->w_3034 = NULL;
F->first_3035 = NULL;
F->found_3036 = NULL;
F->n_3037 = INT64_MIN;
F->n_3037 = ((rt_int)0LL);
F->ok_3038 = INT_MIN;
F->hidden_3039 = INT_MIN;
{ rt_int lo3042 = ((rt_int)1LL), hi3043 = ((rt_int)2LL);
for (rt_int it3044 = lo3042; it3044 <= hi3043; it3044++) {
F->pass_3041 = it3044;
F->z_3033 = ({ A116 ix3045 = F->up->table_119; ix3045.p[rt_index(f_hash_428(F->up, F->name_1121), ix3045.lo, ix3045.hi) - ix3045.lo]; });
F->n_3037 = ((rt_int)0LL);
F->found_3036 = NULL;
while ((F->z_3033 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3033)).name_)), F->name_1121) && ((G_NV((*(P117)rt_nil_check(F->z_3033)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_3033)).kind_) == ((rt_int)4LL)))) && f_visible_sym_433(F->up, F->z_3033))) {
if ((F->first_3035 == NULL)) {
F->first_3035 = F->z_3033;
}
F->hidden_3039 = 0;
F->w_3034 = ({ A116 ix3047 = F->up->table_119; ix3047.p[rt_index(f_hash_428(F->up, F->name_1121), ix3047.lo, ix3047.hi) - ix3047.lo]; });
while ((F->w_3034 != F->z_3033)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->w_3034)).name_)), F->name_1121) && ((G_NV((*(P117)rt_nil_check(F->w_3034)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->w_3034)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1130(F->up, F->w_3034, F->z_3033)) {
F->hidden_3039 = 1;
}
}
F->w_3034 = (*(P117)rt_nil_check(F->w_3034)).chain_;
}
L_end_3048: ;
if (((!G_NV(F->hidden_3039)) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3033)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1123))) {
if ((F->pass_3041 == ((rt_int)1LL))) {
f_fits_1118(F->up, F->z_3033, F->args_1122, F->want_1124, &F->ok_3038);
 (void)rt_range(F->ok_3038, 0, 1);
} else {
f_fits_1118(F->up, F->z_3033, F->args_1122, NULL, &F->ok_3038);
 (void)rt_range(F->ok_3038, 0, 1);
}
if (G_NV(F->ok_3038)) {
if ((F->found_3036 != NULL)) {
f_fail_260(F->up, F->line_1125, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1121), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_3036 = F->z_3033;
}
}
}
F->z_3033 = (*(P117)rt_nil_check(F->z_3033)).chain_;
}
L_end_3046: ;
if ((F->found_3036 != NULL)) {
(*F->y_1126) = F->found_3036;
goto ret_;
}
}
}
L_end_3040: ;
if (f_is_builtin_1120(F->up, F->name_1121)) {
(*F->y_1126) = NULL;
goto ret_;
}
F->z_3033 = ({ A116 ix3049 = F->up->table_119; ix3049.p[rt_index(f_hash_428(F->up, F->name_1121), ix3049.lo, ix3049.hi) - ix3049.lo]; });
while ((F->z_3033 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3033)).name_)), F->name_1121) && ((G_NV((*(P117)rt_nil_check(F->z_3033)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_3033)).kind_) == ((rt_int)4LL))))) {
F->n_3037 = rt_add(G_NV(F->n_3037), ((rt_int)1LL));
}
F->z_3033 = (*(P117)rt_nil_check(F->z_3033)).chain_;
}
L_end_3050: ;
if ((G_NV(F->n_3037) > ((rt_int)1LL))) {
f_fail_260(F->up, F->line_1125, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1121), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1126) = F->first_3035;
ret_:

  return;
}

static int f_same_profile_1130(struct f_greenc_1fr *up_, P117 a_1128, P117 b_1129) {
  struct f_same_profile_1130fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1128 = a_1128;
F->b_1129 = b_1129;
if (((!f_same_types_469(F->up, (*(P117)rt_nil_check(F->a_1128)).params_, (*(P117)rt_nil_check(F->b_1129)).params_)) || (!f_same_455(F->up, (*(P117)rt_nil_check(F->a_1128)).result_, (*(P117)rt_nil_check(F->b_1129)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P117)rt_nil_check(F->a_1128)).cname_ != NULL) && ((*(P117)rt_nil_check(F->b_1129)).cname_ != NULL))) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->a_1128)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_1129)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_472(F->up, (*(P117)rt_nil_check(F->a_1128)).params_, (*(P117)rt_nil_check(F->b_1129)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1138(struct f_greenc_1fr *up_, rt_gstr p_1131, rt_gstr name_1132, P174 args_1133, int is_stmt_1134, P122 want_1135, rt_int line_1136, P117 *y_1137) {
  struct f_resolve_member_overload_1138fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1131 = cp_rt_gstr(p_1131);
F->name_1132 = cp_rt_gstr(name_1132);
F->args_1133 = args_1133;
F->is_stmt_1134 = is_stmt_1134;
F->want_1135 = want_1135;
F->line_1136 = line_1136;
F->y_1137 = y_1137;
F->pk_3051 = NULL;
F->pk_3051 = f_lookup_path_1083(F->up, F->p_1131);
F->z_3052 = NULL;
F->found_3053 = NULL;
F->n_3054 = INT64_MIN;
F->n_3054 = ((rt_int)0LL);
F->ok_3055 = INT_MIN;
if ((F->pk_3051 == NULL)) {
goto ret_;
}
{ rt_int lo3058 = ((rt_int)1LL), hi3059 = ((rt_int)2LL);
for (rt_int it3060 = lo3058; it3060 <= hi3059; it3060++) {
F->pass_3057 = it3060;
F->z_3052 = (*(P117)rt_nil_check(F->pk_3051)).members_;
F->n_3054 = ((rt_int)0LL);
F->found_3053 = NULL;
while ((F->z_3052 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3052)).name_)), F->name_1132) && ((G_NV((*(P117)rt_nil_check(F->z_3052)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->z_3052)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P117)rt_nil_check(F->z_3052)).hidden_)))) {
F->n_3054 = rt_add(G_NV(F->n_3054), ((rt_int)1LL));
if (((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3052)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1134)) {
if ((F->pass_3057 == ((rt_int)1LL))) {
f_fits_1118(F->up, F->z_3052, F->args_1133, F->want_1135, &F->ok_3055);
 (void)rt_range(F->ok_3055, 0, 1);
} else {
f_fits_1118(F->up, F->z_3052, F->args_1133, NULL, &F->ok_3055);
 (void)rt_range(F->ok_3055, 0, 1);
}
if (G_NV(F->ok_3055)) {
if (((F->found_3053 != NULL) && (!f_same_profile_1130(F->up, F->found_3053, F->z_3052)))) {
f_fail_260(F->up, F->line_1136, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1132), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_3053 = F->z_3052;
}
}
}
F->z_3052 = (*(P117)rt_nil_check(F->z_3052)).mnext_;
}
L_end_3061: ;
if ((F->found_3053 != NULL)) {
(*F->y_1137) = F->found_3053;
goto ret_;
}
}
}
L_end_3056: ;
if ((G_NV(F->n_3054) > ((rt_int)1LL))) {
f_fail_260(F->up, F->line_1136, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1132), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1144(struct f_greenc_1fr *up_, P174 e_1139, P122 want_1140, P122 *t_1141, P140 *r_1142, int *done_1143) {
  struct f_user_operator_1144fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1139 = e_1139;
F->want_1140 = want_1140;
F->t_1141 = t_1141;
F->r_1142 = r_1142;
F->done_1143 = done_1143;
F->op_3062 = NULL;
F->op_3062 = (*(P174)rt_nil_check(F->e_1139)).name_;
F->negate_3063 = INT_MIN;
F->negate_3063 = 0;
F->y_3064 = NULL;
F->call_3065 = NULL;
F->fname_3066 = NULL;
F->l_3067 = NULL;
F->rt_3068 = NULL;
F->ok_3069 = INT_MIN;
(*F->done_1143) = 0;
if (eq_rt_gstr((*(P140)rt_nil_check(F->op_3062)), rt_g_lit("/=", 2))) {
F->op_3062 = f_mk_239(F->up, rt_g_lit("=", 1));
F->negate_3063 = 1;
}
if ((f_lookup_435(F->up, (*(P140)rt_nil_check(F->op_3062))) == NULL)) {
goto ret_;
}
F->l_3067 = f_nn_313(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).a_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).a_)).line_));
as_R175(&(*(P174)rt_nil_check(F->l_3067)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).a_)));
(*(P174)rt_nil_check(F->l_3067)).next_ = NULL;
(*(P174)rt_nil_check(F->l_3067)).formal_ = NULL;
(*(P174)rt_nil_check(F->l_3067)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P174)rt_nil_check(F->e_1139)).kind_) == ((rt_int)7LL))) {
F->rt_3068 = f_nn_313(F->up, G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).b_)).kind_), G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).b_)).line_));
as_R175(&(*(P174)rt_nil_check(F->rt_3068)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1139)).b_)));
(*(P174)rt_nil_check(F->rt_3068)).next_ = NULL;
(*(P174)rt_nil_check(F->rt_3068)).formal_ = NULL;
(*(P174)rt_nil_check(F->rt_3068)).flag_ = ((rt_int)0LL);
(*(P174)rt_nil_check(F->l_3067)).next_ = F->rt_3068;
}
F->y_3064 = ({ A116 ix3070 = F->up->table_119; ix3070.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check(F->op_3062))), ix3070.lo, ix3070.hi) - ix3070.lo]; });
while ((F->y_3064 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3064)).name_)), (*(P140)rt_nil_check(F->op_3062))) && (G_NV((*(P117)rt_nil_check(F->y_3064)).kind_) == ((rt_int)3LL))) && f_visible_sym_433(F->up, F->y_3064))) {
f_fits_1118(F->up, F->y_3064, F->l_3067, NULL, &F->ok_3069);
 (void)rt_range(F->ok_3069, 0, 1);
if (G_NV(F->ok_3069)) {
F->fname_3066 = f_nn_313(F->up, ((rt_int)5LL), G_NV((*(P174)rt_nil_check(F->e_1139)).line_));
(*(P174)rt_nil_check(F->fname_3066)).name_ = F->op_3062;
F->call_3065 = f_nn_313(F->up, ((rt_int)8LL), G_NV((*(P174)rt_nil_check(F->e_1139)).line_));
(*(P174)rt_nil_check(F->call_3065)).a_ = F->fname_3066;
(*(P174)rt_nil_check(F->call_3065)).b_ = F->l_3067;
F->up->call_want_227 = NULL;
f_gcall_with_1074(F->up, F->call_3065, F->y_3064, &(*F->t_1141), &(*F->r_1142));
if (G_NV(F->negate_3063)) {
(*F->r_1142) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P140)rt_nil_check((*F->r_1142)))), one_rt_gstr(41)));
}
(*F->done_1143) = 1;
goto ret_;
}
}
F->y_3064 = (*(P117)rt_nil_check(F->y_3064)).chain_;
}
L_end_3071: ;
ret_:

  return;
}

static void f_task_p_1146(struct f_greenc_1fr *up_, P174 *res_1145) {
  struct f_task_p_1146fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1145 = res_1145;
F->x_3072 = NULL;
F->r_3073 = NULL;
F->line_3074 = INT64_MIN;
F->line_3074 = f_cur_line_320(F->up);
f_expect_kw_335(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_322(F->up, rt_g_lit("BODY", 4))) {
f_skip_333(F->up);
F->x_3072 = f_nn_313(F->up, ((rt_int)51LL), G_NV(F->line_3074));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_3072)).name_);
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
if (f_at_kw_322(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_333(F->up);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_3072)).flag_ = ((rt_int)4LL);
(*F->res_1145) = F->x_3072;
goto ret_;
}
f_body_part_404(F->up, F->x_3072);
} else {
F->x_3072 = f_nn_313(F->up, ((rt_int)50LL), G_NV(F->line_3074));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_3072)).name_);
if (((f_at_kw_322(F->up, rt_g_lit("IS", 2)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1293(F->up, F->x_3072, &(*F->res_1145));
goto ret_;
}
if (f_at_kw_322(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_3072)).flag_ = ((rt_int)3LL);
f_name_p_371(F->up, &(*(P174)rt_nil_check(F->x_3072)).b_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1145) = F->x_3072;
goto ret_;
}
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
f_discrete_range_p_375(F->up, &(*(P174)rt_nil_check(F->x_3072)).a_);
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3072)).a_)).kind_) == ((rt_int)5LL))) {
F->r_3073 = f_nn_313(F->up, ((rt_int)80LL), G_NV(F->line_3074));
(*(P174)rt_nil_check(F->r_3073)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3072)).a_)).name_;
(*(P174)rt_nil_check(F->x_3072)).a_ = F->r_3073;
}
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_322(F->up, rt_g_lit("IS", 2))) {
f_skip_333(F->up);
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_3072)).c_);
if (f_at_kw_322(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_333(F->up);
f_decl_part_392(F->up, &(*(P174)rt_nil_check(F->x_3072)).d_);
}
f_expect_kw_335(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_skip_333(F->up);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1145) = F->x_3072;
ret_:

  return;
}

static void f_entry_p_1148(struct f_greenc_1fr *up_, P174 *res_1147) {
  struct f_entry_p_1148fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1147 = res_1147;
F->x_3075 = NULL;
f_expect_kw_335(F->up, rt_g_lit("ENTRY", 5));
F->x_3075 = f_nn_313(F->up, ((rt_int)52LL), f_cur_line_320(F->up));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_3075)).name_);
if ((f_at_op_324(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_333(F->up);
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->x_3075)).b_);
} else {
f_discrete_range_p_375(F->up, &(*(P174)rt_nil_check(F->x_3075)).b_);
}
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_formal_part_398(F->up, &(*(P174)rt_nil_check(F->x_3075)).a_);
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1147) = F->x_3075;
ret_:

  return;
}

static void f_accept_p_1150(struct f_greenc_1fr *up_, P174 *res_1149) {
  struct f_accept_p_1150fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1149 = res_1149;
F->x_3076 = NULL;
f_expect_kw_335(F->up, rt_g_lit("ACCEPT", 6));
F->x_3076 = f_nn_313(F->up, ((rt_int)34LL), f_cur_line_320(F->up));
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->x_3076)).name_);
if ((f_at_op_324(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_330(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->x_3076)).c_);
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_formal_part_398(F->up, &(*(P174)rt_nil_check(F->x_3076)).a_);
}
if (f_at_kw_322(F->up, rt_g_lit("DO", 2))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_3076)).flag_ = ((rt_int)1LL);
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_3076)).b_);
f_expect_kw_335(F->up, rt_g_lit("END", 3));
if (f_at_kind_326(F->up, ((rt_int)1LL))) {
f_skip_333(F->up);
}
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1149) = F->x_3076;
ret_:

  return;
}

static void f_delay_p_1152(struct f_greenc_1fr *up_, P174 *res_1151) {
  struct f_delay_p_1152fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1151 = res_1151;
F->x_3077 = NULL;
f_expect_kw_335(F->up, rt_g_lit("DELAY", 5));
F->x_3077 = f_nn_313(F->up, ((rt_int)32LL), f_cur_line_320(F->up));
f_simple_expr_358(F->up, &(*(P174)rt_nil_check(F->x_3077)).a_);
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1151) = F->x_3077;
ret_:

  return;
}

static void f_designators_1154(struct f_greenc_1fr *up_, P174 *res_1153) {
  struct f_designators_1154fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1153 = res_1153;
F->head_3078 = NULL;
F->tail_3079 = NULL;
F->n_3080 = NULL;
for (;;) {
f_name_p_371(F->up, &F->n_3080);
f_append_317(F->up, &F->head_3078, &F->tail_3079, F->n_3080);
if ((!f_at_op_324(F->up, rt_g_lit(",", 1)))) {
goto L_end_3081;
}
f_skip_333(F->up);
}
L_end_3081: ;
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*F->res_1153) = F->head_3078;
ret_:

  return;
}

static void f_parse_task_statement_1156(struct f_greenc_1fr *up_, P174 *res_1155) {
  struct f_parse_task_statement_1156fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1155 = res_1155;
F->x_3082 = NULL;
F->alt_3083 = NULL;
F->head_3084 = NULL;
F->tail_3085 = NULL;
F->line_3086 = INT64_MIN;
F->line_3086 = f_cur_line_320(F->up);
(*F->res_1155) = NULL;
if (f_at_kw_322(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_333(F->up);
F->x_3082 = f_nn_313(F->up, ((rt_int)33LL), G_NV(F->line_3086));
f_designators_1154(F->up, &(*(P174)rt_nil_check(F->x_3082)).a_);
(*F->res_1155) = F->x_3082;
} else if (f_at_kw_322(F->up, rt_g_lit("ABORT", 5))) {
f_skip_333(F->up);
F->x_3082 = f_nn_313(F->up, ((rt_int)36LL), G_NV(F->line_3086));
f_designators_1154(F->up, &(*(P174)rt_nil_check(F->x_3082)).a_);
(*F->res_1155) = F->x_3082;
} else if (f_at_kw_322(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1152(F->up, &(*F->res_1155));
} else if (f_at_kw_322(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1150(F->up, &(*F->res_1155));
} else if (f_at_kw_322(F->up, rt_g_lit("SELECT", 6))) {
f_skip_333(F->up);
F->x_3082 = f_nn_313(F->up, ((rt_int)35LL), G_NV(F->line_3086));
for (;;) {
F->alt_3083 = f_nn_313(F->up, ((rt_int)64LL), f_cur_line_320(F->up));
if (f_at_kw_322(F->up, rt_g_lit("WHEN", 4))) {
f_skip_333(F->up);
f_expr_350(F->up, &(*(P174)rt_nil_check(F->alt_3083)).a_);
f_expect_op_337(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_322(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1150(F->up, &(*(P174)rt_nil_check(F->alt_3083)).b_);
} else if (f_at_kw_322(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1152(F->up, &(*(P174)rt_nil_check(F->alt_3083)).b_);
} else {
f_perror_332(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_411(F->up, &(*(P174)rt_nil_check(F->alt_3083)).c_);
f_append_317(F->up, &F->head_3084, &F->tail_3085, F->alt_3083);
if ((!f_at_kw_322(F->up, rt_g_lit("OR", 2)))) {
goto L_end_3087;
}
f_skip_333(F->up);
}
L_end_3087: ;
if (f_at_kw_322(F->up, rt_g_lit("ELSE", 4))) {
f_skip_333(F->up);
(*(P174)rt_nil_check(F->x_3082)).flag_ = ((rt_int)1LL);
f_statements_411(F->up, &(*(P174)rt_nil_check(F->x_3082)).b_);
}
f_expect_kw_335(F->up, rt_g_lit("END", 3));
f_expect_kw_335(F->up, rt_g_lit("SELECT", 6));
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->x_3082)).a_ = F->head_3084;
(*F->res_1155) = F->x_3082;
}
ret_:

  return;
}

static void f_path_at_1160(struct f_greenc_1fr *up_, rt_int level_1157, rt_gstr field_1158, P140 *r_1159) {
  struct f_path_at_1160fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1157 = level_1157;
F->field_1158 = cp_rt_gstr(field_1158);
F->r_1159 = r_1159;
if ((F->level_1157 <= ((rt_int)0LL))) {
(*F->r_1159) = f_mk_239(F->up, F->field_1158);
goto ret_;
}
(*F->r_1159) = f_mk_239(F->up, rt_g_lit("F", 1));
{ rt_int lo3090 = ((rt_int)1LL), hi3091 = rt_sub(G_NV(F->up->cur_level_139), F->level_1157);
for (rt_int it3092 = lo3090; it3092 <= hi3091; it3092++) {
F->i_3089 = it3092;
(*F->r_1159) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1159))), rt_g_lit("->up", 4)));
}
}
L_end_3088: ;
(*F->r_1159) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1159))), rt_g_lit("->", 2)), F->field_1158));
ret_:

  return;
}

static int f_is_task_name_1162(struct f_greenc_1fr *up_, rt_gstr n_1161) {
  struct f_is_task_name_1162fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1161 = cp_rt_gstr(n_1161);
F->y_3093 = NULL;
F->y_3093 = f_lookup_435(F->up, F->n_1161);
if ((!(F->y_3093 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3093)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1166(struct f_greenc_1fr *up_, P174 e_1163, P117 *y_1164, P174 *ix_1165) {
  struct f_task_of_1166fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1163 = e_1163;
F->y_1164 = y_1164;
F->ix_1165 = ix_1165;
F->n_3094 = NULL;
F->n_3094 = F->e_1163;
F->a_3095 = NULL;
(*F->ix_1165) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1163)).kind_) == ((rt_int)5LL))) {
F->a_3095 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1163)).name_)));
if (((F->a_3095 != NULL) && ((G_NV((*(P117)rt_nil_check(F->a_3095)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->a_3095)).flags_) == ((rt_int)4LL))))) {
f_task_of_1166(F->up, (*(P117)rt_nil_check(F->a_3095)).decl_, &(*F->y_1164), &(*F->ix_1165));
goto ret_;
}
}
if ((G_NV((*(P174)rt_nil_check(F->e_1163)).kind_) == ((rt_int)8LL))) {
F->n_3094 = (*(P174)rt_nil_check(F->e_1163)).a_;
(*F->ix_1165) = (*(P174)rt_nil_check(F->e_1163)).b_;
}
if ((G_NV((*(P174)rt_nil_check(F->n_3094)).kind_) != ((rt_int)5LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1163)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1164) = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3094)).name_)));
if ((((*F->y_1164) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1164))).kind_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1163)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3094)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1165) != NULL) && ((*(P117)rt_nil_check((*F->y_1164))).c_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1163)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3094)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1169(struct f_greenc_1fr *up_, P117 t_1167, P140 *r_1168) {
  struct f_own_index_1169fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1167 = t_1167;
F->r_1168 = r_1168;
F->y_3096 = NULL;
F->y_3096 = f_lookup_435(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->t_1167)).cname_))));
if ((F->y_3096 == NULL)) {
f_fail_260(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_779(F->up, F->y_3096, &(*F->r_1168));
ret_:

  return;
}

static void f_member_1174(struct f_greenc_1fr *up_, P117 y_1170, rt_gstr arr_1171, rt_gstr i_1172, P140 *r_1173) {
  struct f_member_1174fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1170 = y_1170;
F->arr_1171 = cp_rt_gstr(arr_1171);
F->i_1172 = cp_rt_gstr(i_1172);
F->r_1173 = r_1173;
F->lo_3097 = NULL;
F->hi_3098 = NULL;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1170)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1170)).cname_)), rt_g_lit("lo", 2)), &F->lo_3097);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1170)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1170)).cname_)), rt_g_lit("hi", 2)), &F->hi_3098);
(*F->r_1173) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1171, rt_g_lit("[rt_index(", 10)), F->i_1172), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3097))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3098))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3097))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1177(struct f_greenc_1fr *up_, P117 y_1175, P140 *r_1176) {
  struct f_act_path_1177fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1175 = y_1175;
F->r_1176 = r_1176;
F->i_3099 = NULL;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1175)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1175)).cname_)), rt_g_lit("act", 3)), &(*F->r_1176));
if (((*(P117)rt_nil_check(F->y_1175)).c_ != NULL)) {
f_own_index_1169(F->up, F->y_1175, &F->i_3099);
f_member_1174(F->up, F->y_1175, (*(P140)rt_nil_check((*F->r_1176))), (*(P140)rt_nil_check(F->i_3099)), &(*F->r_1176));
}
ret_:

  return;
}

static void f_act_path_i_1181(struct f_greenc_1fr *up_, P117 y_1178, rt_gstr i_1179, P140 *r_1180) {
  struct f_act_path_i_1181fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1178 = y_1178;
F->i_1179 = cp_rt_gstr(i_1179);
F->r_1180 = r_1180;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1178)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1178)).cname_)), rt_g_lit("act", 3)), &(*F->r_1180));
f_member_1174(F->up, F->y_1178, (*(P140)rt_nil_check((*F->r_1180))), F->i_1179, &(*F->r_1180));
ret_:

  return;
}

static void f_entry_path_1185(struct f_greenc_1fr *up_, P117 y_1182, rt_gstr i_1183, P140 *r_1184) {
  struct f_entry_path_1185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1182 = y_1182;
F->i_1183 = cp_rt_gstr(i_1183);
F->r_1184 = r_1184;
F->own_3100 = NULL;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1182)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1182)).access_path_)), &(*F->r_1184));
if (((((*(P117)rt_nil_check(F->y_1182)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1182)).members_)).c_ != NULL)) && (!G_NV((*(P117)rt_nil_check(F->y_1182)).ro_)))) {
if ((({ rt_gstr at3101 = F->i_1183; at3101.hi >= at3101.lo ? at3101.hi - at3101.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1169(F->up, (*(P117)rt_nil_check(F->y_1182)).members_, &F->own_3100);
f_member_1174(F->up, (*(P117)rt_nil_check(F->y_1182)).members_, (*(P140)rt_nil_check((*F->r_1184))), (*(P140)rt_nil_check(F->own_3100)), &(*F->r_1184));
} else {
f_member_1174(F->up, (*(P117)rt_nil_check(F->y_1182)).members_, (*(P140)rt_nil_check((*F->r_1184))), F->i_1183, &(*F->r_1184));
}
}
ret_:

  return;
}

static void f_declare_slot_1188(struct f_greenc_1fr *up_, rt_gstr ctype_name_1186, rt_gstr field_1187) {
  struct f_declare_slot_1188fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1186 = cp_rt_gstr(ctype_name_1186);
F->field_1187 = cp_rt_gstr(field_1187);
if (G_NV(F->up->in_func_138)) {
f_put_to_264(F->up, F->up->fields_buf_137, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1186), one_rt_gstr(32)), F->field_1187), one_rt_gstr(59)));
} else {
f_put_to_264(F->up, F->up->out_globals_132, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1186), one_rt_gstr(32)), F->field_1187), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1190(struct f_greenc_1fr *up_, P174 e_1189) {
  struct f_task_decl_1190fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1189 = e_1189;
if ((G_NV((*(P174)rt_nil_check(F->e_1189)).kind_) == ((rt_int)50LL))) {
f_task_spec_1203(F->up, F->e_1189);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1189)).kind_) == ((rt_int)51LL))) {
f_task_body_1207(F->up, F->e_1189);
} else if ((G_NV((*(P174)rt_nil_check(F->e_1189)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1205(F->up, F->e_1189);
} else {
f_generic_decl_1295(F->up, F->e_1189);
}
ret_:

  return;
}

static void f_family_arg_struct_1191(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1191fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_213))) {
F->up->famarg_done_213 = 1;
f_put_to_264(F->up, F->up->out_types_128, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1196(struct f_greenc_1fr *up_, P174 b_1192, P117 y_1193, P140 x_1194, int per_member_1195) {
  struct f_family_bounds_1196fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1192 = b_1192;
F->y_1193 = y_1193;
F->x_1194 = x_1194;
F->per_member_1195 = per_member_1195;
F->lo_3102 = NULL;
F->hi_3103 = NULL;
F->v_3104 = NULL;
F->d_3105 = NULL;
F->mlo_3106 = NULL;
F->mhi_3107 = NULL;
F->vt_3108 = NULL;
F->c_3109 = NULL;
(*(P117)rt_nil_check(F->y_1193)).c_ = f_new_cons_486(F->up);
if (F->per_member_1195) {
f_declare_slot_1188(F->up, rt_g_lit("rt_entry **", 11), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).access_path_)));
} else {
f_declare_slot_1188(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).access_path_)));
}
f_declare_slot_1188(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1188(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1193)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).cname_)), rt_g_lit("flo", 3)), &F->lo_3102);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1193)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1193)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3103);
f_discrete_bounds_535(F->up, F->b_1192, NULL, &F->vt_3108, &F->v_3104, &F->d_3105);
(*(P117)rt_nil_check(F->y_1193)).t_ = F->vt_3108;
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->lo_3102)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3104))), rt_g_lit("; ", 2)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3105))), one_rt_gstr(59)));
if (F->per_member_1195) {
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("lo", 2)), &F->mlo_3106);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("hi", 2)), &F->mhi_3107);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1194)), rt_g_lit(" = rt_alloc(sizeof(rt_entry *) * (size_t)(", 42)), (*(P140)rt_nil_check(F->mhi_3107))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->mlo_3106))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->mhi_3107))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3106))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int m_ = 0; m_ <= ", 26), (*(P140)rt_nil_check(F->mhi_3107))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->mlo_3106))), rt_g_lit("; m_++) { ", 10)), (*(P140)rt_nil_check(F->x_1194))), rt_g_lit("[m_] = rt_alloc(sizeof(rt_entry) * (size_t)(", 44)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit(" + 1 : 1)); for (rt_int k_ = 0; k_ <= ", 38)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1194))), rt_g_lit("[m_][k_]); }", 12)));
goto ret_;
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_1194)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3103))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3102))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_1194))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1201(struct f_greenc_1fr *up_, P117 y_1197, rt_gstr base_1198, rt_gstr i_1199, P140 *r_1200) {
  struct f_entry_family_slot_1201fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1197 = y_1197;
F->base_1198 = cp_rt_gstr(base_1198);
F->i_1199 = cp_rt_gstr(i_1199);
F->r_1200 = r_1200;
F->lo_3110 = NULL;
F->hi_3111 = NULL;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1197)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1197)).cname_)), rt_g_lit("flo", 3)), &F->lo_3110);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1197)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1197)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3111);
(*F->r_1200) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1198, rt_g_lit("[rt_index(", 10)), F->i_1199), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->lo_3110))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->hi_3111))), rt_g_lit(") - ", 4)), (*(P140)rt_nil_check(F->lo_3110))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1203(struct f_greenc_1fr *up_, P174 e_1202) {
  struct f_task_spec_1203fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1202 = e_1202;
F->has_procs_3112 = INT_MIN;
F->has_procs_3112 = 0;
F->saved_defer_3113 = INT_MIN;
F->fields_3114 = NULL;
F->ct_3115 = NULL;
F->pm_3116 = NULL;
F->fp_3117 = NULL;
F->flo_3118 = NULL;
F->fhi_3119 = NULL;
F->y_3120 = NULL;
F->m_3121 = NULL;
F->z_3122 = NULL;
F->saved_3123 = NULL;
F->saved_3123 = F->up->cur_task_211;
F->d_3124 = NULL;
F->v_3125 = NULL;
F->p_3126 = NULL;
F->p2_3127 = NULL;
F->vt_3128 = NULL;
F->r_3129 = NULL;
F->y_3120 = f_new_sym_483(F->up, ((rt_int)9LL), (*(P174)rt_nil_check(F->e_1202)).name_);
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1202)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3120)).cname_);
(*(P117)rt_nil_check(F->y_3120)).decl_ = F->e_1202;
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3120)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3120)).access_path_ = (*(P117)rt_nil_check(F->y_3120)).cname_;
f_declare_slot_1188(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("decl", 4)));
if (((*(P174)rt_nil_check(F->e_1202)).a_ != NULL)) {
(*(P117)rt_nil_check(F->y_3120)).c_ = f_new_cons_486(F->up);
f_declare_slot_1188(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1188(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1188(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_535(F->up, (*(P174)rt_nil_check(F->e_1202)).a_, NULL, &F->vt_3128, &F->v_3125, &F->d_3124);
(*(P117)rt_nil_check(F->y_3120)).t_ = F->vt_3128;
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("lo", 2)), &F->p_3126);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p_3126)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3125))), one_rt_gstr(59)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("hi", 2)), &F->p2_3127);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->p2_3127)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->d_3124))), one_rt_gstr(59)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("act", 3)), &F->v_3125);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->v_3125)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P140)rt_nil_check(F->p2_3127))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->p_3126))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->p2_3127))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->p_3126))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1191(F->up);
} else {
f_declare_slot_1188(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_264(F->up, F->up->out_protos_131, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_138))) {
f_put_to_264(F->up, F->up->out_awaits_220, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_))), rt_g_lit("decl);", 6)));
}
F->r_3129 = (*(P174)rt_nil_check(F->e_1202)).c_;
while ((F->r_3129 != NULL)) {
if (((((G_NV((*(P174)rt_nil_check(F->r_3129)).kind_) == ((rt_int)40LL)) || (G_NV((*(P174)rt_nil_check(F->r_3129)).kind_) == ((rt_int)48LL))) || (G_NV((*(P174)rt_nil_check(F->r_3129)).kind_) == ((rt_int)49LL))) || (G_NV((*(P174)rt_nil_check(F->r_3129)).kind_) == ((rt_int)50LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->r_3129)).line_), cat_rt_gstr(rt_g_lit("the visible part of a task holds entries, subprograms, types, constants and ", 76), rt_g_lit("exceptions, not variables or modules (RM79 9.1)", 47)));
}
F->r_3129 = (*(P174)rt_nil_check(F->r_3129)).next_;
}
L_end_3130: ;
f_open_scope_479(F->up);
F->up->cur_task_211 = F->y_3120;
F->saved_defer_3113 = G_NV(F->up->defer_entry_structs_219);
F->up->defer_entry_structs_219 = 1;
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->e_1202)).c_);
f_decl_elements_669(F->up, (*(P174)rt_nil_check(F->e_1202)).d_);
F->up->defer_entry_structs_219 = G_NV(F->saved_defer_3113);
F->m_3121 = F->up->scope_stack_121;
while (((F->m_3121 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3121)).depth_) == G_NV(F->up->depth_120)))) {
if (((G_NV((*(P117)rt_nil_check(F->m_3121)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P117)rt_nil_check(F->m_3121)).from_use_)))) {
F->fields_3114 = f_mk_239(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_3116 = (*(P117)rt_nil_check(F->m_3121)).params_;
while ((F->pm_3116 != NULL)) {
f_ctype_505(F->up, (*(P1944)rt_nil_check(F->pm_3116)).t_, &F->ct_3115);
if ((G_NV((*(P1944)rt_nil_check(F->pm_3116)).mode_) == ((rt_int)1LL))) {
F->fields_3114 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3114)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3115))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3116)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3114 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3114)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3115))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3116)).cfield_))), one_rt_gstr(59)));
}
F->pm_3116 = (*(P1944)rt_nil_check(F->pm_3116)).next_;
}
L_end_3132: ;
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3121)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3114))), rt_g_lit(" };", 3)));
}
F->m_3121 = (*(P117)rt_nil_check(F->m_3121)).stack_;
}
L_end_3131: ;
F->m_3121 = F->up->scope_stack_121;
while (((F->m_3121 != NULL) && (G_NV((*(P117)rt_nil_check(F->m_3121)).depth_) == G_NV(F->up->depth_120)))) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3121)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3121)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P117)rt_nil_check(F->m_3121)).from_use_)))) {
if (((!G_NV(F->has_procs_3112)) && ((*(P117)rt_nil_check(F->y_3120)).c_ != NULL))) {
f_declare_slot_1188(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frames", 6)), &F->fp_3117);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("lo", 2)), &F->flo_3118);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("hi", 2)), &F->fhi_3119);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fp_3117)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P140)rt_nil_check(F->fhi_3119))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->flo_3118))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->fhi_3119))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->flo_3118))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_3112 = 1;
} else if ((!G_NV(F->has_procs_3112))) {
f_declare_slot_1188(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3120)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frame", 5)), &F->fp_3117);
f_emit_266(F->up, cat_rt_gstr((*(P140)rt_nil_check(F->fp_3117)), rt_g_lit(" = NULL;", 8)));
F->has_procs_3112 = 1;
}
if (((*(P117)rt_nil_check(F->y_3120)).c_ != NULL)) {
(*(P117)rt_nil_check(F->m_3121)).access_path_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P117)rt_nil_check(F->m_3121)).access_path_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3120)).cname_)), rt_g_lit("frame", 5)));
}
(*(P117)rt_nil_check(F->m_3121)).members_ = F->y_3120;
}
f_copy_sym_1094(F->up, F->m_3121, &F->z_3122);
(*(P117)rt_nil_check(F->z_3122)).hidden_ = G_NV((*(P117)rt_nil_check(F->m_3121)).from_use_);
(*(P117)rt_nil_check(F->z_3122)).mnext_ = (*(P117)rt_nil_check(F->y_3120)).members_;
(*(P117)rt_nil_check(F->y_3120)).members_ = F->z_3122;
F->m_3121 = (*(P117)rt_nil_check(F->m_3121)).stack_;
}
L_end_3133: ;
f_close_scope_480(F->up);
F->up->cur_task_211 = F->saved_3123;
f_define_478(F->up, F->y_3120, G_NV((*(P174)rt_nil_check(F->e_1202)).line_));
ret_:

  return;
}

static void f_entry_decl_1205(struct f_greenc_1fr *up_, P174 e_1204) {
  struct f_entry_decl_1205fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1204 = e_1204;
F->y_3134 = NULL;
F->p_3135 = NULL;
F->p_3135 = (*(P174)rt_nil_check(F->e_1204)).a_;
F->pm_3136 = NULL;
F->tail_3137 = NULL;
F->fields_3138 = NULL;
F->ct_3139 = NULL;
F->x_3140 = NULL;
F->lo_3141 = NULL;
F->hi_3142 = NULL;
if ((F->up->cur_task_211 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1204)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_3134 = f_new_sym_483(F->up, ((rt_int)10LL), (*(P174)rt_nil_check(F->e_1204)).name_);
f_new_name_242(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_250(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1204)).name_)))), one_rt_gstr(95)), &(*(P117)rt_nil_check(F->y_3134)).cname_);
F->fields_3138 = f_mk_239(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_3135 != NULL)) {
F->pm_3136 = ({ R1945 *cell3144 = rt_alloc(sizeof(R1945)); *cell3144 = cp_R1945(({ R1945 ag3145; ag3145.name_ = (*(P174)rt_nil_check(F->p_3135)).name_; ag3145.mode_ = G_NV((*(P174)rt_nil_check(F->p_3135)).ival_); ag3145.t_ = NULL; ag3145.c_ = NULL; ag3145.cfield_ = NULL; ag3145.dflt_ = (*(P174)rt_nil_check(F->p_3135)).b_; ag3145.next_ = NULL; ag3145.dsym_ = NULL; ag3145; })); (P1944)cell3144; });
f_resolve_521(F->up, (*(P174)rt_nil_check(F->p_3135)).a_, &(*(P1944)rt_nil_check(F->pm_3136)).t_, &(*(P1944)rt_nil_check(F->pm_3136)).c_);
(*(P1944)rt_nil_check(F->pm_3136)).cfield_ = f_mk_239(F->up, f_c_field_256(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3135)).name_))));
f_ctype_505(F->up, (*(P1944)rt_nil_check(F->pm_3136)).t_, &F->ct_3139);
if ((G_NV((*(P1944)rt_nil_check(F->pm_3136)).mode_) == ((rt_int)1LL))) {
F->fields_3138 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3138)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3139))), one_rt_gstr(32)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3136)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3138 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->fields_3138)), one_rt_gstr(32)), (*(P140)rt_nil_check(F->ct_3139))), rt_g_lit(" *", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3136)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_3137 == NULL)) {
(*(P117)rt_nil_check(F->y_3134)).params_ = F->pm_3136;
} else {
(*(P1944)rt_nil_check(F->tail_3137)).next_ = F->pm_3136;
}
F->tail_3137 = F->pm_3136;
F->p_3135 = (*(P174)rt_nil_check(F->p_3135)).next_;
}
L_end_3143: ;
if ((!G_NV(F->up->defer_entry_structs_219))) {
f_put_to_264(F->up, F->up->out_types_128, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).cname_))), rt_g_lit("p {", 3)), (*(P140)rt_nil_check(F->fields_3138))), rt_g_lit(" };", 3)));
}
(*(P117)rt_nil_check(F->y_3134)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->y_3134)).decl_ = F->e_1204;
(*(P117)rt_nil_check(F->y_3134)).members_ = F->up->cur_task_211;
f_elaborate_defaults_664(F->up, F->y_3134);
if (G_NV(F->up->in_func_138)) {
(*(P117)rt_nil_check(F->y_3134)).level_ = G_NV(F->up->cur_level_139);
}
(*(P117)rt_nil_check(F->y_3134)).access_path_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3134)).level_), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).access_path_)), &F->x_3140);
(*(P117)rt_nil_check(F->y_3134)).ro_ = ((((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && G_NV(F->up->in_func_138)) && (G_NV(F->up->cur_level_139) > G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_)));
if (((*(P174)rt_nil_check(F->e_1204)).b_ != NULL)) {
f_family_bounds_1196(F->up, (*(P174)rt_nil_check(F->e_1204)).b_, F->y_3134, F->x_3140, (((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3134)).ro_))));
} else if ((((*(P117)rt_nil_check(F->up->cur_task_211)).c_ != NULL) && (!G_NV((*(P117)rt_nil_check(F->y_3134)).ro_)))) {
f_declare_slot_1188(F->up, rt_g_lit("rt_entry *", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).access_path_)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("lo", 2)), &F->lo_3141);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->up->cur_task_211)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->cur_task_211)).cname_)), rt_g_lit("hi", 2)), &F->hi_3142);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->x_3140)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P140)rt_nil_check(F->hi_3142))), rt_g_lit(" >= ", 4)), (*(P140)rt_nil_check(F->lo_3141))), rt_g_lit(" \? ", 3)), (*(P140)rt_nil_check(F->hi_3142))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3141))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P140)rt_nil_check(F->hi_3142))), rt_g_lit(" - ", 3)), (*(P140)rt_nil_check(F->lo_3141))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P140)rt_nil_check(F->x_3140))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1188(F->up, rt_g_lit("rt_entry", 8), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3134)).access_path_)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P140)rt_nil_check(F->x_3140))), rt_g_lit(");", 2)));
}
f_define_478(F->up, F->y_3134, G_NV((*(P174)rt_nil_check(F->e_1204)).line_));
ret_:

  return;
}

static void f_task_body_1207(struct f_greenc_1fr *up_, P174 e_1206) {
  struct f_task_body_1207fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1206 = e_1206;
F->y_3146 = NULL;
F->y_3146 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1206)).name_)));
F->b_3147 = NULL;
F->m_3148 = NULL;
F->z_3149 = NULL;
F->upp_3150 = NULL;
F->saved_3151 = NULL;
F->saved_3151 = F->up->cur_task_211;
if ((G_NV((*(P174)rt_nil_check(F->e_1206)).flag_) == ((rt_int)4LL))) {
f_stub_684(F->up, F->e_1206);
goto ret_;
}
if (f_is_generic_name_1297(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1206)).name_)))) {
f_attach_generic_body_1302(F->up, F->e_1206);
goto ret_;
}
if (((F->y_3146 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3146)).kind_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1206)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1206)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_3147 = f_new_sym_483(F->up, ((rt_int)4LL), (*(P174)rt_nil_check(F->e_1206)).name_);
(*(P117)rt_nil_check(F->b_3147)).cname_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_)), rt_g_lit("body", 4)));
(*(P117)rt_nil_check(F->b_3147)).result_ = F->up->ty_void_161;
(*(P117)rt_nil_check(F->b_3147)).level_ = G_NV(F->up->cur_level_139);
(*(P117)rt_nil_check(F->b_3147)).decl_ = F->e_1206;
if (((*(P117)rt_nil_check(F->y_3146)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3147)).params_ = ({ R1945 *cell3152 = rt_alloc(sizeof(R1945)); *cell3152 = cp_R1945(({ R1945 ag3153; ag3153.name_ = f_mk_239(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_)))); ag3153.mode_ = ((rt_int)1LL); ag3153.t_ = F->up->ty_int_156; ag3153.c_ = NULL; ag3153.cfield_ = f_mk_239(F->up, rt_g_lit("index_", 6)); ag3153.dflt_ = NULL; ag3153.next_ = NULL; ag3153.dsym_ = NULL; ag3153; })); (P1944)cell3152; });
}
f_open_scope_479(F->up);
F->m_3148 = (*(P117)rt_nil_check(F->y_3146)).members_;
while ((F->m_3148 != NULL)) {
f_copy_sym_1094(F->up, F->m_3148, &F->z_3149);
f_define_478(F->up, F->z_3149, G_NV((*(P174)rt_nil_check(F->e_1206)).line_));
if (((((G_NV((*(P117)rt_nil_check(F->m_3148)).kind_) == ((rt_int)3LL)) || (G_NV((*(P117)rt_nil_check(F->m_3148)).kind_) == ((rt_int)4LL))) && ((*(P117)rt_nil_check(F->m_3148)).access_path_ != NULL)) && f_same_task_438(F->up, (*(P117)rt_nil_check(F->m_3148)).members_, F->y_3146))) {
if ((G_NV((*(P117)rt_nil_check(F->y_3146)).level_) > ((rt_int)0LL))) {
F->upp_3150 = f_mk_239(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_3150 = f_mk_239(F->up, rt_g_lit("", 0));
}
if (((*(P117)rt_nil_check(F->y_3146)).c_ != NULL)) {
(*(P117)rt_nil_check(F->b_3147)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3150)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3148)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P140)rt_nil_check(F->upp_3150))), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P117)rt_nil_check(F->b_3147)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->upp_3150)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3148)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_3148 = (*(P117)rt_nil_check(F->m_3148)).mnext_;
}
L_end_3154: ;
F->up->cur_task_211 = F->y_3146;
f_subprogram_body_729(F->up, F->e_1206, F->b_3147);
F->up->cur_task_211 = F->saved_3151;
f_close_scope_480(F->up);
if ((((*(P117)rt_nil_check(F->y_3146)).c_ != NULL) && (G_NV((*(P117)rt_nil_check(F->b_3147)).level_) > ((rt_int)0LL)))) {
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3147)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P117)rt_nil_check(F->y_3146)).c_ != NULL)) {
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3147)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P117)rt_nil_check(F->b_3147)).level_) > ((rt_int)0LL))) {
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3147)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_264(F->up, F->up->out_funcs_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3146)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->b_3147)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1210(struct f_greenc_1fr *up_, P174 decls_1208, P140 *aw_1209) {
  struct f_task_awaits_1210fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1208 = decls_1208;
F->aw_1209 = aw_1209;
F->e_3155 = NULL;
F->e_3155 = F->decls_1208;
F->y_3156 = NULL;
F->p_3157 = NULL;
(*F->aw_1209) = f_mk_239(F->up, rt_g_lit("", 0));
while ((F->e_3155 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->e_3155)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P174)rt_nil_check(F->e_3155)).kind_) == ((rt_int)53LL)) && (G_NV((*(P174)rt_nil_check(F->e_3155)).ival_) == ((rt_int)50LL))))) {
F->y_3156 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3155)).name_)));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3156)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3156)).cname_)), rt_g_lit("decl", 4)), &F->p_3157);
(*F->aw_1209) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->aw_1209))), rt_g_lit(" rt_await_decl(&", 16)), (*(P140)rt_nil_check(F->p_3157))), rt_g_lit(");", 2)));
}
F->e_3155 = (*(P174)rt_nil_check(F->e_3155)).next_;
}
L_end_3158: ;
ret_:

  return;
}

static void f_task_failure_1212(struct f_greenc_1fr *up_, P174 s_1211) {
  struct f_task_failure_1212fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1211 = s_1211;
F->y_3159 = NULL;
F->y_3159 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1211)).tag_)));
F->a_3160 = NULL;
F->i_3161 = NULL;
F->it_3162 = NULL;
if (((*(P174)rt_nil_check(F->s_1211)).a_ != NULL)) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_1211)).a_, (*(P117)rt_nil_check(F->y_3159)).t_, &F->it_3162, &F->i_3161);
f_act_path_i_1181(F->up, F->y_3159, (*(P140)rt_nil_check(F->i_3161)), &F->a_3160);
} else {
f_act_path_1177(F->up, F->y_3159, &F->a_3160);
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P140)rt_nil_check(F->a_3160))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1216(struct f_greenc_1fr *up_, P174 e_1213, P117 *y_1214, P174 *ix_1215) {
  struct f_entry_sym_1216fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1213 = e_1213;
F->y_1214 = y_1214;
F->ix_1215 = ix_1215;
F->alias_3163 = NULL;
F->t_3164 = NULL;
(*F->ix_1215) = NULL;
F->up->fam_ix_214 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1213)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1216(F->up, (*(P174)rt_nil_check(F->e_1213)).a_, &(*F->y_1214), &(*F->ix_1215));
if (((*(P117)rt_nil_check((*F->y_1214))).c_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1213)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check((*F->y_1214))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_214 = (*(P174)rt_nil_check(F->e_1213)).b_;
goto ret_;
}
if (((G_NV((*(P174)rt_nil_check(F->e_1213)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3164 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).name_)));
if (((F->t_3164 != NULL) && ((G_NV((*(P117)rt_nil_check(F->t_3164)).kind_) == ((rt_int)9LL)) && (G_NV((*(P117)rt_nil_check(F->t_3164)).flags_) == ((rt_int)4LL))))) {
F->alias_3163 = f_nn_313(F->up, ((rt_int)9LL), G_NV((*(P174)rt_nil_check(F->e_1213)).line_));
as_R175(&(*(P174)rt_nil_check(F->alias_3163)), (*(P174)rt_nil_check(F->e_1213)));
(*(P174)rt_nil_check(F->alias_3163)).a_ = (*(P117)rt_nil_check(F->t_3164)).decl_;
f_entry_sym_1216(F->up, F->alias_3163, &(*F->y_1214), &(*F->ix_1215));
goto ret_;
}
}
if ((((G_NV((*(P174)rt_nil_check(F->e_1213)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3164 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).a_)).name_)));
if ((((F->t_3164 == NULL) || (G_NV((*(P117)rt_nil_check(F->t_3164)).kind_) != ((rt_int)9LL))) || ((*(P117)rt_nil_check(F->t_3164)).c_ == NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1213)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1214) = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).a_)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).name_)), G_NV((*(P174)rt_nil_check(F->e_1213)).line_));
(*F->ix_1215) = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).a_)).b_;
if ((((*F->y_1214) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1214))).kind_) != ((rt_int)10LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1213)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P174)rt_nil_check(F->e_1213)).kind_) == ((rt_int)5LL))) {
(*F->y_1214) = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).name_)));
if (((*(P174)rt_nil_check(F->e_1213)).tag_ != NULL)) {
(*F->y_1214) = f_member_of_1089(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).tag_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).name_)), G_NV((*(P174)rt_nil_check(F->e_1213)).line_));
}
} else if (((G_NV((*(P174)rt_nil_check(F->e_1213)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->e_1213)).a_))) {
(*F->y_1214) = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->e_1213)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1213)).name_)), G_NV((*(P174)rt_nil_check(F->e_1213)).line_));
} else {
(*F->y_1214) = NULL;
}
if ((((*F->y_1214) == NULL) || (G_NV((*(P117)rt_nil_check((*F->y_1214))).kind_) != ((rt_int)10LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1213)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_entry_overload_1221(struct f_greenc_1fr *up_, P117 y_1217, P174 args_1218, rt_int line_1219, P117 *r_1220) {
  struct f_entry_overload_1221fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1217 = y_1217;
F->args_1218 = args_1218;
F->line_1219 = line_1219;
F->r_1220 = r_1220;
F->z_3165 = NULL;
F->found_3166 = NULL;
F->ok_3167 = INT_MIN;
(*F->r_1220) = F->y_1217;
if (((*(P117)rt_nil_check(F->y_1217)).members_ == NULL)) {
goto ret_;
}
F->z_3165 = (*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_1217)).members_)).members_;
while ((F->z_3165 != NULL)) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3165)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1217)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3165)).kind_) == ((rt_int)10LL)))) {
f_fits_1118(F->up, F->z_3165, F->args_1218, NULL, &F->ok_3167);
 (void)rt_range(F->ok_3167, 0, 1);
if ((G_NV(F->ok_3167) && (F->found_3166 == NULL))) {
F->found_3166 = F->z_3165;
} else if ((G_NV(F->ok_3167) && (!f_same_entity_1113(F->up, F->found_3166, F->z_3165)))) {
f_fail_260(F->up, F->line_1219, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the entry call of ", 18), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1217)).name_))), rt_g_lit(" is ambiguous (RM79 9.5, 6.6)", 29)));
}
}
F->z_3165 = (*(P117)rt_nil_check(F->z_3165)).mnext_;
}
L_end_3168: ;
if ((F->found_3166 != NULL)) {
(*F->r_1220) = F->found_3166;
}
ret_:

  return;
}

static void f_other_call_1226(struct f_greenc_1fr *up_, P174 e_1222, int is_stmt_1223, P122 *t_1224, P140 *r_1225) {
  struct f_other_call_1226fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1222 = e_1222;
F->is_stmt_1223 = is_stmt_1223;
F->t_1224 = t_1224;
F->r_1225 = r_1225;
F->y_3169 = NULL;
F->oy_3170 = NULL;
F->pm_3171 = NULL;
F->a_3172 = NULL;
F->parts_3173 = NULL;
F->v_3174 = NULL;
F->lv_3175 = NULL;
F->ent_3176 = NULL;
F->act_3177 = NULL;
F->i_3178 = NULL;
F->vt_3179 = NULL;
F->lt_3180 = NULL;
F->lc_3181 = NULL;
F->ro_3182 = INT_MIN;
F->ix_3183 = NULL;
F->fix_3184 = NULL;
F->args_node_3185 = NULL;
f_entry_sym_1216(F->up, (*(P174)rt_nil_check(F->e_1222)).a_, &F->y_3169, &F->ix_3183);
F->fix_3184 = F->up->fam_ix_214;
F->args_node_3185 = (*(P174)rt_nil_check(F->e_1222)).b_;
if (((*(P117)rt_nil_check(F->y_3169)).c_ == NULL)) {
f_entry_overload_1221(F->up, F->y_3169, F->args_node_3185, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), &F->oy_3170);
F->y_3169 = F->oy_3170;
}
if ((((*(P117)rt_nil_check(F->y_3169)).c_ != NULL) && (F->fix_3184 == NULL))) {
F->fix_3184 = (*(P174)rt_nil_check(F->e_1222)).b_;
F->args_node_3185 = NULL;
}
F->i_3178 = f_mk_239(F->up, rt_g_lit("", 0));
if ((F->ix_3183 != NULL)) {
f_gexpr_842(F->up, F->ix_3183, F->up->ty_int_156, &F->vt_3179, &F->i_3178);
} else if (((((*(P117)rt_nil_check(F->y_3169)).members_ != NULL) && ((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).members_)).c_ != NULL)) && ((*(P117)rt_nil_check(F->y_3169)).members_ != F->up->cur_task_211))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P140)rt_nil_check((*(P117)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).name_))));
}
if ((!F->is_stmt_1223)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_228 != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_228)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1185(F->up, F->y_3169, (*(P140)rt_nil_check(F->i_3178)), &F->ent_3176);
if (((*(P117)rt_nil_check(F->y_3169)).c_ != NULL)) {
if ((F->fix_3184 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_842(F->up, F->fix_3184, NULL, &F->vt_3179, &F->v_3174);
f_entry_family_slot_1201(F->up, F->y_3169, (*(P140)rt_nil_check(F->ent_3176)), (*(P140)rt_nil_check(F->v_3174)), &F->ent_3176);
}
F->parts_3173 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3169)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_3171 = (*(P117)rt_nil_check(F->y_3169)).params_;
while ((F->pm_3171 != NULL)) {
F->a_3172 = f_actual_for_1044(F->up, F->args_node_3185, F->pm_3171, (*(P117)rt_nil_check(F->y_3169)).params_);
if (((F->a_3172 == NULL) && ((*(P1944)rt_nil_check(F->pm_3171)).dsym_ != NULL))) {
f_access_of_779(F->up, (*(P1944)rt_nil_check(F->pm_3171)).dsym_, &F->v_3174);
f_copy_code_637(F->up, (*(P1944)rt_nil_check(F->pm_3171)).t_, (*(P140)rt_nil_check(F->v_3174)), &F->lv_3175);
F->parts_3173 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3173)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3171)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->lv_3175))), one_rt_gstr(59)));
} else if ((F->a_3172 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3171)).name_))));
} else if ((G_NV((*(P1944)rt_nil_check(F->pm_3171)).mode_) == ((rt_int)1LL))) {
f_gexpr_842(F->up, F->a_3172, (*(P1944)rt_nil_check(F->pm_3171)).t_, &F->vt_3179, &F->v_3174);
f_check_type_500(F->up, F->vt_3179, (*(P1944)rt_nil_check(F->pm_3171)).t_, G_NV((*(P174)rt_nil_check(F->e_1222)).line_));
F->parts_3173 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3173)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3171)).cfield_))), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->v_3174))), one_rt_gstr(59)));
} else {
f_lvalue_798(F->up, F->a_3172, &F->lv_3175, &F->lt_3180, &F->lc_3181, &F->ro_3182);
 (void)rt_range(F->ro_3182, 0, 1);
if (G_NV(F->ro_3182)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1222)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3171)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_500(F->up, F->lt_3180, (*(P1944)rt_nil_check(F->pm_3171)).t_, G_NV((*(P174)rt_nil_check(F->e_1222)).line_));
F->parts_3173 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3173)), rt_g_lit(" p_.", 4)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3171)).cfield_))), rt_g_lit(" = &", 4)), (*(P140)rt_nil_check(F->lv_3175))), one_rt_gstr(59)));
}
F->pm_3171 = (*(P1944)rt_nil_check(F->pm_3171)).next_;
}
L_end_3186: ;
if ((((*(P117)rt_nil_check(F->y_3169)).members_ != NULL) && ((*(P117)rt_nil_check(F->y_3169)).members_ != F->up->cur_task_211))) {
if ((F->ix_3183 != NULL)) {
f_act_path_i_1181(F->up, (*(P117)rt_nil_check(F->y_3169)).members_, (*(P140)rt_nil_check(F->i_3178)), &F->act_3177);
} else {
f_act_path_1177(F->up, (*(P117)rt_nil_check(F->y_3169)).members_, &F->act_3177);
}
F->parts_3173 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3173)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P140)rt_nil_check(F->act_3177))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1224) = F->up->ty_void_161;
(*F->r_1225) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->parts_3173)), rt_g_lit(" rt_entry_call(&", 16)), (*(P140)rt_nil_check(F->ent_3176))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1231(struct f_greenc_1fr *up_, P174 e_1227, P117 y_1228, P122 *t_1229, P140 *r_1230) {
  struct f_other_attr_1231fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1227 = e_1227;
F->y_1228 = y_1228;
F->t_1229 = t_1229;
F->r_1230 = r_1230;
F->a_3187 = cp_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1227)).name_)));
F->p_3188 = NULL;
if (((G_NV((*(P117)rt_nil_check(F->y_1228)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3187, rt_g_lit("INDEX", 5)))) {
if (((*(P117)rt_nil_check(F->y_1228)).c_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1227)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1228)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1169(F->up, F->y_1228, &F->p_3188);
(*F->t_1229) = F->up->ty_int_156;
if (((*(P117)rt_nil_check(F->y_1228)).t_ != NULL)) {
(*F->t_1229) = (*(P117)rt_nil_check(F->y_1228)).t_;
}
(*F->r_1230) = F->p_3188;
} else if (((G_NV((*(P117)rt_nil_check(F->y_1228)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3187, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1177(F->up, F->y_1228, &F->p_3188);
(*F->t_1229) = F->up->ty_bool_157;
(*F->r_1230) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3188))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1228)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3187, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1177(F->up, F->y_1228, &F->p_3188);
(*F->t_1229) = F->up->ty_int_156;
(*F->r_1230) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3188))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1228)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3187, rt_g_lit("CLOCK", 5)))) {
f_act_path_1177(F->up, F->y_1228, &F->p_3188);
(*F->t_1229) = F->up->ty_time_171;
(*F->r_1230) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3188))), one_rt_gstr(41)));
} else if (((G_NV((*(P117)rt_nil_check(F->y_1228)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3187, rt_g_lit("COUNT", 5)))) {
if (((*(P117)rt_nil_check(F->y_1228)).members_ != F->up->cur_task_211)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1227)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1185(F->up, F->y_1228, rt_g_lit("", 0), &F->p_3188);
(*F->t_1229) = F->up->ty_int_156;
(*F->r_1230) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P140)rt_nil_check(F->p_3188))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1227)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3187), rt_g_lit(" is not handled here", 20)));
(*F->t_1229) = F->up->ty_int_156;
(*F->r_1230) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1235(struct f_greenc_1fr *up_, P174 e_1232, P122 *t_1233, P140 *r_1234) {
  struct f_member_attr_1235fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1232 = e_1232;
F->t_1233 = t_1233;
F->r_1234 = r_1234;
F->y_3189 = NULL;
F->ix_3190 = NULL;
F->i_3191 = NULL;
F->p_3192 = NULL;
F->vt_3193 = NULL;
f_task_of_1166(F->up, (*(P174)rt_nil_check(F->e_1232)).a_, &F->y_3189, &F->ix_3190);
f_gexpr_842(F->up, F->ix_3190, F->up->ty_int_156, &F->vt_3193, &F->i_3191);
f_act_path_i_1181(F->up, F->y_3189, (*(P140)rt_nil_check(F->i_3191)), &F->p_3192);
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1232)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1233) = F->up->ty_bool_157;
(*F->r_1234) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P140)rt_nil_check(F->p_3192))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1232)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1233) = F->up->ty_int_156;
(*F->r_1234) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P140)rt_nil_check(F->p_3192))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1232)).name_)), rt_g_lit("CLOCK", 5))) {
(*F->t_1233) = F->up->ty_time_171;
(*F->r_1234) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P140)rt_nil_check(F->p_3192))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1232)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1232)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1233) = F->up->ty_int_156;
(*F->r_1234) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1241(struct f_greenc_1fr *up_, rt_gstr name_1236, P174 args_1237, rt_int line_1238, P122 *t_1239, P140 *r_1240) {
  struct f_task_builtin_1241fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1236 = cp_rt_gstr(name_1236);
F->args_1237 = args_1237;
F->line_1238 = line_1238;
F->t_1239 = t_1239;
F->r_1240 = r_1240;
F->vt_3194 = NULL;
F->v_3195 = NULL;
(*F->t_1239) = F->up->ty_void_161;
if (eq_rt_gstr(F->name_1236, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_842(F->up, F->args_1237, F->up->ty_int_156, &F->vt_3194, &F->v_3195);
(*F->r_1240) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P140)rt_nil_check(F->v_3195))), one_rt_gstr(41)));
} else {
f_fail_260(F->up, F->line_1238, cat_rt_gstr(F->name_1236, rt_g_lit(" is not declared", 16)));
(*F->r_1240) = NULL;
}
ret_:

  return;
}

static void f_accept_entry_1244(struct f_greenc_1fr *up_, P174 s_1242, P117 *r_1243) {
  struct f_accept_entry_1244fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1242 = s_1242;
F->r_1243 = r_1243;
F->z_3196 = NULL;
F->found_3197 = NULL;
F->any_3198 = NULL;
F->ok_3199 = INT_MIN;
if (((F->up->func_sym_142 != NULL) && (F->up->cur_task_211 != NULL))) {
F->z_3196 = (*(P117)rt_nil_check(F->up->cur_task_211)).members_;
while ((F->z_3196 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->z_3196)).kind_) == ((rt_int)4LL)) || (G_NV((*(P117)rt_nil_check(F->z_3196)).kind_) == ((rt_int)3LL))) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3196)).cname_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->func_sym_142)).cname_))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1242)).line_), rt_g_lit("an accept statement cannot be in a visible subprogram of the task (RM79 9.5)", 76));
}
F->z_3196 = (*(P117)rt_nil_check(F->z_3196)).mnext_;
}
L_end_3200: ;
}
F->z_3196 = ({ A116 ix3201 = F->up->table_119; ix3201.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1242)).name_))), ix3201.lo, ix3201.hi) - ix3201.lo]; });
while ((F->z_3196 != NULL)) {
if (((eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3196)).name_)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1242)).name_))) && (G_NV((*(P117)rt_nil_check(F->z_3196)).kind_) == ((rt_int)10LL))) && f_same_task_438(F->up, (*(P117)rt_nil_check(F->z_3196)).members_, F->up->cur_task_211))) {
F->any_3198 = F->z_3196;
f_accept_conforms_1248(F->up, F->s_1242, F->z_3196, &F->ok_3199);
 (void)rt_range(F->ok_3199, 0, 1);
if ((G_NV(F->ok_3199) && (F->found_3197 == NULL))) {
F->found_3197 = F->z_3196;
}
}
F->z_3196 = (*(P117)rt_nil_check(F->z_3196)).chain_;
}
L_end_3202: ;
if (((F->found_3197 == NULL) && (F->any_3198 != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1242)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the formal part of accept ", 26), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1242)).name_))), rt_g_lit(" does not repeat that of the entry (RM79 9.5)", 45)));
}
(*F->r_1243) = F->found_3197;
ret_:

  return;
}

static void f_accept_conforms_1248(struct f_greenc_1fr *up_, P174 s_1245, P117 y_1246, int *ok_1247) {
  struct f_accept_conforms_1248fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1245 = s_1245;
F->y_1246 = y_1246;
F->ok_1247 = ok_1247;
F->f_3203 = NULL;
F->f_3203 = (*(P174)rt_nil_check(F->s_1245)).a_;
F->pm_3204 = NULL;
F->pm_3204 = (*(P117)rt_nil_check(F->y_1246)).params_;
F->t_3205 = NULL;
F->c_3206 = NULL;
(*F->ok_1247) = 1;
if ((F->f_3203 == NULL)) {
goto ret_;
}
while (((F->f_3203 != NULL) && (F->pm_3204 != NULL))) {
f_resolve_521(F->up, (*(P174)rt_nil_check(F->f_3203)).a_, &F->t_3205, &F->c_3206);
if (((!f_same_455(F->up, F->t_3205, (*(P1944)rt_nil_check(F->pm_3204)).t_)) || (G_NV((*(P174)rt_nil_check(F->f_3203)).ival_) != G_NV((*(P1944)rt_nil_check(F->pm_3204)).mode_)))) {
(*F->ok_1247) = 0;
goto ret_;
}
F->f_3203 = (*(P174)rt_nil_check(F->f_3203)).next_;
F->pm_3204 = (*(P1944)rt_nil_check(F->pm_3204)).next_;
}
L_end_3207: ;
(*F->ok_1247) = ((F->f_3203 == NULL) && (F->pm_3204 == NULL));
ret_:

  return;
}

static void f_gen_accept_1250(struct f_greenc_1fr *up_, P174 s_1249) {
  struct f_gen_accept_1250fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1249 = s_1249;
F->y_3208 = NULL;
F->saved_ax_3209 = NULL;
F->ent_3210 = NULL;
F->ep_3211 = NULL;
F->xf_3212 = NULL;
F->x_3213 = NULL;
F->pm_3214 = NULL;
F->f_3215 = NULL;
F->f_3215 = (*(P174)rt_nil_check(F->s_1249)).a_;
F->p_3216 = NULL;
f_accept_entry_1244(F->up, F->s_1249, &F->y_3208);
if ((F->y_3208 == NULL)) {
F->y_3208 = f_lookup_entry_441(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1249)).name_)), F->up->cur_task_211);
}
if (((F->y_3208 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3208)).kind_) != ((rt_int)10LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1249)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->s_1249)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_438(F->up, (*(P117)rt_nil_check(F->y_3208)).members_, F->up->cur_task_211))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1249)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1185(F->up, F->y_3208, rt_g_lit("", 0), &F->ent_3210);
f_member_slot_1254(F->up, F->y_3208, F->s_1249, &F->ent_3210);
if ((G_NV((*(P174)rt_nil_check(F->s_1249)).flag_) == ((rt_int)0LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_242(F->up, rt_g_lit("ep", 2), &F->ep_3211);
f_new_name_242(F->up, rt_g_lit("xf", 2), &F->xf_3212);
f_new_name_242(F->up, rt_g_lit("x", 1), &F->x_3213);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3208)).cname_))), rt_g_lit("p *", 3)), (*(P140)rt_nil_check(F->ep_3211))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit(");", 2)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P140)rt_nil_check(F->xf_3212))), one_rt_gstr(59)));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P140)rt_nil_check(F->xf_3212))), rt_g_lit(")) {", 4)));
f_push_cleanup_735(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3212))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_479(F->up);
F->pm_3214 = (*(P117)rt_nil_check(F->y_3208)).params_;
while ((F->pm_3214 != NULL)) {
if ((G_NV((*(P1944)rt_nil_check(F->pm_3214)).mode_) == ((rt_int)1LL))) {
F->p_3216 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P1944)rt_nil_check(F->pm_3214)).name_);
(*(P117)rt_nil_check(F->p_3216)).ro_ = 1;
(*(P117)rt_nil_check(F->p_3216)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P140)rt_nil_check(F->ep_3211))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3214)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3216 = f_new_sym_483(F->up, ((rt_int)1LL), (*(P1944)rt_nil_check(F->pm_3214)).name_);
(*(P117)rt_nil_check(F->p_3216)).access_path_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P140)rt_nil_check(F->ep_3211))), rt_g_lit("->", 2)), (*(P140)rt_nil_check((*(P1944)rt_nil_check(F->pm_3214)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3215 != NULL)) {
(*(P117)rt_nil_check(F->p_3216)).name_ = (*(P174)rt_nil_check(F->f_3215)).name_;
F->f_3215 = (*(P174)rt_nil_check(F->f_3215)).next_;
}
(*(P117)rt_nil_check(F->p_3216)).t_ = (*(P1944)rt_nil_check(F->pm_3214)).t_;
(*(P117)rt_nil_check(F->p_3216)).c_ = (*(P1944)rt_nil_check(F->pm_3214)).c_;
f_define_478(F->up, F->p_3216, G_NV((*(P174)rt_nil_check(F->s_1249)).line_));
F->pm_3214 = (*(P1944)rt_nil_check(F->pm_3214)).next_;
}
L_end_3217: ;
F->up->accept_depth_212 = rt_add(G_NV(F->up->accept_depth_212), ((rt_int)1LL));
F->saved_ax_3209 = F->up->accept_exits_149;
F->up->accept_exits_149 = F->up->exits_145;
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_1249)).b_);
F->up->accept_exits_149 = F->saved_ax_3209;
F->up->accept_depth_212 = rt_sub(G_NV(F->up->accept_depth_212), ((rt_int)1LL));
f_close_scope_480(F->up);
f_pop_cleanup_736(F->up);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3212))), rt_g_lit("); rt_accept_end(&", 18)), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit(", 0, 0);", 8)));
f_emit_266(F->up, rt_g_lit("} else {", 8));
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P140)rt_nil_check(F->xf_3212))), rt_g_lit("); int ", 7)), (*(P140)rt_nil_check(F->x_3213))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P140)rt_nil_check(F->ent_3210))), rt_g_lit(", 1, ", 5)), rt_g_lit("rt_g_partner_exc(", 17)), (*(P140)rt_nil_check(F->x_3213))), rt_g_lit(")); rt_raise(", 13)), (*(P140)rt_nil_check(F->x_3213))), rt_g_lit(");", 2)));
f_emit_266(F->up, rt_g_lit("}", 1));
f_emit_266(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1254(struct f_greenc_1fr *up_, P117 y_1251, P174 s_1252, P140 *ent_1253) {
  struct f_member_slot_1254fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1251 = y_1251;
F->s_1252 = s_1252;
F->ent_1253 = ent_1253;
F->vt_3218 = NULL;
F->v_3219 = NULL;
if (((*(P117)rt_nil_check(F->y_1251)).c_ != NULL)) {
if (((*(P174)rt_nil_check(F->s_1252)).c_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1252)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1251)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1251)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->s_1252)).c_, NULL, &F->vt_3218, &F->v_3219);
f_entry_family_slot_1201(F->up, F->y_1251, (*(P140)rt_nil_check((*F->ent_1253))), (*(P140)rt_nil_check(F->v_3219)), &(*F->ent_1253));
} else if (((*(P174)rt_nil_check(F->s_1252)).c_ != NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1252)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1251)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1257(struct f_greenc_1fr *up_, P174 e_1255, P140 *r_1256) {
  struct f_gen_delay_ticks_1257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1255 = e_1255;
F->r_1256 = r_1256;
F->vt_3220 = NULL;
F->v_3221 = NULL;
f_gexpr_842(F->up, F->e_1255, F->up->ty_time_171, &F->vt_3220, &F->v_3221);
f_check_type_500(F->up, F->vt_3220, F->up->ty_time_171, G_NV((*(P174)rt_nil_check(F->e_1255)).line_));
(*F->r_1256) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P140)rt_nil_check(F->v_3221))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1259(struct f_greenc_1fr *up_, P174 s_1258) {
  struct f_gen_select_1259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1258 = s_1258;
F->alt_3222 = NULL;
F->alt_3222 = (*(P174)rt_nil_check(F->s_1258)).a_;
F->n_3223 = INT64_MIN;
F->n_3223 = ((rt_int)0LL);
F->i_3224 = INT64_MIN;
F->has_delay_3225 = INT_MIN;
F->has_delay_3225 = 0;
F->has_accept_3226 = INT_MIN;
F->has_accept_3226 = 0;
F->al_3227 = NULL;
F->w_3228 = NULL;
F->g_3229 = NULL;
F->ent_3230 = NULL;
F->ticks_3231 = NULL;
F->vt_3232 = NULL;
F->y_3233 = NULL;
f_new_name_242(F->up, rt_g_lit("al", 2), &F->al_3227);
f_new_name_242(F->up, rt_g_lit("w", 1), &F->w_3228);
while ((F->alt_3222 != NULL)) {
F->n_3223 = rt_add(G_NV(F->n_3223), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3225 = 1;
} else {
F->has_accept_3226 = 1;
}
F->alt_3222 = (*(P174)rt_nil_check(F->alt_3222)).next_;
}
L_end_3234: ;
if (((G_NV((*(P174)rt_nil_check(F->s_1258)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3225))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1258)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3226))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1258)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P140)rt_nil_check(F->al_3227))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3223), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3222 = (*(P174)rt_nil_check(F->s_1258)).a_;
F->i_3224 = ((rt_int)0LL);
while ((F->alt_3222 != NULL)) {
F->g_3229 = f_mk_239(F->up, rt_g_lit("1", 1));
if (((*(P174)rt_nil_check(F->alt_3222)).a_ != NULL)) {
f_condition_882(F->up, (*(P174)rt_nil_check(F->alt_3222)).a_, F->up->ty_bool_157, &F->vt_3232, &F->g_3229);
f_check_type_500(F->up, F->vt_3232, F->up->ty_bool_157, G_NV((*(P174)rt_nil_check(F->alt_3222)).line_));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).kind_) == ((rt_int)34LL))) {
f_accept_entry_1244(F->up, (*(P174)rt_nil_check(F->alt_3222)).b_, &F->y_3233);
if ((F->y_3233 == NULL)) {
F->y_3233 = f_lookup_entry_441(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).name_)), F->up->cur_task_211);
}
if (((F->y_3233 == NULL) || (G_NV((*(P117)rt_nil_check(F->y_3233)).kind_) != ((rt_int)10LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->alt_3222)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1185(F->up, F->y_3233, rt_g_lit("", 0), &F->ent_3230);
f_member_slot_1254(F->up, F->y_3233, (*(P174)rt_nil_check(F->alt_3222)).b_, &F->ent_3230);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3227)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3224)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P140)rt_nil_check(F->g_3229))), rt_g_lit("), &", 4)), (*(P140)rt_nil_check(F->ent_3230))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1257(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).a_, &F->ticks_3231);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3227)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3224)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P140)rt_nil_check(F->g_3229))), rt_g_lit("), NULL, NULL, ", 15)), (*(P140)rt_nil_check(F->ticks_3231))), rt_g_lit("};", 2)));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P140)rt_nil_check(F->al_3227))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3224)))), rt_g_lit("].open;", 7)));
F->i_3224 = rt_add(G_NV(F->i_3224), ((rt_int)1LL));
F->alt_3222 = (*(P174)rt_nil_check(F->alt_3222)).next_;
}
L_end_3235: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1258)).flag_) == ((rt_int)1LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->al_3227)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3223)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3223 = rt_add(G_NV(F->n_3223), ((rt_int)1LL));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_257(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_257(F->up)), rt_g_lit("));", 3)));
}
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P140)rt_nil_check(F->w_3228))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3223)))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check(F->al_3227))), rt_g_lit(");", 2)));
F->alt_3222 = (*(P174)rt_nil_check(F->s_1258)).a_;
F->i_3224 = ((rt_int)0LL);
while ((F->alt_3222 != NULL)) {
if ((G_NV(F->i_3224) == ((rt_int)0LL))) {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P140)rt_nil_check(F->w_3228))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P140)rt_nil_check(F->w_3228))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3224)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->alt_3222)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1250(F->up, (*(P174)rt_nil_check(F->alt_3222)).b_);
}
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->alt_3222)).c_);
F->i_3224 = rt_add(G_NV(F->i_3224), ((rt_int)1LL));
F->alt_3222 = (*(P174)rt_nil_check(F->alt_3222)).next_;
}
L_end_3236: ;
if ((G_NV((*(P174)rt_nil_check(F->s_1258)).flag_) == ((rt_int)1LL))) {
f_emit_266(F->up, rt_g_lit("} else {", 8));
f_gen_statements_731(F->up, (*(P174)rt_nil_check(F->s_1258)).b_);
}
f_emit_266(F->up, rt_g_lit("}", 1));
f_emit_266(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1264(struct f_greenc_1fr *up_, P117 y_1260, P174 ix_1261, P140 *lo_1262, P140 *hi_1263) {
  struct f_family_range_1264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1260 = y_1260;
F->ix_1261 = ix_1261;
F->lo_1262 = lo_1262;
F->hi_1263 = hi_1263;
F->vt_3237 = NULL;
if ((F->ix_1261 == NULL)) {
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1260)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1262));
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_1260)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1260)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1263));
} else if ((G_NV((*(P174)rt_nil_check(F->ix_1261)).kind_) == ((rt_int)14LL))) {
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->ix_1261)).a_, F->up->ty_int_156, &F->vt_3237, &(*F->lo_1262));
f_gexpr_842(F->up, (*(P174)rt_nil_check(F->ix_1261)).b_, F->up->ty_int_156, &F->vt_3237, &(*F->hi_1263));
} else {
f_gexpr_842(F->up, F->ix_1261, F->up->ty_int_156, &F->vt_3237, &(*F->lo_1262));
(*F->hi_1263) = (*F->lo_1262);
}
ret_:

  return;
}

static void f_task_statement_gen_1266(struct f_greenc_1fr *up_, P174 s_1265) {
  struct f_task_statement_gen_1266fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1265 = s_1265;
F->n_3238 = NULL;
F->ix_3239 = NULL;
F->y_3240 = NULL;
F->a_3241 = NULL;
F->d_3242 = NULL;
F->l_3243 = NULL;
F->ticks_3244 = NULL;
F->lo_3245 = NULL;
F->hi_3246 = NULL;
{ rt_int sel3247 = G_NV((*(P174)rt_nil_check(F->s_1265)).kind_);
if (0 || sel3247 == ((rt_int)32LL)) {
f_gen_delay_ticks_1257(F->up, (*(P174)rt_nil_check(F->s_1265)).a_, &F->ticks_3244);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P140)rt_nil_check(F->ticks_3244))), rt_g_lit(");", 2)));
} else if (0 || sel3247 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_212) > ((rt_int)0LL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1265)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3238 = (*(P174)rt_nil_check(F->s_1265)).a_;
while ((F->n_3238 != NULL)) {
f_task_of_1166(F->up, F->n_3238, &F->y_3240, &F->ix_3239);
f_path_at_1160(F->up, G_NV((*(P117)rt_nil_check(F->y_3240)).level_), cat_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3240)).cname_)), rt_g_lit("decl", 4)), &F->d_3242);
if ((G_NV((*(P117)rt_nil_check(F->y_3240)).level_) > ((rt_int)0LL))) {
f_link_to_782(F->up, G_NV((*(P117)rt_nil_check(F->y_3240)).level_), &F->l_3243);
} else {
F->l_3243 = f_mk_239(F->up, rt_g_lit("NULL", 4));
}
if (((*(P117)rt_nil_check(F->y_3240)).c_ == NULL)) {
f_act_path_1177(F->up, F->y_3240, &F->a_3241);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P140)rt_nil_check(F->a_3241))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3242))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3240)).cname_))), rt_g_lit("run, ", 5)), (*(P140)rt_nil_check(F->l_3243))), rt_g_lit(");", 2)));
} else {
f_family_range_1264(F->up, F->y_3240, F->ix_3239, &F->lo_3245, &F->hi_3246);
f_act_path_i_1181(F->up, F->y_3240, rt_g_lit("k_", 2), &F->a_3241);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3245))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3246))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P140)rt_nil_check(F->l_3243))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P140)rt_nil_check(F->a_3241))), rt_g_lit(", &", 3)), (*(P140)rt_nil_check(F->d_3242))), rt_g_lit(", ", 2)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_3240)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3238 = (*(P174)rt_nil_check(F->n_3238)).next_;
}
L_end_3248: ;
} else if (0 || sel3247 == ((rt_int)34LL)) {
f_gen_accept_1250(F->up, F->s_1265);
} else if (0 || sel3247 == ((rt_int)35LL)) {
f_gen_select_1259(F->up, F->s_1265);
} else if (0 || sel3247 == ((rt_int)36LL)) {
F->n_3238 = (*(P174)rt_nil_check(F->s_1265)).a_;
while ((F->n_3238 != NULL)) {
f_task_of_1166(F->up, F->n_3238, &F->y_3240, &F->ix_3239);
if (((*(P117)rt_nil_check(F->y_3240)).c_ == NULL)) {
f_act_path_1177(F->up, F->y_3240, &F->a_3241);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P140)rt_nil_check(F->a_3241))), rt_g_lit(");", 2)));
} else {
f_family_range_1264(F->up, F->y_3240, F->ix_3239, &F->lo_3245, &F->hi_3246);
f_act_path_i_1181(F->up, F->y_3240, rt_g_lit("k_", 2), &F->a_3241);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P140)rt_nil_check(F->lo_3245))), rt_g_lit("; k_ <= ", 8)), (*(P140)rt_nil_check(F->hi_3246))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P140)rt_nil_check(F->a_3241))), rt_g_lit(");", 2)));
}
F->n_3238 = (*(P174)rt_nil_check(F->n_3238)).next_;
}
L_end_3249: ;
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->s_1265)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P174 f_root_name_1268(struct f_greenc_1fr *up_, P174 e_1267) {
  struct f_root_name_1268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1267 = e_1267;
if ((G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1267;
goto ret_;
} else if ((((G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)9LL)) || (G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)8LL))) || (G_NV((*(P174)rt_nil_check(F->e_1267)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1268(F->up, (*(P174)rt_nil_check(F->e_1267)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1271(struct f_greenc_1fr *up_, P174 target_1269, rt_int line_1270) {
  struct f_check_pure_target_1271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1269 = target_1269;
F->line_1270 = line_1270;
F->n_3250 = NULL;
F->y_3251 = NULL;
if ((F->up->pure_sym_228 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_232)) {
f_fail_260(F->up, F->line_1270, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_228)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3250 = f_root_name_1268(F->up, F->target_1269);
if ((F->n_3250 != NULL)) {
F->y_3251 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3250)).name_)));
if ((((F->y_3251 != NULL) && (G_NV((*(P117)rt_nil_check(F->y_3251)).kind_) == ((rt_int)1LL))) && (G_NV((*(P117)rt_nil_check(F->y_3251)).depth_) < G_NV(F->up->pure_depth_229)))) {
f_fail_260(F->up, F->line_1270, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_228)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->n_3250)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1274(struct f_greenc_1fr *up_, P174 d_1272, rt_gstr name_1273) {
  struct f_assigns_nonlocal_1274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1272 = d_1272;
F->name_1273 = cp_rt_gstr(name_1273);
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->d_1272)).d_, F->d_1272, F->name_1273)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1281(F->up, (*(P174)rt_nil_check(F->d_1272)).e_, F->d_1272, F->name_1273);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1277(struct f_greenc_1fr *up_, P174 d_1275, rt_gstr name_1276) {
  struct f_declares_1277fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1275 = d_1275;
F->name_1276 = cp_rt_gstr(name_1276);
F->p_3252 = NULL;
F->p_3252 = (*(P174)rt_nil_check(F->d_1275)).a_;
F->e_3253 = NULL;
F->e_3253 = (*(P174)rt_nil_check(F->d_1275)).c_;
while ((F->p_3252 != NULL)) {
if (eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3252)).name_)), F->name_1276)) {
F->result_ = 1;
goto ret_;
}
F->p_3252 = (*(P174)rt_nil_check(F->p_3252)).next_;
}
L_end_3254: ;
while ((F->e_3253 != NULL)) {
if ((((*(P174)rt_nil_check(F->e_3253)).name_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_3253)).name_)), F->name_1276))) {
F->result_ = 1;
goto ret_;
}
F->e_3253 = (*(P174)rt_nil_check(F->e_3253)).next_;
}
L_end_3255: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1281(struct f_greenc_1fr *up_, P174 h_1278, P174 d_1279, rt_gstr name_1280) {
  struct f_scan_handlers_1281fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1278 = h_1278;
F->d_1279 = d_1279;
F->name_1280 = cp_rt_gstr(name_1280);
F->p_3256 = NULL;
F->p_3256 = F->h_1278;
while ((F->p_3256 != NULL)) {
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->p_3256)).b_, F->d_1279, F->name_1280)) {
F->result_ = 1;
goto ret_;
}
F->p_3256 = (*(P174)rt_nil_check(F->p_3256)).next_;
}
L_end_3257: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1285(struct f_greenc_1fr *up_, P174 stmts_1282, P174 d_1283, rt_gstr name_1284) {
  struct f_scan_assigns_1285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1282 = stmts_1282;
F->d_1283 = d_1283;
F->name_1284 = cp_rt_gstr(name_1284);
F->s_3258 = NULL;
F->s_3258 = F->stmts_1282;
F->a_3259 = NULL;
F->r_3260 = NULL;
while ((F->s_3258 != NULL)) {
if ((G_NV((*(P174)rt_nil_check(F->s_3258)).kind_) == ((rt_int)20LL))) {
F->r_3260 = f_root_name_1268(F->up, (*(P174)rt_nil_check(F->s_3258)).a_);
if ((((F->r_3260 != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->r_3260)).name_)), F->name_1284)) && (!f_declares_1277(F->up, F->d_1283, F->name_1284)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3258)).kind_) == ((rt_int)22LL))) {
F->a_3259 = (*(P174)rt_nil_check(F->s_3258)).a_;
while ((F->a_3259 != NULL)) {
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->a_3259)).b_, F->d_1283, F->name_1284)) {
F->result_ = 1;
goto ret_;
}
F->a_3259 = (*(P174)rt_nil_check(F->a_3259)).next_;
}
L_end_3262: ;
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->s_3258)).b_, F->d_1283, F->name_1284)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3258)).kind_) == ((rt_int)23LL))) {
F->a_3259 = (*(P174)rt_nil_check(F->s_3258)).b_;
while ((F->a_3259 != NULL)) {
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->a_3259)).b_, F->d_1283, F->name_1284)) {
F->result_ = 1;
goto ret_;
}
F->a_3259 = (*(P174)rt_nil_check(F->a_3259)).next_;
}
L_end_3263: ;
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->s_3258)).c_, F->d_1283, F->name_1284)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3258)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->s_3258)).b_, F->d_1283, F->name_1284)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P174)rt_nil_check(F->s_3258)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1285(F->up, (*(P174)rt_nil_check(F->s_3258)).b_, F->d_1283, F->name_1284) || f_scan_handlers_1281(F->up, (*(P174)rt_nil_check(F->s_3258)).c_, F->d_1283, F->name_1284))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3258 = (*(P174)rt_nil_check(F->s_3258)).next_;
}
L_end_3261: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1288(struct f_greenc_1fr *up_, P174 e_1286, P117 y_1287) {
  struct f_check_call_rules_1288fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1286 = e_1286;
F->y_1287 = y_1287;
F->z_3264 = NULL;
F->s_3265 = NULL;
if ((((F->up->pure_sym_228 != NULL) && ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_1287)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P117)rt_nil_check(F->y_1287)).vrp_))) && (G_NV((*(P117)rt_nil_check(F->y_1287)).depth_) < G_NV(F->up->pure_depth_229)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1286)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->up->pure_sym_228)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1287)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P117)rt_nil_check(F->y_1287)).vrp_)) || (G_NV(F->up->trial_155) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_230))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1286)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1287)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3265 = F->up->scope_stack_121;
while ((F->s_3265 != NULL)) {
if (((((G_NV((*(P117)rt_nil_check(F->s_3265)).kind_) == ((rt_int)1LL)) && (G_NV((*(P117)rt_nil_check(F->s_3265)).depth_) <= G_NV((*(P117)rt_nil_check(F->y_1287)).depth_))) && (f_lookup_435(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3265)).name_))) == F->s_3265)) && f_assigns_nonlocal_1274(F->up, (*(P117)rt_nil_check(F->y_1287)).decl_, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3265)).name_))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1286)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1287)).name_))), rt_g_lit(" assigns ", 9)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->s_3265)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3265 = (*(P117)rt_nil_check(F->s_3265)).stack_;
}
L_end_3266: ;
ret_:

  return;
}

static void f_generic_p_1290(struct f_greenc_1fr *up_, P174 *res_1289) {
  struct f_generic_p_1290fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1289 = res_1289;
F->x_3267 = NULL;
F->p_3268 = NULL;
F->head_3269 = NULL;
F->tail_3270 = NULL;
F->names_3271 = NULL;
F->st_3272 = NULL;
F->def_3273 = NULL;
F->sub_3274 = NULL;
F->def_name_text_3275 = NULL;
F->more_3276 = INT_MIN;
F->more_3276 = 1;
F->restr_3277 = INT_MIN;
F->mode_3278 = INT64_MIN;
f_expect_kw_335(F->up, rt_g_lit("GENERIC", 7));
F->x_3267 = f_nn_313(F->up, ((rt_int)54LL), f_cur_line_320(F->up));
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
while (G_NV(F->more_3276)) {
F->restr_3277 = 0;
if (f_at_kw_322(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_333(F->up);
F->restr_3277 = 1;
}
if (f_at_kw_322(F->up, rt_g_lit("TYPE", 4))) {
f_skip_333(F->up);
F->p_3268 = f_nn_313(F->up, ((rt_int)47LL), f_cur_line_320(F->up));
(*(P174)rt_nil_check(F->p_3268)).ival_ = ((rt_int)10LL);
if (G_NV(F->restr_3277)) {
(*(P174)rt_nil_check(F->p_3268)).flag_ = ((rt_int)9LL);
}
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->p_3268)).name_);
f_append_317(F->up, &F->head_3269, &F->tail_3270, F->p_3268);
} else if ((f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_322(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3268 = f_nn_313(F->up, ((rt_int)47LL), f_cur_line_320(F->up));
(*(P174)rt_nil_check(F->p_3268)).ival_ = ((rt_int)11LL);
if (f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3274 = f_nn_313(F->up, ((rt_int)44LL), f_cur_line_320(F->up));
} else {
F->sub_3274 = f_nn_313(F->up, ((rt_int)45LL), f_cur_line_320(F->up));
}
f_skip_333(F->up);
f_designator_400(F->up, &(*(P174)rt_nil_check(F->sub_3274)).name_);
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_formal_part_398(F->up, &(*(P174)rt_nil_check(F->sub_3274)).a_);
}
if (f_at_kw_322(F->up, rt_g_lit("RETURN", 6))) {
f_skip_333(F->up);
f_subtype_ind_377(F->up, &(*(P174)rt_nil_check(F->sub_3274)).b_);
}
(*(P174)rt_nil_check(F->sub_3274)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3268)).name_ = (*(P174)rt_nil_check(F->sub_3274)).name_;
(*(P174)rt_nil_check(F->p_3268)).a_ = F->sub_3274;
if (f_at_kw_322(F->up, rt_g_lit("IS", 2))) {
f_skip_333(F->up);
if (f_at_kind_326(F->up, ((rt_int)6LL))) {
f_designator_400(F->up, &F->def_name_text_3275);
(*(P174)rt_nil_check(F->p_3268)).b_ = f_nn_313(F->up, ((rt_int)5LL), f_cur_line_320(F->up));
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->p_3268)).b_)).name_ = F->def_name_text_3275;
} else {
f_name_p_371(F->up, &(*(P174)rt_nil_check(F->p_3268)).b_);
}
}
f_append_317(F->up, &F->head_3269, &F->tail_3270, F->p_3268);
} else {
f_id_list_343(F->up, &F->names_3271);
f_expect_op_337(F->up, rt_g_lit(":", 1));
F->mode_3278 = ((rt_int)1LL);
if (f_at_kw_322(F->up, rt_g_lit("IN", 2))) {
f_skip_333(F->up);
if (f_at_kw_322(F->up, rt_g_lit("OUT", 3))) {
f_skip_333(F->up);
F->mode_3278 = ((rt_int)2LL);
}
} else if (f_at_kw_322(F->up, rt_g_lit("OUT", 3))) {
f_skip_333(F->up);
F->mode_3278 = ((rt_int)3LL);
}
f_subtype_ind_377(F->up, &F->st_3272);
F->def_3273 = NULL;
if (f_at_op_324(F->up, rt_g_lit(":=", 2))) {
f_skip_333(F->up);
f_expr_350(F->up, &F->def_3273);
}
while ((F->names_3271 != NULL)) {
F->p_3268 = f_nn_313(F->up, ((rt_int)47LL), G_NV((*(P174)rt_nil_check(F->names_3271)).line_));
(*(P174)rt_nil_check(F->p_3268)).ival_ = ((rt_int)1LL);
(*(P174)rt_nil_check(F->p_3268)).flag_ = G_NV(F->mode_3278);
(*(P174)rt_nil_check(F->p_3268)).name_ = (*(P174)rt_nil_check(F->names_3271)).name_;
(*(P174)rt_nil_check(F->p_3268)).a_ = F->st_3272;
(*(P174)rt_nil_check(F->p_3268)).b_ = F->def_3273;
f_append_317(F->up, &F->head_3269, &F->tail_3270, F->p_3268);
F->names_3271 = (*(P174)rt_nil_check(F->names_3271)).next_;
}
L_end_3280: ;
}
F->more_3276 = f_at_op_324(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3276)) {
f_skip_333(F->up);
}
}
L_end_3279: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_322(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_322(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_402(F->up, &(*(P174)rt_nil_check(F->x_3267)).b_);
} else if (f_at_kw_322(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_408(F->up, &(*(P174)rt_nil_check(F->x_3267)).b_);
} else if (f_at_kw_322(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1146(F->up, &(*(P174)rt_nil_check(F->x_3267)).b_);
} else {
f_perror_332(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P174)rt_nil_check(F->x_3267)).a_ = F->head_3269;
(*(P174)rt_nil_check(F->x_3267)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3267)).b_)).name_;
(*F->res_1289) = F->x_3267;
ret_:

  return;
}

static void f_instantiation_1293(struct f_greenc_1fr *up_, P174 x_1291, P174 *res_1292) {
  struct f_instantiation_1293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1291 = x_1291;
F->res_1292 = res_1292;
F->i_3281 = NULL;
F->head_3282 = NULL;
F->tail_3283 = NULL;
F->a_3284 = NULL;
F->formal_3285 = NULL;
F->mark_3286 = INT64_MIN;
F->more_3287 = INT_MIN;
F->more_3287 = 1;
f_expect_kw_335(F->up, rt_g_lit("IS", 2));
f_expect_kw_335(F->up, rt_g_lit("NEW", 3));
F->i_3281 = f_nn_313(F->up, ((rt_int)53LL), G_NV((*(P174)rt_nil_check(F->x_1291)).line_));
(*(P174)rt_nil_check(F->i_3281)).name_ = (*(P174)rt_nil_check(F->x_1291)).name_;
(*(P174)rt_nil_check(F->i_3281)).ival_ = G_NV((*(P174)rt_nil_check(F->x_1291)).kind_);
f_expect_id_339(F->up, &(*(P174)rt_nil_check(F->i_3281)).tag_);
while (f_at_op_324(F->up, rt_g_lit(".", 1))) {
f_skip_333(F->up);
f_expect_id_339(F->up, &F->formal_3285);
(*(P174)rt_nil_check(F->i_3281)).tag_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->i_3281)).tag_)), one_rt_gstr(46)), (*(P140)rt_nil_check(F->formal_3285))));
}
L_end_3288: ;
if (f_at_op_324(F->up, rt_g_lit("(", 1))) {
f_skip_333(F->up);
while (G_NV(F->more_3287)) {
F->formal_3285 = NULL;
F->mark_3286 = ((rt_int)0LL);
if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_339(F->up, &F->formal_3285);
f_skip_333(F->up);
F->mark_3286 = ((rt_int)5LL);
} else if (((f_at_kind_326(F->up, ((rt_int)1LL)) && (f_kind_at_328(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_330(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_339(F->up, &F->formal_3285);
if (f_at_op_324(F->up, rt_g_lit("=:", 2))) {
F->mark_3286 = ((rt_int)3LL);
} else if (f_at_op_324(F->up, rt_g_lit(":=:", 3))) {
F->mark_3286 = ((rt_int)2LL);
} else {
F->mark_3286 = ((rt_int)1LL);
}
f_skip_333(F->up);
}
if ((f_at_kind_326(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3286) == ((rt_int)5LL)))) {
F->a_3284 = f_nn_313(F->up, ((rt_int)5LL), f_cur_line_320(F->up));
f_designator_400(F->up, &(*(P174)rt_nil_check(F->a_3284)).name_);
} else {
f_expr_350(F->up, &F->a_3284);
}
(*(P174)rt_nil_check(F->a_3284)).formal_ = F->formal_3285;
(*(P174)rt_nil_check(F->a_3284)).flag_ = G_NV(F->mark_3286);
f_append_317(F->up, &F->head_3282, &F->tail_3283, F->a_3284);
F->more_3287 = f_at_op_324(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3287)) {
f_skip_333(F->up);
}
}
L_end_3289: ;
f_expect_op_337(F->up, rt_g_lit(")", 1));
}
f_expect_op_337(F->up, rt_g_lit(";", 1));
(*(P174)rt_nil_check(F->i_3281)).a_ = F->head_3282;
(*F->res_1292) = F->i_3281;
ret_:

  return;
}

static void f_generic_decl_1295(struct f_greenc_1fr *up_, P174 e_1294) {
  struct f_generic_decl_1295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1294 = e_1294;
F->y_3290 = NULL;
if ((G_NV((*(P174)rt_nil_check(F->e_1294)).kind_) == ((rt_int)54LL))) {
F->y_3290 = f_new_sym_483(F->up, ((rt_int)11LL), (*(P174)rt_nil_check(F->e_1294)).name_);
(*(P117)rt_nil_check(F->y_3290)).decl_ = F->e_1294;
f_define_478(F->up, F->y_3290, G_NV((*(P174)rt_nil_check(F->e_1294)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->e_1294)).kind_) == ((rt_int)53LL))) {
f_instantiate_1337(F->up, F->e_1294);
} else {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1294)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1297(struct f_greenc_1fr *up_, rt_gstr n_1296) {
  struct f_is_generic_name_1297fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1296 = cp_rt_gstr(n_1296);
F->y_3291 = NULL;
F->y_3291 = f_lookup_435(F->up, F->n_1296);
if ((F->y_3291 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P117)rt_nil_check(F->y_3291)).depth_) != G_NV(F->up->depth_120))) {
F->result_ = 0;
goto ret_;
}
if ((!(F->y_3291 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P117)rt_nil_check(F->y_3291)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_instantiates_1300(struct f_greenc_1fr *up_, P174 n_1298, rt_gstr name_1299) {
  struct f_instantiates_1300fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1298 = n_1298;
F->name_1299 = cp_rt_gstr(name_1299);
F->p_3292 = NULL;
F->p_3292 = F->n_1298;
while ((F->p_3292 != NULL)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3292)).kind_) == ((rt_int)53LL)) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3292)).tag_)), F->name_1299))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->p_3292)).a_, F->name_1299) || f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->p_3292)).b_, F->name_1299))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->p_3292)).c_, F->name_1299) || f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->p_3292)).d_, F->name_1299))) {
F->result_ = 1;
goto ret_;
} else if (f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->p_3292)).e_, F->name_1299)) {
F->result_ = 1;
goto ret_;
}
F->p_3292 = (*(P174)rt_nil_check(F->p_3292)).next_;
}
L_end_3293: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1302(struct f_greenc_1fr *up_, P174 e_1301) {
  struct f_attach_generic_body_1302fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1301 = e_1301;
F->y_3294 = NULL;
F->y_3294 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1301)).name_)));
if ((f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->e_1301)).c_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1301)).name_))) || f_instantiates_1300(F->up, (*(P174)rt_nil_check(F->e_1301)).d_, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1301)).name_))))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1301)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("generic ", 8), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1301)).name_))), rt_g_lit(" cannot be instantiated in its own body (RM79 12.2)", 51)));
}
(*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3294)).decl_)).c_ = F->e_1301;
F->up->generic_contexts_148 = ({ R147 *cell3295 = rt_alloc(sizeof(R147)); *cell3295 = cp_R147(({ R147 ag3296; ag3296.body_node_ = F->e_1301; ag3296.visible_ = F->up->scope_stack_121; ag3296.next_ = F->up->generic_contexts_148; ag3296; })); (P146)cell3295; });
ret_:

  return;
}

static void f_restore_generic_context_1306(struct f_greenc_1fr *up_, P174 body_node_1303, rt_int line_1304, rt_gstr inst_1305) {
  struct f_restore_generic_context_1306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1303 = body_node_1303;
F->line_1304 = line_1304;
F->inst_1305 = cp_rt_gstr(inst_1305);
F->ctx_3297 = NULL;
F->ctx_3297 = F->up->generic_contexts_148;
F->m_3298 = NULL;
F->z_3299 = NULL;
F->seen_3300 = INT_MIN;
while (((F->ctx_3297 != NULL) && ((*(P146)rt_nil_check(F->ctx_3297)).body_node_ != F->body_node_1303))) {
F->ctx_3297 = (*(P146)rt_nil_check(F->ctx_3297)).next_;
}
L_end_3301: ;
if ((F->ctx_3297 == NULL)) {
goto ret_;
}
F->m_3298 = (*(P146)rt_nil_check(F->ctx_3297)).visible_;
while ((F->m_3298 != NULL)) {
if ((((G_NV((*(P117)rt_nil_check(F->m_3298)).depth_) > ((rt_int)0LL)) && (G_NV((*(P117)rt_nil_check(F->m_3298)).kind_) != ((rt_int)11LL))) && (!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3298)).name_)), F->inst_1305)))) {
F->z_3299 = ({ A116 ix3303 = F->up->table_119; ix3303.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3298)).name_))), ix3303.lo, ix3303.hi) - ix3303.lo]; });
F->seen_3300 = 0;
while ((F->z_3299 != NULL)) {
if (((G_NV((*(P117)rt_nil_check(F->z_3299)).depth_) == G_NV(F->up->depth_120)) && eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->z_3299)).name_)), (*(P140)rt_nil_check((*(P117)rt_nil_check(F->m_3298)).name_))))) {
if ((!f_distinct_overload_475(F->up, F->z_3299, F->m_3298))) {
F->seen_3300 = 1;
}
}
F->z_3299 = (*(P117)rt_nil_check(F->z_3299)).chain_;
}
L_end_3304: ;
if ((!G_NV(F->seen_3300))) {
f_copy_sym_1094(F->up, F->m_3298, &F->z_3299);
f_define_478(F->up, F->z_3299, F->line_1304);
}
}
F->m_3298 = (*(P117)rt_nil_check(F->m_3298)).stack_;
}
L_end_3302: ;
ret_:

  return;
}

static P174 f_gactual_1310(struct f_greenc_1fr *up_, P174 args_1307, rt_int nth_1308, rt_gstr name_1309) {
  struct f_gactual_1310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1307 = args_1307;
F->nth_1308 = nth_1308;
F->name_1309 = cp_rt_gstr(name_1309);
F->a_3305 = NULL;
F->a_3305 = F->args_1307;
F->i_3306 = INT64_MIN;
F->i_3306 = ((rt_int)1LL);
while ((F->a_3305 != NULL)) {
if ((((*(P174)rt_nil_check(F->a_3305)).formal_ == NULL) && (G_NV(F->i_3306) == F->nth_1308))) {
F->result_ = F->a_3305;
goto ret_;
}
if ((((*(P174)rt_nil_check(F->a_3305)).formal_ != NULL) && eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_3305)).formal_)), F->name_1309))) {
F->result_ = F->a_3305;
goto ret_;
}
if (((*(P174)rt_nil_check(F->a_3305)).formal_ == NULL)) {
F->i_3306 = rt_add(G_NV(F->i_3306), ((rt_int)1LL));
}
F->a_3305 = (*(P174)rt_nil_check(F->a_3305)).next_;
}
L_end_3307: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1314(struct f_greenc_1fr *up_, P174 n_1311, P140 name_1312, P174 *r_1313) {
  struct f_copy_node_1314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1311 = n_1311;
F->name_1312 = name_1312;
F->r_1313 = r_1313;
(*F->r_1313) = f_nn_313(F->up, G_NV((*(P174)rt_nil_check(F->n_1311)).kind_), G_NV((*(P174)rt_nil_check(F->n_1311)).line_));
as_R175(&(*(P174)rt_nil_check((*F->r_1313))), (*(P174)rt_nil_check(F->n_1311)));
(*(P174)rt_nil_check((*F->r_1313))).name_ = F->name_1312;
(*(P174)rt_nil_check((*F->r_1313))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1318(struct f_greenc_1fr *up_, P117 y_1315, rt_gstr name_1316, P117 fs_1317) {
  struct f_matches_formal_1318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1315 = y_1315;
F->name_1316 = cp_rt_gstr(name_1316);
F->fs_1317 = fs_1317;
if (((!eq_rt_gstr((*(P140)rt_nil_check((*(P117)rt_nil_check(F->y_1315)).name_)), F->name_1316)) || ((G_NV((*(P117)rt_nil_check(F->y_1315)).kind_) != ((rt_int)3LL)) && (G_NV((*(P117)rt_nil_check(F->y_1315)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_469(F->up, (*(P117)rt_nil_check(F->y_1315)).params_, (*(P117)rt_nil_check(F->fs_1317)).params_) && f_same_455(F->up, (*(P117)rt_nil_check(F->y_1315)).result_, (*(P117)rt_nil_check(F->fs_1317)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_actual_type_1321(struct f_greenc_1fr *up_, P174 a_1319, P117 *y_1320) {
  struct f_actual_type_1321fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1319 = a_1319;
F->y_1320 = y_1320;
(*F->y_1320) = NULL;
if ((G_NV((*(P174)rt_nil_check(F->a_1319)).kind_) == ((rt_int)5LL))) {
(*F->y_1320) = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1319)).name_)));
} else if (((G_NV((*(P174)rt_nil_check(F->a_1319)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->a_1319)).a_))) {
(*F->y_1320) = f_member_of_1089(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->a_1319)).a_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1319)).name_)), G_NV((*(P174)rt_nil_check(F->a_1319)).line_));
}
if ((((*F->y_1320) != NULL) && (G_NV((*(P117)rt_nil_check((*F->y_1320))).kind_) != ((rt_int)5LL)))) {
(*F->y_1320) = NULL;
}
ret_:

  return;
}

static void f_actual_subprogram_1326(struct f_greenc_1fr *up_, P174 f_1322, P174 a_1323, rt_int line_1324, P117 *r_1325) {
  struct f_actual_subprogram_1326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1322 = f_1322;
F->a_1323 = a_1323;
F->line_1324 = line_1324;
F->r_1325 = r_1325;
F->fs_3308 = NULL;
F->y_3309 = NULL;
F->name_3310 = NULL;
F->m_3311 = NULL;
(*F->r_1325) = NULL;
f_build_subprogram_667(F->up, (*(P174)rt_nil_check(F->f_1322)).a_, &F->fs_3308);
if ((G_NV((*(P174)rt_nil_check(F->a_1323)).kind_) == ((rt_int)3LL))) {
F->name_3310 = f_mk_239(F->up, f_upper_s_252(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_))));
F->y_3309 = ({ A116 ix3312 = F->up->table_119; ix3312.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check(F->name_3310))), ix3312.lo, ix3312.hi) - ix3312.lo]; });
while (((F->y_3309 != NULL) && (!f_matches_formal_1318(F->up, F->y_3309, (*(P140)rt_nil_check(F->name_3310)), F->fs_3308)))) {
F->y_3309 = (*(P117)rt_nil_check(F->y_3309)).chain_;
}
L_end_3313: ;
(*F->r_1325) = F->y_3309;
if ((((*F->r_1325) == NULL) && f_is_operator_254(F->up, (*(P140)rt_nil_check(F->name_3310))))) {
f_wrap_operation_1332(F->up, F->f_1322, (*(P140)rt_nil_check(F->name_3310)), NULL, F->line_1324, &(*F->r_1325));
}
} else if ((G_NV((*(P174)rt_nil_check(F->a_1323)).kind_) == ((rt_int)5LL))) {
F->name_3310 = (*(P174)rt_nil_check(F->a_1323)).name_;
F->y_3309 = ({ A116 ix3314 = F->up->table_119; ix3314.p[rt_index(f_hash_428(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_))), ix3314.lo, ix3314.hi) - ix3314.lo]; });
while (((F->y_3309 != NULL) && (!f_matches_formal_1318(F->up, F->y_3309, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)), F->fs_3308)))) {
F->y_3309 = (*(P117)rt_nil_check(F->y_3309)).chain_;
}
L_end_3315: ;
(*F->r_1325) = F->y_3309;
if ((((*F->r_1325) == NULL) && f_is_operator_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_))))) {
f_wrap_operation_1332(F->up, F->f_1322, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)), NULL, F->line_1324, &(*F->r_1325));
}
} else if (((G_NV((*(P174)rt_nil_check(F->a_1323)).kind_) == ((rt_int)9LL)) && f_is_package_1085(F->up, (*(P174)rt_nil_check(F->a_1323)).a_))) {
F->m_3311 = (*(P117)rt_nil_check(f_lookup_path_1083(F->up, f_path_of_356(F->up, (*(P174)rt_nil_check(F->a_1323)).a_)))).members_;
while (((F->m_3311 != NULL) && (!(f_matches_formal_1318(F->up, F->m_3311, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)), F->fs_3308) && (!G_NV((*(P117)rt_nil_check(F->m_3311)).hidden_)))))) {
F->m_3311 = (*(P117)rt_nil_check(F->m_3311)).mnext_;
}
L_end_3316: ;
(*F->r_1325) = F->m_3311;
} else if (((G_NV((*(P174)rt_nil_check(F->a_1323)).kind_) == ((rt_int)9LL)) && (G_NV((*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).a_)).kind_) == ((rt_int)5LL)))) {
if (f_is_operator_254(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)))) {
f_wrap_operation_1332(F->up, F->f_1322, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)), NULL, F->line_1324, &(*F->r_1325));
} else {
f_wrap_operation_1332(F->up, F->f_1322, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).name_)), (*(P174)rt_nil_check((*(P174)rt_nil_check(F->a_1323)).a_)).name_, F->line_1324, &(*F->r_1325));
}
}
if (((*F->r_1325) == NULL)) {
f_fail_260(F->up, F->line_1324, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram matches generic parameter ", 40), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_1322)).name_))), rt_g_lit(" (RM79 12.2)", 12)));
}
ret_:

  return;
}

static void f_wrap_operation_1332(struct f_greenc_1fr *up_, P174 f_1327, rt_gstr op_1328, P140 type_name_1329, rt_int line_1330, P117 *r_1331) {
  struct f_wrap_operation_1332fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1327 = f_1327;
F->op_1328 = cp_rt_gstr(op_1328);
F->type_name_1329 = type_name_1329;
F->line_1330 = line_1330;
F->r_1331 = r_1331;
F->w_3317 = NULL;
F->p_3318 = NULL;
F->q_3319 = NULL;
F->qt_3320 = NULL;
F->ret_3321 = NULL;
F->x_3322 = NULL;
F->a1_3323 = NULL;
F->a2_3324 = NULL;
F->wname_3325 = NULL;
F->n_3326 = INT64_MIN;
F->n_3326 = ((rt_int)0LL);
F->y_3327 = NULL;
f_new_name_242(F->up, rt_g_lit("$W", 2), &F->wname_3325);
f_copy_node_1314(F->up, (*(P174)rt_nil_check(F->f_1327)).a_, F->wname_3325, &F->w_3317);
if ((G_NV((*(P174)rt_nil_check(F->w_3317)).kind_) != ((rt_int)45LL))) {
f_fail_260(F->up, F->line_1330, rt_g_lit("an operator or an attribute is the actual of a formal function (RM79 12.2)", 74));
}
F->p_3318 = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->f_1327)).a_)).a_;
while ((F->p_3318 != NULL)) {
f_copy_node_1314(F->up, F->p_3318, (*(P174)rt_nil_check(F->p_3318)).name_, &F->q_3319);
f_actual_mark_1335(F->up, (*(P174)rt_nil_check(F->p_3318)).a_, &(*(P174)rt_nil_check(F->q_3319)).a_);
if ((F->qt_3320 == NULL)) {
(*(P174)rt_nil_check(F->w_3317)).a_ = F->q_3319;
} else {
(*(P174)rt_nil_check(F->qt_3320)).next_ = F->q_3319;
}
F->qt_3320 = F->q_3319;
F->n_3326 = rt_add(G_NV(F->n_3326), ((rt_int)1LL));
F->p_3318 = (*(P174)rt_nil_check(F->p_3318)).next_;
}
L_end_3328: ;
f_actual_mark_1335(F->up, (*(P174)rt_nil_check((*(P174)rt_nil_check(F->f_1327)).a_)).b_, &(*(P174)rt_nil_check(F->w_3317)).b_);
F->a1_3323 = f_nn_313(F->up, ((rt_int)5LL), F->line_1330);
(*(P174)rt_nil_check(F->a1_3323)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check(F->w_3317)).a_)).name_;
if ((F->type_name_1329 != NULL)) {
F->x_3322 = f_nn_313(F->up, ((rt_int)10LL), F->line_1330);
(*(P174)rt_nil_check(F->x_3322)).a_ = f_nn_313(F->up, ((rt_int)5LL), F->line_1330);
(*(P174)rt_nil_check((*(P174)rt_nil_check(F->x_3322)).a_)).name_ = f_mk_239(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check(F->type_name_1329))));
(*(P174)rt_nil_check(F->x_3322)).name_ = f_mk_239(F->up, F->op_1328);
(*(P174)rt_nil_check(F->x_3322)).b_ = F->a1_3323;
} else if ((G_NV(F->n_3326) == ((rt_int)2LL))) {
F->a2_3324 = f_nn_313(F->up, ((rt_int)5LL), F->line_1330);
(*(P174)rt_nil_check(F->a2_3324)).name_ = (*(P174)rt_nil_check((*(P174)rt_nil_check((*(P174)rt_nil_check(F->w_3317)).a_)).next_)).name_;
F->x_3322 = f_binop_348(F->up, f_mk_239(F->up, F->op_1328), F->a1_3323, F->a2_3324, F->line_1330);
} else {
F->x_3322 = f_nn_313(F->up, ((rt_int)6LL), F->line_1330);
(*(P174)rt_nil_check(F->x_3322)).name_ = f_mk_239(F->up, F->op_1328);
(*(P174)rt_nil_check(F->x_3322)).a_ = F->a1_3323;
}
F->ret_3321 = f_nn_313(F->up, ((rt_int)27LL), F->line_1330);
(*(P174)rt_nil_check(F->ret_3321)).a_ = F->x_3322;
(*(P174)rt_nil_check(F->w_3317)).d_ = F->ret_3321;
(*(P174)rt_nil_check(F->w_3317)).c_ = NULL;
(*(P174)rt_nil_check(F->w_3317)).e_ = NULL;
(*(P174)rt_nil_check(F->w_3317)).ival_ = ((rt_int)0LL);
f_build_subprogram_667(F->up, F->w_3317, &F->y_3327);
f_define_478(F->up, F->y_3327, F->line_1330);
f_subprogram_body_729(F->up, F->w_3317, F->y_3327);
(*F->r_1331) = F->y_3327;
ret_:

  return;
}

static void f_actual_mark_1335(struct f_greenc_1fr *up_, P174 st_1333, P174 *r_1334) {
  struct f_actual_mark_1335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_1333 = st_1333;
F->r_1334 = r_1334;
(*F->r_1334) = F->st_1333;
if ((((F->st_1333 != NULL) && (G_NV((*(P174)rt_nil_check(F->st_1333)).kind_) == ((rt_int)80LL))) && ((*(P174)rt_nil_check(F->st_1333)).tag_ == NULL))) {
if ((f_lookup_435(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_1333)).name_)))) != NULL)) {
f_copy_node_1314(F->up, F->st_1333, f_mk_239(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->st_1333)).name_)))), &(*F->r_1334));
}
}
ret_:

  return;
}

static void f_instantiate_1337(struct f_greenc_1fr *up_, P174 e_1336) {
  struct f_instantiate_1337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1336 = e_1336;
F->g_3329 = NULL;
F->g_3329 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).tag_)));
F->gd_3330 = NULL;
F->pat_3331 = NULL;
F->f_3332 = NULL;
F->a_3333 = NULL;
F->cn_3334 = NULL;
F->rn_3335 = NULL;
F->y_3336 = NULL;
F->z_3337 = NULL;
F->fs_3338 = NULL;
F->nth_3339 = INT64_MIN;
F->nth_3339 = ((rt_int)1LL);
F->t_3340 = NULL;
F->vt_3341 = NULL;
F->c_3342 = NULL;
F->v_3343 = NULL;
F->acc_3344 = NULL;
F->x_3345 = NULL;
F->ok_3346 = INT_MIN;
F->g_3329 = f_lookup_path_1083(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).tag_)));
if (((F->g_3329 == NULL) || (G_NV((*(P117)rt_nil_check(F->g_3329)).kind_) != ((rt_int)11LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3330 = (*(P117)rt_nil_check(F->g_3329)).decl_;
F->pat_3331 = (*(P174)rt_nil_check(F->gd_3330)).b_;
f_open_scope_479(F->up);
F->up->in_instance_210 = rt_add(G_NV(F->up->in_instance_210), ((rt_int)1LL));
F->f_3332 = (*(P174)rt_nil_check(F->gd_3330)).a_;
while ((F->f_3332 != NULL)) {
F->a_3333 = f_gactual_1310(F->up, (*(P174)rt_nil_check(F->e_1336)).a_, G_NV(F->nth_3339), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_)));
F->nth_3339 = rt_add(G_NV(F->nth_3339), ((rt_int)1LL));
if ((G_NV((*(P174)rt_nil_check(F->f_3332)).ival_) == ((rt_int)10LL))) {
if ((F->a_3333 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
}
f_actual_type_1321(F->up, F->a_3333, &F->y_3336);
if ((F->y_3336 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
}
if ((G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3336)).t_)).is_restricted_) && (G_NV((*(P174)rt_nil_check(F->f_3332)).flag_) != ((rt_int)9LL)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a restricted type does not match the formal type ", 49), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))), rt_g_lit(", which is not restricted (RM79 12.2)", 37)));
}
f_copy_sym_1094(F->up, F->y_3336, &F->z_3337);
(*(P117)rt_nil_check(F->z_3337)).name_ = f_mk_239(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
f_define_478(F->up, F->z_3337, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
f_copy_sym_1094(F->up, F->y_3336, &F->z_3337);
(*(P117)rt_nil_check(F->z_3337)).name_ = (*(P174)rt_nil_check(F->f_3332)).name_;
(*(P117)rt_nil_check(F->z_3337)).t_ = f_new_typ_485(F->up, G_NV((*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3336)).t_)).kind_));
as_R123(&(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3337)).t_)), (*(P122)rt_nil_check((*(P117)rt_nil_check(F->y_3336)).t_)));
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3337)).t_)).view_of_ = (*(P117)rt_nil_check(F->y_3336)).t_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3337)).t_)).name_ = (*(P174)rt_nil_check(F->f_3332)).name_;
(*(P122)rt_nil_check((*(P117)rt_nil_check(F->z_3337)).t_)).is_restricted_ = (G_NV((*(P174)rt_nil_check(F->f_3332)).flag_) == ((rt_int)9LL));
f_define_478(F->up, F->z_3337, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
} else if ((G_NV((*(P174)rt_nil_check(F->f_3332)).ival_) == ((rt_int)11LL))) {
if ((F->a_3333 == NULL)) {
F->a_3333 = (*(P174)rt_nil_check(F->f_3332)).b_;
}
if ((F->a_3333 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
}
f_actual_subprogram_1326(F->up, F->f_3332, F->a_3333, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), &F->y_3336);
f_copy_sym_1094(F->up, F->y_3336, &F->z_3337);
(*(P117)rt_nil_check(F->z_3337)).name_ = (*(P174)rt_nil_check(F->f_3332)).name_;
f_define_478(F->up, F->z_3337, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
} else if (((G_NV((*(P174)rt_nil_check(F->f_3332)).flag_) == ((rt_int)3LL)) || (G_NV((*(P174)rt_nil_check(F->f_3332)).flag_) == ((rt_int)2LL)))) {
if ((F->a_3333 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(rt_g_lit("no actual variable for generic parameter ", 41), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
}
if (((G_NV((*(P174)rt_nil_check(F->a_3333)).flag_) != ((rt_int)0LL)) && (G_NV((*(P174)rt_nil_check(F->a_3333)).flag_) != G_NV((*(P174)rt_nil_check(F->f_3332)).flag_)))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))), rt_g_lit(" does not match its mode (RM79 12.2)", 36)));
}
F->rn_3335 = f_nn_313(F->up, ((rt_int)40LL), G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
(*(P174)rt_nil_check(F->rn_3335)).name_ = (*(P174)rt_nil_check(F->f_3332)).name_;
(*(P174)rt_nil_check(F->rn_3335)).a_ = (*(P174)rt_nil_check(F->f_3332)).a_;
(*(P174)rt_nil_check(F->rn_3335)).flag_ = ((rt_int)2LL);
(*(P174)rt_nil_check(F->rn_3335)).b_ = F->a_3333;
f_decl_element_671(F->up, F->rn_3335);
} else {
if ((F->a_3333 == NULL)) {
F->a_3333 = (*(P174)rt_nil_check(F->f_3332)).b_;
}
if ((F->a_3333 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_))));
}
f_resolve_521(F->up, (*(P174)rt_nil_check(F->f_3332)).a_, &F->t_3340, &F->c_3342);
f_gexpr_842(F->up, F->a_3333, F->t_3340, &F->vt_3341, &F->v_3343);
f_check_type_500(F->up, F->vt_3341, F->t_3340, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
F->z_3337 = f_new_sym_483(F->up, ((rt_int)2LL), (*(P174)rt_nil_check(F->f_3332)).name_);
f_storage_652(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->f_3332)).name_)), F->t_3340, &F->acc_3344);
f_copy_code_637(F->up, F->t_3340, (*(P140)rt_nil_check(F->v_3343)), &F->x_3345);
f_emit_266(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->acc_3344)), rt_g_lit(" = ", 3)), (*(P140)rt_nil_check(F->x_3345))), one_rt_gstr(59)));
(*(P117)rt_nil_check(F->z_3337)).t_ = F->t_3340;
(*(P117)rt_nil_check(F->z_3337)).c_ = F->c_3342;
(*(P117)rt_nil_check(F->z_3337)).ro_ = 1;
if ((G_NV((*(P122)rt_nil_check(F->t_3340)).kind_) == ((rt_int)1LL))) {
f_manifest_517(F->up, F->a_3333, &(*(P117)rt_nil_check(F->z_3337)).mvalue_, &F->ok_3346);
 (void)rt_range(F->ok_3346, 0, 1);
(*(P117)rt_nil_check(F->z_3337)).hasmv_ = G_NV(F->ok_3346);
}
f_bind_655(F->up, F->z_3337, F->acc_3344);
f_define_478(F->up, F->z_3337, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
}
F->f_3332 = (*(P174)rt_nil_check(F->f_3332)).next_;
}
L_end_3347: ;
if (((*(P174)rt_nil_check(F->gd_3330)).c_ != NULL)) {
f_restore_generic_context_1306(F->up, (*(P174)rt_nil_check(F->gd_3330)).c_, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).name_)));
}
if (((G_NV((*(P174)rt_nil_check(F->pat_3331)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->pat_3331)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P174)rt_nil_check(F->pat_3331)).ival_) == ((rt_int)1LL))) {
if (((*(P174)rt_nil_check(F->gd_3330)).c_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3331 = (*(P174)rt_nil_check(F->gd_3330)).c_;
}
f_copy_node_1314(F->up, F->pat_3331, (*(P174)rt_nil_check(F->e_1336)).name_, &F->cn_3334);
f_build_subprogram_667(F->up, F->cn_3334, &F->y_3336);
f_define_478(F->up, F->y_3336, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
f_subprogram_body_729(F->up, F->cn_3334, F->y_3336);
} else if ((G_NV((*(P174)rt_nil_check(F->pat_3331)).kind_) == ((rt_int)48LL))) {
f_copy_node_1314(F->up, F->pat_3331, (*(P174)rt_nil_check(F->e_1336)).name_, &F->cn_3334);
f_package_spec_1099(F->up, F->cn_3334);
F->y_3336 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).name_)));
if (((*(P174)rt_nil_check(F->gd_3330)).c_ != NULL)) {
f_copy_node_1314(F->up, (*(P174)rt_nil_check(F->gd_3330)).c_, (*(P174)rt_nil_check(F->e_1336)).name_, &F->cn_3334);
f_package_body_1104(F->up, F->cn_3334);
}
} else {
f_copy_node_1314(F->up, F->pat_3331, (*(P174)rt_nil_check(F->e_1336)).name_, &F->cn_3334);
f_task_spec_1203(F->up, F->cn_3334);
F->y_3336 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).name_)));
if (((*(P174)rt_nil_check(F->gd_3330)).c_ == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->e_1336)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->e_1336)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1314(F->up, (*(P174)rt_nil_check(F->gd_3330)).c_, (*(P174)rt_nil_check(F->e_1336)).name_, &F->cn_3334);
f_task_body_1207(F->up, F->cn_3334);
}
F->up->in_instance_210 = rt_sub(G_NV(F->up->in_instance_210), ((rt_int)1LL));
f_close_scope_480(F->up);
f_define_478(F->up, F->y_3336, G_NV((*(P174)rt_nil_check(F->e_1336)).line_));
ret_:

  return;
}

static void f_predef_type_1342(struct f_greenc_1fr *up_, rt_gstr name_1338, P122 t_1339, rt_gstr lo_1340, rt_gstr hi_1341) {
  struct f_predef_type_1342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1338 = cp_rt_gstr(name_1338);
F->t_1339 = t_1339;
F->lo_1340 = cp_rt_gstr(lo_1340);
F->hi_1341 = cp_rt_gstr(hi_1341);
F->y_3348 = NULL;
F->y_3348 = f_new_sym_483(F->up, ((rt_int)5LL), f_mk_239(F->up, F->name_1338));
(*(P117)rt_nil_check(F->y_3348)).t_ = F->t_1339;
if ((({ rt_gstr at3349 = F->lo_1340; at3349.hi >= at3349.lo ? at3349.hi - at3349.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P117)rt_nil_check(F->y_3348)).c_ = f_new_cons_486(F->up);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3348)).c_)).lo_ = f_mk_239(F->up, F->lo_1340);
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3348)).c_)).hi_ = f_mk_239(F->up, F->hi_1341);
if (((({ rt_gstr at3350 = F->hi_1341; at3350.hi >= at3350.lo ? at3350.hi - at3350.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_246(F->up, G_NV(({ rt_gstr ix3354 = F->hi_1341; ix3354.p[rt_index(({ rt_gstr at3353 = F->hi_1341; at3353.lo; }), ix3354.lo, ix3354.hi) - ix3354.lo]; }))))) {
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3348)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1340));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3348)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1341));
(*(P178)rt_nil_check((*(P117)rt_nil_check(F->y_3348)).c_)).hasm_ = 1;
}
}
f_define_478(F->up, F->y_3348, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1346(struct f_greenc_1fr *up_, rt_gstr name_1343, P122 t_1344, rt_gstr code_text_1345) {
  struct f_predef_const_1346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1343 = cp_rt_gstr(name_1343);
F->t_1344 = t_1344;
F->code_text_1345 = cp_rt_gstr(code_text_1345);
F->y_3355 = NULL;
F->y_3355 = f_new_sym_483(F->up, ((rt_int)2LL), f_mk_239(F->up, F->name_1343));
(*(P117)rt_nil_check(F->y_3355)).t_ = F->t_1344;
(*(P117)rt_nil_check(F->y_3355)).ro_ = 1;
(*(P117)rt_nil_check(F->y_3355)).access_path_ = f_mk_239(F->up, F->code_text_1345);
f_define_478(F->up, F->y_3355, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1348(struct f_greenc_1fr *up_, rt_gstr name_1347) {
  struct f_predef_exc_1348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1347 = cp_rt_gstr(name_1347);
F->y_3356 = NULL;
F->y_3356 = f_new_sym_483(F->up, ((rt_int)6LL), f_mk_239(F->up, F->name_1347));
(*(P117)rt_nil_check(F->y_3356)).cname_ = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_257(F->up)), F->name_1347), f_q_257(F->up)), one_rt_gstr(41)));
f_define_478(F->up, F->y_3356, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1352(struct f_greenc_1fr *up_, rt_gstr name_1349, P122 t_1350, rt_int v_1351) {
  struct f_predef_lit_1352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1349 = cp_rt_gstr(name_1349);
F->t_1350 = t_1350;
F->v_1351 = v_1351;
F->y_3357 = NULL;
F->y_3357 = f_new_sym_483(F->up, ((rt_int)7LL), f_mk_239(F->up, F->name_1349));
(*(P117)rt_nil_check(F->y_3357)).t_ = F->t_1350;
(*(P117)rt_nil_check(F->y_3357)).result_ = F->t_1350;
(*(P117)rt_nil_check(F->y_3357)).mvalue_ = F->v_1351;
(*(P117)rt_nil_check(F->y_3357)).hasmv_ = 1;
f_define_478(F->up, F->y_3357, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1353(struct f_greenc_1fr *up_) {
  struct f_predefine_1353fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3358 = NULL;
F->control_3359 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3360 = INT64_MIN;
F->start_3360 = ((rt_int)1LL);
F->code_no_3361 = INT64_MIN;
F->code_no_3361 = ((rt_int)0LL);
f_predef_type_1342(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_156, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_167, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_156, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1342(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_156, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1342(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_157, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1342(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_159, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1342(F->up, rt_g_lit("STRING", 6), F->up->ty_string_160, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_158, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1342(F->up, rt_g_lit("TIME", 4), F->up->ty_time_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1352(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_157, ((rt_int)0LL));
f_predef_lit_1352(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_157, ((rt_int)1LL));
{ rt_int lo3365 = ((rt_int)1LL), hi3366 = ({ rt_gstr at3363 = F->control_3359; at3363.hi >= at3363.lo ? at3363.hi - at3363.lo + 1 : (rt_int)0; });
for (rt_int it3367 = lo3365; it3367 <= hi3366; it3367++) {
F->i_3364 = it3367;
if ((G_NV(({ rt_gstr ix3368 = F->control_3359; ix3368.p[rt_index(F->i_3364, ix3368.lo, ix3368.hi) - ix3368.lo]; })) == 32)) {
f_predef_const_1346(F->up, ({ rt_gstr sl3370 = F->control_3359; rt_int l_ = G_NV(F->start_3360), h_ = rt_sub(F->i_3364, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3370.lo, sl3370.hi); rt_index(h_, sl3370.lo, sl3370.hi); } sl3370.p += l_ - sl3370.lo; sl3370.lo = l_; sl3370.hi = h_; sl3370; }), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3361))));
F->code_no_3361 = rt_add(G_NV(F->code_no_3361), ((rt_int)1LL));
F->start_3360 = rt_add(F->i_3364, ((rt_int)1LL));
}
}
}
L_end_3362: ;
f_predef_const_1346(F->up, rt_g_lit("DEL", 3), F->up->ty_char_159, rt_g_lit("127", 3));
f_predef_const_1346(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_159, rt_g_lit("33", 2));
f_predef_const_1346(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_159, rt_g_lit("36", 2));
f_predef_const_1346(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_159, rt_g_lit("63", 2));
f_predef_const_1346(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_159, rt_g_lit("64", 2));
f_predef_const_1346(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_159, rt_g_lit("91", 2));
f_predef_const_1346(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_159, rt_g_lit("92", 2));
f_predef_const_1346(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_159, rt_g_lit("93", 2));
f_predef_const_1346(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_159, rt_g_lit("94", 2));
f_predef_const_1346(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_159, rt_g_lit("96", 2));
f_predef_const_1346(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_159, rt_g_lit("123", 3));
f_predef_const_1346(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_159, rt_g_lit("125", 3));
f_predef_const_1346(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_159, rt_g_lit("126", 3));
{ rt_int lo3373 = ((rt_int)0LL), hi3374 = ((rt_int)25LL);
for (rt_int it3375 = lo3373; it3375 <= hi3374; it3375++) {
F->i_3372 = it3375;
f_predef_const_1346(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3372) - 1), 0, 127))), F->up->ty_char_159, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3372))));
}
}
L_end_3371: ;
f_predef_const_1346(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_160, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_257(F->up)), rt_g_lit("\\n", 2)), f_q_257(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1346(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_171, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1348(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1348(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1348(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1348(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1348(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1348(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1348(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1348(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1348(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1348(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1348(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1348(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1348(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1348(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1348(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1348(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3358 = f_new_sym_483(F->up, ((rt_int)8LL), f_mk_239(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_478(F->up, F->y_3358, ((rt_int)0LL));
(*(P117)rt_nil_check(F->y_3358)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_lib_open_1356(struct f_greenc_1fr *up_, rt_gstr key_1354, rt_int *length_1355) {
  struct f_lib_open_1356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1354 = cp_rt_gstr(key_1354);
F->length_1355 = length_1355;
rt_g_lib_open(rt_g_g2s(F->key_1354), F->length_1355);
ret_:

  return;
}

static void f_lib_store_1359(struct f_greenc_1fr *up_, rt_gstr key_1357, rt_gstr contents_1358) {
  struct f_lib_store_1359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1357 = cp_rt_gstr(key_1357);
F->contents_1358 = cp_rt_gstr(contents_1358);
rt_g_lib_store(rt_g_g2s(F->key_1357), rt_g_g2s(F->contents_1358));
ret_:

  return;
}

static void f_unit_key_1362(struct f_greenc_1fr *up_, P174 u_1360, P140 *r_1361) {
  struct f_unit_key_1362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1360 = u_1360;
F->r_1361 = r_1361;
F->k_3376 = INT64_MIN;
F->k_3376 = ((rt_int)2LL);
if ((((*(P174)rt_nil_check(F->u_1360)).formal_ != NULL) && ((G_NV(({ rt_gstr ix3377 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).formal_)); ix3377.p[rt_index(((rt_int)1LL), ix3377.lo, ix3377.hi) - ix3377.lo]; })) == 33) || (G_NV(({ rt_gstr ix3378 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).formal_)); ix3378.p[rt_index(((rt_int)1LL), ix3378.lo, ix3378.hi) - ix3378.lo]; })) == 35)))) {
while (((G_NV(F->k_3376) < ({ rt_gstr at3380 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).formal_)); at3380.hi >= at3380.lo ? at3380.hi - at3380.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3381 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).formal_)); ix3381.p[rt_index(rt_add(G_NV(F->k_3376), ((rt_int)1LL)), ix3381.lo, ix3381.hi) - ix3381.lo]; })) != 44))) {
F->k_3376 = rt_add(G_NV(F->k_3376), ((rt_int)1LL));
}
L_end_3379: ;
(*F->r_1361) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl3383 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).formal_)); rt_int l_ = ((rt_int)3LL), h_ = G_NV(F->k_3376); if (l_ <= h_) { rt_index(l_, sl3383.lo, sl3383.hi); rt_index(h_, sl3383.lo, sl3383.hi); } sl3383.p += l_ - sl3383.lo; sl3383.lo = l_; sl3383.hi = h_; sl3383; }), one_rt_gstr(46)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).name_))), rt_g_lit(".sub", 4)));
} else if ((((((G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)48LL)) || (G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)50LL))) || (G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)54LL))) || (G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)53LL))) || (((G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)44LL)) || (G_NV((*(P174)rt_nil_check(F->u_1360)).kind_) == ((rt_int)45LL))) && (G_NV((*(P174)rt_nil_check(F->u_1360)).ival_) == ((rt_int)1LL))))) {
(*F->r_1361) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).name_)), rt_g_lit(".spec", 5)));
} else {
(*F->r_1361) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_1360)).name_)), rt_g_lit(".body", 5)));
}
ret_:

  return;
}

static void f_lib_enabled_1364(struct f_greenc_1fr *up_, int *yes_1363) {
  struct f_lib_enabled_1364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->yes_1363 = yes_1363;
rt_g_lib_enabled(F->yes_1363);
ret_:

  return;
}

static void f_store_units_1365(struct f_greenc_1fr *up_) {
  struct f_store_units_1365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_3384 = NULL;
F->s_3384 = F->up->spans_206;
F->k_3385 = NULL;
F->yes_3386 = INT_MIN;
f_lib_enabled_1364(F->up, &F->yes_3386);
 (void)rt_range(F->yes_3386, 0, 1);
if ((!G_NV(F->yes_3386))) {
goto ret_;
}
while ((F->s_3384 != NULL)) {
f_unit_key_1362(F->up, (*(P204)rt_nil_check(F->s_3384)).u_, &F->k_3385);
f_store_span_1368(F->up, F->s_3384, (*(P140)rt_nil_check(F->k_3385)));
F->s_3384 = (*(P204)rt_nil_check(F->s_3384)).next_;
}
L_end_3387: ;
ret_:

  return;
}

static void f_store_span_1368(struct f_greenc_1fr *up_, P204 s_1366, rt_gstr key_1367) {
  struct f_store_span_1368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1366 = s_1366;
F->key_1367 = cp_rt_gstr(key_1367);
F->n_3388 = INT64_MIN;
F->n_3388 = ((rt_int)0LL);
F->head_3389 = NULL;
F->head_3389 = f_mk_239(F->up, rt_g_lit("", 0));
if ((({ rt_gstr at3390 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1366)).env_)); at3390.hi >= at3390.lo ? at3390.hi - at3390.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->head_3389 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ENVIRONMENT(", 19), ({ rt_gstr sl3394 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1366)).env_)); rt_int l_ = ((rt_int)1LL), h_ = rt_sub(({ rt_gstr at3393 = (*(P140)rt_nil_check((*(P204)rt_nil_check(F->s_1366)).env_)); at3393.hi >= at3393.lo ? at3393.hi - at3393.lo + 1 : (rt_int)0; }), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3394.lo, sl3394.hi); rt_index(h_, sl3394.lo, sl3394.hi); } sl3394.p += l_ - sl3394.lo; sl3394.lo = l_; sl3394.hi = h_; sl3394; })), rt_g_lit(");", 2)), one_rt_gstr(10)));
}
F->n_3388 = ({ rt_gstr at3395 = (*(P140)rt_nil_check(F->head_3389)); at3395.hi >= at3395.lo ? at3395.hi - at3395.lo + 1 : (rt_int)0; });
{ rt_int lo3398 = G_NV((*(P204)rt_nil_check(F->s_1366)).first_), hi3399 = G_NV((*(P204)rt_nil_check(F->s_1366)).last_);
for (rt_int it3400 = lo3398; it3400 <= hi3399; it3400++) {
F->l_3397 = it3400;
F->n_3388 = rt_add(rt_add(G_NV(F->n_3388), ({ rt_gstr at3402 = (*(P140)rt_nil_check(({ A202 ix3401 = F->up->src_lines_203; ix3401.p[rt_index(F->l_3397, ix3401.lo, ix3401.hi) - ix3401.lo]; }))); at3402.hi >= at3402.lo ? at3402.hi - at3402.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
}
}
L_end_3396: ;
{
F->t_3404.lo = ((rt_int)1LL); F->t_3404.hi = G_NV(F->n_3388);
F->t_3404.lo2 = 1; F->t_3404.hi2 = 1;
F->t_3404.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_3404));
memset(F->t_3404.p, 0xFF, (size_t)G_CNT(F->t_3404));
F->k_3406 = INT64_MIN;
F->k_3406 = ({ rt_gstr at3407 = (*(P140)rt_nil_check(F->head_3389)); at3407.hi >= at3407.lo ? at3407.hi - at3407.lo + 1 : (rt_int)0; });
{ rt_gstr sl_ = ({ rt_gstr sl3408 = F->t_3404; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->k_3406); if (l_ <= h_) { rt_index(l_, sl3408.lo, sl3408.hi); rt_index(h_, sl3408.lo, sl3408.hi); } sl3408.p += l_ - sl3408.lo; sl3408.lo = l_; sl3408.hi = h_; sl3408; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(F->head_3389))); }
{ rt_int lo3411 = G_NV((*(P204)rt_nil_check(F->s_1366)).first_), hi3412 = G_NV((*(P204)rt_nil_check(F->s_1366)).last_);
for (rt_int it3413 = lo3411; it3413 <= hi3412; it3413++) {
F->l_3410 = it3413;
{ rt_gstr sl_ = ({ rt_gstr sl3416 = F->t_3404; rt_int l_ = rt_add(G_NV(F->k_3406), ((rt_int)1LL)), h_ = rt_add(G_NV(F->k_3406), ({ rt_gstr at3415 = (*(P140)rt_nil_check(({ A202 ix3414 = F->up->src_lines_203; ix3414.p[rt_index(F->l_3410, ix3414.lo, ix3414.hi) - ix3414.lo]; }))); at3415.hi >= at3415.lo ? at3415.hi - at3415.lo + 1 : (rt_int)0; })); if (l_ <= h_) { rt_index(l_, sl3416.lo, sl3416.hi); rt_index(h_, sl3416.lo, sl3416.hi); } sl3416.p += l_ - sl3416.lo; sl3416.lo = l_; sl3416.hi = h_; sl3416; }); as_rt_gstr(&sl_, (*(P140)rt_nil_check(({ A202 ix3417 = F->up->src_lines_203; ix3417.p[rt_index(F->l_3410, ix3417.lo, ix3417.hi) - ix3417.lo]; })))); }
F->k_3406 = rt_add(rt_add(G_NV(F->k_3406), ({ rt_gstr at3419 = (*(P140)rt_nil_check(({ A202 ix3418 = F->up->src_lines_203; ix3418.p[rt_index(F->l_3410, ix3418.lo, ix3418.hi) - ix3418.lo]; }))); at3419.hi >= at3419.lo ? at3419.hi - at3419.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
(*({ rt_gstr *ix3420 = &(F->t_3404); &ix3420->p[rt_index(G_NV(F->k_3406), ix3420->lo, ix3420->hi) - ix3420->lo]; })) = 10;
}
}
L_end_3409: ;
f_lib_store_1359(F->up, F->key_1367, F->t_3404);

}
L_end_3403: ;
ret_:

  return;
}

static void f_lib_load_1371(struct f_greenc_1fr *up_, rt_gstr key_1369, P174 *r_1370) {
  struct f_lib_load_1371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1369 = cp_rt_gstr(key_1369);
F->r_1370 = r_1370;
F->n_3421 = INT64_MIN;
F->saved_line_3422 = INT64_MIN;
F->saved_line_3422 = G_NV(F->up->src_line_115);
F->saved_pos_3423 = INT64_MIN;
F->saved_pos_3423 = G_NV(F->up->tpos_114);
F->from_3424 = INT64_MIN;
(*F->r_1370) = NULL;
f_lib_open_1356(F->up, F->key_1369, &F->n_3421);
if ((G_NV(F->n_3421) < ((rt_int)0LL))) {
goto ret_;
}
F->from_3424 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
f_include_text_305(F->up, G_NV(F->n_3421));
f_add_token_277(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_114 = G_NV(F->from_3424);
f_compilation_426(F->up, &(*F->r_1370));
F->up->tpos_114 = G_NV(F->saved_pos_3423);
F->up->src_line_115 = G_NV(F->saved_line_3422);
ret_:

  return;
}

static int f_defined_unit_1374(struct f_greenc_1fr *up_, rt_gstr name_1372, P174 before_1373) {
  struct f_defined_unit_1374fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1372 = cp_rt_gstr(name_1372);
F->before_1373 = before_1373;
F->u_3425 = NULL;
F->u_3425 = F->up->units_222;
if (f_listed_431(F->up, F->up->loaded_208, F->name_1372)) {
F->result_ = 1;
goto ret_;
}
while (((F->u_3425 != NULL) && (F->u_3425 != F->before_1373))) {
if ((eq_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3425)).name_)), F->name_1372) && (G_NV(({ rt_gstr ix3427 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->u_3425)).formal_)); ix3427.p[rt_index(((rt_int)1LL), ix3427.lo, ix3427.hi) - ix3427.lo]; })) != 33))) {
F->result_ = 1;
goto ret_;
}
F->u_3425 = (*(P174)rt_nil_check(F->u_3425)).next_;
}
L_end_3426: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_library_units_1375(struct f_greenc_1fr *up_) {
  struct f_library_units_1375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_3428 = NULL;
F->prev_3429 = NULL;
F->l_3430 = NULL;
F->ltail_3431 = NULL;
F->i_3432 = INT64_MIN;
F->j_3433 = INT64_MIN;
F->n_3434 = NULL;
F->f_3435 = NULL;
F->changed_3436 = INT_MIN;
F->changed_3436 = 1;
while (G_NV(F->changed_3436)) {
F->changed_3436 = 0;
F->p_3428 = F->up->units_222;
F->prev_3429 = NULL;
while (((F->p_3428 != NULL) && (!G_NV(F->changed_3436)))) {
F->f_3435 = (*(P174)rt_nil_check(F->p_3428)).formal_;
F->i_3432 = ((rt_int)1LL);
if (((G_NV(({ rt_gstr ix3439 = (*(P140)rt_nil_check(F->f_3435)); ix3439.p[rt_index(((rt_int)1LL), ix3439.lo, ix3439.hi) - ix3439.lo]; })) == 33) || (G_NV(({ rt_gstr ix3440 = (*(P140)rt_nil_check(F->f_3435)); ix3440.p[rt_index(((rt_int)1LL), ix3440.lo, ix3440.hi) - ix3440.lo]; })) == 35))) {
F->i_3432 = ((rt_int)2LL);
}
while (((G_NV(F->i_3432) < ({ rt_gstr at3442 = (*(P140)rt_nil_check(F->f_3435)); at3442.hi >= at3442.lo ? at3442.hi - at3442.lo + 1 : (rt_int)0; })) && (!G_NV(F->changed_3436)))) {
F->j_3433 = rt_add(G_NV(F->i_3432), ((rt_int)1LL));
while (((G_NV(F->j_3433) <= ({ rt_gstr at3444 = (*(P140)rt_nil_check(F->f_3435)); at3444.hi >= at3444.lo ? at3444.hi - at3444.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3445 = (*(P140)rt_nil_check(F->f_3435)); ix3445.p[rt_index(G_NV(F->j_3433), ix3445.lo, ix3445.hi) - ix3445.lo]; })) != 44))) {
F->j_3433 = rt_add(G_NV(F->j_3433), ((rt_int)1LL));
}
L_end_3443: ;
if ((G_NV(F->j_3433) > rt_add(G_NV(F->i_3432), ((rt_int)1LL)))) {
F->n_3434 = f_mk_239(F->up, ({ rt_gstr sl3447 = (*(P140)rt_nil_check(F->f_3435)); rt_int l_ = rt_add(G_NV(F->i_3432), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3433), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3447.lo, sl3447.hi); rt_index(h_, sl3447.lo, sl3447.hi); } sl3447.p += l_ - sl3447.lo; sl3447.lo = l_; sl3447.hi = h_; sl3447; }));
if (((f_lookup_435(F->up, (*(P140)rt_nil_check(F->n_3434))) == NULL) && (!f_defined_unit_1374(F->up, (*(P140)rt_nil_check(F->n_3434)), F->p_3428)))) {
f_load_unit_1378(F->up, (*(P140)rt_nil_check(F->n_3434)), &F->l_3430);
if ((F->l_3430 == NULL)) {
f_predefined_unit_1381(F->up, (*(P140)rt_nil_check(F->n_3434)), &F->l_3430);
}
if ((F->l_3430 == NULL)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->p_3428)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->n_3434)), rt_g_lit(", named by ", 11)), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3428)).name_))), rt_g_lit(", is neither compiled before it nor in ", 39)), rt_g_lit("the program library (RM79 10.3)", 31)));
}
F->up->loaded_208 = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check(F->up->loaded_208)), (*(P140)rt_nil_check(F->n_3434))), one_rt_gstr(44)));
F->ltail_3431 = F->l_3430;
while (((*(P174)rt_nil_check(F->ltail_3431)).next_ != NULL)) {
F->ltail_3431 = (*(P174)rt_nil_check(F->ltail_3431)).next_;
}
L_end_3448: ;
(*(P174)rt_nil_check(F->ltail_3431)).next_ = F->p_3428;
if ((F->prev_3429 == NULL)) {
F->up->units_222 = F->l_3430;
} else {
(*(P174)rt_nil_check(F->prev_3429)).next_ = F->l_3430;
}
F->changed_3436 = 1;
}
}
F->i_3432 = G_NV(F->j_3433);
}
L_end_3441: ;
F->prev_3429 = F->p_3428;
F->p_3428 = (*(P174)rt_nil_check(F->p_3428)).next_;
}
L_end_3438: ;
}
L_end_3437: ;
ret_:

  return;
}

static void f_load_unit_1378(struct f_greenc_1fr *up_, rt_gstr name_1376, P174 *r_1377) {
  struct f_load_unit_1378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1376 = cp_rt_gstr(name_1376);
F->r_1377 = r_1377;
F->s_3449 = NULL;
F->b_3450 = NULL;
F->t_3451 = NULL;
f_lib_load_1371(F->up, cat_rt_gstr(F->name_1376, rt_g_lit(".spec", 5)), &F->s_3449);
f_lib_load_1371(F->up, cat_rt_gstr(F->name_1376, rt_g_lit(".body", 5)), &F->b_3450);
if ((F->s_3449 == NULL)) {
(*F->r_1377) = F->b_3450;
goto ret_;
}
F->t_3451 = F->s_3449;
while (((*(P174)rt_nil_check(F->t_3451)).next_ != NULL)) {
F->t_3451 = (*(P174)rt_nil_check(F->t_3451)).next_;
}
L_end_3452: ;
(*(P174)rt_nil_check(F->t_3451)).next_ = F->b_3450;
(*F->r_1377) = F->s_3449;
ret_:

  return;
}

static void f_predefined_unit_1381(struct f_greenc_1fr *up_, rt_gstr name_1379, P174 *r_1380) {
  struct f_predefined_unit_1381fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1379 = cp_rt_gstr(name_1379);
F->r_1380 = r_1380;
F->saved_pos_3453 = INT64_MIN;
F->saved_pos_3453 = G_NV(F->up->tpos_114);
F->from_3454 = INT64_MIN;
F->from_3454 = rt_add(G_NV(F->up->ntoks_113), ((rt_int)1LL));
(*F->r_1380) = NULL;
if (eq_rt_gstr(F->name_1379, rt_g_lit("UNSAFE_PROGRAMMING", 18))) {
f_lex_line_288(F->up, rt_g_lit("package UNSAFE_PROGRAMMING is", 29));
f_lex_line_288(F->up, rt_g_lit("   generic (type S; type T) function UNSAFE_CONVERSION(X : S) return T;", 71));
f_lex_line_288(F->up, rt_g_lit("end UNSAFE_PROGRAMMING;", 23));
f_lex_line_288(F->up, rt_g_lit("package body UNSAFE_PROGRAMMING is", 34));
f_lex_line_288(F->up, rt_g_lit("   function UNSAFE_CONVERSION(X : S) return T is", 48));
f_lex_line_288(F->up, rt_g_lit("   begin pragma INTERFACE(UNSAFE_CONVERSION); end UNSAFE_CONVERSION;", 68));
f_lex_line_288(F->up, rt_g_lit("end UNSAFE_PROGRAMMING;", 23));
} else if (eq_rt_gstr(F->name_1379, rt_g_lit("MACHINE_CODE", 12))) {
f_lex_line_288(F->up, rt_g_lit("package MACHINE_CODE is", 23));
f_lex_line_288(F->up, rt_g_lit("   type OPCODE is (NOP, LDI, LD, ST, ADD, SUB, MUL, DIV, NEG, OUTC, OUTN, INTR);", 80));
f_lex_line_288(F->up, rt_g_lit("   subtype REGISTER is INTEGER range 0 .. 7;", 44));
f_lex_line_288(F->up, rt_g_lit("   type INSTRUCTION is record OP : OPCODE; R : REGISTER; A : INTEGER; end record;", 81));
f_lex_line_288(F->up, rt_g_lit("end MACHINE_CODE;", 17));
} else if (eq_rt_gstr(F->name_1379, rt_g_lit("LOW_LEVEL_IO", 12))) {
f_lex_line_288(F->up, rt_g_lit("package LOW_LEVEL_IO is", 23));
f_lex_line_288(F->up, rt_g_lit("   subtype DEVICE_NUMBER is INTEGER range 0 .. 15;", 50));
f_lex_line_288(F->up, rt_g_lit("   INTERRUPT_CONTROLLER : constant DEVICE_NUMBER := 0;", 54));
f_lex_line_288(F->up, rt_g_lit("   CONSOLE : constant DEVICE_NUMBER := 1;", 41));
f_lex_line_288(F->up, rt_g_lit("   CLOCK : constant DEVICE_NUMBER := 2;", 39));
f_lex_line_288(F->up, rt_g_lit("   procedure SEND_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER);", 73));
f_lex_line_288(F->up, rt_g_lit("   procedure RECEIVE_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER);", 76));
f_lex_line_288(F->up, rt_g_lit("end LOW_LEVEL_IO;", 17));
f_lex_line_288(F->up, rt_g_lit("package body LOW_LEVEL_IO is", 28));
f_lex_line_288(F->up, rt_g_lit("   procedure SEND_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER) is", 75));
f_lex_line_288(F->up, rt_g_lit("   begin pragma INTERFACE(C); end SEND_CONTROL;", 47));
f_lex_line_288(F->up, rt_g_lit("   procedure RECEIVE_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER) is", 78));
f_lex_line_288(F->up, rt_g_lit("   begin pragma INTERFACE(C); end RECEIVE_CONTROL;", 50));
f_lex_line_288(F->up, rt_g_lit("end LOW_LEVEL_IO;", 17));
} else {
goto ret_;
}
f_add_token_277(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_114 = G_NV(F->from_3454);
f_compilation_426(F->up, &(*F->r_1380));
F->up->tpos_114 = G_NV(F->saved_pos_3453);
ret_:

  return;
}

static void f_prelude_1382(struct f_greenc_1fr *up_) {
  struct f_prelude_1382fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_lex_line_288(F->up, rt_g_lit("generic task SIGNAL is entry SEND; entry WAIT; end SIGNAL;", 58));
f_lex_line_288(F->up, rt_g_lit("task body SIGNAL is RECEIVED : BOOLEAN := FALSE; begin loop select accept SEND;", 79));
f_lex_line_288(F->up, rt_g_lit("RECEIVED := TRUE; or when RECEIVED => accept WAIT; RECEIVED := FALSE; end select;", 81));
f_lex_line_288(F->up, rt_g_lit("end loop; end SIGNAL;", 21));
f_lex_line_288(F->up, rt_g_lit("generic task SEMAPHORE is entry P; entry V; end SEMAPHORE;", 58));
f_lex_line_288(F->up, rt_g_lit("task body SEMAPHORE is begin loop accept P; accept V; end loop; end SEMAPHORE;", 78));
ret_:

  return;
}

static void f_used_units_1385(struct f_greenc_1fr *up_, P174 u_1383, P140 *r_1384) {
  struct f_used_units_1385fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1383 = u_1383;
F->r_1384 = r_1384;
F->p_3455 = NULL;
F->p_3455 = F->u_1383;
F->main_3456 = NULL;
F->changed_3457 = INT_MIN;
F->changed_3457 = 1;
while ((F->p_3455 != NULL)) {
if ((G_NV(({ rt_gstr ix3459 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)); ix3459.p[rt_index(((rt_int)1LL), ix3459.lo, ix3459.hi) - ix3459.lo]; })) != 33)) {
F->main_3456 = F->p_3455;
}
F->p_3455 = (*(P174)rt_nil_check(F->p_3455)).next_;
}
L_end_3458: ;
(*F->r_1384) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(44), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3456)).name_))), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->main_3456)).formal_))));
F->p_3455 = F->u_1383;
while ((F->p_3455 != NULL)) {
if ((G_NV(({ rt_gstr ix3461 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)); ix3461.p[rt_index(((rt_int)1LL), ix3461.lo, ix3461.hi) - ix3461.lo]; })) == 33)) {
(*F->r_1384) = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*F->r_1384))), ({ rt_gstr sl3465 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at3464 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)); at3464.hi >= at3464.lo ? at3464.hi - at3464.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl3465.lo, sl3465.hi); rt_index(h_, sl3465.lo, sl3465.hi); } sl3465.p += l_ - sl3465.lo; sl3465.lo = l_; sl3465.hi = h_; sl3465; })));
}
F->p_3455 = (*(P174)rt_nil_check(F->p_3455)).next_;
}
L_end_3460: ;
while (G_NV(F->changed_3457)) {
F->changed_3457 = 0;
F->p_3455 = F->u_1383;
while ((F->p_3455 != NULL)) {
if (((G_NV(({ rt_gstr ix3468 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)); ix3468.p[rt_index(((rt_int)1LL), ix3468.lo, ix3468.hi) - ix3468.lo]; })) != 33) && f_listed_431(F->up, (*F->r_1384), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).name_))))) {
f_add_names_1389(F->up, &(*F->r_1384), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3455)).formal_)), &F->changed_3457);
 (void)rt_range(F->changed_3457, 0, 1);
}
F->p_3455 = (*(P174)rt_nil_check(F->p_3455)).next_;
}
L_end_3467: ;
}
L_end_3466: ;
ret_:

  return;
}

static void f_add_names_1389(struct f_greenc_1fr *up_, P140 *r_1386, rt_gstr list_1387, int *changed_1388) {
  struct f_add_names_1389fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1386 = r_1386;
F->list_1387 = cp_rt_gstr(list_1387);
F->changed_1388 = changed_1388;
F->i_3469 = INT64_MIN;
F->i_3469 = ({ rt_gstr at3470 = F->list_1387; at3470.lo; });
F->j_3471 = INT64_MIN;
F->j_3471 = ({ rt_gstr at3472 = F->list_1387; at3472.lo; });
while ((G_NV(F->i_3469) < ({ rt_gstr at3474 = F->list_1387; at3474.hi; }))) {
F->j_3471 = rt_add(G_NV(F->i_3469), ((rt_int)1LL));
while (((G_NV(F->j_3471) <= ({ rt_gstr at3476 = F->list_1387; at3476.hi; })) && (G_NV(({ rt_gstr ix3477 = F->list_1387; ix3477.p[rt_index(G_NV(F->j_3471), ix3477.lo, ix3477.hi) - ix3477.lo]; })) != 44))) {
F->j_3471 = rt_add(G_NV(F->j_3471), ((rt_int)1LL));
}
L_end_3475: ;
if ((G_NV(F->j_3471) > rt_add(G_NV(F->i_3469), ((rt_int)1LL)))) {
if ((!f_listed_431(F->up, (*F->r_1386), ({ rt_gstr sl3479 = F->list_1387; rt_int l_ = rt_add(G_NV(F->i_3469), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3471), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3479.lo, sl3479.hi); rt_index(h_, sl3479.lo, sl3479.hi); } sl3479.p += l_ - sl3479.lo; sl3479.lo = l_; sl3479.hi = h_; sl3479; })))) {
(*F->r_1386) = f_mk_239(F->up, cat_rt_gstr(cat_rt_gstr((*(P140)rt_nil_check((*F->r_1386))), ({ rt_gstr sl3481 = F->list_1387; rt_int l_ = rt_add(G_NV(F->i_3469), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3471), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3481.lo, sl3481.hi); rt_index(h_, sl3481.lo, sl3481.hi); } sl3481.p += l_ - sl3481.lo; sl3481.lo = l_; sl3481.hi = h_; sl3481; })), one_rt_gstr(44)));
(*F->changed_1388) = 1;
}
}
F->i_3469 = G_NV(F->j_3471);
}
L_end_3473: ;
ret_:

  return;
}

static void f_translate_1391(struct f_greenc_1fr *up_, P174 u_1390) {
  struct f_translate_1391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1390 = u_1390;
F->p_3482 = NULL;
F->p_3482 = F->up->prelude_units_223;
F->used_3483 = NULL;
F->y_3484 = NULL;
while ((F->p_3482 != NULL)) {
f_decl_element_671(F->up, F->p_3482);
F->p_3482 = (*(P174)rt_nil_check(F->p_3482)).next_;
}
L_end_3485: ;
f_used_units_1385(F->up, F->u_1390, &F->used_3483);
F->p_3482 = F->u_1390;
f_open_scope_479(F->up);
while ((F->p_3482 != NULL)) {
F->up->barriers_200 = NULL;
F->up->cur_comp_unit_209 = (*(P174)rt_nil_check(F->p_3482)).name_;
F->y_3484 = f_lookup_435(F->up, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).name_)));
if ((((((G_NV((*(P174)rt_nil_check(F->p_3482)).kind_) == ((rt_int)49LL)) || (G_NV((*(P174)rt_nil_check(F->p_3482)).kind_) == ((rt_int)51LL))) || (G_NV((*(P174)rt_nil_check(F->p_3482)).kind_) == ((rt_int)44LL))) || (G_NV((*(P174)rt_nil_check(F->p_3482)).kind_) == ((rt_int)45LL))) && (F->y_3484 != NULL))) {
if ((((*(P117)rt_nil_check(F->y_3484)).decl_ != NULL) && ((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3484)).decl_)).formal_ != NULL))) {
(*(P174)rt_nil_check(F->p_3482)).formal_ = f_mk_239(F->up, cat_rt_gstr((*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).formal_)), (*(P140)rt_nil_check((*(P174)rt_nil_check((*(P117)rt_nil_check(F->y_3484)).decl_)).formal_))));
}
}
f_push_barrier_692(F->up, F->p_3482, ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix3487 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).formal_)); ix3487.p[rt_index(((rt_int)1LL), ix3487.lo, ix3487.hi) - ix3487.lo]; })) == 33) || (G_NV(({ rt_gstr ix3488 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).formal_)); ix3488.p[rt_index(((rt_int)1LL), ix3488.lo, ix3488.hi) - ix3488.lo]; })) == 35))) {
} else if (f_last_unit_1393(F->up, F->p_3482)) {
if (((G_NV((*(P174)rt_nil_check(F->p_3482)).kind_) != ((rt_int)44LL)) || ((*(P174)rt_nil_check(F->p_3482)).a_ != NULL))) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->p_3482)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_667(F->up, F->p_3482, &F->y_3484);
f_define_478(F->up, F->y_3484, G_NV((*(P174)rt_nil_check(F->p_3482)).line_));
f_subprogram_body_729(F->up, F->p_3482, F->y_3484);
F->up->main_name_233 = (*(P117)rt_nil_check(F->y_3484)).cname_;
} else if (f_listed_431(F->up, F->used_3483, (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).name_)))) {
f_decl_element_671(F->up, F->p_3482);
} else {
F->up->code_136 = f_new_buffer_261(F->up);
f_decl_element_671(F->up, F->p_3482);
F->up->code_136 = F->up->out_init_134;
}
F->p_3482 = (*(P174)rt_nil_check(F->p_3482)).next_;
}
L_end_3486: ;
F->p_3482 = F->u_1390;
while ((F->p_3482 != NULL)) {
if ((G_NV(({ rt_gstr ix3490 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).formal_)); ix3490.p[rt_index(((rt_int)1LL), ix3490.lo, ix3490.hi) - ix3490.lo]; })) == 33)) {
f_fail_260(F->up, G_NV((*(P174)rt_nil_check(F->p_3482)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("subunit ", 8), (*(P140)rt_nil_check((*(P174)rt_nil_check(F->p_3482)).name_))), rt_g_lit(" has no body stub in an enclosing unit (RM79 10.2)", 50)));
}
F->p_3482 = (*(P174)rt_nil_check(F->p_3482)).next_;
}
L_end_3489: ;
ret_:

  return;
}

static int f_last_unit_1393(struct f_greenc_1fr *up_, P174 p_1392) {
  struct f_last_unit_1393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1392 = p_1392;
F->q_3491 = NULL;
F->q_3491 = (*(P174)rt_nil_check(F->p_1392)).next_;
while ((F->q_3491 != NULL)) {
if ((G_NV(({ rt_gstr ix3493 = (*(P140)rt_nil_check((*(P174)rt_nil_check(F->q_3491)).formal_)); ix3493.p[rt_index(((rt_int)1LL), ix3493.lo, ix3493.hi) - ix3493.lo]; })) != 33)) {
F->result_ = 0;
goto ret_;
}
F->q_3491 = (*(P174)rt_nil_check(F->q_3491)).next_;
}
L_end_3492: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_print_program_1394(struct f_greenc_1fr *up_) {
  struct f_print_program_1394fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_646(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_257(F->up)), rt_g_lit("paleo.h", 7)), f_q_257(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_268(F->up, F->up->out_types_128);
f_print_buffer_268(F->up, F->up->out_frames_129);
f_print_buffer_268(F->up, F->up->out_helpers_130);
f_print_buffer_268(F->up, F->up->out_protos_131);
f_print_buffer_268(F->up, F->up->out_globals_132);
f_print_buffer_268(F->up, F->up->out_funcs_133);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_g_set_memory(", 18), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_236)))), rt_g_lit(");", 2))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_268(F->up, F->up->out_excs_135);
f_print_buffer_268(F->up, F->up->out_init_134);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P140)rt_nil_check(F->up->main_name_233))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_268(F->up, F->up->out_awaits_220);
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
F->cur_body_217 = NULL;
F->saw_lang_218 = NULL;
F->defer_entry_structs_219 = INT_MIN;
F->defer_entry_structs_219 = 0;
F->out_awaits_220 = NULL;
F->no_cons_221 = NULL;
F->units_222 = NULL;
F->prelude_units_223 = NULL;
F->pkg_stack_224 = NULL;
F->cur_pkg_225 = NULL;
F->prefix_hint_226 = NULL;
F->call_want_227 = NULL;
F->pure_sym_228 = NULL;
F->pure_depth_229 = INT64_MIN;
F->pure_depth_229 = ((rt_int)0LL);
F->vrp_ok_230 = INT_MIN;
F->vrp_ok_230 = 0;
F->in_lv_path_231 = INT_MIN;
F->in_lv_path_231 = 0;
F->last_deref_232 = INT_MIN;
F->last_deref_232 = 0;
F->main_name_233 = NULL;
F->conf_system_234 = NULL;
F->conf_storage_unit_235 = INT64_MIN;
F->conf_storage_unit_235 = ((rt_int)8LL);
F->conf_memory_size_236 = INT64_MIN;
F->conf_memory_size_236 = ((rt_int)1048576LL);
F->conf_optimize_237 = NULL;
F->env_names_197 = f_mk_239(F, rt_g_lit("", 0));
F->out_types_128 = f_new_buffer_261(F);
F->out_frames_129 = f_new_buffer_261(F);
F->out_helpers_130 = f_new_buffer_261(F);
F->out_protos_131 = f_new_buffer_261(F);
F->out_globals_132 = f_new_buffer_261(F);
F->out_funcs_133 = f_new_buffer_261(F);
F->out_init_134 = f_new_buffer_261(F);
F->out_excs_135 = f_new_buffer_261(F);
F->code_136 = F->out_init_134;
F->no_cons_221 = f_new_cons_486(F);
F->ty_int_156 = f_new_typ_485(F, ((rt_int)1LL));
F->ty_bool_157 = f_new_typ_485(F, ((rt_int)2LL));
F->ty_float_158 = f_new_typ_485(F, ((rt_int)3LL));
F->ty_char_159 = f_new_typ_485(F, ((rt_int)11LL));
F->ty_string_160 = f_new_typ_485(F, ((rt_int)6LL));
(*(P122)rt_nil_check(F->ty_string_160)).name_ = f_mk_239(F, rt_g_lit("STRING", 6));
(*(P122)rt_nil_check(F->ty_string_160)).cname_ = f_mk_239(F, rt_g_lit("rt_gstr", 7));
(*(P122)rt_nil_check(F->ty_string_160)).dims_ = ((rt_int)1LL);
(*(P122)rt_nil_check(F->ty_string_160)).elem_ = F->ty_char_159;
(*(P122)rt_nil_check(F->ty_string_160)).tcons_ = f_new_cons_486(F);
(*(P178)rt_nil_check((*(P122)rt_nil_check(F->ty_string_160)).tcons_)).lo_ = f_mk_239(F, rt_g_lit("1", 1));
F->ty_void_161 = f_new_typ_485(F, ((rt_int)9LL));
F->ty_nil_162 = f_new_typ_485(F, ((rt_int)10LL));
F->ty_act_164 = f_new_typ_485(F, ((rt_int)13LL));
F->ty_tdecl_165 = f_new_typ_485(F, ((rt_int)14LL));
F->ty_entry_166 = f_new_typ_485(F, ((rt_int)15LL));
(*(P122)rt_nil_check(F->ty_int_156)).name_ = f_mk_239(F, rt_g_lit("INTEGER", 7));
(*(P122)rt_nil_check(F->ty_string_160)).idx_ = F->ty_int_156;
(*(P122)rt_nil_check(F->ty_string_160)).next_ = F->all_types_124;
F->all_types_124 = F->ty_string_160;
(*(P122)rt_nil_check(F->ty_float_158)).name_ = f_mk_239(F, rt_g_lit("FLOAT", 5));
(*(P122)rt_nil_check(F->ty_float_158)).ndigits_ = ((rt_int)15LL);
F->ty_short_167 = f_new_typ_485(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_short_167)).name_ = f_mk_239(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_168 = f_new_typ_485(F, ((rt_int)1LL));
(*(P122)rt_nil_check(F->ty_long_168)).name_ = f_mk_239(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_169 = f_new_typ_485(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_sfloat_169)).name_ = f_mk_239(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P122)rt_nil_check(F->ty_sfloat_169)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_170 = f_new_typ_485(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_lfloat_170)).name_ = f_mk_239(F, rt_g_lit("LONG_FLOAT", 10));
(*(P122)rt_nil_check(F->ty_lfloat_170)).ndigits_ = ((rt_int)15LL);
F->ty_time_171 = f_new_typ_485(F, ((rt_int)3LL));
(*(P122)rt_nil_check(F->ty_time_171)).name_ = f_mk_239(F, rt_g_lit("TIME", 4));
(*(P122)rt_nil_check(F->ty_time_171)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_172 = f_new_typ_485(F, ((rt_int)16LL));
(*(P122)rt_nil_check(F->ty_ufixed_172)).name_ = f_mk_239(F, rt_g_lit("universal fixed", 15));
F->out_awaits_220 = f_new_buffer_261(F);
f_predefine_1353(F);
f_prelude_1382(F);
f_add_token_277(F, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
f_compilation_426(F, &F->prelude_units_223);
F->ntoks_113 = ((rt_int)0LL);
F->tpos_114 = ((rt_int)1LL);
F->src_line_115 = ((rt_int)0LL);
f_read_source_310(F);
F->compiling_source_207 = 1;
f_compilation_426(F, &F->units_222);
F->compiling_source_207 = 0;
F->loaded_208 = f_mk_239(F, rt_g_lit(",", 1));
f_library_units_1375(F);
if ((F->units_222 == NULL)) {
f_fail_260(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1391(F, F->units_222);
f_store_units_1365(F);
f_print_program_1394(F);
ret_:

  return;
}

static void as_A2750(A2750 *d, A2750 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2750 cp_A2750(A2750 s) {
  A2750 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2750(A2750 a, A2750 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2750 cat_A2750(A2750 a, A2750 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2750 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2750 one_A2750(rt_int e) {
  A2750 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2747(A2747 *d, A2747 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2747 cp_A2747(A2747 s) {
  A2747 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2747(A2747 a, A2747 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2747 cat_A2747(A2747 a, A2747 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2747 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2747 one_A2747(rt_int e) {
  A2747 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2742(A2742 *d, A2742 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2742 cp_A2742(A2742 s) {
  A2742 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2742(A2742 a, A2742 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2742 and_A2742(A2742 a, A2742 b) { A2742 r = cp_A2742(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2742 or_A2742(A2742 a, A2742 b) { A2742 r = cp_A2742(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2742 xor_A2742(A2742 a, A2742 b) { A2742 r = cp_A2742(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2742 not_A2742(A2742 a) { A2742 r = cp_A2742(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2742 cat_A2742(A2742 a, A2742 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2742 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2742 one_A2742(int e) {
  A2742 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2419(A2419 *d, A2419 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2419 cp_A2419(A2419 s) {
  A2419 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2419(A2419 a, A2419 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2419 cat_A2419(A2419 a, A2419 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2419 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2419 one_A2419(rt_int e) {
  A2419 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R2088(R2088 *d, R2088 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R2088 cp_R2088(R2088 s) {
  R2088 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2088(R2088 a, R2088 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R1967(R1967 *d, R1967 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R1967 cp_R1967(R1967 s) {
  R1967 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R1967(R1967 a, R1967 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R1963(R1963 *d, R1963 s) {
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
static R1963 cp_R1963(R1963 s) {
  R1963 d = s;
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
static int eq_R1963(R1963 a, R1963 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R1945(R1945 *d, R1945 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R1945 cp_R1945(R1945 s) {
  R1945 d = s;
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
static int eq_R1945(R1945 a, R1945 b) {
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
  rt_g_set_memory(1048576);
  ex_compile_error_108 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
