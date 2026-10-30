#include "paleo.h"
#include <math.h>
typedef struct R112 R112;
typedef struct R112 *P111;
typedef struct A110 A110;
struct A110 { rt_int lo, hi, lo2, hi2; P111 *p; };
typedef struct R119 R119;
typedef struct R119 *P118;
typedef struct A117 A117;
struct A117 { rt_int lo, hi, lo2, hi2; P118 *p; };
typedef struct R124 R124;
typedef struct R124 *P123;
typedef struct R128 R128;
typedef struct R128 *P127;
typedef rt_gstr *P141;
typedef struct R145 R145;
typedef struct R145 *P144;
typedef struct R148 R148;
typedef struct R148 *P147;
typedef struct R153 R153;
typedef struct R153 *P152;
typedef struct R176 R176;
typedef struct R176 *P175;
typedef struct R180 R180;
typedef struct R180 *P179;
typedef struct A184 A184;
struct A184 { rt_int lo, hi, lo2, hi2; P141 *p; };
typedef struct A186 A186;
struct A186 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct R191 R191;
typedef struct R191 *P190;
typedef struct R200 R200;
typedef struct R200 *P199;
typedef struct A203 A203;
struct A203 { rt_int lo, hi, lo2, hi2; P141 *p; };
typedef struct R206 R206;
typedef struct R206 *P205;
typedef struct R219 R219;
typedef struct R219 *P218;
typedef struct R222 R222;
typedef struct R222 *P221;
struct R128 { int dummy_; P152 head_; P152 tail_; };
struct R153 { int dummy_; P141 s_; P152 next_; };
struct R112 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; P141 s_; };
struct R176 { int dummy_; rt_int kind_; rt_int line_; rt_int ival_; rt_int flag_; P141 name_; P141 tag_; P175 a_; P175 b_; P175 c_; P175 d_; P175 e_; P175 next_; P141 formal_; };
struct R206 { int dummy_; P175 u_; rt_int first_; rt_int last_; P141 env_; P205 next_; };
typedef struct R2002 R2002;
typedef struct R2002 *P2001;
struct R119 { int dummy_; rt_int kind_; P141 name_; P123 t_; P179 c_; P141 access_path_; P141 cname_; int ro_; rt_int mvalue_; int hasmv_; P175 decl_; P2001 params_; P123 result_; rt_int depth_; rt_int level_; int byref_; int vrp_; int hidden_; int from_use_; P118 members_; P118 mnext_; P118 chain_; P118 stack_; rt_int flags_; };
typedef struct R2020 R2020;
typedef struct R2020 *P2019;
struct R124 { int dummy_; rt_int kind_; P141 name_; P175 lits_; P123 elem_; P123 idx_; P179 elemcons_; P179 tcons_; P2019 fields_; P123 target_; P175 decl_; P141 cname_; int forward_; int defined_; int priv_; P123 next_; P123 idx2_; P141 littab_; P123 parent_; rt_int ndigits_; P141 fdelta_; P141 fsmall_; rt_int dims_; int is_restricted_; P123 view_of_; };
typedef struct R2024 R2024;
typedef struct R2024 *P2023;
struct R180 { int dummy_; P141 lo_; P141 hi_; P141 slen_; rt_int mlo_; rt_int mhi_; int hasm_; P141 lo2_; P141 hi2_; P141 acc_; P179 inner_; P2023 dv_; };
struct R2024 { int dummy_; P141 name_; P141 v_; P2023 next_; };
struct R2002 { int dummy_; P141 name_; rt_int mode_; P123 t_; P179 c_; P141 cfield_; P175 dflt_; P2001 next_; P118 dsym_; };
typedef struct R2116 R2116;
typedef struct R2116 *P2115;
typedef struct R2150 R2150;
typedef struct R2150 *P2149;
struct R2150 { int dummy_; P141 disc_; P175 arm_; P175 variant_; P2149 next_; };
struct R2020 { int dummy_; P141 name_; P123 t_; P179 c_; P2019 next_; P175 dflt_; int is_const_; int is_discr_; P118 dsym_; P2149 guard_; P141 cond_; int dyn_; };
struct R200 { int dummy_; rt_int limit_; rt_int keep_; P141 allowed_; P199 next_; };
struct R191 { int dummy_; P141 name_; P141 cname_; P141 path_; rt_int frames_; rt_int line_; P190 next_; };
typedef struct A2486 A2486;
struct A2486 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R145 { int dummy_; P141 match_; P141 label_; rt_int depth_; int is_loop_; P144 next_; };
typedef struct A2815 A2815;
struct A2815 { rt_int lo, hi, lo2, hi2; int *p; };
typedef struct A2820 A2820;
struct A2820 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A2823 A2823;
struct A2823 { rt_int lo, hi, lo2, hi2; rt_int *p; };
struct R148 { int dummy_; P175 body_node_; P118 visible_; P147 next_; };
struct R219 { int dummy_; P123 t_; int packed_; rt_int bits_; P141 codes_; rt_int max_code_; int has_layout_; P2115 layout_; rt_int layout_bits_; P141 coll_; P218 next_; };
struct R222 { int dummy_; P118 y_; P141 name_; rt_int depth_; P175 e_; P221 next_; };
typedef struct A3465 A3465;
struct A3465 { rt_int lo, hi, lo2, hi2; rt_int *p; };
typedef struct A3468 A3468;
struct A3468 { rt_int lo, hi, lo2, hi2; int *p; };
struct R2116 { int dummy_; P141 name_; rt_int unit_; rt_int first_bit_; rt_int last_bit_; P2115 next_; };
struct f_mk_246fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_245;
 P141 result_;
 rt_gstr r_1452;
};
struct f_new_name_249fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_247;
 P141 *res_248;
};
struct f_is_letter_251fr { int dummy;
 struct f_greenc_1fr *up;
 int c_250;
 int result_;
};
struct f_is_digit_253fr { int dummy;
 struct f_greenc_1fr *up;
 int c_252;
 int result_;
};
struct f_upper_255fr { int dummy;
 struct f_greenc_1fr *up;
 int c_254;
 int result_;
};
struct f_lower_s_257fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_256;
 rt_gstr result_;
 rt_gstr r_1456;
 rt_int i_1459;
};
struct f_upper_s_259fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_258;
 rt_gstr result_;
 rt_gstr r_1467;
 rt_int i_1470;
};
struct f_is_operator_261fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_260;
 int result_;
};
struct f_c_field_263fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_262;
 rt_gstr result_;
};
struct f_q_264fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr result_;
};
struct f_fail_267fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int line_265;
 rt_gstr msg_266;
};
struct f_new_buffer_268fr { int dummy;
 struct f_greenc_1fr *up;
 P127 result_;
};
struct f_put_to_271fr { int dummy;
 struct f_greenc_1fr *up;
 P127 b_269;
 rt_gstr s_270;
 P152 l_1479;
};
struct f_emit_273fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_272;
};
struct f_print_buffer_275fr { int dummy;
 struct f_greenc_1fr *up;
 P127 b_274;
 P152 l_1482;
};
struct f_splice_278fr { int dummy;
 struct f_greenc_1fr *up;
 P127 a_276;
 P127 b_277;
};
struct f_is_reserved_280fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_279;
 int result_;
};
struct f_add_token_284fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_281;
 rt_gstr s_282;
 rt_int ival_283;
};
struct f_digit_value_286fr { int dummy;
 struct f_greenc_1fr *up;
 int c_285;
 rt_int result_;
};
struct f_digit_in_289fr { int dummy;
 struct f_greenc_1fr *up;
 int c_287;
 rt_int base_288;
 rt_int result_;
 rt_int d_1490;
};
struct f_accumulate_293fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int *v_290;
 rt_int base_291;
 rt_int d_292;
};
struct f_lex_line_295fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_294;
 rt_int i_1491;
 rt_int j_1492;
 rt_int n_1493;
 int c_1495;
 int quote_1496;
 rt_int v_1497;
 rt_int d_1498;
 rt_gstr buf_1499;
 rt_int bl_1501;
 rt_int base_1543;
 rt_gstr two_1587;
};
struct f_exponent_ahead_298fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_296;
 rt_int j_297;
 int result_;
};
struct f_exponent_303fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr line_299;
 rt_int *j_300;
 rt_gstr *buf_301;
 rt_int *bl_302;
};
struct f_include_open_306fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_304;
 rt_int *length_305;
};
struct f_include_char_309fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int i_307;
 int *c_308;
};
struct f_check_include_310fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1634;
};
struct f_include_text_312fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_311;
 rt_gstr t_1645;
 rt_int saved_line_1647;
 rt_int from_1648;
 rt_int k_1650;
 rt_int k_1657;
};
struct f_include_line_316fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr t_313;
 rt_int from_314;
 rt_int to_315;
 rt_gstr l_1662;
 rt_int k_1665;
};
struct f_read_source_317fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr buf_1673;
 rt_int bl_1675;
 int c_1676;
};
struct f_nn_320fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_318;
 rt_int line_319;
 P175 result_;
};
struct f_append_324fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *head_321;
 P175 *tail_322;
 P175 x_323;
};
struct f_list_len_326fr { int dummy;
 struct f_greenc_1fr *up;
 P175 l_325;
 rt_int result_;
 rt_int n_1692;
 P175 p_1693;
};
struct f_cur_line_327fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int result_;
};
struct f_at_kw_329fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_328;
 int result_;
};
struct f_at_op_331fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_330;
 int result_;
};
struct f_at_kind_333fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_332;
 int result_;
};
struct f_kind_at_335fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_334;
 rt_int result_;
};
struct f_text_at_337fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int k_336;
 rt_gstr result_;
};
struct f_perror_339fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr msg_338;
};
struct f_skip_340fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_expect_kw_342fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_341;
};
struct f_expect_op_344fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr w_343;
};
struct f_expect_id_346fr { int dummy;
 struct f_greenc_1fr *up;
 P141 *res_345;
};
struct f_name_node_348fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_347;
 P175 x_1708;
};
struct f_id_list_350fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_349;
 P175 head_1709;
 P175 tail_1710;
 P175 x_1711;
};
struct f_binop_355fr { int dummy;
 struct f_greenc_1fr *up;
 P141 op_351;
 P175 l_352;
 P175 r_353;
 rt_int line_354;
 P175 result_;
 P175 x_1713;
};
struct f_expr_357fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_356;
 P175 l_1714;
 P175 r_1715;
 P141 op_1716;
 P141 first_op_1717;
 rt_int line_1718;
 int short_1719;
 int first_short_1720;
};
struct f_is_rel_359fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_358;
 int result_;
};
struct f_relation_361fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_360;
 P175 l_1723;
 P175 r_1724;
 P175 lo_1725;
 P175 hi_1726;
 P175 t_1727;
 P141 op_1728;
 rt_int line_1729;
 int neg_1730;
};
struct f_path_of_363fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_362;
 rt_gstr result_;
};
struct f_simple_expr_365fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_364;
 P175 l_1734;
 P175 r_1735;
 P141 op_1736;
 rt_int line_1737;
};
struct f_term_367fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_366;
 P175 l_1741;
 P175 r_1742;
 P141 op_1743;
 rt_int line_1744;
};
struct f_factor_369fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_368;
 P175 l_1747;
 P175 r_1748;
 P141 op_1749;
 rt_int line_1750;
};
struct f_primary_371fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_370;
 P175 x_1752;
 rt_int line_1753;
};
struct f_agg_or_paren_373fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_372;
 rt_int line_1758;
 P175 items_1759;
 P175 itail_1760;
 P175 it_1761;
 P175 first_1762;
 P175 keys_1763;
 P175 ktail_1764;
 P175 lab_1765;
 P175 x_1766;
 int more_1767;
};
struct f_choice_token_375fr { int dummy;
 struct f_greenc_1fr *up;
 P111 t_374;
 int result_;
};
struct f_aggregate_ahead_376fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
 rt_int d_1770;
 rt_int k_1771;
 P111 t_1774;
};
struct f_name_p_378fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_377;
 P175 p_1776;
 P175 x_1777;
 P175 args_1778;
 P175 atail_1779;
 P175 lo_1780;
 P175 r_1781;
 rt_int line_1782;
 int more_1783;
 P141 formal_1787;
 rt_int mark_1788;
};
struct f_component_list_380fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_379;
 P175 comps_1795;
 P175 ctail_1796;
 P175 names_1797;
 P175 st_1798;
 P175 def_1799;
 P175 cm_1800;
 P175 v_1801;
 P175 arm_1802;
 P175 atail_1803;
 P175 labs_1804;
 P175 ltail_1805;
 P175 l_1806;
 int is_c_1807;
};
struct f_discrete_range_p_382fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_381;
 P175 lo_1812;
 P175 r_1813;
 rt_int line_1814;
};
struct f_subtype_ind_384fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_383;
 P141 f_1815;
 P175 x_1816;
 P175 r_1817;
 P175 args_1818;
 P175 atail_1819;
 P175 lo_1820;
 rt_int line_1821;
 int more_1822;
};
struct f_type_spec_386fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_385;
 P175 x_1825;
};
struct f_type_def_388fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_387;
 P175 x_1826;
 P175 lits_1827;
 P175 ltail_1828;
 P175 l_1829;
 P175 idx_1830;
 P175 itail_1831;
 P175 r_1832;
 P175 comps_1833;
 P175 ctail_1834;
 P175 names_1835;
 P175 st_1836;
 P175 def_1837;
 P175 cm_1838;
 rt_int line_1839;
 int more_1840;
};
struct f_pragma_p_390fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_389;
 P175 x_1844;
 P175 a_1845;
 P175 head_1846;
 P175 tail_1847;
};
struct f_check_pragma_392fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_391;
 rt_gstr p_1849;
 rt_int n_1850;
 P175 a_1851;
};
struct f_visibility_p_394fr { int dummy;
 struct f_greenc_1fr *up;
 P141 *res_393;
 P175 names_1853;
 P141 v_1854;
};
struct f_unit_p_396fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_395;
 P141 v_1856;
 P175 x_1857;
};
struct f_rep_spec_398fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_397;
 P175 x_1859;
 P175 p_1860;
 P175 tail_1861;
};
struct f_decl_part_400fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_399;
 P175 head_1863;
 P175 tail_1864;
 P175 x_1865;
 P175 names_1866;
};
struct f_object_decl_402fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_401;
 P175 head_1868;
 P175 tail_1869;
 P175 names_1870;
 P175 st_1871;
 P175 init_1872;
 P175 x_1873;
 rt_int line_1874;
 int is_const_1875;
};
struct f_type_decl_404fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_403;
 P175 x_1878;
 rt_int line_1879;
};
struct f_formal_part_406fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_405;
 P175 head_1880;
 P175 tail_1881;
 P175 names_1882;
 P175 st_1883;
 P175 def_1884;
 P175 p_1885;
 rt_int mode_1886;
 int more_1887;
};
struct f_designator_408fr { int dummy;
 struct f_greenc_1fr *up;
 P141 *res_407;
};
struct f_subprogram_410fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_409;
 P175 x_1894;
 rt_int line_1895;
 int is_proc_1896;
};
struct f_body_part_412fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_411;
};
struct f_parse_handlers_414fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_413;
 P175 head_1898;
 P175 tail_1899;
 P175 h_1900;
 P175 names_1901;
 P175 ntail_1902;
 P175 n_1903;
};
struct f_package_p_416fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_415;
 P175 x_1907;
 rt_int line_1908;
};
struct f_at_statements_end_417fr { int dummy;
 struct f_greenc_1fr *up;
 int result_;
};
struct f_statements_419fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_418;
 P175 head_1909;
 P175 tail_1910;
 P175 x_1911;
};
struct f_statement_421fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_420;
 P175 l_1913;
 P175 x_1914;
 P141 label_1915;
};
struct f_labelled_statement_424fr { int dummy;
 struct f_greenc_1fr *up;
 P141 label_422;
 P175 *res_423;
 P175 x_1916;
 P175 t_1917;
 rt_int line_1918;
};
struct f_task_statement_426fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_425;
};
struct f_if_stmt_428fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_427;
 P175 x_1922;
 P175 arm_1923;
 P175 head_1924;
 P175 tail_1925;
 int go_1926;
};
struct f_case_stmt_430fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_429;
 P175 x_1928;
 P175 arm_1929;
 P175 head_1930;
 P175 tail_1931;
 P175 labs_1932;
 P175 ltail_1933;
 P175 l_1934;
 int others_arm_1935;
};
struct f_loop_stmt_432fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_431;
 P175 x_1938;
 P175 r_1939;
 rt_int line_1940;
};
struct f_compilation_434fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_433;
 rt_int first_1941;
 P175 head_1942;
 P175 tail_1943;
 P175 x_1944;
};
struct f_hash_436fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_435;
 rt_int result_;
 rt_int h_1951;
 rt_int i_1954;
};
struct f_listed_439fr { int dummy;
 struct f_greenc_1fr *up;
 P141 list_437;
 rt_gstr name_438;
 int result_;
 rt_gstr l_1959;
 rt_int n_1960;
 rt_int i_1965;
};
struct f_visible_sym_441fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_440;
 int result_;
 P199 b_1972;
};
struct f_lookup_443fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_442;
 P118 result_;
 P118 y_1974;
};
struct f_same_task_446fr { int dummy;
 struct f_greenc_1fr *up;
 P118 a_444;
 P118 b_445;
 int result_;
};
struct f_lookup_entry_449fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_447;
 P118 owner_448;
 P118 result_;
 P118 y_1977;
};
struct f_lookup_at_452fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_450;
 rt_int d_451;
 P118 result_;
 P118 y_1980;
};
struct f_enclosing_depth_454fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_453;
 rt_int result_;
 rt_int i_1984;
};
struct f_push_unit_456fr { int dummy;
 struct f_greenc_1fr *up;
 P141 name_455;
};
struct f_lookup_decl_458fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_457;
 P118 result_;
 P118 y_1992;
};
struct f_overloadable_460fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_459;
 int result_;
};
struct f_same_463fr { int dummy;
 struct f_greenc_1fr *up;
 P123 a_461;
 P123 b_462;
 int result_;
};
struct f_base_view_465fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_464;
 P123 result_;
 P123 r_1995;
};
struct f_root_467fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_466;
 P123 result_;
 P123 r_1997;
};
struct f_derived_from_470fr { int dummy;
 struct f_greenc_1fr *up;
 P123 a_468;
 P123 b_469;
 int result_;
 P123 r_1999;
};
struct f_is_numeric_472fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_471;
 int result_;
};
struct f_is_discrete_474fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_473;
 int result_;
};
struct f_same_types_477fr { int dummy;
 struct f_greenc_1fr *up;
 P2001 a_475;
 P2001 b_476;
 int result_;
 P2001 x_2003;
 P2001 y_2004;
};
struct f_same_signature_480fr { int dummy;
 struct f_greenc_1fr *up;
 P2001 a_478;
 P2001 b_479;
 int result_;
 P2001 x_2006;
 P2001 y_2007;
};
struct f_distinct_overload_483fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_481;
 P118 z_482;
 int result_;
};
struct f_define_486fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_484;
 rt_int line_485;
 rt_int h_2009;
 P118 z_2010;
};
struct f_open_scope_487fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_close_scope_488fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_new_sym_491fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_489;
 P141 name_490;
 P118 result_;
};
struct f_new_typ_493fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_492;
 P123 result_;
};
struct f_new_cons_494fr { int dummy;
 struct f_greenc_1fr *up;
 P179 result_;
};
struct f_bounded_496fr { int dummy;
 struct f_greenc_1fr *up;
 P179 c_495;
 int result_;
};
struct f_bounded_hi_498fr { int dummy;
 struct f_greenc_1fr *up;
 P179 c_497;
 int result_;
};
struct f_static_bounds_500fr { int dummy;
 struct f_greenc_1fr *up;
 P179 c_499;
 int result_;
};
struct f_discriminated_502fr { int dummy;
 struct f_greenc_1fr *up;
 P179 c_501;
 int result_;
};
struct f_kind_name_504fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_503;
 rt_gstr result_;
};
struct f_check_type_508fr { int dummy;
 struct f_greenc_1fr *up;
 P123 got_505;
 P123 want_506;
 rt_int line_507;
};
struct f_field_count_510fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_509;
 rt_int result_;
 rt_int n_2028;
 P2019 f_2029;
};
struct f_ctype_513fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_511;
 P141 *r_512;
 P141 s_2031;
};
struct f_field_decls_516fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_514;
 P141 *r_515;
 P2019 f_2033;
 P141 s_2034;
 P141 ct_2035;
};
struct f_declare_ctype_518fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_517;
 P141 ct_2037;
 P141 s_2038;
 P123 target_2039;
};
struct f_lit_index_521fr { int dummy;
 struct f_greenc_1fr *up;
 P175 lits_519;
 rt_gstr name_520;
 rt_int result_;
 rt_int i_2040;
 P175 l_2041;
};
struct f_manifest_525fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_522;
 rt_int *v_523;
 int *ok_524;
 rt_int a_2043;
 rt_int b_2044;
 int ok2_2045;
 P118 y_2046;
};
struct f_resolve_529fr { int dummy;
 struct f_greenc_1fr *up;
 P175 st_526;
 P123 *t_527;
 P179 *c_528;
 P118 y_2047;
 P123 dummy_2048;
 P141 code_2049;
 int ok_2050;
 P175 r_2051;
};
struct f_constraint_list_533fr { int dummy;
 struct f_greenc_1fr *up;
 P175 st_530;
 P123 t_531;
 P179 c_532;
 P175 r_2052;
 P123 arrt_2053;
 P179 cc_2054;
 P123 it_2055;
};
struct f_discriminant_constraint_537fr { int dummy;
 struct f_greenc_1fr *up;
 P175 st_534;
 P123 t_535;
 P179 c_536;
 P175 a_2057;
 P2019 f_2058;
 P123 vt_2059;
 P141 v_2060;
 P2023 d_2061;
 P2023 tail_2062;
};
struct f_discrete_bounds_543fr { int dummy;
 struct f_greenc_1fr *up;
 P175 r_538;
 P123 want_539;
 P123 *t_540;
 P141 *lo_541;
 P141 *hi_542;
 P179 c_2070;
 P118 y_2071;
};
struct f_range_of_547fr { int dummy;
 struct f_greenc_1fr *up;
 P175 r_544;
 P123 t_545;
 P179 c_546;
 P123 dummy_2072;
 int ok_2073;
};
struct f_fresh_typ_551fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int kind_548;
 P141 name_549;
 P123 *t_550;
 P123 ph_2074;
};
struct f_inherit_555fr { int dummy;
 struct f_greenc_1fr *up;
 P123 parent_552;
 P123 t_553;
 rt_int line_554;
 P118 s_2075;
 P118 z_2076;
 P2001 p_2077;
 P2001 q_2078;
 P2001 tail_2079;
 int uses_2080;
 P118 news_2081;
};
struct f_derive_literals_558fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_556;
 rt_int line_557;
 P175 l_2088;
 rt_int n_2089;
 P118 y_2090;
};
struct f_type_definition_563fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_559;
 P141 name_560;
 P123 *t_561;
 P179 *c_562;
 P123 dummy_2092;
 P123 it_2093;
 P179 ic_2094;
 P175 l_2095;
 P175 comp_2096;
 P2019 f_2097;
 P2019 tail_2098;
 int ok_2099;
 rt_int n_2100;
 P118 y_2101;
};
struct f_array_type_570fr { int dummy;
 struct f_greenc_1fr *up;
 P175 idx_564;
 P175 comp_565;
 P141 name_566;
 rt_int line_567;
 P123 *t_568;
 P179 *c_569;
 P175 l_2105;
 P179 rowc_2106;
 P179 ic_2107;
 P123 it_2108;
};
struct f_static_range_574fr { int dummy;
 struct f_greenc_1fr *up;
 P175 l_571;
 P175 h_572;
 P179 c_573;
 int ok_2109;
 int ok2_2110;
};
struct f_component_place_580fr { int dummy;
 struct f_greenc_1fr *up;
 P123 rt_575;
 P2019 f_576;
 rt_gstr a_577;
 rt_gstr ct_578;
 P141 *r_579;
 P141 bits_2113;
 P218 p_2114;
 P2115 pl_2117;
};
struct f_no_value_582fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_581;
 rt_gstr result_;
};
struct f_restricted_here_584fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_583;
 int result_;
};
struct f_elem_ctype_587fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_585;
 P141 *r_586;
};
struct f_first_index_590fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_588;
 P141 *r_589;
};
struct f_is_string_592fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_591;
 int result_;
};
struct f_subst_595fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_593;
 rt_gstr r_594;
 rt_gstr result_;
 rt_int i_2122;
};
struct f_mentions_record_597fr { int dummy;
 struct f_greenc_1fr *up;
 P141 s_596;
 int result_;
 rt_int i_2136;
};
struct f_subst_cons_601fr { int dummy;
 struct f_greenc_1fr *up;
 P179 c_598;
 rt_gstr r_599;
 P179 *res_600;
};
struct f_remove_sym_603fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_602;
 rt_int h_2142;
 P118 p_2143;
};
struct f_record_components_608fr { int dummy;
 struct f_greenc_1fr *up;
 P175 list_604;
 P123 t_605;
 P2149 g_606;
 rt_int line_607;
 P175 comp_2151;
 P2019 f_2152;
 P2019 tail_2153;
 P2019 df_2154;
 P175 prev_2155;
 P123 pt_2156;
 P123 vt_2157;
 P179 pc_2158;
 P118 y_2159;
 P141 acc_2160;
 P141 v_2161;
 P141 x_2162;
 P175 arm_2163;
 P2149 g2_2164;
};
struct f_guard_cond_612fr { int dummy;
 struct f_greenc_1fr *up;
 P2149 g_609;
 P123 t_610;
 P141 *r_611;
 P175 a_2174;
 P175 l_2175;
 P2019 df_2176;
 P141 x_2177;
 P141 d_2178;
 P123 dt_2179;
 P123 vt_2180;
 P141 lo_2181;
 P141 hi_2182;
};
struct f_arm_test_617fr { int dummy;
 struct f_greenc_1fr *up;
 P175 arm_613;
 P141 dname_614;
 rt_gstr d_615;
 P141 *x_616;
 P175 l_2184;
 P118 y_2185;
 P123 dt_2186;
 P123 vt_2187;
 P141 lo_2188;
 P141 hi_2189;
};
struct f_derived_type_622fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_618;
 P141 name_619;
 P123 *t_620;
 P179 *c_621;
 P123 pt_2191;
 P141 ct_2192;
 P123 ph_2193;
};
struct f_real_type_627fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_623;
 P141 name_624;
 P123 *t_625;
 P179 *c_626;
 P123 dt_2194;
 P141 dv_2195;
 rt_int n_2196;
 int ok_2197;
};
struct f_finish_ptr_629fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_628;
 P179 c_2198;
};
struct f_init_storage_633fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_630;
 P123 t_631;
 P179 c_632;
 P179 ec_2199;
 P179 fc_2200;
 P2023 d_2201;
 P141 ct_2202;
 P141 i_2203;
 P141 v_2204;
 P141 x_2205;
 P123 vt_2206;
 P2019 f_2207;
};
struct f_composite_635fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_634;
 int result_;
};
struct f_assign_code_641fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lval_636;
 P123 t_637;
 rt_gstr v_638;
 P179 c_639;
 P141 *r_640;
 P141 ct_2211;
 P141 x_2212;
 P2023 d_2213;
};
struct f_copy_code_645fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_642;
 rt_gstr v_643;
 P141 *r_644;
 P141 ct_2215;
};
struct f_eq_code_650fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_646;
 rt_gstr a_647;
 rt_gstr b_648;
 P141 *r_649;
 P141 ct_2216;
};
struct f_seen_name_653fr { int dummy;
 struct f_greenc_1fr *up;
 P152 l_651;
 rt_gstr s_652;
 int result_;
 P152 p_2217;
};
struct f_emit_helpers_654fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_2219;
 P141 et_2220;
 P152 done_2221;
 P152 l_2222;
};
struct f_helper_bodies_656fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_655;
 P141 c_2226;
 P127 b_2227;
 P141 ct_2228;
 P141 et_2229;
 P141 x_2230;
 P141 y_2231;
 P141 conds_2232;
 P2019 f_2233;
};
struct f_storage_660fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_657;
 P123 t_658;
 P141 *access_code_659;
 P141 ct_2236;
 P141 g_2237;
};
struct f_bind_663fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_661;
 P141 access_code_662;
};
struct f_declare_subprograms_665fr { int dummy;
 struct f_greenc_1fr *up;
 P175 from_664;
 P175 e_2238;
};
struct f_generic_before_668fr { int dummy;
 struct f_greenc_1fr *up;
 P175 from_666;
 P175 e_667;
 int result_;
 P175 p_2240;
};
struct f_declare_one_670fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_669;
 P118 y_2242;
 P118 z_2243;
};
struct f_elaborate_defaults_672fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_671;
 P2001 pm_2247;
 P123 vt_2248;
 P141 v_2249;
 P141 acc_2250;
 P141 x_2251;
 P118 z_2252;
};
struct f_build_subprogram_675fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_673;
 P118 *y_674;
 P175 p_2254;
 P2001 pm_2255;
 P2001 tail_2256;
 P179 rc_2257;
 rt_int k_2258;
};
struct f_decl_elements_677fr { int dummy;
 struct f_greenc_1fr *up;
 P175 decls_676;
 P175 e_2262;
 int declared_2263;
};
struct f_decl_element_679fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_678;
 P199 saved_2265;
};
struct f_decl_element_1_681fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_680;
 P175 pd_2266;
 P118 y_2267;
 P118 z_2268;
 P123 t_2269;
 P123 vt_2270;
 P179 c_2271;
 P141 acc_2272;
 P141 v_2273;
 P141 x_2274;
 int ok_2275;
 P221 pa_2276;
};
struct f_pragma_decl_683fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_682;
};
struct f_resolve_object_type_687fr { int dummy;
 struct f_greenc_1fr *up;
 P175 st_684;
 P123 *t_685;
 P179 *c_686;
};
struct f_find_subunit_690fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_688;
 P175 *r_689;
 P175 u_2278;
 rt_int k_2279;
};
struct f_stub_692fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_691;
 P175 sub_2282;
 P199 saved_2283;
 rt_int k_2284;
 rt_int d_2285;
 P141 first_name_2286;
 P141 list_2287;
 P118 y_2288;
 rt_int i_2290;
};
struct f_rename_subprogram_694fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_693;
 P118 newy_2307;
 P118 y_2308;
 P118 z_2309;
 P118 cand_2310;
 P175 ix_2311;
 P2001 p_2312;
 P2001 q_2313;
 P2001 tail_2314;
};
struct f_rename_module_697fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_695;
 P175 target_696;
 P118 y_2323;
 P118 z_2324;
};
struct f_push_barrier_700fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_698;
 rt_int limit_699;
 P199 b_2325;
 P141 first_name_2326;
 rt_int k_2327;
};
struct f_other_decl_702fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_701;
};
struct f_scan_labels_705fr { int dummy;
 struct f_greenc_1fr *up;
 P175 stmts_703;
 rt_gstr path_704;
 P175 s_2335;
 P175 a_2336;
 P190 l_2337;
 P141 c_2338;
};
struct f_scan_guarded_709fr { int dummy;
 struct f_greenc_1fr *up;
 P175 stmts_706;
 P175 hs_707;
 rt_gstr path_708;
 P175 h_2348;
};
struct f_count_g_711fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_710;
 rt_int result_;
 rt_int n_2350;
 rt_int i_2354;
};
struct f_label_body_714fr { int dummy;
 struct f_greenc_1fr *up;
 P175 stmts_712;
 P175 hs_713;
 P190 l_2359;
 P190 g_2360;
 P141 gp_2361;
 P141 lp_2362;
 rt_int i_2373;
};
struct f_gen_label_717fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_715;
 int goto_it_716;
 P190 l_2379;
};
struct f_is_foreign_719fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_718;
 int result_;
};
struct f_foreign_call_723fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_720;
 P118 y_721;
 P141 *r_722;
 rt_gstr lang_2385;
 rt_gstr n_2386;
 P2001 pm_2387;
 P141 x_2388;
 P141 ct_2389;
 int all_real_2390;
};
struct f_unsafe_bits_729fr { int dummy;
 struct f_greenc_1fr *up;
 P123 s_724;
 P123 t_725;
 rt_gstr v_726;
 rt_gstr ct_727;
 P141 *r_728;
 P218 ps_2393;
 P218 pt_2394;
 P141 src_2395;
 P141 decode_2396;
};
struct f_code_type_731fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_730;
 P118 result_;
 P175 c_2397;
 P118 y_2398;
};
struct f_check_code_body_734fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_732;
 P118 y_733;
 P175 s_2399;
 rt_int n_2400;
 rt_int k_2401;
};
struct f_subprogram_body_737fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_735;
 P118 y_736;
 P175 saved_body_2403;
 P127 saved_code_2404;
 P127 saved_fields_2405;
 int saved_in_2406;
 P118 saved_sym_2407;
 P144 saved_exits_2408;
 rt_int saved_frames_2409;
 P152 saved_handlers_2410;
 P152 saved_cleanups_2411;
 P190 saved_labels_2412;
 P144 saved_hx_2413;
 rt_int saved_hd_2414;
 P118 saved_pure_2415;
 P141 aw_2416;
 rt_int saved_pdepth_2417;
 P141 args_2418;
 P141 head_2419;
 P141 frame_2420;
 P141 parent_2421;
 P141 ct_2422;
 P141 x_2423;
 P2001 pm_2424;
 P118 p_2425;
};
struct f_gen_statements_739fr { int dummy;
 struct f_greenc_1fr *up;
 P175 stmts_738;
 P175 s_2429;
};
struct f_pop_frames_741fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int upto_740;
 rt_int i_2431;
 P152 c_2432;
};
struct f_push_cleanup_743fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_742;
};
struct f_pop_cleanup_744fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_guarded_749fr { int dummy;
 struct f_greenc_1fr *up;
 P175 decls_745;
 P175 stmts_746;
 P175 hs_747;
 rt_int line_748;
 P144 saved_hx_2436;
 P141 f_2437;
 P141 x_2438;
 P175 h_2439;
 P175 n_2440;
 int first_2441;
 int has_others_2442;
 P141 conds_2443;
};
struct f_exc_id_753fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_750;
 rt_int line_751;
 P141 *r_752;
 P118 y_2448;
};
struct f_gen_statement_755fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_754;
 P123 t_2449;
 P123 vt_2450;
 P179 c_2451;
 P141 lv_2452;
 P141 v_2453;
 P141 x_2454;
 int ro_2455;
};
struct f_slice_assign_757fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_756;
 P141 lv_2457;
 P141 v_2458;
 P141 sl_2459;
 P141 x_2460;
 P123 t_2461;
 P123 st_2462;
 P123 vt_2463;
 P179 c_2464;
 int ro_2465;
};
struct f_gen_call_759fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_758;
 P175 c_2466;
 P123 t_2467;
 P141 v_2468;
};
struct f_gen_if_761fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_760;
 P175 a_2469;
 int first_2470;
 P123 t_2471;
 P141 v_2472;
};
struct f_gen_case_763fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_762;
 P123 st_2474;
 P123 vt_2475;
 int first_2476;
 P175 a_2477;
 P175 lab_2478;
 P141 sel_2479;
 P141 tmp_2480;
 P141 ct_2481;
 P141 conds_2482;
 P141 v_2483;
 P141 lo_2484;
 P141 hi_2485;
 A2486 clo_2487;
 A2486 chi_2489;
 rt_int nc_2491;
 rt_int vlo_2492;
 rt_int vhi_2493;
 rt_int total_2494;
 int ok_2495;
 int ok2_2496;
 P118 y_2497;
 rt_int k_2501;
 rt_int k_2510;
};
struct f_selector_range_769fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_764;
 P123 t_765;
 rt_int *lo_766;
 rt_int *hi_767;
 int *ok_768;
 P118 y_2518;
};
struct f_push_exit_773fr { int dummy;
 struct f_greenc_1fr *up;
 P141 match_770;
 int is_loop_771;
 P141 *label_772;
};
struct f_gen_loop_775fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_774;
 P123 t_2521;
 P123 vt_2522;
 P179 c_2523;
 P141 label_2524;
 P141 cond_2525;
 P141 acc_2526;
 P141 lov_2527;
 P141 hiv_2528;
 P141 it_2529;
 P118 y_2530;
 P175 r_2531;
};
struct f_gen_block_777fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_776;
 P141 label_2532;
 P141 aw_2533;
};
struct f_exit_matches_780fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_778;
 P144 x_779;
 int result_;
};
struct f_gen_exit_782fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_781;
 P144 x_2534;
 P123 t_2535;
 P141 v_2536;
};
struct f_gen_return_784fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_783;
 P123 vt_2538;
 P141 v_2539;
 P141 x_2540;
};
struct f_access_of_787fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_785;
 P141 *r_786;
 P141 p_2541;
 rt_int i_2543;
};
struct f_link_to_790fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int l_788;
 P141 *r_789;
 rt_int i_2548;
};
struct f_c_ident_792fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_791;
 rt_gstr result_;
};
struct f_deref_796fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_793;
 P123 t_794;
 P141 *r_795;
 P141 ct_2552;
};
struct f_is_object_798fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_797;
 int result_;
 P118 y_2553;
};
struct f_is_const_access_800fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_799;
 int result_;
 P118 y_2554;
};
struct f_lvalue_806fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_801;
 P141 *code_out_802;
 P123 *t_803;
 P179 *c_804;
 int *ro_805;
 int cp_2555;
 P175 ex_2556;
 P118 y_2557;
 P141 base_2558;
 P123 bt_2559;
 P179 bc_2560;
};
struct f_select_on_815fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_807;
 P123 bt_808;
 P175 e_809;
 int *ro_810;
 int lv_811;
 P141 *code_out_812;
 P123 *t_813;
 P179 *c_814;
 P2019 f_2561;
 P141 d_2562;
 P141 ct_2563;
 P141 tmp_2564;
};
struct f_index_on_824fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr base_816;
 P123 bt_817;
 P175 e_818;
 int *ro_819;
 int lv_820;
 P141 *code_out_821;
 P123 *t_822;
 P179 *c_823;
 P175 a_2566;
 P123 arrt_2567;
 P141 acc_2568;
 P123 it_2569;
 P141 i_2570;
 P141 lo_2571;
 P141 hi_2572;
 P141 d_2573;
 P141 ct_2574;
 P141 tmp_2575;
};
struct f_type_attribute_827fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_825;
 rt_gstr name_826;
 int result_;
 P118 y_2577;
 P2001 p_2579;
};
struct f_is_type_name_829fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_828;
 int result_;
 P118 y_2582;
};
struct f_is_char_lit_831fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_830;
 int result_;
};
struct f_is_enum_lit_833fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_832;
 int result_;
 P118 y_2584;
};
struct f_c_string_835fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr s_834;
 rt_gstr result_;
 rt_int n_2585;
 rt_int i_2588;
 rt_gstr r_2597;
 rt_int j_2599;
 rt_int i_2603;
};
struct f_is_literal_837fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_836;
 int result_;
};
struct f_range_bounds_845fr { int dummy;
 struct f_greenc_1fr *up;
 P175 l_838;
 P175 h_839;
 P123 want_840;
 rt_int line_841;
 P123 *t_842;
 P141 *lo_843;
 P141 *hi_844;
 P123 w_2614;
 P123 t2_2615;
};
struct f_gexpr_850fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_846;
 P123 want_847;
 P123 *t_848;
 P141 *r_849;
 int saved_lv_2616;
 P123 w_2617;
};
struct f_gexpr_1_855fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_851;
 P123 want_852;
 P123 *t_853;
 P141 *r_854;
 P118 y_2618;
 P123 bt_2619;
 P179 c_2620;
 int ro_2621;
 P141 base_2622;
 P141 a_2623;
 P175 nm_2624;
 P175 c2_2625;
};
struct f_string_aggregate_860fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_856;
 P123 want_857;
 P123 *t_858;
 P141 *r_859;
 P175 ag_2629;
 P175 it_2630;
 P175 tail_2631;
 P175 l_2632;
 rt_int k_2635;
};
struct f_char_literal_865fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_861;
 P123 want_862;
 P123 *t_863;
 P141 *r_864;
 rt_int i_2641;
};
struct f_expanded_868fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_866;
 P175 *r_867;
 P118 y_2644;
 rt_int d_2645;
};
struct f_gen_name_873fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_869;
 P123 want_870;
 P123 *t_871;
 P141 *r_872;
 P118 y_2646;
 P118 z_2647;
 P175 call_2648;
};
struct f_gen_unop_878fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_874;
 P123 want_875;
 P123 *t_876;
 P141 *r_877;
 P141 a_2651;
 P141 x_2652;
 int done_2653;
};
struct f_short_int_880fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_879;
 int result_;
};
struct f_float_kind_882fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_881;
 rt_gstr result_;
};
struct f_membership_885fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_883;
 P141 *r_884;
 P123 ta_2654;
 P123 tb_2655;
 P123 tt_2656;
 P141 a_2657;
 P141 lo_2658;
 P141 hi_2659;
 P141 ct_2660;
 P179 c_2661;
 P2023 d_2662;
};
struct f_condition_890fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_886;
 P123 want_887;
 P123 *t_888;
 P141 *r_889;
 P141 a_2664;
 P141 b_2665;
 P123 tb_2666;
};
struct f_catenation_895fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_891;
 P123 want_892;
 P123 *t_893;
 P141 *r_894;
 P123 arrt_2667;
 P123 ta_2668;
 P123 tb_2669;
 P141 a_2670;
 P141 b_2671;
 P141 ct_2672;
};
struct f_cat_operand_900fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_896;
 P123 arrt_897;
 rt_int line_898;
 P141 *r_899;
 P123 tx_2673;
 P141 ct_2674;
};
struct f_arithmetic_905fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_901;
 P123 want_902;
 P123 *t_903;
 P141 *r_904;
 rt_gstr op_2675;
 P123 ta_2676;
 P123 tb_2677;
 P123 hint_2678;
 P141 a_2679;
 P141 b_2680;
};
struct f_fixed_operation_913fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_906;
 P123 ta_907;
 P123 tb_908;
 rt_gstr a_909;
 rt_gstr b_910;
 P123 *t_911;
 P141 *r_912;
 rt_gstr op_2681;
};
struct f_gen_binop_918fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_914;
 P123 want_915;
 P123 *t_916;
 P141 *r_917;
 rt_gstr op_2682;
 P123 ta_2683;
 P123 tb_2684;
 P123 hint_2685;
 P123 ct_2686;
 P141 a_2687;
 P141 b_2688;
 P141 x_2689;
 P141 dummy_2690;
 int done_2691;
};
struct f_code_statement_922fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_919;
 P118 y_920;
 P141 *r_921;
 P118 i_2692;
 P123 t_2693;
 P141 v_2694;
 P141 ct_2695;
};
struct f_conversion_927fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_923;
 P118 y_924;
 P123 *t_925;
 P141 *r_926;
 P123 aty_2696;
 P141 a_2697;
 P175 ag_2698;
 P175 it_2699;
 P175 tail_2700;
 P175 arg_2701;
};
struct f_constrain_931fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_928;
 P123 t_929;
 P141 *r_930;
 P141 ct_2703;
 P141 tmp_2704;
};
struct f_array_conversion_938fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_932;
 P123 t_933;
 P123 aty_934;
 P179 c_935;
 rt_gstr a_936;
 P141 *r_937;
 P123 x_2705;
 P123 y_2706;
 P141 ct_2707;
 P141 act_2708;
 P141 et_2709;
 P141 tmp_2710;
 P141 s_2711;
 rt_int k_2713;
};
struct f_gen_attr_943fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_939;
 P123 want_940;
 P123 *t_941;
 P141 *r_942;
 rt_gstr a_2717;
 P118 y_2718;
 P123 tt_2719;
 P123 aty_2720;
 P141 v_2721;
 P141 d_2722;
 P179 c_2723;
 rt_int n_2724;
 int ro_2725;
};
struct f_type_bits_947fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_944;
 P179 c_945;
 P141 *r_946;
 P141 ct_2726;
 P218 p_2727;
 rt_int n_2728;
};
struct f_object_bits_951fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_948;
 rt_gstr v_949;
 P141 *r_950;
 P141 ct_2729;
 P141 et_2730;
 P218 p_2731;
 rt_int n_2732;
};
struct f_numeric_attr_957fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_952;
 P123 tt_953;
 P179 c_954;
 P123 *t_955;
 P141 *r_956;
 rt_gstr a_2733;
 int short_2734;
};
struct f_component_attr_961fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_958;
 P123 *t_959;
 P141 *r_960;
 P123 bt_2735;
 P141 v_2736;
 P141 ct_2737;
 P2019 f_2738;
};
struct f_config_attr_965fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_962;
 P123 *t_963;
 P141 *r_964;
 rt_gstr a_2740;
 rt_gstr p_2741;
 P141 nm_2742;
};
struct f_attr_dim_969fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_966;
 P123 arrt_967;
 rt_int *n_968;
 int ok_2745;
};
struct f_object_array_attr_975fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_970;
 P123 arrt_971;
 rt_gstr v_972;
 P123 *t_973;
 P141 *r_974;
 rt_int n_2746;
 P123 it_2747;
 P141 ct_2748;
 P141 tmp_2749;
 P141 p_2750;
 P141 lo_2751;
 P141 hi_2752;
 rt_int k_2754;
 rt_int k_2759;
};
struct f_type_array_attr_981fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_976;
 P123 arrt_977;
 P179 c_978;
 P123 *t_979;
 P141 *r_980;
 rt_int n_2763;
 P123 it_2764;
 P179 cc_2765;
 rt_int k_2767;
};
struct f_lit_table_984fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_982;
 P141 *r_983;
 P175 l_2771;
 P141 s_2772;
};
struct f_val_rep_990fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_985;
 P123 tt_986;
 P179 c_987;
 P123 *t_988;
 P141 *r_989;
 P123 aty_2775;
 P141 v_2776;
 P141 lt_2777;
 rt_int n_2778;
};
struct f_allocator_995fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_991;
 P123 want_992;
 P123 *t_993;
 P141 *r_994;
 P118 y_2779;
 P123 target_2780;
 P123 vt_2781;
 P141 ct_2782;
 P141 pt_2783;
 P141 cell_2784;
 P141 v_2785;
 P141 x_2786;
 P141 b_2787;
 P218 p_2788;
};
struct f_aggregate_1000fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_996;
 P123 want_997;
 P123 *t_998;
 P141 *r_999;
 P141 b_2789;
};
struct f_captured_1003fr { int dummy;
 struct f_greenc_1fr *up;
 P127 b_1001;
 P141 *r_1002;
 P152 l_2790;
};
struct f_field_at_1006fr { int dummy;
 struct f_greenc_1fr *up;
 P123 rt_1004;
 rt_int k_1005;
 P2019 result_;
 P2019 f_2792;
 rt_int i_2794;
};
struct f_names_field_1009fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_1007;
 P2019 f_1008;
 int result_;
};
struct f_item_for_1014fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1010;
 P123 rt_1011;
 rt_int k_1012;
 rt_int p_1013;
 P175 result_;
 P175 it_2798;
 P175 lab_2799;
 rt_int n_2800;
};
struct f_arm_holds_1018fr { int dummy;
 struct f_greenc_1fr *up;
 P175 arm_1015;
 rt_int v_1016;
 int *res_1017;
 P175 l_2803;
 rt_int lo_2804;
 rt_int hi_2805;
 int ok_2806;
};
struct f_record_aggregate_1022fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1019;
 P123 rt_1020;
 P141 *r_1021;
 P175 it_2808;
 P175 lab_2809;
 P175 vn_2810;
 P175 a_2811;
 P2019 f_2812;
 P2149 g_2813;
 rt_int n_2814;
 A2815 done_2816;
 A2815 active_2818;
 A2820 dvs_2821;
 A2823 order_2824;
 rt_int norder_2826;
 rt_int nung_2827;
 rt_int k_2828;
 rt_int d_2829;
 rt_int npos_2830;
 P127 saved_2831;
 P141 ct_2832;
 P141 tmp_2833;
 P141 parts_2834;
 int named_2835;
 int ok_2836;
 int holds_2837;
 rt_int i_2839;
 rt_int p_2848;
 rt_int i_2867;
 rt_int i_2884;
 rt_int i_2895;
};
struct f_field_index_1025fr { int dummy;
 struct f_greenc_1fr *up;
 P123 rt_1023;
 rt_gstr name_1024;
 rt_int result_;
 P2019 f_2901;
 rt_int k_2902;
};
struct f_agg_component_1031fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr tmp_1026;
 P123 rt_1027;
 rt_int k_1028;
 P175 v_1029;
 rt_int line_1030;
 P2019 f_2904;
 P123 vt_2905;
 P141 x_2906;
 P141 y_2907;
 rt_int i_2909;
};
struct f_static_choice_1035fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_1032;
 rt_int *v_1033;
 int *ok_1034;
};
struct f_array_aggregate_1040fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1036;
 P123 arrt_1037;
 P141 bounds_1038;
 P141 *r_1039;
 P175 it_2914;
 P175 lab_2915;
 P175 others_it_2916;
 rt_int np_2917;
 rt_int nnamed_2918;
 rt_int clo_2919;
 rt_int chi_2920;
 rt_int v1_2921;
 rt_int v2_2922;
 int all_static_2923;
 int ok_2924;
 int ok2_2925;
 int first_choice_2926;
 P123 vt_2927;
 P141 ct_2928;
 P141 et_2929;
 P141 tmp_2930;
 P141 lo_2931;
 P141 hi_2932;
 P141 v_2933;
 P141 x_2934;
 P141 parts_2935;
 P141 fill_2936;
 P141 rowb_2937;
 P141 key_2938;
 P141 khi_2939;
 P127 saved_2940;
};
struct f_element_store_1044fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1041;
 P123 arrt_1042;
 rt_gstr v_1043;
 P141 x_2945;
};
struct f_check_choices_1048fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1045;
 P123 arrt_1046;
 int has_others_1047;
 P175 a_2946;
 P175 b_2947;
 P175 lab_2948;
 P175 lab2_2949;
 rt_int lo1_2950;
 rt_int hi1_2951;
 rt_int lo2_2952;
 rt_int hi2_2953;
 rt_int count_2954;
 int ok_2955;
};
struct f_actual_for_1052fr { int dummy;
 struct f_greenc_1fr *up;
 P175 args_1049;
 P2001 pm_1050;
 P2001 first_1051;
 P175 result_;
 P175 a_2960;
 P2001 p_2961;
};
struct f_gcall_1057fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1053;
 int is_stmt_1054;
 P123 *t_1055;
 P141 *r_1056;
 P175 fn_2964;
 P175 nm_2965;
 P118 y_2966;
 P141 args_2967;
 P141 lv_2968;
 P141 v_2969;
 P141 ct_2970;
 P141 x_2971;
 P175 a_2972;
 P2001 pm_2973;
 P123 lt_2974;
 P123 vt_2975;
 P179 lc_2976;
 int ro_2977;
};
struct f_out_check_1061fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr lv_1058;
 P123 t_1059;
 P179 c_1060;
};
struct f_var_path_1064fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1062;
 P141 *r_1063;
 P123 pt_2978;
 P141 v_2979;
 P127 saved_2980;
};
struct f_paths_overlap_1067fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1065;
 rt_gstr r_1066;
 int result_;
 rt_int i_2984;
 rt_int j_2986;
};
struct f_mentions_1070fr { int dummy;
 struct f_greenc_1fr *up;
 P175 n_1068;
 rt_gstr name_1069;
 int result_;
 P175 p_3008;
};
struct f_mentions_one_1073fr { int dummy;
 struct f_greenc_1fr *up;
 P175 n_1071;
 rt_gstr name_1072;
 int result_;
};
struct f_check_aliasing_1077fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1074;
 P118 y_1075;
 P175 a_1076;
 P175 b_3010;
 P141 p_3011;
 P141 q_3012;
 P175 r_3013;
 P118 v_3014;
};
struct f_gcall_with_1082fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1078;
 P118 y_1079;
 P123 *t_1080;
 P141 *r_1081;
 P141 args_3016;
 P141 lv_3017;
 P141 v_3018;
 P141 x1_3019;
 P141 x2_3020;
 P175 a_3021;
 P2001 pm_3022;
 P123 lt_3023;
 P123 vt_3024;
 P179 lc_3025;
 int ro_3026;
};
struct f_builtin_1089fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1083;
 P175 args_1084;
 rt_int line_1085;
 int is_stmt_1086;
 P123 *t_1087;
 P141 *r_1088;
 P123 aty_3029;
 P123 lt_3030;
 P141 a_3031;
 P141 w_3032;
 P141 lv_3033;
 P179 lc_3034;
 int ro_3035;
};
struct f_lookup_path_1091fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1090;
 P118 result_;
 P118 y_3036;
 P118 m_3037;
 rt_int i_3041;
};
struct f_is_package_1093fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1092;
 int result_;
 P118 y_3053;
};
struct f_member_of_1097fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1094;
 rt_gstr name_1095;
 rt_int line_1096;
 P118 result_;
 P118 y_3054;
 P118 m_3055;
};
struct f_inside_package_1099fr { int dummy;
 struct f_greenc_1fr *up;
 P175 p_1098;
 int result_;
 P152 l_3057;
};
struct f_copy_sym_1102fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1100;
 P118 *z_1101;
};
struct f_complete_private_1105fr { int dummy;
 struct f_greenc_1fr *up;
 P123 ph_1103;
 P123 full_1104;
 P141 n_3061;
 P175 p_3062;
};
struct f_package_spec_1107fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1106;
 P118 y_3063;
 P118 m_3064;
 P118 z_3065;
 P175 saved_3066;
 P118 first_private_3067;
};
struct f_hidden_from_1110fr { int dummy;
 struct f_greenc_1fr *up;
 P118 m_1108;
 P118 first_private_1109;
 int result_;
 P118 p_3071;
};
struct f_package_body_1112fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1111;
 P190 saved_labels_3073;
 P118 y_3074;
 P118 m_3075;
 P118 z_3076;
 P175 saved_3077;
};
struct f_use_visible_1114fr { int dummy;
 struct f_greenc_1fr *up;
 P118 old_1113;
 int result_;
};
struct f_use_clause_1116fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1115;
 P175 n_3084;
 P118 y_3085;
 P118 m_3086;
 P118 z_3087;
 P118 old_3088;
 int clash_3089;
};
struct f_usable_over_1118fr { int dummy;
 struct f_greenc_1fr *up;
 P118 old_1117;
 int result_;
};
struct f_same_entity_1121fr { int dummy;
 struct f_greenc_1fr *up;
 P118 a_1119;
 P118 b_1120;
 int result_;
};
struct f_fits_1126fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1122;
 P175 args_1123;
 P123 want_1124;
 int *ok_1125;
 P2001 pm_3094;
 P175 a_3095;
 P123 t_3096;
 P179 c_3097;
 P141 v_3098;
 int ro_3099;
 P127 saved_3100;
 rt_int used_3101;
};
struct f_is_builtin_1128fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1127;
 int result_;
};
struct f_resolve_overload_1135fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1129;
 P175 args_1130;
 int is_stmt_1131;
 P123 want_1132;
 rt_int line_1133;
 P118 *y_1134;
 P118 z_3106;
 P118 w_3107;
 P118 first_3108;
 P118 found_3109;
 rt_int n_3110;
 int ok_3111;
 int hidden_3112;
 rt_int pass_3114;
};
struct f_same_profile_1138fr { int dummy;
 struct f_greenc_1fr *up;
 P118 a_1136;
 P118 b_1137;
 int result_;
};
struct f_resolve_member_overload_1146fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr p_1139;
 rt_gstr name_1140;
 P175 args_1141;
 int is_stmt_1142;
 P123 want_1143;
 rt_int line_1144;
 P118 *y_1145;
 P118 pk_3124;
 P118 z_3125;
 P118 found_3126;
 rt_int n_3127;
 int ok_3128;
 rt_int pass_3130;
};
struct f_user_operator_1152fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1147;
 P123 want_1148;
 P123 *t_1149;
 P141 *r_1150;
 int *done_1151;
 P141 op_3135;
 int negate_3136;
 P118 y_3137;
 P175 call_3138;
 P175 fname_3139;
 P175 l_3140;
 P175 rt_3141;
 int ok_3142;
};
struct f_task_p_1154fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1153;
 P175 x_3145;
 P175 r_3146;
 rt_int line_3147;
};
struct f_entry_p_1156fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1155;
 P175 x_3148;
};
struct f_accept_p_1158fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1157;
 P175 x_3149;
};
struct f_delay_p_1160fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1159;
 P175 x_3150;
};
struct f_designators_1162fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1161;
 P175 head_3151;
 P175 tail_3152;
 P175 n_3153;
};
struct f_parse_task_statement_1164fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1163;
 P175 x_3155;
 P175 alt_3156;
 P175 head_3157;
 P175 tail_3158;
 rt_int line_3159;
};
struct f_path_at_1168fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int level_1165;
 rt_gstr field_1166;
 P141 *r_1167;
 rt_int i_3162;
};
struct f_is_task_name_1170fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1169;
 int result_;
 P118 y_3166;
};
struct f_task_of_1174fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1171;
 P118 *y_1172;
 P175 *ix_1173;
 P175 n_3167;
 P118 a_3168;
};
struct f_own_index_1177fr { int dummy;
 struct f_greenc_1fr *up;
 P118 t_1175;
 P141 *r_1176;
 P118 y_3169;
};
struct f_member_1182fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1178;
 rt_gstr arr_1179;
 rt_gstr i_1180;
 P141 *r_1181;
 P141 lo_3170;
 P141 hi_3171;
};
struct f_act_path_1185fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1183;
 P141 *r_1184;
 P141 i_3172;
};
struct f_act_path_i_1189fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1186;
 rt_gstr i_1187;
 P141 *r_1188;
};
struct f_entry_path_1193fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1190;
 rt_gstr i_1191;
 P141 *r_1192;
 P141 own_3173;
};
struct f_declare_slot_1196fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr ctype_name_1194;
 rt_gstr field_1195;
};
struct f_task_decl_1198fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1197;
};
struct f_family_arg_struct_1199fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_family_bounds_1204fr { int dummy;
 struct f_greenc_1fr *up;
 P175 b_1200;
 P118 y_1201;
 P141 x_1202;
 int per_member_1203;
 P141 lo_3175;
 P141 hi_3176;
 P141 v_3177;
 P141 d_3178;
 P141 mlo_3179;
 P141 mhi_3180;
 P123 vt_3181;
 P179 c_3182;
};
struct f_entry_family_slot_1209fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1205;
 rt_gstr base_1206;
 rt_gstr i_1207;
 P141 *r_1208;
 P141 lo_3183;
 P141 hi_3184;
};
struct f_task_spec_1211fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1210;
 int has_procs_3185;
 int saved_defer_3186;
 P141 fields_3187;
 P141 ct_3188;
 P2001 pm_3189;
 P141 fp_3190;
 P141 flo_3191;
 P141 fhi_3192;
 P118 y_3193;
 P118 m_3194;
 P118 z_3195;
 P118 saved_3196;
 P141 d_3197;
 P141 v_3198;
 P141 p_3199;
 P141 p2_3200;
 P123 vt_3201;
 P175 r_3202;
};
struct f_entry_decl_1213fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1212;
 P118 y_3207;
 P175 p_3208;
 P2001 pm_3209;
 P2001 tail_3210;
 P141 fields_3211;
 P141 ct_3212;
 P141 x_3213;
 P141 lo_3214;
 P141 hi_3215;
};
struct f_task_body_1215fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1214;
 P118 y_3219;
 P118 b_3220;
 P118 m_3221;
 P118 z_3222;
 P141 upp_3223;
 P118 saved_3224;
};
struct f_task_awaits_1218fr { int dummy;
 struct f_greenc_1fr *up;
 P175 decls_1216;
 P141 *aw_1217;
 P175 e_3228;
 P118 y_3229;
 P141 p_3230;
};
struct f_task_failure_1220fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1219;
 P118 y_3232;
 P141 a_3233;
 P141 i_3234;
 P123 it_3235;
};
struct f_entry_sym_1224fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1221;
 P118 *y_1222;
 P175 *ix_1223;
 P175 alias_3236;
 P118 t_3237;
};
struct f_entry_overload_1229fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1225;
 P175 args_1226;
 rt_int line_1227;
 P118 *r_1228;
 P118 z_3238;
 P118 found_3239;
 int ok_3240;
};
struct f_other_call_1234fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1230;
 int is_stmt_1231;
 P123 *t_1232;
 P141 *r_1233;
 P118 y_3242;
 P118 oy_3243;
 P2001 pm_3244;
 P175 a_3245;
 P141 parts_3246;
 P141 v_3247;
 P141 lv_3248;
 P141 ent_3249;
 P141 act_3250;
 P141 i_3251;
 P123 vt_3252;
 P123 lt_3253;
 P179 lc_3254;
 int ro_3255;
 P175 ix_3256;
 P175 fix_3257;
 P175 args_node_3258;
};
struct f_other_attr_1239fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1235;
 P118 y_1236;
 P123 *t_1237;
 P141 *r_1238;
 rt_gstr a_3260;
 P141 p_3261;
};
struct f_member_attr_1243fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1240;
 P123 *t_1241;
 P141 *r_1242;
 P118 y_3262;
 P175 ix_3263;
 P141 i_3264;
 P141 p_3265;
 P123 vt_3266;
};
struct f_task_builtin_1249fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1244;
 P175 args_1245;
 rt_int line_1246;
 P123 *t_1247;
 P141 *r_1248;
 P123 vt_3267;
 P141 v_3268;
};
struct f_accept_entry_1252fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1250;
 P118 *r_1251;
 P118 z_3269;
 P118 found_3270;
 P118 any_3271;
 int ok_3272;
};
struct f_accept_conforms_1256fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1253;
 P118 y_1254;
 int *ok_1255;
 P175 f_3276;
 P2001 pm_3277;
 P123 t_3278;
 P179 c_3279;
};
struct f_gen_accept_1258fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1257;
 P118 y_3281;
 P144 saved_ax_3282;
 P141 ent_3283;
 P141 ep_3284;
 P141 xf_3285;
 P141 x_3286;
 P2001 pm_3287;
 P175 f_3288;
 P118 p_3289;
};
struct f_member_slot_1262fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1259;
 P175 s_1260;
 P141 *ent_1261;
 P123 vt_3291;
 P141 v_3292;
};
struct f_gen_delay_ticks_1265fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1263;
 P141 *r_1264;
 P123 vt_3293;
 P141 v_3294;
};
struct f_gen_select_1267fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1266;
 P175 alt_3295;
 rt_int n_3296;
 rt_int i_3297;
 int has_delay_3298;
 int has_accept_3299;
 P141 al_3300;
 P141 w_3301;
 P141 g_3302;
 P141 ent_3303;
 P141 ticks_3304;
 P123 vt_3305;
 P118 y_3306;
};
struct f_family_range_1272fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1268;
 P175 ix_1269;
 P141 *lo_1270;
 P141 *hi_1271;
 P123 vt_3310;
};
struct f_task_statement_gen_1274fr { int dummy;
 struct f_greenc_1fr *up;
 P175 s_1273;
 P175 n_3311;
 P175 ix_3312;
 P118 y_3313;
 P141 a_3314;
 P141 d_3315;
 P141 l_3316;
 P141 ticks_3317;
 P141 lo_3318;
 P141 hi_3319;
};
struct f_root_name_1276fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1275;
 P175 result_;
};
struct f_check_pure_target_1279fr { int dummy;
 struct f_greenc_1fr *up;
 P175 target_1277;
 rt_int line_1278;
 P175 n_3323;
 P118 y_3324;
};
struct f_assigns_nonlocal_1282fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_1280;
 rt_gstr name_1281;
 int result_;
};
struct f_declares_1285fr { int dummy;
 struct f_greenc_1fr *up;
 P175 d_1283;
 rt_gstr name_1284;
 int result_;
 P175 p_3325;
 P175 e_3326;
};
struct f_scan_handlers_1289fr { int dummy;
 struct f_greenc_1fr *up;
 P175 h_1286;
 P175 d_1287;
 rt_gstr name_1288;
 int result_;
 P175 p_3329;
};
struct f_scan_assigns_1293fr { int dummy;
 struct f_greenc_1fr *up;
 P175 stmts_1290;
 P175 d_1291;
 rt_gstr name_1292;
 int result_;
 P175 s_3331;
 P175 a_3332;
 P175 r_3333;
};
struct f_check_call_rules_1296fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1294;
 P118 y_1295;
 P118 z_3337;
 P118 s_3338;
};
struct f_generic_p_1298fr { int dummy;
 struct f_greenc_1fr *up;
 P175 *res_1297;
 P175 x_3340;
 P175 p_3341;
 P175 head_3342;
 P175 tail_3343;
 P175 names_3344;
 P175 st_3345;
 P175 def_3346;
 P175 sub_3347;
 P141 def_name_text_3348;
 int more_3349;
 int restr_3350;
 rt_int mode_3351;
};
struct f_instantiation_1301fr { int dummy;
 struct f_greenc_1fr *up;
 P175 x_1299;
 P175 *res_1300;
 P175 i_3354;
 P175 head_3355;
 P175 tail_3356;
 P175 a_3357;
 P141 formal_3358;
 rt_int mark_3359;
 int more_3360;
};
struct f_generic_decl_1303fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1302;
 P118 y_3363;
};
struct f_is_generic_name_1305fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr n_1304;
 int result_;
 P118 y_3364;
};
struct f_instantiates_1308fr { int dummy;
 struct f_greenc_1fr *up;
 P175 n_1306;
 rt_gstr name_1307;
 int result_;
 P175 p_3365;
};
struct f_attach_generic_body_1310fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1309;
 P118 y_3367;
};
struct f_restore_generic_context_1314fr { int dummy;
 struct f_greenc_1fr *up;
 P175 body_node_1311;
 rt_int line_1312;
 rt_gstr inst_1313;
 P147 ctx_3370;
 P118 m_3371;
 P118 z_3372;
 int seen_3373;
};
struct f_gactual_1318fr { int dummy;
 struct f_greenc_1fr *up;
 P175 args_1315;
 rt_int nth_1316;
 rt_gstr name_1317;
 P175 result_;
 P175 a_3378;
 rt_int i_3379;
};
struct f_copy_node_1322fr { int dummy;
 struct f_greenc_1fr *up;
 P175 n_1319;
 P141 name_1320;
 P175 *r_1321;
};
struct f_matches_formal_1326fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1323;
 rt_gstr name_1324;
 P118 fs_1325;
 int result_;
};
struct f_actual_type_1329fr { int dummy;
 struct f_greenc_1fr *up;
 P175 a_1327;
 P118 *y_1328;
};
struct f_actual_subprogram_1334fr { int dummy;
 struct f_greenc_1fr *up;
 P175 f_1330;
 P175 a_1331;
 rt_int line_1332;
 P118 *r_1333;
 P118 fs_3381;
 P118 y_3382;
 P141 name_3383;
 P118 m_3384;
};
struct f_wrap_operation_1340fr { int dummy;
 struct f_greenc_1fr *up;
 P175 f_1335;
 rt_gstr op_1336;
 P141 type_name_1337;
 rt_int line_1338;
 P118 *r_1339;
 P175 w_3390;
 P175 p_3391;
 P175 q_3392;
 P175 qt_3393;
 P175 ret_3394;
 P175 x_3395;
 P175 a1_3396;
 P175 a2_3397;
 P141 wname_3398;
 rt_int n_3399;
 P118 y_3400;
};
struct f_actual_mark_1343fr { int dummy;
 struct f_greenc_1fr *up;
 P175 st_1341;
 P175 *r_1342;
};
struct f_instantiate_1345fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1344;
 P118 g_3402;
 P175 gd_3403;
 P175 pat_3404;
 P175 f_3405;
 P175 a_3406;
 P175 cn_3407;
 P175 rn_3408;
 P118 y_3409;
 P118 z_3410;
 P118 fs_3411;
 rt_int nth_3412;
 P123 t_3413;
 P123 vt_3414;
 P179 c_3415;
 P141 v_3416;
 P141 acc_3417;
 P141 x_3418;
 int ok_3419;
};
struct f_rep_of_1347fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_1346;
 P218 result_;
 P218 r_3421;
};
struct f_own_rep_1350fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_1348;
 P218 *r_1349;
};
struct f_bits_for_1352fr { int dummy;
 struct f_greenc_1fr *up;
 rt_int n_1351;
 rt_int result_;
 rt_int b_3426;
 rt_int v_3427;
};
struct f_min_bits_1356fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_1353;
 P179 c_1354;
 rt_int *r_1355;
 P218 p_3429;
 P2019 f_3430;
 rt_int n_3431;
 rt_int e_3432;
 rt_int lo_3433;
 rt_int hi_3434;
};
struct f_elem_bits_1360fr { int dummy;
 struct f_greenc_1fr *up;
 P123 t_1357;
 P179 c_1358;
 rt_int *r_1359;
};
struct f_pending_addresses_1362fr { int dummy;
 struct f_greenc_1fr *up;
 P175 decls_1361;
 P175 e_3437;
};
struct f_pending_address_1364fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1363;
 P221 result_;
 P221 a_3441;
};
struct f_address_of_1366fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1365;
 P141 result_;
 P221 a_3443;
};
struct f_static_address_1368fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1367;
 rt_int v_3445;
 int ok_3446;
};
struct f_place_object_1373fr { int dummy;
 struct f_greenc_1fr *up;
 P221 a_1369;
 P118 y_1370;
 P123 t_1371;
 P141 *acc_1372;
 P141 ct_3447;
 P141 x_3448;
};
struct f_place_components_1378fr { int dummy;
 struct f_greenc_1fr *up;
 P221 a_1374;
 P123 t_1375;
 rt_gstr acc_1376;
 rt_int line_1377;
};
struct f_representation_1380fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1379;
 P118 y_3449;
 P218 p_3450;
 rt_int n_3451;
 rt_int m_3452;
 int ok_3453;
};
struct f_enum_codes_1384fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1381;
 P123 t_1382;
 P218 p_1383;
 P175 it_3457;
 rt_int n_3458;
 rt_int k_3459;
 rt_int v_3460;
 rt_int pos_3461;
 rt_int prev_3462;
 int ok_3463;
 P141 s_3464;
 A3465 codes_3466;
 A3468 seen_3469;
 rt_int i_3472;
 rt_int i_3482;
};
struct f_record_layout_1388fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1385;
 P123 t_1386;
 P218 p_1387;
 P175 x_3491;
 P2019 f_3492;
 P2019 g_3493;
 rt_int u_3494;
 rt_int l_3495;
 rt_int h_3496;
 rt_int m_3497;
 rt_int top_3498;
 rt_int al_3499;
 int ok_3500;
 int ok2_3501;
 int ok3_3502;
 P2115 q_3503;
 P2115 q2_3504;
 P2115 tail_3505;
 rt_int su_3506;
};
struct f_address_spec_1391fr { int dummy;
 struct f_greenc_1fr *up;
 P175 e_1389;
 P118 y_1390;
 P221 a_3518;
 P141 v_3519;
 P141 act_3520;
};
struct f_task_length_1393fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_1392;
 rt_int result_;
 P221 a_3524;
};
struct f_predef_type_1398fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1394;
 P123 t_1395;
 rt_gstr lo_1396;
 rt_gstr hi_1397;
 P118 y_3526;
};
struct f_predef_const_1402fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1399;
 P123 t_1400;
 rt_gstr code_text_1401;
 P118 y_3533;
};
struct f_predef_exc_1404fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1403;
 P118 y_3534;
};
struct f_predef_lit_1408fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1405;
 P123 t_1406;
 rt_int v_1407;
 P118 y_3535;
};
struct f_predefine_1409fr { int dummy;
 struct f_greenc_1fr *up;
 P118 y_3536;
 rt_gstr control_3537;
 rt_int start_3538;
 rt_int code_no_3539;
 rt_int i_3542;
 rt_int i_3550;
};
struct f_lib_open_1412fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1410;
 rt_int *length_1411;
};
struct f_lib_store_1415fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1413;
 rt_gstr contents_1414;
};
struct f_unit_key_1418fr { int dummy;
 struct f_greenc_1fr *up;
 P175 u_1416;
 P141 *r_1417;
 rt_int k_3554;
};
struct f_lib_enabled_1420fr { int dummy;
 struct f_greenc_1fr *up;
 int *yes_1419;
};
struct f_store_units_1421fr { int dummy;
 struct f_greenc_1fr *up;
 P205 s_3562;
 P141 k_3563;
 int yes_3564;
};
struct f_store_span_1424fr { int dummy;
 struct f_greenc_1fr *up;
 P205 s_1422;
 rt_gstr key_1423;
 rt_int n_3566;
 P141 head_3567;
 rt_int l_3575;
 rt_gstr t_3582;
 rt_int k_3584;
 rt_int l_3588;
};
struct f_lib_load_1427fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr key_1425;
 P175 *r_1426;
 rt_int n_3599;
 rt_int saved_line_3600;
 rt_int saved_pos_3601;
 rt_int from_3602;
};
struct f_defined_unit_1430fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1428;
 P175 before_1429;
 int result_;
 P175 u_3603;
};
struct f_library_units_1431fr { int dummy;
 struct f_greenc_1fr *up;
 P175 p_3606;
 P175 prev_3607;
 P175 l_3608;
 P175 ltail_3609;
 rt_int i_3610;
 rt_int j_3611;
 P141 n_3612;
 P141 f_3613;
 int changed_3614;
};
struct f_load_unit_1434fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1432;
 P175 *r_1433;
 P175 s_3627;
 P175 b_3628;
 P175 t_3629;
};
struct f_predefined_unit_1437fr { int dummy;
 struct f_greenc_1fr *up;
 rt_gstr name_1435;
 P175 *r_1436;
 rt_int saved_pos_3631;
 rt_int from_3632;
};
struct f_prelude_1438fr { int dummy;
 struct f_greenc_1fr *up;
};
struct f_used_units_1441fr { int dummy;
 struct f_greenc_1fr *up;
 P175 u_1439;
 P141 *r_1440;
 P175 p_3633;
 P175 main_3634;
 int changed_3635;
};
struct f_add_names_1445fr { int dummy;
 struct f_greenc_1fr *up;
 P141 *r_1442;
 rt_gstr list_1443;
 int *changed_1444;
 rt_int i_3647;
 rt_int j_3649;
};
struct f_translate_1447fr { int dummy;
 struct f_greenc_1fr *up;
 P175 u_1446;
 P175 p_3660;
 P141 used_3661;
 P118 y_3662;
};
struct f_last_unit_1449fr { int dummy;
 struct f_greenc_1fr *up;
 P175 p_1448;
 int result_;
 P175 q_3669;
};
struct f_print_program_1450fr { int dummy;
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
 rt_int n_rep_42;
 rt_int n_var_43;
 rt_int n_const_44;
 rt_int n_type_45;
 rt_int n_subtype_46;
 rt_int n_proc_47;
 rt_int n_func_48;
 rt_int n_exc_49;
 rt_int n_param_50;
 rt_int n_pkgspec_51;
 rt_int n_pkgbody_52;
 rt_int n_taskspec_53;
 rt_int n_taskbody_54;
 rt_int n_entry_55;
 rt_int n_inst_56;
 rt_int n_generic_57;
 rt_int n_use_58;
 rt_int n_pragma_59;
 rt_int n_slabel_60;
 rt_int n_goto_61;
 rt_int n_arm_62;
 rt_int n_label_63;
 rt_int n_handler_64;
 rt_int n_comp_65;
 rt_int n_alt_66;
 rt_int d_enum_67;
 rt_int d_range_68;
 rt_int d_float_69;
 rt_int d_array_70;
 rt_int d_record_71;
 rt_int d_access_72;
 rt_int d_derived_73;
 rt_int d_private_74;
 rt_int s_mark_75;
 rt_int m_in_76;
 rt_int m_inout_77;
 rt_int m_out_78;
 rt_int t_int_79;
 rt_int t_bool_80;
 rt_int t_float_81;
 rt_int t_enum_82;
 rt_int t_string_83;
 rt_int t_array_84;
 rt_int t_record_85;
 rt_int t_ptr_86;
 rt_int t_void_87;
 rt_int t_nil_88;
 rt_int t_char_89;
 rt_int t_univ_90;
 rt_int t_act_91;
 rt_int t_tdecl_92;
 rt_int t_entry_93;
 rt_int t_fixed_94;
 rt_int y_var_95;
 rt_int y_const_96;
 rt_int y_func_97;
 rt_int y_proc_98;
 rt_int y_type_99;
 rt_int y_exc_100;
 rt_int y_enumlit_101;
 rt_int y_package_102;
 rt_int y_task_103;
 rt_int y_entry_104;
 rt_int y_generic_105;
 rt_int y_conflict_106;
 rt_int f_const_obj_107;
 rt_int f_deferred_108;
 A110 toks_113;
 rt_int ntoks_114;
 rt_int tpos_115;
 rt_int src_line_116;
 A117 table_120;
 rt_int depth_121;
 P118 scope_stack_122;
 P123 all_types_125;
 rt_int serial_126;
 P127 out_types_129;
 P127 out_frames_130;
 P127 out_helpers_131;
 P127 out_protos_132;
 P127 out_globals_133;
 P127 out_funcs_134;
 P127 out_init_135;
 P127 out_excs_136;
 P127 code_137;
 P127 fields_buf_138;
 int in_func_139;
 rt_int cur_level_140;
 P141 st_field_142;
 P118 func_sym_143;
 P144 exits_146;
 P147 generic_contexts_149;
 P144 accept_exits_150;
 rt_int frames_151;
 P152 handlers_154;
 P152 cleanups_155;
 rt_int trial_156;
 P123 ty_int_157;
 P123 ty_bool_158;
 P123 ty_float_159;
 P123 ty_char_160;
 P123 ty_string_161;
 P123 ty_void_162;
 P123 ty_nil_163;
 P123 ty_univ_164;
 P123 ty_act_165;
 P123 ty_tdecl_166;
 P123 ty_entry_167;
 P123 ty_short_168;
 P123 ty_long_169;
 P123 ty_sfloat_170;
 P123 ty_lfloat_171;
 P123 ty_time_172;
 P123 ty_ufixed_173;
 P123 completing_174;
 P175 anon_node_177;
 P123 anon_typ_178;
 P179 anon_cons_181;
 P141 agg_bounds_182;
 P118 disc_syms_183;
 A184 unit_names_185;
 A186 unit_depths_187;
 rt_int nunits_189;
 P190 body_labels_192;
 P190 body_gotos_193;
 rt_int segments_194;
 P144 handler_exits_195;
 rt_int handler_depth_196;
 P141 post_checks_197;
 P141 env_names_198;
 P199 barriers_201;
 int text_io_qualified_202;
 A203 src_lines_204;
 P205 spans_207;
 int compiling_source_208;
 P141 loaded_209;
 P141 cur_comp_unit_210;
 rt_int in_instance_211;
 P118 cur_task_212;
 rt_int accept_depth_213;
 int famarg_done_214;
 P175 fam_ix_215;
 P175 call_task_ix_216;
 int saw_interface_217;
 P218 reps_220;
 P221 addrs_223;
 P175 cur_body_224;
 P141 saw_lang_225;
 int defer_entry_structs_226;
 P127 out_awaits_227;
 P179 no_cons_228;
 P175 units_229;
 P175 prelude_units_230;
 P152 pkg_stack_231;
 P175 cur_pkg_232;
 P141 prefix_hint_233;
 P123 call_want_234;
 P118 pure_sym_235;
 rt_int pure_depth_236;
 int vrp_ok_237;
 int in_lv_path_238;
 int last_deref_239;
 P141 main_name_240;
 P141 conf_system_241;
 rt_int conf_storage_unit_242;
 rt_int conf_memory_size_243;
 P141 conf_optimize_244;
};
static void as_A3468(A3468 *d, A3468 s);
static A3468 cp_A3468(A3468 s);
static int eq_A3468(A3468 a, A3468 b);
static A3468 cat_A3468(A3468 a, A3468 b);
static A3468 one_A3468(int e);
static A3468 and_A3468(A3468 a, A3468 b);
static A3468 or_A3468(A3468 a, A3468 b);
static A3468 xor_A3468(A3468 a, A3468 b);
static A3468 not_A3468(A3468 a);
static void as_A3465(A3465 *d, A3465 s);
static A3465 cp_A3465(A3465 s);
static int eq_A3465(A3465 a, A3465 b);
static A3465 cat_A3465(A3465 a, A3465 b);
static A3465 one_A3465(rt_int e);
static void as_A2823(A2823 *d, A2823 s);
static A2823 cp_A2823(A2823 s);
static int eq_A2823(A2823 a, A2823 b);
static A2823 cat_A2823(A2823 a, A2823 b);
static A2823 one_A2823(rt_int e);
static void as_A2820(A2820 *d, A2820 s);
static A2820 cp_A2820(A2820 s);
static int eq_A2820(A2820 a, A2820 b);
static A2820 cat_A2820(A2820 a, A2820 b);
static A2820 one_A2820(rt_int e);
static void as_A2815(A2815 *d, A2815 s);
static A2815 cp_A2815(A2815 s);
static int eq_A2815(A2815 a, A2815 b);
static A2815 cat_A2815(A2815 a, A2815 b);
static A2815 one_A2815(int e);
static A2815 and_A2815(A2815 a, A2815 b);
static A2815 or_A2815(A2815 a, A2815 b);
static A2815 xor_A2815(A2815 a, A2815 b);
static A2815 not_A2815(A2815 a);
static void as_A2486(A2486 *d, A2486 s);
static A2486 cp_A2486(A2486 s);
static int eq_A2486(A2486 a, A2486 b);
static A2486 cat_A2486(A2486 a, A2486 b);
static A2486 one_A2486(rt_int e);
static void as_R2150(R2150 *d, R2150 s);
static R2150 cp_R2150(R2150 s);
static int eq_R2150(R2150 a, R2150 b);
static void as_R2116(R2116 *d, R2116 s);
static R2116 cp_R2116(R2116 s);
static int eq_R2116(R2116 a, R2116 b);
static void as_R2024(R2024 *d, R2024 s);
static R2024 cp_R2024(R2024 s);
static int eq_R2024(R2024 a, R2024 b);
static void as_R2020(R2020 *d, R2020 s);
static R2020 cp_R2020(R2020 s);
static int eq_R2020(R2020 a, R2020 b);
static void as_R2002(R2002 *d, R2002 s);
static R2002 cp_R2002(R2002 s);
static int eq_R2002(R2002 a, R2002 b);
static void as_R222(R222 *d, R222 s);
static R222 cp_R222(R222 s);
static int eq_R222(R222 a, R222 b);
static void as_R219(R219 *d, R219 s);
static R219 cp_R219(R219 s);
static int eq_R219(R219 a, R219 b);
static void as_R206(R206 *d, R206 s);
static R206 cp_R206(R206 s);
static int eq_R206(R206 a, R206 b);
static void as_A203(A203 *d, A203 s);
static A203 cp_A203(A203 s);
static int eq_A203(A203 a, A203 b);
static A203 cat_A203(A203 a, A203 b);
static A203 one_A203(P141 e);
static void as_R200(R200 *d, R200 s);
static R200 cp_R200(R200 s);
static int eq_R200(R200 a, R200 b);
static void as_R191(R191 *d, R191 s);
static R191 cp_R191(R191 s);
static int eq_R191(R191 a, R191 b);
static void as_A186(A186 *d, A186 s);
static A186 cp_A186(A186 s);
static int eq_A186(A186 a, A186 b);
static A186 cat_A186(A186 a, A186 b);
static A186 one_A186(rt_int e);
static void as_A184(A184 *d, A184 s);
static A184 cp_A184(A184 s);
static int eq_A184(A184 a, A184 b);
static A184 cat_A184(A184 a, A184 b);
static A184 one_A184(P141 e);
static void as_R180(R180 *d, R180 s);
static R180 cp_R180(R180 s);
static int eq_R180(R180 a, R180 b);
static void as_R176(R176 *d, R176 s);
static R176 cp_R176(R176 s);
static int eq_R176(R176 a, R176 b);
static void as_R153(R153 *d, R153 s);
static R153 cp_R153(R153 s);
static int eq_R153(R153 a, R153 b);
static void as_R148(R148 *d, R148 s);
static R148 cp_R148(R148 s);
static int eq_R148(R148 a, R148 b);
static void as_R145(R145 *d, R145 s);
static R145 cp_R145(R145 s);
static int eq_R145(R145 a, R145 b);
static void as_R128(R128 *d, R128 s);
static R128 cp_R128(R128 s);
static int eq_R128(R128 a, R128 b);
static void as_R124(R124 *d, R124 s);
static R124 cp_R124(R124 s);
static int eq_R124(R124 a, R124 b);
static void as_R119(R119 *d, R119 s);
static R119 cp_R119(R119 s);
static int eq_R119(R119 a, R119 b);
static void as_A117(A117 *d, A117 s);
static A117 cp_A117(A117 s);
static int eq_A117(A117 a, A117 b);
static A117 cat_A117(A117 a, A117 b);
static A117 one_A117(P118 e);
static void as_R112(R112 *d, R112 s);
static R112 cp_R112(R112 s);
static int eq_R112(R112 a, R112 b);
static void as_A110(A110 *d, A110 s);
static A110 cp_A110(A110 s);
static int eq_A110(A110 a, A110 b);
static A110 cat_A110(A110 a, A110 b);
static A110 one_A110(P111 e);
static void as_rt_gstr(rt_gstr *d, rt_gstr s);
static rt_gstr cp_rt_gstr(rt_gstr s);
static int eq_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr cat_rt_gstr(rt_gstr a, rt_gstr b);
static rt_gstr one_rt_gstr(int e);
static P141 f_mk_246(struct f_greenc_1fr *up_, rt_gstr s_245);
static void f_new_name_249(struct f_greenc_1fr *up_, rt_gstr base_247, P141 *res_248);
static int f_is_letter_251(struct f_greenc_1fr *up_, int c_250);
static int f_is_digit_253(struct f_greenc_1fr *up_, int c_252);
static int f_upper_255(struct f_greenc_1fr *up_, int c_254);
static rt_gstr f_lower_s_257(struct f_greenc_1fr *up_, rt_gstr s_256);
static rt_gstr f_upper_s_259(struct f_greenc_1fr *up_, rt_gstr s_258);
static int f_is_operator_261(struct f_greenc_1fr *up_, rt_gstr s_260);
static rt_gstr f_c_field_263(struct f_greenc_1fr *up_, rt_gstr s_262);
static rt_gstr f_q_264(struct f_greenc_1fr *up_);
static void f_fail_267(struct f_greenc_1fr *up_, rt_int line_265, rt_gstr msg_266);
static P127 f_new_buffer_268(struct f_greenc_1fr *up_);
static void f_put_to_271(struct f_greenc_1fr *up_, P127 b_269, rt_gstr s_270);
static void f_emit_273(struct f_greenc_1fr *up_, rt_gstr s_272);
static void f_print_buffer_275(struct f_greenc_1fr *up_, P127 b_274);
static void f_splice_278(struct f_greenc_1fr *up_, P127 a_276, P127 b_277);
static int f_is_reserved_280(struct f_greenc_1fr *up_, rt_gstr w_279);
static void f_add_token_284(struct f_greenc_1fr *up_, rt_int kind_281, rt_gstr s_282, rt_int ival_283);
static rt_int f_digit_value_286(struct f_greenc_1fr *up_, int c_285);
static rt_int f_digit_in_289(struct f_greenc_1fr *up_, int c_287, rt_int base_288);
static void f_accumulate_293(struct f_greenc_1fr *up_, rt_int *v_290, rt_int base_291, rt_int d_292);
static void f_lex_line_295(struct f_greenc_1fr *up_, rt_gstr line_294);
static int f_exponent_ahead_298(struct f_greenc_1fr *up_, rt_gstr line_296, rt_int j_297);
static void f_exponent_303(struct f_greenc_1fr *up_, rt_gstr line_299, rt_int *j_300, rt_gstr *buf_301, rt_int *bl_302);
static void f_include_open_306(struct f_greenc_1fr *up_, rt_gstr name_304, rt_int *length_305);
static void f_include_char_309(struct f_greenc_1fr *up_, rt_int i_307, int *c_308);
static void f_check_include_310(struct f_greenc_1fr *up_);
static void f_include_text_312(struct f_greenc_1fr *up_, rt_int n_311);
static void f_include_line_316(struct f_greenc_1fr *up_, rt_gstr t_313, rt_int from_314, rt_int to_315);
static void f_read_source_317(struct f_greenc_1fr *up_);
static P175 f_nn_320(struct f_greenc_1fr *up_, rt_int kind_318, rt_int line_319);
static void f_append_324(struct f_greenc_1fr *up_, P175 *head_321, P175 *tail_322, P175 x_323);
static rt_int f_list_len_326(struct f_greenc_1fr *up_, P175 l_325);
static rt_int f_cur_line_327(struct f_greenc_1fr *up_);
static int f_at_kw_329(struct f_greenc_1fr *up_, rt_gstr w_328);
static int f_at_op_331(struct f_greenc_1fr *up_, rt_gstr w_330);
static int f_at_kind_333(struct f_greenc_1fr *up_, rt_int k_332);
static rt_int f_kind_at_335(struct f_greenc_1fr *up_, rt_int k_334);
static rt_gstr f_text_at_337(struct f_greenc_1fr *up_, rt_int k_336);
static void f_perror_339(struct f_greenc_1fr *up_, rt_gstr msg_338);
static void f_skip_340(struct f_greenc_1fr *up_);
static void f_expect_kw_342(struct f_greenc_1fr *up_, rt_gstr w_341);
static void f_expect_op_344(struct f_greenc_1fr *up_, rt_gstr w_343);
static void f_expect_id_346(struct f_greenc_1fr *up_, P141 *res_345);
static void f_name_node_348(struct f_greenc_1fr *up_, P175 *res_347);
static void f_id_list_350(struct f_greenc_1fr *up_, P175 *res_349);
static P175 f_binop_355(struct f_greenc_1fr *up_, P141 op_351, P175 l_352, P175 r_353, rt_int line_354);
static void f_expr_357(struct f_greenc_1fr *up_, P175 *res_356);
static int f_is_rel_359(struct f_greenc_1fr *up_, rt_gstr s_358);
static void f_relation_361(struct f_greenc_1fr *up_, P175 *res_360);
static rt_gstr f_path_of_363(struct f_greenc_1fr *up_, P175 e_362);
static void f_simple_expr_365(struct f_greenc_1fr *up_, P175 *res_364);
static void f_term_367(struct f_greenc_1fr *up_, P175 *res_366);
static void f_factor_369(struct f_greenc_1fr *up_, P175 *res_368);
static void f_primary_371(struct f_greenc_1fr *up_, P175 *res_370);
static void f_agg_or_paren_373(struct f_greenc_1fr *up_, P175 *res_372);
static int f_choice_token_375(struct f_greenc_1fr *up_, P111 t_374);
static int f_aggregate_ahead_376(struct f_greenc_1fr *up_);
static void f_name_p_378(struct f_greenc_1fr *up_, P175 *res_377);
static void f_component_list_380(struct f_greenc_1fr *up_, P175 *res_379);
static void f_discrete_range_p_382(struct f_greenc_1fr *up_, P175 *res_381);
static void f_subtype_ind_384(struct f_greenc_1fr *up_, P175 *res_383);
static void f_type_spec_386(struct f_greenc_1fr *up_, P175 *res_385);
static void f_type_def_388(struct f_greenc_1fr *up_, P175 *res_387);
static void f_pragma_p_390(struct f_greenc_1fr *up_, P175 *res_389);
static void f_check_pragma_392(struct f_greenc_1fr *up_, P175 x_391);
static void f_visibility_p_394(struct f_greenc_1fr *up_, P141 *res_393);
static void f_unit_p_396(struct f_greenc_1fr *up_, P175 *res_395);
static void f_rep_spec_398(struct f_greenc_1fr *up_, P175 *res_397);
static void f_decl_part_400(struct f_greenc_1fr *up_, P175 *res_399);
static void f_object_decl_402(struct f_greenc_1fr *up_, P175 *res_401);
static void f_type_decl_404(struct f_greenc_1fr *up_, P175 *res_403);
static void f_formal_part_406(struct f_greenc_1fr *up_, P175 *res_405);
static void f_designator_408(struct f_greenc_1fr *up_, P141 *res_407);
static void f_subprogram_410(struct f_greenc_1fr *up_, P175 *res_409);
static void f_body_part_412(struct f_greenc_1fr *up_, P175 x_411);
static void f_parse_handlers_414(struct f_greenc_1fr *up_, P175 *res_413);
static void f_package_p_416(struct f_greenc_1fr *up_, P175 *res_415);
static int f_at_statements_end_417(struct f_greenc_1fr *up_);
static void f_statements_419(struct f_greenc_1fr *up_, P175 *res_418);
static void f_statement_421(struct f_greenc_1fr *up_, P175 *res_420);
static void f_labelled_statement_424(struct f_greenc_1fr *up_, P141 label_422, P175 *res_423);
static void f_task_statement_426(struct f_greenc_1fr *up_, P175 *res_425);
static void f_if_stmt_428(struct f_greenc_1fr *up_, P175 *res_427);
static void f_case_stmt_430(struct f_greenc_1fr *up_, P175 *res_429);
static void f_loop_stmt_432(struct f_greenc_1fr *up_, P175 *res_431);
static void f_compilation_434(struct f_greenc_1fr *up_, P175 *res_433);
static rt_int f_hash_436(struct f_greenc_1fr *up_, rt_gstr s_435);
static int f_listed_439(struct f_greenc_1fr *up_, P141 list_437, rt_gstr name_438);
static int f_visible_sym_441(struct f_greenc_1fr *up_, P118 y_440);
static P118 f_lookup_443(struct f_greenc_1fr *up_, rt_gstr name_442);
static int f_same_task_446(struct f_greenc_1fr *up_, P118 a_444, P118 b_445);
static P118 f_lookup_entry_449(struct f_greenc_1fr *up_, rt_gstr name_447, P118 owner_448);
static P118 f_lookup_at_452(struct f_greenc_1fr *up_, rt_gstr name_450, rt_int d_451);
static rt_int f_enclosing_depth_454(struct f_greenc_1fr *up_, rt_gstr name_453);
static void f_push_unit_456(struct f_greenc_1fr *up_, P141 name_455);
static P118 f_lookup_decl_458(struct f_greenc_1fr *up_, P175 d_457);
static int f_overloadable_460(struct f_greenc_1fr *up_, P118 y_459);
static int f_same_463(struct f_greenc_1fr *up_, P123 a_461, P123 b_462);
static P123 f_base_view_465(struct f_greenc_1fr *up_, P123 t_464);
static P123 f_root_467(struct f_greenc_1fr *up_, P123 t_466);
static int f_derived_from_470(struct f_greenc_1fr *up_, P123 a_468, P123 b_469);
static int f_is_numeric_472(struct f_greenc_1fr *up_, P123 t_471);
static int f_is_discrete_474(struct f_greenc_1fr *up_, P123 t_473);
static int f_same_types_477(struct f_greenc_1fr *up_, P2001 a_475, P2001 b_476);
static int f_same_signature_480(struct f_greenc_1fr *up_, P2001 a_478, P2001 b_479);
static int f_distinct_overload_483(struct f_greenc_1fr *up_, P118 y_481, P118 z_482);
static void f_define_486(struct f_greenc_1fr *up_, P118 y_484, rt_int line_485);
static void f_open_scope_487(struct f_greenc_1fr *up_);
static void f_close_scope_488(struct f_greenc_1fr *up_);
static P118 f_new_sym_491(struct f_greenc_1fr *up_, rt_int kind_489, P141 name_490);
static P123 f_new_typ_493(struct f_greenc_1fr *up_, rt_int kind_492);
static P179 f_new_cons_494(struct f_greenc_1fr *up_);
static int f_bounded_496(struct f_greenc_1fr *up_, P179 c_495);
static int f_bounded_hi_498(struct f_greenc_1fr *up_, P179 c_497);
static int f_static_bounds_500(struct f_greenc_1fr *up_, P179 c_499);
static int f_discriminated_502(struct f_greenc_1fr *up_, P179 c_501);
static rt_gstr f_kind_name_504(struct f_greenc_1fr *up_, P123 t_503);
static void f_check_type_508(struct f_greenc_1fr *up_, P123 got_505, P123 want_506, rt_int line_507);
static rt_int f_field_count_510(struct f_greenc_1fr *up_, P123 t_509);
static void f_ctype_513(struct f_greenc_1fr *up_, P123 t_511, P141 *r_512);
static void f_field_decls_516(struct f_greenc_1fr *up_, P123 t_514, P141 *r_515);
static void f_declare_ctype_518(struct f_greenc_1fr *up_, P123 t_517);
static rt_int f_lit_index_521(struct f_greenc_1fr *up_, P175 lits_519, rt_gstr name_520);
static void f_manifest_525(struct f_greenc_1fr *up_, P175 e_522, rt_int *v_523, int *ok_524);
static void f_resolve_529(struct f_greenc_1fr *up_, P175 st_526, P123 *t_527, P179 *c_528);
static void f_constraint_list_533(struct f_greenc_1fr *up_, P175 st_530, P123 t_531, P179 c_532);
static void f_discriminant_constraint_537(struct f_greenc_1fr *up_, P175 st_534, P123 t_535, P179 c_536);
static void f_discrete_bounds_543(struct f_greenc_1fr *up_, P175 r_538, P123 want_539, P123 *t_540, P141 *lo_541, P141 *hi_542);
static void f_range_of_547(struct f_greenc_1fr *up_, P175 r_544, P123 t_545, P179 c_546);
static void f_fresh_typ_551(struct f_greenc_1fr *up_, rt_int kind_548, P141 name_549, P123 *t_550);
static void f_inherit_555(struct f_greenc_1fr *up_, P123 parent_552, P123 t_553, rt_int line_554);
static void f_derive_literals_558(struct f_greenc_1fr *up_, P123 t_556, rt_int line_557);
static void f_type_definition_563(struct f_greenc_1fr *up_, P175 d_559, P141 name_560, P123 *t_561, P179 *c_562);
static void f_array_type_570(struct f_greenc_1fr *up_, P175 idx_564, P175 comp_565, P141 name_566, rt_int line_567, P123 *t_568, P179 *c_569);
static void f_static_range_574(struct f_greenc_1fr *up_, P175 l_571, P175 h_572, P179 c_573);
static void f_component_place_580(struct f_greenc_1fr *up_, P123 rt_575, P2019 f_576, rt_gstr a_577, rt_gstr ct_578, P141 *r_579);
static rt_gstr f_no_value_582(struct f_greenc_1fr *up_, P123 t_581);
static int f_restricted_here_584(struct f_greenc_1fr *up_, P123 t_583);
static void f_elem_ctype_587(struct f_greenc_1fr *up_, P123 t_585, P141 *r_586);
static void f_first_index_590(struct f_greenc_1fr *up_, P123 t_588, P141 *r_589);
static int f_is_string_592(struct f_greenc_1fr *up_, P123 t_591);
static rt_gstr f_subst_595(struct f_greenc_1fr *up_, rt_gstr s_593, rt_gstr r_594);
static int f_mentions_record_597(struct f_greenc_1fr *up_, P141 s_596);
static void f_subst_cons_601(struct f_greenc_1fr *up_, P179 c_598, rt_gstr r_599, P179 *res_600);
static void f_remove_sym_603(struct f_greenc_1fr *up_, P118 y_602);
static void f_record_components_608(struct f_greenc_1fr *up_, P175 list_604, P123 t_605, P2149 g_606, rt_int line_607);
static void f_guard_cond_612(struct f_greenc_1fr *up_, P2149 g_609, P123 t_610, P141 *r_611);
static void f_arm_test_617(struct f_greenc_1fr *up_, P175 arm_613, P141 dname_614, rt_gstr d_615, P141 *x_616);
static void f_derived_type_622(struct f_greenc_1fr *up_, P175 d_618, P141 name_619, P123 *t_620, P179 *c_621);
static void f_real_type_627(struct f_greenc_1fr *up_, P175 d_623, P141 name_624, P123 *t_625, P179 *c_626);
static void f_finish_ptr_629(struct f_greenc_1fr *up_, P123 t_628);
static void f_init_storage_633(struct f_greenc_1fr *up_, rt_gstr lval_630, P123 t_631, P179 c_632);
static int f_composite_635(struct f_greenc_1fr *up_, P123 t_634);
static void f_assign_code_641(struct f_greenc_1fr *up_, rt_gstr lval_636, P123 t_637, rt_gstr v_638, P179 c_639, P141 *r_640);
static void f_copy_code_645(struct f_greenc_1fr *up_, P123 t_642, rt_gstr v_643, P141 *r_644);
static void f_eq_code_650(struct f_greenc_1fr *up_, P123 t_646, rt_gstr a_647, rt_gstr b_648, P141 *r_649);
static int f_seen_name_653(struct f_greenc_1fr *up_, P152 l_651, rt_gstr s_652);
static void f_emit_helpers_654(struct f_greenc_1fr *up_);
static void f_helper_bodies_656(struct f_greenc_1fr *up_, P123 t_655);
static void f_storage_660(struct f_greenc_1fr *up_, rt_gstr name_657, P123 t_658, P141 *access_code_659);
static void f_bind_663(struct f_greenc_1fr *up_, P118 y_661, P141 access_code_662);
static void f_declare_subprograms_665(struct f_greenc_1fr *up_, P175 from_664);
static int f_generic_before_668(struct f_greenc_1fr *up_, P175 from_666, P175 e_667);
static void f_declare_one_670(struct f_greenc_1fr *up_, P175 e_669);
static void f_elaborate_defaults_672(struct f_greenc_1fr *up_, P118 y_671);
static void f_build_subprogram_675(struct f_greenc_1fr *up_, P175 d_673, P118 *y_674);
static void f_decl_elements_677(struct f_greenc_1fr *up_, P175 decls_676);
static void f_decl_element_679(struct f_greenc_1fr *up_, P175 e_678);
static void f_decl_element_1_681(struct f_greenc_1fr *up_, P175 e_680);
static void f_pragma_decl_683(struct f_greenc_1fr *up_, P175 e_682);
static void f_resolve_object_type_687(struct f_greenc_1fr *up_, P175 st_684, P123 *t_685, P179 *c_686);
static void f_find_subunit_690(struct f_greenc_1fr *up_, P175 e_688, P175 *r_689);
static void f_stub_692(struct f_greenc_1fr *up_, P175 e_691);
static void f_rename_subprogram_694(struct f_greenc_1fr *up_, P175 e_693);
static void f_rename_module_697(struct f_greenc_1fr *up_, P175 e_695, P175 target_696);
static void f_push_barrier_700(struct f_greenc_1fr *up_, P175 e_698, rt_int limit_699);
static void f_other_decl_702(struct f_greenc_1fr *up_, P175 e_701);
static void f_scan_labels_705(struct f_greenc_1fr *up_, P175 stmts_703, rt_gstr path_704);
static void f_scan_guarded_709(struct f_greenc_1fr *up_, P175 stmts_706, P175 hs_707, rt_gstr path_708);
static rt_int f_count_g_711(struct f_greenc_1fr *up_, rt_gstr p_710);
static void f_label_body_714(struct f_greenc_1fr *up_, P175 stmts_712, P175 hs_713);
static void f_gen_label_717(struct f_greenc_1fr *up_, P175 s_715, int goto_it_716);
static int f_is_foreign_719(struct f_greenc_1fr *up_, P175 d_718);
static void f_foreign_call_723(struct f_greenc_1fr *up_, P175 d_720, P118 y_721, P141 *r_722);
static void f_unsafe_bits_729(struct f_greenc_1fr *up_, P123 s_724, P123 t_725, rt_gstr v_726, rt_gstr ct_727, P141 *r_728);
static P118 f_code_type_731(struct f_greenc_1fr *up_, P175 s_730);
static void f_check_code_body_734(struct f_greenc_1fr *up_, P175 d_732, P118 y_733);
static void f_subprogram_body_737(struct f_greenc_1fr *up_, P175 d_735, P118 y_736);
static void f_gen_statements_739(struct f_greenc_1fr *up_, P175 stmts_738);
static void f_pop_frames_741(struct f_greenc_1fr *up_, rt_int upto_740);
static void f_push_cleanup_743(struct f_greenc_1fr *up_, rt_gstr s_742);
static void f_pop_cleanup_744(struct f_greenc_1fr *up_);
static void f_guarded_749(struct f_greenc_1fr *up_, P175 decls_745, P175 stmts_746, P175 hs_747, rt_int line_748);
static void f_exc_id_753(struct f_greenc_1fr *up_, rt_gstr name_750, rt_int line_751, P141 *r_752);
static void f_gen_statement_755(struct f_greenc_1fr *up_, P175 s_754);
static void f_slice_assign_757(struct f_greenc_1fr *up_, P175 s_756);
static void f_gen_call_759(struct f_greenc_1fr *up_, P175 s_758);
static void f_gen_if_761(struct f_greenc_1fr *up_, P175 s_760);
static void f_gen_case_763(struct f_greenc_1fr *up_, P175 s_762);
static void f_selector_range_769(struct f_greenc_1fr *up_, P175 e_764, P123 t_765, rt_int *lo_766, rt_int *hi_767, int *ok_768);
static void f_push_exit_773(struct f_greenc_1fr *up_, P141 match_770, int is_loop_771, P141 *label_772);
static void f_gen_loop_775(struct f_greenc_1fr *up_, P175 s_774);
static void f_gen_block_777(struct f_greenc_1fr *up_, P175 s_776);
static int f_exit_matches_780(struct f_greenc_1fr *up_, P175 s_778, P144 x_779);
static void f_gen_exit_782(struct f_greenc_1fr *up_, P175 s_781);
static void f_gen_return_784(struct f_greenc_1fr *up_, P175 s_783);
static void f_access_of_787(struct f_greenc_1fr *up_, P118 y_785, P141 *r_786);
static void f_link_to_790(struct f_greenc_1fr *up_, rt_int l_788, P141 *r_789);
static rt_gstr f_c_ident_792(struct f_greenc_1fr *up_, rt_gstr s_791);
static void f_deref_796(struct f_greenc_1fr *up_, rt_gstr base_793, P123 t_794, P141 *r_795);
static int f_is_object_798(struct f_greenc_1fr *up_, P175 e_797);
static int f_is_const_access_800(struct f_greenc_1fr *up_, P175 e_799);
static void f_lvalue_806(struct f_greenc_1fr *up_, P175 e_801, P141 *code_out_802, P123 *t_803, P179 *c_804, int *ro_805);
static void f_select_on_815(struct f_greenc_1fr *up_, rt_gstr base_807, P123 bt_808, P175 e_809, int *ro_810, int lv_811, P141 *code_out_812, P123 *t_813, P179 *c_814);
static void f_index_on_824(struct f_greenc_1fr *up_, rt_gstr base_816, P123 bt_817, P175 e_818, int *ro_819, int lv_820, P141 *code_out_821, P123 *t_822, P179 *c_823);
static int f_type_attribute_827(struct f_greenc_1fr *up_, P123 t_825, rt_gstr name_826);
static int f_is_type_name_829(struct f_greenc_1fr *up_, rt_gstr n_828);
static int f_is_char_lit_831(struct f_greenc_1fr *up_, P175 e_830);
static int f_is_enum_lit_833(struct f_greenc_1fr *up_, P175 e_832);
static rt_gstr f_c_string_835(struct f_greenc_1fr *up_, rt_gstr s_834);
static int f_is_literal_837(struct f_greenc_1fr *up_, P175 e_836);
static void f_range_bounds_845(struct f_greenc_1fr *up_, P175 l_838, P175 h_839, P123 want_840, rt_int line_841, P123 *t_842, P141 *lo_843, P141 *hi_844);
static void f_gexpr_850(struct f_greenc_1fr *up_, P175 e_846, P123 want_847, P123 *t_848, P141 *r_849);
static void f_gexpr_1_855(struct f_greenc_1fr *up_, P175 e_851, P123 want_852, P123 *t_853, P141 *r_854);
static void f_string_aggregate_860(struct f_greenc_1fr *up_, P175 e_856, P123 want_857, P123 *t_858, P141 *r_859);
static void f_char_literal_865(struct f_greenc_1fr *up_, P175 e_861, P123 want_862, P123 *t_863, P141 *r_864);
static void f_expanded_868(struct f_greenc_1fr *up_, P175 e_866, P175 *r_867);
static void f_gen_name_873(struct f_greenc_1fr *up_, P175 e_869, P123 want_870, P123 *t_871, P141 *r_872);
static void f_gen_unop_878(struct f_greenc_1fr *up_, P175 e_874, P123 want_875, P123 *t_876, P141 *r_877);
static int f_short_int_880(struct f_greenc_1fr *up_, P123 t_879);
static rt_gstr f_float_kind_882(struct f_greenc_1fr *up_, P123 t_881);
static void f_membership_885(struct f_greenc_1fr *up_, P175 e_883, P141 *r_884);
static void f_condition_890(struct f_greenc_1fr *up_, P175 e_886, P123 want_887, P123 *t_888, P141 *r_889);
static void f_catenation_895(struct f_greenc_1fr *up_, P175 e_891, P123 want_892, P123 *t_893, P141 *r_894);
static void f_cat_operand_900(struct f_greenc_1fr *up_, P175 x_896, P123 arrt_897, rt_int line_898, P141 *r_899);
static void f_arithmetic_905(struct f_greenc_1fr *up_, P175 e_901, P123 want_902, P123 *t_903, P141 *r_904);
static void f_fixed_operation_913(struct f_greenc_1fr *up_, P175 e_906, P123 ta_907, P123 tb_908, rt_gstr a_909, rt_gstr b_910, P123 *t_911, P141 *r_912);
static void f_gen_binop_918(struct f_greenc_1fr *up_, P175 e_914, P123 want_915, P123 *t_916, P141 *r_917);
static void f_code_statement_922(struct f_greenc_1fr *up_, P175 e_919, P118 y_920, P141 *r_921);
static void f_conversion_927(struct f_greenc_1fr *up_, P175 e_923, P118 y_924, P123 *t_925, P141 *r_926);
static void f_constrain_931(struct f_greenc_1fr *up_, P118 y_928, P123 t_929, P141 *r_930);
static void f_array_conversion_938(struct f_greenc_1fr *up_, P175 e_932, P123 t_933, P123 aty_934, P179 c_935, rt_gstr a_936, P141 *r_937);
static void f_gen_attr_943(struct f_greenc_1fr *up_, P175 e_939, P123 want_940, P123 *t_941, P141 *r_942);
static void f_type_bits_947(struct f_greenc_1fr *up_, P123 t_944, P179 c_945, P141 *r_946);
static void f_object_bits_951(struct f_greenc_1fr *up_, P123 t_948, rt_gstr v_949, P141 *r_950);
static void f_numeric_attr_957(struct f_greenc_1fr *up_, P175 e_952, P123 tt_953, P179 c_954, P123 *t_955, P141 *r_956);
static void f_component_attr_961(struct f_greenc_1fr *up_, P175 e_958, P123 *t_959, P141 *r_960);
static void f_config_attr_965(struct f_greenc_1fr *up_, P175 e_962, P123 *t_963, P141 *r_964);
static void f_attr_dim_969(struct f_greenc_1fr *up_, P175 e_966, P123 arrt_967, rt_int *n_968);
static void f_object_array_attr_975(struct f_greenc_1fr *up_, P175 e_970, P123 arrt_971, rt_gstr v_972, P123 *t_973, P141 *r_974);
static void f_type_array_attr_981(struct f_greenc_1fr *up_, P175 e_976, P123 arrt_977, P179 c_978, P123 *t_979, P141 *r_980);
static void f_lit_table_984(struct f_greenc_1fr *up_, P123 t_982, P141 *r_983);
static void f_val_rep_990(struct f_greenc_1fr *up_, P175 e_985, P123 tt_986, P179 c_987, P123 *t_988, P141 *r_989);
static void f_allocator_995(struct f_greenc_1fr *up_, P175 e_991, P123 want_992, P123 *t_993, P141 *r_994);
static void f_aggregate_1000(struct f_greenc_1fr *up_, P175 e_996, P123 want_997, P123 *t_998, P141 *r_999);
static void f_captured_1003(struct f_greenc_1fr *up_, P127 b_1001, P141 *r_1002);
static P2019 f_field_at_1006(struct f_greenc_1fr *up_, P123 rt_1004, rt_int k_1005);
static int f_names_field_1009(struct f_greenc_1fr *up_, P175 x_1007, P2019 f_1008);
static P175 f_item_for_1014(struct f_greenc_1fr *up_, P175 e_1010, P123 rt_1011, rt_int k_1012, rt_int p_1013);
static void f_arm_holds_1018(struct f_greenc_1fr *up_, P175 arm_1015, rt_int v_1016, int *res_1017);
static void f_record_aggregate_1022(struct f_greenc_1fr *up_, P175 e_1019, P123 rt_1020, P141 *r_1021);
static rt_int f_field_index_1025(struct f_greenc_1fr *up_, P123 rt_1023, rt_gstr name_1024);
static void f_agg_component_1031(struct f_greenc_1fr *up_, rt_gstr tmp_1026, P123 rt_1027, rt_int k_1028, P175 v_1029, rt_int line_1030);
static void f_static_choice_1035(struct f_greenc_1fr *up_, P175 x_1032, rt_int *v_1033, int *ok_1034);
static void f_array_aggregate_1040(struct f_greenc_1fr *up_, P175 e_1036, P123 arrt_1037, P141 bounds_1038, P141 *r_1039);
static void f_element_store_1044(struct f_greenc_1fr *up_, rt_gstr lv_1041, P123 arrt_1042, rt_gstr v_1043);
static void f_check_choices_1048(struct f_greenc_1fr *up_, P175 e_1045, P123 arrt_1046, int has_others_1047);
static P175 f_actual_for_1052(struct f_greenc_1fr *up_, P175 args_1049, P2001 pm_1050, P2001 first_1051);
static void f_gcall_1057(struct f_greenc_1fr *up_, P175 e_1053, int is_stmt_1054, P123 *t_1055, P141 *r_1056);
static void f_out_check_1061(struct f_greenc_1fr *up_, rt_gstr lv_1058, P123 t_1059, P179 c_1060);
static void f_var_path_1064(struct f_greenc_1fr *up_, P175 e_1062, P141 *r_1063);
static int f_paths_overlap_1067(struct f_greenc_1fr *up_, rt_gstr p_1065, rt_gstr r_1066);
static int f_mentions_1070(struct f_greenc_1fr *up_, P175 n_1068, rt_gstr name_1069);
static int f_mentions_one_1073(struct f_greenc_1fr *up_, P175 n_1071, rt_gstr name_1072);
static void f_check_aliasing_1077(struct f_greenc_1fr *up_, P175 e_1074, P118 y_1075, P175 a_1076);
static void f_gcall_with_1082(struct f_greenc_1fr *up_, P175 e_1078, P118 y_1079, P123 *t_1080, P141 *r_1081);
static void f_builtin_1089(struct f_greenc_1fr *up_, rt_gstr name_1083, P175 args_1084, rt_int line_1085, int is_stmt_1086, P123 *t_1087, P141 *r_1088);
static P118 f_lookup_path_1091(struct f_greenc_1fr *up_, rt_gstr p_1090);
static int f_is_package_1093(struct f_greenc_1fr *up_, P175 e_1092);
static P118 f_member_of_1097(struct f_greenc_1fr *up_, rt_gstr p_1094, rt_gstr name_1095, rt_int line_1096);
static int f_inside_package_1099(struct f_greenc_1fr *up_, P175 p_1098);
static void f_copy_sym_1102(struct f_greenc_1fr *up_, P118 y_1100, P118 *z_1101);
static void f_complete_private_1105(struct f_greenc_1fr *up_, P123 ph_1103, P123 full_1104);
static void f_package_spec_1107(struct f_greenc_1fr *up_, P175 e_1106);
static int f_hidden_from_1110(struct f_greenc_1fr *up_, P118 m_1108, P118 first_private_1109);
static void f_package_body_1112(struct f_greenc_1fr *up_, P175 e_1111);
static int f_use_visible_1114(struct f_greenc_1fr *up_, P118 old_1113);
static void f_use_clause_1116(struct f_greenc_1fr *up_, P175 e_1115);
static int f_usable_over_1118(struct f_greenc_1fr *up_, P118 old_1117);
static int f_same_entity_1121(struct f_greenc_1fr *up_, P118 a_1119, P118 b_1120);
static void f_fits_1126(struct f_greenc_1fr *up_, P118 y_1122, P175 args_1123, P123 want_1124, int *ok_1125);
static int f_is_builtin_1128(struct f_greenc_1fr *up_, rt_gstr n_1127);
static void f_resolve_overload_1135(struct f_greenc_1fr *up_, rt_gstr name_1129, P175 args_1130, int is_stmt_1131, P123 want_1132, rt_int line_1133, P118 *y_1134);
static int f_same_profile_1138(struct f_greenc_1fr *up_, P118 a_1136, P118 b_1137);
static void f_resolve_member_overload_1146(struct f_greenc_1fr *up_, rt_gstr p_1139, rt_gstr name_1140, P175 args_1141, int is_stmt_1142, P123 want_1143, rt_int line_1144, P118 *y_1145);
static void f_user_operator_1152(struct f_greenc_1fr *up_, P175 e_1147, P123 want_1148, P123 *t_1149, P141 *r_1150, int *done_1151);
static void f_task_p_1154(struct f_greenc_1fr *up_, P175 *res_1153);
static void f_entry_p_1156(struct f_greenc_1fr *up_, P175 *res_1155);
static void f_accept_p_1158(struct f_greenc_1fr *up_, P175 *res_1157);
static void f_delay_p_1160(struct f_greenc_1fr *up_, P175 *res_1159);
static void f_designators_1162(struct f_greenc_1fr *up_, P175 *res_1161);
static void f_parse_task_statement_1164(struct f_greenc_1fr *up_, P175 *res_1163);
static void f_path_at_1168(struct f_greenc_1fr *up_, rt_int level_1165, rt_gstr field_1166, P141 *r_1167);
static int f_is_task_name_1170(struct f_greenc_1fr *up_, rt_gstr n_1169);
static void f_task_of_1174(struct f_greenc_1fr *up_, P175 e_1171, P118 *y_1172, P175 *ix_1173);
static void f_own_index_1177(struct f_greenc_1fr *up_, P118 t_1175, P141 *r_1176);
static void f_member_1182(struct f_greenc_1fr *up_, P118 y_1178, rt_gstr arr_1179, rt_gstr i_1180, P141 *r_1181);
static void f_act_path_1185(struct f_greenc_1fr *up_, P118 y_1183, P141 *r_1184);
static void f_act_path_i_1189(struct f_greenc_1fr *up_, P118 y_1186, rt_gstr i_1187, P141 *r_1188);
static void f_entry_path_1193(struct f_greenc_1fr *up_, P118 y_1190, rt_gstr i_1191, P141 *r_1192);
static void f_declare_slot_1196(struct f_greenc_1fr *up_, rt_gstr ctype_name_1194, rt_gstr field_1195);
static void f_task_decl_1198(struct f_greenc_1fr *up_, P175 e_1197);
static void f_family_arg_struct_1199(struct f_greenc_1fr *up_);
static void f_family_bounds_1204(struct f_greenc_1fr *up_, P175 b_1200, P118 y_1201, P141 x_1202, int per_member_1203);
static void f_entry_family_slot_1209(struct f_greenc_1fr *up_, P118 y_1205, rt_gstr base_1206, rt_gstr i_1207, P141 *r_1208);
static void f_task_spec_1211(struct f_greenc_1fr *up_, P175 e_1210);
static void f_entry_decl_1213(struct f_greenc_1fr *up_, P175 e_1212);
static void f_task_body_1215(struct f_greenc_1fr *up_, P175 e_1214);
static void f_task_awaits_1218(struct f_greenc_1fr *up_, P175 decls_1216, P141 *aw_1217);
static void f_task_failure_1220(struct f_greenc_1fr *up_, P175 s_1219);
static void f_entry_sym_1224(struct f_greenc_1fr *up_, P175 e_1221, P118 *y_1222, P175 *ix_1223);
static void f_entry_overload_1229(struct f_greenc_1fr *up_, P118 y_1225, P175 args_1226, rt_int line_1227, P118 *r_1228);
static void f_other_call_1234(struct f_greenc_1fr *up_, P175 e_1230, int is_stmt_1231, P123 *t_1232, P141 *r_1233);
static void f_other_attr_1239(struct f_greenc_1fr *up_, P175 e_1235, P118 y_1236, P123 *t_1237, P141 *r_1238);
static void f_member_attr_1243(struct f_greenc_1fr *up_, P175 e_1240, P123 *t_1241, P141 *r_1242);
static void f_task_builtin_1249(struct f_greenc_1fr *up_, rt_gstr name_1244, P175 args_1245, rt_int line_1246, P123 *t_1247, P141 *r_1248);
static void f_accept_entry_1252(struct f_greenc_1fr *up_, P175 s_1250, P118 *r_1251);
static void f_accept_conforms_1256(struct f_greenc_1fr *up_, P175 s_1253, P118 y_1254, int *ok_1255);
static void f_gen_accept_1258(struct f_greenc_1fr *up_, P175 s_1257);
static void f_member_slot_1262(struct f_greenc_1fr *up_, P118 y_1259, P175 s_1260, P141 *ent_1261);
static void f_gen_delay_ticks_1265(struct f_greenc_1fr *up_, P175 e_1263, P141 *r_1264);
static void f_gen_select_1267(struct f_greenc_1fr *up_, P175 s_1266);
static void f_family_range_1272(struct f_greenc_1fr *up_, P118 y_1268, P175 ix_1269, P141 *lo_1270, P141 *hi_1271);
static void f_task_statement_gen_1274(struct f_greenc_1fr *up_, P175 s_1273);
static P175 f_root_name_1276(struct f_greenc_1fr *up_, P175 e_1275);
static void f_check_pure_target_1279(struct f_greenc_1fr *up_, P175 target_1277, rt_int line_1278);
static int f_assigns_nonlocal_1282(struct f_greenc_1fr *up_, P175 d_1280, rt_gstr name_1281);
static int f_declares_1285(struct f_greenc_1fr *up_, P175 d_1283, rt_gstr name_1284);
static int f_scan_handlers_1289(struct f_greenc_1fr *up_, P175 h_1286, P175 d_1287, rt_gstr name_1288);
static int f_scan_assigns_1293(struct f_greenc_1fr *up_, P175 stmts_1290, P175 d_1291, rt_gstr name_1292);
static void f_check_call_rules_1296(struct f_greenc_1fr *up_, P175 e_1294, P118 y_1295);
static void f_generic_p_1298(struct f_greenc_1fr *up_, P175 *res_1297);
static void f_instantiation_1301(struct f_greenc_1fr *up_, P175 x_1299, P175 *res_1300);
static void f_generic_decl_1303(struct f_greenc_1fr *up_, P175 e_1302);
static int f_is_generic_name_1305(struct f_greenc_1fr *up_, rt_gstr n_1304);
static int f_instantiates_1308(struct f_greenc_1fr *up_, P175 n_1306, rt_gstr name_1307);
static void f_attach_generic_body_1310(struct f_greenc_1fr *up_, P175 e_1309);
static void f_restore_generic_context_1314(struct f_greenc_1fr *up_, P175 body_node_1311, rt_int line_1312, rt_gstr inst_1313);
static P175 f_gactual_1318(struct f_greenc_1fr *up_, P175 args_1315, rt_int nth_1316, rt_gstr name_1317);
static void f_copy_node_1322(struct f_greenc_1fr *up_, P175 n_1319, P141 name_1320, P175 *r_1321);
static int f_matches_formal_1326(struct f_greenc_1fr *up_, P118 y_1323, rt_gstr name_1324, P118 fs_1325);
static void f_actual_type_1329(struct f_greenc_1fr *up_, P175 a_1327, P118 *y_1328);
static void f_actual_subprogram_1334(struct f_greenc_1fr *up_, P175 f_1330, P175 a_1331, rt_int line_1332, P118 *r_1333);
static void f_wrap_operation_1340(struct f_greenc_1fr *up_, P175 f_1335, rt_gstr op_1336, P141 type_name_1337, rt_int line_1338, P118 *r_1339);
static void f_actual_mark_1343(struct f_greenc_1fr *up_, P175 st_1341, P175 *r_1342);
static void f_instantiate_1345(struct f_greenc_1fr *up_, P175 e_1344);
static P218 f_rep_of_1347(struct f_greenc_1fr *up_, P123 t_1346);
static void f_own_rep_1350(struct f_greenc_1fr *up_, P123 t_1348, P218 *r_1349);
static rt_int f_bits_for_1352(struct f_greenc_1fr *up_, rt_int n_1351);
static void f_min_bits_1356(struct f_greenc_1fr *up_, P123 t_1353, P179 c_1354, rt_int *r_1355);
static void f_elem_bits_1360(struct f_greenc_1fr *up_, P123 t_1357, P179 c_1358, rt_int *r_1359);
static void f_pending_addresses_1362(struct f_greenc_1fr *up_, P175 decls_1361);
static P221 f_pending_address_1364(struct f_greenc_1fr *up_, rt_gstr name_1363);
static P141 f_address_of_1366(struct f_greenc_1fr *up_, P118 y_1365);
static void f_static_address_1368(struct f_greenc_1fr *up_, P175 e_1367);
static void f_place_object_1373(struct f_greenc_1fr *up_, P221 a_1369, P118 y_1370, P123 t_1371, P141 *acc_1372);
static void f_place_components_1378(struct f_greenc_1fr *up_, P221 a_1374, P123 t_1375, rt_gstr acc_1376, rt_int line_1377);
static void f_representation_1380(struct f_greenc_1fr *up_, P175 e_1379);
static void f_enum_codes_1384(struct f_greenc_1fr *up_, P175 e_1381, P123 t_1382, P218 p_1383);
static void f_record_layout_1388(struct f_greenc_1fr *up_, P175 e_1385, P123 t_1386, P218 p_1387);
static void f_address_spec_1391(struct f_greenc_1fr *up_, P175 e_1389, P118 y_1390);
static rt_int f_task_length_1393(struct f_greenc_1fr *up_, P118 y_1392);
static void f_predef_type_1398(struct f_greenc_1fr *up_, rt_gstr name_1394, P123 t_1395, rt_gstr lo_1396, rt_gstr hi_1397);
static void f_predef_const_1402(struct f_greenc_1fr *up_, rt_gstr name_1399, P123 t_1400, rt_gstr code_text_1401);
static void f_predef_exc_1404(struct f_greenc_1fr *up_, rt_gstr name_1403);
static void f_predef_lit_1408(struct f_greenc_1fr *up_, rt_gstr name_1405, P123 t_1406, rt_int v_1407);
static void f_predefine_1409(struct f_greenc_1fr *up_);
static void f_lib_open_1412(struct f_greenc_1fr *up_, rt_gstr key_1410, rt_int *length_1411);
static void f_lib_store_1415(struct f_greenc_1fr *up_, rt_gstr key_1413, rt_gstr contents_1414);
static void f_unit_key_1418(struct f_greenc_1fr *up_, P175 u_1416, P141 *r_1417);
static void f_lib_enabled_1420(struct f_greenc_1fr *up_, int *yes_1419);
static void f_store_units_1421(struct f_greenc_1fr *up_);
static void f_store_span_1424(struct f_greenc_1fr *up_, P205 s_1422, rt_gstr key_1423);
static void f_lib_load_1427(struct f_greenc_1fr *up_, rt_gstr key_1425, P175 *r_1426);
static int f_defined_unit_1430(struct f_greenc_1fr *up_, rt_gstr name_1428, P175 before_1429);
static void f_library_units_1431(struct f_greenc_1fr *up_);
static void f_load_unit_1434(struct f_greenc_1fr *up_, rt_gstr name_1432, P175 *r_1433);
static void f_predefined_unit_1437(struct f_greenc_1fr *up_, rt_gstr name_1435, P175 *r_1436);
static void f_prelude_1438(struct f_greenc_1fr *up_);
static void f_used_units_1441(struct f_greenc_1fr *up_, P175 u_1439, P141 *r_1440);
static void f_add_names_1445(struct f_greenc_1fr *up_, P141 *r_1442, rt_gstr list_1443, int *changed_1444);
static void f_translate_1447(struct f_greenc_1fr *up_, P175 u_1446);
static int f_last_unit_1449(struct f_greenc_1fr *up_, P175 p_1448);
static void f_print_program_1450(struct f_greenc_1fr *up_);
static void f_greenc_1(void);
static int ex_compile_error_109;
static P141 f_mk_246(struct f_greenc_1fr *up_, rt_gstr s_245) {
  struct f_mk_246fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_245 = cp_rt_gstr(s_245);
F->r_1452.lo = ((rt_int)1LL); F->r_1452.hi = ({ rt_gstr at1451 = F->s_245; at1451.hi >= at1451.lo ? at1451.hi - at1451.lo + 1 : (rt_int)0; });
F->r_1452.lo2 = 1; F->r_1452.hi2 = 1;
F->r_1452.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_1452));
memset(F->r_1452.p, 0xFF, (size_t)G_CNT(F->r_1452));
as_rt_gstr(&F->r_1452, F->s_245);
F->result_ = ({ rt_gstr *cell1454 = rt_alloc(sizeof(rt_gstr)); *cell1454 = cp_rt_gstr(F->r_1452); (P141)cell1454; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_new_name_249(struct f_greenc_1fr *up_, rt_gstr base_247, P141 *res_248) {
  struct f_new_name_249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_247 = cp_rt_gstr(base_247);
F->res_248 = res_248;
F->up->serial_126 = rt_add(G_NV(F->up->serial_126), ((rt_int)1LL));
(*F->res_248) = ({ rt_gstr *cell1455 = rt_alloc(sizeof(rt_gstr)); *cell1455 = cp_rt_gstr(cat_rt_gstr(F->base_247, rt_g_s2g(rt_str_of_int(G_NV(F->up->serial_126))))); (P141)cell1455; });
goto ret_;
ret_:

  return;
}

static int f_is_letter_251(struct f_greenc_1fr *up_, int c_250) {
  struct f_is_letter_251fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_250 = c_250;
F->result_ = (((F->c_250 >= 65) && (F->c_250 <= 90)) || ((F->c_250 >= 97) && (F->c_250 <= 122)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_digit_253(struct f_greenc_1fr *up_, int c_252) {
  struct f_is_digit_253fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_252 = c_252;
F->result_ = ((F->c_252 >= 48) && (F->c_252 <= 57));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_upper_255(struct f_greenc_1fr *up_, int c_254) {
  struct f_upper_255fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_254 = c_254;
if (((F->c_254 >= 97) && (F->c_254 <= 122))) {
F->result_ = rt_range(rt_range((rt_sub(((rt_int)(F->c_254) + 1), ((rt_int)32LL)) - 1), 0, 127), 0, 127);
goto ret_;
}
F->result_ = rt_range(F->c_254, 0, 127);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_lower_s_257(struct f_greenc_1fr *up_, rt_gstr s_256) {
  struct f_lower_s_257fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_256 = cp_rt_gstr(s_256);
F->r_1456 = cp_rt_gstr(F->s_256);
{ rt_int lo1460 = ((rt_int)1LL), hi1461 = ({ rt_gstr at1458 = F->s_256; at1458.hi >= at1458.lo ? at1458.hi - at1458.lo + 1 : (rt_int)0; });
for (rt_int it1462 = lo1460; it1462 <= hi1461; it1462++) {
F->i_1459 = it1462;
if (((G_NV(({ rt_gstr ix1463 = F->r_1456; ix1463.p[rt_index(F->i_1459, ix1463.lo, ix1463.hi) - ix1463.lo]; })) >= 65) && (G_NV(({ rt_gstr ix1464 = F->r_1456; ix1464.p[rt_index(F->i_1459, ix1464.lo, ix1464.hi) - ix1464.lo]; })) <= 90))) {
(*({ rt_gstr *ix1465 = &(F->r_1456); &ix1465->p[rt_index(F->i_1459, ix1465->lo, ix1465->hi) - ix1465->lo]; })) = rt_range((rt_add(((rt_int)(G_NV(({ rt_gstr ix1466 = F->r_1456; ix1466.p[rt_index(F->i_1459, ix1466.lo, ix1466.hi) - ix1466.lo]; }))) + 1), ((rt_int)32LL)) - 1), 0, 127);
}
}
}
L_end_1457: ;
F->result_ = F->r_1456;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_upper_s_259(struct f_greenc_1fr *up_, rt_gstr s_258) {
  struct f_upper_s_259fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_258 = cp_rt_gstr(s_258);
F->r_1467 = cp_rt_gstr(F->s_258);
{ rt_int lo1471 = ((rt_int)1LL), hi1472 = ({ rt_gstr at1469 = F->s_258; at1469.hi >= at1469.lo ? at1469.hi - at1469.lo + 1 : (rt_int)0; });
for (rt_int it1473 = lo1471; it1473 <= hi1472; it1473++) {
F->i_1470 = it1473;
(*({ rt_gstr *ix1474 = &(F->r_1467); &ix1474->p[rt_index(F->i_1470, ix1474->lo, ix1474->hi) - ix1474->lo]; })) = f_upper_255(F->up, G_NV(({ rt_gstr ix1476 = F->r_1467; ix1476.p[rt_index(F->i_1470, ix1476.lo, ix1476.hi) - ix1476.lo]; })));
}
}
L_end_1468: ;
F->result_ = F->r_1467;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_operator_261(struct f_greenc_1fr *up_, rt_gstr s_260) {
  struct f_is_operator_261fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_260 = cp_rt_gstr(s_260);
F->result_ = (((((((((((((((eq_rt_gstr(F->s_260, rt_g_lit("+", 1)) || eq_rt_gstr(F->s_260, rt_g_lit("-", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("*", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("/", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("**", 2))) || eq_rt_gstr(F->s_260, rt_g_lit("&", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("=", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_260, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_260, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_260, rt_g_lit(">=", 2))) || eq_rt_gstr(F->s_260, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->s_260, rt_g_lit("AND", 3))) || eq_rt_gstr(F->s_260, rt_g_lit("OR", 2))) || eq_rt_gstr(F->s_260, rt_g_lit("XOR", 3))) || eq_rt_gstr(F->s_260, rt_g_lit("NOT", 3)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_field_263(struct f_greenc_1fr *up_, rt_gstr s_262) {
  struct f_c_field_263fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_262 = cp_rt_gstr(s_262);
F->result_ = cat_rt_gstr(f_lower_s_257(F->up, F->s_262), one_rt_gstr(95));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_q_264(struct f_greenc_1fr *up_) {
  struct f_q_264fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = rt_g_lit("\"", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fail_267(struct f_greenc_1fr *up_, rt_int line_265, rt_gstr msg_266) {
  struct f_fail_267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_265 = line_265;
F->msg_266 = cp_rt_gstr(msg_266);
if ((G_NV(F->up->trial_156) == ((rt_int)0LL))) {
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("greenc: line ", 13), rt_g_s2g(rt_str_of_int(F->line_265))), rt_g_lit(": ", 2)), F->msg_266)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
}
rt_raise(ex_compile_error_109);
ret_:

  return;
}

static P127 f_new_buffer_268(struct f_greenc_1fr *up_) {
  struct f_new_buffer_268fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R128 *cell1477 = rt_alloc(sizeof(R128)); *cell1477 = cp_R128(({ R128 ag1478; ag1478.head_ = NULL; ag1478.tail_ = NULL; ag1478; })); (P127)cell1477; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_put_to_271(struct f_greenc_1fr *up_, P127 b_269, rt_gstr s_270) {
  struct f_put_to_271fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_269 = b_269;
F->s_270 = cp_rt_gstr(s_270);
F->l_1479 = NULL;
F->l_1479 = ({ R153 *cell1480 = rt_alloc(sizeof(R153)); *cell1480 = cp_R153(({ R153 ag1481; ag1481.s_ = NULL; ag1481.next_ = NULL; ag1481; })); (P152)cell1480; });
(*(P152)rt_nil_check(F->l_1479)).s_ = f_mk_246(F->up, F->s_270);
if (((*(P127)rt_nil_check(F->b_269)).tail_ == NULL)) {
(*(P127)rt_nil_check(F->b_269)).head_ = F->l_1479;
} else {
(*(P152)rt_nil_check((*(P127)rt_nil_check(F->b_269)).tail_)).next_ = F->l_1479;
}
(*(P127)rt_nil_check(F->b_269)).tail_ = F->l_1479;
ret_:

  return;
}

static void f_emit_273(struct f_greenc_1fr *up_, rt_gstr s_272) {
  struct f_emit_273fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_272 = cp_rt_gstr(s_272);
f_put_to_271(F->up, F->up->code_137, F->s_272);
ret_:

  return;
}

static void f_print_buffer_275(struct f_greenc_1fr *up_, P127 b_274) {
  struct f_print_buffer_275fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_274 = b_274;
F->l_1482 = NULL;
F->l_1482 = (*(P127)rt_nil_check(F->b_274)).head_;
while ((F->l_1482 != NULL)) {
rt_g_put(rt_g_g2s((*(P141)rt_nil_check((*(P152)rt_nil_check(F->l_1482)).s_))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
F->l_1482 = (*(P152)rt_nil_check(F->l_1482)).next_;
}
L_end_1483: ;
ret_:

  return;
}

static void f_splice_278(struct f_greenc_1fr *up_, P127 a_276, P127 b_277) {
  struct f_splice_278fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_276 = a_276;
F->b_277 = b_277;
if (((*(P127)rt_nil_check(F->b_277)).head_ == NULL)) {
goto ret_;
}
if (((*(P127)rt_nil_check(F->a_276)).tail_ == NULL)) {
(*(P127)rt_nil_check(F->a_276)).head_ = (*(P127)rt_nil_check(F->b_277)).head_;
} else {
(*(P152)rt_nil_check((*(P127)rt_nil_check(F->a_276)).tail_)).next_ = (*(P127)rt_nil_check(F->b_277)).head_;
}
(*(P127)rt_nil_check(F->a_276)).tail_ = (*(P127)rt_nil_check(F->b_277)).tail_;
(*(P127)rt_nil_check(F->b_277)).head_ = NULL;
(*(P127)rt_nil_check(F->b_277)).tail_ = NULL;
ret_:

  return;
}

static int f_is_reserved_280(struct f_greenc_1fr *up_, rt_gstr w_279) {
  struct f_is_reserved_280fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_279 = cp_rt_gstr(w_279);
{ rt_int sel1485 = ({ rt_gstr at1484 = F->w_279; at1484.hi >= at1484.lo ? at1484.hi - at1484.lo + 1 : (rt_int)0; });
if (0 || sel1485 == ((rt_int)2LL)) {
F->result_ = ((((((eq_rt_gstr(F->w_279, rt_g_lit("AT", 2)) || eq_rt_gstr(F->w_279, rt_g_lit("DO", 2))) || eq_rt_gstr(F->w_279, rt_g_lit("IF", 2))) || eq_rt_gstr(F->w_279, rt_g_lit("IN", 2))) || eq_rt_gstr(F->w_279, rt_g_lit("IS", 2))) || eq_rt_gstr(F->w_279, rt_g_lit("OF", 2))) || eq_rt_gstr(F->w_279, rt_g_lit("OR", 2)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)3LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_279, rt_g_lit("ALL", 3)) || eq_rt_gstr(F->w_279, rt_g_lit("AND", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("END", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("FOR", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("MOD", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("NEW", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("NOT", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("OUT", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("USE", 3))) || eq_rt_gstr(F->w_279, rt_g_lit("XOR", 3)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)4LL)) {
F->result_ = ((((((((((eq_rt_gstr(F->w_279, rt_g_lit("BODY", 4)) || eq_rt_gstr(F->w_279, rt_g_lit("CASE", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("ELSE", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("EXIT", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("GOTO", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("LOOP", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("NULL", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("TASK", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("THEN", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("TYPE", 4))) || eq_rt_gstr(F->w_279, rt_g_lit("WHEN", 4)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)5LL)) {
F->result_ = (((((((((eq_rt_gstr(F->w_279, rt_g_lit("ABORT", 5)) || eq_rt_gstr(F->w_279, rt_g_lit("ARRAY", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("BEGIN", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("DELAY", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("ELSIF", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("ENTRY", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("RAISE", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("RANGE", 5))) || eq_rt_gstr(F->w_279, rt_g_lit("WHILE", 5)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)6LL)) {
F->result_ = ((((((((eq_rt_gstr(F->w_279, rt_g_lit("ACCEPT", 6)) || eq_rt_gstr(F->w_279, rt_g_lit("ACCESS", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("ASSERT", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("DIGITS", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("OTHERS", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("PRAGMA", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("RECORD", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("RETURN", 6))) || eq_rt_gstr(F->w_279, rt_g_lit("SELECT", 6)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)7LL)) {
F->result_ = (((((((eq_rt_gstr(F->w_279, rt_g_lit("DECLARE", 7)) || eq_rt_gstr(F->w_279, rt_g_lit("GENERIC", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("PACKAGE", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("PACKING", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("PRIVATE", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("RENAMES", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("REVERSE", 7))) || eq_rt_gstr(F->w_279, rt_g_lit("SUBTYPE", 7)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)8LL)) {
F->result_ = (((eq_rt_gstr(F->w_279, rt_g_lit("CONSTANT", 8)) || eq_rt_gstr(F->w_279, rt_g_lit("FUNCTION", 8))) || eq_rt_gstr(F->w_279, rt_g_lit("INITIATE", 8))) || eq_rt_gstr(F->w_279, rt_g_lit("SEPARATE", 8)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)9LL)) {
F->result_ = (eq_rt_gstr(F->w_279, rt_g_lit("EXCEPTION", 9)) || eq_rt_gstr(F->w_279, rt_g_lit("PROCEDURE", 9)));
goto ret_;
} else if (0 || sel1485 == ((rt_int)10LL)) {
F->result_ = eq_rt_gstr(F->w_279, rt_g_lit("RESTRICTED", 10));
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

static void f_add_token_284(struct f_greenc_1fr *up_, rt_int kind_281, rt_gstr s_282, rt_int ival_283) {
  struct f_add_token_284fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_281 = kind_281;
F->s_282 = cp_rt_gstr(s_282);
F->ival_283 = ival_283;
F->up->ntoks_114 = rt_add(G_NV(F->up->ntoks_114), ((rt_int)1LL));
(*({ A110 *ix1486 = &(F->up->toks_113); &ix1486->p[rt_index(G_NV(F->up->ntoks_114), ix1486->lo, ix1486->hi) - ix1486->lo]; })) = ({ R112 *cell1487 = rt_alloc(sizeof(R112)); *cell1487 = cp_R112(({ R112 ag1488; ag1488.kind_ = F->kind_281; ag1488.line_ = G_NV(F->up->src_line_116); ag1488.ival_ = F->ival_283; ag1488.s_ = NULL; ag1488; })); (P111)cell1487; });
(*(P111)rt_nil_check((*({ A110 *ix1489 = &(F->up->toks_113); &ix1489->p[rt_index(G_NV(F->up->ntoks_114), ix1489->lo, ix1489->hi) - ix1489->lo]; })))).s_ = f_mk_246(F->up, F->s_282);
ret_:

  return;
}

static rt_int f_digit_value_286(struct f_greenc_1fr *up_, int c_285) {
  struct f_digit_value_286fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_285 = c_285;
if (f_is_digit_253(F->up, F->c_285)) {
F->result_ = rt_sub(((rt_int)(F->c_285) + 1), ((rt_int)(48) + 1));
goto ret_;
}
F->result_ = rt_add(rt_sub(((rt_int)(f_upper_255(F->up, F->c_285)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_digit_in_289(struct f_greenc_1fr *up_, int c_287, rt_int base_288) {
  struct f_digit_in_289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_287 = c_287;
F->base_288 = base_288;
F->d_1490 = INT64_MIN;
if (f_is_digit_253(F->up, F->c_287)) {
F->d_1490 = rt_sub(((rt_int)(F->c_287) + 1), ((rt_int)(48) + 1));
} else if (((f_upper_255(F->up, F->c_287) >= 65) && (f_upper_255(F->up, F->c_287) <= 70))) {
F->d_1490 = rt_add(rt_sub(((rt_int)(f_upper_255(F->up, F->c_287)) + 1), ((rt_int)(65) + 1)), ((rt_int)10LL));
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
if ((G_NV(F->d_1490) >= F->base_288)) {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
F->result_ = G_NV(F->d_1490);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_accumulate_293(struct f_greenc_1fr *up_, rt_int *v_290, rt_int base_291, rt_int d_292) {
  struct f_accumulate_293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->v_290 = v_290;
F->base_291 = base_291;
F->d_292 = d_292;
if ((G_NV((*F->v_290)) > rt_quot(rt_sub(INT64_MAX, F->d_292), F->base_291))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("this integer literal is too large (RM79 2.4)", 44));
}
(*F->v_290) = rt_add(rt_mul(G_NV((*F->v_290)), F->base_291), F->d_292);
ret_:

  return;
}

static void f_lex_line_295(struct f_greenc_1fr *up_, rt_gstr line_294) {
  struct f_lex_line_295fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_294 = cp_rt_gstr(line_294);
F->i_1491 = INT64_MIN;
F->i_1491 = ((rt_int)1LL);
F->j_1492 = INT64_MIN;
F->j_1492 = ((rt_int)0LL);
F->n_1493 = INT64_MIN;
F->n_1493 = ({ rt_gstr at1494 = F->line_294; at1494.hi >= at1494.lo ? at1494.hi - at1494.lo + 1 : (rt_int)0; });
F->c_1495 = INT_MIN;
F->quote_1496 = INT_MIN;
F->v_1497 = INT64_MIN;
F->d_1498 = INT64_MIN;
F->buf_1499.lo = ((rt_int)1LL); F->buf_1499.hi = ((rt_int)1000LL);
F->buf_1499.lo2 = 1; F->buf_1499.hi2 = 1;
F->buf_1499.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1499));
memset(F->buf_1499.p, 0xFF, (size_t)G_CNT(F->buf_1499));
F->bl_1501 = INT64_MIN;
while ((G_NV(F->i_1491) <= G_NV(F->n_1493))) {
F->c_1495 = rt_range(G_NV(({ rt_gstr ix1503 = F->line_294; ix1503.p[rt_index(G_NV(F->i_1491), ix1503.lo, ix1503.hi) - ix1503.lo]; })), 0, 127);
if (((((G_NV(F->c_1495) == 32) || (G_NV(F->c_1495) == 9)) || (G_NV(F->c_1495) == 13)) || (G_NV(F->c_1495) == 12))) {
F->i_1491 = rt_add(G_NV(F->i_1491), ((rt_int)1LL));
} else if ((((G_NV(F->c_1495) == 45) && (G_NV(F->i_1491) < G_NV(F->n_1493))) && (G_NV(({ rt_gstr ix1504 = F->line_294; ix1504.p[rt_index(rt_add(G_NV(F->i_1491), ((rt_int)1LL)), ix1504.lo, ix1504.hi) - ix1504.lo]; })) == 45))) {
F->i_1491 = rt_add(G_NV(F->n_1493), ((rt_int)1LL));
} else if (f_is_letter_251(F->up, G_NV(F->c_1495))) {
F->j_1492 = G_NV(F->i_1491);
F->bl_1501 = ((rt_int)0LL);
while (((G_NV(F->j_1492) <= G_NV(F->n_1493)) && ((f_is_letter_251(F->up, G_NV(({ rt_gstr ix1507 = F->line_294; ix1507.p[rt_index(G_NV(F->j_1492), ix1507.lo, ix1507.hi) - ix1507.lo]; }))) || f_is_digit_253(F->up, G_NV(({ rt_gstr ix1509 = F->line_294; ix1509.p[rt_index(G_NV(F->j_1492), ix1509.lo, ix1509.hi) - ix1509.lo]; })))) || (G_NV(({ rt_gstr ix1510 = F->line_294; ix1510.p[rt_index(G_NV(F->j_1492), ix1510.lo, ix1510.hi) - ix1510.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1511 = F->line_294; ix1511.p[rt_index(G_NV(F->j_1492), ix1511.lo, ix1511.hi) - ix1511.lo]; })) == 95)) {
if (((G_NV(F->j_1492) == G_NV(F->n_1493)) || (!(f_is_letter_251(F->up, G_NV(({ rt_gstr ix1513 = F->line_294; ix1513.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1513.lo, ix1513.hi) - ix1513.lo]; }))) || f_is_digit_253(F->up, G_NV(({ rt_gstr ix1515 = F->line_294; ix1515.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1515.lo, ix1515.hi) - ix1515.lo]; }))))))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("an underscore in an identifier stands between two letters or digits (RM79 2.3)", 78));
}
}
F->bl_1501 = rt_add(G_NV(F->bl_1501), ((rt_int)1LL));
(*({ rt_gstr *ix1516 = &(F->buf_1499); &ix1516->p[rt_index(G_NV(F->bl_1501), ix1516->lo, ix1516->hi) - ix1516->lo]; })) = f_upper_255(F->up, G_NV(({ rt_gstr ix1518 = F->line_294; ix1518.p[rt_index(G_NV(F->j_1492), ix1518.lo, ix1518.hi) - ix1518.lo]; })));
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
}
L_end_1505: ;
if (f_is_reserved_280(F->up, ({ rt_gstr sl1520 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1520.lo, sl1520.hi); rt_index(h_, sl1520.lo, sl1520.hi); } sl1520.p += l_ - sl1520.lo; sl1520.lo = l_; sl1520.hi = h_; sl1520; }))) {
f_add_token_284(F->up, ((rt_int)2LL), ({ rt_gstr sl1522 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1522.lo, sl1522.hi); rt_index(h_, sl1522.lo, sl1522.hi); } sl1522.p += l_ - sl1522.lo; sl1522.lo = l_; sl1522.hi = h_; sl1522; }), ((rt_int)0LL));
} else {
f_add_token_284(F->up, ((rt_int)1LL), ({ rt_gstr sl1524 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1524.lo, sl1524.hi); rt_index(h_, sl1524.lo, sl1524.hi); } sl1524.p += l_ - sl1524.lo; sl1524.lo = l_; sl1524.hi = h_; sl1524; }), ((rt_int)0LL));
}
F->i_1491 = G_NV(F->j_1492);
} else if (f_is_digit_253(F->up, G_NV(F->c_1495))) {
F->j_1492 = G_NV(F->i_1491);
F->v_1497 = ((rt_int)0LL);
F->bl_1501 = ((rt_int)0LL);
while (((G_NV(F->j_1492) <= G_NV(F->n_1493)) && (f_is_digit_253(F->up, G_NV(({ rt_gstr ix1527 = F->line_294; ix1527.p[rt_index(G_NV(F->j_1492), ix1527.lo, ix1527.hi) - ix1527.lo]; }))) || (G_NV(({ rt_gstr ix1528 = F->line_294; ix1528.p[rt_index(G_NV(F->j_1492), ix1528.lo, ix1528.hi) - ix1528.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1529 = F->line_294; ix1529.p[rt_index(G_NV(F->j_1492), ix1529.lo, ix1529.hi) - ix1529.lo]; })) == 95)) {
if (((G_NV(F->j_1492) == G_NV(F->n_1493)) || (!f_is_digit_253(F->up, G_NV(({ rt_gstr ix1531 = F->line_294; ix1531.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1531.lo, ix1531.hi) - ix1531.lo]; })))))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
f_accumulate_293(F->up, &F->v_1497, ((rt_int)10LL), rt_sub(((rt_int)(G_NV(({ rt_gstr ix1533 = F->line_294; ix1533.p[rt_index(G_NV(F->j_1492), ix1533.lo, ix1533.hi) - ix1533.lo]; }))) + 1), ((rt_int)(48) + 1)));
F->bl_1501 = rt_add(G_NV(F->bl_1501), ((rt_int)1LL));
(*({ rt_gstr *ix1534 = &(F->buf_1499); &ix1534->p[rt_index(G_NV(F->bl_1501), ix1534->lo, ix1534->hi) - ix1534->lo]; })) = G_NV(({ rt_gstr ix1535 = F->line_294; ix1535.p[rt_index(G_NV(F->j_1492), ix1535.lo, ix1535.hi) - ix1535.lo]; }));
}
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
}
L_end_1525: ;
if (((G_NV(F->j_1492) < G_NV(F->n_1493)) && ((G_NV(({ rt_gstr ix1536 = F->line_294; ix1536.p[rt_index(G_NV(F->j_1492), ix1536.lo, ix1536.hi) - ix1536.lo]; })) == 35) || ((G_NV(({ rt_gstr ix1537 = F->line_294; ix1537.p[rt_index(G_NV(F->j_1492), ix1537.lo, ix1537.hi) - ix1537.lo]; })) == 58) && (f_is_digit_253(F->up, G_NV(({ rt_gstr ix1539 = F->line_294; ix1539.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1539.lo, ix1539.hi) - ix1539.lo]; }))) || f_is_letter_251(F->up, G_NV(({ rt_gstr ix1541 = F->line_294; ix1541.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1541.lo, ix1541.hi) - ix1541.lo]; })))))))) {
{
F->base_1543 = INT64_MIN;
F->base_1543 = G_NV(F->v_1497);
if (((G_NV(F->base_1543) < ((rt_int)2LL)) || (G_NV(F->base_1543) > ((rt_int)16LL)))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("the base of a number is between 2 and 16 (RM79 2.4)", 51));
}
F->v_1497 = ((rt_int)0LL);
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
if (((G_NV(F->j_1492) > G_NV(F->n_1493)) || (f_digit_in_289(F->up, G_NV(({ rt_gstr ix1545 = F->line_294; ix1545.p[rt_index(G_NV(F->j_1492), ix1545.lo, ix1545.hi) - ix1545.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("a based number needs digits (RM79 2.4)", 38));
}
while (((G_NV(F->j_1492) <= G_NV(F->n_1493)) && ((f_is_letter_251(F->up, G_NV(({ rt_gstr ix1548 = F->line_294; ix1548.p[rt_index(G_NV(F->j_1492), ix1548.lo, ix1548.hi) - ix1548.lo]; }))) || f_is_digit_253(F->up, G_NV(({ rt_gstr ix1550 = F->line_294; ix1550.p[rt_index(G_NV(F->j_1492), ix1550.lo, ix1550.hi) - ix1550.lo]; })))) || (G_NV(({ rt_gstr ix1551 = F->line_294; ix1551.p[rt_index(G_NV(F->j_1492), ix1551.lo, ix1551.hi) - ix1551.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1552 = F->line_294; ix1552.p[rt_index(G_NV(F->j_1492), ix1552.lo, ix1552.hi) - ix1552.lo]; })) == 95)) {
if (((G_NV(F->j_1492) == G_NV(F->n_1493)) || (f_digit_in_289(F->up, G_NV(({ rt_gstr ix1554 = F->line_294; ix1554.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1554.lo, ix1554.hi) - ix1554.lo]; })), ((rt_int)16LL)) < ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
} else {
F->d_1498 = f_digit_in_289(F->up, G_NV(({ rt_gstr ix1556 = F->line_294; ix1556.p[rt_index(G_NV(F->j_1492), ix1556.lo, ix1556.hi) - ix1556.lo]; })), G_NV(F->base_1543));
if ((G_NV(F->d_1498) < ((rt_int)0LL))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("digit ", 6), one_rt_gstr(G_NV(({ rt_gstr ix1558 = F->line_294; ix1558.p[rt_index(G_NV(F->j_1492), ix1558.lo, ix1558.hi) - ix1558.lo]; })))), rt_g_lit(" is not valid in base ", 22)), rt_g_s2g(rt_str_of_int(G_NV(F->base_1543)))), rt_g_lit(" (RM79 2.4)", 11)));
}
f_accumulate_293(F->up, &F->v_1497, G_NV(F->base_1543), G_NV(F->d_1498));
}
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
}
L_end_1546: ;

}
L_end_1542: ;
f_add_token_284(F->up, ((rt_int)4LL), rt_g_s2g(rt_str_of_int(G_NV(F->v_1497))), G_NV(F->v_1497));
} else if (((G_NV(F->j_1492) < G_NV(F->n_1493)) && ((G_NV(({ rt_gstr ix1559 = F->line_294; ix1559.p[rt_index(G_NV(F->j_1492), ix1559.lo, ix1559.hi) - ix1559.lo]; })) == 46) && f_is_digit_253(F->up, G_NV(({ rt_gstr ix1561 = F->line_294; ix1561.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1561.lo, ix1561.hi) - ix1561.lo]; })))))) {
F->bl_1501 = rt_add(G_NV(F->bl_1501), ((rt_int)1LL));
(*({ rt_gstr *ix1562 = &(F->buf_1499); &ix1562->p[rt_index(G_NV(F->bl_1501), ix1562->lo, ix1562->hi) - ix1562->lo]; })) = 46;
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
while (((G_NV(F->j_1492) <= G_NV(F->n_1493)) && (f_is_digit_253(F->up, G_NV(({ rt_gstr ix1565 = F->line_294; ix1565.p[rt_index(G_NV(F->j_1492), ix1565.lo, ix1565.hi) - ix1565.lo]; }))) || (G_NV(({ rt_gstr ix1566 = F->line_294; ix1566.p[rt_index(G_NV(F->j_1492), ix1566.lo, ix1566.hi) - ix1566.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1567 = F->line_294; ix1567.p[rt_index(G_NV(F->j_1492), ix1567.lo, ix1567.hi) - ix1567.lo]; })) != 95)) {
F->bl_1501 = rt_add(G_NV(F->bl_1501), ((rt_int)1LL));
(*({ rt_gstr *ix1568 = &(F->buf_1499); &ix1568->p[rt_index(G_NV(F->bl_1501), ix1568->lo, ix1568->hi) - ix1568->lo]; })) = G_NV(({ rt_gstr ix1569 = F->line_294; ix1569.p[rt_index(G_NV(F->j_1492), ix1569.lo, ix1569.hi) - ix1569.lo]; }));
} else if (((G_NV(F->j_1492) == G_NV(F->n_1493)) || (!f_is_digit_253(F->up, G_NV(({ rt_gstr ix1571 = F->line_294; ix1571.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1571.lo, ix1571.hi) - ix1571.lo]; })))))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
}
L_end_1563: ;
if (f_exponent_ahead_298(F->up, F->line_294, G_NV(F->j_1492))) {
f_exponent_303(F->up, F->line_294, &F->j_1492, &F->buf_1499, &F->bl_1501);

}
f_add_token_284(F->up, ((rt_int)5LL), ({ rt_gstr sl1573 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1573.lo, sl1573.hi); rt_index(h_, sl1573.lo, sl1573.hi); } sl1573.p += l_ - sl1573.lo; sl1573.lo = l_; sl1573.hi = h_; sl1573; }), ((rt_int)0LL));
} else if (f_exponent_ahead_298(F->up, F->line_294, G_NV(F->j_1492))) {
f_exponent_303(F->up, F->line_294, &F->j_1492, &F->buf_1499, &F->bl_1501);

f_add_token_284(F->up, ((rt_int)5LL), ({ rt_gstr sl1575 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1575.lo, sl1575.hi); rt_index(h_, sl1575.lo, sl1575.hi); } sl1575.p += l_ - sl1575.lo; sl1575.lo = l_; sl1575.hi = h_; sl1575; }), ((rt_int)0LL));
} else {
f_add_token_284(F->up, ((rt_int)4LL), ({ rt_gstr sl1577 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1577.lo, sl1577.hi); rt_index(h_, sl1577.lo, sl1577.hi); } sl1577.p += l_ - sl1577.lo; sl1577.lo = l_; sl1577.hi = h_; sl1577; }), G_NV(F->v_1497));
}
F->i_1491 = G_NV(F->j_1492);
} else if (((G_NV(F->c_1495) == 34) || (G_NV(F->c_1495) == 37))) {
F->quote_1496 = rt_range(G_NV(F->c_1495), 0, 127);
F->j_1492 = rt_add(G_NV(F->i_1491), ((rt_int)1LL));
F->bl_1501 = ((rt_int)0LL);
for (;;) {
if ((G_NV(F->j_1492) > G_NV(F->n_1493))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("unterminated string", 19));
}
if ((G_NV(({ rt_gstr ix1579 = F->line_294; ix1579.p[rt_index(G_NV(F->j_1492), ix1579.lo, ix1579.hi) - ix1579.lo]; })) == G_NV(F->quote_1496))) {
if (((G_NV(F->j_1492) == G_NV(F->n_1493)) || (G_NV(({ rt_gstr ix1580 = F->line_294; ix1580.p[rt_index(rt_add(G_NV(F->j_1492), ((rt_int)1LL)), ix1580.lo, ix1580.hi) - ix1580.lo]; })) != G_NV(F->quote_1496)))) {
goto L_end_1578;
}
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
} else if (((G_NV(F->quote_1496) == 37) && (G_NV(({ rt_gstr ix1581 = F->line_294; ix1581.p[rt_index(G_NV(F->j_1492), ix1581.lo, ix1581.hi) - ix1581.lo]; })) == 34))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("a string bracketed by % cannot contain a quote (RM79 2.1)", 57));
}
F->bl_1501 = rt_add(G_NV(F->bl_1501), ((rt_int)1LL));
(*({ rt_gstr *ix1582 = &(F->buf_1499); &ix1582->p[rt_index(G_NV(F->bl_1501), ix1582->lo, ix1582->hi) - ix1582->lo]; })) = G_NV(({ rt_gstr ix1583 = F->line_294; ix1583.p[rt_index(G_NV(F->j_1492), ix1583.lo, ix1583.hi) - ix1583.lo]; }));
F->j_1492 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
}
L_end_1578: ;
f_add_token_284(F->up, ((rt_int)6LL), ({ rt_gstr sl1585 = F->buf_1499; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1501); if (l_ <= h_) { rt_index(l_, sl1585.lo, sl1585.hi); rt_index(h_, sl1585.lo, sl1585.hi); } sl1585.p += l_ - sl1585.lo; sl1585.lo = l_; sl1585.hi = h_; sl1585; }), ((rt_int)0LL));
F->i_1491 = rt_add(G_NV(F->j_1492), ((rt_int)1LL));
} else {
{
F->two_1587.lo = ((rt_int)1LL); F->two_1587.hi = ((rt_int)3LL);
F->two_1587.lo2 = 1; F->two_1587.hi2 = 1;
F->two_1587.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->two_1587));
memset(F->two_1587.p, 0xFF, (size_t)G_CNT(F->two_1587));
as_rt_gstr(&F->two_1587, rt_g_lit("   ", 3));
(*({ rt_gstr *ix1589 = &(F->two_1587); &ix1589->p[rt_index(((rt_int)1LL), ix1589->lo, ix1589->hi) - ix1589->lo]; })) = G_NV(F->c_1495);
if ((G_NV(F->i_1491) < G_NV(F->n_1493))) {
(*({ rt_gstr *ix1590 = &(F->two_1587); &ix1590->p[rt_index(((rt_int)2LL), ix1590->lo, ix1590->hi) - ix1590->lo]; })) = G_NV(({ rt_gstr ix1591 = F->line_294; ix1591.p[rt_index(rt_add(G_NV(F->i_1491), ((rt_int)1LL)), ix1591.lo, ix1591.hi) - ix1591.lo]; }));
}
if ((rt_add(G_NV(F->i_1491), ((rt_int)1LL)) < G_NV(F->n_1493))) {
(*({ rt_gstr *ix1592 = &(F->two_1587); &ix1592->p[rt_index(((rt_int)3LL), ix1592->lo, ix1592->hi) - ix1592->lo]; })) = G_NV(({ rt_gstr ix1593 = F->line_294; ix1593.p[rt_index(rt_add(G_NV(F->i_1491), ((rt_int)2LL)), ix1593.lo, ix1593.hi) - ix1593.lo]; }));
}
if (eq_rt_gstr(F->two_1587, rt_g_lit(":=:", 3))) {
f_add_token_284(F->up, ((rt_int)3LL), rt_g_lit(":=:", 3), ((rt_int)0LL));
F->i_1491 = rt_add(G_NV(F->i_1491), ((rt_int)3LL));
} else if ((((((((((eq_rt_gstr(({ rt_gstr sl1594 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1594.lo, sl1594.hi); rt_index(h_, sl1594.lo, sl1594.hi); } sl1594.p += l_ - sl1594.lo; sl1594.lo = l_; sl1594.hi = h_; sl1594; }), rt_g_lit(":=", 2)) || eq_rt_gstr(({ rt_gstr sl1595 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1595.lo, sl1595.hi); rt_index(h_, sl1595.lo, sl1595.hi); } sl1595.p += l_ - sl1595.lo; sl1595.lo = l_; sl1595.hi = h_; sl1595; }), rt_g_lit("=:", 2))) || eq_rt_gstr(({ rt_gstr sl1596 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1596.lo, sl1596.hi); rt_index(h_, sl1596.lo, sl1596.hi); } sl1596.p += l_ - sl1596.lo; sl1596.lo = l_; sl1596.hi = h_; sl1596; }), rt_g_lit("=>", 2))) || eq_rt_gstr(({ rt_gstr sl1597 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1597.lo, sl1597.hi); rt_index(h_, sl1597.lo, sl1597.hi); } sl1597.p += l_ - sl1597.lo; sl1597.lo = l_; sl1597.hi = h_; sl1597; }), rt_g_lit("..", 2))) || eq_rt_gstr(({ rt_gstr sl1598 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1598.lo, sl1598.hi); rt_index(h_, sl1598.lo, sl1598.hi); } sl1598.p += l_ - sl1598.lo; sl1598.lo = l_; sl1598.hi = h_; sl1598; }), rt_g_lit("**", 2))) || eq_rt_gstr(({ rt_gstr sl1599 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1599.lo, sl1599.hi); rt_index(h_, sl1599.lo, sl1599.hi); } sl1599.p += l_ - sl1599.lo; sl1599.lo = l_; sl1599.hi = h_; sl1599; }), rt_g_lit("/=", 2))) || eq_rt_gstr(({ rt_gstr sl1600 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1600.lo, sl1600.hi); rt_index(h_, sl1600.lo, sl1600.hi); } sl1600.p += l_ - sl1600.lo; sl1600.lo = l_; sl1600.hi = h_; sl1600; }), rt_g_lit("<=", 2))) || eq_rt_gstr(({ rt_gstr sl1601 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1601.lo, sl1601.hi); rt_index(h_, sl1601.lo, sl1601.hi); } sl1601.p += l_ - sl1601.lo; sl1601.lo = l_; sl1601.hi = h_; sl1601; }), rt_g_lit(">=", 2))) || eq_rt_gstr(({ rt_gstr sl1602 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1602.lo, sl1602.hi); rt_index(h_, sl1602.lo, sl1602.hi); } sl1602.p += l_ - sl1602.lo; sl1602.lo = l_; sl1602.hi = h_; sl1602; }), rt_g_lit("<<", 2))) || eq_rt_gstr(({ rt_gstr sl1603 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1603.lo, sl1603.hi); rt_index(h_, sl1603.lo, sl1603.hi); } sl1603.p += l_ - sl1603.lo; sl1603.lo = l_; sl1603.hi = h_; sl1603; }), rt_g_lit(">>", 2)))) {
f_add_token_284(F->up, ((rt_int)3LL), ({ rt_gstr sl1605 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)2LL); if (l_ <= h_) { rt_index(l_, sl1605.lo, sl1605.hi); rt_index(h_, sl1605.lo, sl1605.hi); } sl1605.p += l_ - sl1605.lo; sl1605.lo = l_; sl1605.hi = h_; sl1605; }), ((rt_int)0LL));
F->i_1491 = rt_add(G_NV(F->i_1491), ((rt_int)2LL));
} else if ((G_NV(F->c_1495) == 33)) {
f_add_token_284(F->up, ((rt_int)3LL), rt_g_lit("|", 1), ((rt_int)0LL));
F->i_1491 = rt_add(G_NV(F->i_1491), ((rt_int)1LL));
} else if (((((((((((((((((G_NV(F->c_1495) == 38) || (G_NV(F->c_1495) == 39)) || (G_NV(F->c_1495) == 40)) || (G_NV(F->c_1495) == 41)) || (G_NV(F->c_1495) == 42)) || (G_NV(F->c_1495) == 43)) || (G_NV(F->c_1495) == 44)) || (G_NV(F->c_1495) == 45)) || (G_NV(F->c_1495) == 46)) || (G_NV(F->c_1495) == 47)) || (G_NV(F->c_1495) == 58)) || (G_NV(F->c_1495) == 59)) || (G_NV(F->c_1495) == 60)) || (G_NV(F->c_1495) == 61)) || (G_NV(F->c_1495) == 62)) || (G_NV(F->c_1495) == 124))) {
f_add_token_284(F->up, ((rt_int)3LL), ({ rt_gstr sl1607 = F->two_1587; rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)1LL); if (l_ <= h_) { rt_index(l_, sl1607.lo, sl1607.hi); rt_index(h_, sl1607.lo, sl1607.hi); } sl1607.p += l_ - sl1607.lo; sl1607.lo = l_; sl1607.hi = h_; sl1607; }), ((rt_int)0LL));
F->i_1491 = rt_add(G_NV(F->i_1491), ((rt_int)1LL));
if ((G_NV(F->c_1495) == 59)) {
f_check_include_310(F->up);
}
} else {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("unexpected character", 20));
}

}
L_end_1586: ;
}
}
L_end_1502: ;
ret_:

  return;
}

static int f_exponent_ahead_298(struct f_greenc_1fr *up_, rt_gstr line_296, rt_int j_297) {
  struct f_exponent_ahead_298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_296 = cp_rt_gstr(line_296);
F->j_297 = j_297;
if ((F->j_297 >= ({ rt_gstr at1608 = F->line_296; at1608.hi >= at1608.lo ? at1608.hi - at1608.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
} else if (((G_NV(({ rt_gstr ix1609 = F->line_296; ix1609.p[rt_index(F->j_297, ix1609.lo, ix1609.hi) - ix1609.lo]; })) != 69) && (G_NV(({ rt_gstr ix1610 = F->line_296; ix1610.p[rt_index(F->j_297, ix1610.lo, ix1610.hi) - ix1610.lo]; })) != 101))) {
F->result_ = 0;
goto ret_;
} else if (f_is_digit_253(F->up, G_NV(({ rt_gstr ix1612 = F->line_296; ix1612.p[rt_index(rt_add(F->j_297, ((rt_int)1LL)), ix1612.lo, ix1612.hi) - ix1612.lo]; })))) {
F->result_ = 1;
goto ret_;
} else if ((rt_add(F->j_297, ((rt_int)1LL)) >= ({ rt_gstr at1613 = F->line_296; at1613.hi >= at1613.lo ? at1613.hi - at1613.lo + 1 : (rt_int)0; }))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (((G_NV(({ rt_gstr ix1614 = F->line_296; ix1614.p[rt_index(rt_add(F->j_297, ((rt_int)1LL)), ix1614.lo, ix1614.hi) - ix1614.lo]; })) == 43) || (G_NV(({ rt_gstr ix1615 = F->line_296; ix1615.p[rt_index(rt_add(F->j_297, ((rt_int)1LL)), ix1615.lo, ix1615.hi) - ix1615.lo]; })) == 45)) && f_is_digit_253(F->up, G_NV(({ rt_gstr ix1617 = F->line_296; ix1617.p[rt_index(rt_add(F->j_297, ((rt_int)2LL)), ix1617.lo, ix1617.hi) - ix1617.lo]; }))));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_exponent_303(struct f_greenc_1fr *up_, rt_gstr line_299, rt_int *j_300, rt_gstr *buf_301, rt_int *bl_302) {
  struct f_exponent_303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->line_299 = cp_rt_gstr(line_299);
F->j_300 = j_300;
F->buf_301 = buf_301;
F->bl_302 = bl_302;
(*F->bl_302) = rt_add(G_NV((*F->bl_302)), ((rt_int)1LL));
(*({ rt_gstr *ix1618 = &((*F->buf_301)); &ix1618->p[rt_index(G_NV((*F->bl_302)), ix1618->lo, ix1618->hi) - ix1618->lo]; })) = 69;
(*F->j_300) = rt_add(G_NV((*F->j_300)), ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix1619 = F->line_299; ix1619.p[rt_index(G_NV((*F->j_300)), ix1619.lo, ix1619.hi) - ix1619.lo]; })) == 43) || (G_NV(({ rt_gstr ix1620 = F->line_299; ix1620.p[rt_index(G_NV((*F->j_300)), ix1620.lo, ix1620.hi) - ix1620.lo]; })) == 45))) {
(*F->bl_302) = rt_add(G_NV((*F->bl_302)), ((rt_int)1LL));
(*({ rt_gstr *ix1621 = &((*F->buf_301)); &ix1621->p[rt_index(G_NV((*F->bl_302)), ix1621->lo, ix1621->hi) - ix1621->lo]; })) = G_NV(({ rt_gstr ix1622 = F->line_299; ix1622.p[rt_index(G_NV((*F->j_300)), ix1622.lo, ix1622.hi) - ix1622.lo]; }));
(*F->j_300) = rt_add(G_NV((*F->j_300)), ((rt_int)1LL));
}
while (((G_NV((*F->j_300)) <= ({ rt_gstr at1624 = F->line_299; at1624.hi >= at1624.lo ? at1624.hi - at1624.lo + 1 : (rt_int)0; })) && (f_is_digit_253(F->up, G_NV(({ rt_gstr ix1626 = F->line_299; ix1626.p[rt_index(G_NV((*F->j_300)), ix1626.lo, ix1626.hi) - ix1626.lo]; }))) || (G_NV(({ rt_gstr ix1627 = F->line_299; ix1627.p[rt_index(G_NV((*F->j_300)), ix1627.lo, ix1627.hi) - ix1627.lo]; })) == 95)))) {
if ((G_NV(({ rt_gstr ix1628 = F->line_299; ix1628.p[rt_index(G_NV((*F->j_300)), ix1628.lo, ix1628.hi) - ix1628.lo]; })) != 95)) {
(*F->bl_302) = rt_add(G_NV((*F->bl_302)), ((rt_int)1LL));
(*({ rt_gstr *ix1629 = &((*F->buf_301)); &ix1629->p[rt_index(G_NV((*F->bl_302)), ix1629->lo, ix1629->hi) - ix1629->lo]; })) = G_NV(({ rt_gstr ix1630 = F->line_299; ix1630.p[rt_index(G_NV((*F->j_300)), ix1630.lo, ix1630.hi) - ix1630.lo]; }));
} else if (((G_NV((*F->j_300)) == ({ rt_gstr at1631 = F->line_299; at1631.hi >= at1631.lo ? at1631.hi - at1631.lo + 1 : (rt_int)0; })) || (!f_is_digit_253(F->up, G_NV(({ rt_gstr ix1633 = F->line_299; ix1633.p[rt_index(rt_add(G_NV((*F->j_300)), ((rt_int)1LL)), ix1633.lo, ix1633.hi) - ix1633.lo]; })))))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), rt_g_lit("an underscore in a number stands between two digits (RM79 2.4)", 62));
}
(*F->j_300) = rt_add(G_NV((*F->j_300)), ((rt_int)1LL));
}
L_end_1623: ;
ret_:

  return;
}

static void f_include_open_306(struct f_greenc_1fr *up_, rt_gstr name_304, rt_int *length_305) {
  struct f_include_open_306fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_304 = cp_rt_gstr(name_304);
F->length_305 = length_305;
rt_g_include_open(rt_g_g2s(F->name_304), F->length_305);
ret_:

  return;
}

static void f_include_char_309(struct f_greenc_1fr *up_, rt_int i_307, int *c_308) {
  struct f_include_char_309fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->i_307 = i_307;
F->c_308 = c_308;
rt_g_include_char(F->i_307, F->c_308);
ret_:

  return;
}

static void f_check_include_310(struct f_greenc_1fr *up_) {
  struct f_check_include_310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1634 = INT64_MIN;
if ((G_NV(F->up->ntoks_114) < ((rt_int)6LL))) {
goto ret_;
}
if (((G_NV((*(P111)rt_nil_check(({ A110 ix1635 = F->up->toks_113; ix1635.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)5LL)), ix1635.lo, ix1635.hi) - ix1635.lo]; }))).kind_) != ((rt_int)2LL)) || (G_NV((*(P111)rt_nil_check(({ A110 ix1636 = F->up->toks_113; ix1636.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)2LL)), ix1636.lo, ix1636.hi) - ix1636.lo]; }))).kind_) != ((rt_int)6LL)))) {
goto ret_;
} else if (((((!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1637 = F->up->toks_113; ix1637.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)5LL)), ix1637.lo, ix1637.hi) - ix1637.lo]; }))).s_)), rt_g_lit("PRAGMA", 6))) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1638 = F->up->toks_113; ix1638.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)4LL)), ix1638.lo, ix1638.hi) - ix1638.lo]; }))).s_)), rt_g_lit("INCLUDE", 7)))) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1639 = F->up->toks_113; ix1639.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)3LL)), ix1639.lo, ix1639.hi) - ix1639.lo]; }))).s_)), rt_g_lit("(", 1)))) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1640 = F->up->toks_113; ix1640.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)1LL)), ix1640.lo, ix1640.hi) - ix1640.lo]; }))).s_)), rt_g_lit(")", 1))))) {
goto ret_;
}
f_include_open_306(F->up, (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1642 = F->up->toks_113; ix1642.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)2LL)), ix1642.lo, ix1642.hi) - ix1642.lo]; }))).s_)), &F->n_1634);
if ((G_NV(F->n_1634) < ((rt_int)0LL))) {
f_fail_267(F->up, G_NV(F->up->src_line_116), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INCLUDE: the file ", 25), (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1644 = F->up->toks_113; ix1644.p[rt_index(rt_sub(G_NV(F->up->ntoks_114), ((rt_int)2LL)), ix1644.lo, ix1644.hi) - ix1644.lo]; }))).s_))), rt_g_lit(" cannot be read", 15)));
}
F->up->ntoks_114 = rt_sub(G_NV(F->up->ntoks_114), ((rt_int)6LL));
f_include_text_312(F->up, G_NV(F->n_1634));
ret_:

  return;
}

static void f_include_text_312(struct f_greenc_1fr *up_, rt_int n_311) {
  struct f_include_text_312fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_311 = n_311;
F->t_1645.lo = ((rt_int)1LL); F->t_1645.hi = rt_add(F->n_311, ((rt_int)1LL));
F->t_1645.lo2 = 1; F->t_1645.hi2 = 1;
F->t_1645.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_1645));
memset(F->t_1645.p, 0xFF, (size_t)G_CNT(F->t_1645));
F->saved_line_1647 = INT64_MIN;
F->saved_line_1647 = G_NV(F->up->src_line_116);
F->from_1648 = INT64_MIN;
F->from_1648 = ((rt_int)1LL);
{ rt_int lo1651 = ((rt_int)1LL), hi1652 = F->n_311;
for (rt_int it1653 = lo1651; it1653 <= hi1652; it1653++) {
F->k_1650 = it1653;
f_include_char_309(F->up, F->k_1650, &(*({ rt_gstr *ix1655 = &(F->t_1645); &ix1655->p[rt_index(F->k_1650, ix1655->lo, ix1655->hi) - ix1655->lo]; })));
}
}
L_end_1649: ;
F->up->src_line_116 = ((rt_int)0LL);
{ rt_int lo1658 = ((rt_int)1LL), hi1659 = F->n_311;
for (rt_int it1660 = lo1658; it1660 <= hi1659; it1660++) {
F->k_1657 = it1660;
if ((G_NV(({ rt_gstr ix1661 = F->t_1645; ix1661.p[rt_index(F->k_1657, ix1661.lo, ix1661.hi) - ix1661.lo]; })) == 10)) {
F->up->src_line_116 = rt_add(G_NV(F->up->src_line_116), ((rt_int)1LL));
f_include_line_316(F->up, F->t_1645, G_NV(F->from_1648), rt_sub(F->k_1657, ((rt_int)1LL)));
F->from_1648 = rt_add(F->k_1657, ((rt_int)1LL));
}
}
}
L_end_1656: ;
if ((G_NV(F->from_1648) <= F->n_311)) {
F->up->src_line_116 = rt_add(G_NV(F->up->src_line_116), ((rt_int)1LL));
f_include_line_316(F->up, F->t_1645, G_NV(F->from_1648), F->n_311);
}
F->up->src_line_116 = G_NV(F->saved_line_1647);
ret_:

  return;
}

static void f_include_line_316(struct f_greenc_1fr *up_, rt_gstr t_313, rt_int from_314, rt_int to_315) {
  struct f_include_line_316fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_313 = cp_rt_gstr(t_313);
F->from_314 = from_314;
F->to_315 = to_315;
F->l_1662.lo = ((rt_int)1LL); F->l_1662.hi = rt_add(rt_sub(F->to_315, F->from_314), ((rt_int)1LL));
F->l_1662.lo2 = 1; F->l_1662.hi2 = 1;
F->l_1662.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->l_1662));
memset(F->l_1662.p, 0xFF, (size_t)G_CNT(F->l_1662));
{ rt_int lo1666 = F->from_314, hi1667 = F->to_315;
for (rt_int it1668 = lo1666; it1668 <= hi1667; it1668++) {
F->k_1665 = it1668;
(*({ rt_gstr *ix1669 = &(F->l_1662); &ix1669->p[rt_index(rt_add(rt_sub(F->k_1665, F->from_314), ((rt_int)1LL)), ix1669->lo, ix1669->hi) - ix1669->lo]; })) = G_NV(({ rt_gstr ix1670 = F->t_313; ix1670.p[rt_index(F->k_1665, ix1670.lo, ix1670.hi) - ix1670.lo]; }));
}
}
L_end_1664: ;
f_lex_line_295(F->up, F->l_1662);
ret_:

  return;
}

static void f_read_source_317(struct f_greenc_1fr *up_) {
  struct f_read_source_317fr *F = rt_alloc(sizeof *F);
F->up = up_;
{ rt_frame xf1671;
if (RT_TRY(xf1671)) {
F->buf_1673.lo = ((rt_int)1LL); F->buf_1673.hi = ((rt_int)10000LL);
F->buf_1673.lo2 = 1; F->buf_1673.hi2 = 1;
F->buf_1673.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->buf_1673));
memset(F->buf_1673.p, 0xFF, (size_t)G_CNT(F->buf_1673));
F->bl_1675 = INT64_MIN;
F->bl_1675 = ((rt_int)0LL);
F->c_1676 = INT_MIN;
for (;;) {
(F->c_1676 = rt_g_getc());
if ((G_NV(F->c_1676) == 10)) {
F->up->src_line_116 = rt_add(G_NV(F->up->src_line_116), ((rt_int)1LL));
if ((G_NV(F->up->src_line_116) <= ((rt_int)300000LL))) {
(*({ A203 *ix1678 = &(F->up->src_lines_204); &ix1678->p[rt_index(G_NV(F->up->src_line_116), ix1678->lo, ix1678->hi) - ix1678->lo]; })) = f_mk_246(F->up, ({ rt_gstr sl1680 = F->buf_1673; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1675); if (l_ <= h_) { rt_index(l_, sl1680.lo, sl1680.hi); rt_index(h_, sl1680.lo, sl1680.hi); } sl1680.p += l_ - sl1680.lo; sl1680.lo = l_; sl1680.hi = h_; sl1680; }));
}
f_lex_line_295(F->up, ({ rt_gstr sl1682 = F->buf_1673; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1675); if (l_ <= h_) { rt_index(l_, sl1682.lo, sl1682.hi); rt_index(h_, sl1682.lo, sl1682.hi); } sl1682.p += l_ - sl1682.lo; sl1682.lo = l_; sl1682.hi = h_; sl1682; }));
F->bl_1675 = ((rt_int)0LL);
} else {
F->bl_1675 = rt_add(G_NV(F->bl_1675), ((rt_int)1LL));
(*({ rt_gstr *ix1683 = &(F->buf_1673); &ix1683->p[rt_index(G_NV(F->bl_1675), ix1683->lo, ix1683->hi) - ix1683->lo]; })) = G_NV(F->c_1676);
}
}
L_end_1677: ;
RT_POP(xf1671);
} else {
RT_POP(xf1671);
int x1672 = rt_xcur;
if (rt_g_aborted()) rt_raise(x1672);
if (0 || x1672 == rt_exc("END_OF_FILE")) {
if ((G_NV(F->bl_1675) > ((rt_int)0LL))) {
F->up->src_line_116 = rt_add(G_NV(F->up->src_line_116), ((rt_int)1LL));
if ((G_NV(F->up->src_line_116) <= ((rt_int)300000LL))) {
(*({ A203 *ix1684 = &(F->up->src_lines_204); &ix1684->p[rt_index(G_NV(F->up->src_line_116), ix1684->lo, ix1684->hi) - ix1684->lo]; })) = f_mk_246(F->up, ({ rt_gstr sl1686 = F->buf_1673; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1675); if (l_ <= h_) { rt_index(l_, sl1686.lo, sl1686.hi); rt_index(h_, sl1686.lo, sl1686.hi); } sl1686.p += l_ - sl1686.lo; sl1686.lo = l_; sl1686.hi = h_; sl1686; }));
}
f_lex_line_295(F->up, ({ rt_gstr sl1688 = F->buf_1673; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->bl_1675); if (l_ <= h_) { rt_index(l_, sl1688.lo, sl1688.hi); rt_index(h_, sl1688.lo, sl1688.hi); } sl1688.p += l_ - sl1688.lo; sl1688.lo = l_; sl1688.hi = h_; sl1688; }));
}
f_add_token_284(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
} else {
rt_raise(x1672);
}
}
}
ret_:

  return;
}

static P175 f_nn_320(struct f_greenc_1fr *up_, rt_int kind_318, rt_int line_319) {
  struct f_nn_320fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_318 = kind_318;
F->line_319 = line_319;
F->result_ = ({ R176 *cell1689 = rt_alloc(sizeof(R176)); *cell1689 = cp_R176(({ R176 ag1690; ag1690.kind_ = F->kind_318; ag1690.line_ = F->line_319; ag1690.ival_ = ((rt_int)0LL); ag1690.flag_ = ((rt_int)0LL); ag1690.name_ = NULL; ag1690.tag_ = NULL; ag1690.a_ = NULL; ag1690.b_ = NULL; ag1690.c_ = NULL; ag1690.d_ = NULL; ag1690.e_ = NULL; ag1690.next_ = NULL; ag1690.formal_ = NULL; ag1690; })); (P175)cell1689; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_append_324(struct f_greenc_1fr *up_, P175 *head_321, P175 *tail_322, P175 x_323) {
  struct f_append_324fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->head_321 = head_321;
F->tail_322 = tail_322;
F->x_323 = x_323;
if ((F->x_323 == NULL)) {
goto ret_;
}
if (((*F->head_321) == NULL)) {
(*F->head_321) = F->x_323;
} else {
(*(P175)rt_nil_check((*F->tail_322))).next_ = F->x_323;
}
(*F->tail_322) = F->x_323;
while (((*(P175)rt_nil_check((*F->tail_322))).next_ != NULL)) {
(*F->tail_322) = (*(P175)rt_nil_check((*F->tail_322))).next_;
}
L_end_1691: ;
ret_:

  return;
}

static rt_int f_list_len_326(struct f_greenc_1fr *up_, P175 l_325) {
  struct f_list_len_326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_325 = l_325;
F->n_1692 = INT64_MIN;
F->n_1692 = ((rt_int)0LL);
F->p_1693 = NULL;
F->p_1693 = F->l_325;
while ((F->p_1693 != NULL)) {
F->n_1692 = rt_add(G_NV(F->n_1692), ((rt_int)1LL));
F->p_1693 = (*(P175)rt_nil_check(F->p_1693)).next_;
}
L_end_1694: ;
F->result_ = G_NV(F->n_1692);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_cur_line_327(struct f_greenc_1fr *up_) {
  struct f_cur_line_327fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = G_NV((*(P111)rt_nil_check(({ A110 ix1695 = F->up->toks_113; ix1695.p[rt_index(G_NV(F->up->tpos_115), ix1695.lo, ix1695.hi) - ix1695.lo]; }))).line_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kw_329(struct f_greenc_1fr *up_, rt_gstr w_328) {
  struct f_at_kw_329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_328 = cp_rt_gstr(w_328);
if ((!(G_NV((*(P111)rt_nil_check(({ A110 ix1696 = F->up->toks_113; ix1696.p[rt_index(G_NV(F->up->tpos_115), ix1696.lo, ix1696.hi) - ix1696.lo]; }))).kind_) == ((rt_int)2LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1697 = F->up->toks_113; ix1697.p[rt_index(G_NV(F->up->tpos_115), ix1697.lo, ix1697.hi) - ix1697.lo]; }))).s_)), F->w_328);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_op_331(struct f_greenc_1fr *up_, rt_gstr w_330) {
  struct f_at_op_331fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_330 = cp_rt_gstr(w_330);
if ((!(G_NV((*(P111)rt_nil_check(({ A110 ix1698 = F->up->toks_113; ix1698.p[rt_index(G_NV(F->up->tpos_115), ix1698.lo, ix1698.hi) - ix1698.lo]; }))).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1699 = F->up->toks_113; ix1699.p[rt_index(G_NV(F->up->tpos_115), ix1699.lo, ix1699.hi) - ix1699.lo]; }))).s_)), F->w_330);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_at_kind_333(struct f_greenc_1fr *up_, rt_int k_332) {
  struct f_at_kind_333fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_332 = k_332;
F->result_ = (G_NV((*(P111)rt_nil_check(({ A110 ix1700 = F->up->toks_113; ix1700.p[rt_index(G_NV(F->up->tpos_115), ix1700.lo, ix1700.hi) - ix1700.lo]; }))).kind_) == F->k_332);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_kind_at_335(struct f_greenc_1fr *up_, rt_int k_334) {
  struct f_kind_at_335fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_334 = k_334;
if ((rt_add(G_NV(F->up->tpos_115), F->k_334) > G_NV(F->up->ntoks_114))) {
F->result_ = ((rt_int)0LL);
goto ret_;
}
F->result_ = G_NV((*(P111)rt_nil_check(({ A110 ix1701 = F->up->toks_113; ix1701.p[rt_index(rt_add(G_NV(F->up->tpos_115), F->k_334), ix1701.lo, ix1701.hi) - ix1701.lo]; }))).kind_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_text_at_337(struct f_greenc_1fr *up_, rt_int k_336) {
  struct f_text_at_337fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->k_336 = k_336;
if ((rt_add(G_NV(F->up->tpos_115), F->k_336) > G_NV(F->up->ntoks_114))) {
F->result_ = rt_g_lit("", 0);
goto ret_;
}
F->result_ = (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1702 = F->up->toks_113; ix1702.p[rt_index(rt_add(G_NV(F->up->tpos_115), F->k_336), ix1702.lo, ix1702.hi) - ix1702.lo]; }))).s_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_perror_339(struct f_greenc_1fr *up_, rt_gstr msg_338) {
  struct f_perror_339fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->msg_338 = cp_rt_gstr(msg_338);
f_fail_267(F->up, G_NV((*(P111)rt_nil_check(({ A110 ix1705 = F->up->toks_113; ix1705.p[rt_index(G_NV(F->up->tpos_115), ix1705.lo, ix1705.hi) - ix1705.lo]; }))).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->msg_338, rt_g_lit(" (at ", 5)), (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1706 = F->up->toks_113; ix1706.p[rt_index(G_NV(F->up->tpos_115), ix1706.lo, ix1706.hi) - ix1706.lo]; }))).s_))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_skip_340(struct f_greenc_1fr *up_) {
  struct f_skip_340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->tpos_115 = rt_add(G_NV(F->up->tpos_115), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_kw_342(struct f_greenc_1fr *up_, rt_gstr w_341) {
  struct f_expect_kw_342fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_341 = cp_rt_gstr(w_341);
if ((!f_at_kw_329(F->up, F->w_341))) {
f_perror_339(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_341));
}
F->up->tpos_115 = rt_add(G_NV(F->up->tpos_115), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_op_344(struct f_greenc_1fr *up_, rt_gstr w_343) {
  struct f_expect_op_344fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->w_343 = cp_rt_gstr(w_343);
if ((!f_at_op_331(F->up, F->w_343))) {
f_perror_339(F->up, cat_rt_gstr(rt_g_lit("expected ", 9), F->w_343));
}
F->up->tpos_115 = rt_add(G_NV(F->up->tpos_115), ((rt_int)1LL));
ret_:

  return;
}

static void f_expect_id_346(struct f_greenc_1fr *up_, P141 *res_345) {
  struct f_expect_id_346fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_345 = res_345;
if ((!f_at_kind_333(F->up, ((rt_int)1LL)))) {
f_perror_339(F->up, rt_g_lit("expected an identifier", 22));
}
F->up->tpos_115 = rt_add(G_NV(F->up->tpos_115), ((rt_int)1LL));
(*F->res_345) = (*(P111)rt_nil_check(({ A110 ix1707 = F->up->toks_113; ix1707.p[rt_index(rt_sub(G_NV(F->up->tpos_115), ((rt_int)1LL)), ix1707.lo, ix1707.hi) - ix1707.lo]; }))).s_;
goto ret_;
ret_:

  return;
}

static void f_name_node_348(struct f_greenc_1fr *up_, P175 *res_347) {
  struct f_name_node_348fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_347 = res_347;
F->x_1708 = NULL;
F->x_1708 = f_nn_320(F->up, ((rt_int)5LL), f_cur_line_327(F->up));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1708)).name_);
(*F->res_347) = F->x_1708;
goto ret_;
ret_:

  return;
}

static void f_id_list_350(struct f_greenc_1fr *up_, P175 *res_349) {
  struct f_id_list_350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_349 = res_349;
F->head_1709 = NULL;
F->tail_1710 = NULL;
F->x_1711 = NULL;
f_name_node_348(F->up, &F->x_1711);
f_append_324(F->up, &F->head_1709, &F->tail_1710, F->x_1711);
while (f_at_op_331(F->up, rt_g_lit(",", 1))) {
f_skip_340(F->up);
f_name_node_348(F->up, &F->x_1711);
f_append_324(F->up, &F->head_1709, &F->tail_1710, F->x_1711);
}
L_end_1712: ;
(*F->res_349) = F->head_1709;
goto ret_;
ret_:

  return;
}

static P175 f_binop_355(struct f_greenc_1fr *up_, P141 op_351, P175 l_352, P175 r_353, rt_int line_354) {
  struct f_binop_355fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->op_351 = op_351;
F->l_352 = l_352;
F->r_353 = r_353;
F->line_354 = line_354;
F->x_1713 = NULL;
F->x_1713 = f_nn_320(F->up, ((rt_int)7LL), F->line_354);
(*(P175)rt_nil_check(F->x_1713)).name_ = F->op_351;
(*(P175)rt_nil_check(F->x_1713)).a_ = F->l_352;
(*(P175)rt_nil_check(F->x_1713)).b_ = F->r_353;
F->result_ = F->x_1713;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_expr_357(struct f_greenc_1fr *up_, P175 *res_356) {
  struct f_expr_357fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_356 = res_356;
F->l_1714 = NULL;
F->r_1715 = NULL;
F->op_1716 = NULL;
F->first_op_1717 = NULL;
F->line_1718 = INT64_MIN;
F->short_1719 = INT_MIN;
F->short_1719 = 0;
F->first_short_1720 = INT_MIN;
F->first_short_1720 = 0;
f_relation_361(F->up, &F->l_1714);
while (((f_at_kw_329(F->up, rt_g_lit("AND", 3)) || f_at_kw_329(F->up, rt_g_lit("OR", 2))) || f_at_kw_329(F->up, rt_g_lit("XOR", 3)))) {
F->op_1716 = (*(P111)rt_nil_check(({ A110 ix1722 = F->up->toks_113; ix1722.p[rt_index(G_NV(F->up->tpos_115), ix1722.lo, ix1722.hi) - ix1722.lo]; }))).s_;
F->line_1718 = f_cur_line_327(F->up);
f_skip_340(F->up);
F->short_1719 = 0;
if ((eq_rt_gstr((*(P141)rt_nil_check(F->op_1716)), rt_g_lit("AND", 3)) && f_at_kw_329(F->up, rt_g_lit("THEN", 4)))) {
f_skip_340(F->up);
F->short_1719 = 1;
} else if ((eq_rt_gstr((*(P141)rt_nil_check(F->op_1716)), rt_g_lit("OR", 2)) && f_at_kw_329(F->up, rt_g_lit("ELSE", 4)))) {
f_skip_340(F->up);
F->short_1719 = 1;
}
if ((F->first_op_1717 == NULL)) {
F->first_op_1717 = F->op_1716;
F->first_short_1720 = G_NV(F->short_1719);
} else if (((!eq_rt_gstr((*(P141)rt_nil_check(F->first_op_1717)), (*(P141)rt_nil_check(F->op_1716)))) || (G_NV(F->first_short_1720) != G_NV(F->short_1719)))) {
f_fail_267(F->up, G_NV(F->line_1718), rt_g_lit("logical operators of different kinds are not mixed without parentheses (RM79 4.4)", 81));
}
f_relation_361(F->up, &F->r_1715);
F->l_1714 = f_binop_355(F->up, F->op_1716, F->l_1714, F->r_1715, G_NV(F->line_1718));
if (G_NV(F->short_1719)) {
(*(P175)rt_nil_check(F->l_1714)).ival_ = ((rt_int)1LL);
}
}
L_end_1721: ;
(*F->res_356) = F->l_1714;
goto ret_;
ret_:

  return;
}

static int f_is_rel_359(struct f_greenc_1fr *up_, rt_gstr s_358) {
  struct f_is_rel_359fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_358 = cp_rt_gstr(s_358);
F->result_ = (((((eq_rt_gstr(F->s_358, rt_g_lit("=", 1)) || eq_rt_gstr(F->s_358, rt_g_lit("/=", 2))) || eq_rt_gstr(F->s_358, rt_g_lit("<", 1))) || eq_rt_gstr(F->s_358, rt_g_lit("<=", 2))) || eq_rt_gstr(F->s_358, rt_g_lit(">", 1))) || eq_rt_gstr(F->s_358, rt_g_lit(">=", 2)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_relation_361(struct f_greenc_1fr *up_, P175 *res_360) {
  struct f_relation_361fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_360 = res_360;
F->l_1723 = NULL;
F->r_1724 = NULL;
F->lo_1725 = NULL;
F->hi_1726 = NULL;
F->t_1727 = NULL;
F->op_1728 = NULL;
F->line_1729 = INT64_MIN;
F->line_1729 = f_cur_line_327(F->up);
F->neg_1730 = INT_MIN;
F->neg_1730 = 0;
f_simple_expr_365(F->up, &F->l_1723);
if ((f_at_kind_333(F->up, ((rt_int)3LL)) && f_is_rel_359(F->up, (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1732 = F->up->toks_113; ix1732.p[rt_index(G_NV(F->up->tpos_115), ix1732.lo, ix1732.hi) - ix1732.lo]; }))).s_))))) {
F->op_1728 = (*(P111)rt_nil_check(({ A110 ix1733 = F->up->toks_113; ix1733.p[rt_index(G_NV(F->up->tpos_115), ix1733.lo, ix1733.hi) - ix1733.lo]; }))).s_;
f_skip_340(F->up);
f_simple_expr_365(F->up, &F->r_1724);
F->l_1723 = f_binop_355(F->up, F->op_1728, F->l_1723, F->r_1724, G_NV(F->line_1729));
(*F->res_360) = F->l_1723;
goto ret_;
}
if (((f_at_kw_329(F->up, rt_g_lit("NOT", 3)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("IN", 2)))) {
f_skip_340(F->up);
F->neg_1730 = 1;
}
if (f_at_kw_329(F->up, rt_g_lit("IN", 2))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &F->lo_1725);
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &F->hi_1726);
F->t_1727 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1729));
(*(P175)rt_nil_check(F->t_1727)).a_ = F->lo_1725;
(*(P175)rt_nil_check(F->t_1727)).b_ = F->hi_1726;
} else if (((G_NV((*(P175)rt_nil_check(F->lo_1725)).kind_) == ((rt_int)5LL)) || (G_NV((*(P175)rt_nil_check(F->lo_1725)).kind_) == ((rt_int)9LL)))) {
F->t_1727 = f_nn_320(F->up, ((rt_int)80LL), G_NV(F->line_1729));
(*(P175)rt_nil_check(F->t_1727)).name_ = (*(P175)rt_nil_check(F->lo_1725)).name_;
if ((G_NV((*(P175)rt_nil_check(F->lo_1725)).kind_) == ((rt_int)9LL))) {
(*(P175)rt_nil_check(F->t_1727)).tag_ = f_mk_246(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->lo_1725)).a_));
}
if (f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) {
f_skip_340(F->up);
F->r_1724 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1729));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1724)).a_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1724)).b_);
(*(P175)rt_nil_check(F->t_1727)).a_ = F->r_1724;
(*(P175)rt_nil_check(F->t_1727)).flag_ = ((rt_int)1LL);
} else if ((f_at_kw_329(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_329(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->t_1727)).b_);
(*(P175)rt_nil_check(F->t_1727)).flag_ = ((rt_int)3LL);
}
} else {
f_perror_339(F->up, rt_g_lit("membership is in a range or a type mark (RM79 4.5.2)", 52));
}
F->op_1728 = f_mk_246(F->up, rt_g_lit("IN", 2));
F->l_1723 = f_binop_355(F->up, F->op_1728, F->l_1723, F->t_1727, G_NV(F->line_1729));
if (G_NV(F->neg_1730)) {
F->t_1727 = f_nn_320(F->up, ((rt_int)6LL), G_NV(F->line_1729));
(*(P175)rt_nil_check(F->t_1727)).name_ = f_mk_246(F->up, rt_g_lit("NOT", 3));
(*(P175)rt_nil_check(F->t_1727)).a_ = F->l_1723;
(*F->res_360) = F->t_1727;
goto ret_;
}
}
(*F->res_360) = F->l_1723;
goto ret_;
ret_:

  return;
}

static rt_gstr f_path_of_363(struct f_greenc_1fr *up_, P175 e_362) {
  struct f_path_of_363fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_362 = e_362;
if ((G_NV((*(P175)rt_nil_check(F->e_362)).kind_) == ((rt_int)9LL))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(f_path_of_363(F->up, (*(P175)rt_nil_check(F->e_362)).a_), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_362)).name_)));
goto ret_;
}
F->result_ = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_362)).name_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_simple_expr_365(struct f_greenc_1fr *up_, P175 *res_364) {
  struct f_simple_expr_365fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_364 = res_364;
F->l_1734 = NULL;
F->r_1735 = NULL;
F->op_1736 = NULL;
F->line_1737 = INT64_MIN;
F->line_1737 = f_cur_line_327(F->up);
if (((f_at_op_331(F->up, rt_g_lit("+", 1)) || f_at_op_331(F->up, rt_g_lit("-", 1))) || f_at_kw_329(F->up, rt_g_lit("NOT", 3)))) {
F->op_1736 = (*(P111)rt_nil_check(({ A110 ix1738 = F->up->toks_113; ix1738.p[rt_index(G_NV(F->up->tpos_115), ix1738.lo, ix1738.hi) - ix1738.lo]; }))).s_;
f_skip_340(F->up);
f_term_367(F->up, &F->r_1735);
F->l_1734 = f_nn_320(F->up, ((rt_int)6LL), G_NV(F->line_1737));
(*(P175)rt_nil_check(F->l_1734)).name_ = F->op_1736;
(*(P175)rt_nil_check(F->l_1734)).a_ = F->r_1735;
} else {
f_term_367(F->up, &F->l_1734);
}
while (((f_at_op_331(F->up, rt_g_lit("+", 1)) || f_at_op_331(F->up, rt_g_lit("-", 1))) || f_at_op_331(F->up, rt_g_lit("&", 1)))) {
F->op_1736 = (*(P111)rt_nil_check(({ A110 ix1740 = F->up->toks_113; ix1740.p[rt_index(G_NV(F->up->tpos_115), ix1740.lo, ix1740.hi) - ix1740.lo]; }))).s_;
f_skip_340(F->up);
f_term_367(F->up, &F->r_1735);
F->l_1734 = f_binop_355(F->up, F->op_1736, F->l_1734, F->r_1735, G_NV(F->line_1737));
}
L_end_1739: ;
(*F->res_364) = F->l_1734;
goto ret_;
ret_:

  return;
}

static void f_term_367(struct f_greenc_1fr *up_, P175 *res_366) {
  struct f_term_367fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_366 = res_366;
F->l_1741 = NULL;
F->r_1742 = NULL;
F->op_1743 = NULL;
F->line_1744 = INT64_MIN;
F->line_1744 = f_cur_line_327(F->up);
f_factor_369(F->up, &F->l_1741);
while (((f_at_op_331(F->up, rt_g_lit("*", 1)) || f_at_op_331(F->up, rt_g_lit("/", 1))) || f_at_kw_329(F->up, rt_g_lit("MOD", 3)))) {
F->op_1743 = (*(P111)rt_nil_check(({ A110 ix1746 = F->up->toks_113; ix1746.p[rt_index(G_NV(F->up->tpos_115), ix1746.lo, ix1746.hi) - ix1746.lo]; }))).s_;
f_skip_340(F->up);
f_factor_369(F->up, &F->r_1742);
F->l_1741 = f_binop_355(F->up, F->op_1743, F->l_1741, F->r_1742, G_NV(F->line_1744));
}
L_end_1745: ;
(*F->res_366) = F->l_1741;
goto ret_;
ret_:

  return;
}

static void f_factor_369(struct f_greenc_1fr *up_, P175 *res_368) {
  struct f_factor_369fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_368 = res_368;
F->l_1747 = NULL;
F->r_1748 = NULL;
F->op_1749 = NULL;
F->line_1750 = INT64_MIN;
F->line_1750 = f_cur_line_327(F->up);
f_primary_371(F->up, &F->l_1747);
if (f_at_op_331(F->up, rt_g_lit("**", 2))) {
F->op_1749 = (*(P111)rt_nil_check(({ A110 ix1751 = F->up->toks_113; ix1751.p[rt_index(G_NV(F->up->tpos_115), ix1751.lo, ix1751.hi) - ix1751.lo]; }))).s_;
f_skip_340(F->up);
f_primary_371(F->up, &F->r_1748);
F->l_1747 = f_binop_355(F->up, F->op_1749, F->l_1747, F->r_1748, G_NV(F->line_1750));
}
(*F->res_368) = F->l_1747;
goto ret_;
ret_:

  return;
}

static void f_primary_371(struct f_greenc_1fr *up_, P175 *res_370) {
  struct f_primary_371fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_370 = res_370;
F->x_1752 = NULL;
F->line_1753 = INT64_MIN;
F->line_1753 = f_cur_line_327(F->up);
if (f_at_kind_333(F->up, ((rt_int)4LL))) {
F->x_1752 = f_nn_320(F->up, ((rt_int)1LL), G_NV(F->line_1753));
(*(P175)rt_nil_check(F->x_1752)).ival_ = G_NV((*(P111)rt_nil_check(({ A110 ix1754 = F->up->toks_113; ix1754.p[rt_index(G_NV(F->up->tpos_115), ix1754.lo, ix1754.hi) - ix1754.lo]; }))).ival_);
(*(P175)rt_nil_check(F->x_1752)).name_ = (*(P111)rt_nil_check(({ A110 ix1755 = F->up->toks_113; ix1755.p[rt_index(G_NV(F->up->tpos_115), ix1755.lo, ix1755.hi) - ix1755.lo]; }))).s_;
f_skip_340(F->up);
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_kind_333(F->up, ((rt_int)5LL))) {
F->x_1752 = f_nn_320(F->up, ((rt_int)2LL), G_NV(F->line_1753));
(*(P175)rt_nil_check(F->x_1752)).name_ = (*(P111)rt_nil_check(({ A110 ix1756 = F->up->toks_113; ix1756.p[rt_index(G_NV(F->up->tpos_115), ix1756.lo, ix1756.hi) - ix1756.lo]; }))).s_;
f_skip_340(F->up);
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_kind_333(F->up, ((rt_int)6LL))) {
F->x_1752 = f_nn_320(F->up, ((rt_int)3LL), G_NV(F->line_1753));
(*(P175)rt_nil_check(F->x_1752)).name_ = (*(P111)rt_nil_check(({ A110 ix1757 = F->up->toks_113; ix1757.p[rt_index(G_NV(F->up->tpos_115), ix1757.lo, ix1757.hi) - ix1757.lo]; }))).s_;
f_skip_340(F->up);
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("NULL", 4))) {
f_skip_340(F->up);
F->x_1752 = f_nn_320(F->up, ((rt_int)4LL), G_NV(F->line_1753));
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("NEW", 3))) {
f_skip_340(F->up);
F->x_1752 = f_nn_320(F->up, ((rt_int)11LL), G_NV(F->line_1753));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1752)).name_);
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_373(F->up, &(*(P175)rt_nil_check(F->x_1752)).a_);
}
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_agg_or_paren_373(F->up, &F->x_1752);
(*F->res_370) = F->x_1752;
goto ret_;
}
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_name_p_378(F->up, &F->x_1752);
(*F->res_370) = F->x_1752;
goto ret_;
}
f_perror_339(F->up, rt_g_lit("expected an expression", 22));
(*F->res_370) = NULL;
goto ret_;
ret_:

  return;
}

static void f_agg_or_paren_373(struct f_greenc_1fr *up_, P175 *res_372) {
  struct f_agg_or_paren_373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_372 = res_372;
F->line_1758 = INT64_MIN;
F->line_1758 = f_cur_line_327(F->up);
F->items_1759 = NULL;
F->itail_1760 = NULL;
F->it_1761 = NULL;
F->first_1762 = NULL;
F->keys_1763 = NULL;
F->ktail_1764 = NULL;
F->lab_1765 = NULL;
F->x_1766 = NULL;
F->more_1767 = INT_MIN;
F->more_1767 = 1;
f_expect_op_344(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1767)) {
F->it_1761 = f_nn_320(F->up, ((rt_int)13LL), G_NV(F->line_1758));
if (f_at_kw_329(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit("=>", 2));
F->lab_1765 = f_nn_320(F->up, ((rt_int)61LL), G_NV(F->line_1758));
(*(P175)rt_nil_check(F->lab_1765)).flag_ = ((rt_int)1LL);
(*(P175)rt_nil_check(F->it_1761)).a_ = F->lab_1765;
f_expr_357(F->up, &(*(P175)rt_nil_check(F->it_1761)).b_);
} else {
f_expr_357(F->up, &F->first_1762);
if (((f_at_op_331(F->up, rt_g_lit("..", 2)) || f_at_op_331(F->up, rt_g_lit("|", 1))) || f_at_op_331(F->up, rt_g_lit("=>", 2)))) {
F->keys_1763 = NULL;
F->ktail_1764 = NULL;
for (;;) {
F->lab_1765 = f_nn_320(F->up, ((rt_int)61LL), G_NV(F->line_1758));
(*(P175)rt_nil_check(F->lab_1765)).a_ = F->first_1762;
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->lab_1765)).b_);
}
f_append_324(F->up, &F->keys_1763, &F->ktail_1764, F->lab_1765);
if ((!f_at_op_331(F->up, rt_g_lit("|", 1)))) {
goto L_end_1769;
}
f_skip_340(F->up);
f_simple_expr_365(F->up, &F->first_1762);
}
L_end_1769: ;
f_expect_op_344(F->up, rt_g_lit("=>", 2));
(*(P175)rt_nil_check(F->it_1761)).a_ = F->keys_1763;
f_expr_357(F->up, &(*(P175)rt_nil_check(F->it_1761)).b_);
} else {
(*(P175)rt_nil_check(F->it_1761)).b_ = F->first_1762;
}
}
f_append_324(F->up, &F->items_1759, &F->itail_1760, F->it_1761);
F->more_1767 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1767)) {
f_skip_340(F->up);
}
}
L_end_1768: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
if ((((*(P175)rt_nil_check(F->items_1759)).next_ == NULL) && ((*(P175)rt_nil_check(F->items_1759)).a_ == NULL))) {
F->x_1766 = f_nn_320(F->up, ((rt_int)15LL), G_NV(F->line_1758));
(*(P175)rt_nil_check(F->x_1766)).a_ = (*(P175)rt_nil_check(F->items_1759)).b_;
(*F->res_372) = F->x_1766;
goto ret_;
}
F->x_1766 = f_nn_320(F->up, ((rt_int)12LL), G_NV(F->line_1758));
(*(P175)rt_nil_check(F->x_1766)).a_ = F->items_1759;
(*F->res_372) = F->x_1766;
goto ret_;
ret_:

  return;
}

static int f_choice_token_375(struct f_greenc_1fr *up_, P111 t_374) {
  struct f_choice_token_375fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_374 = t_374;
if ((G_NV((*(P111)rt_nil_check(F->t_374)).kind_) == ((rt_int)3LL))) {
F->result_ = (eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_374)).s_)), rt_g_lit("=>", 2)) || eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_374)).s_)), rt_g_lit("|", 1)));
goto ret_;
}
F->result_ = ((G_NV((*(P111)rt_nil_check(F->t_374)).kind_) == ((rt_int)2LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_374)).s_)), rt_g_lit("OTHERS", 6)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_aggregate_ahead_376(struct f_greenc_1fr *up_) {
  struct f_aggregate_ahead_376fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1770 = INT64_MIN;
F->d_1770 = ((rt_int)0LL);
F->k_1771 = INT64_MIN;
F->k_1771 = ((rt_int)0LL);
for (;;) {
if ((rt_add(G_NV(F->up->tpos_115), G_NV(F->k_1771)) > G_NV(F->up->ntoks_114))) {
F->result_ = 0;
goto ret_;
}
{
F->t_1774 = NULL;
F->t_1774 = ({ A110 ix1775 = F->up->toks_113; ix1775.p[rt_index(rt_add(G_NV(F->up->tpos_115), G_NV(F->k_1771)), ix1775.lo, ix1775.hi) - ix1775.lo]; });
if (((G_NV((*(P111)rt_nil_check(F->t_1774)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_1774)).s_)), rt_g_lit("(", 1)))) {
F->d_1770 = rt_add(G_NV(F->d_1770), ((rt_int)1LL));
} else if (((G_NV((*(P111)rt_nil_check(F->t_1774)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_1774)).s_)), rt_g_lit(")", 1)))) {
F->d_1770 = rt_sub(G_NV(F->d_1770), ((rt_int)1LL));
if ((G_NV(F->d_1770) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
} else if (((G_NV(F->d_1770) == ((rt_int)1LL)) && f_choice_token_375(F->up, F->t_1774))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P111)rt_nil_check(F->t_1774)).kind_) == ((rt_int)3LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(F->t_1774)).s_)), rt_g_lit(";", 1)))) {
F->result_ = 0;
goto ret_;
}

}
L_end_1773: ;
F->k_1771 = rt_add(G_NV(F->k_1771), ((rt_int)1LL));
}
L_end_1772: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_name_p_378(struct f_greenc_1fr *up_, P175 *res_377) {
  struct f_name_p_378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_377 = res_377;
F->p_1776 = NULL;
F->x_1777 = NULL;
F->args_1778 = NULL;
F->atail_1779 = NULL;
F->lo_1780 = NULL;
F->r_1781 = NULL;
F->line_1782 = INT64_MIN;
F->line_1782 = f_cur_line_327(F->up);
F->more_1783 = INT_MIN;
f_name_node_348(F->up, &F->p_1776);
for (;;) {
if ((f_at_op_331(F->up, rt_g_lit("(", 1)) && f_aggregate_ahead_376(F->up))) {
F->x_1777 = f_nn_320(F->up, ((rt_int)8LL), G_NV(F->line_1782));
(*(P175)rt_nil_check(F->x_1777)).a_ = F->p_1776;
f_agg_or_paren_373(F->up, &(*(P175)rt_nil_check(F->x_1777)).b_);
(*(P175)rt_nil_check(F->x_1777)).flag_ = ((rt_int)9LL);
F->p_1776 = F->x_1777;
} else if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
F->args_1778 = NULL;
F->atail_1779 = NULL;
if ((!f_at_op_331(F->up, rt_g_lit(")", 1)))) {
F->more_1783 = 1;
while (G_NV(F->more_1783)) {
{
F->formal_1787 = NULL;
F->mark_1788 = INT64_MIN;
F->mark_1788 = ((rt_int)0LL);
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (((eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2))))) {
F->formal_1787 = (*(P111)rt_nil_check(({ A110 ix1789 = F->up->toks_113; ix1789.p[rt_index(G_NV(F->up->tpos_115), ix1789.lo, ix1789.hi) - ix1789.lo]; }))).s_;
if (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2))) {
F->mark_1788 = ((rt_int)1LL);
} else if (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) {
F->mark_1788 = ((rt_int)3LL);
} else if (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))) {
F->mark_1788 = ((rt_int)2LL);
} else {
F->mark_1788 = ((rt_int)4LL);
}
f_skip_340(F->up);
f_skip_340(F->up);
}
f_expr_357(F->up, &F->lo_1780);
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
F->r_1781 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1782));
(*(P175)rt_nil_check(F->r_1781)).a_ = F->lo_1780;
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1781)).b_);
F->lo_1780 = F->r_1781;
}
(*(P175)rt_nil_check(F->lo_1780)).formal_ = F->formal_1787;
(*(P175)rt_nil_check(F->lo_1780)).flag_ = G_NV(F->mark_1788);
f_append_324(F->up, &F->args_1778, &F->atail_1779, F->lo_1780);

}
L_end_1786: ;
F->more_1783 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1783)) {
f_skip_340(F->up);
}
}
L_end_1785: ;
}
f_expect_op_344(F->up, rt_g_lit(")", 1));
F->x_1777 = f_nn_320(F->up, ((rt_int)8LL), G_NV(F->line_1782));
(*(P175)rt_nil_check(F->x_1777)).a_ = F->p_1776;
(*(P175)rt_nil_check(F->x_1777)).b_ = F->args_1778;
F->p_1776 = F->x_1777;
} else if (f_at_op_331(F->up, rt_g_lit(".", 1))) {
f_skip_340(F->up);
F->x_1777 = f_nn_320(F->up, ((rt_int)9LL), G_NV(F->line_1782));
(*(P175)rt_nil_check(F->x_1777)).a_ = F->p_1776;
if (f_at_kw_329(F->up, rt_g_lit("ALL", 3))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1777)).name_ = f_mk_246(F->up, rt_g_lit("ALL", 3));
} else if (f_at_kind_333(F->up, ((rt_int)6LL))) {
(*(P175)rt_nil_check(F->x_1777)).name_ = f_mk_246(F->up, f_upper_s_259(F->up, (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1793 = F->up->toks_113; ix1793.p[rt_index(G_NV(F->up->tpos_115), ix1793.lo, ix1793.hi) - ix1793.lo]; }))).s_))));
f_skip_340(F->up);
} else {
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1777)).name_);
}
F->p_1776 = F->x_1777;
} else if (f_at_op_331(F->up, rt_g_lit("'", 1))) {
f_skip_340(F->up);
F->x_1777 = f_nn_320(F->up, ((rt_int)10LL), G_NV(F->line_1782));
(*(P175)rt_nil_check(F->x_1777)).a_ = F->p_1776;
(*(P175)rt_nil_check(F->x_1777)).name_ = (*(P111)rt_nil_check(({ A110 ix1794 = F->up->toks_113; ix1794.p[rt_index(G_NV(F->up->tpos_115), ix1794.lo, ix1794.hi) - ix1794.lo]; }))).s_;
f_skip_340(F->up);
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1777)).b_);
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
F->p_1776 = F->x_1777;
} else {
(*F->res_377) = F->p_1776;
goto ret_;
}
}
L_end_1784: ;
ret_:

  return;
}

static void f_component_list_380(struct f_greenc_1fr *up_, P175 *res_379) {
  struct f_component_list_380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_379 = res_379;
F->comps_1795 = NULL;
F->ctail_1796 = NULL;
F->names_1797 = NULL;
F->st_1798 = NULL;
F->def_1799 = NULL;
F->cm_1800 = NULL;
F->v_1801 = NULL;
F->arm_1802 = NULL;
F->atail_1803 = NULL;
F->labs_1804 = NULL;
F->ltail_1805 = NULL;
F->l_1806 = NULL;
F->is_c_1807 = INT_MIN;
for (;;) {
if (f_at_kw_329(F->up, rt_g_lit("NULL", 4))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit(";", 1));
} else if (f_at_kw_329(F->up, rt_g_lit("CASE", 4))) {
F->v_1801 = f_nn_320(F->up, ((rt_int)23LL), f_cur_line_327(F->up));
f_skip_340(F->up);
f_name_node_348(F->up, &(*(P175)rt_nil_check(F->v_1801)).a_);
f_expect_kw_342(F->up, rt_g_lit("OF", 2));
F->atail_1803 = NULL;
while (f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) {
f_skip_340(F->up);
F->arm_1802 = f_nn_320(F->up, ((rt_int)60LL), f_cur_line_327(F->up));
F->labs_1804 = NULL;
F->ltail_1805 = NULL;
for (;;) {
if (f_at_kw_329(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->arm_1802)).flag_ = ((rt_int)1LL);
} else {
F->l_1806 = f_nn_320(F->up, ((rt_int)61LL), f_cur_line_327(F->up));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->l_1806)).a_);
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->l_1806)).b_);
}
f_append_324(F->up, &F->labs_1804, &F->ltail_1805, F->l_1806);
}
if ((!f_at_op_331(F->up, rt_g_lit("|", 1)))) {
goto L_end_1810;
}
f_skip_340(F->up);
}
L_end_1810: ;
f_expect_op_344(F->up, rt_g_lit("=>", 2));
(*(P175)rt_nil_check(F->arm_1802)).a_ = F->labs_1804;
f_component_list_380(F->up, &(*(P175)rt_nil_check(F->arm_1802)).b_);
f_append_324(F->up, &(*(P175)rt_nil_check(F->v_1801)).b_, &F->atail_1803, F->arm_1802);
}
L_end_1809: ;
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("CASE", 4));
f_expect_op_344(F->up, rt_g_lit(";", 1));
f_append_324(F->up, &F->comps_1795, &F->ctail_1796, F->v_1801);
} else if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_id_list_350(F->up, &F->names_1797);
f_expect_op_344(F->up, rt_g_lit(":", 1));
F->is_c_1807 = 0;
if (f_at_kw_329(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_340(F->up);
F->is_c_1807 = 1;
}
f_type_spec_386(F->up, &F->st_1798);
F->def_1799 = NULL;
if (f_at_op_331(F->up, rt_g_lit(":=", 2))) {
f_skip_340(F->up);
f_expr_357(F->up, &F->def_1799);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
while ((F->names_1797 != NULL)) {
F->cm_1800 = f_nn_320(F->up, ((rt_int)63LL), G_NV((*(P175)rt_nil_check(F->names_1797)).line_));
(*(P175)rt_nil_check(F->cm_1800)).name_ = (*(P175)rt_nil_check(F->names_1797)).name_;
(*(P175)rt_nil_check(F->cm_1800)).a_ = F->st_1798;
(*(P175)rt_nil_check(F->cm_1800)).b_ = F->def_1799;
if (G_NV(F->is_c_1807)) {
(*(P175)rt_nil_check(F->cm_1800)).flag_ = ((rt_int)1LL);
}
f_append_324(F->up, &F->comps_1795, &F->ctail_1796, F->cm_1800);
F->names_1797 = (*(P175)rt_nil_check(F->names_1797)).next_;
}
L_end_1811: ;
} else {
(*F->res_379) = F->comps_1795;
goto ret_;
}
}
L_end_1808: ;
ret_:

  return;
}

static void f_discrete_range_p_382(struct f_greenc_1fr *up_, P175 *res_381) {
  struct f_discrete_range_p_382fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_381 = res_381;
F->lo_1812 = NULL;
F->r_1813 = NULL;
F->line_1814 = INT64_MIN;
F->line_1814 = f_cur_line_327(F->up);
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_384(F->up, &(*F->res_381));
goto ret_;
}
if ((((((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(".", 1))) && (f_kind_at_335(F->up, ((rt_int)2LL)) == ((rt_int)1LL))) && (f_kind_at_335(F->up, ((rt_int)3LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)3LL)), rt_g_lit("RANGE", 5)))) {
f_subtype_ind_384(F->up, &(*F->res_381));
goto ret_;
}
f_simple_expr_365(F->up, &F->lo_1812);
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
F->r_1813 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1814));
(*(P175)rt_nil_check(F->r_1813)).a_ = F->lo_1812;
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1813)).b_);
(*F->res_381) = F->r_1813;
goto ret_;
}
(*F->res_381) = F->lo_1812;
goto ret_;
ret_:

  return;
}

static void f_subtype_ind_384(struct f_greenc_1fr *up_, P175 *res_383) {
  struct f_subtype_ind_384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_383 = res_383;
F->f_1815 = NULL;
F->x_1816 = NULL;
F->r_1817 = NULL;
F->args_1818 = NULL;
F->atail_1819 = NULL;
F->lo_1820 = NULL;
F->line_1821 = INT64_MIN;
F->line_1821 = f_cur_line_327(F->up);
F->more_1822 = INT_MIN;
F->more_1822 = 1;
F->x_1816 = f_nn_320(F->up, ((rt_int)80LL), G_NV(F->line_1821));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1816)).name_);
while (f_at_op_331(F->up, rt_g_lit(".", 1))) {
f_skip_340(F->up);
if (((*(P175)rt_nil_check(F->x_1816)).tag_ == NULL)) {
(*(P175)rt_nil_check(F->x_1816)).tag_ = (*(P175)rt_nil_check(F->x_1816)).name_;
} else {
(*(P175)rt_nil_check(F->x_1816)).tag_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1816)).tag_)), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1816)).name_))));
}
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1816)).name_);
}
L_end_1823: ;
if (f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) {
f_skip_340(F->up);
F->r_1817 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1821));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1817)).a_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1817)).b_);
(*(P175)rt_nil_check(F->x_1816)).a_ = F->r_1817;
(*(P175)rt_nil_check(F->x_1816)).flag_ = ((rt_int)1LL);
} else if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
while (G_NV(F->more_1822)) {
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("=>", 2)))) {
f_expect_id_346(F->up, &F->f_1815);
f_skip_340(F->up);
f_expr_357(F->up, &F->lo_1820);
(*(P175)rt_nil_check(F->lo_1820)).formal_ = F->f_1815;
} else {
f_discrete_range_p_382(F->up, &F->lo_1820);
}
f_append_324(F->up, &F->args_1818, &F->atail_1819, F->lo_1820);
F->more_1822 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1822)) {
f_skip_340(F->up);
}
}
L_end_1824: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
(*(P175)rt_nil_check(F->x_1816)).a_ = F->args_1818;
(*(P175)rt_nil_check(F->x_1816)).flag_ = ((rt_int)2LL);
} else if ((f_at_kw_329(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_329(F->up, rt_g_lit("DELTA", 5)))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->x_1816)).b_);
(*(P175)rt_nil_check(F->x_1816)).flag_ = ((rt_int)3LL);
if (f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) {
f_skip_340(F->up);
F->r_1817 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1821));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1817)).a_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1817)).b_);
(*(P175)rt_nil_check(F->x_1816)).a_ = F->r_1817;
}
}
(*F->res_383) = F->x_1816;
goto ret_;
ret_:

  return;
}

static void f_type_spec_386(struct f_greenc_1fr *up_, P175 *res_385) {
  struct f_type_spec_386fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_385 = res_385;
F->x_1825 = NULL;
if ((((((((f_at_op_331(F->up, rt_g_lit("(", 1)) || f_at_kw_329(F->up, rt_g_lit("ARRAY", 5))) || f_at_kw_329(F->up, rt_g_lit("RECORD", 6))) || f_at_kw_329(F->up, rt_g_lit("ACCESS", 6))) || f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) || f_at_kw_329(F->up, rt_g_lit("DIGITS", 6))) || f_at_kw_329(F->up, rt_g_lit("DELTA", 5))) || f_at_kw_329(F->up, rt_g_lit("NEW", 3)))) {
f_type_def_388(F->up, &F->x_1825);
} else {
f_subtype_ind_384(F->up, &F->x_1825);
}
(*F->res_385) = F->x_1825;
goto ret_;
ret_:

  return;
}

static void f_type_def_388(struct f_greenc_1fr *up_, P175 *res_387) {
  struct f_type_def_388fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_387 = res_387;
F->x_1826 = NULL;
F->lits_1827 = NULL;
F->ltail_1828 = NULL;
F->l_1829 = NULL;
F->idx_1830 = NULL;
F->itail_1831 = NULL;
F->r_1832 = NULL;
F->comps_1833 = NULL;
F->ctail_1834 = NULL;
F->names_1835 = NULL;
F->st_1836 = NULL;
F->def_1837 = NULL;
F->cm_1838 = NULL;
F->line_1839 = INT64_MIN;
F->line_1839 = f_cur_line_327(F->up);
F->more_1840 = INT_MIN;
F->more_1840 = 1;
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)70LL), G_NV(F->line_1839));
while (G_NV(F->more_1840)) {
if (f_at_kind_333(F->up, ((rt_int)6LL))) {
F->l_1829 = f_nn_320(F->up, ((rt_int)3LL), G_NV(F->line_1839));
(*(P175)rt_nil_check(F->l_1829)).name_ = (*(P111)rt_nil_check(({ A110 ix1842 = F->up->toks_113; ix1842.p[rt_index(G_NV(F->up->tpos_115), ix1842.lo, ix1842.hi) - ix1842.lo]; }))).s_;
f_skip_340(F->up);
} else {
f_name_node_348(F->up, &F->l_1829);
}
f_append_324(F->up, &F->lits_1827, &F->ltail_1828, F->l_1829);
F->more_1840 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1840)) {
f_skip_340(F->up);
}
}
L_end_1841: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
(*(P175)rt_nil_check(F->x_1826)).a_ = F->lits_1827;
(*F->res_387) = F->x_1826;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)71LL), G_NV(F->line_1839));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->x_1826)).a_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->x_1826)).b_);
(*F->res_387) = F->x_1826;
goto ret_;
}
if ((f_at_kw_329(F->up, rt_g_lit("DIGITS", 6)) || f_at_kw_329(F->up, rt_g_lit("DELTA", 5)))) {
F->x_1826 = f_nn_320(F->up, ((rt_int)72LL), G_NV(F->line_1839));
(*(P175)rt_nil_check(F->x_1826)).flag_ = ((rt_int)1LL);
if (f_at_kw_329(F->up, rt_g_lit("DELTA", 5))) {
(*(P175)rt_nil_check(F->x_1826)).flag_ = ((rt_int)2LL);
}
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->x_1826)).a_);
if (f_at_kw_329(F->up, rt_g_lit("RANGE", 5))) {
f_skip_340(F->up);
F->r_1832 = f_nn_320(F->up, ((rt_int)14LL), G_NV(F->line_1839));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1832)).a_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->r_1832)).b_);
(*(P175)rt_nil_check(F->x_1826)).b_ = F->r_1832;
}
(*F->res_387) = F->x_1826;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("ARRAY", 5))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)73LL), G_NV(F->line_1839));
f_expect_op_344(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1840)) {
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(",", 1)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(")", 1))))) {
F->l_1829 = f_nn_320(F->up, ((rt_int)80LL), G_NV(F->line_1839));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->l_1829)).name_);
(*(P175)rt_nil_check(F->x_1826)).flag_ = ((rt_int)1LL);
} else {
f_discrete_range_p_382(F->up, &F->l_1829);
if (((G_NV((*(P175)rt_nil_check(F->l_1829)).kind_) != ((rt_int)14LL)) && (G_NV((*(P175)rt_nil_check(F->l_1829)).kind_) != ((rt_int)80LL)))) {
f_perror_339(F->up, rt_g_lit("an index is a discrete range or a type mark (RM79 3.6)", 54));
}
}
f_append_324(F->up, &F->idx_1830, &F->itail_1831, F->l_1829);
F->more_1840 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_1840)) {
f_skip_340(F->up);
}
}
L_end_1843: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
f_expect_kw_342(F->up, rt_g_lit("OF", 2));
(*(P175)rt_nil_check(F->x_1826)).a_ = F->idx_1830;
f_type_spec_386(F->up, &(*(P175)rt_nil_check(F->x_1826)).b_);
(*F->res_387) = F->x_1826;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("RECORD", 6))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)74LL), G_NV(F->line_1839));
f_component_list_380(F->up, &(*(P175)rt_nil_check(F->x_1826)).a_);
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("RECORD", 6));
(*F->res_387) = F->x_1826;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("ACCESS", 6))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)75LL), G_NV(F->line_1839));
f_type_spec_386(F->up, &(*(P175)rt_nil_check(F->x_1826)).a_);
(*F->res_387) = F->x_1826;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("NEW", 3))) {
f_skip_340(F->up);
F->x_1826 = f_nn_320(F->up, ((rt_int)76LL), G_NV(F->line_1839));
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->x_1826)).a_);
(*F->res_387) = F->x_1826;
goto ret_;
}
f_perror_339(F->up, rt_g_lit("expected a type definition", 26));
(*F->res_387) = NULL;
goto ret_;
ret_:

  return;
}

static void f_pragma_p_390(struct f_greenc_1fr *up_, P175 *res_389) {
  struct f_pragma_p_390fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_389 = res_389;
F->x_1844 = NULL;
F->a_1845 = NULL;
F->head_1846 = NULL;
F->tail_1847 = NULL;
F->x_1844 = f_nn_320(F->up, ((rt_int)56LL), f_cur_line_327(F->up));
f_expect_kw_342(F->up, rt_g_lit("PRAGMA", 6));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1844)).name_);
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
for (;;) {
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_name_node_348(F->up, &F->a_1845);
} else if (((f_at_kind_333(F->up, ((rt_int)6LL)) || f_at_kind_333(F->up, ((rt_int)4LL))) || f_at_kind_333(F->up, ((rt_int)5LL)))) {
f_primary_371(F->up, &F->a_1845);
} else {
f_perror_339(F->up, rt_g_lit("a pragma argument is an identifier, a string or a number (RM79 2.7)", 67));
}
f_append_324(F->up, &F->head_1846, &F->tail_1847, F->a_1845);
if ((!f_at_op_331(F->up, rt_g_lit(",", 1)))) {
goto L_end_1848;
}
f_skip_340(F->up);
}
L_end_1848: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_1844)).a_ = F->head_1846;
f_check_pragma_392(F->up, F->x_1844);
(*F->res_389) = F->x_1844;
ret_:

  return;
}

static void f_check_pragma_392(struct f_greenc_1fr *up_, P175 x_391) {
  struct f_check_pragma_392fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_391 = x_391;
F->p_1849 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_391)).name_)));
F->n_1850 = INT64_MIN;
F->n_1850 = f_list_len_326(F->up, (*(P175)rt_nil_check(F->x_391)).a_);
F->a_1851 = NULL;
F->a_1851 = (*(P175)rt_nil_check(F->x_391)).a_;
if ((eq_rt_gstr(F->p_1849, rt_g_lit("PAGE", 4)) || eq_rt_gstr(F->p_1849, rt_g_lit("INLINE", 6)))) {
if ((G_NV(F->n_1850) != ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1849), rt_g_lit(" takes no argument (RM79 App. B)", 32)));
}
} else if (((((eq_rt_gstr(F->p_1849, rt_g_lit("LIST", 4)) || eq_rt_gstr(F->p_1849, rt_g_lit("OPTIMIZE", 8))) || eq_rt_gstr(F->p_1849, rt_g_lit("CREATION", 8))) || eq_rt_gstr(F->p_1849, rt_g_lit("INTERFACE", 9))) || eq_rt_gstr(F->p_1849, rt_g_lit("SYSTEM", 6)))) {
if (((G_NV(F->n_1850) != ((rt_int)1LL)) || (G_NV((*(P175)rt_nil_check(F->a_1851)).kind_) != ((rt_int)5LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1849), rt_g_lit(" takes one identifier (RM79 App. B)", 35)));
}
if (((eq_rt_gstr(F->p_1849, rt_g_lit("LIST", 4)) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("ON", 2)))) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("OFF", 3))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), rt_g_lit("pragma LIST(ON) or LIST(OFF) (RM79 App. B)", 42));
} else if (((eq_rt_gstr(F->p_1849, rt_g_lit("OPTIMIZE", 8)) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("TIME", 4)))) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("SPACE", 5))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), rt_g_lit("pragma OPTIMIZE(TIME) or OPTIMIZE(SPACE) (RM79 App. B)", 54));
} else if (((eq_rt_gstr(F->p_1849, rt_g_lit("CREATION", 8)) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("STATIC", 6)))) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1851)).name_)), rt_g_lit("DYNAMIC", 7))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), rt_g_lit("pragma CREATION(STATIC) or CREATION(DYNAMIC) (RM79 9.2)", 55));
}
if (eq_rt_gstr(F->p_1849, rt_g_lit("OPTIMIZE", 8))) {
F->up->conf_optimize_244 = (*(P175)rt_nil_check(F->a_1851)).name_;
} else if (eq_rt_gstr(F->p_1849, rt_g_lit("SYSTEM", 6))) {
F->up->conf_system_241 = (*(P175)rt_nil_check(F->a_1851)).name_;
}
} else if ((eq_rt_gstr(F->p_1849, rt_g_lit("STORAGE_UNIT", 12)) || eq_rt_gstr(F->p_1849, rt_g_lit("MEMORY_SIZE", 11)))) {
if (((G_NV(F->n_1850) != ((rt_int)1LL)) || (G_NV((*(P175)rt_nil_check(F->a_1851)).kind_) != ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1849), rt_g_lit(" takes a number (RM79 13.7)", 27)));
}
if (eq_rt_gstr(F->p_1849, rt_g_lit("STORAGE_UNIT", 12))) {
F->up->conf_storage_unit_242 = G_NV((*(P175)rt_nil_check(F->a_1851)).ival_);
} else {
F->up->conf_memory_size_243 = G_NV((*(P175)rt_nil_check(F->a_1851)).ival_);
}
} else if ((eq_rt_gstr(F->p_1849, rt_g_lit("SUPPRESS", 8)) || eq_rt_gstr(F->p_1849, rt_g_lit("ENVIRONMENT", 11)))) {
if ((G_NV(F->n_1850) == ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1849), rt_g_lit(" names at least one ", 20)), rt_g_lit("unit or exception (RM79 App. B)", 31)));
}
while ((F->a_1851 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->a_1851)).kind_) != ((rt_int)5LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ", 7), F->p_1849), rt_g_lit(" takes names (RM79 App. B)", 26)));
}
F->a_1851 = (*(P175)rt_nil_check(F->a_1851)).next_;
}
L_end_1852: ;
} else if (eq_rt_gstr(F->p_1849, rt_g_lit("INCLUDE", 7))) {
if (((G_NV(F->n_1850) != ((rt_int)1LL)) || (G_NV((*(P175)rt_nil_check(F->a_1851)).kind_) != ((rt_int)3LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_391)).line_), rt_g_lit("pragma INCLUDE takes the name of a file (RM79 App. B)", 53));
}
}
ret_:

  return;
}

static void f_visibility_p_394(struct f_greenc_1fr *up_, P141 *res_393) {
  struct f_visibility_p_394fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_393 = res_393;
F->names_1853 = NULL;
F->v_1854 = NULL;
F->v_1854 = f_mk_246(F->up, rt_g_lit(",", 1));
f_expect_kw_342(F->up, rt_g_lit("RESTRICTED", 10));
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
f_id_list_350(F->up, &F->names_1853);
f_expect_op_344(F->up, rt_g_lit(")", 1));
while ((F->names_1853 != NULL)) {
F->v_1854 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->v_1854)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->names_1853)).name_))), one_rt_gstr(44)));
F->names_1853 = (*(P175)rt_nil_check(F->names_1853)).next_;
}
L_end_1855: ;
}
(*F->res_393) = F->v_1854;
ret_:

  return;
}

static void f_unit_p_396(struct f_greenc_1fr *up_, P175 *res_395) {
  struct f_unit_p_396fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_395 = res_395;
F->v_1856 = NULL;
F->x_1857 = NULL;
if (f_at_kw_329(F->up, rt_g_lit("RESTRICTED", 10))) {
f_visibility_p_394(F->up, &F->v_1856);
}
if (f_at_kw_329(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_340(F->up);
if (((F->v_1856 == NULL) || (({ rt_gstr at1858 = (*(P141)rt_nil_check(F->v_1856)); at1858.hi >= at1858.lo ? at1858.hi - at1858.lo + 1 : (rt_int)0; }) < ((rt_int)2LL)))) {
f_perror_339(F->up, rt_g_lit("a subunit names its enclosing unit first in its visibility list (RM79 10.2)", 75));
}
f_unit_p_396(F->up, &F->x_1857);
if (((((G_NV((*(P175)rt_nil_check(F->x_1857)).kind_) != ((rt_int)44LL)) && (G_NV((*(P175)rt_nil_check(F->x_1857)).kind_) != ((rt_int)45LL))) && (G_NV((*(P175)rt_nil_check(F->x_1857)).kind_) != ((rt_int)49LL))) && (G_NV((*(P175)rt_nil_check(F->x_1857)).kind_) != ((rt_int)51LL)))) {
f_perror_339(F->up, rt_g_lit("a subunit is a subprogram body or a module body (RM79 10.2)", 59));
}
(*(P175)rt_nil_check(F->x_1857)).formal_ = f_mk_246(F->up, cat_rt_gstr(one_rt_gstr(33), (*(P141)rt_nil_check(F->v_1856))));
(*F->res_395) = F->x_1857;
goto ret_;
}
if ((f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_329(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_410(F->up, &F->x_1857);
} else if (f_at_kw_329(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_416(F->up, &F->x_1857);
} else if (f_at_kw_329(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1154(F->up, &F->x_1857);
} else if (f_at_kw_329(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1298(F->up, &F->x_1857);
} else {
f_perror_339(F->up, rt_g_lit("a restricted unit is a subprogram, a package or a task (RM79 8.3)", 65));
}
if ((F->x_1857 != NULL)) {
(*(P175)rt_nil_check(F->x_1857)).formal_ = F->v_1856;
}
(*F->res_395) = F->x_1857;
ret_:

  return;
}

static void f_rep_spec_398(struct f_greenc_1fr *up_, P175 *res_397) {
  struct f_rep_spec_398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_397 = res_397;
F->x_1859 = NULL;
F->p_1860 = NULL;
F->tail_1861 = NULL;
F->x_1859 = f_nn_320(F->up, ((rt_int)38LL), f_cur_line_327(F->up));
f_expect_kw_342(F->up, rt_g_lit("FOR", 3));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1859)).name_);
f_expect_kw_342(F->up, rt_g_lit("USE", 3));
if (f_at_kw_329(F->up, rt_g_lit("PACKING", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1859)).flag_ = ((rt_int)1LL);
} else if (f_at_kw_329(F->up, rt_g_lit("AT", 2))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1859)).flag_ = ((rt_int)5LL);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1859)).b_);
} else if (f_at_kw_329(F->up, rt_g_lit("RECORD", 6))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1859)).flag_ = ((rt_int)4LL);
if (f_at_kw_329(F->up, rt_g_lit("AT", 2))) {
f_skip_340(F->up);
f_expect_kw_342(F->up, rt_g_lit("MOD", 3));
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1859)).c_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
}
while ((!f_at_kw_329(F->up, rt_g_lit("END", 3)))) {
F->p_1860 = f_nn_320(F->up, ((rt_int)63LL), f_cur_line_327(F->up));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->p_1860)).name_);
f_expect_kw_342(F->up, rt_g_lit("AT", 2));
f_expr_357(F->up, &(*(P175)rt_nil_check(F->p_1860)).a_);
f_expect_kw_342(F->up, rt_g_lit("RANGE", 5));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->p_1860)).b_);
f_expect_op_344(F->up, rt_g_lit("..", 2));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->p_1860)).c_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
if ((F->tail_1861 == NULL)) {
(*(P175)rt_nil_check(F->x_1859)).d_ = F->p_1860;
} else {
(*(P175)rt_nil_check(F->tail_1861)).next_ = F->p_1860;
}
F->tail_1861 = F->p_1860;
}
L_end_1862: ;
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("RECORD", 6));
} else if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
(*(P175)rt_nil_check(F->x_1859)).flag_ = ((rt_int)3LL);
f_primary_371(F->up, &(*(P175)rt_nil_check(F->x_1859)).b_);
} else {
(*(P175)rt_nil_check(F->x_1859)).flag_ = ((rt_int)2LL);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1859)).b_);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_397) = F->x_1859;
ret_:

  return;
}

static void f_decl_part_400(struct f_greenc_1fr *up_, P175 *res_399) {
  struct f_decl_part_400fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_399 = res_399;
F->head_1863 = NULL;
F->tail_1864 = NULL;
F->x_1865 = NULL;
F->names_1866 = NULL;
for (;;) {
if (f_at_kw_329(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_390(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("USE", 3))) {
f_skip_340(F->up);
F->x_1865 = f_nn_320(F->up, ((rt_int)55LL), f_cur_line_327(F->up));
f_id_list_350(F->up, &(*(P175)rt_nil_check(F->x_1865)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (((f_at_kw_329(F->up, rt_g_lit("RESTRICTED", 10)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("TYPE", 4)))) {
f_skip_340(F->up);
f_type_decl_404(F->up, &F->x_1865);
if (((F->x_1865 == NULL) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_1865)).a_)).kind_) != ((rt_int)77LL)))) {
f_perror_339(F->up, rt_g_lit("only a private type is restricted (RM79 7.4)", 44));
}
(*(P175)rt_nil_check(F->x_1865)).flag_ = ((rt_int)9LL);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("RESTRICTED", 10))) {
f_unit_p_396(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("FOR", 3))) {
f_rep_spec_398(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if ((f_at_kw_329(F->up, rt_g_lit("TYPE", 4)) || f_at_kw_329(F->up, rt_g_lit("SUBTYPE", 7)))) {
f_type_decl_404(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if ((f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_329(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_410(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_416(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1154(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("GENERIC", 7))) {
f_generic_p_1298(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (f_at_kw_329(F->up, rt_g_lit("ENTRY", 5))) {
f_entry_p_1156(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(",", 1))))) {
f_object_decl_402(F->up, &F->x_1865);
f_append_324(F->up, &F->head_1863, &F->tail_1864, F->x_1865);
} else {
(*F->res_399) = F->head_1863;
goto ret_;
}
}
L_end_1867: ;
ret_:

  return;
}

static void f_object_decl_402(struct f_greenc_1fr *up_, P175 *res_401) {
  struct f_object_decl_402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_401 = res_401;
F->head_1868 = NULL;
F->tail_1869 = NULL;
F->names_1870 = NULL;
F->st_1871 = NULL;
F->init_1872 = NULL;
F->x_1873 = NULL;
F->line_1874 = INT64_MIN;
F->line_1874 = f_cur_line_327(F->up);
F->is_const_1875 = INT_MIN;
F->is_const_1875 = 0;
f_id_list_350(F->up, &F->names_1870);
f_expect_op_344(F->up, rt_g_lit(":", 1));
if (f_at_kw_329(F->up, rt_g_lit("EXCEPTION", 9))) {
f_skip_340(F->up);
if (f_at_kw_329(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_340(F->up);
F->x_1873 = f_nn_320(F->up, ((rt_int)46LL), G_NV(F->line_1874));
(*(P175)rt_nil_check(F->x_1873)).name_ = (*(P175)rt_nil_check(F->names_1870)).name_;
f_name_p_378(F->up, &(*(P175)rt_nil_check(F->x_1873)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_401) = F->x_1873;
goto ret_;
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
while ((F->names_1870 != NULL)) {
F->x_1873 = f_nn_320(F->up, ((rt_int)46LL), G_NV(F->line_1874));
(*(P175)rt_nil_check(F->x_1873)).name_ = (*(P175)rt_nil_check(F->names_1870)).name_;
f_append_324(F->up, &F->head_1868, &F->tail_1869, F->x_1873);
F->names_1870 = (*(P175)rt_nil_check(F->names_1870)).next_;
}
L_end_1876: ;
(*F->res_401) = F->head_1868;
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("CONSTANT", 8))) {
f_skip_340(F->up);
F->is_const_1875 = 1;
}
f_type_spec_386(F->up, &F->st_1871);
if ((f_at_kw_329(F->up, rt_g_lit("RENAMES", 7)) && (!G_NV(F->is_const_1875)))) {
f_skip_340(F->up);
F->x_1873 = f_nn_320(F->up, ((rt_int)40LL), G_NV(F->line_1874));
(*(P175)rt_nil_check(F->x_1873)).name_ = (*(P175)rt_nil_check(F->names_1870)).name_;
(*(P175)rt_nil_check(F->x_1873)).a_ = F->st_1871;
(*(P175)rt_nil_check(F->x_1873)).flag_ = ((rt_int)2LL);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1873)).b_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_401) = F->x_1873;
goto ret_;
}
if (f_at_op_331(F->up, rt_g_lit(":=", 2))) {
f_skip_340(F->up);
f_expr_357(F->up, &F->init_1872);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
while ((F->names_1870 != NULL)) {
if (G_NV(F->is_const_1875)) {
F->x_1873 = f_nn_320(F->up, ((rt_int)41LL), G_NV(F->line_1874));
} else {
F->x_1873 = f_nn_320(F->up, ((rt_int)40LL), G_NV(F->line_1874));
}
(*(P175)rt_nil_check(F->x_1873)).name_ = (*(P175)rt_nil_check(F->names_1870)).name_;
(*(P175)rt_nil_check(F->x_1873)).a_ = F->st_1871;
(*(P175)rt_nil_check(F->x_1873)).b_ = F->init_1872;
f_append_324(F->up, &F->head_1868, &F->tail_1869, F->x_1873);
F->names_1870 = (*(P175)rt_nil_check(F->names_1870)).next_;
}
L_end_1877: ;
(*F->res_401) = F->head_1868;
goto ret_;
ret_:

  return;
}

static void f_type_decl_404(struct f_greenc_1fr *up_, P175 *res_403) {
  struct f_type_decl_404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_403 = res_403;
F->x_1878 = NULL;
F->line_1879 = INT64_MIN;
F->line_1879 = f_cur_line_327(F->up);
if (f_at_kw_329(F->up, rt_g_lit("SUBTYPE", 7))) {
f_skip_340(F->up);
F->x_1878 = f_nn_320(F->up, ((rt_int)43LL), G_NV(F->line_1879));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1878)).name_);
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->x_1878)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1878;
goto ret_;
}
f_expect_kw_342(F->up, rt_g_lit("TYPE", 4));
F->x_1878 = f_nn_320(F->up, ((rt_int)42LL), G_NV(F->line_1879));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1878)).name_);
if (f_at_op_331(F->up, rt_g_lit(";", 1))) {
f_skip_340(F->up);
(*F->res_403) = NULL;
goto ret_;
}
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
if (f_at_kw_329(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1878)).a_ = f_nn_320(F->up, ((rt_int)77LL), G_NV(F->line_1879));
} else {
f_type_def_388(F->up, &(*(P175)rt_nil_check(F->x_1878)).a_);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_403) = F->x_1878;
goto ret_;
ret_:

  return;
}

static void f_formal_part_406(struct f_greenc_1fr *up_, P175 *res_405) {
  struct f_formal_part_406fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_405 = res_405;
F->head_1880 = NULL;
F->tail_1881 = NULL;
F->names_1882 = NULL;
F->st_1883 = NULL;
F->def_1884 = NULL;
F->p_1885 = NULL;
F->mode_1886 = INT64_MIN;
F->more_1887 = INT_MIN;
F->more_1887 = 1;
f_expect_op_344(F->up, rt_g_lit("(", 1));
while (G_NV(F->more_1887)) {
f_id_list_350(F->up, &F->names_1882);
f_expect_op_344(F->up, rt_g_lit(":", 1));
F->mode_1886 = ((rt_int)1LL);
if (f_at_kw_329(F->up, rt_g_lit("IN", 2))) {
f_skip_340(F->up);
if (f_at_kw_329(F->up, rt_g_lit("OUT", 3))) {
f_skip_340(F->up);
F->mode_1886 = ((rt_int)2LL);
}
} else if (f_at_kw_329(F->up, rt_g_lit("OUT", 3))) {
f_skip_340(F->up);
F->mode_1886 = ((rt_int)3LL);
}
f_subtype_ind_384(F->up, &F->st_1883);
F->def_1884 = NULL;
if (f_at_op_331(F->up, rt_g_lit(":=", 2))) {
f_skip_340(F->up);
f_expr_357(F->up, &F->def_1884);
}
while ((F->names_1882 != NULL)) {
F->p_1885 = f_nn_320(F->up, ((rt_int)47LL), G_NV((*(P175)rt_nil_check(F->names_1882)).line_));
(*(P175)rt_nil_check(F->p_1885)).name_ = (*(P175)rt_nil_check(F->names_1882)).name_;
(*(P175)rt_nil_check(F->p_1885)).ival_ = G_NV(F->mode_1886);
(*(P175)rt_nil_check(F->p_1885)).a_ = F->st_1883;
(*(P175)rt_nil_check(F->p_1885)).b_ = F->def_1884;
f_append_324(F->up, &F->head_1880, &F->tail_1881, F->p_1885);
F->names_1882 = (*(P175)rt_nil_check(F->names_1882)).next_;
}
L_end_1889: ;
F->more_1887 = f_at_op_331(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_1887)) {
f_skip_340(F->up);
}
}
L_end_1888: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
(*F->res_405) = F->head_1880;
goto ret_;
ret_:

  return;
}

static void f_designator_408(struct f_greenc_1fr *up_, P141 *res_407) {
  struct f_designator_408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_407 = res_407;
if (f_at_kind_333(F->up, ((rt_int)6LL))) {
f_skip_340(F->up);
(*F->res_407) = f_mk_246(F->up, f_upper_s_259(F->up, (*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1893 = F->up->toks_113; ix1893.p[rt_index(rt_sub(G_NV(F->up->tpos_115), ((rt_int)1LL)), ix1893.lo, ix1893.hi) - ix1893.lo]; }))).s_))));
if (eq_rt_gstr((*(P141)rt_nil_check((*F->res_407))), rt_g_lit("/=", 2))) {
f_perror_339(F->up, rt_g_lit("\"/=\" cannot be declared: it follows the declaration of \"=\" (RM79 6.6.1)", 71));
}
if ((!f_is_operator_261(F->up, (*(P141)rt_nil_check((*F->res_407)))))) {
f_perror_339(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->res_407))), rt_g_lit(" is not an operator symbol (RM79 6.6.1)", 39)));
}
goto ret_;
}
f_expect_id_346(F->up, &(*F->res_407));
goto ret_;
ret_:

  return;
}

static void f_subprogram_410(struct f_greenc_1fr *up_, P175 *res_409) {
  struct f_subprogram_410fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_409 = res_409;
F->x_1894 = NULL;
F->line_1895 = INT64_MIN;
F->line_1895 = f_cur_line_327(F->up);
F->is_proc_1896 = INT_MIN;
F->is_proc_1896 = f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9));
f_skip_340(F->up);
if (G_NV(F->is_proc_1896)) {
F->x_1894 = f_nn_320(F->up, ((rt_int)44LL), G_NV(F->line_1895));
} else {
F->x_1894 = f_nn_320(F->up, ((rt_int)45LL), G_NV(F->line_1895));
}
f_designator_408(F->up, &(*(P175)rt_nil_check(F->x_1894)).name_);
if (((f_at_kw_329(F->up, rt_g_lit("IS", 2)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1301(F->up, F->x_1894, &(*F->res_409));
goto ret_;
}
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_formal_part_406(F->up, &(*(P175)rt_nil_check(F->x_1894)).a_);
}
if (f_at_kw_329(F->up, rt_g_lit("RETURN", 6))) {
f_skip_340(F->up);
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->x_1894)).b_);
if (G_NV(F->is_proc_1896)) {
(*(P175)rt_nil_check(F->x_1894)).flag_ = ((rt_int)1LL);
}
} else if ((!G_NV(F->is_proc_1896))) {
f_perror_339(F->up, rt_g_lit("a function needs a RETURN clause", 32));
}
if (f_at_kw_329(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1894)).ival_ = ((rt_int)2LL);
f_name_p_378(F->up, &(*(P175)rt_nil_check(F->x_1894)).c_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_409) = F->x_1894;
goto ret_;
}
if (f_at_op_331(F->up, rt_g_lit(";", 1))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1894)).ival_ = ((rt_int)1LL);
(*F->res_409) = F->x_1894;
goto ret_;
}
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
if (f_at_kw_329(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_1894)).ival_ = ((rt_int)3LL);
(*F->res_409) = F->x_1894;
goto ret_;
}
f_body_part_412(F->up, F->x_1894);
if ((f_at_kind_333(F->up, ((rt_int)1LL)) || f_at_kind_333(F->up, ((rt_int)6LL)))) {
if ((!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1897 = F->up->toks_113; ix1897.p[rt_index(G_NV(F->up->tpos_115), ix1897.lo, ix1897.hi) - ix1897.lo]; }))).s_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1894)).name_))))) {
f_perror_339(F->up, cat_rt_gstr(rt_g_lit("the name after END does not match ", 34), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1894)).name_))));
}
f_skip_340(F->up);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_409) = F->x_1894;
goto ret_;
ret_:

  return;
}

static void f_body_part_412(struct f_greenc_1fr *up_, P175 x_411) {
  struct f_body_part_412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_411 = x_411;
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_411)).c_);
if (f_at_kw_329(F->up, rt_g_lit("BEGIN", 5))) {
f_skip_340(F->up);
F->up->saw_interface_217 = 0;
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_411)).d_);
if ((G_NV(F->up->saw_interface_217) && ((*(P175)rt_nil_check(F->x_411)).d_ == NULL))) {
(*(P175)rt_nil_check(F->x_411)).tag_ = f_mk_246(F->up, cat_rt_gstr(rt_g_lit("INTERFACE ", 10), (*(P141)rt_nil_check(F->up->saw_lang_225))));
}
F->up->saw_interface_217 = 0;
}
if (f_at_kw_329(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_414(F->up, &(*(P175)rt_nil_check(F->x_411)).e_);
}
f_expect_kw_342(F->up, rt_g_lit("END", 3));
ret_:

  return;
}

static void f_parse_handlers_414(struct f_greenc_1fr *up_, P175 *res_413) {
  struct f_parse_handlers_414fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_413 = res_413;
F->head_1898 = NULL;
F->tail_1899 = NULL;
F->h_1900 = NULL;
F->names_1901 = NULL;
F->ntail_1902 = NULL;
F->n_1903 = NULL;
f_expect_kw_342(F->up, rt_g_lit("EXCEPTION", 9));
while (f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) {
f_skip_340(F->up);
F->h_1900 = f_nn_320(F->up, ((rt_int)62LL), f_cur_line_327(F->up));
F->names_1901 = NULL;
F->ntail_1902 = NULL;
for (;;) {
if (f_at_kw_329(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_340(F->up);
F->n_1903 = f_nn_320(F->up, ((rt_int)5LL), f_cur_line_327(F->up));
(*(P175)rt_nil_check(F->n_1903)).name_ = f_mk_246(F->up, rt_g_lit("OTHERS", 6));
} else {
f_name_node_348(F->up, &F->n_1903);
while (f_at_op_331(F->up, rt_g_lit(".", 1))) {
f_skip_340(F->up);
if (((*(P175)rt_nil_check(F->n_1903)).tag_ == NULL)) {
(*(P175)rt_nil_check(F->n_1903)).tag_ = (*(P175)rt_nil_check(F->n_1903)).name_;
} else {
(*(P175)rt_nil_check(F->n_1903)).tag_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_1903)).tag_)), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_1903)).name_))));
}
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->n_1903)).name_);
}
L_end_1906: ;
}
f_append_324(F->up, &F->names_1901, &F->ntail_1902, F->n_1903);
if ((!f_at_op_331(F->up, rt_g_lit("|", 1)))) {
goto L_end_1905;
}
f_skip_340(F->up);
}
L_end_1905: ;
f_expect_op_344(F->up, rt_g_lit("=>", 2));
(*(P175)rt_nil_check(F->h_1900)).a_ = F->names_1901;
f_statements_419(F->up, &(*(P175)rt_nil_check(F->h_1900)).b_);
f_append_324(F->up, &F->head_1898, &F->tail_1899, F->h_1900);
}
L_end_1904: ;
(*F->res_413) = F->head_1898;
goto ret_;
ret_:

  return;
}

static void f_package_p_416(struct f_greenc_1fr *up_, P175 *res_415) {
  struct f_package_p_416fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_415 = res_415;
F->x_1907 = NULL;
F->line_1908 = INT64_MIN;
F->line_1908 = f_cur_line_327(F->up);
f_expect_kw_342(F->up, rt_g_lit("PACKAGE", 7));
if (f_at_kw_329(F->up, rt_g_lit("BODY", 4))) {
f_skip_340(F->up);
F->x_1907 = f_nn_320(F->up, ((rt_int)49LL), G_NV(F->line_1908));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1907)).name_);
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
if (f_at_kw_329(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_1907)).flag_ = ((rt_int)4LL);
(*F->res_415) = F->x_1907;
goto ret_;
}
f_body_part_412(F->up, F->x_1907);
} else {
F->x_1907 = f_nn_320(F->up, ((rt_int)48LL), G_NV(F->line_1908));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1907)).name_);
if (((f_at_kw_329(F->up, rt_g_lit("IS", 2)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1301(F->up, F->x_1907, &(*F->res_415));
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1907)).flag_ = ((rt_int)3LL);
f_name_p_378(F->up, &(*(P175)rt_nil_check(F->x_1907)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1907;
goto ret_;
}
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_1907)).c_);
if (f_at_kw_329(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_340(F->up);
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_1907)).d_);
}
f_expect_kw_342(F->up, rt_g_lit("END", 3));
}
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_skip_340(F->up);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_415) = F->x_1907;
goto ret_;
ret_:

  return;
}

static int f_at_statements_end_417(struct f_greenc_1fr *up_) {
  struct f_at_statements_end_417fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ((((((f_at_kw_329(F->up, rt_g_lit("END", 3)) || f_at_kw_329(F->up, rt_g_lit("ELSE", 4))) || f_at_kw_329(F->up, rt_g_lit("ELSIF", 5))) || f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) || f_at_kw_329(F->up, rt_g_lit("EXCEPTION", 9))) || f_at_kw_329(F->up, rt_g_lit("OR", 2))) || f_at_kind_333(F->up, ((rt_int)0LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_statements_419(struct f_greenc_1fr *up_, P175 *res_418) {
  struct f_statements_419fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_418 = res_418;
F->head_1909 = NULL;
F->tail_1910 = NULL;
F->x_1911 = NULL;
while ((!f_at_statements_end_417(F->up))) {
if (f_at_kw_329(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_390(F->up, &F->x_1911);
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1911)).name_)), rt_g_lit("INTERFACE", 9))) {
F->up->saw_interface_217 = 1;
F->up->saw_lang_225 = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_1911)).a_)).name_;
}
} else {
f_statement_421(F->up, &F->x_1911);
f_append_324(F->up, &F->head_1909, &F->tail_1910, F->x_1911);
}
}
L_end_1912: ;
(*F->res_418) = F->head_1909;
goto ret_;
ret_:

  return;
}

static void f_statement_421(struct f_greenc_1fr *up_, P175 *res_420) {
  struct f_statement_421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_420 = res_420;
F->l_1913 = NULL;
F->x_1914 = NULL;
F->label_1915 = NULL;
if (f_at_op_331(F->up, rt_g_lit("<<", 2))) {
F->l_1913 = f_nn_320(F->up, ((rt_int)57LL), f_cur_line_327(F->up));
f_skip_340(F->up);
f_expect_id_346(F->up, &F->label_1915);
f_expect_op_344(F->up, rt_g_lit(">>", 2));
(*(P175)rt_nil_check(F->l_1913)).name_ = F->label_1915;
if (f_at_op_331(F->up, rt_g_lit("<<", 2))) {
f_statement_421(F->up, &F->x_1914);
} else {
f_labelled_statement_424(F->up, F->label_1915, &F->x_1914);
}
(*(P175)rt_nil_check(F->l_1913)).next_ = F->x_1914;
(*F->res_420) = F->l_1913;
goto ret_;
}
f_labelled_statement_424(F->up, NULL, &(*F->res_420));
ret_:

  return;
}

static void f_labelled_statement_424(struct f_greenc_1fr *up_, P141 label_422, P175 *res_423) {
  struct f_labelled_statement_424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->label_422 = label_422;
F->res_423 = res_423;
F->x_1916 = NULL;
F->t_1917 = NULL;
F->line_1918 = INT64_MIN;
F->line_1918 = f_cur_line_327(F->up);
if (f_at_kw_329(F->up, rt_g_lit("NULL", 4))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit(";", 1));
F->x_1916 = f_nn_320(F->up, ((rt_int)31LL), G_NV(F->line_1918));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("IF", 2))) {
f_if_stmt_428(F->up, &F->x_1916);
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("CASE", 4))) {
f_case_stmt_430(F->up, &F->x_1916);
(*F->res_423) = F->x_1916;
goto ret_;
} else if (((f_at_kw_329(F->up, rt_g_lit("FOR", 3)) || f_at_kw_329(F->up, rt_g_lit("WHILE", 5))) || f_at_kw_329(F->up, rt_g_lit("LOOP", 4)))) {
f_loop_stmt_432(F->up, &F->x_1916);
(*(P175)rt_nil_check(F->x_1916)).tag_ = F->label_422;
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
if (((F->label_422 == NULL) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1919 = F->up->toks_113; ix1919.p[rt_index(G_NV(F->up->tpos_115), ix1919.lo, ix1919.hi) - ix1919.lo]; }))).s_)), (*(P141)rt_nil_check(F->label_422)))))) {
f_perror_339(F->up, rt_g_lit("the name after END LOOP does not match the label", 48));
}
f_skip_340(F->up);
} else if ((F->label_422 != NULL)) {
f_perror_339(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the loop labelled ", 18), (*(P141)rt_nil_check(F->label_422))), rt_g_lit(" ends with end loop ", 20)), (*(P141)rt_nil_check(F->label_422))), rt_g_lit(" (RM79 5.6)", 11)));
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if ((f_at_kw_329(F->up, rt_g_lit("DECLARE", 7)) || f_at_kw_329(F->up, rt_g_lit("BEGIN", 5)))) {
F->x_1916 = f_nn_320(F->up, ((rt_int)25LL), G_NV(F->line_1918));
(*(P175)rt_nil_check(F->x_1916)).tag_ = F->label_422;
if (f_at_kw_329(F->up, rt_g_lit("DECLARE", 7))) {
f_skip_340(F->up);
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_1916)).a_);
}
f_expect_kw_342(F->up, rt_g_lit("BEGIN", 5));
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_1916)).b_);
if (f_at_kw_329(F->up, rt_g_lit("EXCEPTION", 9))) {
f_parse_handlers_414(F->up, &(*(P175)rt_nil_check(F->x_1916)).c_);
}
f_expect_kw_342(F->up, rt_g_lit("END", 3));
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
if (((F->label_422 == NULL) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P111)rt_nil_check(({ A110 ix1920 = F->up->toks_113; ix1920.p[rt_index(G_NV(F->up->tpos_115), ix1920.lo, ix1920.hi) - ix1920.lo]; }))).s_)), (*(P141)rt_nil_check(F->label_422)))))) {
f_perror_339(F->up, rt_g_lit("the name after END does not match the label of the block (RM79 6.7)", 67));
}
f_skip_340(F->up);
} else if ((F->label_422 != NULL)) {
f_perror_339(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the block labelled ", 19), (*(P141)rt_nil_check(F->label_422))), rt_g_lit(" ends with end ", 15)), (*(P141)rt_nil_check(F->label_422))), rt_g_lit(" (RM79 6.7)", 11)));
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("EXIT", 4))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)26LL), G_NV(F->line_1918));
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1916)).name_);
}
if (f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) {
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1916)).a_);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("RETURN", 6))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)27LL), G_NV(F->line_1918));
if ((!f_at_op_331(F->up, rt_g_lit(";", 1)))) {
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1916)).a_);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("RAISE", 5))) {
f_skip_340(F->up);
if (f_at_op_331(F->up, rt_g_lit(";", 1))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)29LL), G_NV(F->line_1918));
(*F->res_423) = F->x_1916;
goto ret_;
}
F->x_1916 = f_nn_320(F->up, ((rt_int)28LL), G_NV(F->line_1918));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1916)).name_);
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1916)).a_);
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
while (f_at_op_331(F->up, rt_g_lit(".", 1))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1916)).tag_ = (*(P175)rt_nil_check(F->x_1916)).name_;
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1916)).name_);
}
L_end_1921: ;
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("ASSERT", 6))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)30LL), G_NV(F->line_1918));
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1916)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
} else if (f_at_kw_329(F->up, rt_g_lit("GOTO", 4))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)58LL), G_NV(F->line_1918));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1916)).name_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
}
f_task_statement_426(F->up, &F->x_1916);
if ((F->x_1916 != NULL)) {
(*F->res_423) = F->x_1916;
goto ret_;
}
f_name_p_378(F->up, &F->t_1917);
if (f_at_op_331(F->up, rt_g_lit(":=", 2))) {
f_skip_340(F->up);
F->x_1916 = f_nn_320(F->up, ((rt_int)20LL), G_NV(F->line_1918));
(*(P175)rt_nil_check(F->x_1916)).a_ = F->t_1917;
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1916)).b_);
} else {
F->x_1916 = f_nn_320(F->up, ((rt_int)21LL), G_NV(F->line_1918));
(*(P175)rt_nil_check(F->x_1916)).a_ = F->t_1917;
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_423) = F->x_1916;
goto ret_;
ret_:

  return;
}

static void f_task_statement_426(struct f_greenc_1fr *up_, P175 *res_425) {
  struct f_task_statement_426fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_425 = res_425;
f_parse_task_statement_1164(F->up, &(*F->res_425));
ret_:

  return;
}

static void f_if_stmt_428(struct f_greenc_1fr *up_, P175 *res_427) {
  struct f_if_stmt_428fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_427 = res_427;
F->x_1922 = NULL;
F->arm_1923 = NULL;
F->head_1924 = NULL;
F->tail_1925 = NULL;
F->go_1926 = INT_MIN;
F->go_1926 = 1;
F->x_1922 = f_nn_320(F->up, ((rt_int)22LL), f_cur_line_327(F->up));
f_skip_340(F->up);
F->arm_1923 = f_nn_320(F->up, ((rt_int)60LL), f_cur_line_327(F->up));
f_expr_357(F->up, &(*(P175)rt_nil_check(F->arm_1923)).a_);
f_expect_kw_342(F->up, rt_g_lit("THEN", 4));
f_statements_419(F->up, &(*(P175)rt_nil_check(F->arm_1923)).b_);
f_append_324(F->up, &F->head_1924, &F->tail_1925, F->arm_1923);
while (G_NV(F->go_1926)) {
if (f_at_kw_329(F->up, rt_g_lit("ELSIF", 5))) {
f_skip_340(F->up);
F->arm_1923 = f_nn_320(F->up, ((rt_int)60LL), f_cur_line_327(F->up));
f_expr_357(F->up, &(*(P175)rt_nil_check(F->arm_1923)).a_);
f_expect_kw_342(F->up, rt_g_lit("THEN", 4));
f_statements_419(F->up, &(*(P175)rt_nil_check(F->arm_1923)).b_);
f_append_324(F->up, &F->head_1924, &F->tail_1925, F->arm_1923);
} else if (f_at_kw_329(F->up, rt_g_lit("ELSE", 4))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1922)).flag_ = ((rt_int)1LL);
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_1922)).b_);
} else {
F->go_1926 = 0;
}
}
L_end_1927: ;
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("IF", 2));
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_1922)).a_ = F->head_1924;
(*F->res_427) = F->x_1922;
goto ret_;
ret_:

  return;
}

static void f_case_stmt_430(struct f_greenc_1fr *up_, P175 *res_429) {
  struct f_case_stmt_430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_429 = res_429;
F->x_1928 = NULL;
F->arm_1929 = NULL;
F->head_1930 = NULL;
F->tail_1931 = NULL;
F->labs_1932 = NULL;
F->ltail_1933 = NULL;
F->l_1934 = NULL;
F->others_arm_1935 = INT_MIN;
F->x_1928 = f_nn_320(F->up, ((rt_int)23LL), f_cur_line_327(F->up));
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1928)).a_);
f_expect_kw_342(F->up, rt_g_lit("OF", 2));
while (f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) {
f_skip_340(F->up);
F->labs_1932 = NULL;
F->ltail_1933 = NULL;
F->others_arm_1935 = 0;
for (;;) {
if (f_at_kw_329(F->up, rt_g_lit("OTHERS", 6))) {
f_skip_340(F->up);
F->others_arm_1935 = 1;
} else {
F->l_1934 = f_nn_320(F->up, ((rt_int)61LL), f_cur_line_327(F->up));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->l_1934)).a_);
if (f_at_op_331(F->up, rt_g_lit("..", 2))) {
f_skip_340(F->up);
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->l_1934)).b_);
}
f_append_324(F->up, &F->labs_1932, &F->ltail_1933, F->l_1934);
}
if ((!f_at_op_331(F->up, rt_g_lit("|", 1)))) {
goto L_end_1937;
}
f_skip_340(F->up);
}
L_end_1937: ;
f_expect_op_344(F->up, rt_g_lit("=>", 2));
if (G_NV(F->others_arm_1935)) {
(*(P175)rt_nil_check(F->x_1928)).flag_ = ((rt_int)1LL);
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_1928)).c_);
if ((!f_at_kw_329(F->up, rt_g_lit("END", 3)))) {
f_perror_339(F->up, rt_g_lit("others is the last choice of a case statement (RM79 5.5)", 56));
}
} else {
F->arm_1929 = f_nn_320(F->up, ((rt_int)60LL), f_cur_line_327(F->up));
(*(P175)rt_nil_check(F->arm_1929)).a_ = F->labs_1932;
f_statements_419(F->up, &(*(P175)rt_nil_check(F->arm_1929)).b_);
f_append_324(F->up, &F->head_1930, &F->tail_1931, F->arm_1929);
}
}
L_end_1936: ;
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("CASE", 4));
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_1928)).b_ = F->head_1930;
(*F->res_429) = F->x_1928;
goto ret_;
ret_:

  return;
}

static void f_loop_stmt_432(struct f_greenc_1fr *up_, P175 *res_431) {
  struct f_loop_stmt_432fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_431 = res_431;
F->x_1938 = NULL;
F->r_1939 = NULL;
F->line_1940 = INT64_MIN;
F->line_1940 = f_cur_line_327(F->up);
F->x_1938 = f_nn_320(F->up, ((rt_int)24LL), G_NV(F->line_1940));
if (f_at_kw_329(F->up, rt_g_lit("FOR", 3))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1938)).flag_ = ((rt_int)2LL);
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_1938)).name_);
f_expect_kw_342(F->up, rt_g_lit("IN", 2));
if (f_at_kw_329(F->up, rt_g_lit("REVERSE", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1938)).ival_ = ((rt_int)1LL);
}
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("LOOP", 4)))) {
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->x_1938)).a_);
} else {
f_discrete_range_p_382(F->up, &(*(P175)rt_nil_check(F->x_1938)).a_);
}
} else if (f_at_kw_329(F->up, rt_g_lit("WHILE", 5))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_1938)).flag_ = ((rt_int)1LL);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_1938)).a_);
}
f_expect_kw_342(F->up, rt_g_lit("LOOP", 4));
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_1938)).b_);
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("LOOP", 4));
(*F->res_431) = F->x_1938;
goto ret_;
ret_:

  return;
}

static void f_compilation_434(struct f_greenc_1fr *up_, P175 *res_433) {
  struct f_compilation_434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_433 = res_433;
F->first_1941 = INT64_MIN;
F->head_1942 = NULL;
F->tail_1943 = NULL;
F->x_1944 = NULL;
while ((!f_at_kind_333(F->up, ((rt_int)0LL)))) {
if (f_at_kw_329(F->up, rt_g_lit("PRAGMA", 6))) {
f_pragma_p_390(F->up, &F->x_1944);
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1944)).name_)), rt_g_lit("ENVIRONMENT", 11))) {
F->x_1944 = (*(P175)rt_nil_check(F->x_1944)).a_;
while ((F->x_1944 != NULL)) {
F->up->env_names_198 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->up->env_names_198)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1944)).name_))), one_rt_gstr(44)));
F->x_1944 = (*(P175)rt_nil_check(F->x_1944)).next_;
}
L_end_1946: ;
}
} else {
if ((!(((((f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_329(F->up, rt_g_lit("FUNCTION", 8))) || f_at_kw_329(F->up, rt_g_lit("PACKAGE", 7))) || f_at_kw_329(F->up, rt_g_lit("TASK", 4))) || f_at_kw_329(F->up, rt_g_lit("GENERIC", 7))) || f_at_kw_329(F->up, rt_g_lit("RESTRICTED", 10))))) {
f_perror_339(F->up, rt_g_lit("a compilation unit is a subprogram, a package or a task", 55));
}
F->first_1941 = G_NV((*(P111)rt_nil_check(({ A110 ix1947 = F->up->toks_113; ix1947.p[rt_index(G_NV(F->up->tpos_115), ix1947.lo, ix1947.hi) - ix1947.lo]; }))).line_);
f_unit_p_396(F->up, &F->x_1944);
if (((*(P175)rt_nil_check(F->x_1944)).formal_ == NULL)) {
(*(P175)rt_nil_check(F->x_1944)).formal_ = f_mk_246(F->up, rt_g_lit(",", 1));
}
if (G_NV(F->up->compiling_source_208)) {
F->up->spans_207 = ({ R206 *cell1948 = rt_alloc(sizeof(R206)); *cell1948 = cp_R206(({ R206 ag1949; ag1949.u_ = F->x_1944; ag1949.first_ = G_NV(F->first_1941); ag1949.last_ = G_NV((*(P111)rt_nil_check(({ A110 ix1950 = F->up->toks_113; ix1950.p[rt_index(rt_sub(G_NV(F->up->tpos_115), ((rt_int)1LL)), ix1950.lo, ix1950.hi) - ix1950.lo]; }))).line_); ag1949.env_ = F->up->env_names_198; ag1949.next_ = F->up->spans_207; ag1949; })); (P205)cell1948; });
}
(*(P175)rt_nil_check(F->x_1944)).formal_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1944)).formal_)), (*(P141)rt_nil_check(F->up->env_names_198))));
f_append_324(F->up, &F->head_1942, &F->tail_1943, F->x_1944);
}
}
L_end_1945: ;
(*F->res_433) = F->head_1942;
goto ret_;
ret_:

  return;
}

static rt_int f_hash_436(struct f_greenc_1fr *up_, rt_gstr s_435) {
  struct f_hash_436fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_435 = cp_rt_gstr(s_435);
F->h_1951 = INT64_MIN;
F->h_1951 = ((rt_int)0LL);
{ rt_int lo1955 = ((rt_int)1LL), hi1956 = ({ rt_gstr at1953 = F->s_435; at1953.hi >= at1953.lo ? at1953.hi - at1953.lo + 1 : (rt_int)0; });
for (rt_int it1957 = lo1955; it1957 <= hi1956; it1957++) {
F->i_1954 = it1957;
F->h_1951 = rt_rem(rt_add(rt_mul(G_NV(F->h_1951), ((rt_int)31LL)), ((rt_int)(G_NV(({ rt_gstr ix1958 = F->s_435; ix1958.p[rt_index(F->i_1954, ix1958.lo, ix1958.hi) - ix1958.lo]; }))) + 1)), ((rt_int)4093LL));
}
}
L_end_1952: ;
F->result_ = G_NV(F->h_1951);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_listed_439(struct f_greenc_1fr *up_, P141 list_437, rt_gstr name_438) {
  struct f_listed_439fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_437 = list_437;
F->name_438 = cp_rt_gstr(name_438);
F->l_1959 = cp_rt_gstr((*(P141)rt_nil_check(F->list_437)));
F->n_1960 = INT64_MIN;
F->n_1960 = ({ rt_gstr at1961 = F->name_438; at1961.hi >= at1961.lo ? at1961.hi - at1961.lo + 1 : (rt_int)0; });
{ rt_int lo1966 = ({ rt_gstr at1963 = F->l_1959; at1963.lo; }), hi1967 = rt_sub(rt_sub(({ rt_gstr at1964 = F->l_1959; at1964.hi; }), G_NV(F->n_1960)), ((rt_int)1LL));
for (rt_int it1968 = lo1966; it1968 <= hi1967; it1968++) {
F->i_1965 = it1968;
if (((G_NV(({ rt_gstr ix1969 = F->l_1959; ix1969.p[rt_index(F->i_1965, ix1969.lo, ix1969.hi) - ix1969.lo]; })) == 44) && (G_NV(({ rt_gstr ix1970 = F->l_1959; ix1970.p[rt_index(rt_add(rt_add(F->i_1965, G_NV(F->n_1960)), ((rt_int)1LL)), ix1970.lo, ix1970.hi) - ix1970.lo]; })) == 44))) {
if (eq_rt_gstr(({ rt_gstr sl1971 = F->l_1959; rt_int l_ = rt_add(F->i_1965, ((rt_int)1LL)), h_ = rt_add(F->i_1965, G_NV(F->n_1960)); if (l_ <= h_) { rt_index(l_, sl1971.lo, sl1971.hi); rt_index(h_, sl1971.lo, sl1971.hi); } sl1971.p += l_ - sl1971.lo; sl1971.lo = l_; sl1971.hi = h_; sl1971; }), F->name_438)) {
F->result_ = 1;
goto ret_;
}
}
}
}
L_end_1962: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_visible_sym_441(struct f_greenc_1fr *up_, P118 y_440) {
  struct f_visible_sym_441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_440 = y_440;
F->b_1972 = NULL;
F->b_1972 = F->up->barriers_201;
if ((G_NV((*(P118)rt_nil_check(F->y_440)).depth_) == ((rt_int)0LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->b_1972 != NULL)) {
if (((G_NV((*(P118)rt_nil_check(F->y_440)).depth_) <= G_NV((*(P199)rt_nil_check(F->b_1972)).limit_)) && (G_NV((*(P118)rt_nil_check(F->y_440)).depth_) != G_NV((*(P199)rt_nil_check(F->b_1972)).keep_)))) {
if ((!f_listed_439(F->up, (*(P199)rt_nil_check(F->b_1972)).allowed_, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_440)).name_))))) {
F->result_ = 0;
goto ret_;
}
}
F->b_1972 = (*(P199)rt_nil_check(F->b_1972)).next_;
}
L_end_1973: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P118 f_lookup_443(struct f_greenc_1fr *up_, rt_gstr name_442) {
  struct f_lookup_443fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_442 = cp_rt_gstr(name_442);
F->y_1974 = NULL;
F->y_1974 = ({ A117 ix1975 = F->up->table_120; ix1975.p[rt_index(f_hash_436(F->up, F->name_442), ix1975.lo, ix1975.hi) - ix1975.lo]; });
while ((F->y_1974 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1974)).name_)), F->name_442) && f_visible_sym_441(F->up, F->y_1974))) {
F->result_ = F->y_1974;
goto ret_;
}
F->y_1974 = (*(P118)rt_nil_check(F->y_1974)).chain_;
}
L_end_1976: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_task_446(struct f_greenc_1fr *up_, P118 a_444, P118 b_445) {
  struct f_same_task_446fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_444 = a_444;
F->b_445 = b_445;
if ((F->a_444 == F->b_445)) {
F->result_ = 1;
goto ret_;
} else if (((F->a_444 == NULL) || (F->b_445 == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->a_444)).cname_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_445)).cname_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P118 f_lookup_entry_449(struct f_greenc_1fr *up_, rt_gstr name_447, P118 owner_448) {
  struct f_lookup_entry_449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_447 = cp_rt_gstr(name_447);
F->owner_448 = owner_448;
F->y_1977 = NULL;
F->y_1977 = ({ A117 ix1978 = F->up->table_120; ix1978.p[rt_index(f_hash_436(F->up, F->name_447), ix1978.lo, ix1978.hi) - ix1978.lo]; });
while ((F->y_1977 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1977)).name_)), F->name_447) && (G_NV((*(P118)rt_nil_check(F->y_1977)).kind_) == ((rt_int)10LL))) && f_same_task_446(F->up, (*(P118)rt_nil_check(F->y_1977)).members_, F->owner_448))) {
F->result_ = F->y_1977;
goto ret_;
}
F->y_1977 = (*(P118)rt_nil_check(F->y_1977)).chain_;
}
L_end_1979: ;
F->result_ = f_lookup_443(F->up, F->name_447);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P118 f_lookup_at_452(struct f_greenc_1fr *up_, rt_gstr name_450, rt_int d_451) {
  struct f_lookup_at_452fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_450 = cp_rt_gstr(name_450);
F->d_451 = d_451;
F->y_1980 = NULL;
F->y_1980 = ({ A117 ix1981 = F->up->table_120; ix1981.p[rt_index(f_hash_436(F->up, F->name_450), ix1981.lo, ix1981.hi) - ix1981.lo]; });
while ((F->y_1980 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1980)).name_)), F->name_450) && (G_NV((*(P118)rt_nil_check(F->y_1980)).depth_) == F->d_451))) {
F->result_ = F->y_1980;
goto ret_;
}
F->y_1980 = (*(P118)rt_nil_check(F->y_1980)).chain_;
}
L_end_1982: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_int f_enclosing_depth_454(struct f_greenc_1fr *up_, rt_gstr name_453) {
  struct f_enclosing_depth_454fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_453 = cp_rt_gstr(name_453);
{ rt_int lo1985 = ((rt_int)1LL), hi1986 = G_NV(F->up->nunits_189);
for (rt_int it1987 = hi1986; it1987 >= lo1985; it1987--) {
F->i_1984 = it1987;
if (eq_rt_gstr((*(P141)rt_nil_check(({ A184 ix1988 = F->up->unit_names_185; ix1988.p[rt_index(F->i_1984, ix1988.lo, ix1988.hi) - ix1988.lo]; }))), F->name_453)) {
F->result_ = G_NV(({ A186 ix1989 = F->up->unit_depths_187; ix1989.p[rt_index(F->i_1984, ix1989.lo, ix1989.hi) - ix1989.lo]; }));
goto ret_;
}
}
}
L_end_1983: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_push_unit_456(struct f_greenc_1fr *up_, P141 name_455) {
  struct f_push_unit_456fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_455 = name_455;
F->up->nunits_189 = rt_add(G_NV(F->up->nunits_189), ((rt_int)1LL));
(*({ A184 *ix1990 = &(F->up->unit_names_185); &ix1990->p[rt_index(G_NV(F->up->nunits_189), ix1990->lo, ix1990->hi) - ix1990->lo]; })) = F->name_455;
(*({ A186 *ix1991 = &(F->up->unit_depths_187); &ix1991->p[rt_index(G_NV(F->up->nunits_189), ix1991->lo, ix1991->hi) - ix1991->lo]; })) = G_NV(F->up->depth_121);
ret_:

  return;
}

static P118 f_lookup_decl_458(struct f_greenc_1fr *up_, P175 d_457) {
  struct f_lookup_decl_458fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_457 = d_457;
F->y_1992 = NULL;
F->y_1992 = ({ A117 ix1993 = F->up->table_120; ix1993.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_457)).name_))), ix1993.lo, ix1993.hi) - ix1993.lo]; });
while ((F->y_1992 != NULL)) {
if (((*(P118)rt_nil_check(F->y_1992)).decl_ == F->d_457)) {
F->result_ = F->y_1992;
goto ret_;
}
F->y_1992 = (*(P118)rt_nil_check(F->y_1992)).chain_;
}
L_end_1994: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_overloadable_460(struct f_greenc_1fr *up_, P118 y_459) {
  struct f_overloadable_460fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_459 = y_459;
F->result_ = ((((G_NV((*(P118)rt_nil_check(F->y_459)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_459)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->y_459)).kind_) == ((rt_int)7LL))) || (G_NV((*(P118)rt_nil_check(F->y_459)).kind_) == ((rt_int)10LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_463(struct f_greenc_1fr *up_, P123 a_461, P123 b_462) {
  struct f_same_463fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_461 = a_461;
F->b_462 = b_462;
if (((F->a_461 == NULL) || (F->b_462 == NULL))) {
F->result_ = (F->a_461 == F->b_462);
goto ret_;
} else if ((((*(P123)rt_nil_check(F->a_461)).view_of_ != NULL) || ((*(P123)rt_nil_check(F->b_462)).view_of_ != NULL))) {
F->result_ = (f_base_view_465(F->up, F->a_461) == f_base_view_465(F->up, F->b_462));
goto ret_;
}
F->result_ = (F->a_461 == F->b_462);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P123 f_base_view_465(struct f_greenc_1fr *up_, P123 t_464) {
  struct f_base_view_465fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_464 = t_464;
F->r_1995 = NULL;
F->r_1995 = F->t_464;
while (((*(P123)rt_nil_check(F->r_1995)).view_of_ != NULL)) {
F->r_1995 = (*(P123)rt_nil_check(F->r_1995)).view_of_;
}
L_end_1996: ;
F->result_ = F->r_1995;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P123 f_root_467(struct f_greenc_1fr *up_, P123 t_466) {
  struct f_root_467fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_466 = t_466;
F->r_1997 = NULL;
F->r_1997 = F->t_466;
while (((*(P123)rt_nil_check(F->r_1997)).parent_ != NULL)) {
F->r_1997 = (*(P123)rt_nil_check(F->r_1997)).parent_;
}
L_end_1998: ;
F->result_ = F->r_1997;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_derived_from_470(struct f_greenc_1fr *up_, P123 a_468, P123 b_469) {
  struct f_derived_from_470fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_468 = a_468;
F->b_469 = b_469;
F->r_1999 = NULL;
F->r_1999 = F->a_468;
while ((F->r_1999 != NULL)) {
if ((F->r_1999 == F->b_469)) {
F->result_ = 1;
goto ret_;
}
F->r_1999 = (*(P123)rt_nil_check(F->r_1999)).parent_;
}
L_end_2000: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_numeric_472(struct f_greenc_1fr *up_, P123 t_471) {
  struct f_is_numeric_472fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_471 = t_471;
if (((*(P123)rt_nil_check(F->t_471)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_211) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_numeric_472(F->up, (*(P123)rt_nil_check(F->t_471)).view_of_);
goto ret_;
}
F->result_ = (((G_NV((*(P123)rt_nil_check(F->t_471)).kind_) == ((rt_int)1LL)) || (G_NV((*(P123)rt_nil_check(F->t_471)).kind_) == ((rt_int)3LL))) || (G_NV((*(P123)rt_nil_check(F->t_471)).kind_) == ((rt_int)16LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_discrete_474(struct f_greenc_1fr *up_, P123 t_473) {
  struct f_is_discrete_474fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_473 = t_473;
if (((*(P123)rt_nil_check(F->t_473)).view_of_ != NULL)) {
if ((G_NV(F->up->in_instance_211) > ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_discrete_474(F->up, (*(P123)rt_nil_check(F->t_473)).view_of_);
goto ret_;
}
F->result_ = ((((G_NV((*(P123)rt_nil_check(F->t_473)).kind_) == ((rt_int)1LL)) || (G_NV((*(P123)rt_nil_check(F->t_473)).kind_) == ((rt_int)4LL))) || (G_NV((*(P123)rt_nil_check(F->t_473)).kind_) == ((rt_int)11LL))) || (G_NV((*(P123)rt_nil_check(F->t_473)).kind_) == ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_types_477(struct f_greenc_1fr *up_, P2001 a_475, P2001 b_476) {
  struct f_same_types_477fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_475 = a_475;
F->b_476 = b_476;
F->x_2003 = NULL;
F->x_2003 = F->a_475;
F->y_2004 = NULL;
F->y_2004 = F->b_476;
while (((F->x_2003 != NULL) && (F->y_2004 != NULL))) {
if (((!f_same_463(F->up, (*(P2001)rt_nil_check(F->x_2003)).t_, (*(P2001)rt_nil_check(F->y_2004)).t_)) || (G_NV((*(P2001)rt_nil_check(F->x_2003)).mode_) != G_NV((*(P2001)rt_nil_check(F->y_2004)).mode_)))) {
F->result_ = 0;
goto ret_;
}
F->x_2003 = (*(P2001)rt_nil_check(F->x_2003)).next_;
F->y_2004 = (*(P2001)rt_nil_check(F->y_2004)).next_;
}
L_end_2005: ;
F->result_ = ((F->x_2003 == NULL) && (F->y_2004 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_signature_480(struct f_greenc_1fr *up_, P2001 a_478, P2001 b_479) {
  struct f_same_signature_480fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_478 = a_478;
F->b_479 = b_479;
F->x_2006 = NULL;
F->x_2006 = F->a_478;
F->y_2007 = NULL;
F->y_2007 = F->b_479;
while (((F->x_2006 != NULL) && (F->y_2007 != NULL))) {
if ((((!f_same_463(F->up, (*(P2001)rt_nil_check(F->x_2006)).t_, (*(P2001)rt_nil_check(F->y_2007)).t_)) || (G_NV((*(P2001)rt_nil_check(F->x_2006)).mode_) != G_NV((*(P2001)rt_nil_check(F->y_2007)).mode_))) || (!eq_rt_gstr((*(P141)rt_nil_check((*(P2001)rt_nil_check(F->x_2006)).name_)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->y_2007)).name_)))))) {
F->result_ = 0;
goto ret_;
}
F->x_2006 = (*(P2001)rt_nil_check(F->x_2006)).next_;
F->y_2007 = (*(P2001)rt_nil_check(F->y_2007)).next_;
}
L_end_2008: ;
F->result_ = ((F->x_2006 == NULL) && (F->y_2007 == NULL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_distinct_overload_483(struct f_greenc_1fr *up_, P118 y_481, P118 z_482) {
  struct f_distinct_overload_483fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_481 = y_481;
F->z_482 = z_482;
if ((!(f_overloadable_460(F->up, F->y_481) && f_overloadable_460(F->up, F->z_482)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P118)rt_nil_check(F->y_481)).kind_) != G_NV((*(P118)rt_nil_check(F->z_482)).kind_))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((!f_same_signature_480(F->up, (*(P118)rt_nil_check(F->y_481)).params_, (*(P118)rt_nil_check(F->z_482)).params_)) || (!f_same_463(F->up, (*(P118)rt_nil_check(F->y_481)).result_, (*(P118)rt_nil_check(F->z_482)).result_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_define_486(struct f_greenc_1fr *up_, P118 y_484, rt_int line_485) {
  struct f_define_486fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_484 = y_484;
F->line_485 = line_485;
F->h_2009 = INT64_MIN;
F->h_2009 = f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_484)).name_)));
F->z_2010 = NULL;
F->z_2010 = ({ A117 ix2011 = F->up->table_120; ix2011.p[rt_index(G_NV(F->h_2009), ix2011.lo, ix2011.hi) - ix2011.lo]; });
while ((F->z_2010 != NULL)) {
if ((((G_NV((*(P118)rt_nil_check(F->z_2010)).depth_) == G_NV(F->up->depth_121)) && eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_2010)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_484)).name_)))) && (!f_distinct_overload_483(F->up, F->y_484, F->z_2010)))) {
f_fail_267(F->up, F->line_485, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_484)).name_)), rt_g_lit(" is already declared in this declarative part", 45)));
}
F->z_2010 = (*(P118)rt_nil_check(F->z_2010)).chain_;
}
L_end_2012: ;
(*(P118)rt_nil_check(F->y_484)).depth_ = G_NV(F->up->depth_121);
(*(P118)rt_nil_check(F->y_484)).chain_ = ({ A117 ix2013 = F->up->table_120; ix2013.p[rt_index(G_NV(F->h_2009), ix2013.lo, ix2013.hi) - ix2013.lo]; });
(*({ A117 *ix2014 = &(F->up->table_120); &ix2014->p[rt_index(G_NV(F->h_2009), ix2014->lo, ix2014->hi) - ix2014->lo]; })) = F->y_484;
(*(P118)rt_nil_check(F->y_484)).stack_ = F->up->scope_stack_122;
F->up->scope_stack_122 = F->y_484;
ret_:

  return;
}

static void f_open_scope_487(struct f_greenc_1fr *up_) {
  struct f_open_scope_487fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->depth_121 = rt_add(G_NV(F->up->depth_121), ((rt_int)1LL));
ret_:

  return;
}

static void f_close_scope_488(struct f_greenc_1fr *up_) {
  struct f_close_scope_488fr *F = rt_alloc(sizeof *F);
F->up = up_;
while (((F->up->scope_stack_122 != NULL) && (G_NV((*(P118)rt_nil_check(F->up->scope_stack_122)).depth_) == G_NV(F->up->depth_121)))) {
(*({ A117 *ix2016 = &(F->up->table_120); &ix2016->p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->scope_stack_122)).name_))), ix2016->lo, ix2016->hi) - ix2016->lo]; })) = (*(P118)rt_nil_check(F->up->scope_stack_122)).chain_;
F->up->scope_stack_122 = (*(P118)rt_nil_check(F->up->scope_stack_122)).stack_;
}
L_end_2015: ;
F->up->depth_121 = rt_sub(G_NV(F->up->depth_121), ((rt_int)1LL));
ret_:

  return;
}

static P118 f_new_sym_491(struct f_greenc_1fr *up_, rt_int kind_489, P141 name_490) {
  struct f_new_sym_491fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_489 = kind_489;
F->name_490 = name_490;
F->result_ = ({ R119 *cell2017 = rt_alloc(sizeof(R119)); *cell2017 = cp_R119(({ R119 ag2018; ag2018.kind_ = F->kind_489; ag2018.name_ = F->name_490; ag2018.t_ = NULL; ag2018.c_ = NULL; ag2018.access_path_ = NULL; ag2018.cname_ = NULL; ag2018.ro_ = 0; ag2018.mvalue_ = ((rt_int)0LL); ag2018.hasmv_ = 0; ag2018.decl_ = NULL; ag2018.params_ = NULL; ag2018.result_ = NULL; ag2018.depth_ = ((rt_int)0LL); ag2018.level_ = ((rt_int)0LL); ag2018.byref_ = 0; ag2018.vrp_ = 0; ag2018.hidden_ = 0; ag2018.from_use_ = 0; ag2018.members_ = NULL; ag2018.mnext_ = NULL; ag2018.chain_ = NULL; ag2018.stack_ = NULL; ag2018.flags_ = ((rt_int)0LL); ag2018; })); (P118)cell2017; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P123 f_new_typ_493(struct f_greenc_1fr *up_, rt_int kind_492) {
  struct f_new_typ_493fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_492 = kind_492;
F->result_ = ({ R124 *cell2021 = rt_alloc(sizeof(R124)); *cell2021 = cp_R124(({ R124 ag2022; ag2022.kind_ = F->kind_492; ag2022.name_ = NULL; ag2022.lits_ = NULL; ag2022.elem_ = NULL; ag2022.idx_ = NULL; ag2022.elemcons_ = NULL; ag2022.tcons_ = NULL; ag2022.fields_ = NULL; ag2022.target_ = NULL; ag2022.decl_ = NULL; ag2022.cname_ = NULL; ag2022.forward_ = 0; ag2022.defined_ = 0; ag2022.priv_ = 0; ag2022.next_ = NULL; ag2022.idx2_ = NULL; ag2022.littab_ = NULL; ag2022.parent_ = NULL; ag2022.ndigits_ = ((rt_int)0LL); ag2022.fdelta_ = NULL; ag2022.fsmall_ = NULL; ag2022.dims_ = ((rt_int)0LL); ag2022.is_restricted_ = 0; ag2022.view_of_ = NULL; ag2022; })); (P123)cell2021; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P179 f_new_cons_494(struct f_greenc_1fr *up_) {
  struct f_new_cons_494fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->result_ = ({ R180 *cell2025 = rt_alloc(sizeof(R180)); *cell2025 = cp_R180(({ R180 ag2026; ag2026.lo_ = NULL; ag2026.hi_ = NULL; ag2026.slen_ = NULL; ag2026.mlo_ = ((rt_int)0LL); ag2026.mhi_ = ((rt_int)0LL); ag2026.hasm_ = 0; ag2026.lo2_ = NULL; ag2026.hi2_ = NULL; ag2026.acc_ = NULL; ag2026.inner_ = NULL; ag2026.dv_ = NULL; ag2026; })); (P179)cell2025; });
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_496(struct f_greenc_1fr *up_, P179 c_495) {
  struct f_bounded_496fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_495 = c_495;
if ((F->c_495 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P179)rt_nil_check(F->c_495)).lo_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_bounded_hi_498(struct f_greenc_1fr *up_, P179 c_497) {
  struct f_bounded_hi_498fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_497 = c_497;
if ((F->c_497 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P179)rt_nil_check(F->c_497)).hi_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_static_bounds_500(struct f_greenc_1fr *up_, P179 c_499) {
  struct f_static_bounds_500fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_499 = c_499;
if ((F->c_499 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = G_NV((*(P179)rt_nil_check(F->c_499)).hasm_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_discriminated_502(struct f_greenc_1fr *up_, P179 c_501) {
  struct f_discriminated_502fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_501 = c_501;
if ((F->c_501 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((*(P179)rt_nil_check(F->c_501)).dv_ != NULL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_kind_name_504(struct f_greenc_1fr *up_, P123 t_503) {
  struct f_kind_name_504fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_503 = t_503;
if (((*(P123)rt_nil_check(F->t_503)).name_ != NULL)) {
F->result_ = (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_503)).name_));
goto ret_;
}
{ rt_int sel2027 = G_NV((*(P123)rt_nil_check(F->t_503)).kind_);
if (0 || sel2027 == ((rt_int)1LL)) {
F->result_ = rt_g_lit("INTEGER", 7);
goto ret_;
} else if (0 || sel2027 == ((rt_int)2LL)) {
F->result_ = rt_g_lit("BOOLEAN", 7);
goto ret_;
} else if (0 || sel2027 == ((rt_int)3LL)) {
F->result_ = rt_g_lit("FLOAT", 5);
goto ret_;
} else if (0 || sel2027 == ((rt_int)5LL)) {
F->result_ = rt_g_lit("STRING", 6);
goto ret_;
} else if (0 || sel2027 == ((rt_int)10LL)) {
F->result_ = rt_g_lit("null", 4);
goto ret_;
} else if (0 || sel2027 == ((rt_int)11LL)) {
F->result_ = rt_g_lit("CHARACTER", 9);
goto ret_;
} else if (0 || sel2027 == ((rt_int)16LL)) {
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

static void f_check_type_508(struct f_greenc_1fr *up_, P123 got_505, P123 want_506, rt_int line_507) {
  struct f_check_type_508fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->got_505 = got_505;
F->want_506 = want_506;
F->line_507 = line_507;
if ((F->want_506 == NULL)) {
goto ret_;
}
if (((G_NV((*(P123)rt_nil_check(F->got_505)).kind_) == ((rt_int)10LL)) && (G_NV((*(P123)rt_nil_check(F->want_506)).kind_) == ((rt_int)8LL)))) {
goto ret_;
}
if ((!f_same_463(F->up, F->got_505, F->want_506))) {
f_fail_267(F->up, F->line_507, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_504(F->up, F->got_505)), rt_g_lit(" where ", 7)), f_kind_name_504(F->up, F->want_506)), rt_g_lit(" is required", 12)));
}
ret_:

  return;
}

static rt_int f_field_count_510(struct f_greenc_1fr *up_, P123 t_509) {
  struct f_field_count_510fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_509 = t_509;
F->n_2028 = INT64_MIN;
F->n_2028 = ((rt_int)0LL);
F->f_2029 = NULL;
F->f_2029 = (*(P123)rt_nil_check(F->t_509)).fields_;
while ((F->f_2029 != NULL)) {
F->n_2028 = rt_add(G_NV(F->n_2028), ((rt_int)1LL));
F->f_2029 = (*(P2019)rt_nil_check(F->f_2029)).next_;
}
L_end_2030: ;
F->result_ = G_NV(F->n_2028);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_ctype_513(struct f_greenc_1fr *up_, P123 t_511, P141 *r_512) {
  struct f_ctype_513fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_511 = t_511;
F->r_512 = r_512;
F->s_2031 = NULL;
{ rt_int sel2032 = G_NV((*(P123)rt_nil_check(F->t_511)).kind_);
if (0 || sel2032 == ((rt_int)1LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("rt_int", 6));
} else if (0 || sel2032 == ((rt_int)2LL) || sel2032 == ((rt_int)4LL) || sel2032 == ((rt_int)11LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("int", 3));
} else if (0 || sel2032 == ((rt_int)3LL) || sel2032 == ((rt_int)16LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("double", 6));
} else if (0 || sel2032 == ((rt_int)5LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("rstr", 4));
} else if (0 || sel2032 == ((rt_int)9LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("void", 4));
} else if (0 || sel2032 == ((rt_int)13LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("rt_act", 6));
} else if (0 || sel2032 == ((rt_int)14LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("rt_taskdecl", 11));
} else if (0 || sel2032 == ((rt_int)15LL)) {
(*F->r_512) = f_mk_246(F->up, rt_g_lit("rt_entry", 8));
} else {
if (((*(P123)rt_nil_check(F->t_511)).view_of_ != NULL)) {
f_ctype_513(F->up, (*(P123)rt_nil_check(F->t_511)).view_of_, &F->s_2031);
(*(P123)rt_nil_check(F->t_511)).cname_ = F->s_2031;
} else if (((*(P123)rt_nil_check(F->t_511)).cname_ == NULL)) {
f_declare_ctype_518(F->up, F->t_511);
} else if ((((G_NV((*(P123)rt_nil_check(F->t_511)).kind_) == ((rt_int)7LL)) && G_NV((*(P123)rt_nil_check(F->t_511)).forward_)) && (!G_NV((*(P123)rt_nil_check(F->t_511)).defined_)))) {
(*(P123)rt_nil_check(F->t_511)).defined_ = 1;
f_field_decls_516(F->up, F->t_511, &F->s_2031);
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_511)).cname_))), rt_g_lit(" {", 2)), (*(P141)rt_nil_check(F->s_2031))), rt_g_lit(" };", 3)));
}
(*F->r_512) = (*(P123)rt_nil_check(F->t_511)).cname_;
}
}
ret_:

  return;
}

static void f_field_decls_516(struct f_greenc_1fr *up_, P123 t_514, P141 *r_515) {
  struct f_field_decls_516fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_514 = t_514;
F->r_515 = r_515;
F->f_2033 = NULL;
F->f_2033 = (*(P123)rt_nil_check(F->t_514)).fields_;
F->s_2034 = NULL;
F->ct_2035 = NULL;
F->s_2034 = f_mk_246(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->f_2033 != NULL)) {
f_ctype_513(F->up, (*(P2019)rt_nil_check(F->f_2033)).t_, &F->ct_2035);
F->s_2034 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->s_2034)), one_rt_gstr(32)), (*(P141)rt_nil_check(F->ct_2035))), one_rt_gstr(32)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2033)).name_)))), one_rt_gstr(59)));
F->f_2033 = (*(P2019)rt_nil_check(F->f_2033)).next_;
}
L_end_2036: ;
(*F->r_515) = F->s_2034;
ret_:

  return;
}

static void f_declare_ctype_518(struct f_greenc_1fr *up_, P123 t_517) {
  struct f_declare_ctype_518fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_517 = t_517;
F->ct_2037 = NULL;
F->s_2038 = NULL;
F->target_2039 = NULL;
if ((G_NV((*(P123)rt_nil_check(F->t_517)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_629(F->up, F->t_517);
}
if ((G_NV((*(P123)rt_nil_check(F->t_517)).kind_) == ((rt_int)6LL))) {
f_new_name_249(F->up, rt_g_lit("A", 1), &(*(P123)rt_nil_check(F->t_517)).cname_);
} else if ((G_NV((*(P123)rt_nil_check(F->t_517)).kind_) == ((rt_int)7LL))) {
f_new_name_249(F->up, rt_g_lit("R", 1), &(*(P123)rt_nil_check(F->t_517)).cname_);
} else {
f_new_name_249(F->up, rt_g_lit("P", 1), &(*(P123)rt_nil_check(F->t_517)).cname_);
}
(*(P123)rt_nil_check(F->t_517)).next_ = F->up->all_types_125;
F->up->all_types_125 = F->t_517;
if ((G_NV((*(P123)rt_nil_check(F->t_517)).kind_) == ((rt_int)8LL))) {
F->target_2039 = (*(P123)rt_nil_check(F->t_517)).target_;
if ((F->target_2039 == NULL)) {
f_fail_267(F->up, ((rt_int)0LL), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the designated type of ", 23), f_kind_name_504(F->up, F->t_517)), rt_g_lit(" is never declared", 18)));
}
if ((G_NV((*(P123)rt_nil_check(F->target_2039)).kind_) == ((rt_int)7LL))) {
if (((*(P123)rt_nil_check(F->target_2039)).cname_ == NULL)) {
f_new_name_249(F->up, rt_g_lit("R", 1), &(*(P123)rt_nil_check(F->target_2039)).cname_);
(*(P123)rt_nil_check(F->target_2039)).next_ = F->up->all_types_125;
F->up->all_types_125 = F->target_2039;
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->target_2039)).cname_))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->target_2039)).cname_))), one_rt_gstr(59)));
(*(P123)rt_nil_check(F->target_2039)).forward_ = 1;
}
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->target_2039)).cname_))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(59)));
} else {
f_ctype_513(F->up, F->target_2039, &F->ct_2037);
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef ", 8), (*(P141)rt_nil_check(F->ct_2037))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(59)));
}
} else if ((G_NV((*(P123)rt_nil_check(F->t_517)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_517)).elem_, &F->ct_2037);
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(59)));
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), rt_g_lit(" { rt_int lo, hi, lo2, hi2; ", 28)), (*(P141)rt_nil_check(F->ct_2037))), rt_g_lit(" *p; };", 7)));
} else {
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("typedef struct ", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), one_rt_gstr(59)));
(*(P123)rt_nil_check(F->t_517)).defined_ = 1;
f_field_decls_516(F->up, F->t_517, &F->s_2038);
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_517)).cname_))), rt_g_lit(" {", 2)), (*(P141)rt_nil_check(F->s_2038))), rt_g_lit(" };", 3)));
}
ret_:

  return;
}

static rt_int f_lit_index_521(struct f_greenc_1fr *up_, P175 lits_519, rt_gstr name_520) {
  struct f_lit_index_521fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lits_519 = lits_519;
F->name_520 = cp_rt_gstr(name_520);
F->i_2040 = INT64_MIN;
F->i_2040 = ((rt_int)0LL);
F->l_2041 = NULL;
F->l_2041 = F->lits_519;
while ((F->l_2041 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->l_2041)).name_)), F->name_520)) {
F->result_ = G_NV(F->i_2040);
goto ret_;
}
F->i_2040 = rt_add(G_NV(F->i_2040), ((rt_int)1LL));
F->l_2041 = (*(P175)rt_nil_check(F->l_2041)).next_;
}
L_end_2042: ;
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_manifest_525(struct f_greenc_1fr *up_, P175 e_522, rt_int *v_523, int *ok_524) {
  struct f_manifest_525fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_522 = e_522;
F->v_523 = v_523;
F->ok_524 = ok_524;
F->a_2043 = INT64_MIN;
F->b_2044 = INT64_MIN;
F->ok2_2045 = INT_MIN;
F->y_2046 = NULL;
(*F->ok_524) = 0;
(*F->v_523) = ((rt_int)0LL);
if ((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)1LL))) {
(*F->ok_524) = 1;
(*F->v_523) = G_NV((*(P175)rt_nil_check(F->e_522)).ival_);
} else if ((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)15LL))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_522)).a_, &(*F->v_523), &(*F->ok_524));
 (void)rt_range((*F->ok_524), 0, 1);
} else if (((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)6LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("-", 1)))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_522)).a_, &F->a_2043, &(*F->ok_524));
 (void)rt_range((*F->ok_524), 0, 1);
(*F->v_523) = rt_neg(G_NV(F->a_2043));
} else if (((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)7LL)) && ((eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("*", 1))))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_522)).a_, &F->a_2043, &(*F->ok_524));
 (void)rt_range((*F->ok_524), 0, 1);
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_522)).b_, &F->b_2044, &F->ok2_2045);
 (void)rt_range(F->ok2_2045, 0, 1);
(*F->ok_524) = (G_NV((*F->ok_524)) && G_NV(F->ok2_2045));
if (G_NV((*F->ok_524))) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("+", 1))) {
(*F->v_523) = rt_add(G_NV(F->a_2043), G_NV(F->b_2044));
} else if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("-", 1))) {
(*F->v_523) = rt_sub(G_NV(F->a_2043), G_NV(F->b_2044));
} else {
(*F->v_523) = rt_mul(G_NV(F->a_2043), G_NV(F->b_2044));
}
}
} else if ((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)5LL))) {
F->y_2046 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)));
if ((((F->y_2046 != NULL) && ((G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)2LL)) || (G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)7LL)))) && G_NV((*(P118)rt_nil_check(F->y_2046)).hasmv_))) {
(*F->ok_524) = 1;
(*F->v_523) = G_NV((*(P118)rt_nil_check(F->y_2046)).mvalue_);
}
} else if (((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->e_522)).a_))) {
F->y_2046 = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->e_522)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), G_NV((*(P175)rt_nil_check(F->e_522)).line_));
if ((((F->y_2046 != NULL) && ((G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)2LL)) || (G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)7LL)))) && G_NV((*(P118)rt_nil_check(F->y_2046)).hasmv_))) {
(*F->ok_524) = 1;
(*F->v_523) = G_NV((*(P118)rt_nil_check(F->y_2046)).mvalue_);
}
} else if ((((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)10LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_522)).a_)).kind_) == ((rt_int)5LL))) && (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("FIRST", 5)) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("LAST", 4))))) {
F->y_2046 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_522)).a_)).name_)));
if (((((F->y_2046 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)5LL))) && ((*(P118)rt_nil_check(F->y_2046)).c_ != NULL)) && G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2046)).c_)).hasm_))) {
(*F->ok_524) = 1;
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_522)).name_)), rt_g_lit("FIRST", 5))) {
(*F->v_523) = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2046)).c_)).mlo_);
} else {
(*F->v_523) = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2046)).c_)).mhi_);
}
}
} else if ((((G_NV((*(P175)rt_nil_check(F->e_522)).kind_) == ((rt_int)8LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_522)).a_)).kind_) == ((rt_int)5LL))) && (f_list_len_326(F->up, (*(P175)rt_nil_check(F->e_522)).b_) == ((rt_int)1LL)))) {
F->y_2046 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_522)).a_)).name_)));
if (((((F->y_2046 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2046)).kind_) == ((rt_int)5LL))) && ((*(P118)rt_nil_check(F->y_2046)).t_ != NULL)) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2046)).t_)).kind_) == ((rt_int)1LL)))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_522)).b_, &(*F->v_523), &(*F->ok_524));
 (void)rt_range((*F->ok_524), 0, 1);
}
}
ret_:

  return;
}

static void f_resolve_529(struct f_greenc_1fr *up_, P175 st_526, P123 *t_527, P179 *c_528) {
  struct f_resolve_529fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_526 = st_526;
F->t_527 = t_527;
F->c_528 = c_528;
F->y_2047 = NULL;
F->dummy_2048 = NULL;
F->code_2049 = NULL;
F->ok_2050 = INT_MIN;
F->r_2051 = NULL;
(*F->c_528) = f_new_cons_494(F->up);
if ((G_NV((*(P175)rt_nil_check(F->st_526)).kind_) != ((rt_int)80LL))) {
f_type_definition_563(F->up, F->st_526, NULL, &(*F->t_527), &(*F->c_528));
goto ret_;
}
if (((*(P175)rt_nil_check(F->st_526)).tag_ != NULL)) {
F->y_2047 = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_526)).tag_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_526)).name_)), G_NV((*(P175)rt_nil_check(F->st_526)).line_));
} else {
F->y_2047 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_526)).name_)));
}
if (((F->y_2047 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2047)).kind_) != ((rt_int)5LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_526)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_526)).name_)), rt_g_lit(" is not a type", 14)));
}
(*F->t_527) = (*(P118)rt_nil_check(F->y_2047)).t_;
if (((*(P118)rt_nil_check(F->y_2047)).c_ != NULL)) {
(*(P179)rt_nil_check((*F->c_528))).lo_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).lo_;
(*(P179)rt_nil_check((*F->c_528))).hi_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).hi_;
(*(P179)rt_nil_check((*F->c_528))).slen_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).slen_;
(*(P179)rt_nil_check((*F->c_528))).mlo_ = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).mlo_);
(*(P179)rt_nil_check((*F->c_528))).mhi_ = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).mhi_);
(*(P179)rt_nil_check((*F->c_528))).hasm_ = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).hasm_);
(*(P179)rt_nil_check((*F->c_528))).acc_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).acc_;
(*(P179)rt_nil_check((*F->c_528))).inner_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).inner_;
(*(P179)rt_nil_check((*F->c_528))).dv_ = (*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2047)).c_)).dv_;
}
if (((*F->t_527) == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_526)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the type ", 9), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_526)).name_))), rt_g_lit(" is used before its full declaration", 36)));
}
if ((G_NV((*(P175)rt_nil_check(F->st_526)).flag_) == ((rt_int)3LL))) {
if (((G_NV((*(P123)rt_nil_check((*F->t_527))).kind_) != ((rt_int)3LL)) && (G_NV((*(P123)rt_nil_check((*F->t_527))).kind_) != ((rt_int)16LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_526)).line_), rt_g_lit("an accuracy constraint applies to a real type (RM79 3.5.5)", 58));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->st_526)).b_, NULL, &F->dummy_2048, &(*(P179)rt_nil_check((*F->c_528))).acc_);
}
if (((G_NV((*(P175)rt_nil_check(F->st_526)).flag_) == ((rt_int)1LL)) || ((G_NV((*(P175)rt_nil_check(F->st_526)).flag_) == ((rt_int)3LL)) && ((*(P175)rt_nil_check(F->st_526)).a_ != NULL)))) {
F->r_2051 = (*(P175)rt_nil_check(F->st_526)).a_;
if (((!f_is_numeric_472(F->up, (*F->t_527))) && (!f_is_discrete_474(F->up, (*F->t_527))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_526)).line_), rt_g_lit("a range constraint applies to a scalar type (RM79 3.5)", 54));
}
f_range_of_547(F->up, F->r_2051, (*F->t_527), (*F->c_528));
} else if ((G_NV((*(P175)rt_nil_check(F->st_526)).flag_) == ((rt_int)2LL))) {
f_constraint_list_533(F->up, F->st_526, (*F->t_527), (*F->c_528));
}
ret_:

  return;
}

static void f_constraint_list_533(struct f_greenc_1fr *up_, P175 st_530, P123 t_531, P179 c_532) {
  struct f_constraint_list_533fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_530 = st_530;
F->t_531 = t_531;
F->c_532 = c_532;
F->r_2052 = NULL;
F->r_2052 = (*(P175)rt_nil_check(F->st_530)).a_;
F->arrt_2053 = NULL;
F->arrt_2053 = F->t_531;
F->cc_2054 = NULL;
F->cc_2054 = F->c_532;
F->it_2055 = NULL;
if ((G_NV((*(P123)rt_nil_check(F->t_531)).kind_) == ((rt_int)7LL))) {
f_discriminant_constraint_537(F->up, F->st_530, F->t_531, F->c_532);
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check(F->t_531)).kind_) != ((rt_int)6LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_530)).line_), rt_g_lit("this type takes no index constraint", 35));
}
if ((f_list_len_326(F->up, F->r_2052) != G_NV((*(P123)rt_nil_check(F->t_531)).dims_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_530)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an index constraint gives a range for each of the ", 50), rt_g_s2g(rt_str_of_int(G_NV((*(P123)rt_nil_check(F->t_531)).dims_)))), rt_g_lit(" indexes (RM79 3.6)", 19)));
}
while ((F->r_2052 != NULL)) {
if (((*(P175)rt_nil_check(F->r_2052)).formal_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_530)).line_), rt_g_lit("an index constraint is a list of discrete ranges (RM79 3.6)", 59));
}
f_discrete_bounds_543(F->up, F->r_2052, (*(P123)rt_nil_check(F->arrt_2053)).idx_, &F->it_2055, &(*(P179)rt_nil_check(F->cc_2054)).lo_, &(*(P179)rt_nil_check(F->cc_2054)).hi_);
f_check_type_508(F->up, F->it_2055, (*(P123)rt_nil_check(F->arrt_2053)).idx_, G_NV((*(P175)rt_nil_check(F->st_530)).line_));
(*(P179)rt_nil_check(F->cc_2054)).mlo_ = ((rt_int)0LL);
(*(P179)rt_nil_check(F->cc_2054)).mhi_ = ((rt_int)0LL);
(*(P179)rt_nil_check(F->cc_2054)).hasm_ = 0;
F->r_2052 = (*(P175)rt_nil_check(F->r_2052)).next_;
if ((F->r_2052 != NULL)) {
(*(P179)rt_nil_check(F->cc_2054)).inner_ = f_new_cons_494(F->up);
F->cc_2054 = (*(P179)rt_nil_check(F->cc_2054)).inner_;
F->arrt_2053 = (*(P123)rt_nil_check(F->arrt_2053)).elem_;
}
}
L_end_2056: ;
ret_:

  return;
}

static void f_discriminant_constraint_537(struct f_greenc_1fr *up_, P175 st_534, P123 t_535, P179 c_536) {
  struct f_discriminant_constraint_537fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_534 = st_534;
F->t_535 = t_535;
F->c_536 = c_536;
F->a_2057 = NULL;
F->a_2057 = (*(P175)rt_nil_check(F->st_534)).a_;
F->f_2058 = NULL;
F->f_2058 = (*(P123)rt_nil_check(F->t_535)).fields_;
F->vt_2059 = NULL;
F->v_2060 = NULL;
F->d_2061 = NULL;
F->tail_2062 = NULL;
(*(P179)rt_nil_check(F->c_536)).dv_ = NULL;
while ((F->a_2057 != NULL)) {
if (((*(P175)rt_nil_check(F->a_2057)).formal_ != NULL)) {
F->f_2058 = (*(P123)rt_nil_check(F->t_535)).fields_;
while (((F->f_2058 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2058)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_2057)).formal_)))))) {
F->f_2058 = (*(P2019)rt_nil_check(F->f_2058)).next_;
}
L_end_2064: ;
} else {
while (((F->f_2058 != NULL) && (!G_NV((*(P2019)rt_nil_check(F->f_2058)).is_discr_)))) {
F->f_2058 = (*(P2019)rt_nil_check(F->f_2058)).next_;
}
L_end_2065: ;
}
if (((F->f_2058 == NULL) || (!G_NV((*(P2019)rt_nil_check(F->f_2058)).is_discr_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_534)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a discriminant constraint gives the values of discriminants of ", 63), f_kind_name_504(F->up, F->t_535)), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_gexpr_850(F->up, F->a_2057, (*(P2019)rt_nil_check(F->f_2058)).t_, &F->vt_2059, &F->v_2060);
f_check_type_508(F->up, F->vt_2059, (*(P2019)rt_nil_check(F->f_2058)).t_, G_NV((*(P175)rt_nil_check(F->st_534)).line_));
F->d_2061 = ({ R2024 *cell2066 = rt_alloc(sizeof(R2024)); *cell2066 = cp_R2024(({ R2024 ag2067; ag2067.name_ = (*(P2019)rt_nil_check(F->f_2058)).name_; ag2067.v_ = F->v_2060; ag2067.next_ = NULL; ag2067; })); (P2023)cell2066; });
if ((F->tail_2062 == NULL)) {
(*(P179)rt_nil_check(F->c_536)).dv_ = F->d_2061;
} else {
(*(P2023)rt_nil_check(F->tail_2062)).next_ = F->d_2061;
}
F->tail_2062 = F->d_2061;
if (((*(P175)rt_nil_check(F->a_2057)).formal_ == NULL)) {
F->f_2058 = (*(P2019)rt_nil_check(F->f_2058)).next_;
}
F->a_2057 = (*(P175)rt_nil_check(F->a_2057)).next_;
}
L_end_2063: ;
F->f_2058 = (*(P123)rt_nil_check(F->t_535)).fields_;
while ((F->f_2058 != NULL)) {
if (G_NV((*(P2019)rt_nil_check(F->f_2058)).is_discr_)) {
F->d_2061 = (*(P179)rt_nil_check(F->c_536)).dv_;
while (((F->d_2061 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2061)).name_)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2058)).name_)))))) {
F->d_2061 = (*(P2023)rt_nil_check(F->d_2061)).next_;
}
L_end_2069: ;
if ((F->d_2061 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->st_534)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2058)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
}
F->f_2058 = (*(P2019)rt_nil_check(F->f_2058)).next_;
}
L_end_2068: ;
ret_:

  return;
}

static void f_discrete_bounds_543(struct f_greenc_1fr *up_, P175 r_538, P123 want_539, P123 *t_540, P141 *lo_541, P141 *hi_542) {
  struct f_discrete_bounds_543fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_538 = r_538;
F->want_539 = want_539;
F->t_540 = t_540;
F->lo_541 = lo_541;
F->hi_542 = hi_542;
F->c_2070 = NULL;
F->y_2071 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->r_538)).kind_) == ((rt_int)14LL))) {
f_range_bounds_845(F->up, (*(P175)rt_nil_check(F->r_538)).a_, (*(P175)rt_nil_check(F->r_538)).b_, F->want_539, G_NV((*(P175)rt_nil_check(F->r_538)).line_), &(*F->t_540), &(*F->lo_541), &(*F->hi_542));
goto ret_;
}
if ((G_NV((*(P175)rt_nil_check(F->r_538)).kind_) == ((rt_int)5LL))) {
F->y_2071 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_538)).name_)));
if (((F->y_2071 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2071)).kind_) != ((rt_int)5LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->r_538)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
} else if ((G_NV((*(P175)rt_nil_check(F->r_538)).kind_) != ((rt_int)80LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->r_538)).line_), rt_g_lit("a discrete range is L .. H, T range L .. H or a type mark (RM79 3.6)", 68));
}
if ((G_NV((*(P175)rt_nil_check(F->r_538)).kind_) == ((rt_int)5LL))) {
(*F->t_540) = (*(P118)rt_nil_check(F->y_2071)).t_;
F->c_2070 = (*(P118)rt_nil_check(F->y_2071)).c_;
} else {
f_resolve_529(F->up, F->r_538, &(*F->t_540), &F->c_2070);
}
if (((F->c_2070 == NULL) || ((*(P179)rt_nil_check(F->c_2070)).lo_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->r_538)).line_), rt_g_lit("this type mark has no bounds to give a discrete range", 53));
}
(*F->lo_541) = (*(P179)rt_nil_check(F->c_2070)).lo_;
(*F->hi_542) = (*(P179)rt_nil_check(F->c_2070)).hi_;
ret_:

  return;
}

static void f_range_of_547(struct f_greenc_1fr *up_, P175 r_544, P123 t_545, P179 c_546) {
  struct f_range_of_547fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_544 = r_544;
F->t_545 = t_545;
F->c_546 = c_546;
F->dummy_2072 = NULL;
F->ok_2073 = INT_MIN;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->r_544)).a_, F->t_545, &F->dummy_2072, &(*(P179)rt_nil_check(F->c_546)).lo_);
f_check_type_508(F->up, F->dummy_2072, F->t_545, G_NV((*(P175)rt_nil_check(F->r_544)).line_));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->r_544)).b_, F->t_545, &F->dummy_2072, &(*(P179)rt_nil_check(F->c_546)).hi_);
f_check_type_508(F->up, F->dummy_2072, F->t_545, G_NV((*(P175)rt_nil_check(F->r_544)).line_));
if ((G_NV((*(P123)rt_nil_check(F->t_545)).kind_) == ((rt_int)16LL))) {
(*(P179)rt_nil_check(F->c_546)).lo_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_546)).lo_))), one_rt_gstr(41)));
(*(P179)rt_nil_check(F->c_546)).hi_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_546)).hi_))), one_rt_gstr(41)));
}
f_manifest_525(F->up, (*(P175)rt_nil_check(F->r_544)).a_, &(*(P179)rt_nil_check(F->c_546)).mlo_, &F->ok_2073);
 (void)rt_range(F->ok_2073, 0, 1);
(*(P179)rt_nil_check(F->c_546)).hasm_ = G_NV(F->ok_2073);
f_manifest_525(F->up, (*(P175)rt_nil_check(F->r_544)).b_, &(*(P179)rt_nil_check(F->c_546)).mhi_, &F->ok_2073);
 (void)rt_range(F->ok_2073, 0, 1);
(*(P179)rt_nil_check(F->c_546)).hasm_ = (G_NV((*(P179)rt_nil_check(F->c_546)).hasm_) && G_NV(F->ok_2073));
ret_:

  return;
}

static void f_fresh_typ_551(struct f_greenc_1fr *up_, rt_int kind_548, P141 name_549, P123 *t_550) {
  struct f_fresh_typ_551fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->kind_548 = kind_548;
F->name_549 = name_549;
F->t_550 = t_550;
F->ph_2074 = NULL;
F->ph_2074 = F->up->completing_174;
F->up->completing_174 = NULL;
if ((F->ph_2074 == NULL)) {
(*F->t_550) = f_new_typ_493(F->up, F->kind_548);
(*(P123)rt_nil_check((*F->t_550))).name_ = F->name_549;
goto ret_;
}
as_R124(&(*(P123)rt_nil_check(F->ph_2074)), (*(P123)rt_nil_check(f_new_typ_493(F->up, F->kind_548))));
(*(P123)rt_nil_check(F->ph_2074)).name_ = F->name_549;
(*F->t_550) = F->ph_2074;
ret_:

  return;
}

static void f_inherit_555(struct f_greenc_1fr *up_, P123 parent_552, P123 t_553, rt_int line_554) {
  struct f_inherit_555fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->parent_552 = parent_552;
F->t_553 = t_553;
F->line_554 = line_554;
F->s_2075 = NULL;
F->s_2075 = F->up->scope_stack_122;
F->z_2076 = NULL;
F->p_2077 = NULL;
F->q_2078 = NULL;
F->tail_2079 = NULL;
F->uses_2080 = INT_MIN;
F->news_2081 = NULL;
while ((F->s_2075 != NULL)) {
if (((((G_NV((*(P118)rt_nil_check(F->s_2075)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->s_2075)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P118)rt_nil_check(F->s_2075)).hidden_))) && ((*(P118)rt_nil_check(F->s_2075)).members_ == NULL))) {
F->uses_2080 = f_same_463(F->up, (*(P118)rt_nil_check(F->s_2075)).result_, F->parent_552);
F->p_2077 = (*(P118)rt_nil_check(F->s_2075)).params_;
while ((F->p_2077 != NULL)) {
F->uses_2080 = (G_NV(F->uses_2080) || f_same_463(F->up, (*(P2001)rt_nil_check(F->p_2077)).t_, F->parent_552));
F->p_2077 = (*(P2001)rt_nil_check(F->p_2077)).next_;
}
L_end_2083: ;
if (G_NV(F->uses_2080)) {
f_copy_sym_1102(F->up, F->s_2075, &F->z_2076);
(*(P118)rt_nil_check(F->z_2076)).params_ = NULL;
F->tail_2079 = NULL;
F->p_2077 = (*(P118)rt_nil_check(F->s_2075)).params_;
while ((F->p_2077 != NULL)) {
F->q_2078 = ({ R2002 *cell2085 = rt_alloc(sizeof(R2002)); *cell2085 = cp_R2002(({ R2002 ag2086; ag2086.name_ = (*(P2001)rt_nil_check(F->p_2077)).name_; ag2086.mode_ = G_NV((*(P2001)rt_nil_check(F->p_2077)).mode_); ag2086.t_ = (*(P2001)rt_nil_check(F->p_2077)).t_; ag2086.c_ = (*(P2001)rt_nil_check(F->p_2077)).c_; ag2086.cfield_ = (*(P2001)rt_nil_check(F->p_2077)).cfield_; ag2086.dflt_ = (*(P2001)rt_nil_check(F->p_2077)).dflt_; ag2086.next_ = NULL; ag2086.dsym_ = (*(P2001)rt_nil_check(F->p_2077)).dsym_; ag2086; })); (P2001)cell2085; });
if (f_same_463(F->up, (*(P2001)rt_nil_check(F->q_2078)).t_, F->parent_552)) {
(*(P2001)rt_nil_check(F->q_2078)).t_ = F->t_553;
}
if ((F->tail_2079 == NULL)) {
(*(P118)rt_nil_check(F->z_2076)).params_ = F->q_2078;
} else {
(*(P2001)rt_nil_check(F->tail_2079)).next_ = F->q_2078;
}
F->tail_2079 = F->q_2078;
F->p_2077 = (*(P2001)rt_nil_check(F->p_2077)).next_;
}
L_end_2084: ;
if (f_same_463(F->up, (*(P118)rt_nil_check(F->z_2076)).result_, F->parent_552)) {
(*(P118)rt_nil_check(F->z_2076)).result_ = F->t_553;
}
(*(P118)rt_nil_check(F->z_2076)).chain_ = F->news_2081;
F->news_2081 = F->z_2076;
}
}
F->s_2075 = (*(P118)rt_nil_check(F->s_2075)).stack_;
}
L_end_2082: ;
while ((F->news_2081 != NULL)) {
F->z_2076 = F->news_2081;
F->news_2081 = (*(P118)rt_nil_check(F->news_2081)).chain_;
(*(P118)rt_nil_check(F->z_2076)).chain_ = NULL;
f_define_486(F->up, F->z_2076, F->line_554);
}
L_end_2087: ;
ret_:

  return;
}

static void f_derive_literals_558(struct f_greenc_1fr *up_, P123 t_556, rt_int line_557) {
  struct f_derive_literals_558fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_556 = t_556;
F->line_557 = line_557;
F->l_2088 = NULL;
F->l_2088 = (*(P123)rt_nil_check(F->t_556)).lits_;
F->n_2089 = INT64_MIN;
F->n_2089 = ((rt_int)0LL);
F->y_2090 = NULL;
while ((F->l_2088 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->l_2088)).kind_) == ((rt_int)5LL))) {
F->y_2090 = f_new_sym_491(F->up, ((rt_int)7LL), (*(P175)rt_nil_check(F->l_2088)).name_);
(*(P118)rt_nil_check(F->y_2090)).t_ = F->t_556;
(*(P118)rt_nil_check(F->y_2090)).result_ = F->t_556;
(*(P118)rt_nil_check(F->y_2090)).mvalue_ = G_NV(F->n_2089);
(*(P118)rt_nil_check(F->y_2090)).hasmv_ = 1;
f_define_486(F->up, F->y_2090, F->line_557);
}
F->n_2089 = rt_add(G_NV(F->n_2089), ((rt_int)1LL));
F->l_2088 = (*(P175)rt_nil_check(F->l_2088)).next_;
}
L_end_2091: ;
ret_:

  return;
}

static void f_type_definition_563(struct f_greenc_1fr *up_, P175 d_559, P141 name_560, P123 *t_561, P179 *c_562) {
  struct f_type_definition_563fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_559 = d_559;
F->name_560 = name_560;
F->t_561 = t_561;
F->c_562 = c_562;
F->dummy_2092 = NULL;
F->it_2093 = NULL;
F->ic_2094 = NULL;
F->l_2095 = NULL;
F->comp_2096 = NULL;
F->f_2097 = NULL;
F->tail_2098 = NULL;
F->ok_2099 = INT_MIN;
F->n_2100 = INT64_MIN;
F->y_2101 = NULL;
(*F->c_562) = f_new_cons_494(F->up);
{ rt_int sel2102 = G_NV((*(P175)rt_nil_check(F->d_559)).kind_);
if (0 || sel2102 == ((rt_int)70LL)) {
f_fresh_typ_551(F->up, ((rt_int)4LL), F->name_560, &(*F->t_561));
(*(P123)rt_nil_check((*F->t_561))).lits_ = (*(P175)rt_nil_check(F->d_559)).a_;
F->l_2095 = (*(P175)rt_nil_check(F->d_559)).a_;
F->n_2100 = ((rt_int)0LL);
while ((F->l_2095 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->l_2095)).kind_) == ((rt_int)5LL))) {
F->y_2101 = f_new_sym_491(F->up, ((rt_int)7LL), (*(P175)rt_nil_check(F->l_2095)).name_);
(*(P118)rt_nil_check(F->y_2101)).t_ = (*F->t_561);
(*(P118)rt_nil_check(F->y_2101)).result_ = (*F->t_561);
(*(P118)rt_nil_check(F->y_2101)).mvalue_ = G_NV(F->n_2100);
(*(P118)rt_nil_check(F->y_2101)).hasmv_ = 1;
f_define_486(F->up, F->y_2101, G_NV((*(P175)rt_nil_check(F->l_2095)).line_));
}
F->n_2100 = rt_add(G_NV(F->n_2100), ((rt_int)1LL));
F->l_2095 = (*(P175)rt_nil_check(F->l_2095)).next_;
}
L_end_2103: ;
(*(P179)rt_nil_check((*F->c_562))).lo_ = f_mk_246(F->up, rt_g_lit("0", 1));
(*(P179)rt_nil_check((*F->c_562))).hi_ = f_mk_246(F->up, rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->n_2100), ((rt_int)1LL)))));
(*(P179)rt_nil_check((*F->c_562))).mlo_ = ((rt_int)0LL);
(*(P179)rt_nil_check((*F->c_562))).mhi_ = rt_sub(G_NV(F->n_2100), ((rt_int)1LL));
(*(P179)rt_nil_check((*F->c_562))).hasm_ = 1;
} else if (0 || sel2102 == ((rt_int)71LL)) {
f_fresh_typ_551(F->up, ((rt_int)1LL), F->name_560, &(*F->t_561));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->d_559)).a_, F->up->ty_int_157, &F->dummy_2092, &(*(P179)rt_nil_check((*F->c_562))).lo_);
if ((G_NV((*(P123)rt_nil_check(F->dummy_2092)).kind_) != ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_559)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->d_559)).b_, F->up->ty_int_157, &F->dummy_2092, &(*(P179)rt_nil_check((*F->c_562))).hi_);
if ((G_NV((*(P123)rt_nil_check(F->dummy_2092)).kind_) != ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_559)).line_), rt_g_lit("the bounds of an integer type are integers (RM79 3.5.4)", 55));
}
f_manifest_525(F->up, (*(P175)rt_nil_check(F->d_559)).a_, &(*(P179)rt_nil_check((*F->c_562))).mlo_, &F->ok_2099);
 (void)rt_range(F->ok_2099, 0, 1);
(*(P179)rt_nil_check((*F->c_562))).hasm_ = G_NV(F->ok_2099);
f_manifest_525(F->up, (*(P175)rt_nil_check(F->d_559)).b_, &(*(P179)rt_nil_check((*F->c_562))).mhi_, &F->ok_2099);
 (void)rt_range(F->ok_2099, 0, 1);
(*(P179)rt_nil_check((*F->c_562))).hasm_ = (G_NV((*(P179)rt_nil_check((*F->c_562))).hasm_) && G_NV(F->ok_2099));
(*(P123)rt_nil_check((*F->t_561))).parent_ = F->up->ty_int_157;
(*(P123)rt_nil_check((*F->t_561))).tcons_ = (*F->c_562);
if ((G_NV((*(P179)rt_nil_check((*F->c_562))).hasm_) && ((G_NV((*(P179)rt_nil_check((*F->c_562))).mlo_) >= rt_neg(((rt_int)2147483648LL))) && (G_NV((*(P179)rt_nil_check((*F->c_562))).mhi_) <= ((rt_int)2147483647LL))))) {
(*(P123)rt_nil_check((*F->t_561))).parent_ = F->up->ty_short_168;
}
f_inherit_555(F->up, (*(P123)rt_nil_check((*F->t_561))).parent_, (*F->t_561), G_NV((*(P175)rt_nil_check(F->d_559)).line_));
} else if (0 || sel2102 == ((rt_int)72LL)) {
f_real_type_627(F->up, F->d_559, F->name_560, &(*F->t_561), &(*F->c_562));
} else if (0 || sel2102 == ((rt_int)73LL)) {
f_array_type_570(F->up, (*(P175)rt_nil_check(F->d_559)).a_, (*(P175)rt_nil_check(F->d_559)).b_, F->name_560, G_NV((*(P175)rt_nil_check(F->d_559)).line_), &(*F->t_561), &(*F->c_562));
} else if (0 || sel2102 == ((rt_int)74LL)) {
f_fresh_typ_551(F->up, ((rt_int)7LL), F->name_560, &(*F->t_561));
F->up->disc_syms_183 = NULL;
f_record_components_608(F->up, (*(P175)rt_nil_check(F->d_559)).a_, (*F->t_561), NULL, G_NV((*(P175)rt_nil_check(F->d_559)).line_));
while ((F->up->disc_syms_183 != NULL)) {
f_remove_sym_603(F->up, F->up->disc_syms_183);
F->up->disc_syms_183 = (*(P118)rt_nil_check(F->up->disc_syms_183)).mnext_;
}
L_end_2104: ;
} else if (0 || sel2102 == ((rt_int)75LL)) {
f_fresh_typ_551(F->up, ((rt_int)8LL), F->name_560, &(*F->t_561));
(*(P123)rt_nil_check((*F->t_561))).decl_ = (*(P175)rt_nil_check(F->d_559)).a_;
if (((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->d_559)).a_)).kind_) == ((rt_int)80LL)) && (f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->d_559)).a_)).name_))) != NULL)) && (G_NV((*(P118)rt_nil_check(f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->d_559)).a_)).name_))))).kind_) == ((rt_int)5LL))) && ((*(P118)rt_nil_check(f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->d_559)).a_)).name_))))).t_ != NULL))) {
f_finish_ptr_629(F->up, (*F->t_561));
}
} else if (0 || sel2102 == ((rt_int)76LL)) {
f_derived_type_622(F->up, F->d_559, F->name_560, &(*F->t_561), &(*F->c_562));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_559)).line_), rt_g_lit("this type definition is not handled", 35));
}
}
ret_:

  return;
}

static void f_array_type_570(struct f_greenc_1fr *up_, P175 idx_564, P175 comp_565, P141 name_566, rt_int line_567, P123 *t_568, P179 *c_569) {
  struct f_array_type_570fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->idx_564 = idx_564;
F->comp_565 = comp_565;
F->name_566 = name_566;
F->line_567 = line_567;
F->t_568 = t_568;
F->c_569 = c_569;
F->l_2105 = NULL;
F->l_2105 = F->idx_564;
F->rowc_2106 = NULL;
F->ic_2107 = NULL;
F->it_2108 = NULL;
(*F->c_569) = f_new_cons_494(F->up);
f_fresh_typ_551(F->up, ((rt_int)6LL), F->name_566, &(*F->t_568));
(*(P123)rt_nil_check((*F->t_568))).dims_ = f_list_len_326(F->up, F->idx_564);
if (((*(P175)rt_nil_check(F->idx_564)).next_ == NULL)) {
f_resolve_529(F->up, F->comp_565, &(*(P123)rt_nil_check((*F->t_568))).elem_, &(*(P123)rt_nil_check((*F->t_568))).elemcons_);
} else {
if (((G_NV((*(P175)rt_nil_check(F->idx_564)).kind_) == ((rt_int)14LL)) != (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->idx_564)).next_)).kind_) == ((rt_int)14LL)))) {
f_fail_267(F->up, F->line_567, rt_g_lit("the indexes of an array are all discrete ranges or all type marks (RM79 3.6)", 76));
}
f_array_type_570(F->up, (*(P175)rt_nil_check(F->idx_564)).next_, F->comp_565, NULL, F->line_567, &(*(P123)rt_nil_check((*F->t_568))).elem_, &F->rowc_2106);
if (((*(P179)rt_nil_check(F->rowc_2106)).lo_ != NULL)) {
(*(P123)rt_nil_check((*F->t_568))).elemcons_ = F->rowc_2106;
}
}
if ((G_NV((*(P175)rt_nil_check(F->l_2105)).kind_) == ((rt_int)14LL))) {
f_discrete_bounds_543(F->up, F->l_2105, NULL, &(*(P123)rt_nil_check((*F->t_568))).idx_, &(*(P179)rt_nil_check((*F->c_569))).lo_, &(*(P179)rt_nil_check((*F->c_569))).hi_);
f_static_range_574(F->up, (*(P175)rt_nil_check(F->l_2105)).a_, (*(P175)rt_nil_check(F->l_2105)).b_, (*F->c_569));
} else if (((G_NV((*(P175)rt_nil_check(F->l_2105)).kind_) == ((rt_int)80LL)) && (G_NV((*(P175)rt_nil_check(F->l_2105)).flag_) == ((rt_int)1LL)))) {
f_discrete_bounds_543(F->up, F->l_2105, NULL, &(*(P123)rt_nil_check((*F->t_568))).idx_, &(*(P179)rt_nil_check((*F->c_569))).lo_, &(*(P179)rt_nil_check((*F->c_569))).hi_);
} else {
f_resolve_529(F->up, F->l_2105, &(*(P123)rt_nil_check((*F->t_568))).idx_, &F->ic_2107);
if (((((G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check((*F->t_568))).idx_)).kind_) == ((rt_int)4LL)) || (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check((*F->t_568))).idx_)).kind_) == ((rt_int)11LL))) || (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check((*F->t_568))).idx_)).kind_) == ((rt_int)2LL))) || (G_NV((*(P179)rt_nil_check(F->ic_2107)).hasm_) && ((rt_sub(G_NV((*(P179)rt_nil_check(F->ic_2107)).mhi_), G_NV((*(P179)rt_nil_check(F->ic_2107)).mlo_)) >= ((rt_int)0LL)) && (rt_sub(G_NV((*(P179)rt_nil_check(F->ic_2107)).mhi_), G_NV((*(P179)rt_nil_check(F->ic_2107)).mlo_)) < ((rt_int)1000000LL)))))) {
(*(P179)rt_nil_check((*F->c_569))).lo_ = (*(P179)rt_nil_check(F->ic_2107)).lo_;
(*(P179)rt_nil_check((*F->c_569))).hi_ = (*(P179)rt_nil_check(F->ic_2107)).hi_;
(*(P179)rt_nil_check((*F->c_569))).mlo_ = G_NV((*(P179)rt_nil_check(F->ic_2107)).mlo_);
(*(P179)rt_nil_check((*F->c_569))).mhi_ = G_NV((*(P179)rt_nil_check(F->ic_2107)).mhi_);
(*(P179)rt_nil_check((*F->c_569))).hasm_ = G_NV((*(P179)rt_nil_check(F->ic_2107)).hasm_);
} else if (((*(P179)rt_nil_check(F->ic_2107)).lo_ != NULL)) {
(*(P123)rt_nil_check((*F->t_568))).tcons_ = f_new_cons_494(F->up);
(*(P179)rt_nil_check((*(P123)rt_nil_check((*F->t_568))).tcons_)).lo_ = (*(P179)rt_nil_check(F->ic_2107)).lo_;
}
}
if ((!f_is_discrete_474(F->up, (*(P123)rt_nil_check((*F->t_568))).idx_))) {
f_fail_267(F->up, F->line_567, rt_g_lit("an index is of a discrete type (RM79 3.6)", 41));
}
if ((G_NV((*(P123)rt_nil_check((*F->t_568))).dims_) > ((rt_int)1LL))) {
(*(P179)rt_nil_check((*F->c_569))).inner_ = F->rowc_2106;
if ((((*(P179)rt_nil_check((*F->c_569))).lo_ == NULL) != ((*(P179)rt_nil_check(F->rowc_2106)).lo_ == NULL))) {
(*(P179)rt_nil_check((*F->c_569))).lo_ = NULL;
(*(P179)rt_nil_check((*F->c_569))).hi_ = NULL;
(*(P179)rt_nil_check((*F->c_569))).inner_ = NULL;
(*(P123)rt_nil_check((*F->t_568))).elemcons_ = NULL;
}
}
if (((*(P179)rt_nil_check((*F->c_569))).lo_ != NULL)) {
(*(P123)rt_nil_check((*F->t_568))).tcons_ = (*F->c_569);
}
ret_:

  return;
}

static void f_static_range_574(struct f_greenc_1fr *up_, P175 l_571, P175 h_572, P179 c_573) {
  struct f_static_range_574fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_571 = l_571;
F->h_572 = h_572;
F->c_573 = c_573;
F->ok_2109 = INT_MIN;
F->ok2_2110 = INT_MIN;
f_manifest_525(F->up, F->l_571, &(*(P179)rt_nil_check(F->c_573)).mlo_, &F->ok_2109);
 (void)rt_range(F->ok_2109, 0, 1);
f_manifest_525(F->up, F->h_572, &(*(P179)rt_nil_check(F->c_573)).mhi_, &F->ok2_2110);
 (void)rt_range(F->ok2_2110, 0, 1);
if ((f_is_char_lit_831(F->up, F->l_571) && f_is_char_lit_831(F->up, F->h_572))) {
(*(P179)rt_nil_check(F->c_573)).mlo_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2111 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->l_571)).name_)); ix2111.p[rt_index(((rt_int)1LL), ix2111.lo, ix2111.hi) - ix2111.lo]; }))) + 1), ((rt_int)1LL));
(*(P179)rt_nil_check(F->c_573)).mhi_ = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2112 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->h_572)).name_)); ix2112.p[rt_index(((rt_int)1LL), ix2112.lo, ix2112.hi) - ix2112.lo]; }))) + 1), ((rt_int)1LL));
F->ok_2109 = 1;
F->ok2_2110 = 1;
}
(*(P179)rt_nil_check(F->c_573)).hasm_ = (G_NV(F->ok_2109) && G_NV(F->ok2_2110));
ret_:

  return;
}

static void f_component_place_580(struct f_greenc_1fr *up_, P123 rt_575, P2019 f_576, rt_gstr a_577, rt_gstr ct_578, P141 *r_579) {
  struct f_component_place_580fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_575 = rt_575;
F->f_576 = f_576;
F->a_577 = cp_rt_gstr(a_577);
F->ct_578 = cp_rt_gstr(ct_578);
F->r_579 = r_579;
F->bits_2113 = NULL;
F->p_2114 = NULL;
F->p_2114 = f_rep_of_1347(F->up, F->rt_575);
F->pl_2117 = NULL;
if ((F->p_2114 != NULL)) {
F->pl_2117 = (*(P218)rt_nil_check(F->p_2114)).layout_;
}
while (((F->pl_2117 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2115)rt_nil_check(F->pl_2117)).name_)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_576)).name_)))))) {
F->pl_2117 = (*(P2115)rt_nil_check(F->pl_2117)).next_;
}
L_end_2118: ;
if ((F->pl_2117 != NULL)) {
if (eq_rt_gstr(F->a_577, rt_g_lit("POSITION", 8))) {
(*F->r_579) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P2115)rt_nil_check(F->pl_2117)).unit_)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_577, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_579) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P2115)rt_nil_check(F->pl_2117)).first_bit_)))), one_rt_gstr(41)));
} else {
(*F->r_579) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P2115)rt_nil_check(F->pl_2117)).last_bit_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_577, rt_g_lit("POSITION", 8))) {
(*F->r_579) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)offsetof(", 18), F->ct_578), rt_g_lit(", ", 2)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_576)).name_)))), rt_g_lit("))", 2)));
} else if (eq_rt_gstr(F->a_577, rt_g_lit("FIRST_BIT", 9))) {
(*F->r_579) = f_mk_246(F->up, rt_g_lit("((rt_int)0)", 11));
} else {
(*F->r_579) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(((", 19), F->ct_578), rt_g_lit(" *)0)->", 7)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_576)).name_)))), rt_g_lit(") * 8 - 1))", 11)));
}
ret_:

  return;
}

static rt_gstr f_no_value_582(struct f_greenc_1fr *up_, P123 t_581) {
  struct f_no_value_582fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_581 = t_581;
if (((G_NV((*(P123)rt_nil_check(F->t_581)).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check(F->t_581)).kind_) == ((rt_int)16LL)))) {
F->result_ = rt_g_lit("RT_G_NOVALUE_F", 14);
goto ret_;
} else if ((G_NV((*(P123)rt_nil_check(F->t_581)).kind_) == ((rt_int)1LL))) {
F->result_ = rt_g_lit("INT64_MIN", 9);
goto ret_;
}
F->result_ = rt_g_lit("INT_MIN", 7);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_restricted_here_584(struct f_greenc_1fr *up_, P123 t_583) {
  struct f_restricted_here_584fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_583 = t_583;
if ((!G_NV((*(P123)rt_nil_check(F->t_583)).is_restricted_))) {
F->result_ = 0;
goto ret_;
} else if (((*(P123)rt_nil_check(F->t_583)).view_of_ != NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (!f_inside_package_1099(F->up, (*(P123)rt_nil_check(F->t_583)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_elem_ctype_587(struct f_greenc_1fr *up_, P123 t_585, P141 *r_586) {
  struct f_elem_ctype_587fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_585 = t_585;
F->r_586 = r_586;
if ((G_NV((*(P123)rt_nil_check(F->t_585)).kind_) == ((rt_int)11LL))) {
(*F->r_586) = f_mk_246(F->up, rt_g_lit("unsigned char", 13));
} else {
f_ctype_513(F->up, F->t_585, &(*F->r_586));
}
ret_:

  return;
}

static void f_first_index_590(struct f_greenc_1fr *up_, P123 t_588, P141 *r_589) {
  struct f_first_index_590fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_588 = t_588;
F->r_589 = r_589;
if ((((*(P123)rt_nil_check(F->t_588)).tcons_ != NULL) && ((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_588)).tcons_)).lo_ != NULL))) {
(*F->r_589) = (*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_588)).tcons_)).lo_;
} else if ((((*(P123)rt_nil_check(F->t_588)).idx_ != NULL) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_588)).idx_)).kind_) == ((rt_int)1LL)))) {
(*F->r_589) = f_mk_246(F->up, rt_g_lit("1", 1));
} else {
(*F->r_589) = f_mk_246(F->up, rt_g_lit("0", 1));
}
ret_:

  return;
}

static int f_is_string_592(struct f_greenc_1fr *up_, P123 t_591) {
  struct f_is_string_592fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_591 = t_591;
if ((!(F->t_591 != NULL))) {
F->result_ = 0;
goto ret_;
}
if ((!(G_NV((*(P123)rt_nil_check(F->t_591)).kind_) == ((rt_int)6LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_derived_from_470(F->up, F->t_591, F->up->ty_string_161);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_subst_595(struct f_greenc_1fr *up_, rt_gstr s_593, rt_gstr r_594) {
  struct f_subst_595fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_593 = cp_rt_gstr(s_593);
F->r_594 = cp_rt_gstr(r_594);
{ rt_int lo2123 = ({ rt_gstr at2120 = F->s_593; at2120.lo; }), hi2124 = rt_sub(({ rt_gstr at2121 = F->s_593; at2121.hi; }), ((rt_int)1LL));
for (rt_int it2125 = lo2123; it2125 <= hi2124; it2125++) {
F->i_2122 = it2125;
if (((G_NV(({ rt_gstr ix2126 = F->s_593; ix2126.p[rt_index(F->i_2122, ix2126.lo, ix2126.hi) - ix2126.lo]; })) == 64) && (G_NV(({ rt_gstr ix2127 = F->s_593; ix2127.p[rt_index(rt_add(F->i_2122, ((rt_int)1LL)), ix2127.lo, ix2127.hi) - ix2127.lo]; })) == 64))) {
F->result_ = cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl2129 = F->s_593; rt_int l_ = ({ rt_gstr at2128 = F->s_593; at2128.lo; }), h_ = rt_sub(F->i_2122, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2129.lo, sl2129.hi); rt_index(h_, sl2129.lo, sl2129.hi); } sl2129.p += l_ - sl2129.lo; sl2129.lo = l_; sl2129.hi = h_; sl2129; }), F->r_594), f_subst_595(F->up, ({ rt_gstr sl2133 = F->s_593; rt_int l_ = rt_add(F->i_2122, ((rt_int)2LL)), h_ = ({ rt_gstr at2132 = F->s_593; at2132.hi; }); if (l_ <= h_) { rt_index(l_, sl2133.lo, sl2133.hi); rt_index(h_, sl2133.lo, sl2133.hi); } sl2133.p += l_ - sl2133.lo; sl2133.lo = l_; sl2133.hi = h_; sl2133; }), F->r_594));
goto ret_;
}
}
}
L_end_2119: ;
F->result_ = F->s_593;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_record_597(struct f_greenc_1fr *up_, P141 s_596) {
  struct f_mentions_record_597fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_596 = s_596;
if ((F->s_596 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo2137 = ((rt_int)1LL), hi2138 = rt_sub(({ rt_gstr at2135 = (*(P141)rt_nil_check(F->s_596)); at2135.hi >= at2135.lo ? at2135.hi - at2135.lo + 1 : (rt_int)0; }), ((rt_int)1LL));
for (rt_int it2139 = lo2137; it2139 <= hi2138; it2139++) {
F->i_2136 = it2139;
if (((G_NV(({ rt_gstr ix2140 = (*(P141)rt_nil_check(F->s_596)); ix2140.p[rt_index(F->i_2136, ix2140.lo, ix2140.hi) - ix2140.lo]; })) == 64) && (G_NV(({ rt_gstr ix2141 = (*(P141)rt_nil_check(F->s_596)); ix2141.p[rt_index(rt_add(F->i_2136, ((rt_int)1LL)), ix2141.lo, ix2141.hi) - ix2141.lo]; })) == 64))) {
F->result_ = 1;
goto ret_;
}
}
}
L_end_2134: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_subst_cons_601(struct f_greenc_1fr *up_, P179 c_598, rt_gstr r_599, P179 *res_600) {
  struct f_subst_cons_601fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->c_598 = c_598;
F->r_599 = cp_rt_gstr(r_599);
F->res_600 = res_600;
if (((F->c_598 == NULL) || (!(f_mentions_record_597(F->up, (*(P179)rt_nil_check(F->c_598)).lo_) || f_mentions_record_597(F->up, (*(P179)rt_nil_check(F->c_598)).hi_))))) {
(*F->res_600) = F->c_598;
goto ret_;
}
(*F->res_600) = f_new_cons_494(F->up);
as_R180(&(*(P179)rt_nil_check((*F->res_600))), (*(P179)rt_nil_check(F->c_598)));
(*(P179)rt_nil_check((*F->res_600))).lo_ = f_mk_246(F->up, f_subst_595(F->up, (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_598)).lo_)), F->r_599));
(*(P179)rt_nil_check((*F->res_600))).hi_ = f_mk_246(F->up, f_subst_595(F->up, (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_598)).hi_)), F->r_599));
ret_:

  return;
}

static void f_remove_sym_603(struct f_greenc_1fr *up_, P118 y_602) {
  struct f_remove_sym_603fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_602 = y_602;
F->h_2142 = INT64_MIN;
F->h_2142 = f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_602)).name_)));
F->p_2143 = NULL;
if ((({ A117 ix2144 = F->up->table_120; ix2144.p[rt_index(G_NV(F->h_2142), ix2144.lo, ix2144.hi) - ix2144.lo]; }) == F->y_602)) {
(*({ A117 *ix2145 = &(F->up->table_120); &ix2145->p[rt_index(G_NV(F->h_2142), ix2145->lo, ix2145->hi) - ix2145->lo]; })) = (*(P118)rt_nil_check(F->y_602)).chain_;
} else {
F->p_2143 = ({ A117 ix2146 = F->up->table_120; ix2146.p[rt_index(G_NV(F->h_2142), ix2146.lo, ix2146.hi) - ix2146.lo]; });
while (((F->p_2143 != NULL) && ((*(P118)rt_nil_check(F->p_2143)).chain_ != F->y_602))) {
F->p_2143 = (*(P118)rt_nil_check(F->p_2143)).chain_;
}
L_end_2147: ;
if ((F->p_2143 != NULL)) {
(*(P118)rt_nil_check(F->p_2143)).chain_ = (*(P118)rt_nil_check(F->y_602)).chain_;
}
}
if ((F->up->scope_stack_122 == F->y_602)) {
F->up->scope_stack_122 = (*(P118)rt_nil_check(F->y_602)).stack_;
} else {
F->p_2143 = F->up->scope_stack_122;
while (((F->p_2143 != NULL) && ((*(P118)rt_nil_check(F->p_2143)).stack_ != F->y_602))) {
F->p_2143 = (*(P118)rt_nil_check(F->p_2143)).stack_;
}
L_end_2148: ;
if ((F->p_2143 != NULL)) {
(*(P118)rt_nil_check(F->p_2143)).stack_ = (*(P118)rt_nil_check(F->y_602)).stack_;
}
}
ret_:

  return;
}

static void f_record_components_608(struct f_greenc_1fr *up_, P175 list_604, P123 t_605, P2149 g_606, rt_int line_607) {
  struct f_record_components_608fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->list_604 = list_604;
F->t_605 = t_605;
F->g_606 = g_606;
F->line_607 = line_607;
F->comp_2151 = NULL;
F->comp_2151 = F->list_604;
F->f_2152 = NULL;
F->tail_2153 = NULL;
F->df_2154 = NULL;
F->prev_2155 = NULL;
F->pt_2156 = NULL;
F->vt_2157 = NULL;
F->pc_2158 = NULL;
F->y_2159 = NULL;
F->acc_2160 = NULL;
F->v_2161 = NULL;
F->x_2162 = NULL;
F->arm_2163 = NULL;
F->g2_2164 = NULL;
F->tail_2153 = (*(P123)rt_nil_check(F->t_605)).fields_;
while (((F->tail_2153 != NULL) && ((*(P2019)rt_nil_check(F->tail_2153)).next_ != NULL))) {
F->tail_2153 = (*(P2019)rt_nil_check(F->tail_2153)).next_;
}
L_end_2165: ;
while ((F->comp_2151 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->comp_2151)).kind_) == ((rt_int)23LL))) {
F->df_2154 = (*(P123)rt_nil_check(F->t_605)).fields_;
while (((F->df_2154 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->df_2154)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->comp_2151)).a_)).name_)))))) {
F->df_2154 = (*(P2019)rt_nil_check(F->df_2154)).next_;
}
L_end_2167: ;
if (((F->df_2154 == NULL) || (!G_NV((*(P2019)rt_nil_check(F->df_2154)).is_discr_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_), cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->comp_2151)).a_)).name_)), rt_g_lit(" is not a discriminant: a constant component ", 45)), rt_g_lit("without a value (RM79 3.7.1)", 28)));
}
if ((!f_is_discrete_474(F->up, (*(P2019)rt_nil_check(F->df_2154)).t_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_), rt_g_lit("the discriminant of a variant part is of a discrete type (RM79 3.7.2)", 69));
}
F->arm_2163 = (*(P175)rt_nil_check(F->comp_2151)).b_;
while ((F->arm_2163 != NULL)) {
F->g2_2164 = ({ R2150 *cell2169 = rt_alloc(sizeof(R2150)); *cell2169 = cp_R2150(({ R2150 ag2170; ag2170.disc_ = (*(P2019)rt_nil_check(F->df_2154)).name_; ag2170.arm_ = F->arm_2163; ag2170.variant_ = F->comp_2151; ag2170.next_ = F->g_606; ag2170; })); (P2149)cell2169; });
f_record_components_608(F->up, (*(P175)rt_nil_check(F->arm_2163)).b_, F->t_605, F->g2_2164, F->line_607);
F->arm_2163 = (*(P175)rt_nil_check(F->arm_2163)).next_;
}
L_end_2168: ;
F->tail_2153 = (*(P123)rt_nil_check(F->t_605)).fields_;
while (((F->tail_2153 != NULL) && ((*(P2019)rt_nil_check(F->tail_2153)).next_ != NULL))) {
F->tail_2153 = (*(P2019)rt_nil_check(F->tail_2153)).next_;
}
L_end_2171: ;
} else {
if ((f_field_index_1025(F->up, F->t_605, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->comp_2151)).name_))) != ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->comp_2151)).name_))), rt_g_lit(" is declared twice (RM79 3.7)", 29)));
}
F->f_2152 = ({ R2020 *cell2172 = rt_alloc(sizeof(R2020)); *cell2172 = cp_R2020(({ R2020 ag2173; ag2173.name_ = (*(P175)rt_nil_check(F->comp_2151)).name_; ag2173.t_ = NULL; ag2173.c_ = NULL; ag2173.next_ = NULL; ag2173.dflt_ = (*(P175)rt_nil_check(F->comp_2151)).b_; ag2173.is_const_ = (G_NV((*(P175)rt_nil_check(F->comp_2151)).flag_) == ((rt_int)1LL)); ag2173.is_discr_ = 0; ag2173.dsym_ = NULL; ag2173.guard_ = F->g_606; ag2173.cond_ = NULL; ag2173.dyn_ = 0; ag2173; })); (P2019)cell2172; });
if ((((*(P175)rt_nil_check(F->comp_2151)).a_ == F->prev_2155) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->comp_2151)).a_)).kind_) != ((rt_int)80LL)))) {
(*(P2019)rt_nil_check(F->f_2152)).t_ = F->pt_2156;
(*(P2019)rt_nil_check(F->f_2152)).c_ = F->pc_2158;
} else {
f_resolve_529(F->up, (*(P175)rt_nil_check(F->comp_2151)).a_, &(*(P2019)rt_nil_check(F->f_2152)).t_, &(*(P2019)rt_nil_check(F->f_2152)).c_);
}
F->prev_2155 = (*(P175)rt_nil_check(F->comp_2151)).a_;
F->pt_2156 = (*(P2019)rt_nil_check(F->f_2152)).t_;
F->pc_2158 = (*(P2019)rt_nil_check(F->f_2152)).c_;
if ((((*(P2019)rt_nil_check(F->f_2152)).c_ != NULL) && (f_mentions_record_597(F->up, (*(P179)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).c_)).lo_) || f_mentions_record_597(F->up, (*(P179)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).c_)).hi_)))) {
(*(P2019)rt_nil_check(F->f_2152)).dyn_ = 1;
if ((G_NV((*(P123)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).t_)).kind_) != ((rt_int)6LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_), rt_g_lit("a discriminant is used only as an array bound or a variant selector (RM79 3.7.1)", 80));
}
if (((*(P123)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).t_)).tcons_ == (*(P2019)rt_nil_check(F->f_2152)).c_)) {
(*(P123)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).t_)).tcons_ = NULL;
}
}
if ((F->g_606 != NULL)) {
f_guard_cond_612(F->up, F->g_606, (*(P2019)rt_nil_check(F->f_2152)).t_, &F->x_2162);
(*(P2019)rt_nil_check(F->f_2152)).cond_ = F->x_2162;
}
if (((*(P175)rt_nil_check(F->comp_2151)).b_ != NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->comp_2151)).b_, (*(P2019)rt_nil_check(F->f_2152)).t_, &F->vt_2157, &F->v_2161);
f_check_type_508(F->up, F->vt_2157, (*(P2019)rt_nil_check(F->f_2152)).t_, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_));
F->y_2159 = f_new_sym_491(F->up, ((rt_int)2LL), f_mk_246(F->up, rt_g_lit("dflt", 4)));
f_storage_660(F->up, rt_g_lit("dflt", 4), (*(P2019)rt_nil_check(F->f_2152)).t_, &F->acc_2160);
(*(P118)rt_nil_check(F->y_2159)).t_ = (*(P2019)rt_nil_check(F->f_2152)).t_;
(*(P118)rt_nil_check(F->y_2159)).c_ = (*(P2019)rt_nil_check(F->f_2152)).c_;
f_bind_663(F->up, F->y_2159, F->acc_2160);
if ((f_composite_635(F->up, (*(P2019)rt_nil_check(F->f_2152)).t_) && (!f_bounded_496(F->up, (*(P2019)rt_nil_check(F->f_2152)).c_)))) {
f_copy_code_645(F->up, (*(P2019)rt_nil_check(F->f_2152)).t_, (*(P141)rt_nil_check(F->v_2161)), &F->x_2162);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2160)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2162))), one_rt_gstr(59)));
} else {
f_init_storage_633(F->up, (*(P141)rt_nil_check(F->acc_2160)), (*(P2019)rt_nil_check(F->f_2152)).t_, (*(P2019)rt_nil_check(F->f_2152)).c_);
f_assign_code_641(F->up, (*(P141)rt_nil_check(F->acc_2160)), (*(P2019)rt_nil_check(F->f_2152)).t_, (*(P141)rt_nil_check(F->v_2161)), (*(P2019)rt_nil_check(F->f_2152)).c_, &F->x_2162);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2162)));
}
(*(P2019)rt_nil_check(F->f_2152)).dsym_ = F->y_2159;
} else if (G_NV((*(P2019)rt_nil_check(F->f_2152)).is_const_)) {
(*(P2019)rt_nil_check(F->f_2152)).is_discr_ = 1;
F->y_2159 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P2019)rt_nil_check(F->f_2152)).name_);
(*(P118)rt_nil_check(F->y_2159)).t_ = (*(P2019)rt_nil_check(F->f_2152)).t_;
(*(P118)rt_nil_check(F->y_2159)).c_ = (*(P2019)rt_nil_check(F->f_2152)).c_;
(*(P118)rt_nil_check(F->y_2159)).ro_ = 1;
(*(P118)rt_nil_check(F->y_2159)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2152)).name_)))), one_rt_gstr(41)));
F->up->depth_121 = rt_add(G_NV(F->up->depth_121), ((rt_int)1LL));
f_define_486(F->up, F->y_2159, G_NV((*(P175)rt_nil_check(F->comp_2151)).line_));
F->up->depth_121 = rt_sub(G_NV(F->up->depth_121), ((rt_int)1LL));
(*(P118)rt_nil_check(F->y_2159)).mnext_ = F->up->disc_syms_183;
F->up->disc_syms_183 = F->y_2159;
}
if ((F->tail_2153 == NULL)) {
(*(P123)rt_nil_check(F->t_605)).fields_ = F->f_2152;
} else {
(*(P2019)rt_nil_check(F->tail_2153)).next_ = F->f_2152;
}
F->tail_2153 = F->f_2152;
}
F->comp_2151 = (*(P175)rt_nil_check(F->comp_2151)).next_;
}
L_end_2166: ;
ret_:

  return;
}

static void f_guard_cond_612(struct f_greenc_1fr *up_, P2149 g_609, P123 t_610, P141 *r_611) {
  struct f_guard_cond_612fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->g_609 = g_609;
F->t_610 = t_610;
F->r_611 = r_611;
F->a_2174 = NULL;
F->l_2175 = NULL;
F->df_2176 = NULL;
F->x_2177 = NULL;
F->d_2178 = NULL;
F->dt_2179 = NULL;
F->vt_2180 = NULL;
F->lo_2181 = NULL;
F->hi_2182 = NULL;
(*F->r_611) = f_mk_246(F->up, rt_g_lit("1", 1));
if ((F->g_609 == NULL)) {
goto ret_;
}
F->d_2178 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(@@.", 4), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2149)rt_nil_check(F->g_609)).disc_)))), one_rt_gstr(41)));
F->df_2176 = NULL;
if ((G_NV((*(P175)rt_nil_check((*(P2149)rt_nil_check(F->g_609)).arm_)).flag_) == ((rt_int)1LL))) {
F->x_2177 = f_mk_246(F->up, rt_g_lit("0", 1));
F->a_2174 = (*(P175)rt_nil_check((*(P2149)rt_nil_check(F->g_609)).variant_)).b_;
while ((F->a_2174 != NULL)) {
if ((F->a_2174 != (*(P2149)rt_nil_check(F->g_609)).arm_)) {
f_arm_test_617(F->up, F->a_2174, (*(P2149)rt_nil_check(F->g_609)).disc_, (*(P141)rt_nil_check(F->d_2178)), &F->x_2177);
}
F->a_2174 = (*(P175)rt_nil_check(F->a_2174)).next_;
}
L_end_2183: ;
F->x_2177 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("!(", 2), (*(P141)rt_nil_check(F->x_2177))), one_rt_gstr(41)));
} else {
F->x_2177 = f_mk_246(F->up, rt_g_lit("0", 1));
f_arm_test_617(F->up, (*(P2149)rt_nil_check(F->g_609)).arm_, (*(P2149)rt_nil_check(F->g_609)).disc_, (*(P141)rt_nil_check(F->d_2178)), &F->x_2177);
}
f_guard_cond_612(F->up, (*(P2149)rt_nil_check(F->g_609)).next_, F->t_610, &(*F->r_611));
(*F->r_611) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check((*F->r_611)))), rt_g_lit(" && (", 5)), (*(P141)rt_nil_check(F->x_2177))), rt_g_lit("))", 2)));
ret_:

  return;
}

static void f_arm_test_617(struct f_greenc_1fr *up_, P175 arm_613, P141 dname_614, rt_gstr d_615, P141 *x_616) {
  struct f_arm_test_617fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_613 = arm_613;
F->dname_614 = dname_614;
F->d_615 = cp_rt_gstr(d_615);
F->x_616 = x_616;
F->l_2184 = NULL;
F->l_2184 = (*(P175)rt_nil_check(F->arm_613)).a_;
F->y_2185 = NULL;
F->y_2185 = f_lookup_443(F->up, (*(P141)rt_nil_check(F->dname_614)));
F->dt_2186 = NULL;
F->vt_2187 = NULL;
F->lo_2188 = NULL;
F->hi_2189 = NULL;
F->dt_2186 = (*(P118)rt_nil_check(F->y_2185)).t_;
while ((F->l_2184 != NULL)) {
if (((*(P175)rt_nil_check(F->l_2184)).b_ == NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->l_2184)).a_, F->dt_2186, &F->vt_2187, &F->lo_2188);
f_check_type_508(F->up, F->vt_2187, F->dt_2186, G_NV((*(P175)rt_nil_check(F->l_2184)).line_));
(*F->x_616) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->x_616))), rt_g_lit(" || ", 4)), F->d_615), rt_g_lit(" == ", 4)), (*(P141)rt_nil_check(F->lo_2188))));
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->l_2184)).a_, F->dt_2186, &F->vt_2187, &F->lo_2188);
f_check_type_508(F->up, F->vt_2187, F->dt_2186, G_NV((*(P175)rt_nil_check(F->l_2184)).line_));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->l_2184)).b_, F->dt_2186, &F->vt_2187, &F->hi_2189);
f_check_type_508(F->up, F->vt_2187, F->dt_2186, G_NV((*(P175)rt_nil_check(F->l_2184)).line_));
(*F->x_616) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->x_616))), rt_g_lit(" || (", 5)), F->d_615), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_2188))), rt_g_lit(" && ", 4)), F->d_615), rt_g_lit(" <= ", 4)), (*(P141)rt_nil_check(F->hi_2189))), one_rt_gstr(41)));
}
F->l_2184 = (*(P175)rt_nil_check(F->l_2184)).next_;
}
L_end_2190: ;
ret_:

  return;
}

static void f_derived_type_622(struct f_greenc_1fr *up_, P175 d_618, P141 name_619, P123 *t_620, P179 *c_621) {
  struct f_derived_type_622fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_618 = d_618;
F->name_619 = name_619;
F->t_620 = t_620;
F->c_621 = c_621;
F->pt_2191 = NULL;
F->ct_2192 = NULL;
F->ph_2193 = NULL;
F->ph_2193 = F->up->completing_174;
F->up->completing_174 = NULL;
f_resolve_529(F->up, (*(P175)rt_nil_check(F->d_618)).a_, &F->pt_2191, &(*F->c_621));
if (((G_NV((*(P123)rt_nil_check(F->pt_2191)).kind_) == ((rt_int)9LL)) && G_NV((*(P123)rt_nil_check(F->pt_2191)).priv_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_618)).line_), rt_g_lit("a type cannot be derived from a private type before its full declaration", 72));
}
if ((f_composite_635(F->up, F->pt_2191) || (G_NV((*(P123)rt_nil_check(F->pt_2191)).kind_) == ((rt_int)8LL)))) {
f_ctype_513(F->up, F->pt_2191, &F->ct_2192);
}
if ((F->ph_2193 == NULL)) {
(*F->t_620) = f_new_typ_493(F->up, G_NV((*(P123)rt_nil_check(F->pt_2191)).kind_));
} else {
(*F->t_620) = F->ph_2193;
}
as_R124(&(*(P123)rt_nil_check((*F->t_620))), (*(P123)rt_nil_check(F->pt_2191)));
(*(P123)rt_nil_check((*F->t_620))).name_ = F->name_619;
(*(P123)rt_nil_check((*F->t_620))).parent_ = F->pt_2191;
(*(P123)rt_nil_check((*F->t_620))).next_ = NULL;
if ((G_NV((*(P123)rt_nil_check((*F->t_620))).kind_) == ((rt_int)4LL))) {
f_derive_literals_558(F->up, (*F->t_620), G_NV((*(P175)rt_nil_check(F->d_618)).line_));
}
f_inherit_555(F->up, F->pt_2191, (*F->t_620), G_NV((*(P175)rt_nil_check(F->d_618)).line_));
ret_:

  return;
}

static void f_real_type_627(struct f_greenc_1fr *up_, P175 d_623, P141 name_624, P123 *t_625, P179 *c_626) {
  struct f_real_type_627fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_623 = d_623;
F->name_624 = name_624;
F->t_625 = t_625;
F->c_626 = c_626;
F->dt_2194 = NULL;
F->dv_2195 = NULL;
F->n_2196 = INT64_MIN;
F->ok_2197 = INT_MIN;
(*F->c_626) = f_new_cons_494(F->up);
if ((G_NV((*(P175)rt_nil_check(F->d_623)).flag_) == ((rt_int)1LL))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->d_623)).a_, &F->n_2196, &F->ok_2197);
 (void)rt_range(F->ok_2197, 0, 1);
if ((!G_NV(F->ok_2197))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_623)).line_), rt_g_lit("the digits of a floating point type are static (RM79 3.5.5)", 59));
}
if (((G_NV(F->n_2196) < ((rt_int)1LL)) || (G_NV(F->n_2196) > ((rt_int)15LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_623)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no predefined floating point type has ", 38), rt_g_s2g(rt_str_of_int(G_NV(F->n_2196)))), rt_g_lit(" digits", 7)));
}
f_fresh_typ_551(F->up, ((rt_int)3LL), F->name_624, &(*F->t_625));
(*(P123)rt_nil_check((*F->t_625))).ndigits_ = G_NV(F->n_2196);
if ((G_NV(F->n_2196) <= ((rt_int)6LL))) {
(*(P123)rt_nil_check((*F->t_625))).parent_ = F->up->ty_sfloat_170;
} else {
(*(P123)rt_nil_check((*F->t_625))).parent_ = F->up->ty_float_159;
}
} else {
if (((*(P175)rt_nil_check(F->d_623)).b_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_623)).line_), rt_g_lit("a fixed point type needs a range (RM79 3.5.5)", 45));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->d_623)).a_, F->up->ty_float_159, &F->dt_2194, &F->dv_2195);
if ((G_NV((*(P123)rt_nil_check(F->dt_2194)).kind_) != ((rt_int)3LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_623)).line_), rt_g_lit("the delta of a fixed point type is a real number (RM79 3.5.5)", 61));
}
f_fresh_typ_551(F->up, ((rt_int)16LL), F->name_624, &(*F->t_625));
(*(P123)rt_nil_check((*F->t_625))).fdelta_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->dv_2195))), one_rt_gstr(41)));
(*(P123)rt_nil_check((*F->t_625))).fsmall_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_small(", 11), (*(P141)rt_nil_check(F->dv_2195))), one_rt_gstr(41)));
}
if (((*(P175)rt_nil_check(F->d_623)).b_ != NULL)) {
f_range_of_547(F->up, (*(P175)rt_nil_check(F->d_623)).b_, (*F->t_625), (*F->c_626));
}
if (((*(P123)rt_nil_check((*F->t_625))).parent_ != NULL)) {
f_inherit_555(F->up, (*(P123)rt_nil_check((*F->t_625))).parent_, (*F->t_625), G_NV((*(P175)rt_nil_check(F->d_623)).line_));
}
ret_:

  return;
}

static void f_finish_ptr_629(struct f_greenc_1fr *up_, P123 t_628) {
  struct f_finish_ptr_629fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_628 = t_628;
F->c_2198 = NULL;
if ((((*(P123)rt_nil_check(F->t_628)).target_ == NULL) && ((*(P123)rt_nil_check(F->t_628)).decl_ != NULL))) {
f_resolve_529(F->up, (*(P123)rt_nil_check(F->t_628)).decl_, &(*(P123)rt_nil_check(F->t_628)).target_, &F->c_2198);
if ((((*(P123)rt_nil_check(F->t_628)).target_ != NULL) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_628)).target_)).kind_) == ((rt_int)8LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check((*(P123)rt_nil_check(F->t_628)).decl_)).line_), rt_g_lit("an access type cannot designate another access type (RM79 3.8)", 62));
}
}
ret_:

  return;
}

static void f_init_storage_633(struct f_greenc_1fr *up_, rt_gstr lval_630, P123 t_631, P179 c_632) {
  struct f_init_storage_633fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_630 = cp_rt_gstr(lval_630);
F->t_631 = t_631;
F->c_632 = c_632;
F->ec_2199 = NULL;
F->fc_2200 = NULL;
F->d_2201 = NULL;
F->ct_2202 = NULL;
F->i_2203 = NULL;
F->v_2204 = NULL;
F->x_2205 = NULL;
F->vt_2206 = NULL;
F->f_2207 = NULL;
if ((G_NV((*(P123)rt_nil_check(F->t_631)).kind_) == ((rt_int)8LL))) {
f_emit_273(F->up, cat_rt_gstr(F->lval_630, rt_g_lit(" = NULL;", 8)));
} else if ((f_is_numeric_472(F->up, F->t_631) || f_is_discrete_474(F->up, F->t_631))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(" = ", 3)), f_no_value_582(F->up, F->t_631)), one_rt_gstr(59)));
} else if ((G_NV((*(P123)rt_nil_check(F->t_631)).kind_) == ((rt_int)6LL))) {
if (((F->c_632 == NULL) || ((*(P179)rt_nil_check(F->c_632)).lo_ == NULL))) {
f_fail_267(F->up, ((rt_int)0LL), rt_g_lit("an array object needs an index constraint (RM79 3.6)", 52));
}
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_631)).elem_, &F->ct_2202);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(".lo = ", 6)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_632)).lo_))), rt_g_lit("; ", 2)), F->lval_630), rt_g_lit(".hi = ", 6)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_632)).hi_))), one_rt_gstr(59)));
F->ec_2199 = (*(P123)rt_nil_check(F->t_631)).elemcons_;
if (((G_NV((*(P123)rt_nil_check(F->t_631)).dims_) > ((rt_int)1LL)) && f_bounded_496(F->up, (*(P179)rt_nil_check(F->c_632)).inner_))) {
F->ec_2199 = (*(P179)rt_nil_check(F->c_632)).inner_;
}
if (((G_NV((*(P123)rt_nil_check(F->t_631)).dims_) > ((rt_int)1LL)) && f_bounded_496(F->up, F->ec_2199))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(".lo2 = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->ec_2199)).lo_))), rt_g_lit("; ", 2)), F->lval_630), rt_g_lit(".hi2 = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->ec_2199)).hi_))), one_rt_gstr(59)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(".lo2 = 1; ", 10)), F->lval_630), rt_g_lit(".hi2 = 1;", 9)));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P141)rt_nil_check(F->ct_2202))), rt_g_lit(") * (size_t)G_CNT(", 18)), F->lval_630), rt_g_lit("));", 3)));
if ((f_is_numeric_472(F->up, (*(P123)rt_nil_check(F->t_631)).elem_) || f_is_discrete_474(F->up, (*(P123)rt_nil_check(F->t_631)).elem_))) {
f_new_name_249(F->up, rt_g_lit("i", 1), &F->i_2203);
if ((G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_631)).elem_)).kind_) == ((rt_int)11LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("memset(", 7), F->lval_630), rt_g_lit(".p, 0xFF, (size_t)G_CNT(", 24)), F->lval_630), rt_g_lit("));", 3)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit(" = 0; ", 6)), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit(" < G_CNT(", 9)), F->lval_630), rt_g_lit("); ", 3)), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit("++) ", 4)), F->lval_630), rt_g_lit(".p[", 3)), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit("] = ", 4)), f_no_value_582(F->up, (*(P123)rt_nil_check(F->t_631)).elem_)), one_rt_gstr(59)));
}
} else if (((G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_631)).elem_)).kind_) == ((rt_int)6LL)) || (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_631)).elem_)).kind_) == ((rt_int)7LL)))) {
f_new_name_249(F->up, rt_g_lit("i", 1), &F->i_2203);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit(" = 0; ", 6)), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit(" < G_CNT(", 9)), F->lval_630), rt_g_lit("); ", 3)), (*(P141)rt_nil_check(F->i_2203))), rt_g_lit("++) {", 5)));
f_init_storage_633(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, rt_g_lit(".p[", 3)), (*(P141)rt_nil_check(F->i_2203))), one_rt_gstr(93)), (*(P123)rt_nil_check(F->t_631)).elem_, F->ec_2199);
f_emit_273(F->up, rt_g_lit("}", 1));
}
} else if ((G_NV((*(P123)rt_nil_check(F->t_631)).kind_) == ((rt_int)7LL))) {
if ((F->c_632 != NULL)) {
F->d_2201 = (*(P179)rt_nil_check(F->c_632)).dv_;
while ((F->d_2201 != NULL)) {
F->f_2207 = (*(P123)rt_nil_check(F->t_631)).fields_;
while ((!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)), (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2201)).name_))))) {
F->f_2207 = (*(P2019)rt_nil_check(F->f_2207)).next_;
}
L_end_2209: ;
f_assign_code_641(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_630, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), (*(P2019)rt_nil_check(F->f_2207)).t_, (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2201)).v_)), (*(P2019)rt_nil_check(F->f_2207)).c_, &F->x_2205);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2205)));
F->d_2201 = (*(P2023)rt_nil_check(F->d_2201)).next_;
}
L_end_2208: ;
}
F->f_2207 = (*(P123)rt_nil_check(F->t_631)).fields_;
while ((F->f_2207 != NULL)) {
f_subst_cons_601(F->up, (*(P2019)rt_nil_check(F->f_2207)).c_, F->lval_630, &F->fc_2200);
if ((G_NV((*(P2019)rt_nil_check(F->f_2207)).dyn_) && (!f_discriminated_502(F->up, F->c_632)))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_630, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), rt_g_lit(".lo = 1; ", 9)), F->lval_630), one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), rt_g_lit(".hi = 0; ", 9)), F->lval_630), one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), rt_g_lit(".lo2 = ", 7)), F->lval_630), one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), rt_g_lit(".hi2 = 1; ", 10)), F->lval_630), one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), rt_g_lit(".p = NULL;", 10)));
} else if ((!G_NV((*(P2019)rt_nil_check(F->f_2207)).is_discr_))) {
f_init_storage_633(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_630, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), (*(P2019)rt_nil_check(F->f_2207)).t_, F->fc_2200);
}
if (((*(P2019)rt_nil_check(F->f_2207)).dsym_ != NULL)) {
f_access_of_787(F->up, (*(P2019)rt_nil_check(F->f_2207)).dsym_, &F->v_2204);
f_assign_code_641(F->up, cat_rt_gstr(cat_rt_gstr(F->lval_630, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2207)).name_)))), (*(P2019)rt_nil_check(F->f_2207)).t_, (*(P141)rt_nil_check(F->v_2204)), F->fc_2200, &F->x_2205);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2205)));
}
F->f_2207 = (*(P2019)rt_nil_check(F->f_2207)).next_;
}
L_end_2210: ;
}
ret_:

  return;
}

static int f_composite_635(struct f_greenc_1fr *up_, P123 t_634) {
  struct f_composite_635fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_634 = t_634;
F->result_ = ((G_NV((*(P123)rt_nil_check(F->t_634)).kind_) == ((rt_int)6LL)) || (G_NV((*(P123)rt_nil_check(F->t_634)).kind_) == ((rt_int)7LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_assign_code_641(struct f_greenc_1fr *up_, rt_gstr lval_636, P123 t_637, rt_gstr v_638, P179 c_639, P141 *r_640) {
  struct f_assign_code_641fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lval_636 = cp_rt_gstr(lval_636);
F->t_637 = t_637;
F->v_638 = cp_rt_gstr(v_638);
F->c_639 = c_639;
F->r_640 = r_640;
F->ct_2211 = NULL;
F->x_2212 = NULL;
F->d_2213 = NULL;
if (((G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)7LL)) && f_discriminated_502(F->up, F->c_639))) {
f_ctype_513(F->up, F->t_637, &F->ct_2211);
F->x_2212 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P141)rt_nil_check(F->ct_2211))), rt_g_lit(" dv_ = ", 7)), F->v_638), one_rt_gstr(59)));
F->d_2213 = (*(P179)rt_nil_check(F->c_639)).dv_;
while ((F->d_2213 != NULL)) {
F->x_2212 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_2212)), rt_g_lit(" if (dv_.", 9)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2213)).name_)))), rt_g_lit(" != (", 5)), (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2213)).v_))), rt_g_lit(")) rt_raise(RT_X_TAG);", 22)));
F->d_2213 = (*(P2023)rt_nil_check(F->d_2213)).next_;
}
L_end_2214: ;
(*F->r_640) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_2212)), rt_g_lit(" as_", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_637)).cname_))), rt_g_lit("(&", 2)), F->lval_636), rt_g_lit(", dv_); }", 9)));
} else if (f_composite_635(F->up, F->t_637)) {
f_ctype_513(F->up, F->t_637, &F->ct_2211);
(*F->r_640) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("as_", 3), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_637)).cname_))), rt_g_lit("(&", 2)), F->lval_636), rt_g_lit(", ", 2)), F->v_638), rt_g_lit(");", 2)));
} else if (((((G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)1LL)) || (G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)4LL))) || (G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)11LL))) && f_bounded_496(F->up, F->c_639))) {
(*F->r_640) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_636, rt_g_lit(" = rt_range(", 12)), F->v_638), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_639)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_639)).hi_))), rt_g_lit(");", 2)));
} else if ((((G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check(F->t_637)).kind_) == ((rt_int)16LL))) && f_bounded_496(F->up, F->c_639))) {
(*F->r_640) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_636, rt_g_lit(" = rt_frange(", 13)), F->v_638), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_639)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_639)).hi_))), rt_g_lit(");", 2)));
} else {
(*F->r_640) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lval_636, rt_g_lit(" = ", 3)), F->v_638), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_copy_code_645(struct f_greenc_1fr *up_, P123 t_642, rt_gstr v_643, P141 *r_644) {
  struct f_copy_code_645fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_642 = t_642;
F->v_643 = cp_rt_gstr(v_643);
F->r_644 = r_644;
F->ct_2215 = NULL;
if (f_composite_635(F->up, F->t_642)) {
f_ctype_513(F->up, F->t_642, &F->ct_2215);
(*F->r_644) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cp_", 3), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_642)).cname_))), one_rt_gstr(40)), F->v_643), one_rt_gstr(41)));
} else {
(*F->r_644) = f_mk_246(F->up, F->v_643);
}
ret_:

  return;
}

static void f_eq_code_650(struct f_greenc_1fr *up_, P123 t_646, rt_gstr a_647, rt_gstr b_648, P141 *r_649) {
  struct f_eq_code_650fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_646 = t_646;
F->a_647 = cp_rt_gstr(a_647);
F->b_648 = cp_rt_gstr(b_648);
F->r_649 = r_649;
F->ct_2216 = NULL;
if (f_composite_635(F->up, F->t_646)) {
f_ctype_513(F->up, F->t_646, &F->ct_2216);
(*F->r_649) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("eq_", 3), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_646)).cname_))), one_rt_gstr(40)), F->a_647), rt_g_lit(", ", 2)), F->b_648), one_rt_gstr(41)));
} else {
(*F->r_649) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_647), rt_g_lit(" == ", 4)), F->b_648), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_seen_name_653(struct f_greenc_1fr *up_, P152 l_651, rt_gstr s_652) {
  struct f_seen_name_653fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_651 = l_651;
F->s_652 = cp_rt_gstr(s_652);
F->p_2217 = NULL;
F->p_2217 = F->l_651;
while ((F->p_2217 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P152)rt_nil_check(F->p_2217)).s_)), F->s_652)) {
F->result_ = 1;
goto ret_;
}
F->p_2217 = (*(P152)rt_nil_check(F->p_2217)).next_;
}
L_end_2218: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_emit_helpers_654(struct f_greenc_1fr *up_) {
  struct f_emit_helpers_654fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_2219 = NULL;
F->t_2219 = F->up->all_types_125;
F->et_2220 = NULL;
F->done_2221 = NULL;
F->l_2222 = NULL;
while ((F->t_2219 != NULL)) {
if ((f_composite_635(F->up, F->t_2219) && (!f_seen_name_653(F->up, F->done_2221, (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_)))))) {
F->l_2222 = ({ R153 *cell2224 = rt_alloc(sizeof(R153)); *cell2224 = cp_R153(({ R153 ag2225; ag2225.s_ = (*(P123)rt_nil_check(F->t_2219)).cname_; ag2225.next_ = F->done_2221; ag2225; })); (P152)cell2224; });
F->done_2221 = F->l_2222;
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" *d, ", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" cp_", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" s);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" b);", 4)));
if (((G_NV((*(P123)rt_nil_check(F->t_2219)).kind_) == ((rt_int)6LL)) && (G_NV((*(P123)rt_nil_check(F->t_2219)).dims_) == ((rt_int)1LL)))) {
f_ctype_513(F->up, (*(P123)rt_nil_check(F->t_2219)).elem_, &F->et_2220);
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" cat_", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" one_", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->et_2220))), rt_g_lit(" e);", 4)));
if ((G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).elem_)).kind_) == ((rt_int)2LL))) {
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" and_", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" or_", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" xor_", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" b);", 4)));
f_put_to_271(F->up, F->up->out_helpers_131, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" not_", 5)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_2219)).cname_))), rt_g_lit(" a);", 4)));
}
}
f_helper_bodies_656(F->up, F->t_2219);
}
F->t_2219 = (*(P123)rt_nil_check(F->t_2219)).next_;
}
L_end_2223: ;
ret_:

  return;
}

static void f_helper_bodies_656(struct f_greenc_1fr *up_, P123 t_655) {
  struct f_helper_bodies_656fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_655 = t_655;
F->c_2226 = NULL;
F->c_2226 = (*(P123)rt_nil_check(F->t_655)).cname_;
F->b_2227 = NULL;
F->b_2227 = F->up->out_funcs_134;
F->ct_2228 = NULL;
F->et_2229 = NULL;
F->x_2230 = NULL;
F->y_2231 = NULL;
F->conds_2232 = NULL;
F->f_2233 = NULL;
if ((G_NV((*(P123)rt_nil_check(F->t_655)).kind_) == ((rt_int)6LL))) {
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, &F->ct_2228);
f_assign_code_641(F->up, rt_g_lit("d->p[i]", 7), (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("s.p[i]", 6), NULL, &F->x_2230);
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" *d, ", 5)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" s) {", 5)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  rt_int n = G_CNT(s);", 22));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, ", 49), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit(");", 2)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();", 79));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < n; i++) { ", 35), (*(P141)rt_nil_check(F->x_2230))), rt_g_lit(" }", 2)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("s.p[i]", 6), &F->x_2230);
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" cp_", 4)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" s) {", 5)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" d = s; d.p = rt_alloc(sizeof(", 30)), (*(P141)rt_nil_check(F->ct_2228))), rt_g_lit(") * (size_t)G_CNT(s));", 22)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = ", 49), (*(P141)rt_nil_check(F->x_2230))), one_rt_gstr(59)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  return d;", 11));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
f_eq_code_650(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("a.p[i]", 6), rt_g_lit("b.p[i]", 6), &F->x_2230);
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) {", 5)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  if (G_CNT(a) != G_CNT(b)) return 0;", 37));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < G_CNT(a); i++) if (!(", 46), (*(P141)rt_nil_check(F->x_2230))), rt_g_lit(")) return 0;", 12)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  return 1;", 11));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
if (((G_NV((*(P123)rt_nil_check(F->t_655)).dims_) == ((rt_int)1LL)) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->t_655)).elem_)).kind_) == ((rt_int)2LL)))) {
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" and_", 5)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) { ", 6)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r = cp_", 8)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }", 79)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" or_", 4)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) { ", 6)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r = cp_", 8)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }", 79)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" xor_", 5)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) { ", 6)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r = cp_", 8)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit("(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, ", 58)), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit("); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }", 79)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" not_", 5)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a) { ", 6)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r = cp_", 8)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit("(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }", 72)));
}
if ((G_NV((*(P123)rt_nil_check(F->t_655)).dims_) == ((rt_int)1LL))) {
f_ctype_513(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, &F->et_2229);
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("a.p[i]", 6), &F->x_2230);
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("b.p[i]", 6), &F->y_2231);
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" cat_", 5)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) {", 5)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  rt_int na = G_CNT(a), nb = G_CNT(b);", 38));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r = na > 0 \? a : b;", 20)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  if (na == 0 && nb == 0) return a;", 35));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;", 47));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P141)rt_nil_check(F->ct_2228))), rt_g_lit(") * (size_t)(na + nb));", 23)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < na; i++) r.p[i] = ", 43), (*(P141)rt_nil_check(F->x_2230))), one_rt_gstr(59)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  for (rt_int i = 0; i < nb; i++) r.p[na + i] = ", 48), (*(P141)rt_nil_check(F->y_2231))), one_rt_gstr(59)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  return r;", 11));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->t_655)).elem_, rt_g_lit("e", 1), &F->x_2230);
f_first_index_590(F->up, F->t_655, &F->y_2231);
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" one_", 5)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->et_2229))), rt_g_lit(" e) {", 5)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" r; r.lo = r.hi = ", 18)), (*(P141)rt_nil_check(F->y_2231))), rt_g_lit("; r.lo2 = r.hi2 = 1;", 20)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  r.p = rt_alloc(sizeof(", 24), (*(P141)rt_nil_check(F->ct_2228))), rt_g_lit(")); r.p[0] = ", 13)), (*(P141)rt_nil_check(F->x_2230))), one_rt_gstr(59)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("  return r;", 11));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
}
} else {
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void as_", 15), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" *d, ", 5)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" s) {", 5)));
F->f_2233 = (*(P123)rt_nil_check(F->t_655)).fields_;
while ((F->f_2233 != NULL)) {
if ((G_NV((*(P2019)rt_nil_check(F->f_2233)).dyn_) || ((*(P2019)rt_nil_check(F->f_2233)).cond_ != NULL))) {
f_copy_code_645(F->up, (*(P2019)rt_nil_check(F->f_2233)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), &F->x_2230);
F->x_2230 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2230))), one_rt_gstr(59)));
if (((*(P2019)rt_nil_check(F->f_2233)).cond_ != NULL)) {
F->x_2230 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_595(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P141)rt_nil_check(F->x_2230))));
}
} else {
f_assign_code_641(F->up, cat_rt_gstr(rt_g_lit("d->", 3), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), (*(P2019)rt_nil_check(F->f_2233)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), NULL, &F->x_2230);
}
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->x_2230))));
F->f_2233 = (*(P2019)rt_nil_check(F->f_2233)).next_;
}
L_end_2234: ;
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" cp_", 4)), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" s) {", 5)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" d = s;", 7)));
F->conds_2232 = f_mk_246(F->up, rt_g_lit("1", 1));
F->f_2233 = (*(P123)rt_nil_check(F->t_655)).fields_;
while ((F->f_2233 != NULL)) {
f_copy_code_645(F->up, (*(P2019)rt_nil_check(F->f_2233)).t_, cat_rt_gstr(rt_g_lit("s.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), &F->x_2230);
F->x_2230 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("d.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2230))), one_rt_gstr(59)));
f_eq_code_650(F->up, (*(P2019)rt_nil_check(F->f_2233)).t_, cat_rt_gstr(rt_g_lit("a.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), cat_rt_gstr(rt_g_lit("b.", 2), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).name_)))), &F->y_2231);
if (((*(P2019)rt_nil_check(F->f_2233)).cond_ != NULL)) {
F->x_2230 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), f_subst_595(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).cond_)), rt_g_lit("s", 1))), rt_g_lit(") ", 2)), (*(P141)rt_nil_check(F->x_2230))));
F->y_2231 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!(", 3), f_subst_595(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2233)).cond_)), rt_g_lit("a", 1))), rt_g_lit(") || ", 5)), (*(P141)rt_nil_check(F->y_2231))), one_rt_gstr(41)));
}
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->x_2230))));
F->conds_2232 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->conds_2232)), rt_g_lit(" && ", 4)), (*(P141)rt_nil_check(F->y_2231))));
F->f_2233 = (*(P2019)rt_nil_check(F->f_2233)).next_;
}
L_end_2235: ;
f_put_to_271(F->up, F->b_2227, rt_g_lit("  return d;", 11));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int eq_", 14), (*(P141)rt_nil_check(F->c_2226))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" a, ", 4)), (*(P141)rt_nil_check(F->c_2226))), rt_g_lit(" b) {", 5)));
f_put_to_271(F->up, F->b_2227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  return ", 9), (*(P141)rt_nil_check(F->conds_2232))), one_rt_gstr(59)));
f_put_to_271(F->up, F->b_2227, rt_g_lit("}", 1));
}
ret_:

  return;
}

static void f_storage_660(struct f_greenc_1fr *up_, rt_gstr name_657, P123 t_658, P141 *access_code_659) {
  struct f_storage_660fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_657 = cp_rt_gstr(name_657);
F->t_658 = t_658;
F->access_code_659 = access_code_659;
F->ct_2236 = NULL;
F->g_2237 = NULL;
f_ctype_513(F->up, F->t_658, &F->ct_2236);
if ((!G_NV(F->up->in_func_139))) {
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), f_lower_s_257(F->up, F->name_657)), one_rt_gstr(95)), &F->g_2237);
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->ct_2236))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->g_2237))), one_rt_gstr(59)));
F->up->st_field_142 = F->g_2237;
(*F->access_code_659) = F->g_2237;
} else {
f_new_name_249(F->up, cat_rt_gstr(f_lower_s_257(F->up, F->name_657), one_rt_gstr(95)), &F->g_2237);
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->ct_2236))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->g_2237))), one_rt_gstr(59)));
F->up->st_field_142 = F->g_2237;
(*F->access_code_659) = f_mk_246(F->up, cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check(F->g_2237))));
}
ret_:

  return;
}

static void f_bind_663(struct f_greenc_1fr *up_, P118 y_661, P141 access_code_662) {
  struct f_bind_663fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_661 = y_661;
F->access_code_662 = access_code_662;
if (G_NV(F->up->in_func_139)) {
(*(P118)rt_nil_check(F->y_661)).level_ = G_NV(F->up->cur_level_140);
(*(P118)rt_nil_check(F->y_661)).access_path_ = F->up->st_field_142;
} else {
(*(P118)rt_nil_check(F->y_661)).level_ = ((rt_int)0LL);
(*(P118)rt_nil_check(F->y_661)).access_path_ = F->access_code_662;
}
ret_:

  return;
}

static void f_declare_subprograms_665(struct f_greenc_1fr *up_, P175 from_664) {
  struct f_declare_subprograms_665fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_664 = from_664;
F->e_2238 = NULL;
F->e_2238 = F->from_664;
while ((F->e_2238 != NULL)) {
if ((((G_NV((*(P175)rt_nil_check(F->e_2238)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->e_2238)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P175)rt_nil_check(F->e_2238)).ival_) == ((rt_int)0LL)) || (G_NV((*(P175)rt_nil_check(F->e_2238)).ival_) == ((rt_int)3LL))))) {
if ((!f_generic_before_668(F->up, F->from_664, F->e_2238))) {
f_declare_one_670(F->up, F->e_2238);
}
}
F->e_2238 = (*(P175)rt_nil_check(F->e_2238)).next_;
}
L_end_2239: ;
ret_:

  return;
}

static int f_generic_before_668(struct f_greenc_1fr *up_, P175 from_666, P175 e_667) {
  struct f_generic_before_668fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->from_666 = from_666;
F->e_667 = e_667;
F->p_2240 = NULL;
F->p_2240 = F->from_666;
while (((F->p_2240 != NULL) && (F->p_2240 != F->e_667))) {
if (((G_NV((*(P175)rt_nil_check(F->p_2240)).kind_) == ((rt_int)54LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_2240)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_667)).name_))))) {
F->result_ = 1;
goto ret_;
}
F->p_2240 = (*(P175)rt_nil_check(F->p_2240)).next_;
}
L_end_2241: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_declare_one_670(struct f_greenc_1fr *up_, P175 e_669) {
  struct f_declare_one_670fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_669 = e_669;
F->y_2242 = NULL;
F->z_2243 = NULL;
if (f_is_generic_name_1305(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_669)).name_)))) {
goto ret_;
}
f_build_subprogram_675(F->up, F->e_669, &F->y_2242);
F->z_2243 = ({ A117 ix2244 = F->up->table_120; ix2244.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2242)).name_))), ix2244.lo, ix2244.hi) - ix2244.lo]; });
while ((F->z_2243 != NULL)) {
if (((((((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_2243)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2242)).name_))) && ((G_NV((*(P118)rt_nil_check(F->z_2243)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->z_2243)).kind_) == ((rt_int)4LL)))) && ((*(P118)rt_nil_check(F->z_2243)).decl_ != NULL)) && (G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->z_2243)).decl_)).ival_) == ((rt_int)1LL))) && (G_NV((*(P118)rt_nil_check(F->z_2243)).depth_) == G_NV(F->up->depth_121))) && f_same_signature_480(F->up, (*(P118)rt_nil_check(F->z_2243)).params_, (*(P118)rt_nil_check(F->y_2242)).params_)) && f_same_463(F->up, (*(P118)rt_nil_check(F->z_2243)).result_, (*(P118)rt_nil_check(F->y_2242)).result_))) {
(*(P118)rt_nil_check(F->z_2243)).decl_ = F->e_669;
goto ret_;
}
F->z_2243 = (*(P118)rt_nil_check(F->z_2243)).chain_;
}
L_end_2245: ;
if ((F->up->cur_task_212 != NULL)) {
F->z_2243 = (*(P118)rt_nil_check(F->up->cur_task_212)).members_;
while ((F->z_2243 != NULL)) {
if ((((((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_2243)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2242)).name_))) && ((G_NV((*(P118)rt_nil_check(F->z_2243)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->z_2243)).kind_) == ((rt_int)4LL)))) && ((*(P118)rt_nil_check(F->z_2243)).decl_ != NULL)) && (G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->z_2243)).decl_)).ival_) == ((rt_int)1LL))) && f_same_signature_480(F->up, (*(P118)rt_nil_check(F->z_2243)).params_, (*(P118)rt_nil_check(F->y_2242)).params_)) && f_same_463(F->up, (*(P118)rt_nil_check(F->z_2243)).result_, (*(P118)rt_nil_check(F->y_2242)).result_))) {
(*(P118)rt_nil_check(F->y_2242)).cname_ = (*(P118)rt_nil_check(F->z_2243)).cname_;
(*(P118)rt_nil_check(F->z_2243)).decl_ = F->e_669;
goto L_end_2246;
}
F->z_2243 = (*(P118)rt_nil_check(F->z_2243)).mnext_;
}
L_end_2246: ;
}
f_define_486(F->up, F->y_2242, G_NV((*(P175)rt_nil_check(F->e_669)).line_));
f_elaborate_defaults_672(F->up, F->y_2242);
ret_:

  return;
}

static void f_elaborate_defaults_672(struct f_greenc_1fr *up_, P118 y_671) {
  struct f_elaborate_defaults_672fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_671 = y_671;
F->pm_2247 = NULL;
F->pm_2247 = (*(P118)rt_nil_check(F->y_671)).params_;
F->vt_2248 = NULL;
F->v_2249 = NULL;
F->acc_2250 = NULL;
F->x_2251 = NULL;
F->z_2252 = NULL;
while ((F->pm_2247 != NULL)) {
if (((*(P2001)rt_nil_check(F->pm_2247)).dflt_ != NULL)) {
if ((G_NV((*(P2001)rt_nil_check(F->pm_2247)).mode_) != ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check((*(P2001)rt_nil_check(F->pm_2247)).dflt_)).line_), rt_g_lit("only an in parameter takes a default (RM79 6.3)", 47));
}
f_gexpr_850(F->up, (*(P2001)rt_nil_check(F->pm_2247)).dflt_, (*(P2001)rt_nil_check(F->pm_2247)).t_, &F->vt_2248, &F->v_2249);
f_check_type_508(F->up, F->vt_2248, (*(P2001)rt_nil_check(F->pm_2247)).t_, G_NV((*(P175)rt_nil_check((*(P2001)rt_nil_check(F->pm_2247)).dflt_)).line_));
F->z_2252 = f_new_sym_491(F->up, ((rt_int)2LL), f_mk_246(F->up, rt_g_lit("dflt", 4)));
f_storage_660(F->up, rt_g_lit("dflt", 4), (*(P2001)rt_nil_check(F->pm_2247)).t_, &F->acc_2250);
(*(P118)rt_nil_check(F->z_2252)).t_ = (*(P2001)rt_nil_check(F->pm_2247)).t_;
(*(P118)rt_nil_check(F->z_2252)).c_ = (*(P2001)rt_nil_check(F->pm_2247)).c_;
f_bind_663(F->up, F->z_2252, F->acc_2250);
f_copy_code_645(F->up, (*(P2001)rt_nil_check(F->pm_2247)).t_, (*(P141)rt_nil_check(F->v_2249)), &F->x_2251);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2250)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2251))), one_rt_gstr(59)));
(*(P2001)rt_nil_check(F->pm_2247)).dsym_ = F->z_2252;
}
F->pm_2247 = (*(P2001)rt_nil_check(F->pm_2247)).next_;
}
L_end_2253: ;
ret_:

  return;
}

static void f_build_subprogram_675(struct f_greenc_1fr *up_, P175 d_673, P118 *y_674) {
  struct f_build_subprogram_675fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_673 = d_673;
F->y_674 = y_674;
F->p_2254 = NULL;
F->p_2254 = (*(P175)rt_nil_check(F->d_673)).a_;
F->pm_2255 = NULL;
F->tail_2256 = NULL;
F->rc_2257 = NULL;
F->k_2258 = INT64_MIN;
F->k_2258 = ((rt_int)4LL);
if ((G_NV((*(P175)rt_nil_check(F->d_673)).kind_) == ((rt_int)45LL))) {
F->k_2258 = ((rt_int)3LL);
}
(*F->y_674) = f_new_sym_491(F->up, G_NV(F->k_2258), (*(P175)rt_nil_check(F->d_673)).name_);
while ((F->p_2254 != NULL)) {
F->pm_2255 = ({ R2002 *cell2260 = rt_alloc(sizeof(R2002)); *cell2260 = cp_R2002(({ R2002 ag2261; ag2261.name_ = (*(P175)rt_nil_check(F->p_2254)).name_; ag2261.mode_ = G_NV((*(P175)rt_nil_check(F->p_2254)).ival_); ag2261.t_ = NULL; ag2261.c_ = NULL; ag2261.cfield_ = NULL; ag2261.dflt_ = (*(P175)rt_nil_check(F->p_2254)).b_; ag2261.next_ = NULL; ag2261.dsym_ = NULL; ag2261; })); (P2001)cell2260; });
f_resolve_529(F->up, (*(P175)rt_nil_check(F->p_2254)).a_, &(*(P2001)rt_nil_check(F->pm_2255)).t_, &(*(P2001)rt_nil_check(F->pm_2255)).c_);
f_new_name_249(F->up, cat_rt_gstr(f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_2254)).name_))), one_rt_gstr(95)), &(*(P2001)rt_nil_check(F->pm_2255)).cfield_);
if (((G_NV((*(P175)rt_nil_check(F->d_673)).kind_) == ((rt_int)45LL)) && (G_NV((*(P2001)rt_nil_check(F->pm_2255)).mode_) != ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->p_2254)).line_), rt_g_lit("a function can only have in parameters (RM79 6.5)", 49));
}
if (((G_NV((*(P175)rt_nil_check(F->d_673)).flag_) == ((rt_int)1LL)) && (G_NV((*(P2001)rt_nil_check(F->pm_2255)).mode_) != ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->p_2254)).line_), rt_g_lit("a value-returning procedure can only have in parameters (RM79 6.5)", 66));
}
if ((F->tail_2256 == NULL)) {
(*(P118)rt_nil_check((*F->y_674))).params_ = F->pm_2255;
} else {
(*(P2001)rt_nil_check(F->tail_2256)).next_ = F->pm_2255;
}
F->tail_2256 = F->pm_2255;
F->p_2254 = (*(P175)rt_nil_check(F->p_2254)).next_;
}
L_end_2259: ;
(*(P118)rt_nil_check((*F->y_674))).result_ = F->up->ty_void_162;
if (((*(P175)rt_nil_check(F->d_673)).b_ != NULL)) {
f_resolve_529(F->up, (*(P175)rt_nil_check(F->d_673)).b_, &(*(P118)rt_nil_check((*F->y_674))).result_, &F->rc_2257);
(*(P118)rt_nil_check((*F->y_674))).c_ = F->rc_2257;
}
if ((f_is_rel_359(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_673)).name_))) && ((*(P118)rt_nil_check((*F->y_674))).result_ != F->up->ty_bool_158))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_673)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the relational operator ", 24), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_673)).name_))), rt_g_lit(" returns BOOLEAN (RM79 6.6.1)", 29)));
}
(*(P118)rt_nil_check((*F->y_674))).vrp_ = (G_NV((*(P175)rt_nil_check(F->d_673)).flag_) == ((rt_int)1LL));
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("f_", 2), f_c_ident_792(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_673)).name_)))), one_rt_gstr(95)), &(*(P118)rt_nil_check((*F->y_674))).cname_);
(*(P118)rt_nil_check((*F->y_674))).decl_ = F->d_673;
(*(P118)rt_nil_check((*F->y_674))).level_ = G_NV(F->up->cur_level_140);
ret_:

  return;
}

static void f_decl_elements_677(struct f_greenc_1fr *up_, P175 decls_676) {
  struct f_decl_elements_677fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_676 = decls_676;
F->e_2262 = NULL;
F->e_2262 = F->decls_676;
F->declared_2263 = INT_MIN;
F->declared_2263 = 0;
F->up->anon_node_177 = NULL;
f_pending_addresses_1362(F->up, F->decls_676);
while ((F->e_2262 != NULL)) {
if ((((G_NV((*(P175)rt_nil_check(F->e_2262)).kind_) != ((rt_int)40LL)) && (G_NV((*(P175)rt_nil_check(F->e_2262)).kind_) != ((rt_int)41LL))) || ((*(P175)rt_nil_check(F->e_2262)).a_ != F->up->anon_node_177))) {
F->up->anon_node_177 = NULL;
}
if (((((G_NV((*(P175)rt_nil_check(F->e_2262)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->e_2262)).kind_) == ((rt_int)45LL))) && (G_NV((*(P175)rt_nil_check(F->e_2262)).ival_) != ((rt_int)1LL))) && (!G_NV(F->declared_2263)))) {
f_declare_subprograms_665(F->up, F->e_2262);
F->declared_2263 = 1;
}
f_decl_element_679(F->up, F->e_2262);
F->e_2262 = (*(P175)rt_nil_check(F->e_2262)).next_;
}
L_end_2264: ;
ret_:

  return;
}

static void f_decl_element_679(struct f_greenc_1fr *up_, P175 e_678) {
  struct f_decl_element_679fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_678 = e_678;
F->saved_2265 = NULL;
F->saved_2265 = F->up->barriers_201;
if ((((*(P175)rt_nil_check(F->e_678)).formal_ != NULL) && (((((((G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)45LL))) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)48LL))) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)49LL))) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)50LL))) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)51LL))) || (G_NV((*(P175)rt_nil_check(F->e_678)).kind_) == ((rt_int)54LL))))) {
f_push_barrier_700(F->up, F->e_678, G_NV(F->up->depth_121));
f_decl_element_1_681(F->up, F->e_678);
F->up->barriers_201 = F->saved_2265;
goto ret_;
}
f_decl_element_1_681(F->up, F->e_678);
ret_:

  return;
}

static void f_decl_element_1_681(struct f_greenc_1fr *up_, P175 e_680) {
  struct f_decl_element_1_681fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_680 = e_680;
F->pd_2266 = NULL;
F->y_2267 = NULL;
F->z_2268 = NULL;
F->t_2269 = NULL;
F->vt_2270 = NULL;
F->c_2271 = NULL;
F->acc_2272 = NULL;
F->v_2273 = NULL;
F->x_2274 = NULL;
F->ok_2275 = INT_MIN;
F->pa_2276 = NULL;
{ rt_int sel2277 = G_NV((*(P175)rt_nil_check(F->e_680)).kind_);
if (0 || sel2277 == ((rt_int)42LL)) {
F->y_2267 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)));
if ((((((((F->y_2267 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2267)).kind_) == ((rt_int)5LL))) && (G_NV((*(P118)rt_nil_check(F->y_2267)).depth_) == G_NV(F->up->depth_121))) && ((*(P118)rt_nil_check(F->y_2267)).t_ != NULL)) && G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).priv_)) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).kind_) == ((rt_int)9LL))) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).kind_) != ((rt_int)77LL)))) {
F->up->completing_174 = (*(P118)rt_nil_check(F->y_2267)).t_;
F->x_2274 = (*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).name_;
F->pd_2266 = (*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).decl_;
F->ok_2275 = G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).is_restricted_);
f_type_definition_563(F->up, (*(P175)rt_nil_check(F->e_680)).a_, (*(P175)rt_nil_check(F->e_680)).name_, &F->t_2269, &F->c_2271);
F->up->completing_174 = NULL;
if ((F->t_2269 != (*(P118)rt_nil_check(F->y_2267)).t_)) {
as_R124(&(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)), (*(P123)rt_nil_check(F->t_2269)));
}
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).name_ = F->x_2274;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).priv_ = 1;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).decl_ = F->pd_2266;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).is_restricted_ = G_NV(F->ok_2275);
(*(P118)rt_nil_check(F->y_2267)).c_ = F->c_2271;
} else {
F->y_2267 = f_new_sym_491(F->up, ((rt_int)5LL), (*(P175)rt_nil_check(F->e_680)).name_);
(*(P118)rt_nil_check(F->y_2267)).decl_ = F->e_680;
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).kind_) == ((rt_int)77LL))) {
(*(P118)rt_nil_check(F->y_2267)).t_ = f_new_typ_493(F->up, ((rt_int)9LL));
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).name_ = (*(P175)rt_nil_check(F->e_680)).name_;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).priv_ = 1;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).decl_ = F->up->cur_pkg_232;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).t_)).is_restricted_ = (G_NV((*(P175)rt_nil_check(F->e_680)).flag_) == ((rt_int)9LL));
} else {
f_type_definition_563(F->up, (*(P175)rt_nil_check(F->e_680)).a_, (*(P175)rt_nil_check(F->e_680)).name_, &(*(P118)rt_nil_check(F->y_2267)).t_, &(*(P118)rt_nil_check(F->y_2267)).c_);
}
}
} else if (0 || sel2277 == ((rt_int)43LL)) {
F->y_2267 = f_new_sym_491(F->up, ((rt_int)5LL), (*(P175)rt_nil_check(F->e_680)).name_);
f_resolve_529(F->up, (*(P175)rt_nil_check(F->e_680)).a_, &(*(P118)rt_nil_check(F->y_2267)).t_, &(*(P118)rt_nil_check(F->y_2267)).c_);
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
} else if (0 || sel2277 == ((rt_int)40LL)) {
f_resolve_object_type_687(F->up, (*(P175)rt_nil_check(F->e_680)).a_, &F->t_2269, &F->c_2271);
F->y_2267 = f_new_sym_491(F->up, ((rt_int)1LL), (*(P175)rt_nil_check(F->e_680)).name_);
if ((G_NV((*(P175)rt_nil_check(F->e_680)).flag_) == ((rt_int)2LL))) {
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->e_680)).b_, &F->v_2273, &F->vt_2270, &F->c_2271, &(*(P118)rt_nil_check(F->y_2267)).ro_);
 (void)rt_range((*(P118)rt_nil_check(F->y_2267)).ro_, 0, 1);
f_check_type_508(F->up, F->vt_2270, F->t_2269, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_ctype_513(F->up, F->t_2269, &F->acc_2272);
f_new_name_249(F->up, cat_rt_gstr(f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_))), one_rt_gstr(95)), &F->x_2274);
if (G_NV(F->up->in_func_139)) {
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->acc_2272))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check(F->x_2274))), rt_g_lit(" = &(", 5)), (*(P141)rt_nil_check(F->v_2273))), rt_g_lit(");", 2)));
(*(P118)rt_nil_check(F->y_2267)).byref_ = 1;
(*(P118)rt_nil_check(F->y_2267)).level_ = G_NV(F->up->cur_level_140);
(*(P118)rt_nil_check(F->y_2267)).access_path_ = F->x_2274;
} else {
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->acc_2272))), rt_g_lit(" *g_", 4)), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P141)rt_nil_check(F->x_2274))), rt_g_lit(" = &(", 5)), (*(P141)rt_nil_check(F->v_2273))), rt_g_lit(");", 2)));
(*(P118)rt_nil_check(F->y_2267)).level_ = ((rt_int)0LL);
(*(P118)rt_nil_check(F->y_2267)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(41)));
}
(*(P118)rt_nil_check(F->y_2267)).t_ = F->vt_2270;
(*(P118)rt_nil_check(F->y_2267)).c_ = F->c_2271;
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
goto ret_;
}
if ((((G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)6LL)) && (!f_bounded_496(F->up, F->c_2271))) && ((*(P175)rt_nil_check(F->e_680)).b_ != NULL))) {
F->up->vrp_ok_237 = 1;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_680)).b_, F->t_2269, &F->vt_2270, &F->v_2273);
F->up->vrp_ok_237 = 0;
f_check_type_508(F->up, F->vt_2270, F->t_2269, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)), F->t_2269, &F->acc_2272);
f_copy_code_645(F->up, F->t_2269, (*(P141)rt_nil_check(F->v_2273)), &F->x_2274);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2272)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(59)));
F->pa_2276 = f_pending_address_1364(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)));
if ((F->pa_2276 != NULL)) {
f_place_object_1373(F->up, F->pa_2276, F->y_2267, F->t_2269, &F->acc_2272);
f_place_components_1378(F->up, F->pa_2276, F->t_2269, (*(P141)rt_nil_check(F->acc_2272)), G_NV((*(P175)rt_nil_check(F->e_680)).line_));
}
} else {
F->pa_2276 = f_pending_address_1364(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)));
if (((F->pa_2276 != NULL) && (G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) != ((rt_int)6LL)))) {
f_place_object_1373(F->up, F->pa_2276, F->y_2267, F->t_2269, &F->acc_2272);
} else {
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)), F->t_2269, &F->acc_2272);
}
f_init_storage_633(F->up, (*(P141)rt_nil_check(F->acc_2272)), F->t_2269, F->c_2271);
if (((*(P175)rt_nil_check(F->e_680)).b_ != NULL)) {
if (f_restricted_here_584(F->up, F->t_2269)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_680)).line_), rt_g_lit("a restricted type has no assignment: no initial value (RM79 7.4)", 64));
}
if (f_is_const_access_800(F->up, (*(P175)rt_nil_check(F->e_680)).b_)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_680)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_237 = 1;
if (((G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)6LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_182 = F->acc_2272;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_680)).b_, F->t_2269, &F->vt_2270, &F->v_2273);
F->up->agg_bounds_182 = NULL;
F->up->vrp_ok_237 = 0;
f_check_type_508(F->up, F->vt_2270, F->t_2269, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_assign_code_641(F->up, (*(P141)rt_nil_check(F->acc_2272)), F->t_2269, (*(P141)rt_nil_check(F->v_2273)), F->c_2271, &F->x_2274);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2274)));
}
if (((F->pa_2276 != NULL) && (G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)6LL)))) {
f_place_object_1373(F->up, F->pa_2276, F->y_2267, F->t_2269, &F->acc_2272);
f_place_components_1378(F->up, F->pa_2276, F->t_2269, (*(P141)rt_nil_check(F->acc_2272)), G_NV((*(P175)rt_nil_check(F->e_680)).line_));
}
}
(*(P118)rt_nil_check(F->y_2267)).t_ = F->t_2269;
(*(P118)rt_nil_check(F->y_2267)).c_ = F->c_2271;
if (((F->pa_2276 == NULL) || (G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)6LL)))) {
f_bind_663(F->up, F->y_2267, F->acc_2272);
}
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
} else if (0 || sel2277 == ((rt_int)41LL)) {
f_resolve_object_type_687(F->up, (*(P175)rt_nil_check(F->e_680)).a_, &F->t_2269, &F->c_2271);
F->z_2268 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)));
if (((*(P175)rt_nil_check(F->e_680)).b_ == NULL)) {
if (((F->up->cur_pkg_232 == NULL) || (!(G_NV((*(P123)rt_nil_check(F->t_2269)).priv_) && (G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)9LL)))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_680)).line_), rt_g_lit("a constant needs a value; only a constant of a private type is deferred (RM79 7.4)", 82));
}
F->y_2267 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P175)rt_nil_check(F->e_680)).name_);
(*(P118)rt_nil_check(F->y_2267)).t_ = F->t_2269;
(*(P118)rt_nil_check(F->y_2267)).c_ = F->c_2271;
(*(P118)rt_nil_check(F->y_2267)).ro_ = 1;
(*(P118)rt_nil_check(F->y_2267)).flags_ = rt_add(((rt_int)1LL), ((rt_int)2LL));
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
goto ret_;
}
if (((((F->z_2268 != NULL) && (G_NV((*(P118)rt_nil_check(F->z_2268)).depth_) == G_NV(F->up->depth_121))) && (G_NV((*(P118)rt_nil_check(F->z_2268)).kind_) == ((rt_int)2LL))) && (G_NV((*(P118)rt_nil_check(F->z_2268)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_check_type_508(F->up, F->t_2269, (*(P118)rt_nil_check(F->z_2268)).t_, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_680)).b_, F->t_2269, &F->vt_2270, &F->v_2273);
f_check_type_508(F->up, F->vt_2270, F->t_2269, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)), F->t_2269, &F->acc_2272);
f_bind_663(F->up, F->z_2268, F->acc_2272);
f_copy_code_645(F->up, F->t_2269, (*(P141)rt_nil_check(F->v_2273)), &F->x_2274);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2272)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(59)));
(*(P118)rt_nil_check(F->z_2268)).flags_ = ((rt_int)1LL);
goto ret_;
}
F->y_2267 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P175)rt_nil_check(F->e_680)).name_);
(*(P118)rt_nil_check(F->y_2267)).flags_ = ((rt_int)1LL);
F->up->vrp_ok_237 = 1;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_680)).b_, F->t_2269, &F->vt_2270, &F->v_2273);
F->up->vrp_ok_237 = 0;
f_check_type_508(F->up, F->vt_2270, F->t_2269, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
if ((G_NV((*(P123)rt_nil_check(F->t_2269)).kind_) == ((rt_int)1LL))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_680)).b_, &(*(P118)rt_nil_check(F->y_2267)).mvalue_, &F->ok_2275);
 (void)rt_range(F->ok_2275, 0, 1);
(*(P118)rt_nil_check(F->y_2267)).hasmv_ = G_NV(F->ok_2275);
}
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)), F->t_2269, &F->acc_2272);
f_copy_code_645(F->up, F->t_2269, (*(P141)rt_nil_check(F->v_2273)), &F->x_2274);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2272)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2274))), one_rt_gstr(59)));
(*(P118)rt_nil_check(F->y_2267)).t_ = F->t_2269;
(*(P118)rt_nil_check(F->y_2267)).c_ = F->c_2271;
(*(P118)rt_nil_check(F->y_2267)).ro_ = 1;
f_bind_663(F->up, F->y_2267, F->acc_2272);
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
} else if (0 || sel2277 == ((rt_int)46LL)) {
if (((*(P175)rt_nil_check(F->e_680)).a_ != NULL)) {
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).a_))) {
F->y_2267 = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).name_)), G_NV((*(P175)rt_nil_check(F->e_680)).line_));
} else if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2267 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_680)).a_)).name_)));
} else {
F->y_2267 = NULL;
}
if (((F->y_2267 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2267)).kind_) != ((rt_int)6LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_680)).line_), rt_g_lit("an exception is renamed only as an exception", 44));
}
f_copy_sym_1102(F->up, F->y_2267, &F->z_2268);
(*(P118)rt_nil_check(F->z_2268)).name_ = (*(P175)rt_nil_check(F->e_680)).name_;
f_define_486(F->up, F->z_2268, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
goto ret_;
}
F->y_2267 = f_new_sym_491(F->up, ((rt_int)6LL), (*(P175)rt_nil_check(F->e_680)).name_);
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("ex_", 3), f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_)))), one_rt_gstr(95)), &(*(P118)rt_nil_check(F->y_2267)).cname_);
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static int ", 11), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).cname_))), one_rt_gstr(59)));
f_put_to_271(F->up, F->up->out_excs_136, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2267)).cname_))), rt_g_lit(" = rt_exc(", 10)), f_q_264(F->up)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_))), f_q_264(F->up)), rt_g_lit(");", 2)));
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
} else if (0 || sel2277 == ((rt_int)44LL) || sel2277 == ((rt_int)45LL)) {
if (((G_NV((*(P175)rt_nil_check(F->e_680)).ival_) == ((rt_int)0LL)) && f_is_generic_name_1305(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_680)).name_))))) {
f_attach_generic_body_1310(F->up, F->e_680);
} else if ((G_NV((*(P175)rt_nil_check(F->e_680)).ival_) == ((rt_int)2LL))) {
f_rename_subprogram_694(F->up, F->e_680);
} else if ((G_NV((*(P175)rt_nil_check(F->e_680)).ival_) == ((rt_int)3LL))) {
f_stub_692(F->up, F->e_680);
} else if ((G_NV((*(P175)rt_nil_check(F->e_680)).ival_) == ((rt_int)1LL))) {
f_build_subprogram_675(F->up, F->e_680, &F->y_2267);
f_define_486(F->up, F->y_2267, G_NV((*(P175)rt_nil_check(F->e_680)).line_));
f_elaborate_defaults_672(F->up, F->y_2267);
} else {
f_subprogram_body_737(F->up, F->e_680, f_lookup_decl_458(F->up, F->e_680));
}
} else if (0 || sel2277 == ((rt_int)55LL)) {
f_use_clause_1116(F->up, F->e_680);
} else if (0 || sel2277 == ((rt_int)56LL)) {
f_pragma_decl_683(F->up, F->e_680);
} else if (0 || sel2277 == ((rt_int)38LL)) {
f_representation_1380(F->up, F->e_680);
} else {
f_other_decl_702(F->up, F->e_680);
}
}
ret_:

  return;
}

static void f_pragma_decl_683(struct f_greenc_1fr *up_, P175 e_682) {
  struct f_pragma_decl_683fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_682 = e_682;
ret_:

  return;
}

static void f_resolve_object_type_687(struct f_greenc_1fr *up_, P175 st_684, P123 *t_685, P179 *c_686) {
  struct f_resolve_object_type_687fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_684 = st_684;
F->t_685 = t_685;
F->c_686 = c_686;
if (((G_NV((*(P175)rt_nil_check(F->st_684)).kind_) != ((rt_int)80LL)) && (F->st_684 == F->up->anon_node_177))) {
(*F->t_685) = F->up->anon_typ_178;
(*F->c_686) = F->up->anon_cons_181;
goto ret_;
}
f_resolve_529(F->up, F->st_684, &(*F->t_685), &(*F->c_686));
if ((G_NV((*(P175)rt_nil_check(F->st_684)).kind_) != ((rt_int)80LL))) {
F->up->anon_node_177 = F->st_684;
F->up->anon_typ_178 = (*F->t_685);
F->up->anon_cons_181 = (*F->c_686);
}
ret_:

  return;
}

static void f_find_subunit_690(struct f_greenc_1fr *up_, P175 e_688, P175 *r_689) {
  struct f_find_subunit_690fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_688 = e_688;
F->r_689 = r_689;
F->u_2278 = NULL;
F->u_2278 = F->up->units_229;
F->k_2279 = INT64_MIN;
(*F->r_689) = NULL;
while ((F->u_2278 != NULL)) {
if (((((*(P175)rt_nil_check(F->u_2278)).formal_ != NULL) && (G_NV(({ rt_gstr ix2281 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_2278)).formal_)); ix2281.p[rt_index(((rt_int)1LL), ix2281.lo, ix2281.hi) - ix2281.lo]; })) == 33)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_2278)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_688)).name_))))) {
if (((G_NV((*(P175)rt_nil_check(F->u_2278)).kind_) == G_NV((*(P175)rt_nil_check(F->e_688)).kind_)) || (((G_NV((*(P175)rt_nil_check(F->u_2278)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->u_2278)).kind_) == ((rt_int)45LL))) && ((G_NV((*(P175)rt_nil_check(F->e_688)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->e_688)).kind_) == ((rt_int)45LL)))))) {
(*F->r_689) = F->u_2278;
goto ret_;
}
}
F->u_2278 = (*(P175)rt_nil_check(F->u_2278)).next_;
}
L_end_2280: ;
ret_:

  return;
}

static void f_stub_692(struct f_greenc_1fr *up_, P175 e_691) {
  struct f_stub_692fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_691 = e_691;
F->sub_2282 = NULL;
F->saved_2283 = NULL;
F->saved_2283 = F->up->barriers_201;
F->k_2284 = INT64_MIN;
F->d_2285 = INT64_MIN;
F->first_name_2286 = NULL;
F->list_2287 = NULL;
F->y_2288 = NULL;
f_find_subunit_690(F->up, F->e_691, &F->sub_2282);
if ((F->sub_2282 == NULL)) {
{ rt_int lo2291 = ((rt_int)1LL), hi2292 = G_NV(F->up->nunits_189);
for (rt_int it2293 = hi2292; it2293 >= lo2291; it2293--) {
F->i_2290 = it2293;
if ((F->sub_2282 == NULL)) {
f_lib_load_1427(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(({ A184 ix2295 = F->up->unit_names_185; ix2295.p[rt_index(F->i_2290, ix2295.lo, ix2295.hi) - ix2295.lo]; }))), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_691)).name_))), rt_g_lit(".sub", 4)), &F->sub_2282);
}
}
}
L_end_2289: ;
if ((F->sub_2282 == NULL)) {
f_lib_load_1427(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->up->cur_comp_unit_210)), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_691)).name_))), rt_g_lit(".sub", 4)), &F->sub_2282);
}
if ((F->sub_2282 != NULL)) {
(*(P175)rt_nil_check(F->sub_2282)).next_ = F->up->units_229;
F->up->units_229 = F->sub_2282;
}
}
if ((F->sub_2282 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_691)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the subunit of ", 15), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_691)).name_))), rt_g_lit(" is neither in this compilation nor in the ", 43)), rt_g_lit("program library (RM79 10.2)", 27)));
}
F->list_2287 = f_mk_246(F->up, ({ rt_gstr sl2299 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->sub_2282)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at2298 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->sub_2282)).formal_)); at2298.hi >= at2298.lo ? at2298.hi - at2298.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2299.lo, sl2299.hi); rt_index(h_, sl2299.lo, sl2299.hi); } sl2299.p += l_ - sl2299.lo; sl2299.lo = l_; sl2299.hi = h_; sl2299; }));
(*(P175)rt_nil_check(F->sub_2282)).formal_ = f_mk_246(F->up, cat_rt_gstr(one_rt_gstr(35), (*(P141)rt_nil_check(F->list_2287))));
F->k_2284 = ((rt_int)2LL);
while (((G_NV(F->k_2284) <= ({ rt_gstr at2301 = (*(P141)rt_nil_check(F->list_2287)); at2301.hi >= at2301.lo ? at2301.hi - at2301.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2302 = (*(P141)rt_nil_check(F->list_2287)); ix2302.p[rt_index(G_NV(F->k_2284), ix2302.lo, ix2302.hi) - ix2302.lo]; })) != 44))) {
F->k_2284 = rt_add(G_NV(F->k_2284), ((rt_int)1LL));
}
L_end_2300: ;
F->first_name_2286 = f_mk_246(F->up, ({ rt_gstr sl2304 = (*(P141)rt_nil_check(F->list_2287)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2284), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2304.lo, sl2304.hi); rt_index(h_, sl2304.lo, sl2304.hi); } sl2304.p += l_ - sl2304.lo; sl2304.lo = l_; sl2304.hi = h_; sl2304; }));
F->d_2285 = f_enclosing_depth_454(F->up, (*(P141)rt_nil_check(F->first_name_2286)));
if ((G_NV(F->d_2285) < ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->sub_2282)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the first name in the visibility list of subunit ", 49), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->sub_2282)).name_))), rt_g_lit(" is an enclosing unit (RM79 10.2)", 33)));
}
F->up->barriers_201 = ({ R200 *cell2305 = rt_alloc(sizeof(R200)); *cell2305 = cp_R200(({ R200 ag2306; ag2306.limit_ = rt_sub(G_NV(F->d_2285), ((rt_int)1LL)); ag2306.keep_ = rt_neg(((rt_int)1LL)); ag2306.allowed_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->list_2287)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->sub_2282)).name_))), one_rt_gstr(44))); ag2306.next_ = NULL; ag2306; })); (P199)cell2305; });
if (((G_NV((*(P175)rt_nil_check(F->e_691)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->e_691)).kind_) == ((rt_int)45LL)))) {
F->y_2288 = f_lookup_decl_458(F->up, F->e_691);
f_subprogram_body_737(F->up, F->sub_2282, F->y_2288);
} else if ((G_NV((*(P175)rt_nil_check(F->e_691)).kind_) == ((rt_int)49LL))) {
f_package_body_1112(F->up, F->sub_2282);
} else {
f_task_body_1215(F->up, F->sub_2282);
}
F->up->barriers_201 = F->saved_2283;
ret_:

  return;
}

static void f_rename_subprogram_694(struct f_greenc_1fr *up_, P175 e_693) {
  struct f_rename_subprogram_694fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_693 = e_693;
F->newy_2307 = NULL;
F->y_2308 = NULL;
F->z_2309 = NULL;
F->cand_2310 = NULL;
F->ix_2311 = NULL;
F->p_2312 = NULL;
F->q_2313 = NULL;
F->tail_2314 = NULL;
f_build_subprogram_675(F->up, F->e_693, &F->newy_2307);
F->y_2308 = NULL;
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).a_)))) {
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).kind_) == ((rt_int)5LL))) {
F->cand_2310 = ({ A117 ix2315 = F->up->table_120; ix2315.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).name_))), ix2315.lo, ix2315.hi) - ix2315.lo]; });
while ((F->cand_2310 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->cand_2310)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).name_))) && (((G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)10LL)))) && f_visible_sym_441(F->up, F->cand_2310))) {
if (((f_same_types_477(F->up, (*(P118)rt_nil_check(F->cand_2310)).params_, (*(P118)rt_nil_check(F->newy_2307)).params_) && f_same_463(F->up, (*(P118)rt_nil_check(F->cand_2310)).result_, (*(P118)rt_nil_check(F->newy_2307)).result_)) && (F->y_2308 == NULL))) {
F->y_2308 = F->cand_2310;
}
}
F->cand_2310 = (*(P118)rt_nil_check(F->cand_2310)).chain_;
}
L_end_2316: ;
} else {
F->cand_2310 = (*(P118)rt_nil_check(f_lookup_path_1091(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).a_)))).members_;
while ((F->cand_2310 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->cand_2310)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).name_))) && (((G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->cand_2310)).kind_) == ((rt_int)10LL)))) && (!G_NV((*(P118)rt_nil_check(F->cand_2310)).hidden_)))) {
if (((f_same_types_477(F->up, (*(P118)rt_nil_check(F->cand_2310)).params_, (*(P118)rt_nil_check(F->newy_2307)).params_) && f_same_463(F->up, (*(P118)rt_nil_check(F->cand_2310)).result_, (*(P118)rt_nil_check(F->newy_2307)).result_)) && (F->y_2308 == NULL))) {
F->y_2308 = F->cand_2310;
}
}
F->cand_2310 = (*(P118)rt_nil_check(F->cand_2310)).mnext_;
}
L_end_2317: ;
}
}
if (((F->y_2308 == NULL) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).kind_) == ((rt_int)9LL)))) {
f_entry_sym_1224(F->up, (*(P175)rt_nil_check(F->e_693)).c_, &F->y_2308, &F->ix_2311);
if (((F->ix_2311 != NULL) || ((*(P118)rt_nil_check(F->y_2308)).c_ != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_693)).line_), rt_g_lit("a renamed entry is an entry of a single task (RM79 8.5)", 55));
}
if (((!f_same_types_477(F->up, (*(P118)rt_nil_check(F->y_2308)).params_, (*(P118)rt_nil_check(F->newy_2307)).params_)) || (G_NV((*(P175)rt_nil_check(F->e_693)).kind_) != ((rt_int)44LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_693)).line_), rt_g_lit("an entry is renamed as a procedure with the same parameters (RM79 8.5)", 70));
}
}
if ((F->y_2308 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_693)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram ", 14), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_693)).c_)).name_))), rt_g_lit(" with this profile to rename (RM79 8.5)", 39)));
}
f_copy_sym_1102(F->up, F->y_2308, &F->z_2309);
(*(P118)rt_nil_check(F->z_2309)).name_ = (*(P175)rt_nil_check(F->e_693)).name_;
(*(P118)rt_nil_check(F->z_2309)).decl_ = (*(P118)rt_nil_check(F->y_2308)).decl_;
(*(P118)rt_nil_check(F->z_2309)).params_ = NULL;
F->p_2312 = (*(P118)rt_nil_check(F->y_2308)).params_;
F->q_2313 = (*(P118)rt_nil_check(F->newy_2307)).params_;
while ((F->p_2312 != NULL)) {
if ((F->tail_2314 == NULL)) {
(*(P118)rt_nil_check(F->z_2309)).params_ = ({ R2002 *cell2319 = rt_alloc(sizeof(R2002)); *cell2319 = cp_R2002(({ R2002 ag2320; ag2320.name_ = (*(P2001)rt_nil_check(F->q_2313)).name_; ag2320.mode_ = G_NV((*(P2001)rt_nil_check(F->p_2312)).mode_); ag2320.t_ = (*(P2001)rt_nil_check(F->p_2312)).t_; ag2320.c_ = (*(P2001)rt_nil_check(F->p_2312)).c_; ag2320.cfield_ = (*(P2001)rt_nil_check(F->p_2312)).cfield_; ag2320.dflt_ = (*(P2001)rt_nil_check(F->q_2313)).dflt_; ag2320.next_ = NULL; ag2320.dsym_ = NULL; ag2320; })); (P2001)cell2319; });
F->tail_2314 = (*(P118)rt_nil_check(F->z_2309)).params_;
} else {
(*(P2001)rt_nil_check(F->tail_2314)).next_ = ({ R2002 *cell2321 = rt_alloc(sizeof(R2002)); *cell2321 = cp_R2002(({ R2002 ag2322; ag2322.name_ = (*(P2001)rt_nil_check(F->q_2313)).name_; ag2322.mode_ = G_NV((*(P2001)rt_nil_check(F->p_2312)).mode_); ag2322.t_ = (*(P2001)rt_nil_check(F->p_2312)).t_; ag2322.c_ = (*(P2001)rt_nil_check(F->p_2312)).c_; ag2322.cfield_ = (*(P2001)rt_nil_check(F->p_2312)).cfield_; ag2322.dflt_ = (*(P2001)rt_nil_check(F->q_2313)).dflt_; ag2322.next_ = NULL; ag2322.dsym_ = NULL; ag2322; })); (P2001)cell2321; });
F->tail_2314 = (*(P2001)rt_nil_check(F->tail_2314)).next_;
}
F->p_2312 = (*(P2001)rt_nil_check(F->p_2312)).next_;
F->q_2313 = (*(P2001)rt_nil_check(F->q_2313)).next_;
}
L_end_2318: ;
f_define_486(F->up, F->z_2309, G_NV((*(P175)rt_nil_check(F->e_693)).line_));
f_elaborate_defaults_672(F->up, F->z_2309);
ret_:

  return;
}

static void f_rename_module_697(struct f_greenc_1fr *up_, P175 e_695, P175 target_696) {
  struct f_rename_module_697fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_695 = e_695;
F->target_696 = target_696;
F->y_2323 = NULL;
F->z_2324 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->target_696)).kind_) == ((rt_int)8LL))) {
F->y_2323 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->target_696)).a_)).name_)));
if ((((F->y_2323 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2323)).kind_) != ((rt_int)9LL))) || ((*(P118)rt_nil_check(F->y_2323)).c_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_695)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->target_696)).a_)).name_)), rt_g_lit(" is not a task family (RM79 8.5)", 32)));
}
f_copy_sym_1102(F->up, F->y_2323, &F->z_2324);
(*(P118)rt_nil_check(F->z_2324)).name_ = (*(P175)rt_nil_check(F->e_695)).name_;
(*(P118)rt_nil_check(F->z_2324)).flags_ = ((rt_int)4LL);
(*(P118)rt_nil_check(F->z_2324)).decl_ = F->target_696;
f_define_486(F->up, F->z_2324, G_NV((*(P175)rt_nil_check(F->e_695)).line_));
goto ret_;
}
if ((G_NV((*(P175)rt_nil_check(F->target_696)).kind_) == ((rt_int)5LL))) {
F->y_2323 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->target_696)).name_)));
} else if ((G_NV((*(P175)rt_nil_check(F->target_696)).kind_) == ((rt_int)9LL))) {
F->y_2323 = f_lookup_path_1091(F->up, f_path_of_363(F->up, F->target_696));
}
if (((F->y_2323 == NULL) || ((G_NV((*(P118)rt_nil_check(F->y_2323)).kind_) != ((rt_int)8LL)) && (G_NV((*(P118)rt_nil_check(F->y_2323)).kind_) != ((rt_int)9LL))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_695)).line_), rt_g_lit("a module is renamed as a module of the same kind (RM79 8.5)", 59));
}
if (((G_NV((*(P118)rt_nil_check(F->y_2323)).kind_) == ((rt_int)9LL)) != (G_NV((*(P175)rt_nil_check(F->e_695)).kind_) == ((rt_int)50LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_695)).line_), rt_g_lit("a package is renamed as a package, a task as a task (RM79 8.5)", 62));
}
f_copy_sym_1102(F->up, F->y_2323, &F->z_2324);
(*(P118)rt_nil_check(F->z_2324)).name_ = (*(P175)rt_nil_check(F->e_695)).name_;
f_define_486(F->up, F->z_2324, G_NV((*(P175)rt_nil_check(F->e_695)).line_));
ret_:

  return;
}

static void f_push_barrier_700(struct f_greenc_1fr *up_, P175 e_698, rt_int limit_699) {
  struct f_push_barrier_700fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_698 = e_698;
F->limit_699 = limit_699;
F->b_2325 = NULL;
F->first_name_2326 = NULL;
F->k_2327 = INT64_MIN;
F->b_2325 = ({ R200 *cell2328 = rt_alloc(sizeof(R200)); *cell2328 = cp_R200(({ R200 ag2329; ag2329.limit_ = F->limit_699; ag2329.keep_ = rt_neg(((rt_int)1LL)); ag2329.allowed_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_698)).formal_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_698)).name_))), one_rt_gstr(44))); ag2329.next_ = F->up->barriers_201; ag2329; })); (P199)cell2328; });
F->k_2327 = ((rt_int)2LL);
while (((G_NV(F->k_2327) <= ({ rt_gstr at2331 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_698)).formal_)); at2331.hi >= at2331.lo ? at2331.hi - at2331.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix2332 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_698)).formal_)); ix2332.p[rt_index(G_NV(F->k_2327), ix2332.lo, ix2332.hi) - ix2332.lo]; })) != 44))) {
F->k_2327 = rt_add(G_NV(F->k_2327), ((rt_int)1LL));
}
L_end_2330: ;
if ((G_NV(F->k_2327) > ((rt_int)2LL))) {
F->first_name_2326 = f_mk_246(F->up, ({ rt_gstr sl2334 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_698)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = rt_sub(G_NV(F->k_2327), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl2334.lo, sl2334.hi); rt_index(h_, sl2334.lo, sl2334.hi); } sl2334.p += l_ - sl2334.lo; sl2334.lo = l_; sl2334.hi = h_; sl2334; }));
(*(P199)rt_nil_check(F->b_2325)).keep_ = f_enclosing_depth_454(F->up, (*(P141)rt_nil_check(F->first_name_2326)));
}
F->up->barriers_201 = F->b_2325;
ret_:

  return;
}

static void f_other_decl_702(struct f_greenc_1fr *up_, P175 e_701) {
  struct f_other_decl_702fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_701 = e_701;
if (((G_NV((*(P175)rt_nil_check(F->e_701)).kind_) == ((rt_int)48LL)) && (G_NV((*(P175)rt_nil_check(F->e_701)).flag_) == ((rt_int)3LL)))) {
f_rename_module_697(F->up, F->e_701, (*(P175)rt_nil_check(F->e_701)).a_);
} else if (((G_NV((*(P175)rt_nil_check(F->e_701)).kind_) == ((rt_int)50LL)) && (G_NV((*(P175)rt_nil_check(F->e_701)).flag_) == ((rt_int)3LL)))) {
f_rename_module_697(F->up, F->e_701, (*(P175)rt_nil_check(F->e_701)).b_);
} else if ((G_NV((*(P175)rt_nil_check(F->e_701)).kind_) == ((rt_int)48LL))) {
f_package_spec_1107(F->up, F->e_701);
} else if ((G_NV((*(P175)rt_nil_check(F->e_701)).kind_) == ((rt_int)49LL))) {
f_package_body_1112(F->up, F->e_701);
} else {
f_task_decl_1198(F->up, F->e_701);
}
ret_:

  return;
}

static void f_scan_labels_705(struct f_greenc_1fr *up_, P175 stmts_703, rt_gstr path_704) {
  struct f_scan_labels_705fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_703 = stmts_703;
F->path_704 = cp_rt_gstr(path_704);
F->s_2335 = NULL;
F->s_2335 = F->stmts_703;
F->a_2336 = NULL;
F->l_2337 = NULL;
F->c_2338 = NULL;
while ((F->s_2335 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)57LL))) {
F->l_2337 = F->up->body_labels_192;
while ((F->l_2337 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2337)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_2335)).name_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_2335)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_2335)).name_))), rt_g_lit(" is already used in this body (RM79 5)", 38)));
}
F->l_2337 = (*(P190)rt_nil_check(F->l_2337)).next_;
}
L_end_2340: ;
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("lbl_", 4), f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_2335)).name_)))), one_rt_gstr(95)), &F->c_2338);
F->up->body_labels_192 = ({ R191 *cell2341 = rt_alloc(sizeof(R191)); *cell2341 = cp_R191(({ R191 ag2342; ag2342.name_ = (*(P175)rt_nil_check(F->s_2335)).name_; ag2342.cname_ = F->c_2338; ag2342.path_ = f_mk_246(F->up, F->path_704); ag2342.frames_ = ((rt_int)0LL); ag2342.line_ = G_NV((*(P175)rt_nil_check(F->s_2335)).line_); ag2342.next_ = F->up->body_labels_192; ag2342; })); (P190)cell2341; });
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)58LL))) {
F->up->body_gotos_193 = ({ R191 *cell2343 = rt_alloc(sizeof(R191)); *cell2343 = cp_R191(({ R191 ag2344; ag2344.name_ = (*(P175)rt_nil_check(F->s_2335)).name_; ag2344.cname_ = NULL; ag2344.path_ = f_mk_246(F->up, F->path_704); ag2344.frames_ = ((rt_int)0LL); ag2344.line_ = G_NV((*(P175)rt_nil_check(F->s_2335)).line_); ag2344.next_ = F->up->body_gotos_193; ag2344; })); (P190)cell2343; });
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)22LL))) {
F->a_2336 = (*(P175)rt_nil_check(F->s_2335)).a_;
while ((F->a_2336 != NULL)) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->a_2336)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
F->a_2336 = (*(P175)rt_nil_check(F->a_2336)).next_;
}
L_end_2345: ;
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->s_2335)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)23LL))) {
F->a_2336 = (*(P175)rt_nil_check(F->s_2335)).b_;
while ((F->a_2336 != NULL)) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->a_2336)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
F->a_2336 = (*(P175)rt_nil_check(F->a_2336)).next_;
}
L_end_2346: ;
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->s_2335)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)24LL))) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->s_2335)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)25LL))) {
f_scan_guarded_709(F->up, (*(P175)rt_nil_check(F->s_2335)).b_, (*(P175)rt_nil_check(F->s_2335)).c_, F->path_704);
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)34LL))) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->s_2335)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(97)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
} else if ((G_NV((*(P175)rt_nil_check(F->s_2335)).kind_) == ((rt_int)35LL))) {
F->a_2336 = (*(P175)rt_nil_check(F->s_2335)).a_;
while ((F->a_2336 != NULL)) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->a_2336)).b_)).kind_) == ((rt_int)34LL))) {
f_scan_labels_705(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->a_2336)).b_)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), rt_g_lit("/a", 2)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
}
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->a_2336)).c_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
F->a_2336 = (*(P175)rt_nil_check(F->a_2336)).next_;
}
L_end_2347: ;
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->s_2335)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_704, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
}
F->s_2335 = (*(P175)rt_nil_check(F->s_2335)).next_;
}
L_end_2339: ;
ret_:

  return;
}

static void f_scan_guarded_709(struct f_greenc_1fr *up_, P175 stmts_706, P175 hs_707, rt_gstr path_708) {
  struct f_scan_guarded_709fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_706 = stmts_706;
F->hs_707 = hs_707;
F->path_708 = cp_rt_gstr(path_708);
F->h_2348 = NULL;
F->h_2348 = F->hs_707;
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
if ((F->hs_707 == NULL)) {
f_scan_labels_705(F->up, F->stmts_706, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_708, one_rt_gstr(99)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
} else {
f_scan_labels_705(F->up, F->stmts_706, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_708, one_rt_gstr(103)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
}
while ((F->h_2348 != NULL)) {
F->up->segments_194 = rt_add(G_NV(F->up->segments_194), ((rt_int)1LL));
f_scan_labels_705(F->up, (*(P175)rt_nil_check(F->h_2348)).b_, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->path_708, one_rt_gstr(104)), rt_g_s2g(rt_str_of_int(G_NV(F->up->segments_194)))), one_rt_gstr(47)));
F->h_2348 = (*(P175)rt_nil_check(F->h_2348)).next_;
}
L_end_2349: ;
ret_:

  return;
}

static rt_int f_count_g_711(struct f_greenc_1fr *up_, rt_gstr p_710) {
  struct f_count_g_711fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_710 = cp_rt_gstr(p_710);
F->n_2350 = INT64_MIN;
F->n_2350 = ((rt_int)0LL);
{ rt_int lo2355 = ({ rt_gstr at2352 = F->p_710; at2352.lo; }), hi2356 = ({ rt_gstr at2353 = F->p_710; at2353.hi; });
for (rt_int it2357 = lo2355; it2357 <= hi2356; it2357++) {
F->i_2354 = it2357;
if ((G_NV(({ rt_gstr ix2358 = F->p_710; ix2358.p[rt_index(F->i_2354, ix2358.lo, ix2358.hi) - ix2358.lo]; })) == 103)) {
F->n_2350 = rt_add(G_NV(F->n_2350), ((rt_int)1LL));
}
}
}
L_end_2351: ;
F->result_ = G_NV(F->n_2350);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_label_body_714(struct f_greenc_1fr *up_, P175 stmts_712, P175 hs_713) {
  struct f_label_body_714fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_712 = stmts_712;
F->hs_713 = hs_713;
F->l_2359 = NULL;
F->g_2360 = NULL;
F->gp_2361 = NULL;
F->lp_2362 = NULL;
F->up->body_labels_192 = NULL;
F->up->body_gotos_193 = NULL;
F->up->segments_194 = ((rt_int)0LL);
f_scan_guarded_709(F->up, F->stmts_712, F->hs_713, rt_g_lit("/", 1));
F->l_2359 = F->up->body_labels_192;
while ((F->l_2359 != NULL)) {
(*(P190)rt_nil_check(F->l_2359)).frames_ = rt_add(G_NV(F->up->frames_151), f_count_g_711(F->up, (*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2359)).path_))));
F->l_2359 = (*(P190)rt_nil_check(F->l_2359)).next_;
}
L_end_2363: ;
F->g_2360 = F->up->body_gotos_193;
while ((F->g_2360 != NULL)) {
F->l_2359 = F->up->body_labels_192;
while (((F->l_2359 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2359)).name_)), (*(P141)rt_nil_check((*(P190)rt_nil_check(F->g_2360)).name_)))))) {
F->l_2359 = (*(P190)rt_nil_check(F->l_2359)).next_;
}
L_end_2365: ;
if ((F->l_2359 == NULL)) {
f_fail_267(F->up, G_NV((*(P190)rt_nil_check(F->g_2360)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P141)rt_nil_check((*(P190)rt_nil_check(F->g_2360)).name_))), rt_g_lit(": no such label in this body (RM79 5.8)", 39)));
}
F->gp_2361 = (*(P190)rt_nil_check(F->g_2360)).path_;
F->lp_2362 = (*(P190)rt_nil_check(F->l_2359)).path_;
if ((({ rt_gstr at2366 = (*(P141)rt_nil_check(F->lp_2362)); at2366.hi >= at2366.lo ? at2366.hi - at2366.lo + 1 : (rt_int)0; }) > ({ rt_gstr at2367 = (*(P141)rt_nil_check(F->gp_2361)); at2367.hi >= at2367.lo ? at2367.hi - at2367.lo + 1 : (rt_int)0; }))) {
f_fail_267(F->up, G_NV((*(P190)rt_nil_check(F->g_2360)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
} else if ((!eq_rt_gstr(({ rt_gstr sl2369 = (*(P141)rt_nil_check(F->gp_2361)); rt_int l_ = ((rt_int)1LL), h_ = ({ rt_gstr at2368 = (*(P141)rt_nil_check(F->lp_2362)); at2368.hi >= at2368.lo ? at2368.hi - at2368.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2369.lo, sl2369.hi); rt_index(h_, sl2369.lo, sl2369.hi); } sl2369.p += l_ - sl2369.lo; sl2369.lo = l_; sl2369.hi = h_; sl2369; }), (*(P141)rt_nil_check(F->lp_2362))))) {
f_fail_267(F->up, G_NV((*(P190)rt_nil_check(F->g_2360)).line_), rt_g_lit("a goto cannot transfer control into a compound statement (RM79 5.8)", 67));
}
{ rt_int lo2374 = rt_add(({ rt_gstr at2371 = (*(P141)rt_nil_check(F->lp_2362)); at2371.hi >= at2371.lo ? at2371.hi - at2371.lo + 1 : (rt_int)0; }), ((rt_int)1LL)), hi2375 = ({ rt_gstr at2372 = (*(P141)rt_nil_check(F->gp_2361)); at2372.hi >= at2372.lo ? at2372.hi - at2372.lo + 1 : (rt_int)0; });
for (rt_int it2376 = lo2374; it2376 <= hi2375; it2376++) {
F->i_2373 = it2376;
if (((G_NV(({ rt_gstr ix2377 = (*(P141)rt_nil_check(F->gp_2361)); ix2377.p[rt_index(F->i_2373, ix2377.lo, ix2377.hi) - ix2377.lo]; })) == 104) || (G_NV(({ rt_gstr ix2378 = (*(P141)rt_nil_check(F->gp_2361)); ix2378.p[rt_index(F->i_2373, ix2378.lo, ix2378.hi) - ix2378.lo]; })) == 97))) {
f_fail_267(F->up, G_NV((*(P190)rt_nil_check(F->g_2360)).line_), rt_g_lit("a goto cannot leave an exception handler or an accept statement (RM79 5.8)", 74));
}
}
}
L_end_2370: ;
F->g_2360 = (*(P190)rt_nil_check(F->g_2360)).next_;
}
L_end_2364: ;
ret_:

  return;
}

static void f_gen_label_717(struct f_greenc_1fr *up_, P175 s_715, int goto_it_716) {
  struct f_gen_label_717fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_715 = s_715;
F->goto_it_716 = goto_it_716;
F->l_2379 = NULL;
F->l_2379 = F->up->body_labels_192;
while (((F->l_2379 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2379)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_715)).name_)))))) {
F->l_2379 = (*(P190)rt_nil_check(F->l_2379)).next_;
}
L_end_2380: ;
if ((F->l_2379 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_715)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("label ", 6), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_715)).name_))), rt_g_lit(" is not in this body (RM79 5.8)", 31)));
}
if (F->goto_it_716) {
f_pop_frames_741(F->up, G_NV((*(P190)rt_nil_check(F->l_2379)).frames_));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2379)).cname_))), one_rt_gstr(59)));
} else {
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P190)rt_nil_check(F->l_2379)).cname_)), rt_g_lit(": ;", 3)));
}
ret_:

  return;
}

static int f_is_foreign_719(struct f_greenc_1fr *up_, P175 d_718) {
  struct f_is_foreign_719fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_718 = d_718;
if (((*(P175)rt_nil_check(F->d_718)).tag_ == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((({ rt_gstr at2381 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_718)).tag_)); at2381.hi >= at2381.lo ? at2381.hi - at2381.lo + 1 : (rt_int)0; }) < ((rt_int)10LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr(({ rt_gstr sl2382 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_718)).tag_)); rt_int l_ = ((rt_int)1LL), h_ = ((rt_int)10LL); if (l_ <= h_) { rt_index(l_, sl2382.lo, sl2382.hi); rt_index(h_, sl2382.lo, sl2382.hi); } sl2382.p += l_ - sl2382.lo; sl2382.lo = l_; sl2382.hi = h_; sl2382; }), rt_g_lit("INTERFACE ", 10));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_foreign_call_723(struct f_greenc_1fr *up_, P175 d_720, P118 y_721, P141 *r_722) {
  struct f_foreign_call_723fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_720 = d_720;
F->y_721 = y_721;
F->r_722 = r_722;
F->lang_2385 = cp_rt_gstr(({ rt_gstr sl2384 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_720)).tag_)); rt_int l_ = ((rt_int)11LL), h_ = ({ rt_gstr at2383 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_720)).tag_)); at2383.hi >= at2383.lo ? at2383.hi - at2383.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl2384.lo, sl2384.hi); rt_index(h_, sl2384.lo, sl2384.hi); } sl2384.p += l_ - sl2384.lo; sl2384.lo = l_; sl2384.hi = h_; sl2384; }));
F->n_2386 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->d_720)).name_)));
F->pm_2387 = NULL;
F->pm_2387 = (*(P118)rt_nil_check(F->y_721)).params_;
F->x_2388 = NULL;
F->ct_2389 = NULL;
F->all_real_2390 = INT_MIN;
F->all_real_2390 = (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_721)).result_)).kind_) == ((rt_int)3LL));
F->x_2388 = f_mk_246(F->up, rt_g_lit("", 0));
while ((F->pm_2387 != NULL)) {
if ((({ rt_gstr at2392 = (*(P141)rt_nil_check(F->x_2388)); at2392.hi >= at2392.lo ? at2392.hi - at2392.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->x_2388 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->x_2388)), rt_g_lit(", ", 2)));
}
if (((G_NV((*(P123)rt_nil_check((*(P2001)rt_nil_check(F->pm_2387)).t_)).kind_) != ((rt_int)3LL)) || (G_NV((*(P2001)rt_nil_check(F->pm_2387)).mode_) != ((rt_int)1LL)))) {
F->all_real_2390 = 0;
}
if ((f_is_string_592(F->up, (*(P2001)rt_nil_check(F->pm_2387)).t_) && (G_NV((*(P2001)rt_nil_check(F->pm_2387)).mode_) == ((rt_int)1LL)))) {
F->x_2388 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_2388)), rt_g_lit("rt_g_g2s(F->", 12)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2387)).cfield_))), one_rt_gstr(41)));
} else {
F->x_2388 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_2388)), rt_g_lit("F->", 3)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2387)).cfield_))));
}
F->pm_2387 = (*(P2001)rt_nil_check(F->pm_2387)).next_;
}
L_end_2391: ;
if ((eq_rt_gstr(F->lang_2385, rt_g_lit("UNSAFE_CONVERSION", 17)) && (((*(P118)rt_nil_check(F->y_721)).params_ != NULL) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_721)).result_)).kind_) != ((rt_int)9LL))))) {
f_ctype_513(F->up, (*(P118)rt_nil_check(F->y_721)).result_, &F->ct_2389);
f_unsafe_bits_729(F->up, (*(P2001)rt_nil_check((*(P118)rt_nil_check(F->y_721)).params_)).t_, (*(P118)rt_nil_check(F->y_721)).result_, cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check((*(P2001)rt_nil_check((*(P118)rt_nil_check(F->y_721)).params_)).cfield_))), (*(P141)rt_nil_check(F->ct_2389)), &(*F->r_722));
} else if (eq_rt_gstr(F->lang_2385, rt_g_lit("C", 1))) {
(*F->r_722) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_", 5), f_lower_s_257(F->up, F->n_2386)), one_rt_gstr(40)), (*(P141)rt_nil_check(F->x_2388))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->lang_2385, rt_g_lit("FORTRAN", 7))) {
if ((!G_NV(F->all_real_2390))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_720)).line_), rt_g_lit("the FORTRAN routines of this implementation take and return real values (RM79 13.9)", 83));
} else if ((((((((((((eq_rt_gstr(F->n_2386, rt_g_lit("SQRT", 4)) || eq_rt_gstr(F->n_2386, rt_g_lit("SIN", 3))) || eq_rt_gstr(F->n_2386, rt_g_lit("COS", 3))) || eq_rt_gstr(F->n_2386, rt_g_lit("TAN", 3))) || eq_rt_gstr(F->n_2386, rt_g_lit("ASIN", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("ACOS", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("ATAN", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("EXP", 3))) || eq_rt_gstr(F->n_2386, rt_g_lit("SINH", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("COSH", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("TANH", 4))) || eq_rt_gstr(F->n_2386, rt_g_lit("ATAN2", 5)))) {
(*F->r_722) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_257(F->up, F->n_2386), one_rt_gstr(40)), (*(P141)rt_nil_check(F->x_2388))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2386, rt_g_lit("ALOG", 4)) || eq_rt_gstr(F->n_2386, rt_g_lit("LOG", 3)))) {
(*F->r_722) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("log(", 4), (*(P141)rt_nil_check(F->x_2388))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2386, rt_g_lit("ALOG10", 6)) || eq_rt_gstr(F->n_2386, rt_g_lit("LOG10", 5)))) {
(*F->r_722) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("log10(", 6), (*(P141)rt_nil_check(F->x_2388))), one_rt_gstr(41)));
} else if ((eq_rt_gstr(F->n_2386, rt_g_lit("ABS", 3)) || eq_rt_gstr(F->n_2386, rt_g_lit("FABS", 4)))) {
(*F->r_722) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P141)rt_nil_check(F->x_2388))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_720)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the FORTRAN library of this implementation has no routine ", 58), F->n_2386), rt_g_lit("; it has SQRT, SIN, COS, TAN, ASIN, ACOS, ATAN, ATAN2, EXP, ALOG, ALOG10, SINH, COSH, ", 86)), rt_g_lit("TANH and ABS (RM79 13.9)", 24)));
}
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_720)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma INTERFACE(", 17), F->lang_2385), rt_g_lit("): this implementation calls C and FORTRAN (RM79 13.9)", 54)));
}
ret_:

  return;
}

static void f_unsafe_bits_729(struct f_greenc_1fr *up_, P123 s_724, P123 t_725, rt_gstr v_726, rt_gstr ct_727, P141 *r_728) {
  struct f_unsafe_bits_729fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_724 = s_724;
F->t_725 = t_725;
F->v_726 = cp_rt_gstr(v_726);
F->ct_727 = cp_rt_gstr(ct_727);
F->r_728 = r_728;
F->ps_2393 = NULL;
F->ps_2393 = f_rep_of_1347(F->up, F->s_724);
F->pt_2394 = NULL;
F->pt_2394 = f_rep_of_1347(F->up, F->t_725);
F->src_2395 = NULL;
F->decode_2396 = NULL;
F->src_2395 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("__typeof__(", 11), F->v_726), rt_g_lit(") s_ = ", 7)), F->v_726), one_rt_gstr(59)));
if (((F->ps_2393 != NULL) && ((*(P218)rt_nil_check(F->ps_2393)).codes_ != NULL))) {
F->src_2395 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const rt_int sc_[] = {", 29), (*(P141)rt_nil_check((*(P218)rt_nil_check(F->ps_2393)).codes_))), rt_g_lit("}; rt_int s_ = sc_[", 19)), F->v_726), rt_g_lit("];", 2)));
}
F->decode_2396 = f_mk_246(F->up, rt_g_lit("", 0));
if (((F->pt_2394 != NULL) && ((*(P218)rt_nil_check(F->pt_2394)).codes_ != NULL))) {
F->decode_2396 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit(" { static const rt_int tc_[] = {", 32), (*(P141)rt_nil_check((*(P218)rt_nil_check(F->pt_2394)).codes_))), rt_g_lit("}; rt_int b_ = 0; memcpy(&b_, &r_, ", 35)), rt_g_lit("sizeof r_); for (int k_ = 0; k_ < (int)(sizeof tc_ / sizeof tc_[0]); k_++) if (tc_[k_] == b_) ", 94)), rt_g_lit("r_ = (", 6)), F->ct_727), rt_g_lit(")k_; }", 6)));
}
(*F->r_728) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), F->ct_727), rt_g_lit(" r_; memset(&r_, 0, sizeof r_); ", 32)), (*(P141)rt_nil_check(F->src_2395))), rt_g_lit(" memcpy(&r_, &s_, sizeof r_ < sizeof s_ \? sizeof r_ : sizeof s_);", 65)), (*(P141)rt_nil_check(F->decode_2396))), rt_g_lit(" r_; })", 7)));
ret_:

  return;
}

static P118 f_code_type_731(struct f_greenc_1fr *up_, P175 s_730) {
  struct f_code_type_731fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_730 = s_730;
F->c_2397 = NULL;
F->y_2398 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->s_730)).kind_) != ((rt_int)21LL))) {
F->result_ = NULL;
goto ret_;
}
F->c_2397 = (*(P175)rt_nil_check(F->s_730)).a_;
if ((G_NV((*(P175)rt_nil_check(F->c_2397)).kind_) != ((rt_int)8LL))) {
F->result_ = NULL;
goto ret_;
}
F->c_2397 = (*(P175)rt_nil_check(F->c_2397)).a_;
if ((G_NV((*(P175)rt_nil_check(F->c_2397)).kind_) == ((rt_int)5LL))) {
F->y_2398 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->c_2397)).name_)));
} else if (((G_NV((*(P175)rt_nil_check(F->c_2397)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->c_2397)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2398 = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->c_2397)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->c_2397)).name_)), ((rt_int)0LL));
}
if (((F->y_2398 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2398)).kind_) == ((rt_int)5LL)))) {
F->result_ = F->y_2398;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_code_body_734(struct f_greenc_1fr *up_, P175 d_732, P118 y_733) {
  struct f_check_code_body_734fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_732 = d_732;
F->y_733 = y_733;
F->s_2399 = NULL;
F->s_2399 = (*(P175)rt_nil_check(F->d_732)).d_;
F->n_2400 = INT64_MIN;
F->n_2400 = ((rt_int)0LL);
F->k_2401 = INT64_MIN;
F->k_2401 = ((rt_int)0LL);
while ((F->s_2399 != NULL)) {
F->n_2400 = rt_add(G_NV(F->n_2400), ((rt_int)1LL));
if ((f_code_type_731(F->up, F->s_2399) != NULL)) {
F->k_2401 = rt_add(G_NV(F->k_2401), ((rt_int)1LL));
}
F->s_2399 = (*(P175)rt_nil_check(F->s_2399)).next_;
}
L_end_2402: ;
if (((G_NV(F->k_2401) > ((rt_int)0LL)) && (((G_NV(F->k_2401) != G_NV(F->n_2400)) || ((*(P175)rt_nil_check(F->d_732)).e_ != NULL)) || (G_NV((*(P118)rt_nil_check(F->y_733)).kind_) != ((rt_int)4LL))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->d_732)).line_), rt_g_lit("a procedure that contains a code statement contains only code statements (RM79 13.8)", 84));
}
ret_:

  return;
}

static void f_subprogram_body_737(struct f_greenc_1fr *up_, P175 d_735, P118 y_736) {
  struct f_subprogram_body_737fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_735 = d_735;
F->y_736 = y_736;
F->saved_body_2403 = NULL;
F->saved_body_2403 = F->up->cur_body_224;
F->saved_code_2404 = NULL;
F->saved_code_2404 = F->up->code_137;
F->saved_fields_2405 = NULL;
F->saved_fields_2405 = F->up->fields_buf_138;
F->saved_in_2406 = INT_MIN;
F->saved_in_2406 = G_NV(F->up->in_func_139);
F->saved_sym_2407 = NULL;
F->saved_sym_2407 = F->up->func_sym_143;
F->saved_exits_2408 = NULL;
F->saved_exits_2408 = F->up->exits_146;
F->saved_frames_2409 = INT64_MIN;
F->saved_frames_2409 = G_NV(F->up->frames_151);
F->saved_handlers_2410 = NULL;
F->saved_handlers_2410 = F->up->handlers_154;
F->saved_cleanups_2411 = NULL;
F->saved_cleanups_2411 = F->up->cleanups_155;
F->saved_labels_2412 = NULL;
F->saved_labels_2412 = F->up->body_labels_192;
F->saved_hx_2413 = NULL;
F->saved_hx_2413 = F->up->handler_exits_195;
F->saved_hd_2414 = INT64_MIN;
F->saved_hd_2414 = G_NV(F->up->handler_depth_196);
F->saved_pure_2415 = NULL;
F->saved_pure_2415 = F->up->pure_sym_235;
F->aw_2416 = NULL;
F->saved_pdepth_2417 = INT64_MIN;
F->saved_pdepth_2417 = G_NV(F->up->pure_depth_236);
F->args_2418 = NULL;
F->head_2419 = NULL;
F->frame_2420 = NULL;
F->parent_2421 = NULL;
F->ct_2422 = NULL;
F->x_2423 = NULL;
F->pm_2424 = NULL;
F->pm_2424 = (*(P118)rt_nil_check(F->y_736)).params_;
F->p_2425 = NULL;
F->frame_2420 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_736)).cname_)), rt_g_lit("fr", 2)));
if (G_NV(F->up->in_func_139)) {
F->parent_2421 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->func_sym_143)).cname_)), rt_g_lit("fr", 2)));
}
F->up->code_137 = f_new_buffer_268(F->up);
F->up->fields_buf_138 = f_new_buffer_268(F->up);
F->up->in_func_139 = 1;
F->up->func_sym_143 = F->y_736;
F->up->exits_146 = NULL;
F->up->frames_151 = ((rt_int)0LL);
F->up->handlers_154 = NULL;
F->up->cleanups_155 = NULL;
F->up->handler_exits_195 = NULL;
F->up->handler_depth_196 = ((rt_int)0LL);
F->up->cur_level_140 = rt_add(G_NV(F->up->cur_level_140), ((rt_int)1LL));
F->args_2418 = f_mk_246(F->up, rt_g_lit("", 0));
f_open_scope_487(F->up);
f_push_unit_456(F->up, (*(P175)rt_nil_check(F->d_735)).name_);
if (((G_NV((*(P118)rt_nil_check(F->y_736)).kind_) == ((rt_int)3LL)) && (!G_NV((*(P118)rt_nil_check(F->y_736)).vrp_)))) {
F->up->pure_sym_235 = F->y_736;
F->up->pure_depth_236 = G_NV(F->up->depth_121);
}
if ((F->parent_2421 != NULL)) {
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(rt_g_lit(" struct ", 8), (*(P141)rt_nil_check(F->parent_2421))), rt_g_lit(" *up;", 5)));
F->args_2418 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check(F->parent_2421))), rt_g_lit(" *up_", 5)));
f_emit_273(F->up, rt_g_lit("F->up = up_;", 12));
}
while ((F->pm_2424 != NULL)) {
f_ctype_513(F->up, (*(P2001)rt_nil_check(F->pm_2424)).t_, &F->ct_2422);
if ((({ rt_gstr at2427 = (*(P141)rt_nil_check(F->args_2418)); at2427.hi >= at2427.lo ? at2427.hi - at2427.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_2418 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->args_2418)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P2001)rt_nil_check(F->pm_2424)).mode_) == ((rt_int)1LL))) {
F->p_2425 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P2001)rt_nil_check(F->pm_2424)).name_);
(*(P118)rt_nil_check(F->p_2425)).ro_ = 1;
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->ct_2422))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))), one_rt_gstr(59)));
F->args_2418 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->args_2418)), (*(P141)rt_nil_check(F->ct_2422))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))));
f_copy_code_645(F->up, (*(P2001)rt_nil_check(F->pm_2424)).t_, (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_)), &F->x_2423);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2423))), one_rt_gstr(59)));
} else {
F->p_2425 = f_new_sym_491(F->up, ((rt_int)1LL), (*(P2001)rt_nil_check(F->pm_2424)).name_);
(*(P118)rt_nil_check(F->p_2425)).byref_ = 1;
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->ct_2422))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))), one_rt_gstr(59)));
F->args_2418 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->args_2418)), (*(P141)rt_nil_check(F->ct_2422))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_2424)).cfield_))), one_rt_gstr(59)));
}
(*(P118)rt_nil_check(F->p_2425)).access_path_ = (*(P2001)rt_nil_check(F->pm_2424)).cfield_;
(*(P118)rt_nil_check(F->p_2425)).t_ = (*(P2001)rt_nil_check(F->pm_2424)).t_;
(*(P118)rt_nil_check(F->p_2425)).c_ = (*(P2001)rt_nil_check(F->pm_2424)).c_;
(*(P118)rt_nil_check(F->p_2425)).level_ = G_NV(F->up->cur_level_140);
f_define_486(F->up, F->p_2425, G_NV((*(P175)rt_nil_check(F->d_735)).line_));
F->pm_2424 = (*(P2001)rt_nil_check(F->pm_2424)).next_;
}
L_end_2426: ;
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_736)).result_)).kind_) != ((rt_int)9LL))) {
f_ctype_513(F->up, (*(P118)rt_nil_check(F->y_736)).result_, &F->ct_2422);
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->ct_2422))), rt_g_lit(" result_;", 9)));
}
if (f_is_foreign_719(F->up, F->d_735)) {
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->d_735)).c_);
f_foreign_call_723(F->up, F->d_735, F->y_736, &F->x_2423);
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_736)).result_)).kind_) == ((rt_int)9LL))) {
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->x_2423)), one_rt_gstr(59)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P141)rt_nil_check(F->x_2423))), one_rt_gstr(59)));
f_emit_273(F->up, rt_g_lit("goto ret_;", 10));
}
} else {
F->up->cur_body_224 = F->d_735;
f_label_body_714(F->up, (*(P175)rt_nil_check(F->d_735)).d_, (*(P175)rt_nil_check(F->d_735)).e_);
f_guarded_749(F->up, (*(P175)rt_nil_check(F->d_735)).c_, (*(P175)rt_nil_check(F->d_735)).d_, (*(P175)rt_nil_check(F->d_735)).e_, G_NV((*(P175)rt_nil_check(F->d_735)).line_));
}
f_task_awaits_1218(F->up, (*(P175)rt_nil_check(F->d_735)).c_, &F->aw_2416);
F->up->nunits_189 = rt_sub(G_NV(F->up->nunits_189), ((rt_int)1LL));
f_close_scope_488(F->up);
F->up->cur_level_140 = rt_sub(G_NV(F->up->cur_level_140), ((rt_int)1LL));
if ((({ rt_gstr at2428 = (*(P141)rt_nil_check(F->args_2418)); at2428.hi >= at2428.lo ? at2428.hi - at2428.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
F->args_2418 = f_mk_246(F->up, rt_g_lit("void", 4));
}
f_ctype_513(F->up, (*(P118)rt_nil_check(F->y_736)).result_, &F->ct_2422);
F->head_2419 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->ct_2422))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_736)).cname_))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->args_2418))), one_rt_gstr(41)));
f_put_to_271(F->up, F->up->out_protos_132, cat_rt_gstr((*(P141)rt_nil_check(F->head_2419)), one_rt_gstr(59)));
f_put_to_271(F->up, F->up->out_frames_130, cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check(F->frame_2420))), rt_g_lit(" { int dummy;", 13)));
f_splice_278(F->up, F->up->out_frames_130, F->up->fields_buf_138);
f_put_to_271(F->up, F->up->out_frames_130, rt_g_lit("};", 2));
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr((*(P141)rt_nil_check(F->head_2419)), rt_g_lit(" {", 2)));
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  struct ", 9), (*(P141)rt_nil_check(F->frame_2420))), rt_g_lit(" *F = rt_alloc(sizeof *F);", 26)));
if (((G_NV((*(P118)rt_nil_check(F->y_736)).kind_) == ((rt_int)4LL)) && ((*(P118)rt_nil_check(F->y_736)).access_path_ != NULL))) {
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_736)).access_path_))));
}
f_splice_278(F->up, F->up->out_funcs_134, F->up->code_137);
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_736)).result_)).kind_) != ((rt_int)9LL))) {
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("  rt_raise(RT_X_INIT);", 22));
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("ret_:", 5));
f_put_to_271(F->up, F->up->out_funcs_134, (*(P141)rt_nil_check(F->aw_2416)));
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("  return F->result_;", 20));
} else {
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("ret_:", 5));
f_put_to_271(F->up, F->up->out_funcs_134, (*(P141)rt_nil_check(F->aw_2416)));
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("  return;", 9));
}
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("}", 1));
f_put_to_271(F->up, F->up->out_funcs_134, rt_g_lit("", 0));
F->up->code_137 = F->saved_code_2404;
F->up->fields_buf_138 = F->saved_fields_2405;
F->up->in_func_139 = G_NV(F->saved_in_2406);
F->up->func_sym_143 = F->saved_sym_2407;
F->up->exits_146 = F->saved_exits_2408;
F->up->frames_151 = G_NV(F->saved_frames_2409);
F->up->handlers_154 = F->saved_handlers_2410;
F->up->cleanups_155 = F->saved_cleanups_2411;
F->up->pure_sym_235 = F->saved_pure_2415;
F->up->pure_depth_236 = G_NV(F->saved_pdepth_2417);
F->up->body_labels_192 = F->saved_labels_2412;
F->up->handler_exits_195 = F->saved_hx_2413;
F->up->handler_depth_196 = G_NV(F->saved_hd_2414);
F->up->cur_body_224 = F->saved_body_2403;
ret_:

  return;
}

static void f_gen_statements_739(struct f_greenc_1fr *up_, P175 stmts_738) {
  struct f_gen_statements_739fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_738 = stmts_738;
F->s_2429 = NULL;
F->s_2429 = F->stmts_738;
while ((F->s_2429 != NULL)) {
f_gen_statement_755(F->up, F->s_2429);
F->s_2429 = (*(P175)rt_nil_check(F->s_2429)).next_;
}
L_end_2430: ;
ret_:

  return;
}

static void f_pop_frames_741(struct f_greenc_1fr *up_, rt_int upto_740) {
  struct f_pop_frames_741fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->upto_740 = upto_740;
F->i_2431 = INT64_MIN;
F->i_2431 = G_NV(F->up->frames_151);
F->c_2432 = NULL;
F->c_2432 = F->up->cleanups_155;
while ((G_NV(F->i_2431) > F->upto_740)) {
f_emit_273(F->up, (*(P141)rt_nil_check((*(P152)rt_nil_check(F->c_2432)).s_)));
F->c_2432 = (*(P152)rt_nil_check(F->c_2432)).next_;
F->i_2431 = rt_sub(G_NV(F->i_2431), ((rt_int)1LL));
}
L_end_2433: ;
ret_:

  return;
}

static void f_push_cleanup_743(struct f_greenc_1fr *up_, rt_gstr s_742) {
  struct f_push_cleanup_743fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_742 = cp_rt_gstr(s_742);
F->up->cleanups_155 = ({ R153 *cell2434 = rt_alloc(sizeof(R153)); *cell2434 = cp_R153(({ R153 ag2435; ag2435.s_ = NULL; ag2435.next_ = F->up->cleanups_155; ag2435; })); (P152)cell2434; });
(*(P152)rt_nil_check(F->up->cleanups_155)).s_ = f_mk_246(F->up, F->s_742);
F->up->frames_151 = rt_add(G_NV(F->up->frames_151), ((rt_int)1LL));
ret_:

  return;
}

static void f_pop_cleanup_744(struct f_greenc_1fr *up_) {
  struct f_pop_cleanup_744fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->up->cleanups_155 = (*(P152)rt_nil_check(F->up->cleanups_155)).next_;
F->up->frames_151 = rt_sub(G_NV(F->up->frames_151), ((rt_int)1LL));
ret_:

  return;
}

static void f_guarded_749(struct f_greenc_1fr *up_, P175 decls_745, P175 stmts_746, P175 hs_747, rt_int line_748) {
  struct f_guarded_749fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_745 = decls_745;
F->stmts_746 = stmts_746;
F->hs_747 = hs_747;
F->line_748 = line_748;
F->saved_hx_2436 = NULL;
F->f_2437 = NULL;
F->x_2438 = NULL;
F->h_2439 = NULL;
F->n_2440 = NULL;
F->first_2441 = INT_MIN;
F->first_2441 = 1;
F->has_others_2442 = INT_MIN;
F->has_others_2442 = 0;
F->conds_2443 = NULL;
if ((F->hs_747 == NULL)) {
f_decl_elements_677(F->up, F->decls_745);
f_gen_statements_739(F->up, F->stmts_746);
goto ret_;
}
f_new_name_249(F->up, rt_g_lit("xf", 2), &F->f_2437);
f_new_name_249(F->up, rt_g_lit("x", 1), &F->x_2438);
f_push_cleanup_743(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->f_2437))), rt_g_lit(");", 2)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_frame ", 11), (*(P141)rt_nil_check(F->f_2437))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P141)rt_nil_check(F->f_2437))), rt_g_lit(")) {", 4)));
f_decl_elements_677(F->up, F->decls_745);
f_gen_statements_739(F->up, F->stmts_746);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->f_2437))), rt_g_lit(");", 2)));
f_emit_273(F->up, rt_g_lit("} else {", 8));
f_pop_cleanup_744(F->up);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->f_2437))), rt_g_lit(");", 2)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P141)rt_nil_check(F->x_2438))), rt_g_lit(" = rt_xcur;", 11)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (rt_g_aborted()) rt_raise(", 29), (*(P141)rt_nil_check(F->x_2438))), rt_g_lit(");", 2)));
F->up->handlers_154 = ({ R153 *cell2444 = rt_alloc(sizeof(R153)); *cell2444 = cp_R153(({ R153 ag2445; ag2445.s_ = F->x_2438; ag2445.next_ = F->up->handlers_154; ag2445; })); (P152)cell2444; });
F->h_2439 = F->hs_747;
while ((F->h_2439 != NULL)) {
F->n_2440 = (*(P175)rt_nil_check(F->h_2439)).a_;
F->conds_2443 = f_mk_246(F->up, rt_g_lit("0", 1));
while ((F->n_2440 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_2440)).name_)), rt_g_lit("OTHERS", 6))) {
F->has_others_2442 = 1;
F->conds_2443 = f_mk_246(F->up, rt_g_lit("1", 1));
} else {
F->up->prefix_hint_233 = (*(P175)rt_nil_check(F->n_2440)).tag_;
f_exc_id_753(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_2440)).name_)), G_NV((*(P175)rt_nil_check(F->h_2439)).line_), &F->f_2437);
F->conds_2443 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->conds_2443)), rt_g_lit(" || ", 4)), (*(P141)rt_nil_check(F->x_2438))), rt_g_lit(" == ", 4)), (*(P141)rt_nil_check(F->f_2437))));
}
F->n_2440 = (*(P175)rt_nil_check(F->n_2440)).next_;
}
L_end_2447: ;
if (G_NV(F->first_2441)) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P141)rt_nil_check(F->conds_2443))), rt_g_lit(") {", 3)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P141)rt_nil_check(F->conds_2443))), rt_g_lit(") {", 3)));
}
F->first_2441 = 0;
F->saved_hx_2436 = F->up->handler_exits_195;
F->up->handler_exits_195 = F->up->exits_146;
F->up->handler_depth_196 = rt_add(G_NV(F->up->handler_depth_196), ((rt_int)1LL));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->h_2439)).b_);
F->up->handler_depth_196 = rt_sub(G_NV(F->up->handler_depth_196), ((rt_int)1LL));
F->up->handler_exits_195 = F->saved_hx_2436;
F->h_2439 = (*(P175)rt_nil_check(F->h_2439)).next_;
}
L_end_2446: ;
if ((!G_NV(F->has_others_2442))) {
f_emit_273(F->up, rt_g_lit("} else {", 8));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P141)rt_nil_check(F->x_2438))), rt_g_lit(");", 2)));
}
f_emit_273(F->up, rt_g_lit("}", 1));
F->up->handlers_154 = (*(P152)rt_nil_check(F->up->handlers_154)).next_;
f_emit_273(F->up, rt_g_lit("}", 1));
f_emit_273(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_exc_id_753(struct f_greenc_1fr *up_, rt_gstr name_750, rt_int line_751, P141 *r_752) {
  struct f_exc_id_753fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_750 = cp_rt_gstr(name_750);
F->line_751 = line_751;
F->r_752 = r_752;
F->y_2448 = NULL;
F->y_2448 = f_lookup_443(F->up, F->name_750);
if ((F->up->prefix_hint_233 != NULL)) {
F->y_2448 = f_member_of_1097(F->up, (*(P141)rt_nil_check(F->up->prefix_hint_233)), F->name_750, F->line_751);
F->up->prefix_hint_233 = NULL;
}
if (((F->y_2448 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2448)).kind_) != ((rt_int)6LL)))) {
f_fail_267(F->up, F->line_751, cat_rt_gstr(F->name_750, rt_g_lit(" is not an exception", 20)));
}
(*F->r_752) = (*(P118)rt_nil_check(F->y_2448)).cname_;
ret_:

  return;
}

static void f_gen_statement_755(struct f_greenc_1fr *up_, P175 s_754) {
  struct f_gen_statement_755fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_754 = s_754;
F->t_2449 = NULL;
F->vt_2450 = NULL;
F->c_2451 = NULL;
F->lv_2452 = NULL;
F->v_2453 = NULL;
F->x_2454 = NULL;
F->ro_2455 = INT_MIN;
{ rt_int sel2456 = G_NV((*(P175)rt_nil_check(F->s_754)).kind_);
if (0 || sel2456 == ((rt_int)20LL)) {
if ((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_754)).a_)).kind_) == ((rt_int)8LL)) && ((*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_754)).a_)).b_ != NULL)) && ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_754)).a_)).b_)).kind_) == ((rt_int)14LL)) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_754)).a_)).b_)).kind_) == ((rt_int)80LL))))) {
f_slice_assign_757(F->up, F->s_754);
goto ret_;
}
F->up->in_lv_path_238 = 1;
F->up->last_deref_239 = 0;
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->s_754)).a_, &F->lv_2452, &F->t_2449, &F->c_2451, &F->ro_2455);
 (void)rt_range(F->ro_2455, 0, 1);
F->up->in_lv_path_238 = 0;
if (G_NV(F->ro_2455)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_754)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1279(F->up, (*(P175)rt_nil_check(F->s_754)).a_, G_NV((*(P175)rt_nil_check(F->s_754)).line_));
if (f_restricted_here_584(F->up, F->t_2449)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_754)).line_), rt_g_lit("a restricted type has no assignment (RM79 7.4)", 46));
}
if (f_is_const_access_800(F->up, (*(P175)rt_nil_check(F->s_754)).b_)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_754)).line_), rt_g_lit("a constant of an access type cannot be assigned to a variable (RM79 3.8)", 72));
}
F->up->vrp_ok_237 = 1;
if (((G_NV((*(P123)rt_nil_check(F->t_2449)).kind_) == ((rt_int)6LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_754)).b_)).kind_) == ((rt_int)12LL)))) {
F->up->agg_bounds_182 = F->lv_2452;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_754)).b_, F->t_2449, &F->vt_2450, &F->v_2453);
F->up->agg_bounds_182 = NULL;
F->up->vrp_ok_237 = 0;
f_check_type_508(F->up, F->vt_2450, F->t_2449, G_NV((*(P175)rt_nil_check(F->s_754)).line_));
f_assign_code_641(F->up, (*(P141)rt_nil_check(F->lv_2452)), F->t_2449, (*(P141)rt_nil_check(F->v_2453)), F->c_2451, &F->x_2454);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2454)));
} else if (0 || sel2456 == ((rt_int)21LL)) {
F->up->vrp_ok_237 = 1;
f_gen_call_759(F->up, F->s_754);
F->up->vrp_ok_237 = 0;
} else if (0 || sel2456 == ((rt_int)22LL)) {
f_gen_if_761(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)23LL)) {
f_gen_case_763(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)24LL)) {
f_gen_loop_775(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)25LL)) {
f_gen_block_777(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)26LL)) {
f_gen_exit_782(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)27LL)) {
f_gen_return_784(F->up, F->s_754);
} else if (0 || sel2456 == ((rt_int)28LL)) {
if (((((*(P175)rt_nil_check(F->s_754)).tag_ != NULL) && f_is_task_name_1170(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_754)).tag_)))) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_754)).name_)), rt_g_lit("FAILURE", 7)))) {
f_task_failure_1220(F->up, F->s_754);
} else {
F->up->prefix_hint_233 = (*(P175)rt_nil_check(F->s_754)).tag_;
f_exc_id_753(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_754)).name_)), G_NV((*(P175)rt_nil_check(F->s_754)).line_), &F->x_2454);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P141)rt_nil_check(F->x_2454))), rt_g_lit(");", 2)));
}
} else if (0 || sel2456 == ((rt_int)29LL)) {
if ((F->up->handlers_154 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_754)).line_), rt_g_lit("raise; outside an exception handler", 35));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_raise(", 9), (*(P141)rt_nil_check((*(P152)rt_nil_check(F->up->handlers_154)).s_))), rt_g_lit(");", 2)));
} else if (0 || sel2456 == ((rt_int)30LL)) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->s_754)).a_, F->up->ty_bool_158, &F->vt_2450, &F->v_2453);
f_check_type_508(F->up, F->vt_2450, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->s_754)).line_));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!(", 6), (*(P141)rt_nil_check(F->v_2453))), rt_g_lit(")) rt_raise(RT_X_ASSERT);", 25)));
} else if (0 || sel2456 == ((rt_int)31LL)) {
} else if (0 || sel2456 == ((rt_int)57LL)) {
f_gen_label_717(F->up, F->s_754, 0);
} else if (0 || sel2456 == ((rt_int)58LL)) {
f_gen_label_717(F->up, F->s_754, 1);
} else {
f_task_statement_gen_1274(F->up, F->s_754);
}
}
ret_:

  return;
}

static void f_slice_assign_757(struct f_greenc_1fr *up_, P175 s_756) {
  struct f_slice_assign_757fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_756 = s_756;
F->lv_2457 = NULL;
F->v_2458 = NULL;
F->sl_2459 = NULL;
F->x_2460 = NULL;
F->t_2461 = NULL;
F->st_2462 = NULL;
F->vt_2463 = NULL;
F->c_2464 = NULL;
F->ro_2465 = INT_MIN;
F->up->in_lv_path_238 = 1;
F->up->last_deref_239 = 0;
f_lvalue_806(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->s_756)).a_)).a_, &F->lv_2457, &F->t_2461, &F->c_2464, &F->ro_2465);
 (void)rt_range(F->ro_2465, 0, 1);
F->up->in_lv_path_238 = 0;
if (G_NV(F->ro_2465)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_756)).line_), rt_g_lit("assignment to a constant or an in parameter", 43));
}
f_check_pure_target_1279(F->up, (*(P175)rt_nil_check(F->s_756)).a_, G_NV((*(P175)rt_nil_check(F->s_756)).line_));
F->ro_2465 = 0;
f_index_on_824(F->up, (*(P141)rt_nil_check(F->lv_2457)), F->t_2461, (*(P175)rt_nil_check(F->s_756)).a_, &F->ro_2465, 0, &F->sl_2459, &F->st_2462, &F->c_2464);
 (void)rt_range(F->ro_2465, 0, 1);
F->up->vrp_ok_237 = 1;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_756)).b_, F->st_2462, &F->vt_2463, &F->v_2458);
F->up->vrp_ok_237 = 0;
f_check_type_508(F->up, F->vt_2463, F->st_2462, G_NV((*(P175)rt_nil_check(F->s_756)).line_));
f_ctype_513(F->up, F->st_2462, &F->x_2460);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P141)rt_nil_check(F->x_2460))), rt_g_lit(" sl_ = ", 7)), (*(P141)rt_nil_check(F->sl_2459))), rt_g_lit("; as_", 5)), (*(P141)rt_nil_check(F->x_2460))), rt_g_lit("(&sl_, ", 7)), (*(P141)rt_nil_check(F->v_2458))), rt_g_lit("); }", 4)));
ret_:

  return;
}

static void f_gen_call_759(struct f_greenc_1fr *up_, P175 s_758) {
  struct f_gen_call_759fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_758 = s_758;
F->c_2466 = NULL;
F->c_2466 = (*(P175)rt_nil_check(F->s_758)).a_;
F->t_2467 = NULL;
F->v_2468 = NULL;
if (((G_NV((*(P175)rt_nil_check(F->c_2466)).kind_) == ((rt_int)5LL)) || (G_NV((*(P175)rt_nil_check(F->c_2466)).kind_) == ((rt_int)9LL)))) {
F->c_2466 = f_nn_320(F->up, ((rt_int)8LL), G_NV((*(P175)rt_nil_check(F->s_758)).line_));
(*(P175)rt_nil_check(F->c_2466)).a_ = (*(P175)rt_nil_check(F->s_758)).a_;
}
if ((G_NV((*(P175)rt_nil_check(F->c_2466)).kind_) != ((rt_int)8LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_758)).line_), rt_g_lit("not a procedure call", 20));
}
F->up->post_checks_197 = NULL;
f_gcall_1057(F->up, F->c_2466, 1, &F->t_2467, &F->v_2468);
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->v_2468)), one_rt_gstr(59)));
if ((F->up->post_checks_197 != NULL)) {
f_emit_273(F->up, (*(P141)rt_nil_check(F->up->post_checks_197)));
F->up->post_checks_197 = NULL;
}
ret_:

  return;
}

static void f_gen_if_761(struct f_greenc_1fr *up_, P175 s_760) {
  struct f_gen_if_761fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_760 = s_760;
F->a_2469 = NULL;
F->a_2469 = (*(P175)rt_nil_check(F->s_760)).a_;
F->first_2470 = INT_MIN;
F->first_2470 = 1;
F->t_2471 = NULL;
F->v_2472 = NULL;
while ((F->a_2469 != NULL)) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->a_2469)).a_, F->up->ty_bool_158, &F->t_2471, &F->v_2472);
f_check_type_508(F->up, F->t_2471, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->s_760)).line_));
if (G_NV(F->first_2470)) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P141)rt_nil_check(F->v_2472))), rt_g_lit(") {", 3)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P141)rt_nil_check(F->v_2472))), rt_g_lit(") {", 3)));
}
F->first_2470 = 0;
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->a_2469)).b_);
F->a_2469 = (*(P175)rt_nil_check(F->a_2469)).next_;
}
L_end_2473: ;
if ((G_NV((*(P175)rt_nil_check(F->s_760)).flag_) == ((rt_int)1LL))) {
f_emit_273(F->up, rt_g_lit("} else {", 8));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_760)).b_);
}
f_emit_273(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_gen_case_763(struct f_greenc_1fr *up_, P175 s_762) {
  struct f_gen_case_763fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_762 = s_762;
F->st_2474 = NULL;
F->vt_2475 = NULL;
F->first_2476 = INT_MIN;
F->first_2476 = 1;
F->a_2477 = NULL;
F->a_2477 = (*(P175)rt_nil_check(F->s_762)).b_;
F->lab_2478 = NULL;
F->sel_2479 = NULL;
F->tmp_2480 = NULL;
F->ct_2481 = NULL;
F->conds_2482 = NULL;
F->v_2483 = NULL;
F->lo_2484 = NULL;
F->hi_2485 = NULL;
F->clo_2487.lo = ((rt_int)1LL); F->clo_2487.hi = ((rt_int)2000LL);
F->clo_2487.lo2 = 1; F->clo_2487.hi2 = 1;
F->clo_2487.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->clo_2487));
for (rt_int i2488 = 0; i2488 < G_CNT(F->clo_2487); i2488++) F->clo_2487.p[i2488] = INT64_MIN;
F->chi_2489.lo = ((rt_int)1LL); F->chi_2489.hi = ((rt_int)2000LL);
F->chi_2489.lo2 = 1; F->chi_2489.hi2 = 1;
F->chi_2489.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->chi_2489));
for (rt_int i2490 = 0; i2490 < G_CNT(F->chi_2489); i2490++) F->chi_2489.p[i2490] = INT64_MIN;
F->nc_2491 = INT64_MIN;
F->nc_2491 = ((rt_int)0LL);
F->vlo_2492 = INT64_MIN;
F->vhi_2493 = INT64_MIN;
F->total_2494 = INT64_MIN;
F->ok_2495 = INT_MIN;
F->ok2_2496 = INT_MIN;
F->y_2497 = NULL;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_762)).a_, NULL, &F->st_2474, &F->sel_2479);
if ((!f_is_discrete_474(F->up, F->st_2474))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), rt_g_lit("the expression of a case statement is of a discrete type (RM79 5.5)", 67));
}
f_new_name_249(F->up, rt_g_lit("sel", 3), &F->tmp_2480);
f_ctype_513(F->up, F->st_2474, &F->ct_2481);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P141)rt_nil_check(F->ct_2481))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->sel_2479))), one_rt_gstr(59)));
while ((F->a_2477 != NULL)) {
F->lab_2478 = (*(P175)rt_nil_check(F->a_2477)).a_;
F->conds_2482 = f_mk_246(F->up, rt_g_lit("0", 1));
while ((F->lab_2478 != NULL)) {
F->y_2497 = NULL;
if ((((*(P175)rt_nil_check(F->lab_2478)).b_ == NULL) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2478)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2497 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2478)).a_)).name_)));
if (((F->y_2497 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2497)).kind_) != ((rt_int)5LL)))) {
F->y_2497 = NULL;
}
}
if ((F->y_2497 != NULL)) {
f_check_type_508(F->up, (*(P118)rt_nil_check(F->y_2497)).t_, F->st_2474, G_NV((*(P175)rt_nil_check(F->s_762)).line_));
if ((!f_static_bounds_500(F->up, (*(P118)rt_nil_check(F->y_2497)).c_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice is static: ", 20), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2478)).a_)).name_))), rt_g_lit(" has no static range (RM79 5.5)", 31)));
}
F->vlo_2492 = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2497)).c_)).mlo_);
F->vhi_2493 = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2497)).c_)).mhi_);
F->conds_2482 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->conds_2482)), rt_g_lit(" || (", 5)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2497)).c_)).lo_))), rt_g_lit(" && ", 4)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" <= ", 4)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2497)).c_)).hi_))), one_rt_gstr(41)));
} else if (((*(P175)rt_nil_check(F->lab_2478)).b_ == NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->lab_2478)).a_, F->st_2474, &F->vt_2475, &F->v_2483);
f_check_type_508(F->up, F->vt_2475, F->st_2474, G_NV((*(P175)rt_nil_check(F->s_762)).line_));
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2478)).a_, &F->vlo_2492, &F->ok_2495);
 (void)rt_range(F->ok_2495, 0, 1);
if ((!G_NV(F->ok_2495))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->vhi_2493 = G_NV(F->vlo_2492);
F->conds_2482 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->conds_2482)), rt_g_lit(" || ", 4)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" == ", 4)), (*(P141)rt_nil_check(F->v_2483))));
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->lab_2478)).a_, F->st_2474, &F->vt_2475, &F->lo_2484);
f_check_type_508(F->up, F->vt_2475, F->st_2474, G_NV((*(P175)rt_nil_check(F->s_762)).line_));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->lab_2478)).b_, F->st_2474, &F->vt_2475, &F->hi_2485);
f_check_type_508(F->up, F->vt_2475, F->st_2474, G_NV((*(P175)rt_nil_check(F->s_762)).line_));
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2478)).a_, &F->vlo_2492, &F->ok_2495);
 (void)rt_range(F->ok_2495, 0, 1);
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2478)).b_, &F->vhi_2493, &F->ok2_2496);
 (void)rt_range(F->ok2_2496, 0, 1);
if ((!(G_NV(F->ok_2495) && G_NV(F->ok2_2496)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), rt_g_lit("a choice of a case statement is static (RM79 5.5)", 49));
}
F->conds_2482 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->conds_2482)), rt_g_lit(" || (", 5)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_2484))), rt_g_lit(" && ", 4)), (*(P141)rt_nil_check(F->tmp_2480))), rt_g_lit(" <= ", 4)), (*(P141)rt_nil_check(F->hi_2485))), one_rt_gstr(41)));
}
if ((G_NV(F->vlo_2492) <= G_NV(F->vhi_2493))) {
{ rt_int lo2502 = ((rt_int)1LL), hi2503 = G_NV(F->nc_2491);
for (rt_int it2504 = lo2502; it2504 <= hi2503; it2504++) {
F->k_2501 = it2504;
if (((G_NV(F->vlo_2492) <= G_NV(({ A2486 ix2505 = F->chi_2489; ix2505.p[rt_index(F->k_2501, ix2505.lo, ix2505.hi) - ix2505.lo]; }))) && (G_NV(({ A2486 ix2506 = F->clo_2487; ix2506.p[rt_index(F->k_2501, ix2506.lo, ix2506.hi) - ix2506.lo]; })) <= G_NV(F->vhi_2493)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), rt_g_lit("a value is covered by two choices of a case statement (RM79 5.5)", 64));
}
}
}
L_end_2500: ;
if ((G_NV(F->nc_2491) < ((rt_int)2000LL))) {
F->nc_2491 = rt_add(G_NV(F->nc_2491), ((rt_int)1LL));
(*({ A2486 *ix2507 = &(F->clo_2487); &ix2507->p[rt_index(G_NV(F->nc_2491), ix2507->lo, ix2507->hi) - ix2507->lo]; })) = G_NV(F->vlo_2492);
(*({ A2486 *ix2508 = &(F->chi_2489); &ix2508->p[rt_index(G_NV(F->nc_2491), ix2508->lo, ix2508->hi) - ix2508->lo]; })) = G_NV(F->vhi_2493);
}
}
F->lab_2478 = (*(P175)rt_nil_check(F->lab_2478)).next_;
}
L_end_2499: ;
if (G_NV(F->first_2476)) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P141)rt_nil_check(F->conds_2482))), rt_g_lit(") {", 3)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P141)rt_nil_check(F->conds_2482))), rt_g_lit(") {", 3)));
}
F->first_2476 = 0;
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->a_2477)).b_);
F->a_2477 = (*(P175)rt_nil_check(F->a_2477)).next_;
}
L_end_2498: ;
if ((G_NV((*(P175)rt_nil_check(F->s_762)).flag_) != ((rt_int)1LL))) {
f_selector_range_769(F->up, (*(P175)rt_nil_check(F->s_762)).a_, F->st_2474, &F->vlo_2492, &F->vhi_2493, &F->ok_2495);
 (void)rt_range(F->ok_2495, 0, 1);
if ((!G_NV(F->ok_2495))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a case statement on ", 20), f_kind_name_504(F->up, F->st_2474)), rt_g_lit(" needs others: its values are not static ", 41)), rt_g_lit("(RM79 5.5)", 10)));
}
F->total_2494 = ((rt_int)0LL);
{ rt_int lo2511 = ((rt_int)1LL), hi2512 = G_NV(F->nc_2491);
for (rt_int it2513 = lo2511; it2513 <= hi2512; it2513++) {
F->k_2510 = it2513;
if (((G_NV(({ A2486 ix2514 = F->clo_2487; ix2514.p[rt_index(F->k_2510, ix2514.lo, ix2514.hi) - ix2514.lo]; })) < G_NV(F->vlo_2492)) || (G_NV(({ A2486 ix2515 = F->chi_2489; ix2515.p[rt_index(F->k_2510, ix2515.lo, ix2515.hi) - ix2515.lo]; })) > G_NV(F->vhi_2493)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a choice of the case statement is outside the values of ", 56), f_kind_name_504(F->up, F->st_2474)), rt_g_lit(" (RM79 5.5)", 11)));
}
F->total_2494 = rt_add(G_NV(F->total_2494), rt_add(rt_sub(G_NV(({ A2486 ix2516 = F->chi_2489; ix2516.p[rt_index(F->k_2510, ix2516.lo, ix2516.hi) - ix2516.lo]; })), G_NV(({ A2486 ix2517 = F->clo_2487; ix2517.p[rt_index(F->k_2510, ix2517.lo, ix2517.hi) - ix2517.lo]; }))), ((rt_int)1LL)));
}
}
L_end_2509: ;
if ((G_NV(F->total_2494) != rt_add(rt_sub(G_NV(F->vhi_2493), G_NV(F->vlo_2492)), ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_762)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of the case statement do not cover every value of ", 62), f_kind_name_504(F->up, F->st_2474)), rt_g_lit(" (RM79 5.5)", 11)));
}
}
if (G_NV(F->first_2476)) {
f_emit_273(F->up, rt_g_lit("{", 1));
} else {
f_emit_273(F->up, rt_g_lit("} else {", 8));
}
if ((G_NV((*(P175)rt_nil_check(F->s_762)).flag_) == ((rt_int)1LL))) {
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_762)).c_);
} else {
f_emit_273(F->up, rt_g_lit("rt_raise(RT_X_CASE);", 20));
}
f_emit_273(F->up, rt_g_lit("}", 1));
f_emit_273(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_selector_range_769(struct f_greenc_1fr *up_, P175 e_764, P123 t_765, rt_int *lo_766, rt_int *hi_767, int *ok_768) {
  struct f_selector_range_769fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_764 = e_764;
F->t_765 = t_765;
F->lo_766 = lo_766;
F->hi_767 = hi_767;
F->ok_768 = ok_768;
F->y_2518 = NULL;
(*F->ok_768) = 0;
(*F->lo_766) = ((rt_int)0LL);
(*F->hi_767) = ((rt_int)0LL);
if ((G_NV((*(P175)rt_nil_check(F->e_764)).kind_) == ((rt_int)5LL))) {
F->y_2518 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_764)).name_)));
if ((((F->y_2518 != NULL) && ((G_NV((*(P118)rt_nil_check(F->y_2518)).kind_) == ((rt_int)1LL)) || (G_NV((*(P118)rt_nil_check(F->y_2518)).kind_) == ((rt_int)2LL)))) && f_static_bounds_500(F->up, (*(P118)rt_nil_check(F->y_2518)).c_))) {
(*F->lo_766) = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2518)).c_)).mlo_);
(*F->hi_767) = G_NV((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_2518)).c_)).mhi_);
(*F->ok_768) = 1;
goto ret_;
}
}
if ((G_NV((*(P123)rt_nil_check(F->t_765)).kind_) == ((rt_int)2LL))) {
(*F->hi_767) = ((rt_int)1LL);
(*F->ok_768) = 1;
} else if (((G_NV((*(P123)rt_nil_check(F->t_765)).kind_) == ((rt_int)11LL)) && ((*(P123)rt_nil_check(F->t_765)).tcons_ == NULL))) {
(*F->hi_767) = ((rt_int)127LL);
(*F->ok_768) = 1;
} else if ((G_NV((*(P123)rt_nil_check(F->t_765)).kind_) == ((rt_int)4LL))) {
(*F->hi_767) = rt_sub(f_list_len_326(F->up, (*(P123)rt_nil_check(F->t_765)).lits_), ((rt_int)1LL));
(*F->ok_768) = 1;
} else if (f_static_bounds_500(F->up, (*(P123)rt_nil_check(F->t_765)).tcons_)) {
(*F->lo_766) = G_NV((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_765)).tcons_)).mlo_);
(*F->hi_767) = G_NV((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_765)).tcons_)).mhi_);
(*F->ok_768) = 1;
}
ret_:

  return;
}

static void f_push_exit_773(struct f_greenc_1fr *up_, P141 match_770, int is_loop_771, P141 *label_772) {
  struct f_push_exit_773fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->match_770 = match_770;
F->is_loop_771 = is_loop_771;
F->label_772 = label_772;
f_new_name_249(F->up, rt_g_lit("L_end_", 6), &(*F->label_772));
F->up->exits_146 = ({ R145 *cell2519 = rt_alloc(sizeof(R145)); *cell2519 = cp_R145(({ R145 ag2520; ag2520.match_ = F->match_770; ag2520.label_ = (*F->label_772); ag2520.depth_ = G_NV(F->up->frames_151); ag2520.is_loop_ = F->is_loop_771; ag2520.next_ = F->up->exits_146; ag2520; })); (P144)cell2519; });
ret_:

  return;
}

static void f_gen_loop_775(struct f_greenc_1fr *up_, P175 s_774) {
  struct f_gen_loop_775fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_774 = s_774;
F->t_2521 = NULL;
F->vt_2522 = NULL;
F->c_2523 = NULL;
F->label_2524 = NULL;
F->cond_2525 = NULL;
F->acc_2526 = NULL;
F->lov_2527 = NULL;
F->hiv_2528 = NULL;
F->it_2529 = NULL;
F->y_2530 = NULL;
F->r_2531 = NULL;
f_push_exit_773(F->up, (*(P175)rt_nil_check(F->s_774)).tag_, 1, &F->label_2524);
if ((G_NV((*(P175)rt_nil_check(F->s_774)).flag_) == ((rt_int)0LL))) {
f_emit_273(F->up, rt_g_lit("for (;;) {", 10));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_774)).b_);
f_emit_273(F->up, rt_g_lit("}", 1));
} else if ((G_NV((*(P175)rt_nil_check(F->s_774)).flag_) == ((rt_int)1LL))) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->s_774)).a_, F->up->ty_bool_158, &F->vt_2522, &F->cond_2525);
f_check_type_508(F->up, F->vt_2522, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->s_774)).line_));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("while (", 7), (*(P141)rt_nil_check(F->cond_2525))), rt_g_lit(") {", 3)));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_774)).b_);
f_emit_273(F->up, rt_g_lit("}", 1));
} else {
F->r_2531 = (*(P175)rt_nil_check(F->s_774)).a_;
F->c_2523 = f_new_cons_494(F->up);
if ((G_NV((*(P175)rt_nil_check(F->r_2531)).kind_) == ((rt_int)14LL))) {
f_range_bounds_845(F->up, (*(P175)rt_nil_check(F->r_2531)).a_, (*(P175)rt_nil_check(F->r_2531)).b_, NULL, G_NV((*(P175)rt_nil_check(F->s_774)).line_), &F->t_2521, &(*(P179)rt_nil_check(F->c_2523)).lo_, &(*(P179)rt_nil_check(F->c_2523)).hi_);
} else {
f_resolve_529(F->up, F->r_2531, &F->t_2521, &F->c_2523);
if (((*(P179)rt_nil_check(F->c_2523)).lo_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_774)).line_), rt_g_lit("a FOR loop needs a discrete range", 33));
}
}
if (((((G_NV((*(P123)rt_nil_check(F->t_2521)).kind_) != ((rt_int)1LL)) && (G_NV((*(P123)rt_nil_check(F->t_2521)).kind_) != ((rt_int)4LL))) && (G_NV((*(P123)rt_nil_check(F->t_2521)).kind_) != ((rt_int)11LL))) && (G_NV((*(P123)rt_nil_check(F->t_2521)).kind_) != ((rt_int)2LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_774)).line_), rt_g_lit("a FOR loop needs a discrete range (RM79 5.6)", 44));
}
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_774)).name_)), F->t_2521, &F->acc_2526);
f_new_name_249(F->up, rt_g_lit("lo", 2), &F->lov_2527);
f_new_name_249(F->up, rt_g_lit("hi", 2), &F->hiv_2528);
f_new_name_249(F->up, rt_g_lit("it", 2), &F->it_2529);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_int ", 9), (*(P141)rt_nil_check(F->lov_2527))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2523)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->hiv_2528))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2523)).hi_))), one_rt_gstr(59)));
if ((G_NV((*(P175)rt_nil_check(F->s_774)).ival_) == ((rt_int)1LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->hiv_2528))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lov_2527))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit("--) {", 5)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int ", 12), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->lov_2527))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit(" <= ", 4)), (*(P141)rt_nil_check(F->hiv_2528))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->it_2529))), rt_g_lit("++) {", 5)));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_2526)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->it_2529))), one_rt_gstr(59)));
f_open_scope_487(F->up);
F->y_2530 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P175)rt_nil_check(F->s_774)).name_);
(*(P118)rt_nil_check(F->y_2530)).t_ = F->t_2521;
(*(P118)rt_nil_check(F->y_2530)).ro_ = 1;
f_bind_663(F->up, F->y_2530, F->acc_2526);
f_define_486(F->up, F->y_2530, G_NV((*(P175)rt_nil_check(F->s_774)).line_));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_774)).b_);
f_close_scope_488(F->up);
f_emit_273(F->up, rt_g_lit("}", 1));
f_emit_273(F->up, rt_g_lit("}", 1));
}
F->up->exits_146 = (*(P144)rt_nil_check(F->up->exits_146)).next_;
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->label_2524)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static void f_gen_block_777(struct f_greenc_1fr *up_, P175 s_776) {
  struct f_gen_block_777fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_776 = s_776;
F->label_2532 = NULL;
F->aw_2533 = NULL;
f_push_exit_773(F->up, (*(P175)rt_nil_check(F->s_776)).tag_, 0, &F->label_2532);
f_emit_273(F->up, rt_g_lit("{", 1));
f_open_scope_487(F->up);
if (((*(P175)rt_nil_check(F->s_776)).tag_ != NULL)) {
f_push_unit_456(F->up, (*(P175)rt_nil_check(F->s_776)).tag_);
}
f_guarded_749(F->up, (*(P175)rt_nil_check(F->s_776)).a_, (*(P175)rt_nil_check(F->s_776)).b_, (*(P175)rt_nil_check(F->s_776)).c_, G_NV((*(P175)rt_nil_check(F->s_776)).line_));
f_task_awaits_1218(F->up, (*(P175)rt_nil_check(F->s_776)).a_, &F->aw_2533);
f_emit_273(F->up, (*(P141)rt_nil_check(F->aw_2533)));
if (((*(P175)rt_nil_check(F->s_776)).tag_ != NULL)) {
F->up->nunits_189 = rt_sub(G_NV(F->up->nunits_189), ((rt_int)1LL));
}
f_close_scope_488(F->up);
f_emit_273(F->up, rt_g_lit("}", 1));
F->up->exits_146 = (*(P144)rt_nil_check(F->up->exits_146)).next_;
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->label_2532)), rt_g_lit(": ;", 3)));
ret_:

  return;
}

static int f_exit_matches_780(struct f_greenc_1fr *up_, P175 s_778, P144 x_779) {
  struct f_exit_matches_780fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_778 = s_778;
F->x_779 = x_779;
if (((*(P175)rt_nil_check(F->s_778)).name_ == NULL)) {
F->result_ = G_NV((*(P144)rt_nil_check(F->x_779)).is_loop_);
goto ret_;
} else if (((*(P144)rt_nil_check(F->x_779)).match_ == NULL)) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P144)rt_nil_check(F->x_779)).match_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_778)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gen_exit_782(struct f_greenc_1fr *up_, P175 s_781) {
  struct f_gen_exit_782fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_781 = s_781;
F->x_2534 = NULL;
F->x_2534 = F->up->exits_146;
F->t_2535 = NULL;
F->v_2536 = NULL;
while ((F->x_2534 != NULL)) {
if (((G_NV(F->up->accept_depth_213) > ((rt_int)0LL)) && (F->x_2534 == F->up->accept_exits_150))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_781)).line_), rt_g_lit("an exit statement cannot leave an accept statement (RM79 5.7)", 61));
}
if (((G_NV(F->up->handler_depth_196) > ((rt_int)0LL)) && (F->x_2534 == F->up->handler_exits_195))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_781)).line_), rt_g_lit("an exit statement cannot leave an exception handler (RM79 5.7)", 62));
}
if (f_exit_matches_780(F->up, F->s_781, F->x_2534)) {
if ((!G_NV((*(P144)rt_nil_check(F->x_2534)).is_loop_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_781)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_781)).name_))), rt_g_lit(": an exit names a loop, not a block (RM79 5.7)", 46)));
}
if (((*(P175)rt_nil_check(F->s_781)).a_ != NULL)) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->s_781)).a_, F->up->ty_bool_158, &F->t_2535, &F->v_2536);
f_check_type_508(F->up, F->t_2535, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->s_781)).line_));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P141)rt_nil_check(F->v_2536))), rt_g_lit(") {", 3)));
}
f_pop_frames_741(F->up, G_NV((*(P144)rt_nil_check(F->x_2534)).depth_));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("goto ", 5), (*(P141)rt_nil_check((*(P144)rt_nil_check(F->x_2534)).label_))), one_rt_gstr(59)));
if (((*(P175)rt_nil_check(F->s_781)).a_ != NULL)) {
f_emit_273(F->up, rt_g_lit("}", 1));
}
goto ret_;
}
F->x_2534 = (*(P144)rt_nil_check(F->x_2534)).next_;
}
L_end_2537: ;
if (((*(P175)rt_nil_check(F->s_781)).name_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_781)).line_), rt_g_lit("exit outside a loop", 19));
}
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_781)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("exit ", 5), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_781)).name_))), rt_g_lit(" names no enclosing loop", 24)));
ret_:

  return;
}

static void f_gen_return_784(struct f_greenc_1fr *up_, P175 s_783) {
  struct f_gen_return_784fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_783 = s_783;
F->vt_2538 = NULL;
F->v_2539 = NULL;
F->x_2540 = NULL;
if ((!G_NV(F->up->in_func_139))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_783)).line_), rt_g_lit("return outside a subprogram", 27));
}
if ((G_NV(F->up->accept_depth_213) > ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_783)).line_), rt_g_lit("a return statement cannot appear in an accept statement (RM79 5.3)", 66));
}
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->up->func_sym_143)).result_)).kind_) == ((rt_int)9LL))) {
if (((*(P175)rt_nil_check(F->s_783)).a_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_783)).line_), rt_g_lit("a procedure returns no value", 28));
}
f_pop_frames_741(F->up, ((rt_int)0LL));
f_emit_273(F->up, rt_g_lit("goto ret_;", 10));
goto ret_;
}
if (((*(P175)rt_nil_check(F->s_783)).a_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_783)).line_), rt_g_lit("return needs a value here", 25));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_783)).a_, (*(P118)rt_nil_check(F->up->func_sym_143)).result_, &F->vt_2538, &F->v_2539);
f_check_type_508(F->up, F->vt_2538, (*(P118)rt_nil_check(F->up->func_sym_143)).result_, G_NV((*(P175)rt_nil_check(F->s_783)).line_));
if (((f_is_numeric_472(F->up, F->vt_2538) || f_is_discrete_474(F->up, F->vt_2538)) && f_bounded_496(F->up, (*(P118)rt_nil_check(F->up->func_sym_143)).c_))) {
f_assign_code_641(F->up, rt_g_lit("F->result_", 10), F->vt_2538, (*(P141)rt_nil_check(F->v_2539)), (*(P118)rt_nil_check(F->up->func_sym_143)).c_, &F->x_2540);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2540)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->result_ = ", 13), (*(P141)rt_nil_check(F->v_2539))), one_rt_gstr(59)));
}
f_pop_frames_741(F->up, ((rt_int)0LL));
f_emit_273(F->up, rt_g_lit("goto ret_;", 10));
ret_:

  return;
}

static void f_access_of_787(struct f_greenc_1fr *up_, P118 y_785, P141 *r_786) {
  struct f_access_of_787fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_785 = y_785;
F->r_786 = r_786;
F->p_2541 = NULL;
if ((G_NV((*(P118)rt_nil_check(F->y_785)).level_) <= ((rt_int)0LL))) {
(*F->r_786) = (*(P118)rt_nil_check(F->y_785)).access_path_;
goto ret_;
}
F->p_2541 = f_mk_246(F->up, rt_g_lit("F", 1));
{ rt_int lo2544 = ((rt_int)1LL), hi2545 = rt_sub(G_NV(F->up->cur_level_140), G_NV((*(P118)rt_nil_check(F->y_785)).level_));
for (rt_int it2546 = lo2544; it2546 <= hi2545; it2546++) {
F->i_2543 = it2546;
F->p_2541 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2541)), rt_g_lit("->up", 4)));
}
}
L_end_2542: ;
if (G_NV((*(P118)rt_nil_check(F->y_785)).byref_)) {
(*F->r_786) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P141)rt_nil_check(F->p_2541))), rt_g_lit("->", 2)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_785)).access_path_))), one_rt_gstr(41)));
} else {
(*F->r_786) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->p_2541)), rt_g_lit("->", 2)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_785)).access_path_))));
}
ret_:

  return;
}

static void f_link_to_790(struct f_greenc_1fr *up_, rt_int l_788, P141 *r_789) {
  struct f_link_to_790fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_788 = l_788;
F->r_789 = r_789;
(*F->r_789) = f_mk_246(F->up, rt_g_lit("F", 1));
{ rt_int lo2549 = ((rt_int)1LL), hi2550 = rt_sub(G_NV(F->up->cur_level_140), F->l_788);
for (rt_int it2551 = lo2549; it2551 <= hi2550; it2551++) {
F->i_2548 = it2551;
(*F->r_789) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->r_789))), rt_g_lit("->up", 4)));
}
}
L_end_2547: ;
ret_:

  return;
}

static rt_gstr f_c_ident_792(struct f_greenc_1fr *up_, rt_gstr s_791) {
  struct f_c_ident_792fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_791 = cp_rt_gstr(s_791);
if (eq_rt_gstr(F->s_791, rt_g_lit("+", 1))) {
F->result_ = rt_g_lit("op_plus", 7);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("-", 1))) {
F->result_ = rt_g_lit("op_minus", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("*", 1))) {
F->result_ = rt_g_lit("op_times", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("/", 1))) {
F->result_ = rt_g_lit("op_slash", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("**", 2))) {
F->result_ = rt_g_lit("op_power", 8);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("&", 1))) {
F->result_ = rt_g_lit("op_cat", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("=", 1))) {
F->result_ = rt_g_lit("op_eq", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("<", 1))) {
F->result_ = rt_g_lit("op_lt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("<=", 2))) {
F->result_ = rt_g_lit("op_le", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit(">", 1))) {
F->result_ = rt_g_lit("op_gt", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit(">=", 2))) {
F->result_ = rt_g_lit("op_ge", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("MOD", 3))) {
F->result_ = rt_g_lit("op_mod", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("AND", 3))) {
F->result_ = rt_g_lit("op_and", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("OR", 2))) {
F->result_ = rt_g_lit("op_or", 5);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("XOR", 3))) {
F->result_ = rt_g_lit("op_xor", 6);
goto ret_;
} else if (eq_rt_gstr(F->s_791, rt_g_lit("NOT", 3))) {
F->result_ = rt_g_lit("op_not", 6);
goto ret_;
}
F->result_ = f_lower_s_257(F->up, F->s_791);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_deref_796(struct f_greenc_1fr *up_, rt_gstr base_793, P123 t_794, P141 *r_795) {
  struct f_deref_796fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_793 = cp_rt_gstr(base_793);
F->t_794 = t_794;
F->r_795 = r_795;
F->ct_2552 = NULL;
if (G_NV(F->up->in_lv_path_238)) {
F->up->last_deref_239 = 1;
}
f_ctype_513(F->up, F->t_794, &F->ct_2552);
(*F->r_795) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*(", 3), (*(P141)rt_nil_check(F->ct_2552))), rt_g_lit(")rt_nil_check(", 14)), F->base_793), rt_g_lit("))", 2)));
ret_:

  return;
}

static int f_is_object_798(struct f_greenc_1fr *up_, P175 e_797) {
  struct f_is_object_798fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_797 = e_797;
F->y_2553 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_797)).kind_) == ((rt_int)5LL))) {
F->y_2553 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_797)).name_)));
if ((!(F->y_2553 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P118)rt_nil_check(F->y_2553)).kind_) == ((rt_int)1LL)) || (G_NV((*(P118)rt_nil_check(F->y_2553)).kind_) == ((rt_int)2LL)));
goto ret_;
} else if ((G_NV((*(P175)rt_nil_check(F->e_797)).kind_) == ((rt_int)9LL))) {
F->result_ = f_is_object_798(F->up, (*(P175)rt_nil_check(F->e_797)).a_);
goto ret_;
} else if ((G_NV((*(P175)rt_nil_check(F->e_797)).kind_) == ((rt_int)8LL))) {
if ((((*(P175)rt_nil_check(F->e_797)).b_ != NULL) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_797)).b_)).kind_) == ((rt_int)14LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_object_798(F->up, (*(P175)rt_nil_check(F->e_797)).a_);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_const_access_800(struct f_greenc_1fr *up_, P175 e_799) {
  struct f_is_const_access_800fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_799 = e_799;
F->y_2554 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_799)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2554 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_799)).name_)));
if ((F->y_2554 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((((G_NV((*(P118)rt_nil_check(F->y_2554)).kind_) != ((rt_int)2LL)) || (rt_rem(G_NV((*(P118)rt_nil_check(F->y_2554)).flags_), ((rt_int)2LL)) != ((rt_int)1LL))) || ((*(P118)rt_nil_check(F->y_2554)).t_ == NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2554)).t_)).kind_) == ((rt_int)8LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_lvalue_806(struct f_greenc_1fr *up_, P175 e_801, P141 *code_out_802, P123 *t_803, P179 *c_804, int *ro_805) {
  struct f_lvalue_806fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_801 = e_801;
F->code_out_802 = code_out_802;
F->t_803 = t_803;
F->c_804 = c_804;
F->ro_805 = ro_805;
F->cp_2555 = INT_MIN;
F->ex_2556 = NULL;
F->y_2557 = NULL;
F->base_2558 = NULL;
F->bt_2559 = NULL;
F->bc_2560 = NULL;
f_expanded_868(F->up, F->e_801, &F->ex_2556);
if ((F->ex_2556 != NULL)) {
f_lvalue_806(F->up, F->ex_2556, &(*F->code_out_802), &(*F->t_803), &(*F->c_804), &(*F->ro_805));
 (void)rt_range((*F->ro_805), 0, 1);
goto ret_;
}
if (((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)5LL)) || ((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->e_801)).a_)))) {
if ((G_NV((*(P175)rt_nil_check(F->e_801)).ival_) > ((rt_int)0LL))) {
F->y_2557 = f_lookup_at_452(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)), rt_sub(G_NV((*(P175)rt_nil_check(F->e_801)).ival_), ((rt_int)1LL)));
} else if ((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)9LL))) {
F->y_2557 = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->e_801)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)), G_NV((*(P175)rt_nil_check(F->e_801)).line_));
} else {
F->y_2557 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)));
}
if ((F->y_2557 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_801)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P118)rt_nil_check(F->y_2557)).kind_) == ((rt_int)12LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_801)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P118)rt_nil_check(F->y_2557)).kind_) != ((rt_int)1LL)) && (G_NV((*(P118)rt_nil_check(F->y_2557)).kind_) != ((rt_int)2LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_801)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_801)).name_)), rt_g_lit(" is not an object", 17)));
}
f_access_of_787(F->up, F->y_2557, &(*F->code_out_802));
(*F->t_803) = (*(P118)rt_nil_check(F->y_2557)).t_;
(*F->c_804) = (*(P118)rt_nil_check(F->y_2557)).c_;
(*F->ro_805) = G_NV((*(P118)rt_nil_check(F->y_2557)).ro_);
} else if ((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)15LL))) {
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->e_801)).a_, &(*F->code_out_802), &(*F->t_803), &(*F->c_804), &(*F->ro_805));
 (void)rt_range((*F->ro_805), 0, 1);
} else if ((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)9LL))) {
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->e_801)).a_, &F->base_2558, &F->bt_2559, &F->bc_2560, &(*F->ro_805));
 (void)rt_range((*F->ro_805), 0, 1);
F->cp_2555 = ((G_NV((*(P123)rt_nil_check(F->bt_2559)).kind_) == ((rt_int)8LL)) && f_is_const_access_800(F->up, (*(P175)rt_nil_check(F->e_801)).a_));
f_select_on_815(F->up, (*(P141)rt_nil_check(F->base_2558)), F->bt_2559, F->e_801, &(*F->ro_805), 1, &(*F->code_out_802), &(*F->t_803), &(*F->c_804));
 (void)rt_range((*F->ro_805), 0, 1);
(*F->ro_805) = (G_NV((*F->ro_805)) || G_NV(F->cp_2555));
} else if ((G_NV((*(P175)rt_nil_check(F->e_801)).kind_) == ((rt_int)8LL))) {
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->e_801)).a_, &F->base_2558, &F->bt_2559, &F->bc_2560, &(*F->ro_805));
 (void)rt_range((*F->ro_805), 0, 1);
F->cp_2555 = ((G_NV((*(P123)rt_nil_check(F->bt_2559)).kind_) == ((rt_int)8LL)) && f_is_const_access_800(F->up, (*(P175)rt_nil_check(F->e_801)).a_));
f_index_on_824(F->up, (*(P141)rt_nil_check(F->base_2558)), F->bt_2559, F->e_801, &(*F->ro_805), 1, &(*F->code_out_802), &(*F->t_803), &(*F->c_804));
 (void)rt_range((*F->ro_805), 0, 1);
(*F->ro_805) = (G_NV((*F->ro_805)) || G_NV(F->cp_2555));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_801)).line_), rt_g_lit("not an object", 13));
}
ret_:

  return;
}

static void f_select_on_815(struct f_greenc_1fr *up_, rt_gstr base_807, P123 bt_808, P175 e_809, int *ro_810, int lv_811, P141 *code_out_812, P123 *t_813, P179 *c_814) {
  struct f_select_on_815fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_807 = cp_rt_gstr(base_807);
F->bt_808 = bt_808;
F->e_809 = e_809;
F->ro_810 = ro_810;
F->lv_811 = lv_811;
F->code_out_812 = code_out_812;
F->t_813 = t_813;
F->c_814 = c_814;
F->f_2561 = NULL;
F->d_2562 = NULL;
F->ct_2563 = NULL;
F->tmp_2564 = NULL;
(*F->c_814) = F->up->no_cons_228;
if ((G_NV((*(P123)rt_nil_check(F->bt_808)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_629(F->up, F->bt_808);
f_deref_796(F->up, F->base_807, F->bt_808, &F->d_2562);
(*F->ro_810) = 0;
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_)), rt_g_lit("ALL", 3))) {
(*F->code_out_812) = F->d_2562;
(*F->t_813) = (*(P123)rt_nil_check(F->bt_808)).target_;
goto ret_;
}
f_select_on_815(F->up, (*(P141)rt_nil_check(F->d_2562)), (*(P123)rt_nil_check(F->bt_808)).target_, F->e_809, &(*F->ro_810), 1, &(*F->code_out_812), &(*F->t_813), &(*F->c_814));
 (void)rt_range((*F->ro_810), 0, 1);
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check(F->bt_808)).kind_) == ((rt_int)7LL))) {
if ((G_NV((*(P123)rt_nil_check(F->bt_808)).priv_) && (!f_inside_package_1099(F->up, (*(P123)rt_nil_check(F->bt_808)).decl_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_809)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the components of private type ", 31), f_kind_name_504(F->up, F->bt_808)), rt_g_lit(" are not visible here (RM79 7.4)", 32)));
}
F->f_2561 = (*(P123)rt_nil_check(F->bt_808)).fields_;
while ((F->f_2561 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2561)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_)))) {
f_subst_cons_601(F->up, (*(P2019)rt_nil_check(F->f_2561)).c_, F->base_807, &(*F->c_814));
(*F->code_out_812) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(F->base_807, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_)))));
(*F->t_813) = (*(P2019)rt_nil_check(F->f_2561)).t_;
if (G_NV((*(P2019)rt_nil_check(F->f_2561)).is_const_)) {
(*F->ro_810) = 1;
}
if (((*(P2019)rt_nil_check(F->f_2561)).cond_ != NULL)) {
f_ctype_513(F->up, F->bt_808, &F->ct_2563);
f_new_name_249(F->up, rt_g_lit("vr", 2), &F->tmp_2564);
if (F->lv_811) {
(*F->code_out_812) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P141)rt_nil_check(F->ct_2563))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check(F->tmp_2564))), rt_g_lit(" = &(", 5)), F->base_807), rt_g_lit("); if (!(", 9)), f_subst_595(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2561)).cond_)), cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P141)rt_nil_check(F->tmp_2564))), one_rt_gstr(41)))), rt_g_lit(")) rt_raise(RT_X_TAG); &", 24)), (*(P141)rt_nil_check(F->tmp_2564))), rt_g_lit("->", 2)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_)))), rt_g_lit("; }))", 5)));
} else {
(*F->code_out_812) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2563))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2564))), rt_g_lit(" = ", 3)), F->base_807), rt_g_lit("; if (!(", 8)), f_subst_595(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2561)).cond_)), (*(P141)rt_nil_check(F->tmp_2564)))), rt_g_lit(")) rt_raise(RT_X_TAG); ", 23)), (*(P141)rt_nil_check(F->tmp_2564))), one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_)))), rt_g_lit("; })", 4)));
}
}
goto ret_;
}
F->f_2561 = (*(P2019)rt_nil_check(F->f_2561)).next_;
}
L_end_2565: ;
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_809)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_504(F->up, F->bt_808), rt_g_lit(" has no component ", 18)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_))));
}
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_809)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("cannot select ", 14), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_809)).name_))), rt_g_lit(" here", 5)));
ret_:

  return;
}

static void f_index_on_824(struct f_greenc_1fr *up_, rt_gstr base_816, P123 bt_817, P175 e_818, int *ro_819, int lv_820, P141 *code_out_821, P123 *t_822, P179 *c_823) {
  struct f_index_on_824fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->base_816 = cp_rt_gstr(base_816);
F->bt_817 = bt_817;
F->e_818 = e_818;
F->ro_819 = ro_819;
F->lv_820 = lv_820;
F->code_out_821 = code_out_821;
F->t_822 = t_822;
F->c_823 = c_823;
F->a_2566 = NULL;
F->a_2566 = (*(P175)rt_nil_check(F->e_818)).b_;
F->arrt_2567 = NULL;
F->arrt_2567 = F->bt_817;
F->acc_2568 = NULL;
F->acc_2568 = f_mk_246(F->up, F->base_816);
F->it_2569 = NULL;
F->i_2570 = NULL;
F->lo_2571 = NULL;
F->hi_2572 = NULL;
F->d_2573 = NULL;
F->ct_2574 = NULL;
F->tmp_2575 = NULL;
(*F->c_823) = F->up->no_cons_228;
if ((G_NV((*(P123)rt_nil_check(F->bt_817)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_629(F->up, F->bt_817);
f_deref_796(F->up, F->base_816, F->bt_817, &F->d_2573);
(*F->ro_819) = 0;
f_index_on_824(F->up, (*(P141)rt_nil_check(F->d_2573)), (*(P123)rt_nil_check(F->bt_817)).target_, F->e_818, &(*F->ro_819), F->lv_820, &(*F->code_out_821), &(*F->t_822), &(*F->c_823));
 (void)rt_range((*F->ro_819), 0, 1);
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check(F->bt_817)).kind_) != ((rt_int)6LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_818)).line_), rt_g_lit("cannot index this", 17));
}
if ((F->a_2566 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_818)).line_), rt_g_lit("an index is required", 20));
}
if ((((G_NV((*(P175)rt_nil_check(F->a_2566)).kind_) == ((rt_int)14LL)) || (G_NV((*(P175)rt_nil_check(F->a_2566)).kind_) == ((rt_int)80LL))) || ((G_NV((*(P175)rt_nil_check(F->a_2566)).kind_) == ((rt_int)5LL)) && f_is_type_name_829(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_2566)).name_)))))) {
if ((((*(P175)rt_nil_check(F->a_2566)).next_ != NULL) || (G_NV((*(P123)rt_nil_check(F->bt_817)).dims_) != ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_818)).line_), rt_g_lit("a slice is taken of a one-dimensional array (RM79 4.3)", 54));
}
f_discrete_bounds_543(F->up, F->a_2566, (*(P123)rt_nil_check(F->bt_817)).idx_, &F->it_2569, &F->lo_2571, &F->hi_2572);
f_check_type_508(F->up, F->it_2569, (*(P123)rt_nil_check(F->bt_817)).idx_, G_NV((*(P175)rt_nil_check(F->e_818)).line_));
f_ctype_513(F->up, F->bt_817, &F->d_2573);
f_new_name_249(F->up, rt_g_lit("sl", 2), &F->tmp_2575);
(*F->code_out_821) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->d_2573))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(" = ", 3)), F->base_816), rt_g_lit("; rt_int l_ = ", 14)), (*(P141)rt_nil_check(F->lo_2571))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check(F->hi_2572))), rt_g_lit("; if (l_ <= h_) { rt_index(l_, ", 31)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo, ", 5)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".hi); ", 6)), rt_g_lit("rt_index(h_, ", 13)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo, ", 5)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".hi); } ", 8)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".p += l_ - ", 11)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo; ", 5)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo = l_; ", 10)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".hi = h_; ", 10)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit("; })", 4)));
(*F->t_822) = F->bt_817;
(*F->ro_819) = 1;
goto ret_;
}
if ((f_list_len_326(F->up, F->a_2566) > G_NV((*(P123)rt_nil_check(F->bt_817)).dims_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_818)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("too many indexes for ", 21), f_kind_name_504(F->up, F->bt_817)), rt_g_lit(" (RM79 4.1.1)", 13)));
}
while ((F->a_2566 != NULL)) {
f_gexpr_850(F->up, F->a_2566, (*(P123)rt_nil_check(F->arrt_2567)).idx_, &F->it_2569, &F->i_2570);
f_check_type_508(F->up, F->it_2569, (*(P123)rt_nil_check(F->arrt_2567)).idx_, G_NV((*(P175)rt_nil_check(F->e_818)).line_));
f_ctype_513(F->up, F->arrt_2567, &F->ct_2574);
f_new_name_249(F->up, rt_g_lit("ix", 2), &F->tmp_2575);
if (F->lv_820) {
F->acc_2568 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*({ ", 5), (*(P141)rt_nil_check(F->ct_2574))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(" = &(", 5)), (*(P141)rt_nil_check(F->acc_2568))), rt_g_lit("); &", 4)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit("->p[rt_index(", 13)), (*(P141)rt_nil_check(F->i_2570))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit("->lo, ", 6)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit("->hi) - ", 8)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit("->lo]; }))", 10)));
} else {
F->acc_2568 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2574))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->acc_2568))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".p[rt_index(", 12)), (*(P141)rt_nil_check(F->i_2570))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo, ", 5)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".hi) - ", 7)), (*(P141)rt_nil_check(F->tmp_2575))), rt_g_lit(".lo]; })", 8)));
}
(*F->c_823) = (*(P123)rt_nil_check(F->arrt_2567)).elemcons_;
F->arrt_2567 = (*(P123)rt_nil_check(F->arrt_2567)).elem_;
F->a_2566 = (*(P175)rt_nil_check(F->a_2566)).next_;
}
L_end_2576: ;
(*F->code_out_821) = F->acc_2568;
(*F->t_822) = F->arrt_2567;
if ((!F->lv_820)) {
(*F->ro_819) = 1;
}
ret_:

  return;
}

static int f_type_attribute_827(struct f_greenc_1fr *up_, P123 t_825, rt_gstr name_826) {
  struct f_type_attribute_827fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_825 = t_825;
F->name_826 = cp_rt_gstr(name_826);
F->y_2577 = NULL;
F->y_2577 = ({ A117 ix2578 = F->up->table_120; ix2578.p[rt_index(f_hash_436(F->up, F->name_826), ix2578.lo, ix2578.hi) - ix2578.lo]; });
F->p_2579 = NULL;
while ((F->y_2577 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2577)).name_)), F->name_826) && ((G_NV((*(P118)rt_nil_check(F->y_2577)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2577)).kind_) == ((rt_int)4LL))))) {
if (f_same_463(F->up, (*(P118)rt_nil_check(F->y_2577)).result_, F->t_825)) {
F->result_ = 1;
goto ret_;
}
F->p_2579 = (*(P118)rt_nil_check(F->y_2577)).params_;
while ((F->p_2579 != NULL)) {
if (f_same_463(F->up, (*(P2001)rt_nil_check(F->p_2579)).t_, F->t_825)) {
F->result_ = 1;
goto ret_;
}
F->p_2579 = (*(P2001)rt_nil_check(F->p_2579)).next_;
}
L_end_2581: ;
}
F->y_2577 = (*(P118)rt_nil_check(F->y_2577)).chain_;
}
L_end_2580: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_type_name_829(struct f_greenc_1fr *up_, rt_gstr n_828) {
  struct f_is_type_name_829fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_828 = cp_rt_gstr(n_828);
F->y_2582 = NULL;
F->y_2582 = f_lookup_443(F->up, F->n_828);
if ((!(F->y_2582 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P118)rt_nil_check(F->y_2582)).kind_) == ((rt_int)5LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_char_lit_831(struct f_greenc_1fr *up_, P175 e_830) {
  struct f_is_char_lit_831fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_830 = e_830;
if ((!(G_NV((*(P175)rt_nil_check(F->e_830)).kind_) == ((rt_int)3LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (({ rt_gstr at2583 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_830)).name_)); at2583.hi >= at2583.lo ? at2583.hi - at2583.lo + 1 : (rt_int)0; }) == ((rt_int)1LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_enum_lit_833(struct f_greenc_1fr *up_, P175 e_832) {
  struct f_is_enum_lit_833fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_832 = e_832;
F->y_2584 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_832)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->y_2584 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_832)).name_)));
if ((!(F->y_2584 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P118)rt_nil_check(F->y_2584)).kind_) == ((rt_int)7LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_c_string_835(struct f_greenc_1fr *up_, rt_gstr s_834) {
  struct f_c_string_835fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_834 = cp_rt_gstr(s_834);
F->n_2585 = INT64_MIN;
F->n_2585 = ((rt_int)0LL);
{ rt_int lo2589 = ((rt_int)1LL), hi2590 = ({ rt_gstr at2587 = F->s_834; at2587.hi >= at2587.lo ? at2587.hi - at2587.lo + 1 : (rt_int)0; });
for (rt_int it2591 = lo2589; it2591 <= hi2590; it2591++) {
F->i_2588 = it2591;
if ((((G_NV(({ rt_gstr ix2592 = F->s_834; ix2592.p[rt_index(F->i_2588, ix2592.lo, ix2592.hi) - ix2592.lo]; })) == 34) || (G_NV(({ rt_gstr ix2593 = F->s_834; ix2593.p[rt_index(F->i_2588, ix2593.lo, ix2593.hi) - ix2593.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2594 = F->s_834; ix2594.p[rt_index(F->i_2588, ix2594.lo, ix2594.hi) - ix2594.lo]; })) == 63))) {
F->n_2585 = rt_add(G_NV(F->n_2585), ((rt_int)1LL));
}
}
}
L_end_2586: ;
{
F->r_2597.lo = ((rt_int)1LL); F->r_2597.hi = rt_add(rt_add(({ rt_gstr at2596 = F->s_834; at2596.hi >= at2596.lo ? at2596.hi - at2596.lo + 1 : (rt_int)0; }), G_NV(F->n_2585)), ((rt_int)2LL));
F->r_2597.lo2 = 1; F->r_2597.hi2 = 1;
F->r_2597.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->r_2597));
memset(F->r_2597.p, 0xFF, (size_t)G_CNT(F->r_2597));
F->j_2599 = INT64_MIN;
F->j_2599 = ((rt_int)1LL);
(*({ rt_gstr *ix2600 = &(F->r_2597); &ix2600->p[rt_index(((rt_int)1LL), ix2600->lo, ix2600->hi) - ix2600->lo]; })) = 34;
{ rt_int lo2604 = ((rt_int)1LL), hi2605 = ({ rt_gstr at2602 = F->s_834; at2602.hi >= at2602.lo ? at2602.hi - at2602.lo + 1 : (rt_int)0; });
for (rt_int it2606 = lo2604; it2606 <= hi2605; it2606++) {
F->i_2603 = it2606;
F->j_2599 = rt_add(G_NV(F->j_2599), ((rt_int)1LL));
if ((((G_NV(({ rt_gstr ix2607 = F->s_834; ix2607.p[rt_index(F->i_2603, ix2607.lo, ix2607.hi) - ix2607.lo]; })) == 34) || (G_NV(({ rt_gstr ix2608 = F->s_834; ix2608.p[rt_index(F->i_2603, ix2608.lo, ix2608.hi) - ix2608.lo]; })) == 92)) || (G_NV(({ rt_gstr ix2609 = F->s_834; ix2609.p[rt_index(F->i_2603, ix2609.lo, ix2609.hi) - ix2609.lo]; })) == 63))) {
(*({ rt_gstr *ix2610 = &(F->r_2597); &ix2610->p[rt_index(G_NV(F->j_2599), ix2610->lo, ix2610->hi) - ix2610->lo]; })) = 92;
F->j_2599 = rt_add(G_NV(F->j_2599), ((rt_int)1LL));
}
(*({ rt_gstr *ix2611 = &(F->r_2597); &ix2611->p[rt_index(G_NV(F->j_2599), ix2611->lo, ix2611->hi) - ix2611->lo]; })) = G_NV(({ rt_gstr ix2612 = F->s_834; ix2612.p[rt_index(F->i_2603, ix2612.lo, ix2612.hi) - ix2612.lo]; }));
}
}
L_end_2601: ;
(*({ rt_gstr *ix2613 = &(F->r_2597); &ix2613->p[rt_index(rt_add(G_NV(F->j_2599), ((rt_int)1LL)), ix2613->lo, ix2613->hi) - ix2613->lo]; })) = 34;
F->result_ = F->r_2597;
goto ret_;

}
L_end_2595: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_literal_837(struct f_greenc_1fr *up_, P175 e_836) {
  struct f_is_literal_837fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_836 = e_836;
if ((((G_NV((*(P175)rt_nil_check(F->e_836)).kind_) == ((rt_int)1LL)) || (G_NV((*(P175)rt_nil_check(F->e_836)).kind_) == ((rt_int)2LL))) || f_is_char_lit_831(F->up, F->e_836))) {
F->result_ = 1;
goto ret_;
} else if (((G_NV((*(P175)rt_nil_check(F->e_836)).kind_) == ((rt_int)15LL)) || ((G_NV((*(P175)rt_nil_check(F->e_836)).kind_) == ((rt_int)6LL)) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("NOT", 3)))))) {
F->result_ = f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_836)).a_);
goto ret_;
} else if (((G_NV((*(P175)rt_nil_check(F->e_836)).kind_) == ((rt_int)7LL)) && (((((eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("+", 1)) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("-", 1))) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("*", 1))) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("/", 1))) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("**", 2))) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_836)).name_)), rt_g_lit("MOD", 3))))) {
F->result_ = (f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_836)).a_) && f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_836)).b_));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_range_bounds_845(struct f_greenc_1fr *up_, P175 l_838, P175 h_839, P123 want_840, rt_int line_841, P123 *t_842, P141 *lo_843, P141 *hi_844) {
  struct f_range_bounds_845fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->l_838 = l_838;
F->h_839 = h_839;
F->want_840 = want_840;
F->line_841 = line_841;
F->t_842 = t_842;
F->lo_843 = lo_843;
F->hi_844 = hi_844;
F->w_2614 = NULL;
F->w_2614 = F->want_840;
F->t2_2615 = NULL;
if ((((F->w_2614 == NULL) && f_is_char_lit_831(F->up, F->l_838)) && f_is_char_lit_831(F->up, F->h_839))) {
F->w_2614 = F->up->ty_char_160;
}
if ((((F->w_2614 == NULL) && f_is_literal_837(F->up, F->l_838)) && (!f_is_literal_837(F->up, F->h_839)))) {
f_gexpr_850(F->up, F->h_839, NULL, &(*F->t_842), &(*F->hi_844));
f_gexpr_850(F->up, F->l_838, (*F->t_842), &F->t2_2615, &(*F->lo_843));
f_check_type_508(F->up, F->t2_2615, (*F->t_842), F->line_841);
} else {
f_gexpr_850(F->up, F->l_838, F->w_2614, &(*F->t_842), &(*F->lo_843));
f_gexpr_850(F->up, F->h_839, (*F->t_842), &F->t2_2615, &(*F->hi_844));
f_check_type_508(F->up, F->t2_2615, (*F->t_842), F->line_841);
}
ret_:

  return;
}

static void f_gexpr_850(struct f_greenc_1fr *up_, P175 e_846, P123 want_847, P123 *t_848, P141 *r_849) {
  struct f_gexpr_850fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_846 = e_846;
F->want_847 = want_847;
F->t_848 = t_848;
F->r_849 = r_849;
F->saved_lv_2616 = INT_MIN;
F->saved_lv_2616 = G_NV(F->up->in_lv_path_238);
F->w_2617 = NULL;
F->w_2617 = F->want_847;
F->up->in_lv_path_238 = 0;
if (((F->w_2617 != NULL) && (((*(P123)rt_nil_check(F->w_2617)).view_of_ != NULL) && (G_NV(F->up->in_instance_211) == ((rt_int)0LL))))) {
F->w_2617 = f_base_view_465(F->up, F->w_2617);
}
f_gexpr_1_855(F->up, F->e_846, F->w_2617, &(*F->t_848), &(*F->r_849));
F->up->in_lv_path_238 = G_NV(F->saved_lv_2616);
ret_:

  return;
}

static void f_gexpr_1_855(struct f_greenc_1fr *up_, P175 e_851, P123 want_852, P123 *t_853, P141 *r_854) {
  struct f_gexpr_1_855fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_851 = e_851;
F->want_852 = want_852;
F->t_853 = t_853;
F->r_854 = r_854;
F->y_2618 = NULL;
F->bt_2619 = NULL;
F->c_2620 = NULL;
F->ro_2621 = INT_MIN;
F->base_2622 = NULL;
F->a_2623 = NULL;
F->nm_2624 = NULL;
F->c2_2625 = NULL;
(*F->t_853) = F->up->ty_int_157;
{ rt_int sel2626 = G_NV((*(P175)rt_nil_check(F->e_851)).kind_);
if (0 || sel2626 == ((rt_int)1LL)) {
if (((F->want_852 != NULL) && ((G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)1LL)) && ((*(P123)rt_nil_check(F->want_852)).view_of_ == NULL)))) {
(*F->t_853) = F->want_852;
}
(*F->r_854) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P175)rt_nil_check(F->e_851)).ival_)))), rt_g_lit("LL)", 3)));
} else if (0 || sel2626 == ((rt_int)2LL)) {
(*F->t_853) = F->up->ty_float_159;
(*F->r_854) = (*(P175)rt_nil_check(F->e_851)).name_;
if (((F->want_852 != NULL) && ((G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)3LL)) && ((*(P123)rt_nil_check(F->want_852)).view_of_ == NULL)))) {
(*F->t_853) = F->want_852;
} else if ((((F->want_852 != NULL) && (G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)16LL))) && ((*(P123)rt_nil_check(F->want_852)).fsmall_ != NULL))) {
(*F->t_853) = F->want_852;
(*F->r_854) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_851)).name_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->want_852)).fsmall_))), one_rt_gstr(41)));
}
} else if (0 || sel2626 == ((rt_int)3LL)) {
if (((f_is_char_lit_831(F->up, F->e_851) && (F->want_852 != NULL)) && (((G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)11LL)) || (G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)4LL))) && ((*(P123)rt_nil_check(F->want_852)).view_of_ == NULL)))) {
f_char_literal_865(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if ((((((F->want_852 != NULL) && (G_NV((*(P123)rt_nil_check(F->want_852)).kind_) == ((rt_int)6LL))) && (G_NV((*(P123)rt_nil_check(F->want_852)).dims_) == ((rt_int)1LL))) && ((G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->want_852)).elem_)).kind_) == ((rt_int)11LL)) || (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->want_852)).elem_)).kind_) == ((rt_int)4LL)))) && (!f_is_string_592(F->up, F->want_852)))) {
f_string_aggregate_860(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else {
(*F->t_853) = F->up->ty_string_161;
if (((F->want_852 != NULL) && f_is_string_592(F->up, F->want_852))) {
(*F->t_853) = F->want_852;
}
(*F->r_854) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_835(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_851)).name_)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2628 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_851)).name_)); at2628.hi >= at2628.lo ? at2628.hi - at2628.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
}
} else if (0 || sel2626 == ((rt_int)4LL)) {
(*F->t_853) = F->up->ty_nil_163;
(*F->r_854) = f_mk_246(F->up, rt_g_lit("NULL", 4));
} else if (0 || sel2626 == ((rt_int)15LL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_851)).a_, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)5LL)) {
f_gen_name_873(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)6LL)) {
f_gen_unop_878(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)7LL)) {
f_gen_binop_918(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)8LL)) {
f_expanded_868(F->up, (*(P175)rt_nil_check(F->e_851)).a_, &F->nm_2624);
if ((F->nm_2624 != NULL)) {
F->c2_2625 = f_nn_320(F->up, ((rt_int)8LL), G_NV((*(P175)rt_nil_check(F->e_851)).line_));
as_R176(&(*(P175)rt_nil_check(F->c2_2625)), (*(P175)rt_nil_check(F->e_851)));
(*(P175)rt_nil_check(F->c2_2625)).a_ = F->nm_2624;
f_gexpr_850(F->up, F->c2_2625, F->want_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2618 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).name_)));
if (((F->y_2618 == NULL) || (((G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_234 = F->want_852;
f_gcall_1057(F->up, F->e_851, 0, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if ((G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)5LL))) {
f_conversion_927(F->up, F->e_851, F->y_2618, &(*F->t_853), &(*F->r_854));
goto ret_;
}
} else if (((((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1170(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).a_)).name_)))) && (f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).name_)), G_NV((*(P175)rt_nil_check(F->e_851)).line_)) != NULL)) && (G_NV((*(P118)rt_nil_check(f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).name_)), G_NV((*(P175)rt_nil_check(F->e_851)).line_)))).kind_) == ((rt_int)3LL)))) {
F->up->call_want_234 = F->want_852;
f_gcall_1057(F->up, F->e_851, 0, &(*F->t_853), &(*F->r_854));
goto ret_;
} else if ((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_829(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_)).name_))))) {
F->up->call_want_234 = F->want_852;
f_gcall_1057(F->up, F->e_851, 0, &(*F->t_853), &(*F->r_854));
goto ret_;
} else if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_))) {
F->y_2618 = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).name_)), G_NV((*(P175)rt_nil_check(F->e_851)).line_));
if (((F->y_2618 != NULL) && (((G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->y_2618)).kind_) == ((rt_int)10LL))))) {
F->up->call_want_234 = F->want_852;
f_gcall_1057(F->up, F->e_851, 0, &(*F->t_853), &(*F->r_854));
goto ret_;
}
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_851)).a_, NULL, &F->bt_2619, &F->base_2622);
F->ro_2621 = 1;
f_index_on_824(F->up, (*(P141)rt_nil_check(F->base_2622)), F->bt_2619, F->e_851, &F->ro_2621, 0, &(*F->r_854), &(*F->t_853), &F->c_2620);
 (void)rt_range(F->ro_2621, 0, 1);
if ((f_is_numeric_472(F->up, (*F->t_853)) || f_is_discrete_474(F->up, (*F->t_853)))) {
(*F->r_854) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P141)rt_nil_check((*F->r_854)))), one_rt_gstr(41)));
}
} else if (0 || sel2626 == ((rt_int)9LL)) {
f_expanded_868(F->up, F->e_851, &F->nm_2624);
if ((F->nm_2624 != NULL)) {
f_gen_name_873(F->up, F->nm_2624, F->want_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).kind_) == ((rt_int)5LL)) && f_is_type_name_829(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_851)).a_)).name_))))) {
F->nm_2624 = f_nn_320(F->up, ((rt_int)8LL), G_NV((*(P175)rt_nil_check(F->e_851)).line_));
(*(P175)rt_nil_check(F->nm_2624)).a_ = F->e_851;
F->up->call_want_234 = F->want_852;
f_gcall_1057(F->up, F->nm_2624, 0, &(*F->t_853), &(*F->r_854));
goto ret_;
}
if (f_is_package_1093(F->up, (*(P175)rt_nil_check(F->e_851)).a_)) {
F->nm_2624 = f_nn_320(F->up, ((rt_int)5LL), G_NV((*(P175)rt_nil_check(F->e_851)).line_));
(*(P175)rt_nil_check(F->nm_2624)).name_ = (*(P175)rt_nil_check(F->e_851)).name_;
(*(P175)rt_nil_check(F->nm_2624)).tag_ = f_mk_246(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->e_851)).a_));
f_gen_name_873(F->up, F->nm_2624, F->want_852, &(*F->t_853), &(*F->r_854));
goto ret_;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_851)).a_, NULL, &F->bt_2619, &F->base_2622);
F->ro_2621 = 1;
f_select_on_815(F->up, (*(P141)rt_nil_check(F->base_2622)), F->bt_2619, F->e_851, &F->ro_2621, 0, &(*F->r_854), &(*F->t_853), &F->c_2620);
 (void)rt_range(F->ro_2621, 0, 1);
if ((f_is_numeric_472(F->up, (*F->t_853)) || f_is_discrete_474(F->up, (*F->t_853)))) {
(*F->r_854) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P141)rt_nil_check((*F->r_854)))), one_rt_gstr(41)));
}
} else if (0 || sel2626 == ((rt_int)10LL)) {
f_gen_attr_943(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)11LL)) {
f_allocator_995(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else if (0 || sel2626 == ((rt_int)12LL)) {
f_aggregate_1000(F->up, F->e_851, F->want_852, &(*F->t_853), &(*F->r_854));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_851)).line_), rt_g_lit("this expression is not handled", 30));
}
}
ret_:

  return;
}

static void f_string_aggregate_860(struct f_greenc_1fr *up_, P175 e_856, P123 want_857, P123 *t_858, P141 *r_859) {
  struct f_string_aggregate_860fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_856 = e_856;
F->want_857 = want_857;
F->t_858 = t_858;
F->r_859 = r_859;
F->ag_2629 = NULL;
F->it_2630 = NULL;
F->tail_2631 = NULL;
F->l_2632 = NULL;
F->ag_2629 = f_nn_320(F->up, ((rt_int)12LL), G_NV((*(P175)rt_nil_check(F->e_856)).line_));
{ rt_int lo2636 = ((rt_int)1LL), hi2637 = ({ rt_gstr at2634 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_856)).name_)); at2634.hi >= at2634.lo ? at2634.hi - at2634.lo + 1 : (rt_int)0; });
for (rt_int it2638 = lo2636; it2638 <= hi2637; it2638++) {
F->k_2635 = it2638;
F->l_2632 = f_nn_320(F->up, ((rt_int)3LL), G_NV((*(P175)rt_nil_check(F->e_856)).line_));
(*(P175)rt_nil_check(F->l_2632)).name_ = f_mk_246(F->up, ({ rt_gstr sl2640 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_856)).name_)); rt_int l_ = F->k_2635, h_ = F->k_2635; if (l_ <= h_) { rt_index(l_, sl2640.lo, sl2640.hi); rt_index(h_, sl2640.lo, sl2640.hi); } sl2640.p += l_ - sl2640.lo; sl2640.lo = l_; sl2640.hi = h_; sl2640; }));
F->it_2630 = f_nn_320(F->up, ((rt_int)13LL), G_NV((*(P175)rt_nil_check(F->e_856)).line_));
(*(P175)rt_nil_check(F->it_2630)).b_ = F->l_2632;
if ((F->tail_2631 == NULL)) {
(*(P175)rt_nil_check(F->ag_2629)).a_ = F->it_2630;
} else {
(*(P175)rt_nil_check(F->tail_2631)).next_ = F->it_2630;
}
F->tail_2631 = F->it_2630;
}
}
L_end_2633: ;
if (((*(P175)rt_nil_check(F->ag_2629)).a_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_856)).line_), cat_rt_gstr(rt_g_lit("an empty string is not an aggregate of ", 39), f_kind_name_504(F->up, F->want_857)));
}
f_aggregate_1000(F->up, F->ag_2629, F->want_857, &(*F->t_858), &(*F->r_859));
ret_:

  return;
}

static void f_char_literal_865(struct f_greenc_1fr *up_, P175 e_861, P123 want_862, P123 *t_863, P141 *r_864) {
  struct f_char_literal_865fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_861 = e_861;
F->want_862 = want_862;
F->t_863 = t_863;
F->r_864 = r_864;
F->i_2641 = INT64_MIN;
if ((G_NV((*(P123)rt_nil_check(F->want_862)).kind_) == ((rt_int)11LL))) {
(*F->t_863) = F->want_862;
(*F->r_864) = f_mk_246(F->up, rt_g_s2g(rt_str_of_int(rt_sub(((rt_int)(G_NV(({ rt_gstr ix2643 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_861)).name_)); ix2643.p[rt_index(((rt_int)1LL), ix2643.lo, ix2643.hi) - ix2643.lo]; }))) + 1), ((rt_int)1LL)))));
goto ret_;
}
F->i_2641 = f_lit_index_521(F->up, (*(P123)rt_nil_check(F->want_862)).lits_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_861)).name_)));
if ((G_NV(F->i_2641) < ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_861)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(34), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_861)).name_))), rt_g_lit("\" is not a literal of ", 22)), f_kind_name_504(F->up, F->want_862)));
}
(*F->t_863) = F->want_862;
(*F->r_864) = f_mk_246(F->up, rt_g_s2g(rt_str_of_int(G_NV(F->i_2641))));
ret_:

  return;
}

static void f_expanded_868(struct f_greenc_1fr *up_, P175 e_866, P175 *r_867) {
  struct f_expanded_868fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_866 = e_866;
F->r_867 = r_867;
F->y_2644 = NULL;
F->d_2645 = INT64_MIN;
(*F->r_867) = NULL;
if (((G_NV((*(P175)rt_nil_check(F->e_866)).kind_) != ((rt_int)9LL)) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_866)).a_)).kind_) != ((rt_int)5LL)))) {
goto ret_;
}
F->d_2645 = f_enclosing_depth_454(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_866)).a_)).name_)));
if ((G_NV(F->d_2645) < ((rt_int)0LL))) {
goto ret_;
}
F->y_2644 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_866)).a_)).name_)));
if (((F->y_2644 != NULL) && ((((G_NV((*(P118)rt_nil_check(F->y_2644)).kind_) == ((rt_int)1LL)) || (G_NV((*(P118)rt_nil_check(F->y_2644)).kind_) == ((rt_int)2LL))) || (G_NV((*(P118)rt_nil_check(F->y_2644)).kind_) == ((rt_int)8LL))) || (G_NV((*(P118)rt_nil_check(F->y_2644)).kind_) == ((rt_int)9LL))))) {
goto ret_;
}
if ((f_lookup_at_452(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_866)).name_)), G_NV(F->d_2645)) == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_866)).line_), cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_866)).name_)), rt_g_lit(" is not declared in ", 20)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_866)).a_)).name_))));
}
(*F->r_867) = f_nn_320(F->up, ((rt_int)5LL), G_NV((*(P175)rt_nil_check(F->e_866)).line_));
(*(P175)rt_nil_check((*F->r_867))).name_ = (*(P175)rt_nil_check(F->e_866)).name_;
(*(P175)rt_nil_check((*F->r_867))).ival_ = rt_add(G_NV(F->d_2645), ((rt_int)1LL));
ret_:

  return;
}

static void f_gen_name_873(struct f_greenc_1fr *up_, P175 e_869, P123 want_870, P123 *t_871, P141 *r_872) {
  struct f_gen_name_873fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_869 = e_869;
F->want_870 = want_870;
F->t_871 = t_871;
F->r_872 = r_872;
F->y_2646 = NULL;
F->y_2646 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)));
F->z_2647 = NULL;
F->call_2648 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_869)).ival_) > ((rt_int)0LL))) {
F->y_2646 = f_lookup_at_452(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_sub(G_NV((*(P175)rt_nil_check(F->e_869)).ival_), ((rt_int)1LL)));
}
if (((*(P175)rt_nil_check(F->e_869)).tag_ != NULL)) {
F->y_2646 = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).tag_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), G_NV((*(P175)rt_nil_check(F->e_869)).line_));
}
if ((F->y_2646 == NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit("PUT", 3)) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit("GET", 3)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit(" needs an item", 14)));
}
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit(" is not declared", 16)));
}
if ((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)12LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit(" is declared in two used modules: name it P.", 44)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_))), rt_g_lit(" (RM79 8.4)", 11)));
}
if (((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)2LL)) && G_NV((*(P118)rt_nil_check(F->y_2646)).hasmv_))) {
(*F->t_871) = (*(P118)rt_nil_check(F->y_2646)).t_;
(*F->r_872) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P118)rt_nil_check(F->y_2646)).mvalue_)))), rt_g_lit("LL)", 3)));
goto ret_;
}
if (((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)2LL)) && (G_NV((*(P118)rt_nil_check(F->y_2646)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2646)).name_))), rt_g_lit(" is used before its full declaration (RM79 7.4)", 47)));
}
if (((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)1LL)) || (G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)2LL)))) {
(*F->t_871) = (*(P118)rt_nil_check(F->y_2646)).t_;
f_access_of_787(F->up, F->y_2646, &(*F->r_872));
if (((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)1LL)) && (f_is_numeric_472(F->up, (*F->t_871)) || f_is_discrete_474(F->up, (*F->t_871))))) {
(*F->r_872) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("G_NV(", 5), (*(P141)rt_nil_check((*F->r_872)))), one_rt_gstr(41)));
}
goto ret_;
}
if ((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)7LL))) {
F->z_2647 = F->y_2646;
if ((F->want_870 != NULL)) {
while ((F->z_2647 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_2647)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_))) && (G_NV((*(P118)rt_nil_check(F->z_2647)).kind_) == ((rt_int)7LL))) && f_same_463(F->up, (*(P118)rt_nil_check(F->z_2647)).t_, F->want_870))) {
goto L_end_2649;
}
F->z_2647 = (*(P118)rt_nil_check(F->z_2647)).chain_;
}
L_end_2649: ;
if ((F->z_2647 == NULL)) {
F->z_2647 = F->y_2646;
}
} else {
F->z_2647 = (*(P118)rt_nil_check(F->y_2646)).chain_;
while ((F->z_2647 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_2647)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_))) && (G_NV((*(P118)rt_nil_check(F->z_2647)).kind_) == ((rt_int)7LL))) && (!f_same_463(F->up, (*(P118)rt_nil_check(F->z_2647)).t_, (*(P118)rt_nil_check(F->y_2646)).t_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the literal ", 12), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_))), rt_g_lit(" is ambiguous: qualify it, T(", 29)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_))), rt_g_lit(") (RM79 3.5.1, 4.6)", 19)));
}
F->z_2647 = (*(P118)rt_nil_check(F->z_2647)).chain_;
}
L_end_2650: ;
F->z_2647 = F->y_2646;
}
(*F->t_871) = (*(P118)rt_nil_check(F->z_2647)).t_;
(*F->r_872) = f_mk_246(F->up, rt_g_s2g(rt_str_of_int(G_NV((*(P118)rt_nil_check(F->z_2647)).mvalue_))));
goto ret_;
}
if ((((G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)4LL))) || (G_NV((*(P118)rt_nil_check(F->y_2646)).kind_) == ((rt_int)10LL)))) {
F->call_2648 = f_nn_320(F->up, ((rt_int)8LL), G_NV((*(P175)rt_nil_check(F->e_869)).line_));
(*(P175)rt_nil_check(F->call_2648)).a_ = F->e_869;
F->up->call_want_234 = F->want_870;
f_gcall_1057(F->up, F->call_2648, 0, &(*F->t_871), &(*F->r_872));
goto ret_;
}
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_869)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_869)).name_)), rt_g_lit(" cannot be used as a value", 26)));
ret_:

  return;
}

static void f_gen_unop_878(struct f_greenc_1fr *up_, P175 e_874, P123 want_875, P123 *t_876, P141 *r_877) {
  struct f_gen_unop_878fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_874 = e_874;
F->want_875 = want_875;
F->t_876 = t_876;
F->r_877 = r_877;
F->a_2651 = NULL;
F->x_2652 = NULL;
F->done_2653 = INT_MIN;
f_user_operator_1152(F->up, F->e_874, F->want_875, &(*F->t_876), &(*F->r_877), &F->done_2653);
 (void)rt_range(F->done_2653, 0, 1);
if (G_NV(F->done_2653)) {
goto ret_;
}
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_874)).name_)), rt_g_lit("NOT", 3))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_874)).a_, F->want_875, &(*F->t_876), &F->a_2651);
if (((G_NV((*(P123)rt_nil_check((*F->t_876))).kind_) == ((rt_int)6LL)) && ((G_NV((*(P123)rt_nil_check((*F->t_876))).dims_) == ((rt_int)1LL)) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check((*F->t_876))).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_513(F->up, (*F->t_876), &F->x_2652);
(*F->r_877) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("not_", 4), (*(P141)rt_nil_check(F->x_2652))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->a_2651))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check((*F->t_876))).kind_) != ((rt_int)2LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_874)).line_), rt_g_lit("operator not applies to boolean values and arrays (RM79 4.5.1)", 62));
}
(*F->r_877) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P141)rt_nil_check(F->a_2651))), one_rt_gstr(41)));
goto ret_;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_874)).a_, F->want_875, &(*F->t_876), &F->a_2651);
if ((!f_is_numeric_472(F->up, (*F->t_876)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_874)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("unary ", 6), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_874)).name_))), rt_g_lit(" applies to numeric values (RM79 4.5.4)", 39)));
}
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_874)).name_)), rt_g_lit("+", 1))) {
(*F->r_877) = F->a_2651;
} else if (((G_NV((*(P123)rt_nil_check((*F->t_876))).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check((*F->t_876))).kind_) == ((rt_int)16LL)))) {
(*F->r_877) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(-", 2), (*(P141)rt_nil_check(F->a_2651))), one_rt_gstr(41)));
} else {
(*F->r_877) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_neg(", 7), (*(P141)rt_nil_check(F->a_2651))), one_rt_gstr(41)));
}
ret_:

  return;
}

static int f_short_int_880(struct f_greenc_1fr *up_, P123 t_879) {
  struct f_short_int_880fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_879 = t_879;
if ((!(G_NV((*(P123)rt_nil_check(F->t_879)).kind_) == ((rt_int)1LL)))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_root_467(F->up, F->t_879) == F->up->ty_short_168);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static rt_gstr f_float_kind_882(struct f_greenc_1fr *up_, P123 t_881) {
  struct f_float_kind_882fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_881 = t_881;
if ((f_root_467(F->up, F->t_881) == F->up->ty_sfloat_170)) {
F->result_ = rt_g_lit("1", 1);
goto ret_;
}
F->result_ = rt_g_lit("0", 1);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_membership_885(struct f_greenc_1fr *up_, P175 e_883, P141 *r_884) {
  struct f_membership_885fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_883 = e_883;
F->r_884 = r_884;
F->ta_2654 = NULL;
F->tb_2655 = NULL;
F->tt_2656 = NULL;
F->a_2657 = NULL;
F->lo_2658 = NULL;
F->hi_2659 = NULL;
F->ct_2660 = NULL;
F->c_2661 = NULL;
F->d_2662 = NULL;
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_883)).b_)).kind_) == ((rt_int)14LL))) {
if (f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_883)).a_)) {
f_range_bounds_845(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_883)).b_)).a_, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_883)).b_)).b_, NULL, G_NV((*(P175)rt_nil_check(F->e_883)).line_), &F->tt_2656, &F->lo_2658, &F->hi_2659);
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_883)).a_, F->tt_2656, &F->ta_2654, &F->a_2657);
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_883)).a_, NULL, &F->ta_2654, &F->a_2657);
f_range_bounds_845(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_883)).b_)).a_, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_883)).b_)).b_, F->ta_2654, G_NV((*(P175)rt_nil_check(F->e_883)).line_), &F->tt_2656, &F->lo_2658, &F->hi_2659);
}
f_check_type_508(F->up, F->tt_2656, F->ta_2654, G_NV((*(P175)rt_nil_check(F->e_883)).line_));
if (((!f_is_numeric_472(F->up, F->ta_2654)) && (!f_is_discrete_474(F->up, F->ta_2654)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_883)).line_), rt_g_lit("a range applies to scalar values (RM79 4.5.2)", 45));
}
f_ctype_513(F->up, F->ta_2654, &F->ct_2660);
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2660))), rt_g_lit(" m_ = ", 6)), (*(P141)rt_nil_check(F->a_2657))), rt_g_lit("; m_ >= ", 8)), (*(P141)rt_nil_check(F->lo_2658))), rt_g_lit(" && m_ <= ", 10)), (*(P141)rt_nil_check(F->hi_2659))), rt_g_lit("; })", 4)));
goto ret_;
}
f_resolve_529(F->up, (*(P175)rt_nil_check(F->e_883)).b_, &F->tt_2656, &F->c_2661);
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_883)).a_, F->tt_2656, &F->ta_2654, &F->a_2657);
f_check_type_508(F->up, F->ta_2654, F->tt_2656, G_NV((*(P175)rt_nil_check(F->e_883)).line_));
f_ctype_513(F->up, F->ta_2654, &F->ct_2660);
if (((f_is_numeric_472(F->up, F->ta_2654) || f_is_discrete_474(F->up, F->ta_2654)) && ((*(P179)rt_nil_check(F->c_2661)).lo_ != NULL))) {
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2660))), rt_g_lit(" m_ = ", 6)), (*(P141)rt_nil_check(F->a_2657))), rt_g_lit("; m_ >= ", 8)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2661)).lo_))), rt_g_lit(" && m_ <= ", 10)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2661)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P123)rt_nil_check(F->ta_2654)).kind_) == ((rt_int)6LL)) && ((*(P179)rt_nil_check(F->c_2661)).lo_ != NULL))) {
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2660))), rt_g_lit(" m_ = ", 6)), (*(P141)rt_nil_check(F->a_2657))), rt_g_lit("; m_.lo == ", 11)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2661)).lo_))), rt_g_lit(" && m_.hi == ", 13)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2661)).hi_))), rt_g_lit("; })", 4)));
} else if (((G_NV((*(P123)rt_nil_check(F->ta_2654)).kind_) == ((rt_int)7LL)) && f_discriminated_502(F->up, F->c_2661))) {
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2660))), rt_g_lit(" m_ = ", 6)), (*(P141)rt_nil_check(F->a_2657))), rt_g_lit("; 1", 3)));
F->d_2662 = (*(P179)rt_nil_check(F->c_2661)).dv_;
while ((F->d_2662 != NULL)) {
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_884))), rt_g_lit(" && m_.", 7)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2662)).name_)))), rt_g_lit(" == (", 5)), (*(P141)rt_nil_check((*(P2023)rt_nil_check(F->d_2662)).v_))), one_rt_gstr(41)));
F->d_2662 = (*(P2023)rt_nil_check(F->d_2662)).next_;
}
L_end_2663: ;
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->r_884))), rt_g_lit("; })", 4)));
} else {
(*F->r_884) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), (*(P141)rt_nil_check(F->a_2657))), rt_g_lit("); 1; })", 8)));
}
ret_:

  return;
}

static void f_condition_890(struct f_greenc_1fr *up_, P175 e_886, P123 want_887, P123 *t_888, P141 *r_889) {
  struct f_condition_890fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_886 = e_886;
F->want_887 = want_887;
F->t_888 = t_888;
F->r_889 = r_889;
F->a_2664 = NULL;
F->b_2665 = NULL;
F->tb_2666 = NULL;
if (((G_NV((*(P175)rt_nil_check(F->e_886)).kind_) == ((rt_int)7LL)) && (G_NV((*(P175)rt_nil_check(F->e_886)).ival_) == ((rt_int)1LL)))) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->e_886)).a_, F->up->ty_bool_158, &(*F->t_888), &F->a_2664);
f_check_type_508(F->up, (*F->t_888), F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->e_886)).line_));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_886)).b_, F->up->ty_bool_158, &F->tb_2666, &F->b_2665);
f_check_type_508(F->up, F->tb_2666, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->e_886)).line_));
(*F->t_888) = F->up->ty_bool_158;
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_886)).name_)), rt_g_lit("AND", 3))) {
(*F->r_889) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2664))), rt_g_lit(" && ", 4)), (*(P141)rt_nil_check(F->b_2665))), one_rt_gstr(41)));
} else {
(*F->r_889) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2664))), rt_g_lit(" || ", 4)), (*(P141)rt_nil_check(F->b_2665))), one_rt_gstr(41)));
}
goto ret_;
}
f_gexpr_850(F->up, F->e_886, F->up->ty_bool_158, &(*F->t_888), &(*F->r_889));
ret_:

  return;
}

static void f_catenation_895(struct f_greenc_1fr *up_, P175 e_891, P123 want_892, P123 *t_893, P141 *r_894) {
  struct f_catenation_895fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_891 = e_891;
F->want_892 = want_892;
F->t_893 = t_893;
F->r_894 = r_894;
F->arrt_2667 = NULL;
F->ta_2668 = NULL;
F->tb_2669 = NULL;
F->a_2670 = NULL;
F->b_2671 = NULL;
F->ct_2672 = NULL;
if ((((F->want_892 != NULL) && (G_NV((*(P123)rt_nil_check(F->want_892)).kind_) == ((rt_int)6LL))) && (G_NV((*(P123)rt_nil_check(F->want_892)).dims_) == ((rt_int)1LL)))) {
F->arrt_2667 = F->want_892;
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_891)).a_, NULL, &F->ta_2668, &F->a_2670);
if (((G_NV((*(P123)rt_nil_check(F->ta_2668)).kind_) == ((rt_int)6LL)) && (G_NV((*(P123)rt_nil_check(F->ta_2668)).dims_) == ((rt_int)1LL)))) {
F->arrt_2667 = F->ta_2668;
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_891)).b_, NULL, &F->tb_2669, &F->b_2671);
if (((G_NV((*(P123)rt_nil_check(F->tb_2669)).kind_) == ((rt_int)6LL)) && (G_NV((*(P123)rt_nil_check(F->tb_2669)).dims_) == ((rt_int)1LL)))) {
F->arrt_2667 = F->tb_2669;
} else if (((G_NV((*(P123)rt_nil_check(F->ta_2668)).kind_) == ((rt_int)11LL)) && (G_NV((*(P123)rt_nil_check(F->tb_2669)).kind_) == ((rt_int)11LL)))) {
F->arrt_2667 = F->up->ty_string_161;
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_891)).line_), rt_g_lit("& catenates one-dimensional arrays and their components (RM79 4.5.3)", 68));
}
}
}
f_ctype_513(F->up, F->arrt_2667, &F->ct_2672);
f_cat_operand_900(F->up, (*(P175)rt_nil_check(F->e_891)).a_, F->arrt_2667, G_NV((*(P175)rt_nil_check(F->e_891)).line_), &F->a_2670);
f_cat_operand_900(F->up, (*(P175)rt_nil_check(F->e_891)).b_, F->arrt_2667, G_NV((*(P175)rt_nil_check(F->e_891)).line_), &F->b_2671);
(*F->t_893) = F->arrt_2667;
(*F->r_894) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("cat_", 4), (*(P141)rt_nil_check(F->ct_2672))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->a_2670))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2671))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_cat_operand_900(struct f_greenc_1fr *up_, P175 x_896, P123 arrt_897, rt_int line_898, P141 *r_899) {
  struct f_cat_operand_900fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_896 = x_896;
F->arrt_897 = arrt_897;
F->line_898 = line_898;
F->r_899 = r_899;
F->tx_2673 = NULL;
F->ct_2674 = NULL;
if ((f_is_char_lit_831(F->up, F->x_896) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->arrt_897)).elem_)).kind_) == ((rt_int)11LL)))) {
f_gexpr_850(F->up, F->x_896, (*(P123)rt_nil_check(F->arrt_897)).elem_, &F->tx_2673, &(*F->r_899));
} else {
f_gexpr_850(F->up, F->x_896, F->arrt_897, &F->tx_2673, &(*F->r_899));
}
if (f_same_463(F->up, F->tx_2673, F->arrt_897)) {
goto ret_;
}
if (f_same_463(F->up, F->tx_2673, (*(P123)rt_nil_check(F->arrt_897)).elem_)) {
f_ctype_513(F->up, F->arrt_897, &F->ct_2674);
(*F->r_899) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("one_", 4), (*(P141)rt_nil_check(F->ct_2674))), one_rt_gstr(40)), (*(P141)rt_nil_check((*F->r_899)))), one_rt_gstr(41)));
goto ret_;
}
f_fail_267(F->up, F->line_898, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("type mismatch: ", 15), f_kind_name_504(F->up, F->tx_2673)), rt_g_lit(" in a catenation of ", 20)), f_kind_name_504(F->up, F->arrt_897)), rt_g_lit(" (RM79 4.5.3)", 13)));
ret_:

  return;
}

static void f_arithmetic_905(struct f_greenc_1fr *up_, P175 e_901, P123 want_902, P123 *t_903, P141 *r_904) {
  struct f_arithmetic_905fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_901 = e_901;
F->want_902 = want_902;
F->t_903 = t_903;
F->r_904 = r_904;
F->op_2675 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_901)).name_)));
F->ta_2676 = NULL;
F->tb_2677 = NULL;
F->hint_2678 = NULL;
F->a_2679 = NULL;
F->b_2680 = NULL;
if (eq_rt_gstr(F->op_2675, rt_g_lit("**", 2))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).a_, F->want_902, &F->ta_2676, &F->a_2679);
F->hint_2678 = F->up->ty_int_157;
if ((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)1LL))) {
F->hint_2678 = F->ta_2676;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).b_, F->hint_2678, &F->tb_2677, &F->b_2680);
if ((G_NV((*(P123)rt_nil_check(F->tb_2677)).kind_) != ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_901)).line_), rt_g_lit("the exponent of ** is an integer (RM79 4.5.6)", 45));
}
(*F->t_903) = F->ta_2676;
if ((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)1LL))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_pow(", 7), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)3LL))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fpow(", 10), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), rt_g_lit(", ", 2)), f_float_kind_882(F->up, F->ta_2676)), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_901)).line_), rt_g_lit("operator ** is defined for integer and floating point values (RM79 4.5.6)", 73));
}
} else {
if ((f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_901)).a_) && (!f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_901)).b_)))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).b_, F->want_902, &F->tb_2677, &F->b_2680);
F->hint_2678 = F->tb_2677;
if (((G_NV((*(P123)rt_nil_check(F->tb_2677)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2675, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2675, rt_g_lit("/", 1))))) {
F->hint_2678 = F->up->ty_int_157;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).a_, F->hint_2678, &F->ta_2676, &F->a_2679);
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).a_, F->want_902, &F->ta_2676, &F->a_2679);
F->hint_2678 = F->ta_2676;
if (((((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)16LL)) && (eq_rt_gstr(F->op_2675, rt_g_lit("*", 1)) || eq_rt_gstr(F->op_2675, rt_g_lit("/", 1)))) && f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_901)).b_)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_901)).b_)).kind_) == ((rt_int)1LL)))) {
F->hint_2678 = F->up->ty_int_157;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_901)).b_, F->hint_2678, &F->tb_2677, &F->b_2680);
}
if (((!f_is_numeric_472(F->up, F->ta_2676)) || (!f_is_numeric_472(F->up, F->tb_2677)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_901)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2675), rt_g_lit(" needs numeric operands, not ", 29)), f_kind_name_504(F->up, F->ta_2676)), rt_g_lit(" and ", 5)), f_kind_name_504(F->up, F->tb_2677)));
}
if (((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)16LL)) || (G_NV((*(P123)rt_nil_check(F->tb_2677)).kind_) == ((rt_int)16LL)))) {
f_fixed_operation_913(F->up, F->e_901, F->ta_2676, F->tb_2677, (*(P141)rt_nil_check(F->a_2679)), (*(P141)rt_nil_check(F->b_2680)), &(*F->t_903), &(*F->r_904));
goto ret_;
}
f_check_type_508(F->up, F->tb_2677, F->ta_2676, G_NV((*(P175)rt_nil_check(F->e_901)).line_));
(*F->t_903) = F->ta_2676;
if ((G_NV((*(P123)rt_nil_check(F->ta_2676)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->op_2675, rt_g_lit("+", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fadd(", 10), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), rt_g_lit(", ", 2)), f_float_kind_882(F->up, F->ta_2676)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("-", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fsub(", 10), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), rt_g_lit(", ", 2)), f_float_kind_882(F->up, F->ta_2676)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("*", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fmul(", 10), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), rt_g_lit(", ", 2)), f_float_kind_882(F->up, F->ta_2676)), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("/", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), rt_g_lit(", ", 2)), f_float_kind_882(F->up, F->ta_2676)), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_901)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2675), rt_g_lit(" is not defined for real values (RM79 4.5.5)", 44)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2675, rt_g_lit("+", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("-", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("*", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_mul(", 7), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("/", 1))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_quot(", 8), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2675, rt_g_lit("MOD", 3))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_rem(", 7), (*(P141)rt_nil_check(F->a_2679))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2680))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_901)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2675), rt_g_lit(" is not defined for integers", 28)));
}
}
if (f_short_int_880(F->up, (*F->t_903))) {
(*F->r_904) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P141)rt_nil_check((*F->r_904)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_fixed_operation_913(struct f_greenc_1fr *up_, P175 e_906, P123 ta_907, P123 tb_908, rt_gstr a_909, rt_gstr b_910, P123 *t_911, P141 *r_912) {
  struct f_fixed_operation_913fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_906 = e_906;
F->ta_907 = ta_907;
F->tb_908 = tb_908;
F->a_909 = cp_rt_gstr(a_909);
F->b_910 = cp_rt_gstr(b_910);
F->t_911 = t_911;
F->r_912 = r_912;
F->op_2681 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_906)).name_)));
if ((eq_rt_gstr(F->op_2681, rt_g_lit("+", 1)) || eq_rt_gstr(F->op_2681, rt_g_lit("-", 1)))) {
f_check_type_508(F->up, F->tb_908, F->ta_907, G_NV((*(P175)rt_nil_check(F->e_906)).line_));
(*F->t_911) = F->ta_907;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_909), one_rt_gstr(32)), F->op_2681), one_rt_gstr(32)), F->b_910), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2681, rt_g_lit("*", 1)) && (G_NV((*(P123)rt_nil_check(F->ta_907)).kind_) == ((rt_int)16LL))) && (G_NV((*(P123)rt_nil_check(F->tb_908)).kind_) == ((rt_int)16LL)))) {
(*F->t_911) = F->up->ty_ufixed_173;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_909), rt_g_lit(" * ", 3)), F->b_910), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2681, rt_g_lit("/", 1)) && (G_NV((*(P123)rt_nil_check(F->ta_907)).kind_) == ((rt_int)16LL))) && (G_NV((*(P123)rt_nil_check(F->tb_908)).kind_) == ((rt_int)16LL)))) {
(*F->t_911) = F->up->ty_ufixed_173;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fdiv(", 10), F->a_909), rt_g_lit(", ", 2)), F->b_910), rt_g_lit(", 0)", 4)));
} else if (((eq_rt_gstr(F->op_2681, rt_g_lit("*", 1)) && (G_NV((*(P123)rt_nil_check(F->ta_907)).kind_) == ((rt_int)16LL))) && (G_NV((*(P123)rt_nil_check(F->tb_908)).kind_) == ((rt_int)1LL)))) {
(*F->t_911) = F->ta_907;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), F->a_909), rt_g_lit(" * (double)(", 12)), F->b_910), rt_g_lit("))", 2)));
} else if (((eq_rt_gstr(F->op_2681, rt_g_lit("*", 1)) && (G_NV((*(P123)rt_nil_check(F->ta_907)).kind_) == ((rt_int)1LL))) && (G_NV((*(P123)rt_nil_check(F->tb_908)).kind_) == ((rt_int)16LL)))) {
(*F->t_911) = F->tb_908;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), F->a_909), rt_g_lit(") * ", 4)), F->b_910), one_rt_gstr(41)));
} else if (((eq_rt_gstr(F->op_2681, rt_g_lit("/", 1)) && (G_NV((*(P123)rt_nil_check(F->ta_907)).kind_) == ((rt_int)16LL))) && (G_NV((*(P123)rt_nil_check(F->tb_908)).kind_) == ((rt_int)1LL)))) {
(*F->t_911) = F->ta_907;
(*F->r_912) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(rt_g_fdiv(", 19), F->a_909), rt_g_lit(", (double)(", 11)), F->b_910), rt_g_lit("), 0), ", 7)), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->ta_907)).fsmall_))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_906)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2681), rt_g_lit(" is not defined for these fixed point operands (RM79 4.5.5)", 59)));
}
ret_:

  return;
}

static void f_gen_binop_918(struct f_greenc_1fr *up_, P175 e_914, P123 want_915, P123 *t_916, P141 *r_917) {
  struct f_gen_binop_918fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_914 = e_914;
F->want_915 = want_915;
F->t_916 = t_916;
F->r_917 = r_917;
F->op_2682 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_914)).name_)));
F->ta_2683 = NULL;
F->tb_2684 = NULL;
F->hint_2685 = NULL;
F->ct_2686 = NULL;
F->a_2687 = NULL;
F->b_2688 = NULL;
F->x_2689 = NULL;
F->dummy_2690 = NULL;
F->done_2691 = INT_MIN;
(*F->t_916) = F->up->ty_bool_158;
f_user_operator_1152(F->up, F->e_914, F->want_915, &(*F->t_916), &(*F->r_917), &F->done_2691);
 (void)rt_range(F->done_2691, 0, 1);
if (G_NV(F->done_2691)) {
goto ret_;
}
if ((G_NV((*(P175)rt_nil_check(F->e_914)).ival_) == ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_914)).line_), rt_g_lit("and then and or else are allowed only in conditions (RM79 5.4.1)", 64));
}
if (((eq_rt_gstr(F->op_2682, rt_g_lit("AND", 3)) || eq_rt_gstr(F->op_2682, rt_g_lit("OR", 2))) || eq_rt_gstr(F->op_2682, rt_g_lit("XOR", 3)))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_914)).a_, F->want_915, &F->ta_2683, &F->a_2687);
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_914)).b_, F->ta_2683, &F->tb_2684, &F->b_2688);
f_check_type_508(F->up, F->tb_2684, F->ta_2683, G_NV((*(P175)rt_nil_check(F->e_914)).line_));
(*F->t_916) = F->ta_2683;
if (((G_NV((*(P123)rt_nil_check(F->ta_2683)).kind_) == ((rt_int)6LL)) && ((G_NV((*(P123)rt_nil_check(F->ta_2683)).dims_) == ((rt_int)1LL)) && (G_NV((*(P123)rt_nil_check((*(P123)rt_nil_check(F->ta_2683)).elem_)).kind_) == ((rt_int)2LL))))) {
f_ctype_513(F->up, F->ta_2683, &F->x_2689);
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(f_lower_s_257(F->up, F->op_2682), one_rt_gstr(95)), (*(P141)rt_nil_check(F->x_2689))), one_rt_gstr(40)), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check(F->ta_2683)).kind_) != ((rt_int)2LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_914)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2682), rt_g_lit(" applies to boolean values and arrays (RM79 4.5.1)", 50)));
}
if (eq_rt_gstr(F->op_2682, rt_g_lit("AND", 3))) {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(" && ", 4)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2682, rt_g_lit("OR", 2))) {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(" || ", 4)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
} else {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(" != ", 4)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2682, rt_g_lit("IN", 2))) {
f_membership_885(F->up, F->e_914, &(*F->r_917));
goto ret_;
}
if (eq_rt_gstr(F->op_2682, rt_g_lit("&", 1))) {
f_catenation_895(F->up, F->e_914, F->want_915, &(*F->t_916), &(*F->r_917));
goto ret_;
}
if (f_is_rel_359(F->up, F->op_2682)) {
if (((((f_is_literal_837(F->up, (*(P175)rt_nil_check(F->e_914)).a_) || f_is_enum_lit_833(F->up, (*(P175)rt_nil_check(F->e_914)).a_)) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_914)).a_)).kind_) == ((rt_int)4LL))) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_914)).a_)).kind_) == ((rt_int)3LL))) || (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_914)).a_)).kind_) == ((rt_int)12LL)))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_914)).b_, NULL, &F->hint_2685, &F->dummy_2690);
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_914)).a_, F->hint_2685, &F->ta_2683, &F->a_2687);
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_914)).b_, F->ta_2683, &F->tb_2684, &F->b_2688);
F->ct_2686 = F->ta_2683;
if (((G_NV((*(P123)rt_nil_check(F->ta_2683)).kind_) != ((rt_int)10LL)) && (G_NV((*(P123)rt_nil_check(F->tb_2684)).kind_) != ((rt_int)10LL)))) {
f_check_type_508(F->up, F->tb_2684, F->ta_2683, G_NV((*(P175)rt_nil_check(F->e_914)).line_));
}
if ((G_NV((*(P123)rt_nil_check(F->ta_2683)).kind_) == ((rt_int)10LL))) {
F->ct_2686 = F->tb_2684;
}
if (((eq_rt_gstr(F->op_2682, rt_g_lit("=", 1)) || eq_rt_gstr(F->op_2682, rt_g_lit("/=", 2))) && f_restricted_here_584(F->up, F->ct_2686))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_914)).line_), rt_g_lit("a restricted type has no predefined equality (RM79 7.4)", 55));
}
if (((((!eq_rt_gstr(F->op_2682, rt_g_lit("=", 1))) && (!eq_rt_gstr(F->op_2682, rt_g_lit("/=", 2)))) && (!f_is_numeric_472(F->up, F->ct_2686))) && (!f_is_discrete_474(F->up, F->ct_2686)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_914)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("operator ", 9), F->op_2682), rt_g_lit(" is defined for scalar types, not for ", 38)), f_kind_name_504(F->up, F->ct_2686)), rt_g_lit(" (RM79 4.5.2)", 13)));
}
if (f_composite_635(F->up, F->ct_2686)) {
f_eq_code_650(F->up, F->ct_2686, (*(P141)rt_nil_check(F->a_2687)), (*(P141)rt_nil_check(F->b_2688)), &F->x_2689);
if (eq_rt_gstr(F->op_2682, rt_g_lit("=", 1))) {
(*F->r_917) = F->x_2689;
} else if (eq_rt_gstr(F->op_2682, rt_g_lit("/=", 2))) {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P141)rt_nil_check(F->x_2689))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_914)).line_), rt_g_lit("no ordering is defined for composite values", 43));
}
goto ret_;
}
if (eq_rt_gstr(F->op_2682, rt_g_lit("=", 1))) {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(" == ", 4)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->op_2682, rt_g_lit("/=", 2))) {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), rt_g_lit(" != ", 4)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
} else {
(*F->r_917) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->a_2687))), one_rt_gstr(32)), F->op_2682), one_rt_gstr(32)), (*(P141)rt_nil_check(F->b_2688))), one_rt_gstr(41)));
}
goto ret_;
}
f_arithmetic_905(F->up, F->e_914, F->want_915, &(*F->t_916), &(*F->r_917));
ret_:

  return;
}

static void f_code_statement_922(struct f_greenc_1fr *up_, P175 e_919, P118 y_920, P141 *r_921) {
  struct f_code_statement_922fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_919 = e_919;
F->y_920 = y_920;
F->r_921 = r_921;
F->i_2692 = NULL;
F->t_2693 = NULL;
F->v_2694 = NULL;
F->ct_2695 = NULL;
if ((f_lookup_443(F->up, rt_g_lit("MACHINE_CODE", 12)) != NULL)) {
F->i_2692 = f_member_of_1097(F->up, rt_g_lit("MACHINE_CODE", 12), rt_g_lit("INSTRUCTION", 11), G_NV((*(P175)rt_nil_check(F->e_919)).line_));
}
if (((F->i_2692 == NULL) || ((*(P118)rt_nil_check(F->i_2692)).t_ != (*(P118)rt_nil_check(F->y_920)).t_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_919)).line_), cat_rt_gstr(rt_g_lit("a code statement is an aggregate of type MACHINE_CODE.INSTRUCTION, an instruction ", 82), rt_g_lit("of this machine (RM79 13.8)", 27)));
}
if (((F->up->cur_body_224 == NULL) || (F->up->func_sym_143 == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_919)).line_), rt_g_lit("a code statement stands in a procedure body of code statements only (RM79 13.8)", 79));
}
f_check_code_body_734(F->up, F->up->cur_body_224, F->up->func_sym_143);
f_conversion_927(F->up, F->e_919, F->y_920, &F->t_2693, &F->v_2694);
f_ctype_513(F->up, (*(P118)rt_nil_check(F->y_920)).t_, &F->ct_2695);
(*F->r_921) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2695))), rt_g_lit(" i_ = ", 6)), (*(P141)rt_nil_check(F->v_2694))), rt_g_lit("; rt_g_machine(i_.", 18)), f_c_field_263(F->up, rt_g_lit("OP", 2))), rt_g_lit(", i_.", 5)), f_c_field_263(F->up, rt_g_lit("R", 1))), rt_g_lit(", i_.", 5)), f_c_field_263(F->up, rt_g_lit("A", 1))), rt_g_lit("); })", 5)));
ret_:

  return;
}

static void f_conversion_927(struct f_greenc_1fr *up_, P175 e_923, P118 y_924, P123 *t_925, P141 *r_926) {
  struct f_conversion_927fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_923 = e_923;
F->y_924 = y_924;
F->t_925 = t_925;
F->r_926 = r_926;
F->aty_2696 = NULL;
F->a_2697 = NULL;
F->ag_2698 = NULL;
F->it_2699 = NULL;
F->tail_2700 = NULL;
F->arg_2701 = NULL;
(*F->t_925) = (*(P118)rt_nil_check(F->y_924)).t_;
if (((G_NV((*(P175)rt_nil_check(F->e_923)).flag_) == ((rt_int)9LL)) || (f_list_len_326(F->up, (*(P175)rt_nil_check(F->e_923)).b_) > ((rt_int)1LL)))) {
if ((G_NV((*(P175)rt_nil_check(F->e_923)).flag_) == ((rt_int)9LL))) {
F->ag_2698 = (*(P175)rt_nil_check(F->e_923)).b_;
} else {
F->ag_2698 = f_nn_320(F->up, ((rt_int)12LL), G_NV((*(P175)rt_nil_check(F->e_923)).line_));
F->arg_2701 = (*(P175)rt_nil_check(F->e_923)).b_;
while ((F->arg_2701 != NULL)) {
F->it_2699 = f_nn_320(F->up, ((rt_int)13LL), G_NV((*(P175)rt_nil_check(F->e_923)).line_));
(*(P175)rt_nil_check(F->it_2699)).b_ = F->arg_2701;
if (((*(P175)rt_nil_check(F->arg_2701)).formal_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_923)).line_), rt_g_lit("a named component of an aggregate is given with => (RM79 3.6.2)", 63));
}
if ((F->tail_2700 == NULL)) {
(*(P175)rt_nil_check(F->ag_2698)).a_ = F->it_2699;
} else {
(*(P175)rt_nil_check(F->tail_2700)).next_ = F->it_2699;
}
F->tail_2700 = F->it_2699;
F->arg_2701 = (*(P175)rt_nil_check(F->arg_2701)).next_;
}
L_end_2702: ;
}
if ((G_NV((*(P175)rt_nil_check(F->ag_2698)).kind_) != ((rt_int)12LL))) {
f_gexpr_850(F->up, F->ag_2698, (*F->t_925), &F->aty_2696, &(*F->r_926));
f_check_type_508(F->up, F->aty_2696, (*F->t_925), G_NV((*(P175)rt_nil_check(F->e_923)).line_));
} else {
f_aggregate_1000(F->up, F->ag_2698, (*F->t_925), &F->aty_2696, &(*F->r_926));
}
f_constrain_931(F->up, F->y_924, (*F->t_925), &(*F->r_926));
goto ret_;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_923)).b_, (*F->t_925), &F->aty_2696, &F->a_2697);
if ((((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)6LL)) && (G_NV((*(P123)rt_nil_check(F->aty_2696)).kind_) == ((rt_int)6LL))) && (!f_same_463(F->up, (*F->t_925), F->aty_2696)))) {
f_array_conversion_938(F->up, F->e_923, (*F->t_925), F->aty_2696, (*(P118)rt_nil_check(F->y_924)).c_, (*(P141)rt_nil_check(F->a_2697)), &(*F->r_926));
goto ret_;
}
if ((f_is_numeric_472(F->up, (*F->t_925)) && f_is_numeric_472(F->up, F->aty_2696))) {
if (((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)1LL)) && (G_NV((*(P123)rt_nil_check(F->aty_2696)).kind_) != ((rt_int)1LL)))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_round(", 11), (*(P141)rt_nil_check(F->a_2697))), one_rt_gstr(41)));
} else if (((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)3LL)) && (G_NV((*(P123)rt_nil_check(F->aty_2696)).kind_) == ((rt_int)1LL)))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((double)(", 10), (*(P141)rt_nil_check(F->a_2697))), rt_g_lit("))", 2)));
} else if (((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)16LL)) && ((*(P123)rt_nil_check((*F->t_925))).fsmall_ != NULL))) {
if ((G_NV((*(P123)rt_nil_check(F->aty_2696)).kind_) == ((rt_int)1LL))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix((double)(", 18), (*(P141)rt_nil_check(F->a_2697))), rt_g_lit("), ", 3)), (*(P141)rt_nil_check((*(P123)rt_nil_check((*F->t_925))).fsmall_))), one_rt_gstr(41)));
} else {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix(", 9), (*(P141)rt_nil_check(F->a_2697))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P123)rt_nil_check((*F->t_925))).fsmall_))), one_rt_gstr(41)));
}
} else {
(*F->r_926) = F->a_2697;
}
} else if (((f_same_463(F->up, F->aty_2696, (*F->t_925)) || f_derived_from_470(F->up, F->aty_2696, (*F->t_925))) || f_derived_from_470(F->up, (*F->t_925), F->aty_2696))) {
(*F->r_926) = F->a_2697;
} else {
f_check_type_508(F->up, F->aty_2696, (*F->t_925), G_NV((*(P175)rt_nil_check(F->e_923)).line_));
(*F->r_926) = F->a_2697;
}
if (((((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)1LL)) || (G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)4LL))) || (G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)11LL))) && f_bounded_496(F->up, (*(P118)rt_nil_check(F->y_924)).c_))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check((*F->r_926)))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_924)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_924)).c_)).hi_))), one_rt_gstr(41)));
} else if ((((G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check((*F->t_925))).kind_) == ((rt_int)16LL))) && f_bounded_496(F->up, (*(P118)rt_nil_check(F->y_924)).c_))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frange(", 10), (*(P141)rt_nil_check((*F->r_926)))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_924)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_924)).c_)).hi_))), one_rt_gstr(41)));
} else if (f_short_int_880(F->up, (*F->t_925))) {
(*F->r_926) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_short(", 11), (*(P141)rt_nil_check((*F->r_926)))), one_rt_gstr(41)));
}
ret_:

  return;
}

static void f_constrain_931(struct f_greenc_1fr *up_, P118 y_928, P123 t_929, P141 *r_930) {
  struct f_constrain_931fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_928 = y_928;
F->t_929 = t_929;
F->r_930 = r_930;
F->ct_2703 = NULL;
F->tmp_2704 = NULL;
if ((((*(P118)rt_nil_check(F->y_928)).c_ == NULL) || ((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_928)).c_)).lo_ == NULL))) {
goto ret_;
}
if (((G_NV((*(P123)rt_nil_check(F->t_929)).kind_) == ((rt_int)6LL)) && (!f_bounded_hi_498(F->up, (*(P123)rt_nil_check(F->t_929)).tcons_)))) {
f_ctype_513(F->up, F->t_929, &F->ct_2703);
f_new_name_249(F->up, rt_g_lit("q", 1), &F->tmp_2704);
(*F->r_930) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2703))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2704))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check((*F->r_930)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_928)).c_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_928)).c_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P141)rt_nil_check(F->tmp_2704))), rt_g_lit(") != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 35)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit("); ", 3)), (*(P141)rt_nil_check(F->tmp_2704))), rt_g_lit(".lo = l_; ", 10)), (*(P141)rt_nil_check(F->tmp_2704))), rt_g_lit(".hi = h_; ", 10)), (*(P141)rt_nil_check(F->tmp_2704))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_array_conversion_938(struct f_greenc_1fr *up_, P175 e_932, P123 t_933, P123 aty_934, P179 c_935, rt_gstr a_936, P141 *r_937) {
  struct f_array_conversion_938fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_932 = e_932;
F->t_933 = t_933;
F->aty_934 = aty_934;
F->c_935 = c_935;
F->a_936 = cp_rt_gstr(a_936);
F->r_937 = r_937;
F->x_2705 = NULL;
F->y_2706 = NULL;
F->ct_2707 = NULL;
F->act_2708 = NULL;
F->et_2709 = NULL;
F->tmp_2710 = NULL;
F->s_2711 = NULL;
F->x_2705 = F->t_933;
F->y_2706 = F->aty_934;
if ((G_NV((*(P123)rt_nil_check(F->t_933)).dims_) != G_NV((*(P123)rt_nil_check(F->aty_934)).dims_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_932)).line_), rt_g_lit("no conversion between arrays of different dimensions (RM79 4.6)", 63));
}
{ rt_int lo2714 = ((rt_int)1LL), hi2715 = G_NV((*(P123)rt_nil_check(F->t_933)).dims_);
for (rt_int it2716 = lo2714; it2716 <= hi2715; it2716++) {
F->k_2713 = it2716;
if ((!((f_same_463(F->up, (*(P123)rt_nil_check(F->x_2705)).idx_, (*(P123)rt_nil_check(F->y_2706)).idx_) || f_derived_from_470(F->up, (*(P123)rt_nil_check(F->x_2705)).idx_, (*(P123)rt_nil_check(F->y_2706)).idx_)) || f_derived_from_470(F->up, (*(P123)rt_nil_check(F->y_2706)).idx_, (*(P123)rt_nil_check(F->x_2705)).idx_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_932)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_504(F->up, F->aty_934)), rt_g_lit(" to ", 4)), f_kind_name_504(F->up, F->t_933)), rt_g_lit(": the index types differ (RM79 4.6)", 35)));
}
F->x_2705 = (*(P123)rt_nil_check(F->x_2705)).elem_;
F->y_2706 = (*(P123)rt_nil_check(F->y_2706)).elem_;
}
}
L_end_2712: ;
if ((!((f_same_463(F->up, F->x_2705, F->y_2706) || f_derived_from_470(F->up, F->x_2705, F->y_2706)) || f_derived_from_470(F->up, F->y_2706, F->x_2705)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_932)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no conversion from ", 19), f_kind_name_504(F->up, F->aty_934)), rt_g_lit(" to ", 4)), f_kind_name_504(F->up, F->t_933)), rt_g_lit(": the component types differ (RM79 4.6)", 39)));
}
f_ctype_513(F->up, F->t_933, &F->ct_2707);
f_ctype_513(F->up, F->aty_934, &F->act_2708);
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_933)).elem_, &F->et_2709);
f_new_name_249(F->up, rt_g_lit("cv", 2), &F->tmp_2710);
(*F->r_937) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->act_2708))), rt_g_lit(" s_ = ", 6)), F->a_936), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->ct_2707))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit(".lo = s_.lo; ", 13)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit(".hi = s_.hi; ", 13)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit(".lo2 = s_.lo2; ", 15)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit(".hi2 = s_.hi2; ", 15)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit(".p = (", 6)), (*(P141)rt_nil_check(F->et_2709))), rt_g_lit(" *)s_.p; ", 9)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("; })", 4)));
if ((((*(P123)rt_nil_check(F->t_933)).tcons_ != NULL) && ((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_933)).tcons_)).hi_ != NULL))) {
(*F->r_937) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2707))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("x = ", 4)), (*(P141)rt_nil_check((*F->r_937)))), rt_g_lit("; rt_int l_ = ", 14)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_933)).tcons_)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P123)rt_nil_check(F->t_933)).tcons_)).hi_))), rt_g_lit("; if (G_CNT(", 12)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("x) != (h_ >= l_ \? h_ - l_ + 1 : 0)) ", 36)), rt_g_lit("rt_raise_msg(RT_X_SUBTYPE, ", 27)), f_q_264(F->up)), rt_g_lit("array length", 12)), f_q_264(F->up)), rt_g_lit("); ", 3)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("x.lo = l_; ", 11)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("x.hi = h_; ", 11)), (*(P141)rt_nil_check(F->tmp_2710))), rt_g_lit("x; })", 5)));
}
ret_:

  return;
}

static void f_gen_attr_943(struct f_greenc_1fr *up_, P175 e_939, P123 want_940, P123 *t_941, P141 *r_942) {
  struct f_gen_attr_943fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_939 = e_939;
F->want_940 = want_940;
F->t_941 = t_941;
F->r_942 = r_942;
F->a_2717 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_939)).name_)));
F->y_2718 = NULL;
F->tt_2719 = NULL;
F->aty_2720 = NULL;
F->v_2721 = NULL;
F->d_2722 = NULL;
F->c_2723 = NULL;
F->n_2724 = INT64_MIN;
F->ro_2725 = INT_MIN;
if ((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).kind_) == ((rt_int)8LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1170(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_)).name_))))) {
f_member_attr_1243(F->up, F->e_939, &(*F->t_941), &(*F->r_942));
goto ret_;
}
if ((eq_rt_gstr(F->a_2717, rt_g_lit("ADDRESS", 7)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2718 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)));
if ((F->y_2718 != NULL)) {
F->v_2721 = f_address_of_1366(F->up, F->y_2718);
if ((F->v_2721 != NULL)) {
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = F->v_2721;
goto ret_;
}
}
}
if ((eq_rt_gstr(F->a_2717, rt_g_lit("ADDRESS", 7)) && f_is_object_798(F->up, (*(P175)rt_nil_check(F->e_939)).a_))) {
f_lvalue_806(F->up, (*(P175)rt_nil_check(F->e_939)).a_, &F->v_2721, &F->aty_2720, &F->c_2723, &F->ro_2725);
 (void)rt_range(F->ro_2725, 0, 1);
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(intptr_t)&(", 21), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit("))", 2)));
goto ret_;
}
if (((eq_rt_gstr(F->a_2717, rt_g_lit("COUNT", 5)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->y_2718 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_)).name_)));
if ((((F->y_2718 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)10LL))) && ((*(P118)rt_nil_check(F->y_2718)).c_ != NULL))) {
if ((!f_same_task_446(F->up, (*(P118)rt_nil_check(F->y_2718)).members_, F->up->cur_task_212))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_939)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1193(F->up, F->y_2718, rt_g_lit("", 0), &F->v_2721);
f_gexpr_850(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).b_, NULL, &F->aty_2720, &F->d_2722);
f_entry_family_slot_1209(F->up, F->y_2718, (*(P141)rt_nil_check(F->v_2721)), (*(P141)rt_nil_check(F->d_2722)), &F->v_2721);
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P141)rt_nil_check(F->v_2721))), one_rt_gstr(41)));
goto ret_;
}
}
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_))) {
F->y_2718 = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)), G_NV((*(P175)rt_nil_check(F->e_939)).line_));
}
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).kind_) == ((rt_int)5LL))) {
F->y_2718 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)));
if (((F->y_2718 == NULL) && (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)), rt_g_lit("SYSTEM", 6)) || eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)), rt_g_lit("OPTION", 6))))) {
f_config_attr_965(F->up, F->e_939, &(*F->t_941), &(*F->r_942));
goto ret_;
}
if (((eq_rt_gstr(F->a_2717, rt_g_lit("ADDRESS", 7)) && (F->y_2718 != NULL)) && ((((G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)4LL)) || (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)3LL))) || (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)8LL))) || (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)9LL))))) {
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(rt_add(((rt_int)65536LL), rt_mul(((rt_int)16LL), f_hash_436(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_2718)).name_)), rt_g_s2g(rt_str_of_int(G_NV((*(P118)rt_nil_check(F->y_2718)).depth_)))))))))), one_rt_gstr(41)));
goto ret_;
}
if ((((F->y_2718 == NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && eq_rt_gstr(F->a_2717, rt_g_lit("CLOCK", 5)))) {
(*F->t_941) = F->up->ty_time_172;
(*F->r_942) = f_mk_246(F->up, rt_g_lit("((double)rt_time())", 19));
goto ret_;
}
if ((((F->y_2718 == NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_939)).a_)).name_)), rt_g_lit("SYSTEM", 6))) && (eq_rt_gstr(F->a_2717, rt_g_lit("MAX_PRIORITY", 12)) || eq_rt_gstr(F->a_2717, rt_g_lit("MIN_PRIORITY", 12))))) {
(*F->t_941) = F->up->ty_int_157;
if (eq_rt_gstr(F->a_2717, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("((rt_int)255)", 13));
} else {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("((rt_int)0)", 11));
}
goto ret_;
}
}
if (((F->y_2718 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) == ((rt_int)5LL)))) {
F->tt_2719 = (*(P118)rt_nil_check(F->y_2718)).t_;
F->c_2723 = (*(P118)rt_nil_check(F->y_2718)).c_;
if (eq_rt_gstr(F->a_2717, rt_g_lit("SIZE", 4))) {
(*F->t_941) = F->up->ty_int_157;
f_type_bits_947(F->up, F->tt_2719, F->c_2723, &(*F->r_942));
goto ret_;
}
if (((((((((eq_rt_gstr(F->a_2717, rt_g_lit("DIGITS", 6)) || eq_rt_gstr(F->a_2717, rt_g_lit("SMALL", 5))) || eq_rt_gstr(F->a_2717, rt_g_lit("LARGE", 5))) || eq_rt_gstr(F->a_2717, rt_g_lit("EXPONENT_MIN", 12))) || eq_rt_gstr(F->a_2717, rt_g_lit("EXPONENT_MAX", 12))) || eq_rt_gstr(F->a_2717, rt_g_lit("BITS", 4))) || eq_rt_gstr(F->a_2717, rt_g_lit("RADIX", 5))) || eq_rt_gstr(F->a_2717, rt_g_lit("DELTA", 5))) || eq_rt_gstr(F->a_2717, rt_g_lit("ACCESS_SIZE", 11)))) {
f_numeric_attr_957(F->up, F->e_939, F->tt_2719, F->c_2723, &(*F->t_941), &(*F->r_942));
goto ret_;
}
if (eq_rt_gstr(F->a_2717, rt_g_lit("ORD", 3))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_939)).b_, F->tt_2719, &F->aty_2720, &F->v_2721);
f_check_type_508(F->up, F->aty_2720, F->tt_2719, G_NV((*(P175)rt_nil_check(F->e_939)).line_));
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit(") + 1)", 6)));
goto ret_;
} else if ((eq_rt_gstr(F->a_2717, rt_g_lit("VAL", 3)) || eq_rt_gstr(F->a_2717, rt_g_lit("REP", 3)))) {
f_val_rep_990(F->up, F->e_939, F->tt_2719, F->c_2723, &(*F->t_941), &(*F->r_942));
goto ret_;
} else if ((eq_rt_gstr(F->a_2717, rt_g_lit("SUCC", 4)) || eq_rt_gstr(F->a_2717, rt_g_lit("PRED", 4)))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_939)).b_, F->tt_2719, &F->aty_2720, &F->v_2721);
(*F->t_941) = F->tt_2719;
if ((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2717, rt_g_lit("SUCC", 4))) {
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_add(", 7), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit(", 1)", 4)));
} else {
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_sub(", 7), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit(", 1)", 4)));
}
} else if (eq_rt_gstr(F->a_2717, rt_g_lit("SUCC", 4))) {
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit(" + 1, ", 6)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2723)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2723)).hi_))), one_rt_gstr(41)));
} else {
(*F->r_942) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check(F->v_2721))), rt_g_lit(" - 1, ", 6)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2723)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_2723)).hi_))), one_rt_gstr(41)));
}
goto ret_;
} else if (((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2717, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2717, rt_g_lit("LENGTH", 6))))) {
f_type_array_attr_981(F->up, F->e_939, F->tt_2719, F->c_2723, &(*F->t_941), &(*F->r_942));
goto ret_;
} else if ((eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2717, rt_g_lit("LAST", 4)))) {
(*F->t_941) = F->tt_2719;
if (f_bounded_496(F->up, F->c_2723)) {
if (eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5))) {
(*F->r_942) = (*(P179)rt_nil_check(F->c_2723)).lo_;
} else {
(*F->r_942) = (*(P179)rt_nil_check(F->c_2723)).hi_;
}
} else if ((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)1LL))) {
if (eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5))) {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("INT64_MAX", 9));
}
} else if (((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)3LL)) && (f_root_467(F->up, F->tt_2719) == F->up->ty_sfloat_170))) {
if (eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5))) {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("(-3.40282347e+38)", 17));
} else {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("3.40282347e+38", 14));
}
} else if ((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5))) {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("(-1.7976931348623157e+308)", 26));
} else {
(*F->r_942) = f_mk_246(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_939)).line_), cat_rt_gstr(rt_g_lit("this type has no ", 17), F->a_2717));
}
goto ret_;
}
f_other_attr_1239(F->up, F->e_939, F->y_2718, &(*F->t_941), &(*F->r_942));
goto ret_;
}
if (((F->y_2718 != NULL) && ((G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) != ((rt_int)1LL)) && (G_NV((*(P118)rt_nil_check(F->y_2718)).kind_) != ((rt_int)2LL))))) {
f_other_attr_1239(F->up, F->e_939, F->y_2718, &(*F->t_941), &(*F->r_942));
goto ret_;
}
if (((eq_rt_gstr(F->a_2717, rt_g_lit("POSITION", 8)) || eq_rt_gstr(F->a_2717, rt_g_lit("FIRST_BIT", 9))) || eq_rt_gstr(F->a_2717, rt_g_lit("LAST_BIT", 8)))) {
f_component_attr_961(F->up, F->e_939, &(*F->t_941), &(*F->r_942));
goto ret_;
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_939)).a_, NULL, &F->tt_2719, &F->v_2721);
if (eq_rt_gstr(F->a_2717, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) != ((rt_int)8LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_939)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types and objects (RM79 App. A)", 69));
}
(*F->t_941) = F->up->ty_int_157;
(*F->r_942) = f_mk_246(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
goto ret_;
}
if (eq_rt_gstr(F->a_2717, rt_g_lit("SIZE", 4))) {
(*F->t_941) = F->up->ty_int_157;
f_object_bits_951(F->up, F->tt_2719, (*(P141)rt_nil_check(F->v_2721)), &(*F->r_942));
goto ret_;
}
if ((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_629(F->up, F->tt_2719);
f_deref_796(F->up, (*(P141)rt_nil_check(F->v_2721)), F->tt_2719, &F->d_2722);
F->v_2721 = F->d_2722;
F->tt_2719 = (*(P123)rt_nil_check(F->tt_2719)).target_;
}
(*F->t_941) = F->up->ty_int_157;
if (((G_NV((*(P123)rt_nil_check(F->tt_2719)).kind_) == ((rt_int)6LL)) && ((eq_rt_gstr(F->a_2717, rt_g_lit("FIRST", 5)) || eq_rt_gstr(F->a_2717, rt_g_lit("LAST", 4))) || eq_rt_gstr(F->a_2717, rt_g_lit("LENGTH", 6))))) {
f_object_array_attr_975(F->up, F->e_939, F->tt_2719, (*(P141)rt_nil_check(F->v_2721)), &(*F->t_941), &(*F->r_942));
goto ret_;
}
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_939)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_2717), rt_g_lit(" is not handled here", 20)));
ret_:

  return;
}

static void f_type_bits_947(struct f_greenc_1fr *up_, P123 t_944, P179 c_945, P141 *r_946) {
  struct f_type_bits_947fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_944 = t_944;
F->c_945 = c_945;
F->r_946 = r_946;
F->ct_2726 = NULL;
F->p_2727 = NULL;
F->p_2727 = f_rep_of_1347(F->up, F->t_944);
F->n_2728 = INT64_MIN;
if (((F->p_2727 != NULL) && (G_NV((*(P123)rt_nil_check(F->t_944)).kind_) != ((rt_int)8LL)))) {
f_min_bits_1356(F->up, F->t_944, F->c_945, &F->n_2728);
if ((((G_NV((*(P218)rt_nil_check(F->p_2727)).bits_) > ((rt_int)0LL)) || G_NV((*(P218)rt_nil_check(F->p_2727)).has_layout_)) || (G_NV((*(P218)rt_nil_check(F->p_2727)).packed_) && (G_NV(F->n_2728) >= ((rt_int)0LL))))) {
(*F->r_946) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->n_2728)))), one_rt_gstr(41)));
goto ret_;
} else if ((G_NV((*(P218)rt_nil_check(F->p_2727)).packed_) && (G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)6LL)))) {
if ((!f_bounded_496(F->up, F->c_945))) {
f_fail_267(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_min_bits_1356(F->up, (*(P123)rt_nil_check(F->t_944)).elem_, (*(P123)rt_nil_check(F->t_944)).elemcons_, &F->n_2728);
if ((G_NV(F->n_2728) >= ((rt_int)0LL))) {
(*F->r_946) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_945)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_945)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * ", 33)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2728)))), rt_g_lit("; })", 4)));
goto ret_;
}
}
}
if ((G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)6LL))) {
if ((!f_bounded_496(F->up, F->c_945))) {
f_fail_267(F->up, ((rt_int)0LL), rt_g_lit("SIZE of an array type needs its bounds (RM79 App. A)", 52));
}
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_944)).elem_, &F->ct_2726);
(*F->r_946) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_945)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_945)).hi_))), rt_g_lit("; (h_ >= l_ \? h_ - l_ + 1 : 0) * (rt_int)sizeof(", 48)), (*(P141)rt_nil_check(F->ct_2726))), rt_g_lit(") * 8; })", 9)));
} else if (((G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)11LL)) || (G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)2LL)))) {
(*F->r_946) = f_mk_246(F->up, rt_g_lit("((rt_int)8)", 11));
} else if ((G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)4LL))) {
if ((f_list_len_326(F->up, (*(P123)rt_nil_check(F->t_944)).lits_) <= ((rt_int)256LL))) {
(*F->r_946) = f_mk_246(F->up, rt_g_lit("((rt_int)8)", 11));
} else {
(*F->r_946) = f_mk_246(F->up, rt_g_lit("((rt_int)16)", 12));
}
} else if (((G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)1LL)) && (f_root_467(F->up, F->t_944) == F->up->ty_short_168))) {
(*F->r_946) = f_mk_246(F->up, rt_g_lit("((rt_int)32)", 12));
} else if (((G_NV((*(P123)rt_nil_check(F->t_944)).kind_) == ((rt_int)3LL)) && (f_root_467(F->up, F->t_944) == F->up->ty_sfloat_170))) {
(*F->r_946) = f_mk_246(F->up, rt_g_lit("((rt_int)32)", 12));
} else {
f_ctype_513(F->up, F->t_944, &F->ct_2726);
(*F->r_946) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(sizeof(", 17), (*(P141)rt_nil_check(F->ct_2726))), rt_g_lit(") * 8))", 7)));
}
ret_:

  return;
}

static void f_object_bits_951(struct f_greenc_1fr *up_, P123 t_948, rt_gstr v_949, P141 *r_950) {
  struct f_object_bits_951fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_948 = t_948;
F->v_949 = cp_rt_gstr(v_949);
F->r_950 = r_950;
F->ct_2729 = NULL;
F->et_2730 = NULL;
F->p_2731 = NULL;
F->p_2731 = f_rep_of_1347(F->up, F->t_948);
F->n_2732 = INT64_MIN;
F->n_2732 = rt_neg(((rt_int)1LL));
if (((F->p_2731 != NULL) && (G_NV((*(P123)rt_nil_check(F->t_948)).kind_) == ((rt_int)6LL)))) {
if (G_NV((*(P218)rt_nil_check(F->p_2731)).packed_)) {
f_min_bits_1356(F->up, (*(P123)rt_nil_check(F->t_948)).elem_, (*(P123)rt_nil_check(F->t_948)).elemcons_, &F->n_2732);
}
}
if ((G_NV(F->n_2732) >= ((rt_int)0LL))) {
f_ctype_513(F->up, F->t_948, &F->ct_2729);
(*F->r_950) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2729))), rt_g_lit(" sz_ = ", 7)), F->v_949), rt_g_lit("; G_CNT(sz_) * ", 15)), rt_g_s2g(rt_str_of_int(G_NV(F->n_2732)))), rt_g_lit("; })", 4)));
} else if ((G_NV((*(P123)rt_nil_check(F->t_948)).kind_) == ((rt_int)6LL))) {
f_ctype_513(F->up, F->t_948, &F->ct_2729);
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->t_948)).elem_, &F->et_2730);
(*F->r_950) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2729))), rt_g_lit(" sz_ = ", 7)), F->v_949), rt_g_lit("; G_CNT(sz_) * (rt_int)sizeof(", 30)), (*(P141)rt_nil_check(F->et_2730))), rt_g_lit(") * 8; })", 9)));
} else {
f_type_bits_947(F->up, F->t_948, NULL, &(*F->r_950));
(*F->r_950) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ (void)(", 10), F->v_949), rt_g_lit("); ", 3)), (*(P141)rt_nil_check((*F->r_950)))), rt_g_lit("; })", 4)));
}
ret_:

  return;
}

static void f_numeric_attr_957(struct f_greenc_1fr *up_, P175 e_952, P123 tt_953, P179 c_954, P123 *t_955, P141 *r_956) {
  struct f_numeric_attr_957fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_952 = e_952;
F->tt_953 = tt_953;
F->c_954 = c_954;
F->t_955 = t_955;
F->r_956 = r_956;
F->a_2733 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_952)).name_)));
F->short_2734 = INT_MIN;
F->short_2734 = (f_root_467(F->up, F->tt_953) == F->up->ty_sfloat_170);
(*F->t_955) = F->up->ty_int_157;
if (eq_rt_gstr(F->a_2733, rt_g_lit("ACCESS_SIZE", 11))) {
if ((G_NV((*(P123)rt_nil_check(F->tt_953)).kind_) != ((rt_int)8LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_952)).line_), rt_g_lit("ACCESS_SIZE is an attribute of access types (RM79 App. A)", 57));
}
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)(sizeof(void *) * 8))", 30));
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("RADIX", 5))) {
if ((!f_is_numeric_472(F->up, F->tt_953))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_952)).line_), rt_g_lit("RADIX is an attribute of numeric types (RM79 App. A)", 52));
}
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)2)", 11));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_953)).kind_) == ((rt_int)3LL))) {
if (eq_rt_gstr(F->a_2733, rt_g_lit("DIGITS", 6))) {
if (((F->c_954 != NULL) && ((*(P179)rt_nil_check(F->c_954)).acc_ != NULL))) {
(*F->r_956) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)(", 10), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).acc_))), rt_g_lit("))", 2)));
} else {
(*F->r_956) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV((*(P123)rt_nil_check(F->tt_953)).ndigits_)))), one_rt_gstr(41)));
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("BITS", 4))) {
if (G_NV(F->short_2734)) {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)24)", 12));
} else {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)53)", 12));
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("EXPONENT_MIN", 12))) {
if (G_NV(F->short_2734)) {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)-125)", 14));
} else {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)-1021)", 15));
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("EXPONENT_MAX", 12))) {
if (G_NV(F->short_2734)) {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)128)", 13));
} else {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("((rt_int)1024)", 14));
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("SMALL", 5))) {
(*F->t_955) = F->tt_953;
if (G_NV(F->short_2734)) {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("1.17549435e-38", 14));
} else {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("2.2250738585072014e-308", 23));
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("LARGE", 5))) {
(*F->t_955) = F->tt_953;
if (G_NV(F->short_2734)) {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("3.40282347e+38", 14));
} else {
(*F->r_956) = f_mk_246(F->up, rt_g_lit("1.7976931348623157e+308", 23));
}
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_952)).line_), rt_g_lit("DELTA is an attribute of fixed point types (RM79 App. A)", 56));
}
} else if (((G_NV((*(P123)rt_nil_check(F->tt_953)).kind_) == ((rt_int)16LL)) && ((*(P123)rt_nil_check(F->tt_953)).fsmall_ != NULL))) {
if (eq_rt_gstr(F->a_2733, rt_g_lit("DELTA", 5))) {
(*F->t_955) = F->tt_953;
if (((F->c_954 != NULL) && ((*(P179)rt_nil_check(F->c_954)).acc_ != NULL))) {
(*F->r_956) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).acc_))), one_rt_gstr(41)));
} else {
(*F->r_956) = (*(P123)rt_nil_check(F->tt_953)).fdelta_;
}
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("SMALL", 5))) {
(*F->t_955) = F->tt_953;
(*F->r_956) = (*(P123)rt_nil_check(F->tt_953)).fsmall_;
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("LARGE", 5))) {
(*F->t_955) = F->tt_953;
(*F->r_956) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_large(", 15), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->tt_953)).fsmall_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).hi_))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2733, rt_g_lit("BITS", 4))) {
(*F->r_956) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_fix_bits(", 14), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->tt_953)).fsmall_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_954)).hi_))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_952)).line_), cat_rt_gstr(F->a_2733, rt_g_lit(" is not an attribute of fixed point types (RM79 App. A)", 55)));
}
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_952)).line_), cat_rt_gstr(F->a_2733, rt_g_lit(" is an attribute of real types (RM79 App. A)", 44)));
}
ret_:

  return;
}

static void f_component_attr_961(struct f_greenc_1fr *up_, P175 e_958, P123 *t_959, P141 *r_960) {
  struct f_component_attr_961fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_958 = e_958;
F->t_959 = t_959;
F->r_960 = r_960;
F->bt_2735 = NULL;
F->v_2736 = NULL;
F->ct_2737 = NULL;
F->f_2738 = NULL;
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_958)).a_)).kind_) != ((rt_int)9LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_958)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_958)).name_)), rt_g_lit(" is an attribute of a record component, X.C'", 44)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_958)).name_))), rt_g_lit(" (RM79 13.7)", 12)));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_958)).a_)).a_, NULL, &F->bt_2735, &F->v_2736);
if ((G_NV((*(P123)rt_nil_check(F->bt_2735)).kind_) == ((rt_int)8LL))) {
f_finish_ptr_629(F->up, F->bt_2735);
F->bt_2735 = (*(P123)rt_nil_check(F->bt_2735)).target_;
}
if ((G_NV((*(P123)rt_nil_check(F->bt_2735)).kind_) != ((rt_int)7LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_958)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_958)).name_)), rt_g_lit(" is an attribute of a record component (RM79 13.7)", 50)));
}
F->f_2738 = (*(P123)rt_nil_check(F->bt_2735)).fields_;
while (((F->f_2738 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2738)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_958)).a_)).name_)))))) {
F->f_2738 = (*(P2019)rt_nil_check(F->f_2738)).next_;
}
L_end_2739: ;
if ((F->f_2738 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_958)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_504(F->up, F->bt_2735), rt_g_lit(" has no component ", 18)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_958)).a_)).name_))));
}
f_ctype_513(F->up, F->bt_2735, &F->ct_2737);
(*F->t_959) = F->up->ty_int_157;
f_component_place_580(F->up, F->bt_2735, F->f_2738, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_958)).name_)), (*(P141)rt_nil_check(F->ct_2737)), &(*F->r_960));
ret_:

  return;
}

static void f_config_attr_965(struct f_greenc_1fr *up_, P175 e_962, P123 *t_963, P141 *r_964) {
  struct f_config_attr_965fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_962 = e_962;
F->t_963 = t_963;
F->r_964 = r_964;
F->a_2740 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_962)).name_)));
F->p_2741 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_962)).a_)).name_)));
F->nm_2742 = NULL;
F->nm_2742 = F->up->conf_system_241;
(*F->t_963) = F->up->ty_int_157;
if (eq_rt_gstr(F->p_2741, rt_g_lit("OPTION", 6))) {
(*F->t_963) = F->up->ty_bool_158;
if (eq_rt_gstr(F->a_2740, rt_g_lit("TIME", 4))) {
if (((F->up->conf_optimize_244 != NULL) && eq_rt_gstr((*(P141)rt_nil_check(F->up->conf_optimize_244)), rt_g_lit("TIME", 4)))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("1", 1));
} else {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("0", 1));
}
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("SPACE", 5))) {
if (((F->up->conf_optimize_244 != NULL) && eq_rt_gstr((*(P141)rt_nil_check(F->up->conf_optimize_244)), rt_g_lit("SPACE", 5)))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("1", 1));
} else {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("0", 1));
}
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_962)).line_), rt_g_lit("OPTION has the attributes TIME and SPACE (RM79 13.7)", 52));
}
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("CLOCK", 5))) {
(*F->t_963) = F->up->ty_time_172;
(*F->r_964) = f_mk_246(F->up, rt_g_lit("((double)rt_time())", 19));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("MAX_PRIORITY", 12))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("((rt_int)255)", 13));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("MIN_PRIORITY", 12))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("((rt_int)0)", 11));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("NAME", 4))) {
if ((F->nm_2742 == NULL)) {
F->nm_2742 = f_mk_246(F->up, rt_g_lit("PALEO", 5));
}
(*F->t_963) = F->up->ty_string_161;
(*F->r_964) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_c_string_835(F->up, (*(P141)rt_nil_check(F->nm_2742)))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(({ rt_gstr at2744 = (*(P141)rt_nil_check(F->nm_2742)); at2744.hi >= at2744.lo ? at2744.hi - at2744.lo + 1 : (rt_int)0; })))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("STORAGE_UNIT", 12))) {
(*F->r_964) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_storage_unit_242)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("MEMORY_SIZE", 11))) {
(*F->r_964) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_243)))), one_rt_gstr(41)));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("MAX_INT", 7))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("INT64_MAX", 9));
} else if (eq_rt_gstr(F->a_2740, rt_g_lit("MIN_INT", 7))) {
(*F->r_964) = f_mk_246(F->up, rt_g_lit("(-INT64_MAX)", 12));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_962)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("SYSTEM has no attribute ", 24), F->a_2740), rt_g_lit(" (RM79 13.7)", 12)));
}
ret_:

  return;
}

static void f_attr_dim_969(struct f_greenc_1fr *up_, P175 e_966, P123 arrt_967, rt_int *n_968) {
  struct f_attr_dim_969fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_966 = e_966;
F->arrt_967 = arrt_967;
F->n_968 = n_968;
F->ok_2745 = INT_MIN;
(*F->n_968) = ((rt_int)1LL);
if (((*(P175)rt_nil_check(F->e_966)).b_ != NULL)) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_966)).b_, &(*F->n_968), &F->ok_2745);
 (void)rt_range(F->ok_2745, 0, 1);
if ((!G_NV(F->ok_2745))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_966)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the index number of ", 20), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_966)).name_))), rt_g_lit("(N) is static (RM79 App. A)", 27)));
}
}
if (((G_NV((*F->n_968)) < ((rt_int)1LL)) || (G_NV((*F->n_968)) > G_NV((*(P123)rt_nil_check(F->arrt_967)).dims_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_966)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_504(F->up, F->arrt_967), rt_g_lit(" has no index ", 14)), rt_g_s2g(rt_str_of_int(G_NV((*F->n_968))))));
}
ret_:

  return;
}

static void f_object_array_attr_975(struct f_greenc_1fr *up_, P175 e_970, P123 arrt_971, rt_gstr v_972, P123 *t_973, P141 *r_974) {
  struct f_object_array_attr_975fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_970 = e_970;
F->arrt_971 = arrt_971;
F->v_972 = cp_rt_gstr(v_972);
F->t_973 = t_973;
F->r_974 = r_974;
F->n_2746 = INT64_MIN;
F->it_2747 = NULL;
F->it_2747 = F->arrt_971;
F->ct_2748 = NULL;
F->tmp_2749 = NULL;
F->p_2750 = NULL;
F->lo_2751 = NULL;
F->hi_2752 = NULL;
f_attr_dim_969(F->up, F->e_970, F->arrt_971, &F->n_2746);
f_ctype_513(F->up, F->arrt_971, &F->ct_2748);
f_new_name_249(F->up, rt_g_lit("at", 2), &F->tmp_2749);
F->p_2750 = F->tmp_2749;
{ rt_int lo2755 = ((rt_int)2LL), hi2756 = G_NV(F->n_2746);
for (rt_int it2757 = lo2755; it2757 <= hi2756; it2757++) {
F->k_2754 = it2757;
F->it_2747 = (*(P123)rt_nil_check(F->it_2747)).elem_;
}
}
L_end_2753: ;
if ((G_NV(F->n_2746) == ((rt_int)1LL))) {
F->lo_2751 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2750)), rt_g_lit(".lo", 3)));
F->hi_2752 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2750)), rt_g_lit(".hi", 3)));
} else {
{ rt_int lo2760 = ((rt_int)3LL), hi2761 = G_NV(F->n_2746);
for (rt_int it2762 = lo2760; it2762 <= hi2761; it2762++) {
F->k_2759 = it2762;
F->p_2750 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2750)), rt_g_lit(".p[0]", 5)));
}
}
L_end_2758: ;
F->lo_2751 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2750)), rt_g_lit(".lo2", 4)));
F->hi_2752 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->p_2750)), rt_g_lit(".hi2", 4)));
}
(*F->t_973) = (*(P123)rt_nil_check(F->it_2747)).idx_;
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_970)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_974) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2748))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2749))), rt_g_lit(" = ", 3)), F->v_972), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->lo_2751))), rt_g_lit("; })", 4)));
} else if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_970)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_974) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2748))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2749))), rt_g_lit(" = ", 3)), F->v_972), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->hi_2752))), rt_g_lit("; })", 4)));
} else {
(*F->t_973) = F->up->ty_int_157;
(*F->r_974) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2748))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2749))), rt_g_lit(" = ", 3)), F->v_972), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->hi_2752))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_2751))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->hi_2752))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_2751))), rt_g_lit(" + 1 : (rt_int)0; })", 20)));
}
ret_:

  return;
}

static void f_type_array_attr_981(struct f_greenc_1fr *up_, P175 e_976, P123 arrt_977, P179 c_978, P123 *t_979, P141 *r_980) {
  struct f_type_array_attr_981fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_976 = e_976;
F->arrt_977 = arrt_977;
F->c_978 = c_978;
F->t_979 = t_979;
F->r_980 = r_980;
F->n_2763 = INT64_MIN;
F->it_2764 = NULL;
F->it_2764 = F->arrt_977;
F->cc_2765 = NULL;
F->cc_2765 = F->c_978;
f_attr_dim_969(F->up, F->e_976, F->arrt_977, &F->n_2763);
{ rt_int lo2768 = ((rt_int)2LL), hi2769 = G_NV(F->n_2763);
for (rt_int it2770 = lo2768; it2770 <= hi2769; it2770++) {
F->k_2767 = it2770;
F->it_2764 = (*(P123)rt_nil_check(F->it_2764)).elem_;
if ((F->cc_2765 != NULL)) {
F->cc_2765 = (*(P179)rt_nil_check(F->cc_2765)).inner_;
}
}
}
L_end_2766: ;
if (((F->cc_2765 == NULL) || ((*(P179)rt_nil_check(F->cc_2765)).lo_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_976)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the bounds of ", 14), f_kind_name_504(F->up, F->arrt_977)), rt_g_lit(" are not known here: ", 21)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_976)).name_))), rt_g_lit(" applies to an array type with bounds (RM79 3.6)", 48)));
}
(*F->t_979) = (*(P123)rt_nil_check(F->it_2764)).idx_;
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_976)).name_)), rt_g_lit("FIRST", 5))) {
(*F->r_980) = (*(P179)rt_nil_check(F->cc_2765)).lo_;
} else if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_976)).name_)), rt_g_lit("LAST", 4))) {
(*F->r_980) = (*(P179)rt_nil_check(F->cc_2765)).hi_;
} else {
(*F->t_979) = F->up->ty_int_157;
(*F->r_980) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ rt_int l_ = ", 15), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->cc_2765)).lo_))), rt_g_lit(", h_ = ", 7)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->cc_2765)).hi_))), rt_g_lit("; h_ >= l_ \? h_ - l_ + 1 : (rt_int)0; })", 40)));
}
ret_:

  return;
}

static void f_lit_table_984(struct f_greenc_1fr *up_, P123 t_982, P141 *r_983) {
  struct f_lit_table_984fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_982 = t_982;
F->r_983 = r_983;
F->l_2771 = NULL;
F->l_2771 = (*(P123)rt_nil_check(F->t_982)).lits_;
F->s_2772 = NULL;
F->s_2772 = f_mk_246(F->up, rt_g_lit("", 0));
if (((*(P123)rt_nil_check(F->t_982)).littab_ == NULL)) {
f_new_name_249(F->up, rt_g_lit("lits", 4), &(*(P123)rt_nil_check(F->t_982)).littab_);
while ((F->l_2771 != NULL)) {
if ((({ rt_gstr at2774 = (*(P141)rt_nil_check(F->s_2772)); at2774.hi >= at2774.lo ? at2774.hi - at2774.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->s_2772 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->s_2772)), rt_g_lit(", ", 2)));
}
if ((G_NV((*(P175)rt_nil_check(F->l_2771)).kind_) == ((rt_int)3LL))) {
F->s_2772 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->s_2772)), f_c_string_835(F->up, cat_rt_gstr(cat_rt_gstr(f_q_264(F->up), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->l_2771)).name_))), f_q_264(F->up)))));
} else {
F->s_2772 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->s_2772)), f_c_string_835(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->l_2771)).name_)))));
}
F->l_2771 = (*(P175)rt_nil_check(F->l_2771)).next_;
}
L_end_2773: ;
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static const char *const ", 25), (*(P141)rt_nil_check((*(P123)rt_nil_check(F->t_982)).littab_))), rt_g_lit("[] = {", 6)), (*(P141)rt_nil_check(F->s_2772))), rt_g_lit("};", 2)));
}
(*F->r_983) = (*(P123)rt_nil_check(F->t_982)).littab_;
ret_:

  return;
}

static void f_val_rep_990(struct f_greenc_1fr *up_, P175 e_985, P123 tt_986, P179 c_987, P123 *t_988, P141 *r_989) {
  struct f_val_rep_990fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_985 = e_985;
F->tt_986 = tt_986;
F->c_987 = c_987;
F->t_988 = t_988;
F->r_989 = r_989;
F->aty_2775 = NULL;
F->v_2776 = NULL;
F->lt_2777 = NULL;
F->n_2778 = INT64_MIN;
if (((*(P175)rt_nil_check(F->e_985)).b_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_985)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_985)).name_))), rt_g_lit(" takes an argument", 18)));
}
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_985)).name_)), rt_g_lit("REP", 3))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_985)).b_, F->tt_986, &F->aty_2775, &F->v_2776);
f_check_type_508(F->up, F->aty_2775, F->tt_986, G_NV((*(P175)rt_nil_check(F->e_985)).line_));
(*F->t_988) = F->up->ty_string_161;
if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)1LL))) {
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_str_of_int(", 14), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)3LL))) {
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_image_float(", 17), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)2LL))) {
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_rep(", 14), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)11LL))) {
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_rep(", 14), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)4LL))) {
f_lit_table_984(F->up, F->tt_986, &F->lt_2777);
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_rep(", 14), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->lt_2777))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_326(F->up, (*(P123)rt_nil_check(F->tt_986)).lits_)))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_985)).line_), rt_g_lit("REP is an attribute of scalar types", 35));
}
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_s2g(", 9), (*(P141)rt_nil_check((*F->r_989)))), one_rt_gstr(41)));
goto ret_;
}
(*F->t_988) = F->tt_986;
if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)1LL))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_985)).b_, F->up->ty_string_161, &F->aty_2775, &F->v_2776);
f_check_type_508(F->up, F->aty_2775, F->up->ty_string_161, G_NV((*(P175)rt_nil_check(F->e_985)).line_));
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_int_of_str(rt_g_g2s(", 23), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit("))", 2)));
if (f_bounded_496(F->up, F->c_987)) {
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check((*F->r_989)))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_987)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_987)).hi_))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)3LL))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_985)).b_, F->up->ty_string_161, &F->aty_2775, &F->v_2776);
f_check_type_508(F->up, F->aty_2775, F->up->ty_string_161, G_NV((*(P175)rt_nil_check(F->e_985)).line_));
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_float_val(rt_g_g2s(", 24), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit("))", 2)));
} else if ((((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)2LL)) || (G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)11LL))) || (G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)4LL)))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_985)).b_, NULL, &F->aty_2775, &F->v_2776);
if (f_is_string_592(F->up, F->aty_2775)) {
F->v_2776 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_g2s(", 9), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)2LL))) {
F->v_2776 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bool_val(", 14), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->tt_986)).kind_) == ((rt_int)11LL))) {
F->v_2776 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_char_val(", 14), (*(P141)rt_nil_check(F->v_2776))), one_rt_gstr(41)));
} else {
f_lit_table_984(F->up, F->tt_986, &F->lt_2777);
F->v_2776 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_enum_val(", 14), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->lt_2777))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(f_list_len_326(F->up, (*(P123)rt_nil_check(F->tt_986)).lits_)))), one_rt_gstr(41)));
}
} else {
f_check_type_508(F->up, F->aty_2775, F->up->ty_int_157, G_NV((*(P175)rt_nil_check(F->e_985)).line_));
F->v_2776 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit(" - 1)", 5)));
}
(*F->r_989) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check(F->v_2776))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_987)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_987)).hi_))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_985)).line_), rt_g_lit("VAL is an attribute of scalar types", 35));
}
ret_:

  return;
}

static void f_allocator_995(struct f_greenc_1fr *up_, P175 e_991, P123 want_992, P123 *t_993, P141 *r_994) {
  struct f_allocator_995fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_991 = e_991;
F->want_992 = want_992;
F->t_993 = t_993;
F->r_994 = r_994;
F->y_2779 = NULL;
F->y_2779 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_991)).name_)));
F->target_2780 = NULL;
F->vt_2781 = NULL;
F->ct_2782 = NULL;
F->pt_2783 = NULL;
F->cell_2784 = NULL;
F->v_2785 = NULL;
F->x_2786 = NULL;
F->b_2787 = NULL;
F->p_2788 = NULL;
if (((F->want_992 == NULL) || (G_NV((*(P123)rt_nil_check(F->want_992)).kind_) != ((rt_int)8LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_991)).line_), rt_g_lit("the access type of this allocator is not known here", 51));
}
if (((F->y_2779 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_2779)).kind_) != ((rt_int)5LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_991)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_991)).name_)), rt_g_lit(" is not a type", 14)));
}
f_finish_ptr_629(F->up, F->want_992);
F->target_2780 = (*(P123)rt_nil_check(F->want_992)).target_;
if ((!f_same_463(F->up, (*(P118)rt_nil_check(F->y_2779)).t_, F->want_992))) {
f_check_type_508(F->up, (*(P118)rt_nil_check(F->y_2779)).t_, F->target_2780, G_NV((*(P175)rt_nil_check(F->e_991)).line_));
}
f_ctype_513(F->up, F->target_2780, &F->ct_2782);
f_ctype_513(F->up, F->want_992, &F->pt_2783);
f_new_name_249(F->up, rt_g_lit("cell", 4), &F->cell_2784);
if (((*(P175)rt_nil_check(F->e_991)).a_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_991)).line_), rt_g_lit("an allocator gives the initial value: new T(...) (RM79 4.7)", 59));
}
if ((F->up->pure_sym_235 != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_991)).line_), rt_g_lit("an allocator cannot appear in a function body (RM79 6.5)", 56));
}
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_991)).a_)).kind_) == ((rt_int)12LL))) {
f_aggregate_1000(F->up, (*(P175)rt_nil_check(F->e_991)).a_, F->target_2780, &F->vt_2781, &F->v_2785);
} else {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_991)).a_, F->target_2780, &F->vt_2781, &F->v_2785);
}
f_check_type_508(F->up, F->vt_2781, F->target_2780, G_NV((*(P175)rt_nil_check(F->e_991)).line_));
f_copy_code_645(F->up, F->target_2780, (*(P141)rt_nil_check(F->v_2785)), &F->x_2786);
(*F->t_993) = F->want_992;
F->p_2788 = f_rep_of_1347(F->up, F->want_992);
if (((F->p_2788 != NULL) && ((*(P218)rt_nil_check(F->p_2788)).coll_ != NULL))) {
f_object_bits_951(F->up, F->target_2780, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P141)rt_nil_check(F->cell_2784))), one_rt_gstr(41)), &F->b_2787);
F->x_2786 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_2786)), rt_g_lit("; rt_g_collect(&", 16)), (*(P141)rt_nil_check((*(P218)rt_nil_check(F->p_2788)).coll_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->b_2787))), rt_g_lit(", ", 2)), rt_g_s2g(rt_str_of_int(G_NV((*(P218)rt_nil_check(F->p_2788)).bits_)))), one_rt_gstr(41)));
}
(*F->r_994) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2782))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check(F->cell_2784))), rt_g_lit(" = rt_alloc(sizeof(", 19)), (*(P141)rt_nil_check(F->ct_2782))), rt_g_lit(")); *", 5)), (*(P141)rt_nil_check(F->cell_2784))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2786))), rt_g_lit("; (", 3)), (*(P141)rt_nil_check(F->pt_2783))), one_rt_gstr(41)), (*(P141)rt_nil_check(F->cell_2784))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_aggregate_1000(struct f_greenc_1fr *up_, P175 e_996, P123 want_997, P123 *t_998, P141 *r_999) {
  struct f_aggregate_1000fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_996 = e_996;
F->want_997 = want_997;
F->t_998 = t_998;
F->r_999 = r_999;
F->b_2789 = NULL;
F->b_2789 = F->up->agg_bounds_182;
F->up->agg_bounds_182 = NULL;
if ((F->want_997 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_996)).line_), rt_g_lit("the type of this aggregate is not known here: qualify it, T(...) (RM79 4.6)", 75));
}
(*F->t_998) = F->want_997;
if ((G_NV((*(P123)rt_nil_check(F->want_997)).kind_) == ((rt_int)7LL))) {
f_record_aggregate_1022(F->up, F->e_996, F->want_997, &(*F->r_999));
} else if ((G_NV((*(P123)rt_nil_check(F->want_997)).kind_) == ((rt_int)6LL))) {
f_array_aggregate_1040(F->up, F->e_996, F->want_997, F->b_2789, &(*F->r_999));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_996)).line_), cat_rt_gstr(rt_g_lit("an aggregate builds a record or an array, not ", 46), f_kind_name_504(F->up, F->want_997)));
}
ret_:

  return;
}

static void f_captured_1003(struct f_greenc_1fr *up_, P127 b_1001, P141 *r_1002) {
  struct f_captured_1003fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1001 = b_1001;
F->r_1002 = r_1002;
F->l_2790 = NULL;
F->l_2790 = (*(P127)rt_nil_check(F->b_1001)).head_;
(*F->r_1002) = f_mk_246(F->up, rt_g_lit("", 0));
while ((F->l_2790 != NULL)) {
(*F->r_1002) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_1002))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P152)rt_nil_check(F->l_2790)).s_))));
F->l_2790 = (*(P152)rt_nil_check(F->l_2790)).next_;
}
L_end_2791: ;
ret_:

  return;
}

static P2019 f_field_at_1006(struct f_greenc_1fr *up_, P123 rt_1004, rt_int k_1005) {
  struct f_field_at_1006fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_1004 = rt_1004;
F->k_1005 = k_1005;
F->f_2792 = NULL;
F->f_2792 = (*(P123)rt_nil_check(F->rt_1004)).fields_;
{ rt_int lo2795 = ((rt_int)2LL), hi2796 = F->k_1005;
for (rt_int it2797 = lo2795; it2797 <= hi2796; it2797++) {
F->i_2794 = it2797;
F->f_2792 = (*(P2019)rt_nil_check(F->f_2792)).next_;
}
}
L_end_2793: ;
F->result_ = F->f_2792;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_names_field_1009(struct f_greenc_1fr *up_, P175 x_1007, P2019 f_1008) {
  struct f_names_field_1009fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1007 = x_1007;
F->f_1008 = f_1008;
if ((G_NV((*(P175)rt_nil_check(F->x_1007)).kind_) != ((rt_int)5LL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1007)).name_)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_1008)).name_)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P175 f_item_for_1014(struct f_greenc_1fr *up_, P175 e_1010, P123 rt_1011, rt_int k_1012, rt_int p_1013) {
  struct f_item_for_1014fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1010 = e_1010;
F->rt_1011 = rt_1011;
F->k_1012 = k_1012;
F->p_1013 = p_1013;
F->it_2798 = NULL;
F->it_2798 = (*(P175)rt_nil_check(F->e_1010)).a_;
F->lab_2799 = NULL;
F->n_2800 = INT64_MIN;
F->n_2800 = ((rt_int)0LL);
while ((F->it_2798 != NULL)) {
if (((*(P175)rt_nil_check(F->it_2798)).a_ == NULL)) {
F->n_2800 = rt_add(G_NV(F->n_2800), ((rt_int)1LL));
if ((G_NV(F->n_2800) == F->p_1013)) {
F->result_ = (*(P175)rt_nil_check(F->it_2798)).b_;
goto ret_;
}
} else {
F->lab_2799 = (*(P175)rt_nil_check(F->it_2798)).a_;
while ((F->lab_2799 != NULL)) {
if (((G_NV((*(P175)rt_nil_check(F->lab_2799)).flag_) == ((rt_int)1LL)) || f_names_field_1009(F->up, (*(P175)rt_nil_check(F->lab_2799)).a_, f_field_at_1006(F->up, F->rt_1011, F->k_1012)))) {
F->result_ = (*(P175)rt_nil_check(F->it_2798)).b_;
goto ret_;
}
F->lab_2799 = (*(P175)rt_nil_check(F->lab_2799)).next_;
}
L_end_2802: ;
}
F->it_2798 = (*(P175)rt_nil_check(F->it_2798)).next_;
}
L_end_2801: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_arm_holds_1018(struct f_greenc_1fr *up_, P175 arm_1015, rt_int v_1016, int *res_1017) {
  struct f_arm_holds_1018fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->arm_1015 = arm_1015;
F->v_1016 = v_1016;
F->res_1017 = res_1017;
F->l_2803 = NULL;
F->l_2803 = (*(P175)rt_nil_check(F->arm_1015)).a_;
F->lo_2804 = INT64_MIN;
F->hi_2805 = INT64_MIN;
F->ok_2806 = INT_MIN;
(*F->res_1017) = 0;
while ((F->l_2803 != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->l_2803)).a_, &F->lo_2804, &F->ok_2806);
 (void)rt_range(F->ok_2806, 0, 1);
F->hi_2805 = G_NV(F->lo_2804);
if (((*(P175)rt_nil_check(F->l_2803)).b_ != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->l_2803)).b_, &F->hi_2805, &F->ok_2806);
 (void)rt_range(F->ok_2806, 0, 1);
}
if (((F->v_1016 >= G_NV(F->lo_2804)) && (F->v_1016 <= G_NV(F->hi_2805)))) {
(*F->res_1017) = 1;
}
F->l_2803 = (*(P175)rt_nil_check(F->l_2803)).next_;
}
L_end_2807: ;
ret_:

  return;
}

static void f_record_aggregate_1022(struct f_greenc_1fr *up_, P175 e_1019, P123 rt_1020, P141 *r_1021) {
  struct f_record_aggregate_1022fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1019 = e_1019;
F->rt_1020 = rt_1020;
F->r_1021 = r_1021;
F->it_2808 = NULL;
F->it_2808 = (*(P175)rt_nil_check(F->e_1019)).a_;
F->lab_2809 = NULL;
F->vn_2810 = NULL;
F->a_2811 = NULL;
F->f_2812 = NULL;
F->g_2813 = NULL;
F->n_2814 = INT64_MIN;
F->n_2814 = f_field_count_510(F->up, F->rt_1020);
F->done_2816.lo = ((rt_int)1LL); F->done_2816.hi = ((rt_int)200LL);
F->done_2816.lo2 = 1; F->done_2816.hi2 = 1;
F->done_2816.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->done_2816));
for (rt_int i2817 = 0; i2817 < G_CNT(F->done_2816); i2817++) F->done_2816.p[i2817] = INT_MIN;
F->active_2818.lo = ((rt_int)1LL); F->active_2818.hi = ((rt_int)200LL);
F->active_2818.lo2 = 1; F->active_2818.hi2 = 1;
F->active_2818.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->active_2818));
for (rt_int i2819 = 0; i2819 < G_CNT(F->active_2818); i2819++) F->active_2818.p[i2819] = INT_MIN;
F->dvs_2821.lo = ((rt_int)1LL); F->dvs_2821.hi = ((rt_int)200LL);
F->dvs_2821.lo2 = 1; F->dvs_2821.hi2 = 1;
F->dvs_2821.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->dvs_2821));
for (rt_int i2822 = 0; i2822 < G_CNT(F->dvs_2821); i2822++) F->dvs_2821.p[i2822] = INT64_MIN;
F->order_2824.lo = ((rt_int)1LL); F->order_2824.hi = ((rt_int)200LL);
F->order_2824.lo2 = 1; F->order_2824.hi2 = 1;
F->order_2824.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->order_2824));
for (rt_int i2825 = 0; i2825 < G_CNT(F->order_2824); i2825++) F->order_2824.p[i2825] = INT64_MIN;
F->norder_2826 = INT64_MIN;
F->norder_2826 = ((rt_int)0LL);
F->nung_2827 = INT64_MIN;
F->nung_2827 = ((rt_int)0LL);
F->k_2828 = INT64_MIN;
F->k_2828 = ((rt_int)0LL);
F->d_2829 = INT64_MIN;
F->d_2829 = ((rt_int)0LL);
F->npos_2830 = INT64_MIN;
F->npos_2830 = ((rt_int)0LL);
F->saved_2831 = NULL;
F->saved_2831 = F->up->code_137;
F->ct_2832 = NULL;
F->tmp_2833 = NULL;
F->parts_2834 = NULL;
F->named_2835 = INT_MIN;
F->named_2835 = 0;
F->ok_2836 = INT_MIN;
F->ok_2836 = 0;
F->holds_2837 = INT_MIN;
F->holds_2837 = 0;
if ((G_NV((*(P123)rt_nil_check(F->rt_1020)).priv_) && (!f_inside_package_1099(F->up, (*(P123)rt_nil_check(F->rt_1020)).decl_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate of private type ", 29), f_kind_name_504(F->up, F->rt_1020)), rt_g_lit(" is not allowed here (RM79 7.4)", 31)));
}
if ((G_NV(F->n_2814) > ((rt_int)200LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), rt_g_lit("a record of more than 200 components", 36));
}
F->f_2812 = (*(P123)rt_nil_check(F->rt_1020)).fields_;
{ rt_int lo2840 = ((rt_int)1LL), hi2841 = G_NV(F->n_2814);
for (rt_int it2842 = lo2840; it2842 <= hi2841; it2842++) {
F->i_2839 = it2842;
(*({ A2815 *ix2843 = &(F->done_2816); &ix2843->p[rt_index(F->i_2839, ix2843->lo, ix2843->hi) - ix2843->lo]; })) = 0;
(*({ A2815 *ix2844 = &(F->active_2818); &ix2844->p[rt_index(F->i_2839, ix2844->lo, ix2844->hi) - ix2844->lo]; })) = ((*(P2019)rt_nil_check(F->f_2812)).guard_ == NULL);
if (G_NV(({ A2815 ix2845 = F->active_2818; ix2845.p[rt_index(F->i_2839, ix2845.lo, ix2845.hi) - ix2845.lo]; }))) {
F->norder_2826 = rt_add(G_NV(F->norder_2826), ((rt_int)1LL));
(*({ A2823 *ix2846 = &(F->order_2824); &ix2846->p[rt_index(G_NV(F->norder_2826), ix2846->lo, ix2846->hi) - ix2846->lo]; })) = F->i_2839;
}
F->f_2812 = (*(P2019)rt_nil_check(F->f_2812)).next_;
}
}
L_end_2838: ;
F->nung_2827 = G_NV(F->norder_2826);
{ rt_int lo2849 = ((rt_int)1LL), hi2850 = G_NV(F->nung_2827);
for (rt_int it2851 = lo2849; it2851 <= hi2850; it2851++) {
F->p_2848 = it2851;
F->f_2812 = f_field_at_1006(F->up, F->rt_1020, G_NV(({ A2823 ix2853 = F->order_2824; ix2853.p[rt_index(F->p_2848, ix2853.lo, ix2853.hi) - ix2853.lo]; })));
if (G_NV((*(P2019)rt_nil_check(F->f_2812)).is_discr_)) {
F->vn_2810 = f_item_for_1014(F->up, F->e_1019, F->rt_1020, G_NV(({ A2823 ix2855 = F->order_2824; ix2855.p[rt_index(F->p_2848, ix2855.lo, ix2855.hi) - ix2855.lo]; })), F->p_2848);
if ((F->vn_2810 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("no value for discriminant ", 26), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2812)).name_))), rt_g_lit(" (RM79 3.7.3)", 13)));
}
f_static_choice_1035(F->up, F->vn_2810, &(*({ A2820 *ix2859 = &(F->dvs_2821); &ix2859->p[rt_index(G_NV(({ A2823 ix2858 = F->order_2824; ix2858.p[rt_index(F->p_2848, ix2858.lo, ix2858.hi) - ix2858.lo]; })), ix2859->lo, ix2859->hi) - ix2859->lo]; })), &F->ok_2836);
 (void)rt_range(F->ok_2836, 0, 1);
if (((!G_NV(F->ok_2836)) && f_is_enum_lit_833(F->up, F->vn_2810))) {
F->ok_2836 = 1;
(*({ A2820 *ix2861 = &(F->dvs_2821); &ix2861->p[rt_index(G_NV(({ A2823 ix2860 = F->order_2824; ix2860.p[rt_index(F->p_2848, ix2860.lo, ix2860.hi) - ix2860.lo]; })), ix2861->lo, ix2861->hi) - ix2861->lo]; })) = G_NV((*(P118)rt_nil_check(f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->vn_2810)).name_))))).mvalue_);
}
if (((!G_NV(F->ok_2836)) && ((*(P123)rt_nil_check(F->rt_1020)).fields_ != NULL))) {
F->g_2813 = NULL;
F->d_2829 = ((rt_int)0LL);
F->a_2811 = NULL;
F->f_2812 = (*(P123)rt_nil_check(F->rt_1020)).fields_;
while ((F->f_2812 != NULL)) {
F->g_2813 = (*(P2019)rt_nil_check(F->f_2812)).guard_;
while ((F->g_2813 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P2149)rt_nil_check(F->g_2813)).disc_)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(f_field_at_1006(F->up, F->rt_1020, G_NV(({ A2823 ix2865 = F->order_2824; ix2865.p[rt_index(F->p_2848, ix2865.lo, ix2865.hi) - ix2865.lo]; }))))).name_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the value of discriminant ", 26), (*(P141)rt_nil_check((*(P2149)rt_nil_check(F->g_2813)).disc_))), rt_g_lit(" in an aggregate is static (RM79 3.7.3)", 39)));
}
F->g_2813 = (*(P2149)rt_nil_check(F->g_2813)).next_;
}
L_end_2863: ;
F->f_2812 = (*(P2019)rt_nil_check(F->f_2812)).next_;
}
L_end_2862: ;
}
}
}
}
L_end_2847: ;
F->f_2812 = (*(P123)rt_nil_check(F->rt_1020)).fields_;
{ rt_int lo2868 = ((rt_int)1LL), hi2869 = G_NV(F->n_2814);
for (rt_int it2870 = lo2868; it2870 <= hi2869; it2870++) {
F->i_2867 = it2870;
if (((*(P2019)rt_nil_check(F->f_2812)).guard_ != NULL)) {
F->holds_2837 = 1;
F->g_2813 = (*(P2019)rt_nil_check(F->f_2812)).guard_;
while ((F->g_2813 != NULL)) {
F->d_2829 = f_field_index_1025(F->up, F->rt_1020, (*(P141)rt_nil_check((*(P2149)rt_nil_check(F->g_2813)).disc_)));
if ((G_NV((*(P175)rt_nil_check((*(P2149)rt_nil_check(F->g_2813)).arm_)).flag_) == ((rt_int)1LL))) {
F->a_2811 = (*(P175)rt_nil_check((*(P2149)rt_nil_check(F->g_2813)).variant_)).b_;
while ((F->a_2811 != NULL)) {
if ((F->a_2811 != (*(P2149)rt_nil_check(F->g_2813)).arm_)) {
f_arm_holds_1018(F->up, F->a_2811, G_NV(({ A2820 ix2874 = F->dvs_2821; ix2874.p[rt_index(G_NV(F->d_2829), ix2874.lo, ix2874.hi) - ix2874.lo]; })), &F->ok_2836);
 (void)rt_range(F->ok_2836, 0, 1);
if (G_NV(F->ok_2836)) {
F->holds_2837 = 0;
}
}
F->a_2811 = (*(P175)rt_nil_check(F->a_2811)).next_;
}
L_end_2872: ;
} else {
f_arm_holds_1018(F->up, (*(P2149)rt_nil_check(F->g_2813)).arm_, G_NV(({ A2820 ix2876 = F->dvs_2821; ix2876.p[rt_index(G_NV(F->d_2829), ix2876.lo, ix2876.hi) - ix2876.lo]; })), &F->ok_2836);
 (void)rt_range(F->ok_2836, 0, 1);
if ((!G_NV(F->ok_2836))) {
F->holds_2837 = 0;
}
}
F->g_2813 = (*(P2149)rt_nil_check(F->g_2813)).next_;
}
L_end_2871: ;
if (G_NV(F->holds_2837)) {
(*({ A2815 *ix2877 = &(F->active_2818); &ix2877->p[rt_index(F->i_2867, ix2877->lo, ix2877->hi) - ix2877->lo]; })) = 1;
F->norder_2826 = rt_add(G_NV(F->norder_2826), ((rt_int)1LL));
(*({ A2823 *ix2878 = &(F->order_2824); &ix2878->p[rt_index(G_NV(F->norder_2826), ix2878->lo, ix2878->hi) - ix2878->lo]; })) = F->i_2867;
}
}
F->f_2812 = (*(P2019)rt_nil_check(F->f_2812)).next_;
}
}
L_end_2866: ;
f_ctype_513(F->up, F->rt_1020, &F->ct_2832);
f_new_name_249(F->up, rt_g_lit("ag", 2), &F->tmp_2833);
F->up->code_137 = f_new_buffer_268(F->up);
while ((F->it_2808 != NULL)) {
if (((*(P175)rt_nil_check(F->it_2808)).a_ == NULL)) {
if (G_NV(F->named_2835)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->npos_2830 = rt_add(G_NV(F->npos_2830), ((rt_int)1LL));
if ((G_NV(F->npos_2830) > G_NV(F->norder_2826))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(rt_g_lit("too many components in an aggregate of ", 39), f_kind_name_504(F->up, F->rt_1020)));
}
F->k_2828 = G_NV(({ A2823 ix2880 = F->order_2824; ix2880.p[rt_index(G_NV(F->npos_2830), ix2880.lo, ix2880.hi) - ix2880.lo]; }));
f_agg_component_1031(F->up, (*(P141)rt_nil_check(F->tmp_2833)), F->rt_1020, G_NV(F->k_2828), (*(P175)rt_nil_check(F->it_2808)).b_, G_NV((*(P175)rt_nil_check(F->e_1019)).line_));
(*({ A2815 *ix2881 = &(F->done_2816); &ix2881->p[rt_index(G_NV(F->k_2828), ix2881->lo, ix2881->hi) - ix2881->lo]; })) = 1;
} else {
F->named_2835 = 1;
F->lab_2809 = (*(P175)rt_nil_check(F->it_2808)).a_;
while ((F->lab_2809 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->lab_2809)).flag_) == ((rt_int)1LL))) {
if (((*(P175)rt_nil_check(F->it_2808)).next_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
{ rt_int lo2885 = ((rt_int)1LL), hi2886 = G_NV(F->n_2814);
for (rt_int it2887 = lo2885; it2887 <= hi2886; it2887++) {
F->i_2884 = it2887;
if ((G_NV(({ A2815 ix2888 = F->active_2818; ix2888.p[rt_index(F->i_2884, ix2888.lo, ix2888.hi) - ix2888.lo]; })) && (!G_NV(({ A2815 ix2889 = F->done_2816; ix2889.p[rt_index(F->i_2884, ix2889.lo, ix2889.hi) - ix2889.lo]; }))))) {
f_agg_component_1031(F->up, (*(P141)rt_nil_check(F->tmp_2833)), F->rt_1020, F->i_2884, (*(P175)rt_nil_check(F->it_2808)).b_, G_NV((*(P175)rt_nil_check(F->e_1019)).line_));
(*({ A2815 *ix2890 = &(F->done_2816); &ix2890->p[rt_index(F->i_2884, ix2890->lo, ix2890->hi) - ix2890->lo]; })) = 1;
}
}
}
L_end_2883: ;
} else {
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2809)).a_)).kind_) != ((rt_int)5LL)) || ((*(P175)rt_nil_check(F->lab_2809)).b_ != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), rt_g_lit("a choice in a record aggregate names a component (RM79 3.6.2)", 61));
}
F->k_2828 = f_field_index_1025(F->up, F->rt_1020, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2809)).a_)).name_)));
if ((G_NV(F->k_2828) == ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(f_kind_name_504(F->up, F->rt_1020), rt_g_lit(" has no component ", 18)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2809)).a_)).name_))));
}
if ((!G_NV(({ A2815 ix2891 = F->active_2818; ix2891.p[rt_index(G_NV(F->k_2828), ix2891.lo, ix2891.hi) - ix2891.lo]; })))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2809)).a_)).name_))), rt_g_lit(" is not in the variant selected (RM79 3.7.3)", 44)));
}
if (G_NV(({ A2815 ix2892 = F->done_2816; ix2892.p[rt_index(G_NV(F->k_2828), ix2892.lo, ix2892.hi) - ix2892.lo]; }))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("component ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->lab_2809)).a_)).name_))), rt_g_lit(" is given twice in an aggregate (RM79 3.6.2)", 44)));
}
f_agg_component_1031(F->up, (*(P141)rt_nil_check(F->tmp_2833)), F->rt_1020, G_NV(F->k_2828), (*(P175)rt_nil_check(F->it_2808)).b_, G_NV((*(P175)rt_nil_check(F->e_1019)).line_));
(*({ A2815 *ix2893 = &(F->done_2816); &ix2893->p[rt_index(G_NV(F->k_2828), ix2893->lo, ix2893->hi) - ix2893->lo]; })) = 1;
}
F->lab_2809 = (*(P175)rt_nil_check(F->lab_2809)).next_;
}
L_end_2882: ;
}
F->it_2808 = (*(P175)rt_nil_check(F->it_2808)).next_;
}
L_end_2879: ;
F->f_2812 = (*(P123)rt_nil_check(F->rt_1020)).fields_;
{ rt_int lo2896 = ((rt_int)1LL), hi2897 = G_NV(F->n_2814);
for (rt_int it2898 = lo2896; it2898 <= hi2897; it2898++) {
F->i_2895 = it2898;
if ((G_NV(({ A2815 ix2899 = F->active_2818; ix2899.p[rt_index(F->i_2895, ix2899.lo, ix2899.hi) - ix2899.lo]; })) && (!G_NV(({ A2815 ix2900 = F->done_2816; ix2900.p[rt_index(F->i_2895, ix2900.lo, ix2900.hi) - ix2900.lo]; }))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1019)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("an aggregate gives every component of ", 38), f_kind_name_504(F->up, F->rt_1020)), rt_g_lit(": ", 2)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2812)).name_))), rt_g_lit(" is missing (RM79 3.6.2)", 24)));
}
F->f_2812 = (*(P2019)rt_nil_check(F->f_2812)).next_;
}
}
L_end_2894: ;
f_captured_1003(F->up, F->up->code_137, &F->parts_2834);
F->up->code_137 = F->saved_2831;
(*F->r_1021) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2832))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2833))), one_rt_gstr(59)), (*(P141)rt_nil_check(F->parts_2834))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2833))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static rt_int f_field_index_1025(struct f_greenc_1fr *up_, P123 rt_1023, rt_gstr name_1024) {
  struct f_field_index_1025fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->rt_1023 = rt_1023;
F->name_1024 = cp_rt_gstr(name_1024);
F->f_2901 = NULL;
F->f_2901 = (*(P123)rt_nil_check(F->rt_1023)).fields_;
F->k_2902 = INT64_MIN;
F->k_2902 = ((rt_int)1LL);
while ((F->f_2901 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2901)).name_)), F->name_1024)) {
F->result_ = G_NV(F->k_2902);
goto ret_;
}
F->k_2902 = rt_add(G_NV(F->k_2902), ((rt_int)1LL));
F->f_2901 = (*(P2019)rt_nil_check(F->f_2901)).next_;
}
L_end_2903: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_agg_component_1031(struct f_greenc_1fr *up_, rt_gstr tmp_1026, P123 rt_1027, rt_int k_1028, P175 v_1029, rt_int line_1030) {
  struct f_agg_component_1031fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->tmp_1026 = cp_rt_gstr(tmp_1026);
F->rt_1027 = rt_1027;
F->k_1028 = k_1028;
F->v_1029 = v_1029;
F->line_1030 = line_1030;
F->f_2904 = NULL;
F->f_2904 = (*(P123)rt_nil_check(F->rt_1027)).fields_;
F->vt_2905 = NULL;
F->x_2906 = NULL;
F->y_2907 = NULL;
{ rt_int lo2910 = ((rt_int)2LL), hi2911 = F->k_1028;
for (rt_int it2912 = lo2910; it2912 <= hi2911; it2912++) {
F->i_2909 = it2912;
F->f_2904 = (*(P2019)rt_nil_check(F->f_2904)).next_;
}
}
L_end_2908: ;
f_gexpr_850(F->up, F->v_1029, (*(P2019)rt_nil_check(F->f_2904)).t_, &F->vt_2905, &F->x_2906);
f_check_type_508(F->up, F->vt_2905, (*(P2019)rt_nil_check(F->f_2904)).t_, F->line_1030);
if (((G_NV((*(P123)rt_nil_check((*(P2019)rt_nil_check(F->f_2904)).t_)).kind_) == ((rt_int)6LL)) && (!f_bounded_496(F->up, (*(P2019)rt_nil_check(F->f_2904)).c_)))) {
f_copy_code_645(F->up, (*(P2019)rt_nil_check(F->f_2904)).t_, (*(P141)rt_nil_check(F->x_2906)), &F->y_2907);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->tmp_1026, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2904)).name_)))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->y_2907))), one_rt_gstr(59)));
} else {
if (f_composite_635(F->up, (*(P2019)rt_nil_check(F->f_2904)).t_)) {
f_init_storage_633(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_1026, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2904)).name_)))), (*(P2019)rt_nil_check(F->f_2904)).t_, (*(P2019)rt_nil_check(F->f_2904)).c_);
}
f_assign_code_641(F->up, cat_rt_gstr(cat_rt_gstr(F->tmp_1026, one_rt_gstr(46)), f_c_field_263(F->up, (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_2904)).name_)))), (*(P2019)rt_nil_check(F->f_2904)).t_, (*(P141)rt_nil_check(F->x_2906)), (*(P2019)rt_nil_check(F->f_2904)).c_, &F->y_2907);
f_emit_273(F->up, (*(P141)rt_nil_check(F->y_2907)));
}
ret_:

  return;
}

static void f_static_choice_1035(struct f_greenc_1fr *up_, P175 x_1032, rt_int *v_1033, int *ok_1034) {
  struct f_static_choice_1035fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1032 = x_1032;
F->v_1033 = v_1033;
F->ok_1034 = ok_1034;
if (f_is_char_lit_831(F->up, F->x_1032)) {
(*F->ok_1034) = 1;
(*F->v_1033) = rt_sub(((rt_int)(G_NV(({ rt_gstr ix2913 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_1032)).name_)); ix2913.p[rt_index(((rt_int)1LL), ix2913.lo, ix2913.hi) - ix2913.lo]; }))) + 1), ((rt_int)1LL));
goto ret_;
}
f_manifest_525(F->up, F->x_1032, &(*F->v_1033), &(*F->ok_1034));
 (void)rt_range((*F->ok_1034), 0, 1);
ret_:

  return;
}

static void f_array_aggregate_1040(struct f_greenc_1fr *up_, P175 e_1036, P123 arrt_1037, P141 bounds_1038, P141 *r_1039) {
  struct f_array_aggregate_1040fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1036 = e_1036;
F->arrt_1037 = arrt_1037;
F->bounds_1038 = bounds_1038;
F->r_1039 = r_1039;
F->it_2914 = NULL;
F->it_2914 = (*(P175)rt_nil_check(F->e_1036)).a_;
F->lab_2915 = NULL;
F->others_it_2916 = NULL;
F->np_2917 = INT64_MIN;
F->np_2917 = ((rt_int)0LL);
F->nnamed_2918 = INT64_MIN;
F->nnamed_2918 = ((rt_int)0LL);
F->clo_2919 = INT64_MIN;
F->clo_2919 = ((rt_int)0LL);
F->chi_2920 = INT64_MIN;
F->chi_2920 = ((rt_int)0LL);
F->v1_2921 = INT64_MIN;
F->v1_2921 = ((rt_int)0LL);
F->v2_2922 = INT64_MIN;
F->v2_2922 = ((rt_int)0LL);
F->all_static_2923 = INT_MIN;
F->all_static_2923 = 1;
F->ok_2924 = INT_MIN;
F->ok_2924 = 1;
F->ok2_2925 = INT_MIN;
F->ok2_2925 = 1;
F->first_choice_2926 = INT_MIN;
F->first_choice_2926 = 1;
F->vt_2927 = NULL;
F->ct_2928 = NULL;
F->et_2929 = NULL;
F->tmp_2930 = NULL;
F->lo_2931 = NULL;
F->hi_2932 = NULL;
F->v_2933 = NULL;
F->x_2934 = NULL;
F->parts_2935 = NULL;
F->fill_2936 = NULL;
F->rowb_2937 = NULL;
F->key_2938 = NULL;
F->khi_2939 = NULL;
F->saved_2940 = NULL;
F->saved_2940 = F->up->code_137;
f_ctype_513(F->up, F->arrt_1037, &F->ct_2928);
f_elem_ctype_587(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, &F->et_2929);
f_new_name_249(F->up, rt_g_lit("ag", 2), &F->tmp_2930);
while ((F->it_2914 != NULL)) {
if (((*(P175)rt_nil_check(F->it_2914)).a_ == NULL)) {
if (((G_NV(F->nnamed_2918) > ((rt_int)0LL)) || (F->others_it_2916 != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1036)).line_), rt_g_lit("positional associations come before named ones (RM79 3.6.2)", 59));
}
F->np_2917 = rt_add(G_NV(F->np_2917), ((rt_int)1LL));
} else if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_2914)).a_)).flag_) == ((rt_int)1LL))) {
if ((((*(P175)rt_nil_check(F->it_2914)).next_ != NULL) || ((*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_2914)).a_)).next_ != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1036)).line_), rt_g_lit("others comes last in an aggregate (RM79 3.6.2)", 46));
}
F->others_it_2916 = F->it_2914;
} else {
F->nnamed_2918 = rt_add(G_NV(F->nnamed_2918), ((rt_int)1LL));
F->lab_2915 = (*(P175)rt_nil_check(F->it_2914)).a_;
while ((F->lab_2915 != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2915)).a_, &F->v1_2921, &F->ok_2924);
 (void)rt_range(F->ok_2924, 0, 1);
F->v2_2922 = G_NV(F->v1_2921);
if (((*(P175)rt_nil_check(F->lab_2915)).b_ != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2915)).b_, &F->v2_2922, &F->ok2_2925);
 (void)rt_range(F->ok2_2925, 0, 1);
F->ok_2924 = (G_NV(F->ok_2924) && G_NV(F->ok2_2925));
}
if ((!G_NV(F->ok_2924))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1036)).line_), rt_g_lit("a choice in an array aggregate is static (RM79 3.6.2)", 53));
}
if ((G_NV(F->first_choice_2926) || (G_NV(F->v1_2921) < G_NV(F->clo_2919)))) {
F->clo_2919 = G_NV(F->v1_2921);
}
if ((G_NV(F->first_choice_2926) || (G_NV(F->v2_2922) > G_NV(F->chi_2920)))) {
F->chi_2920 = G_NV(F->v2_2922);
}
F->first_choice_2926 = 0;
F->lab_2915 = (*(P175)rt_nil_check(F->lab_2915)).next_;
}
L_end_2942: ;
}
F->it_2914 = (*(P175)rt_nil_check(F->it_2914)).next_;
}
L_end_2941: ;
if (((G_NV(F->np_2917) > ((rt_int)0LL)) && (G_NV(F->nnamed_2918) > ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1036)).line_), rt_g_lit("an array aggregate is positional or named, with others last (RM79 3.6.2)", 72));
}
if ((G_NV(F->nnamed_2918) > ((rt_int)0LL))) {
f_check_choices_1048(F->up, F->e_1036, F->arrt_1037, (F->others_it_2916 != NULL));
}
if (((F->others_it_2916 == NULL) && (G_NV(F->np_2917) > ((rt_int)0LL)))) {
f_first_index_590(F->up, F->arrt_1037, &F->lo_2931);
F->hi_2932 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->lo_2931))), rt_g_lit(" + ", 3)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->np_2917), ((rt_int)1LL))))), one_rt_gstr(41)));
} else if (((F->others_it_2916 == NULL) && (G_NV(F->nnamed_2918) > ((rt_int)0LL)))) {
F->lo_2931 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->clo_2919)))), rt_g_lit("LL)", 3)));
F->hi_2932 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->chi_2920)))), rt_g_lit("LL)", 3)));
} else if ((((*(P123)rt_nil_check(F->arrt_1037)).tcons_ != NULL) && ((*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1037)).tcons_)).hi_ != NULL))) {
F->lo_2931 = (*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1037)).tcons_)).lo_;
F->hi_2932 = (*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1037)).tcons_)).hi_;
} else if ((F->bounds_1038 != NULL)) {
F->lo_2931 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->bounds_1038))), rt_g_lit(").lo", 4)));
F->hi_2932 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->bounds_1038))), rt_g_lit(").hi", 4)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1036)).line_), rt_g_lit("an aggregate with others needs bounds from its context (RM79 3.6.2)", 67));
}
if (((G_NV((*(P123)rt_nil_check(F->arrt_1037)).dims_) > ((rt_int)1LL)) && (F->bounds_1038 != NULL))) {
F->rowb_2937 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("((struct { rt_int lo, hi; }){ (", 31), (*(P141)rt_nil_check(F->bounds_1038))), rt_g_lit(").lo2, (", 8)), (*(P141)rt_nil_check(F->bounds_1038))), rt_g_lit(").hi2 })", 8)));
}
F->up->code_137 = f_new_buffer_268(F->up);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->tmp_2930)), rt_g_lit(".lo = ", 6)), (*(P141)rt_nil_check(F->lo_2931))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".hi = ", 6)), (*(P141)rt_nil_check(F->hi_2932))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".lo2 = ", 7)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".hi2 = 1;", 9)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->tmp_2930)), rt_g_lit(".p = rt_alloc(sizeof(", 21)), (*(P141)rt_nil_check(F->et_2929))), rt_g_lit(") * (size_t)(G_CNT(", 19)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(") + 1));", 8)));
if (((G_NV(F->np_2917) > ((rt_int)0LL)) && (F->others_it_2916 == NULL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(") != ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2917)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
} else if ((G_NV(F->np_2917) > ((rt_int)0LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(") < ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2917)))), rt_g_lit(") rt_raise(RT_X_SUBSCRIPT);", 27)));
}
if ((F->others_it_2916 != NULL)) {
F->up->agg_bounds_182 = F->rowb_2937;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->others_it_2916)).b_, (*(P123)rt_nil_check(F->arrt_1037)).elem_, &F->vt_2927, &F->v_2933);
F->up->agg_bounds_182 = NULL;
f_check_type_508(F->up, F->vt_2927, (*(P123)rt_nil_check(F->arrt_1037)).elem_, G_NV((*(P175)rt_nil_check(F->e_1036)).line_));
f_ctype_513(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, &F->x_2934);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P141)rt_nil_check(F->x_2934))), rt_g_lit(" o_ = ", 6)), (*(P141)rt_nil_check(F->v_2933))), rt_g_lit("; for (rt_int k_ = 0; k_ < G_CNT(", 33)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit("); k_++) {", 10)));
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, rt_g_lit("o_", 2), &F->x_2934);
f_element_store_1044(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->tmp_2930)), rt_g_lit(".p[k_]", 6)), F->arrt_1037, (*(P141)rt_nil_check(F->x_2934)));
f_emit_273(F->up, rt_g_lit("} }", 3));
}
F->it_2914 = (*(P175)rt_nil_check(F->e_1036)).a_;
F->np_2917 = ((rt_int)0LL);
while (((F->it_2914 != NULL) && (F->it_2914 != F->others_it_2916))) {
F->up->agg_bounds_182 = F->rowb_2937;
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->it_2914)).b_, (*(P123)rt_nil_check(F->arrt_1037)).elem_, &F->vt_2927, &F->v_2933);
F->up->agg_bounds_182 = NULL;
f_check_type_508(F->up, F->vt_2927, (*(P123)rt_nil_check(F->arrt_1037)).elem_, G_NV((*(P175)rt_nil_check(F->e_1036)).line_));
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, (*(P141)rt_nil_check(F->v_2933)), &F->x_2934);
if (((*(P175)rt_nil_check(F->it_2914)).a_ == NULL)) {
f_element_store_1044(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->tmp_2930)), rt_g_lit(".p[", 3)), rt_g_s2g(rt_str_of_int(G_NV(F->np_2917)))), one_rt_gstr(93)), F->arrt_1037, (*(P141)rt_nil_check(F->x_2934)));
F->np_2917 = rt_add(G_NV(F->np_2917), ((rt_int)1LL));
} else {
f_new_name_249(F->up, rt_g_lit("av", 2), &F->v_2933);
f_ctype_513(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, &F->parts_2935);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ ", 2), (*(P141)rt_nil_check(F->parts_2935))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->v_2933))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_2934))), one_rt_gstr(59)));
F->lab_2915 = (*(P175)rt_nil_check(F->it_2914)).a_;
while ((F->lab_2915 != NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->lab_2915)).a_, (*(P123)rt_nil_check(F->arrt_1037)).idx_, &F->vt_2927, &F->key_2938);
f_check_type_508(F->up, F->vt_2927, (*(P123)rt_nil_check(F->arrt_1037)).idx_, G_NV((*(P175)rt_nil_check(F->e_1036)).line_));
F->khi_2939 = F->key_2938;
if (((*(P175)rt_nil_check(F->lab_2915)).b_ != NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->lab_2915)).b_, (*(P123)rt_nil_check(F->arrt_1037)).idx_, &F->vt_2927, &F->khi_2939);
f_check_type_508(F->up, F->vt_2927, (*(P123)rt_nil_check(F->arrt_1037)).idx_, G_NV((*(P175)rt_nil_check(F->e_1036)).line_));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P141)rt_nil_check(F->key_2938))), rt_g_lit("; k_ <= ", 8)), (*(P141)rt_nil_check(F->khi_2939))), rt_g_lit("; k_++) {", 9)));
f_copy_code_645(F->up, (*(P123)rt_nil_check(F->arrt_1037)).elem_, (*(P141)rt_nil_check(F->v_2933)), &F->x_2934);
f_element_store_1044(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->tmp_2930)), rt_g_lit(".p[rt_index(k_, ", 16)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".lo, ", 5)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".hi) - ", 7)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".lo]", 4)), F->arrt_1037, (*(P141)rt_nil_check(F->x_2934)));
f_emit_273(F->up, rt_g_lit("}", 1));
F->lab_2915 = (*(P175)rt_nil_check(F->lab_2915)).next_;
}
L_end_2944: ;
f_emit_273(F->up, rt_g_lit("}", 1));
}
F->it_2914 = (*(P175)rt_nil_check(F->it_2914)).next_;
}
L_end_2943: ;
if ((G_NV((*(P123)rt_nil_check(F->arrt_1037)).dims_) > ((rt_int)1LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (G_CNT(", 10), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(") > 0) { ", 9)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".lo2 = ", 7)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".p[0].lo; ", 10)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".hi2 = ", 7)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit(".p[0].hi; }", 11)));
}
f_captured_1003(F->up, F->up->code_137, &F->parts_2935);
F->up->code_137 = F->saved_2940;
(*F->r_1039) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ ", 3), (*(P141)rt_nil_check(F->ct_2928))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2930))), one_rt_gstr(59)), (*(P141)rt_nil_check(F->parts_2935))), one_rt_gstr(32)), (*(P141)rt_nil_check(F->tmp_2930))), rt_g_lit("; })", 4)));
ret_:

  return;
}

static void f_element_store_1044(struct f_greenc_1fr *up_, rt_gstr lv_1041, P123 arrt_1042, rt_gstr v_1043) {
  struct f_element_store_1044fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1041 = cp_rt_gstr(lv_1041);
F->arrt_1042 = arrt_1042;
F->v_1043 = cp_rt_gstr(v_1043);
F->x_2945 = NULL;
if (((((*(P123)rt_nil_check(F->arrt_1042)).elemcons_ != NULL) && ((*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1042)).elemcons_)).lo_ != NULL)) && (!f_composite_635(F->up, (*(P123)rt_nil_check(F->arrt_1042)).elem_)))) {
f_assign_code_641(F->up, F->lv_1041, (*(P123)rt_nil_check(F->arrt_1042)).elem_, F->v_1043, (*(P123)rt_nil_check(F->arrt_1042)).elemcons_, &F->x_2945);
f_emit_273(F->up, (*(P141)rt_nil_check(F->x_2945)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->lv_1041, rt_g_lit(" = ", 3)), F->v_1043), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_check_choices_1048(struct f_greenc_1fr *up_, P175 e_1045, P123 arrt_1046, int has_others_1047) {
  struct f_check_choices_1048fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1045 = e_1045;
F->arrt_1046 = arrt_1046;
F->has_others_1047 = has_others_1047;
F->a_2946 = NULL;
F->b_2947 = NULL;
F->lab_2948 = NULL;
F->lab2_2949 = NULL;
F->lo1_2950 = INT64_MIN;
F->lo1_2950 = ((rt_int)0LL);
F->hi1_2951 = INT64_MIN;
F->hi1_2951 = ((rt_int)0LL);
F->lo2_2952 = INT64_MIN;
F->lo2_2952 = ((rt_int)0LL);
F->hi2_2953 = INT64_MIN;
F->hi2_2953 = ((rt_int)0LL);
F->count_2954 = INT64_MIN;
F->count_2954 = ((rt_int)0LL);
F->ok_2955 = INT_MIN;
F->a_2946 = (*(P175)rt_nil_check(F->e_1045)).a_;
while ((F->a_2946 != NULL)) {
if ((((*(P175)rt_nil_check(F->a_2946)).a_ != NULL) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->a_2946)).a_)).flag_) != ((rt_int)1LL)))) {
F->lab_2948 = (*(P175)rt_nil_check(F->a_2946)).a_;
while ((F->lab_2948 != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2948)).a_, &F->lo1_2950, &F->ok_2955);
 (void)rt_range(F->ok_2955, 0, 1);
F->hi1_2951 = G_NV(F->lo1_2950);
if (((*(P175)rt_nil_check(F->lab_2948)).b_ != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab_2948)).b_, &F->hi1_2951, &F->ok_2955);
 (void)rt_range(F->ok_2955, 0, 1);
}
if ((G_NV(F->hi1_2951) >= G_NV(F->lo1_2950))) {
F->count_2954 = rt_add(G_NV(F->count_2954), rt_add(rt_sub(G_NV(F->hi1_2951), G_NV(F->lo1_2950)), ((rt_int)1LL)));
}
F->b_2947 = F->a_2946;
F->lab2_2949 = (*(P175)rt_nil_check(F->lab_2948)).next_;
while ((F->b_2947 != NULL)) {
if ((((*(P175)rt_nil_check(F->b_2947)).a_ != NULL) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->b_2947)).a_)).flag_) != ((rt_int)1LL)))) {
if ((F->b_2947 != F->a_2946)) {
F->lab2_2949 = (*(P175)rt_nil_check(F->b_2947)).a_;
}
while ((F->lab2_2949 != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab2_2949)).a_, &F->lo2_2952, &F->ok_2955);
 (void)rt_range(F->ok_2955, 0, 1);
F->hi2_2953 = G_NV(F->lo2_2952);
if (((*(P175)rt_nil_check(F->lab2_2949)).b_ != NULL)) {
f_static_choice_1035(F->up, (*(P175)rt_nil_check(F->lab2_2949)).b_, &F->hi2_2953, &F->ok_2955);
 (void)rt_range(F->ok_2955, 0, 1);
}
if (((((G_NV(F->lo1_2950) <= G_NV(F->hi1_2951)) && (G_NV(F->lo2_2952) <= G_NV(F->hi2_2953))) && (G_NV(F->lo1_2950) <= G_NV(F->hi2_2953))) && (G_NV(F->lo2_2952) <= G_NV(F->hi1_2951)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1045)).line_), rt_g_lit("an index is given twice in an aggregate (RM79 3.6.2)", 52));
}
F->lab2_2949 = (*(P175)rt_nil_check(F->lab2_2949)).next_;
}
L_end_2959: ;
}
F->b_2947 = (*(P175)rt_nil_check(F->b_2947)).next_;
F->lab2_2949 = NULL;
}
L_end_2958: ;
F->lab_2948 = (*(P175)rt_nil_check(F->lab_2948)).next_;
}
L_end_2957: ;
}
F->a_2946 = (*(P175)rt_nil_check(F->a_2946)).next_;
}
L_end_2956: ;
if (((!F->has_others_1047) && f_static_bounds_500(F->up, (*(P123)rt_nil_check(F->arrt_1046)).tcons_))) {
if ((G_NV(F->count_2954) != rt_add(rt_sub(G_NV((*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1046)).tcons_)).mhi_), G_NV((*(P179)rt_nil_check((*(P123)rt_nil_check(F->arrt_1046)).tcons_)).mlo_)), ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1045)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices of an aggregate cover every index of ", 49), f_kind_name_504(F->up, F->arrt_1046)), rt_g_lit(" once, or others is given (RM79 3.6.2)", 38)));
}
}
ret_:

  return;
}

static P175 f_actual_for_1052(struct f_greenc_1fr *up_, P175 args_1049, P2001 pm_1050, P2001 first_1051) {
  struct f_actual_for_1052fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1049 = args_1049;
F->pm_1050 = pm_1050;
F->first_1051 = first_1051;
F->a_2960 = NULL;
F->a_2960 = F->args_1049;
F->p_2961 = NULL;
F->p_2961 = F->first_1051;
while (((F->a_2960 != NULL) && ((*(P175)rt_nil_check(F->a_2960)).formal_ == NULL))) {
if ((F->p_2961 == F->pm_1050)) {
F->result_ = F->a_2960;
goto ret_;
}
F->p_2961 = (*(P2001)rt_nil_check(F->p_2961)).next_;
F->a_2960 = (*(P175)rt_nil_check(F->a_2960)).next_;
}
L_end_2962: ;
while ((F->a_2960 != NULL)) {
if ((((*(P175)rt_nil_check(F->a_2960)).formal_ != NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_2960)).formal_)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_1050)).name_))))) {
F->result_ = F->a_2960;
goto ret_;
}
F->a_2960 = (*(P175)rt_nil_check(F->a_2960)).next_;
}
L_end_2963: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_gcall_1057(struct f_greenc_1fr *up_, P175 e_1053, int is_stmt_1054, P123 *t_1055, P141 *r_1056) {
  struct f_gcall_1057fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1053 = e_1053;
F->is_stmt_1054 = is_stmt_1054;
F->t_1055 = t_1055;
F->r_1056 = r_1056;
F->fn_2964 = NULL;
F->fn_2964 = (*(P175)rt_nil_check(F->e_1053)).a_;
F->nm_2965 = NULL;
F->y_2966 = NULL;
F->args_2967 = NULL;
F->lv_2968 = NULL;
F->v_2969 = NULL;
F->ct_2970 = NULL;
F->x_2971 = NULL;
F->a_2972 = NULL;
F->pm_2973 = NULL;
F->lt_2974 = NULL;
F->vt_2975 = NULL;
F->lc_2976 = NULL;
F->ro_2977 = INT_MIN;
f_expanded_868(F->up, F->fn_2964, &F->nm_2965);
if ((F->nm_2965 != NULL)) {
F->fn_2964 = F->nm_2965;
} else if ((((G_NV((*(P175)rt_nil_check(F->fn_2964)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).kind_) == ((rt_int)5LL))) && f_is_type_name_829(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).name_))))) {
if ((!f_type_attribute_827(F->up, (*(P118)rt_nil_check(f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).name_))))).t_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), rt_g_lit(" is not a subprogram attribute of ", 34)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).name_))), rt_g_lit(" (RM79 3.3)", 11)));
}
F->nm_2965 = f_nn_320(F->up, ((rt_int)5LL), G_NV((*(P175)rt_nil_check(F->fn_2964)).line_));
(*(P175)rt_nil_check(F->nm_2965)).name_ = (*(P175)rt_nil_check(F->fn_2964)).name_;
F->fn_2964 = F->nm_2965;
} else if (((G_NV((*(P175)rt_nil_check(F->fn_2964)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->fn_2964)).a_))) {
F->nm_2965 = f_nn_320(F->up, ((rt_int)5LL), G_NV((*(P175)rt_nil_check(F->fn_2964)).line_));
(*(P175)rt_nil_check(F->nm_2965)).name_ = (*(P175)rt_nil_check(F->fn_2964)).name_;
(*(P175)rt_nil_check(F->nm_2965)).tag_ = f_mk_246(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->fn_2964)).a_));
F->fn_2964 = F->nm_2965;
} else if (((((G_NV((*(P175)rt_nil_check(F->fn_2964)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).a_)).kind_) == ((rt_int)5LL))) && f_is_task_name_1170(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).a_)).name_))))) {
F->y_2966 = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), G_NV((*(P175)rt_nil_check(F->fn_2964)).line_));
if (((F->y_2966 != NULL) && ((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)4LL))))) {
f_resolve_member_overload_1146(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), (*(P175)rt_nil_check(F->e_1053)).b_, F->is_stmt_1054, F->up->call_want_234, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), &F->y_2966);
F->up->call_task_ix_216 = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).a_)).b_;
if ((F->is_stmt_1054 && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2966)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
f_gcall_with_1082(F->up, F->e_1053, F->y_2966, &(*F->t_1055), &(*F->r_1056));
goto ret_;
}
}
if ((G_NV((*(P175)rt_nil_check(F->fn_2964)).kind_) != ((rt_int)5LL))) {
f_other_call_1234(F->up, F->e_1053, F->is_stmt_1054, &(*F->t_1055), &(*F->r_1056));
goto ret_;
}
F->y_2966 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)));
if (((*(P175)rt_nil_check(F->fn_2964)).tag_ != NULL)) {
F->y_2966 = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).tag_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), G_NV((*(P175)rt_nil_check(F->fn_2964)).line_));
}
if ((F->y_2966 == NULL)) {
if (((*(P175)rt_nil_check(F->fn_2964)).tag_ != NULL)) {
F->up->text_io_qualified_202 = eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).tag_)), rt_g_lit("TEXT_IO", 7));
}
f_builtin_1089(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), (*(P175)rt_nil_check(F->e_1053)).b_, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), F->is_stmt_1054, &(*F->t_1055), &(*F->r_1056));
F->up->text_io_qualified_202 = 0;
goto ret_;
}
if ((((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)4LL))) && ((*(P175)rt_nil_check(F->fn_2964)).tag_ == NULL))) {
f_resolve_overload_1135(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), (*(P175)rt_nil_check(F->e_1053)).b_, F->is_stmt_1054, F->up->call_want_234, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), &F->y_2966);
if ((F->y_2966 == NULL)) {
f_builtin_1089(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), (*(P175)rt_nil_check(F->e_1053)).b_, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), F->is_stmt_1054, &(*F->t_1055), &(*F->r_1056));
goto ret_;
}
} else if (((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)4LL)))) {
f_resolve_member_overload_1146(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).tag_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), (*(P175)rt_nil_check(F->e_1053)).b_, F->is_stmt_1054, F->up->call_want_234, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), &F->y_2966);
}
if ((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)10LL))) {
f_other_call_1234(F->up, F->e_1053, F->is_stmt_1054, &(*F->t_1055), &(*F->r_1056));
goto ret_;
}
if (((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) == ((rt_int)5LL)) && F->is_stmt_1054)) {
f_code_statement_922(F->up, F->e_1053, F->y_2966, &(*F->r_1056));
(*F->t_1055) = F->up->ty_void_162;
goto ret_;
}
if (((G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) != ((rt_int)3LL)) && (G_NV((*(P118)rt_nil_check(F->y_2966)).kind_) != ((rt_int)4LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), rt_g_lit(" cannot be called", 17)));
}
if ((F->is_stmt_1054 && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2966)).result_)).kind_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), rt_g_lit(" returns a value; it is not a procedure call", 44)));
}
if (((!F->is_stmt_1054) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_2966)).result_)).kind_) == ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1053)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->fn_2964)).name_)), rt_g_lit(" is a procedure, not a function", 31)));
}
f_gcall_with_1082(F->up, F->e_1053, F->y_2966, &(*F->t_1055), &(*F->r_1056));
ret_:

  return;
}

static void f_out_check_1061(struct f_greenc_1fr *up_, rt_gstr lv_1058, P123 t_1059, P179 c_1060) {
  struct f_out_check_1061fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->lv_1058 = cp_rt_gstr(lv_1058);
F->t_1059 = t_1059;
F->c_1060 = c_1060;
if ((!f_bounded_496(F->up, F->c_1060))) {
goto ret_;
}
if ((F->up->post_checks_197 == NULL)) {
F->up->post_checks_197 = f_mk_246(F->up, rt_g_lit("", 0));
}
if (((G_NV((*(P123)rt_nil_check(F->t_1059)).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check(F->t_1059)).kind_) == ((rt_int)16LL)))) {
F->up->post_checks_197 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->up->post_checks_197)), rt_g_lit(" (void)rt_frange(", 17)), F->lv_1058), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_1060)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_1060)).hi_))), rt_g_lit(");", 2)));
} else if (f_is_discrete_474(F->up, F->t_1059)) {
F->up->post_checks_197 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->up->post_checks_197)), rt_g_lit(" (void)rt_range(", 16)), F->lv_1058), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_1060)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check(F->c_1060)).hi_))), rt_g_lit(");", 2)));
}
ret_:

  return;
}

static void f_var_path_1064(struct f_greenc_1fr *up_, P175 e_1062, P141 *r_1063) {
  struct f_var_path_1064fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1062 = e_1062;
F->r_1063 = r_1063;
F->pt_2978 = NULL;
F->v_2979 = NULL;
F->saved_2980 = NULL;
F->saved_2980 = F->up->code_137;
if ((G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) == ((rt_int)5LL))) {
(*F->r_1063) = (*(P175)rt_nil_check(F->e_1062)).name_;
goto ret_;
} else if ((G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) == ((rt_int)15LL))) {
f_var_path_1064(F->up, (*(P175)rt_nil_check(F->e_1062)).a_, &(*F->r_1063));
goto ret_;
} else if ((((G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) != ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) != ((rt_int)8LL))) || ((G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) == ((rt_int)9LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1062)).name_)), rt_g_lit("ALL", 3))))) {
(*F->r_1063) = f_mk_246(F->up, rt_g_lit("\?", 1));
goto ret_;
}
F->pt_2978 = NULL;
F->up->trial_156 = rt_add(G_NV(F->up->trial_156), ((rt_int)1LL));
F->up->code_137 = f_new_buffer_268(F->up);
{
{ rt_frame xf2982;
if (RT_TRY(xf2982)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->e_1062)).a_, NULL, &F->pt_2978, &F->v_2979);
RT_POP(xf2982);
} else {
RT_POP(xf2982);
int x2983 = rt_xcur;
if (rt_g_aborted()) rt_raise(x2983);
if (0 || x2983 == ex_compile_error_109) {
F->pt_2978 = NULL;
} else {
rt_raise(x2983);
}
}
}

}
L_end_2981: ;
F->up->trial_156 = rt_sub(G_NV(F->up->trial_156), ((rt_int)1LL));
F->up->code_137 = F->saved_2980;
if (((F->pt_2978 == NULL) || (G_NV((*(P123)rt_nil_check(F->pt_2978)).kind_) == ((rt_int)8LL)))) {
(*F->r_1063) = f_mk_246(F->up, rt_g_lit("\?", 1));
goto ret_;
}
f_var_path_1064(F->up, (*(P175)rt_nil_check(F->e_1062)).a_, &(*F->r_1063));
if (eq_rt_gstr((*(P141)rt_nil_check((*F->r_1063))), rt_g_lit("\?", 1))) {
goto ret_;
} else if ((G_NV((*(P175)rt_nil_check(F->e_1062)).kind_) == ((rt_int)9LL))) {
(*F->r_1063) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_1063))), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1062)).name_))));
} else if (((f_list_len_326(F->up, (*(P175)rt_nil_check(F->e_1062)).b_) == ((rt_int)1LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1062)).b_)).kind_) == ((rt_int)1LL)))) {
(*F->r_1063) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_1063))), one_rt_gstr(40)), rt_g_s2g(rt_str_of_int(G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1062)).b_)).ival_)))), one_rt_gstr(41)));
} else {
(*F->r_1063) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->r_1063))), rt_g_lit("(*)", 3)));
}
ret_:

  return;
}

static int f_paths_overlap_1067(struct f_greenc_1fr *up_, rt_gstr p_1065, rt_gstr r_1066) {
  struct f_paths_overlap_1067fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1065 = cp_rt_gstr(p_1065);
F->r_1066 = cp_rt_gstr(r_1066);
F->i_2984 = INT64_MIN;
F->i_2984 = ({ rt_gstr at2985 = F->p_1065; at2985.lo; });
F->j_2986 = INT64_MIN;
F->j_2986 = ({ rt_gstr at2987 = F->r_1066; at2987.lo; });
for (;;) {
if (((G_NV(F->i_2984) > ({ rt_gstr at2989 = F->p_1065; at2989.hi; })) || (G_NV(F->j_2986) > ({ rt_gstr at2990 = F->r_1066; at2990.hi; })))) {
if (((G_NV(F->i_2984) > ({ rt_gstr at2991 = F->p_1065; at2991.hi; })) && (G_NV(F->j_2986) > ({ rt_gstr at2992 = F->r_1066; at2992.hi; })))) {
F->result_ = 1;
goto ret_;
} else if ((G_NV(F->i_2984) > ({ rt_gstr at2993 = F->p_1065; at2993.hi; }))) {
F->result_ = ((G_NV(({ rt_gstr ix2994 = F->r_1066; ix2994.p[rt_index(G_NV(F->j_2986), ix2994.lo, ix2994.hi) - ix2994.lo]; })) == 46) || (G_NV(({ rt_gstr ix2995 = F->r_1066; ix2995.p[rt_index(G_NV(F->j_2986), ix2995.lo, ix2995.hi) - ix2995.lo]; })) == 40));
goto ret_;
}
F->result_ = ((G_NV(({ rt_gstr ix2996 = F->p_1065; ix2996.p[rt_index(G_NV(F->i_2984), ix2996.lo, ix2996.hi) - ix2996.lo]; })) == 46) || (G_NV(({ rt_gstr ix2997 = F->p_1065; ix2997.p[rt_index(G_NV(F->i_2984), ix2997.lo, ix2997.hi) - ix2997.lo]; })) == 40));
goto ret_;
}
if ((((G_NV(({ rt_gstr ix2998 = F->p_1065; ix2998.p[rt_index(G_NV(F->i_2984), ix2998.lo, ix2998.hi) - ix2998.lo]; })) == 40) && (G_NV(({ rt_gstr ix2999 = F->r_1066; ix2999.p[rt_index(G_NV(F->j_2986), ix2999.lo, ix2999.hi) - ix2999.lo]; })) == 40)) && ((G_NV(({ rt_gstr ix3000 = F->p_1065; ix3000.p[rt_index(rt_add(G_NV(F->i_2984), ((rt_int)1LL)), ix3000.lo, ix3000.hi) - ix3000.lo]; })) == 42) || (G_NV(({ rt_gstr ix3001 = F->r_1066; ix3001.p[rt_index(rt_add(G_NV(F->j_2986), ((rt_int)1LL)), ix3001.lo, ix3001.hi) - ix3001.lo]; })) == 42)))) {
while ((G_NV(({ rt_gstr ix3003 = F->p_1065; ix3003.p[rt_index(G_NV(F->i_2984), ix3003.lo, ix3003.hi) - ix3003.lo]; })) != 41)) {
F->i_2984 = rt_add(G_NV(F->i_2984), ((rt_int)1LL));
}
L_end_3002: ;
while ((G_NV(({ rt_gstr ix3005 = F->r_1066; ix3005.p[rt_index(G_NV(F->j_2986), ix3005.lo, ix3005.hi) - ix3005.lo]; })) != 41)) {
F->j_2986 = rt_add(G_NV(F->j_2986), ((rt_int)1LL));
}
L_end_3004: ;
} else if ((G_NV(({ rt_gstr ix3006 = F->p_1065; ix3006.p[rt_index(G_NV(F->i_2984), ix3006.lo, ix3006.hi) - ix3006.lo]; })) != G_NV(({ rt_gstr ix3007 = F->r_1066; ix3007.p[rt_index(G_NV(F->j_2986), ix3007.lo, ix3007.hi) - ix3007.lo]; })))) {
F->result_ = 0;
goto ret_;
}
F->i_2984 = rt_add(G_NV(F->i_2984), ((rt_int)1LL));
F->j_2986 = rt_add(G_NV(F->j_2986), ((rt_int)1LL));
}
L_end_2988: ;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_1070(struct f_greenc_1fr *up_, P175 n_1068, rt_gstr name_1069) {
  struct f_mentions_1070fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1068 = n_1068;
F->name_1069 = cp_rt_gstr(name_1069);
F->p_3008 = NULL;
F->p_3008 = F->n_1068;
while ((F->p_3008 != NULL)) {
if (((G_NV((*(P175)rt_nil_check(F->p_3008)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3008)).name_)), F->name_1069))) {
F->result_ = 1;
goto ret_;
}
if ((f_mentions_1070(F->up, (*(P175)rt_nil_check(F->p_3008)).a_, F->name_1069) || f_mentions_1070(F->up, (*(P175)rt_nil_check(F->p_3008)).b_, F->name_1069))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1070(F->up, (*(P175)rt_nil_check(F->p_3008)).c_, F->name_1069) || f_mentions_1070(F->up, (*(P175)rt_nil_check(F->p_3008)).d_, F->name_1069))) {
F->result_ = 1;
goto ret_;
} else if (f_mentions_1070(F->up, (*(P175)rt_nil_check(F->p_3008)).e_, F->name_1069)) {
F->result_ = 1;
goto ret_;
}
F->p_3008 = (*(P175)rt_nil_check(F->p_3008)).next_;
}
L_end_3009: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_mentions_one_1073(struct f_greenc_1fr *up_, P175 n_1071, rt_gstr name_1072) {
  struct f_mentions_one_1073fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1071 = n_1071;
F->name_1072 = cp_rt_gstr(name_1072);
if (((G_NV((*(P175)rt_nil_check(F->n_1071)).kind_) == ((rt_int)5LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_1071)).name_)), F->name_1072))) {
F->result_ = 1;
goto ret_;
} else if ((f_mentions_1070(F->up, (*(P175)rt_nil_check(F->n_1071)).a_, F->name_1072) || f_mentions_1070(F->up, (*(P175)rt_nil_check(F->n_1071)).b_, F->name_1072))) {
F->result_ = 1;
goto ret_;
}
F->result_ = ((f_mentions_1070(F->up, (*(P175)rt_nil_check(F->n_1071)).c_, F->name_1072) || f_mentions_1070(F->up, (*(P175)rt_nil_check(F->n_1071)).d_, F->name_1072)) || f_mentions_1070(F->up, (*(P175)rt_nil_check(F->n_1071)).e_, F->name_1072));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_aliasing_1077(struct f_greenc_1fr *up_, P175 e_1074, P118 y_1075, P175 a_1076) {
  struct f_check_aliasing_1077fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1074 = e_1074;
F->y_1075 = y_1075;
F->a_1076 = a_1076;
F->b_3010 = NULL;
F->b_3010 = (*(P175)rt_nil_check(F->e_1074)).b_;
F->p_3011 = NULL;
F->q_3012 = NULL;
F->r_3013 = NULL;
F->r_3013 = f_root_name_1276(F->up, F->a_1076);
F->v_3014 = NULL;
if ((F->r_3013 == NULL)) {
goto ret_;
}
f_var_path_1064(F->up, F->a_1076, &F->p_3011);
while ((F->b_3010 != NULL)) {
if (((F->b_3010 != F->a_1076) && (!eq_rt_gstr((*(P141)rt_nil_check(F->p_3011)), rt_g_lit("\?", 1))))) {
f_var_path_1064(F->up, F->b_3010, &F->q_3012);
if (((!eq_rt_gstr((*(P141)rt_nil_check(F->q_3012)), rt_g_lit("\?", 1))) && f_paths_overlap_1067(F->up, (*(P141)rt_nil_check(F->p_3011)), (*(P141)rt_nil_check(F->q_3012))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1074)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_)), rt_g_lit(" is an out or in out actual and another actual of the same call (RM79 5.2.3)", 76)));
}
}
F->b_3010 = (*(P175)rt_nil_check(F->b_3010)).next_;
}
L_end_3015: ;
F->v_3014 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_)));
if (((((F->v_3014 != NULL) && (G_NV((*(P118)rt_nil_check(F->v_3014)).kind_) == ((rt_int)1LL))) && ((*(P118)rt_nil_check(F->y_1075)).decl_ != NULL)) && ((G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).kind_) == ((rt_int)45LL))))) {
if (((G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).ival_) == ((rt_int)0LL)) && (!f_declares_1285(F->up, (*(P118)rt_nil_check(F->y_1075)).decl_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_)))))) {
if (((f_mentions_1070(F->up, (*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).c_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_))) || f_mentions_1070(F->up, (*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).d_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_)))) || f_mentions_1070(F->up, (*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).decl_)).e_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1074)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3013)).name_)), rt_g_lit(" is an out or in out actual of ", 31)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1075)).name_))), rt_g_lit(", which also uses it as a global variable (RM79 5.2.3)", 54)));
}
}
}
ret_:

  return;
}

static void f_gcall_with_1082(struct f_greenc_1fr *up_, P175 e_1078, P118 y_1079, P123 *t_1080, P141 *r_1081) {
  struct f_gcall_with_1082fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1078 = e_1078;
F->y_1079 = y_1079;
F->t_1080 = t_1080;
F->r_1081 = r_1081;
F->args_3016 = NULL;
F->lv_3017 = NULL;
F->v_3018 = NULL;
F->x1_3019 = NULL;
F->x2_3020 = NULL;
F->a_3021 = NULL;
F->pm_3022 = NULL;
F->lt_3023 = NULL;
F->vt_3024 = NULL;
F->lc_3025 = NULL;
F->ro_3026 = INT_MIN;
f_check_call_rules_1296(F->up, F->e_1078, F->y_1079);
F->args_3016 = f_mk_246(F->up, rt_g_lit("", 0));
if ((((((G_NV((*(P118)rt_nil_check(F->y_1079)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_1079)).kind_) == ((rt_int)4LL))) && ((*(P118)rt_nil_check(F->y_1079)).access_path_ != NULL)) && ((*(P118)rt_nil_check(F->y_1079)).members_ != NULL)) && ((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).c_ != NULL))) {
if ((F->up->call_task_ix_216 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1078)).line_), cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).name_)), rt_g_lit(" needs the member of the family: F(I).", 38)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).name_))));
}
f_gexpr_850(F->up, F->up->call_task_ix_216, (*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).t_, &F->vt_3024, &F->v_3018);
F->up->call_task_ix_216 = NULL;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).level_), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).access_path_)), &F->lv_3017);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).cname_)), rt_g_lit("lo", 2)), &F->x1_3019);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).cname_)), rt_g_lit("hi", 2)), &F->x2_3020);
F->lv_3017 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->lv_3017)), rt_g_lit("[rt_index(", 10)), (*(P141)rt_nil_check(F->v_3018))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->x1_3019))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->x2_3020))), rt_g_lit(") - ", 4)), (*(P141)rt_nil_check(F->x1_3019))), one_rt_gstr(93)));
f_act_path_i_1189(F->up, (*(P118)rt_nil_check(F->y_1079)).members_, (*(P141)rt_nil_check(F->v_3018)), &F->x1_3019);
F->args_3016 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P141)rt_nil_check(F->lv_3017))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->x1_3019))), one_rt_gstr(41)));
} else if ((((G_NV((*(P118)rt_nil_check(F->y_1079)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->y_1079)).kind_) == ((rt_int)4LL))) && ((*(P118)rt_nil_check(F->y_1079)).access_path_ != NULL))) {
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).members_)).level_), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).access_path_)), &F->lv_3017);
if (f_same_task_446(F->up, (*(P118)rt_nil_check(F->y_1079)).members_, F->up->cur_task_212)) {
F->args_3016 = F->lv_3017;
} else {
f_act_path_1185(F->up, (*(P118)rt_nil_check(F->y_1079)).members_, &F->x1_3019);
F->args_3016 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_frame((void **)&", 26), (*(P141)rt_nil_check(F->lv_3017))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->x1_3019))), one_rt_gstr(41)));
}
} else if ((G_NV((*(P118)rt_nil_check(F->y_1079)).level_) > ((rt_int)0LL))) {
f_link_to_790(F->up, G_NV((*(P118)rt_nil_check(F->y_1079)).level_), &F->args_3016);
}
F->pm_3022 = (*(P118)rt_nil_check(F->y_1079)).params_;
while ((F->pm_3022 != NULL)) {
F->a_3021 = f_actual_for_1052(F->up, (*(P175)rt_nil_check(F->e_1078)).b_, F->pm_3022, (*(P118)rt_nil_check(F->y_1079)).params_);
if ((({ rt_gstr at3028 = (*(P141)rt_nil_check(F->args_3016)); at3028.hi >= at3028.lo ? at3028.hi - at3028.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->args_3016 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->args_3016)), rt_g_lit(", ", 2)));
}
if ((F->a_3021 == NULL)) {
if ((((*(P2001)rt_nil_check(F->pm_3022)).dflt_ == NULL) || (G_NV((*(P2001)rt_nil_check(F->pm_3022)).mode_) != ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1078)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).name_))));
}
if (((*(P2001)rt_nil_check(F->pm_3022)).dsym_ != NULL)) {
f_access_of_787(F->up, (*(P2001)rt_nil_check(F->pm_3022)).dsym_, &F->v_3018);
f_copy_code_645(F->up, (*(P2001)rt_nil_check(F->pm_3022)).t_, (*(P141)rt_nil_check(F->v_3018)), &F->x1_3019);
F->v_3018 = F->x1_3019;
} else {
f_gexpr_850(F->up, (*(P2001)rt_nil_check(F->pm_3022)).dflt_, (*(P2001)rt_nil_check(F->pm_3022)).t_, &F->vt_3024, &F->v_3018);
}
F->args_3016 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->args_3016)), (*(P141)rt_nil_check(F->v_3018))));
} else {
if ((((G_NV((*(P175)rt_nil_check(F->a_3021)).flag_) != ((rt_int)0LL)) && (G_NV((*(P175)rt_nil_check(F->a_3021)).flag_) != ((rt_int)4LL))) && (G_NV((*(P175)rt_nil_check(F->a_3021)).flag_) != G_NV((*(P2001)rt_nil_check(F->pm_3022)).mode_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1078)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).name_))), rt_g_lit(" does not match its mode", 24)));
}
if ((G_NV((*(P2001)rt_nil_check(F->pm_3022)).mode_) == ((rt_int)1LL))) {
f_gexpr_850(F->up, F->a_3021, (*(P2001)rt_nil_check(F->pm_3022)).t_, &F->vt_3024, &F->v_3018);
f_check_type_508(F->up, F->vt_3024, (*(P2001)rt_nil_check(F->pm_3022)).t_, G_NV((*(P175)rt_nil_check(F->e_1078)).line_));
if (((((*(P2001)rt_nil_check(F->pm_3022)).c_ != NULL) && ((*(P179)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).c_)).lo_ != NULL)) && ((G_NV((*(P123)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).t_)).kind_) == ((rt_int)1LL)) || (G_NV((*(P123)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).t_)).kind_) == ((rt_int)4LL))))) {
F->v_3018 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_range(", 9), (*(P141)rt_nil_check(F->v_3018))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).c_)).lo_))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P179)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).c_)).hi_))), one_rt_gstr(41)));
}
F->args_3016 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->args_3016)), (*(P141)rt_nil_check(F->v_3018))));
} else {
f_lvalue_806(F->up, F->a_3021, &F->lv_3017, &F->lt_3023, &F->lc_3025, &F->ro_3026);
 (void)rt_range(F->ro_3026, 0, 1);
if (G_NV(F->ro_3026)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1078)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3022)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_pure_target_1279(F->up, F->a_3021, G_NV((*(P175)rt_nil_check(F->e_1078)).line_));
f_check_type_508(F->up, F->lt_3023, (*(P2001)rt_nil_check(F->pm_3022)).t_, G_NV((*(P175)rt_nil_check(F->e_1078)).line_));
F->args_3016 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->args_3016)), one_rt_gstr(38)), (*(P141)rt_nil_check(F->lv_3017))));
f_check_aliasing_1077(F->up, F->e_1078, F->y_1079, F->a_3021);
f_out_check_1061(F->up, (*(P141)rt_nil_check(F->lv_3017)), F->lt_3023, F->lc_3025);
}
}
F->pm_3022 = (*(P2001)rt_nil_check(F->pm_3022)).next_;
}
L_end_3027: ;
if (((f_list_len_326(F->up, (*(P175)rt_nil_check(F->e_1078)).b_) > ((rt_int)0LL)) && ((*(P118)rt_nil_check(F->y_1079)).params_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1078)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).name_)), rt_g_lit(" takes no parameters", 20)));
}
(*F->t_1080) = (*(P118)rt_nil_check(F->y_1079)).result_;
(*F->r_1081) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1079)).cname_)), one_rt_gstr(40)), (*(P141)rt_nil_check(F->args_3016))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_builtin_1089(struct f_greenc_1fr *up_, rt_gstr name_1083, P175 args_1084, rt_int line_1085, int is_stmt_1086, P123 *t_1087, P141 *r_1088) {
  struct f_builtin_1089fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1083 = cp_rt_gstr(name_1083);
F->args_1084 = args_1084;
F->line_1085 = line_1085;
F->is_stmt_1086 = is_stmt_1086;
F->t_1087 = t_1087;
F->r_1088 = r_1088;
F->aty_3029 = NULL;
F->lt_3030 = NULL;
F->a_3031 = NULL;
F->w_3032 = NULL;
F->lv_3033 = NULL;
F->lc_3034 = NULL;
F->ro_3035 = INT_MIN;
(*F->t_1087) = F->up->ty_void_162;
if ((((eq_rt_gstr(F->name_1083, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1083, rt_g_lit("GET", 3))) && (!G_NV(F->up->text_io_qualified_202))) && (f_lookup_443(F->up, rt_g_lit("$TEXT_IO", 8)) == NULL))) {
f_fail_267(F->up, F->line_1085, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->name_1083, rt_g_lit(" is an operation of TEXT_IO: use TEXT_IO or name TEXT_IO.", 57)), F->name_1083), rt_g_lit(" (RM79 8.4, 14.3)", 17)));
}
if (((F->up->pure_sym_235 != NULL) && (eq_rt_gstr(F->name_1083, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->name_1083, rt_g_lit("GET", 3))))) {
f_fail_267(F->up, F->line_1085, cat_rt_gstr(cat_rt_gstr(rt_g_lit("a function cannot do input-output: ", 35), F->name_1083), rt_g_lit(" has side effects (RM79 6.5)", 28)));
}
if (eq_rt_gstr(F->name_1083, rt_g_lit("PUT", 3))) {
if ((F->args_1084 == NULL)) {
f_fail_267(F->up, F->line_1085, rt_g_lit("PUT needs an item", 17));
}
f_gexpr_850(F->up, F->args_1084, NULL, &F->aty_3029, &F->a_3031);
F->w_3032 = f_mk_246(F->up, rt_g_lit("0", 1));
if (((*(P175)rt_nil_check(F->args_1084)).next_ != NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->args_1084)).next_, F->up->ty_int_157, &F->lt_3030, &F->w_3032);
}
if (f_is_string_592(F->up, F->aty_3029)) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put(rt_g_g2s(", 18), (*(P141)rt_nil_check(F->a_3031))), rt_g_lit("))", 2)));
} else if ((G_NV((*(P123)rt_nil_check(F->aty_3029)).kind_) == ((rt_int)11LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_putc(", 10), (*(P141)rt_nil_check(F->a_3031))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->aty_3029)).kind_) == ((rt_int)1LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_int(", 13), (*(P141)rt_nil_check(F->a_3031))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->w_3032))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->aty_3029)).kind_) == ((rt_int)2LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_bool(", 14), (*(P141)rt_nil_check(F->a_3031))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->w_3032))), one_rt_gstr(41)));
} else if ((G_NV((*(P123)rt_nil_check(F->aty_3029)).kind_) == ((rt_int)16LL))) {
f_fail_267(F->up, F->line_1085, rt_g_lit("TEXT_IO has no PUT for a fixed point type: instantiate FIXED_IO (RM79 14.4)", 75));
} else if ((G_NV((*(P123)rt_nil_check(F->aty_3029)).kind_) == ((rt_int)3LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_put_float(", 15), (*(P141)rt_nil_check(F->a_3031))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->w_3032))), rt_g_lit(", 0)", 4)));
} else {
f_fail_267(F->up, F->line_1085, rt_g_lit("PUT of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1083, rt_g_lit("GET", 3))) {
f_lvalue_806(F->up, F->args_1084, &F->lv_3033, &F->lt_3030, &F->lc_3034, &F->ro_3035);
 (void)rt_range(F->ro_3035, 0, 1);
if ((G_NV((*(P123)rt_nil_check(F->lt_3030)).kind_) == ((rt_int)11LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->lv_3033))), rt_g_lit(" = rt_g_getc())", 15)));
} else if ((G_NV((*(P123)rt_nil_check(F->lt_3030)).kind_) == ((rt_int)1LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->lv_3033))), rt_g_lit(" = rt_g_get_int())", 18)));
} else if ((G_NV((*(P123)rt_nil_check(F->lt_3030)).kind_) == ((rt_int)3LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->lv_3033))), rt_g_lit(" = rt_g_get_float())", 20)));
} else {
f_fail_267(F->up, F->line_1085, rt_g_lit("GET of this type is not handled", 31));
}
} else if (eq_rt_gstr(F->name_1083, rt_g_lit("ABS", 3))) {
f_gexpr_850(F->up, F->args_1084, NULL, &(*F->t_1087), &F->a_3031);
if ((G_NV((*(P123)rt_nil_check((*F->t_1087))).kind_) == ((rt_int)1LL))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_abs(", 7), (*(P141)rt_nil_check(F->a_3031))), one_rt_gstr(41)));
} else if (((G_NV((*(P123)rt_nil_check((*F->t_1087))).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check((*F->t_1087))).kind_) == ((rt_int)16LL)))) {
(*F->r_1088) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("fabs(", 5), (*(P141)rt_nil_check(F->a_3031))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, F->line_1085, rt_g_lit("ABS applies to numeric values (RM79 App. C)", 43));
}
} else {
f_task_builtin_1249(F->up, F->name_1083, F->args_1084, F->line_1085, &(*F->t_1087), &(*F->r_1088));
}
ret_:

  return;
}

static P118 f_lookup_path_1091(struct f_greenc_1fr *up_, rt_gstr p_1090) {
  struct f_lookup_path_1091fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1090 = cp_rt_gstr(p_1090);
F->y_3036 = NULL;
F->m_3037 = NULL;
{ rt_int lo3042 = ({ rt_gstr at3039 = F->p_1090; at3039.lo; }), hi3043 = ({ rt_gstr at3040 = F->p_1090; at3040.hi; });
for (rt_int it3044 = hi3043; it3044 >= lo3042; it3044--) {
F->i_3041 = it3044;
if ((G_NV(({ rt_gstr ix3045 = F->p_1090; ix3045.p[rt_index(F->i_3041, ix3045.lo, ix3045.hi) - ix3045.lo]; })) == 46)) {
F->y_3036 = f_lookup_path_1091(F->up, ({ rt_gstr sl3049 = F->p_1090; rt_int l_ = ({ rt_gstr at3048 = F->p_1090; at3048.lo; }), h_ = rt_sub(F->i_3041, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3049.lo, sl3049.hi); rt_index(h_, sl3049.lo, sl3049.hi); } sl3049.p += l_ - sl3049.lo; sl3049.lo = l_; sl3049.hi = h_; sl3049; }));
if ((F->y_3036 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((G_NV((*(P118)rt_nil_check(F->y_3036)).kind_) != ((rt_int)8LL)) && (G_NV((*(P118)rt_nil_check(F->y_3036)).kind_) != ((rt_int)9LL)))) {
F->result_ = NULL;
goto ret_;
}
F->m_3037 = (*(P118)rt_nil_check(F->y_3036)).members_;
while ((F->m_3037 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3037)).name_)), ({ rt_gstr sl3052 = F->p_1090; rt_int l_ = rt_add(F->i_3041, ((rt_int)1LL)), h_ = ({ rt_gstr at3051 = F->p_1090; at3051.hi; }); if (l_ <= h_) { rt_index(l_, sl3052.lo, sl3052.hi); rt_index(h_, sl3052.lo, sl3052.hi); } sl3052.p += l_ - sl3052.lo; sl3052.lo = l_; sl3052.hi = h_; sl3052; })) && (!G_NV((*(P118)rt_nil_check(F->m_3037)).hidden_)))) {
F->result_ = F->m_3037;
goto ret_;
}
F->m_3037 = (*(P118)rt_nil_check(F->m_3037)).mnext_;
}
L_end_3050: ;
F->result_ = NULL;
goto ret_;
}
}
}
L_end_3038: ;
F->result_ = f_lookup_443(F->up, F->p_1090);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_is_package_1093(struct f_greenc_1fr *up_, P175 e_1092) {
  struct f_is_package_1093fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1092 = e_1092;
F->y_3053 = NULL;
if (((G_NV((*(P175)rt_nil_check(F->e_1092)).kind_) != ((rt_int)5LL)) && (G_NV((*(P175)rt_nil_check(F->e_1092)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P175)rt_nil_check(F->e_1092)).kind_) == ((rt_int)9LL))) {
if (((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1092)).a_)).kind_) != ((rt_int)5LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1092)).a_)).kind_) != ((rt_int)9LL)))) {
F->result_ = 0;
goto ret_;
}
}
F->y_3053 = f_lookup_path_1091(F->up, f_path_of_363(F->up, F->e_1092));
if ((!(F->y_3053 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = ((G_NV((*(P118)rt_nil_check(F->y_3053)).kind_) == ((rt_int)8LL)) || (G_NV((*(P118)rt_nil_check(F->y_3053)).kind_) == ((rt_int)9LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P118 f_member_of_1097(struct f_greenc_1fr *up_, rt_gstr p_1094, rt_gstr name_1095, rt_int line_1096) {
  struct f_member_of_1097fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1094 = cp_rt_gstr(p_1094);
F->name_1095 = cp_rt_gstr(name_1095);
F->line_1096 = line_1096;
F->y_3054 = NULL;
F->y_3054 = f_lookup_path_1091(F->up, F->p_1094);
F->m_3055 = NULL;
if (((F->y_3054 == NULL) || ((G_NV((*(P118)rt_nil_check(F->y_3054)).kind_) != ((rt_int)8LL)) && (G_NV((*(P118)rt_nil_check(F->y_3054)).kind_) != ((rt_int)9LL))))) {
F->result_ = NULL;
goto ret_;
}
F->m_3055 = (*(P118)rt_nil_check(F->y_3054)).members_;
while ((F->m_3055 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3055)).name_)), F->name_1095) && (!G_NV((*(P118)rt_nil_check(F->m_3055)).hidden_)))) {
F->result_ = F->m_3055;
goto ret_;
}
F->m_3055 = (*(P118)rt_nil_check(F->m_3055)).mnext_;
}
L_end_3056: ;
if ((G_NV((*(P118)rt_nil_check(F->y_3054)).kind_) == ((rt_int)9LL))) {
F->m_3055 = f_lookup_entry_449(F->up, F->name_1095, F->y_3054);
if ((((F->m_3055 != NULL) && (G_NV((*(P118)rt_nil_check(F->m_3055)).kind_) == ((rt_int)10LL))) && f_same_task_446(F->up, (*(P118)rt_nil_check(F->m_3055)).members_, F->y_3054))) {
F->result_ = F->m_3055;
goto ret_;
}
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_inside_package_1099(struct f_greenc_1fr *up_, P175 p_1098) {
  struct f_inside_package_1099fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1098 = p_1098;
F->l_3057 = NULL;
F->l_3057 = F->up->pkg_stack_231;
if ((F->p_1098 == NULL)) {
F->result_ = 1;
goto ret_;
}
while ((F->l_3057 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P152)rt_nil_check(F->l_3057)).s_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_1098)).name_)))) {
F->result_ = 1;
goto ret_;
}
F->l_3057 = (*(P152)rt_nil_check(F->l_3057)).next_;
}
L_end_3058: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_sym_1102(struct f_greenc_1fr *up_, P118 y_1100, P118 *z_1101) {
  struct f_copy_sym_1102fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1100 = y_1100;
F->z_1101 = z_1101;
(*F->z_1101) = ({ R119 *cell3059 = rt_alloc(sizeof(R119)); *cell3059 = cp_R119(({ R119 ag3060; ag3060.kind_ = G_NV((*(P118)rt_nil_check(F->y_1100)).kind_); ag3060.name_ = (*(P118)rt_nil_check(F->y_1100)).name_; ag3060.t_ = (*(P118)rt_nil_check(F->y_1100)).t_; ag3060.c_ = (*(P118)rt_nil_check(F->y_1100)).c_; ag3060.access_path_ = (*(P118)rt_nil_check(F->y_1100)).access_path_; ag3060.cname_ = (*(P118)rt_nil_check(F->y_1100)).cname_; ag3060.ro_ = G_NV((*(P118)rt_nil_check(F->y_1100)).ro_); ag3060.mvalue_ = G_NV((*(P118)rt_nil_check(F->y_1100)).mvalue_); ag3060.hasmv_ = G_NV((*(P118)rt_nil_check(F->y_1100)).hasmv_); ag3060.decl_ = (*(P118)rt_nil_check(F->y_1100)).decl_; ag3060.params_ = (*(P118)rt_nil_check(F->y_1100)).params_; ag3060.result_ = (*(P118)rt_nil_check(F->y_1100)).result_; ag3060.depth_ = ((rt_int)0LL); ag3060.level_ = G_NV((*(P118)rt_nil_check(F->y_1100)).level_); ag3060.byref_ = G_NV((*(P118)rt_nil_check(F->y_1100)).byref_); ag3060.vrp_ = G_NV((*(P118)rt_nil_check(F->y_1100)).vrp_); ag3060.hidden_ = G_NV((*(P118)rt_nil_check(F->y_1100)).hidden_); ag3060.from_use_ = 0; ag3060.members_ = (*(P118)rt_nil_check(F->y_1100)).members_; ag3060.mnext_ = NULL; ag3060.chain_ = NULL; ag3060.stack_ = NULL; ag3060.flags_ = G_NV((*(P118)rt_nil_check(F->y_1100)).flags_); ag3060; })); (P118)cell3059; });
ret_:

  return;
}

static void f_complete_private_1105(struct f_greenc_1fr *up_, P123 ph_1103, P123 full_1104) {
  struct f_complete_private_1105fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ph_1103 = ph_1103;
F->full_1104 = full_1104;
F->n_3061 = NULL;
F->n_3061 = (*(P123)rt_nil_check(F->ph_1103)).name_;
F->p_3062 = NULL;
F->p_3062 = (*(P123)rt_nil_check(F->ph_1103)).decl_;
as_R124(&(*(P123)rt_nil_check(F->ph_1103)), (*(P123)rt_nil_check(F->full_1104)));
(*(P123)rt_nil_check(F->ph_1103)).name_ = F->n_3061;
(*(P123)rt_nil_check(F->ph_1103)).priv_ = 1;
(*(P123)rt_nil_check(F->ph_1103)).decl_ = F->p_3062;
ret_:

  return;
}

static void f_package_spec_1107(struct f_greenc_1fr *up_, P175 e_1106) {
  struct f_package_spec_1107fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1106 = e_1106;
F->y_3063 = NULL;
F->m_3064 = NULL;
F->z_3065 = NULL;
F->saved_3066 = NULL;
F->saved_3066 = F->up->cur_pkg_232;
F->first_private_3067 = NULL;
F->y_3063 = f_new_sym_491(F->up, ((rt_int)8LL), (*(P175)rt_nil_check(F->e_1106)).name_);
(*(P118)rt_nil_check(F->y_3063)).decl_ = F->e_1106;
F->up->pkg_stack_231 = ({ R153 *cell3068 = rt_alloc(sizeof(R153)); *cell3068 = cp_R153(({ R153 ag3069; ag3069.s_ = (*(P175)rt_nil_check(F->e_1106)).name_; ag3069.next_ = F->up->pkg_stack_231; ag3069; })); (P152)cell3068; });
F->up->cur_pkg_232 = F->e_1106;
f_open_scope_487(F->up);
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->e_1106)).c_);
F->first_private_3067 = F->up->scope_stack_122;
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->e_1106)).d_);
F->m_3064 = F->up->scope_stack_122;
while (((F->m_3064 != NULL) && (G_NV((*(P118)rt_nil_check(F->m_3064)).depth_) == G_NV(F->up->depth_121)))) {
if (((G_NV((*(P118)rt_nil_check(F->m_3064)).kind_) == ((rt_int)2LL)) && (G_NV((*(P118)rt_nil_check(F->m_3064)).flags_) == rt_add(((rt_int)1LL), ((rt_int)2LL))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1106)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("deferred constant ", 18), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3064)).name_))), rt_g_lit(" has no full declaration in the private part (RM79 7.4)", 55)));
}
f_copy_sym_1102(F->up, F->m_3064, &F->z_3065);
(*(P118)rt_nil_check(F->z_3065)).hidden_ = (f_hidden_from_1110(F->up, F->m_3064, F->first_private_3067) || G_NV((*(P118)rt_nil_check(F->m_3064)).from_use_));
(*(P118)rt_nil_check(F->z_3065)).mnext_ = (*(P118)rt_nil_check(F->y_3063)).members_;
(*(P118)rt_nil_check(F->y_3063)).members_ = F->z_3065;
F->m_3064 = (*(P118)rt_nil_check(F->m_3064)).stack_;
}
L_end_3070: ;
f_close_scope_488(F->up);
F->up->pkg_stack_231 = (*(P152)rt_nil_check(F->up->pkg_stack_231)).next_;
F->up->cur_pkg_232 = F->saved_3066;
f_define_486(F->up, F->y_3063, G_NV((*(P175)rt_nil_check(F->e_1106)).line_));
ret_:

  return;
}

static int f_hidden_from_1110(struct f_greenc_1fr *up_, P118 m_1108, P118 first_private_1109) {
  struct f_hidden_from_1110fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->m_1108 = m_1108;
F->first_private_1109 = first_private_1109;
F->p_3071 = NULL;
F->p_3071 = F->up->scope_stack_122;
while ((F->p_3071 != NULL)) {
if ((F->p_3071 == F->first_private_1109)) {
F->result_ = 0;
goto ret_;
}
if ((F->p_3071 == F->m_1108)) {
F->result_ = 1;
goto ret_;
}
F->p_3071 = (*(P118)rt_nil_check(F->p_3071)).stack_;
}
L_end_3072: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_package_body_1112(struct f_greenc_1fr *up_, P175 e_1111) {
  struct f_package_body_1112fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1111 = e_1111;
F->saved_labels_3073 = NULL;
F->y_3074 = NULL;
F->y_3074 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1111)).name_)));
F->m_3075 = NULL;
F->z_3076 = NULL;
F->saved_3077 = NULL;
F->saved_3077 = F->up->cur_pkg_232;
if ((G_NV((*(P175)rt_nil_check(F->e_1111)).flag_) == ((rt_int)4LL))) {
f_stub_692(F->up, F->e_1111);
goto ret_;
}
if (f_is_generic_name_1305(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1111)).name_)))) {
f_attach_generic_body_1310(F->up, F->e_1111);
goto ret_;
}
if (((F->y_3074 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_3074)).kind_) != ((rt_int)8LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1111)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("package body ", 13), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1111)).name_))), rt_g_lit(" has no specification", 21)));
}
F->up->pkg_stack_231 = ({ R153 *cell3078 = rt_alloc(sizeof(R153)); *cell3078 = cp_R153(({ R153 ag3079; ag3079.s_ = (*(P175)rt_nil_check(F->e_1111)).name_; ag3079.next_ = F->up->pkg_stack_231; ag3079; })); (P152)cell3078; });
F->up->cur_pkg_232 = (*(P118)rt_nil_check(F->y_3074)).decl_;
f_open_scope_487(F->up);
f_push_unit_456(F->up, (*(P175)rt_nil_check(F->e_1111)).name_);
F->m_3075 = (*(P118)rt_nil_check(F->y_3074)).members_;
while ((F->m_3075 != NULL)) {
f_copy_sym_1102(F->up, F->m_3075, &F->z_3076);
(*(P118)rt_nil_check(F->z_3076)).hidden_ = 0;
f_define_486(F->up, F->z_3076, G_NV((*(P175)rt_nil_check(F->e_1111)).line_));
F->m_3075 = (*(P118)rt_nil_check(F->m_3075)).mnext_;
}
L_end_3080: ;
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->e_1111)).c_);
F->m_3075 = (*(P118)rt_nil_check(F->y_3074)).members_;
while ((F->m_3075 != NULL)) {
if ((((G_NV((*(P118)rt_nil_check(F->m_3075)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->m_3075)).kind_) == ((rt_int)4LL))) && (G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->m_3075)).decl_)).ival_) == ((rt_int)1LL)))) {
F->z_3076 = ({ A117 ix3082 = F->up->table_120; ix3082.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3075)).name_))), ix3082.lo, ix3082.hi) - ix3082.lo]; });
while ((F->z_3076 != NULL)) {
if (((*(P118)rt_nil_check(F->z_3076)).cname_ == (*(P118)rt_nil_check(F->m_3075)).cname_)) {
(*(P118)rt_nil_check(F->m_3075)).decl_ = (*(P118)rt_nil_check(F->z_3076)).decl_;
}
F->z_3076 = (*(P118)rt_nil_check(F->z_3076)).chain_;
}
L_end_3083: ;
if ((G_NV((*(P175)rt_nil_check((*(P118)rt_nil_check(F->m_3075)).decl_)).ival_) == ((rt_int)1LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1111)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("no body for ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3075)).name_))), rt_g_lit(" in package body ", 17)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1111)).name_))));
}
}
F->m_3075 = (*(P118)rt_nil_check(F->m_3075)).mnext_;
}
L_end_3081: ;
F->saved_labels_3073 = F->up->body_labels_192;
f_label_body_714(F->up, (*(P175)rt_nil_check(F->e_1111)).d_, (*(P175)rt_nil_check(F->e_1111)).e_);
f_guarded_749(F->up, NULL, (*(P175)rt_nil_check(F->e_1111)).d_, (*(P175)rt_nil_check(F->e_1111)).e_, G_NV((*(P175)rt_nil_check(F->e_1111)).line_));
F->up->body_labels_192 = F->saved_labels_3073;
F->up->nunits_189 = rt_sub(G_NV(F->up->nunits_189), ((rt_int)1LL));
f_close_scope_488(F->up);
F->up->pkg_stack_231 = (*(P152)rt_nil_check(F->up->pkg_stack_231)).next_;
F->up->cur_pkg_232 = F->saved_3077;
ret_:

  return;
}

static int f_use_visible_1114(struct f_greenc_1fr *up_, P118 old_1113) {
  struct f_use_visible_1114fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1113 = old_1113;
if ((F->old_1113 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (((G_NV((*(P118)rt_nil_check(F->old_1113)).depth_) < G_NV(F->up->depth_121)) && (G_NV((*(P118)rt_nil_check(F->old_1113)).kind_) != ((rt_int)1LL))) && (G_NV((*(P118)rt_nil_check(F->old_1113)).kind_) != ((rt_int)2LL)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_use_clause_1116(struct f_greenc_1fr *up_, P175 e_1115) {
  struct f_use_clause_1116fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1115 = e_1115;
F->n_3084 = NULL;
F->n_3084 = (*(P175)rt_nil_check(F->e_1115)).a_;
F->y_3085 = NULL;
F->m_3086 = NULL;
F->z_3087 = NULL;
F->old_3088 = NULL;
F->clash_3089 = INT_MIN;
while ((F->n_3084 != NULL)) {
F->y_3085 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3084)).name_)));
if ((F->y_3085 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->n_3084)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3084)).name_)), rt_g_lit(" is not a visible module (RM79 8.3, 8.4)", 40)));
} else if (((G_NV((*(P118)rt_nil_check(F->y_3085)).kind_) != ((rt_int)8LL)) && (G_NV((*(P118)rt_nil_check(F->y_3085)).kind_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->n_3084)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3084)).name_)), rt_g_lit(" is not a package or a task", 27)));
} else if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3085)).name_)), rt_g_lit("TEXT_IO", 7)) && ((*(P118)rt_nil_check(F->y_3085)).members_ == NULL))) {
F->z_3087 = f_new_sym_491(F->up, ((rt_int)2LL), f_mk_246(F->up, rt_g_lit("$TEXT_IO", 8)));
(*(P118)rt_nil_check(F->z_3087)).t_ = F->up->ty_void_162;
f_define_486(F->up, F->z_3087, G_NV((*(P175)rt_nil_check(F->n_3084)).line_));
} else {
F->m_3086 = (*(P118)rt_nil_check(F->y_3085)).members_;
while ((F->m_3086 != NULL)) {
if ((!G_NV((*(P118)rt_nil_check(F->m_3086)).hidden_))) {
F->old_3088 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3086)).name_)));
if ((!f_overloadable_460(F->up, F->m_3086))) {
if ((F->old_3088 == NULL)) {
f_copy_sym_1102(F->up, F->m_3086, &F->z_3087);
(*(P118)rt_nil_check(F->z_3087)).from_use_ = 1;
f_define_486(F->up, F->z_3087, G_NV((*(P175)rt_nil_check(F->n_3084)).line_));
} else if (((G_NV((*(P118)rt_nil_check(F->old_3088)).from_use_) && (G_NV((*(P118)rt_nil_check(F->old_3088)).depth_) == G_NV(F->up->depth_121))) && (!f_same_entity_1121(F->up, F->old_3088, F->m_3086)))) {
(*(P118)rt_nil_check(F->old_3088)).kind_ = ((rt_int)12LL);
}
} else {
F->clash_3089 = 0;
F->z_3087 = ({ A117 ix3092 = F->up->table_120; ix3092.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3086)).name_))), ix3092.lo, ix3092.hi) - ix3092.lo]; });
while ((F->z_3087 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3087)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3086)).name_))) && f_overloadable_460(F->up, F->z_3087)) && f_visible_sym_441(F->up, F->z_3087))) {
if (f_same_entity_1121(F->up, F->z_3087, F->m_3086)) {
F->clash_3089 = 1;
} else if (((((!G_NV((*(P118)rt_nil_check(F->z_3087)).from_use_)) && f_same_types_477(F->up, (*(P118)rt_nil_check(F->z_3087)).params_, (*(P118)rt_nil_check(F->m_3086)).params_)) && f_same_463(F->up, (*(P118)rt_nil_check(F->z_3087)).result_, (*(P118)rt_nil_check(F->m_3086)).result_)) && ((G_NV((*(P118)rt_nil_check(F->z_3087)).kind_) != ((rt_int)7LL)) || f_same_463(F->up, (*(P118)rt_nil_check(F->z_3087)).t_, (*(P118)rt_nil_check(F->m_3086)).t_)))) {
F->clash_3089 = 1;
}
}
F->z_3087 = (*(P118)rt_nil_check(F->z_3087)).chain_;
}
L_end_3093: ;
if (((!G_NV(F->clash_3089)) && f_usable_over_1118(F->up, F->old_3088))) {
f_copy_sym_1102(F->up, F->m_3086, &F->z_3087);
(*(P118)rt_nil_check(F->z_3087)).from_use_ = 1;
f_define_486(F->up, F->z_3087, G_NV((*(P175)rt_nil_check(F->n_3084)).line_));
}
}
}
F->m_3086 = (*(P118)rt_nil_check(F->m_3086)).mnext_;
}
L_end_3091: ;
}
F->n_3084 = (*(P175)rt_nil_check(F->n_3084)).next_;
}
L_end_3090: ;
ret_:

  return;
}

static int f_usable_over_1118(struct f_greenc_1fr *up_, P118 old_1117) {
  struct f_usable_over_1118fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->old_1117 = old_1117;
if ((F->old_1117 == NULL)) {
F->result_ = 1;
goto ret_;
}
F->result_ = (f_overloadable_460(F->up, F->old_1117) || G_NV((*(P118)rt_nil_check(F->old_1117)).from_use_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_same_entity_1121(struct f_greenc_1fr *up_, P118 a_1119, P118 b_1120) {
  struct f_same_entity_1121fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1119 = a_1119;
F->b_1120 = b_1120;
if ((G_NV((*(P118)rt_nil_check(F->a_1119)).kind_) != G_NV((*(P118)rt_nil_check(F->b_1120)).kind_))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P118)rt_nil_check(F->a_1119)).cname_ != NULL) && ((*(P118)rt_nil_check(F->b_1120)).cname_ != NULL))) {
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->a_1119)).cname_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_1120)).cname_)));
goto ret_;
} else if ((((*(P118)rt_nil_check(F->a_1119)).access_path_ != NULL) && ((*(P118)rt_nil_check(F->b_1120)).access_path_ != NULL))) {
F->result_ = eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->a_1119)).access_path_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_1120)).access_path_)));
goto ret_;
}
F->result_ = (((*(P118)rt_nil_check(F->a_1119)).t_ == (*(P118)rt_nil_check(F->b_1120)).t_) && ((*(P118)rt_nil_check(F->a_1119)).decl_ == (*(P118)rt_nil_check(F->b_1120)).decl_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_fits_1126(struct f_greenc_1fr *up_, P118 y_1122, P175 args_1123, P123 want_1124, int *ok_1125) {
  struct f_fits_1126fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1122 = y_1122;
F->args_1123 = args_1123;
F->want_1124 = want_1124;
F->ok_1125 = ok_1125;
F->pm_3094 = NULL;
F->pm_3094 = (*(P118)rt_nil_check(F->y_1122)).params_;
F->a_3095 = NULL;
F->t_3096 = NULL;
F->c_3097 = NULL;
F->v_3098 = NULL;
F->ro_3099 = INT_MIN;
F->saved_3100 = NULL;
F->saved_3100 = F->up->code_137;
F->used_3101 = INT64_MIN;
F->used_3101 = ((rt_int)0LL);
(*F->ok_1125) = 1;
F->up->trial_156 = rt_add(G_NV(F->up->trial_156), ((rt_int)1LL));
F->up->code_137 = f_new_buffer_268(F->up);
{
{ rt_frame xf3103;
if (RT_TRY(xf3103)) {
while ((G_NV((*F->ok_1125)) && (F->pm_3094 != NULL))) {
F->a_3095 = f_actual_for_1052(F->up, F->args_1123, F->pm_3094, (*(P118)rt_nil_check(F->y_1122)).params_);
if ((F->a_3095 == NULL)) {
(*F->ok_1125) = ((*(P2001)rt_nil_check(F->pm_3094)).dflt_ != NULL);
} else {
F->used_3101 = rt_add(G_NV(F->used_3101), ((rt_int)1LL));
if ((((G_NV((*(P175)rt_nil_check(F->a_3095)).flag_) != ((rt_int)0LL)) && (G_NV((*(P175)rt_nil_check(F->a_3095)).flag_) != ((rt_int)4LL))) && (G_NV((*(P175)rt_nil_check(F->a_3095)).flag_) != G_NV((*(P2001)rt_nil_check(F->pm_3094)).mode_)))) {
(*F->ok_1125) = 0;
} else if ((G_NV((*(P2001)rt_nil_check(F->pm_3094)).mode_) == ((rt_int)1LL))) {
f_gexpr_850(F->up, F->a_3095, (*(P2001)rt_nil_check(F->pm_3094)).t_, &F->t_3096, &F->v_3098);
(*F->ok_1125) = (f_same_463(F->up, F->t_3096, (*(P2001)rt_nil_check(F->pm_3094)).t_) || ((G_NV((*(P123)rt_nil_check(F->t_3096)).kind_) == ((rt_int)10LL)) && (G_NV((*(P123)rt_nil_check((*(P2001)rt_nil_check(F->pm_3094)).t_)).kind_) == ((rt_int)8LL))));
} else {
f_lvalue_806(F->up, F->a_3095, &F->v_3098, &F->t_3096, &F->c_3097, &F->ro_3099);
 (void)rt_range(F->ro_3099, 0, 1);
(*F->ok_1125) = f_same_463(F->up, F->t_3096, (*(P2001)rt_nil_check(F->pm_3094)).t_);
}
}
F->pm_3094 = (*(P2001)rt_nil_check(F->pm_3094)).next_;
}
L_end_3105: ;
if ((G_NV(F->used_3101) != f_list_len_326(F->up, F->args_1123))) {
(*F->ok_1125) = 0;
}
if (((G_NV((*F->ok_1125)) && (F->want_1124 != NULL)) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_1122)).result_)).kind_) != ((rt_int)9LL)))) {
(*F->ok_1125) = (f_same_463(F->up, (*(P118)rt_nil_check(F->y_1122)).result_, F->want_1124) || (G_NV((*(P123)rt_nil_check(F->want_1124)).kind_) == ((rt_int)9LL)));
}
RT_POP(xf3103);
} else {
RT_POP(xf3103);
int x3104 = rt_xcur;
if (rt_g_aborted()) rt_raise(x3104);
if (0 || x3104 == ex_compile_error_109) {
(*F->ok_1125) = 0;
} else {
rt_raise(x3104);
}
}
}

}
L_end_3102: ;
F->up->trial_156 = rt_sub(G_NV(F->up->trial_156), ((rt_int)1LL));
F->up->code_137 = F->saved_3100;
ret_:

  return;
}

static int f_is_builtin_1128(struct f_greenc_1fr *up_, rt_gstr n_1127) {
  struct f_is_builtin_1128fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1127 = cp_rt_gstr(n_1127);
F->result_ = (((eq_rt_gstr(F->n_1127, rt_g_lit("PUT", 3)) || eq_rt_gstr(F->n_1127, rt_g_lit("GET", 3))) || eq_rt_gstr(F->n_1127, rt_g_lit("ABS", 3))) || eq_rt_gstr(F->n_1127, rt_g_lit("SET_PRIORITY", 12)));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_overload_1135(struct f_greenc_1fr *up_, rt_gstr name_1129, P175 args_1130, int is_stmt_1131, P123 want_1132, rt_int line_1133, P118 *y_1134) {
  struct f_resolve_overload_1135fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1129 = cp_rt_gstr(name_1129);
F->args_1130 = args_1130;
F->is_stmt_1131 = is_stmt_1131;
F->want_1132 = want_1132;
F->line_1133 = line_1133;
F->y_1134 = y_1134;
F->z_3106 = NULL;
F->w_3107 = NULL;
F->first_3108 = NULL;
F->found_3109 = NULL;
F->n_3110 = INT64_MIN;
F->n_3110 = ((rt_int)0LL);
F->ok_3111 = INT_MIN;
F->hidden_3112 = INT_MIN;
{ rt_int lo3115 = ((rt_int)1LL), hi3116 = ((rt_int)2LL);
for (rt_int it3117 = lo3115; it3117 <= hi3116; it3117++) {
F->pass_3114 = it3117;
F->z_3106 = ({ A117 ix3118 = F->up->table_120; ix3118.p[rt_index(f_hash_436(F->up, F->name_1129), ix3118.lo, ix3118.hi) - ix3118.lo]; });
F->n_3110 = ((rt_int)0LL);
F->found_3109 = NULL;
while ((F->z_3106 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3106)).name_)), F->name_1129) && ((G_NV((*(P118)rt_nil_check(F->z_3106)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->z_3106)).kind_) == ((rt_int)4LL)))) && f_visible_sym_441(F->up, F->z_3106))) {
if ((F->first_3108 == NULL)) {
F->first_3108 = F->z_3106;
}
F->hidden_3112 = 0;
F->w_3107 = ({ A117 ix3120 = F->up->table_120; ix3120.p[rt_index(f_hash_436(F->up, F->name_1129), ix3120.lo, ix3120.hi) - ix3120.lo]; });
while ((F->w_3107 != F->z_3106)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->w_3107)).name_)), F->name_1129) && ((G_NV((*(P118)rt_nil_check(F->w_3107)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->w_3107)).kind_) == ((rt_int)4LL))))) {
if (f_same_profile_1138(F->up, F->w_3107, F->z_3106)) {
F->hidden_3112 = 1;
}
}
F->w_3107 = (*(P118)rt_nil_check(F->w_3107)).chain_;
}
L_end_3121: ;
if (((!G_NV(F->hidden_3112)) && ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3106)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1131))) {
if ((F->pass_3114 == ((rt_int)1LL))) {
f_fits_1126(F->up, F->z_3106, F->args_1130, F->want_1132, &F->ok_3111);
 (void)rt_range(F->ok_3111, 0, 1);
} else {
f_fits_1126(F->up, F->z_3106, F->args_1130, NULL, &F->ok_3111);
 (void)rt_range(F->ok_3111, 0, 1);
}
if (G_NV(F->ok_3111)) {
if ((F->found_3109 != NULL)) {
f_fail_267(F->up, F->line_1133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1129), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_3109 = F->z_3106;
}
}
}
F->z_3106 = (*(P118)rt_nil_check(F->z_3106)).chain_;
}
L_end_3119: ;
if ((F->found_3109 != NULL)) {
(*F->y_1134) = F->found_3109;
goto ret_;
}
}
}
L_end_3113: ;
if (f_is_builtin_1128(F->up, F->name_1129)) {
(*F->y_1134) = NULL;
goto ret_;
}
F->z_3106 = ({ A117 ix3122 = F->up->table_120; ix3122.p[rt_index(f_hash_436(F->up, F->name_1129), ix3122.lo, ix3122.hi) - ix3122.lo]; });
while ((F->z_3106 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3106)).name_)), F->name_1129) && ((G_NV((*(P118)rt_nil_check(F->z_3106)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->z_3106)).kind_) == ((rt_int)4LL))))) {
F->n_3110 = rt_add(G_NV(F->n_3110), ((rt_int)1LL));
}
F->z_3106 = (*(P118)rt_nil_check(F->z_3106)).chain_;
}
L_end_3123: ;
if ((G_NV(F->n_3110) > ((rt_int)1LL))) {
f_fail_267(F->up, F->line_1133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1129), rt_g_lit(" fits these actual parameters", 29)));
}
(*F->y_1134) = F->first_3108;
ret_:

  return;
}

static int f_same_profile_1138(struct f_greenc_1fr *up_, P118 a_1136, P118 b_1137) {
  struct f_same_profile_1138fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1136 = a_1136;
F->b_1137 = b_1137;
if (((!f_same_types_477(F->up, (*(P118)rt_nil_check(F->a_1136)).params_, (*(P118)rt_nil_check(F->b_1137)).params_)) || (!f_same_463(F->up, (*(P118)rt_nil_check(F->a_1136)).result_, (*(P118)rt_nil_check(F->b_1137)).result_)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P118)rt_nil_check(F->a_1136)).cname_ != NULL) && ((*(P118)rt_nil_check(F->b_1137)).cname_ != NULL))) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->a_1136)).cname_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_1137)).cname_)))) {
F->result_ = 1;
goto ret_;
}
}
F->result_ = f_same_signature_480(F->up, (*(P118)rt_nil_check(F->a_1136)).params_, (*(P118)rt_nil_check(F->b_1137)).params_);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_resolve_member_overload_1146(struct f_greenc_1fr *up_, rt_gstr p_1139, rt_gstr name_1140, P175 args_1141, int is_stmt_1142, P123 want_1143, rt_int line_1144, P118 *y_1145) {
  struct f_resolve_member_overload_1146fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1139 = cp_rt_gstr(p_1139);
F->name_1140 = cp_rt_gstr(name_1140);
F->args_1141 = args_1141;
F->is_stmt_1142 = is_stmt_1142;
F->want_1143 = want_1143;
F->line_1144 = line_1144;
F->y_1145 = y_1145;
F->pk_3124 = NULL;
F->pk_3124 = f_lookup_path_1091(F->up, F->p_1139);
F->z_3125 = NULL;
F->found_3126 = NULL;
F->n_3127 = INT64_MIN;
F->n_3127 = ((rt_int)0LL);
F->ok_3128 = INT_MIN;
if ((F->pk_3124 == NULL)) {
goto ret_;
}
{ rt_int lo3131 = ((rt_int)1LL), hi3132 = ((rt_int)2LL);
for (rt_int it3133 = lo3131; it3133 <= hi3132; it3133++) {
F->pass_3130 = it3133;
F->z_3125 = (*(P118)rt_nil_check(F->pk_3124)).members_;
F->n_3127 = ((rt_int)0LL);
F->found_3126 = NULL;
while ((F->z_3125 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3125)).name_)), F->name_1140) && ((G_NV((*(P118)rt_nil_check(F->z_3125)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->z_3125)).kind_) == ((rt_int)4LL)))) && (!G_NV((*(P118)rt_nil_check(F->z_3125)).hidden_)))) {
F->n_3127 = rt_add(G_NV(F->n_3127), ((rt_int)1LL));
if (((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3125)).result_)).kind_) == ((rt_int)9LL)) == F->is_stmt_1142)) {
if ((F->pass_3130 == ((rt_int)1LL))) {
f_fits_1126(F->up, F->z_3125, F->args_1141, F->want_1143, &F->ok_3128);
 (void)rt_range(F->ok_3128, 0, 1);
} else {
f_fits_1126(F->up, F->z_3125, F->args_1141, NULL, &F->ok_3128);
 (void)rt_range(F->ok_3128, 0, 1);
}
if (G_NV(F->ok_3128)) {
if (((F->found_3126 != NULL) && (!f_same_profile_1138(F->up, F->found_3126, F->z_3125)))) {
f_fail_267(F->up, F->line_1144, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the call of ", 12), F->name_1140), rt_g_lit(" is ambiguous: several declarations fit (RM79 6.6)", 50)));
}
F->found_3126 = F->z_3125;
}
}
}
F->z_3125 = (*(P118)rt_nil_check(F->z_3125)).mnext_;
}
L_end_3134: ;
if ((F->found_3126 != NULL)) {
(*F->y_1145) = F->found_3126;
goto ret_;
}
}
}
L_end_3129: ;
if ((G_NV(F->n_3127) > ((rt_int)1LL))) {
f_fail_267(F->up, F->line_1144, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no declaration of ", 18), F->name_1140), rt_g_lit(" fits these actual parameters", 29)));
}
ret_:

  return;
}

static void f_user_operator_1152(struct f_greenc_1fr *up_, P175 e_1147, P123 want_1148, P123 *t_1149, P141 *r_1150, int *done_1151) {
  struct f_user_operator_1152fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1147 = e_1147;
F->want_1148 = want_1148;
F->t_1149 = t_1149;
F->r_1150 = r_1150;
F->done_1151 = done_1151;
F->op_3135 = NULL;
F->op_3135 = (*(P175)rt_nil_check(F->e_1147)).name_;
F->negate_3136 = INT_MIN;
F->negate_3136 = 0;
F->y_3137 = NULL;
F->call_3138 = NULL;
F->fname_3139 = NULL;
F->l_3140 = NULL;
F->rt_3141 = NULL;
F->ok_3142 = INT_MIN;
(*F->done_1151) = 0;
if (eq_rt_gstr((*(P141)rt_nil_check(F->op_3135)), rt_g_lit("/=", 2))) {
F->op_3135 = f_mk_246(F->up, rt_g_lit("=", 1));
F->negate_3136 = 1;
}
if ((f_lookup_443(F->up, (*(P141)rt_nil_check(F->op_3135))) == NULL)) {
goto ret_;
}
F->l_3140 = f_nn_320(F->up, G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).a_)).kind_), G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).a_)).line_));
as_R176(&(*(P175)rt_nil_check(F->l_3140)), (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).a_)));
(*(P175)rt_nil_check(F->l_3140)).next_ = NULL;
(*(P175)rt_nil_check(F->l_3140)).formal_ = NULL;
(*(P175)rt_nil_check(F->l_3140)).flag_ = ((rt_int)0LL);
if ((G_NV((*(P175)rt_nil_check(F->e_1147)).kind_) == ((rt_int)7LL))) {
F->rt_3141 = f_nn_320(F->up, G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).b_)).kind_), G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).b_)).line_));
as_R176(&(*(P175)rt_nil_check(F->rt_3141)), (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1147)).b_)));
(*(P175)rt_nil_check(F->rt_3141)).next_ = NULL;
(*(P175)rt_nil_check(F->rt_3141)).formal_ = NULL;
(*(P175)rt_nil_check(F->rt_3141)).flag_ = ((rt_int)0LL);
(*(P175)rt_nil_check(F->l_3140)).next_ = F->rt_3141;
}
F->y_3137 = ({ A117 ix3143 = F->up->table_120; ix3143.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check(F->op_3135))), ix3143.lo, ix3143.hi) - ix3143.lo]; });
while ((F->y_3137 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3137)).name_)), (*(P141)rt_nil_check(F->op_3135))) && (G_NV((*(P118)rt_nil_check(F->y_3137)).kind_) == ((rt_int)3LL))) && f_visible_sym_441(F->up, F->y_3137))) {
f_fits_1126(F->up, F->y_3137, F->l_3140, NULL, &F->ok_3142);
 (void)rt_range(F->ok_3142, 0, 1);
if (G_NV(F->ok_3142)) {
F->fname_3139 = f_nn_320(F->up, ((rt_int)5LL), G_NV((*(P175)rt_nil_check(F->e_1147)).line_));
(*(P175)rt_nil_check(F->fname_3139)).name_ = F->op_3135;
F->call_3138 = f_nn_320(F->up, ((rt_int)8LL), G_NV((*(P175)rt_nil_check(F->e_1147)).line_));
(*(P175)rt_nil_check(F->call_3138)).a_ = F->fname_3139;
(*(P175)rt_nil_check(F->call_3138)).b_ = F->l_3140;
F->up->call_want_234 = NULL;
f_gcall_with_1082(F->up, F->call_3138, F->y_3137, &(*F->t_1149), &(*F->r_1150));
if (G_NV(F->negate_3136)) {
(*F->r_1150) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(!", 2), (*(P141)rt_nil_check((*F->r_1150)))), one_rt_gstr(41)));
}
(*F->done_1151) = 1;
goto ret_;
}
}
F->y_3137 = (*(P118)rt_nil_check(F->y_3137)).chain_;
}
L_end_3144: ;
ret_:

  return;
}

static void f_task_p_1154(struct f_greenc_1fr *up_, P175 *res_1153) {
  struct f_task_p_1154fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1153 = res_1153;
F->x_3145 = NULL;
F->r_3146 = NULL;
F->line_3147 = INT64_MIN;
F->line_3147 = f_cur_line_327(F->up);
f_expect_kw_342(F->up, rt_g_lit("TASK", 4));
if (f_at_kw_329(F->up, rt_g_lit("BODY", 4))) {
f_skip_340(F->up);
F->x_3145 = f_nn_320(F->up, ((rt_int)51LL), G_NV(F->line_3147));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_3145)).name_);
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
if (f_at_kw_329(F->up, rt_g_lit("SEPARATE", 8))) {
f_skip_340(F->up);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_3145)).flag_ = ((rt_int)4LL);
(*F->res_1153) = F->x_3145;
goto ret_;
}
f_body_part_412(F->up, F->x_3145);
} else {
F->x_3145 = f_nn_320(F->up, ((rt_int)50LL), G_NV(F->line_3147));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_3145)).name_);
if (((f_at_kw_329(F->up, rt_g_lit("IS", 2)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("NEW", 3)))) {
f_instantiation_1301(F->up, F->x_3145, &(*F->res_1153));
goto ret_;
}
if (f_at_kw_329(F->up, rt_g_lit("RENAMES", 7))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_3145)).flag_ = ((rt_int)3LL);
f_name_p_378(F->up, &(*(P175)rt_nil_check(F->x_3145)).b_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1153) = F->x_3145;
goto ret_;
}
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
f_discrete_range_p_382(F->up, &(*(P175)rt_nil_check(F->x_3145)).a_);
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_3145)).a_)).kind_) == ((rt_int)5LL))) {
F->r_3146 = f_nn_320(F->up, ((rt_int)80LL), G_NV(F->line_3147));
(*(P175)rt_nil_check(F->r_3146)).name_ = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_3145)).a_)).name_;
(*(P175)rt_nil_check(F->x_3145)).a_ = F->r_3146;
}
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
if (f_at_kw_329(F->up, rt_g_lit("IS", 2))) {
f_skip_340(F->up);
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_3145)).c_);
if (f_at_kw_329(F->up, rt_g_lit("PRIVATE", 7))) {
f_skip_340(F->up);
f_decl_part_400(F->up, &(*(P175)rt_nil_check(F->x_3145)).d_);
}
f_expect_kw_342(F->up, rt_g_lit("END", 3));
}
}
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_skip_340(F->up);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1153) = F->x_3145;
ret_:

  return;
}

static void f_entry_p_1156(struct f_greenc_1fr *up_, P175 *res_1155) {
  struct f_entry_p_1156fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1155 = res_1155;
F->x_3148 = NULL;
f_expect_kw_342(F->up, rt_g_lit("ENTRY", 5));
F->x_3148 = f_nn_320(F->up, ((rt_int)52LL), f_cur_line_327(F->up));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_3148)).name_);
if ((f_at_op_331(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_340(F->up);
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(")", 1)))) {
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->x_3148)).b_);
} else {
f_discrete_range_p_382(F->up, &(*(P175)rt_nil_check(F->x_3148)).b_);
}
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_formal_part_406(F->up, &(*(P175)rt_nil_check(F->x_3148)).a_);
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1155) = F->x_3148;
ret_:

  return;
}

static void f_accept_p_1158(struct f_greenc_1fr *up_, P175 *res_1157) {
  struct f_accept_p_1158fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1157 = res_1157;
F->x_3149 = NULL;
f_expect_kw_342(F->up, rt_g_lit("ACCEPT", 6));
F->x_3149 = f_nn_320(F->up, ((rt_int)34LL), f_cur_line_327(F->up));
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->x_3149)).name_);
if ((f_at_op_331(F->up, rt_g_lit("(", 1)) && (!((f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)1LL)) && (eq_rt_gstr(f_text_at_337(F->up, ((rt_int)2LL)), rt_g_lit(":", 1)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)2LL)), rt_g_lit(",", 1))))))) {
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->x_3149)).c_);
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_formal_part_406(F->up, &(*(P175)rt_nil_check(F->x_3149)).a_);
}
if (f_at_kw_329(F->up, rt_g_lit("DO", 2))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_3149)).flag_ = ((rt_int)1LL);
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_3149)).b_);
f_expect_kw_342(F->up, rt_g_lit("END", 3));
if (f_at_kind_333(F->up, ((rt_int)1LL))) {
f_skip_340(F->up);
}
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1157) = F->x_3149;
ret_:

  return;
}

static void f_delay_p_1160(struct f_greenc_1fr *up_, P175 *res_1159) {
  struct f_delay_p_1160fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1159 = res_1159;
F->x_3150 = NULL;
f_expect_kw_342(F->up, rt_g_lit("DELAY", 5));
F->x_3150 = f_nn_320(F->up, ((rt_int)32LL), f_cur_line_327(F->up));
f_simple_expr_365(F->up, &(*(P175)rt_nil_check(F->x_3150)).a_);
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1159) = F->x_3150;
ret_:

  return;
}

static void f_designators_1162(struct f_greenc_1fr *up_, P175 *res_1161) {
  struct f_designators_1162fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1161 = res_1161;
F->head_3151 = NULL;
F->tail_3152 = NULL;
F->n_3153 = NULL;
for (;;) {
f_name_p_378(F->up, &F->n_3153);
f_append_324(F->up, &F->head_3151, &F->tail_3152, F->n_3153);
if ((!f_at_op_331(F->up, rt_g_lit(",", 1)))) {
goto L_end_3154;
}
f_skip_340(F->up);
}
L_end_3154: ;
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*F->res_1161) = F->head_3151;
ret_:

  return;
}

static void f_parse_task_statement_1164(struct f_greenc_1fr *up_, P175 *res_1163) {
  struct f_parse_task_statement_1164fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1163 = res_1163;
F->x_3155 = NULL;
F->alt_3156 = NULL;
F->head_3157 = NULL;
F->tail_3158 = NULL;
F->line_3159 = INT64_MIN;
F->line_3159 = f_cur_line_327(F->up);
(*F->res_1163) = NULL;
if (f_at_kw_329(F->up, rt_g_lit("INITIATE", 8))) {
f_skip_340(F->up);
F->x_3155 = f_nn_320(F->up, ((rt_int)33LL), G_NV(F->line_3159));
f_designators_1162(F->up, &(*(P175)rt_nil_check(F->x_3155)).a_);
(*F->res_1163) = F->x_3155;
} else if (f_at_kw_329(F->up, rt_g_lit("ABORT", 5))) {
f_skip_340(F->up);
F->x_3155 = f_nn_320(F->up, ((rt_int)36LL), G_NV(F->line_3159));
f_designators_1162(F->up, &(*(P175)rt_nil_check(F->x_3155)).a_);
(*F->res_1163) = F->x_3155;
} else if (f_at_kw_329(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1160(F->up, &(*F->res_1163));
} else if (f_at_kw_329(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1158(F->up, &(*F->res_1163));
} else if (f_at_kw_329(F->up, rt_g_lit("SELECT", 6))) {
f_skip_340(F->up);
F->x_3155 = f_nn_320(F->up, ((rt_int)35LL), G_NV(F->line_3159));
for (;;) {
F->alt_3156 = f_nn_320(F->up, ((rt_int)64LL), f_cur_line_327(F->up));
if (f_at_kw_329(F->up, rt_g_lit("WHEN", 4))) {
f_skip_340(F->up);
f_expr_357(F->up, &(*(P175)rt_nil_check(F->alt_3156)).a_);
f_expect_op_344(F->up, rt_g_lit("=>", 2));
}
if (f_at_kw_329(F->up, rt_g_lit("ACCEPT", 6))) {
f_accept_p_1158(F->up, &(*(P175)rt_nil_check(F->alt_3156)).b_);
} else if (f_at_kw_329(F->up, rt_g_lit("DELAY", 5))) {
f_delay_p_1160(F->up, &(*(P175)rt_nil_check(F->alt_3156)).b_);
} else {
f_perror_339(F->up, rt_g_lit("a select alternative starts with accept or delay", 48));
}
f_statements_419(F->up, &(*(P175)rt_nil_check(F->alt_3156)).c_);
f_append_324(F->up, &F->head_3157, &F->tail_3158, F->alt_3156);
if ((!f_at_kw_329(F->up, rt_g_lit("OR", 2)))) {
goto L_end_3160;
}
f_skip_340(F->up);
}
L_end_3160: ;
if (f_at_kw_329(F->up, rt_g_lit("ELSE", 4))) {
f_skip_340(F->up);
(*(P175)rt_nil_check(F->x_3155)).flag_ = ((rt_int)1LL);
f_statements_419(F->up, &(*(P175)rt_nil_check(F->x_3155)).b_);
}
f_expect_kw_342(F->up, rt_g_lit("END", 3));
f_expect_kw_342(F->up, rt_g_lit("SELECT", 6));
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->x_3155)).a_ = F->head_3157;
(*F->res_1163) = F->x_3155;
}
ret_:

  return;
}

static void f_path_at_1168(struct f_greenc_1fr *up_, rt_int level_1165, rt_gstr field_1166, P141 *r_1167) {
  struct f_path_at_1168fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->level_1165 = level_1165;
F->field_1166 = cp_rt_gstr(field_1166);
F->r_1167 = r_1167;
if ((F->level_1165 <= ((rt_int)0LL))) {
(*F->r_1167) = f_mk_246(F->up, F->field_1166);
goto ret_;
}
(*F->r_1167) = f_mk_246(F->up, rt_g_lit("F", 1));
{ rt_int lo3163 = ((rt_int)1LL), hi3164 = rt_sub(G_NV(F->up->cur_level_140), F->level_1165);
for (rt_int it3165 = lo3163; it3165 <= hi3164; it3165++) {
F->i_3162 = it3165;
(*F->r_1167) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->r_1167))), rt_g_lit("->up", 4)));
}
}
L_end_3161: ;
(*F->r_1167) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_1167))), rt_g_lit("->", 2)), F->field_1166));
ret_:

  return;
}

static int f_is_task_name_1170(struct f_greenc_1fr *up_, rt_gstr n_1169) {
  struct f_is_task_name_1170fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1169 = cp_rt_gstr(n_1169);
F->y_3166 = NULL;
F->y_3166 = f_lookup_443(F->up, F->n_1169);
if ((!(F->y_3166 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P118)rt_nil_check(F->y_3166)).kind_) == ((rt_int)9LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_task_of_1174(struct f_greenc_1fr *up_, P175 e_1171, P118 *y_1172, P175 *ix_1173) {
  struct f_task_of_1174fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1171 = e_1171;
F->y_1172 = y_1172;
F->ix_1173 = ix_1173;
F->n_3167 = NULL;
F->n_3167 = F->e_1171;
F->a_3168 = NULL;
(*F->ix_1173) = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_1171)).kind_) == ((rt_int)5LL))) {
F->a_3168 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1171)).name_)));
if (((F->a_3168 != NULL) && ((G_NV((*(P118)rt_nil_check(F->a_3168)).kind_) == ((rt_int)9LL)) && (G_NV((*(P118)rt_nil_check(F->a_3168)).flags_) == ((rt_int)4LL))))) {
f_task_of_1174(F->up, (*(P118)rt_nil_check(F->a_3168)).decl_, &(*F->y_1172), &(*F->ix_1173));
goto ret_;
}
}
if ((G_NV((*(P175)rt_nil_check(F->e_1171)).kind_) == ((rt_int)8LL))) {
F->n_3167 = (*(P175)rt_nil_check(F->e_1171)).a_;
(*F->ix_1173) = (*(P175)rt_nil_check(F->e_1171)).b_;
}
if ((G_NV((*(P175)rt_nil_check(F->n_3167)).kind_) != ((rt_int)5LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1171)).line_), rt_g_lit("a task name is required", 23));
}
(*F->y_1172) = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3167)).name_)));
if ((((*F->y_1172) == NULL) || (G_NV((*(P118)rt_nil_check((*F->y_1172))).kind_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1171)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3167)).name_)), rt_g_lit(" is not a task", 14)));
}
if ((((*F->ix_1173) != NULL) && ((*(P118)rt_nil_check((*F->y_1172))).c_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1171)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3167)).name_)), rt_g_lit(" is not a task family", 21)));
}
ret_:

  return;
}

static void f_own_index_1177(struct f_greenc_1fr *up_, P118 t_1175, P141 *r_1176) {
  struct f_own_index_1177fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1175 = t_1175;
F->r_1176 = r_1176;
F->y_3169 = NULL;
F->y_3169 = f_lookup_443(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->t_1175)).cname_))));
if ((F->y_3169 == NULL)) {
f_fail_267(F->up, ((rt_int)0LL), rt_g_lit("not inside the body of a task family", 36));
}
f_access_of_787(F->up, F->y_3169, &(*F->r_1176));
ret_:

  return;
}

static void f_member_1182(struct f_greenc_1fr *up_, P118 y_1178, rt_gstr arr_1179, rt_gstr i_1180, P141 *r_1181) {
  struct f_member_1182fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1178 = y_1178;
F->arr_1179 = cp_rt_gstr(arr_1179);
F->i_1180 = cp_rt_gstr(i_1180);
F->r_1181 = r_1181;
F->lo_3170 = NULL;
F->hi_3171 = NULL;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1178)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1178)).cname_)), rt_g_lit("lo", 2)), &F->lo_3170);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1178)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1178)).cname_)), rt_g_lit("hi", 2)), &F->hi_3171);
(*F->r_1181) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->arr_1179, rt_g_lit("[rt_index(", 10)), F->i_1180), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->lo_3170))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->hi_3171))), rt_g_lit(") - ", 4)), (*(P141)rt_nil_check(F->lo_3170))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_act_path_1185(struct f_greenc_1fr *up_, P118 y_1183, P141 *r_1184) {
  struct f_act_path_1185fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1183 = y_1183;
F->r_1184 = r_1184;
F->i_3172 = NULL;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1183)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1183)).cname_)), rt_g_lit("act", 3)), &(*F->r_1184));
if (((*(P118)rt_nil_check(F->y_1183)).c_ != NULL)) {
f_own_index_1177(F->up, F->y_1183, &F->i_3172);
f_member_1182(F->up, F->y_1183, (*(P141)rt_nil_check((*F->r_1184))), (*(P141)rt_nil_check(F->i_3172)), &(*F->r_1184));
}
ret_:

  return;
}

static void f_act_path_i_1189(struct f_greenc_1fr *up_, P118 y_1186, rt_gstr i_1187, P141 *r_1188) {
  struct f_act_path_i_1189fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1186 = y_1186;
F->i_1187 = cp_rt_gstr(i_1187);
F->r_1188 = r_1188;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1186)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1186)).cname_)), rt_g_lit("act", 3)), &(*F->r_1188));
f_member_1182(F->up, F->y_1186, (*(P141)rt_nil_check((*F->r_1188))), F->i_1187, &(*F->r_1188));
ret_:

  return;
}

static void f_entry_path_1193(struct f_greenc_1fr *up_, P118 y_1190, rt_gstr i_1191, P141 *r_1192) {
  struct f_entry_path_1193fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1190 = y_1190;
F->i_1191 = cp_rt_gstr(i_1191);
F->r_1192 = r_1192;
F->own_3173 = NULL;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1190)).level_), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1190)).access_path_)), &(*F->r_1192));
if (((((*(P118)rt_nil_check(F->y_1190)).members_ != NULL) && ((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1190)).members_)).c_ != NULL)) && (!G_NV((*(P118)rt_nil_check(F->y_1190)).ro_)))) {
if ((({ rt_gstr at3174 = F->i_1191; at3174.hi >= at3174.lo ? at3174.hi - at3174.lo + 1 : (rt_int)0; }) == ((rt_int)0LL))) {
f_own_index_1177(F->up, (*(P118)rt_nil_check(F->y_1190)).members_, &F->own_3173);
f_member_1182(F->up, (*(P118)rt_nil_check(F->y_1190)).members_, (*(P141)rt_nil_check((*F->r_1192))), (*(P141)rt_nil_check(F->own_3173)), &(*F->r_1192));
} else {
f_member_1182(F->up, (*(P118)rt_nil_check(F->y_1190)).members_, (*(P141)rt_nil_check((*F->r_1192))), F->i_1191, &(*F->r_1192));
}
}
ret_:

  return;
}

static void f_declare_slot_1196(struct f_greenc_1fr *up_, rt_gstr ctype_name_1194, rt_gstr field_1195) {
  struct f_declare_slot_1196fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->ctype_name_1194 = cp_rt_gstr(ctype_name_1194);
F->field_1195 = cp_rt_gstr(field_1195);
if (G_NV(F->up->in_func_139)) {
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), F->ctype_name_1194), one_rt_gstr(32)), F->field_1195), one_rt_gstr(59)));
} else {
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), F->ctype_name_1194), one_rt_gstr(32)), F->field_1195), one_rt_gstr(59)));
}
ret_:

  return;
}

static void f_task_decl_1198(struct f_greenc_1fr *up_, P175 e_1197) {
  struct f_task_decl_1198fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1197 = e_1197;
if ((G_NV((*(P175)rt_nil_check(F->e_1197)).kind_) == ((rt_int)50LL))) {
f_task_spec_1211(F->up, F->e_1197);
} else if ((G_NV((*(P175)rt_nil_check(F->e_1197)).kind_) == ((rt_int)51LL))) {
f_task_body_1215(F->up, F->e_1197);
} else if ((G_NV((*(P175)rt_nil_check(F->e_1197)).kind_) == ((rt_int)52LL))) {
f_entry_decl_1213(F->up, F->e_1197);
} else {
f_generic_decl_1303(F->up, F->e_1197);
}
ret_:

  return;
}

static void f_family_arg_struct_1199(struct f_greenc_1fr *up_) {
  struct f_family_arg_struct_1199fr *F = rt_alloc(sizeof *F);
F->up = up_;
if ((!G_NV(F->up->famarg_done_214))) {
F->up->famarg_done_214 = 1;
f_put_to_271(F->up, F->up->out_types_129, rt_g_lit("struct rt_famarg { void *up; rt_int i; };", 41));
}
ret_:

  return;
}

static void f_family_bounds_1204(struct f_greenc_1fr *up_, P175 b_1200, P118 y_1201, P141 x_1202, int per_member_1203) {
  struct f_family_bounds_1204fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->b_1200 = b_1200;
F->y_1201 = y_1201;
F->x_1202 = x_1202;
F->per_member_1203 = per_member_1203;
F->lo_3175 = NULL;
F->hi_3176 = NULL;
F->v_3177 = NULL;
F->d_3178 = NULL;
F->mlo_3179 = NULL;
F->mhi_3180 = NULL;
F->vt_3181 = NULL;
F->c_3182 = NULL;
(*(P118)rt_nil_check(F->y_1201)).c_ = f_new_cons_494(F->up);
if (F->per_member_1203) {
f_declare_slot_1196(F->up, rt_g_lit("rt_entry **", 11), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).access_path_)));
} else {
f_declare_slot_1196(F->up, rt_g_lit("rt_entry *", 10), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).access_path_)));
}
f_declare_slot_1196(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).cname_)), rt_g_lit("flo", 3)));
f_declare_slot_1196(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).cname_)), rt_g_lit("fhi", 3)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1201)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).cname_)), rt_g_lit("flo", 3)), &F->lo_3175);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1201)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1201)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3176);
f_discrete_bounds_543(F->up, F->b_1200, NULL, &F->vt_3181, &F->v_3177, &F->d_3178);
(*(P118)rt_nil_check(F->y_1201)).t_ = F->vt_3181;
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->lo_3175)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->v_3177))), rt_g_lit("; ", 2)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->d_3178))), one_rt_gstr(59)));
if (F->per_member_1203) {
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->up->cur_task_212)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->cur_task_212)).cname_)), rt_g_lit("lo", 2)), &F->mlo_3179);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->up->cur_task_212)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->cur_task_212)).cname_)), rt_g_lit("hi", 2)), &F->mhi_3180);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_1202)), rt_g_lit(" = rt_alloc(sizeof(rt_entry *) * (size_t)(", 42)), (*(P141)rt_nil_check(F->mhi_3180))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->mlo_3179))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->mhi_3180))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->mlo_3179))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int m_ = 0; m_ <= ", 26), (*(P141)rt_nil_check(F->mhi_3180))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->mlo_3179))), rt_g_lit("; m_++) { ", 10)), (*(P141)rt_nil_check(F->x_1202))), rt_g_lit("[m_] = rt_alloc(sizeof(rt_entry) * (size_t)(", 44)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit(" + 1 : 1)); for (rt_int k_ = 0; k_ <= ", 38)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P141)rt_nil_check(F->x_1202))), rt_g_lit("[m_][k_]); }", 12)));
goto ret_;
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_1202)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P141)rt_nil_check(F->hi_3176))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3175))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P141)rt_nil_check(F->x_1202))), rt_g_lit("[k_]);", 6)));
ret_:

  return;
}

static void f_entry_family_slot_1209(struct f_greenc_1fr *up_, P118 y_1205, rt_gstr base_1206, rt_gstr i_1207, P141 *r_1208) {
  struct f_entry_family_slot_1209fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1205 = y_1205;
F->base_1206 = cp_rt_gstr(base_1206);
F->i_1207 = cp_rt_gstr(i_1207);
F->r_1208 = r_1208;
F->lo_3183 = NULL;
F->hi_3184 = NULL;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1205)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1205)).cname_)), rt_g_lit("flo", 3)), &F->lo_3183);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1205)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1205)).cname_)), rt_g_lit("fhi", 3)), &F->hi_3184);
(*F->r_1208) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(F->base_1206, rt_g_lit("[rt_index(", 10)), F->i_1207), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->lo_3183))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->hi_3184))), rt_g_lit(") - ", 4)), (*(P141)rt_nil_check(F->lo_3183))), one_rt_gstr(93)));
ret_:

  return;
}

static void f_task_spec_1211(struct f_greenc_1fr *up_, P175 e_1210) {
  struct f_task_spec_1211fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1210 = e_1210;
F->has_procs_3185 = INT_MIN;
F->has_procs_3185 = 0;
F->saved_defer_3186 = INT_MIN;
F->fields_3187 = NULL;
F->ct_3188 = NULL;
F->pm_3189 = NULL;
F->fp_3190 = NULL;
F->flo_3191 = NULL;
F->fhi_3192 = NULL;
F->y_3193 = NULL;
F->m_3194 = NULL;
F->z_3195 = NULL;
F->saved_3196 = NULL;
F->saved_3196 = F->up->cur_task_212;
F->d_3197 = NULL;
F->v_3198 = NULL;
F->p_3199 = NULL;
F->p2_3200 = NULL;
F->vt_3201 = NULL;
F->r_3202 = NULL;
F->y_3193 = f_new_sym_491(F->up, ((rt_int)9LL), (*(P175)rt_nil_check(F->e_1210)).name_);
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("t_", 2), f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1210)).name_)))), one_rt_gstr(95)), &(*(P118)rt_nil_check(F->y_3193)).cname_);
(*(P118)rt_nil_check(F->y_3193)).decl_ = F->e_1210;
if (G_NV(F->up->in_func_139)) {
(*(P118)rt_nil_check(F->y_3193)).level_ = G_NV(F->up->cur_level_140);
}
(*(P118)rt_nil_check(F->y_3193)).access_path_ = (*(P118)rt_nil_check(F->y_3193)).cname_;
f_declare_slot_1196(F->up, rt_g_lit("rt_taskdecl", 11), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("decl", 4)));
if (((*(P175)rt_nil_check(F->e_1210)).a_ != NULL)) {
(*(P118)rt_nil_check(F->y_3193)).c_ = f_new_cons_494(F->up);
f_declare_slot_1196(F->up, rt_g_lit("rt_act *", 8), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("act", 3)));
f_declare_slot_1196(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("lo", 2)));
f_declare_slot_1196(F->up, rt_g_lit("rt_int", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("hi", 2)));
f_discrete_bounds_543(F->up, (*(P175)rt_nil_check(F->e_1210)).a_, NULL, &F->vt_3201, &F->v_3198, &F->d_3197);
(*(P118)rt_nil_check(F->y_3193)).t_ = F->vt_3201;
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("lo", 2)), &F->p_3199);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->p_3199)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->v_3198))), one_rt_gstr(59)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("hi", 2)), &F->p2_3200);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->p2_3200)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->d_3197))), one_rt_gstr(59)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("act", 3)), &F->v_3198);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->v_3198)), rt_g_lit(" = rt_alloc(sizeof(rt_act) * (size_t)(", 38)), (*(P141)rt_nil_check(F->p2_3200))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->p_3199))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->p2_3200))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->p_3199))), rt_g_lit(" + 1 : 1));", 11)));
f_family_arg_struct_1199(F->up);
} else {
f_declare_slot_1196(F->up, rt_g_lit("rt_act", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("act", 3)));
}
f_put_to_271(F->up, F->up->out_protos_132, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_))), rt_g_lit("run(void *a);", 13)));
if ((!G_NV(F->up->in_func_139))) {
f_put_to_271(F->up, F->up->out_awaits_227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_await_decl(&", 17), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_))), rt_g_lit("decl);", 6)));
}
F->r_3202 = (*(P175)rt_nil_check(F->e_1210)).c_;
while ((F->r_3202 != NULL)) {
if (((((G_NV((*(P175)rt_nil_check(F->r_3202)).kind_) == ((rt_int)40LL)) || (G_NV((*(P175)rt_nil_check(F->r_3202)).kind_) == ((rt_int)48LL))) || (G_NV((*(P175)rt_nil_check(F->r_3202)).kind_) == ((rt_int)49LL))) || (G_NV((*(P175)rt_nil_check(F->r_3202)).kind_) == ((rt_int)50LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->r_3202)).line_), cat_rt_gstr(rt_g_lit("the visible part of a task holds entries, subprograms, types, constants and ", 76), rt_g_lit("exceptions, not variables or modules (RM79 9.1)", 47)));
}
F->r_3202 = (*(P175)rt_nil_check(F->r_3202)).next_;
}
L_end_3203: ;
f_open_scope_487(F->up);
F->up->cur_task_212 = F->y_3193;
F->saved_defer_3186 = G_NV(F->up->defer_entry_structs_226);
F->up->defer_entry_structs_226 = 1;
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->e_1210)).c_);
f_decl_elements_677(F->up, (*(P175)rt_nil_check(F->e_1210)).d_);
F->up->defer_entry_structs_226 = G_NV(F->saved_defer_3186);
F->m_3194 = F->up->scope_stack_122;
while (((F->m_3194 != NULL) && (G_NV((*(P118)rt_nil_check(F->m_3194)).depth_) == G_NV(F->up->depth_121)))) {
if (((G_NV((*(P118)rt_nil_check(F->m_3194)).kind_) == ((rt_int)10LL)) && (!G_NV((*(P118)rt_nil_check(F->m_3194)).from_use_)))) {
F->fields_3187 = f_mk_246(F->up, rt_g_lit(" int dummy_;", 12));
F->pm_3189 = (*(P118)rt_nil_check(F->m_3194)).params_;
while ((F->pm_3189 != NULL)) {
f_ctype_513(F->up, (*(P2001)rt_nil_check(F->pm_3189)).t_, &F->ct_3188);
if ((G_NV((*(P2001)rt_nil_check(F->pm_3189)).mode_) == ((rt_int)1LL))) {
F->fields_3187 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->fields_3187)), one_rt_gstr(32)), (*(P141)rt_nil_check(F->ct_3188))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3189)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3187 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->fields_3187)), one_rt_gstr(32)), (*(P141)rt_nil_check(F->ct_3188))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3189)).cfield_))), one_rt_gstr(59)));
}
F->pm_3189 = (*(P2001)rt_nil_check(F->pm_3189)).next_;
}
L_end_3205: ;
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3194)).cname_))), rt_g_lit("p {", 3)), (*(P141)rt_nil_check(F->fields_3187))), rt_g_lit(" };", 3)));
}
F->m_3194 = (*(P118)rt_nil_check(F->m_3194)).stack_;
}
L_end_3204: ;
F->m_3194 = F->up->scope_stack_122;
while (((F->m_3194 != NULL) && (G_NV((*(P118)rt_nil_check(F->m_3194)).depth_) == G_NV(F->up->depth_121)))) {
if ((((G_NV((*(P118)rt_nil_check(F->m_3194)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->m_3194)).kind_) == ((rt_int)4LL))) && (!G_NV((*(P118)rt_nil_check(F->m_3194)).from_use_)))) {
if (((!G_NV(F->has_procs_3185)) && ((*(P118)rt_nil_check(F->y_3193)).c_ != NULL))) {
f_declare_slot_1196(F->up, rt_g_lit("void **", 7), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frames", 6)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frames", 6)), &F->fp_3190);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("lo", 2)), &F->flo_3191);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("hi", 2)), &F->fhi_3192);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->fp_3190)), rt_g_lit(" = rt_alloc(sizeof(void *) * (size_t)(", 38)), (*(P141)rt_nil_check(F->fhi_3192))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->flo_3191))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->fhi_3192))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->flo_3191))), rt_g_lit(" + 1 : 1));", 11)));
F->has_procs_3185 = 1;
} else if ((!G_NV(F->has_procs_3185))) {
f_declare_slot_1196(F->up, rt_g_lit("void *", 6), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frame", 5)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3193)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frame", 5)), &F->fp_3190);
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->fp_3190)), rt_g_lit(" = NULL;", 8)));
F->has_procs_3185 = 1;
}
if (((*(P118)rt_nil_check(F->y_3193)).c_ != NULL)) {
(*(P118)rt_nil_check(F->m_3194)).access_path_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frames", 6)));
} else {
(*(P118)rt_nil_check(F->m_3194)).access_path_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3193)).cname_)), rt_g_lit("frame", 5)));
}
(*(P118)rt_nil_check(F->m_3194)).members_ = F->y_3193;
}
f_copy_sym_1102(F->up, F->m_3194, &F->z_3195);
(*(P118)rt_nil_check(F->z_3195)).hidden_ = G_NV((*(P118)rt_nil_check(F->m_3194)).from_use_);
(*(P118)rt_nil_check(F->z_3195)).mnext_ = (*(P118)rt_nil_check(F->y_3193)).members_;
(*(P118)rt_nil_check(F->y_3193)).members_ = F->z_3195;
F->m_3194 = (*(P118)rt_nil_check(F->m_3194)).stack_;
}
L_end_3206: ;
f_close_scope_488(F->up);
F->up->cur_task_212 = F->saved_3196;
f_define_486(F->up, F->y_3193, G_NV((*(P175)rt_nil_check(F->e_1210)).line_));
ret_:

  return;
}

static void f_entry_decl_1213(struct f_greenc_1fr *up_, P175 e_1212) {
  struct f_entry_decl_1213fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1212 = e_1212;
F->y_3207 = NULL;
F->p_3208 = NULL;
F->p_3208 = (*(P175)rt_nil_check(F->e_1212)).a_;
F->pm_3209 = NULL;
F->tail_3210 = NULL;
F->fields_3211 = NULL;
F->ct_3212 = NULL;
F->x_3213 = NULL;
F->lo_3214 = NULL;
F->hi_3215 = NULL;
if ((F->up->cur_task_212 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1212)).line_), rt_g_lit("an entry is declared in a task (RM79 9.5)", 41));
}
F->y_3207 = f_new_sym_491(F->up, ((rt_int)10LL), (*(P175)rt_nil_check(F->e_1212)).name_);
f_new_name_249(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("e_", 2), f_lower_s_257(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1212)).name_)))), one_rt_gstr(95)), &(*(P118)rt_nil_check(F->y_3207)).cname_);
F->fields_3211 = f_mk_246(F->up, rt_g_lit(" int dummy_;", 12));
while ((F->p_3208 != NULL)) {
F->pm_3209 = ({ R2002 *cell3217 = rt_alloc(sizeof(R2002)); *cell3217 = cp_R2002(({ R2002 ag3218; ag3218.name_ = (*(P175)rt_nil_check(F->p_3208)).name_; ag3218.mode_ = G_NV((*(P175)rt_nil_check(F->p_3208)).ival_); ag3218.t_ = NULL; ag3218.c_ = NULL; ag3218.cfield_ = NULL; ag3218.dflt_ = (*(P175)rt_nil_check(F->p_3208)).b_; ag3218.next_ = NULL; ag3218.dsym_ = NULL; ag3218; })); (P2001)cell3217; });
f_resolve_529(F->up, (*(P175)rt_nil_check(F->p_3208)).a_, &(*(P2001)rt_nil_check(F->pm_3209)).t_, &(*(P2001)rt_nil_check(F->pm_3209)).c_);
(*(P2001)rt_nil_check(F->pm_3209)).cfield_ = f_mk_246(F->up, f_c_field_263(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3208)).name_))));
f_ctype_513(F->up, (*(P2001)rt_nil_check(F->pm_3209)).t_, &F->ct_3212);
if ((G_NV((*(P2001)rt_nil_check(F->pm_3209)).mode_) == ((rt_int)1LL))) {
F->fields_3211 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->fields_3211)), one_rt_gstr(32)), (*(P141)rt_nil_check(F->ct_3212))), one_rt_gstr(32)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3209)).cfield_))), one_rt_gstr(59)));
} else {
F->fields_3211 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->fields_3211)), one_rt_gstr(32)), (*(P141)rt_nil_check(F->ct_3212))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3209)).cfield_))), one_rt_gstr(59)));
}
if ((F->tail_3210 == NULL)) {
(*(P118)rt_nil_check(F->y_3207)).params_ = F->pm_3209;
} else {
(*(P2001)rt_nil_check(F->tail_3210)).next_ = F->pm_3209;
}
F->tail_3210 = F->pm_3209;
F->p_3208 = (*(P175)rt_nil_check(F->p_3208)).next_;
}
L_end_3216: ;
if ((!G_NV(F->up->defer_entry_structs_226))) {
f_put_to_271(F->up, F->up->out_types_129, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("struct ", 7), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3207)).cname_))), rt_g_lit("p {", 3)), (*(P141)rt_nil_check(F->fields_3211))), rt_g_lit(" };", 3)));
}
(*(P118)rt_nil_check(F->y_3207)).result_ = F->up->ty_void_162;
(*(P118)rt_nil_check(F->y_3207)).decl_ = F->e_1212;
(*(P118)rt_nil_check(F->y_3207)).members_ = F->up->cur_task_212;
f_elaborate_defaults_672(F->up, F->y_3207);
if (G_NV(F->up->in_func_139)) {
(*(P118)rt_nil_check(F->y_3207)).level_ = G_NV(F->up->cur_level_140);
}
(*(P118)rt_nil_check(F->y_3207)).access_path_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3207)).cname_)), rt_g_lit("ent", 3)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3207)).level_), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3207)).access_path_)), &F->x_3213);
(*(P118)rt_nil_check(F->y_3207)).ro_ = ((((*(P118)rt_nil_check(F->up->cur_task_212)).c_ != NULL) && G_NV(F->up->in_func_139)) && (G_NV(F->up->cur_level_140) > G_NV((*(P118)rt_nil_check(F->up->cur_task_212)).level_)));
if (((*(P175)rt_nil_check(F->e_1212)).b_ != NULL)) {
f_family_bounds_1204(F->up, (*(P175)rt_nil_check(F->e_1212)).b_, F->y_3207, F->x_3213, (((*(P118)rt_nil_check(F->up->cur_task_212)).c_ != NULL) && (!G_NV((*(P118)rt_nil_check(F->y_3207)).ro_))));
} else if ((((*(P118)rt_nil_check(F->up->cur_task_212)).c_ != NULL) && (!G_NV((*(P118)rt_nil_check(F->y_3207)).ro_)))) {
f_declare_slot_1196(F->up, rt_g_lit("rt_entry *", 10), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3207)).access_path_)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->up->cur_task_212)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->cur_task_212)).cname_)), rt_g_lit("lo", 2)), &F->lo_3214);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->up->cur_task_212)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->cur_task_212)).cname_)), rt_g_lit("hi", 2)), &F->hi_3215);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->x_3213)), rt_g_lit(" = rt_alloc(sizeof(rt_entry) * (size_t)(", 40)), (*(P141)rt_nil_check(F->hi_3215))), rt_g_lit(" >= ", 4)), (*(P141)rt_nil_check(F->lo_3214))), rt_g_lit(" \? ", 3)), (*(P141)rt_nil_check(F->hi_3215))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3214))), rt_g_lit(" + 1 : 1));", 11)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = 0; k_ <= ", 26), (*(P141)rt_nil_check(F->hi_3215))), rt_g_lit(" - ", 3)), (*(P141)rt_nil_check(F->lo_3214))), rt_g_lit("; k_++) rt_entry_init(&", 23)), (*(P141)rt_nil_check(F->x_3213))), rt_g_lit("[k_]);", 6)));
} else {
f_declare_slot_1196(F->up, rt_g_lit("rt_entry", 8), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3207)).access_path_)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_init(&", 15), (*(P141)rt_nil_check(F->x_3213))), rt_g_lit(");", 2)));
}
f_define_486(F->up, F->y_3207, G_NV((*(P175)rt_nil_check(F->e_1212)).line_));
ret_:

  return;
}

static void f_task_body_1215(struct f_greenc_1fr *up_, P175 e_1214) {
  struct f_task_body_1215fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1214 = e_1214;
F->y_3219 = NULL;
F->y_3219 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1214)).name_)));
F->b_3220 = NULL;
F->m_3221 = NULL;
F->z_3222 = NULL;
F->upp_3223 = NULL;
F->saved_3224 = NULL;
F->saved_3224 = F->up->cur_task_212;
if ((G_NV((*(P175)rt_nil_check(F->e_1214)).flag_) == ((rt_int)4LL))) {
f_stub_692(F->up, F->e_1214);
goto ret_;
}
if (f_is_generic_name_1305(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1214)).name_)))) {
f_attach_generic_body_1310(F->up, F->e_1214);
goto ret_;
}
if (((F->y_3219 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_3219)).kind_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1214)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("task body ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1214)).name_))), rt_g_lit(" has no task specification", 26)));
}
F->b_3220 = f_new_sym_491(F->up, ((rt_int)4LL), (*(P175)rt_nil_check(F->e_1214)).name_);
(*(P118)rt_nil_check(F->b_3220)).cname_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_)), rt_g_lit("body", 4)));
(*(P118)rt_nil_check(F->b_3220)).result_ = F->up->ty_void_162;
(*(P118)rt_nil_check(F->b_3220)).level_ = G_NV(F->up->cur_level_140);
(*(P118)rt_nil_check(F->b_3220)).decl_ = F->e_1214;
if (((*(P118)rt_nil_check(F->y_3219)).c_ != NULL)) {
(*(P118)rt_nil_check(F->b_3220)).params_ = ({ R2002 *cell3225 = rt_alloc(sizeof(R2002)); *cell3225 = cp_R2002(({ R2002 ag3226; ag3226.name_ = f_mk_246(F->up, cat_rt_gstr(rt_g_lit("INDEX_", 6), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_)))); ag3226.mode_ = ((rt_int)1LL); ag3226.t_ = F->up->ty_int_157; ag3226.c_ = NULL; ag3226.cfield_ = f_mk_246(F->up, rt_g_lit("index_", 6)); ag3226.dflt_ = NULL; ag3226.next_ = NULL; ag3226.dsym_ = NULL; ag3226; })); (P2001)cell3225; });
}
f_open_scope_487(F->up);
F->m_3221 = (*(P118)rt_nil_check(F->y_3219)).members_;
while ((F->m_3221 != NULL)) {
f_copy_sym_1102(F->up, F->m_3221, &F->z_3222);
f_define_486(F->up, F->z_3222, G_NV((*(P175)rt_nil_check(F->e_1214)).line_));
if (((((G_NV((*(P118)rt_nil_check(F->m_3221)).kind_) == ((rt_int)3LL)) || (G_NV((*(P118)rt_nil_check(F->m_3221)).kind_) == ((rt_int)4LL))) && ((*(P118)rt_nil_check(F->m_3221)).access_path_ != NULL)) && f_same_task_446(F->up, (*(P118)rt_nil_check(F->m_3221)).members_, F->y_3219))) {
if ((G_NV((*(P118)rt_nil_check(F->y_3219)).level_) > ((rt_int)0LL))) {
F->upp_3223 = f_mk_246(F->up, rt_g_lit("up_->", 5));
} else {
F->upp_3223 = f_mk_246(F->up, rt_g_lit("", 0));
}
if (((*(P118)rt_nil_check(F->y_3219)).c_ != NULL)) {
(*(P118)rt_nil_check(F->b_3220)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->upp_3223)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3221)).access_path_))), rt_g_lit("[index_ - ", 10)), (*(P141)rt_nil_check(F->upp_3223))), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_))), rt_g_lit("lo] = F;", 8)));
} else {
(*(P118)rt_nil_check(F->b_3220)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->upp_3223)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3221)).access_path_))), rt_g_lit(" = F;", 5)));
}
}
F->m_3221 = (*(P118)rt_nil_check(F->m_3221)).mnext_;
}
L_end_3227: ;
F->up->cur_task_212 = F->y_3219;
f_subprogram_body_737(F->up, F->e_1214, F->b_3220);
F->up->cur_task_212 = F->saved_3224;
f_close_scope_488(F->up);
if ((((*(P118)rt_nil_check(F->y_3219)).c_ != NULL) && (G_NV((*(P118)rt_nil_check(F->b_3220)).level_) > ((rt_int)0LL)))) {
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_3220)).cname_))), rt_g_lit("(g->up, g->i); }", 16)));
} else if (((*(P118)rt_nil_check(F->y_3219)).c_ != NULL)) {
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_))), rt_g_lit("run(void *a) { struct rt_famarg *g = a; ", 40)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_3220)).cname_))), rt_g_lit("(g->i); }", 9)));
} else if ((G_NV((*(P118)rt_nil_check(F->b_3220)).level_) > ((rt_int)0LL))) {
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_))), rt_g_lit("run(void *a) { ", 15)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_3220)).cname_))), rt_g_lit("(a); }", 6)));
} else {
f_put_to_271(F->up, F->up->out_funcs_134, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static void ", 12), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3219)).cname_))), rt_g_lit("run(void *a) { (void)a; ", 24)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->b_3220)).cname_))), rt_g_lit("(); }", 5)));
}
ret_:

  return;
}

static void f_task_awaits_1218(struct f_greenc_1fr *up_, P175 decls_1216, P141 *aw_1217) {
  struct f_task_awaits_1218fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1216 = decls_1216;
F->aw_1217 = aw_1217;
F->e_3228 = NULL;
F->e_3228 = F->decls_1216;
F->y_3229 = NULL;
F->p_3230 = NULL;
(*F->aw_1217) = f_mk_246(F->up, rt_g_lit("", 0));
while ((F->e_3228 != NULL)) {
if (((G_NV((*(P175)rt_nil_check(F->e_3228)).kind_) == ((rt_int)50LL)) || ((G_NV((*(P175)rt_nil_check(F->e_3228)).kind_) == ((rt_int)53LL)) && (G_NV((*(P175)rt_nil_check(F->e_3228)).ival_) == ((rt_int)50LL))))) {
F->y_3229 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_3228)).name_)));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3229)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3229)).cname_)), rt_g_lit("decl", 4)), &F->p_3230);
(*F->aw_1217) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->aw_1217))), rt_g_lit(" rt_await_decl(&", 16)), (*(P141)rt_nil_check(F->p_3230))), rt_g_lit(");", 2)));
}
F->e_3228 = (*(P175)rt_nil_check(F->e_3228)).next_;
}
L_end_3231: ;
ret_:

  return;
}

static void f_task_failure_1220(struct f_greenc_1fr *up_, P175 s_1219) {
  struct f_task_failure_1220fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1219 = s_1219;
F->y_3232 = NULL;
F->y_3232 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1219)).tag_)));
F->a_3233 = NULL;
F->i_3234 = NULL;
F->it_3235 = NULL;
if (((*(P175)rt_nil_check(F->s_1219)).a_ != NULL)) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_1219)).a_, (*(P118)rt_nil_check(F->y_3232)).t_, &F->it_3235, &F->i_3234);
f_act_path_i_1189(F->up, F->y_3232, (*(P141)rt_nil_check(F->i_3234)), &F->a_3233);
} else {
f_act_path_1185(F->up, F->y_3232, &F->a_3233);
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exterminate(&", 16), (*(P141)rt_nil_check(F->a_3233))), rt_g_lit(");", 2)));
ret_:

  return;
}

static void f_entry_sym_1224(struct f_greenc_1fr *up_, P175 e_1221, P118 *y_1222, P175 *ix_1223) {
  struct f_entry_sym_1224fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1221 = e_1221;
F->y_1222 = y_1222;
F->ix_1223 = ix_1223;
F->alias_3236 = NULL;
F->t_3237 = NULL;
(*F->ix_1223) = NULL;
F->up->fam_ix_215 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_1221)).kind_) == ((rt_int)8LL))) {
f_entry_sym_1224(F->up, (*(P175)rt_nil_check(F->e_1221)).a_, &(*F->y_1222), &(*F->ix_1223));
if (((*(P118)rt_nil_check((*F->y_1222))).c_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1221)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check((*F->y_1222))).name_)), rt_g_lit(" is not an entry family", 23)));
}
F->up->fam_ix_215 = (*(P175)rt_nil_check(F->e_1221)).b_;
goto ret_;
}
if (((G_NV((*(P175)rt_nil_check(F->e_1221)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3237 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).name_)));
if (((F->t_3237 != NULL) && ((G_NV((*(P118)rt_nil_check(F->t_3237)).kind_) == ((rt_int)9LL)) && (G_NV((*(P118)rt_nil_check(F->t_3237)).flags_) == ((rt_int)4LL))))) {
F->alias_3236 = f_nn_320(F->up, ((rt_int)9LL), G_NV((*(P175)rt_nil_check(F->e_1221)).line_));
as_R176(&(*(P175)rt_nil_check(F->alias_3236)), (*(P175)rt_nil_check(F->e_1221)));
(*(P175)rt_nil_check(F->alias_3236)).a_ = (*(P118)rt_nil_check(F->t_3237)).decl_;
f_entry_sym_1224(F->up, F->alias_3236, &(*F->y_1222), &(*F->ix_1223));
goto ret_;
}
}
if ((((G_NV((*(P175)rt_nil_check(F->e_1221)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).kind_) == ((rt_int)8LL))) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).a_)).kind_) == ((rt_int)5LL)))) {
F->t_3237 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).a_)).name_)));
if ((((F->t_3237 == NULL) || (G_NV((*(P118)rt_nil_check(F->t_3237)).kind_) != ((rt_int)9LL))) || ((*(P118)rt_nil_check(F->t_3237)).c_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1221)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).a_)).name_)), rt_g_lit(" is not a task family", 21)));
}
(*F->y_1222) = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).a_)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).name_)), G_NV((*(P175)rt_nil_check(F->e_1221)).line_));
(*F->ix_1223) = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).a_)).b_;
if ((((*F->y_1222) == NULL) || (G_NV((*(P118)rt_nil_check((*F->y_1222))).kind_) != ((rt_int)10LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1221)).line_), rt_g_lit("not an entry", 12));
}
goto ret_;
}
if ((G_NV((*(P175)rt_nil_check(F->e_1221)).kind_) == ((rt_int)5LL))) {
(*F->y_1222) = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).name_)));
if (((*(P175)rt_nil_check(F->e_1221)).tag_ != NULL)) {
(*F->y_1222) = f_member_of_1097(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).tag_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).name_)), G_NV((*(P175)rt_nil_check(F->e_1221)).line_));
}
} else if (((G_NV((*(P175)rt_nil_check(F->e_1221)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->e_1221)).a_))) {
(*F->y_1222) = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->e_1221)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1221)).name_)), G_NV((*(P175)rt_nil_check(F->e_1221)).line_));
} else {
(*F->y_1222) = NULL;
}
if ((((*F->y_1222) == NULL) || (G_NV((*(P118)rt_nil_check((*F->y_1222))).kind_) != ((rt_int)10LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1221)).line_), rt_g_lit("not an entry", 12));
}
ret_:

  return;
}

static void f_entry_overload_1229(struct f_greenc_1fr *up_, P118 y_1225, P175 args_1226, rt_int line_1227, P118 *r_1228) {
  struct f_entry_overload_1229fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1225 = y_1225;
F->args_1226 = args_1226;
F->line_1227 = line_1227;
F->r_1228 = r_1228;
F->z_3238 = NULL;
F->found_3239 = NULL;
F->ok_3240 = INT_MIN;
(*F->r_1228) = F->y_1225;
if (((*(P118)rt_nil_check(F->y_1225)).members_ == NULL)) {
goto ret_;
}
F->z_3238 = (*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1225)).members_)).members_;
while ((F->z_3238 != NULL)) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3238)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1225)).name_))) && (G_NV((*(P118)rt_nil_check(F->z_3238)).kind_) == ((rt_int)10LL)))) {
f_fits_1126(F->up, F->z_3238, F->args_1226, NULL, &F->ok_3240);
 (void)rt_range(F->ok_3240, 0, 1);
if ((G_NV(F->ok_3240) && (F->found_3239 == NULL))) {
F->found_3239 = F->z_3238;
} else if ((G_NV(F->ok_3240) && (!f_same_entity_1121(F->up, F->found_3239, F->z_3238)))) {
f_fail_267(F->up, F->line_1227, cat_rt_gstr(cat_rt_gstr(rt_g_lit("the entry call of ", 18), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1225)).name_))), rt_g_lit(" is ambiguous (RM79 9.5, 6.6)", 29)));
}
}
F->z_3238 = (*(P118)rt_nil_check(F->z_3238)).mnext_;
}
L_end_3241: ;
if ((F->found_3239 != NULL)) {
(*F->r_1228) = F->found_3239;
}
ret_:

  return;
}

static void f_other_call_1234(struct f_greenc_1fr *up_, P175 e_1230, int is_stmt_1231, P123 *t_1232, P141 *r_1233) {
  struct f_other_call_1234fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1230 = e_1230;
F->is_stmt_1231 = is_stmt_1231;
F->t_1232 = t_1232;
F->r_1233 = r_1233;
F->y_3242 = NULL;
F->oy_3243 = NULL;
F->pm_3244 = NULL;
F->a_3245 = NULL;
F->parts_3246 = NULL;
F->v_3247 = NULL;
F->lv_3248 = NULL;
F->ent_3249 = NULL;
F->act_3250 = NULL;
F->i_3251 = NULL;
F->vt_3252 = NULL;
F->lt_3253 = NULL;
F->lc_3254 = NULL;
F->ro_3255 = INT_MIN;
F->ix_3256 = NULL;
F->fix_3257 = NULL;
F->args_node_3258 = NULL;
f_entry_sym_1224(F->up, (*(P175)rt_nil_check(F->e_1230)).a_, &F->y_3242, &F->ix_3256);
F->fix_3257 = F->up->fam_ix_215;
F->args_node_3258 = (*(P175)rt_nil_check(F->e_1230)).b_;
if (((*(P118)rt_nil_check(F->y_3242)).c_ == NULL)) {
f_entry_overload_1229(F->up, F->y_3242, F->args_node_3258, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), &F->oy_3243);
F->y_3242 = F->oy_3243;
}
if ((((*(P118)rt_nil_check(F->y_3242)).c_ != NULL) && (F->fix_3257 == NULL))) {
F->fix_3257 = (*(P175)rt_nil_check(F->e_1230)).b_;
F->args_node_3258 = NULL;
}
F->i_3251 = f_mk_246(F->up, rt_g_lit("", 0));
if ((F->ix_3256 != NULL)) {
f_gexpr_850(F->up, F->ix_3256, F->up->ty_int_157, &F->vt_3252, &F->i_3251);
} else if (((((*(P118)rt_nil_check(F->y_3242)).members_ != NULL) && ((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).members_)).c_ != NULL)) && ((*(P118)rt_nil_check(F->y_3242)).members_ != F->up->cur_task_212))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("a member of family ", 19), (*(P141)rt_nil_check((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).members_)).name_))), rt_g_lit(" must be named: F(I).", 21)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).name_))));
}
if ((!F->is_stmt_1231)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), rt_g_lit("an entry call is a statement", 28));
}
if ((F->up->pure_sym_235 != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->pure_sym_235)).name_))), rt_g_lit(" may not call an entry (RM79 6.5)", 33)));
}
f_entry_path_1193(F->up, F->y_3242, (*(P141)rt_nil_check(F->i_3251)), &F->ent_3249);
if (((*(P118)rt_nil_check(F->y_3242)).c_ != NULL)) {
if ((F->fix_3257 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).name_)), rt_g_lit(" is an entry family: name a member, ", 36)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_850(F->up, F->fix_3257, NULL, &F->vt_3252, &F->v_3247);
f_entry_family_slot_1209(F->up, F->y_3242, (*(P141)rt_nil_check(F->ent_3249)), (*(P141)rt_nil_check(F->v_3247)), &F->ent_3249);
}
F->parts_3246 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("({ struct ", 10), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3242)).cname_))), rt_g_lit("p p_;", 5)));
F->pm_3244 = (*(P118)rt_nil_check(F->y_3242)).params_;
while ((F->pm_3244 != NULL)) {
F->a_3245 = f_actual_for_1052(F->up, F->args_node_3258, F->pm_3244, (*(P118)rt_nil_check(F->y_3242)).params_);
if (((F->a_3245 == NULL) && ((*(P2001)rt_nil_check(F->pm_3244)).dsym_ != NULL))) {
f_access_of_787(F->up, (*(P2001)rt_nil_check(F->pm_3244)).dsym_, &F->v_3247);
f_copy_code_645(F->up, (*(P2001)rt_nil_check(F->pm_3244)).t_, (*(P141)rt_nil_check(F->v_3247)), &F->lv_3248);
F->parts_3246 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->parts_3246)), rt_g_lit(" p_.", 4)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3244)).cfield_))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->lv_3248))), one_rt_gstr(59)));
} else if ((F->a_3245 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), cat_rt_gstr(rt_g_lit("no actual parameter for ", 24), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3244)).name_))));
} else if ((G_NV((*(P2001)rt_nil_check(F->pm_3244)).mode_) == ((rt_int)1LL))) {
f_gexpr_850(F->up, F->a_3245, (*(P2001)rt_nil_check(F->pm_3244)).t_, &F->vt_3252, &F->v_3247);
f_check_type_508(F->up, F->vt_3252, (*(P2001)rt_nil_check(F->pm_3244)).t_, G_NV((*(P175)rt_nil_check(F->e_1230)).line_));
F->parts_3246 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->parts_3246)), rt_g_lit(" p_.", 4)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3244)).cfield_))), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->v_3247))), one_rt_gstr(59)));
} else {
f_lvalue_806(F->up, F->a_3245, &F->lv_3248, &F->lt_3253, &F->lc_3254, &F->ro_3255);
 (void)rt_range(F->ro_3255, 0, 1);
if (G_NV(F->ro_3255)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1230)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3244)).name_)), rt_g_lit(" needs a variable", 17)));
}
f_check_type_508(F->up, F->lt_3253, (*(P2001)rt_nil_check(F->pm_3244)).t_, G_NV((*(P175)rt_nil_check(F->e_1230)).line_));
F->parts_3246 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->parts_3246)), rt_g_lit(" p_.", 4)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3244)).cfield_))), rt_g_lit(" = &", 4)), (*(P141)rt_nil_check(F->lv_3248))), one_rt_gstr(59)));
}
F->pm_3244 = (*(P2001)rt_nil_check(F->pm_3244)).next_;
}
L_end_3259: ;
if ((((*(P118)rt_nil_check(F->y_3242)).members_ != NULL) && ((*(P118)rt_nil_check(F->y_3242)).members_ != F->up->cur_task_212))) {
if ((F->ix_3256 != NULL)) {
f_act_path_i_1189(F->up, (*(P118)rt_nil_check(F->y_3242)).members_, (*(P141)rt_nil_check(F->i_3251)), &F->act_3250);
} else {
f_act_path_1185(F->up, (*(P118)rt_nil_check(F->y_3242)).members_, &F->act_3250);
}
F->parts_3246 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->parts_3246)), rt_g_lit(" if (!rt_is_active(&", 20)), (*(P141)rt_nil_check(F->act_3250))), rt_g_lit(")) rt_raise(RT_X_TASKING);", 26)));
}
(*F->t_1232) = F->up->ty_void_162;
(*F->r_1233) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->parts_3246)), rt_g_lit(" rt_entry_call(&", 16)), (*(P141)rt_nil_check(F->ent_3249))), rt_g_lit(", &p_); })", 10)));
ret_:

  return;
}

static void f_other_attr_1239(struct f_greenc_1fr *up_, P175 e_1235, P118 y_1236, P123 *t_1237, P141 *r_1238) {
  struct f_other_attr_1239fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1235 = e_1235;
F->y_1236 = y_1236;
F->t_1237 = t_1237;
F->r_1238 = r_1238;
F->a_3260 = cp_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1235)).name_)));
F->p_3261 = NULL;
if (((G_NV((*(P118)rt_nil_check(F->y_1236)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3260, rt_g_lit("INDEX", 5)))) {
if (((*(P118)rt_nil_check(F->y_1236)).c_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1235)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1236)).name_)), rt_g_lit(" is not a task family", 21)));
}
f_own_index_1177(F->up, F->y_1236, &F->p_3261);
(*F->t_1237) = F->up->ty_int_157;
if (((*(P118)rt_nil_check(F->y_1236)).t_ != NULL)) {
(*F->t_1237) = (*(P118)rt_nil_check(F->y_1236)).t_;
}
(*F->r_1238) = F->p_3261;
} else if (((G_NV((*(P118)rt_nil_check(F->y_1236)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3260, rt_g_lit("ACTIVE", 6)))) {
f_act_path_1185(F->up, F->y_1236, &F->p_3261);
(*F->t_1237) = F->up->ty_bool_158;
(*F->r_1238) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P141)rt_nil_check(F->p_3261))), one_rt_gstr(41)));
} else if (((G_NV((*(P118)rt_nil_check(F->y_1236)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3260, rt_g_lit("PRIORITY", 8)))) {
f_act_path_1185(F->up, F->y_1236, &F->p_3261);
(*F->t_1237) = F->up->ty_int_157;
(*F->r_1238) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P141)rt_nil_check(F->p_3261))), one_rt_gstr(41)));
} else if (((G_NV((*(P118)rt_nil_check(F->y_1236)).kind_) == ((rt_int)9LL)) && eq_rt_gstr(F->a_3260, rt_g_lit("CLOCK", 5)))) {
f_act_path_1185(F->up, F->y_1236, &F->p_3261);
(*F->t_1237) = F->up->ty_time_172;
(*F->r_1238) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P141)rt_nil_check(F->p_3261))), one_rt_gstr(41)));
} else if (((G_NV((*(P118)rt_nil_check(F->y_1236)).kind_) == ((rt_int)10LL)) && eq_rt_gstr(F->a_3260, rt_g_lit("COUNT", 5)))) {
if (((*(P118)rt_nil_check(F->y_1236)).members_ != F->up->cur_task_212)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1235)).line_), rt_g_lit("E'COUNT is allowed only in the body of the task (RM79 9.9)", 58));
}
f_entry_path_1193(F->up, F->y_1236, rt_g_lit("", 0), &F->p_3261);
(*F->t_1237) = F->up->ty_int_157;
(*F->r_1238) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_entry_count(&", 16), (*(P141)rt_nil_check(F->p_3261))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1235)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), F->a_3260), rt_g_lit(" is not handled here", 20)));
(*F->t_1237) = F->up->ty_int_157;
(*F->r_1238) = NULL;
}
ret_:

  return;
}

static void f_member_attr_1243(struct f_greenc_1fr *up_, P175 e_1240, P123 *t_1241, P141 *r_1242) {
  struct f_member_attr_1243fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1240 = e_1240;
F->t_1241 = t_1241;
F->r_1242 = r_1242;
F->y_3262 = NULL;
F->ix_3263 = NULL;
F->i_3264 = NULL;
F->p_3265 = NULL;
F->vt_3266 = NULL;
f_task_of_1174(F->up, (*(P175)rt_nil_check(F->e_1240)).a_, &F->y_3262, &F->ix_3263);
f_gexpr_850(F->up, F->ix_3263, F->up->ty_int_157, &F->vt_3266, &F->i_3264);
f_act_path_i_1189(F->up, F->y_3262, (*(P141)rt_nil_check(F->i_3264)), &F->p_3265);
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1240)).name_)), rt_g_lit("ACTIVE", 6))) {
(*F->t_1241) = F->up->ty_bool_158;
(*F->r_1242) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_is_active(&", 14), (*(P141)rt_nil_check(F->p_3265))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1240)).name_)), rt_g_lit("PRIORITY", 8))) {
(*F->t_1241) = F->up->ty_int_157;
(*F->r_1242) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_priority(&", 13), (*(P141)rt_nil_check(F->p_3265))), one_rt_gstr(41)));
} else if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1240)).name_)), rt_g_lit("CLOCK", 5))) {
(*F->t_1241) = F->up->ty_time_172;
(*F->r_1242) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_task_clock(&", 17), (*(P141)rt_nil_check(F->p_3265))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1240)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("attribute ", 10), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1240)).name_))), rt_g_lit(" is not handled for a family member", 35)));
(*F->t_1241) = F->up->ty_int_157;
(*F->r_1242) = NULL;
}
ret_:

  return;
}

static void f_task_builtin_1249(struct f_greenc_1fr *up_, rt_gstr name_1244, P175 args_1245, rt_int line_1246, P123 *t_1247, P141 *r_1248) {
  struct f_task_builtin_1249fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1244 = cp_rt_gstr(name_1244);
F->args_1245 = args_1245;
F->line_1246 = line_1246;
F->t_1247 = t_1247;
F->r_1248 = r_1248;
F->vt_3267 = NULL;
F->v_3268 = NULL;
(*F->t_1247) = F->up->ty_void_162;
if (eq_rt_gstr(F->name_1244, rt_g_lit("SET_PRIORITY", 12))) {
f_gexpr_850(F->up, F->args_1245, F->up->ty_int_157, &F->vt_3267, &F->v_3268);
(*F->r_1248) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_set_priority(rt_me(), ", 25), (*(P141)rt_nil_check(F->v_3268))), one_rt_gstr(41)));
} else {
f_fail_267(F->up, F->line_1246, cat_rt_gstr(F->name_1244, rt_g_lit(" is not declared", 16)));
(*F->r_1248) = NULL;
}
ret_:

  return;
}

static void f_accept_entry_1252(struct f_greenc_1fr *up_, P175 s_1250, P118 *r_1251) {
  struct f_accept_entry_1252fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1250 = s_1250;
F->r_1251 = r_1251;
F->z_3269 = NULL;
F->found_3270 = NULL;
F->any_3271 = NULL;
F->ok_3272 = INT_MIN;
if (((F->up->func_sym_143 != NULL) && (F->up->cur_task_212 != NULL))) {
F->z_3269 = (*(P118)rt_nil_check(F->up->cur_task_212)).members_;
while ((F->z_3269 != NULL)) {
if ((((G_NV((*(P118)rt_nil_check(F->z_3269)).kind_) == ((rt_int)4LL)) || (G_NV((*(P118)rt_nil_check(F->z_3269)).kind_) == ((rt_int)3LL))) && eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3269)).cname_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->func_sym_143)).cname_))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1250)).line_), rt_g_lit("an accept statement cannot be in a visible subprogram of the task (RM79 9.5)", 76));
}
F->z_3269 = (*(P118)rt_nil_check(F->z_3269)).mnext_;
}
L_end_3273: ;
}
F->z_3269 = ({ A117 ix3274 = F->up->table_120; ix3274.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1250)).name_))), ix3274.lo, ix3274.hi) - ix3274.lo]; });
while ((F->z_3269 != NULL)) {
if (((eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3269)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1250)).name_))) && (G_NV((*(P118)rt_nil_check(F->z_3269)).kind_) == ((rt_int)10LL))) && f_same_task_446(F->up, (*(P118)rt_nil_check(F->z_3269)).members_, F->up->cur_task_212))) {
F->any_3271 = F->z_3269;
f_accept_conforms_1256(F->up, F->s_1250, F->z_3269, &F->ok_3272);
 (void)rt_range(F->ok_3272, 0, 1);
if ((G_NV(F->ok_3272) && (F->found_3270 == NULL))) {
F->found_3270 = F->z_3269;
}
}
F->z_3269 = (*(P118)rt_nil_check(F->z_3269)).chain_;
}
L_end_3275: ;
if (((F->found_3270 == NULL) && (F->any_3271 != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1250)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the formal part of accept ", 26), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1250)).name_))), rt_g_lit(" does not repeat that of the entry (RM79 9.5)", 45)));
}
(*F->r_1251) = F->found_3270;
ret_:

  return;
}

static void f_accept_conforms_1256(struct f_greenc_1fr *up_, P175 s_1253, P118 y_1254, int *ok_1255) {
  struct f_accept_conforms_1256fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1253 = s_1253;
F->y_1254 = y_1254;
F->ok_1255 = ok_1255;
F->f_3276 = NULL;
F->f_3276 = (*(P175)rt_nil_check(F->s_1253)).a_;
F->pm_3277 = NULL;
F->pm_3277 = (*(P118)rt_nil_check(F->y_1254)).params_;
F->t_3278 = NULL;
F->c_3279 = NULL;
(*F->ok_1255) = 1;
if ((F->f_3276 == NULL)) {
goto ret_;
}
while (((F->f_3276 != NULL) && (F->pm_3277 != NULL))) {
f_resolve_529(F->up, (*(P175)rt_nil_check(F->f_3276)).a_, &F->t_3278, &F->c_3279);
if (((!f_same_463(F->up, F->t_3278, (*(P2001)rt_nil_check(F->pm_3277)).t_)) || (G_NV((*(P175)rt_nil_check(F->f_3276)).ival_) != G_NV((*(P2001)rt_nil_check(F->pm_3277)).mode_)))) {
(*F->ok_1255) = 0;
goto ret_;
}
F->f_3276 = (*(P175)rt_nil_check(F->f_3276)).next_;
F->pm_3277 = (*(P2001)rt_nil_check(F->pm_3277)).next_;
}
L_end_3280: ;
(*F->ok_1255) = ((F->f_3276 == NULL) && (F->pm_3277 == NULL));
ret_:

  return;
}

static void f_gen_accept_1258(struct f_greenc_1fr *up_, P175 s_1257) {
  struct f_gen_accept_1258fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1257 = s_1257;
F->y_3281 = NULL;
F->saved_ax_3282 = NULL;
F->ent_3283 = NULL;
F->ep_3284 = NULL;
F->xf_3285 = NULL;
F->x_3286 = NULL;
F->pm_3287 = NULL;
F->f_3288 = NULL;
F->f_3288 = (*(P175)rt_nil_check(F->s_1257)).a_;
F->p_3289 = NULL;
f_accept_entry_1252(F->up, F->s_1257, &F->y_3281);
if ((F->y_3281 == NULL)) {
F->y_3281 = f_lookup_entry_449(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1257)).name_)), F->up->cur_task_212);
}
if (((F->y_3281 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_3281)).kind_) != ((rt_int)10LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1257)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->s_1257)).name_)), rt_g_lit(" is not an entry", 16)));
}
if ((!f_same_task_446(F->up, (*(P118)rt_nil_check(F->y_3281)).members_, F->up->cur_task_212))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1257)).line_), rt_g_lit("a task accepts only its own entries (RM79 9.5)", 46));
}
f_entry_path_1193(F->up, F->y_3281, rt_g_lit("", 0), &F->ent_3283);
f_member_slot_1262(F->up, F->y_3281, F->s_1257, &F->ent_3283);
if ((G_NV((*(P175)rt_nil_check(F->s_1257)).flag_) == ((rt_int)0LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_accept_begin(&", 19), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit("); rt_accept_end(&", 18)), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit(", 0, 0); }", 10)));
goto ret_;
}
f_new_name_249(F->up, rt_g_lit("ep", 2), &F->ep_3284);
f_new_name_249(F->up, rt_g_lit("xf", 2), &F->xf_3285);
f_new_name_249(F->up, rt_g_lit("x", 1), &F->x_3286);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ struct ", 9), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3281)).cname_))), rt_g_lit("p *", 3)), (*(P141)rt_nil_check(F->ep_3284))), rt_g_lit(" = rt_accept_begin(&", 20)), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit(");", 2)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_frame ", 9), (*(P141)rt_nil_check(F->xf_3285))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (RT_TRY(", 11), (*(P141)rt_nil_check(F->xf_3285))), rt_g_lit(")) {", 4)));
f_push_cleanup_743(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->xf_3285))), rt_g_lit("); rt_accept_end(&", 18)), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit(", 0, 0);", 8)));
f_open_scope_487(F->up);
F->pm_3287 = (*(P118)rt_nil_check(F->y_3281)).params_;
while ((F->pm_3287 != NULL)) {
if ((G_NV((*(P2001)rt_nil_check(F->pm_3287)).mode_) == ((rt_int)1LL))) {
F->p_3289 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P2001)rt_nil_check(F->pm_3287)).name_);
(*(P118)rt_nil_check(F->p_3289)).ro_ = 1;
(*(P118)rt_nil_check(F->p_3289)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(40), (*(P141)rt_nil_check(F->ep_3284))), rt_g_lit("->", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3287)).cfield_))), one_rt_gstr(41)));
} else {
F->p_3289 = f_new_sym_491(F->up, ((rt_int)1LL), (*(P2001)rt_nil_check(F->pm_3287)).name_);
(*(P118)rt_nil_check(F->p_3289)).access_path_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*", 2), (*(P141)rt_nil_check(F->ep_3284))), rt_g_lit("->", 2)), (*(P141)rt_nil_check((*(P2001)rt_nil_check(F->pm_3287)).cfield_))), one_rt_gstr(41)));
}
if ((F->f_3288 != NULL)) {
(*(P118)rt_nil_check(F->p_3289)).name_ = (*(P175)rt_nil_check(F->f_3288)).name_;
F->f_3288 = (*(P175)rt_nil_check(F->f_3288)).next_;
}
(*(P118)rt_nil_check(F->p_3289)).t_ = (*(P2001)rt_nil_check(F->pm_3287)).t_;
(*(P118)rt_nil_check(F->p_3289)).c_ = (*(P2001)rt_nil_check(F->pm_3287)).c_;
f_define_486(F->up, F->p_3289, G_NV((*(P175)rt_nil_check(F->s_1257)).line_));
F->pm_3287 = (*(P2001)rt_nil_check(F->pm_3287)).next_;
}
L_end_3290: ;
F->up->accept_depth_213 = rt_add(G_NV(F->up->accept_depth_213), ((rt_int)1LL));
F->saved_ax_3282 = F->up->accept_exits_150;
F->up->accept_exits_150 = F->up->exits_146;
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_1257)).b_);
F->up->accept_exits_150 = F->saved_ax_3282;
F->up->accept_depth_213 = rt_sub(G_NV(F->up->accept_depth_213), ((rt_int)1LL));
f_close_scope_488(F->up);
f_pop_cleanup_744(F->up);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->xf_3285))), rt_g_lit("); rt_accept_end(&", 18)), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit(", 0, 0);", 8)));
f_emit_273(F->up, rt_g_lit("} else {", 8));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("RT_POP(", 7), (*(P141)rt_nil_check(F->xf_3285))), rt_g_lit("); int ", 7)), (*(P141)rt_nil_check(F->x_3286))), rt_g_lit(" = rt_xcur; rt_accept_end(&", 27)), (*(P141)rt_nil_check(F->ent_3283))), rt_g_lit(", 1, ", 5)), rt_g_lit("rt_g_partner_exc(", 17)), (*(P141)rt_nil_check(F->x_3286))), rt_g_lit(")); rt_raise(", 13)), (*(P141)rt_nil_check(F->x_3286))), rt_g_lit(");", 2)));
f_emit_273(F->up, rt_g_lit("}", 1));
f_emit_273(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_member_slot_1262(struct f_greenc_1fr *up_, P118 y_1259, P175 s_1260, P141 *ent_1261) {
  struct f_member_slot_1262fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1259 = y_1259;
F->s_1260 = s_1260;
F->ent_1261 = ent_1261;
F->vt_3291 = NULL;
F->v_3292 = NULL;
if (((*(P118)rt_nil_check(F->y_1259)).c_ != NULL)) {
if (((*(P175)rt_nil_check(F->s_1260)).c_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1260)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1259)).name_)), rt_g_lit(" is an entry family: accept ", 28)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1259)).name_))), rt_g_lit("(I)", 3)));
}
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->s_1260)).c_, NULL, &F->vt_3291, &F->v_3292);
f_entry_family_slot_1209(F->up, F->y_1259, (*(P141)rt_nil_check((*F->ent_1261))), (*(P141)rt_nil_check(F->v_3292)), &(*F->ent_1261));
} else if (((*(P175)rt_nil_check(F->s_1260)).c_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1260)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1259)).name_)), rt_g_lit(" is not an entry family", 23)));
}
ret_:

  return;
}

static void f_gen_delay_ticks_1265(struct f_greenc_1fr *up_, P175 e_1263, P141 *r_1264) {
  struct f_gen_delay_ticks_1265fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1263 = e_1263;
F->r_1264 = r_1264;
F->vt_3293 = NULL;
F->v_3294 = NULL;
f_gexpr_850(F->up, F->e_1263, F->up->ty_time_172, &F->vt_3293, &F->v_3294);
f_check_type_508(F->up, F->vt_3293, F->up->ty_time_172, G_NV((*(P175)rt_nil_check(F->e_1263)).line_));
(*F->r_1264) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(rt_int)llround(", 16), (*(P141)rt_nil_check(F->v_3294))), one_rt_gstr(41)));
ret_:

  return;
}

static void f_gen_select_1267(struct f_greenc_1fr *up_, P175 s_1266) {
  struct f_gen_select_1267fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1266 = s_1266;
F->alt_3295 = NULL;
F->alt_3295 = (*(P175)rt_nil_check(F->s_1266)).a_;
F->n_3296 = INT64_MIN;
F->n_3296 = ((rt_int)0LL);
F->i_3297 = INT64_MIN;
F->has_delay_3298 = INT_MIN;
F->has_delay_3298 = 0;
F->has_accept_3299 = INT_MIN;
F->has_accept_3299 = 0;
F->al_3300 = NULL;
F->w_3301 = NULL;
F->g_3302 = NULL;
F->ent_3303 = NULL;
F->ticks_3304 = NULL;
F->vt_3305 = NULL;
F->y_3306 = NULL;
f_new_name_249(F->up, rt_g_lit("al", 2), &F->al_3300);
f_new_name_249(F->up, rt_g_lit("w", 1), &F->w_3301);
while ((F->alt_3295 != NULL)) {
F->n_3296 = rt_add(G_NV(F->n_3296), ((rt_int)1LL));
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).kind_) == ((rt_int)32LL))) {
F->has_delay_3298 = 1;
} else {
F->has_accept_3299 = 1;
}
F->alt_3295 = (*(P175)rt_nil_check(F->alt_3295)).next_;
}
L_end_3307: ;
if (((G_NV((*(P175)rt_nil_check(F->s_1266)).flag_) == ((rt_int)1LL)) && G_NV(F->has_delay_3298))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1266)).line_), rt_g_lit("a select cannot have both delay alternatives and an else part (RM79 9.7)", 72));
}
if ((!G_NV(F->has_accept_3299))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1266)).line_), rt_g_lit("a select needs at least one accept alternative (RM79 9.7)", 57));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ rt_alt ", 9), (*(P141)rt_nil_check(F->al_3300))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(rt_add(G_NV(F->n_3296), ((rt_int)1LL))))), rt_g_lit("]; int open_ = 0;", 17)));
F->alt_3295 = (*(P175)rt_nil_check(F->s_1266)).a_;
F->i_3297 = ((rt_int)0LL);
while ((F->alt_3295 != NULL)) {
F->g_3302 = f_mk_246(F->up, rt_g_lit("1", 1));
if (((*(P175)rt_nil_check(F->alt_3295)).a_ != NULL)) {
f_condition_890(F->up, (*(P175)rt_nil_check(F->alt_3295)).a_, F->up->ty_bool_158, &F->vt_3305, &F->g_3302);
f_check_type_508(F->up, F->vt_3305, F->up->ty_bool_158, G_NV((*(P175)rt_nil_check(F->alt_3295)).line_));
}
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).kind_) == ((rt_int)34LL))) {
f_accept_entry_1252(F->up, (*(P175)rt_nil_check(F->alt_3295)).b_, &F->y_3306);
if ((F->y_3306 == NULL)) {
F->y_3306 = f_lookup_entry_449(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).name_)), F->up->cur_task_212);
}
if (((F->y_3306 == NULL) || (G_NV((*(P118)rt_nil_check(F->y_3306)).kind_) != ((rt_int)10LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->alt_3295)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).name_)), rt_g_lit(" is not an entry", 16)));
}
f_entry_path_1193(F->up, F->y_3306, rt_g_lit("", 0), &F->ent_3303);
f_member_slot_1262(F->up, F->y_3306, (*(P175)rt_nil_check(F->alt_3295)).b_, &F->ent_3303);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->al_3300)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3297)))), rt_g_lit("] = (rt_alt){RT_ALT_ACCEPT, (", 29)), (*(P141)rt_nil_check(F->g_3302))), rt_g_lit("), &", 4)), (*(P141)rt_nil_check(F->ent_3303))), rt_g_lit(", NULL, 0};", 11)));
} else {
f_gen_delay_ticks_1265(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).a_, &F->ticks_3304);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->al_3300)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3297)))), rt_g_lit("] = (rt_alt){RT_ALT_DELAY, (", 28)), (*(P141)rt_nil_check(F->g_3302))), rt_g_lit("), NULL, NULL, ", 15)), (*(P141)rt_nil_check(F->ticks_3304))), rt_g_lit("};", 2)));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("open_ |= ", 9), (*(P141)rt_nil_check(F->al_3300))), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3297)))), rt_g_lit("].open;", 7)));
F->i_3297 = rt_add(G_NV(F->i_3297), ((rt_int)1LL));
F->alt_3295 = (*(P175)rt_nil_check(F->alt_3295)).next_;
}
L_end_3308: ;
if ((G_NV((*(P175)rt_nil_check(F->s_1266)).flag_) == ((rt_int)1LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->al_3300)), one_rt_gstr(91)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3296)))), rt_g_lit("] = (rt_alt){RT_ALT_ELSE, 1, NULL, NULL, 0};", 44)));
F->n_3296 = rt_add(G_NV(F->n_3296), ((rt_int)1LL));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (!open_) rt_raise(rt_exc(", 28), f_q_264(F->up)), rt_g_lit("SELECT_ERROR", 12)), f_q_264(F->up)), rt_g_lit("));", 3)));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("int ", 4), (*(P141)rt_nil_check(F->w_3301))), rt_g_lit(" = rt_wait(", 11)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3296)))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check(F->al_3300))), rt_g_lit(");", 2)));
F->alt_3295 = (*(P175)rt_nil_check(F->s_1266)).a_;
F->i_3297 = ((rt_int)0LL);
while ((F->alt_3295 != NULL)) {
if ((G_NV(F->i_3297) == ((rt_int)0LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("if (", 4), (*(P141)rt_nil_check(F->w_3301))), rt_g_lit(" == 0) {", 8)));
} else {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("} else if (", 11), (*(P141)rt_nil_check(F->w_3301))), rt_g_lit(" == ", 4)), rt_g_s2g(rt_str_of_int(G_NV(F->i_3297)))), rt_g_lit(") {", 3)));
}
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->alt_3295)).b_)).kind_) == ((rt_int)34LL))) {
f_gen_accept_1258(F->up, (*(P175)rt_nil_check(F->alt_3295)).b_);
}
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->alt_3295)).c_);
F->i_3297 = rt_add(G_NV(F->i_3297), ((rt_int)1LL));
F->alt_3295 = (*(P175)rt_nil_check(F->alt_3295)).next_;
}
L_end_3309: ;
if ((G_NV((*(P175)rt_nil_check(F->s_1266)).flag_) == ((rt_int)1LL))) {
f_emit_273(F->up, rt_g_lit("} else {", 8));
f_gen_statements_739(F->up, (*(P175)rt_nil_check(F->s_1266)).b_);
}
f_emit_273(F->up, rt_g_lit("}", 1));
f_emit_273(F->up, rt_g_lit("}", 1));
ret_:

  return;
}

static void f_family_range_1272(struct f_greenc_1fr *up_, P118 y_1268, P175 ix_1269, P141 *lo_1270, P141 *hi_1271) {
  struct f_family_range_1272fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1268 = y_1268;
F->ix_1269 = ix_1269;
F->lo_1270 = lo_1270;
F->hi_1271 = hi_1271;
F->vt_3310 = NULL;
if ((F->ix_1269 == NULL)) {
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1268)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1268)).cname_)), rt_g_lit("lo", 2)), &(*F->lo_1270));
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_1268)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1268)).cname_)), rt_g_lit("hi", 2)), &(*F->hi_1271));
} else if ((G_NV((*(P175)rt_nil_check(F->ix_1269)).kind_) == ((rt_int)14LL))) {
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->ix_1269)).a_, F->up->ty_int_157, &F->vt_3310, &(*F->lo_1270));
f_gexpr_850(F->up, (*(P175)rt_nil_check(F->ix_1269)).b_, F->up->ty_int_157, &F->vt_3310, &(*F->hi_1271));
} else {
f_gexpr_850(F->up, F->ix_1269, F->up->ty_int_157, &F->vt_3310, &(*F->lo_1270));
(*F->hi_1271) = (*F->lo_1270);
}
ret_:

  return;
}

static void f_task_statement_gen_1274(struct f_greenc_1fr *up_, P175 s_1273) {
  struct f_task_statement_gen_1274fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1273 = s_1273;
F->n_3311 = NULL;
F->ix_3312 = NULL;
F->y_3313 = NULL;
F->a_3314 = NULL;
F->d_3315 = NULL;
F->l_3316 = NULL;
F->ticks_3317 = NULL;
F->lo_3318 = NULL;
F->hi_3319 = NULL;
{ rt_int sel3320 = G_NV((*(P175)rt_nil_check(F->s_1273)).kind_);
if (0 || sel3320 == ((rt_int)32LL)) {
f_gen_delay_ticks_1265(F->up, (*(P175)rt_nil_check(F->s_1273)).a_, &F->ticks_3317);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_delay(", 9), (*(P141)rt_nil_check(F->ticks_3317))), rt_g_lit(");", 2)));
} else if (0 || sel3320 == ((rt_int)33LL)) {
if ((G_NV(F->up->accept_depth_213) > ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1273)).line_), rt_g_lit("an accept body cannot initiate a task (RM79 9.5)", 48));
}
F->n_3311 = (*(P175)rt_nil_check(F->s_1273)).a_;
while ((F->n_3311 != NULL)) {
f_task_of_1174(F->up, F->n_3311, &F->y_3313, &F->ix_3312);
f_path_at_1168(F->up, G_NV((*(P118)rt_nil_check(F->y_3313)).level_), cat_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3313)).cname_)), rt_g_lit("decl", 4)), &F->d_3315);
if ((G_NV((*(P118)rt_nil_check(F->y_3313)).level_) > ((rt_int)0LL))) {
f_link_to_790(F->up, G_NV((*(P118)rt_nil_check(F->y_3313)).level_), &F->l_3316);
} else {
F->l_3316 = f_mk_246(F->up, rt_g_lit("NULL", 4));
}
if ((f_task_length_1393(F->up, F->y_3313) > ((rt_int)0LL))) {
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("if ((rt_int)sizeof(struct ", 26), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3313)).cname_))), rt_g_lit("bodyfr) * 8 > ", 14)), rt_g_s2g(rt_str_of_int(f_task_length_1393(F->up, F->y_3313)))), rt_g_lit(") rt_raise(rt_exc(", 18)), f_q_264(F->up)), rt_g_lit("STORAGE_OVERFLOW", 16)), f_q_264(F->up)), rt_g_lit("));", 3)));
}
if (((*(P118)rt_nil_check(F->y_3313)).c_ == NULL)) {
f_act_path_1185(F->up, F->y_3313, &F->a_3314);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_create(&", 11), (*(P141)rt_nil_check(F->a_3314))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->d_3315))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3313)).cname_))), rt_g_lit("run, ", 5)), (*(P141)rt_nil_check(F->l_3316))), rt_g_lit(");", 2)));
} else {
f_family_range_1272(F->up, F->y_3313, F->ix_3312, &F->lo_3318, &F->hi_3319);
f_act_path_i_1189(F->up, F->y_3313, rt_g_lit("k_", 2), &F->a_3314);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P141)rt_nil_check(F->lo_3318))), rt_g_lit("; k_ <= ", 8)), (*(P141)rt_nil_check(F->hi_3319))), rt_g_lit("; k_++) { struct rt_famarg *g_ = rt_alloc(sizeof *g_); g_->up = ", 64)), (*(P141)rt_nil_check(F->l_3316))), rt_g_lit("; g_->i = k_; rt_create(&", 25)), (*(P141)rt_nil_check(F->a_3314))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->d_3315))), rt_g_lit(", ", 2)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_3313)).cname_))), rt_g_lit("run, g_); }", 11)));
}
F->n_3311 = (*(P175)rt_nil_check(F->n_3311)).next_;
}
L_end_3321: ;
} else if (0 || sel3320 == ((rt_int)34LL)) {
f_gen_accept_1258(F->up, F->s_1273);
} else if (0 || sel3320 == ((rt_int)35LL)) {
f_gen_select_1267(F->up, F->s_1273);
} else if (0 || sel3320 == ((rt_int)36LL)) {
F->n_3311 = (*(P175)rt_nil_check(F->s_1273)).a_;
while ((F->n_3311 != NULL)) {
f_task_of_1174(F->up, F->n_3311, &F->y_3313, &F->ix_3312);
if (((*(P118)rt_nil_check(F->y_3313)).c_ == NULL)) {
f_act_path_1185(F->up, F->y_3313, &F->a_3314);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_abort(&", 12), (*(P141)rt_nil_check(F->a_3314))), rt_g_lit(");", 2)));
} else {
f_family_range_1272(F->up, F->y_3313, F->ix_3312, &F->lo_3318, &F->hi_3319);
f_act_path_i_1189(F->up, F->y_3313, rt_g_lit("k_", 2), &F->a_3314);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("for (rt_int k_ = ", 17), (*(P141)rt_nil_check(F->lo_3318))), rt_g_lit("; k_ <= ", 8)), (*(P141)rt_nil_check(F->hi_3319))), rt_g_lit("; k_++) rt_g_abort(&", 20)), (*(P141)rt_nil_check(F->a_3314))), rt_g_lit(");", 2)));
}
F->n_3311 = (*(P175)rt_nil_check(F->n_3311)).next_;
}
L_end_3322: ;
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->s_1273)).line_), rt_g_lit("this statement is not handled", 29));
}
}
ret_:

  return;
}

static P175 f_root_name_1276(struct f_greenc_1fr *up_, P175 e_1275) {
  struct f_root_name_1276fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1275 = e_1275;
if ((G_NV((*(P175)rt_nil_check(F->e_1275)).kind_) == ((rt_int)5LL))) {
F->result_ = F->e_1275;
goto ret_;
} else if ((((G_NV((*(P175)rt_nil_check(F->e_1275)).kind_) == ((rt_int)9LL)) || (G_NV((*(P175)rt_nil_check(F->e_1275)).kind_) == ((rt_int)8LL))) || (G_NV((*(P175)rt_nil_check(F->e_1275)).kind_) == ((rt_int)15LL)))) {
F->result_ = f_root_name_1276(F->up, (*(P175)rt_nil_check(F->e_1275)).a_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_pure_target_1279(struct f_greenc_1fr *up_, P175 target_1277, rt_int line_1278) {
  struct f_check_pure_target_1279fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->target_1277 = target_1277;
F->line_1278 = line_1278;
F->n_3323 = NULL;
F->y_3324 = NULL;
if ((F->up->pure_sym_235 == NULL)) {
goto ret_;
}
if (G_NV(F->up->last_deref_239)) {
f_fail_267(F->up, F->line_1278, cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->pure_sym_235)).name_))), rt_g_lit(" may not change an object designated by an access value (RM79 6.5)", 66)));
}
F->n_3323 = f_root_name_1276(F->up, F->target_1277);
if ((F->n_3323 != NULL)) {
F->y_3324 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3323)).name_)));
if ((((F->y_3324 != NULL) && (G_NV((*(P118)rt_nil_check(F->y_3324)).kind_) == ((rt_int)1LL))) && (G_NV((*(P118)rt_nil_check(F->y_3324)).depth_) < G_NV(F->up->pure_depth_236)))) {
f_fail_267(F->up, F->line_1278, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->pure_sym_235)).name_))), rt_g_lit(" may not assign to ", 19)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->n_3323)).name_))), rt_g_lit(", which is not local to it (RM79 6.5)", 37)));
}
}
ret_:

  return;
}

static int f_assigns_nonlocal_1282(struct f_greenc_1fr *up_, P175 d_1280, rt_gstr name_1281) {
  struct f_assigns_nonlocal_1282fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1280 = d_1280;
F->name_1281 = cp_rt_gstr(name_1281);
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->d_1280)).d_, F->d_1280, F->name_1281)) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_scan_handlers_1289(F->up, (*(P175)rt_nil_check(F->d_1280)).e_, F->d_1280, F->name_1281);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_declares_1285(struct f_greenc_1fr *up_, P175 d_1283, rt_gstr name_1284) {
  struct f_declares_1285fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->d_1283 = d_1283;
F->name_1284 = cp_rt_gstr(name_1284);
F->p_3325 = NULL;
F->p_3325 = (*(P175)rt_nil_check(F->d_1283)).a_;
F->e_3326 = NULL;
F->e_3326 = (*(P175)rt_nil_check(F->d_1283)).c_;
while ((F->p_3325 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3325)).name_)), F->name_1284)) {
F->result_ = 1;
goto ret_;
}
F->p_3325 = (*(P175)rt_nil_check(F->p_3325)).next_;
}
L_end_3327: ;
while ((F->e_3326 != NULL)) {
if ((((*(P175)rt_nil_check(F->e_3326)).name_ != NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_3326)).name_)), F->name_1284))) {
F->result_ = 1;
goto ret_;
}
F->e_3326 = (*(P175)rt_nil_check(F->e_3326)).next_;
}
L_end_3328: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_handlers_1289(struct f_greenc_1fr *up_, P175 h_1286, P175 d_1287, rt_gstr name_1288) {
  struct f_scan_handlers_1289fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->h_1286 = h_1286;
F->d_1287 = d_1287;
F->name_1288 = cp_rt_gstr(name_1288);
F->p_3329 = NULL;
F->p_3329 = F->h_1286;
while ((F->p_3329 != NULL)) {
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->p_3329)).b_, F->d_1287, F->name_1288)) {
F->result_ = 1;
goto ret_;
}
F->p_3329 = (*(P175)rt_nil_check(F->p_3329)).next_;
}
L_end_3330: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_scan_assigns_1293(struct f_greenc_1fr *up_, P175 stmts_1290, P175 d_1291, rt_gstr name_1292) {
  struct f_scan_assigns_1293fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->stmts_1290 = stmts_1290;
F->d_1291 = d_1291;
F->name_1292 = cp_rt_gstr(name_1292);
F->s_3331 = NULL;
F->s_3331 = F->stmts_1290;
F->a_3332 = NULL;
F->r_3333 = NULL;
while ((F->s_3331 != NULL)) {
if ((G_NV((*(P175)rt_nil_check(F->s_3331)).kind_) == ((rt_int)20LL))) {
F->r_3333 = f_root_name_1276(F->up, (*(P175)rt_nil_check(F->s_3331)).a_);
if ((((F->r_3333 != NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->r_3333)).name_)), F->name_1292)) && (!f_declares_1285(F->up, F->d_1291, F->name_1292)))) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P175)rt_nil_check(F->s_3331)).kind_) == ((rt_int)22LL))) {
F->a_3332 = (*(P175)rt_nil_check(F->s_3331)).a_;
while ((F->a_3332 != NULL)) {
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->a_3332)).b_, F->d_1291, F->name_1292)) {
F->result_ = 1;
goto ret_;
}
F->a_3332 = (*(P175)rt_nil_check(F->a_3332)).next_;
}
L_end_3335: ;
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->s_3331)).b_, F->d_1291, F->name_1292)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P175)rt_nil_check(F->s_3331)).kind_) == ((rt_int)23LL))) {
F->a_3332 = (*(P175)rt_nil_check(F->s_3331)).b_;
while ((F->a_3332 != NULL)) {
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->a_3332)).b_, F->d_1291, F->name_1292)) {
F->result_ = 1;
goto ret_;
}
F->a_3332 = (*(P175)rt_nil_check(F->a_3332)).next_;
}
L_end_3336: ;
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->s_3331)).c_, F->d_1291, F->name_1292)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P175)rt_nil_check(F->s_3331)).kind_) == ((rt_int)24LL))) {
if (f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->s_3331)).b_, F->d_1291, F->name_1292)) {
F->result_ = 1;
goto ret_;
}
} else if ((G_NV((*(P175)rt_nil_check(F->s_3331)).kind_) == ((rt_int)25LL))) {
if ((f_scan_assigns_1293(F->up, (*(P175)rt_nil_check(F->s_3331)).b_, F->d_1291, F->name_1292) || f_scan_handlers_1289(F->up, (*(P175)rt_nil_check(F->s_3331)).c_, F->d_1291, F->name_1292))) {
F->result_ = 1;
goto ret_;
}
}
F->s_3331 = (*(P175)rt_nil_check(F->s_3331)).next_;
}
L_end_3334: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_check_call_rules_1296(struct f_greenc_1fr *up_, P175 e_1294, P118 y_1295) {
  struct f_check_call_rules_1296fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1294 = e_1294;
F->y_1295 = y_1295;
F->z_3337 = NULL;
F->s_3338 = NULL;
if ((((F->up->pure_sym_235 != NULL) && ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_1295)).result_)).kind_) == ((rt_int)9LL)) || G_NV((*(P118)rt_nil_check(F->y_1295)).vrp_))) && (G_NV((*(P118)rt_nil_check(F->y_1295)).depth_) < G_NV(F->up->pure_depth_236)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1294)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("function ", 9), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->up->pure_sym_235)).name_))), rt_g_lit(" may not call procedure ", 24)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1295)).name_))), rt_g_lit(": it could have side effects (RM79 6.5)", 39)));
}
if (((!G_NV((*(P118)rt_nil_check(F->y_1295)).vrp_)) || (G_NV(F->up->trial_156) > ((rt_int)0LL)))) {
goto ret_;
}
if ((!G_NV(F->up->vrp_ok_237))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1294)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1295)).name_))), rt_g_lit(" can be called only in an assignment, an initialization or a procedure call (RM79 6.5)", 86)));
}
F->s_3338 = F->up->scope_stack_122;
while ((F->s_3338 != NULL)) {
if (((((G_NV((*(P118)rt_nil_check(F->s_3338)).kind_) == ((rt_int)1LL)) && (G_NV((*(P118)rt_nil_check(F->s_3338)).depth_) <= G_NV((*(P118)rt_nil_check(F->y_1295)).depth_))) && (f_lookup_443(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->s_3338)).name_))) == F->s_3338)) && f_assigns_nonlocal_1282(F->up, (*(P118)rt_nil_check(F->y_1295)).decl_, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->s_3338)).name_))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1294)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("value-returning procedure ", 26), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1295)).name_))), rt_g_lit(" assigns ", 9)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->s_3338)).name_))), rt_g_lit(", which is visible here; it can be called only outside its scope (RM79 6.5)", 75)));
}
F->s_3338 = (*(P118)rt_nil_check(F->s_3338)).stack_;
}
L_end_3339: ;
ret_:

  return;
}

static void f_generic_p_1298(struct f_greenc_1fr *up_, P175 *res_1297) {
  struct f_generic_p_1298fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->res_1297 = res_1297;
F->x_3340 = NULL;
F->p_3341 = NULL;
F->head_3342 = NULL;
F->tail_3343 = NULL;
F->names_3344 = NULL;
F->st_3345 = NULL;
F->def_3346 = NULL;
F->sub_3347 = NULL;
F->def_name_text_3348 = NULL;
F->more_3349 = INT_MIN;
F->more_3349 = 1;
F->restr_3350 = INT_MIN;
F->mode_3351 = INT64_MIN;
f_expect_kw_342(F->up, rt_g_lit("GENERIC", 7));
F->x_3340 = f_nn_320(F->up, ((rt_int)54LL), f_cur_line_327(F->up));
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
while (G_NV(F->more_3349)) {
F->restr_3350 = 0;
if (f_at_kw_329(F->up, rt_g_lit("RESTRICTED", 10))) {
f_skip_340(F->up);
F->restr_3350 = 1;
}
if (f_at_kw_329(F->up, rt_g_lit("TYPE", 4))) {
f_skip_340(F->up);
F->p_3341 = f_nn_320(F->up, ((rt_int)47LL), f_cur_line_327(F->up));
(*(P175)rt_nil_check(F->p_3341)).ival_ = ((rt_int)10LL);
if (G_NV(F->restr_3350)) {
(*(P175)rt_nil_check(F->p_3341)).flag_ = ((rt_int)9LL);
}
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->p_3341)).name_);
f_append_324(F->up, &F->head_3342, &F->tail_3343, F->p_3341);
} else if ((f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_329(F->up, rt_g_lit("FUNCTION", 8)))) {
F->p_3341 = f_nn_320(F->up, ((rt_int)47LL), f_cur_line_327(F->up));
(*(P175)rt_nil_check(F->p_3341)).ival_ = ((rt_int)11LL);
if (f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9))) {
F->sub_3347 = f_nn_320(F->up, ((rt_int)44LL), f_cur_line_327(F->up));
} else {
F->sub_3347 = f_nn_320(F->up, ((rt_int)45LL), f_cur_line_327(F->up));
}
f_skip_340(F->up);
f_designator_408(F->up, &(*(P175)rt_nil_check(F->sub_3347)).name_);
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_formal_part_406(F->up, &(*(P175)rt_nil_check(F->sub_3347)).a_);
}
if (f_at_kw_329(F->up, rt_g_lit("RETURN", 6))) {
f_skip_340(F->up);
f_subtype_ind_384(F->up, &(*(P175)rt_nil_check(F->sub_3347)).b_);
}
(*(P175)rt_nil_check(F->sub_3347)).ival_ = ((rt_int)1LL);
(*(P175)rt_nil_check(F->p_3341)).name_ = (*(P175)rt_nil_check(F->sub_3347)).name_;
(*(P175)rt_nil_check(F->p_3341)).a_ = F->sub_3347;
if (f_at_kw_329(F->up, rt_g_lit("IS", 2))) {
f_skip_340(F->up);
if (f_at_kind_333(F->up, ((rt_int)6LL))) {
f_designator_408(F->up, &F->def_name_text_3348);
(*(P175)rt_nil_check(F->p_3341)).b_ = f_nn_320(F->up, ((rt_int)5LL), f_cur_line_327(F->up));
(*(P175)rt_nil_check((*(P175)rt_nil_check(F->p_3341)).b_)).name_ = F->def_name_text_3348;
} else {
f_name_p_378(F->up, &(*(P175)rt_nil_check(F->p_3341)).b_);
}
}
f_append_324(F->up, &F->head_3342, &F->tail_3343, F->p_3341);
} else {
f_id_list_350(F->up, &F->names_3344);
f_expect_op_344(F->up, rt_g_lit(":", 1));
F->mode_3351 = ((rt_int)1LL);
if (f_at_kw_329(F->up, rt_g_lit("IN", 2))) {
f_skip_340(F->up);
if (f_at_kw_329(F->up, rt_g_lit("OUT", 3))) {
f_skip_340(F->up);
F->mode_3351 = ((rt_int)2LL);
}
} else if (f_at_kw_329(F->up, rt_g_lit("OUT", 3))) {
f_skip_340(F->up);
F->mode_3351 = ((rt_int)3LL);
}
f_subtype_ind_384(F->up, &F->st_3345);
F->def_3346 = NULL;
if (f_at_op_331(F->up, rt_g_lit(":=", 2))) {
f_skip_340(F->up);
f_expr_357(F->up, &F->def_3346);
}
while ((F->names_3344 != NULL)) {
F->p_3341 = f_nn_320(F->up, ((rt_int)47LL), G_NV((*(P175)rt_nil_check(F->names_3344)).line_));
(*(P175)rt_nil_check(F->p_3341)).ival_ = ((rt_int)1LL);
(*(P175)rt_nil_check(F->p_3341)).flag_ = G_NV(F->mode_3351);
(*(P175)rt_nil_check(F->p_3341)).name_ = (*(P175)rt_nil_check(F->names_3344)).name_;
(*(P175)rt_nil_check(F->p_3341)).a_ = F->st_3345;
(*(P175)rt_nil_check(F->p_3341)).b_ = F->def_3346;
f_append_324(F->up, &F->head_3342, &F->tail_3343, F->p_3341);
F->names_3344 = (*(P175)rt_nil_check(F->names_3344)).next_;
}
L_end_3353: ;
}
F->more_3349 = f_at_op_331(F->up, rt_g_lit(";", 1));
if (G_NV(F->more_3349)) {
f_skip_340(F->up);
}
}
L_end_3352: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
if ((f_at_kw_329(F->up, rt_g_lit("PROCEDURE", 9)) || f_at_kw_329(F->up, rt_g_lit("FUNCTION", 8)))) {
f_subprogram_410(F->up, &(*(P175)rt_nil_check(F->x_3340)).b_);
} else if (f_at_kw_329(F->up, rt_g_lit("PACKAGE", 7))) {
f_package_p_416(F->up, &(*(P175)rt_nil_check(F->x_3340)).b_);
} else if (f_at_kw_329(F->up, rt_g_lit("TASK", 4))) {
f_task_p_1154(F->up, &(*(P175)rt_nil_check(F->x_3340)).b_);
} else {
f_perror_339(F->up, rt_g_lit("a generic unit is a subprogram, a package or a task", 51));
}
(*(P175)rt_nil_check(F->x_3340)).a_ = F->head_3342;
(*(P175)rt_nil_check(F->x_3340)).name_ = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_3340)).b_)).name_;
(*F->res_1297) = F->x_3340;
ret_:

  return;
}

static void f_instantiation_1301(struct f_greenc_1fr *up_, P175 x_1299, P175 *res_1300) {
  struct f_instantiation_1301fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->x_1299 = x_1299;
F->res_1300 = res_1300;
F->i_3354 = NULL;
F->head_3355 = NULL;
F->tail_3356 = NULL;
F->a_3357 = NULL;
F->formal_3358 = NULL;
F->mark_3359 = INT64_MIN;
F->more_3360 = INT_MIN;
F->more_3360 = 1;
f_expect_kw_342(F->up, rt_g_lit("IS", 2));
f_expect_kw_342(F->up, rt_g_lit("NEW", 3));
F->i_3354 = f_nn_320(F->up, ((rt_int)53LL), G_NV((*(P175)rt_nil_check(F->x_1299)).line_));
(*(P175)rt_nil_check(F->i_3354)).name_ = (*(P175)rt_nil_check(F->x_1299)).name_;
(*(P175)rt_nil_check(F->i_3354)).ival_ = G_NV((*(P175)rt_nil_check(F->x_1299)).kind_);
f_expect_id_346(F->up, &(*(P175)rt_nil_check(F->i_3354)).tag_);
while (f_at_op_331(F->up, rt_g_lit(".", 1))) {
f_skip_340(F->up);
f_expect_id_346(F->up, &F->formal_3358);
(*(P175)rt_nil_check(F->i_3354)).tag_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->i_3354)).tag_)), one_rt_gstr(46)), (*(P141)rt_nil_check(F->formal_3358))));
}
L_end_3361: ;
if (f_at_op_331(F->up, rt_g_lit("(", 1))) {
f_skip_340(F->up);
while (G_NV(F->more_3360)) {
F->formal_3358 = NULL;
F->mark_3359 = ((rt_int)0LL);
if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)2LL))) && eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("IS", 2)))) {
f_expect_id_346(F->up, &F->formal_3358);
f_skip_340(F->up);
F->mark_3359 = ((rt_int)5LL);
} else if (((f_at_kind_333(F->up, ((rt_int)1LL)) && (f_kind_at_335(F->up, ((rt_int)1LL)) == ((rt_int)3LL))) && ((eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=", 2)) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit("=:", 2))) || eq_rt_gstr(f_text_at_337(F->up, ((rt_int)1LL)), rt_g_lit(":=:", 3))))) {
f_expect_id_346(F->up, &F->formal_3358);
if (f_at_op_331(F->up, rt_g_lit("=:", 2))) {
F->mark_3359 = ((rt_int)3LL);
} else if (f_at_op_331(F->up, rt_g_lit(":=:", 3))) {
F->mark_3359 = ((rt_int)2LL);
} else {
F->mark_3359 = ((rt_int)1LL);
}
f_skip_340(F->up);
}
if ((f_at_kind_333(F->up, ((rt_int)6LL)) && (G_NV(F->mark_3359) == ((rt_int)5LL)))) {
F->a_3357 = f_nn_320(F->up, ((rt_int)5LL), f_cur_line_327(F->up));
f_designator_408(F->up, &(*(P175)rt_nil_check(F->a_3357)).name_);
} else {
f_expr_357(F->up, &F->a_3357);
}
(*(P175)rt_nil_check(F->a_3357)).formal_ = F->formal_3358;
(*(P175)rt_nil_check(F->a_3357)).flag_ = G_NV(F->mark_3359);
f_append_324(F->up, &F->head_3355, &F->tail_3356, F->a_3357);
F->more_3360 = f_at_op_331(F->up, rt_g_lit(",", 1));
if (G_NV(F->more_3360)) {
f_skip_340(F->up);
}
}
L_end_3362: ;
f_expect_op_344(F->up, rt_g_lit(")", 1));
}
f_expect_op_344(F->up, rt_g_lit(";", 1));
(*(P175)rt_nil_check(F->i_3354)).a_ = F->head_3355;
(*F->res_1300) = F->i_3354;
ret_:

  return;
}

static void f_generic_decl_1303(struct f_greenc_1fr *up_, P175 e_1302) {
  struct f_generic_decl_1303fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1302 = e_1302;
F->y_3363 = NULL;
if ((G_NV((*(P175)rt_nil_check(F->e_1302)).kind_) == ((rt_int)54LL))) {
F->y_3363 = f_new_sym_491(F->up, ((rt_int)11LL), (*(P175)rt_nil_check(F->e_1302)).name_);
(*(P118)rt_nil_check(F->y_3363)).decl_ = F->e_1302;
f_define_486(F->up, F->y_3363, G_NV((*(P175)rt_nil_check(F->e_1302)).line_));
} else if ((G_NV((*(P175)rt_nil_check(F->e_1302)).kind_) == ((rt_int)53LL))) {
f_instantiate_1345(F->up, F->e_1302);
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1302)).line_), rt_g_lit("this declaration is not handled", 31));
}
ret_:

  return;
}

static int f_is_generic_name_1305(struct f_greenc_1fr *up_, rt_gstr n_1304) {
  struct f_is_generic_name_1305fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1304 = cp_rt_gstr(n_1304);
F->y_3364 = NULL;
F->y_3364 = f_lookup_443(F->up, F->n_1304);
if ((F->y_3364 == NULL)) {
F->result_ = 0;
goto ret_;
} else if ((G_NV((*(P118)rt_nil_check(F->y_3364)).depth_) != G_NV(F->up->depth_121))) {
F->result_ = 0;
goto ret_;
}
if ((!(F->y_3364 != NULL))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (G_NV((*(P118)rt_nil_check(F->y_3364)).kind_) == ((rt_int)11LL));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static int f_instantiates_1308(struct f_greenc_1fr *up_, P175 n_1306, rt_gstr name_1307) {
  struct f_instantiates_1308fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1306 = n_1306;
F->name_1307 = cp_rt_gstr(name_1307);
F->p_3365 = NULL;
F->p_3365 = F->n_1306;
while ((F->p_3365 != NULL)) {
if (((G_NV((*(P175)rt_nil_check(F->p_3365)).kind_) == ((rt_int)53LL)) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3365)).tag_)), F->name_1307))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->p_3365)).a_, F->name_1307) || f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->p_3365)).b_, F->name_1307))) {
F->result_ = 1;
goto ret_;
} else if ((f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->p_3365)).c_, F->name_1307) || f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->p_3365)).d_, F->name_1307))) {
F->result_ = 1;
goto ret_;
} else if (f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->p_3365)).e_, F->name_1307)) {
F->result_ = 1;
goto ret_;
}
F->p_3365 = (*(P175)rt_nil_check(F->p_3365)).next_;
}
L_end_3366: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_attach_generic_body_1310(struct f_greenc_1fr *up_, P175 e_1309) {
  struct f_attach_generic_body_1310fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1309 = e_1309;
F->y_3367 = NULL;
F->y_3367 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1309)).name_)));
if ((f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->e_1309)).c_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1309)).name_))) || f_instantiates_1308(F->up, (*(P175)rt_nil_check(F->e_1309)).d_, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1309)).name_))))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1309)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("generic ", 8), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1309)).name_))), rt_g_lit(" cannot be instantiated in its own body (RM79 12.2)", 51)));
}
(*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_3367)).decl_)).c_ = F->e_1309;
F->up->generic_contexts_149 = ({ R148 *cell3368 = rt_alloc(sizeof(R148)); *cell3368 = cp_R148(({ R148 ag3369; ag3369.body_node_ = F->e_1309; ag3369.visible_ = F->up->scope_stack_122; ag3369.next_ = F->up->generic_contexts_149; ag3369; })); (P147)cell3368; });
ret_:

  return;
}

static void f_restore_generic_context_1314(struct f_greenc_1fr *up_, P175 body_node_1311, rt_int line_1312, rt_gstr inst_1313) {
  struct f_restore_generic_context_1314fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->body_node_1311 = body_node_1311;
F->line_1312 = line_1312;
F->inst_1313 = cp_rt_gstr(inst_1313);
F->ctx_3370 = NULL;
F->ctx_3370 = F->up->generic_contexts_149;
F->m_3371 = NULL;
F->z_3372 = NULL;
F->seen_3373 = INT_MIN;
while (((F->ctx_3370 != NULL) && ((*(P147)rt_nil_check(F->ctx_3370)).body_node_ != F->body_node_1311))) {
F->ctx_3370 = (*(P147)rt_nil_check(F->ctx_3370)).next_;
}
L_end_3374: ;
if ((F->ctx_3370 == NULL)) {
goto ret_;
}
F->m_3371 = (*(P147)rt_nil_check(F->ctx_3370)).visible_;
while ((F->m_3371 != NULL)) {
if ((((G_NV((*(P118)rt_nil_check(F->m_3371)).depth_) > ((rt_int)0LL)) && (G_NV((*(P118)rt_nil_check(F->m_3371)).kind_) != ((rt_int)11LL))) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3371)).name_)), F->inst_1313)))) {
F->z_3372 = ({ A117 ix3376 = F->up->table_120; ix3376.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3371)).name_))), ix3376.lo, ix3376.hi) - ix3376.lo]; });
F->seen_3373 = 0;
while ((F->z_3372 != NULL)) {
if (((G_NV((*(P118)rt_nil_check(F->z_3372)).depth_) == G_NV(F->up->depth_121)) && eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->z_3372)).name_)), (*(P141)rt_nil_check((*(P118)rt_nil_check(F->m_3371)).name_))))) {
if ((!f_distinct_overload_483(F->up, F->z_3372, F->m_3371))) {
F->seen_3373 = 1;
}
}
F->z_3372 = (*(P118)rt_nil_check(F->z_3372)).chain_;
}
L_end_3377: ;
if ((!G_NV(F->seen_3373))) {
f_copy_sym_1102(F->up, F->m_3371, &F->z_3372);
f_define_486(F->up, F->z_3372, F->line_1312);
}
}
F->m_3371 = (*(P118)rt_nil_check(F->m_3371)).stack_;
}
L_end_3375: ;
ret_:

  return;
}

static P175 f_gactual_1318(struct f_greenc_1fr *up_, P175 args_1315, rt_int nth_1316, rt_gstr name_1317) {
  struct f_gactual_1318fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->args_1315 = args_1315;
F->nth_1316 = nth_1316;
F->name_1317 = cp_rt_gstr(name_1317);
F->a_3378 = NULL;
F->a_3378 = F->args_1315;
F->i_3379 = INT64_MIN;
F->i_3379 = ((rt_int)1LL);
while ((F->a_3378 != NULL)) {
if ((((*(P175)rt_nil_check(F->a_3378)).formal_ == NULL) && (G_NV(F->i_3379) == F->nth_1316))) {
F->result_ = F->a_3378;
goto ret_;
}
if ((((*(P175)rt_nil_check(F->a_3378)).formal_ != NULL) && eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_3378)).formal_)), F->name_1317))) {
F->result_ = F->a_3378;
goto ret_;
}
if (((*(P175)rt_nil_check(F->a_3378)).formal_ == NULL)) {
F->i_3379 = rt_add(G_NV(F->i_3379), ((rt_int)1LL));
}
F->a_3378 = (*(P175)rt_nil_check(F->a_3378)).next_;
}
L_end_3380: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_copy_node_1322(struct f_greenc_1fr *up_, P175 n_1319, P141 name_1320, P175 *r_1321) {
  struct f_copy_node_1322fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1319 = n_1319;
F->name_1320 = name_1320;
F->r_1321 = r_1321;
(*F->r_1321) = f_nn_320(F->up, G_NV((*(P175)rt_nil_check(F->n_1319)).kind_), G_NV((*(P175)rt_nil_check(F->n_1319)).line_));
as_R176(&(*(P175)rt_nil_check((*F->r_1321))), (*(P175)rt_nil_check(F->n_1319)));
(*(P175)rt_nil_check((*F->r_1321))).name_ = F->name_1320;
(*(P175)rt_nil_check((*F->r_1321))).next_ = NULL;
ret_:

  return;
}

static int f_matches_formal_1326(struct f_greenc_1fr *up_, P118 y_1323, rt_gstr name_1324, P118 fs_1325) {
  struct f_matches_formal_1326fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1323 = y_1323;
F->name_1324 = cp_rt_gstr(name_1324);
F->fs_1325 = fs_1325;
if (((!eq_rt_gstr((*(P141)rt_nil_check((*(P118)rt_nil_check(F->y_1323)).name_)), F->name_1324)) || ((G_NV((*(P118)rt_nil_check(F->y_1323)).kind_) != ((rt_int)3LL)) && (G_NV((*(P118)rt_nil_check(F->y_1323)).kind_) != ((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = (f_same_types_477(F->up, (*(P118)rt_nil_check(F->y_1323)).params_, (*(P118)rt_nil_check(F->fs_1325)).params_) && f_same_463(F->up, (*(P118)rt_nil_check(F->y_1323)).result_, (*(P118)rt_nil_check(F->fs_1325)).result_));
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_actual_type_1329(struct f_greenc_1fr *up_, P175 a_1327, P118 *y_1328) {
  struct f_actual_type_1329fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1327 = a_1327;
F->y_1328 = y_1328;
(*F->y_1328) = NULL;
if ((G_NV((*(P175)rt_nil_check(F->a_1327)).kind_) == ((rt_int)5LL))) {
(*F->y_1328) = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1327)).name_)));
} else if (((G_NV((*(P175)rt_nil_check(F->a_1327)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->a_1327)).a_))) {
(*F->y_1328) = f_member_of_1097(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->a_1327)).a_), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1327)).name_)), G_NV((*(P175)rt_nil_check(F->a_1327)).line_));
}
if ((((*F->y_1328) != NULL) && (G_NV((*(P118)rt_nil_check((*F->y_1328))).kind_) != ((rt_int)5LL)))) {
(*F->y_1328) = NULL;
}
ret_:

  return;
}

static void f_actual_subprogram_1334(struct f_greenc_1fr *up_, P175 f_1330, P175 a_1331, rt_int line_1332, P118 *r_1333) {
  struct f_actual_subprogram_1334fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1330 = f_1330;
F->a_1331 = a_1331;
F->line_1332 = line_1332;
F->r_1333 = r_1333;
F->fs_3381 = NULL;
F->y_3382 = NULL;
F->name_3383 = NULL;
F->m_3384 = NULL;
(*F->r_1333) = NULL;
f_build_subprogram_675(F->up, (*(P175)rt_nil_check(F->f_1330)).a_, &F->fs_3381);
if ((G_NV((*(P175)rt_nil_check(F->a_1331)).kind_) == ((rt_int)3LL))) {
F->name_3383 = f_mk_246(F->up, f_upper_s_259(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_))));
F->y_3382 = ({ A117 ix3385 = F->up->table_120; ix3385.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check(F->name_3383))), ix3385.lo, ix3385.hi) - ix3385.lo]; });
while (((F->y_3382 != NULL) && (!f_matches_formal_1326(F->up, F->y_3382, (*(P141)rt_nil_check(F->name_3383)), F->fs_3381)))) {
F->y_3382 = (*(P118)rt_nil_check(F->y_3382)).chain_;
}
L_end_3386: ;
(*F->r_1333) = F->y_3382;
if ((((*F->r_1333) == NULL) && f_is_operator_261(F->up, (*(P141)rt_nil_check(F->name_3383))))) {
f_wrap_operation_1340(F->up, F->f_1330, (*(P141)rt_nil_check(F->name_3383)), NULL, F->line_1332, &(*F->r_1333));
}
} else if ((G_NV((*(P175)rt_nil_check(F->a_1331)).kind_) == ((rt_int)5LL))) {
F->name_3383 = (*(P175)rt_nil_check(F->a_1331)).name_;
F->y_3382 = ({ A117 ix3387 = F->up->table_120; ix3387.p[rt_index(f_hash_436(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_))), ix3387.lo, ix3387.hi) - ix3387.lo]; });
while (((F->y_3382 != NULL) && (!f_matches_formal_1326(F->up, F->y_3382, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)), F->fs_3381)))) {
F->y_3382 = (*(P118)rt_nil_check(F->y_3382)).chain_;
}
L_end_3388: ;
(*F->r_1333) = F->y_3382;
if ((((*F->r_1333) == NULL) && f_is_operator_261(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_))))) {
f_wrap_operation_1340(F->up, F->f_1330, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)), NULL, F->line_1332, &(*F->r_1333));
}
} else if (((G_NV((*(P175)rt_nil_check(F->a_1331)).kind_) == ((rt_int)9LL)) && f_is_package_1093(F->up, (*(P175)rt_nil_check(F->a_1331)).a_))) {
F->m_3384 = (*(P118)rt_nil_check(f_lookup_path_1091(F->up, f_path_of_363(F->up, (*(P175)rt_nil_check(F->a_1331)).a_)))).members_;
while (((F->m_3384 != NULL) && (!(f_matches_formal_1326(F->up, F->m_3384, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)), F->fs_3381) && (!G_NV((*(P118)rt_nil_check(F->m_3384)).hidden_)))))) {
F->m_3384 = (*(P118)rt_nil_check(F->m_3384)).mnext_;
}
L_end_3389: ;
(*F->r_1333) = F->m_3384;
} else if (((G_NV((*(P175)rt_nil_check(F->a_1331)).kind_) == ((rt_int)9LL)) && (G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).a_)).kind_) == ((rt_int)5LL)))) {
if (f_is_operator_261(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)))) {
f_wrap_operation_1340(F->up, F->f_1330, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)), NULL, F->line_1332, &(*F->r_1333));
} else {
f_wrap_operation_1340(F->up, F->f_1330, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).name_)), (*(P175)rt_nil_check((*(P175)rt_nil_check(F->a_1331)).a_)).name_, F->line_1332, &(*F->r_1333));
}
}
if (((*F->r_1333) == NULL)) {
f_fail_267(F->up, F->line_1332, cat_rt_gstr(cat_rt_gstr(rt_g_lit("no subprogram matches generic parameter ", 40), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_1330)).name_))), rt_g_lit(" (RM79 12.2)", 12)));
}
ret_:

  return;
}

static void f_wrap_operation_1340(struct f_greenc_1fr *up_, P175 f_1335, rt_gstr op_1336, P141 type_name_1337, rt_int line_1338, P118 *r_1339) {
  struct f_wrap_operation_1340fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->f_1335 = f_1335;
F->op_1336 = cp_rt_gstr(op_1336);
F->type_name_1337 = type_name_1337;
F->line_1338 = line_1338;
F->r_1339 = r_1339;
F->w_3390 = NULL;
F->p_3391 = NULL;
F->q_3392 = NULL;
F->qt_3393 = NULL;
F->ret_3394 = NULL;
F->x_3395 = NULL;
F->a1_3396 = NULL;
F->a2_3397 = NULL;
F->wname_3398 = NULL;
F->n_3399 = INT64_MIN;
F->n_3399 = ((rt_int)0LL);
F->y_3400 = NULL;
f_new_name_249(F->up, rt_g_lit("$W", 2), &F->wname_3398);
f_copy_node_1322(F->up, (*(P175)rt_nil_check(F->f_1335)).a_, F->wname_3398, &F->w_3390);
if ((G_NV((*(P175)rt_nil_check(F->w_3390)).kind_) != ((rt_int)45LL))) {
f_fail_267(F->up, F->line_1338, rt_g_lit("an operator or an attribute is the actual of a formal function (RM79 12.2)", 74));
}
F->p_3391 = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->f_1335)).a_)).a_;
while ((F->p_3391 != NULL)) {
f_copy_node_1322(F->up, F->p_3391, (*(P175)rt_nil_check(F->p_3391)).name_, &F->q_3392);
f_actual_mark_1343(F->up, (*(P175)rt_nil_check(F->p_3391)).a_, &(*(P175)rt_nil_check(F->q_3392)).a_);
if ((F->qt_3393 == NULL)) {
(*(P175)rt_nil_check(F->w_3390)).a_ = F->q_3392;
} else {
(*(P175)rt_nil_check(F->qt_3393)).next_ = F->q_3392;
}
F->qt_3393 = F->q_3392;
F->n_3399 = rt_add(G_NV(F->n_3399), ((rt_int)1LL));
F->p_3391 = (*(P175)rt_nil_check(F->p_3391)).next_;
}
L_end_3401: ;
f_actual_mark_1343(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->f_1335)).a_)).b_, &(*(P175)rt_nil_check(F->w_3390)).b_);
F->a1_3396 = f_nn_320(F->up, ((rt_int)5LL), F->line_1338);
(*(P175)rt_nil_check(F->a1_3396)).name_ = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->w_3390)).a_)).name_;
if ((F->type_name_1337 != NULL)) {
F->x_3395 = f_nn_320(F->up, ((rt_int)10LL), F->line_1338);
(*(P175)rt_nil_check(F->x_3395)).a_ = f_nn_320(F->up, ((rt_int)5LL), F->line_1338);
(*(P175)rt_nil_check((*(P175)rt_nil_check(F->x_3395)).a_)).name_ = f_mk_246(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P141)rt_nil_check(F->type_name_1337))));
(*(P175)rt_nil_check(F->x_3395)).name_ = f_mk_246(F->up, F->op_1336);
(*(P175)rt_nil_check(F->x_3395)).b_ = F->a1_3396;
} else if ((G_NV(F->n_3399) == ((rt_int)2LL))) {
F->a2_3397 = f_nn_320(F->up, ((rt_int)5LL), F->line_1338);
(*(P175)rt_nil_check(F->a2_3397)).name_ = (*(P175)rt_nil_check((*(P175)rt_nil_check((*(P175)rt_nil_check(F->w_3390)).a_)).next_)).name_;
F->x_3395 = f_binop_355(F->up, f_mk_246(F->up, F->op_1336), F->a1_3396, F->a2_3397, F->line_1338);
} else {
F->x_3395 = f_nn_320(F->up, ((rt_int)6LL), F->line_1338);
(*(P175)rt_nil_check(F->x_3395)).name_ = f_mk_246(F->up, F->op_1336);
(*(P175)rt_nil_check(F->x_3395)).a_ = F->a1_3396;
}
F->ret_3394 = f_nn_320(F->up, ((rt_int)27LL), F->line_1338);
(*(P175)rt_nil_check(F->ret_3394)).a_ = F->x_3395;
(*(P175)rt_nil_check(F->w_3390)).d_ = F->ret_3394;
(*(P175)rt_nil_check(F->w_3390)).c_ = NULL;
(*(P175)rt_nil_check(F->w_3390)).e_ = NULL;
(*(P175)rt_nil_check(F->w_3390)).ival_ = ((rt_int)0LL);
f_build_subprogram_675(F->up, F->w_3390, &F->y_3400);
f_define_486(F->up, F->y_3400, F->line_1338);
f_subprogram_body_737(F->up, F->w_3390, F->y_3400);
(*F->r_1339) = F->y_3400;
ret_:

  return;
}

static void f_actual_mark_1343(struct f_greenc_1fr *up_, P175 st_1341, P175 *r_1342) {
  struct f_actual_mark_1343fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->st_1341 = st_1341;
F->r_1342 = r_1342;
(*F->r_1342) = F->st_1341;
if ((((F->st_1341 != NULL) && (G_NV((*(P175)rt_nil_check(F->st_1341)).kind_) == ((rt_int)80LL))) && ((*(P175)rt_nil_check(F->st_1341)).tag_ == NULL))) {
if ((f_lookup_443(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_1341)).name_)))) != NULL)) {
f_copy_node_1322(F->up, F->st_1341, f_mk_246(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->st_1341)).name_)))), &(*F->r_1342));
}
}
ret_:

  return;
}

static void f_instantiate_1345(struct f_greenc_1fr *up_, P175 e_1344) {
  struct f_instantiate_1345fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1344 = e_1344;
F->g_3402 = NULL;
F->g_3402 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).tag_)));
F->gd_3403 = NULL;
F->pat_3404 = NULL;
F->f_3405 = NULL;
F->a_3406 = NULL;
F->cn_3407 = NULL;
F->rn_3408 = NULL;
F->y_3409 = NULL;
F->z_3410 = NULL;
F->fs_3411 = NULL;
F->nth_3412 = INT64_MIN;
F->nth_3412 = ((rt_int)1LL);
F->t_3413 = NULL;
F->vt_3414 = NULL;
F->c_3415 = NULL;
F->v_3416 = NULL;
F->acc_3417 = NULL;
F->x_3418 = NULL;
F->ok_3419 = INT_MIN;
F->g_3402 = f_lookup_path_1091(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).tag_)));
if (((F->g_3402 == NULL) || (G_NV((*(P118)rt_nil_check(F->g_3402)).kind_) != ((rt_int)11LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).tag_)), rt_g_lit(" is not a generic unit", 22)));
}
F->gd_3403 = (*(P118)rt_nil_check(F->g_3402)).decl_;
F->pat_3404 = (*(P175)rt_nil_check(F->gd_3403)).b_;
f_open_scope_487(F->up);
F->up->in_instance_211 = rt_add(G_NV(F->up->in_instance_211), ((rt_int)1LL));
F->f_3405 = (*(P175)rt_nil_check(F->gd_3403)).a_;
while ((F->f_3405 != NULL)) {
F->a_3406 = f_gactual_1318(F->up, (*(P175)rt_nil_check(F->e_1344)).a_, G_NV(F->nth_3412), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_)));
F->nth_3412 = rt_add(G_NV(F->nth_3412), ((rt_int)1LL));
if ((G_NV((*(P175)rt_nil_check(F->f_3405)).ival_) == ((rt_int)10LL))) {
if ((F->a_3406 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
}
f_actual_type_1329(F->up, F->a_3406, &F->y_3409);
if ((F->y_3409 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(rt_g_lit("a type is required for generic parameter ", 41), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
}
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3409)).t_)).is_restricted_) && (G_NV((*(P175)rt_nil_check(F->f_3405)).flag_) != ((rt_int)9LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a restricted type does not match the formal type ", 49), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))), rt_g_lit(", which is not restricted (RM79 12.2)", 37)));
}
f_copy_sym_1102(F->up, F->y_3409, &F->z_3410);
(*(P118)rt_nil_check(F->z_3410)).name_ = f_mk_246(F->up, cat_rt_gstr(rt_g_lit("$T_", 3), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
f_define_486(F->up, F->z_3410, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
f_copy_sym_1102(F->up, F->y_3409, &F->z_3410);
(*(P118)rt_nil_check(F->z_3410)).name_ = (*(P175)rt_nil_check(F->f_3405)).name_;
(*(P118)rt_nil_check(F->z_3410)).t_ = f_new_typ_493(F->up, G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3409)).t_)).kind_));
as_R124(&(*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3410)).t_)), (*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3409)).t_)));
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3410)).t_)).view_of_ = (*(P118)rt_nil_check(F->y_3409)).t_;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3410)).t_)).name_ = (*(P175)rt_nil_check(F->f_3405)).name_;
(*(P123)rt_nil_check((*(P118)rt_nil_check(F->z_3410)).t_)).is_restricted_ = (G_NV((*(P175)rt_nil_check(F->f_3405)).flag_) == ((rt_int)9LL));
f_define_486(F->up, F->z_3410, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
} else if ((G_NV((*(P175)rt_nil_check(F->f_3405)).ival_) == ((rt_int)11LL))) {
if ((F->a_3406 == NULL)) {
F->a_3406 = (*(P175)rt_nil_check(F->f_3405)).b_;
}
if ((F->a_3406 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(rt_g_lit("a subprogram is required for generic parameter ", 47), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
}
f_actual_subprogram_1334(F->up, F->f_3405, F->a_3406, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), &F->y_3409);
f_copy_sym_1102(F->up, F->y_3409, &F->z_3410);
(*(P118)rt_nil_check(F->z_3410)).name_ = (*(P175)rt_nil_check(F->f_3405)).name_;
f_define_486(F->up, F->z_3410, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
} else if (((G_NV((*(P175)rt_nil_check(F->f_3405)).flag_) == ((rt_int)3LL)) || (G_NV((*(P175)rt_nil_check(F->f_3405)).flag_) == ((rt_int)2LL)))) {
if ((F->a_3406 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(rt_g_lit("no actual variable for generic parameter ", 41), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
}
if (((G_NV((*(P175)rt_nil_check(F->a_3406)).flag_) != ((rt_int)0LL)) && (G_NV((*(P175)rt_nil_check(F->a_3406)).flag_) != G_NV((*(P175)rt_nil_check(F->f_3405)).flag_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the association of ", 19), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))), rt_g_lit(" does not match its mode (RM79 12.2)", 36)));
}
F->rn_3408 = f_nn_320(F->up, ((rt_int)40LL), G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
(*(P175)rt_nil_check(F->rn_3408)).name_ = (*(P175)rt_nil_check(F->f_3405)).name_;
(*(P175)rt_nil_check(F->rn_3408)).a_ = (*(P175)rt_nil_check(F->f_3405)).a_;
(*(P175)rt_nil_check(F->rn_3408)).flag_ = ((rt_int)2LL);
(*(P175)rt_nil_check(F->rn_3408)).b_ = F->a_3406;
f_decl_element_679(F->up, F->rn_3408);
} else {
if ((F->a_3406 == NULL)) {
F->a_3406 = (*(P175)rt_nil_check(F->f_3405)).b_;
}
if ((F->a_3406 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(rt_g_lit("no actual for generic parameter ", 32), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_))));
}
f_resolve_529(F->up, (*(P175)rt_nil_check(F->f_3405)).a_, &F->t_3413, &F->c_3415);
f_gexpr_850(F->up, F->a_3406, F->t_3413, &F->vt_3414, &F->v_3416);
f_check_type_508(F->up, F->vt_3414, F->t_3413, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
F->z_3410 = f_new_sym_491(F->up, ((rt_int)2LL), (*(P175)rt_nil_check(F->f_3405)).name_);
f_storage_660(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->f_3405)).name_)), F->t_3413, &F->acc_3417);
f_copy_code_645(F->up, F->t_3413, (*(P141)rt_nil_check(F->v_3416)), &F->x_3418);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->acc_3417)), rt_g_lit(" = ", 3)), (*(P141)rt_nil_check(F->x_3418))), one_rt_gstr(59)));
(*(P118)rt_nil_check(F->z_3410)).t_ = F->t_3413;
(*(P118)rt_nil_check(F->z_3410)).c_ = F->c_3415;
(*(P118)rt_nil_check(F->z_3410)).ro_ = 1;
if ((G_NV((*(P123)rt_nil_check(F->t_3413)).kind_) == ((rt_int)1LL))) {
f_manifest_525(F->up, F->a_3406, &(*(P118)rt_nil_check(F->z_3410)).mvalue_, &F->ok_3419);
 (void)rt_range(F->ok_3419, 0, 1);
(*(P118)rt_nil_check(F->z_3410)).hasmv_ = G_NV(F->ok_3419);
}
f_bind_663(F->up, F->z_3410, F->acc_3417);
f_define_486(F->up, F->z_3410, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
}
F->f_3405 = (*(P175)rt_nil_check(F->f_3405)).next_;
}
L_end_3420: ;
if (((*(P175)rt_nil_check(F->gd_3403)).c_ != NULL)) {
f_restore_generic_context_1314(F->up, (*(P175)rt_nil_check(F->gd_3403)).c_, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).name_)));
}
if (((G_NV((*(P175)rt_nil_check(F->pat_3404)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->pat_3404)).kind_) == ((rt_int)45LL)))) {
if ((G_NV((*(P175)rt_nil_check(F->pat_3404)).ival_) == ((rt_int)1LL))) {
if (((*(P175)rt_nil_check(F->gd_3403)).c_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic ", 20), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
F->pat_3404 = (*(P175)rt_nil_check(F->gd_3403)).c_;
}
f_copy_node_1322(F->up, F->pat_3404, (*(P175)rt_nil_check(F->e_1344)).name_, &F->cn_3407);
f_build_subprogram_675(F->up, F->cn_3407, &F->y_3409);
f_define_486(F->up, F->y_3409, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
f_subprogram_body_737(F->up, F->cn_3407, F->y_3409);
} else if ((G_NV((*(P175)rt_nil_check(F->pat_3404)).kind_) == ((rt_int)48LL))) {
f_copy_node_1322(F->up, F->pat_3404, (*(P175)rt_nil_check(F->e_1344)).name_, &F->cn_3407);
f_package_spec_1107(F->up, F->cn_3407);
F->y_3409 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).name_)));
if (((*(P175)rt_nil_check(F->gd_3403)).c_ != NULL)) {
f_copy_node_1322(F->up, (*(P175)rt_nil_check(F->gd_3403)).c_, (*(P175)rt_nil_check(F->e_1344)).name_, &F->cn_3407);
f_package_body_1112(F->up, F->cn_3407);
}
} else {
f_copy_node_1322(F->up, F->pat_3404, (*(P175)rt_nil_check(F->e_1344)).name_, &F->cn_3407);
f_task_spec_1211(F->up, F->cn_3407);
F->y_3409 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).name_)));
if (((*(P175)rt_nil_check(F->gd_3403)).c_ == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1344)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the body of generic task ", 25), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1344)).tag_))), rt_g_lit(" is not given before this instantiation", 39)));
}
f_copy_node_1322(F->up, (*(P175)rt_nil_check(F->gd_3403)).c_, (*(P175)rt_nil_check(F->e_1344)).name_, &F->cn_3407);
f_task_body_1215(F->up, F->cn_3407);
}
F->up->in_instance_211 = rt_sub(G_NV(F->up->in_instance_211), ((rt_int)1LL));
f_close_scope_488(F->up);
f_define_486(F->up, F->y_3409, G_NV((*(P175)rt_nil_check(F->e_1344)).line_));
ret_:

  return;
}

static P218 f_rep_of_1347(struct f_greenc_1fr *up_, P123 t_1346) {
  struct f_rep_of_1347fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1346 = t_1346;
F->r_3421 = NULL;
F->r_3421 = F->up->reps_220;
if ((F->t_1346 == NULL)) {
F->result_ = NULL;
goto ret_;
}
while ((F->r_3421 != NULL)) {
if (((*(P218)rt_nil_check(F->r_3421)).t_ == F->t_1346)) {
F->result_ = F->r_3421;
goto ret_;
}
F->r_3421 = (*(P218)rt_nil_check(F->r_3421)).next_;
}
L_end_3422: ;
if (((*(P123)rt_nil_check(F->t_1346)).view_of_ != NULL)) {
F->result_ = f_rep_of_1347(F->up, (*(P123)rt_nil_check(F->t_1346)).view_of_);
goto ret_;
} else if (((*(P123)rt_nil_check(F->t_1346)).parent_ != NULL)) {
F->result_ = f_rep_of_1347(F->up, (*(P123)rt_nil_check(F->t_1346)).parent_);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_own_rep_1350(struct f_greenc_1fr *up_, P123 t_1348, P218 *r_1349) {
  struct f_own_rep_1350fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1348 = t_1348;
F->r_1349 = r_1349;
(*F->r_1349) = F->up->reps_220;
while ((((*F->r_1349) != NULL) && ((*(P218)rt_nil_check((*F->r_1349))).t_ != F->t_1348))) {
(*F->r_1349) = (*(P218)rt_nil_check((*F->r_1349))).next_;
}
L_end_3423: ;
if (((*F->r_1349) == NULL)) {
(*F->r_1349) = ({ R219 *cell3424 = rt_alloc(sizeof(R219)); *cell3424 = cp_R219(({ R219 ag3425; ag3425.t_ = F->t_1348; ag3425.packed_ = 0; ag3425.bits_ = ((rt_int)0LL); ag3425.codes_ = NULL; ag3425.max_code_ = ((rt_int)0LL); ag3425.has_layout_ = 0; ag3425.layout_ = NULL; ag3425.layout_bits_ = ((rt_int)0LL); ag3425.coll_ = NULL; ag3425.next_ = F->up->reps_220; ag3425; })); (P218)cell3424; });
F->up->reps_220 = (*F->r_1349);
}
ret_:

  return;
}

static rt_int f_bits_for_1352(struct f_greenc_1fr *up_, rt_int n_1351) {
  struct f_bits_for_1352fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->n_1351 = n_1351;
F->b_3426 = INT64_MIN;
F->b_3426 = ((rt_int)0LL);
F->v_3427 = INT64_MIN;
F->v_3427 = ((rt_int)1LL);
while ((G_NV(F->v_3427) < F->n_1351)) {
if ((G_NV(F->v_3427) > rt_quot(INT64_MAX, ((rt_int)2LL)))) {
F->result_ = rt_add(G_NV(F->b_3426), ((rt_int)1LL));
goto ret_;
}
F->v_3427 = rt_mul(G_NV(F->v_3427), ((rt_int)2LL));
F->b_3426 = rt_add(G_NV(F->b_3426), ((rt_int)1LL));
}
L_end_3428: ;
if ((G_NV(F->b_3426) == ((rt_int)0LL))) {
F->result_ = ((rt_int)1LL);
goto ret_;
}
F->result_ = G_NV(F->b_3426);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_min_bits_1356(struct f_greenc_1fr *up_, P123 t_1353, P179 c_1354, rt_int *r_1355) {
  struct f_min_bits_1356fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1353 = t_1353;
F->c_1354 = c_1354;
F->r_1355 = r_1355;
F->p_3429 = NULL;
F->p_3429 = f_rep_of_1347(F->up, F->t_1353);
F->f_3430 = NULL;
F->n_3431 = INT64_MIN;
F->e_3432 = INT64_MIN;
F->lo_3433 = INT64_MIN;
F->hi_3434 = INT64_MIN;
(*F->r_1355) = rt_neg(((rt_int)1LL));
if (((F->p_3429 != NULL) && (G_NV((*(P123)rt_nil_check(F->t_1353)).kind_) != ((rt_int)8LL)))) {
if ((G_NV((*(P218)rt_nil_check(F->p_3429)).bits_) > ((rt_int)0LL))) {
(*F->r_1355) = G_NV((*(P218)rt_nil_check(F->p_3429)).bits_);
goto ret_;
} else if (G_NV((*(P218)rt_nil_check(F->p_3429)).has_layout_)) {
(*F->r_1355) = G_NV((*(P218)rt_nil_check(F->p_3429)).layout_bits_);
goto ret_;
}
}
{ rt_int sel3435 = G_NV((*(P123)rt_nil_check(F->t_1353)).kind_);
if (0 || sel3435 == ((rt_int)2LL)) {
(*F->r_1355) = ((rt_int)1LL);
} else if (0 || sel3435 == ((rt_int)11LL)) {
(*F->r_1355) = ((rt_int)8LL);
} else if (0 || sel3435 == ((rt_int)4LL)) {
if (((F->p_3429 != NULL) && ((*(P218)rt_nil_check(F->p_3429)).codes_ != NULL))) {
(*F->r_1355) = f_bits_for_1352(F->up, rt_add(G_NV((*(P218)rt_nil_check(F->p_3429)).max_code_), ((rt_int)1LL)));
} else {
(*F->r_1355) = f_bits_for_1352(F->up, f_list_len_326(F->up, (*(P123)rt_nil_check(F->t_1353)).lits_));
}
} else if (0 || sel3435 == ((rt_int)1LL)) {
if (((F->c_1354 != NULL) && G_NV((*(P179)rt_nil_check(F->c_1354)).hasm_))) {
F->lo_3433 = G_NV((*(P179)rt_nil_check(F->c_1354)).mlo_);
F->hi_3434 = G_NV((*(P179)rt_nil_check(F->c_1354)).mhi_);
if ((G_NV(F->lo_3433) >= ((rt_int)0LL))) {
(*F->r_1355) = f_bits_for_1352(F->up, rt_add(G_NV(F->hi_3434), ((rt_int)1LL)));
} else {
F->e_3432 = G_NV(F->hi_3434);
if ((rt_sub(rt_neg(G_NV(F->lo_3433)), ((rt_int)1LL)) > G_NV(F->e_3432))) {
F->e_3432 = rt_sub(rt_neg(G_NV(F->lo_3433)), ((rt_int)1LL));
}
(*F->r_1355) = rt_add(f_bits_for_1352(F->up, rt_add(G_NV(F->e_3432), ((rt_int)1LL))), ((rt_int)1LL));
}
} else if ((f_root_467(F->up, F->t_1353) == F->up->ty_short_168)) {
(*F->r_1355) = ((rt_int)32LL);
} else {
(*F->r_1355) = ((rt_int)64LL);
}
} else if (0 || sel3435 == ((rt_int)3LL)) {
if (((f_root_467(F->up, F->t_1353) == F->up->ty_sfloat_170) || ((G_NV((*(P123)rt_nil_check(F->t_1353)).ndigits_) > ((rt_int)0LL)) && (G_NV((*(P123)rt_nil_check(F->t_1353)).ndigits_) <= ((rt_int)6LL))))) {
(*F->r_1355) = ((rt_int)32LL);
} else {
(*F->r_1355) = ((rt_int)64LL);
}
} else if (0 || sel3435 == ((rt_int)8LL)) {
(*F->r_1355) = ((rt_int)64LL);
} else if (0 || sel3435 == ((rt_int)7LL)) {
if (((F->p_3429 != NULL) && G_NV((*(P218)rt_nil_check(F->p_3429)).packed_))) {
F->f_3430 = (*(P123)rt_nil_check(F->t_1353)).fields_;
F->n_3431 = ((rt_int)0LL);
while ((F->f_3430 != NULL)) {
f_min_bits_1356(F->up, (*(P2019)rt_nil_check(F->f_3430)).t_, (*(P2019)rt_nil_check(F->f_3430)).c_, &F->e_3432);
if ((G_NV(F->e_3432) < ((rt_int)0LL))) {
goto ret_;
}
F->n_3431 = rt_add(G_NV(F->n_3431), G_NV(F->e_3432));
F->f_3430 = (*(P2019)rt_nil_check(F->f_3430)).next_;
}
L_end_3436: ;
(*F->r_1355) = G_NV(F->n_3431);
}
} else if (0 || sel3435 == ((rt_int)6LL)) {
if (((F->c_1354 != NULL) && (G_NV((*(P179)rt_nil_check(F->c_1354)).hasm_) && (G_NV((*(P123)rt_nil_check(F->t_1353)).dims_) == ((rt_int)1LL))))) {
if (((F->p_3429 != NULL) && G_NV((*(P218)rt_nil_check(F->p_3429)).packed_))) {
f_min_bits_1356(F->up, (*(P123)rt_nil_check(F->t_1353)).elem_, (*(P123)rt_nil_check(F->t_1353)).elemcons_, &F->e_3432);
} else {
f_elem_bits_1360(F->up, (*(P123)rt_nil_check(F->t_1353)).elem_, (*(P123)rt_nil_check(F->t_1353)).elemcons_, &F->e_3432);
}
if ((G_NV(F->e_3432) >= ((rt_int)0LL))) {
F->n_3431 = rt_add(rt_sub(G_NV((*(P179)rt_nil_check(F->c_1354)).mhi_), G_NV((*(P179)rt_nil_check(F->c_1354)).mlo_)), ((rt_int)1LL));
if ((G_NV(F->n_3431) < ((rt_int)0LL))) {
F->n_3431 = ((rt_int)0LL);
}
(*F->r_1355) = rt_mul(G_NV(F->n_3431), G_NV(F->e_3432));
}
}
} else {
}
}
ret_:

  return;
}

static void f_elem_bits_1360(struct f_greenc_1fr *up_, P123 t_1357, P179 c_1358, rt_int *r_1359) {
  struct f_elem_bits_1360fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->t_1357 = t_1357;
F->c_1358 = c_1358;
F->r_1359 = r_1359;
if ((((G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)11LL)) || (G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)2LL))) || (G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)4LL)))) {
(*F->r_1359) = ((rt_int)8LL);
if (((G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)4LL)) && (f_list_len_326(F->up, (*(P123)rt_nil_check(F->t_1357)).lits_) > ((rt_int)256LL)))) {
(*F->r_1359) = ((rt_int)16LL);
}
} else if ((G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)1LL))) {
(*F->r_1359) = ((rt_int)64LL);
} else if ((((G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)3LL)) || (G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)16LL))) || (G_NV((*(P123)rt_nil_check(F->t_1357)).kind_) == ((rt_int)8LL)))) {
(*F->r_1359) = ((rt_int)64LL);
} else {
(*F->r_1359) = rt_neg(((rt_int)1LL));
}
ret_:

  return;
}

static void f_pending_addresses_1362(struct f_greenc_1fr *up_, P175 decls_1361) {
  struct f_pending_addresses_1362fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->decls_1361 = decls_1361;
F->e_3437 = NULL;
F->e_3437 = F->decls_1361;
while ((F->e_3437 != NULL)) {
if (((G_NV((*(P175)rt_nil_check(F->e_3437)).kind_) == ((rt_int)38LL)) && (G_NV((*(P175)rt_nil_check(F->e_3437)).flag_) == ((rt_int)5LL)))) {
F->up->addrs_223 = ({ R222 *cell3439 = rt_alloc(sizeof(R222)); *cell3439 = cp_R222(({ R222 ag3440; ag3440.y_ = NULL; ag3440.name_ = (*(P175)rt_nil_check(F->e_3437)).name_; ag3440.depth_ = G_NV(F->up->depth_121); ag3440.e_ = F->e_3437; ag3440.next_ = F->up->addrs_223; ag3440; })); (P221)cell3439; });
}
F->e_3437 = (*(P175)rt_nil_check(F->e_3437)).next_;
}
L_end_3438: ;
ret_:

  return;
}

static P221 f_pending_address_1364(struct f_greenc_1fr *up_, rt_gstr name_1363) {
  struct f_pending_address_1364fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1363 = cp_rt_gstr(name_1363);
F->a_3441 = NULL;
F->a_3441 = F->up->addrs_223;
while ((F->a_3441 != NULL)) {
if ((((*(P221)rt_nil_check(F->a_3441)).y_ == NULL) && ((G_NV((*(P221)rt_nil_check(F->a_3441)).depth_) == G_NV(F->up->depth_121)) && eq_rt_gstr((*(P141)rt_nil_check((*(P221)rt_nil_check(F->a_3441)).name_)), F->name_1363)))) {
F->result_ = F->a_3441;
goto ret_;
}
F->a_3441 = (*(P221)rt_nil_check(F->a_3441)).next_;
}
L_end_3442: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static P141 f_address_of_1366(struct f_greenc_1fr *up_, P118 y_1365) {
  struct f_address_of_1366fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1365 = y_1365;
F->a_3443 = NULL;
F->a_3443 = F->up->addrs_223;
while ((F->a_3443 != NULL)) {
if (((((*(P221)rt_nil_check(F->a_3443)).y_ == F->y_1365) && (F->y_1365 != NULL)) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P221)rt_nil_check(F->a_3443)).name_)), rt_g_lit("$LENGTH", 7))))) {
F->result_ = (*(P175)rt_nil_check((*(P221)rt_nil_check(F->a_3443)).e_)).tag_;
goto ret_;
}
F->a_3443 = (*(P221)rt_nil_check(F->a_3443)).next_;
}
L_end_3444: ;
F->result_ = NULL;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_static_address_1368(struct f_greenc_1fr *up_, P175 e_1367) {
  struct f_static_address_1368fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1367 = e_1367;
F->v_3445 = INT64_MIN;
F->ok_3446 = INT_MIN;
if (((*(P175)rt_nil_check(F->e_1367)).tag_ != NULL)) {
goto ret_;
}
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_1367)).b_, &F->v_3445, &F->ok_3446);
 (void)rt_range(F->ok_3446, 0, 1);
if ((!G_NV(F->ok_3446))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1367)).line_), rt_g_lit("an address is a static expression (RM79 13.5)", 45));
}
if (((G_NV(F->v_3445) < ((rt_int)0LL)) || (G_NV(F->v_3445) >= G_NV(F->up->conf_memory_size_243)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1367)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the address ", 12), rt_g_s2g(rt_str_of_int(G_NV(F->v_3445)))), rt_g_lit(" is outside the memory of the machine, 0 .. ", 44)), rt_g_s2g(rt_str_of_int(rt_sub(G_NV(F->up->conf_memory_size_243), ((rt_int)1LL))))), rt_g_lit(" (RM79 13.5, 13.7)", 18)));
}
(*(P175)rt_nil_check(F->e_1367)).tag_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("((rt_int)", 9), rt_g_s2g(rt_str_of_int(G_NV(F->v_3445)))), rt_g_lit("LL)", 3)));
ret_:

  return;
}

static void f_place_object_1373(struct f_greenc_1fr *up_, P221 a_1369, P118 y_1370, P123 t_1371, P141 *acc_1372) {
  struct f_place_object_1373fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1369 = a_1369;
F->y_1370 = y_1370;
F->t_1371 = t_1371;
F->acc_1372 = acc_1372;
F->ct_3447 = NULL;
F->x_3448 = NULL;
f_static_address_1368(F->up, (*(P221)rt_nil_check(F->a_1369)).e_);
(*(P221)rt_nil_check(F->a_1369)).y_ = F->y_1370;
if ((G_NV((*(P123)rt_nil_check(F->t_1371)).kind_) == ((rt_int)6LL))) {
goto ret_;
}
f_ctype_513(F->up, F->t_1371, &F->ct_3447);
f_new_name_249(F->up, rt_g_lit("at_", 3), &F->x_3448);
if (G_NV(F->up->in_func_139)) {
f_put_to_271(F->up, F->up->fields_buf_138, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(one_rt_gstr(32), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit(" *", 2)), (*(P141)rt_nil_check(F->x_3448))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("F->", 3), (*(P141)rt_nil_check(F->x_3448))), rt_g_lit(" = (", 4)), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit(" *)rt_g_mem(", 12)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P221)rt_nil_check(F->a_1369)).e_)).tag_))), rt_g_lit(", sizeof(", 9)), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit("));", 3)));
(*F->acc_1372) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*F->", 5), (*(P141)rt_nil_check(F->x_3448))), one_rt_gstr(41)));
(*(P118)rt_nil_check(F->y_1370)).byref_ = 1;
(*(P118)rt_nil_check(F->y_1370)).level_ = G_NV(F->up->cur_level_140);
(*(P118)rt_nil_check(F->y_1370)).access_path_ = F->x_3448;
} else {
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("static ", 7), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit(" *g_", 4)), (*(P141)rt_nil_check(F->x_3448))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("g_", 2), (*(P141)rt_nil_check(F->x_3448))), rt_g_lit(" = (", 4)), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit(" *)rt_g_mem(", 12)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P221)rt_nil_check(F->a_1369)).e_)).tag_))), rt_g_lit(", sizeof(", 9)), (*(P141)rt_nil_check(F->ct_3447))), rt_g_lit("));", 3)));
(*F->acc_1372) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(rt_g_lit("(*g_", 4), (*(P141)rt_nil_check(F->x_3448))), one_rt_gstr(41)));
(*(P118)rt_nil_check(F->y_1370)).level_ = ((rt_int)0LL);
(*(P118)rt_nil_check(F->y_1370)).access_path_ = (*F->acc_1372);
}
ret_:

  return;
}

static void f_place_components_1378(struct f_greenc_1fr *up_, P221 a_1374, P123 t_1375, rt_gstr acc_1376, rt_int line_1377) {
  struct f_place_components_1378fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->a_1374 = a_1374;
F->t_1375 = t_1375;
F->acc_1376 = cp_rt_gstr(acc_1376);
F->line_1377 = line_1377;
if ((G_NV((*(P123)rt_nil_check(F->t_1375)).dims_) > ((rt_int)1LL))) {
f_fail_267(F->up, F->line_1377, rt_g_lit("an address specification for a multi-dimensional array is not handled here", 74));
}
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("{ size_t n_ = (size_t)G_CNT(", 28), F->acc_1376), rt_g_lit(") * sizeof(*", 12)), F->acc_1376), rt_g_lit(".p); unsigned char *m_ = rt_g_mem(", 34)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P221)rt_nil_check(F->a_1374)).e_)).tag_))), rt_g_lit(", (rt_int)n_); memcpy(m_, ", 26)), F->acc_1376), rt_g_lit(".p, n_); ", 9)), F->acc_1376), rt_g_lit(".p = (void *)m_; }", 18)));
ret_:

  return;
}

static void f_representation_1380(struct f_greenc_1fr *up_, P175 e_1379) {
  struct f_representation_1380fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1379 = e_1379;
F->y_3449 = NULL;
F->y_3449 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_)));
F->p_3450 = NULL;
F->n_3451 = INT64_MIN;
F->m_3452 = INT64_MIN;
F->ok_3453 = INT_MIN;
if ((F->y_3449 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_)), rt_g_lit(" is not declared", 16)));
}
if (((G_NV((*(P118)rt_nil_check(F->y_3449)).kind_) == ((rt_int)10LL)) && ((F->up->cur_task_212 != NULL) && f_same_task_446(F->up, (*(P118)rt_nil_check(F->y_3449)).members_, F->up->cur_task_212)))) {
} else if (((G_NV((*(P118)rt_nil_check(F->y_3449)).depth_) != G_NV(F->up->depth_121)) || G_NV((*(P118)rt_nil_check(F->y_3449)).from_use_))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("a representation specification applies to an entity of the same declarative part (RM79 13)", 90));
}
if ((G_NV((*(P175)rt_nil_check(F->e_1379)).flag_) == ((rt_int)5LL))) {
f_address_spec_1391(F->up, F->e_1379, F->y_3449);
goto ret_;
}
if (((G_NV((*(P175)rt_nil_check(F->e_1379)).flag_) == ((rt_int)2LL)) && (G_NV((*(P118)rt_nil_check(F->y_3449)).kind_) == ((rt_int)9LL)))) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_1379)).b_, &F->n_3451, &F->ok_3453);
 (void)rt_range(F->ok_3453, 0, 1);
if (((!G_NV(F->ok_3453)) || (G_NV(F->n_3451) <= ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("a length specification is a positive static expression (RM79 13.2)", 66));
}
F->up->addrs_223 = ({ R222 *cell3454 = rt_alloc(sizeof(R222)); *cell3454 = cp_R222(({ R222 ag3455; ag3455.y_ = F->y_3449; ag3455.name_ = f_mk_246(F->up, rt_g_lit("$LENGTH", 7)); ag3455.depth_ = G_NV(F->n_3451); ag3455.e_ = F->e_1379; ag3455.next_ = F->up->addrs_223; ag3455; })); (P221)cell3454; });
goto ret_;
}
if ((G_NV((*(P118)rt_nil_check(F->y_3449)).kind_) != ((rt_int)5LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("this representation specification applies to a type (RM79 13.1 - 13.4)", 70));
}
f_own_rep_1350(F->up, (*(P118)rt_nil_check(F->y_3449)).t_, &F->p_3450);
{ rt_int sel3456 = G_NV((*(P175)rt_nil_check(F->e_1379)).flag_);
if (0 || sel3456 == ((rt_int)1LL)) {
if (((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3449)).t_)).kind_) != ((rt_int)6LL)) && (G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3449)).t_)).kind_) != ((rt_int)7LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("packing applies to array and record types (RM79 13.1)", 53));
} else if (G_NV((*(P218)rt_nil_check(F->p_3450)).packed_)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a type has one representation: ", 31), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_))), rt_g_lit(" is already packed (RM79 13.6)", 30)));
}
(*(P218)rt_nil_check(F->p_3450)).packed_ = 1;
} else if (0 || sel3456 == ((rt_int)2LL)) {
if ((G_NV((*(P218)rt_nil_check(F->p_3450)).bits_) > ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a type has one representation: the length of ", 45), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_))), rt_g_lit(" is already given (RM79 13.6)", 29)));
}
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_1379)).b_, &F->n_3451, &F->ok_3453);
 (void)rt_range(F->ok_3453, 0, 1);
if (((!G_NV(F->ok_3453)) || (G_NV(F->n_3451) <= ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("a length specification is a positive static expression (RM79 13.2)", 66));
}
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3449)).t_)).kind_) == ((rt_int)8LL))) {
f_new_name_249(F->up, rt_g_lit("coll_", 5), &(*(P218)rt_nil_check(F->p_3450)).coll_);
f_put_to_271(F->up, F->up->out_globals_133, cat_rt_gstr(cat_rt_gstr(rt_g_lit("static rt_int ", 14), (*(P141)rt_nil_check((*(P218)rt_nil_check(F->p_3450)).coll_))), one_rt_gstr(59)));
f_emit_273(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P218)rt_nil_check(F->p_3450)).coll_)), rt_g_lit(" = 0;", 5)));
} else {
f_min_bits_1356(F->up, (*(P118)rt_nil_check(F->y_3449)).t_, (*(P118)rt_nil_check(F->y_3449)).c_, &F->m_3452);
if ((G_NV(F->m_3452) > G_NV(F->n_3451))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the values of ", 14), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_))), rt_g_lit(" need ", 6)), rt_g_s2g(rt_str_of_int(G_NV(F->m_3452)))), rt_g_lit(" bits, more than ", 17)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3451)))), rt_g_lit(" (RM79 13.2)", 12)));
}
}
(*(P218)rt_nil_check(F->p_3450)).bits_ = G_NV(F->n_3451);
} else if (0 || sel3456 == ((rt_int)3LL)) {
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3449)).t_)).kind_) != ((rt_int)4LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("codes are given to the literals of an enumeration type (RM79 13.3)", 66));
} else if (((*(P218)rt_nil_check(F->p_3450)).codes_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a type has one representation: the codes of ", 44), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_))), rt_g_lit(" are already given (RM79 13.6)", 30)));
}
f_enum_codes_1384(F->up, F->e_1379, (*(P118)rt_nil_check(F->y_3449)).t_, F->p_3450);
} else {
if ((G_NV((*(P123)rt_nil_check((*(P118)rt_nil_check(F->y_3449)).t_)).kind_) != ((rt_int)7LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), rt_g_lit("a record representation applies to a record type (RM79 13.4)", 60));
} else if (G_NV((*(P218)rt_nil_check(F->p_3450)).has_layout_)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1379)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("a type has one representation: the layout of ", 45), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1379)).name_))), rt_g_lit(" is already given (RM79 13.6)", 29)));
}
f_record_layout_1388(F->up, F->e_1379, (*(P118)rt_nil_check(F->y_3449)).t_, F->p_3450);
}
}
ret_:

  return;
}

static void f_enum_codes_1384(struct f_greenc_1fr *up_, P175 e_1381, P123 t_1382, P218 p_1383) {
  struct f_enum_codes_1384fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1381 = e_1381;
F->t_1382 = t_1382;
F->p_1383 = p_1383;
F->it_3457 = NULL;
F->n_3458 = INT64_MIN;
F->n_3458 = f_list_len_326(F->up, (*(P123)rt_nil_check(F->t_1382)).lits_);
F->k_3459 = INT64_MIN;
F->k_3459 = ((rt_int)0LL);
F->v_3460 = INT64_MIN;
F->v_3460 = ((rt_int)0LL);
F->pos_3461 = INT64_MIN;
F->pos_3461 = ((rt_int)0LL);
F->prev_3462 = INT64_MIN;
F->prev_3462 = ((rt_int)0LL);
F->ok_3463 = INT_MIN;
F->s_3464 = NULL;
F->s_3464 = f_mk_246(F->up, rt_g_lit("", 0));
F->codes_3466.lo = ((rt_int)0LL); F->codes_3466.hi = rt_sub(G_NV(F->n_3458), ((rt_int)1LL));
F->codes_3466.lo2 = 1; F->codes_3466.hi2 = 1;
F->codes_3466.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->codes_3466));
for (rt_int i3467 = 0; i3467 < G_CNT(F->codes_3466); i3467++) F->codes_3466.p[i3467] = INT64_MIN;
F->seen_3469.lo = ((rt_int)0LL); F->seen_3469.hi = rt_sub(G_NV(F->n_3458), ((rt_int)1LL));
F->seen_3469.lo2 = 1; F->seen_3469.hi2 = 1;
F->seen_3469.p = rt_alloc(sizeof(int) * (size_t)G_CNT(F->seen_3469));
for (rt_int i3470 = 0; i3470 < G_CNT(F->seen_3469); i3470++) F->seen_3469.p[i3470] = INT_MIN;
{ rt_int lo3473 = ((rt_int)0LL), hi3474 = rt_sub(G_NV(F->n_3458), ((rt_int)1LL));
for (rt_int it3475 = lo3473; it3475 <= hi3474; it3475++) {
F->i_3472 = it3475;
(*({ A3468 *ix3476 = &(F->seen_3469); &ix3476->p[rt_index(F->i_3472, ix3476->lo, ix3476->hi) - ix3476->lo]; })) = 0;
}
}
L_end_3471: ;
if ((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).b_)).kind_) == ((rt_int)12LL))) {
F->it_3457 = (*(P175)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).b_)).a_;
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), rt_g_lit("the codes of an enumeration type are an aggregate (RM79 13.3)", 61));
}
while ((F->it_3457 != NULL)) {
if (((*(P175)rt_nil_check(F->it_3457)).a_ == NULL)) {
F->pos_3461 = G_NV(F->k_3459);
} else if ((((G_NV((*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_3457)).a_)).flag_) == ((rt_int)1LL)) || ((*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_3457)).a_)).next_ != NULL)) || ((*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_3457)).a_)).b_ != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("each literal of ", 16), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).name_))), rt_g_lit(" gets one code (RM79 13.3)", 26)));
} else {
f_static_choice_1035(F->up, (*(P175)rt_nil_check((*(P175)rt_nil_check(F->it_3457)).a_)).a_, &F->pos_3461, &F->ok_3463);
 (void)rt_range(F->ok_3463, 0, 1);
if ((!G_NV(F->ok_3463))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the choices are the literals of ", 32), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).name_))), rt_g_lit(" (RM79 13.3)", 12)));
}
}
if (((G_NV(F->pos_3461) < ((rt_int)0LL)) || (G_NV(F->pos_3461) >= G_NV(F->n_3458)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).name_)), rt_g_lit(" has ", 5)), rt_g_s2g(rt_str_of_int(G_NV(F->n_3458)))), rt_g_lit(" literals (RM79 13.3)", 21)));
} else if (G_NV(({ A3468 ix3478 = F->seen_3469; ix3478.p[rt_index(G_NV(F->pos_3461), ix3478.lo, ix3478.hi) - ix3478.lo]; }))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), rt_g_lit("a literal gets one code (RM79 13.3)", 35));
}
f_manifest_525(F->up, (*(P175)rt_nil_check(F->it_3457)).b_, &F->v_3460, &F->ok_3463);
 (void)rt_range(F->ok_3463, 0, 1);
if ((!G_NV(F->ok_3463))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), rt_g_lit("the codes are static integers (RM79 13.3)", 41));
}
(*({ A3465 *ix3479 = &(F->codes_3466); &ix3479->p[rt_index(G_NV(F->pos_3461), ix3479->lo, ix3479->hi) - ix3479->lo]; })) = G_NV(F->v_3460);
(*({ A3468 *ix3480 = &(F->seen_3469); &ix3480->p[rt_index(G_NV(F->pos_3461), ix3480->lo, ix3480->hi) - ix3480->lo]; })) = 1;
F->k_3459 = rt_add(G_NV(F->k_3459), ((rt_int)1LL));
F->it_3457 = (*(P175)rt_nil_check(F->it_3457)).next_;
}
L_end_3477: ;
if ((G_NV(F->k_3459) != G_NV(F->n_3458))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("every literal of ", 17), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1381)).name_))), rt_g_lit(" gets a code (RM79 13.3)", 24)));
}
{ rt_int lo3483 = ((rt_int)0LL), hi3484 = rt_sub(G_NV(F->n_3458), ((rt_int)1LL));
for (rt_int it3485 = lo3483; it3485 <= hi3484; it3485++) {
F->i_3482 = it3485;
if ((G_NV(({ A3465 ix3486 = F->codes_3466; ix3486.p[rt_index(F->i_3482, ix3486.lo, ix3486.hi) - ix3486.lo]; })) < ((rt_int)0LL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), rt_g_lit("the codes of an enumeration type are not negative here (RM79 13.3)", 66));
} else if ((F->i_3482 > ((rt_int)0LL))) {
if ((G_NV(({ A3465 ix3487 = F->codes_3466; ix3487.p[rt_index(F->i_3482, ix3487.lo, ix3487.hi) - ix3487.lo]; })) <= G_NV(F->prev_3462))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1381)).line_), rt_g_lit("the codes are distinct and in the order of the literals (RM79 13.3)", 67));
}
}
F->prev_3462 = G_NV(({ A3465 ix3488 = F->codes_3466; ix3488.p[rt_index(F->i_3482, ix3488.lo, ix3488.hi) - ix3488.lo]; }));
if ((F->i_3482 > ((rt_int)0LL))) {
F->s_3464 = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check(F->s_3464)), rt_g_lit(", ", 2)));
}
F->s_3464 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->s_3464)), rt_g_s2g(rt_str_of_int(G_NV(({ A3465 ix3490 = F->codes_3466; ix3490.p[rt_index(F->i_3482, ix3490.lo, ix3490.hi) - ix3490.lo]; }))))), rt_g_lit("LL", 2)));
}
}
L_end_3481: ;
(*(P218)rt_nil_check(F->p_1383)).codes_ = F->s_3464;
(*(P218)rt_nil_check(F->p_1383)).max_code_ = G_NV(F->prev_3462);
ret_:

  return;
}

static void f_record_layout_1388(struct f_greenc_1fr *up_, P175 e_1385, P123 t_1386, P218 p_1387) {
  struct f_record_layout_1388fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1385 = e_1385;
F->t_1386 = t_1386;
F->p_1387 = p_1387;
F->x_3491 = NULL;
F->x_3491 = (*(P175)rt_nil_check(F->e_1385)).d_;
F->f_3492 = NULL;
F->g_3493 = NULL;
F->u_3494 = INT64_MIN;
F->u_3494 = ((rt_int)0LL);
F->l_3495 = INT64_MIN;
F->l_3495 = ((rt_int)0LL);
F->h_3496 = INT64_MIN;
F->h_3496 = ((rt_int)0LL);
F->m_3497 = INT64_MIN;
F->m_3497 = ((rt_int)0LL);
F->top_3498 = INT64_MIN;
F->top_3498 = ((rt_int)0LL);
F->al_3499 = INT64_MIN;
F->al_3499 = ((rt_int)0LL);
F->ok_3500 = INT_MIN;
F->ok2_3501 = INT_MIN;
F->ok3_3502 = INT_MIN;
F->q_3503 = NULL;
F->q2_3504 = NULL;
F->tail_3505 = NULL;
F->su_3506 = INT64_MIN;
F->su_3506 = G_NV(F->up->conf_storage_unit_242);
if (((*(P175)rt_nil_check(F->e_1385)).c_ != NULL)) {
f_manifest_525(F->up, (*(P175)rt_nil_check(F->e_1385)).c_, &F->al_3499, &F->ok_3500);
 (void)rt_range(F->ok_3500, 0, 1);
if (((!G_NV(F->ok_3500)) || (G_NV(F->al_3499) <= ((rt_int)0LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1385)).line_), rt_g_lit("the alignment at mod N is a positive static expression (RM79 13.4)", 66));
}
}
while ((F->x_3491 != NULL)) {
F->f_3492 = (*(P123)rt_nil_check(F->t_1386)).fields_;
while (((F->f_3492 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_3492)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_)))))) {
F->f_3492 = (*(P2019)rt_nil_check(F->f_3492)).next_;
}
L_end_3508: ;
if ((F->f_3492 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1385)).name_)), rt_g_lit(" has no component ", 18)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_))), rt_g_lit(" (RM79 13.4)", 12)));
}
F->q_3503 = (*(P218)rt_nil_check(F->p_1387)).layout_;
while ((F->q_3503 != NULL)) {
if (eq_rt_gstr((*(P141)rt_nil_check((*(P2115)rt_nil_check(F->q_3503)).name_)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the place of ", 13), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_))), rt_g_lit(" is given twice (RM79 13.4)", 27)));
}
F->q_3503 = (*(P2115)rt_nil_check(F->q_3503)).next_;
}
L_end_3509: ;
f_manifest_525(F->up, (*(P175)rt_nil_check(F->x_3491)).a_, &F->u_3494, &F->ok_3500);
 (void)rt_range(F->ok_3500, 0, 1);
f_manifest_525(F->up, (*(P175)rt_nil_check(F->x_3491)).b_, &F->l_3495, &F->ok2_3501);
 (void)rt_range(F->ok2_3501, 0, 1);
f_manifest_525(F->up, (*(P175)rt_nil_check(F->x_3491)).c_, &F->h_3496, &F->ok3_3502);
 (void)rt_range(F->ok3_3502, 0, 1);
if ((!((G_NV(F->ok_3500) && G_NV(F->ok2_3501)) && G_NV(F->ok3_3502)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), rt_g_lit("the place of a component is given by static expressions (RM79 13.4)", 67));
} else if ((((G_NV(F->u_3494) < ((rt_int)0LL)) || (G_NV(F->l_3495) < ((rt_int)0LL))) || (G_NV(F->h_3496) < G_NV(F->l_3495)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), rt_g_lit("a component is at a storage unit from 0, over a range of bits from 0 (RM79 13.4)", 80));
}
f_min_bits_1356(F->up, (*(P2019)rt_nil_check(F->f_3492)).t_, (*(P2019)rt_nil_check(F->f_3492)).c_, &F->m_3497);
if ((G_NV(F->m_3497) > rt_add(rt_sub(G_NV(F->h_3496), G_NV(F->l_3495)), ((rt_int)1LL)))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("the values of ", 14), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_))), rt_g_lit(" need ", 6)), rt_g_s2g(rt_str_of_int(G_NV(F->m_3497)))), rt_g_lit(" bits, more than ", 17)), rt_g_s2g(rt_str_of_int(rt_add(rt_sub(G_NV(F->h_3496), G_NV(F->l_3495)), ((rt_int)1LL))))), rt_g_lit(" (RM79 13.4)", 12)));
}
F->q_3503 = ({ R2116 *cell3510 = rt_alloc(sizeof(R2116)); *cell3510 = cp_R2116(({ R2116 ag3511; ag3511.name_ = (*(P175)rt_nil_check(F->x_3491)).name_; ag3511.unit_ = G_NV(F->u_3494); ag3511.first_bit_ = G_NV(F->l_3495); ag3511.last_bit_ = G_NV(F->h_3496); ag3511.next_ = NULL; ag3511; })); (P2115)cell3510; });
F->q2_3504 = (*(P218)rt_nil_check(F->p_1387)).layout_;
while ((F->q2_3504 != NULL)) {
if (((rt_add(rt_mul(G_NV(F->u_3494), G_NV(F->su_3506)), G_NV(F->l_3495)) <= rt_add(rt_mul(G_NV((*(P2115)rt_nil_check(F->q2_3504)).unit_), G_NV(F->su_3506)), G_NV((*(P2115)rt_nil_check(F->q2_3504)).last_bit_))) && (rt_add(rt_mul(G_NV((*(P2115)rt_nil_check(F->q2_3504)).unit_), G_NV(F->su_3506)), G_NV((*(P2115)rt_nil_check(F->q2_3504)).first_bit_)) <= rt_add(rt_mul(G_NV(F->u_3494), G_NV(F->su_3506)), G_NV(F->h_3496))))) {
F->g_3493 = (*(P123)rt_nil_check(F->t_1386)).fields_;
while ((!eq_rt_gstr((*(P141)rt_nil_check((*(P2019)rt_nil_check(F->g_3493)).name_)), (*(P141)rt_nil_check((*(P2115)rt_nil_check(F->q2_3504)).name_))))) {
F->g_3493 = (*(P2019)rt_nil_check(F->g_3493)).next_;
}
L_end_3513: ;
if ((((*(P2019)rt_nil_check(F->f_3492)).guard_ == NULL) || ((*(P2019)rt_nil_check(F->g_3493)).guard_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->x_3491)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("components ", 11), (*(P141)rt_nil_check((*(P2115)rt_nil_check(F->q2_3504)).name_))), rt_g_lit(" and ", 5)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->x_3491)).name_))), rt_g_lit(" overlap (RM79 13.4)", 20)));
}
}
F->q2_3504 = (*(P2115)rt_nil_check(F->q2_3504)).next_;
}
L_end_3512: ;
if ((F->tail_3505 == NULL)) {
(*(P218)rt_nil_check(F->p_1387)).layout_ = F->q_3503;
} else {
(*(P2115)rt_nil_check(F->tail_3505)).next_ = F->q_3503;
}
F->tail_3505 = F->q_3503;
if ((rt_add(rt_add(rt_mul(G_NV(F->u_3494), G_NV(F->su_3506)), G_NV(F->h_3496)), ((rt_int)1LL)) > G_NV(F->top_3498))) {
F->top_3498 = rt_add(rt_add(rt_mul(G_NV(F->u_3494), G_NV(F->su_3506)), G_NV(F->h_3496)), ((rt_int)1LL));
}
F->x_3491 = (*(P175)rt_nil_check(F->x_3491)).next_;
}
L_end_3507: ;
F->f_3492 = (*(P123)rt_nil_check(F->t_1386)).fields_;
while ((F->f_3492 != NULL)) {
F->q_3503 = (*(P218)rt_nil_check(F->p_1387)).layout_;
while (((F->q_3503 != NULL) && (!eq_rt_gstr((*(P141)rt_nil_check((*(P2115)rt_nil_check(F->q_3503)).name_)), (*(P141)rt_nil_check((*(P2019)rt_nil_check(F->f_3492)).name_)))))) {
F->q_3503 = (*(P2115)rt_nil_check(F->q_3503)).next_;
}
L_end_3515: ;
if ((F->q_3503 == NULL)) {
f_min_bits_1356(F->up, (*(P2019)rt_nil_check(F->f_3492)).t_, (*(P2019)rt_nil_check(F->f_3492)).c_, &F->m_3497);
if ((G_NV(F->m_3497) < ((rt_int)0LL))) {
F->m_3497 = ((rt_int)64LL);
}
F->u_3494 = rt_quot(rt_sub(rt_add(G_NV(F->top_3498), G_NV(F->su_3506)), ((rt_int)1LL)), G_NV(F->su_3506));
F->q_3503 = ({ R2116 *cell3516 = rt_alloc(sizeof(R2116)); *cell3516 = cp_R2116(({ R2116 ag3517; ag3517.name_ = (*(P2019)rt_nil_check(F->f_3492)).name_; ag3517.unit_ = G_NV(F->u_3494); ag3517.first_bit_ = ((rt_int)0LL); ag3517.last_bit_ = rt_sub(G_NV(F->m_3497), ((rt_int)1LL)); ag3517.next_ = NULL; ag3517; })); (P2115)cell3516; });
if ((F->tail_3505 == NULL)) {
(*(P218)rt_nil_check(F->p_1387)).layout_ = F->q_3503;
} else {
(*(P2115)rt_nil_check(F->tail_3505)).next_ = F->q_3503;
}
F->tail_3505 = F->q_3503;
F->top_3498 = rt_add(rt_mul(G_NV(F->u_3494), G_NV(F->su_3506)), G_NV(F->m_3497));
}
F->f_3492 = (*(P2019)rt_nil_check(F->f_3492)).next_;
}
L_end_3514: ;
(*(P218)rt_nil_check(F->p_1387)).has_layout_ = 1;
(*(P218)rt_nil_check(F->p_1387)).layout_bits_ = rt_mul(rt_quot(rt_sub(rt_add(G_NV(F->top_3498), G_NV(F->su_3506)), ((rt_int)1LL)), G_NV(F->su_3506)), G_NV(F->su_3506));
ret_:

  return;
}

static void f_address_spec_1391(struct f_greenc_1fr *up_, P175 e_1389, P118 y_1390) {
  struct f_address_spec_1391fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->e_1389 = e_1389;
F->y_1390 = y_1390;
F->a_3518 = NULL;
F->a_3518 = F->up->addrs_223;
F->v_3519 = NULL;
F->act_3520 = NULL;
f_static_address_1368(F->up, F->e_1389);
while (((F->a_3518 != NULL) && ((*(P221)rt_nil_check(F->a_3518)).e_ != F->e_1389))) {
F->a_3518 = (*(P221)rt_nil_check(F->a_3518)).next_;
}
L_end_3521: ;
if ((F->a_3518 == NULL)) {
F->a_3518 = ({ R222 *cell3522 = rt_alloc(sizeof(R222)); *cell3522 = cp_R222(({ R222 ag3523; ag3523.y_ = NULL; ag3523.name_ = (*(P175)rt_nil_check(F->e_1389)).name_; ag3523.depth_ = G_NV(F->up->depth_121); ag3523.e_ = F->e_1389; ag3523.next_ = F->up->addrs_223; ag3523; })); (P221)cell3522; });
F->up->addrs_223 = F->a_3518;
}
if ((G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)1LL))) {
if (((*(P221)rt_nil_check(F->a_3518)).y_ != F->y_1390)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1389)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("the address of ", 15), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1389)).name_))), rt_g_lit(" is given in the declarative part that declares it (RM79 13.5)", 62)));
}
} else if (((((G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)4LL)) || (G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)3LL))) || (G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)8LL))) || (G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)9LL)))) {
(*(P221)rt_nil_check(F->a_3518)).y_ = F->y_1390;
} else if ((G_NV((*(P118)rt_nil_check(F->y_1390)).kind_) == ((rt_int)10LL))) {
if (((*(P118)rt_nil_check(F->y_1390)).params_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1389)).line_), cat_rt_gstr(rt_g_lit("the interrupts of this machine supply no control information: an interrupt entry ", 81), rt_g_lit("has no parameters (RM79 13.5.1)", 31)));
} else if ((((*(P118)rt_nil_check(F->y_1390)).c_ != NULL) || ((*(P118)rt_nil_check(F->y_1390)).members_ == NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1389)).line_), rt_g_lit("an interrupt is linked to a single entry of a single task (RM79 13.5.1)", 71));
} else if (((*(P118)rt_nil_check((*(P118)rt_nil_check(F->y_1390)).members_)).c_ != NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1389)).line_), rt_g_lit("an interrupt is linked to a single entry of a single task (RM79 13.5.1)", 71));
}
(*(P221)rt_nil_check(F->a_3518)).y_ = F->y_1390;
f_entry_path_1193(F->up, F->y_1390, rt_g_lit("", 0), &F->v_3519);
f_act_path_1185(F->up, (*(P118)rt_nil_check(F->y_1390)).members_, &F->act_3520);
f_emit_273(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_bind_interrupt(", 20), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->e_1389)).tag_))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->v_3519))), rt_g_lit(", &", 3)), (*(P141)rt_nil_check(F->act_3520))), rt_g_lit(");", 2)));
} else {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->e_1389)).line_), rt_g_lit("an address is given to a variable, a subprogram, a module or an entry (RM79 13.5)", 81));
}
ret_:

  return;
}

static rt_int f_task_length_1393(struct f_greenc_1fr *up_, P118 y_1392) {
  struct f_task_length_1393fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_1392 = y_1392;
F->a_3524 = NULL;
F->a_3524 = F->up->addrs_223;
while ((F->a_3524 != NULL)) {
if ((((*(P221)rt_nil_check(F->a_3524)).y_ == F->y_1392) && eq_rt_gstr((*(P141)rt_nil_check((*(P221)rt_nil_check(F->a_3524)).name_)), rt_g_lit("$LENGTH", 7)))) {
F->result_ = G_NV((*(P221)rt_nil_check(F->a_3524)).depth_);
goto ret_;
}
F->a_3524 = (*(P221)rt_nil_check(F->a_3524)).next_;
}
L_end_3525: ;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_predef_type_1398(struct f_greenc_1fr *up_, rt_gstr name_1394, P123 t_1395, rt_gstr lo_1396, rt_gstr hi_1397) {
  struct f_predef_type_1398fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1394 = cp_rt_gstr(name_1394);
F->t_1395 = t_1395;
F->lo_1396 = cp_rt_gstr(lo_1396);
F->hi_1397 = cp_rt_gstr(hi_1397);
F->y_3526 = NULL;
F->y_3526 = f_new_sym_491(F->up, ((rt_int)5LL), f_mk_246(F->up, F->name_1394));
(*(P118)rt_nil_check(F->y_3526)).t_ = F->t_1395;
if ((({ rt_gstr at3527 = F->lo_1396; at3527.hi >= at3527.lo ? at3527.hi - at3527.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
(*(P118)rt_nil_check(F->y_3526)).c_ = f_new_cons_494(F->up);
(*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_3526)).c_)).lo_ = f_mk_246(F->up, F->lo_1396);
(*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_3526)).c_)).hi_ = f_mk_246(F->up, F->hi_1397);
if (((({ rt_gstr at3528 = F->hi_1397; at3528.hi >= at3528.lo ? at3528.hi - at3528.lo + 1 : (rt_int)0; }) < ((rt_int)12LL)) && f_is_digit_253(F->up, G_NV(({ rt_gstr ix3532 = F->hi_1397; ix3532.p[rt_index(({ rt_gstr at3531 = F->hi_1397; at3531.lo; }), ix3532.lo, ix3532.hi) - ix3532.lo]; }))))) {
(*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_3526)).c_)).mlo_ = rt_int_of_str(rt_g_g2s(F->lo_1396));
(*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_3526)).c_)).mhi_ = rt_int_of_str(rt_g_g2s(F->hi_1397));
(*(P179)rt_nil_check((*(P118)rt_nil_check(F->y_3526)).c_)).hasm_ = 1;
}
}
f_define_486(F->up, F->y_3526, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_const_1402(struct f_greenc_1fr *up_, rt_gstr name_1399, P123 t_1400, rt_gstr code_text_1401) {
  struct f_predef_const_1402fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1399 = cp_rt_gstr(name_1399);
F->t_1400 = t_1400;
F->code_text_1401 = cp_rt_gstr(code_text_1401);
F->y_3533 = NULL;
F->y_3533 = f_new_sym_491(F->up, ((rt_int)2LL), f_mk_246(F->up, F->name_1399));
(*(P118)rt_nil_check(F->y_3533)).t_ = F->t_1400;
(*(P118)rt_nil_check(F->y_3533)).ro_ = 1;
(*(P118)rt_nil_check(F->y_3533)).access_path_ = f_mk_246(F->up, F->code_text_1401);
f_define_486(F->up, F->y_3533, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_exc_1404(struct f_greenc_1fr *up_, rt_gstr name_1403) {
  struct f_predef_exc_1404fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1403 = cp_rt_gstr(name_1403);
F->y_3534 = NULL;
F->y_3534 = f_new_sym_491(F->up, ((rt_int)6LL), f_mk_246(F->up, F->name_1403));
(*(P118)rt_nil_check(F->y_3534)).cname_ = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_exc(", 7), f_q_264(F->up)), F->name_1403), f_q_264(F->up)), one_rt_gstr(41)));
f_define_486(F->up, F->y_3534, ((rt_int)0LL));
ret_:

  return;
}

static void f_predef_lit_1408(struct f_greenc_1fr *up_, rt_gstr name_1405, P123 t_1406, rt_int v_1407) {
  struct f_predef_lit_1408fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1405 = cp_rt_gstr(name_1405);
F->t_1406 = t_1406;
F->v_1407 = v_1407;
F->y_3535 = NULL;
F->y_3535 = f_new_sym_491(F->up, ((rt_int)7LL), f_mk_246(F->up, F->name_1405));
(*(P118)rt_nil_check(F->y_3535)).t_ = F->t_1406;
(*(P118)rt_nil_check(F->y_3535)).result_ = F->t_1406;
(*(P118)rt_nil_check(F->y_3535)).mvalue_ = F->v_1407;
(*(P118)rt_nil_check(F->y_3535)).hasmv_ = 1;
f_define_486(F->up, F->y_3535, ((rt_int)0LL));
ret_:

  return;
}

static void f_predefine_1409(struct f_greenc_1fr *up_) {
  struct f_predefine_1409fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->y_3536 = NULL;
F->control_3537 = cp_rt_gstr(cat_rt_gstr(rt_g_lit("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE ", 60), rt_g_lit("DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US ", 55)));
F->start_3538 = INT64_MIN;
F->start_3538 = ((rt_int)1LL);
F->code_no_3539 = INT64_MIN;
F->code_no_3539 = ((rt_int)0LL);
f_predef_type_1398(F->up, rt_g_lit("INTEGER", 7), F->up->ty_int_157, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("SHORT_INTEGER", 13), F->up->ty_short_168, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("LONG_INTEGER", 12), F->up->ty_long_169, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("NATURAL", 7), F->up->ty_int_157, rt_g_lit("1", 1), rt_g_lit("INT64_MAX", 9));
f_predef_type_1398(F->up, rt_g_lit("PRIORITY", 8), F->up->ty_int_157, rt_g_lit("0", 1), rt_g_lit("255", 3));
f_predef_type_1398(F->up, rt_g_lit("BOOLEAN", 7), F->up->ty_bool_158, rt_g_lit("0", 1), rt_g_lit("1", 1));
f_predef_type_1398(F->up, rt_g_lit("CHARACTER", 9), F->up->ty_char_160, rt_g_lit("0", 1), rt_g_lit("127", 3));
f_predef_type_1398(F->up, rt_g_lit("STRING", 6), F->up->ty_string_161, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("FLOAT", 5), F->up->ty_float_159, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("SHORT_FLOAT", 11), F->up->ty_sfloat_170, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("LONG_FLOAT", 10), F->up->ty_lfloat_171, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_type_1398(F->up, rt_g_lit("TIME", 4), F->up->ty_time_172, rt_g_lit("", 0), rt_g_lit("", 0));
f_predef_lit_1408(F->up, rt_g_lit("FALSE", 5), F->up->ty_bool_158, ((rt_int)0LL));
f_predef_lit_1408(F->up, rt_g_lit("TRUE", 4), F->up->ty_bool_158, ((rt_int)1LL));
{ rt_int lo3543 = ((rt_int)1LL), hi3544 = ({ rt_gstr at3541 = F->control_3537; at3541.hi >= at3541.lo ? at3541.hi - at3541.lo + 1 : (rt_int)0; });
for (rt_int it3545 = lo3543; it3545 <= hi3544; it3545++) {
F->i_3542 = it3545;
if ((G_NV(({ rt_gstr ix3546 = F->control_3537; ix3546.p[rt_index(F->i_3542, ix3546.lo, ix3546.hi) - ix3546.lo]; })) == 32)) {
f_predef_const_1402(F->up, ({ rt_gstr sl3548 = F->control_3537; rt_int l_ = G_NV(F->start_3538), h_ = rt_sub(F->i_3542, ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3548.lo, sl3548.hi); rt_index(h_, sl3548.lo, sl3548.hi); } sl3548.p += l_ - sl3548.lo; sl3548.lo = l_; sl3548.hi = h_; sl3548; }), F->up->ty_char_160, rt_g_s2g(rt_str_of_int(G_NV(F->code_no_3539))));
F->code_no_3539 = rt_add(G_NV(F->code_no_3539), ((rt_int)1LL));
F->start_3538 = rt_add(F->i_3542, ((rt_int)1LL));
}
}
}
L_end_3540: ;
f_predef_const_1402(F->up, rt_g_lit("DEL", 3), F->up->ty_char_160, rt_g_lit("127", 3));
f_predef_const_1402(F->up, rt_g_lit("EXCLAM", 6), F->up->ty_char_160, rt_g_lit("33", 2));
f_predef_const_1402(F->up, rt_g_lit("DOLLAR", 6), F->up->ty_char_160, rt_g_lit("36", 2));
f_predef_const_1402(F->up, rt_g_lit("QUESTION", 8), F->up->ty_char_160, rt_g_lit("63", 2));
f_predef_const_1402(F->up, rt_g_lit("AT_SIGN", 7), F->up->ty_char_160, rt_g_lit("64", 2));
f_predef_const_1402(F->up, rt_g_lit("L_BRACKET", 9), F->up->ty_char_160, rt_g_lit("91", 2));
f_predef_const_1402(F->up, rt_g_lit("BACK_SLASH", 10), F->up->ty_char_160, rt_g_lit("92", 2));
f_predef_const_1402(F->up, rt_g_lit("R_BRACKET", 9), F->up->ty_char_160, rt_g_lit("93", 2));
f_predef_const_1402(F->up, rt_g_lit("CIRCUMFLEX", 10), F->up->ty_char_160, rt_g_lit("94", 2));
f_predef_const_1402(F->up, rt_g_lit("GRAVE", 5), F->up->ty_char_160, rt_g_lit("96", 2));
f_predef_const_1402(F->up, rt_g_lit("L_BRACE", 7), F->up->ty_char_160, rt_g_lit("123", 3));
f_predef_const_1402(F->up, rt_g_lit("R_BRACE", 7), F->up->ty_char_160, rt_g_lit("125", 3));
f_predef_const_1402(F->up, rt_g_lit("TILDE", 5), F->up->ty_char_160, rt_g_lit("126", 3));
{ rt_int lo3551 = ((rt_int)0LL), hi3552 = ((rt_int)25LL);
for (rt_int it3553 = lo3551; it3553 <= hi3552; it3553++) {
F->i_3550 = it3553;
f_predef_const_1402(F->up, cat_rt_gstr(rt_g_lit("LC_", 3), one_rt_gstr(rt_range((rt_add(((rt_int)66LL), F->i_3550) - 1), 0, 127))), F->up->ty_char_160, rt_g_s2g(rt_str_of_int(rt_add(((rt_int)97LL), F->i_3550))));
}
}
L_end_3549: ;
f_predef_const_1402(F->up, rt_g_lit("NEWLINE", 7), F->up->ty_string_161, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("rt_g_lit(", 9), f_q_264(F->up)), rt_g_lit("\\n", 2)), f_q_264(F->up)), rt_g_lit(", 1)", 4)));
f_predef_const_1402(F->up, rt_g_lit("SECONDS", 7), F->up->ty_time_172, rt_g_lit("((double)RT_SECONDS)", 20));
f_predef_exc_1404(F->up, rt_g_lit("ACCESS_ERROR", 12));
f_predef_exc_1404(F->up, rt_g_lit("ASSERT_ERROR", 12));
f_predef_exc_1404(F->up, rt_g_lit("DISCRIMINANT_ERROR", 18));
f_predef_exc_1404(F->up, rt_g_lit("DIVIDE_ERROR", 12));
f_predef_exc_1404(F->up, rt_g_lit("FAILURE", 7));
f_predef_exc_1404(F->up, rt_g_lit("INDEX_ERROR", 11));
f_predef_exc_1404(F->up, rt_g_lit("INITIATE_ERROR", 14));
f_predef_exc_1404(F->up, rt_g_lit("NO_VALUE_ERROR", 14));
f_predef_exc_1404(F->up, rt_g_lit("OVERFLOW", 8));
f_predef_exc_1404(F->up, rt_g_lit("OVERLAP_ERROR", 13));
f_predef_exc_1404(F->up, rt_g_lit("RANGE_ERROR", 11));
f_predef_exc_1404(F->up, rt_g_lit("SELECT_ERROR", 12));
f_predef_exc_1404(F->up, rt_g_lit("STORAGE_OVERFLOW", 16));
f_predef_exc_1404(F->up, rt_g_lit("TASKING_ERROR", 13));
f_predef_exc_1404(F->up, rt_g_lit("UNDERFLOW", 9));
f_predef_exc_1404(F->up, rt_g_lit("END_OF_FILE", 11));
F->y_3536 = f_new_sym_491(F->up, ((rt_int)8LL), f_mk_246(F->up, rt_g_lit("TEXT_IO", 7)));
f_define_486(F->up, F->y_3536, ((rt_int)0LL));
(*(P118)rt_nil_check(F->y_3536)).depth_ = ((rt_int)1LL);
ret_:

  return;
}

static void f_lib_open_1412(struct f_greenc_1fr *up_, rt_gstr key_1410, rt_int *length_1411) {
  struct f_lib_open_1412fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1410 = cp_rt_gstr(key_1410);
F->length_1411 = length_1411;
rt_g_lib_open(rt_g_g2s(F->key_1410), F->length_1411);
ret_:

  return;
}

static void f_lib_store_1415(struct f_greenc_1fr *up_, rt_gstr key_1413, rt_gstr contents_1414) {
  struct f_lib_store_1415fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1413 = cp_rt_gstr(key_1413);
F->contents_1414 = cp_rt_gstr(contents_1414);
rt_g_lib_store(rt_g_g2s(F->key_1413), rt_g_g2s(F->contents_1414));
ret_:

  return;
}

static void f_unit_key_1418(struct f_greenc_1fr *up_, P175 u_1416, P141 *r_1417) {
  struct f_unit_key_1418fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1416 = u_1416;
F->r_1417 = r_1417;
F->k_3554 = INT64_MIN;
F->k_3554 = ((rt_int)2LL);
if ((((*(P175)rt_nil_check(F->u_1416)).formal_ != NULL) && ((G_NV(({ rt_gstr ix3555 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).formal_)); ix3555.p[rt_index(((rt_int)1LL), ix3555.lo, ix3555.hi) - ix3555.lo]; })) == 33) || (G_NV(({ rt_gstr ix3556 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).formal_)); ix3556.p[rt_index(((rt_int)1LL), ix3556.lo, ix3556.hi) - ix3556.lo]; })) == 35)))) {
while (((G_NV(F->k_3554) < ({ rt_gstr at3558 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).formal_)); at3558.hi >= at3558.lo ? at3558.hi - at3558.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3559 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).formal_)); ix3559.p[rt_index(rt_add(G_NV(F->k_3554), ((rt_int)1LL)), ix3559.lo, ix3559.hi) - ix3559.lo]; })) != 44))) {
F->k_3554 = rt_add(G_NV(F->k_3554), ((rt_int)1LL));
}
L_end_3557: ;
(*F->r_1417) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(({ rt_gstr sl3561 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).formal_)); rt_int l_ = ((rt_int)3LL), h_ = G_NV(F->k_3554); if (l_ <= h_) { rt_index(l_, sl3561.lo, sl3561.hi); rt_index(h_, sl3561.lo, sl3561.hi); } sl3561.p += l_ - sl3561.lo; sl3561.lo = l_; sl3561.hi = h_; sl3561; }), one_rt_gstr(46)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).name_))), rt_g_lit(".sub", 4)));
} else if ((((((G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)48LL)) || (G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)50LL))) || (G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)54LL))) || (G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)53LL))) || (((G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)44LL)) || (G_NV((*(P175)rt_nil_check(F->u_1416)).kind_) == ((rt_int)45LL))) && (G_NV((*(P175)rt_nil_check(F->u_1416)).ival_) == ((rt_int)1LL))))) {
(*F->r_1417) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).name_)), rt_g_lit(".spec", 5)));
} else {
(*F->r_1417) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_1416)).name_)), rt_g_lit(".body", 5)));
}
ret_:

  return;
}

static void f_lib_enabled_1420(struct f_greenc_1fr *up_, int *yes_1419) {
  struct f_lib_enabled_1420fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->yes_1419 = yes_1419;
rt_g_lib_enabled(F->yes_1419);
ret_:

  return;
}

static void f_store_units_1421(struct f_greenc_1fr *up_) {
  struct f_store_units_1421fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_3562 = NULL;
F->s_3562 = F->up->spans_207;
F->k_3563 = NULL;
F->yes_3564 = INT_MIN;
f_lib_enabled_1420(F->up, &F->yes_3564);
 (void)rt_range(F->yes_3564, 0, 1);
if ((!G_NV(F->yes_3564))) {
goto ret_;
}
while ((F->s_3562 != NULL)) {
f_unit_key_1418(F->up, (*(P205)rt_nil_check(F->s_3562)).u_, &F->k_3563);
f_store_span_1424(F->up, F->s_3562, (*(P141)rt_nil_check(F->k_3563)));
F->s_3562 = (*(P205)rt_nil_check(F->s_3562)).next_;
}
L_end_3565: ;
ret_:

  return;
}

static void f_store_span_1424(struct f_greenc_1fr *up_, P205 s_1422, rt_gstr key_1423) {
  struct f_store_span_1424fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->s_1422 = s_1422;
F->key_1423 = cp_rt_gstr(key_1423);
F->n_3566 = INT64_MIN;
F->n_3566 = ((rt_int)0LL);
F->head_3567 = NULL;
F->head_3567 = f_mk_246(F->up, rt_g_lit("", 0));
if ((({ rt_gstr at3568 = (*(P141)rt_nil_check((*(P205)rt_nil_check(F->s_1422)).env_)); at3568.hi >= at3568.lo ? at3568.hi - at3568.lo + 1 : (rt_int)0; }) > ((rt_int)0LL))) {
F->head_3567 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("pragma ENVIRONMENT(", 19), ({ rt_gstr sl3572 = (*(P141)rt_nil_check((*(P205)rt_nil_check(F->s_1422)).env_)); rt_int l_ = ((rt_int)1LL), h_ = rt_sub(({ rt_gstr at3571 = (*(P141)rt_nil_check((*(P205)rt_nil_check(F->s_1422)).env_)); at3571.hi >= at3571.lo ? at3571.hi - at3571.lo + 1 : (rt_int)0; }), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3572.lo, sl3572.hi); rt_index(h_, sl3572.lo, sl3572.hi); } sl3572.p += l_ - sl3572.lo; sl3572.lo = l_; sl3572.hi = h_; sl3572; })), rt_g_lit(");", 2)), one_rt_gstr(10)));
}
F->n_3566 = ({ rt_gstr at3573 = (*(P141)rt_nil_check(F->head_3567)); at3573.hi >= at3573.lo ? at3573.hi - at3573.lo + 1 : (rt_int)0; });
{ rt_int lo3576 = G_NV((*(P205)rt_nil_check(F->s_1422)).first_), hi3577 = G_NV((*(P205)rt_nil_check(F->s_1422)).last_);
for (rt_int it3578 = lo3576; it3578 <= hi3577; it3578++) {
F->l_3575 = it3578;
F->n_3566 = rt_add(rt_add(G_NV(F->n_3566), ({ rt_gstr at3580 = (*(P141)rt_nil_check(({ A203 ix3579 = F->up->src_lines_204; ix3579.p[rt_index(F->l_3575, ix3579.lo, ix3579.hi) - ix3579.lo]; }))); at3580.hi >= at3580.lo ? at3580.hi - at3580.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
}
}
L_end_3574: ;
{
F->t_3582.lo = ((rt_int)1LL); F->t_3582.hi = G_NV(F->n_3566);
F->t_3582.lo2 = 1; F->t_3582.hi2 = 1;
F->t_3582.p = rt_alloc(sizeof(unsigned char) * (size_t)G_CNT(F->t_3582));
memset(F->t_3582.p, 0xFF, (size_t)G_CNT(F->t_3582));
F->k_3584 = INT64_MIN;
F->k_3584 = ({ rt_gstr at3585 = (*(P141)rt_nil_check(F->head_3567)); at3585.hi >= at3585.lo ? at3585.hi - at3585.lo + 1 : (rt_int)0; });
{ rt_gstr sl_ = ({ rt_gstr sl3586 = F->t_3582; rt_int l_ = ((rt_int)1LL), h_ = G_NV(F->k_3584); if (l_ <= h_) { rt_index(l_, sl3586.lo, sl3586.hi); rt_index(h_, sl3586.lo, sl3586.hi); } sl3586.p += l_ - sl3586.lo; sl3586.lo = l_; sl3586.hi = h_; sl3586; }); as_rt_gstr(&sl_, (*(P141)rt_nil_check(F->head_3567))); }
{ rt_int lo3589 = G_NV((*(P205)rt_nil_check(F->s_1422)).first_), hi3590 = G_NV((*(P205)rt_nil_check(F->s_1422)).last_);
for (rt_int it3591 = lo3589; it3591 <= hi3590; it3591++) {
F->l_3588 = it3591;
{ rt_gstr sl_ = ({ rt_gstr sl3594 = F->t_3582; rt_int l_ = rt_add(G_NV(F->k_3584), ((rt_int)1LL)), h_ = rt_add(G_NV(F->k_3584), ({ rt_gstr at3593 = (*(P141)rt_nil_check(({ A203 ix3592 = F->up->src_lines_204; ix3592.p[rt_index(F->l_3588, ix3592.lo, ix3592.hi) - ix3592.lo]; }))); at3593.hi >= at3593.lo ? at3593.hi - at3593.lo + 1 : (rt_int)0; })); if (l_ <= h_) { rt_index(l_, sl3594.lo, sl3594.hi); rt_index(h_, sl3594.lo, sl3594.hi); } sl3594.p += l_ - sl3594.lo; sl3594.lo = l_; sl3594.hi = h_; sl3594; }); as_rt_gstr(&sl_, (*(P141)rt_nil_check(({ A203 ix3595 = F->up->src_lines_204; ix3595.p[rt_index(F->l_3588, ix3595.lo, ix3595.hi) - ix3595.lo]; })))); }
F->k_3584 = rt_add(rt_add(G_NV(F->k_3584), ({ rt_gstr at3597 = (*(P141)rt_nil_check(({ A203 ix3596 = F->up->src_lines_204; ix3596.p[rt_index(F->l_3588, ix3596.lo, ix3596.hi) - ix3596.lo]; }))); at3597.hi >= at3597.lo ? at3597.hi - at3597.lo + 1 : (rt_int)0; })), ((rt_int)1LL));
(*({ rt_gstr *ix3598 = &(F->t_3582); &ix3598->p[rt_index(G_NV(F->k_3584), ix3598->lo, ix3598->hi) - ix3598->lo]; })) = 10;
}
}
L_end_3587: ;
f_lib_store_1415(F->up, F->key_1423, F->t_3582);

}
L_end_3581: ;
ret_:

  return;
}

static void f_lib_load_1427(struct f_greenc_1fr *up_, rt_gstr key_1425, P175 *r_1426) {
  struct f_lib_load_1427fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->key_1425 = cp_rt_gstr(key_1425);
F->r_1426 = r_1426;
F->n_3599 = INT64_MIN;
F->saved_line_3600 = INT64_MIN;
F->saved_line_3600 = G_NV(F->up->src_line_116);
F->saved_pos_3601 = INT64_MIN;
F->saved_pos_3601 = G_NV(F->up->tpos_115);
F->from_3602 = INT64_MIN;
(*F->r_1426) = NULL;
f_lib_open_1412(F->up, F->key_1425, &F->n_3599);
if ((G_NV(F->n_3599) < ((rt_int)0LL))) {
goto ret_;
}
F->from_3602 = rt_add(G_NV(F->up->ntoks_114), ((rt_int)1LL));
f_include_text_312(F->up, G_NV(F->n_3599));
f_add_token_284(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_115 = G_NV(F->from_3602);
f_compilation_434(F->up, &(*F->r_1426));
F->up->tpos_115 = G_NV(F->saved_pos_3601);
F->up->src_line_116 = G_NV(F->saved_line_3600);
ret_:

  return;
}

static int f_defined_unit_1430(struct f_greenc_1fr *up_, rt_gstr name_1428, P175 before_1429) {
  struct f_defined_unit_1430fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1428 = cp_rt_gstr(name_1428);
F->before_1429 = before_1429;
F->u_3603 = NULL;
F->u_3603 = F->up->units_229;
if (f_listed_439(F->up, F->up->loaded_209, F->name_1428)) {
F->result_ = 1;
goto ret_;
}
while (((F->u_3603 != NULL) && (F->u_3603 != F->before_1429))) {
if ((eq_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_3603)).name_)), F->name_1428) && (G_NV(({ rt_gstr ix3605 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->u_3603)).formal_)); ix3605.p[rt_index(((rt_int)1LL), ix3605.lo, ix3605.hi) - ix3605.lo]; })) != 33))) {
F->result_ = 1;
goto ret_;
}
F->u_3603 = (*(P175)rt_nil_check(F->u_3603)).next_;
}
L_end_3604: ;
F->result_ = 0;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_library_units_1431(struct f_greenc_1fr *up_) {
  struct f_library_units_1431fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_3606 = NULL;
F->prev_3607 = NULL;
F->l_3608 = NULL;
F->ltail_3609 = NULL;
F->i_3610 = INT64_MIN;
F->j_3611 = INT64_MIN;
F->n_3612 = NULL;
F->f_3613 = NULL;
F->changed_3614 = INT_MIN;
F->changed_3614 = 1;
while (G_NV(F->changed_3614)) {
F->changed_3614 = 0;
F->p_3606 = F->up->units_229;
F->prev_3607 = NULL;
while (((F->p_3606 != NULL) && (!G_NV(F->changed_3614)))) {
F->f_3613 = (*(P175)rt_nil_check(F->p_3606)).formal_;
F->i_3610 = ((rt_int)1LL);
if (((G_NV(({ rt_gstr ix3617 = (*(P141)rt_nil_check(F->f_3613)); ix3617.p[rt_index(((rt_int)1LL), ix3617.lo, ix3617.hi) - ix3617.lo]; })) == 33) || (G_NV(({ rt_gstr ix3618 = (*(P141)rt_nil_check(F->f_3613)); ix3618.p[rt_index(((rt_int)1LL), ix3618.lo, ix3618.hi) - ix3618.lo]; })) == 35))) {
F->i_3610 = ((rt_int)2LL);
}
while (((G_NV(F->i_3610) < ({ rt_gstr at3620 = (*(P141)rt_nil_check(F->f_3613)); at3620.hi >= at3620.lo ? at3620.hi - at3620.lo + 1 : (rt_int)0; })) && (!G_NV(F->changed_3614)))) {
F->j_3611 = rt_add(G_NV(F->i_3610), ((rt_int)1LL));
while (((G_NV(F->j_3611) <= ({ rt_gstr at3622 = (*(P141)rt_nil_check(F->f_3613)); at3622.hi >= at3622.lo ? at3622.hi - at3622.lo + 1 : (rt_int)0; })) && (G_NV(({ rt_gstr ix3623 = (*(P141)rt_nil_check(F->f_3613)); ix3623.p[rt_index(G_NV(F->j_3611), ix3623.lo, ix3623.hi) - ix3623.lo]; })) != 44))) {
F->j_3611 = rt_add(G_NV(F->j_3611), ((rt_int)1LL));
}
L_end_3621: ;
if ((G_NV(F->j_3611) > rt_add(G_NV(F->i_3610), ((rt_int)1LL)))) {
F->n_3612 = f_mk_246(F->up, ({ rt_gstr sl3625 = (*(P141)rt_nil_check(F->f_3613)); rt_int l_ = rt_add(G_NV(F->i_3610), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3611), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3625.lo, sl3625.hi); rt_index(h_, sl3625.lo, sl3625.hi); } sl3625.p += l_ - sl3625.lo; sl3625.lo = l_; sl3625.hi = h_; sl3625; }));
if (((f_lookup_443(F->up, (*(P141)rt_nil_check(F->n_3612))) == NULL) && (!f_defined_unit_1430(F->up, (*(P141)rt_nil_check(F->n_3612)), F->p_3606)))) {
f_load_unit_1434(F->up, (*(P141)rt_nil_check(F->n_3612)), &F->l_3608);
if ((F->l_3608 == NULL)) {
f_predefined_unit_1437(F->up, (*(P141)rt_nil_check(F->n_3612)), &F->l_3608);
}
if ((F->l_3608 == NULL)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->p_3606)).line_), cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->n_3612)), rt_g_lit(", named by ", 11)), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3606)).name_))), rt_g_lit(", is neither compiled before it nor in ", 39)), rt_g_lit("the program library (RM79 10.3)", 31)));
}
F->up->loaded_209 = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check(F->up->loaded_209)), (*(P141)rt_nil_check(F->n_3612))), one_rt_gstr(44)));
F->ltail_3609 = F->l_3608;
while (((*(P175)rt_nil_check(F->ltail_3609)).next_ != NULL)) {
F->ltail_3609 = (*(P175)rt_nil_check(F->ltail_3609)).next_;
}
L_end_3626: ;
(*(P175)rt_nil_check(F->ltail_3609)).next_ = F->p_3606;
if ((F->prev_3607 == NULL)) {
F->up->units_229 = F->l_3608;
} else {
(*(P175)rt_nil_check(F->prev_3607)).next_ = F->l_3608;
}
F->changed_3614 = 1;
}
}
F->i_3610 = G_NV(F->j_3611);
}
L_end_3619: ;
F->prev_3607 = F->p_3606;
F->p_3606 = (*(P175)rt_nil_check(F->p_3606)).next_;
}
L_end_3616: ;
}
L_end_3615: ;
ret_:

  return;
}

static void f_load_unit_1434(struct f_greenc_1fr *up_, rt_gstr name_1432, P175 *r_1433) {
  struct f_load_unit_1434fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1432 = cp_rt_gstr(name_1432);
F->r_1433 = r_1433;
F->s_3627 = NULL;
F->b_3628 = NULL;
F->t_3629 = NULL;
f_lib_load_1427(F->up, cat_rt_gstr(F->name_1432, rt_g_lit(".spec", 5)), &F->s_3627);
f_lib_load_1427(F->up, cat_rt_gstr(F->name_1432, rt_g_lit(".body", 5)), &F->b_3628);
if ((F->s_3627 == NULL)) {
(*F->r_1433) = F->b_3628;
goto ret_;
}
F->t_3629 = F->s_3627;
while (((*(P175)rt_nil_check(F->t_3629)).next_ != NULL)) {
F->t_3629 = (*(P175)rt_nil_check(F->t_3629)).next_;
}
L_end_3630: ;
(*(P175)rt_nil_check(F->t_3629)).next_ = F->b_3628;
(*F->r_1433) = F->s_3627;
ret_:

  return;
}

static void f_predefined_unit_1437(struct f_greenc_1fr *up_, rt_gstr name_1435, P175 *r_1436) {
  struct f_predefined_unit_1437fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->name_1435 = cp_rt_gstr(name_1435);
F->r_1436 = r_1436;
F->saved_pos_3631 = INT64_MIN;
F->saved_pos_3631 = G_NV(F->up->tpos_115);
F->from_3632 = INT64_MIN;
F->from_3632 = rt_add(G_NV(F->up->ntoks_114), ((rt_int)1LL));
(*F->r_1436) = NULL;
if (eq_rt_gstr(F->name_1435, rt_g_lit("UNSAFE_PROGRAMMING", 18))) {
f_lex_line_295(F->up, rt_g_lit("package UNSAFE_PROGRAMMING is", 29));
f_lex_line_295(F->up, rt_g_lit("   generic (type S; type T) function UNSAFE_CONVERSION(X : S) return T;", 71));
f_lex_line_295(F->up, rt_g_lit("end UNSAFE_PROGRAMMING;", 23));
f_lex_line_295(F->up, rt_g_lit("package body UNSAFE_PROGRAMMING is", 34));
f_lex_line_295(F->up, rt_g_lit("   function UNSAFE_CONVERSION(X : S) return T is", 48));
f_lex_line_295(F->up, rt_g_lit("   begin pragma INTERFACE(UNSAFE_CONVERSION); end UNSAFE_CONVERSION;", 68));
f_lex_line_295(F->up, rt_g_lit("end UNSAFE_PROGRAMMING;", 23));
} else if (eq_rt_gstr(F->name_1435, rt_g_lit("MACHINE_CODE", 12))) {
f_lex_line_295(F->up, rt_g_lit("package MACHINE_CODE is", 23));
f_lex_line_295(F->up, rt_g_lit("   type OPCODE is (NOP, LDI, LD, ST, ADD, SUB, MUL, DIV, NEG, OUTC, OUTN, INTR);", 80));
f_lex_line_295(F->up, rt_g_lit("   subtype REGISTER is INTEGER range 0 .. 7;", 44));
f_lex_line_295(F->up, rt_g_lit("   type INSTRUCTION is record OP : OPCODE; R : REGISTER; A : INTEGER; end record;", 81));
f_lex_line_295(F->up, rt_g_lit("end MACHINE_CODE;", 17));
} else if (eq_rt_gstr(F->name_1435, rt_g_lit("LOW_LEVEL_IO", 12))) {
f_lex_line_295(F->up, rt_g_lit("package LOW_LEVEL_IO is", 23));
f_lex_line_295(F->up, rt_g_lit("   subtype DEVICE_NUMBER is INTEGER range 0 .. 15;", 50));
f_lex_line_295(F->up, rt_g_lit("   INTERRUPT_CONTROLLER : constant DEVICE_NUMBER := 0;", 54));
f_lex_line_295(F->up, rt_g_lit("   CONSOLE : constant DEVICE_NUMBER := 1;", 41));
f_lex_line_295(F->up, rt_g_lit("   CLOCK : constant DEVICE_NUMBER := 2;", 39));
f_lex_line_295(F->up, rt_g_lit("   procedure SEND_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER);", 73));
f_lex_line_295(F->up, rt_g_lit("   procedure RECEIVE_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER);", 76));
f_lex_line_295(F->up, rt_g_lit("end LOW_LEVEL_IO;", 17));
f_lex_line_295(F->up, rt_g_lit("package body LOW_LEVEL_IO is", 28));
f_lex_line_295(F->up, rt_g_lit("   procedure SEND_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER) is", 75));
f_lex_line_295(F->up, rt_g_lit("   begin pragma INTERFACE(C); end SEND_CONTROL;", 47));
f_lex_line_295(F->up, rt_g_lit("   procedure RECEIVE_CONTROL(DEVICE : DEVICE_NUMBER; DATA : in out INTEGER) is", 78));
f_lex_line_295(F->up, rt_g_lit("   begin pragma INTERFACE(C); end RECEIVE_CONTROL;", 50));
f_lex_line_295(F->up, rt_g_lit("end LOW_LEVEL_IO;", 17));
} else {
goto ret_;
}
f_add_token_284(F->up, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
F->up->tpos_115 = G_NV(F->from_3632);
f_compilation_434(F->up, &(*F->r_1436));
F->up->tpos_115 = G_NV(F->saved_pos_3631);
ret_:

  return;
}

static void f_prelude_1438(struct f_greenc_1fr *up_) {
  struct f_prelude_1438fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_lex_line_295(F->up, rt_g_lit("generic task SIGNAL is entry SEND; entry WAIT; end SIGNAL;", 58));
f_lex_line_295(F->up, rt_g_lit("task body SIGNAL is RECEIVED : BOOLEAN := FALSE; begin loop select accept SEND;", 79));
f_lex_line_295(F->up, rt_g_lit("RECEIVED := TRUE; or when RECEIVED => accept WAIT; RECEIVED := FALSE; end select;", 81));
f_lex_line_295(F->up, rt_g_lit("end loop; end SIGNAL;", 21));
f_lex_line_295(F->up, rt_g_lit("generic task SEMAPHORE is entry P; entry V; end SEMAPHORE;", 58));
f_lex_line_295(F->up, rt_g_lit("task body SEMAPHORE is begin loop accept P; accept V; end loop; end SEMAPHORE;", 78));
ret_:

  return;
}

static void f_used_units_1441(struct f_greenc_1fr *up_, P175 u_1439, P141 *r_1440) {
  struct f_used_units_1441fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1439 = u_1439;
F->r_1440 = r_1440;
F->p_3633 = NULL;
F->p_3633 = F->u_1439;
F->main_3634 = NULL;
F->changed_3635 = INT_MIN;
F->changed_3635 = 1;
while ((F->p_3633 != NULL)) {
if ((G_NV(({ rt_gstr ix3637 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)); ix3637.p[rt_index(((rt_int)1LL), ix3637.lo, ix3637.hi) - ix3637.lo]; })) != 33)) {
F->main_3634 = F->p_3633;
}
F->p_3633 = (*(P175)rt_nil_check(F->p_3633)).next_;
}
L_end_3636: ;
(*F->r_1440) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr(one_rt_gstr(44), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->main_3634)).name_))), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->main_3634)).formal_))));
F->p_3633 = F->u_1439;
while ((F->p_3633 != NULL)) {
if ((G_NV(({ rt_gstr ix3639 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)); ix3639.p[rt_index(((rt_int)1LL), ix3639.lo, ix3639.hi) - ix3639.lo]; })) == 33)) {
(*F->r_1440) = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*F->r_1440))), ({ rt_gstr sl3643 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)); rt_int l_ = ((rt_int)2LL), h_ = ({ rt_gstr at3642 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)); at3642.hi >= at3642.lo ? at3642.hi - at3642.lo + 1 : (rt_int)0; }); if (l_ <= h_) { rt_index(l_, sl3643.lo, sl3643.hi); rt_index(h_, sl3643.lo, sl3643.hi); } sl3643.p += l_ - sl3643.lo; sl3643.lo = l_; sl3643.hi = h_; sl3643; })));
}
F->p_3633 = (*(P175)rt_nil_check(F->p_3633)).next_;
}
L_end_3638: ;
while (G_NV(F->changed_3635)) {
F->changed_3635 = 0;
F->p_3633 = F->u_1439;
while ((F->p_3633 != NULL)) {
if (((G_NV(({ rt_gstr ix3646 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)); ix3646.p[rt_index(((rt_int)1LL), ix3646.lo, ix3646.hi) - ix3646.lo]; })) != 33) && f_listed_439(F->up, (*F->r_1440), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).name_))))) {
f_add_names_1445(F->up, &(*F->r_1440), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3633)).formal_)), &F->changed_3635);
 (void)rt_range(F->changed_3635, 0, 1);
}
F->p_3633 = (*(P175)rt_nil_check(F->p_3633)).next_;
}
L_end_3645: ;
}
L_end_3644: ;
ret_:

  return;
}

static void f_add_names_1445(struct f_greenc_1fr *up_, P141 *r_1442, rt_gstr list_1443, int *changed_1444) {
  struct f_add_names_1445fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->r_1442 = r_1442;
F->list_1443 = cp_rt_gstr(list_1443);
F->changed_1444 = changed_1444;
F->i_3647 = INT64_MIN;
F->i_3647 = ({ rt_gstr at3648 = F->list_1443; at3648.lo; });
F->j_3649 = INT64_MIN;
F->j_3649 = ({ rt_gstr at3650 = F->list_1443; at3650.lo; });
while ((G_NV(F->i_3647) < ({ rt_gstr at3652 = F->list_1443; at3652.hi; }))) {
F->j_3649 = rt_add(G_NV(F->i_3647), ((rt_int)1LL));
while (((G_NV(F->j_3649) <= ({ rt_gstr at3654 = F->list_1443; at3654.hi; })) && (G_NV(({ rt_gstr ix3655 = F->list_1443; ix3655.p[rt_index(G_NV(F->j_3649), ix3655.lo, ix3655.hi) - ix3655.lo]; })) != 44))) {
F->j_3649 = rt_add(G_NV(F->j_3649), ((rt_int)1LL));
}
L_end_3653: ;
if ((G_NV(F->j_3649) > rt_add(G_NV(F->i_3647), ((rt_int)1LL)))) {
if ((!f_listed_439(F->up, (*F->r_1442), ({ rt_gstr sl3657 = F->list_1443; rt_int l_ = rt_add(G_NV(F->i_3647), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3649), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3657.lo, sl3657.hi); rt_index(h_, sl3657.lo, sl3657.hi); } sl3657.p += l_ - sl3657.lo; sl3657.lo = l_; sl3657.hi = h_; sl3657; })))) {
(*F->r_1442) = f_mk_246(F->up, cat_rt_gstr(cat_rt_gstr((*(P141)rt_nil_check((*F->r_1442))), ({ rt_gstr sl3659 = F->list_1443; rt_int l_ = rt_add(G_NV(F->i_3647), ((rt_int)1LL)), h_ = rt_sub(G_NV(F->j_3649), ((rt_int)1LL)); if (l_ <= h_) { rt_index(l_, sl3659.lo, sl3659.hi); rt_index(h_, sl3659.lo, sl3659.hi); } sl3659.p += l_ - sl3659.lo; sl3659.lo = l_; sl3659.hi = h_; sl3659; })), one_rt_gstr(44)));
(*F->changed_1444) = 1;
}
}
F->i_3647 = G_NV(F->j_3649);
}
L_end_3651: ;
ret_:

  return;
}

static void f_translate_1447(struct f_greenc_1fr *up_, P175 u_1446) {
  struct f_translate_1447fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->u_1446 = u_1446;
F->p_3660 = NULL;
F->p_3660 = F->up->prelude_units_230;
F->used_3661 = NULL;
F->y_3662 = NULL;
while ((F->p_3660 != NULL)) {
f_decl_element_679(F->up, F->p_3660);
F->p_3660 = (*(P175)rt_nil_check(F->p_3660)).next_;
}
L_end_3663: ;
f_used_units_1441(F->up, F->u_1446, &F->used_3661);
F->p_3660 = F->u_1446;
f_open_scope_487(F->up);
while ((F->p_3660 != NULL)) {
F->up->barriers_201 = NULL;
F->up->cur_comp_unit_210 = (*(P175)rt_nil_check(F->p_3660)).name_;
F->y_3662 = f_lookup_443(F->up, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).name_)));
if ((((((G_NV((*(P175)rt_nil_check(F->p_3660)).kind_) == ((rt_int)49LL)) || (G_NV((*(P175)rt_nil_check(F->p_3660)).kind_) == ((rt_int)51LL))) || (G_NV((*(P175)rt_nil_check(F->p_3660)).kind_) == ((rt_int)44LL))) || (G_NV((*(P175)rt_nil_check(F->p_3660)).kind_) == ((rt_int)45LL))) && (F->y_3662 != NULL))) {
if ((((*(P118)rt_nil_check(F->y_3662)).decl_ != NULL) && ((*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_3662)).decl_)).formal_ != NULL))) {
(*(P175)rt_nil_check(F->p_3660)).formal_ = f_mk_246(F->up, cat_rt_gstr((*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).formal_)), (*(P141)rt_nil_check((*(P175)rt_nil_check((*(P118)rt_nil_check(F->y_3662)).decl_)).formal_))));
}
}
f_push_barrier_700(F->up, F->p_3660, ((rt_int)1LL));
if (((G_NV(({ rt_gstr ix3665 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).formal_)); ix3665.p[rt_index(((rt_int)1LL), ix3665.lo, ix3665.hi) - ix3665.lo]; })) == 33) || (G_NV(({ rt_gstr ix3666 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).formal_)); ix3666.p[rt_index(((rt_int)1LL), ix3666.lo, ix3666.hi) - ix3666.lo]; })) == 35))) {
} else if (f_last_unit_1449(F->up, F->p_3660)) {
if (((G_NV((*(P175)rt_nil_check(F->p_3660)).kind_) != ((rt_int)44LL)) || ((*(P175)rt_nil_check(F->p_3660)).a_ != NULL))) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->p_3660)).line_), rt_g_lit("the main program is a procedure without parameters", 50));
}
f_build_subprogram_675(F->up, F->p_3660, &F->y_3662);
f_define_486(F->up, F->y_3662, G_NV((*(P175)rt_nil_check(F->p_3660)).line_));
f_subprogram_body_737(F->up, F->p_3660, F->y_3662);
F->up->main_name_240 = (*(P118)rt_nil_check(F->y_3662)).cname_;
} else if (f_listed_439(F->up, F->used_3661, (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).name_)))) {
f_decl_element_679(F->up, F->p_3660);
} else {
F->up->code_137 = f_new_buffer_268(F->up);
f_decl_element_679(F->up, F->p_3660);
F->up->code_137 = F->up->out_init_135;
}
F->p_3660 = (*(P175)rt_nil_check(F->p_3660)).next_;
}
L_end_3664: ;
F->p_3660 = F->u_1446;
while ((F->p_3660 != NULL)) {
if ((G_NV(({ rt_gstr ix3668 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).formal_)); ix3668.p[rt_index(((rt_int)1LL), ix3668.lo, ix3668.hi) - ix3668.lo]; })) == 33)) {
f_fail_267(F->up, G_NV((*(P175)rt_nil_check(F->p_3660)).line_), cat_rt_gstr(cat_rt_gstr(rt_g_lit("subunit ", 8), (*(P141)rt_nil_check((*(P175)rt_nil_check(F->p_3660)).name_))), rt_g_lit(" has no body stub in an enclosing unit (RM79 10.2)", 50)));
}
F->p_3660 = (*(P175)rt_nil_check(F->p_3660)).next_;
}
L_end_3667: ;
ret_:

  return;
}

static int f_last_unit_1449(struct f_greenc_1fr *up_, P175 p_1448) {
  struct f_last_unit_1449fr *F = rt_alloc(sizeof *F);
F->up = up_;
F->p_1448 = p_1448;
F->q_3669 = NULL;
F->q_3669 = (*(P175)rt_nil_check(F->p_1448)).next_;
while ((F->q_3669 != NULL)) {
if ((G_NV(({ rt_gstr ix3671 = (*(P141)rt_nil_check((*(P175)rt_nil_check(F->q_3669)).formal_)); ix3671.p[rt_index(((rt_int)1LL), ix3671.lo, ix3671.hi) - ix3671.lo]; })) != 33)) {
F->result_ = 0;
goto ret_;
}
F->q_3669 = (*(P175)rt_nil_check(F->q_3669)).next_;
}
L_end_3670: ;
F->result_ = 1;
goto ret_;
  rt_raise(RT_X_INIT);
ret_:

  return F->result_;
}

static void f_print_program_1450(struct f_greenc_1fr *up_) {
  struct f_print_program_1450fr *F = rt_alloc(sizeof *F);
F->up = up_;
f_emit_helpers_654(F->up);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(cat_rt_gstr(rt_g_lit("#include ", 9), f_q_264(F->up)), rt_g_lit("paleo.h", 7)), f_q_264(F->up))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("#include <math.h>", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_275(F->up, F->up->out_types_129);
f_print_buffer_275(F->up, F->up->out_frames_130);
f_print_buffer_275(F->up, F->up->out_helpers_131);
f_print_buffer_275(F->up, F->up->out_protos_132);
f_print_buffer_275(F->up, F->up->out_globals_133);
f_print_buffer_275(F->up, F->up->out_funcs_134);
rt_g_put(rt_g_g2s(rt_g_lit("int main(int argc, char **argv) {", 33)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_init(argc, argv);", 22)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(rt_g_lit("  rt_set_lang(1);", 17)));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  rt_g_set_memory(", 18), rt_g_s2g(rt_str_of_int(G_NV(F->up->conf_memory_size_243)))), rt_g_lit(");", 2))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_275(F->up, F->up->out_excs_136);
f_print_buffer_275(F->up, F->up->out_init_135);
rt_g_put(rt_g_g2s(cat_rt_gstr(cat_rt_gstr(rt_g_lit("  ", 2), (*(P141)rt_nil_check(F->up->main_name_240))), rt_g_lit("();", 3))));
rt_g_put(rt_g_g2s(rt_g_lit("\n", 1)));
f_print_buffer_275(F->up, F->up->out_awaits_227);
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
F->n_rep_42 = ((rt_int)38LL);
F->n_var_43 = ((rt_int)40LL);
F->n_const_44 = ((rt_int)41LL);
F->n_type_45 = ((rt_int)42LL);
F->n_subtype_46 = ((rt_int)43LL);
F->n_proc_47 = ((rt_int)44LL);
F->n_func_48 = ((rt_int)45LL);
F->n_exc_49 = ((rt_int)46LL);
F->n_param_50 = ((rt_int)47LL);
F->n_pkgspec_51 = ((rt_int)48LL);
F->n_pkgbody_52 = ((rt_int)49LL);
F->n_taskspec_53 = ((rt_int)50LL);
F->n_taskbody_54 = ((rt_int)51LL);
F->n_entry_55 = ((rt_int)52LL);
F->n_inst_56 = ((rt_int)53LL);
F->n_generic_57 = ((rt_int)54LL);
F->n_use_58 = ((rt_int)55LL);
F->n_pragma_59 = ((rt_int)56LL);
F->n_slabel_60 = ((rt_int)57LL);
F->n_goto_61 = ((rt_int)58LL);
F->n_arm_62 = ((rt_int)60LL);
F->n_label_63 = ((rt_int)61LL);
F->n_handler_64 = ((rt_int)62LL);
F->n_comp_65 = ((rt_int)63LL);
F->n_alt_66 = ((rt_int)64LL);
F->d_enum_67 = ((rt_int)70LL);
F->d_range_68 = ((rt_int)71LL);
F->d_float_69 = ((rt_int)72LL);
F->d_array_70 = ((rt_int)73LL);
F->d_record_71 = ((rt_int)74LL);
F->d_access_72 = ((rt_int)75LL);
F->d_derived_73 = ((rt_int)76LL);
F->d_private_74 = ((rt_int)77LL);
F->s_mark_75 = ((rt_int)80LL);
F->m_in_76 = ((rt_int)1LL);
F->m_inout_77 = ((rt_int)2LL);
F->m_out_78 = ((rt_int)3LL);
F->t_int_79 = ((rt_int)1LL);
F->t_bool_80 = ((rt_int)2LL);
F->t_float_81 = ((rt_int)3LL);
F->t_enum_82 = ((rt_int)4LL);
F->t_string_83 = ((rt_int)5LL);
F->t_array_84 = ((rt_int)6LL);
F->t_record_85 = ((rt_int)7LL);
F->t_ptr_86 = ((rt_int)8LL);
F->t_void_87 = ((rt_int)9LL);
F->t_nil_88 = ((rt_int)10LL);
F->t_char_89 = ((rt_int)11LL);
F->t_univ_90 = ((rt_int)12LL);
F->t_act_91 = ((rt_int)13LL);
F->t_tdecl_92 = ((rt_int)14LL);
F->t_entry_93 = ((rt_int)15LL);
F->t_fixed_94 = ((rt_int)16LL);
F->y_var_95 = ((rt_int)1LL);
F->y_const_96 = ((rt_int)2LL);
F->y_func_97 = ((rt_int)3LL);
F->y_proc_98 = ((rt_int)4LL);
F->y_type_99 = ((rt_int)5LL);
F->y_exc_100 = ((rt_int)6LL);
F->y_enumlit_101 = ((rt_int)7LL);
F->y_package_102 = ((rt_int)8LL);
F->y_task_103 = ((rt_int)9LL);
F->y_entry_104 = ((rt_int)10LL);
F->y_generic_105 = ((rt_int)11LL);
F->y_conflict_106 = ((rt_int)12LL);
F->f_const_obj_107 = ((rt_int)1LL);
F->f_deferred_108 = ((rt_int)2LL);
F->toks_113.lo = ((rt_int)1LL); F->toks_113.hi = ((rt_int)1000000LL);
F->toks_113.lo2 = 1; F->toks_113.hi2 = 1;
F->toks_113.p = rt_alloc(sizeof(P111) * (size_t)G_CNT(F->toks_113));
F->ntoks_114 = INT64_MIN;
F->ntoks_114 = ((rt_int)0LL);
F->tpos_115 = INT64_MIN;
F->tpos_115 = ((rt_int)1LL);
F->src_line_116 = INT64_MIN;
F->src_line_116 = ((rt_int)0LL);
F->table_120.lo = ((rt_int)0LL); F->table_120.hi = ((rt_int)4092LL);
F->table_120.lo2 = 1; F->table_120.hi2 = 1;
F->table_120.p = rt_alloc(sizeof(P118) * (size_t)G_CNT(F->table_120));
F->depth_121 = INT64_MIN;
F->depth_121 = ((rt_int)0LL);
F->scope_stack_122 = NULL;
F->all_types_125 = NULL;
F->serial_126 = INT64_MIN;
F->serial_126 = ((rt_int)0LL);
F->out_types_129 = NULL;
F->out_frames_130 = NULL;
F->out_helpers_131 = NULL;
F->out_protos_132 = NULL;
F->out_globals_133 = NULL;
F->out_funcs_134 = NULL;
F->out_init_135 = NULL;
F->out_excs_136 = NULL;
F->code_137 = NULL;
F->fields_buf_138 = NULL;
F->in_func_139 = INT_MIN;
F->in_func_139 = 0;
F->cur_level_140 = INT64_MIN;
F->cur_level_140 = ((rt_int)0LL);
F->st_field_142 = NULL;
F->func_sym_143 = NULL;
F->exits_146 = NULL;
F->generic_contexts_149 = NULL;
F->accept_exits_150 = NULL;
F->frames_151 = INT64_MIN;
F->frames_151 = ((rt_int)0LL);
F->handlers_154 = NULL;
F->cleanups_155 = NULL;
F->trial_156 = INT64_MIN;
F->trial_156 = ((rt_int)0LL);
F->ty_int_157 = NULL;
F->ty_bool_158 = NULL;
F->ty_float_159 = NULL;
F->ty_char_160 = NULL;
F->ty_string_161 = NULL;
F->ty_void_162 = NULL;
F->ty_nil_163 = NULL;
F->ty_univ_164 = NULL;
F->ty_act_165 = NULL;
F->ty_tdecl_166 = NULL;
F->ty_entry_167 = NULL;
F->ty_short_168 = NULL;
F->ty_long_169 = NULL;
F->ty_sfloat_170 = NULL;
F->ty_lfloat_171 = NULL;
F->ty_time_172 = NULL;
F->ty_ufixed_173 = NULL;
F->completing_174 = NULL;
F->anon_node_177 = NULL;
F->anon_typ_178 = NULL;
F->anon_cons_181 = NULL;
F->agg_bounds_182 = NULL;
F->disc_syms_183 = NULL;
F->unit_names_185.lo = ((rt_int)1LL); F->unit_names_185.hi = ((rt_int)1000LL);
F->unit_names_185.lo2 = 1; F->unit_names_185.hi2 = 1;
F->unit_names_185.p = rt_alloc(sizeof(P141) * (size_t)G_CNT(F->unit_names_185));
F->unit_depths_187.lo = ((rt_int)1LL); F->unit_depths_187.hi = ((rt_int)1000LL);
F->unit_depths_187.lo2 = 1; F->unit_depths_187.hi2 = 1;
F->unit_depths_187.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(F->unit_depths_187));
for (rt_int i188 = 0; i188 < G_CNT(F->unit_depths_187); i188++) F->unit_depths_187.p[i188] = INT64_MIN;
F->nunits_189 = INT64_MIN;
F->nunits_189 = ((rt_int)0LL);
F->body_labels_192 = NULL;
F->body_gotos_193 = NULL;
F->segments_194 = INT64_MIN;
F->segments_194 = ((rt_int)0LL);
F->handler_exits_195 = NULL;
F->handler_depth_196 = INT64_MIN;
F->handler_depth_196 = ((rt_int)0LL);
F->post_checks_197 = NULL;
F->env_names_198 = NULL;
F->barriers_201 = NULL;
F->text_io_qualified_202 = INT_MIN;
F->text_io_qualified_202 = 0;
F->src_lines_204.lo = ((rt_int)1LL); F->src_lines_204.hi = ((rt_int)300000LL);
F->src_lines_204.lo2 = 1; F->src_lines_204.hi2 = 1;
F->src_lines_204.p = rt_alloc(sizeof(P141) * (size_t)G_CNT(F->src_lines_204));
F->spans_207 = NULL;
F->compiling_source_208 = INT_MIN;
F->compiling_source_208 = 0;
F->loaded_209 = NULL;
F->cur_comp_unit_210 = NULL;
F->in_instance_211 = INT64_MIN;
F->in_instance_211 = ((rt_int)0LL);
F->cur_task_212 = NULL;
F->accept_depth_213 = INT64_MIN;
F->accept_depth_213 = ((rt_int)0LL);
F->famarg_done_214 = INT_MIN;
F->famarg_done_214 = 0;
F->fam_ix_215 = NULL;
F->call_task_ix_216 = NULL;
F->saw_interface_217 = INT_MIN;
F->saw_interface_217 = 0;
F->reps_220 = NULL;
F->addrs_223 = NULL;
F->cur_body_224 = NULL;
F->saw_lang_225 = NULL;
F->defer_entry_structs_226 = INT_MIN;
F->defer_entry_structs_226 = 0;
F->out_awaits_227 = NULL;
F->no_cons_228 = NULL;
F->units_229 = NULL;
F->prelude_units_230 = NULL;
F->pkg_stack_231 = NULL;
F->cur_pkg_232 = NULL;
F->prefix_hint_233 = NULL;
F->call_want_234 = NULL;
F->pure_sym_235 = NULL;
F->pure_depth_236 = INT64_MIN;
F->pure_depth_236 = ((rt_int)0LL);
F->vrp_ok_237 = INT_MIN;
F->vrp_ok_237 = 0;
F->in_lv_path_238 = INT_MIN;
F->in_lv_path_238 = 0;
F->last_deref_239 = INT_MIN;
F->last_deref_239 = 0;
F->main_name_240 = NULL;
F->conf_system_241 = NULL;
F->conf_storage_unit_242 = INT64_MIN;
F->conf_storage_unit_242 = ((rt_int)8LL);
F->conf_memory_size_243 = INT64_MIN;
F->conf_memory_size_243 = ((rt_int)1048576LL);
F->conf_optimize_244 = NULL;
F->env_names_198 = f_mk_246(F, rt_g_lit("", 0));
F->out_types_129 = f_new_buffer_268(F);
F->out_frames_130 = f_new_buffer_268(F);
F->out_helpers_131 = f_new_buffer_268(F);
F->out_protos_132 = f_new_buffer_268(F);
F->out_globals_133 = f_new_buffer_268(F);
F->out_funcs_134 = f_new_buffer_268(F);
F->out_init_135 = f_new_buffer_268(F);
F->out_excs_136 = f_new_buffer_268(F);
F->code_137 = F->out_init_135;
F->no_cons_228 = f_new_cons_494(F);
F->ty_int_157 = f_new_typ_493(F, ((rt_int)1LL));
F->ty_bool_158 = f_new_typ_493(F, ((rt_int)2LL));
F->ty_float_159 = f_new_typ_493(F, ((rt_int)3LL));
F->ty_char_160 = f_new_typ_493(F, ((rt_int)11LL));
F->ty_string_161 = f_new_typ_493(F, ((rt_int)6LL));
(*(P123)rt_nil_check(F->ty_string_161)).name_ = f_mk_246(F, rt_g_lit("STRING", 6));
(*(P123)rt_nil_check(F->ty_string_161)).cname_ = f_mk_246(F, rt_g_lit("rt_gstr", 7));
(*(P123)rt_nil_check(F->ty_string_161)).dims_ = ((rt_int)1LL);
(*(P123)rt_nil_check(F->ty_string_161)).elem_ = F->ty_char_160;
(*(P123)rt_nil_check(F->ty_string_161)).tcons_ = f_new_cons_494(F);
(*(P179)rt_nil_check((*(P123)rt_nil_check(F->ty_string_161)).tcons_)).lo_ = f_mk_246(F, rt_g_lit("1", 1));
F->ty_void_162 = f_new_typ_493(F, ((rt_int)9LL));
F->ty_nil_163 = f_new_typ_493(F, ((rt_int)10LL));
F->ty_act_165 = f_new_typ_493(F, ((rt_int)13LL));
F->ty_tdecl_166 = f_new_typ_493(F, ((rt_int)14LL));
F->ty_entry_167 = f_new_typ_493(F, ((rt_int)15LL));
(*(P123)rt_nil_check(F->ty_int_157)).name_ = f_mk_246(F, rt_g_lit("INTEGER", 7));
(*(P123)rt_nil_check(F->ty_string_161)).idx_ = F->ty_int_157;
(*(P123)rt_nil_check(F->ty_string_161)).next_ = F->all_types_125;
F->all_types_125 = F->ty_string_161;
(*(P123)rt_nil_check(F->ty_float_159)).name_ = f_mk_246(F, rt_g_lit("FLOAT", 5));
(*(P123)rt_nil_check(F->ty_float_159)).ndigits_ = ((rt_int)15LL);
F->ty_short_168 = f_new_typ_493(F, ((rt_int)1LL));
(*(P123)rt_nil_check(F->ty_short_168)).name_ = f_mk_246(F, rt_g_lit("SHORT_INTEGER", 13));
F->ty_long_169 = f_new_typ_493(F, ((rt_int)1LL));
(*(P123)rt_nil_check(F->ty_long_169)).name_ = f_mk_246(F, rt_g_lit("LONG_INTEGER", 12));
F->ty_sfloat_170 = f_new_typ_493(F, ((rt_int)3LL));
(*(P123)rt_nil_check(F->ty_sfloat_170)).name_ = f_mk_246(F, rt_g_lit("SHORT_FLOAT", 11));
(*(P123)rt_nil_check(F->ty_sfloat_170)).ndigits_ = ((rt_int)6LL);
F->ty_lfloat_171 = f_new_typ_493(F, ((rt_int)3LL));
(*(P123)rt_nil_check(F->ty_lfloat_171)).name_ = f_mk_246(F, rt_g_lit("LONG_FLOAT", 10));
(*(P123)rt_nil_check(F->ty_lfloat_171)).ndigits_ = ((rt_int)15LL);
F->ty_time_172 = f_new_typ_493(F, ((rt_int)3LL));
(*(P123)rt_nil_check(F->ty_time_172)).name_ = f_mk_246(F, rt_g_lit("TIME", 4));
(*(P123)rt_nil_check(F->ty_time_172)).ndigits_ = ((rt_int)15LL);
F->ty_ufixed_173 = f_new_typ_493(F, ((rt_int)16LL));
(*(P123)rt_nil_check(F->ty_ufixed_173)).name_ = f_mk_246(F, rt_g_lit("universal fixed", 15));
F->out_awaits_227 = f_new_buffer_268(F);
f_predefine_1409(F);
f_prelude_1438(F);
f_add_token_284(F, ((rt_int)0LL), rt_g_lit("<end>", 5), ((rt_int)0LL));
f_compilation_434(F, &F->prelude_units_230);
F->ntoks_114 = ((rt_int)0LL);
F->tpos_115 = ((rt_int)1LL);
F->src_line_116 = ((rt_int)0LL);
f_read_source_317(F);
F->compiling_source_208 = 1;
f_compilation_434(F, &F->units_229);
F->compiling_source_208 = 0;
F->loaded_209 = f_mk_246(F, rt_g_lit(",", 1));
f_library_units_1431(F);
if ((F->units_229 == NULL)) {
f_fail_267(F, ((rt_int)1LL), rt_g_lit("the compilation is empty", 24));
}
f_translate_1447(F, F->units_229);
f_store_units_1421(F);
f_print_program_1450(F);
ret_:

  return;
}

static void as_A3468(A3468 *d, A3468 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A3468 cp_A3468(A3468 s) {
  A3468 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A3468(A3468 a, A3468 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A3468 and_A3468(A3468 a, A3468 b) { A3468 r = cp_A3468(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A3468 or_A3468(A3468 a, A3468 b) { A3468 r = cp_A3468(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A3468 xor_A3468(A3468 a, A3468 b) { A3468 r = cp_A3468(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A3468 not_A3468(A3468 a) { A3468 r = cp_A3468(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A3468 cat_A3468(A3468 a, A3468 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A3468 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A3468 one_A3468(int e) {
  A3468 r; r.lo = r.hi = ((rt_int)0LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A3465(A3465 *d, A3465 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A3465 cp_A3465(A3465 s) {
  A3465 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A3465(A3465 a, A3465 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A3465 cat_A3465(A3465 a, A3465 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A3465 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A3465 one_A3465(rt_int e) {
  A3465 r; r.lo = r.hi = ((rt_int)0LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2823(A2823 *d, A2823 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2823 cp_A2823(A2823 s) {
  A2823 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2823(A2823 a, A2823 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2823 cat_A2823(A2823 a, A2823 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2823 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2823 one_A2823(rt_int e) {
  A2823 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2820(A2820 *d, A2820 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2820 cp_A2820(A2820 s) {
  A2820 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2820(A2820 a, A2820 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2820 cat_A2820(A2820 a, A2820 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2820 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2820 one_A2820(rt_int e) {
  A2820 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A2815(A2815 *d, A2815 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2815 cp_A2815(A2815 s) {
  A2815 d = s; d.p = rt_alloc(sizeof(int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2815(A2815 a, A2815 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2815 and_A2815(A2815 a, A2815 b) { A2815 r = cp_A2815(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] && b.p[i]; return r; }
static A2815 or_A2815(A2815 a, A2815 b) { A2815 r = cp_A2815(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] || b.p[i]; return r; }
static A2815 xor_A2815(A2815 a, A2815 b) { A2815 r = cp_A2815(a); if (G_CNT(a) != G_CNT(b)) rt_raise_msg(RT_X_SUBTYPE, "array length"); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = a.p[i] != b.p[i]; return r; }
static A2815 not_A2815(A2815 a) { A2815 r = cp_A2815(a); for (rt_int i = 0; i < G_CNT(a); i++) r.p[i] = !a.p[i]; return r; }
static A2815 cat_A2815(A2815 a, A2815 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2815 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2815 one_A2815(int e) {
  A2815 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(int)); r.p[0] = e;
  return r;
}
static void as_A2486(A2486 *d, A2486 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A2486 cp_A2486(A2486 s) {
  A2486 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A2486(A2486 a, A2486 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A2486 cat_A2486(A2486 a, A2486 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A2486 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A2486 one_A2486(rt_int e) {
  A2486 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_R2150(R2150 *d, R2150 s) {
  d->disc_ = s.disc_;
  d->arm_ = s.arm_;
  d->variant_ = s.variant_;
  d->next_ = s.next_;
}
static R2150 cp_R2150(R2150 s) {
  R2150 d = s;
  d.disc_ = s.disc_;
  d.arm_ = s.arm_;
  d.variant_ = s.variant_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2150(R2150 a, R2150 b) {
  return 1 && (a.disc_ == b.disc_) && (a.arm_ == b.arm_) && (a.variant_ == b.variant_) && (a.next_ == b.next_);
}
static void as_R2116(R2116 *d, R2116 s) {
  d->name_ = s.name_;
  d->unit_ = s.unit_;
  d->first_bit_ = s.first_bit_;
  d->last_bit_ = s.last_bit_;
  d->next_ = s.next_;
}
static R2116 cp_R2116(R2116 s) {
  R2116 d = s;
  d.name_ = s.name_;
  d.unit_ = s.unit_;
  d.first_bit_ = s.first_bit_;
  d.last_bit_ = s.last_bit_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2116(R2116 a, R2116 b) {
  return 1 && (a.name_ == b.name_) && (a.unit_ == b.unit_) && (a.first_bit_ == b.first_bit_) && (a.last_bit_ == b.last_bit_) && (a.next_ == b.next_);
}
static void as_R2024(R2024 *d, R2024 s) {
  d->name_ = s.name_;
  d->v_ = s.v_;
  d->next_ = s.next_;
}
static R2024 cp_R2024(R2024 s) {
  R2024 d = s;
  d.name_ = s.name_;
  d.v_ = s.v_;
  d.next_ = s.next_;
  return d;
}
static int eq_R2024(R2024 a, R2024 b) {
  return 1 && (a.name_ == b.name_) && (a.v_ == b.v_) && (a.next_ == b.next_);
}
static void as_R2020(R2020 *d, R2020 s) {
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
static R2020 cp_R2020(R2020 s) {
  R2020 d = s;
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
static int eq_R2020(R2020 a, R2020 b) {
  return 1 && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.next_ == b.next_) && (a.dflt_ == b.dflt_) && (a.is_const_ == b.is_const_) && (a.is_discr_ == b.is_discr_) && (a.dsym_ == b.dsym_) && (a.guard_ == b.guard_) && (a.cond_ == b.cond_) && (a.dyn_ == b.dyn_);
}
static void as_R2002(R2002 *d, R2002 s) {
  d->name_ = s.name_;
  d->mode_ = s.mode_;
  d->t_ = s.t_;
  d->c_ = s.c_;
  d->cfield_ = s.cfield_;
  d->dflt_ = s.dflt_;
  d->next_ = s.next_;
  d->dsym_ = s.dsym_;
}
static R2002 cp_R2002(R2002 s) {
  R2002 d = s;
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
static int eq_R2002(R2002 a, R2002 b) {
  return 1 && (a.name_ == b.name_) && (a.mode_ == b.mode_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.cfield_ == b.cfield_) && (a.dflt_ == b.dflt_) && (a.next_ == b.next_) && (a.dsym_ == b.dsym_);
}
static void as_R222(R222 *d, R222 s) {
  d->y_ = s.y_;
  d->name_ = s.name_;
  d->depth_ = s.depth_;
  d->e_ = s.e_;
  d->next_ = s.next_;
}
static R222 cp_R222(R222 s) {
  R222 d = s;
  d.y_ = s.y_;
  d.name_ = s.name_;
  d.depth_ = s.depth_;
  d.e_ = s.e_;
  d.next_ = s.next_;
  return d;
}
static int eq_R222(R222 a, R222 b) {
  return 1 && (a.y_ == b.y_) && (a.name_ == b.name_) && (a.depth_ == b.depth_) && (a.e_ == b.e_) && (a.next_ == b.next_);
}
static void as_R219(R219 *d, R219 s) {
  d->t_ = s.t_;
  d->packed_ = s.packed_;
  d->bits_ = s.bits_;
  d->codes_ = s.codes_;
  d->max_code_ = s.max_code_;
  d->has_layout_ = s.has_layout_;
  d->layout_ = s.layout_;
  d->layout_bits_ = s.layout_bits_;
  d->coll_ = s.coll_;
  d->next_ = s.next_;
}
static R219 cp_R219(R219 s) {
  R219 d = s;
  d.t_ = s.t_;
  d.packed_ = s.packed_;
  d.bits_ = s.bits_;
  d.codes_ = s.codes_;
  d.max_code_ = s.max_code_;
  d.has_layout_ = s.has_layout_;
  d.layout_ = s.layout_;
  d.layout_bits_ = s.layout_bits_;
  d.coll_ = s.coll_;
  d.next_ = s.next_;
  return d;
}
static int eq_R219(R219 a, R219 b) {
  return 1 && (a.t_ == b.t_) && (a.packed_ == b.packed_) && (a.bits_ == b.bits_) && (a.codes_ == b.codes_) && (a.max_code_ == b.max_code_) && (a.has_layout_ == b.has_layout_) && (a.layout_ == b.layout_) && (a.layout_bits_ == b.layout_bits_) && (a.coll_ == b.coll_) && (a.next_ == b.next_);
}
static void as_R206(R206 *d, R206 s) {
  d->u_ = s.u_;
  d->first_ = s.first_;
  d->last_ = s.last_;
  d->env_ = s.env_;
  d->next_ = s.next_;
}
static R206 cp_R206(R206 s) {
  R206 d = s;
  d.u_ = s.u_;
  d.first_ = s.first_;
  d.last_ = s.last_;
  d.env_ = s.env_;
  d.next_ = s.next_;
  return d;
}
static int eq_R206(R206 a, R206 b) {
  return 1 && (a.u_ == b.u_) && (a.first_ == b.first_) && (a.last_ == b.last_) && (a.env_ == b.env_) && (a.next_ == b.next_);
}
static void as_A203(A203 *d, A203 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A203 cp_A203(A203 s) {
  A203 d = s; d.p = rt_alloc(sizeof(P141) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A203(A203 a, A203 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A203 cat_A203(A203 a, A203 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A203 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P141) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A203 one_A203(P141 e) {
  A203 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P141)); r.p[0] = e;
  return r;
}
static void as_R200(R200 *d, R200 s) {
  d->limit_ = s.limit_;
  d->keep_ = s.keep_;
  d->allowed_ = s.allowed_;
  d->next_ = s.next_;
}
static R200 cp_R200(R200 s) {
  R200 d = s;
  d.limit_ = s.limit_;
  d.keep_ = s.keep_;
  d.allowed_ = s.allowed_;
  d.next_ = s.next_;
  return d;
}
static int eq_R200(R200 a, R200 b) {
  return 1 && (a.limit_ == b.limit_) && (a.keep_ == b.keep_) && (a.allowed_ == b.allowed_) && (a.next_ == b.next_);
}
static void as_R191(R191 *d, R191 s) {
  d->name_ = s.name_;
  d->cname_ = s.cname_;
  d->path_ = s.path_;
  d->frames_ = s.frames_;
  d->line_ = s.line_;
  d->next_ = s.next_;
}
static R191 cp_R191(R191 s) {
  R191 d = s;
  d.name_ = s.name_;
  d.cname_ = s.cname_;
  d.path_ = s.path_;
  d.frames_ = s.frames_;
  d.line_ = s.line_;
  d.next_ = s.next_;
  return d;
}
static int eq_R191(R191 a, R191 b) {
  return 1 && (a.name_ == b.name_) && (a.cname_ == b.cname_) && (a.path_ == b.path_) && (a.frames_ == b.frames_) && (a.line_ == b.line_) && (a.next_ == b.next_);
}
static void as_A186(A186 *d, A186 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A186 cp_A186(A186 s) {
  A186 d = s; d.p = rt_alloc(sizeof(rt_int) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A186(A186 a, A186 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A186 cat_A186(A186 a, A186 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A186 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A186 one_A186(rt_int e) {
  A186 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(rt_int)); r.p[0] = e;
  return r;
}
static void as_A184(A184 *d, A184 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A184 cp_A184(A184 s) {
  A184 d = s; d.p = rt_alloc(sizeof(P141) * (size_t)G_CNT(s));
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
  r.p = rt_alloc(sizeof(P141) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A184 one_A184(P141 e) {
  A184 r; r.lo = r.hi = ((rt_int)1LL); r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P141)); r.p[0] = e;
  return r;
}
static void as_R180(R180 *d, R180 s) {
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
static R180 cp_R180(R180 s) {
  R180 d = s;
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
static int eq_R180(R180 a, R180 b) {
  return 1 && (a.lo_ == b.lo_) && (a.hi_ == b.hi_) && (a.slen_ == b.slen_) && (a.mlo_ == b.mlo_) && (a.mhi_ == b.mhi_) && (a.hasm_ == b.hasm_) && (a.lo2_ == b.lo2_) && (a.hi2_ == b.hi2_) && (a.acc_ == b.acc_) && (a.inner_ == b.inner_) && (a.dv_ == b.dv_);
}
static void as_R176(R176 *d, R176 s) {
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
static R176 cp_R176(R176 s) {
  R176 d = s;
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
static int eq_R176(R176 a, R176 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.flag_ == b.flag_) && (a.name_ == b.name_) && (a.tag_ == b.tag_) && (a.a_ == b.a_) && (a.b_ == b.b_) && (a.c_ == b.c_) && (a.d_ == b.d_) && (a.e_ == b.e_) && (a.next_ == b.next_) && (a.formal_ == b.formal_);
}
static void as_R153(R153 *d, R153 s) {
  d->s_ = s.s_;
  d->next_ = s.next_;
}
static R153 cp_R153(R153 s) {
  R153 d = s;
  d.s_ = s.s_;
  d.next_ = s.next_;
  return d;
}
static int eq_R153(R153 a, R153 b) {
  return 1 && (a.s_ == b.s_) && (a.next_ == b.next_);
}
static void as_R148(R148 *d, R148 s) {
  d->body_node_ = s.body_node_;
  d->visible_ = s.visible_;
  d->next_ = s.next_;
}
static R148 cp_R148(R148 s) {
  R148 d = s;
  d.body_node_ = s.body_node_;
  d.visible_ = s.visible_;
  d.next_ = s.next_;
  return d;
}
static int eq_R148(R148 a, R148 b) {
  return 1 && (a.body_node_ == b.body_node_) && (a.visible_ == b.visible_) && (a.next_ == b.next_);
}
static void as_R145(R145 *d, R145 s) {
  d->match_ = s.match_;
  d->label_ = s.label_;
  d->depth_ = s.depth_;
  d->is_loop_ = s.is_loop_;
  d->next_ = s.next_;
}
static R145 cp_R145(R145 s) {
  R145 d = s;
  d.match_ = s.match_;
  d.label_ = s.label_;
  d.depth_ = s.depth_;
  d.is_loop_ = s.is_loop_;
  d.next_ = s.next_;
  return d;
}
static int eq_R145(R145 a, R145 b) {
  return 1 && (a.match_ == b.match_) && (a.label_ == b.label_) && (a.depth_ == b.depth_) && (a.is_loop_ == b.is_loop_) && (a.next_ == b.next_);
}
static void as_R128(R128 *d, R128 s) {
  d->head_ = s.head_;
  d->tail_ = s.tail_;
}
static R128 cp_R128(R128 s) {
  R128 d = s;
  d.head_ = s.head_;
  d.tail_ = s.tail_;
  return d;
}
static int eq_R128(R128 a, R128 b) {
  return 1 && (a.head_ == b.head_) && (a.tail_ == b.tail_);
}
static void as_R124(R124 *d, R124 s) {
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
static R124 cp_R124(R124 s) {
  R124 d = s;
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
static int eq_R124(R124 a, R124 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.lits_ == b.lits_) && (a.elem_ == b.elem_) && (a.idx_ == b.idx_) && (a.elemcons_ == b.elemcons_) && (a.tcons_ == b.tcons_) && (a.fields_ == b.fields_) && (a.target_ == b.target_) && (a.decl_ == b.decl_) && (a.cname_ == b.cname_) && (a.forward_ == b.forward_) && (a.defined_ == b.defined_) && (a.priv_ == b.priv_) && (a.next_ == b.next_) && (a.idx2_ == b.idx2_) && (a.littab_ == b.littab_) && (a.parent_ == b.parent_) && (a.ndigits_ == b.ndigits_) && (a.fdelta_ == b.fdelta_) && (a.fsmall_ == b.fsmall_) && (a.dims_ == b.dims_) && (a.is_restricted_ == b.is_restricted_) && (a.view_of_ == b.view_of_);
}
static void as_R119(R119 *d, R119 s) {
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
static R119 cp_R119(R119 s) {
  R119 d = s;
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
static int eq_R119(R119 a, R119 b) {
  return 1 && (a.kind_ == b.kind_) && (a.name_ == b.name_) && (a.t_ == b.t_) && (a.c_ == b.c_) && (a.access_path_ == b.access_path_) && (a.cname_ == b.cname_) && (a.ro_ == b.ro_) && (a.mvalue_ == b.mvalue_) && (a.hasmv_ == b.hasmv_) && (a.decl_ == b.decl_) && (a.params_ == b.params_) && (a.result_ == b.result_) && (a.depth_ == b.depth_) && (a.level_ == b.level_) && (a.byref_ == b.byref_) && (a.vrp_ == b.vrp_) && (a.hidden_ == b.hidden_) && (a.from_use_ == b.from_use_) && (a.members_ == b.members_) && (a.mnext_ == b.mnext_) && (a.chain_ == b.chain_) && (a.stack_ == b.stack_) && (a.flags_ == b.flags_);
}
static void as_A117(A117 *d, A117 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A117 cp_A117(A117 s) {
  A117 d = s; d.p = rt_alloc(sizeof(P118) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A117(A117 a, A117 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A117 cat_A117(A117 a, A117 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A117 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P118) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A117 one_A117(P118 e) {
  A117 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P118)); r.p[0] = e;
  return r;
}
static void as_R112(R112 *d, R112 s) {
  d->kind_ = s.kind_;
  d->line_ = s.line_;
  d->ival_ = s.ival_;
  d->s_ = s.s_;
}
static R112 cp_R112(R112 s) {
  R112 d = s;
  d.kind_ = s.kind_;
  d.line_ = s.line_;
  d.ival_ = s.ival_;
  d.s_ = s.s_;
  return d;
}
static int eq_R112(R112 a, R112 b) {
  return 1 && (a.kind_ == b.kind_) && (a.line_ == b.line_) && (a.ival_ == b.ival_) && (a.s_ == b.s_);
}
static void as_A110(A110 *d, A110 s) {
  rt_int n = G_CNT(s);
  if (G_CNT(*d) != n) rt_raise_msg(RT_X_SUBTYPE, "array length");
  if (d->p != s.p && n > 0 && d->p < s.p + n && s.p < d->p + n) rt_g_overlap();
  for (rt_int i = 0; i < n; i++) { d->p[i] = s.p[i]; }
}
static A110 cp_A110(A110 s) {
  A110 d = s; d.p = rt_alloc(sizeof(P111) * (size_t)G_CNT(s));
  for (rt_int i = 0; i < G_CNT(s); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A110(A110 a, A110 b) {
  if (G_CNT(a) != G_CNT(b)) return 0;
  for (rt_int i = 0; i < G_CNT(a); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static A110 cat_A110(A110 a, A110 b) {
  rt_int na = G_CNT(a), nb = G_CNT(b);
  A110 r = na > 0 ? a : b;
  if (na == 0 && nb == 0) return a;
  r.hi = r.lo + na + nb - 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P111) * (size_t)(na + nb));
  for (rt_int i = 0; i < na; i++) r.p[i] = a.p[i];
  for (rt_int i = 0; i < nb; i++) r.p[na + i] = b.p[i];
  return r;
}
static A110 one_A110(P111 e) {
  A110 r; r.lo = r.hi = 1; r.lo2 = r.hi2 = 1;
  r.p = rt_alloc(sizeof(P111)); r.p[0] = e;
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
  ex_compile_error_109 = rt_exc("COMPILE_ERROR");
  f_greenc_1();
  rt_main_done();
  return 0;
}
